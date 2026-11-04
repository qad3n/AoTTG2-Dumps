// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleFontDefinition
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x3113B20", Offset = "0x3112120", VA = "0x183113B20", Slot = "4")]
		get
		{
			return default(FontDefinition);
		}
		[Token(Token = "0x6002030")]
		[Address(RVA = "0x3113C00", Offset = "0x3112200", VA = "0x183113C00", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008D2")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6002031")]
		[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6002032")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6002033")]
	[Address(RVA = "0x3113A00", Offset = "0x3112000", VA = "0x183113A00")]
	public StyleFontDefinition(FontDefinition f)
	{
	}

	[Token(Token = "0x6002034")]
	[Address(RVA = "0x31139C0", Offset = "0x3111FC0", VA = "0x1831139C0")]
	public StyleFontDefinition(FontAsset f)
	{
	}

	[Token(Token = "0x6002035")]
	[Address(RVA = "0x3113A60", Offset = "0x3112060", VA = "0x183113A60")]
	public StyleFontDefinition(Font f)
	{
	}

	[Token(Token = "0x6002036")]
	[Address(RVA = "0x31139A0", Offset = "0x3111FA0", VA = "0x1831139A0")]
	public StyleFontDefinition(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002037")]
	[Address(RVA = "0x3113AA0", Offset = "0x31120A0", VA = "0x183113AA0")]
	internal StyleFontDefinition(object obj, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002038")]
	[Address(RVA = "0x3113A20", Offset = "0x3112020", VA = "0x183113A20")]
	internal StyleFontDefinition(FontAsset f, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002039")]
	[Address(RVA = "0x3113AE0", Offset = "0x31120E0", VA = "0x183113AE0")]
	internal StyleFontDefinition(Font f, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600203A")]
	[Address(RVA = "0x3113980", Offset = "0x3111F80", VA = "0x183113980")]
	internal StyleFontDefinition(FontDefinition f, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600203B")]
	[Address(RVA = "0x3113B40", Offset = "0x3112140", VA = "0x183113B40")]
	public static implicit operator StyleFontDefinition(StyleKeyword keyword)
	{
		return default(StyleFontDefinition);
	}

	[Token(Token = "0x600203C")]
	[Address(RVA = "0x3113BA0", Offset = "0x31121A0", VA = "0x183113BA0")]
	public static implicit operator StyleFontDefinition(FontDefinition f)
	{
		return default(StyleFontDefinition);
	}

	[Token(Token = "0x600203D")]
	[Address(RVA = "0x3113900", Offset = "0x3111F00", VA = "0x183113900", Slot = "8")]
	public bool Equals(StyleFontDefinition other)
	{
		return default(bool);
	}

	[Token(Token = "0x600203E")]
	[Address(RVA = "0x3113850", Offset = "0x3111E50", VA = "0x183113850", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600203F")]
	[Address(RVA = "0x3113950", Offset = "0x3111F50", VA = "0x183113950", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
