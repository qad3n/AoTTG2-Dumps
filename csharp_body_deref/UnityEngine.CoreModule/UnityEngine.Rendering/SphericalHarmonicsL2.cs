using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002D4")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Math/SphericalHarmonicsL2.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct SphericalHarmonicsL2 : IEquatable<SphericalHarmonicsL2>
{
	[Token(Token = "0x4000821")]
	[FieldOffset(Offset = "0x0")]
	private float shr0;

	[Token(Token = "0x4000822")]
	[FieldOffset(Offset = "0x4")]
	private float shr1;

	[Token(Token = "0x4000823")]
	[FieldOffset(Offset = "0x8")]
	private float shr2;

	[Token(Token = "0x4000824")]
	[FieldOffset(Offset = "0xC")]
	private float shr3;

	[Token(Token = "0x4000825")]
	[FieldOffset(Offset = "0x10")]
	private float shr4;

	[Token(Token = "0x4000826")]
	[FieldOffset(Offset = "0x14")]
	private float shr5;

	[Token(Token = "0x4000827")]
	[FieldOffset(Offset = "0x18")]
	private float shr6;

	[Token(Token = "0x4000828")]
	[FieldOffset(Offset = "0x1C")]
	private float shr7;

	[Token(Token = "0x4000829")]
	[FieldOffset(Offset = "0x20")]
	private float shr8;

	[Token(Token = "0x400082A")]
	[FieldOffset(Offset = "0x24")]
	private float shg0;

	[Token(Token = "0x400082B")]
	[FieldOffset(Offset = "0x28")]
	private float shg1;

	[Token(Token = "0x400082C")]
	[FieldOffset(Offset = "0x2C")]
	private float shg2;

	[Token(Token = "0x400082D")]
	[FieldOffset(Offset = "0x30")]
	private float shg3;

	[Token(Token = "0x400082E")]
	[FieldOffset(Offset = "0x34")]
	private float shg4;

	[Token(Token = "0x400082F")]
	[FieldOffset(Offset = "0x38")]
	private float shg5;

	[Token(Token = "0x4000830")]
	[FieldOffset(Offset = "0x3C")]
	private float shg6;

	[Token(Token = "0x4000831")]
	[FieldOffset(Offset = "0x40")]
	private float shg7;

	[Token(Token = "0x4000832")]
	[FieldOffset(Offset = "0x44")]
	private float shg8;

	[Token(Token = "0x4000833")]
	[FieldOffset(Offset = "0x48")]
	private float shb0;

	[Token(Token = "0x4000834")]
	[FieldOffset(Offset = "0x4C")]
	private float shb1;

	[Token(Token = "0x4000835")]
	[FieldOffset(Offset = "0x50")]
	private float shb2;

	[Token(Token = "0x4000836")]
	[FieldOffset(Offset = "0x54")]
	private float shb3;

	[Token(Token = "0x4000837")]
	[FieldOffset(Offset = "0x58")]
	private float shb4;

	[Token(Token = "0x4000838")]
	[FieldOffset(Offset = "0x5C")]
	private float shb5;

	[Token(Token = "0x4000839")]
	[FieldOffset(Offset = "0x60")]
	private float shb6;

	[Token(Token = "0x400083A")]
	[FieldOffset(Offset = "0x64")]
	private float shb7;

	[Token(Token = "0x400083B")]
	[FieldOffset(Offset = "0x68")]
	private float shb8;

	[Token(Token = "0x17000276")]
	public float this[int rgb, int coefficient]
	{
		[Token(Token = "0x600100C")]
		[Address(RVA = "0x4B01430", Offset = "0x4B01430", VA = "0x4B01430")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600100D")]
		[Address(RVA = "0x4B015A0", Offset = "0x4B015A0", VA = "0x4B015A0")]
		set
		{
		}
	}

	[Token(Token = "0x600100E")]
	[Address(RVA = "0x4B01710", Offset = "0x4B01710", VA = "0x4B01710", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600100F")]
	[Address(RVA = "0x4B01960", Offset = "0x4B01960", VA = "0x4B01960", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001010")]
	[Address(RVA = "0x4B01A70", Offset = "0x4B01A70", VA = "0x4B01A70", Slot = "4")]
	public bool Equals(SphericalHarmonicsL2 other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001011")]
	[Address(RVA = "0x4B01B10", Offset = "0x4B01B10", VA = "0x4B01B10")]
	public static bool operator ==(SphericalHarmonicsL2 lhs, SphericalHarmonicsL2 rhs)
	{
		return default(bool);
	}
}
