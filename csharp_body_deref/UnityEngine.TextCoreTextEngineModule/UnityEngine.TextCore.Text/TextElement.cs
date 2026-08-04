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
		[Address(RVA = "0x4EB8530", Offset = "0x4EB8530", VA = "0x4EB8530")]
		get
		{
			return default(TextElementType);
		}
	}

	[Token(Token = "0x1700002C")]
	public uint unicode
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x4EA9790", Offset = "0x4EA9790", VA = "0x4EA9790")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x4EA69D0", Offset = "0x4EA69D0", VA = "0x4EA69D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	public TextAsset textAsset
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x4EB2CC0", Offset = "0x4EB2CC0", VA = "0x4EB2CC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x4EA69E0", Offset = "0x4EA69E0", VA = "0x4EA69E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public Glyph glyph
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x4EB8540", Offset = "0x4EB8540", VA = "0x4EB8540")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x4EA69F0", Offset = "0x4EA69F0", VA = "0x4EA69F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public uint glyphIndex
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x4EA87B0", Offset = "0x4EA87B0", VA = "0x4EA87B0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x4EA6A00", Offset = "0x4EA6A00", VA = "0x4EA6A00")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public float scale
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x4EB8550", Offset = "0x4EB8550", VA = "0x4EB8550")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x4EA6950", Offset = "0x4EA6950", VA = "0x4EA6950")]
		set
		{
		}
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x4EA6940", Offset = "0x4EA6940", VA = "0x4EA6940")]
	protected TextElement()
	{
	}
}
