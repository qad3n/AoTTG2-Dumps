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
		[Address(RVA = "0x50AF0E0", Offset = "0x50AF0E0", VA = "0x50AF0E0", Slot = "4")]
		get
		{
			return default(FontDefinition);
		}
		[Token(Token = "0x6001671")]
		[Address(RVA = "0x50AF100", Offset = "0x50AF100", VA = "0x50AF100", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000640")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001672")]
		[Address(RVA = "0x50AF120", Offset = "0x50AF120", VA = "0x50AF120", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001673")]
		[Address(RVA = "0x50AF130", Offset = "0x50AF130", VA = "0x50AF130", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001674")]
	[Address(RVA = "0x50AF140", Offset = "0x50AF140", VA = "0x50AF140")]
	public StyleFontDefinition(FontDefinition f)
	{
	}

	[Token(Token = "0x6001675")]
	[Address(RVA = "0x50AF180", Offset = "0x50AF180", VA = "0x50AF180")]
	public StyleFontDefinition(FontAsset f)
	{
	}

	[Token(Token = "0x6001676")]
	[Address(RVA = "0x50AF1E0", Offset = "0x50AF1E0", VA = "0x50AF1E0")]
	public StyleFontDefinition(Font f)
	{
	}

	[Token(Token = "0x6001677")]
	[Address(RVA = "0x50AF1B0", Offset = "0x50AF1B0", VA = "0x50AF1B0")]
	internal StyleFontDefinition(FontAsset f, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001678")]
	[Address(RVA = "0x50AF210", Offset = "0x50AF210", VA = "0x50AF210")]
	internal StyleFontDefinition(Font f, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001679")]
	[Address(RVA = "0x50AF160", Offset = "0x50AF160", VA = "0x50AF160")]
	internal StyleFontDefinition(FontDefinition f, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600167A")]
	[Address(RVA = "0x50AF240", Offset = "0x50AF240", VA = "0x50AF240")]
	public static implicit operator StyleFontDefinition(FontDefinition f)
	{
		return default(StyleFontDefinition);
	}

	[Token(Token = "0x600167B")]
	[Address(RVA = "0x50AF2A0", Offset = "0x50AF2A0", VA = "0x50AF2A0", Slot = "8")]
	public bool Equals(StyleFontDefinition other)
	{
		return default(bool);
	}

	[Token(Token = "0x600167C")]
	[Address(RVA = "0x50AF2D0", Offset = "0x50AF2D0", VA = "0x50AF2D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600167D")]
	[Address(RVA = "0x50AF340", Offset = "0x50AF340", VA = "0x50AF340", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
