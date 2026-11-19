// ==================== AoTTG2 cross-reference ====================
// Type: System.IConvertible
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000CE")]
[CLSCompliant(false)]
public interface IConvertible
{
	[Token(Token = "0x60007A5")]
	TypeCode GetTypeCode();

	[Token(Token = "0x60007A6")]
	bool ToBoolean(IFormatProvider provider);

	[Token(Token = "0x60007A7")]
	char ToChar(IFormatProvider provider);

	[Token(Token = "0x60007A8")]
	sbyte ToSByte(IFormatProvider provider);

	[Token(Token = "0x60007A9")]
	byte ToByte(IFormatProvider provider);

	[Token(Token = "0x60007AA")]
	short ToInt16(IFormatProvider provider);

	[Token(Token = "0x60007AB")]
	ushort ToUInt16(IFormatProvider provider);

	[Token(Token = "0x60007AC")]
	int ToInt32(IFormatProvider provider);

	[Token(Token = "0x60007AD")]
	uint ToUInt32(IFormatProvider provider);

	[Token(Token = "0x60007AE")]
	long ToInt64(IFormatProvider provider);

	[Token(Token = "0x60007AF")]
	ulong ToUInt64(IFormatProvider provider);

	[Token(Token = "0x60007B0")]
	float ToSingle(IFormatProvider provider);

	[Token(Token = "0x60007B1")]
	double ToDouble(IFormatProvider provider);

	[Token(Token = "0x60007B2")]
	decimal ToDecimal(IFormatProvider provider);

	[Token(Token = "0x60007B3")]
	DateTime ToDateTime(IFormatProvider provider);

	[Token(Token = "0x60007B4")]
	string ToString(IFormatProvider provider);

	[Token(Token = "0x60007B5")]
	object ToType(Type conversionType, IFormatProvider provider);
}
