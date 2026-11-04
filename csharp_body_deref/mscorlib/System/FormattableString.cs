// ==================== AoTTG2 cross-reference ====================
// Type: System.FormattableString
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000D9")]
public abstract class FormattableString : IFormattable
{
	[Token(Token = "0x17000088")]
	public abstract string Format
	{
		[Token(Token = "0x60006DE")]
		get;
	}

	[Token(Token = "0x17000089")]
	public abstract int ArgumentCount
	{
		[Token(Token = "0x60006E0")]
		get;
	}

	[Token(Token = "0x60006DF")]
	public abstract object[] GetArguments();

	[Token(Token = "0x60006E1")]
	public abstract object GetArgument(int index);

	[Token(Token = "0x60006E2")]
	public abstract string ToString(IFormatProvider formatProvider);

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x1B22F50", Offset = "0x1B21550", VA = "0x181B22F50", Slot = "4")]
	private string System_002EIFormattable_002EToString(string ignored, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x1B22F70", Offset = "0x1B21570", VA = "0x181B22F70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected FormattableString()
	{
	}
}
