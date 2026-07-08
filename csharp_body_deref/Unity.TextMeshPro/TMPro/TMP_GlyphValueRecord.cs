using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.TextCore.LowLevel;

namespace TMPro;

[Serializable]
[Token(Token = "0x200003B")]
public struct TMP_GlyphValueRecord
{
	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal float m_XPlacement;

	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	internal float m_YPlacement;

	[Token(Token = "0x4000144")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	internal float m_XAdvance;

	[Token(Token = "0x4000145")]
	[FieldOffset(Offset = "0xC")]
	[SerializeField]
	internal float m_YAdvance;

	[Token(Token = "0x1700004B")]
	public float xPlacement
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x490B0F0", Offset = "0x490B0F0", VA = "0x490B0F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x490B100", Offset = "0x490B100", VA = "0x490B100")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public float yPlacement
	{
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x490B110", Offset = "0x490B110", VA = "0x490B110")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000182")]
		[Address(RVA = "0x490B120", Offset = "0x490B120", VA = "0x490B120")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public float xAdvance
	{
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x490B130", Offset = "0x490B130", VA = "0x490B130")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x490B140", Offset = "0x490B140", VA = "0x490B140")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public float yAdvance
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x490B150", Offset = "0x490B150", VA = "0x490B150")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x490B160", Offset = "0x490B160", VA = "0x490B160")]
		set
		{
		}
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x4908480", Offset = "0x4908480", VA = "0x4908480")]
	public TMP_GlyphValueRecord(float xPlacement, float yPlacement, float xAdvance, float yAdvance)
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x490B170", Offset = "0x490B170", VA = "0x490B170")]
	internal TMP_GlyphValueRecord(GlyphValueRecord_Legacy valueRecord)
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x490B180", Offset = "0x490B180", VA = "0x490B180")]
	internal TMP_GlyphValueRecord(GlyphValueRecord valueRecord)
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x490B1E0", Offset = "0x490B1E0", VA = "0x490B1E0")]
	public static TMP_GlyphValueRecord operator +(TMP_GlyphValueRecord a, TMP_GlyphValueRecord b)
	{
		return default(TMP_GlyphValueRecord);
	}
}
