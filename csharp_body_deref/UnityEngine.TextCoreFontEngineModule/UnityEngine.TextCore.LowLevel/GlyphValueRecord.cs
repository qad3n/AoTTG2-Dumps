using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[Token(Token = "0x2000010")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct GlyphValueRecord : IEquatable<GlyphValueRecord>
{
	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("xPlacement")]
	private float m_XPlacement;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x4")]
	[UnityEngine.Bindings.NativeName("yPlacement")]
	[SerializeField]
	private float m_YPlacement;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("xAdvance")]
	private float m_XAdvance;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0xC")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("yAdvance")]
	private float m_YAdvance;

	[Token(Token = "0x17000024")]
	public float xPlacement
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x4B7EA50", Offset = "0x4B7EA50", VA = "0x4B7EA50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x4B7EA60", Offset = "0x4B7EA60", VA = "0x4B7EA60")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public float yPlacement
	{
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x4B7EA70", Offset = "0x4B7EA70", VA = "0x4B7EA70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x4B7EA80", Offset = "0x4B7EA80", VA = "0x4B7EA80")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public float xAdvance
	{
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x4B7EA90", Offset = "0x4B7EA90", VA = "0x4B7EA90")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000027")]
	public float yAdvance
	{
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x4B7EAA0", Offset = "0x4B7EAA0", VA = "0x4B7EAA0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x4B7EAB0", Offset = "0x4B7EAB0", VA = "0x4B7EAB0")]
	public static GlyphValueRecord operator +(GlyphValueRecord a, GlyphValueRecord b)
	{
		return default(GlyphValueRecord);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4B7EAC0", Offset = "0x4B7EAC0", VA = "0x4B7EAC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4B7EB10", Offset = "0x4B7EB10", VA = "0x4B7EB10", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4B7EB70", Offset = "0x4B7EB70", VA = "0x4B7EB70", Slot = "4")]
	public bool Equals(GlyphValueRecord other)
	{
		return default(bool);
	}
}
