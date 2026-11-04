// ==================== AoTTG2 cross-reference ====================
// Type: System.Single
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000130")]
public readonly struct Single : IComparable, IConvertible, IFormattable, IComparable<float>, IEquatable<float>, System.ISpanFormattable
{
	[Token(Token = "0x400043F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly float m_value;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F0")]
	[Address(RVA = "0x1B49620", Offset = "0x1B47C20", VA = "0x181B49620")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsFinite(float f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F1")]
	[Address(RVA = "0x1B49640", Offset = "0x1B47C40", VA = "0x181B49640")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsInfinity(float f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F2")]
	[Address(RVA = "0x1B49660", Offset = "0x1B47C60", VA = "0x181B49660")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNaN(float f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F3")]
	[Address(RVA = "0x1B496A0", Offset = "0x1B47CA0", VA = "0x181B496A0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNegative(float f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F4")]
	[Address(RVA = "0x1B49680", Offset = "0x1B47C80", VA = "0x181B49680")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNegativeInfinity(float f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F5")]
	[Address(RVA = "0x1B496B0", Offset = "0x1B47CB0", VA = "0x181B496B0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsPositiveInfinity(float f)
	{
		return default(bool);
	}

	[Token(Token = "0x60009F6")]
	[Address(RVA = "0x1B49450", Offset = "0x1B47A50", VA = "0x181B49450", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60009F7")]
	[Address(RVA = "0x1B49410", Offset = "0x1B47A10", VA = "0x181B49410", Slot = "23")]
	public int CompareTo(float value)
	{
		return default(int);
	}

	[Token(Token = "0x60009F8")]
	[Address(RVA = "0x1B49570", Offset = "0x1B47B70", VA = "0x181B49570", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009F9")]
	[Address(RVA = "0x1B49540", Offset = "0x1B47B40", VA = "0x181B49540", Slot = "24")]
	public bool Equals(float obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x1B495F0", Offset = "0x1B47BF0", VA = "0x181B495F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009FB")]
	[Address(RVA = "0x1B4A060", Offset = "0x1B48660", VA = "0x181B4A060", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009FC")]
	[Address(RVA = "0x1B49FE0", Offset = "0x1B485E0", VA = "0x181B49FE0", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60009FD")]
	[Address(RVA = "0x1B49F60", Offset = "0x1B48560", VA = "0x181B49F60")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x1B4A0D0", Offset = "0x1B486D0", VA = "0x181B4A0D0", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x1B4A160", Offset = "0x1B48760", VA = "0x181B4A160", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x1B497C0", Offset = "0x1B47DC0", VA = "0x181B497C0")]
	public static float Parse(string s)
	{
		return default(float);
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x1B49890", Offset = "0x1B47E90", VA = "0x181B49890")]
	public static float Parse(string s, IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x1B496D0", Offset = "0x1B47CD0", VA = "0x181B496D0")]
	public static float Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x1B4A4A0", Offset = "0x1B48AA0", VA = "0x181B4A4A0")]
	public static bool TryParse(string s, out float result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A04")]
	[Address(RVA = "0x1B4A540", Offset = "0x1B48B40", VA = "0x181B4A540")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out float result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x1B4A440", Offset = "0x1B48A40", VA = "0x181B4A440")]
	public static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, IFormatProvider provider, out float result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x1B4A210", Offset = "0x1B48810", VA = "0x181B4A210")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out float result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x1B49610", Offset = "0x1B47C10", VA = "0x181B49610", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x1B49970", Offset = "0x1B47F70", VA = "0x181B49970", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x1B49A30", Offset = "0x1B48030", VA = "0x181B49A30", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x1B49D50", Offset = "0x1B48350", VA = "0x181B49D50", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x1B499D0", Offset = "0x1B47FD0", VA = "0x181B499D0", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x1B49C30", Offset = "0x1B48230", VA = "0x181B49C30", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x1B49E40", Offset = "0x1B48440", VA = "0x181B49E40", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x1B49C90", Offset = "0x1B48290", VA = "0x181B49C90", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x1B49EA0", Offset = "0x1B484A0", VA = "0x181B49EA0", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000A10")]
	[Address(RVA = "0x1B49CF0", Offset = "0x1B482F0", VA = "0x181B49CF0", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x1B49F00", Offset = "0x1B48500", VA = "0x181B49F00", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000A13")]
	[Address(RVA = "0x1B49BD0", Offset = "0x1B481D0", VA = "0x181B49BD0", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000A14")]
	[Address(RVA = "0x1B49B50", Offset = "0x1B48150", VA = "0x181B49B50", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x1B49AC0", Offset = "0x1B480C0", VA = "0x181B49AC0", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x1B49DB0", Offset = "0x1B483B0", VA = "0x181B49DB0", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
