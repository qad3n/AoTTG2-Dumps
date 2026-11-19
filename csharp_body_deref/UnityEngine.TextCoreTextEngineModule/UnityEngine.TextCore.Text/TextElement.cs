// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x2000044")]
public abstract class TextElement
{
	[Token(Token = "0x40001E2")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	protected TextElementType m_ElementType;

	[Token(Token = "0x40001E3")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	internal uint m_Unicode;

	[Token(Token = "0x40001E4")]
	[FieldOffset(Offset = "0x18")]
	internal TextAsset m_TextAsset;

	[Token(Token = "0x40001E5")]
	[FieldOffset(Offset = "0x20")]
	internal Glyph m_Glyph;

	[Token(Token = "0x40001E6")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	internal uint m_GlyphIndex;

	[Token(Token = "0x40001E7")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	internal float m_Scale;

	[Token(Token = "0x1700005E")]
	public TextElementType elementType
	{
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x6A43DE0", Offset = "0x6A42DE0", VA = "0x6A43DE0")]
		get
		{
			return default(TextElementType);
		}
	}

	[Token(Token = "0x1700005F")]
	public uint unicode
	{
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x6A3DD50", Offset = "0x6A3CD50", VA = "0x6A3DD50")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x6A43DF0", Offset = "0x6A42DF0", VA = "0x6A43DF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000060")]
	public TextAsset textAsset
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x6A3E9A0", Offset = "0x6A3D9A0", VA = "0x6A3E9A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x6A40020", Offset = "0x6A3F020", VA = "0x6A40020")]
		set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public Glyph glyph
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x6A43E00", Offset = "0x6A42E00", VA = "0x6A43E00")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x6A40010", Offset = "0x6A3F010", VA = "0x6A40010")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public uint glyphIndex
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x6A40000", Offset = "0x6A3F000", VA = "0x6A40000")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x6A43E10", Offset = "0x6A42E10", VA = "0x6A43E10")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public float scale
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x6A43E20", Offset = "0x6A42E20", VA = "0x6A43E20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x6A43E30", Offset = "0x6A42E30", VA = "0x6A43E30")]
		set
		{
		}
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x6A41220", Offset = "0x6A40220", VA = "0x6A41220")]
	protected TextElement()
	{
	}
}
