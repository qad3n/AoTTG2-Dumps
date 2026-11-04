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

[Token(Token = "0x200017A")]
public class ByteConverter : BaseNumberConverter
{
	[Token(Token = "0x170001E0")]
	internal override Type TargetType
	{
		[Token(Token = "0x60009A3")]
		[Address(RVA = "0x2893600", Offset = "0x2891C00", VA = "0x182893600", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x28934D0", Offset = "0x2891AD0", VA = "0x1828934D0", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x2893540", Offset = "0x2891B40", VA = "0x182893540", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x2893570", Offset = "0x2891B70", VA = "0x182893570", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public ByteConverter()
	{
	}
}
