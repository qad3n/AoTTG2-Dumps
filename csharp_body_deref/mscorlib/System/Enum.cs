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
		[Address(RVA = "0x500C890", Offset = "0x500C890", VA = "0x500C890")]
		internal void Init(bool canMethodThrow)
		{
		}

		[Token(Token = "0x6000E0F")]
		[Address(RVA = "0x500D770", Offset = "0x500D770", VA = "0x500D770")]
		internal void SetFailure(Exception unhandledException)
		{
		}

		[Token(Token = "0x6000E10")]
		[Address(RVA = "0x500D230", Offset = "0x500D230", VA = "0x500D230")]
		internal void SetFailure(ParseFailureKind failure, string failureParameter)
		{
		}

		[Token(Token = "0x6000E11")]
		[Address(RVA = "0x500D280", Offset = "0x500D280", VA = "0x500D280")]
		internal void SetFailure(ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument)
		{
		}

		[Token(Token = "0x6000E12")]
		[Address(RVA = "0x500D0C0", Offset = "0x500D0C0", VA = "0x500D0C0")]
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
		[Address(RVA = "0x500BCD0", Offset = "0x500BCD0", VA = "0x500BCD0")]
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
	[Address(RVA = "0x500BB40", Offset = "0x500BB40", VA = "0x500BB40")]
	private static ValuesAndNames GetCachedValuesAndNames(System.RuntimeType enumType, bool getNames)
	{
		return null;
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x500BD10", Offset = "0x500BD10", VA = "0x500BD10")]
	private static string InternalFormattedHexString(object value)
	{
		return null;
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x500C170", Offset = "0x500C170", VA = "0x500C170")]
	private static string InternalFormat(System.RuntimeType eT, object value)
	{
		return null;
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x500C320", Offset = "0x500C320", VA = "0x500C320")]
	private static string InternalFlagsFormat(System.RuntimeType eT, object value)
	{
		return null;
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x500C600", Offset = "0x500C600", VA = "0x500C600")]
	internal static ulong ToUInt64(object value)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x500C760", Offset = "0x500C760", VA = "0x500C760")]
	private static extern int InternalCompareTo(object o1, object o2);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x500C770", Offset = "0x500C770", VA = "0x500C770")]
	internal static extern System.RuntimeType InternalGetUnderlyingType(System.RuntimeType enumType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x500BCC0", Offset = "0x500BCC0", VA = "0x500BCC0")]
	private static extern bool GetEnumValuesAndNames(System.RuntimeType enumType, out ulong[] values, out string[] names);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x500C780", Offset = "0x500C780", VA = "0x500C780")]
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
	[Address(RVA = "0x500C790", Offset = "0x500C790", VA = "0x500C790")]
	[ComVisible(true)]
	public static object Parse(Type enumType, string value)
	{
		return null;
	}

	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x500C7D0", Offset = "0x500C7D0", VA = "0x500C7D0")]
	[ComVisible(true)]
	public static object Parse(Type enumType, string value, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x500C8D0", Offset = "0x500C8D0", VA = "0x500C8D0")]
	private static bool TryParseEnum(Type enumType, string value, bool ignoreCase, ref EnumResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x500D2E0", Offset = "0x500D2E0", VA = "0x500D2E0")]
	[ComVisible(true)]
	public static Type GetUnderlyingType(Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x500D930", Offset = "0x500D930", VA = "0x500D930")]
	[ComVisible(true)]
	public static Array GetValues(Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x500D9D0", Offset = "0x500D9D0", VA = "0x500D9D0")]
	internal static ulong[] InternalGetValues(System.RuntimeType enumType)
	{
		return null;
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x500C270", Offset = "0x500C270", VA = "0x500C270")]
	[ComVisible(true)]
	public static string GetName(Type enumType, object value)
	{
		return null;
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x500DA10", Offset = "0x500DA10", VA = "0x500DA10")]
	[ComVisible(true)]
	public static string[] GetNames(Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x500DAB0", Offset = "0x500DAB0", VA = "0x500DAB0")]
	internal static string[] InternalGetNames(System.RuntimeType enumType)
	{
		return null;
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x500D380", Offset = "0x500D380", VA = "0x500D380")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, object value)
	{
		return null;
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x500EA70", Offset = "0x500EA70", VA = "0x500EA70")]
	[ComVisible(true)]
	public static bool IsDefined(Type enumType, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x500EB20", Offset = "0x500EB20", VA = "0x500EB20")]
	[ComVisible(true)]
	public static string Format(Type enumType, object value, string format)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x500F0F0", Offset = "0x500F0F0", VA = "0x500F0F0")]
	private extern object get_value();

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x500F0E0", Offset = "0x500F0E0", VA = "0x500F0E0")]
	internal object GetValue()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x500F100", Offset = "0x500F100", VA = "0x500F100")]
	private extern bool InternalHasFlag(Enum flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x500F110", Offset = "0x500F110", VA = "0x500F110")]
	private extern int get_hashcode();

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x500F120", Offset = "0x500F120", VA = "0x500F120", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x500F130", Offset = "0x500F130", VA = "0x500F130", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x500F140", Offset = "0x500F140", VA = "0x500F140", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x500F1F0", Offset = "0x500F1F0", VA = "0x500F1F0", Slot = "5")]
	[Obsolete("The provider argument is not used. Please use ToString(String).")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x500F460", Offset = "0x500F460", VA = "0x500F460", Slot = "4")]
	public int CompareTo(object target)
	{
		return default(int);
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x500F200", Offset = "0x500F200", VA = "0x500F200")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x500F630", Offset = "0x500F630", VA = "0x500F630", Slot = "21")]
	[Obsolete("The provider argument is not used. Please use ToString().")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x500F650", Offset = "0x500F650", VA = "0x500F650")]
	public bool HasFlag(Enum flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x500F7C0", Offset = "0x500F7C0", VA = "0x500F7C0", Slot = "6")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x500FAF0", Offset = "0x500FAF0", VA = "0x500FAF0", Slot = "7")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x500FB80", Offset = "0x500FB80", VA = "0x500FB80", Slot = "8")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x500FC10", Offset = "0x500FC10", VA = "0x500FC10", Slot = "9")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x500FCA0", Offset = "0x500FCA0", VA = "0x500FCA0", Slot = "10")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x500FD30", Offset = "0x500FD30", VA = "0x500FD30", Slot = "11")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x500FDC0", Offset = "0x500FDC0", VA = "0x500FDC0", Slot = "12")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x500FE50", Offset = "0x500FE50", VA = "0x500FE50", Slot = "13")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x500FEE0", Offset = "0x500FEE0", VA = "0x500FEE0", Slot = "14")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x500FF70", Offset = "0x500FF70", VA = "0x500FF70", Slot = "15")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x5010000", Offset = "0x5010000", VA = "0x5010000", Slot = "16")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x5010090", Offset = "0x5010090", VA = "0x5010090", Slot = "17")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x5010120", Offset = "0x5010120", VA = "0x5010120", Slot = "18")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000DFB")]
	[Address(RVA = "0x50101B0", Offset = "0x50101B0", VA = "0x50101B0", Slot = "19")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000DFC")]
	[Address(RVA = "0x5010240", Offset = "0x5010240", VA = "0x5010240", Slot = "20")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000DFD")]
	[Address(RVA = "0x5010330", Offset = "0x5010330", VA = "0x5010330", Slot = "22")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000DFE")]
	[Address(RVA = "0x500DCA0", Offset = "0x500DCA0", VA = "0x500DCA0")]
	[CLSCompliant(false)]
	[ComVisible(true)]
	public static object ToObject(Type enumType, sbyte value)
	{
		return null;
	}

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x500DE60", Offset = "0x500DE60", VA = "0x500DE60")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, short value)
	{
		return null;
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x500DAF0", Offset = "0x500DAF0", VA = "0x500DAF0")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, int value)
	{
		return null;
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x500E370", Offset = "0x500E370", VA = "0x500E370")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, byte value)
	{
		return null;
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x500E530", Offset = "0x500E530", VA = "0x500E530")]
	[ComVisible(true)]
	[CLSCompliant(false)]
	public static object ToObject(Type enumType, ushort value)
	{
		return null;
	}

	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x500E1C0", Offset = "0x500E1C0", VA = "0x500E1C0")]
	[ComVisible(true)]
	[CLSCompliant(false)]
	public static object ToObject(Type enumType, uint value)
	{
		return null;
	}

	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x500E020", Offset = "0x500E020", VA = "0x500E020")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, long value)
	{
		return null;
	}

	[Token(Token = "0x6000E05")]
	[Address(RVA = "0x500D790", Offset = "0x500D790", VA = "0x500D790")]
	[CLSCompliant(false)]
	[ComVisible(true)]
	public static object ToObject(Type enumType, ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000E06")]
	[Address(RVA = "0x500E6F0", Offset = "0x500E6F0", VA = "0x500E6F0")]
	private static object ToObject(Type enumType, char value)
	{
		return null;
	}

	[Token(Token = "0x6000E07")]
	[Address(RVA = "0x500E8B0", Offset = "0x500E8B0", VA = "0x500E8B0")]
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
	[Address(RVA = "0x5010390", Offset = "0x5010390", VA = "0x5010390")]
	public static bool TryParse(Type enumType, string value, bool ignoreCase, out object result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x5010420", Offset = "0x5010420", VA = "0x5010420")]
	public static bool TryParse(Type enumType, string value, out object result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E0C")]
	[Address(RVA = "0x50104C0", Offset = "0x50104C0", VA = "0x50104C0")]
	protected Enum()
	{
	}
}
