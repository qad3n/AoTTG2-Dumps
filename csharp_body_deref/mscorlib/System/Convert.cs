using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200009E")]
public static class Convert
{
	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x0")]
	private static readonly sbyte[] s_decodingMap;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly Type[] ConvertTypes;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Type EnumType;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly char[] base64Table;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x20")]
	public static readonly object DBNull;

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x4F349E0", Offset = "0x4F349E0", VA = "0x4F349E0")]
	private static bool TryDecodeFromUtf16(ReadOnlySpan<char> utf16, Span<byte> bytes, out int consumed, out int written)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x4F34DC0", Offset = "0x4F34DC0", VA = "0x4F34DC0")]
	private static int Decode(ref char encodedChars, ref sbyte decodingMap)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x4F34E10", Offset = "0x4F34E10", VA = "0x4F34E10")]
	private static void WriteThreeLowOrderBytes(ref byte destination, int value)
	{
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x4F34E20", Offset = "0x4F34E20", VA = "0x4F34E20")]
	public static TypeCode GetTypeCode(object value)
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x4F34EF0", Offset = "0x4F34EF0", VA = "0x4F34EF0")]
	public static object ChangeType(object value, TypeCode typeCode, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x4F30890", Offset = "0x4F30890", VA = "0x4F30890")]
	internal static object DefaultToType(IConvertible value, Type targetType, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x4F35860", Offset = "0x4F35860", VA = "0x4F35860")]
	public static object ChangeType(object value, Type conversionType)
	{
		return null;
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x4F358E0", Offset = "0x4F358E0", VA = "0x4F358E0")]
	public static object ChangeType(object value, Type conversionType, IFormatProvider provider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x4F36650", Offset = "0x4F36650", VA = "0x4F36650")]
	private static void ThrowCharOverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x4F366A0", Offset = "0x4F366A0", VA = "0x4F366A0")]
	private static void ThrowByteOverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x4F366F0", Offset = "0x4F366F0", VA = "0x4F366F0")]
	private static void ThrowSByteOverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x4F36740", Offset = "0x4F36740", VA = "0x4F36740")]
	private static void ThrowInt16OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x4F36790", Offset = "0x4F36790", VA = "0x4F36790")]
	private static void ThrowUInt16OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x4F367E0", Offset = "0x4F367E0", VA = "0x4F367E0")]
	private static void ThrowInt32OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x4F36830", Offset = "0x4F36830", VA = "0x4F36830")]
	private static void ThrowUInt32OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x4F36880", Offset = "0x4F36880", VA = "0x4F36880")]
	private static void ThrowInt64OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x4F368D0", Offset = "0x4F368D0", VA = "0x4F368D0")]
	private static void ThrowUInt64OverflowException()
	{
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x4F36920", Offset = "0x4F36920", VA = "0x4F36920")]
	public static bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x4F36A00", Offset = "0x4F36A00", VA = "0x4F36A00")]
	public static bool ToBoolean(object value, IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x4F36B00", Offset = "0x4F36B00", VA = "0x4F36B00")]
	[CLSCompliant(false)]
	public static bool ToBoolean(sbyte value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x4F320C0", Offset = "0x4F320C0", VA = "0x4F320C0")]
	public static bool ToBoolean(byte value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x4F36B10", Offset = "0x4F36B10", VA = "0x4F36B10")]
	public static bool ToBoolean(short value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x4F36B20", Offset = "0x4F36B20", VA = "0x4F36B20")]
	[CLSCompliant(false)]
	public static bool ToBoolean(ushort value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x4F36B30", Offset = "0x4F36B30", VA = "0x4F36B30")]
	public static bool ToBoolean(int value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x4F36B40", Offset = "0x4F36B40", VA = "0x4F36B40")]
	[CLSCompliant(false)]
	public static bool ToBoolean(uint value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x4F36B50", Offset = "0x4F36B50", VA = "0x4F36B50")]
	public static bool ToBoolean(long value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x4F36B60", Offset = "0x4F36B60", VA = "0x4F36B60")]
	[CLSCompliant(false)]
	public static bool ToBoolean(ulong value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x4F36B70", Offset = "0x4F36B70", VA = "0x4F36B70")]
	public static bool ToBoolean(string value, IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x4F36BB0", Offset = "0x4F36BB0", VA = "0x4F36BB0")]
	public static bool ToBoolean(float value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x4F36BC0", Offset = "0x4F36BC0", VA = "0x4F36BC0")]
	public static bool ToBoolean(double value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x4F36BE0", Offset = "0x4F36BE0", VA = "0x4F36BE0")]
	public static bool ToBoolean(decimal value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x4F36C50", Offset = "0x4F36C50", VA = "0x4F36C50")]
	public static char ToChar(object value, IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x4F36D50", Offset = "0x4F36D50", VA = "0x4F36D50")]
	[CLSCompliant(false)]
	public static char ToChar(sbyte value)
	{
		return default(char);
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x4F32120", Offset = "0x4F32120", VA = "0x4F32120")]
	public static char ToChar(byte value)
	{
		return default(char);
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x4F36D90", Offset = "0x4F36D90", VA = "0x4F36D90")]
	public static char ToChar(short value)
	{
		return default(char);
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x4F36DD0", Offset = "0x4F36DD0", VA = "0x4F36DD0")]
	[CLSCompliant(false)]
	public static char ToChar(ushort value)
	{
		return default(char);
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x4F36DE0", Offset = "0x4F36DE0", VA = "0x4F36DE0")]
	public static char ToChar(int value)
	{
		return default(char);
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x4F36E20", Offset = "0x4F36E20", VA = "0x4F36E20")]
	[CLSCompliant(false)]
	public static char ToChar(uint value)
	{
		return default(char);
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x4F36E60", Offset = "0x4F36E60", VA = "0x4F36E60")]
	public static char ToChar(long value)
	{
		return default(char);
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x4F36EB0", Offset = "0x4F36EB0", VA = "0x4F36EB0")]
	[CLSCompliant(false)]
	public static char ToChar(ulong value)
	{
		return default(char);
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x4F36F00", Offset = "0x4F36F00", VA = "0x4F36F00")]
	public static char ToChar(string value)
	{
		return default(char);
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x4F36F60", Offset = "0x4F36F60", VA = "0x4F36F60")]
	public static char ToChar(string value, IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x4F36FF0", Offset = "0x4F36FF0", VA = "0x4F36FF0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(object value, IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x4F302F0", Offset = "0x4F302F0", VA = "0x4F302F0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(bool value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x4F33320", Offset = "0x4F33320", VA = "0x4F33320")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(char value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x4F321C0", Offset = "0x4F321C0", VA = "0x4F321C0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(byte value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x4F370F0", Offset = "0x4F370F0", VA = "0x4F370F0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(short value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x4F37130", Offset = "0x4F37130", VA = "0x4F37130")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(ushort value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x4F37180", Offset = "0x4F37180", VA = "0x4F37180")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(int value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x4F371C0", Offset = "0x4F371C0", VA = "0x4F371C0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(uint value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x4F37200", Offset = "0x4F37200", VA = "0x4F37200")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(long value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x4F37250", Offset = "0x4F37250", VA = "0x4F37250")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(ulong value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x4F372A0", Offset = "0x4F372A0", VA = "0x4F372A0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(float value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x4F373A0", Offset = "0x4F373A0", VA = "0x4F373A0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(double value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x4F37530", Offset = "0x4F37530", VA = "0x4F37530")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(decimal value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x4F375A0", Offset = "0x4F375A0", VA = "0x4F375A0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(string value, IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x4F375B0", Offset = "0x4F375B0", VA = "0x4F375B0")]
	public static byte ToByte(object value, IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x4F30350", Offset = "0x4F30350", VA = "0x4F30350")]
	public static byte ToByte(bool value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x4F33400", Offset = "0x4F33400", VA = "0x4F33400")]
	public static byte ToByte(char value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x4F376B0", Offset = "0x4F376B0", VA = "0x4F376B0")]
	[CLSCompliant(false)]
	public static byte ToByte(sbyte value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x4F376F0", Offset = "0x4F376F0", VA = "0x4F376F0")]
	public static byte ToByte(short value)
	{
		return default(byte);
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x4F37740", Offset = "0x4F37740", VA = "0x4F37740")]
	[CLSCompliant(false)]
	public static byte ToByte(ushort value)
	{
		return default(byte);
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x4F37790", Offset = "0x4F37790", VA = "0x4F37790")]
	public static byte ToByte(int value)
	{
		return default(byte);
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x4F377D0", Offset = "0x4F377D0", VA = "0x4F377D0")]
	[CLSCompliant(false)]
	public static byte ToByte(uint value)
	{
		return default(byte);
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x4F37810", Offset = "0x4F37810", VA = "0x4F37810")]
	public static byte ToByte(long value)
	{
		return default(byte);
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x4F37860", Offset = "0x4F37860", VA = "0x4F37860")]
	[CLSCompliant(false)]
	public static byte ToByte(ulong value)
	{
		return default(byte);
	}

	[Token(Token = "0x600050F")]
	[Address(RVA = "0x4F378B0", Offset = "0x4F378B0", VA = "0x4F378B0")]
	public static byte ToByte(float value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x4F379B0", Offset = "0x4F379B0", VA = "0x4F379B0")]
	public static byte ToByte(double value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x4F37A70", Offset = "0x4F37A70", VA = "0x4F37A70")]
	public static byte ToByte(decimal value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x4F37AE0", Offset = "0x4F37AE0", VA = "0x4F37AE0")]
	public static byte ToByte(string value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x4F37B80", Offset = "0x4F37B80", VA = "0x4F37B80")]
	public static byte ToByte(string value, IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x4F37C00", Offset = "0x4F37C00", VA = "0x4F37C00")]
	public static short ToInt16(object value, IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x4F303B0", Offset = "0x4F303B0", VA = "0x4F303B0")]
	public static short ToInt16(bool value)
	{
		return default(short);
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x4F334E0", Offset = "0x4F334E0", VA = "0x4F334E0")]
	public static short ToInt16(char value)
	{
		return default(short);
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x4F37D00", Offset = "0x4F37D00", VA = "0x4F37D00")]
	[CLSCompliant(false)]
	public static short ToInt16(sbyte value)
	{
		return default(short);
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x4F32260", Offset = "0x4F32260", VA = "0x4F32260")]
	public static short ToInt16(byte value)
	{
		return default(short);
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x4F37D10", Offset = "0x4F37D10", VA = "0x4F37D10")]
	[CLSCompliant(false)]
	public static short ToInt16(ushort value)
	{
		return default(short);
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x4F37D50", Offset = "0x4F37D50", VA = "0x4F37D50")]
	public static short ToInt16(int value)
	{
		return default(short);
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x4F37D90", Offset = "0x4F37D90", VA = "0x4F37D90")]
	[CLSCompliant(false)]
	public static short ToInt16(uint value)
	{
		return default(short);
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x4F37DD0", Offset = "0x4F37DD0", VA = "0x4F37DD0")]
	public static short ToInt16(long value)
	{
		return default(short);
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x4F37E20", Offset = "0x4F37E20", VA = "0x4F37E20")]
	[CLSCompliant(false)]
	public static short ToInt16(ulong value)
	{
		return default(short);
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x4F37E70", Offset = "0x4F37E70", VA = "0x4F37E70")]
	public static short ToInt16(float value)
	{
		return default(short);
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x4F37F70", Offset = "0x4F37F70", VA = "0x4F37F70")]
	public static short ToInt16(double value)
	{
		return default(short);
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x4F38030", Offset = "0x4F38030", VA = "0x4F38030")]
	public static short ToInt16(decimal value)
	{
		return default(short);
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x4F380A0", Offset = "0x4F380A0", VA = "0x4F380A0")]
	public static short ToInt16(string value, IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x4F380C0", Offset = "0x4F380C0", VA = "0x4F380C0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(object value, IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x4F30410", Offset = "0x4F30410", VA = "0x4F30410")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(bool value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x4F33570", Offset = "0x4F33570", VA = "0x4F33570")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(char value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x4F381C0", Offset = "0x4F381C0", VA = "0x4F381C0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(sbyte value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x4F322C0", Offset = "0x4F322C0", VA = "0x4F322C0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(byte value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x4F38200", Offset = "0x4F38200", VA = "0x4F38200")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(short value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x4F38240", Offset = "0x4F38240", VA = "0x4F38240")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(int value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x4F38280", Offset = "0x4F38280", VA = "0x4F38280")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(uint value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x4F382C0", Offset = "0x4F382C0", VA = "0x4F382C0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(long value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x4F38310", Offset = "0x4F38310", VA = "0x4F38310")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(ulong value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x4F38360", Offset = "0x4F38360", VA = "0x4F38360")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(float value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x4F38460", Offset = "0x4F38460", VA = "0x4F38460")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(double value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x4F38520", Offset = "0x4F38520", VA = "0x4F38520")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(decimal value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x4F38590", Offset = "0x4F38590", VA = "0x4F38590")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(string value, IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x4F385B0", Offset = "0x4F385B0", VA = "0x4F385B0")]
	public static int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x4F38690", Offset = "0x4F38690", VA = "0x4F38690")]
	public static int ToInt32(object value, IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x4F30470", Offset = "0x4F30470", VA = "0x4F30470")]
	public static int ToInt32(bool value)
	{
		return default(int);
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x4F335D0", Offset = "0x4F335D0", VA = "0x4F335D0")]
	public static int ToInt32(char value)
	{
		return default(int);
	}

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x4F32320", Offset = "0x4F32320", VA = "0x4F32320")]
	public static int ToInt32(byte value)
	{
		return default(int);
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x4F38790", Offset = "0x4F38790", VA = "0x4F38790")]
	public static int ToInt32(short value)
	{
		return default(int);
	}

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x4F387A0", Offset = "0x4F387A0", VA = "0x4F387A0")]
	[CLSCompliant(false)]
	public static int ToInt32(ushort value)
	{
		return default(int);
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x4F387B0", Offset = "0x4F387B0", VA = "0x4F387B0")]
	[CLSCompliant(false)]
	public static int ToInt32(uint value)
	{
		return default(int);
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x4F387F0", Offset = "0x4F387F0", VA = "0x4F387F0")]
	public static int ToInt32(long value)
	{
		return default(int);
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x4F38830", Offset = "0x4F38830", VA = "0x4F38830")]
	[CLSCompliant(false)]
	public static int ToInt32(ulong value)
	{
		return default(int);
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x4F38880", Offset = "0x4F38880", VA = "0x4F38880")]
	public static int ToInt32(float value)
	{
		return default(int);
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x4F37460", Offset = "0x4F37460", VA = "0x4F37460")]
	public static int ToInt32(double value)
	{
		return default(int);
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x4F38900", Offset = "0x4F38900", VA = "0x4F38900")]
	public static int ToInt32(decimal value)
	{
		return default(int);
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x4F38970", Offset = "0x4F38970", VA = "0x4F38970")]
	public static int ToInt32(string value, IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x4F38990", Offset = "0x4F38990", VA = "0x4F38990")]
	[CLSCompliant(false)]
	public static uint ToUInt32(object value)
	{
		return default(uint);
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x4F38A70", Offset = "0x4F38A70", VA = "0x4F38A70")]
	[CLSCompliant(false)]
	public static uint ToUInt32(object value, IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x4F304D0", Offset = "0x4F304D0", VA = "0x4F304D0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(bool value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x4F33630", Offset = "0x4F33630", VA = "0x4F33630")]
	[CLSCompliant(false)]
	public static uint ToUInt32(char value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x4F38B70", Offset = "0x4F38B70", VA = "0x4F38B70")]
	[CLSCompliant(false)]
	public static uint ToUInt32(sbyte value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x4F32380", Offset = "0x4F32380", VA = "0x4F32380")]
	[CLSCompliant(false)]
	public static uint ToUInt32(byte value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x4F38BB0", Offset = "0x4F38BB0", VA = "0x4F38BB0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(short value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x4F38BF0", Offset = "0x4F38BF0", VA = "0x4F38BF0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(ushort value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x4F38C00", Offset = "0x4F38C00", VA = "0x4F38C00")]
	[CLSCompliant(false)]
	public static uint ToUInt32(int value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x4F38C40", Offset = "0x4F38C40", VA = "0x4F38C40")]
	[CLSCompliant(false)]
	public static uint ToUInt32(long value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x4F38C90", Offset = "0x4F38C90", VA = "0x4F38C90")]
	[CLSCompliant(false)]
	public static uint ToUInt32(ulong value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x4F38CE0", Offset = "0x4F38CE0", VA = "0x4F38CE0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(float value)
	{
		return default(uint);
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x4F38D50", Offset = "0x4F38D50", VA = "0x4F38D50")]
	[CLSCompliant(false)]
	public static uint ToUInt32(double value)
	{
		return default(uint);
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x4F38DF0", Offset = "0x4F38DF0", VA = "0x4F38DF0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(decimal value)
	{
		return default(uint);
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x4F38E60", Offset = "0x4F38E60", VA = "0x4F38E60")]
	[CLSCompliant(false)]
	public static uint ToUInt32(string value, IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x4F38E80", Offset = "0x4F38E80", VA = "0x4F38E80")]
	public static long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x4F38F60", Offset = "0x4F38F60", VA = "0x4F38F60")]
	public static long ToInt64(object value, IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x4F30530", Offset = "0x4F30530", VA = "0x4F30530")]
	public static long ToInt64(bool value)
	{
		return default(long);
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x4F33690", Offset = "0x4F33690", VA = "0x4F33690")]
	public static long ToInt64(char value)
	{
		return default(long);
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x4F39060", Offset = "0x4F39060", VA = "0x4F39060")]
	[CLSCompliant(false)]
	public static long ToInt64(sbyte value)
	{
		return default(long);
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x4F323E0", Offset = "0x4F323E0", VA = "0x4F323E0")]
	public static long ToInt64(byte value)
	{
		return default(long);
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x4F39070", Offset = "0x4F39070", VA = "0x4F39070")]
	public static long ToInt64(short value)
	{
		return default(long);
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x4F39080", Offset = "0x4F39080", VA = "0x4F39080")]
	[CLSCompliant(false)]
	public static long ToInt64(ushort value)
	{
		return default(long);
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x4F39090", Offset = "0x4F39090", VA = "0x4F39090")]
	public static long ToInt64(int value)
	{
		return default(long);
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x4F390A0", Offset = "0x4F390A0", VA = "0x4F390A0")]
	[CLSCompliant(false)]
	public static long ToInt64(uint value)
	{
		return default(long);
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x4F390B0", Offset = "0x4F390B0", VA = "0x4F390B0")]
	[CLSCompliant(false)]
	public static long ToInt64(ulong value)
	{
		return default(long);
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x4F390F0", Offset = "0x4F390F0", VA = "0x4F390F0")]
	public static long ToInt64(float value)
	{
		return default(long);
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x4F39160", Offset = "0x4F39160", VA = "0x4F39160")]
	public static long ToInt64(double value)
	{
		return default(long);
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x4F39290", Offset = "0x4F39290", VA = "0x4F39290")]
	public static long ToInt64(decimal value)
	{
		return default(long);
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x4F39300", Offset = "0x4F39300", VA = "0x4F39300")]
	public static long ToInt64(string value)
	{
		return default(long);
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x4F39360", Offset = "0x4F39360", VA = "0x4F39360")]
	public static long ToInt64(string value, IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x4F39380", Offset = "0x4F39380", VA = "0x4F39380")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(object value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x4F39460", Offset = "0x4F39460", VA = "0x4F39460")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(object value, IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x4F30590", Offset = "0x4F30590", VA = "0x4F30590")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(bool value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x4F336F0", Offset = "0x4F336F0", VA = "0x4F336F0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(char value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x4F39560", Offset = "0x4F39560", VA = "0x4F39560")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(sbyte value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x4F32440", Offset = "0x4F32440", VA = "0x4F32440")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(byte value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x4F395A0", Offset = "0x4F395A0", VA = "0x4F395A0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(short value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x4F395E0", Offset = "0x4F395E0", VA = "0x4F395E0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(ushort value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x4F395F0", Offset = "0x4F395F0", VA = "0x4F395F0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(int value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x4F39630", Offset = "0x4F39630", VA = "0x4F39630")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(uint value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x4F39640", Offset = "0x4F39640", VA = "0x4F39640")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(long value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x4F39680", Offset = "0x4F39680", VA = "0x4F39680")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(float value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x4F396F0", Offset = "0x4F396F0", VA = "0x4F396F0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(double value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x4F39850", Offset = "0x4F39850", VA = "0x4F39850")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(decimal value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x4F398C0", Offset = "0x4F398C0", VA = "0x4F398C0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(string value, IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x4F398E0", Offset = "0x4F398E0", VA = "0x4F398E0")]
	public static float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x4F399C0", Offset = "0x4F399C0", VA = "0x4F399C0")]
	public static float ToSingle(object value, IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x4F39AC0", Offset = "0x4F39AC0", VA = "0x4F39AC0")]
	[CLSCompliant(false)]
	public static float ToSingle(sbyte value)
	{
		return default(float);
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x4F324A0", Offset = "0x4F324A0", VA = "0x4F324A0")]
	public static float ToSingle(byte value)
	{
		return default(float);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x4F39AD0", Offset = "0x4F39AD0", VA = "0x4F39AD0")]
	public static float ToSingle(short value)
	{
		return default(float);
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x4F39AE0", Offset = "0x4F39AE0", VA = "0x4F39AE0")]
	[CLSCompliant(false)]
	public static float ToSingle(ushort value)
	{
		return default(float);
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x4F39AF0", Offset = "0x4F39AF0", VA = "0x4F39AF0")]
	public static float ToSingle(int value)
	{
		return default(float);
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x4F39B00", Offset = "0x4F39B00", VA = "0x4F39B00")]
	[CLSCompliant(false)]
	public static float ToSingle(uint value)
	{
		return default(float);
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x4F39B10", Offset = "0x4F39B10", VA = "0x4F39B10")]
	public static float ToSingle(long value)
	{
		return default(float);
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x4F39B20", Offset = "0x4F39B20", VA = "0x4F39B20")]
	[CLSCompliant(false)]
	public static float ToSingle(ulong value)
	{
		return default(float);
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x4F39B50", Offset = "0x4F39B50", VA = "0x4F39B50")]
	public static float ToSingle(double value)
	{
		return default(float);
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x4F39B60", Offset = "0x4F39B60", VA = "0x4F39B60")]
	public static float ToSingle(decimal value)
	{
		return default(float);
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x4F39BC0", Offset = "0x4F39BC0", VA = "0x4F39BC0")]
	public static float ToSingle(string value, IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x4F30600", Offset = "0x4F30600", VA = "0x4F30600")]
	public static float ToSingle(bool value)
	{
		return default(float);
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x4F39BE0", Offset = "0x4F39BE0", VA = "0x4F39BE0")]
	public static double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x4F39CC0", Offset = "0x4F39CC0", VA = "0x4F39CC0")]
	public static double ToDouble(object value, IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x4F39DC0", Offset = "0x4F39DC0", VA = "0x4F39DC0")]
	[CLSCompliant(false)]
	public static double ToDouble(sbyte value)
	{
		return default(double);
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x4F32500", Offset = "0x4F32500", VA = "0x4F32500")]
	public static double ToDouble(byte value)
	{
		return default(double);
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x4F39DD0", Offset = "0x4F39DD0", VA = "0x4F39DD0")]
	public static double ToDouble(short value)
	{
		return default(double);
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x4F39DE0", Offset = "0x4F39DE0", VA = "0x4F39DE0")]
	[CLSCompliant(false)]
	public static double ToDouble(ushort value)
	{
		return default(double);
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x4F39DF0", Offset = "0x4F39DF0", VA = "0x4F39DF0")]
	public static double ToDouble(int value)
	{
		return default(double);
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x4F39E00", Offset = "0x4F39E00", VA = "0x4F39E00")]
	[CLSCompliant(false)]
	public static double ToDouble(uint value)
	{
		return default(double);
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x4F39E10", Offset = "0x4F39E10", VA = "0x4F39E10")]
	public static double ToDouble(long value)
	{
		return default(double);
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x4F39E20", Offset = "0x4F39E20", VA = "0x4F39E20")]
	[CLSCompliant(false)]
	public static double ToDouble(ulong value)
	{
		return default(double);
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x4F39E50", Offset = "0x4F39E50", VA = "0x4F39E50")]
	public static double ToDouble(float value)
	{
		return default(double);
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x4F39E60", Offset = "0x4F39E60", VA = "0x4F39E60")]
	public static double ToDouble(decimal value)
	{
		return default(double);
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x4F39EC0", Offset = "0x4F39EC0", VA = "0x4F39EC0")]
	public static double ToDouble(string value)
	{
		return default(double);
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x4F39F20", Offset = "0x4F39F20", VA = "0x4F39F20")]
	public static double ToDouble(string value, IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x4F30680", Offset = "0x4F30680", VA = "0x4F30680")]
	public static double ToDouble(bool value)
	{
		return default(double);
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x4F39F40", Offset = "0x4F39F40", VA = "0x4F39F40")]
	public static decimal ToDecimal(object value, IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x4F3A060", Offset = "0x4F3A060", VA = "0x4F3A060")]
	[CLSCompliant(false)]
	public static decimal ToDecimal(sbyte value)
	{
		return default(decimal);
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x4F325B0", Offset = "0x4F325B0", VA = "0x4F325B0")]
	public static decimal ToDecimal(byte value)
	{
		return default(decimal);
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x4F3A0C0", Offset = "0x4F3A0C0", VA = "0x4F3A0C0")]
	public static decimal ToDecimal(short value)
	{
		return default(decimal);
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x4F3A120", Offset = "0x4F3A120", VA = "0x4F3A120")]
	[CLSCompliant(false)]
	public static decimal ToDecimal(ushort value)
	{
		return default(decimal);
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x4F3A180", Offset = "0x4F3A180", VA = "0x4F3A180")]
	public static decimal ToDecimal(int value)
	{
		return default(decimal);
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x4F3A1E0", Offset = "0x4F3A1E0", VA = "0x4F3A1E0")]
	[CLSCompliant(false)]
	public static decimal ToDecimal(uint value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x4F3A240", Offset = "0x4F3A240", VA = "0x4F3A240")]
	public static decimal ToDecimal(long value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x4F3A2B0", Offset = "0x4F3A2B0", VA = "0x4F3A2B0")]
	[CLSCompliant(false)]
	public static decimal ToDecimal(ulong value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x4F3A320", Offset = "0x4F3A320", VA = "0x4F3A320")]
	public static decimal ToDecimal(float value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x4F3A390", Offset = "0x4F3A390", VA = "0x4F3A390")]
	public static decimal ToDecimal(double value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x4F3A400", Offset = "0x4F3A400", VA = "0x4F3A400")]
	public static decimal ToDecimal(string value, IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x4F30740", Offset = "0x4F30740", VA = "0x4F30740")]
	public static decimal ToDecimal(bool value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x4F3A490", Offset = "0x4F3A490", VA = "0x4F3A490")]
	public static DateTime ToDateTime(object value, IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x4F3A5B0", Offset = "0x4F3A5B0", VA = "0x4F3A5B0")]
	public static DateTime ToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x4F3A660", Offset = "0x4F3A660", VA = "0x4F3A660")]
	public static DateTime ToDateTime(string value, IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x4F3A6E0", Offset = "0x4F3A6E0", VA = "0x4F3A6E0")]
	public static string ToString(object value, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x4F3A890", Offset = "0x4F3A890", VA = "0x4F3A890")]
	public static string ToString(char value, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x4F3A8E0", Offset = "0x4F3A8E0", VA = "0x4F3A8E0")]
	public static string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x4F3A940", Offset = "0x4F3A940", VA = "0x4F3A940")]
	public static string ToString(int value, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x4F3A960", Offset = "0x4F3A960", VA = "0x4F3A960")]
	public static byte ToByte(string value, int fromBase)
	{
		return default(byte);
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x4F3AA50", Offset = "0x4F3AA50", VA = "0x4F3AA50")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(string value, int fromBase)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x4F3AB50", Offset = "0x4F3AB50", VA = "0x4F3AB50")]
	public static short ToInt16(string value, int fromBase)
	{
		return default(short);
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x4F3AC50", Offset = "0x4F3AC50", VA = "0x4F3AC50")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(string value, int fromBase)
	{
		return default(ushort);
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x4F3AD40", Offset = "0x4F3AD40", VA = "0x4F3AD40")]
	public static int ToInt32(string value, int fromBase)
	{
		return default(int);
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x4F3AE00", Offset = "0x4F3AE00", VA = "0x4F3AE00")]
	[CLSCompliant(false)]
	public static uint ToUInt32(string value, int fromBase)
	{
		return default(uint);
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x4F3AEC0", Offset = "0x4F3AEC0", VA = "0x4F3AEC0")]
	public static long ToInt64(string value, int fromBase)
	{
		return default(long);
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x4F3AF80", Offset = "0x4F3AF80", VA = "0x4F3AF80")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(string value, int fromBase)
	{
		return default(ulong);
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x4F3B040", Offset = "0x4F3B040", VA = "0x4F3B040")]
	public static string ToString(byte value, int toBase)
	{
		return null;
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x4F3B0C0", Offset = "0x4F3B0C0", VA = "0x4F3B0C0")]
	public static string ToString(int value, int toBase)
	{
		return null;
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x4F3B130", Offset = "0x4F3B130", VA = "0x4F3B130")]
	public static string ToString(long value, int toBase)
	{
		return null;
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x4F3B1A0", Offset = "0x4F3B1A0", VA = "0x4F3B1A0")]
	public static string ToBase64String(byte[] inArray)
	{
		return null;
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x4F3B4A0", Offset = "0x4F3B4A0", VA = "0x4F3B4A0")]
	public static string ToBase64String(byte[] inArray, int offset, int length)
	{
		return null;
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x4F3B4F0", Offset = "0x4F3B4F0", VA = "0x4F3B4F0")]
	public static string ToBase64String(byte[] inArray, int offset, int length, Base64FormattingOptions options)
	{
		return null;
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x4F3B250", Offset = "0x4F3B250", VA = "0x4F3B250")]
	public static string ToBase64String(ReadOnlySpan<byte> bytes, Base64FormattingOptions options = Base64FormattingOptions.None)
	{
		return null;
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x4F3BAE0", Offset = "0x4F3BAE0", VA = "0x4F3BAE0")]
	public static int ToBase64CharArray(byte[] inArray, int offsetIn, int length, char[] outArray, int offsetOut)
	{
		return default(int);
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x4F3BB60", Offset = "0x4F3BB60", VA = "0x4F3BB60")]
	public static int ToBase64CharArray(byte[] inArray, int offsetIn, int length, char[] outArray, int offsetOut, Base64FormattingOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x4F3B750", Offset = "0x4F3B750", VA = "0x4F3B750")]
	private unsafe static int ConvertToBase64Array(char* outChars, byte* inData, int offset, int length, bool insertLineBreaks)
	{
		return default(int);
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x4F3B690", Offset = "0x4F3B690", VA = "0x4F3B690")]
	private static int ToBase64_CalculateAndValidateOutputLength(int inputLength, bool insertLineBreaks)
	{
		return default(int);
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x4F3BF30", Offset = "0x4F3BF30", VA = "0x4F3BF30")]
	public static byte[] FromBase64String(string s)
	{
		return null;
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x4F3C130", Offset = "0x4F3C130", VA = "0x4F3C130")]
	public static bool TryFromBase64Chars(ReadOnlySpan<char> chars, Span<byte> bytes, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x4F3C780", Offset = "0x4F3C780", VA = "0x4F3C780")]
	private static void CopyToTempBufferWithoutWhiteSpace(ReadOnlySpan<char> chars, Span<char> tempBuffer, out int consumed, out int charsWritten)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x4F3C8A0", Offset = "0x4F3C8A0", VA = "0x4F3C8A0")]
	private static bool IsSpace(this char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x4F3C8C0", Offset = "0x4F3C8C0", VA = "0x4F3C8C0")]
	public static byte[] FromBase64CharArray(char[] inArray, int offset, int length)
	{
		return null;
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x4F3BFE0", Offset = "0x4F3BFE0", VA = "0x4F3BFE0")]
	private unsafe static byte[] FromBase64CharPtr(char* inputPtr, int inputLength)
	{
		return null;
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x4F3CAE0", Offset = "0x4F3CAE0", VA = "0x4F3CAE0")]
	private unsafe static int FromBase64_ComputeResultLength(char* inputPtr, int inputLength)
	{
		return default(int);
	}
}
