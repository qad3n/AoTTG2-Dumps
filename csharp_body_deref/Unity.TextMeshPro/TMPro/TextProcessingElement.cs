// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TextProcessingElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x200009A")]
[DebuggerDisplay("{DebuggerDisplay()}")]
internal struct TextProcessingElement
{
	[Token(Token = "0x4000566")]
	[FieldOffset(Offset = "0x0")]
	private TextProcessingElementType m_ElementType;

	[Token(Token = "0x4000567")]
	[FieldOffset(Offset = "0x4")]
	private int m_StartIndex;

	[Token(Token = "0x4000568")]
	[FieldOffset(Offset = "0x8")]
	private int m_Length;

	[Token(Token = "0x4000569")]
	[FieldOffset(Offset = "0x10")]
	private CharacterElement m_CharacterElement;

	[Token(Token = "0x400056A")]
	[FieldOffset(Offset = "0x20")]
	private MarkupElement m_MarkupElement;

	[Token(Token = "0x1700017E")]
	public TextProcessingElementType ElementType
	{
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x6758750", Offset = "0x6757750", VA = "0x6758750")]
		get
		{
			return default(TextProcessingElementType);
		}
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x6758760", Offset = "0x6757760", VA = "0x6758760")]
		set
		{
		}
	}

	[Token(Token = "0x1700017F")]
	public int StartIndex
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x6758770", Offset = "0x6757770", VA = "0x6758770")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x6758780", Offset = "0x6757780", VA = "0x6758780")]
		set
		{
		}
	}

	[Token(Token = "0x17000180")]
	public int Length
	{
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x6758790", Offset = "0x6757790", VA = "0x6758790")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005D6")]
		[Address(RVA = "0x67587A0", Offset = "0x67577A0", VA = "0x67587A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000181")]
	public CharacterElement CharacterElement
	{
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x67587B0", Offset = "0x67577B0", VA = "0x67587B0")]
		get
		{
			return default(CharacterElement);
		}
	}

	[Token(Token = "0x17000182")]
	public MarkupElement MarkupElement
	{
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x67587C0", Offset = "0x67577C0", VA = "0x67587C0")]
		get
		{
			return default(MarkupElement);
		}
		[Token(Token = "0x60005D9")]
		[Address(RVA = "0x67587D0", Offset = "0x67577D0", VA = "0x67587D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000183")]
	public static TextProcessingElement Undefined
	{
		[Token(Token = "0x60005DE")]
		[Address(RVA = "0x67588E0", Offset = "0x67578E0", VA = "0x67588E0")]
		get
		{
			return default(TextProcessingElement);
		}
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x67587E0", Offset = "0x67577E0", VA = "0x67587E0")]
	public TextProcessingElement(TextProcessingElementType elementType, int startIndex, int length)
	{
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x6758800", Offset = "0x6757800", VA = "0x6758800")]
	public TextProcessingElement(TMP_TextElement textElement, int startIndex, int length)
	{
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x6758860", Offset = "0x6757860", VA = "0x6758860")]
	public TextProcessingElement(CharacterElement characterElement, int startIndex, int length)
	{
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x6758890", Offset = "0x6757890", VA = "0x6758890")]
	public TextProcessingElement(MarkupElement markupElement)
	{
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x6758900", Offset = "0x6757900", VA = "0x6758900")]
	private string DebuggerDisplay()
	{
		return null;
	}
}
