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
		[Address(RVA = "0x456CA20", Offset = "0x456CA20", VA = "0x456CA20", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700038D")]
	internal override Type TargetType
	{
		[Token(Token = "0x6001004")]
		[Address(RVA = "0x456CA30", Offset = "0x456CA30", VA = "0x456CA30", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001005")]
	[Address(RVA = "0x456CA70", Offset = "0x456CA70", VA = "0x456CA70", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x456CB10", Offset = "0x456CB10", VA = "0x456CB10", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6001007")]
	[Address(RVA = "0x456CB40", Offset = "0x456CB40", VA = "0x456CB40", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6001008")]
	[Address(RVA = "0x456CBD0", Offset = "0x456CBD0", VA = "0x456CBD0")]
	public DoubleConverter()
	{
	}
}
