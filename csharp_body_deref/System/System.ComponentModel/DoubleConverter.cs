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

[Token(Token = "0x2000197")]
public class DoubleConverter : BaseNumberConverter
{
	[Token(Token = "0x170001FB")]
	internal override bool AllowHex
	{
		[Token(Token = "0x6000A4B")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001FC")]
	internal override Type TargetType
	{
		[Token(Token = "0x6000A4C")]
		[Address(RVA = "0x289BE50", Offset = "0x289A450", VA = "0x18289BE50", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x289BCF0", Offset = "0x289A2F0", VA = "0x18289BCF0", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x289BD90", Offset = "0x289A390", VA = "0x18289BD90", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x289BDC0", Offset = "0x289A3C0", VA = "0x18289BDC0", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public DoubleConverter()
	{
	}
}
