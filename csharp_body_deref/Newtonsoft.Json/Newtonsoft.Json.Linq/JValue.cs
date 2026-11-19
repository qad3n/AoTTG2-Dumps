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
		[Address(RVA = "0x5624080", Offset = "0x5623080", VA = "0x5624080", Slot = "6")]
		public override bool TryConvert(JValue instance, ConvertBinder binder, [NotNullWhen(true)] out object? result)
		{
			return default(bool);
		}

		[Token(Token = "0x6000DF1")]
		[Address(RVA = "0x5624250", Offset = "0x5623250", VA = "0x5624250", Slot = "5")]
		public override bool TryBinaryOperation(JValue instance, BinaryOperationBinder binder, object arg, [NotNullWhen(true)] out object? result)
		{
			return default(bool);
		}

		[Token(Token = "0x6000DF2")]
		[Address(RVA = "0x5623860", Offset = "0x5622860", VA = "0x5623860")]
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
		[Address(RVA = "0x5621460", Offset = "0x5620460", VA = "0x5621460", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000232")]
	public override JTokenType Type
	{
		[Token(Token = "0x6000DD0")]
		[Address(RVA = "0x5622AD0", Offset = "0x5621AD0", VA = "0x5622AD0", Slot = "15")]
		get
		{
			return default(JTokenType);
		}
	}

	[Token(Token = "0x17000233")]
	public new object? Value
	{
		[Token(Token = "0x6000DD1")]
		[Address(RVA = "0x5622AE0", Offset = "0x5621AE0", VA = "0x5622AE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DD2")]
		[Address(RVA = "0x5622AF0", Offset = "0x5621AF0", VA = "0x5622AF0")]
		set
		{
		}
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x5620490", Offset = "0x561F490", VA = "0x5620490", Slot = "12")]
	public override Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x561EA00", Offset = "0x561DA00", VA = "0x561EA00")]
	internal JValue(object? value, JTokenType type)
	{
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x5620D70", Offset = "0x561FD70", VA = "0x5620D70")]
	internal JValue(JValue other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x5620E80", Offset = "0x561FE80", VA = "0x5620E80")]
	public JValue(JValue other)
	{
	}

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x561F110", Offset = "0x561E110", VA = "0x561F110")]
	public JValue(long value)
	{
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x561F9C0", Offset = "0x561E9C0", VA = "0x561F9C0")]
	public JValue(decimal value)
	{
	}

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x5620F40", Offset = "0x561FF40", VA = "0x5620F40")]
	public JValue(char value)
	{
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x561F2A0", Offset = "0x561E2A0", VA = "0x561F2A0")]
	[CLSCompliant(false)]
	public JValue(ulong value)
	{
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x561F510", Offset = "0x561E510", VA = "0x561F510")]
	public JValue(double value)
	{
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x561F410", Offset = "0x561E410", VA = "0x561F410")]
	public JValue(float value)
	{
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x561FB10", Offset = "0x561EB10", VA = "0x561FB10")]
	public JValue(DateTime value)
	{
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x561FC30", Offset = "0x561EC30", VA = "0x561FC30")]
	public JValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x561F630", Offset = "0x561E630", VA = "0x561F630")]
	public JValue(bool value)
	{
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x561EF90", Offset = "0x561DF90", VA = "0x561EF90")]
	public JValue(string? value)
	{
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x561FF20", Offset = "0x561EF20", VA = "0x561FF20")]
	public JValue(Guid value)
	{
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x5620040", Offset = "0x561F040", VA = "0x5620040")]
	public JValue(Uri? value)
	{
	}

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x561FE00", Offset = "0x561EE00", VA = "0x561FE00")]
	public JValue(TimeSpan value)
	{
	}

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x5620FD0", Offset = "0x561FFD0", VA = "0x5620FD0")]
	public JValue(object? value)
	{
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x5621380", Offset = "0x5620380", VA = "0x5621380", Slot = "14")]
	internal override bool DeepEquals(JToken node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x5621470", Offset = "0x5620470", VA = "0x5621470")]
	private static int CompareBigInteger(BigInteger i1, object i2)
	{
		return default(int);
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x5621740", Offset = "0x5620740", VA = "0x5621740")]
	internal static int Compare(JTokenType valueType, object? objA, object? objB)
	{
		return default(int);
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x56220A0", Offset = "0x56210A0", VA = "0x56220A0")]
	private static int CompareFloat(object objA, object objB)
	{
		return default(int);
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x5622190", Offset = "0x5621190", VA = "0x5622190")]
	private static bool Operation(ExpressionType operation, object? objA, object? objB, out object? result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x5622990", Offset = "0x5621990", VA = "0x5622990", Slot = "13")]
	internal override JToken CloneToken(JsonCloneSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x561EE40", Offset = "0x561DE40", VA = "0x561EE40")]
	public static JValue CreateComment(string? value)
	{
		return null;
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x56229E0", Offset = "0x56219E0", VA = "0x56229E0")]
	public static JValue CreateString(string? value)
	{
		return null;
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x561EB40", Offset = "0x561DB40", VA = "0x561EB40")]
	public static JValue CreateNull()
	{
		return null;
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x561EC90", Offset = "0x561DC90", VA = "0x561EC90")]
	public static JValue CreateUndefined()
	{
		return null;
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x5621040", Offset = "0x5620040", VA = "0x5621040")]
	private static JTokenType GetValueType(JTokenType? current, object? value)
	{
		return default(JTokenType);
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x5622A80", Offset = "0x5621A80", VA = "0x5622A80")]
	private static JTokenType GetStringValueType(JTokenType? current)
	{
		return default(JTokenType);
	}

	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x5622C00", Offset = "0x5621C00", VA = "0x5622C00", Slot = "24")]
	public override void WriteTo(JsonWriter writer, params JsonConverter[] converters)
	{
	}

	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x5623490", Offset = "0x5622490", VA = "0x5623490", Slot = "25")]
	internal override int GetDeepHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x5621420", Offset = "0x5620420", VA = "0x5621420")]
	private static bool ValuesEquals(JValue v1, JValue v2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x56234E0", Offset = "0x56224E0", VA = "0x56234E0", Slot = "27")]
	public bool Equals(JValue? other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x5623520", Offset = "0x5622520", VA = "0x5623520", Slot = "0")]
	public override bool Equals(object? obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x56235C0", Offset = "0x56225C0", VA = "0x56235C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x56235E0", Offset = "0x56225E0", VA = "0x56235E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x5623620", Offset = "0x5622620", VA = "0x5623620")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x5623790", Offset = "0x5622790", VA = "0x5623790", Slot = "46")]
	public string ToString(IFormatProvider? formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x5623680", Offset = "0x5622680", VA = "0x5623680", Slot = "28")]
	public string? ToString(string? format, IFormatProvider? formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x56237A0", Offset = "0x56227A0", VA = "0x56237A0", Slot = "26")]
	protected override DynamicMetaObject GetMetaObject(Expression parameter)
	{
		return null;
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x56238A0", Offset = "0x56228A0", VA = "0x56238A0", Slot = "29")]
	private int System_002EIComparable_002ECompareTo(object? obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x5623940", Offset = "0x5622940", VA = "0x5623940", Slot = "30")]
	public int CompareTo(JValue? obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x5623980", Offset = "0x5622980", VA = "0x5623980", Slot = "31")]
	private TypeCode System_002EIConvertible_002EGetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x5623A50", Offset = "0x5622A50", VA = "0x5623A50", Slot = "32")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider? provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x5623AC0", Offset = "0x5622AC0", VA = "0x5623AC0", Slot = "33")]
	private char System_002EIConvertible_002EToChar(IFormatProvider? provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x5623B30", Offset = "0x5622B30", VA = "0x5623B30", Slot = "34")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider? provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x5623BA0", Offset = "0x5622BA0", VA = "0x5623BA0", Slot = "35")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider? provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x5623C10", Offset = "0x5622C10", VA = "0x5623C10", Slot = "36")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider? provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x5623C80", Offset = "0x5622C80", VA = "0x5623C80", Slot = "37")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider? provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x5623CF0", Offset = "0x5622CF0", VA = "0x5623CF0", Slot = "38")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider? provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x5623D60", Offset = "0x5622D60", VA = "0x5623D60", Slot = "39")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider? provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x5623DD0", Offset = "0x5622DD0", VA = "0x5623DD0", Slot = "40")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider? provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x5623E40", Offset = "0x5622E40", VA = "0x5623E40", Slot = "41")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider? provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x5623EB0", Offset = "0x5622EB0", VA = "0x5623EB0", Slot = "42")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider? provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x5623F20", Offset = "0x5622F20", VA = "0x5623F20", Slot = "43")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider? provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x5623F90", Offset = "0x5622F90", VA = "0x5623F90", Slot = "44")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider? provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x5624000", Offset = "0x5623000", VA = "0x5624000", Slot = "45")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider? provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x5624070", Offset = "0x5623070", VA = "0x5624070", Slot = "47")]
	private object System_002EIConvertible_002EToType(Type conversionType, IFormatProvider? provider)
	{
		return null;
	}
}
