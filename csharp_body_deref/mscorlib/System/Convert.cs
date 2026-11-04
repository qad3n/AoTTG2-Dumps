// ==================== AoTTG2 cross-reference ====================
// Type: System.Convert
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000C7")]
public static class Convert
{
	[Token(Token = "0x40002B3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly sbyte[] s_decodingMap;

	[Token(Token = "0x40002B4")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly Type[] ConvertTypes;

	[Token(Token = "0x40002B5")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Type EnumType;

	[Token(Token = "0x40002B6")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly char[] base64Table;

	[Token(Token = "0x40002B7")]
	[FieldOffset(Offset = "0x20")]
	public static readonly object DBNull;

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x1A86030", Offset = "0x1A84630", VA = "0x181A86030")]
	private static bool TryDecodeFromUtf16(ReadOnlySpan<char> utf16, Span<byte> bytes, out int consumed, out int written)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000502")]
	[Address(RVA = "0x1A7F4D0", Offset = "0x1A7DAD0", VA = "0x181A7F4D0")]
	private static int Decode(ref char encodedChars, ref sbyte decodingMap)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000503")]
	[Address(RVA = "0x1A869A0", Offset = "0x1A84FA0", VA = "0x181A869A0")]
	private static void WriteThreeLowOrderBytes(ref byte destination, int value)
	{
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x1A80590", Offset = "0x1A7EB90", VA = "0x181A80590")]
	public static TypeCode GetTypeCode(object value)
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x1A7EBA0", Offset = "0x1A7D1A0", VA = "0x181A7EBA0")]
	public static object ChangeType(object value, TypeCode typeCode, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x1A7F540", Offset = "0x1A7DB40", VA = "0x181A7F540")]
	internal static object DefaultToType(IConvertible value, Type targetType, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x1A7E220", Offset = "0x1A7C820", VA = "0x181A7E220")]
	public static object ChangeType(object value, Type conversionType)
	{
		return null;
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x1A7E2C0", Offset = "0x1A7C8C0", VA = "0x181A7E2C0")]
	public static object ChangeType(object value, Type conversionType, IFormatProvider provider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000509")]
	[Address(RVA = "0x1A80680", Offset = "0x1A7EC80", VA = "0x181A80680")]
	private static void ThrowCharOverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600050A")]
	[Address(RVA = "0x1A80630", Offset = "0x1A7EC30", VA = "0x181A80630")]
	private static void ThrowByteOverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600050B")]
	[Address(RVA = "0x1A807C0", Offset = "0x1A7EDC0", VA = "0x181A807C0")]
	private static void ThrowSByteOverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600050C")]
	[Address(RVA = "0x1A806D0", Offset = "0x1A7ECD0", VA = "0x181A806D0")]
	private static void ThrowInt16OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600050D")]
	[Address(RVA = "0x1A80810", Offset = "0x1A7EE10", VA = "0x181A80810")]
	private static void ThrowUInt16OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600050E")]
	[Address(RVA = "0x1A80720", Offset = "0x1A7ED20", VA = "0x181A80720")]
	private static void ThrowInt32OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600050F")]
	[Address(RVA = "0x1A80860", Offset = "0x1A7EE60", VA = "0x181A80860")]
	private static void ThrowUInt32OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000510")]
	[Address(RVA = "0x1A80770", Offset = "0x1A7ED70", VA = "0x181A80770")]
	private static void ThrowInt64OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000511")]
	[Address(RVA = "0x1A808B0", Offset = "0x1A7EEB0", VA = "0x181A808B0")]
	private static void ThrowUInt64OverflowException()
	{
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x1A814D0", Offset = "0x1A7FAD0", VA = "0x181A814D0")]
	public static bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x1A81410", Offset = "0x1A7FA10", VA = "0x181A81410")]
	public static bool ToBoolean(object value, IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x1A81400", Offset = "0x1A7FA00", VA = "0x181A81400")]
	[CLSCompliant(false)]
	public static bool ToBoolean(sbyte value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x1A81400", Offset = "0x1A7FA00", VA = "0x181A81400")]
	public static bool ToBoolean(byte value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x1A81580", Offset = "0x1A7FB80", VA = "0x181A81580")]
	public static bool ToBoolean(short value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x1A81580", Offset = "0x1A7FB80", VA = "0x181A81580")]
	[CLSCompliant(false)]
	public static bool ToBoolean(ushort value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x1A814C0", Offset = "0x1A7FAC0", VA = "0x181A814C0")]
	public static bool ToBoolean(int value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x1A814C0", Offset = "0x1A7FAC0", VA = "0x181A814C0")]
	[CLSCompliant(false)]
	public static bool ToBoolean(uint value)
	{
		return default(bool);
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x1A813F0", Offset = "0x1A7F9F0", VA = "0x181A813F0")]
	public static bool ToBoolean(long value)
	{
		return default(bool);
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x1A813F0", Offset = "0x1A7F9F0", VA = "0x181A813F0")]
	[CLSCompliant(false)]
	public static bool ToBoolean(ulong value)
	{
		return default(bool);
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x1A81630", Offset = "0x1A7FC30", VA = "0x181A81630")]
	public static bool ToBoolean(string value, IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x1A81570", Offset = "0x1A7FB70", VA = "0x181A81570")]
	public static bool ToBoolean(float value)
	{
		return default(bool);
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x1A81590", Offset = "0x1A7FB90", VA = "0x181A81590")]
	public static bool ToBoolean(double value)
	{
		return default(bool);
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x1A815B0", Offset = "0x1A7FBB0", VA = "0x181A815B0")]
	public static bool ToBoolean(decimal value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x1A82240", Offset = "0x1A80840", VA = "0x181A82240")]
	public static char ToChar(object value, IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x1A821F0", Offset = "0x1A807F0", VA = "0x181A821F0")]
	[CLSCompliant(false)]
	public static char ToChar(sbyte value)
	{
		return default(char);
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x611460", Offset = "0x60FA60", VA = "0x180611460")]
	public static char ToChar(byte value)
	{
		return default(char);
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x1A82150", Offset = "0x1A80750", VA = "0x181A82150")]
	public static char ToChar(short value)
	{
		return default(char);
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x1A82000", Offset = "0x1A80600", VA = "0x181A82000")]
	[CLSCompliant(false)]
	public static char ToChar(ushort value)
	{
		return default(char);
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x1A822F0", Offset = "0x1A808F0", VA = "0x181A822F0")]
	public static char ToChar(int value)
	{
		return default(char);
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x1A821A0", Offset = "0x1A807A0", VA = "0x181A821A0")]
	[CLSCompliant(false)]
	public static char ToChar(uint value)
	{
		return default(char);
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x1A82010", Offset = "0x1A80610", VA = "0x181A82010")]
	public static char ToChar(long value)
	{
		return default(char);
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x1A81EF0", Offset = "0x1A804F0", VA = "0x181A81EF0")]
	[CLSCompliant(false)]
	public static char ToChar(ulong value)
	{
		return default(char);
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x1A82060", Offset = "0x1A80660", VA = "0x181A82060")]
	public static char ToChar(string value)
	{
		return default(char);
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x1A81F40", Offset = "0x1A80540", VA = "0x181A81F40")]
	public static char ToChar(string value, IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x1A845E0", Offset = "0x1A82BE0", VA = "0x181A845E0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(object value, IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x1A81400", Offset = "0x1A7FA00", VA = "0x181A81400")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(bool value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x1A844F0", Offset = "0x1A82AF0", VA = "0x181A844F0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(char value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x1A84590", Offset = "0x1A82B90", VA = "0x181A84590")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(byte value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x1A84440", Offset = "0x1A82A40", VA = "0x181A84440")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(short value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x1A84230", Offset = "0x1A82830", VA = "0x181A84230")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(ushort value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x1A844A0", Offset = "0x1A82AA0", VA = "0x181A844A0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(int value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x1A840A0", Offset = "0x1A826A0", VA = "0x181A840A0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(uint value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x1A840F0", Offset = "0x1A826F0", VA = "0x181A840F0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(long value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x1A84540", Offset = "0x1A82B40", VA = "0x181A84540")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(ulong value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x1A84150", Offset = "0x1A82750", VA = "0x181A84150")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(float value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x1A84000", Offset = "0x1A82600", VA = "0x181A84000")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(double value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x1A84280", Offset = "0x1A82880", VA = "0x181A84280")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(decimal value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x1A84220", Offset = "0x1A82820", VA = "0x181A84220")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(string value, IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x1A818C0", Offset = "0x1A7FEC0", VA = "0x181A818C0")]
	public static byte ToByte(object value, IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x1A81400", Offset = "0x1A7FA00", VA = "0x181A81400")]
	public static byte ToByte(bool value)
	{
		return default(byte);
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x1A81AE0", Offset = "0x1A800E0", VA = "0x181A81AE0")]
	public static byte ToByte(char value)
	{
		return default(byte);
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x1A81D80", Offset = "0x1A80380", VA = "0x181A81D80")]
	[CLSCompliant(false)]
	public static byte ToByte(sbyte value)
	{
		return default(byte);
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x1A817A0", Offset = "0x1A7FDA0", VA = "0x181A817A0")]
	public static byte ToByte(short value)
	{
		return default(byte);
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x1A81DD0", Offset = "0x1A803D0", VA = "0x181A81DD0")]
	[CLSCompliant(false)]
	public static byte ToByte(ushort value)
	{
		return default(byte);
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x1A81B30", Offset = "0x1A80130", VA = "0x181A81B30")]
	public static byte ToByte(int value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x1A81C20", Offset = "0x1A80220", VA = "0x181A81C20")]
	[CLSCompliant(false)]
	public static byte ToByte(uint value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x1A81A90", Offset = "0x1A80090", VA = "0x181A81A90")]
	public static byte ToByte(long value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x1A81750", Offset = "0x1A7FD50", VA = "0x181A81750")]
	[CLSCompliant(false)]
	public static byte ToByte(ulong value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x1A817F0", Offset = "0x1A7FDF0", VA = "0x181A817F0")]
	public static byte ToByte(float value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x1A819F0", Offset = "0x1A7FFF0", VA = "0x181A819F0")]
	public static byte ToByte(double value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x1A81970", Offset = "0x1A7FF70", VA = "0x181A81970")]
	public static byte ToByte(decimal value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x1A81E20", Offset = "0x1A80420", VA = "0x181A81E20")]
	public static byte ToByte(string value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x1A81B80", Offset = "0x1A80180", VA = "0x181A81B80")]
	public static byte ToByte(string value, IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x1A82FC0", Offset = "0x1A815C0", VA = "0x181A82FC0")]
	public static short ToInt16(object value, IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x1A82F60", Offset = "0x1A81560", VA = "0x181A82F60")]
	public static short ToInt16(bool value)
	{
		return default(short);
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x1A832E0", Offset = "0x1A818E0", VA = "0x181A832E0")]
	public static short ToInt16(char value)
	{
		return default(short);
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x1A83330", Offset = "0x1A81930", VA = "0x181A83330")]
	[CLSCompliant(false)]
	public static short ToInt16(sbyte value)
	{
		return default(short);
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x611460", Offset = "0x60FA60", VA = "0x180611460")]
	public static short ToInt16(byte value)
	{
		return default(short);
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x1A82F70", Offset = "0x1A81570", VA = "0x181A82F70")]
	[CLSCompliant(false)]
	public static short ToInt16(ushort value)
	{
		return default(short);
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x1A83430", Offset = "0x1A81A30", VA = "0x181A83430")]
	public static short ToInt16(int value)
	{
		return default(short);
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x1A83480", Offset = "0x1A81A80", VA = "0x181A83480")]
	[CLSCompliant(false)]
	public static short ToInt16(uint value)
	{
		return default(short);
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x1A83070", Offset = "0x1A81670", VA = "0x181A83070")]
	public static short ToInt16(long value)
	{
		return default(short);
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x1A830D0", Offset = "0x1A816D0", VA = "0x181A830D0")]
	[CLSCompliant(false)]
	public static short ToInt16(ulong value)
	{
		return default(short);
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x1A83360", Offset = "0x1A81960", VA = "0x181A83360")]
	public static short ToInt16(float value)
	{
		return default(short);
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x1A834D0", Offset = "0x1A81AD0", VA = "0x181A834D0")]
	public static short ToInt16(double value)
	{
		return default(short);
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x1A83260", Offset = "0x1A81860", VA = "0x181A83260")]
	public static short ToInt16(decimal value)
	{
		return default(short);
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x1A83340", Offset = "0x1A81940", VA = "0x181A83340")]
	public static short ToInt16(string value, IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x1A85120", Offset = "0x1A83720", VA = "0x181A85120")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(object value, IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x1A82F60", Offset = "0x1A81560", VA = "0x181A82F60")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(bool value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x1A82000", Offset = "0x1A80600", VA = "0x181A82000")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(char value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x1A84F90", Offset = "0x1A83590", VA = "0x181A84F90")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(sbyte value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x611460", Offset = "0x60FA60", VA = "0x180611460")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(byte value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x1A850D0", Offset = "0x1A836D0", VA = "0x181A850D0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(short value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x1A851D0", Offset = "0x1A837D0", VA = "0x181A851D0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(int value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x1A85270", Offset = "0x1A83870", VA = "0x181A85270")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(uint value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x1A85060", Offset = "0x1A83660", VA = "0x181A85060")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(long value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x1A85220", Offset = "0x1A83820", VA = "0x181A85220")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(ulong value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x1A85360", Offset = "0x1A83960", VA = "0x181A85360")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(float value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x1A852C0", Offset = "0x1A838C0", VA = "0x181A852C0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(double value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x1A84FE0", Offset = "0x1A835E0", VA = "0x181A84FE0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(decimal value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x1A850B0", Offset = "0x1A836B0", VA = "0x181A850B0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(string value, IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x1A83850", Offset = "0x1A81E50", VA = "0x181A83850")]
	public static int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x1A83690", Offset = "0x1A81C90", VA = "0x181A83690")]
	public static int ToInt32(object value, IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x1A82F60", Offset = "0x1A81560", VA = "0x181A82F60")]
	public static int ToInt32(bool value)
	{
		return default(int);
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x1A82000", Offset = "0x1A80600", VA = "0x181A82000")]
	public static int ToInt32(char value)
	{
		return default(int);
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x611460", Offset = "0x60FA60", VA = "0x180611460")]
	public static int ToInt32(byte value)
	{
		return default(int);
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x1A83840", Offset = "0x1A81E40", VA = "0x181A83840")]
	public static int ToInt32(short value)
	{
		return default(int);
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x1A82000", Offset = "0x1A80600", VA = "0x181A82000")]
	[CLSCompliant(false)]
	public static int ToInt32(ushort value)
	{
		return default(int);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x1A83640", Offset = "0x1A81C40", VA = "0x181A83640")]
	[CLSCompliant(false)]
	public static int ToInt32(uint value)
	{
		return default(int);
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x1A838F0", Offset = "0x1A81EF0", VA = "0x181A838F0")]
	public static int ToInt32(long value)
	{
		return default(int);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x1A83590", Offset = "0x1A81B90", VA = "0x181A83590")]
	[CLSCompliant(false)]
	public static int ToInt32(ulong value)
	{
		return default(int);
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x1A835E0", Offset = "0x1A81BE0", VA = "0x181A835E0")]
	public static int ToInt32(float value)
	{
		return default(int);
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x1A83740", Offset = "0x1A81D40", VA = "0x181A83740")]
	public static int ToInt32(double value)
	{
		return default(int);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x1A83950", Offset = "0x1A81F50", VA = "0x181A83950")]
	public static int ToInt32(decimal value)
	{
		return default(int);
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x1A83570", Offset = "0x1A81B70", VA = "0x181A83570")]
	public static int ToInt32(string value, IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x1A85620", Offset = "0x1A83C20", VA = "0x181A85620")]
	[CLSCompliant(false)]
	public static uint ToUInt32(object value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x1A85930", Offset = "0x1A83F30", VA = "0x181A85930")]
	[CLSCompliant(false)]
	public static uint ToUInt32(object value, IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x1A82F60", Offset = "0x1A81560", VA = "0x181A82F60")]
	[CLSCompliant(false)]
	public static uint ToUInt32(bool value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x1A82000", Offset = "0x1A80600", VA = "0x181A82000")]
	[CLSCompliant(false)]
	public static uint ToUInt32(char value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x1A858C0", Offset = "0x1A83EC0", VA = "0x181A858C0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(sbyte value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x611460", Offset = "0x60FA60", VA = "0x180611460")]
	[CLSCompliant(false)]
	public static uint ToUInt32(byte value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x1A85430", Offset = "0x1A83A30", VA = "0x181A85430")]
	[CLSCompliant(false)]
	public static uint ToUInt32(short value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x1A82000", Offset = "0x1A80600", VA = "0x181A82000")]
	[CLSCompliant(false)]
	public static uint ToUInt32(ushort value)
	{
		return default(uint);
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x1A855D0", Offset = "0x1A83BD0", VA = "0x181A855D0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(int value)
	{
		return default(uint);
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x1A857B0", Offset = "0x1A83DB0", VA = "0x181A857B0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(long value)
	{
		return default(uint);
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x1A85580", Offset = "0x1A83B80", VA = "0x181A85580")]
	[CLSCompliant(false)]
	public static uint ToUInt32(ulong value)
	{
		return default(uint);
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x1A85480", Offset = "0x1A83A80", VA = "0x181A85480")]
	[CLSCompliant(false)]
	public static uint ToUInt32(float value)
	{
		return default(uint);
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x1A85800", Offset = "0x1A83E00", VA = "0x181A85800")]
	[CLSCompliant(false)]
	public static uint ToUInt32(double value)
	{
		return default(uint);
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x1A859E0", Offset = "0x1A83FE0", VA = "0x181A859E0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(decimal value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x1A85910", Offset = "0x1A83F10", VA = "0x181A85910")]
	[CLSCompliant(false)]
	public static uint ToUInt32(string value, IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x1A83EE0", Offset = "0x1A824E0", VA = "0x181A83EE0")]
	public static long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x1A83D00", Offset = "0x1A82300", VA = "0x181A83D00")]
	public static long ToInt64(object value, IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x1A83FF0", Offset = "0x1A825F0", VA = "0x181A83FF0")]
	public static long ToInt64(bool value)
	{
		return default(long);
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x1A82000", Offset = "0x1A80600", VA = "0x181A82000")]
	public static long ToInt64(char value)
	{
		return default(long);
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x1A83DE0", Offset = "0x1A823E0", VA = "0x181A83DE0")]
	[CLSCompliant(false)]
	public static long ToInt64(sbyte value)
	{
		return default(long);
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x611460", Offset = "0x60FA60", VA = "0x180611460")]
	public static long ToInt64(byte value)
	{
		return default(long);
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x1A83CF0", Offset = "0x1A822F0", VA = "0x181A83CF0")]
	public static long ToInt64(short value)
	{
		return default(long);
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x1A82000", Offset = "0x1A80600", VA = "0x181A82000")]
	[CLSCompliant(false)]
	public static long ToInt64(ushort value)
	{
		return default(long);
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x1A83DD0", Offset = "0x1A823D0", VA = "0x181A83DD0")]
	public static long ToInt64(int value)
	{
		return default(long);
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x611500", Offset = "0x60FB00", VA = "0x180611500")]
	[CLSCompliant(false)]
	public static long ToInt64(uint value)
	{
		return default(long);
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x1A83DF0", Offset = "0x1A823F0", VA = "0x181A83DF0")]
	[CLSCompliant(false)]
	public static long ToInt64(ulong value)
	{
		return default(long);
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x1A83BB0", Offset = "0x1A821B0", VA = "0x181A83BB0")]
	public static long ToInt64(float value)
	{
		return default(long);
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x1A83E50", Offset = "0x1A82450", VA = "0x181A83E50")]
	public static long ToInt64(double value)
	{
		return default(long);
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x1A83C70", Offset = "0x1A82270", VA = "0x181A83C70")]
	public static long ToInt64(decimal value)
	{
		return default(long);
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x1A83F80", Offset = "0x1A82580", VA = "0x181A83F80")]
	public static long ToInt64(string value)
	{
		return default(long);
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x1A83DB0", Offset = "0x1A823B0", VA = "0x181A83DB0")]
	public static long ToInt64(string value, IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x1A85C90", Offset = "0x1A84290", VA = "0x181A85C90")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(object value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x1A85BE0", Offset = "0x1A841E0", VA = "0x181A85BE0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(object value, IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x1A82F60", Offset = "0x1A81560", VA = "0x181A82F60")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(bool value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x1A82000", Offset = "0x1A80600", VA = "0x181A82000")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(char value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x1A85A60", Offset = "0x1A84060", VA = "0x181A85A60")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(sbyte value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x611460", Offset = "0x60FA60", VA = "0x180611460")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(byte value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x1A85EA0", Offset = "0x1A844A0", VA = "0x181A85EA0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(short value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x1A82000", Offset = "0x1A80600", VA = "0x181A82000")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(ushort value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x1A85AD0", Offset = "0x1A840D0", VA = "0x181A85AD0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(int value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x611500", Offset = "0x60FB00", VA = "0x180611500")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(uint value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x1A85EF0", Offset = "0x1A844F0", VA = "0x181A85EF0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(long value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x1A85D30", Offset = "0x1A84330", VA = "0x181A85D30")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(float value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x1A85B20", Offset = "0x1A84120", VA = "0x181A85B20")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(double value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x1A85E20", Offset = "0x1A84420", VA = "0x181A85E20")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(decimal value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x1A85AB0", Offset = "0x1A840B0", VA = "0x181A85AB0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(string value, IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x1A846E0", Offset = "0x1A82CE0", VA = "0x181A846E0")]
	public static float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x1A84860", Offset = "0x1A82E60", VA = "0x181A84860")]
	public static float ToSingle(object value, IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x1A84780", Offset = "0x1A82D80", VA = "0x181A84780")]
	[CLSCompliant(false)]
	public static float ToSingle(sbyte value)
	{
		return default(float);
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x1A846A0", Offset = "0x1A82CA0", VA = "0x181A846A0")]
	public static float ToSingle(byte value)
	{
		return default(float);
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x1A846B0", Offset = "0x1A82CB0", VA = "0x181A846B0")]
	public static float ToSingle(short value)
	{
		return default(float);
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x1A84690", Offset = "0x1A82C90", VA = "0x181A84690")]
	[CLSCompliant(false)]
	public static float ToSingle(ushort value)
	{
		return default(float);
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x1A84850", Offset = "0x1A82E50", VA = "0x181A84850")]
	public static float ToSingle(int value)
	{
		return default(float);
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x1A846C0", Offset = "0x1A82CC0", VA = "0x181A846C0")]
	[CLSCompliant(false)]
	public static float ToSingle(uint value)
	{
		return default(float);
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x1A846D0", Offset = "0x1A82CD0", VA = "0x181A846D0")]
	public static float ToSingle(long value)
	{
		return default(float);
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x1A847B0", Offset = "0x1A82DB0", VA = "0x181A847B0")]
	[CLSCompliant(false)]
	public static float ToSingle(ulong value)
	{
		return default(float);
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x1A84910", Offset = "0x1A82F10", VA = "0x181A84910")]
	public static float ToSingle(double value)
	{
		return default(float);
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x1A847E0", Offset = "0x1A82DE0", VA = "0x181A847E0")]
	public static float ToSingle(decimal value)
	{
		return default(float);
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x1A84790", Offset = "0x1A82D90", VA = "0x181A84790")]
	public static float ToSingle(string value, IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x1A84840", Offset = "0x1A82E40", VA = "0x181A84840")]
	public static float ToSingle(bool value)
	{
		return default(float);
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x1A82D50", Offset = "0x1A81350", VA = "0x181A82D50")]
	public static double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x1A82DF0", Offset = "0x1A813F0", VA = "0x181A82DF0")]
	public static double ToDouble(object value, IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x1A82C60", Offset = "0x1A81260", VA = "0x181A82C60")]
	[CLSCompliant(false)]
	public static double ToDouble(sbyte value)
	{
		return default(double);
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x1A82D40", Offset = "0x1A81340", VA = "0x181A82D40")]
	public static double ToDouble(byte value)
	{
		return default(double);
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x1A82F50", Offset = "0x1A81550", VA = "0x181A82F50")]
	public static double ToDouble(short value)
	{
		return default(double);
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x1A82CD0", Offset = "0x1A812D0", VA = "0x181A82CD0")]
	[CLSCompliant(false)]
	public static double ToDouble(ushort value)
	{
		return default(double);
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x1A82C70", Offset = "0x1A81270", VA = "0x181A82C70")]
	public static double ToDouble(int value)
	{
		return default(double);
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x1A82F10", Offset = "0x1A81510", VA = "0x181A82F10")]
	[CLSCompliant(false)]
	public static double ToDouble(uint value)
	{
		return default(double);
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x1A82C80", Offset = "0x1A81280", VA = "0x181A82C80")]
	public static double ToDouble(long value)
	{
		return default(double);
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x1A82CA0", Offset = "0x1A812A0", VA = "0x181A82CA0")]
	[CLSCompliant(false)]
	public static double ToDouble(ulong value)
	{
		return default(double);
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x1A82F20", Offset = "0x1A81520", VA = "0x181A82F20")]
	public static double ToDouble(float value)
	{
		return default(double);
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x1A82CE0", Offset = "0x1A812E0", VA = "0x181A82CE0")]
	public static double ToDouble(decimal value)
	{
		return default(double);
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x1A82EA0", Offset = "0x1A814A0", VA = "0x181A82EA0")]
	public static double ToDouble(string value)
	{
		return default(double);
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x1A82F30", Offset = "0x1A81530", VA = "0x181A82F30")]
	public static double ToDouble(string value, IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x1A82C90", Offset = "0x1A81290", VA = "0x181A82C90")]
	public static double ToDouble(bool value)
	{
		return default(double);
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x1A826B0", Offset = "0x1A80CB0", VA = "0x181A826B0")]
	public static decimal ToDecimal(object value, IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x1A82980", Offset = "0x1A80F80", VA = "0x181A82980")]
	[CLSCompliant(false)]
	public static decimal ToDecimal(sbyte value)
	{
		return 0m;
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x1A825D0", Offset = "0x1A80BD0", VA = "0x181A825D0")]
	public static decimal ToDecimal(byte value)
	{
		return 0m;
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x1A82910", Offset = "0x1A80F10", VA = "0x181A82910")]
	public static decimal ToDecimal(short value)
	{
		return 0m;
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x1A829F0", Offset = "0x1A80FF0", VA = "0x181A829F0")]
	[CLSCompliant(false)]
	public static decimal ToDecimal(ushort value)
	{
		return 0m;
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x1A82830", Offset = "0x1A80E30", VA = "0x181A82830")]
	public static decimal ToDecimal(int value)
	{
		return 0m;
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x1A82B40", Offset = "0x1A81140", VA = "0x181A82B40")]
	[CLSCompliant(false)]
	public static decimal ToDecimal(uint value)
	{
		return 0m;
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x1A82640", Offset = "0x1A80C40", VA = "0x181A82640")]
	public static decimal ToDecimal(long value)
	{
		return 0m;
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x1A82A60", Offset = "0x1A81060", VA = "0x181A82A60")]
	[CLSCompliant(false)]
	public static decimal ToDecimal(ulong value)
	{
		return 0m;
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x1A82560", Offset = "0x1A80B60", VA = "0x181A82560")]
	public static decimal ToDecimal(float value)
	{
		return 0m;
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x1A82AD0", Offset = "0x1A810D0", VA = "0x181A82AD0")]
	public static decimal ToDecimal(double value)
	{
		return 0m;
	}

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x1A82BB0", Offset = "0x1A811B0", VA = "0x181A82BB0")]
	public static decimal ToDecimal(string value, IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x1A828A0", Offset = "0x1A80EA0", VA = "0x181A828A0")]
	public static decimal ToDecimal(bool value)
	{
		return 0m;
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x1A82340", Offset = "0x1A80940", VA = "0x181A82340")]
	public static DateTime ToDateTime(object value, IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x1A824B0", Offset = "0x1A80AB0", VA = "0x181A824B0")]
	public static DateTime ToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x1A82420", Offset = "0x1A80A20", VA = "0x181A82420")]
	public static DateTime ToDateTime(string value, IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x1A84920", Offset = "0x1A82F20", VA = "0x181A84920")]
	public static string ToString(object value)
	{
		return null;
	}

	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x1A84B90", Offset = "0x1A83190", VA = "0x181A84B90")]
	public static string ToString(object value, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x1A84E30", Offset = "0x1A83430", VA = "0x181A84E30")]
	public static string ToString(char value, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60005D0")]
	[Address(RVA = "0x1A84AA0", Offset = "0x1A830A0", VA = "0x181A84AA0")]
	public static string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x60005D1")]
	[Address(RVA = "0x1A84D80", Offset = "0x1A83380", VA = "0x181A84D80")]
	public static string ToString(int value, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x1A81C70", Offset = "0x1A80270", VA = "0x181A81C70")]
	public static byte ToByte(string value, int fromBase)
	{
		return default(byte);
	}

	[Token(Token = "0x60005D3")]
	[Address(RVA = "0x1A84300", Offset = "0x1A82900", VA = "0x181A84300")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(string value, int fromBase)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x1A83120", Offset = "0x1A81720", VA = "0x181A83120")]
	public static short ToInt16(string value, int fromBase)
	{
		return default(short);
	}

	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x1A84E80", Offset = "0x1A83480", VA = "0x181A84E80")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(string value, int fromBase)
	{
		return default(ushort);
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x1A839D0", Offset = "0x1A81FD0", VA = "0x181A839D0")]
	public static int ToInt32(string value, int fromBase)
	{
		return default(int);
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x1A856C0", Offset = "0x1A83CC0", VA = "0x181A856C0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(string value, int fromBase)
	{
		return default(uint);
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x1A83AC0", Offset = "0x1A820C0", VA = "0x181A83AC0")]
	public static long ToInt64(string value, int fromBase)
	{
		return default(long);
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x1A85F40", Offset = "0x1A84540", VA = "0x181A85F40")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(string value, int fromBase)
	{
		return default(ulong);
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x1A84B00", Offset = "0x1A83100", VA = "0x181A84B00")]
	public static string ToString(byte value, int toBase)
	{
		return null;
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x1A84CF0", Offset = "0x1A832F0", VA = "0x181A84CF0")]
	public static string ToString(int value, int toBase)
	{
		return null;
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x1A84DA0", Offset = "0x1A833A0", VA = "0x181A84DA0")]
	public static string ToString(long value, int toBase)
	{
		return null;
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x1A811B0", Offset = "0x1A7F7B0", VA = "0x181A811B0")]
	public static string ToBase64String(byte[] inArray)
	{
		return null;
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x1A81280", Offset = "0x1A7F880", VA = "0x181A81280")]
	public static string ToBase64String(byte[] inArray, int offset, int length)
	{
		return null;
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x1A80DC0", Offset = "0x1A7F3C0", VA = "0x181A80DC0")]
	public static string ToBase64String(byte[] inArray, int offset, int length, Base64FormattingOptions options)
	{
		return null;
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x1A80FF0", Offset = "0x1A7F5F0", VA = "0x181A80FF0")]
	public static string ToBase64String(ReadOnlySpan<byte> bytes, Base64FormattingOptions options = Base64FormattingOptions.None)
	{
		return null;
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x1A80900", Offset = "0x1A7EF00", VA = "0x181A80900")]
	public static int ToBase64CharArray(byte[] inArray, int offsetIn, int length, char[] outArray, int offsetOut)
	{
		return default(int);
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x1A80980", Offset = "0x1A7EF80", VA = "0x181A80980")]
	public static int ToBase64CharArray(byte[] inArray, int offsetIn, int length, char[] outArray, int offsetOut, Base64FormattingOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x1A7F0C0", Offset = "0x1A7D6C0", VA = "0x181A7F0C0")]
	private unsafe static int ConvertToBase64Array(char* outChars, byte* inData, int offset, int length, bool insertLineBreaks)
	{
		return default(int);
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x1A81300", Offset = "0x1A7F900", VA = "0x181A81300")]
	private static int ToBase64_CalculateAndValidateOutputLength(int inputLength, bool insertLineBreaks)
	{
		return default(int);
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x1A80410", Offset = "0x1A7EA10", VA = "0x181A80410")]
	public static byte[] FromBase64String(string s)
	{
		return null;
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x1A863D0", Offset = "0x1A849D0", VA = "0x181A863D0")]
	public static bool TryFromBase64Chars(ReadOnlySpan<char> chars, Span<byte> bytes, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x1A7F3D0", Offset = "0x1A7D9D0", VA = "0x181A7F3D0")]
	private static void CopyToTempBufferWithoutWhiteSpace(ReadOnlySpan<char> chars, Span<char> tempBuffer, out int consumed, out int charsWritten)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x1A80600", Offset = "0x1A7EC00", VA = "0x181A80600")]
	private static bool IsSpace(this char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x1A7FF70", Offset = "0x1A7E570", VA = "0x181A7FF70")]
	public static byte[] FromBase64CharArray(char[] inArray, int offset, int length)
	{
		return null;
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x1A801F0", Offset = "0x1A7E7F0", VA = "0x181A801F0")]
	private unsafe static byte[] FromBase64CharPtr(char* inputPtr, int inputLength)
	{
		return null;
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x1A804D0", Offset = "0x1A7EAD0", VA = "0x181A804D0")]
	private unsafe static int FromBase64_ComputeResultLength(char* inputPtr, int inputLength)
	{
		return default(int);
	}
}
