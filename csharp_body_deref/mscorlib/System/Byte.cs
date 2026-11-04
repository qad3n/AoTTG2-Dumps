// ==================== AoTTG2 cross-reference ====================
// Type: System.Byte
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000C3")]
public readonly struct Byte : IComparable, IConvertible, IFormattable, IComparable<byte>, IEquatable<byte>, System.ISpanFormattable
{
	[Token(Token = "0x40002AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly byte m_value;

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x1A7A840", Offset = "0x1A78E40", VA = "0x181A7A840", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x1A7A830", Offset = "0x1A78E30", VA = "0x181A7A830", Slot = "23")]
	public int CompareTo(byte value)
	{
		return default(int);
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x1A7A8F0", Offset = "0x1A78EF0", VA = "0x181A7A8F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x1A79870", Offset = "0x1A77E70", VA = "0x181A79870", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(byte obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0xAE2930", Offset = "0xAE0F30", VA = "0x180AE2930", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x1A7AB30", Offset = "0x1A79130", VA = "0x181A7AB30")]
	public static byte Parse(string s, IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x1A7AA80", Offset = "0x1A79080", VA = "0x181A7AA80")]
	public static byte Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x1A7A950", Offset = "0x1A78F50", VA = "0x181A7A950")]
	private static byte Parse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info)
	{
		return default(byte);
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x1A7B630", Offset = "0x1A79C30", VA = "0x181A7B630")]
	public static bool TryParse(string s, out byte result)
	{
		return default(bool);
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x1A7B520", Offset = "0x1A79B20", VA = "0x181A7B520")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out byte result)
	{
		return default(bool);
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x1A7B480", Offset = "0x1A79A80", VA = "0x181A7B480")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out byte result)
	{
		return default(bool);
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x1A7B360", Offset = "0x1A79960", VA = "0x181A7B360", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x1A7B2A0", Offset = "0x1A798A0", VA = "0x181A7B2A0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x1A7B130", Offset = "0x1A79730", VA = "0x181A7B130", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x1A7B1D0", Offset = "0x1A797D0", VA = "0x181A7B1D0", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x1A7B3F0", Offset = "0x1A799F0", VA = "0x181A7B3F0", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x868060", Offset = "0x866660", VA = "0x180868060", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x1A7ABD0", Offset = "0x1A791D0", VA = "0x181A7ABD0", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x1A7AC20", Offset = "0x1A79220", VA = "0x181A7AC20", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x1A7AEE0", Offset = "0x1A794E0", VA = "0x181A7AEE0", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0xAE2930", Offset = "0xAE0F30", VA = "0x180AE2930", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x1A7ADF0", Offset = "0x1A793F0", VA = "0x181A7ADF0", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x1A7B040", Offset = "0x1A79640", VA = "0x181A7B040", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x1A7AE40", Offset = "0x1A79440", VA = "0x181A7AE40", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x1A7B090", Offset = "0x1A79690", VA = "0x181A7B090", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x1A7AE90", Offset = "0x1A79490", VA = "0x181A7AE90", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x1A7B0E0", Offset = "0x1A796E0", VA = "0x181A7B0E0", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x1A7AF60", Offset = "0x1A79560", VA = "0x181A7AF60", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x1A7ADA0", Offset = "0x1A793A0", VA = "0x181A7ADA0", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x1A7AD00", Offset = "0x1A79300", VA = "0x181A7AD00", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x1A7AC70", Offset = "0x1A79270", VA = "0x181A7AC70", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x1A7AFB0", Offset = "0x1A795B0", VA = "0x181A7AFB0", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
