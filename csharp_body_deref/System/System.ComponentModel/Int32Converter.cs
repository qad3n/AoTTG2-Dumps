// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Int32Converter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001B4")]
public class Int32Converter : BaseNumberConverter
{
	[Token(Token = "0x17000230")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000B08")]
		[Address(RVA = "0x289F200", Offset = "0x289D800", VA = "0x18289F200", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x289F0D0", Offset = "0x289D6D0", VA = "0x18289F0D0", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x289F140", Offset = "0x289D740", VA = "0x18289F140", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000B0B")]
	[Address(RVA = "0x289F170", Offset = "0x289D770", VA = "0x18289F170", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public Int32Converter()
	{
	}
}
