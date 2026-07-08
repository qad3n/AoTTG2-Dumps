using System;
using Il2CppDummyDll;
using UnityEngine.TextCore.Text;

namespace UnityEngine.UIElements;

[Token(Token = "0x200037A")]
public struct StyleFontDefinition : IStyleValue<FontDefinition>, IEquatable<StyleFontDefinition>
{
	[Token(Token = "0x4000A80")]
	[FieldOffset(Offset = "0x0")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x4000A81")]
	[FieldOffset(Offset = "0x8")]
	private FontDefinition m_Value;

	[Token(Token = "0x1700063F")]
	public FontDefinition value
	{
		[Token(Token = "0x6001670")]
		[Address(RVA = "0x4D877B0", Offset = "0x4D877B0", VA = "0x4D877B0", Slot = "4")]
		get
		{
			return default(FontDefinition);
		}
		[Token(Token = "0x6001671")]
		[Address(RVA = "0x4D877D0", Offset = "0x4D877D0", VA = "0x4D877D0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000640")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001672")]
		[Address(RVA = "0x4D877F0", Offset = "0x4D877F0", VA = "0x4D877F0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001673")]
		[Address(RVA = "0x4D87800", Offset = "0x4D87800", VA = "0x4D87800", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001674")]
	[Address(RVA = "0x4D87810", Offset = "0x4D87810", VA = "0x4D87810")]
	public StyleFontDefinition(FontDefinition f)
	{
	}

	[Token(Token = "0x6001675")]
	[Address(RVA = "0x4D87850", Offset = "0x4D87850", VA = "0x4D87850")]
	public StyleFontDefinition(FontAsset f)
	{
	}

	[Token(Token = "0x6001676")]
	[Address(RVA = "0x4D878B0", Offset = "0x4D878B0", VA = "0x4D878B0")]
	public StyleFontDefinition(Font f)
	{
	}

	[Token(Token = "0x6001677")]
	[Address(RVA = "0x4D87880", Offset = "0x4D87880", VA = "0x4D87880")]
	internal StyleFontDefinition(FontAsset f, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001678")]
	[Address(RVA = "0x4D878E0", Offset = "0x4D878E0", VA = "0x4D878E0")]
	internal StyleFontDefinition(Font f, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001679")]
	[Address(RVA = "0x4D87830", Offset = "0x4D87830", VA = "0x4D87830")]
	internal StyleFontDefinition(FontDefinition f, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600167A")]
	[Address(RVA = "0x4D87910", Offset = "0x4D87910", VA = "0x4D87910")]
	public static implicit operator StyleFontDefinition(FontDefinition f)
	{
		return default(StyleFontDefinition);
	}

	[Token(Token = "0x600167B")]
	[Address(RVA = "0x4D87970", Offset = "0x4D87970", VA = "0x4D87970", Slot = "8")]
	public bool Equals(StyleFontDefinition other)
	{
		return default(bool);
	}

	[Token(Token = "0x600167C")]
	[Address(RVA = "0x4D879A0", Offset = "0x4D879A0", VA = "0x4D879A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600167D")]
	[Address(RVA = "0x4D87A10", Offset = "0x4D87A10", VA = "0x4D87A10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
