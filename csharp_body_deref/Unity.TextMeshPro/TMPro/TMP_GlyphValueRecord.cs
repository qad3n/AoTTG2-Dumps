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
		[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x2CDDC80", Offset = "0x2CDC280", VA = "0x182CDDC80")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	public float yPlacement
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x562BB0", Offset = "0x5611B0", VA = "0x180562BB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x2CDDC90", Offset = "0x2CDC290", VA = "0x182CDDC90")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public float xAdvance
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x562B90", Offset = "0x561190", VA = "0x180562B90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x2CDDA10", Offset = "0x2CDC010", VA = "0x182CDDA10")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public float yAdvance
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x562B80", Offset = "0x561180", VA = "0x180562B80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x2A3A8E0", Offset = "0x2A38EE0", VA = "0x182A3A8E0")]
		set
		{
		}
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x298BAD0", Offset = "0x298A0D0", VA = "0x18298BAD0")]
	public TMP_GlyphValueRecord(float xPlacement, float yPlacement, float xAdvance, float yAdvance)
	{
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x2A348D0", Offset = "0x2A32ED0", VA = "0x182A348D0")]
	internal TMP_GlyphValueRecord(GlyphValueRecord_Legacy valueRecord)
	{
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x2CF4560", Offset = "0x2CF2B60", VA = "0x182CF4560")]
	internal TMP_GlyphValueRecord(GlyphValueRecord valueRecord)
	{
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x2CF76B0", Offset = "0x2CF5CB0", VA = "0x182CF76B0")]
	public static TMP_GlyphValueRecord operator +(TMP_GlyphValueRecord a, TMP_GlyphValueRecord b)
	{
		return default(TMP_GlyphValueRecord);
	}
}
