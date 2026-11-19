// ==================== AoTTG2 cross-reference ====================
// Type: System.Int32
// Update status: unchanged since the previous dump
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
[Token(Token = "0x20000DB")]
public readonly struct Int32 : IComparable, IConvertible, IFormattable, IComparable<int>, IEquatable<int>, System.ISpanFormattable
{
	[Token(Token = "0x4000351")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly int m_value;

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x54B72F0", Offset = "0x54B62F0", VA = "0x54B72F0", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x54B7380", Offset = "0x54B6380", VA = "0x54B7380", Slot = "23")]
	public int CompareTo(int value)
	{
		return default(int);
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x54B7390", Offset = "0x54B6390", VA = "0x54B7390", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x54B73C0", Offset = "0x54B63C0", VA = "0x54B73C0", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(int obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x54B73D0", Offset = "0x54B63D0", VA = "0x54B73D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x54B73E0", Offset = "0x54B63E0", VA = "0x54B73E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x54B7460", Offset = "0x54B6460", VA = "0x54B7460")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x54B7520", Offset = "0x54B6520", VA = "0x54B7520", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x54B75B0", Offset = "0x54B65B0", VA = "0x54B75B0", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x54B7670", Offset = "0x54B6670", VA = "0x54B7670", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x54B7710", Offset = "0x54B6710", VA = "0x54B7710")]
	public static int Parse(string s)
	{
		return default(int);
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x54B77D0", Offset = "0x54B67D0", VA = "0x54B77D0")]
	public static int Parse(string s, NumberStyles style)
	{
		return default(int);
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x54B78A0", Offset = "0x54B68A0", VA = "0x54B78A0")]
	public static int Parse(string s, IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x54B7970", Offset = "0x54B6970", VA = "0x54B7970")]
	public static int Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60007F3")]
	[Address(RVA = "0x54B7A40", Offset = "0x54B6A40", VA = "0x54B7A40")]
	public static int Parse(ReadOnlySpan<char> s, [Optional][DefaultParameterValue(7)] NumberStyles style, [Optional] IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x54B7AC0", Offset = "0x54B6AC0", VA = "0x54B7AC0")]
	public static bool TryParse(string s, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x54B7BC0", Offset = "0x54B6BC0", VA = "0x54B7BC0")]
	public static bool TryParse(ReadOnlySpan<char> s, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x54B7C80", Offset = "0x54B6C80", VA = "0x54B7C80")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x54B7D50", Offset = "0x54B6D50", VA = "0x54B7D50")]
	public static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, IFormatProvider provider, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x54B7DD0", Offset = "0x54B6DD0", VA = "0x54B7DD0", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x54B7DE0", Offset = "0x54B6DE0", VA = "0x54B7DE0", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x54B7E30", Offset = "0x54B6E30", VA = "0x54B7E30", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x54B7E80", Offset = "0x54B6E80", VA = "0x54B7E80", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x54B7ED0", Offset = "0x54B6ED0", VA = "0x54B7ED0", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x54B7F20", Offset = "0x54B6F20", VA = "0x54B7F20", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x54B7F70", Offset = "0x54B6F70", VA = "0x54B7F70", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x54B7FC0", Offset = "0x54B6FC0", VA = "0x54B7FC0", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x54B7FD0", Offset = "0x54B6FD0", VA = "0x54B7FD0", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x54B8020", Offset = "0x54B7020", VA = "0x54B8020", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x54B8070", Offset = "0x54B7070", VA = "0x54B8070", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x54B80C0", Offset = "0x54B70C0", VA = "0x54B80C0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x54B8110", Offset = "0x54B7110", VA = "0x54B8110", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x54B8160", Offset = "0x54B7160", VA = "0x54B8160", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x54B81B0", Offset = "0x54B71B0", VA = "0x54B81B0", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x54B8230", Offset = "0x54B7230", VA = "0x54B8230", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
