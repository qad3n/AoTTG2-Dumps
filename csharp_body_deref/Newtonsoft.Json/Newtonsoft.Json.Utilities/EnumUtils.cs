using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;
using Newtonsoft.Json.Serialization;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000C2")]
internal static class EnumUtils
{
	[Token(Token = "0x4000441")]
	private const char EnumSeparatorChar = ',';

	[Token(Token = "0x4000442")]
	private const string EnumSeparatorString = ", ";

	[Token(Token = "0x4000443")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ThreadSafeStore<StructMultiKey<Type, NamingStrategy?>, EnumInfo> ValuesAndNamesPerEnum;

	[Token(Token = "0x4000444")]
	[FieldOffset(Offset = "0x8")]
	private static CamelCaseNamingStrategy _camelCaseNamingStrategy;

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x3AC1C10", Offset = "0x3AC1C10", VA = "0x3AC1C10")]
	private static EnumInfo InitializeValuesAndNames(StructMultiKey<Type, NamingStrategy?> key)
	{
		return null;
	}

	[Token(Token = "0x60005FC")]
	public static IList<T> GetFlagsValues<T>(T value) where T : struct
	{
		return null;
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x3AC23E0", Offset = "0x3AC23E0", VA = "0x3AC23E0")]
	public static bool TryToString(Type enumType, object value, bool camelCase, [NotNullWhen(true)] out string? name)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x3AC2480", Offset = "0x3AC2480", VA = "0x3AC2480")]
	public static bool TryToString(Type enumType, object value, NamingStrategy? namingStrategy, [NotNullWhen(true)] out string? name)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x3AC2610", Offset = "0x3AC2610", VA = "0x3AC2610")]
	private static string InternalFlagsFormat(EnumInfo entry, ulong result)
	{
		return null;
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x3AC28B0", Offset = "0x3AC28B0", VA = "0x3AC28B0")]
	public static EnumInfo GetEnumValuesAndNames(Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x3AC2120", Offset = "0x3AC2120", VA = "0x3AC2120")]
	private static ulong ToUInt64(object value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x3AC2960", Offset = "0x3AC2960", VA = "0x3AC2960")]
	public static object ParseEnum(Type enumType, NamingStrategy? namingStrategy, string value, bool disallowNumber)
	{
		return null;
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x3AC3250", Offset = "0x3AC3250", VA = "0x3AC3250")]
	private static int? MatchName(string value, string[] enumNames, string[] resolvedNames, int valueIndex, int valueSubstringLength, StringComparison comparison)
	{
		return null;
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x3AC3160", Offset = "0x3AC3160", VA = "0x3AC3160")]
	private static int? FindIndexByName(string[] enumNames, string value, int valueIndex, int valueSubstringLength, StringComparison comparison)
	{
		return null;
	}
}
