// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.UInt64Converter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001EC")]
public class UInt64Converter : BaseNumberConverter
{
	[Token(Token = "0x1700029F")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000CFE")]
		[Address(RVA = "0x28CB1D0", Offset = "0x28C97D0", VA = "0x1828CB1D0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x28CB0D0", Offset = "0x28C96D0", VA = "0x1828CB0D0", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x28CB0A0", Offset = "0x28C96A0", VA = "0x1828CB0A0", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x28CB140", Offset = "0x28C9740", VA = "0x1828CB140", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x12BD610", Offset = "0x12BBC10", VA = "0x1812BD610")]
	public UInt64Converter()
	{
	}
}
