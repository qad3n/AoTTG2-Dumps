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
		[Address(RVA = "0x1C9C360", Offset = "0x1C9A960", VA = "0x181C9C360", Slot = "6")]
		public override bool TryConvert(JValue instance, ConvertBinder binder, [NotNullWhen(true)] out object? result)
		{
			return default(bool);
		}

		[Token(Token = "0x6000DF1")]
		[Address(RVA = "0x1C9C030", Offset = "0x1C9A630", VA = "0x181C9C030", Slot = "5")]
		public override bool TryBinaryOperation(JValue instance, BinaryOperationBinder binder, object arg, [NotNullWhen(true)] out object? result)
		{
			return default(bool);
		}

		[Token(Token = "0x6000DF2")]
		[Address(RVA = "0x1C9C520", Offset = "0x1C9AB20", VA = "0x181C9C520")]
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
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000232")]
	public override JTokenType Type
	{
		[Token(Token = "0x6000DD0")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60", Slot = "15")]
		get
		{
			return default(JTokenType);
		}
	}

	[Token(Token = "0x17000233")]
	public new object? Value
	{
		[Token(Token = "0x6000DD1")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DD2")]
		[Address(RVA = "0x1CA1170", Offset = "0x1C9F770", VA = "0x181CA1170")]
		set
		{
		}
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x1C9F1F0", Offset = "0x1C9D7F0", VA = "0x181C9F1F0", Slot = "12")]
	public override Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x1CA0960", Offset = "0x1C9EF60", VA = "0x181CA0960")]
	internal JValue(object? value, JTokenType type)
	{
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x1CA0BE0", Offset = "0x1C9F1E0", VA = "0x181CA0BE0")]
	internal JValue(JValue other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x1CA09E0", Offset = "0x1C9EFE0", VA = "0x181CA09E0")]
	public JValue(JValue other)
	{
	}

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x1CA0690", Offset = "0x1C9EC90", VA = "0x181CA0690")]
	public JValue(long value)
	{
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x1CA1000", Offset = "0x1C9F600", VA = "0x181CA1000")]
	public JValue(decimal value)
	{
	}

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x1CA0D90", Offset = "0x1C9F390", VA = "0x181CA0D90")]
	public JValue(char value)
	{
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x1CA0600", Offset = "0x1C9EC00", VA = "0x181CA0600")]
	[CLSCompliant(false)]
	public JValue(ulong value)
	{
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x1CA0740", Offset = "0x1C9ED40", VA = "0x181CA0740")]
	public JValue(double value)
	{
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x1CA0D00", Offset = "0x1C9F300", VA = "0x181CA0D00")]
	public JValue(float value)
	{
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x1CA08B0", Offset = "0x1C9EEB0", VA = "0x181CA08B0")]
	public JValue(DateTime value)
	{
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x1CA10C0", Offset = "0x1C9F6C0", VA = "0x181CA10C0")]
	public JValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x1CA0800", Offset = "0x1C9EE00", VA = "0x181CA0800")]
	public JValue(bool value)
	{
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x1CA0E20", Offset = "0x1C9F420", VA = "0x181CA0E20")]
	public JValue(string? value)
	{
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x1CA0F50", Offset = "0x1C9F550", VA = "0x181CA0F50")]
	public JValue(Guid value)
	{
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x1CA0E90", Offset = "0x1C9F490", VA = "0x181CA0E90")]
	public JValue(Uri? value)
	{
	}

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x1CA0AB0", Offset = "0x1C9F0B0", VA = "0x181CA0AB0")]
	public JValue(TimeSpan value)
	{
	}

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x1CA0B60", Offset = "0x1C9F160", VA = "0x181CA0B60")]
	public JValue(object? value)
	{
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x1C9D940", Offset = "0x1C9BF40", VA = "0x181C9D940", Slot = "14")]
	internal override bool DeepEquals(JToken node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x1C9C6B0", Offset = "0x1C9ACB0", VA = "0x181C9C6B0")]
	private static int CompareBigInteger(BigInteger i1, object i2)
	{
		return default(int);
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x1C9CAF0", Offset = "0x1C9B0F0", VA = "0x181C9CAF0")]
	internal static int Compare(JTokenType valueType, object? objA, object? objB)
	{
		return default(int);
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x1C9C9D0", Offset = "0x1C9AFD0", VA = "0x181C9C9D0")]
	private static int CompareFloat(object objA, object objB)
	{
		return default(int);
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x1C9E0F0", Offset = "0x1C9C6F0", VA = "0x181C9E0F0")]
	private static bool Operation(ExpressionType operation, object? objA, object? objB, out object? result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x1C9C560", Offset = "0x1C9AB60", VA = "0x181C9C560", Slot = "13")]
	internal override JToken CloneToken(JsonCloneSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x1C9D6E0", Offset = "0x1C9BCE0", VA = "0x181C9D6E0")]
	public static JValue CreateComment(string? value)
	{
		return null;
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x1C9D810", Offset = "0x1C9BE10", VA = "0x181C9D810")]
	public static JValue CreateString(string? value)
	{
		return null;
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x1C9D780", Offset = "0x1C9BD80", VA = "0x181C9D780")]
	public static JValue CreateNull()
	{
		return null;
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x1C9D8B0", Offset = "0x1C9BEB0", VA = "0x181C9D8B0")]
	public static JValue CreateUndefined()
	{
		return null;
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x1C9DCB0", Offset = "0x1C9C2B0", VA = "0x181C9DCB0")]
	private static JTokenType GetValueType(JTokenType? current, object? value)
	{
		return default(JTokenType);
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x1C9DC50", Offset = "0x1C9C250", VA = "0x181C9DC50")]
	private static JTokenType GetStringValueType(JTokenType? current)
	{
		return default(JTokenType);
	}

	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x1C9FBF0", Offset = "0x1C9E1F0", VA = "0x181C9FBF0", Slot = "24")]
	public override void WriteTo(JsonWriter writer, params JsonConverter[] converters)
	{
	}

	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x1C9DB10", Offset = "0x1C9C110", VA = "0x181C9DB10", Slot = "25")]
	internal override int GetDeepHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x1C9F1A0", Offset = "0x1C9D7A0", VA = "0x181C9F1A0")]
	private static bool ValuesEquals(JValue v1, JValue v2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x1C9DAC0", Offset = "0x1C9C0C0", VA = "0x181C9DAC0", Slot = "27")]
	public bool Equals(JValue? other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x1C9DA00", Offset = "0x1C9C000", VA = "0x181C9DA00", Slot = "0")]
	public override bool Equals(object? obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x1C9DB70", Offset = "0x1C9C170", VA = "0x181C9DB70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x1C9EFB0", Offset = "0x1C9D5B0", VA = "0x181C9EFB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x1C9EFE0", Offset = "0x1C9D5E0", VA = "0x181C9EFE0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x1C9F190", Offset = "0x1C9D790", VA = "0x181C9F190", Slot = "46")]
	public string ToString(IFormatProvider? formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x1C9F050", Offset = "0x1C9D650", VA = "0x181C9F050", Slot = "28")]
	public string? ToString(string? format, IFormatProvider? formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x1C9DB90", Offset = "0x1C9C190", VA = "0x181C9DB90", Slot = "26")]
	protected override DynamicMetaObject GetMetaObject(Expression parameter)
	{
		return null;
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x1C9E9F0", Offset = "0x1C9CFF0", VA = "0x181C9E9F0", Slot = "29")]
	private int System_002EIComparable_002ECompareTo(object? obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x1C9CAC0", Offset = "0x1C9B0C0", VA = "0x181C9CAC0", Slot = "30")]
	public int CompareTo(JValue? obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x1C9EAB0", Offset = "0x1C9D0B0", VA = "0x181C9EAB0", Slot = "31")]
	private TypeCode System_002EIConvertible_002EGetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x1C9EB20", Offset = "0x1C9D120", VA = "0x181C9EB20", Slot = "32")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider? provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x1C9EBC0", Offset = "0x1C9D1C0", VA = "0x181C9EBC0", Slot = "33")]
	private char System_002EIConvertible_002EToChar(IFormatProvider? provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x1C9EE10", Offset = "0x1C9D410", VA = "0x181C9EE10", Slot = "34")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider? provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x1C9EB70", Offset = "0x1C9D170", VA = "0x181C9EB70", Slot = "35")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider? provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x1C9ED20", Offset = "0x1C9D320", VA = "0x181C9ED20", Slot = "36")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider? provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x1C9EEC0", Offset = "0x1C9D4C0", VA = "0x181C9EEC0", Slot = "37")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider? provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x1C9ED70", Offset = "0x1C9D370", VA = "0x181C9ED70", Slot = "38")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider? provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x1C9EF10", Offset = "0x1C9D510", VA = "0x181C9EF10", Slot = "39")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider? provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x1C9EDC0", Offset = "0x1C9D3C0", VA = "0x181C9EDC0", Slot = "40")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider? provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x1C9EF60", Offset = "0x1C9D560", VA = "0x181C9EF60", Slot = "41")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider? provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x1C9EE60", Offset = "0x1C9D460", VA = "0x181C9EE60", Slot = "42")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider? provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x1C9ECD0", Offset = "0x1C9D2D0", VA = "0x181C9ECD0", Slot = "43")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider? provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x1C9EC60", Offset = "0x1C9D260", VA = "0x181C9EC60", Slot = "44")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider? provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x1C9EC10", Offset = "0x1C9D210", VA = "0x181C9EC10", Slot = "45")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider? provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x1C9EEB0", Offset = "0x1C9D4B0", VA = "0x181C9EEB0", Slot = "47")]
	private object System_002EIConvertible_002EToType(Type conversionType, IFormatProvider? provider)
	{
		return null;
	}
}
