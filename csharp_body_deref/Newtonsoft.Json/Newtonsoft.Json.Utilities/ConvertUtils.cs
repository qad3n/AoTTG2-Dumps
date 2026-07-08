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
	[Address(RVA = "0x3AB73F0", Offset = "0x3AB73F0", VA = "0x3AB73F0")]
	public static PrimitiveTypeCode GetTypeCode(Type t)
	{
		return default(PrimitiveTypeCode);
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x3AB7450", Offset = "0x3AB7450", VA = "0x3AB7450")]
	public static PrimitiveTypeCode GetTypeCode(Type t, out bool isEnum)
	{
		return default(PrimitiveTypeCode);
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x3AB7850", Offset = "0x3AB7850", VA = "0x3AB7850")]
	public static TypeInformation GetTypeInformation(IConvertible convertable)
	{
		return null;
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x3AB7960", Offset = "0x3AB7960", VA = "0x3AB7960")]
	public static bool IsConvertible(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x3AB79E0", Offset = "0x3AB79E0", VA = "0x3AB79E0")]
	public static TimeSpan ParseTimeSpan(string input)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x3AB7A60", Offset = "0x3AB7A60", VA = "0x3AB7A60")]
	private static Func<object?, object?>? CreateCastConverter(StructMultiKey<Type, Type> t)
	{
		return null;
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x3AB7CD0", Offset = "0x3AB7CD0", VA = "0x3AB7CD0")]
	internal static BigInteger ToBigInteger(object value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x3AB7FB0", Offset = "0x3AB7FB0", VA = "0x3AB7FB0")]
	public static object FromBigInteger(BigInteger i, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x3AB8400", Offset = "0x3AB8400", VA = "0x3AB8400")]
	public static object Convert(object initialValue, CultureInfo culture, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x3AB92E0", Offset = "0x3AB92E0", VA = "0x3AB92E0")]
	private static bool TryConvert(object? initialValue, CultureInfo culture, Type targetType, out object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x3AB8640", Offset = "0x3AB8640", VA = "0x3AB8640")]
	private static ConvertResult TryConvertInternal(object? initialValue, CultureInfo culture, Type targetType, out object? value)
	{
		return default(ConvertResult);
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x3AB97E0", Offset = "0x3AB97E0", VA = "0x3AB97E0")]
	public static object ConvertOrCast(object? initialValue, CultureInfo culture, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x3AB9560", Offset = "0x3AB9560", VA = "0x3AB9560")]
	private static object EnsureTypeAssignable(object? value, Type initialType, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x3AB94D0", Offset = "0x3AB94D0", VA = "0x3AB94D0")]
	public static bool VersionTryParse(string input, [NotNullWhen(true)] out Version? result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x3AB9400", Offset = "0x3AB9400", VA = "0x3AB9400")]
	public static bool IsInteger(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x3AB99C0", Offset = "0x3AB99C0", VA = "0x3AB99C0")]
	public static ParseResult Int32TryParse(char[] chars, int start, int length, out int value)
	{
		return default(ParseResult);
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x3AB9B10", Offset = "0x3AB9B10", VA = "0x3AB9B10")]
	public static ParseResult Int64TryParse(char[] chars, int start, int length, out long value)
	{
		return default(ParseResult);
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x3AB9C80", Offset = "0x3AB9C80", VA = "0x3AB9C80")]
	public static ParseResult DecimalTryParse(char[] chars, int start, int length, out decimal value)
	{
		return default(ParseResult);
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x3ABA6E0", Offset = "0x3ABA6E0", VA = "0x3ABA6E0")]
	public static bool TryConvertGuid(string s, out Guid g)
	{
		return default(bool);
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x3ABA730", Offset = "0x3ABA730", VA = "0x3ABA730")]
	public static bool TryHexTextToInt(char[] text, int start, int end, out int value)
	{
		return default(bool);
	}
}
