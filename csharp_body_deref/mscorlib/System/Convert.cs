// ==================== AoTTG2 cross-reference ====================
// Type: System.Convert
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200009E")]
public static class Convert
{
	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly sbyte[] s_decodingMap;

	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly Type[] ConvertTypes;

	[Token(Token = "0x400020C")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Type EnumType;

	[Token(Token = "0x400020D")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly char[] base64Table;

	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0x20")]
	public static readonly object DBNull;

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x54205F0", Offset = "0x541F5F0", VA = "0x54205F0")]
	private static bool TryDecodeFromUtf16(ReadOnlySpan<char> utf16, Span<byte> bytes, out int consumed, out int written)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x54209B0", Offset = "0x541F9B0", VA = "0x54209B0")]
	private static int Decode(ref char encodedChars, ref sbyte decodingMap)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x5420A00", Offset = "0x541FA00", VA = "0x5420A00")]
	private static void WriteThreeLowOrderBytes(ref byte destination, int value)
	{
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x5420A10", Offset = "0x541FA10", VA = "0x5420A10")]
	public static TypeCode GetTypeCode(object value)
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x5420AE0", Offset = "0x541FAE0", VA = "0x5420AE0")]
	public static object ChangeType(object value, TypeCode typeCode, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x541C630", Offset = "0x541B630", VA = "0x541C630")]
	internal static object DefaultToType(IConvertible value, Type targetType, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x5421450", Offset = "0x5420450", VA = "0x5421450")]
	public static object ChangeType(object value, Type conversionType)
	{
		return null;
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x54214D0", Offset = "0x54204D0", VA = "0x54214D0")]
	public static object ChangeType(object value, Type conversionType, IFormatProvider provider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x5421E80", Offset = "0x5420E80", VA = "0x5421E80")]
	private static void ThrowCharOverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x5421ED0", Offset = "0x5420ED0", VA = "0x5421ED0")]
	private static void ThrowByteOverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x5421F20", Offset = "0x5420F20", VA = "0x5421F20")]
	private static void ThrowSByteOverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x5421F70", Offset = "0x5420F70", VA = "0x5421F70")]
	private static void ThrowInt16OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x5421FC0", Offset = "0x5420FC0", VA = "0x5421FC0")]
	private static void ThrowUInt16OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x5422010", Offset = "0x5421010", VA = "0x5422010")]
	private static void ThrowInt32OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x5422060", Offset = "0x5421060", VA = "0x5422060")]
	private static void ThrowUInt32OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x54220B0", Offset = "0x54210B0", VA = "0x54220B0")]
	private static void ThrowInt64OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x5422100", Offset = "0x5421100", VA = "0x5422100")]
	private static void ThrowUInt64OverflowException()
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x5422150", Offset = "0x5421150", VA = "0x5422150")]
	public static bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x5422230", Offset = "0x5421230", VA = "0x5422230")]
	public static bool ToBoolean(object value, IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x5422330", Offset = "0x5421330", VA = "0x5422330")]
	[CLSCompliant(false)]
	public static bool ToBoolean(sbyte value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x541DB50", Offset = "0x541CB50", VA = "0x541DB50")]
	public static bool ToBoolean(byte value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x5422340", Offset = "0x5421340", VA = "0x5422340")]
	public static bool ToBoolean(short value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x5422350", Offset = "0x5421350", VA = "0x5422350")]
	[CLSCompliant(false)]
	public static bool ToBoolean(ushort value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x5422360", Offset = "0x5421360", VA = "0x5422360")]
	public static bool ToBoolean(int value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x5422370", Offset = "0x5421370", VA = "0x5422370")]
	[CLSCompliant(false)]
	public static bool ToBoolean(uint value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x5422380", Offset = "0x5421380", VA = "0x5422380")]
	public static bool ToBoolean(long value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x5422390", Offset = "0x5421390", VA = "0x5422390")]
	[CLSCompliant(false)]
	public static bool ToBoolean(ulong value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x54223A0", Offset = "0x54213A0", VA = "0x54223A0")]
	public static bool ToBoolean(string value, IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x54223E0", Offset = "0x54213E0", VA = "0x54223E0")]
	public static bool ToBoolean(float value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x54223F0", Offset = "0x54213F0", VA = "0x54223F0")]
	public static bool ToBoolean(double value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x5422410", Offset = "0x5421410", VA = "0x5422410")]
	public static bool ToBoolean(decimal value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x5422480", Offset = "0x5421480", VA = "0x5422480")]
	public static char ToChar(object value, IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x5422580", Offset = "0x5421580", VA = "0x5422580")]
	[CLSCompliant(false)]
	public static char ToChar(sbyte value)
	{
		return default(char);
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x541DBB0", Offset = "0x541CBB0", VA = "0x541DBB0")]
	public static char ToChar(byte value)
	{
		return default(char);
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x54225D0", Offset = "0x54215D0", VA = "0x54225D0")]
	public static char ToChar(short value)
	{
		return default(char);
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x5422620", Offset = "0x5421620", VA = "0x5422620")]
	[CLSCompliant(false)]
	public static char ToChar(ushort value)
	{
		return default(char);
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x5422630", Offset = "0x5421630", VA = "0x5422630")]
	public static char ToChar(int value)
	{
		return default(char);
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x5422680", Offset = "0x5421680", VA = "0x5422680")]
	[CLSCompliant(false)]
	public static char ToChar(uint value)
	{
		return default(char);
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x54226D0", Offset = "0x54216D0", VA = "0x54226D0")]
	public static char ToChar(long value)
	{
		return default(char);
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x5422720", Offset = "0x5421720", VA = "0x5422720")]
	[CLSCompliant(false)]
	public static char ToChar(ulong value)
	{
		return default(char);
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x5422770", Offset = "0x5421770", VA = "0x5422770")]
	public static char ToChar(string value)
	{
		return default(char);
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x54227D0", Offset = "0x54217D0", VA = "0x54227D0")]
	public static char ToChar(string value, IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x5422860", Offset = "0x5421860", VA = "0x5422860")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(object value, IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x541C080", Offset = "0x541B080", VA = "0x541C080")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(bool value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x541EE10", Offset = "0x541DE10", VA = "0x541EE10")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(char value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x541DC50", Offset = "0x541CC50", VA = "0x541DC50")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(byte value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x5422960", Offset = "0x5421960", VA = "0x5422960")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(short value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x54229B0", Offset = "0x54219B0", VA = "0x54229B0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(ushort value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x5422A00", Offset = "0x5421A00", VA = "0x5422A00")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(int value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x5422A50", Offset = "0x5421A50", VA = "0x5422A50")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(uint value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x5422AA0", Offset = "0x5421AA0", VA = "0x5422AA0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(long value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x5422AF0", Offset = "0x5421AF0", VA = "0x5422AF0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(ulong value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x5422B40", Offset = "0x5421B40", VA = "0x5422B40")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(float value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x5422BC0", Offset = "0x5421BC0", VA = "0x5422BC0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(double value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x5422D50", Offset = "0x5421D50", VA = "0x5422D50")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(decimal value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x5422DC0", Offset = "0x5421DC0", VA = "0x5422DC0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(string value, IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x5422DD0", Offset = "0x5421DD0", VA = "0x5422DD0")]
	public static byte ToByte(object value, IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x600050F")]
	[Address(RVA = "0x541C0E0", Offset = "0x541B0E0", VA = "0x541C0E0")]
	public static byte ToByte(bool value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x541EF00", Offset = "0x541DF00", VA = "0x541EF00")]
	public static byte ToByte(char value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x5422ED0", Offset = "0x5421ED0", VA = "0x5422ED0")]
	[CLSCompliant(false)]
	public static byte ToByte(sbyte value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x5422F20", Offset = "0x5421F20", VA = "0x5422F20")]
	public static byte ToByte(short value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x5422F70", Offset = "0x5421F70", VA = "0x5422F70")]
	[CLSCompliant(false)]
	public static byte ToByte(ushort value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x5422FC0", Offset = "0x5421FC0", VA = "0x5422FC0")]
	public static byte ToByte(int value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x5423010", Offset = "0x5422010", VA = "0x5423010")]
	[CLSCompliant(false)]
	public static byte ToByte(uint value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x5423060", Offset = "0x5422060", VA = "0x5423060")]
	public static byte ToByte(long value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x54230B0", Offset = "0x54220B0", VA = "0x54230B0")]
	[CLSCompliant(false)]
	public static byte ToByte(ulong value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x5423100", Offset = "0x5422100", VA = "0x5423100")]
	public static byte ToByte(float value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x5423180", Offset = "0x5422180", VA = "0x5423180")]
	public static byte ToByte(double value)
	{
		return default(byte);
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x5423250", Offset = "0x5422250", VA = "0x5423250")]
	public static byte ToByte(decimal value)
	{
		return default(byte);
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x54232C0", Offset = "0x54222C0", VA = "0x54232C0")]
	public static byte ToByte(string value)
	{
		return default(byte);
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x5423360", Offset = "0x5422360", VA = "0x5423360")]
	public static byte ToByte(string value, IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x54233D0", Offset = "0x54223D0", VA = "0x54233D0")]
	public static short ToInt16(object value, IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x541C140", Offset = "0x541B140", VA = "0x541C140")]
	public static short ToInt16(bool value)
	{
		return default(short);
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x541EFE0", Offset = "0x541DFE0", VA = "0x541EFE0")]
	public static short ToInt16(char value)
	{
		return default(short);
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x54234D0", Offset = "0x54224D0", VA = "0x54234D0")]
	[CLSCompliant(false)]
	public static short ToInt16(sbyte value)
	{
		return default(short);
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x541DD00", Offset = "0x541CD00", VA = "0x541DD00")]
	public static short ToInt16(byte value)
	{
		return default(short);
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x54234E0", Offset = "0x54224E0", VA = "0x54234E0")]
	[CLSCompliant(false)]
	public static short ToInt16(ushort value)
	{
		return default(short);
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x5423530", Offset = "0x5422530", VA = "0x5423530")]
	public static short ToInt16(int value)
	{
		return default(short);
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x5423580", Offset = "0x5422580", VA = "0x5423580")]
	[CLSCompliant(false)]
	public static short ToInt16(uint value)
	{
		return default(short);
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x54235D0", Offset = "0x54225D0", VA = "0x54235D0")]
	public static short ToInt16(long value)
	{
		return default(short);
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x5423620", Offset = "0x5422620", VA = "0x5423620")]
	[CLSCompliant(false)]
	public static short ToInt16(ulong value)
	{
		return default(short);
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x5423670", Offset = "0x5422670", VA = "0x5423670")]
	public static short ToInt16(float value)
	{
		return default(short);
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x54236F0", Offset = "0x54226F0", VA = "0x54236F0")]
	public static short ToInt16(double value)
	{
		return default(short);
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x54237B0", Offset = "0x54227B0", VA = "0x54237B0")]
	public static short ToInt16(decimal value)
	{
		return default(short);
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x5423820", Offset = "0x5422820", VA = "0x5423820")]
	public static short ToInt16(string value, IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x5423840", Offset = "0x5422840", VA = "0x5423840")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(object value, IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x541C1A0", Offset = "0x541B1A0", VA = "0x541C1A0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(bool value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x541F080", Offset = "0x541E080", VA = "0x541F080")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(char value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x5423940", Offset = "0x5422940", VA = "0x5423940")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(sbyte value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x541DD60", Offset = "0x541CD60", VA = "0x541DD60")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(byte value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x5423990", Offset = "0x5422990", VA = "0x5423990")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(short value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x54239E0", Offset = "0x54229E0", VA = "0x54239E0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(int value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x5423A30", Offset = "0x5422A30", VA = "0x5423A30")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(uint value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x5423A80", Offset = "0x5422A80", VA = "0x5423A80")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(long value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x5423AD0", Offset = "0x5422AD0", VA = "0x5423AD0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(ulong value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x5423B20", Offset = "0x5422B20", VA = "0x5423B20")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(float value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x5423BA0", Offset = "0x5422BA0", VA = "0x5423BA0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(double value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x5423C70", Offset = "0x5422C70", VA = "0x5423C70")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(decimal value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x5423CE0", Offset = "0x5422CE0", VA = "0x5423CE0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(string value, IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x5423D00", Offset = "0x5422D00", VA = "0x5423D00")]
	public static int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x5423DE0", Offset = "0x5422DE0", VA = "0x5423DE0")]
	public static int ToInt32(object value, IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x541C200", Offset = "0x541B200", VA = "0x541C200")]
	public static int ToInt32(bool value)
	{
		return default(int);
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x541F0E0", Offset = "0x541E0E0", VA = "0x541F0E0")]
	public static int ToInt32(char value)
	{
		return default(int);
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x541DDC0", Offset = "0x541CDC0", VA = "0x541DDC0")]
	public static int ToInt32(byte value)
	{
		return default(int);
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x5423EE0", Offset = "0x5422EE0", VA = "0x5423EE0")]
	public static int ToInt32(short value)
	{
		return default(int);
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x5423EF0", Offset = "0x5422EF0", VA = "0x5423EF0")]
	[CLSCompliant(false)]
	public static int ToInt32(ushort value)
	{
		return default(int);
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x5423F00", Offset = "0x5422F00", VA = "0x5423F00")]
	[CLSCompliant(false)]
	public static int ToInt32(uint value)
	{
		return default(int);
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x5423F50", Offset = "0x5422F50", VA = "0x5423F50")]
	public static int ToInt32(long value)
	{
		return default(int);
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x5423FA0", Offset = "0x5422FA0", VA = "0x5423FA0")]
	[CLSCompliant(false)]
	public static int ToInt32(ulong value)
	{
		return default(int);
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x5423FF0", Offset = "0x5422FF0", VA = "0x5423FF0")]
	public static int ToInt32(float value)
	{
		return default(int);
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x5422C80", Offset = "0x5421C80", VA = "0x5422C80")]
	public static int ToInt32(double value)
	{
		return default(int);
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x5424070", Offset = "0x5423070", VA = "0x5424070")]
	public static int ToInt32(decimal value)
	{
		return default(int);
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x54240E0", Offset = "0x54230E0", VA = "0x54240E0")]
	public static int ToInt32(string value, IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x5424100", Offset = "0x5423100", VA = "0x5424100")]
	[CLSCompliant(false)]
	public static uint ToUInt32(object value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x54241E0", Offset = "0x54231E0", VA = "0x54241E0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(object value, IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x541C260", Offset = "0x541B260", VA = "0x541C260")]
	[CLSCompliant(false)]
	public static uint ToUInt32(bool value)
	{
		return default(uint);
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x541F140", Offset = "0x541E140", VA = "0x541F140")]
	[CLSCompliant(false)]
	public static uint ToUInt32(char value)
	{
		return default(uint);
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x54242E0", Offset = "0x54232E0", VA = "0x54242E0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(sbyte value)
	{
		return default(uint);
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x541DE20", Offset = "0x541CE20", VA = "0x541DE20")]
	[CLSCompliant(false)]
	public static uint ToUInt32(byte value)
	{
		return default(uint);
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x5424330", Offset = "0x5423330", VA = "0x5424330")]
	[CLSCompliant(false)]
	public static uint ToUInt32(short value)
	{
		return default(uint);
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x5424380", Offset = "0x5423380", VA = "0x5424380")]
	[CLSCompliant(false)]
	public static uint ToUInt32(ushort value)
	{
		return default(uint);
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x5424390", Offset = "0x5423390", VA = "0x5424390")]
	[CLSCompliant(false)]
	public static uint ToUInt32(int value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x54243E0", Offset = "0x54233E0", VA = "0x54243E0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(long value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x5424430", Offset = "0x5423430", VA = "0x5424430")]
	[CLSCompliant(false)]
	public static uint ToUInt32(ulong value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x5424480", Offset = "0x5423480", VA = "0x5424480")]
	[CLSCompliant(false)]
	public static uint ToUInt32(float value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x5424500", Offset = "0x5423500", VA = "0x5424500")]
	[CLSCompliant(false)]
	public static uint ToUInt32(double value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x54245B0", Offset = "0x54235B0", VA = "0x54245B0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(decimal value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x5424620", Offset = "0x5423620", VA = "0x5424620")]
	[CLSCompliant(false)]
	public static uint ToUInt32(string value, IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x5424640", Offset = "0x5423640", VA = "0x5424640")]
	public static long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x5424720", Offset = "0x5423720", VA = "0x5424720")]
	public static long ToInt64(object value, IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x541C2C0", Offset = "0x541B2C0", VA = "0x541C2C0")]
	public static long ToInt64(bool value)
	{
		return default(long);
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x541F1A0", Offset = "0x541E1A0", VA = "0x541F1A0")]
	public static long ToInt64(char value)
	{
		return default(long);
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x5424820", Offset = "0x5423820", VA = "0x5424820")]
	[CLSCompliant(false)]
	public static long ToInt64(sbyte value)
	{
		return default(long);
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x541DE80", Offset = "0x541CE80", VA = "0x541DE80")]
	public static long ToInt64(byte value)
	{
		return default(long);
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x5424830", Offset = "0x5423830", VA = "0x5424830")]
	public static long ToInt64(short value)
	{
		return default(long);
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x5424840", Offset = "0x5423840", VA = "0x5424840")]
	[CLSCompliant(false)]
	public static long ToInt64(ushort value)
	{
		return default(long);
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x5424850", Offset = "0x5423850", VA = "0x5424850")]
	public static long ToInt64(int value)
	{
		return default(long);
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x5424860", Offset = "0x5423860", VA = "0x5424860")]
	[CLSCompliant(false)]
	public static long ToInt64(uint value)
	{
		return default(long);
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x5424870", Offset = "0x5423870", VA = "0x5424870")]
	[CLSCompliant(false)]
	public static long ToInt64(ulong value)
	{
		return default(long);
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x54248C0", Offset = "0x54238C0", VA = "0x54248C0")]
	public static long ToInt64(float value)
	{
		return default(long);
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x5424940", Offset = "0x5423940", VA = "0x5424940")]
	public static long ToInt64(double value)
	{
		return default(long);
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x5424A50", Offset = "0x5423A50", VA = "0x5424A50")]
	public static long ToInt64(decimal value)
	{
		return default(long);
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x5424AC0", Offset = "0x5423AC0", VA = "0x5424AC0")]
	public static long ToInt64(string value)
	{
		return default(long);
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x5424B20", Offset = "0x5423B20", VA = "0x5424B20")]
	public static long ToInt64(string value, IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x5424B40", Offset = "0x5423B40", VA = "0x5424B40")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(object value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x5424C20", Offset = "0x5423C20", VA = "0x5424C20")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(object value, IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x541C320", Offset = "0x541B320", VA = "0x541C320")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(bool value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x541F200", Offset = "0x541E200", VA = "0x541F200")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(char value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x5424D20", Offset = "0x5423D20", VA = "0x5424D20")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(sbyte value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x541DEE0", Offset = "0x541CEE0", VA = "0x541DEE0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(byte value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x5424D70", Offset = "0x5423D70", VA = "0x5424D70")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(short value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x5424DC0", Offset = "0x5423DC0", VA = "0x5424DC0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(ushort value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x5424DD0", Offset = "0x5423DD0", VA = "0x5424DD0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(int value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x5424E20", Offset = "0x5423E20", VA = "0x5424E20")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(uint value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x5424E30", Offset = "0x5423E30", VA = "0x5424E30")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(long value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x5424E80", Offset = "0x5423E80", VA = "0x5424E80")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(float value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x5424F00", Offset = "0x5423F00", VA = "0x5424F00")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(double value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x5425030", Offset = "0x5424030", VA = "0x5425030")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(decimal value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x54250A0", Offset = "0x54240A0", VA = "0x54250A0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(string value, IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x54250C0", Offset = "0x54240C0", VA = "0x54250C0")]
	public static float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x54251A0", Offset = "0x54241A0", VA = "0x54251A0")]
	public static float ToSingle(object value, IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x54252A0", Offset = "0x54242A0", VA = "0x54252A0")]
	[CLSCompliant(false)]
	public static float ToSingle(sbyte value)
	{
		return default(float);
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x541DF40", Offset = "0x541CF40", VA = "0x541DF40")]
	public static float ToSingle(byte value)
	{
		return default(float);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x54252B0", Offset = "0x54242B0", VA = "0x54252B0")]
	public static float ToSingle(short value)
	{
		return default(float);
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x54252C0", Offset = "0x54242C0", VA = "0x54252C0")]
	[CLSCompliant(false)]
	public static float ToSingle(ushort value)
	{
		return default(float);
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x54252D0", Offset = "0x54242D0", VA = "0x54252D0")]
	public static float ToSingle(int value)
	{
		return default(float);
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x54252E0", Offset = "0x54242E0", VA = "0x54252E0")]
	[CLSCompliant(false)]
	public static float ToSingle(uint value)
	{
		return default(float);
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x54252F0", Offset = "0x54242F0", VA = "0x54252F0")]
	public static float ToSingle(long value)
	{
		return default(float);
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x5425300", Offset = "0x5424300", VA = "0x5425300")]
	[CLSCompliant(false)]
	public static float ToSingle(ulong value)
	{
		return default(float);
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x5425330", Offset = "0x5424330", VA = "0x5425330")]
	public static float ToSingle(double value)
	{
		return default(float);
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x5425340", Offset = "0x5424340", VA = "0x5425340")]
	public static float ToSingle(decimal value)
	{
		return default(float);
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x54253A0", Offset = "0x54243A0", VA = "0x54253A0")]
	public static float ToSingle(string value, IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x541C390", Offset = "0x541B390", VA = "0x541C390")]
	public static float ToSingle(bool value)
	{
		return default(float);
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x54253C0", Offset = "0x54243C0", VA = "0x54253C0")]
	public static double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x54254A0", Offset = "0x54244A0", VA = "0x54254A0")]
	public static double ToDouble(object value, IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x54255A0", Offset = "0x54245A0", VA = "0x54255A0")]
	[CLSCompliant(false)]
	public static double ToDouble(sbyte value)
	{
		return default(double);
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x541DFA0", Offset = "0x541CFA0", VA = "0x541DFA0")]
	public static double ToDouble(byte value)
	{
		return default(double);
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x54255B0", Offset = "0x54245B0", VA = "0x54255B0")]
	public static double ToDouble(short value)
	{
		return default(double);
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x54255C0", Offset = "0x54245C0", VA = "0x54255C0")]
	[CLSCompliant(false)]
	public static double ToDouble(ushort value)
	{
		return default(double);
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x54255D0", Offset = "0x54245D0", VA = "0x54255D0")]
	public static double ToDouble(int value)
	{
		return default(double);
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x54255E0", Offset = "0x54245E0", VA = "0x54255E0")]
	[CLSCompliant(false)]
	public static double ToDouble(uint value)
	{
		return default(double);
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x54255F0", Offset = "0x54245F0", VA = "0x54255F0")]
	public static double ToDouble(long value)
	{
		return default(double);
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x5425600", Offset = "0x5424600", VA = "0x5425600")]
	[CLSCompliant(false)]
	public static double ToDouble(ulong value)
	{
		return default(double);
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x5425630", Offset = "0x5424630", VA = "0x5425630")]
	public static double ToDouble(float value)
	{
		return default(double);
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x5425640", Offset = "0x5424640", VA = "0x5425640")]
	public static double ToDouble(decimal value)
	{
		return default(double);
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x54256A0", Offset = "0x54246A0", VA = "0x54256A0")]
	public static double ToDouble(string value)
	{
		return default(double);
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x5425700", Offset = "0x5424700", VA = "0x5425700")]
	public static double ToDouble(string value, IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x541C410", Offset = "0x541B410", VA = "0x541C410")]
	public static double ToDouble(bool value)
	{
		return default(double);
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x5425720", Offset = "0x5424720", VA = "0x5425720")]
	public static decimal ToDecimal(object value, IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x5425840", Offset = "0x5424840", VA = "0x5425840")]
	[CLSCompliant(false)]
	public static decimal ToDecimal(sbyte value)
	{
		return 0m;
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x541E060", Offset = "0x541D060", VA = "0x541E060")]
	public static decimal ToDecimal(byte value)
	{
		return 0m;
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x54258A0", Offset = "0x54248A0", VA = "0x54258A0")]
	public static decimal ToDecimal(short value)
	{
		return 0m;
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x5425900", Offset = "0x5424900", VA = "0x5425900")]
	[CLSCompliant(false)]
	public static decimal ToDecimal(ushort value)
	{
		return 0m;
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x5425960", Offset = "0x5424960", VA = "0x5425960")]
	public static decimal ToDecimal(int value)
	{
		return 0m;
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x54259C0", Offset = "0x54249C0", VA = "0x54259C0")]
	[CLSCompliant(false)]
	public static decimal ToDecimal(uint value)
	{
		return 0m;
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x5425A20", Offset = "0x5424A20", VA = "0x5425A20")]
	public static decimal ToDecimal(long value)
	{
		return 0m;
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x5425A90", Offset = "0x5424A90", VA = "0x5425A90")]
	[CLSCompliant(false)]
	public static decimal ToDecimal(ulong value)
	{
		return 0m;
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x5425B00", Offset = "0x5424B00", VA = "0x5425B00")]
	public static decimal ToDecimal(float value)
	{
		return 0m;
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x5425B70", Offset = "0x5424B70", VA = "0x5425B70")]
	public static decimal ToDecimal(double value)
	{
		return 0m;
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x5425BE0", Offset = "0x5424BE0", VA = "0x5425BE0")]
	public static decimal ToDecimal(string value, IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x541C4D0", Offset = "0x541B4D0", VA = "0x541C4D0")]
	public static decimal ToDecimal(bool value)
	{
		return 0m;
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x5425C60", Offset = "0x5424C60", VA = "0x5425C60")]
	public static DateTime ToDateTime(object value, IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x5425D80", Offset = "0x5424D80", VA = "0x5425D80")]
	public static DateTime ToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x5425E30", Offset = "0x5424E30", VA = "0x5425E30")]
	public static DateTime ToDateTime(string value, IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x5425EB0", Offset = "0x5424EB0", VA = "0x5425EB0")]
	public static string ToString(object value)
	{
		return null;
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x5425F20", Offset = "0x5424F20", VA = "0x5425F20")]
	public static string ToString(object value, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x54260D0", Offset = "0x54250D0", VA = "0x54260D0")]
	public static string ToString(char value, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x5426120", Offset = "0x5425120", VA = "0x5426120")]
	public static string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x5426180", Offset = "0x5425180", VA = "0x5426180")]
	public static string ToString(int value, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x54261A0", Offset = "0x54251A0", VA = "0x54261A0")]
	public static byte ToByte(string value, int fromBase)
	{
		return default(byte);
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x54262A0", Offset = "0x54252A0", VA = "0x54262A0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(string value, int fromBase)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x54263B0", Offset = "0x54253B0", VA = "0x54263B0")]
	public static short ToInt16(string value, int fromBase)
	{
		return default(short);
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x54264C0", Offset = "0x54254C0", VA = "0x54264C0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(string value, int fromBase)
	{
		return default(ushort);
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x54265C0", Offset = "0x54255C0", VA = "0x54265C0")]
	public static int ToInt32(string value, int fromBase)
	{
		return default(int);
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x5426680", Offset = "0x5425680", VA = "0x5426680")]
	[CLSCompliant(false)]
	public static uint ToUInt32(string value, int fromBase)
	{
		return default(uint);
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x5426740", Offset = "0x5425740", VA = "0x5426740")]
	public static long ToInt64(string value, int fromBase)
	{
		return default(long);
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x5426800", Offset = "0x5425800", VA = "0x5426800")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(string value, int fromBase)
	{
		return default(ulong);
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x54268C0", Offset = "0x54258C0", VA = "0x54268C0")]
	public static string ToString(byte value, int toBase)
	{
		return null;
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x5426940", Offset = "0x5425940", VA = "0x5426940")]
	public static string ToString(int value, int toBase)
	{
		return null;
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x54269B0", Offset = "0x54259B0", VA = "0x54269B0")]
	public static string ToString(long value, int toBase)
	{
		return null;
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x5426A20", Offset = "0x5425A20", VA = "0x5426A20")]
	public static string ToBase64String(byte[] inArray)
	{
		return null;
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x5426D40", Offset = "0x5425D40", VA = "0x5426D40")]
	public static string ToBase64String(byte[] inArray, int offset, int length)
	{
		return null;
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x5426DA0", Offset = "0x5425DA0", VA = "0x5426DA0")]
	public static string ToBase64String(byte[] inArray, int offset, int length, Base64FormattingOptions options)
	{
		return null;
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x5426AD0", Offset = "0x5425AD0", VA = "0x5426AD0")]
	public static string ToBase64String(ReadOnlySpan<byte> bytes, Base64FormattingOptions options = Base64FormattingOptions.None)
	{
		return null;
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x54272F0", Offset = "0x54262F0", VA = "0x54272F0")]
	public static int ToBase64CharArray(byte[] inArray, int offsetIn, int length, char[] outArray, int offsetOut)
	{
		return default(int);
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x5427370", Offset = "0x5426370", VA = "0x5427370")]
	public static int ToBase64CharArray(byte[] inArray, int offsetIn, int length, char[] outArray, int offsetOut, Base64FormattingOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x5427020", Offset = "0x5426020", VA = "0x5427020")]
	private unsafe static int ConvertToBase64Array(char* outChars, byte* inData, int offset, int length, bool insertLineBreaks)
	{
		return default(int);
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x5426F40", Offset = "0x5425F40", VA = "0x5426F40")]
	private static int ToBase64_CalculateAndValidateOutputLength(int inputLength, bool insertLineBreaks)
	{
		return default(int);
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x5427740", Offset = "0x5426740", VA = "0x5427740")]
	public static byte[] FromBase64String(string s)
	{
		return null;
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x5427960", Offset = "0x5426960", VA = "0x5427960")]
	public static bool TryFromBase64Chars(ReadOnlySpan<char> chars, Span<byte> bytes, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x5428080", Offset = "0x5427080", VA = "0x5428080")]
	private static void CopyToTempBufferWithoutWhiteSpace(ReadOnlySpan<char> chars, Span<char> tempBuffer, out int consumed, out int charsWritten)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x5428190", Offset = "0x5427190", VA = "0x5428190")]
	private static bool IsSpace(this char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x54281B0", Offset = "0x54271B0", VA = "0x54281B0")]
	public static byte[] FromBase64CharArray(char[] inArray, int offset, int length)
	{
		return null;
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x54277F0", Offset = "0x54267F0", VA = "0x54277F0")]
	private unsafe static byte[] FromBase64CharPtr(char* inputPtr, int inputLength)
	{
		return null;
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x54283D0", Offset = "0x54273D0", VA = "0x54283D0")]
	private unsafe static int FromBase64_ComputeResultLength(char* inputPtr, int inputLength)
	{
		return default(int);
	}
}
