// ==================== AoTTG2 cross-reference ====================
// Type: System.FormattableString
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3C9B010", Offset = "0x3C9B010", VA = "0x3C9B010", Slot = "4")]
	private string System_002EIFormattable_002EToString(string ignored, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x3C9B030", Offset = "0x3C9B030", VA = "0x3C9B030", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x3C9B090", Offset = "0x3C9B090", VA = "0x3C9B090")]
	protected FormattableString()
	{
	}
}
