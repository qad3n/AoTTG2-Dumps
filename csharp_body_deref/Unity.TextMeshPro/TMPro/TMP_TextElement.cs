using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.TextCore;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000085")]
public class TMP_TextElement
{
	[Token(Token = "0x40004C6")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	protected TextElementType m_ElementType;

	[Token(Token = "0x40004C7")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	internal uint m_Unicode;

	[Token(Token = "0x40004C8")]
	[FieldOffset(Offset = "0x18")]
	internal TMP_Asset m_TextAsset;

	[Token(Token = "0x40004C9")]
	[FieldOffset(Offset = "0x20")]
	internal Glyph m_Glyph;

	[Token(Token = "0x40004CA")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	internal uint m_GlyphIndex;

	[Token(Token = "0x40004CB")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	internal float m_Scale;

	[Token(Token = "0x17000146")]
	public TextElementType elementType
	{
		[Token(Token = "0x60004EC")]
		[Address(RVA = "0x4946D40", Offset = "0x4946D40", VA = "0x4946D40")]
		get
		{
			return default(TextElementType);
		}
	}

	[Token(Token = "0x17000147")]
	public uint unicode
	{
		[Token(Token = "0x60004ED")]
		[Address(RVA = "0x4946D50", Offset = "0x4946D50", VA = "0x4946D50")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60004EE")]
		[Address(RVA = "0x4946D60", Offset = "0x4946D60", VA = "0x4946D60")]
		set
		{
		}
	}

	[Token(Token = "0x17000148")]
	public TMP_Asset textAsset
	{
		[Token(Token = "0x60004EF")]
		[Address(RVA = "0x4946D70", Offset = "0x4946D70", VA = "0x4946D70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004F0")]
		[Address(RVA = "0x4946D80", Offset = "0x4946D80", VA = "0x4946D80")]
		set
		{
		}
	}

	[Token(Token = "0x17000149")]
	public Glyph glyph
	{
		[Token(Token = "0x60004F1")]
		[Address(RVA = "0x4946D90", Offset = "0x4946D90", VA = "0x4946D90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004F2")]
		[Address(RVA = "0x4946DA0", Offset = "0x4946DA0", VA = "0x4946DA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700014A")]
	public uint glyphIndex
	{
		[Token(Token = "0x60004F3")]
		[Address(RVA = "0x4946DB0", Offset = "0x4946DB0", VA = "0x4946DB0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60004F4")]
		[Address(RVA = "0x4946DC0", Offset = "0x4946DC0", VA = "0x4946DC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700014B")]
	public float scale
	{
		[Token(Token = "0x60004F5")]
		[Address(RVA = "0x4946DD0", Offset = "0x4946DD0", VA = "0x4946DD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004F6")]
		[Address(RVA = "0x4946DE0", Offset = "0x4946DE0", VA = "0x4946DE0")]
		set
		{
		}
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x49431C0", Offset = "0x49431C0", VA = "0x49431C0")]
	public TMP_TextElement()
	{
	}
}
