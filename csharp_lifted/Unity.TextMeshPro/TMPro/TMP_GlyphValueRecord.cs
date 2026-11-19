// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_GlyphValueRecord
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.TextCore.LowLevel;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000045")]
public struct TMP_GlyphValueRecord
{
	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal float m_XPlacement;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	internal float m_YPlacement;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	internal float m_XAdvance;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0xC")]
	[SerializeField]
	internal float m_YAdvance;

	[Token(Token = "0x17000067")]
	public float xPlacement
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x66F67B0", Offset = "0x66F57B0", VA = "0x66F67B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x66F67C0", Offset = "0x66F57C0", VA = "0x66F67C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	public float yPlacement
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x66F67D0", Offset = "0x66F57D0", VA = "0x66F67D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x66F67E0", Offset = "0x66F57E0", VA = "0x66F67E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public float xAdvance
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x66F67F0", Offset = "0x66F57F0", VA = "0x66F67F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x66F6800", Offset = "0x66F5800", VA = "0x66F6800")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public float yAdvance
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x66F6810", Offset = "0x66F5810", VA = "0x66F6810")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x66F6820", Offset = "0x66F5820", VA = "0x66F6820")]
		set
		{
		}
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x66F6830", Offset = "0x66F5830", VA = "0x66F6830")]
	public TMP_GlyphValueRecord(float xPlacement, float yPlacement, float xAdvance, float yAdvance)
	{
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x66F6850", Offset = "0x66F5850", VA = "0x66F6850")]
	internal TMP_GlyphValueRecord(GlyphValueRecord_Legacy valueRecord)
	{
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x66F6860", Offset = "0x66F5860", VA = "0x66F6860")]
	internal TMP_GlyphValueRecord(GlyphValueRecord valueRecord)
	{
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x66F68C0", Offset = "0x66F58C0", VA = "0x66F68C0")]
	public static TMP_GlyphValueRecord operator +(TMP_GlyphValueRecord a, TMP_GlyphValueRecord b)
	{
		return default(TMP_GlyphValueRecord);
	}
}
