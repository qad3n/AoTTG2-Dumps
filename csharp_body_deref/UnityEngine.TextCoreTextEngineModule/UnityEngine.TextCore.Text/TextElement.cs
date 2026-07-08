using System;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x200001E")]
public abstract class TextElement
{
	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	protected TextElementType m_ElementType;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	internal uint m_Unicode;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x18")]
	internal TextAsset m_TextAsset;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x20")]
	internal Glyph m_Glyph;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	internal uint m_GlyphIndex;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	internal float m_Scale;

	[Token(Token = "0x1700002B")]
	public TextElementType elementType
	{
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x4B90C00", Offset = "0x4B90C00", VA = "0x4B90C00")]
		get
		{
			return default(TextElementType);
		}
	}

	[Token(Token = "0x1700002C")]
	public uint unicode
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x4B81E60", Offset = "0x4B81E60", VA = "0x4B81E60")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x4B7F0A0", Offset = "0x4B7F0A0", VA = "0x4B7F0A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	public TextAsset textAsset
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x4B8B390", Offset = "0x4B8B390", VA = "0x4B8B390")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x4B7F0B0", Offset = "0x4B7F0B0", VA = "0x4B7F0B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public Glyph glyph
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x4B90C10", Offset = "0x4B90C10", VA = "0x4B90C10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x4B7F0C0", Offset = "0x4B7F0C0", VA = "0x4B7F0C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public uint glyphIndex
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x4B80E80", Offset = "0x4B80E80", VA = "0x4B80E80")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x4B7F0D0", Offset = "0x4B7F0D0", VA = "0x4B7F0D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public float scale
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x4B90C20", Offset = "0x4B90C20", VA = "0x4B90C20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x4B7F020", Offset = "0x4B7F020", VA = "0x4B7F020")]
		set
		{
		}
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x4B7F010", Offset = "0x4B7F010", VA = "0x4B7F010")]
	protected TextElement()
	{
	}
}
