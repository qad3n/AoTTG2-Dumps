// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.UInt16Converter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001EA")]
public class UInt16Converter : BaseNumberConverter
{
	[Token(Token = "0x1700029D")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000CF4")]
		[Address(RVA = "0x28CAEF0", Offset = "0x28C94F0", VA = "0x1828CAEF0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x28CADC0", Offset = "0x28C93C0", VA = "0x1828CADC0", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x28CAE30", Offset = "0x28C9430", VA = "0x1828CAE30", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x28CAE60", Offset = "0x28C9460", VA = "0x1828CAE60", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x12BD610", Offset = "0x12BBC10", VA = "0x1812BD610")]
	public UInt16Converter()
	{
	}
}
