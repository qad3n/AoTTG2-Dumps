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
[Token(Token = "0x200004F")]
public struct TMP_GlyphValueRecord
{
	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal float m_XPlacement;

	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	internal float m_YPlacement;

	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	internal float m_XAdvance;

	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0xC")]
	[SerializeField]
	internal float m_YAdvance;

	[Token(Token = "0x1700006B")]
	public float xPlacement
	{
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x4C585B0", Offset = "0x4C585B0", VA = "0x4C585B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x4C585C0", Offset = "0x4C585C0", VA = "0x4C585C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public float yPlacement
	{
		[Token(Token = "0x600026A")]
		[Address(RVA = "0x4C585D0", Offset = "0x4C585D0", VA = "0x4C585D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600026B")]
		[Address(RVA = "0x4C585E0", Offset = "0x4C585E0", VA = "0x4C585E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public float xAdvance
	{
		[Token(Token = "0x600026C")]
		[Address(RVA = "0x4C585F0", Offset = "0x4C585F0", VA = "0x4C585F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600026D")]
		[Address(RVA = "0x4C58600", Offset = "0x4C58600", VA = "0x4C58600")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public float yAdvance
	{
		[Token(Token = "0x600026E")]
		[Address(RVA = "0x4C58610", Offset = "0x4C58610", VA = "0x4C58610")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600026F")]
		[Address(RVA = "0x4C58620", Offset = "0x4C58620", VA = "0x4C58620")]
		set
		{
		}
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x4C55A00", Offset = "0x4C55A00", VA = "0x4C55A00")]
	public TMP_GlyphValueRecord(float xPlacement, float yPlacement, float xAdvance, float yAdvance)
	{
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x4C58630", Offset = "0x4C58630", VA = "0x4C58630")]
	internal TMP_GlyphValueRecord(GlyphValueRecord_Legacy valueRecord)
	{
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x4C58640", Offset = "0x4C58640", VA = "0x4C58640")]
	internal TMP_GlyphValueRecord(GlyphValueRecord valueRecord)
	{
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x4C586A0", Offset = "0x4C586A0", VA = "0x4C586A0")]
	public static TMP_GlyphValueRecord operator +(TMP_GlyphValueRecord a, TMP_GlyphValueRecord b)
	{
		return default(TMP_GlyphValueRecord);
	}
}
