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

[Token(Token = "0x20001AD")]
public class UInt64Converter : BaseNumberConverter
{
	[Token(Token = "0x17000270")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000B3E")]
		[Address(RVA = "0x624B8A0", Offset = "0x624A8A0", VA = "0x624B8A0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x624B8D0", Offset = "0x624A8D0", VA = "0x624B8D0", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x624B940", Offset = "0x624A940", VA = "0x624B940", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x624B970", Offset = "0x624A970", VA = "0x624B970", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x624B9F0", Offset = "0x624A9F0", VA = "0x624B9F0")]
	public UInt64Converter()
	{
	}
}
