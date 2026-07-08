using System;
using System.Diagnostics.CodeAnalysis;
using System.Dynamic;
using System.Linq.Expressions;
using System.Numerics;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json.Linq;

[Token(Token = "0x200018C")]
public class JValue : JToken, IEquatable<JValue>, IFormattable, IComparable, IComparable<JValue>, IConvertible
{
	[Token(Token = "0x200018D")]
	private class JValueDynamicProxy : DynamicProxy<JValue>
	{
		[Token(Token = "0x6000DF0")]
		[Address(RVA = "0x3B3B070", Offset = "0x3B3B070", VA = "0x3B3B070", Slot = "6")]
		public override bool TryConvert(JValue instance, ConvertBinder binder, [NotNullWhen(true)] out object? result)
		{
			return default(bool);
		}

		[Token(Token = "0x6000DF1")]
		[Address(RVA = "0x3B3B240", Offset = "0x3B3B240", VA = "0x3B3B240", Slot = "5")]
		public override bool TryBinaryOperation(JValue instance, BinaryOperationBinder binder, object arg, [NotNullWhen(true)] out object? result)
		{
			return default(bool);
		}

		[Token(Token = "0x6000DF2")]
		[Address(RVA = "0x3B3A850", Offset = "0x3B3A850", VA = "0x3B3A850")]
		public JValueDynamicProxy()
		{
		}
	}

	[Token(Token = "0x4000759")]
	[FieldOffset(Offset = "0x30")]
	private JTokenType _valueType;

	[Token(Token = "0x400075A")]
	[FieldOffset(Offset = "0x38")]
	private object? _value;

	[Token(Token = "0x17000231")]
	public override bool HasValues
	{
		[Token(Token = "0x6000DC4")]
		[Address(RVA = "0x3B38450", Offset = "0x3B38450", VA = "0x3B38450", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000232")]
	public override JTokenType Type
	{
		[Token(Token = "0x6000DD0")]
		[Address(RVA = "0x3B39B10", Offset = "0x3B39B10", VA = "0x3B39B10", Slot = "15")]
		get
		{
			return default(JTokenType);
		}
	}

	[Token(Token = "0x17000233")]
	public new object? Value
	{
		[Token(Token = "0x6000DD1")]
		[Address(RVA = "0x3B39B20", Offset = "0x3B39B20", VA = "0x3B39B20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DD2")]
		[Address(RVA = "0x3B39B30", Offset = "0x3B39B30", VA = "0x3B39B30")]
		set
		{
		}
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x3B37460", Offset = "0x3B37460", VA = "0x3B37460", Slot = "12")]
	public override Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x3B35A40", Offset = "0x3B35A40", VA = "0x3B35A40")]
	internal JValue(object? value, JTokenType type)
	{
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x3B37D40", Offset = "0x3B37D40", VA = "0x3B37D40")]
	internal JValue(JValue other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x3B37E50", Offset = "0x3B37E50", VA = "0x3B37E50")]
	public JValue(JValue other)
	{
	}

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x3B36150", Offset = "0x3B36150", VA = "0x3B36150")]
	public JValue(long value)
	{
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x3B36A00", Offset = "0x3B36A00", VA = "0x3B36A00")]
	public JValue(decimal value)
	{
	}

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x3B37F10", Offset = "0x3B37F10", VA = "0x3B37F10")]
	public JValue(char value)
	{
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x3B362E0", Offset = "0x3B362E0", VA = "0x3B362E0")]
	[CLSCompliant(false)]
	public JValue(ulong value)
	{
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x3B36550", Offset = "0x3B36550", VA = "0x3B36550")]
	public JValue(double value)
	{
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x3B36450", Offset = "0x3B36450", VA = "0x3B36450")]
	public JValue(float value)
	{
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x3B36B50", Offset = "0x3B36B50", VA = "0x3B36B50")]
	public JValue(DateTime value)
	{
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x3B36C70", Offset = "0x3B36C70", VA = "0x3B36C70")]
	public JValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x3B36670", Offset = "0x3B36670", VA = "0x3B36670")]
	public JValue(bool value)
	{
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x3B35FD0", Offset = "0x3B35FD0", VA = "0x3B35FD0")]
	public JValue(string? value)
	{
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x3B36F70", Offset = "0x3B36F70", VA = "0x3B36F70")]
	public JValue(Guid value)
	{
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x3B37090", Offset = "0x3B37090", VA = "0x3B37090")]
	public JValue(Uri? value)
	{
	}

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x3B36E50", Offset = "0x3B36E50", VA = "0x3B36E50")]
	public JValue(TimeSpan value)
	{
	}

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x3B37FA0", Offset = "0x3B37FA0", VA = "0x3B37FA0")]
	public JValue(object? value)
	{
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x3B38360", Offset = "0x3B38360", VA = "0x3B38360", Slot = "14")]
	internal override bool DeepEquals(JToken node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x3B38460", Offset = "0x3B38460", VA = "0x3B38460")]
	private static int CompareBigInteger(BigInteger i1, object i2)
	{
		return default(int);
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x3B38740", Offset = "0x3B38740", VA = "0x3B38740")]
	internal static int Compare(JTokenType valueType, object? objA, object? objB)
	{
		return default(int);
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x3B39100", Offset = "0x3B39100", VA = "0x3B39100")]
	private static int CompareFloat(object objA, object objB)
	{
		return default(int);
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x3B391F0", Offset = "0x3B391F0", VA = "0x3B391F0")]
	private static bool Operation(ExpressionType operation, object? objA, object? objB, out object? result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x3B399D0", Offset = "0x3B399D0", VA = "0x3B399D0", Slot = "13")]
	internal override JToken CloneToken(JsonCloneSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x3B35E80", Offset = "0x3B35E80", VA = "0x3B35E80")]
	public static JValue CreateComment(string? value)
	{
		return null;
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x3B39A20", Offset = "0x3B39A20", VA = "0x3B39A20")]
	public static JValue CreateString(string? value)
	{
		return null;
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x3B35B80", Offset = "0x3B35B80", VA = "0x3B35B80")]
	public static JValue CreateNull()
	{
		return null;
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x3B35CD0", Offset = "0x3B35CD0", VA = "0x3B35CD0")]
	public static JValue CreateUndefined()
	{
		return null;
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x3B38010", Offset = "0x3B38010", VA = "0x3B38010")]
	private static JTokenType GetValueType(JTokenType? current, object? value)
	{
		return default(JTokenType);
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x3B39AC0", Offset = "0x3B39AC0", VA = "0x3B39AC0")]
	private static JTokenType GetStringValueType(JTokenType? current)
	{
		return default(JTokenType);
	}

	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x3B39C40", Offset = "0x3B39C40", VA = "0x3B39C40", Slot = "24")]
	public override void WriteTo(JsonWriter writer, params JsonConverter[] converters)
	{
	}

	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x3B3A480", Offset = "0x3B3A480", VA = "0x3B3A480", Slot = "25")]
	internal override int GetDeepHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x3B38410", Offset = "0x3B38410", VA = "0x3B38410")]
	private static bool ValuesEquals(JValue v1, JValue v2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x3B3A4D0", Offset = "0x3B3A4D0", VA = "0x3B3A4D0", Slot = "27")]
	public bool Equals(JValue? other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x3B3A510", Offset = "0x3B3A510", VA = "0x3B3A510", Slot = "0")]
	public override bool Equals(object? obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x3B3A5B0", Offset = "0x3B3A5B0", VA = "0x3B3A5B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x3B3A5D0", Offset = "0x3B3A5D0", VA = "0x3B3A5D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x3B3A610", Offset = "0x3B3A610", VA = "0x3B3A610")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x3B3A780", Offset = "0x3B3A780", VA = "0x3B3A780", Slot = "46")]
	public string ToString(IFormatProvider? formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x3B3A670", Offset = "0x3B3A670", VA = "0x3B3A670", Slot = "28")]
	public string? ToString(string? format, IFormatProvider? formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x3B3A790", Offset = "0x3B3A790", VA = "0x3B3A790", Slot = "26")]
	protected override DynamicMetaObject GetMetaObject(Expression parameter)
	{
		return null;
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x3B3A890", Offset = "0x3B3A890", VA = "0x3B3A890", Slot = "29")]
	private int System_002EIComparable_002ECompareTo(object? obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x3B3A930", Offset = "0x3B3A930", VA = "0x3B3A930", Slot = "30")]
	public int CompareTo(JValue? obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x3B3A970", Offset = "0x3B3A970", VA = "0x3B3A970", Slot = "31")]
	private TypeCode System_002EIConvertible_002EGetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x3B3AA40", Offset = "0x3B3AA40", VA = "0x3B3AA40", Slot = "32")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider? provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x3B3AAB0", Offset = "0x3B3AAB0", VA = "0x3B3AAB0", Slot = "33")]
	private char System_002EIConvertible_002EToChar(IFormatProvider? provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x3B3AB20", Offset = "0x3B3AB20", VA = "0x3B3AB20", Slot = "34")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider? provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x3B3AB90", Offset = "0x3B3AB90", VA = "0x3B3AB90", Slot = "35")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider? provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x3B3AC00", Offset = "0x3B3AC00", VA = "0x3B3AC00", Slot = "36")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider? provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x3B3AC70", Offset = "0x3B3AC70", VA = "0x3B3AC70", Slot = "37")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider? provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x3B3ACE0", Offset = "0x3B3ACE0", VA = "0x3B3ACE0", Slot = "38")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider? provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x3B3AD50", Offset = "0x3B3AD50", VA = "0x3B3AD50", Slot = "39")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider? provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x3B3ADC0", Offset = "0x3B3ADC0", VA = "0x3B3ADC0", Slot = "40")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider? provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x3B3AE30", Offset = "0x3B3AE30", VA = "0x3B3AE30", Slot = "41")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider? provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x3B3AEA0", Offset = "0x3B3AEA0", VA = "0x3B3AEA0", Slot = "42")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider? provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x3B3AF10", Offset = "0x3B3AF10", VA = "0x3B3AF10", Slot = "43")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider? provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x3B3AF80", Offset = "0x3B3AF80", VA = "0x3B3AF80", Slot = "44")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider? provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x3B3AFF0", Offset = "0x3B3AFF0", VA = "0x3B3AFF0", Slot = "45")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider? provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x3B3B060", Offset = "0x3B3B060", VA = "0x3B3B060", Slot = "47")]
	private object System_002EIConvertible_002EToType(Type conversionType, IFormatProvider? provider)
	{
		return null;
	}
}
