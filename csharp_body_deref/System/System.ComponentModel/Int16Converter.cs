// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Int16Converter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001B3")]
public class Int16Converter : BaseNumberConverter
{
	[Token(Token = "0x1700022F")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000B03")]
		[Address(RVA = "0x289F090", Offset = "0x289D690", VA = "0x18289F090", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x289EF90", Offset = "0x289D590", VA = "0x18289EF90", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x289EF60", Offset = "0x289D560", VA = "0x18289EF60", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x289F000", Offset = "0x289D600", VA = "0x18289F000", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public Int16Converter()
	{
	}
}
