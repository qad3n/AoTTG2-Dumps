// ==================== AoTTG2 cross-reference ====================
// Type: System.Enum
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000162")]
[ComVisible(true)]
public abstract class Enum : ValueType, IComparable, IFormattable, IConvertible
{
	[Token(Token = "0x2000163")]
	private enum ParseFailureKind
	{
		[Token(Token = "0x4000500")]
		None,
		[Token(Token = "0x4000501")]
		Argument,
		[Token(Token = "0x4000502")]
		ArgumentNull,
		[Token(Token = "0x4000503")]
		ArgumentWithParameter,
		[Token(Token = "0x4000504")]
		UnhandledException
	}

	[Token(Token = "0x2000164")]
	private struct EnumResult
	{
		[Token(Token = "0x4000505")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal object parsedEnum;

		[Token(Token = "0x4000506")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal bool canThrow;

		[Token(Token = "0x4000507")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		internal ParseFailureKind m_failure;

		[Token(Token = "0x4000508")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal string m_failureMessageID;

		[Token(Token = "0x4000509")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal string m_failureParameter;

		[Token(Token = "0x400050A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal object m_failureMessageFormatArgument;

		[Token(Token = "0x400050B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal Exception m_innerException;

		[Token(Token = "0x6000E36")]
		[Address(RVA = "0x54F6680", Offset = "0x54F5680", VA = "0x54F6680")]
		internal void Init(bool canMethodThrow)
		{
		}

		[Token(Token = "0x6000E37")]
		[Address(RVA = "0x54F75F0", Offset = "0x54F65F0", VA = "0x54F75F0")]
		internal void SetFailure(Exception unhandledException)
		{
		}

		[Token(Token = "0x6000E38")]
		[Address(RVA = "0x54F70B0", Offset = "0x54F60B0", VA = "0x54F70B0")]
		internal void SetFailure(ParseFailureKind failure, string failureParameter)
		{
		}

		[Token(Token = "0x6000E39")]
		[Address(RVA = "0x54F7100", Offset = "0x54F6100", VA = "0x54F7100")]
		internal void SetFailure(ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument)
		{
		}

		[Token(Token = "0x6000E3A")]
		[Address(RVA = "0x54F6F50", Offset = "0x54F5F50", VA = "0x54F6F50")]
		internal Exception GetEnumParseException()
		{
			return null;
		}
	}

	[Token(Token = "0x2000165")]
	private class ValuesAndNames
	{
		[Token(Token = "0x400050C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public ulong[] Values;

		[Token(Token = "0x400050D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string[] Names;

		[Token(Token = "0x6000E3B")]
		[Address(RVA = "0x54F5B90", Offset = "0x54F4B90", VA = "0x54F5B90")]
		public ValuesAndNames(ulong[] values, string[] names)
		{
		}
	}

	[Token(Token = "0x40004FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly char[] enumSeperatorCharArray;

	[Token(Token = "0x40004FE")]
	private const string enumSeperator = ", ";

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x54F5A10", Offset = "0x54F4A10", VA = "0x54F5A10")]
	private static ValuesAndNames GetCachedValuesAndNames(System.RuntimeType enumType, bool getNames)
	{
		return null;
	}

	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x54F5BD0", Offset = "0x54F4BD0", VA = "0x54F5BD0")]
	private static string InternalFormattedHexString(object value)
	{
		return null;
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x54F5F20", Offset = "0x54F4F20", VA = "0x54F5F20")]
	private static string InternalFormat(System.RuntimeType eT, object value)
	{
		return null;
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x54F60D0", Offset = "0x54F50D0", VA = "0x54F60D0")]
	private static string InternalFlagsFormat(System.RuntimeType eT, object value)
	{
		return null;
	}

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x54F63F0", Offset = "0x54F53F0", VA = "0x54F63F0")]
	internal static ulong ToUInt64(object value)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x54F6550", Offset = "0x54F5550", VA = "0x54F6550")]
	private static extern int InternalCompareTo(object o1, object o2);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x54F6560", Offset = "0x54F5560", VA = "0x54F6560")]
	internal static extern System.RuntimeType InternalGetUnderlyingType(System.RuntimeType enumType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x54F5B80", Offset = "0x54F4B80", VA = "0x54F5B80")]
	private static extern bool GetEnumValuesAndNames(System.RuntimeType enumType, out ulong[] values, out string[] names);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DFB")]
	[Address(RVA = "0x54F6570", Offset = "0x54F5570", VA = "0x54F6570")]
	private static extern object InternalBoxEnum(System.RuntimeType enumType, long value);

	[Token(Token = "0x6000DFC")]
	public static bool TryParse<TEnum>(string value, out TEnum result) where TEnum : struct
	{
		return default(bool);
	}

	[Token(Token = "0x6000DFD")]
	public static bool TryParse<TEnum>(string value, bool ignoreCase, out TEnum result) where TEnum : struct
	{
		return default(bool);
	}

	[Token(Token = "0x6000DFE")]
	[Address(RVA = "0x54F6580", Offset = "0x54F5580", VA = "0x54F6580")]
	[ComVisible(true)]
	public static object Parse(Type enumType, string value)
	{
		return null;
	}

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x54F65C0", Offset = "0x54F55C0", VA = "0x54F65C0")]
	[ComVisible(true)]
	public static object Parse(Type enumType, string value, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x54F66C0", Offset = "0x54F56C0", VA = "0x54F66C0")]
	private static bool TryParseEnum(Type enumType, string value, bool ignoreCase, ref EnumResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x54F7160", Offset = "0x54F6160", VA = "0x54F7160")]
	[ComVisible(true)]
	public static Type GetUnderlyingType(Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x54F77B0", Offset = "0x54F67B0", VA = "0x54F77B0")]
	[ComVisible(true)]
	public static Array GetValues(Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x54F7850", Offset = "0x54F6850", VA = "0x54F7850")]
	internal static ulong[] InternalGetValues(System.RuntimeType enumType)
	{
		return null;
	}

	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x54F6020", Offset = "0x54F5020", VA = "0x54F6020")]
	[ComVisible(true)]
	public static string GetName(Type enumType, object value)
	{
		return null;
	}

	[Token(Token = "0x6000E05")]
	[Address(RVA = "0x54F7890", Offset = "0x54F6890", VA = "0x54F7890")]
	[ComVisible(true)]
	public static string[] GetNames(Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6000E06")]
	[Address(RVA = "0x54F7930", Offset = "0x54F6930", VA = "0x54F7930")]
	internal static string[] InternalGetNames(System.RuntimeType enumType)
	{
		return null;
	}

	[Token(Token = "0x6000E07")]
	[Address(RVA = "0x54F7200", Offset = "0x54F6200", VA = "0x54F7200")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, object value)
	{
		return null;
	}

	[Token(Token = "0x6000E08")]
	[Address(RVA = "0x54F88F0", Offset = "0x54F78F0", VA = "0x54F88F0")]
	[ComVisible(true)]
	public static bool IsDefined(Type enumType, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E09")]
	[Address(RVA = "0x54F89A0", Offset = "0x54F79A0", VA = "0x54F89A0")]
	[ComVisible(true)]
	public static string Format(Type enumType, object value, string format)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E0A")]
	[Address(RVA = "0x54F8F50", Offset = "0x54F7F50", VA = "0x54F8F50")]
	private extern object get_value();

	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x54F8F40", Offset = "0x54F7F40", VA = "0x54F8F40")]
	internal object GetValue()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E0C")]
	[Address(RVA = "0x54F8F60", Offset = "0x54F7F60", VA = "0x54F8F60")]
	private extern bool InternalHasFlag(Enum flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E0D")]
	[Address(RVA = "0x54F8F70", Offset = "0x54F7F70", VA = "0x54F8F70")]
	private extern int get_hashcode();

	[Token(Token = "0x6000E0E")]
	[Address(RVA = "0x54F8F80", Offset = "0x54F7F80", VA = "0x54F8F80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E0F")]
	[Address(RVA = "0x54F8F90", Offset = "0x54F7F90", VA = "0x54F8F90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E10")]
	[Address(RVA = "0x54F8FA0", Offset = "0x54F7FA0", VA = "0x54F8FA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000E11")]
	[Address(RVA = "0x54F9050", Offset = "0x54F8050", VA = "0x54F9050", Slot = "5")]
	[Obsolete("The provider argument is not used. Please use ToString(String).")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000E12")]
	[Address(RVA = "0x54F92C0", Offset = "0x54F82C0", VA = "0x54F92C0", Slot = "4")]
	public int CompareTo(object target)
	{
		return default(int);
	}

	[Token(Token = "0x6000E13")]
	[Address(RVA = "0x54F9060", Offset = "0x54F8060", VA = "0x54F9060")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x54F9480", Offset = "0x54F8480", VA = "0x54F9480", Slot = "21")]
	[Obsolete("The provider argument is not used. Please use ToString().")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x54F94A0", Offset = "0x54F84A0", VA = "0x54F94A0")]
	public bool HasFlag(Enum flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x54F9610", Offset = "0x54F8610", VA = "0x54F9610", Slot = "6")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000E17")]
	[Address(RVA = "0x54F9940", Offset = "0x54F8940", VA = "0x54F9940", Slot = "7")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x54F99D0", Offset = "0x54F89D0", VA = "0x54F99D0", Slot = "8")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000E19")]
	[Address(RVA = "0x54F9A60", Offset = "0x54F8A60", VA = "0x54F9A60", Slot = "9")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000E1A")]
	[Address(RVA = "0x54F9AF0", Offset = "0x54F8AF0", VA = "0x54F9AF0", Slot = "10")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000E1B")]
	[Address(RVA = "0x54F9B80", Offset = "0x54F8B80", VA = "0x54F9B80", Slot = "11")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000E1C")]
	[Address(RVA = "0x54F9C10", Offset = "0x54F8C10", VA = "0x54F9C10", Slot = "12")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000E1D")]
	[Address(RVA = "0x54F9CA0", Offset = "0x54F8CA0", VA = "0x54F9CA0", Slot = "13")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000E1E")]
	[Address(RVA = "0x54F9D30", Offset = "0x54F8D30", VA = "0x54F9D30", Slot = "14")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000E1F")]
	[Address(RVA = "0x54F9DC0", Offset = "0x54F8DC0", VA = "0x54F9DC0", Slot = "15")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x54F9E50", Offset = "0x54F8E50", VA = "0x54F9E50", Slot = "16")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000E21")]
	[Address(RVA = "0x54F9EE0", Offset = "0x54F8EE0", VA = "0x54F9EE0", Slot = "17")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000E22")]
	[Address(RVA = "0x54F9F70", Offset = "0x54F8F70", VA = "0x54F9F70", Slot = "18")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000E23")]
	[Address(RVA = "0x54FA000", Offset = "0x54F9000", VA = "0x54FA000", Slot = "19")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000E24")]
	[Address(RVA = "0x54FA090", Offset = "0x54F9090", VA = "0x54FA090", Slot = "20")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000E25")]
	[Address(RVA = "0x54FA170", Offset = "0x54F9170", VA = "0x54FA170", Slot = "22")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000E26")]
	[Address(RVA = "0x54F7B20", Offset = "0x54F6B20", VA = "0x54F7B20")]
	[CLSCompliant(false)]
	[ComVisible(true)]
	public static object ToObject(Type enumType, sbyte value)
	{
		return null;
	}

	[Token(Token = "0x6000E27")]
	[Address(RVA = "0x54F7CE0", Offset = "0x54F6CE0", VA = "0x54F7CE0")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, short value)
	{
		return null;
	}

	[Token(Token = "0x6000E28")]
	[Address(RVA = "0x54F7970", Offset = "0x54F6970", VA = "0x54F7970")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, int value)
	{
		return null;
	}

	[Token(Token = "0x6000E29")]
	[Address(RVA = "0x54F81F0", Offset = "0x54F71F0", VA = "0x54F81F0")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, byte value)
	{
		return null;
	}

	[Token(Token = "0x6000E2A")]
	[Address(RVA = "0x54F83B0", Offset = "0x54F73B0", VA = "0x54F83B0")]
	[ComVisible(true)]
	[CLSCompliant(false)]
	public static object ToObject(Type enumType, ushort value)
	{
		return null;
	}

	[Token(Token = "0x6000E2B")]
	[Address(RVA = "0x54F8040", Offset = "0x54F7040", VA = "0x54F8040")]
	[ComVisible(true)]
	[CLSCompliant(false)]
	public static object ToObject(Type enumType, uint value)
	{
		return null;
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x54F7EA0", Offset = "0x54F6EA0", VA = "0x54F7EA0")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, long value)
	{
		return null;
	}

	[Token(Token = "0x6000E2D")]
	[Address(RVA = "0x54F7610", Offset = "0x54F6610", VA = "0x54F7610")]
	[CLSCompliant(false)]
	[ComVisible(true)]
	public static object ToObject(Type enumType, ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000E2E")]
	[Address(RVA = "0x54F8570", Offset = "0x54F7570", VA = "0x54F8570")]
	private static object ToObject(Type enumType, char value)
	{
		return null;
	}

	[Token(Token = "0x6000E2F")]
	[Address(RVA = "0x54F8730", Offset = "0x54F7730", VA = "0x54F8730")]
	private static object ToObject(Type enumType, bool value)
	{
		return null;
	}

	[Token(Token = "0x6000E30")]
	public static TEnum Parse<TEnum>(string value) where TEnum : struct
	{
		return (TEnum)null;
	}

	[Token(Token = "0x6000E31")]
	public static TEnum Parse<TEnum>(string value, bool ignoreCase) where TEnum : struct
	{
		return (TEnum)null;
	}

	[Token(Token = "0x6000E32")]
	[Address(RVA = "0x54FA1D0", Offset = "0x54F91D0", VA = "0x54FA1D0")]
	public static bool TryParse(Type enumType, string value, bool ignoreCase, out object result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E33")]
	[Address(RVA = "0x54FA260", Offset = "0x54F9260", VA = "0x54FA260")]
	public static bool TryParse(Type enumType, string value, out object result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E34")]
	[Address(RVA = "0x54FA300", Offset = "0x54F9300", VA = "0x54FA300")]
	protected Enum()
	{
	}
}
