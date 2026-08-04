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
[Token(Token = "0x200009B")]
public class TMP_TextElement
{
	[Token(Token = "0x40005BA")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	protected TextElementType m_ElementType;

	[Token(Token = "0x40005BB")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	internal uint m_Unicode;

	[Token(Token = "0x40005BC")]
	[FieldOffset(Offset = "0x18")]
	internal TMP_Asset m_TextAsset;

	[Token(Token = "0x40005BD")]
	[FieldOffset(Offset = "0x20")]
	internal Glyph m_Glyph;

	[Token(Token = "0x40005BE")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	internal uint m_GlyphIndex;

	[Token(Token = "0x40005BF")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	internal float m_Scale;

	[Token(Token = "0x17000167")]
	public TextElementType elementType
	{
		[Token(Token = "0x60005DD")]
		[Address(RVA = "0x4C942C0", Offset = "0x4C942C0", VA = "0x4C942C0")]
		get
		{
			return default(TextElementType);
		}
	}

	[Token(Token = "0x17000168")]
	public uint unicode
	{
		[Token(Token = "0x60005DE")]
		[Address(RVA = "0x4C942D0", Offset = "0x4C942D0", VA = "0x4C942D0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60005DF")]
		[Address(RVA = "0x4C942E0", Offset = "0x4C942E0", VA = "0x4C942E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000169")]
	public TMP_Asset textAsset
	{
		[Token(Token = "0x60005E0")]
		[Address(RVA = "0x4C942F0", Offset = "0x4C942F0", VA = "0x4C942F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005E1")]
		[Address(RVA = "0x4C94300", Offset = "0x4C94300", VA = "0x4C94300")]
		set
		{
		}
	}

	[Token(Token = "0x1700016A")]
	public Glyph glyph
	{
		[Token(Token = "0x60005E2")]
		[Address(RVA = "0x4C94310", Offset = "0x4C94310", VA = "0x4C94310")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005E3")]
		[Address(RVA = "0x4C94320", Offset = "0x4C94320", VA = "0x4C94320")]
		set
		{
		}
	}

	[Token(Token = "0x1700016B")]
	public uint glyphIndex
	{
		[Token(Token = "0x60005E4")]
		[Address(RVA = "0x4C94330", Offset = "0x4C94330", VA = "0x4C94330")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60005E5")]
		[Address(RVA = "0x4C94340", Offset = "0x4C94340", VA = "0x4C94340")]
		set
		{
		}
	}

	[Token(Token = "0x1700016C")]
	public float scale
	{
		[Token(Token = "0x60005E6")]
		[Address(RVA = "0x4C94350", Offset = "0x4C94350", VA = "0x4C94350")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60005E7")]
		[Address(RVA = "0x4C94360", Offset = "0x4C94360", VA = "0x4C94360")]
		set
		{
		}
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x4C90740", Offset = "0x4C90740", VA = "0x4C90740")]
	public TMP_TextElement()
	{
	}
}
