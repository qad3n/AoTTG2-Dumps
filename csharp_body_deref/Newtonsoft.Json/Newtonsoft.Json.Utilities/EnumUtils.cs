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
	[Address(RVA = "0x1C23D20", Offset = "0x1C22320", VA = "0x181C23D20")]
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
	[Address(RVA = "0x1C250D0", Offset = "0x1C236D0", VA = "0x181C250D0")]
	public static bool TryToString(Type enumType, object value, bool camelCase, [NotNullWhen(true)] out string? name)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x1C24F30", Offset = "0x1C23530", VA = "0x181C24F30")]
	public static bool TryToString(Type enumType, object value, NamingStrategy? namingStrategy, [NotNullWhen(true)] out string? name)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x1C24210", Offset = "0x1C22810", VA = "0x181C24210")]
	private static string InternalFlagsFormat(EnumInfo entry, ulong result)
	{
		return null;
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x1C23C60", Offset = "0x1C22260", VA = "0x181C23C60")]
	public static EnumInfo GetEnumValuesAndNames(Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x1C24C20", Offset = "0x1C23220", VA = "0x181C24C20")]
	private static ulong ToUInt64(object value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x1C24480", Offset = "0x1C22A80", VA = "0x181C24480")]
	public static object ParseEnum(Type enumType, NamingStrategy? namingStrategy, string value, bool disallowNumber)
	{
		return null;
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x1C243B0", Offset = "0x1C229B0", VA = "0x181C243B0")]
	private static int? MatchName(string value, string[] enumNames, string[] resolvedNames, int valueIndex, int valueSubstringLength, StringComparison comparison)
	{
		return null;
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x1C23B60", Offset = "0x1C22160", VA = "0x181C23B60")]
	private static int? FindIndexByName(string[] enumNames, string value, int valueIndex, int valueSubstringLength, StringComparison comparison)
	{
		return null;
	}
}
