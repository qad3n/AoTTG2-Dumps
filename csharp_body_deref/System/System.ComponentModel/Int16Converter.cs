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

[Token(Token = "0x2000174")]
public class Int16Converter : BaseNumberConverter
{
	[Token(Token = "0x17000200")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000943")]
		[Address(RVA = "0x6234AE0", Offset = "0x6233AE0", VA = "0x6234AE0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x6234B10", Offset = "0x6233B10", VA = "0x6234B10", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x6234B80", Offset = "0x6233B80", VA = "0x6234B80", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x6234BB0", Offset = "0x6233BB0", VA = "0x6234BB0", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x6234C40", Offset = "0x6233C40", VA = "0x6234C40")]
	public Int16Converter()
	{
	}
}
