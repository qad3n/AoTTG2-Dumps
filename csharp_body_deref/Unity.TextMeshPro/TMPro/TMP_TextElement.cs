// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_TextElement
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.TextCore;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000092")]
public class TMP_TextElement
{
	[Token(Token = "0x4000535")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	internal TextElementType m_ElementType;

	[Token(Token = "0x4000536")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	internal uint m_Unicode;

	[Token(Token = "0x4000537")]
	[FieldOffset(Offset = "0x18")]
	internal TMP_Asset m_TextAsset;

	[Token(Token = "0x4000538")]
	[FieldOffset(Offset = "0x20")]
	internal Glyph m_Glyph;

	[Token(Token = "0x4000539")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	internal uint m_GlyphIndex;

	[Token(Token = "0x400053A")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	internal float m_Scale;

	[Token(Token = "0x1700016D")]
	public TextElementType elementType
	{
		[Token(Token = "0x600058C")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		get
		{
			return default(TextElementType);
		}
	}

	[Token(Token = "0x1700016E")]
	public uint unicode
	{
		[Token(Token = "0x600058D")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x600058E")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700016F")]
	public TMP_Asset textAsset
	{
		[Token(Token = "0x600058F")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000590")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000170")]
	public Glyph glyph
	{
		[Token(Token = "0x6000591")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000592")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000171")]
	public uint glyphIndex
	{
		[Token(Token = "0x6000593")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000594")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		set
		{
		}
	}

	[Token(Token = "0x17000172")]
	public float scale
	{
		[Token(Token = "0x6000595")]
		[Address(RVA = "0x1D90480", Offset = "0x1D8EA80", VA = "0x181D90480")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000596")]
		[Address(RVA = "0x2CDD470", Offset = "0x2CDBA70", VA = "0x182CDD470")]
		set
		{
		}
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public TMP_TextElement()
	{
	}
}
