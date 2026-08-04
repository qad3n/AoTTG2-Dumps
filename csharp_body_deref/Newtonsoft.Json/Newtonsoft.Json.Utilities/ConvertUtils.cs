// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.ConvertUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.Numerics;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000A1")]
internal static class ConvertUtils
{
	[Token(Token = "0x20000A2")]
	internal enum ConvertResult
	{
		[Token(Token = "0x40003D7")]
		Success,
		[Token(Token = "0x40003D8")]
		CannotConvertNull,
		[Token(Token = "0x40003D9")]
		NotInstantiableType,
		[Token(Token = "0x40003DA")]
		NoValidConversion
	}

	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<Type, PrimitiveTypeCode> TypeCodeMap;

	[Token(Token = "0x40003D4")]
	[FieldOffset(Offset = "0x8")]
	private static readonly TypeInformation[] PrimitiveTypeCodes;

	[Token(Token = "0x40003D5")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ThreadSafeStore<StructMultiKey<Type, Type>, Func<object?, object?>?> CastConverters;

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x3DACD40", Offset = "0x3DACD40", VA = "0x3DACD40")]
	public static PrimitiveTypeCode GetTypeCode(Type t)
	{
		return default(PrimitiveTypeCode);
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x3DACDA0", Offset = "0x3DACDA0", VA = "0x3DACDA0")]
	public static PrimitiveTypeCode GetTypeCode(Type t, out bool isEnum)
	{
		return default(PrimitiveTypeCode);
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x3DAD1A0", Offset = "0x3DAD1A0", VA = "0x3DAD1A0")]
	public static TypeInformation GetTypeInformation(IConvertible convertable)
	{
		return null;
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x3DAD2B0", Offset = "0x3DAD2B0", VA = "0x3DAD2B0")]
	public static bool IsConvertible(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x3DAD330", Offset = "0x3DAD330", VA = "0x3DAD330")]
	public static TimeSpan ParseTimeSpan(string input)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x3DAD3B0", Offset = "0x3DAD3B0", VA = "0x3DAD3B0")]
	private static Func<object?, object?>? CreateCastConverter(StructMultiKey<Type, Type> t)
	{
		return null;
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x3DAD620", Offset = "0x3DAD620", VA = "0x3DAD620")]
	internal static BigInteger ToBigInteger(object value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x3DAD900", Offset = "0x3DAD900", VA = "0x3DAD900")]
	public static object FromBigInteger(BigInteger i, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x3DADD50", Offset = "0x3DADD50", VA = "0x3DADD50")]
	public static object Convert(object initialValue, CultureInfo culture, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x3DAEC30", Offset = "0x3DAEC30", VA = "0x3DAEC30")]
	private static bool TryConvert(object? initialValue, CultureInfo culture, Type targetType, out object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x3DADF90", Offset = "0x3DADF90", VA = "0x3DADF90")]
	private static ConvertResult TryConvertInternal(object? initialValue, CultureInfo culture, Type targetType, out object? value)
	{
		return default(ConvertResult);
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x3DAF130", Offset = "0x3DAF130", VA = "0x3DAF130")]
	public static object ConvertOrCast(object? initialValue, CultureInfo culture, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x3DAEEB0", Offset = "0x3DAEEB0", VA = "0x3DAEEB0")]
	private static object EnsureTypeAssignable(object? value, Type initialType, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x3DAEE20", Offset = "0x3DAEE20", VA = "0x3DAEE20")]
	public static bool VersionTryParse(string input, [NotNullWhen(true)] out Version? result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x3DAED50", Offset = "0x3DAED50", VA = "0x3DAED50")]
	public static bool IsInteger(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x3DAF310", Offset = "0x3DAF310", VA = "0x3DAF310")]
	public static ParseResult Int32TryParse(char[] chars, int start, int length, out int value)
	{
		return default(ParseResult);
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x3DAF460", Offset = "0x3DAF460", VA = "0x3DAF460")]
	public static ParseResult Int64TryParse(char[] chars, int start, int length, out long value)
	{
		return default(ParseResult);
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x3DAF5D0", Offset = "0x3DAF5D0", VA = "0x3DAF5D0")]
	public static ParseResult DecimalTryParse(char[] chars, int start, int length, out decimal value)
	{
		return default(ParseResult);
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x3DB0030", Offset = "0x3DB0030", VA = "0x3DB0030")]
	public static bool TryConvertGuid(string s, out Guid g)
	{
		return default(bool);
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x3DB0080", Offset = "0x3DB0080", VA = "0x3DB0080")]
	public static bool TryHexTextToInt(char[] text, int start, int end, out int value)
	{
		return default(bool);
	}
}
