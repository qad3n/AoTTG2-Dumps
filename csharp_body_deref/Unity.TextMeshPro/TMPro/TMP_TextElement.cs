// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_TextElement
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6740760", Offset = "0x673F760", VA = "0x6740760")]
		get
		{
			return default(TextElementType);
		}
	}

	[Token(Token = "0x1700016E")]
	public uint unicode
	{
		[Token(Token = "0x600058D")]
		[Address(RVA = "0x6740770", Offset = "0x673F770", VA = "0x6740770")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x600058E")]
		[Address(RVA = "0x6740780", Offset = "0x673F780", VA = "0x6740780")]
		set
		{
		}
	}

	[Token(Token = "0x1700016F")]
	public TMP_Asset textAsset
	{
		[Token(Token = "0x600058F")]
		[Address(RVA = "0x6740790", Offset = "0x673F790", VA = "0x6740790")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000590")]
		[Address(RVA = "0x67407A0", Offset = "0x673F7A0", VA = "0x67407A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000170")]
	public Glyph glyph
	{
		[Token(Token = "0x6000591")]
		[Address(RVA = "0x67407B0", Offset = "0x673F7B0", VA = "0x67407B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000592")]
		[Address(RVA = "0x67407C0", Offset = "0x673F7C0", VA = "0x67407C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000171")]
	public uint glyphIndex
	{
		[Token(Token = "0x6000593")]
		[Address(RVA = "0x67407D0", Offset = "0x673F7D0", VA = "0x67407D0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000594")]
		[Address(RVA = "0x67407E0", Offset = "0x673F7E0", VA = "0x67407E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000172")]
	public float scale
	{
		[Token(Token = "0x6000595")]
		[Address(RVA = "0x67407F0", Offset = "0x673F7F0", VA = "0x67407F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000596")]
		[Address(RVA = "0x6740800", Offset = "0x673F800", VA = "0x6740800")]
		set
		{
		}
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x673CCB0", Offset = "0x673BCB0", VA = "0x673CCB0")]
	public TMP_TextElement()
	{
	}
}
