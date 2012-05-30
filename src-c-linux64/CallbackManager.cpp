/* DO NOT EDIT - AUTOGENERATED */
/**
 * 				NativeBass Project
 *
 * Want to use BASS (www.un4seen.com) in the Java language ? NativeBass is made for you.
 * Copyright � 2007-2011 J�r�me JOUVIE
 *
 * Created on 02 jul. 2007
 * @version file v1.1.1
 * @author J�r�me JOUVIE (Jouvieje)
 * @site   http://jerome.jouvie.free.fr/
 * @mail   jerome.jouvie@gmail.com
 * 
 * 
 * INTRODUCTION
 * BASS is an audio library for use in Windows and Mac OSX software.
 * Its purpose is to provide developers with the most powerful and
 * efficient (yet easy to use), sample, stream (MP3, MP2, MP1, OGG, WAV, AIFF,
 * custom generated, and more via add-ons), MOD music (XM, IT, S3M, MOD, MTM, UMX),
 * MO3 music (MP3/OGG compressed MODs),
 * and recording functions. All in a tiny DLL, under 100KB* in size.
 * 
 * BASS official web site :
 * 		http://www.un4seen.com/
 * 
 * 
 * GNU LESSER GENERAL PUBLIC LICENSE
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1 of the License,
 * or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, write to the
 * Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307 USA 
 */

#include "NativeBass.h"
#include "bass.h"
#include "bassenc.h"
#include "bassflac.h"
#include "bassmidi.h"
#include "bassmix.h"
#include "basswv.h"
#include "bass_aac.h"
#include "bass_ac3.h"
#include "bass_alac.h"
#include "bass_fx.h"
#include "bass_mpc.h"
#include "bass_spx.h"
#include "Utils.h"
#include "Pointer.h"
#include "JavaObject.h"
#include "malloc.h"
#include "CallbackManager.h"

jclass byteBufferClass = 0;
jclass getByteBufferClass(JNIEnv *java_env) {
	if(!byteBufferClass) {
		byteBufferClass = (jclass)java_env->NewGlobalRef(java_env->FindClass("java/nio/ByteBuffer"));
	}
	return byteBufferClass;
}

jclass caller = 0;
jboolean connectCaller(JNIEnv *java_env) {
	caller = (jclass)java_env->NewGlobalRef(java_env->FindClass("jouvieje/bass/callbacks/CallbackBridge"));
	if(java_env->ExceptionCheck()) {
		java_env->ExceptionDescribe();
		java_env->ExceptionClear();
		caller = 0;
	}
	return (jboolean)(caller != 0);
}

jmethodID callbackId[17];
jboolean connectCallbacks(JNIEnv *java_env) {
	static struct {
		const char *name;
		const char *signature;
	}callbacks[17] = {
		{"BPMBEATPROC_BRIDGE", "(IDJ)V"},
		{"BPMPROC_BRIDGE", "(IFJ)V"},
		{"BPMPROCESSPROC_BRIDGE", "(IF)V"},
		{"DOWNLOADPROC_BRIDGE", "(Ljava/nio/ByteBuffer;IJ)V"},
		{"DSPPROC_BRIDGE", "(JILjava/nio/ByteBuffer;IJ)V"},
		{"ENCODECLIENTPROC_BRIDGE", "(JZLjava/lang/String;Ljava/lang/String;J)Z"},
		{"ENCODENOTIFYPROC_BRIDGE", "(JIJ)V"},
		{"ENCODEPROC_BRIDGE", "(JIJIJ)V"},
		{"ENCODEPROCEX_BRIDGE", "(JIJIJJ)V"},
		{"FILECLOSEPROC_BRIDGE", "(J)V"},
		{"FILELENPROC_BRIDGE", "(J)J"},
		{"FILEREADPROC_BRIDGE", "(JIJ)I"},
		{"FILESEEKPROC_BRIDGE", "(JJ)Z"},
		{"MIDIINPROC_BRIDGE", "(IDJIJ)V"},
		{"RECORDPROC_BRIDGE", "(JLjava/nio/ByteBuffer;IJ)Z"},
		{"STREAMPROC_BRIDGE", "(JLjava/nio/ByteBuffer;IJ)I"},
		{"SYNCPROC_BRIDGE", "(JIIJ)V"}
	};

	for(int i = 0; i < 17; i++) {
		callbackId[i] = java_env->GetStaticMethodID(caller, callbacks[i].name, callbacks[i].signature);
		if(java_env->ExceptionCheck()) {
			java_env->ExceptionDescribe();
			java_env->ExceptionClear();
			return (jboolean)false;
		}
	}
	return (jboolean)true;
}

JavaVM *jvm;
jboolean attachJavaVM(JNIEnv *java_env) {
	java_env->GetJavaVM(&jvm);
	if(!connectCaller(java_env)) {
		return (jboolean)false;
	}
	return connectCallbacks(java_env);
}
bool acquire_jenv(JNIEnv **java_env) {
	if(jvm->GetEnv((void **)java_env, JNI_VERSION_1_4) != JNI_OK) {
		jvm->AttachCurrentThread((void **)java_env, 0);
		return true;
	}
	return false;
}
void leave_jenv(bool attached) {
	if(attached) {
		jvm->DetachCurrentThread();
	}
}

void CALLBACK BPMBEATPROC_BRIDGE(DWORD chan, double beatpos, void * user) {
	JNIEnv *java_env/* = 0*/;
	bool attached = acquire_jenv(&java_env);
	N2J_PTR2ADR(juser, user, void *);
	java_env->CallStaticVoidMethod(caller, callbackId[0], (jint)chan, (jdouble)beatpos, juser);
	leave_jenv(attached);
}

void CALLBACK BPMPROC_BRIDGE(DWORD chan, float bpm, void * user) {
	JNIEnv *java_env/* = 0*/;
	bool attached = acquire_jenv(&java_env);
	N2J_PTR2ADR(juser, user, void *);
	java_env->CallStaticVoidMethod(caller, callbackId[1], (jint)chan, (jfloat)bpm, juser);
	leave_jenv(attached);
}

void CALLBACK BPMPROCESSPROC_BRIDGE(DWORD chan, float percent) {
	JNIEnv *java_env/* = 0*/;
	bool attached = acquire_jenv(&java_env);
	java_env->CallStaticVoidMethod(caller, callbackId[2], (jint)chan, (jfloat)percent);
	leave_jenv(attached);
}

void CALLBACK DOWNLOADPROC_BRIDGE(const void * buffer, DWORD length, void * user) {
	JNIEnv *java_env/* = 0*/;
	bool attached = acquire_jenv(&java_env);
	jobject jbuffer = 0;
	if(buffer) {
		jbuffer = java_env->NewDirectByteBuffer((void *)buffer, length);
	}
	N2J_PTR2ADR(juser, user, void *);
	java_env->CallStaticVoidMethod(caller, callbackId[3], jbuffer, (jint)length, juser);
	leave_jenv(attached);
}

void CALLBACK DSPPROC_BRIDGE(HDSP handle, DWORD channel, void * buffer, DWORD length, void * user) {
	JNIEnv *java_env/* = 0*/;
	bool attached = acquire_jenv(&java_env);
	jlong jhandle = N2J_CAST(handle, jlong);
	jobject jbuffer = 0;
	if(buffer) {
		jbuffer = java_env->NewDirectByteBuffer((void *)buffer, length);
	}
	N2J_PTR2ADR(juser, user, void *);
	java_env->CallStaticVoidMethod(caller, callbackId[4], jhandle, (jint)channel, jbuffer, (jint)length, juser);
	leave_jenv(attached);
}

BOOL CALLBACK ENCODECLIENTPROC_BRIDGE(HENCODE handle, BOOL connect, const char * client, char * headers, void * user) {
	JNIEnv *java_env/* = 0*/;
	bool attached = acquire_jenv(&java_env);
	jlong jhandle = N2J_CAST(handle, jlong);
	jstring jclient = 0;
	if(client) {
		jclient = java_env->NewStringUTF((const char *)client);
	}
	jstring jheaders = 0;
	if(headers) {
		jheaders = java_env->NewStringUTF((const char *)headers);
	}
	N2J_PTR2ADR(juser, user, void *);
	jboolean result_ = java_env->CallStaticBooleanMethod(caller, callbackId[5], jhandle, (jboolean)connect, jclient, jheaders, juser);
	leave_jenv(attached);
	return (BOOL)result_;
}

void CALLBACK ENCODENOTIFYPROC_BRIDGE(HENCODE handle, DWORD status, void * user) {
	JNIEnv *java_env/* = 0*/;
	bool attached = acquire_jenv(&java_env);
	jlong jhandle = N2J_CAST(handle, jlong);
	N2J_PTR2ADR(juser, user, void *);
	java_env->CallStaticVoidMethod(caller, callbackId[6], jhandle, (jint)status, juser);
	leave_jenv(attached);
}

void CALLBACK ENCODEPROC_BRIDGE(HENCODE handle, DWORD channel, const void * buffer, DWORD length, void * user) {
	JNIEnv *java_env/* = 0*/;
	bool attached = acquire_jenv(&java_env);
	jlong jhandle = N2J_CAST(handle, jlong);
	N2J_PTR2ADR(jbuffer, buffer, const void *);
	N2J_PTR2ADR(juser, user, void *);
	java_env->CallStaticVoidMethod(caller, callbackId[7], jhandle, (jint)channel, jbuffer, (jint)length, juser);
	leave_jenv(attached);
}

void CALLBACK ENCODEPROCEX_BRIDGE(HENCODE handle, DWORD channel, const void * buffer, DWORD length, QWORD offset, void * user) {
	JNIEnv *java_env/* = 0*/;
	bool attached = acquire_jenv(&java_env);
	jlong jhandle = N2J_CAST(handle, jlong);
	N2J_PTR2ADR(jbuffer, buffer, const void *);
	N2J_PTR2ADR(juser, user, void *);
	java_env->CallStaticVoidMethod(caller, callbackId[8], jhandle, (jint)channel, jbuffer, (jint)length, (jlong)offset, juser);
	leave_jenv(attached);
}

void CALLBACK FILECLOSEPROC_BRIDGE(void * user) {
	JNIEnv *java_env/* = 0*/;
	bool attached = acquire_jenv(&java_env);
	N2J_PTR2ADR(juser, user, void *);
	java_env->CallStaticVoidMethod(caller, callbackId[9], juser);
	leave_jenv(attached);
}

QWORD CALLBACK FILELENPROC_BRIDGE(void * user) {
	JNIEnv *java_env/* = 0*/;
	bool attached = acquire_jenv(&java_env);
	N2J_PTR2ADR(juser, user, void *);
	jlong result_ = java_env->CallStaticLongMethod(caller, callbackId[10], juser);
	leave_jenv(attached);
	return (QWORD)result_;
}

DWORD CALLBACK FILEREADPROC_BRIDGE(void * buffer, DWORD length, void * user) {
	JNIEnv *java_env/* = 0*/;
	bool attached = acquire_jenv(&java_env);
	N2J_PTR2ADR(jbuffer, buffer, void *);
	N2J_PTR2ADR(juser, user, void *);
	jint result_ = java_env->CallStaticIntMethod(caller, callbackId[11], jbuffer, (jint)length, juser);
	leave_jenv(attached);
	return (DWORD)result_;
}

BOOL CALLBACK FILESEEKPROC_BRIDGE(QWORD offset, void * user) {
	JNIEnv *java_env/* = 0*/;
	bool attached = acquire_jenv(&java_env);
	N2J_PTR2ADR(juser, user, void *);
	jboolean result_ = java_env->CallStaticBooleanMethod(caller, callbackId[12], (jlong)offset, juser);
	leave_jenv(attached);
	return (BOOL)result_;
}

void CALLBACK MIDIINPROC_BRIDGE(DWORD device, double time, const void * buffer, DWORD length, void * user) {
	JNIEnv *java_env/* = 0*/;
	bool attached = acquire_jenv(&java_env);
	N2J_PTR2ADR(jbuffer, buffer, const void *);
	N2J_PTR2ADR(juser, user, void *);
	java_env->CallStaticVoidMethod(caller, callbackId[13], (jint)device, (jdouble)time, jbuffer, (jint)length, juser);
	leave_jenv(attached);
}

BOOL CALLBACK RECORDPROC_BRIDGE(HRECORD handle, const void * buffer, DWORD length, void * user) {
	JNIEnv *java_env/* = 0*/;
	bool attached = acquire_jenv(&java_env);
	jlong jhandle = N2J_CAST(handle, jlong);
	jobject jbuffer = 0;
	if(buffer) {
		jbuffer = java_env->NewDirectByteBuffer((void *)buffer, length);
	}
	N2J_PTR2ADR(juser, user, void *);
	jboolean result_ = java_env->CallStaticBooleanMethod(caller, callbackId[14], jhandle, jbuffer, (jint)length, juser);
	leave_jenv(attached);
	return (BOOL)result_;
}

DWORD CALLBACK STREAMPROC_BRIDGE(HSTREAM handle, void * buffer, DWORD length, void * user) {
	JNIEnv *java_env/* = 0*/;
	bool attached = acquire_jenv(&java_env);
	jlong jhandle = N2J_CAST(handle, jlong);
	jobject jbuffer = 0;
	if(buffer) {
		jbuffer = java_env->NewDirectByteBuffer((void *)buffer, length);
	}
	N2J_PTR2ADR(juser, user, void *);
	jint result_ = java_env->CallStaticIntMethod(caller, callbackId[15], jhandle, jbuffer, (jint)length, juser);
	leave_jenv(attached);
	return (DWORD)result_;
}

void CALLBACK SYNCPROC_BRIDGE(HSYNC handle, DWORD channel, DWORD data, void * user) {
	JNIEnv *java_env/* = 0*/;
	bool attached = acquire_jenv(&java_env);
	jlong jhandle = N2J_CAST(handle, jlong);
	N2J_PTR2ADR(juser, user, void *);
	java_env->CallStaticVoidMethod(caller, callbackId[16], jhandle, (jint)channel, (jint)data, juser);
	leave_jenv(attached);
}

