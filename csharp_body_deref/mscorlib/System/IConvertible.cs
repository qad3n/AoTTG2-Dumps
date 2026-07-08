using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000CE")]
[CLSCompliant(false)]
public interface IConvertible
{
	[Token(Token = "0x6000798")]
	TypeCode GetTypeCode();

	[Token(Token = "0x6000799")]
	bool ToBoolean(IFormatProvider provider);

	[Token(Token = "0x600079A")]
	char ToChar(IFormatProvider provider);

	[Token(Token = "0x600079B")]
	sbyte ToSByte(IFormatProvider provider);

	[Token(Token = "0x600079C")]
	byte ToByte(IFormatProvider provider);

	[Token(Token = "0x600079D")]
	short ToInt16(IFormatProvider provider);

	[Token(Token = "0x600079E")]
	ushort ToUInt16(IFormatProvider provider);

	[Token(Token = "0x600079F")]
	int ToInt32(IFormatProvider provider);

	[Token(Token = "0x60007A0")]
	uint ToUInt32(IFormatProvider provider);

	[Token(Token = "0x60007A1")]
	long ToInt64(IFormatProvider provider);

	[Token(Token = "0x60007A2")]
	ulong ToUInt64(IFormatProvider provider);

	[Token(Token = "0x60007A3")]
	float ToSingle(IFormatProvider provider);

	[Token(Token = "0x60007A4")]
	double ToDouble(IFormatProvider provider);

	[Token(Token = "0x60007A5")]
	decimal ToDecimal(IFormatProvider provider);

	[Token(Token = "0x60007A6")]
	DateTime ToDateTime(IFormatProvider provider);

	[Token(Token = "0x60007A7")]
	string ToString(IFormatProvider provider);

	[Token(Token = "0x60007A8")]
	object ToType(Type conversionType, IFormatProvider provider);
}
