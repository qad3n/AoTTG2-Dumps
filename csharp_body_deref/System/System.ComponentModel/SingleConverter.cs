// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.SingleConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002D4")]
public class SingleConverter : BaseNumberConverter
{
	[Token(Token = "0x17000427")]
	internal override bool AllowHex
	{
		[Token(Token = "0x6001270")]
		[Address(RVA = "0x48AA360", Offset = "0x48AA360", VA = "0x48AA360", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000428")]
	internal override Type TargetType
	{
		[Token(Token = "0x6001271")]
		[Address(RVA = "0x48AA370", Offset = "0x48AA370", VA = "0x48AA370", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001272")]
	[Address(RVA = "0x48AA3B0", Offset = "0x48AA3B0", VA = "0x48AA3B0", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6001273")]
	[Address(RVA = "0x48AA450", Offset = "0x48AA450", VA = "0x48AA450", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6001274")]
	[Address(RVA = "0x48AA480", Offset = "0x48AA480", VA = "0x48AA480", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6001275")]
	[Address(RVA = "0x48AA510", Offset = "0x48AA510", VA = "0x48AA510")]
	public SingleConverter()
	{
	}
}
