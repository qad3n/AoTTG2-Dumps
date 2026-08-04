// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JValue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3E309C0", Offset = "0x3E309C0", VA = "0x3E309C0", Slot = "6")]
		public override bool TryConvert(JValue instance, ConvertBinder binder, [NotNullWhen(true)] out object? result)
		{
			return default(bool);
		}

		[Token(Token = "0x6000DF1")]
		[Address(RVA = "0x3E30B90", Offset = "0x3E30B90", VA = "0x3E30B90", Slot = "5")]
		public override bool TryBinaryOperation(JValue instance, BinaryOperationBinder binder, object arg, [NotNullWhen(true)] out object? result)
		{
			return default(bool);
		}

		[Token(Token = "0x6000DF2")]
		[Address(RVA = "0x3E301A0", Offset = "0x3E301A0", VA = "0x3E301A0")]
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
		[Address(RVA = "0x3E2DDA0", Offset = "0x3E2DDA0", VA = "0x3E2DDA0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000232")]
	public override JTokenType Type
	{
		[Token(Token = "0x6000DD0")]
		[Address(RVA = "0x3E2F460", Offset = "0x3E2F460", VA = "0x3E2F460", Slot = "15")]
		get
		{
			return default(JTokenType);
		}
	}

	[Token(Token = "0x17000233")]
	public new object? Value
	{
		[Token(Token = "0x6000DD1")]
		[Address(RVA = "0x3E2F470", Offset = "0x3E2F470", VA = "0x3E2F470")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DD2")]
		[Address(RVA = "0x3E2F480", Offset = "0x3E2F480", VA = "0x3E2F480")]
		set
		{
		}
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x3E2CDB0", Offset = "0x3E2CDB0", VA = "0x3E2CDB0", Slot = "12")]
	public override Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x3E2B390", Offset = "0x3E2B390", VA = "0x3E2B390")]
	internal JValue(object? value, JTokenType type)
	{
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x3E2D690", Offset = "0x3E2D690", VA = "0x3E2D690")]
	internal JValue(JValue other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x3E2D7A0", Offset = "0x3E2D7A0", VA = "0x3E2D7A0")]
	public JValue(JValue other)
	{
	}

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x3E2BAA0", Offset = "0x3E2BAA0", VA = "0x3E2BAA0")]
	public JValue(long value)
	{
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x3E2C350", Offset = "0x3E2C350", VA = "0x3E2C350")]
	public JValue(decimal value)
	{
	}

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x3E2D860", Offset = "0x3E2D860", VA = "0x3E2D860")]
	public JValue(char value)
	{
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x3E2BC30", Offset = "0x3E2BC30", VA = "0x3E2BC30")]
	[CLSCompliant(false)]
	public JValue(ulong value)
	{
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x3E2BEA0", Offset = "0x3E2BEA0", VA = "0x3E2BEA0")]
	public JValue(double value)
	{
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x3E2BDA0", Offset = "0x3E2BDA0", VA = "0x3E2BDA0")]
	public JValue(float value)
	{
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x3E2C4A0", Offset = "0x3E2C4A0", VA = "0x3E2C4A0")]
	public JValue(DateTime value)
	{
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x3E2C5C0", Offset = "0x3E2C5C0", VA = "0x3E2C5C0")]
	public JValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x3E2BFC0", Offset = "0x3E2BFC0", VA = "0x3E2BFC0")]
	public JValue(bool value)
	{
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x3E2B920", Offset = "0x3E2B920", VA = "0x3E2B920")]
	public JValue(string? value)
	{
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x3E2C8C0", Offset = "0x3E2C8C0", VA = "0x3E2C8C0")]
	public JValue(Guid value)
	{
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x3E2C9E0", Offset = "0x3E2C9E0", VA = "0x3E2C9E0")]
	public JValue(Uri? value)
	{
	}

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x3E2C7A0", Offset = "0x3E2C7A0", VA = "0x3E2C7A0")]
	public JValue(TimeSpan value)
	{
	}

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x3E2D8F0", Offset = "0x3E2D8F0", VA = "0x3E2D8F0")]
	public JValue(object? value)
	{
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x3E2DCB0", Offset = "0x3E2DCB0", VA = "0x3E2DCB0", Slot = "14")]
	internal override bool DeepEquals(JToken node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x3E2DDB0", Offset = "0x3E2DDB0", VA = "0x3E2DDB0")]
	private static int CompareBigInteger(BigInteger i1, object i2)
	{
		return default(int);
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x3E2E090", Offset = "0x3E2E090", VA = "0x3E2E090")]
	internal static int Compare(JTokenType valueType, object? objA, object? objB)
	{
		return default(int);
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x3E2EA50", Offset = "0x3E2EA50", VA = "0x3E2EA50")]
	private static int CompareFloat(object objA, object objB)
	{
		return default(int);
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x3E2EB40", Offset = "0x3E2EB40", VA = "0x3E2EB40")]
	private static bool Operation(ExpressionType operation, object? objA, object? objB, out object? result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x3E2F320", Offset = "0x3E2F320", VA = "0x3E2F320", Slot = "13")]
	internal override JToken CloneToken(JsonCloneSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x3E2B7D0", Offset = "0x3E2B7D0", VA = "0x3E2B7D0")]
	public static JValue CreateComment(string? value)
	{
		return null;
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x3E2F370", Offset = "0x3E2F370", VA = "0x3E2F370")]
	public static JValue CreateString(string? value)
	{
		return null;
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x3E2B4D0", Offset = "0x3E2B4D0", VA = "0x3E2B4D0")]
	public static JValue CreateNull()
	{
		return null;
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x3E2B620", Offset = "0x3E2B620", VA = "0x3E2B620")]
	public static JValue CreateUndefined()
	{
		return null;
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x3E2D960", Offset = "0x3E2D960", VA = "0x3E2D960")]
	private static JTokenType GetValueType(JTokenType? current, object? value)
	{
		return default(JTokenType);
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x3E2F410", Offset = "0x3E2F410", VA = "0x3E2F410")]
	private static JTokenType GetStringValueType(JTokenType? current)
	{
		return default(JTokenType);
	}

	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x3E2F590", Offset = "0x3E2F590", VA = "0x3E2F590", Slot = "24")]
	public override void WriteTo(JsonWriter writer, params JsonConverter[] converters)
	{
	}

	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x3E2FDD0", Offset = "0x3E2FDD0", VA = "0x3E2FDD0", Slot = "25")]
	internal override int GetDeepHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x3E2DD60", Offset = "0x3E2DD60", VA = "0x3E2DD60")]
	private static bool ValuesEquals(JValue v1, JValue v2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x3E2FE20", Offset = "0x3E2FE20", VA = "0x3E2FE20", Slot = "27")]
	public bool Equals(JValue? other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x3E2FE60", Offset = "0x3E2FE60", VA = "0x3E2FE60", Slot = "0")]
	public override bool Equals(object? obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x3E2FF00", Offset = "0x3E2FF00", VA = "0x3E2FF00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x3E2FF20", Offset = "0x3E2FF20", VA = "0x3E2FF20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x3E2FF60", Offset = "0x3E2FF60", VA = "0x3E2FF60")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x3E300D0", Offset = "0x3E300D0", VA = "0x3E300D0", Slot = "46")]
	public string ToString(IFormatProvider? formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x3E2FFC0", Offset = "0x3E2FFC0", VA = "0x3E2FFC0", Slot = "28")]
	public string? ToString(string? format, IFormatProvider? formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x3E300E0", Offset = "0x3E300E0", VA = "0x3E300E0", Slot = "26")]
	protected override DynamicMetaObject GetMetaObject(Expression parameter)
	{
		return null;
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x3E301E0", Offset = "0x3E301E0", VA = "0x3E301E0", Slot = "29")]
	private int System_002EIComparable_002ECompareTo(object? obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x3E30280", Offset = "0x3E30280", VA = "0x3E30280", Slot = "30")]
	public int CompareTo(JValue? obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x3E302C0", Offset = "0x3E302C0", VA = "0x3E302C0", Slot = "31")]
	private TypeCode System_002EIConvertible_002EGetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x3E30390", Offset = "0x3E30390", VA = "0x3E30390", Slot = "32")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider? provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x3E30400", Offset = "0x3E30400", VA = "0x3E30400", Slot = "33")]
	private char System_002EIConvertible_002EToChar(IFormatProvider? provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x3E30470", Offset = "0x3E30470", VA = "0x3E30470", Slot = "34")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider? provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x3E304E0", Offset = "0x3E304E0", VA = "0x3E304E0", Slot = "35")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider? provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x3E30550", Offset = "0x3E30550", VA = "0x3E30550", Slot = "36")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider? provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x3E305C0", Offset = "0x3E305C0", VA = "0x3E305C0", Slot = "37")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider? provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x3E30630", Offset = "0x3E30630", VA = "0x3E30630", Slot = "38")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider? provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x3E306A0", Offset = "0x3E306A0", VA = "0x3E306A0", Slot = "39")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider? provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x3E30710", Offset = "0x3E30710", VA = "0x3E30710", Slot = "40")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider? provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x3E30780", Offset = "0x3E30780", VA = "0x3E30780", Slot = "41")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider? provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x3E307F0", Offset = "0x3E307F0", VA = "0x3E307F0", Slot = "42")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider? provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x3E30860", Offset = "0x3E30860", VA = "0x3E30860", Slot = "43")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider? provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x3E308D0", Offset = "0x3E308D0", VA = "0x3E308D0", Slot = "44")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider? provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x3E30940", Offset = "0x3E30940", VA = "0x3E30940", Slot = "45")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider? provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x3E309B0", Offset = "0x3E309B0", VA = "0x3E309B0", Slot = "47")]
	private object System_002EIConvertible_002EToType(Type conversionType, IFormatProvider? provider)
	{
		return null;
	}
}
