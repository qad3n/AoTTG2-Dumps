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
		[Address(RVA = "0x1CC78D0", Offset = "0x1CC5ED0", VA = "0x181CC78D0")]
		get
		{
			return default(TextElementType);
		}
	}

	[Token(Token = "0x1700005F")]
	public uint unicode
	{
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x152EFE0", Offset = "0x152D5E0", VA = "0x18152EFE0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000060")]
	public TextAsset textAsset
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x1536BF0", Offset = "0x15351F0", VA = "0x181536BF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public Glyph glyph
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x2E85240", Offset = "0x2E83840", VA = "0x182E85240")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001ED")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public uint glyphIndex
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0xE282E0", Offset = "0xE268E0", VA = "0x180E282E0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public float scale
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0xD0EAF0", Offset = "0xD0D0F0", VA = "0x180D0EAF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x2CDD470", Offset = "0x2CDBA70", VA = "0x182CDD470")]
		set
		{
		}
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected TextElement()
	{
	}
}
