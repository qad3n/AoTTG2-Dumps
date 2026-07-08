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
		[Address(RVA = "0x4585260", Offset = "0x4585260", VA = "0x4585260", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000428")]
	internal override Type TargetType
	{
		[Token(Token = "0x6001271")]
		[Address(RVA = "0x4585270", Offset = "0x4585270", VA = "0x4585270", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001272")]
	[Address(RVA = "0x45852B0", Offset = "0x45852B0", VA = "0x45852B0", Slot = "18")]
	internal override object FromString(string value, int radix)
	{
		return null;
	}

	[Token(Token = "0x6001273")]
	[Address(RVA = "0x4585350", Offset = "0x4585350", VA = "0x4585350", Slot = "19")]
	internal override object FromString(string value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6001274")]
	[Address(RVA = "0x4585380", Offset = "0x4585380", VA = "0x4585380", Slot = "20")]
	internal override string ToString(object value, NumberFormatInfo formatInfo)
	{
		return null;
	}

	[Token(Token = "0x6001275")]
	[Address(RVA = "0x4585410", Offset = "0x4585410", VA = "0x4585410")]
	public SingleConverter()
	{
	}
}
