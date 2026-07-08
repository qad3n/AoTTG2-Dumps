using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.UIElements.StyleSheets.Syntax;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x2000549")]
internal class StylePropertyValueMatcher : BaseStyleMatcher
{
	[Token(Token = "0x4001235")]
	[FieldOffset(Offset = "0x20")]
	private List<StylePropertyValue> m_Values;

	[Token(Token = "0x17000858")]
	private StylePropertyValue current
	{
		[Token(Token = "0x600205D")]
		[Address(RVA = "0x4CA7E80", Offset = "0x4CA7E80", VA = "0x4CA7E80")]
		get
		{
			return default(StylePropertyValue);
		}
	}

	[Token(Token = "0x17000859")]
	public override int valueCount
	{
		[Token(Token = "0x600205E")]
		[Address(RVA = "0x4CA7EF0", Offset = "0x4CA7EF0", VA = "0x4CA7EF0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700085A")]
	public override bool isCurrentVariable
	{
		[Token(Token = "0x600205F")]
		[Address(RVA = "0x4CA7F30", Offset = "0x4CA7F30", VA = "0x4CA7F30", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700085B")]
	public override bool isCurrentComma
	{
		[Token(Token = "0x6002060")]
		[Address(RVA = "0x4CA7F40", Offset = "0x4CA7F40", VA = "0x4CA7F40", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002061")]
	[Address(RVA = "0x4CA7FE0", Offset = "0x4CA7FE0", VA = "0x4CA7FE0")]
	public MatchResult Match(Expression exp, List<StylePropertyValue> values)
	{
		return default(MatchResult);
	}

	[Token(Token = "0x6002062")]
	[Address(RVA = "0x4CA82E0", Offset = "0x4CA82E0", VA = "0x4CA82E0", Slot = "4")]
	protected override bool MatchKeyword(string keyword)
	{
		return default(bool);
	}

	[Token(Token = "0x6002063")]
	[Address(RVA = "0x4CA83E0", Offset = "0x4CA83E0", VA = "0x4CA83E0", Slot = "5")]
	protected override bool MatchNumber()
	{
		return default(bool);
	}

	[Token(Token = "0x6002064")]
	[Address(RVA = "0x4CA8480", Offset = "0x4CA8480", VA = "0x4CA8480", Slot = "6")]
	protected override bool MatchInteger()
	{
		return default(bool);
	}

	[Token(Token = "0x6002065")]
	[Address(RVA = "0x4CA8520", Offset = "0x4CA8520", VA = "0x4CA8520", Slot = "7")]
	protected override bool MatchLength()
	{
		return default(bool);
	}

	[Token(Token = "0x6002066")]
	[Address(RVA = "0x4CA8670", Offset = "0x4CA8670", VA = "0x4CA8670", Slot = "8")]
	protected override bool MatchPercentage()
	{
		return default(bool);
	}

	[Token(Token = "0x6002067")]
	[Address(RVA = "0x4CA87C0", Offset = "0x4CA87C0", VA = "0x4CA87C0", Slot = "9")]
	protected override bool MatchColor()
	{
		return default(bool);
	}

	[Token(Token = "0x6002068")]
	[Address(RVA = "0x4CA88E0", Offset = "0x4CA88E0", VA = "0x4CA88E0", Slot = "10")]
	protected override bool MatchResource()
	{
		return default(bool);
	}

	[Token(Token = "0x6002069")]
	[Address(RVA = "0x4CA8980", Offset = "0x4CA8980", VA = "0x4CA8980", Slot = "11")]
	protected override bool MatchUrl()
	{
		return default(bool);
	}

	[Token(Token = "0x600206A")]
	[Address(RVA = "0x4CA8A20", Offset = "0x4CA8A20", VA = "0x4CA8A20", Slot = "12")]
	protected override bool MatchTime()
	{
		return default(bool);
	}

	[Token(Token = "0x600206B")]
	[Address(RVA = "0x4CA8AE0", Offset = "0x4CA8AE0", VA = "0x4CA8AE0", Slot = "14")]
	protected override bool MatchCustomIdent()
	{
		return default(bool);
	}

	[Token(Token = "0x600206C")]
	[Address(RVA = "0x4CA8C10", Offset = "0x4CA8C10", VA = "0x4CA8C10", Slot = "13")]
	protected override bool MatchAngle()
	{
		return default(bool);
	}

	[Token(Token = "0x600206D")]
	[Address(RVA = "0x4CA8D60", Offset = "0x4CA8D60", VA = "0x4CA8D60")]
	public StylePropertyValueMatcher()
	{
	}
}
