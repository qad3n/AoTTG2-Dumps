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
[Token(Token = "0x2000160")]
[ComVisible(true)]
public abstract class Enum : ValueType, IComparable, IFormattable, IConvertible
{
	[Token(Token = "0x2000161")]
	private enum ParseFailureKind
	{
		[Token(Token = "0x4000541")]
		None,
		[Token(Token = "0x4000542")]
		Argument,
		[Token(Token = "0x4000543")]
		ArgumentNull,
		[Token(Token = "0x4000544")]
		ArgumentWithParameter,
		[Token(Token = "0x4000545")]
		UnhandledException
	}

	[Token(Token = "0x2000162")]
	private struct EnumResult
	{
		[Token(Token = "0x4000546")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal object parsedEnum;

		[Token(Token = "0x4000547")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal bool canThrow;

		[Token(Token = "0x4000548")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		internal ParseFailureKind m_failure;

		[Token(Token = "0x4000549")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal string m_failureMessageID;

		[Token(Token = "0x400054A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal string m_failureParameter;

		[Token(Token = "0x400054B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal object m_failureMessageFormatArgument;

		[Token(Token = "0x400054C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal Exception m_innerException;

		[Token(Token = "0x6000E0E")]
		[Address(RVA = "0x3CF23B0", Offset = "0x3CF23B0", VA = "0x3CF23B0")]
		internal void Init(bool canMethodThrow)
		{
		}

		[Token(Token = "0x6000E0F")]
		[Address(RVA = "0x3CF3290", Offset = "0x3CF3290", VA = "0x3CF3290")]
		internal void SetFailure(Exception unhandledException)
		{
		}

		[Token(Token = "0x6000E10")]
		[Address(RVA = "0x3CF2D50", Offset = "0x3CF2D50", VA = "0x3CF2D50")]
		internal void SetFailure(ParseFailureKind failure, string failureParameter)
		{
		}

		[Token(Token = "0x6000E11")]
		[Address(RVA = "0x3CF2DA0", Offset = "0x3CF2DA0", VA = "0x3CF2DA0")]
		internal void SetFailure(ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument)
		{
		}

		[Token(Token = "0x6000E12")]
		[Address(RVA = "0x3CF2BE0", Offset = "0x3CF2BE0", VA = "0x3CF2BE0")]
		internal Exception GetEnumParseException()
		{
			return null;
		}
	}

	[Token(Token = "0x2000163")]
	private class ValuesAndNames
	{
		[Token(Token = "0x400054D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public ulong[] Values;

		[Token(Token = "0x400054E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string[] Names;

		[Token(Token = "0x6000E13")]
		[Address(RVA = "0x3CF17F0", Offset = "0x3CF17F0", VA = "0x3CF17F0")]
		public ValuesAndNames(ulong[] values, string[] names)
		{
		}
	}

	[Token(Token = "0x400053E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly char[] enumSeperatorCharArray;

	[Token(Token = "0x400053F")]
	private const string enumSeperator = ", ";

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x3CF1660", Offset = "0x3CF1660", VA = "0x3CF1660")]
	private static ValuesAndNames GetCachedValuesAndNames(System.RuntimeType enumType, bool getNames)
	{
		return null;
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x3CF1830", Offset = "0x3CF1830", VA = "0x3CF1830")]
	private static string InternalFormattedHexString(object value)
	{
		return null;
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x3CF1C90", Offset = "0x3CF1C90", VA = "0x3CF1C90")]
	private static string InternalFormat(System.RuntimeType eT, object value)
	{
		return null;
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x3CF1E40", Offset = "0x3CF1E40", VA = "0x3CF1E40")]
	private static string InternalFlagsFormat(System.RuntimeType eT, object value)
	{
		return null;
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x3CF2120", Offset = "0x3CF2120", VA = "0x3CF2120")]
	internal static ulong ToUInt64(object value)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x3CF2280", Offset = "0x3CF2280", VA = "0x3CF2280")]
	private static extern int InternalCompareTo(object o1, object o2);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x3CF2290", Offset = "0x3CF2290", VA = "0x3CF2290")]
	internal static extern System.RuntimeType InternalGetUnderlyingType(System.RuntimeType enumType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x3CF17E0", Offset = "0x3CF17E0", VA = "0x3CF17E0")]
	private static extern bool GetEnumValuesAndNames(System.RuntimeType enumType, out ulong[] values, out string[] names);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x3CF22A0", Offset = "0x3CF22A0", VA = "0x3CF22A0")]
	private static extern object InternalBoxEnum(System.RuntimeType enumType, long value);

	[Token(Token = "0x6000DD4")]
	public static bool TryParse<TEnum>(string value, out TEnum result) where TEnum : struct
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD5")]
	public static bool TryParse<TEnum>(string value, bool ignoreCase, out TEnum result) where TEnum : struct
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x3CF22B0", Offset = "0x3CF22B0", VA = "0x3CF22B0")]
	[ComVisible(true)]
	public static object Parse(Type enumType, string value)
	{
		return null;
	}

	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x3CF22F0", Offset = "0x3CF22F0", VA = "0x3CF22F0")]
	[ComVisible(true)]
	public static object Parse(Type enumType, string value, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x3CF23F0", Offset = "0x3CF23F0", VA = "0x3CF23F0")]
	private static bool TryParseEnum(Type enumType, string value, bool ignoreCase, ref EnumResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x3CF2E00", Offset = "0x3CF2E00", VA = "0x3CF2E00")]
	[ComVisible(true)]
	public static Type GetUnderlyingType(Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x3CF3450", Offset = "0x3CF3450", VA = "0x3CF3450")]
	[ComVisible(true)]
	public static Array GetValues(Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x3CF34F0", Offset = "0x3CF34F0", VA = "0x3CF34F0")]
	internal static ulong[] InternalGetValues(System.RuntimeType enumType)
	{
		return null;
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x3CF1D90", Offset = "0x3CF1D90", VA = "0x3CF1D90")]
	[ComVisible(true)]
	public static string GetName(Type enumType, object value)
	{
		return null;
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x3CF3530", Offset = "0x3CF3530", VA = "0x3CF3530")]
	[ComVisible(true)]
	public static string[] GetNames(Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x3CF35D0", Offset = "0x3CF35D0", VA = "0x3CF35D0")]
	internal static string[] InternalGetNames(System.RuntimeType enumType)
	{
		return null;
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x3CF2EA0", Offset = "0x3CF2EA0", VA = "0x3CF2EA0")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, object value)
	{
		return null;
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x3CF4590", Offset = "0x3CF4590", VA = "0x3CF4590")]
	[ComVisible(true)]
	public static bool IsDefined(Type enumType, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x3CF4640", Offset = "0x3CF4640", VA = "0x3CF4640")]
	[ComVisible(true)]
	public static string Format(Type enumType, object value, string format)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x3CF4C10", Offset = "0x3CF4C10", VA = "0x3CF4C10")]
	private extern object get_value();

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x3CF4C00", Offset = "0x3CF4C00", VA = "0x3CF4C00")]
	internal object GetValue()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x3CF4C20", Offset = "0x3CF4C20", VA = "0x3CF4C20")]
	private extern bool InternalHasFlag(Enum flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x3CF4C30", Offset = "0x3CF4C30", VA = "0x3CF4C30")]
	private extern int get_hashcode();

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x3CF4C40", Offset = "0x3CF4C40", VA = "0x3CF4C40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x3CF4C50", Offset = "0x3CF4C50", VA = "0x3CF4C50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x3CF4C60", Offset = "0x3CF4C60", VA = "0x3CF4C60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x3CF4D10", Offset = "0x3CF4D10", VA = "0x3CF4D10", Slot = "5")]
	[Obsolete("The provider argument is not used. Please use ToString(String).")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x3CF4F80", Offset = "0x3CF4F80", VA = "0x3CF4F80", Slot = "4")]
	public int CompareTo(object target)
	{
		return default(int);
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x3CF4D20", Offset = "0x3CF4D20", VA = "0x3CF4D20")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x3CF5150", Offset = "0x3CF5150", VA = "0x3CF5150", Slot = "21")]
	[Obsolete("The provider argument is not used. Please use ToString().")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x3CF5170", Offset = "0x3CF5170", VA = "0x3CF5170")]
	public bool HasFlag(Enum flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x3CF52E0", Offset = "0x3CF52E0", VA = "0x3CF52E0", Slot = "6")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x3CF5610", Offset = "0x3CF5610", VA = "0x3CF5610", Slot = "7")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x3CF56A0", Offset = "0x3CF56A0", VA = "0x3CF56A0", Slot = "8")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x3CF5730", Offset = "0x3CF5730", VA = "0x3CF5730", Slot = "9")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x3CF57C0", Offset = "0x3CF57C0", VA = "0x3CF57C0", Slot = "10")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x3CF5850", Offset = "0x3CF5850", VA = "0x3CF5850", Slot = "11")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x3CF58E0", Offset = "0x3CF58E0", VA = "0x3CF58E0", Slot = "12")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x3CF5970", Offset = "0x3CF5970", VA = "0x3CF5970", Slot = "13")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x3CF5A00", Offset = "0x3CF5A00", VA = "0x3CF5A00", Slot = "14")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x3CF5A90", Offset = "0x3CF5A90", VA = "0x3CF5A90", Slot = "15")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x3CF5B20", Offset = "0x3CF5B20", VA = "0x3CF5B20", Slot = "16")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x3CF5BB0", Offset = "0x3CF5BB0", VA = "0x3CF5BB0", Slot = "17")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x3CF5C40", Offset = "0x3CF5C40", VA = "0x3CF5C40", Slot = "18")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000DFB")]
	[Address(RVA = "0x3CF5CD0", Offset = "0x3CF5CD0", VA = "0x3CF5CD0", Slot = "19")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000DFC")]
	[Address(RVA = "0x3CF5D60", Offset = "0x3CF5D60", VA = "0x3CF5D60", Slot = "20")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000DFD")]
	[Address(RVA = "0x3CF5E50", Offset = "0x3CF5E50", VA = "0x3CF5E50", Slot = "22")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000DFE")]
	[Address(RVA = "0x3CF37C0", Offset = "0x3CF37C0", VA = "0x3CF37C0")]
	[CLSCompliant(false)]
	[ComVisible(true)]
	public static object ToObject(Type enumType, sbyte value)
	{
		return null;
	}

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x3CF3980", Offset = "0x3CF3980", VA = "0x3CF3980")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, short value)
	{
		return null;
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x3CF3610", Offset = "0x3CF3610", VA = "0x3CF3610")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, int value)
	{
		return null;
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x3CF3E90", Offset = "0x3CF3E90", VA = "0x3CF3E90")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, byte value)
	{
		return null;
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x3CF4050", Offset = "0x3CF4050", VA = "0x3CF4050")]
	[ComVisible(true)]
	[CLSCompliant(false)]
	public static object ToObject(Type enumType, ushort value)
	{
		return null;
	}

	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x3CF3CE0", Offset = "0x3CF3CE0", VA = "0x3CF3CE0")]
	[ComVisible(true)]
	[CLSCompliant(false)]
	public static object ToObject(Type enumType, uint value)
	{
		return null;
	}

	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x3CF3B40", Offset = "0x3CF3B40", VA = "0x3CF3B40")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, long value)
	{
		return null;
	}

	[Token(Token = "0x6000E05")]
	[Address(RVA = "0x3CF32B0", Offset = "0x3CF32B0", VA = "0x3CF32B0")]
	[CLSCompliant(false)]
	[ComVisible(true)]
	public static object ToObject(Type enumType, ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000E06")]
	[Address(RVA = "0x3CF4210", Offset = "0x3CF4210", VA = "0x3CF4210")]
	private static object ToObject(Type enumType, char value)
	{
		return null;
	}

	[Token(Token = "0x6000E07")]
	[Address(RVA = "0x3CF43D0", Offset = "0x3CF43D0", VA = "0x3CF43D0")]
	private static object ToObject(Type enumType, bool value)
	{
		return null;
	}

	[Token(Token = "0x6000E08")]
	public static TEnum Parse<TEnum>(string value) where TEnum : struct
	{
		return (TEnum)null;
	}

	[Token(Token = "0x6000E09")]
	public static TEnum Parse<TEnum>(string value, bool ignoreCase) where TEnum : struct
	{
		return (TEnum)null;
	}

	[Token(Token = "0x6000E0A")]
	[Address(RVA = "0x3CF5EB0", Offset = "0x3CF5EB0", VA = "0x3CF5EB0")]
	public static bool TryParse(Type enumType, string value, bool ignoreCase, out object result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x3CF5F40", Offset = "0x3CF5F40", VA = "0x3CF5F40")]
	public static bool TryParse(Type enumType, string value, out object result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E0C")]
	[Address(RVA = "0x3CF5FE0", Offset = "0x3CF5FE0", VA = "0x3CF5FE0")]
	protected Enum()
	{
	}
}
