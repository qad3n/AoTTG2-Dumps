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
	[Address(RVA = "0x55A66E0", Offset = "0x55A56E0", VA = "0x55A66E0")]
	public static PrimitiveTypeCode GetTypeCode(Type t)
	{
		return default(PrimitiveTypeCode);
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x55A6730", Offset = "0x55A5730", VA = "0x55A6730")]
	public static PrimitiveTypeCode GetTypeCode(Type t, out bool isEnum)
	{
		return default(PrimitiveTypeCode);
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x55A6B20", Offset = "0x55A5B20", VA = "0x55A6B20")]
	public static TypeInformation GetTypeInformation(IConvertible convertable)
	{
		return null;
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x55A6C30", Offset = "0x55A5C30", VA = "0x55A6C30")]
	public static bool IsConvertible(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x55A6CB0", Offset = "0x55A5CB0", VA = "0x55A6CB0")]
	public static TimeSpan ParseTimeSpan(string input)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x55A6D30", Offset = "0x55A5D30", VA = "0x55A6D30")]
	private static Func<object?, object?>? CreateCastConverter(StructMultiKey<Type, Type> t)
	{
		return null;
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x55A6FB0", Offset = "0x55A5FB0", VA = "0x55A6FB0")]
	internal static BigInteger ToBigInteger(object value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x55A7290", Offset = "0x55A6290", VA = "0x55A7290")]
	public static object FromBigInteger(BigInteger i, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x55A76B0", Offset = "0x55A66B0", VA = "0x55A76B0")]
	public static object Convert(object initialValue, CultureInfo culture, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x55A84E0", Offset = "0x55A74E0", VA = "0x55A84E0")]
	private static bool TryConvert(object? initialValue, CultureInfo culture, Type targetType, out object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x55A78F0", Offset = "0x55A68F0", VA = "0x55A78F0")]
	private static ConvertResult TryConvertInternal(object? initialValue, CultureInfo culture, Type targetType, out object? value)
	{
		return default(ConvertResult);
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x55A89D0", Offset = "0x55A79D0", VA = "0x55A89D0")]
	public static object ConvertOrCast(object? initialValue, CultureInfo culture, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x55A8750", Offset = "0x55A7750", VA = "0x55A8750")]
	private static object EnsureTypeAssignable(object? value, Type initialType, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x55A86C0", Offset = "0x55A76C0", VA = "0x55A86C0")]
	public static bool VersionTryParse(string input, [NotNullWhen(true)] out Version? result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x55A85F0", Offset = "0x55A75F0", VA = "0x55A85F0")]
	public static bool IsInteger(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x55A8BB0", Offset = "0x55A7BB0", VA = "0x55A8BB0")]
	public static ParseResult Int32TryParse(char[] chars, int start, int length, out int value)
	{
		return default(ParseResult);
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x55A8D40", Offset = "0x55A7D40", VA = "0x55A8D40")]
	public static ParseResult Int64TryParse(char[] chars, int start, int length, out long value)
	{
		return default(ParseResult);
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x55A8ED0", Offset = "0x55A7ED0", VA = "0x55A8ED0")]
	public static ParseResult DecimalTryParse(char[] chars, int start, int length, out decimal value)
	{
		return default(ParseResult);
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x55A9920", Offset = "0x55A8920", VA = "0x55A9920")]
	public static bool TryConvertGuid(string s, out Guid g)
	{
		return default(bool);
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x55A9970", Offset = "0x55A8970", VA = "0x55A9970")]
	public static bool TryHexTextToInt(char[] text, int start, int end, out int value)
	{
		return default(bool);
	}
}
