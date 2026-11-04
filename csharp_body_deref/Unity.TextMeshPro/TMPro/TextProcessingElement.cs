// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TextProcessingElement
// Update status: NEW in this game update
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
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(TextProcessingElementType);
		}
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x1700017F")]
	public int StartIndex
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00")]
		set
		{
		}
	}

	[Token(Token = "0x17000180")]
	public int Length
	{
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005D6")]
		[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20")]
		set
		{
		}
	}

	[Token(Token = "0x17000181")]
	public CharacterElement CharacterElement
	{
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x561300", Offset = "0x55F900", VA = "0x180561300")]
		get
		{
			return default(CharacterElement);
		}
	}

	[Token(Token = "0x17000182")]
	public MarkupElement MarkupElement
	{
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return default(MarkupElement);
		}
		[Token(Token = "0x60005D9")]
		[Address(RVA = "0x2D7E6D0", Offset = "0x2D7CCD0", VA = "0x182D7E6D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000183")]
	public static TextProcessingElement Undefined
	{
		[Token(Token = "0x60005DE")]
		[Address(RVA = "0xB64860", Offset = "0xB62E60", VA = "0x180B64860")]
		get
		{
			return default(TextProcessingElement);
		}
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x2D7E6B0", Offset = "0x2D7CCB0", VA = "0x182D7E6B0")]
	public TextProcessingElement(TextProcessingElementType elementType, int startIndex, int length)
	{
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x2D7E650", Offset = "0x2D7CC50", VA = "0x182D7E650")]
	public TextProcessingElement(TMP_TextElement textElement, int startIndex, int length)
	{
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x2D7E5C0", Offset = "0x2D7CBC0", VA = "0x182D7E5C0")]
	public TextProcessingElement(CharacterElement characterElement, int startIndex, int length)
	{
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x2D7E600", Offset = "0x2D7CC00", VA = "0x182D7E600")]
	public TextProcessingElement(MarkupElement markupElement)
	{
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x2D7E4D0", Offset = "0x2D7CAD0", VA = "0x182D7E4D0")]
	private string DebuggerDisplay()
	{
		return null;
	}
}
