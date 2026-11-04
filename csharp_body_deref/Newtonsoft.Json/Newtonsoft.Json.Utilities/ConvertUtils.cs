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
	[Address(RVA = "0x1C1C350", Offset = "0x1C1A950", VA = "0x181C1C350")]
	public static PrimitiveTypeCode GetTypeCode(Type t)
	{
		return default(PrimitiveTypeCode);
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x1C1C3B0", Offset = "0x1C1A9B0", VA = "0x181C1C3B0")]
	public static PrimitiveTypeCode GetTypeCode(Type t, out bool isEnum)
	{
		return default(PrimitiveTypeCode);
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x1C1C670", Offset = "0x1C1AC70", VA = "0x181C1C670")]
	public static TypeInformation GetTypeInformation(IConvertible convertable)
	{
		return null;
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x1C1C9D0", Offset = "0x1C1AFD0", VA = "0x181C1C9D0")]
	public static bool IsConvertible(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x1C1CB60", Offset = "0x1C1B160", VA = "0x181C1CB60")]
	public static TimeSpan ParseTimeSpan(string input)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x1C1B130", Offset = "0x1C19730", VA = "0x181C1B130")]
	private static Func<object?, object?>? CreateCastConverter(StructMultiKey<Type, Type> t)
	{
		return null;
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x1C1CBF0", Offset = "0x1C1B1F0", VA = "0x181C1CBF0")]
	internal static BigInteger ToBigInteger(object value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x1C1BF20", Offset = "0x1C1A520", VA = "0x181C1BF20")]
	public static object FromBigInteger(BigInteger i, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x1C1AEA0", Offset = "0x1C194A0", VA = "0x181C1AEA0")]
	public static object Convert(object initialValue, CultureInfo culture, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x1C1DB50", Offset = "0x1C1C150", VA = "0x181C1DB50")]
	private static bool TryConvert(object? initialValue, CultureInfo culture, Type targetType, out object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x1C1D060", Offset = "0x1C1B660", VA = "0x181C1D060")]
	private static ConvertResult TryConvertInternal(object? initialValue, CultureInfo culture, Type targetType, out object? value)
	{
		return default(ConvertResult);
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x1C1AD40", Offset = "0x1C19340", VA = "0x181C1AD40")]
	public static object ConvertOrCast(object? initialValue, CultureInfo culture, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x1C1BCF0", Offset = "0x1C1A2F0", VA = "0x181C1BCF0")]
	private static object EnsureTypeAssignable(object? value, Type initialType, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x1C1DC90", Offset = "0x1C1C290", VA = "0x181C1DC90")]
	public static bool VersionTryParse(string input, [NotNullWhen(true)] out Version? result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x1C1CA50", Offset = "0x1C1B050", VA = "0x181C1CA50")]
	public static bool IsInteger(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x1C1C710", Offset = "0x1C1AD10", VA = "0x181C1C710")]
	public static ParseResult Int32TryParse(char[] chars, int start, int length, out int value)
	{
		return default(ParseResult);
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x1C1C880", Offset = "0x1C1AE80", VA = "0x181C1C880")]
	public static ParseResult Int64TryParse(char[] chars, int start, int length, out long value)
	{
		return default(ParseResult);
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x1C1B3B0", Offset = "0x1C199B0", VA = "0x181C1B3B0")]
	public static ParseResult DecimalTryParse(char[] chars, int start, int length, out decimal value)
	{
		return default(ParseResult);
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x1C1D010", Offset = "0x1C1B610", VA = "0x181C1D010")]
	public static bool TryConvertGuid(string s, out Guid g)
	{
		return default(bool);
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x1C1DC00", Offset = "0x1C1C200", VA = "0x181C1DC00")]
	public static bool TryHexTextToInt(char[] text, int start, int end, out int value)
	{
		return default(bool);
	}
}
