// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DoubleConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200028C")]
public class DoubleConverter : BaseNumberConverter
{
	[Token(Token = "0x1700038C")]
	internal override bool AllowHex
	{
		[Token(Token = "0x6001003")]
		[Address(RVA = "0x4891B20", Offset = "0x4891B20", VA = "0x4891B20", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700038D")]
	internal override Type TargetType
	{
		[Token(Token = "0x6001004")]
		[Address(RVA = "0x4891B30", Offset = "0x4891B30", VA = "0x4891B30", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001005")]
	[Address(RVA = "0x4891B70", Offset = "0x4891B70", VA = "0x4891B70", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x4891C10", Offset = "0x4891C10", VA = "0x4891C10", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6001007")]
	[Address(RVA = "0x4891C40", Offset = "0x4891C40", VA = "0x4891C40", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6001008")]
	[Address(RVA = "0x4891CD0", Offset = "0x4891CD0", VA = "0x4891CD0")]
	public DoubleConverter()
	{
	}
}
