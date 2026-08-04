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
		[Address(RVA = "0x4FCF7B0", Offset = "0x4FCF7B0", VA = "0x4FCF7B0")]
		get
		{
			return default(StylePropertyValue);
		}
	}

	[Token(Token = "0x17000859")]
	public override int valueCount
	{
		[Token(Token = "0x600205E")]
		[Address(RVA = "0x4FCF820", Offset = "0x4FCF820", VA = "0x4FCF820", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700085A")]
	public override bool isCurrentVariable
	{
		[Token(Token = "0x600205F")]
		[Address(RVA = "0x4FCF860", Offset = "0x4FCF860", VA = "0x4FCF860", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700085B")]
	public override bool isCurrentComma
	{
		[Token(Token = "0x6002060")]
		[Address(RVA = "0x4FCF870", Offset = "0x4FCF870", VA = "0x4FCF870", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002061")]
	[Address(RVA = "0x4FCF910", Offset = "0x4FCF910", VA = "0x4FCF910")]
	public MatchResult Match(Expression exp, List<StylePropertyValue> values)
	{
		return default(MatchResult);
	}

	[Token(Token = "0x6002062")]
	[Address(RVA = "0x4FCFC10", Offset = "0x4FCFC10", VA = "0x4FCFC10", Slot = "4")]
	protected override bool MatchKeyword(string keyword)
	{
		return default(bool);
	}

	[Token(Token = "0x6002063")]
	[Address(RVA = "0x4FCFD10", Offset = "0x4FCFD10", VA = "0x4FCFD10", Slot = "5")]
	protected override bool MatchNumber()
	{
		return default(bool);
	}

	[Token(Token = "0x6002064")]
	[Address(RVA = "0x4FCFDB0", Offset = "0x4FCFDB0", VA = "0x4FCFDB0", Slot = "6")]
	protected override bool MatchInteger()
	{
		return default(bool);
	}

	[Token(Token = "0x6002065")]
	[Address(RVA = "0x4FCFE50", Offset = "0x4FCFE50", VA = "0x4FCFE50", Slot = "7")]
	protected override bool MatchLength()
	{
		return default(bool);
	}

	[Token(Token = "0x6002066")]
	[Address(RVA = "0x4FCFFA0", Offset = "0x4FCFFA0", VA = "0x4FCFFA0", Slot = "8")]
	protected override bool MatchPercentage()
	{
		return default(bool);
	}

	[Token(Token = "0x6002067")]
	[Address(RVA = "0x4FD00F0", Offset = "0x4FD00F0", VA = "0x4FD00F0", Slot = "9")]
	protected override bool MatchColor()
	{
		return default(bool);
	}

	[Token(Token = "0x6002068")]
	[Address(RVA = "0x4FD0210", Offset = "0x4FD0210", VA = "0x4FD0210", Slot = "10")]
	protected override bool MatchResource()
	{
		return default(bool);
	}

	[Token(Token = "0x6002069")]
	[Address(RVA = "0x4FD02B0", Offset = "0x4FD02B0", VA = "0x4FD02B0", Slot = "11")]
	protected override bool MatchUrl()
	{
		return default(bool);
	}

	[Token(Token = "0x600206A")]
	[Address(RVA = "0x4FD0350", Offset = "0x4FD0350", VA = "0x4FD0350", Slot = "12")]
	protected override bool MatchTime()
	{
		return default(bool);
	}

	[Token(Token = "0x600206B")]
	[Address(RVA = "0x4FD0410", Offset = "0x4FD0410", VA = "0x4FD0410", Slot = "14")]
	protected override bool MatchCustomIdent()
	{
		return default(bool);
	}

	[Token(Token = "0x600206C")]
	[Address(RVA = "0x4FD0540", Offset = "0x4FD0540", VA = "0x4FD0540", Slot = "13")]
	protected override bool MatchAngle()
	{
		return default(bool);
	}

	[Token(Token = "0x600206D")]
	[Address(RVA = "0x4FD0690", Offset = "0x4FD0690", VA = "0x4FD0690")]
	public StylePropertyValueMatcher()
	{
	}
}
