// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.EnumUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x55B0CD0", Offset = "0x55AFCD0", VA = "0x55B0CD0")]
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
	[Address(RVA = "0x55B14D0", Offset = "0x55B04D0", VA = "0x55B14D0")]
	public static bool TryToString(Type enumType, object value, bool camelCase, [NotNullWhen(true)] out string? name)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x55B1570", Offset = "0x55B0570", VA = "0x55B1570")]
	public static bool TryToString(Type enumType, object value, NamingStrategy? namingStrategy, [NotNullWhen(true)] out string? name)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x55B1700", Offset = "0x55B0700", VA = "0x55B1700")]
	private static string InternalFlagsFormat(EnumInfo entry, ulong result)
	{
		return null;
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x55B19C0", Offset = "0x55B09C0", VA = "0x55B19C0")]
	public static EnumInfo GetEnumValuesAndNames(Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x55B1240", Offset = "0x55B0240", VA = "0x55B1240")]
	private static ulong ToUInt64(object value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x55B1A70", Offset = "0x55B0A70", VA = "0x55B1A70")]
	public static object ParseEnum(Type enumType, NamingStrategy? namingStrategy, string value, bool disallowNumber)
	{
		return null;
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x55B2300", Offset = "0x55B1300", VA = "0x55B2300")]
	private static int? MatchName(string value, string[] enumNames, string[] resolvedNames, int valueIndex, int valueSubstringLength, StringComparison comparison)
	{
		return null;
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x55B2220", Offset = "0x55B1220", VA = "0x55B2220")]
	private static int? FindIndexByName(string[] enumNames, string value, int valueIndex, int valueSubstringLength, StringComparison comparison)
	{
		return null;
	}
}
