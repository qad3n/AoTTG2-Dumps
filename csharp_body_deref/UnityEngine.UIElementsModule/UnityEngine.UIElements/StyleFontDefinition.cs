// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleFontDefinition
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.TextCore.Text;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200041A")]
public struct StyleFontDefinition : IStyleValue<FontDefinition>, IEquatable<StyleFontDefinition>
{
	[Token(Token = "0x4000DCA")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x4000DCB")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private FontDefinition m_Value;

	[Token(Token = "0x170008D1")]
	public FontDefinition value
	{
		[Token(Token = "0x600202F")]
		[Address(RVA = "0x6B13000", Offset = "0x6B12000", VA = "0x6B13000", Slot = "4")]
		get
		{
			return default(FontDefinition);
		}
		[Token(Token = "0x6002030")]
		[Address(RVA = "0x6B13020", Offset = "0x6B12020", VA = "0x6B13020", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008D2")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6002031")]
		[Address(RVA = "0x6B13040", Offset = "0x6B12040", VA = "0x6B13040", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6002032")]
		[Address(RVA = "0x6B13050", Offset = "0x6B12050", VA = "0x6B13050", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6002033")]
	[Address(RVA = "0x6B13060", Offset = "0x6B12060", VA = "0x6B13060")]
	public StyleFontDefinition(FontDefinition f)
	{
	}

	[Token(Token = "0x6002034")]
	[Address(RVA = "0x6B130A0", Offset = "0x6B120A0", VA = "0x6B130A0")]
	public StyleFontDefinition(FontAsset f)
	{
	}

	[Token(Token = "0x6002035")]
	[Address(RVA = "0x6B13100", Offset = "0x6B12100", VA = "0x6B13100")]
	public StyleFontDefinition(Font f)
	{
	}

	[Token(Token = "0x6002036")]
	[Address(RVA = "0x6B13160", Offset = "0x6B12160", VA = "0x6B13160")]
	public StyleFontDefinition(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002037")]
	[Address(RVA = "0x6B0E5A0", Offset = "0x6B0D5A0", VA = "0x6B0E5A0")]
	internal StyleFontDefinition(object obj, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002038")]
	[Address(RVA = "0x6B130D0", Offset = "0x6B120D0", VA = "0x6B130D0")]
	internal StyleFontDefinition(FontAsset f, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002039")]
	[Address(RVA = "0x6B13130", Offset = "0x6B12130", VA = "0x6B13130")]
	internal StyleFontDefinition(Font f, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600203A")]
	[Address(RVA = "0x6B13080", Offset = "0x6B12080", VA = "0x6B13080")]
	internal StyleFontDefinition(FontDefinition f, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600203B")]
	[Address(RVA = "0x6B0E5D0", Offset = "0x6B0D5D0", VA = "0x6B0E5D0")]
	public static implicit operator StyleFontDefinition(StyleKeyword keyword)
	{
		return default(StyleFontDefinition);
	}

	[Token(Token = "0x600203C")]
	[Address(RVA = "0x6B13180", Offset = "0x6B12180", VA = "0x6B13180")]
	public static implicit operator StyleFontDefinition(FontDefinition f)
	{
		return default(StyleFontDefinition);
	}

	[Token(Token = "0x600203D")]
	[Address(RVA = "0x6B131D0", Offset = "0x6B121D0", VA = "0x6B131D0", Slot = "8")]
	public bool Equals(StyleFontDefinition other)
	{
		return default(bool);
	}

	[Token(Token = "0x600203E")]
	[Address(RVA = "0x6B13200", Offset = "0x6B12200", VA = "0x6B13200", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600203F")]
	[Address(RVA = "0x6B13270", Offset = "0x6B12270", VA = "0x6B13270", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
