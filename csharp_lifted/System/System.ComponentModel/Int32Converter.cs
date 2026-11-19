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

[Token(Token = "0x2000175")]
public class Int32Converter : BaseNumberConverter
{
	[Token(Token = "0x17000201")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000948")]
		[Address(RVA = "0x6234C50", Offset = "0x6233C50", VA = "0x6234C50", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x6234C80", Offset = "0x6233C80", VA = "0x6234C80", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x6234CF0", Offset = "0x6233CF0", VA = "0x6234CF0", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x6234D20", Offset = "0x6233D20", VA = "0x6234D20", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x6234DA0", Offset = "0x6233DA0", VA = "0x6234DA0")]
	public Int32Converter()
	{
	}
}
