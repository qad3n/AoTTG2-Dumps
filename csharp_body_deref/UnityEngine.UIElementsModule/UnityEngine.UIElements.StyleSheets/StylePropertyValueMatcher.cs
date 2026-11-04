// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x31F49C0", Offset = "0x31F2FC0", VA = "0x1831F49C0")]
		get
		{
			return default(StylePropertyValue);
		}
	}

	[Token(Token = "0x17000B76")]
	public override int valueCount
	{
		[Token(Token = "0x6002DC8")]
		[Address(RVA = "0x31F4B10", Offset = "0x31F3110", VA = "0x1831F4B10", Slot = "17")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B77")]
	public override bool isCurrentVariable
	{
		[Token(Token = "0x6002DC9")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B78")]
	public override bool isCurrentComma
	{
		[Token(Token = "0x6002DCA")]
		[Address(RVA = "0x31F4A60", Offset = "0x31F3060", VA = "0x1831F4A60", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002DCB")]
	[Address(RVA = "0x31F4650", Offset = "0x31F2C50", VA = "0x1831F4650")]
	public MatchResult Match(Expression exp, List<StylePropertyValue> values)
	{
		return default(MatchResult);
	}

	[Token(Token = "0x6002DCC")]
	[Address(RVA = "0x31F3FD0", Offset = "0x31F25D0", VA = "0x1831F3FD0", Slot = "4")]
	protected override bool MatchKeyword(string keyword)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DCD")]
	[Address(RVA = "0x31F41F0", Offset = "0x31F27F0", VA = "0x1831F41F0", Slot = "5")]
	protected override bool MatchNumber(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DCE")]
	[Address(RVA = "0x31F3F30", Offset = "0x31F2530", VA = "0x1831F3F30", Slot = "6")]
	protected override bool MatchInteger()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DCF")]
	[Address(RVA = "0x31F40E0", Offset = "0x31F26E0", VA = "0x1831F40E0", Slot = "7")]
	protected override bool MatchLength()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD0")]
	[Address(RVA = "0x31F42F0", Offset = "0x31F28F0", VA = "0x1831F42F0", Slot = "8")]
	protected override bool MatchPercentage()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD1")]
	[Address(RVA = "0x31F3B00", Offset = "0x31F2100", VA = "0x1831F3B00", Slot = "9")]
	protected override bool MatchColor()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD2")]
	[Address(RVA = "0x31F4400", Offset = "0x31F2A00", VA = "0x1831F4400", Slot = "10")]
	protected override bool MatchResource()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD3")]
	[Address(RVA = "0x31F4590", Offset = "0x31F2B90", VA = "0x1831F4590", Slot = "11")]
	protected override bool MatchUrl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD4")]
	[Address(RVA = "0x31F44A0", Offset = "0x31F2AA0", VA = "0x1831F44A0", Slot = "12")]
	protected override bool MatchTime()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD5")]
	[Address(RVA = "0x31F3DE0", Offset = "0x31F23E0", VA = "0x1831F3DE0", Slot = "13")]
	protected override bool MatchFilterFunction()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD6")]
	[Address(RVA = "0x31F3DE0", Offset = "0x31F23E0", VA = "0x1831F3DE0", Slot = "14")]
	protected override bool MatchMaterialPropertyValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD7")]
	[Address(RVA = "0x31F3C90", Offset = "0x31F2290", VA = "0x1831F3C90", Slot = "16")]
	protected override bool MatchCustomIdent()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD8")]
	[Address(RVA = "0x31F39F0", Offset = "0x31F1FF0", VA = "0x1831F39F0", Slot = "15")]
	protected override bool MatchAngle()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD9")]
	[Address(RVA = "0x31F4910", Offset = "0x31F2F10", VA = "0x1831F4910")]
	public StylePropertyValueMatcher()
	{
	}
}
