// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.UInt32Converter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001AC")]
public class UInt32Converter : BaseNumberConverter
{
	[Token(Token = "0x1700026F")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000B39")]
		[Address(RVA = "0x624B740", Offset = "0x624A740", VA = "0x624B740", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x624B770", Offset = "0x624A770", VA = "0x624B770", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x624B7E0", Offset = "0x624A7E0", VA = "0x624B7E0", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x624B810", Offset = "0x624A810", VA = "0x624B810", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x624B890", Offset = "0x624A890", VA = "0x624B890")]
	public UInt32Converter()
	{
	}
}
