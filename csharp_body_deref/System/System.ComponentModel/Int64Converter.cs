// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Int64Converter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001B5")]
public class Int64Converter : BaseNumberConverter
{
	[Token(Token = "0x17000231")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000B0D")]
		[Address(RVA = "0x24C1A80", Offset = "0x24C0080", VA = "0x1824C1A80", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x289F270", Offset = "0x289D870", VA = "0x18289F270", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x289F240", Offset = "0x289D840", VA = "0x18289F240", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x289F2E0", Offset = "0x289D8E0", VA = "0x18289F2E0", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public Int64Converter()
	{
	}
}
