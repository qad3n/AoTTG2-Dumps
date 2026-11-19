// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ByteConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200013B")]
public class ByteConverter : BaseNumberConverter
{
	[Token(Token = "0x170001B1")]
	internal override Type TargetType
	{
		[Token(Token = "0x60007E3")]
		[Address(RVA = "0x62270B0", Offset = "0x62260B0", VA = "0x62270B0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x62270E0", Offset = "0x62260E0", VA = "0x62270E0", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x6227150", Offset = "0x6226150", VA = "0x6227150", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x6227180", Offset = "0x6226180", VA = "0x6227180", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x6227200", Offset = "0x6226200", VA = "0x6227200")]
	public ByteConverter()
	{
	}
}
