using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000B1")]
public abstract class FormattableString : IFormattable
{
	[Token(Token = "0x17000088")]
	public abstract string Format
	{
		[Token(Token = "0x60006AF")]
		get;
	}

	[Token(Token = "0x17000089")]
	public abstract int ArgumentCount
	{
		[Token(Token = "0x60006B1")]
		get;
	}

	[Token(Token = "0x60006B0")]
	public abstract object[] GetArguments();

	[Token(Token = "0x60006B2")]
	public abstract object GetArgument(int index);

	[Token(Token = "0x60006B3")]
	public abstract string ToString(IFormatProvider formatProvider);

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x4FB54F0", Offset = "0x4FB54F0", VA = "0x4FB54F0", Slot = "4")]
	private string System_002EIFormattable_002EToString(string ignored, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x4FB5510", Offset = "0x4FB5510", VA = "0x4FB5510", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x4FB5570", Offset = "0x4FB5570", VA = "0x4FB5570")]
	protected FormattableString()
	{
	}
}
