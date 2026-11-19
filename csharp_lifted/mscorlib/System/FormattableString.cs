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
		[Token(Token = "0x60006B9")]
		get;
	}

	[Token(Token = "0x17000089")]
	public abstract int ArgumentCount
	{
		[Token(Token = "0x60006BB")]
		get;
	}

	[Token(Token = "0x60006BA")]
	public abstract object[] GetArguments();

	[Token(Token = "0x60006BC")]
	public abstract object GetArgument(int index);

	[Token(Token = "0x60006BD")]
	public abstract string ToString(IFormatProvider formatProvider);

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x549ED20", Offset = "0x549DD20", VA = "0x549ED20", Slot = "4")]
	private string System_002EIFormattable_002EToString(string ignored, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x549ED40", Offset = "0x549DD40", VA = "0x549ED40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x549EDA0", Offset = "0x549DDA0", VA = "0x549EDA0")]
	protected FormattableString()
	{
	}
}
