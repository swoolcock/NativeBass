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
#include "jouvieje_bass_structures_StructureJNI.h"
#include "CallbackManager.h"

JNIEXPORT jlong JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1new(JNIEnv *java_env, jclass jcls) {
	TAG_ID3 *result_ = new TAG_ID3();
	CheckAllocation(java_env, result_);
	N2J_PTR2ADR(jresult, result_, TAG_ID3 *);
	return jresult;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1delete(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	delete pointer;
}

JNIEXPORT jchar JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1get_1id_1element(JNIEnv *java_env, jclass jcls, jlong jpointer, jint elementIndex) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	char result_ = pointer->id[elementIndex];
	return (jchar)result_;
}

JNIEXPORT jstring JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1get_1id(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	char *result_ = (char *)pointer->id;
	jstring jresult = 0;
	if(result_) {
		jresult = java_env->NewStringUTF((const char *)result_);
	}
	return jresult;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1set_1id(JNIEnv *java_env, jclass jcls, jlong jpointer, jint elementIndex, jchar jid) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	char id = (char)jid;
	pointer->id[elementIndex] = id;
}

JNIEXPORT jchar JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1get_1title_1element(JNIEnv *java_env, jclass jcls, jlong jpointer, jint elementIndex) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	char result_ = pointer->title[elementIndex];
	return (jchar)result_;
}

JNIEXPORT jstring JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1get_1title(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	char *result_ = (char *)pointer->title;
	jstring jresult = 0;
	if(result_) {
		jresult = java_env->NewStringUTF((const char *)result_);
	}
	return jresult;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1set_1title(JNIEnv *java_env, jclass jcls, jlong jpointer, jint elementIndex, jchar jtitle) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	char title = (char)jtitle;
	pointer->title[elementIndex] = title;
}

JNIEXPORT jchar JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1get_1artist_1element(JNIEnv *java_env, jclass jcls, jlong jpointer, jint elementIndex) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	char result_ = pointer->artist[elementIndex];
	return (jchar)result_;
}

JNIEXPORT jstring JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1get_1artist(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	char *result_ = (char *)pointer->artist;
	jstring jresult = 0;
	if(result_) {
		jresult = java_env->NewStringUTF((const char *)result_);
	}
	return jresult;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1set_1artist(JNIEnv *java_env, jclass jcls, jlong jpointer, jint elementIndex, jchar jartist) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	char artist = (char)jartist;
	pointer->artist[elementIndex] = artist;
}

JNIEXPORT jchar JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1get_1album_1element(JNIEnv *java_env, jclass jcls, jlong jpointer, jint elementIndex) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	char result_ = pointer->album[elementIndex];
	return (jchar)result_;
}

JNIEXPORT jstring JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1get_1album(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	char *result_ = (char *)pointer->album;
	jstring jresult = 0;
	if(result_) {
		jresult = java_env->NewStringUTF((const char *)result_);
	}
	return jresult;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1set_1album(JNIEnv *java_env, jclass jcls, jlong jpointer, jint elementIndex, jchar jalbum) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	char album = (char)jalbum;
	pointer->album[elementIndex] = album;
}

JNIEXPORT jchar JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1get_1year_1element(JNIEnv *java_env, jclass jcls, jlong jpointer, jint elementIndex) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	char result_ = pointer->year[elementIndex];
	return (jchar)result_;
}

JNIEXPORT jstring JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1get_1year(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	char *result_ = (char *)pointer->year;
	jstring jresult = 0;
	if(result_) {
		jresult = java_env->NewStringUTF((const char *)result_);
	}
	return jresult;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1set_1year(JNIEnv *java_env, jclass jcls, jlong jpointer, jint elementIndex, jchar jyear) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	char year = (char)jyear;
	pointer->year[elementIndex] = year;
}

JNIEXPORT jchar JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1get_1comment_1element(JNIEnv *java_env, jclass jcls, jlong jpointer, jint elementIndex) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	char result_ = pointer->comment[elementIndex];
	return (jchar)result_;
}

JNIEXPORT jstring JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1get_1comment(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	char *result_ = (char *)pointer->comment;
	jstring jresult = 0;
	if(result_) {
		jresult = java_env->NewStringUTF((const char *)result_);
	}
	return jresult;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1set_1comment(JNIEnv *java_env, jclass jcls, jlong jpointer, jint elementIndex, jchar jcomment) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	char comment = (char)jcomment;
	pointer->comment[elementIndex] = comment;
}

JNIEXPORT jbyte JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1get_1genre(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	BYTE result_ = pointer->genre;
	return (jbyte)result_;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_TAG_1ID3_1set_1genre(JNIEnv *java_env, jclass jcls, jlong jpointer, jbyte jgenre) {
	TAG_ID3 *pointer = N2J_CAST(jpointer, TAG_ID3 *);
	BYTE genre = (BYTE)jgenre;
	pointer->genre = genre;
}


