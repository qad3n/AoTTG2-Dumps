// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.UIElements.StyleSheets.Syntax;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x200063F")]
internal class StylePropertyValueMatcher : BaseStyleMatcher
{
	[Token(Token = "0x40017DD")]
	[FieldOffset(Offset = "0x20")]
	private List<StylePropertyValue> m_Values;

	[Token(Token = "0x17000B75")]
	private StylePropertyValue current
	{
		[Token(Token = "0x6002DC7")]
		[Address(RVA = "0x6BF91A0", Offset = "0x6BF81A0", VA = "0x6BF91A0")]
		get
		{
			return default(StylePropertyValue);
		}
	}

	[Token(Token = "0x17000B76")]
	public override int valueCount
	{
		[Token(Token = "0x6002DC8")]
		[Address(RVA = "0x6BF9210", Offset = "0x6BF8210", VA = "0x6BF9210", Slot = "17")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B77")]
	public override bool isCurrentVariable
	{
		[Token(Token = "0x6002DC9")]
		[Address(RVA = "0x6BF9250", Offset = "0x6BF8250", VA = "0x6BF9250", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B78")]
	public override bool isCurrentComma
	{
		[Token(Token = "0x6002DCA")]
		[Address(RVA = "0x6BF9260", Offset = "0x6BF8260", VA = "0x6BF9260", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002DCB")]
	[Address(RVA = "0x6BF92F0", Offset = "0x6BF82F0", VA = "0x6BF92F0")]
	public MatchResult Match(Expression exp, List<StylePropertyValue> values)
	{
		return default(MatchResult);
	}

	[Token(Token = "0x6002DCC")]
	[Address(RVA = "0x6BF95D0", Offset = "0x6BF85D0", VA = "0x6BF95D0", Slot = "4")]
	protected override bool MatchKeyword(string keyword)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DCD")]
	[Address(RVA = "0x6BF96C0", Offset = "0x6BF86C0", VA = "0x6BF96C0", Slot = "5")]
	protected override bool MatchNumber(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DCE")]
	[Address(RVA = "0x6BF9790", Offset = "0x6BF8790", VA = "0x6BF9790", Slot = "6")]
	protected override bool MatchInteger()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DCF")]
	[Address(RVA = "0x6BF9820", Offset = "0x6BF8820", VA = "0x6BF9820", Slot = "7")]
	protected override bool MatchLength()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD0")]
	[Address(RVA = "0x6BF9960", Offset = "0x6BF8960", VA = "0x6BF9960", Slot = "8")]
	protected override bool MatchPercentage()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD1")]
	[Address(RVA = "0x6BF9AA0", Offset = "0x6BF8AA0", VA = "0x6BF9AA0", Slot = "9")]
	protected override bool MatchColor()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD2")]
	[Address(RVA = "0x6BF9BB0", Offset = "0x6BF8BB0", VA = "0x6BF9BB0", Slot = "10")]
	protected override bool MatchResource()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD3")]
	[Address(RVA = "0x6BF9C40", Offset = "0x6BF8C40", VA = "0x6BF9C40", Slot = "11")]
	protected override bool MatchUrl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD4")]
	[Address(RVA = "0x6BF9CE0", Offset = "0x6BF8CE0", VA = "0x6BF9CE0", Slot = "12")]
	protected override bool MatchTime()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD5")]
	[Address(RVA = "0x6BF9D90", Offset = "0x6BF8D90", VA = "0x6BF9D90", Slot = "13")]
	protected override bool MatchFilterFunction()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD6")]
	[Address(RVA = "0x6BF9EC0", Offset = "0x6BF8EC0", VA = "0x6BF9EC0", Slot = "14")]
	protected override bool MatchMaterialPropertyValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD7")]
	[Address(RVA = "0x6BF9FF0", Offset = "0x6BF8FF0", VA = "0x6BF9FF0", Slot = "16")]
	protected override bool MatchCustomIdent()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD8")]
	[Address(RVA = "0x6BFA120", Offset = "0x6BF9120", VA = "0x6BFA120", Slot = "15")]
	protected override bool MatchAngle()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD9")]
	[Address(RVA = "0x6BFA270", Offset = "0x6BF9270", VA = "0x6BFA270")]
	public StylePropertyValueMatcher()
	{
	}
}
