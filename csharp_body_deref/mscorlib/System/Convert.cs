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
	[Address(RVA = "0x3C1A500", Offset = "0x3C1A500", VA = "0x3C1A500")]
	private static bool TryDecodeFromUtf16(ReadOnlySpan<char> utf16, Span<byte> bytes, out int consumed, out int written)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x3C1A8E0", Offset = "0x3C1A8E0", VA = "0x3C1A8E0")]
	private static int Decode(ref char encodedChars, ref sbyte decodingMap)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x3C1A930", Offset = "0x3C1A930", VA = "0x3C1A930")]
	private static void WriteThreeLowOrderBytes(ref byte destination, int value)
	{
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x3C1A940", Offset = "0x3C1A940", VA = "0x3C1A940")]
	public static TypeCode GetTypeCode(object value)
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x3C1AA10", Offset = "0x3C1AA10", VA = "0x3C1AA10")]
	public static object ChangeType(object value, TypeCode typeCode, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x3C163B0", Offset = "0x3C163B0", VA = "0x3C163B0")]
	internal static object DefaultToType(IConvertible value, Type targetType, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x3C1B380", Offset = "0x3C1B380", VA = "0x3C1B380")]
	public static object ChangeType(object value, Type conversionType)
	{
		return null;
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x3C1B400", Offset = "0x3C1B400", VA = "0x3C1B400")]
	public static object ChangeType(object value, Type conversionType, IFormatProvider provider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x3C1C170", Offset = "0x3C1C170", VA = "0x3C1C170")]
	private static void ThrowCharOverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x3C1C1C0", Offset = "0x3C1C1C0", VA = "0x3C1C1C0")]
	private static void ThrowByteOverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x3C1C210", Offset = "0x3C1C210", VA = "0x3C1C210")]
	private static void ThrowSByteOverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x3C1C260", Offset = "0x3C1C260", VA = "0x3C1C260")]
	private static void ThrowInt16OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x3C1C2B0", Offset = "0x3C1C2B0", VA = "0x3C1C2B0")]
	private static void ThrowUInt16OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x3C1C300", Offset = "0x3C1C300", VA = "0x3C1C300")]
	private static void ThrowInt32OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x3C1C350", Offset = "0x3C1C350", VA = "0x3C1C350")]
	private static void ThrowUInt32OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x3C1C3A0", Offset = "0x3C1C3A0", VA = "0x3C1C3A0")]
	private static void ThrowInt64OverflowException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x3C1C3F0", Offset = "0x3C1C3F0", VA = "0x3C1C3F0")]
	private static void ThrowUInt64OverflowException()
	{
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x3C1C440", Offset = "0x3C1C440", VA = "0x3C1C440")]
	public static bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x3C1C520", Offset = "0x3C1C520", VA = "0x3C1C520")]
	public static bool ToBoolean(object value, IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x3C1C620", Offset = "0x3C1C620", VA = "0x3C1C620")]
	[CLSCompliant(false)]
	public static bool ToBoolean(sbyte value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x3C17BE0", Offset = "0x3C17BE0", VA = "0x3C17BE0")]
	public static bool ToBoolean(byte value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x3C1C630", Offset = "0x3C1C630", VA = "0x3C1C630")]
	public static bool ToBoolean(short value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x3C1C640", Offset = "0x3C1C640", VA = "0x3C1C640")]
	[CLSCompliant(false)]
	public static bool ToBoolean(ushort value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x3C1C650", Offset = "0x3C1C650", VA = "0x3C1C650")]
	public static bool ToBoolean(int value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x3C1C660", Offset = "0x3C1C660", VA = "0x3C1C660")]
	[CLSCompliant(false)]
	public static bool ToBoolean(uint value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x3C1C670", Offset = "0x3C1C670", VA = "0x3C1C670")]
	public static bool ToBoolean(long value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x3C1C680", Offset = "0x3C1C680", VA = "0x3C1C680")]
	[CLSCompliant(false)]
	public static bool ToBoolean(ulong value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x3C1C690", Offset = "0x3C1C690", VA = "0x3C1C690")]
	public static bool ToBoolean(string value, IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x3C1C6D0", Offset = "0x3C1C6D0", VA = "0x3C1C6D0")]
	public static bool ToBoolean(float value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x3C1C6E0", Offset = "0x3C1C6E0", VA = "0x3C1C6E0")]
	public static bool ToBoolean(double value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x3C1C700", Offset = "0x3C1C700", VA = "0x3C1C700")]
	public static bool ToBoolean(decimal value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x3C1C770", Offset = "0x3C1C770", VA = "0x3C1C770")]
	public static char ToChar(object value, IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x3C1C870", Offset = "0x3C1C870", VA = "0x3C1C870")]
	[CLSCompliant(false)]
	public static char ToChar(sbyte value)
	{
		return default(char);
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x3C17C40", Offset = "0x3C17C40", VA = "0x3C17C40")]
	public static char ToChar(byte value)
	{
		return default(char);
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x3C1C8B0", Offset = "0x3C1C8B0", VA = "0x3C1C8B0")]
	public static char ToChar(short value)
	{
		return default(char);
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x3C1C8F0", Offset = "0x3C1C8F0", VA = "0x3C1C8F0")]
	[CLSCompliant(false)]
	public static char ToChar(ushort value)
	{
		return default(char);
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x3C1C900", Offset = "0x3C1C900", VA = "0x3C1C900")]
	public static char ToChar(int value)
	{
		return default(char);
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x3C1C940", Offset = "0x3C1C940", VA = "0x3C1C940")]
	[CLSCompliant(false)]
	public static char ToChar(uint value)
	{
		return default(char);
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x3C1C980", Offset = "0x3C1C980", VA = "0x3C1C980")]
	public static char ToChar(long value)
	{
		return default(char);
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x3C1C9D0", Offset = "0x3C1C9D0", VA = "0x3C1C9D0")]
	[CLSCompliant(false)]
	public static char ToChar(ulong value)
	{
		return default(char);
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x3C1CA20", Offset = "0x3C1CA20", VA = "0x3C1CA20")]
	public static char ToChar(string value)
	{
		return default(char);
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x3C1CA80", Offset = "0x3C1CA80", VA = "0x3C1CA80")]
	public static char ToChar(string value, IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x3C1CB10", Offset = "0x3C1CB10", VA = "0x3C1CB10")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(object value, IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x3C15E10", Offset = "0x3C15E10", VA = "0x3C15E10")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(bool value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x3C18E40", Offset = "0x3C18E40", VA = "0x3C18E40")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(char value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x3C17CE0", Offset = "0x3C17CE0", VA = "0x3C17CE0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(byte value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x3C1CC10", Offset = "0x3C1CC10", VA = "0x3C1CC10")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(short value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x3C1CC50", Offset = "0x3C1CC50", VA = "0x3C1CC50")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(ushort value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x3C1CCA0", Offset = "0x3C1CCA0", VA = "0x3C1CCA0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(int value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x3C1CCE0", Offset = "0x3C1CCE0", VA = "0x3C1CCE0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(uint value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x3C1CD20", Offset = "0x3C1CD20", VA = "0x3C1CD20")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(long value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x3C1CD70", Offset = "0x3C1CD70", VA = "0x3C1CD70")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(ulong value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x3C1CDC0", Offset = "0x3C1CDC0", VA = "0x3C1CDC0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(float value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x3C1CEC0", Offset = "0x3C1CEC0", VA = "0x3C1CEC0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(double value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x3C1D050", Offset = "0x3C1D050", VA = "0x3C1D050")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(decimal value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x3C1D0C0", Offset = "0x3C1D0C0", VA = "0x3C1D0C0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(string value, IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x3C1D0D0", Offset = "0x3C1D0D0", VA = "0x3C1D0D0")]
	public static byte ToByte(object value, IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x3C15E70", Offset = "0x3C15E70", VA = "0x3C15E70")]
	public static byte ToByte(bool value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x3C18F20", Offset = "0x3C18F20", VA = "0x3C18F20")]
	public static byte ToByte(char value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x3C1D1D0", Offset = "0x3C1D1D0", VA = "0x3C1D1D0")]
	[CLSCompliant(false)]
	public static byte ToByte(sbyte value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x3C1D210", Offset = "0x3C1D210", VA = "0x3C1D210")]
	public static byte ToByte(short value)
	{
		return default(byte);
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x3C1D260", Offset = "0x3C1D260", VA = "0x3C1D260")]
	[CLSCompliant(false)]
	public static byte ToByte(ushort value)
	{
		return default(byte);
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x3C1D2B0", Offset = "0x3C1D2B0", VA = "0x3C1D2B0")]
	public static byte ToByte(int value)
	{
		return default(byte);
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x3C1D2F0", Offset = "0x3C1D2F0", VA = "0x3C1D2F0")]
	[CLSCompliant(false)]
	public static byte ToByte(uint value)
	{
		return default(byte);
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x3C1D330", Offset = "0x3C1D330", VA = "0x3C1D330")]
	public static byte ToByte(long value)
	{
		return default(byte);
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x3C1D380", Offset = "0x3C1D380", VA = "0x3C1D380")]
	[CLSCompliant(false)]
	public static byte ToByte(ulong value)
	{
		return default(byte);
	}

	[Token(Token = "0x600050F")]
	[Address(RVA = "0x3C1D3D0", Offset = "0x3C1D3D0", VA = "0x3C1D3D0")]
	public static byte ToByte(float value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x3C1D4D0", Offset = "0x3C1D4D0", VA = "0x3C1D4D0")]
	public static byte ToByte(double value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x3C1D590", Offset = "0x3C1D590", VA = "0x3C1D590")]
	public static byte ToByte(decimal value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x3C1D600", Offset = "0x3C1D600", VA = "0x3C1D600")]
	public static byte ToByte(string value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x3C1D6A0", Offset = "0x3C1D6A0", VA = "0x3C1D6A0")]
	public static byte ToByte(string value, IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x3C1D720", Offset = "0x3C1D720", VA = "0x3C1D720")]
	public static short ToInt16(object value, IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x3C15ED0", Offset = "0x3C15ED0", VA = "0x3C15ED0")]
	public static short ToInt16(bool value)
	{
		return default(short);
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x3C19000", Offset = "0x3C19000", VA = "0x3C19000")]
	public static short ToInt16(char value)
	{
		return default(short);
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x3C1D820", Offset = "0x3C1D820", VA = "0x3C1D820")]
	[CLSCompliant(false)]
	public static short ToInt16(sbyte value)
	{
		return default(short);
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x3C17D80", Offset = "0x3C17D80", VA = "0x3C17D80")]
	public static short ToInt16(byte value)
	{
		return default(short);
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x3C1D830", Offset = "0x3C1D830", VA = "0x3C1D830")]
	[CLSCompliant(false)]
	public static short ToInt16(ushort value)
	{
		return default(short);
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x3C1D870", Offset = "0x3C1D870", VA = "0x3C1D870")]
	public static short ToInt16(int value)
	{
		return default(short);
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x3C1D8B0", Offset = "0x3C1D8B0", VA = "0x3C1D8B0")]
	[CLSCompliant(false)]
	public static short ToInt16(uint value)
	{
		return default(short);
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x3C1D8F0", Offset = "0x3C1D8F0", VA = "0x3C1D8F0")]
	public static short ToInt16(long value)
	{
		return default(short);
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x3C1D940", Offset = "0x3C1D940", VA = "0x3C1D940")]
	[CLSCompliant(false)]
	public static short ToInt16(ulong value)
	{
		return default(short);
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x3C1D990", Offset = "0x3C1D990", VA = "0x3C1D990")]
	public static short ToInt16(float value)
	{
		return default(short);
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x3C1DA90", Offset = "0x3C1DA90", VA = "0x3C1DA90")]
	public static short ToInt16(double value)
	{
		return default(short);
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x3C1DB50", Offset = "0x3C1DB50", VA = "0x3C1DB50")]
	public static short ToInt16(decimal value)
	{
		return default(short);
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x3C1DBC0", Offset = "0x3C1DBC0", VA = "0x3C1DBC0")]
	public static short ToInt16(string value, IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x3C1DBE0", Offset = "0x3C1DBE0", VA = "0x3C1DBE0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(object value, IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x3C15F30", Offset = "0x3C15F30", VA = "0x3C15F30")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(bool value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x3C19090", Offset = "0x3C19090", VA = "0x3C19090")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(char value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x3C1DCE0", Offset = "0x3C1DCE0", VA = "0x3C1DCE0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(sbyte value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x3C17DE0", Offset = "0x3C17DE0", VA = "0x3C17DE0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(byte value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x3C1DD20", Offset = "0x3C1DD20", VA = "0x3C1DD20")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(short value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x3C1DD60", Offset = "0x3C1DD60", VA = "0x3C1DD60")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(int value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x3C1DDA0", Offset = "0x3C1DDA0", VA = "0x3C1DDA0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(uint value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x3C1DDE0", Offset = "0x3C1DDE0", VA = "0x3C1DDE0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(long value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x3C1DE30", Offset = "0x3C1DE30", VA = "0x3C1DE30")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(ulong value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x3C1DE80", Offset = "0x3C1DE80", VA = "0x3C1DE80")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(float value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x3C1DF80", Offset = "0x3C1DF80", VA = "0x3C1DF80")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(double value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x3C1E040", Offset = "0x3C1E040", VA = "0x3C1E040")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(decimal value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x3C1E0B0", Offset = "0x3C1E0B0", VA = "0x3C1E0B0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(string value, IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x3C1E0D0", Offset = "0x3C1E0D0", VA = "0x3C1E0D0")]
	public static int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x3C1E1B0", Offset = "0x3C1E1B0", VA = "0x3C1E1B0")]
	public static int ToInt32(object value, IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x3C15F90", Offset = "0x3C15F90", VA = "0x3C15F90")]
	public static int ToInt32(bool value)
	{
		return default(int);
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x3C190F0", Offset = "0x3C190F0", VA = "0x3C190F0")]
	public static int ToInt32(char value)
	{
		return default(int);
	}

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x3C17E40", Offset = "0x3C17E40", VA = "0x3C17E40")]
	public static int ToInt32(byte value)
	{
		return default(int);
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x3C1E2B0", Offset = "0x3C1E2B0", VA = "0x3C1E2B0")]
	public static int ToInt32(short value)
	{
		return default(int);
	}

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x3C1E2C0", Offset = "0x3C1E2C0", VA = "0x3C1E2C0")]
	[CLSCompliant(false)]
	public static int ToInt32(ushort value)
	{
		return default(int);
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x3C1E2D0", Offset = "0x3C1E2D0", VA = "0x3C1E2D0")]
	[CLSCompliant(false)]
	public static int ToInt32(uint value)
	{
		return default(int);
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x3C1E310", Offset = "0x3C1E310", VA = "0x3C1E310")]
	public static int ToInt32(long value)
	{
		return default(int);
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x3C1E350", Offset = "0x3C1E350", VA = "0x3C1E350")]
	[CLSCompliant(false)]
	public static int ToInt32(ulong value)
	{
		return default(int);
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x3C1E3A0", Offset = "0x3C1E3A0", VA = "0x3C1E3A0")]
	public static int ToInt32(float value)
	{
		return default(int);
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x3C1CF80", Offset = "0x3C1CF80", VA = "0x3C1CF80")]
	public static int ToInt32(double value)
	{
		return default(int);
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x3C1E420", Offset = "0x3C1E420", VA = "0x3C1E420")]
	public static int ToInt32(decimal value)
	{
		return default(int);
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x3C1E490", Offset = "0x3C1E490", VA = "0x3C1E490")]
	public static int ToInt32(string value, IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x3C1E4B0", Offset = "0x3C1E4B0", VA = "0x3C1E4B0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(object value)
	{
		return default(uint);
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x3C1E590", Offset = "0x3C1E590", VA = "0x3C1E590")]
	[CLSCompliant(false)]
	public static uint ToUInt32(object value, IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x3C15FF0", Offset = "0x3C15FF0", VA = "0x3C15FF0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(bool value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x3C19150", Offset = "0x3C19150", VA = "0x3C19150")]
	[CLSCompliant(false)]
	public static uint ToUInt32(char value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x3C1E690", Offset = "0x3C1E690", VA = "0x3C1E690")]
	[CLSCompliant(false)]
	public static uint ToUInt32(sbyte value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x3C17EA0", Offset = "0x3C17EA0", VA = "0x3C17EA0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(byte value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x3C1E6D0", Offset = "0x3C1E6D0", VA = "0x3C1E6D0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(short value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x3C1E710", Offset = "0x3C1E710", VA = "0x3C1E710")]
	[CLSCompliant(false)]
	public static uint ToUInt32(ushort value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x3C1E720", Offset = "0x3C1E720", VA = "0x3C1E720")]
	[CLSCompliant(false)]
	public static uint ToUInt32(int value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x3C1E760", Offset = "0x3C1E760", VA = "0x3C1E760")]
	[CLSCompliant(false)]
	public static uint ToUInt32(long value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x3C1E7B0", Offset = "0x3C1E7B0", VA = "0x3C1E7B0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(ulong value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x3C1E800", Offset = "0x3C1E800", VA = "0x3C1E800")]
	[CLSCompliant(false)]
	public static uint ToUInt32(float value)
	{
		return default(uint);
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x3C1E870", Offset = "0x3C1E870", VA = "0x3C1E870")]
	[CLSCompliant(false)]
	public static uint ToUInt32(double value)
	{
		return default(uint);
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x3C1E910", Offset = "0x3C1E910", VA = "0x3C1E910")]
	[CLSCompliant(false)]
	public static uint ToUInt32(decimal value)
	{
		return default(uint);
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x3C1E980", Offset = "0x3C1E980", VA = "0x3C1E980")]
	[CLSCompliant(false)]
	public static uint ToUInt32(string value, IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x3C1E9A0", Offset = "0x3C1E9A0", VA = "0x3C1E9A0")]
	public static long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x3C1EA80", Offset = "0x3C1EA80", VA = "0x3C1EA80")]
	public static long ToInt64(object value, IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x3C16050", Offset = "0x3C16050", VA = "0x3C16050")]
	public static long ToInt64(bool value)
	{
		return default(long);
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x3C191B0", Offset = "0x3C191B0", VA = "0x3C191B0")]
	public static long ToInt64(char value)
	{
		return default(long);
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x3C1EB80", Offset = "0x3C1EB80", VA = "0x3C1EB80")]
	[CLSCompliant(false)]
	public static long ToInt64(sbyte value)
	{
		return default(long);
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x3C17F00", Offset = "0x3C17F00", VA = "0x3C17F00")]
	public static long ToInt64(byte value)
	{
		return default(long);
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x3C1EB90", Offset = "0x3C1EB90", VA = "0x3C1EB90")]
	public static long ToInt64(short value)
	{
		return default(long);
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x3C1EBA0", Offset = "0x3C1EBA0", VA = "0x3C1EBA0")]
	[CLSCompliant(false)]
	public static long ToInt64(ushort value)
	{
		return default(long);
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x3C1EBB0", Offset = "0x3C1EBB0", VA = "0x3C1EBB0")]
	public static long ToInt64(int value)
	{
		return default(long);
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x3C1EBC0", Offset = "0x3C1EBC0", VA = "0x3C1EBC0")]
	[CLSCompliant(false)]
	public static long ToInt64(uint value)
	{
		return default(long);
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x3C1EBD0", Offset = "0x3C1EBD0", VA = "0x3C1EBD0")]
	[CLSCompliant(false)]
	public static long ToInt64(ulong value)
	{
		return default(long);
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x3C1EC10", Offset = "0x3C1EC10", VA = "0x3C1EC10")]
	public static long ToInt64(float value)
	{
		return default(long);
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x3C1EC80", Offset = "0x3C1EC80", VA = "0x3C1EC80")]
	public static long ToInt64(double value)
	{
		return default(long);
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x3C1EDB0", Offset = "0x3C1EDB0", VA = "0x3C1EDB0")]
	public static long ToInt64(decimal value)
	{
		return default(long);
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x3C1EE20", Offset = "0x3C1EE20", VA = "0x3C1EE20")]
	public static long ToInt64(string value)
	{
		return default(long);
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x3C1EE80", Offset = "0x3C1EE80", VA = "0x3C1EE80")]
	public static long ToInt64(string value, IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x3C1EEA0", Offset = "0x3C1EEA0", VA = "0x3C1EEA0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(object value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x3C1EF80", Offset = "0x3C1EF80", VA = "0x3C1EF80")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(object value, IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x3C160B0", Offset = "0x3C160B0", VA = "0x3C160B0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(bool value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x3C19210", Offset = "0x3C19210", VA = "0x3C19210")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(char value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x3C1F080", Offset = "0x3C1F080", VA = "0x3C1F080")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(sbyte value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x3C17F60", Offset = "0x3C17F60", VA = "0x3C17F60")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(byte value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x3C1F0C0", Offset = "0x3C1F0C0", VA = "0x3C1F0C0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(short value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x3C1F100", Offset = "0x3C1F100", VA = "0x3C1F100")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(ushort value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x3C1F110", Offset = "0x3C1F110", VA = "0x3C1F110")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(int value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x3C1F150", Offset = "0x3C1F150", VA = "0x3C1F150")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(uint value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x3C1F160", Offset = "0x3C1F160", VA = "0x3C1F160")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(long value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x3C1F1A0", Offset = "0x3C1F1A0", VA = "0x3C1F1A0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(float value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x3C1F210", Offset = "0x3C1F210", VA = "0x3C1F210")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(double value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x3C1F370", Offset = "0x3C1F370", VA = "0x3C1F370")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(decimal value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x3C1F3E0", Offset = "0x3C1F3E0", VA = "0x3C1F3E0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(string value, IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x3C1F400", Offset = "0x3C1F400", VA = "0x3C1F400")]
	public static float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x3C1F4E0", Offset = "0x3C1F4E0", VA = "0x3C1F4E0")]
	public static float ToSingle(object value, IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x3C1F5E0", Offset = "0x3C1F5E0", VA = "0x3C1F5E0")]
	[CLSCompliant(false)]
	public static float ToSingle(sbyte value)
	{
		return default(float);
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x3C17FC0", Offset = "0x3C17FC0", VA = "0x3C17FC0")]
	public static float ToSingle(byte value)
	{
		return default(float);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x3C1F5F0", Offset = "0x3C1F5F0", VA = "0x3C1F5F0")]
	public static float ToSingle(short value)
	{
		return default(float);
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x3C1F600", Offset = "0x3C1F600", VA = "0x3C1F600")]
	[CLSCompliant(false)]
	public static float ToSingle(ushort value)
	{
		return default(float);
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x3C1F610", Offset = "0x3C1F610", VA = "0x3C1F610")]
	public static float ToSingle(int value)
	{
		return default(float);
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x3C1F620", Offset = "0x3C1F620", VA = "0x3C1F620")]
	[CLSCompliant(false)]
	public static float ToSingle(uint value)
	{
		return default(float);
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x3C1F630", Offset = "0x3C1F630", VA = "0x3C1F630")]
	public static float ToSingle(long value)
	{
		return default(float);
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x3C1F640", Offset = "0x3C1F640", VA = "0x3C1F640")]
	[CLSCompliant(false)]
	public static float ToSingle(ulong value)
	{
		return default(float);
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x3C1F670", Offset = "0x3C1F670", VA = "0x3C1F670")]
	public static float ToSingle(double value)
	{
		return default(float);
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x3C1F680", Offset = "0x3C1F680", VA = "0x3C1F680")]
	public static float ToSingle(decimal value)
	{
		return default(float);
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x3C1F6E0", Offset = "0x3C1F6E0", VA = "0x3C1F6E0")]
	public static float ToSingle(string value, IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x3C16120", Offset = "0x3C16120", VA = "0x3C16120")]
	public static float ToSingle(bool value)
	{
		return default(float);
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x3C1F700", Offset = "0x3C1F700", VA = "0x3C1F700")]
	public static double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x3C1F7E0", Offset = "0x3C1F7E0", VA = "0x3C1F7E0")]
	public static double ToDouble(object value, IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x3C1F8E0", Offset = "0x3C1F8E0", VA = "0x3C1F8E0")]
	[CLSCompliant(false)]
	public static double ToDouble(sbyte value)
	{
		return default(double);
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x3C18020", Offset = "0x3C18020", VA = "0x3C18020")]
	public static double ToDouble(byte value)
	{
		return default(double);
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x3C1F8F0", Offset = "0x3C1F8F0", VA = "0x3C1F8F0")]
	public static double ToDouble(short value)
	{
		return default(double);
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x3C1F900", Offset = "0x3C1F900", VA = "0x3C1F900")]
	[CLSCompliant(false)]
	public static double ToDouble(ushort value)
	{
		return default(double);
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x3C1F910", Offset = "0x3C1F910", VA = "0x3C1F910")]
	public static double ToDouble(int value)
	{
		return default(double);
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x3C1F920", Offset = "0x3C1F920", VA = "0x3C1F920")]
	[CLSCompliant(false)]
	public static double ToDouble(uint value)
	{
		return default(double);
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x3C1F930", Offset = "0x3C1F930", VA = "0x3C1F930")]
	public static double ToDouble(long value)
	{
		return default(double);
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x3C1F940", Offset = "0x3C1F940", VA = "0x3C1F940")]
	[CLSCompliant(false)]
	public static double ToDouble(ulong value)
	{
		return default(double);
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x3C1F970", Offset = "0x3C1F970", VA = "0x3C1F970")]
	public static double ToDouble(float value)
	{
		return default(double);
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x3C1F980", Offset = "0x3C1F980", VA = "0x3C1F980")]
	public static double ToDouble(decimal value)
	{
		return default(double);
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x3C1F9E0", Offset = "0x3C1F9E0", VA = "0x3C1F9E0")]
	public static double ToDouble(string value)
	{
		return default(double);
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x3C1FA40", Offset = "0x3C1FA40", VA = "0x3C1FA40")]
	public static double ToDouble(string value, IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x3C161A0", Offset = "0x3C161A0", VA = "0x3C161A0")]
	public static double ToDouble(bool value)
	{
		return default(double);
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x3C1FA60", Offset = "0x3C1FA60", VA = "0x3C1FA60")]
	public static decimal ToDecimal(object value, IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x3C1FB80", Offset = "0x3C1FB80", VA = "0x3C1FB80")]
	[CLSCompliant(false)]
	public static decimal ToDecimal(sbyte value)
	{
		return default(decimal);
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x3C180D0", Offset = "0x3C180D0", VA = "0x3C180D0")]
	public static decimal ToDecimal(byte value)
	{
		return default(decimal);
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x3C1FBE0", Offset = "0x3C1FBE0", VA = "0x3C1FBE0")]
	public static decimal ToDecimal(short value)
	{
		return default(decimal);
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x3C1FC40", Offset = "0x3C1FC40", VA = "0x3C1FC40")]
	[CLSCompliant(false)]
	public static decimal ToDecimal(ushort value)
	{
		return default(decimal);
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x3C1FCA0", Offset = "0x3C1FCA0", VA = "0x3C1FCA0")]
	public static decimal ToDecimal(int value)
	{
		return default(decimal);
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x3C1FD00", Offset = "0x3C1FD00", VA = "0x3C1FD00")]
	[CLSCompliant(false)]
	public static decimal ToDecimal(uint value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x3C1FD60", Offset = "0x3C1FD60", VA = "0x3C1FD60")]
	public static decimal ToDecimal(long value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x3C1FDD0", Offset = "0x3C1FDD0", VA = "0x3C1FDD0")]
	[CLSCompliant(false)]
	public static decimal ToDecimal(ulong value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x3C1FE40", Offset = "0x3C1FE40", VA = "0x3C1FE40")]
	public static decimal ToDecimal(float value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x3C1FEB0", Offset = "0x3C1FEB0", VA = "0x3C1FEB0")]
	public static decimal ToDecimal(double value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x3C1FF20", Offset = "0x3C1FF20", VA = "0x3C1FF20")]
	public static decimal ToDecimal(string value, IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x3C16260", Offset = "0x3C16260", VA = "0x3C16260")]
	public static decimal ToDecimal(bool value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x3C1FFB0", Offset = "0x3C1FFB0", VA = "0x3C1FFB0")]
	public static DateTime ToDateTime(object value, IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x3C200D0", Offset = "0x3C200D0", VA = "0x3C200D0")]
	public static DateTime ToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x3C20180", Offset = "0x3C20180", VA = "0x3C20180")]
	public static DateTime ToDateTime(string value, IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x3C20200", Offset = "0x3C20200", VA = "0x3C20200")]
	public static string ToString(object value, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x3C203B0", Offset = "0x3C203B0", VA = "0x3C203B0")]
	public static string ToString(char value, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x3C20400", Offset = "0x3C20400", VA = "0x3C20400")]
	public static string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x3C20460", Offset = "0x3C20460", VA = "0x3C20460")]
	public static string ToString(int value, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x3C20480", Offset = "0x3C20480", VA = "0x3C20480")]
	public static byte ToByte(string value, int fromBase)
	{
		return default(byte);
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x3C20570", Offset = "0x3C20570", VA = "0x3C20570")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(string value, int fromBase)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x3C20670", Offset = "0x3C20670", VA = "0x3C20670")]
	public static short ToInt16(string value, int fromBase)
	{
		return default(short);
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x3C20770", Offset = "0x3C20770", VA = "0x3C20770")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(string value, int fromBase)
	{
		return default(ushort);
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x3C20860", Offset = "0x3C20860", VA = "0x3C20860")]
	public static int ToInt32(string value, int fromBase)
	{
		return default(int);
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x3C20920", Offset = "0x3C20920", VA = "0x3C20920")]
	[CLSCompliant(false)]
	public static uint ToUInt32(string value, int fromBase)
	{
		return default(uint);
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x3C209E0", Offset = "0x3C209E0", VA = "0x3C209E0")]
	public static long ToInt64(string value, int fromBase)
	{
		return default(long);
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x3C20AA0", Offset = "0x3C20AA0", VA = "0x3C20AA0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(string value, int fromBase)
	{
		return default(ulong);
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x3C20B60", Offset = "0x3C20B60", VA = "0x3C20B60")]
	public static string ToString(byte value, int toBase)
	{
		return null;
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x3C20BE0", Offset = "0x3C20BE0", VA = "0x3C20BE0")]
	public static string ToString(int value, int toBase)
	{
		return null;
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x3C20C50", Offset = "0x3C20C50", VA = "0x3C20C50")]
	public static string ToString(long value, int toBase)
	{
		return null;
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x3C20CC0", Offset = "0x3C20CC0", VA = "0x3C20CC0")]
	public static string ToBase64String(byte[] inArray)
	{
		return null;
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x3C20FC0", Offset = "0x3C20FC0", VA = "0x3C20FC0")]
	public static string ToBase64String(byte[] inArray, int offset, int length)
	{
		return null;
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x3C21010", Offset = "0x3C21010", VA = "0x3C21010")]
	public static string ToBase64String(byte[] inArray, int offset, int length, Base64FormattingOptions options)
	{
		return null;
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x3C20D70", Offset = "0x3C20D70", VA = "0x3C20D70")]
	public static string ToBase64String(ReadOnlySpan<byte> bytes, Base64FormattingOptions options = Base64FormattingOptions.None)
	{
		return null;
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x3C21600", Offset = "0x3C21600", VA = "0x3C21600")]
	public static int ToBase64CharArray(byte[] inArray, int offsetIn, int length, char[] outArray, int offsetOut)
	{
		return default(int);
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x3C21680", Offset = "0x3C21680", VA = "0x3C21680")]
	public static int ToBase64CharArray(byte[] inArray, int offsetIn, int length, char[] outArray, int offsetOut, Base64FormattingOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x3C21270", Offset = "0x3C21270", VA = "0x3C21270")]
	private unsafe static int ConvertToBase64Array(char* outChars, byte* inData, int offset, int length, bool insertLineBreaks)
	{
		return default(int);
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x3C211B0", Offset = "0x3C211B0", VA = "0x3C211B0")]
	private static int ToBase64_CalculateAndValidateOutputLength(int inputLength, bool insertLineBreaks)
	{
		return default(int);
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x3C21A50", Offset = "0x3C21A50", VA = "0x3C21A50")]
	public static byte[] FromBase64String(string s)
	{
		return null;
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x3C21C50", Offset = "0x3C21C50", VA = "0x3C21C50")]
	public static bool TryFromBase64Chars(ReadOnlySpan<char> chars, Span<byte> bytes, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x3C222A0", Offset = "0x3C222A0", VA = "0x3C222A0")]
	private static void CopyToTempBufferWithoutWhiteSpace(ReadOnlySpan<char> chars, Span<char> tempBuffer, out int consumed, out int charsWritten)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x3C223C0", Offset = "0x3C223C0", VA = "0x3C223C0")]
	private static bool IsSpace(this char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x3C223E0", Offset = "0x3C223E0", VA = "0x3C223E0")]
	public static byte[] FromBase64CharArray(char[] inArray, int offset, int length)
	{
		return null;
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x3C21B00", Offset = "0x3C21B00", VA = "0x3C21B00")]
	private unsafe static byte[] FromBase64CharPtr(char* inputPtr, int inputLength)
	{
		return null;
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x3C22600", Offset = "0x3C22600", VA = "0x3C22600")]
	private unsafe static int FromBase64_ComputeResultLength(char* inputPtr, int inputLength)
	{
		return default(int);
	}
}
