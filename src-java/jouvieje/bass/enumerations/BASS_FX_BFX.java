/* DO NOT EDIT - AUTOGENERATED */
/**
 * 				NativeBass Project
 *
 * Want to use BASS (www.un4seen.com) in the Java language ? NativeBass is made for you.
 * Copyright @ 2007-2011 Jérôme Jouvie
 *
 * Created on 02 jul. 2007
 * @version file v1.1.1
 * @author Jérôme Jouvie (Jouvieje)
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

package jouvieje.bass.enumerations;

import jouvieje.bass.*;
import jouvieje.bass.exceptions.*;
import jouvieje.bass.callbacks.*;
import jouvieje.bass.*;
import jouvieje.bass.defines.*;
import jouvieje.bass.enumerations.*;
import jouvieje.bass.structures.*;
import java.nio.*;
import jouvieje.bass.*;
import jouvieje.bass.enumerations.*;
import jouvieje.bass.structures.*;
import jouvieje.bass.utils.*;
import java.util.HashMap;

/**
 * DSP effects [NAME] BASS_FX_BFX
 */
public class BASS_FX_BFX implements Enumeration, Comparable {
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_ROTATE = new BASS_FX_BFX("BASS_FX_BFX_ROTATE", 0x10000);
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_ECHO = new BASS_FX_BFX("BASS_FX_BFX_ECHO", EnumerationJNI.get_BASS_FX_BFX_ECHO());
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_FLANGER = new BASS_FX_BFX("BASS_FX_BFX_FLANGER", EnumerationJNI.get_BASS_FX_BFX_FLANGER());
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_VOLUME = new BASS_FX_BFX("BASS_FX_BFX_VOLUME", EnumerationJNI.get_BASS_FX_BFX_VOLUME());
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_PEAKEQ = new BASS_FX_BFX("BASS_FX_BFX_PEAKEQ", EnumerationJNI.get_BASS_FX_BFX_PEAKEQ());
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_REVERB = new BASS_FX_BFX("BASS_FX_BFX_REVERB", EnumerationJNI.get_BASS_FX_BFX_REVERB());
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_LPF = new BASS_FX_BFX("BASS_FX_BFX_LPF", EnumerationJNI.get_BASS_FX_BFX_LPF());
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_MIX = new BASS_FX_BFX("BASS_FX_BFX_MIX", EnumerationJNI.get_BASS_FX_BFX_MIX());
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_DAMP = new BASS_FX_BFX("BASS_FX_BFX_DAMP", EnumerationJNI.get_BASS_FX_BFX_DAMP());
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_AUTOWAH = new BASS_FX_BFX("BASS_FX_BFX_AUTOWAH", EnumerationJNI.get_BASS_FX_BFX_AUTOWAH());
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_ECHO2 = new BASS_FX_BFX("BASS_FX_BFX_ECHO2", EnumerationJNI.get_BASS_FX_BFX_ECHO2());
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_PHASER = new BASS_FX_BFX("BASS_FX_BFX_PHASER", EnumerationJNI.get_BASS_FX_BFX_PHASER());
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_ECHO3 = new BASS_FX_BFX("BASS_FX_BFX_ECHO3", EnumerationJNI.get_BASS_FX_BFX_ECHO3());
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_CHORUS = new BASS_FX_BFX("BASS_FX_BFX_CHORUS", EnumerationJNI.get_BASS_FX_BFX_CHORUS());
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_APF = new BASS_FX_BFX("BASS_FX_BFX_APF", EnumerationJNI.get_BASS_FX_BFX_APF());
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_COMPRESSOR = new BASS_FX_BFX("BASS_FX_BFX_COMPRESSOR", EnumerationJNI.get_BASS_FX_BFX_COMPRESSOR());
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_DISTORTION = new BASS_FX_BFX("BASS_FX_BFX_DISTORTION", EnumerationJNI.get_BASS_FX_BFX_DISTORTION());
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_COMPRESSOR2 = new BASS_FX_BFX("BASS_FX_BFX_COMPRESSOR2", EnumerationJNI.get_BASS_FX_BFX_COMPRESSOR2());
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_VOLUME_ENV = new BASS_FX_BFX("BASS_FX_BFX_VOLUME_ENV", EnumerationJNI.get_BASS_FX_BFX_VOLUME_ENV());
	/**  */
	public final static BASS_FX_BFX BASS_FX_BFX_BQF = new BASS_FX_BFX("BASS_FX_BFX_BQF", EnumerationJNI.get_BASS_FX_BFX_BQF());

	private final static HashMap VALUES = new HashMap(2*20);
	static {
		VALUES.put(new Integer(BASS_FX_BFX_ROTATE.asInt()), BASS_FX_BFX_ROTATE);
		VALUES.put(new Integer(BASS_FX_BFX_ECHO.asInt()), BASS_FX_BFX_ECHO);
		VALUES.put(new Integer(BASS_FX_BFX_FLANGER.asInt()), BASS_FX_BFX_FLANGER);
		VALUES.put(new Integer(BASS_FX_BFX_VOLUME.asInt()), BASS_FX_BFX_VOLUME);
		VALUES.put(new Integer(BASS_FX_BFX_PEAKEQ.asInt()), BASS_FX_BFX_PEAKEQ);
		VALUES.put(new Integer(BASS_FX_BFX_REVERB.asInt()), BASS_FX_BFX_REVERB);
		VALUES.put(new Integer(BASS_FX_BFX_LPF.asInt()), BASS_FX_BFX_LPF);
		VALUES.put(new Integer(BASS_FX_BFX_MIX.asInt()), BASS_FX_BFX_MIX);
		VALUES.put(new Integer(BASS_FX_BFX_DAMP.asInt()), BASS_FX_BFX_DAMP);
		VALUES.put(new Integer(BASS_FX_BFX_AUTOWAH.asInt()), BASS_FX_BFX_AUTOWAH);
		VALUES.put(new Integer(BASS_FX_BFX_ECHO2.asInt()), BASS_FX_BFX_ECHO2);
		VALUES.put(new Integer(BASS_FX_BFX_PHASER.asInt()), BASS_FX_BFX_PHASER);
		VALUES.put(new Integer(BASS_FX_BFX_ECHO3.asInt()), BASS_FX_BFX_ECHO3);
		VALUES.put(new Integer(BASS_FX_BFX_CHORUS.asInt()), BASS_FX_BFX_CHORUS);
		VALUES.put(new Integer(BASS_FX_BFX_APF.asInt()), BASS_FX_BFX_APF);
		VALUES.put(new Integer(BASS_FX_BFX_COMPRESSOR.asInt()), BASS_FX_BFX_COMPRESSOR);
		VALUES.put(new Integer(BASS_FX_BFX_DISTORTION.asInt()), BASS_FX_BFX_DISTORTION);
		VALUES.put(new Integer(BASS_FX_BFX_COMPRESSOR2.asInt()), BASS_FX_BFX_COMPRESSOR2);
		VALUES.put(new Integer(BASS_FX_BFX_VOLUME_ENV.asInt()), BASS_FX_BFX_VOLUME_ENV);
		VALUES.put(new Integer(BASS_FX_BFX_BQF.asInt()), BASS_FX_BFX_BQF);
	}

	private final String name;
	private final int nativeValue;
	private BASS_FX_BFX(String name, int nativeValue) {
		this.name = name;
		this.nativeValue = nativeValue;
	}

	public int asInt() {
		return nativeValue;
	}
	public String toString() {
		return name;
	}
	public boolean equals(Object object) {
		if(object instanceof BASS_FX_BFX) {
			return asInt() == ((BASS_FX_BFX)object).asInt();
		}
		return false;
	}
	public int compareTo(Object object) {
		return asInt() - ((BASS_FX_BFX)object).asInt();
	}

	/**
	 * Creates a "custom" enum field that contains the value (bitwise OR operator) :<BR>
	 * <pre><code>	this.asInt() | object.asInt()</code></pre><BR>
	 * The name (return by <code>toString()</code>) of the enum field created is :<BR>
	 * <pre><code>	BASS_FX_BFX_CUSTOM</code></pre>
	 * @param object a BASS_FX_BFX enum field
	 * @return a custom BASS_FX_BFX enum field
	 */
	public BASS_FX_BFX OR(BASS_FX_BFX object) {
		return new BASS_FX_BFX("BASS_FX_BFX_CUSTOM", asInt() | object.asInt());
	}
	/**
	 * @return true if the enum field is a custom field
	 */
	public boolean isCustom() {
		return name.equals("BASS_FX_BFX_CUSTOM");
	}

	/**
	 * Retrieve a BASS_FX_BFX enum field with his integer value
	 * @param nativeValue the integer value of the field to retrieve
	 * @return the BASS_FX_BFX enum field that correspond to the integer value
	 */
	public static BASS_FX_BFX get(int nativeValue) {
		BASS_FX_BFX javaResult = (BASS_FX_BFX)VALUES.get(new Integer(nativeValue));
		if(javaResult == null) {
			return new BASS_FX_BFX("BASS_FX_BFX_CUSTOM", nativeValue);
		}
		return javaResult;
	}

	/**
	 * Retrieve a BASS_FX_BFX enum field from a Pointer
	 * @param pointer a pointer holding an BASS_FX_BFX enum field
	 * @return the BASS_FX_BFX enum field that correspond to the enum field in the pointer
	 */
	public static BASS_FX_BFX get(Pointer pointer) {
		return get(pointer.asInt());
	}

	/**
	 * @return an <code>Iterator</code> over the elements in this enumeration.<BR>
	 * Can be cast to <code>Iterator<BASS_FX_BFX></code> in Java 1.5.
	 */
	public static java.util.Iterator iterator() {
		return new java.util.Iterator(){
			private java.util.Iterator i = VALUES.values().iterator();	//Wrapper of the HashMap iterator
			public boolean hasNext() { return i.hasNext(); }
			public Object next() { return i.next(); }
			public void remove() { throw new UnsupportedOperationException(); }
		};
	}
}