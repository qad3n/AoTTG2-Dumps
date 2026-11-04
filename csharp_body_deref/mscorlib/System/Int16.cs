// ==================== AoTTG2 cross-reference ====================
// Type: System.Int16
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
[Token(Token = "0x2000102")]
public readonly struct Int16 : IComparable, IConvertible, IFormattable, IComparable<short>, IEquatable<short>, System.ISpanFormattable
{
	[Token(Token = "0x40003F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly short m_value;

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x1B27E20", Offset = "0x1B26420", VA = "0x181B27E20", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x1B27ED0", Offset = "0x1B264D0", VA = "0x181B27ED0", Slot = "23")]
	public int CompareTo(short value)
	{
		return default(int);
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x1B27EE0", Offset = "0x1B264E0", VA = "0x181B27EE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x1A7C310", Offset = "0x1A7A910", VA = "0x181A7C310", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(short obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x1B27F40", Offset = "0x1B26540", VA = "0x181B27F40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x1B28950", Offset = "0x1B26F50", VA = "0x181B28950", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x1B288B0", Offset = "0x1B26EB0", VA = "0x181B288B0", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x1B28730", Offset = "0x1B26D30", VA = "0x181B28730", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60007F3")]
	[Address(RVA = "0x1B289E0", Offset = "0x1B26FE0", VA = "0x181B289E0", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x1B27F50", Offset = "0x1B26550", VA = "0x181B27F50")]
	public static short Parse(string s, IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x1B27FF0", Offset = "0x1B265F0", VA = "0x181B27FF0")]
	public static short Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x1B280A0", Offset = "0x1B266A0", VA = "0x181B280A0")]
	private static short Parse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info)
	{
		return default(short);
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x1B28BD0", Offset = "0x1B271D0", VA = "0x181B28BD0")]
	public static bool TryParse(string s, out short result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x1B28D60", Offset = "0x1B27360", VA = "0x181B28D60")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out short result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x1B28B00", Offset = "0x1B27100", VA = "0x181B28B00")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out short result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x106DD80", Offset = "0x106C380", VA = "0x18106DD80", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x1B28230", Offset = "0x1B26830", VA = "0x181B28230", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x1B282D0", Offset = "0x1B268D0", VA = "0x181B282D0", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x1B28510", Offset = "0x1B26B10", VA = "0x181B28510", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x1B28280", Offset = "0x1B26880", VA = "0x181B28280", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x846ED0", Offset = "0x8454D0", VA = "0x180846ED0", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x1B28640", Offset = "0x1B26C40", VA = "0x181B28640", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x1B28470", Offset = "0x1B26A70", VA = "0x181B28470", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x1B28690", Offset = "0x1B26C90", VA = "0x181B28690", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x1B284C0", Offset = "0x1B26AC0", VA = "0x181B284C0", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x1B286E0", Offset = "0x1B26CE0", VA = "0x181B286E0", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x1B28560", Offset = "0x1B26B60", VA = "0x181B28560", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x1B28420", Offset = "0x1B26A20", VA = "0x181B28420", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x1B283B0", Offset = "0x1B269B0", VA = "0x181B283B0", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x1B28320", Offset = "0x1B26920", VA = "0x181B28320", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x1B285B0", Offset = "0x1B26BB0", VA = "0x181B285B0", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
