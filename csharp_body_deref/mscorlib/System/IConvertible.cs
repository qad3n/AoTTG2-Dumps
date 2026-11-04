// ==================== AoTTG2 cross-reference ====================
// Type: System.IConvertible
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000F6")]
[CLSCompliant(false)]
public interface IConvertible
{
	[Token(Token = "0x60007CA")]
	TypeCode GetTypeCode();

	[Token(Token = "0x60007CB")]
	bool ToBoolean(IFormatProvider provider);

	[Token(Token = "0x60007CC")]
	char ToChar(IFormatProvider provider);

	[Token(Token = "0x60007CD")]
	sbyte ToSByte(IFormatProvider provider);

	[Token(Token = "0x60007CE")]
	byte ToByte(IFormatProvider provider);

	[Token(Token = "0x60007CF")]
	short ToInt16(IFormatProvider provider);

	[Token(Token = "0x60007D0")]
	ushort ToUInt16(IFormatProvider provider);

	[Token(Token = "0x60007D1")]
	int ToInt32(IFormatProvider provider);

	[Token(Token = "0x60007D2")]
	uint ToUInt32(IFormatProvider provider);

	[Token(Token = "0x60007D3")]
	long ToInt64(IFormatProvider provider);

	[Token(Token = "0x60007D4")]
	ulong ToUInt64(IFormatProvider provider);

	[Token(Token = "0x60007D5")]
	float ToSingle(IFormatProvider provider);

	[Token(Token = "0x60007D6")]
	double ToDouble(IFormatProvider provider);

	[Token(Token = "0x60007D7")]
	decimal ToDecimal(IFormatProvider provider);

	[Token(Token = "0x60007D8")]
	DateTime ToDateTime(IFormatProvider provider);

	[Token(Token = "0x60007D9")]
	string ToString(IFormatProvider provider);

	[Token(Token = "0x60007DA")]
	object ToType(Type conversionType, IFormatProvider provider);
}
