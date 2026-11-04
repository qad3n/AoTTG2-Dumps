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
[Token(Token = "0x200018A")]
[ComVisible(true)]
public abstract class Enum : ValueType, IComparable, IFormattable, IConvertible
{
	[Token(Token = "0x200018B")]
	private enum ParseFailureKind
	{
		[Token(Token = "0x40005A2")]
		None,
		[Token(Token = "0x40005A3")]
		Argument,
		[Token(Token = "0x40005A4")]
		ArgumentNull,
		[Token(Token = "0x40005A5")]
		ArgumentWithParameter,
		[Token(Token = "0x40005A6")]
		UnhandledException
	}

	[Token(Token = "0x200018C")]
	private struct EnumResult
	{
		[Token(Token = "0x40005A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal object parsedEnum;

		[Token(Token = "0x40005A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal bool canThrow;

		[Token(Token = "0x40005A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		internal ParseFailureKind m_failure;

		[Token(Token = "0x40005AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal string m_failureMessageID;

		[Token(Token = "0x40005AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal string m_failureParameter;

		[Token(Token = "0x40005AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal object m_failureMessageFormatArgument;

		[Token(Token = "0x40005AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal Exception m_innerException;

		[Token(Token = "0x6000E5B")]
		[Address(RVA = "0x1B64B90", Offset = "0x1B63190", VA = "0x181B64B90")]
		internal void Init(bool canMethodThrow)
		{
		}

		[Token(Token = "0x6000E5C")]
		[Address(RVA = "0x1B64BE0", Offset = "0x1B631E0", VA = "0x181B64BE0")]
		internal void SetFailure(Exception unhandledException)
		{
		}

		[Token(Token = "0x6000E5D")]
		[Address(RVA = "0x1B64C00", Offset = "0x1B63200", VA = "0x181B64C00")]
		internal void SetFailure(ParseFailureKind failure, string failureParameter)
		{
		}

		[Token(Token = "0x6000E5E")]
		[Address(RVA = "0x1B64C50", Offset = "0x1B63250", VA = "0x181B64C50")]
		internal void SetFailure(ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument)
		{
		}

		[Token(Token = "0x6000E5F")]
		[Address(RVA = "0x1B649B0", Offset = "0x1B62FB0", VA = "0x181B649B0")]
		internal Exception GetEnumParseException()
		{
			return null;
		}
	}

	[Token(Token = "0x200018D")]
	private class ValuesAndNames
	{
		[Token(Token = "0x40005AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public ulong[] Values;

		[Token(Token = "0x40005AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string[] Names;

		[Token(Token = "0x6000E60")]
		[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
		public ValuesAndNames(ulong[] values, string[] names)
		{
		}
	}

	[Token(Token = "0x400059F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly char[] enumSeperatorCharArray;

	[Token(Token = "0x40005A0")]
	private const string enumSeperator = ", ";

	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x1B655E0", Offset = "0x1B63BE0", VA = "0x181B655E0")]
	private static ValuesAndNames GetCachedValuesAndNames(System.RuntimeType enumType, bool getNames)
	{
		return null;
	}

	[Token(Token = "0x6000E19")]
	[Address(RVA = "0x1B66380", Offset = "0x1B64980", VA = "0x181B66380")]
	private static string InternalFormattedHexString(object value)
	{
		return null;
	}

	[Token(Token = "0x6000E1A")]
	[Address(RVA = "0x1B66200", Offset = "0x1B64800", VA = "0x181B66200")]
	private static string InternalFormat(System.RuntimeType eT, object value)
	{
		return null;
	}

	[Token(Token = "0x6000E1B")]
	[Address(RVA = "0x1B66000", Offset = "0x1B64600", VA = "0x181B66000")]
	private static string InternalFlagsFormat(System.RuntimeType eT, object value)
	{
		return null;
	}

	[Token(Token = "0x6000E1C")]
	[Address(RVA = "0x1B69110", Offset = "0x1B67710", VA = "0x181B69110")]
	internal static ulong ToUInt64(object value)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E1D")]
	[Address(RVA = "0x1B65FF0", Offset = "0x1B645F0", VA = "0x181B65FF0")]
	private static extern int InternalCompareTo(object o1, object o2);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E1E")]
	[Address(RVA = "0x1B66870", Offset = "0x1B64E70", VA = "0x181B66870")]
	internal static extern System.RuntimeType InternalGetUnderlyingType(System.RuntimeType enumType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E1F")]
	[Address(RVA = "0x1B65760", Offset = "0x1B63D60", VA = "0x181B65760")]
	private static extern bool GetEnumValuesAndNames(System.RuntimeType enumType, out ulong[] values, out string[] names);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x1B65FE0", Offset = "0x1B645E0", VA = "0x181B65FE0")]
	private static extern object InternalBoxEnum(System.RuntimeType enumType, long value);

	[Token(Token = "0x6000E21")]
	public static bool TryParse<TEnum>(string value, out TEnum result) where TEnum : struct
	{
		return default(bool);
	}

	[Token(Token = "0x6000E22")]
	public static bool TryParse<TEnum>(string value, bool ignoreCase, out TEnum result) where TEnum : struct
	{
		return default(bool);
	}

	[Token(Token = "0x6000E23")]
	[Address(RVA = "0x1B66A50", Offset = "0x1B65050", VA = "0x181B66A50")]
	[ComVisible(true)]
	public static object Parse(Type enumType, string value)
	{
		return null;
	}

	[Token(Token = "0x6000E24")]
	[Address(RVA = "0x1B66980", Offset = "0x1B64F80", VA = "0x181B66980")]
	[ComVisible(true)]
	public static object Parse(Type enumType, string value, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000E25")]
	[Address(RVA = "0x1B692A0", Offset = "0x1B678A0", VA = "0x181B692A0")]
	private static bool TryParseEnum(Type enumType, string value, bool ignoreCase, ref EnumResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E26")]
	[Address(RVA = "0x1B65CF0", Offset = "0x1B642F0", VA = "0x181B65CF0")]
	[ComVisible(true)]
	public static Type GetUnderlyingType(Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6000E27")]
	[Address(RVA = "0x1B65DA0", Offset = "0x1B643A0", VA = "0x181B65DA0")]
	[ComVisible(true)]
	public static Array GetValues(Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6000E28")]
	[Address(RVA = "0x1B66880", Offset = "0x1B64E80", VA = "0x181B66880")]
	internal static ulong[] InternalGetValues(System.RuntimeType enumType)
	{
		return null;
	}

	[Token(Token = "0x6000E29")]
	[Address(RVA = "0x1B65780", Offset = "0x1B63D80", VA = "0x181B65780")]
	[ComVisible(true)]
	public static string GetName(Type enumType, object value)
	{
		return null;
	}

	[Token(Token = "0x6000E2A")]
	[Address(RVA = "0x1B65830", Offset = "0x1B63E30", VA = "0x181B65830")]
	[ComVisible(true)]
	public static string[] GetNames(Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6000E2B")]
	[Address(RVA = "0x1B66830", Offset = "0x1B64E30", VA = "0x181B66830")]
	internal static string[] InternalGetNames(System.RuntimeType enumType)
	{
		return null;
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x1B68510", Offset = "0x1B66B10", VA = "0x181B68510")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, object value)
	{
		return null;
	}

	[Token(Token = "0x6000E2D")]
	[Address(RVA = "0x1B668D0", Offset = "0x1B64ED0", VA = "0x181B668D0")]
	[ComVisible(true)]
	public static bool IsDefined(Type enumType, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E2E")]
	[Address(RVA = "0x1B64EC0", Offset = "0x1B634C0", VA = "0x181B64EC0")]
	[ComVisible(true)]
	public static string Format(Type enumType, object value, string format)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E2F")]
	[Address(RVA = "0x1B65D90", Offset = "0x1B64390", VA = "0x181B65D90")]
	private extern object get_value();

	[Token(Token = "0x6000E30")]
	[Address(RVA = "0x1B65D90", Offset = "0x1B64390", VA = "0x181B65D90")]
	internal object GetValue()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E31")]
	[Address(RVA = "0x1B668C0", Offset = "0x1B64EC0", VA = "0x181B668C0")]
	private extern bool InternalHasFlag(Enum flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E32")]
	[Address(RVA = "0x1B65770", Offset = "0x1B63D70", VA = "0x181B65770")]
	private extern int get_hashcode();

	[Token(Token = "0x6000E33")]
	[Address(RVA = "0x1B64EB0", Offset = "0x1B634B0", VA = "0x181B64EB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E34")]
	[Address(RVA = "0x1B65770", Offset = "0x1B63D70", VA = "0x181B65770", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E35")]
	[Address(RVA = "0x1B68DF0", Offset = "0x1B673F0", VA = "0x181B68DF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000E36")]
	[Address(RVA = "0x1B68DE0", Offset = "0x1B673E0", VA = "0x181B68DE0", Slot = "5")]
	[Obsolete("The provider argument is not used. Please use ToString(String).")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000E37")]
	[Address(RVA = "0x1B64CC0", Offset = "0x1B632C0", VA = "0x181B64CC0", Slot = "4")]
	public int CompareTo(object target)
	{
		return default(int);
	}

	[Token(Token = "0x6000E38")]
	[Address(RVA = "0x1B68EA0", Offset = "0x1B674A0", VA = "0x181B68EA0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000E39")]
	[Address(RVA = "0x1AC8190", Offset = "0x1AC6790", VA = "0x181AC8190", Slot = "21")]
	[Obsolete("The provider argument is not used. Please use ToString().")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000E3A")]
	[Address(RVA = "0x1B65E40", Offset = "0x1B64440", VA = "0x181B65E40")]
	public bool HasFlag(Enum flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E3B")]
	[Address(RVA = "0x1B658D0", Offset = "0x1B63ED0", VA = "0x181B658D0", Slot = "6")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000E3C")]
	[Address(RVA = "0x1B66B30", Offset = "0x1B65130", VA = "0x181B66B30", Slot = "7")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E3D")]
	[Address(RVA = "0x1B66C50", Offset = "0x1B65250", VA = "0x181B66C50", Slot = "8")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000E3E")]
	[Address(RVA = "0x1B670D0", Offset = "0x1B656D0", VA = "0x181B670D0", Slot = "9")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000E3F")]
	[Address(RVA = "0x1B66BC0", Offset = "0x1B651C0", VA = "0x181B66BC0", Slot = "10")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000E40")]
	[Address(RVA = "0x1B66F20", Offset = "0x1B65520", VA = "0x181B66F20", Slot = "11")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000E41")]
	[Address(RVA = "0x1B67260", Offset = "0x1B65860", VA = "0x181B67260", Slot = "12")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000E42")]
	[Address(RVA = "0x1B66FB0", Offset = "0x1B655B0", VA = "0x181B66FB0", Slot = "13")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x1B672F0", Offset = "0x1B658F0", VA = "0x181B672F0", Slot = "14")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x1B67040", Offset = "0x1B65640", VA = "0x181B67040", Slot = "15")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x1B67380", Offset = "0x1B65980", VA = "0x181B67380", Slot = "16")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x1B67160", Offset = "0x1B65760", VA = "0x181B67160", Slot = "17")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x1B66E90", Offset = "0x1B65490", VA = "0x181B66E90", Slot = "18")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x1B66DE0", Offset = "0x1B653E0", VA = "0x181B66DE0", Slot = "19")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x1B66CE0", Offset = "0x1B652E0", VA = "0x181B66CE0", Slot = "20")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x1B671F0", Offset = "0x1B657F0", VA = "0x181B671F0", Slot = "22")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x1B68BC0", Offset = "0x1B671C0", VA = "0x181B68BC0")]
	[ComVisible(true)]
	[CLSCompliant(false)]
	public static object ToObject(Type enumType, sbyte value)
	{
		return null;
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x1B67410", Offset = "0x1B65A10", VA = "0x181B67410")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, short value)
	{
		return null;
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x1B67850", Offset = "0x1B65E50", VA = "0x181B67850")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, int value)
	{
		return null;
	}

	[Token(Token = "0x6000E4E")]
	[Address(RVA = "0x1B67EB0", Offset = "0x1B664B0", VA = "0x181B67EB0")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, byte value)
	{
		return null;
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x1B680D0", Offset = "0x1B666D0", VA = "0x181B680D0")]
	[CLSCompliant(false)]
	[ComVisible(true)]
	public static object ToObject(Type enumType, ushort value)
	{
		return null;
	}

	[Token(Token = "0x6000E50")]
	[Address(RVA = "0x1B682F0", Offset = "0x1B668F0", VA = "0x181B682F0")]
	[CLSCompliant(false)]
	[ComVisible(true)]
	public static object ToObject(Type enumType, uint value)
	{
		return null;
	}

	[Token(Token = "0x6000E51")]
	[Address(RVA = "0x1B67A70", Offset = "0x1B66070", VA = "0x181B67A70")]
	[ComVisible(true)]
	public static object ToObject(Type enumType, long value)
	{
		return null;
	}

	[Token(Token = "0x6000E52")]
	[Address(RVA = "0x1B689A0", Offset = "0x1B66FA0", VA = "0x181B689A0")]
	[CLSCompliant(false)]
	[ComVisible(true)]
	public static object ToObject(Type enumType, ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x1B67C90", Offset = "0x1B66290", VA = "0x181B67C90")]
	private static object ToObject(Type enumType, char value)
	{
		return null;
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x1B67630", Offset = "0x1B65C30", VA = "0x181B67630")]
	private static object ToObject(Type enumType, bool value)
	{
		return null;
	}

	[Token(Token = "0x6000E55")]
	public static TEnum Parse<TEnum>(string value) where TEnum : struct
	{
		return (TEnum)null;
	}

	[Token(Token = "0x6000E56")]
	public static TEnum Parse<TEnum>(string value, bool ignoreCase) where TEnum : struct
	{
		return (TEnum)null;
	}

	[Token(Token = "0x6000E57")]
	[Address(RVA = "0x1B699C0", Offset = "0x1B67FC0", VA = "0x181B699C0")]
	public static bool TryParse(Type enumType, string value, bool ignoreCase, out object result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x1B69900", Offset = "0x1B67F00", VA = "0x181B69900")]
	public static bool TryParse(Type enumType, string value, out object result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	protected Enum()
	{
	}
}
