// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EnumDataUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000165")]
internal static class EnumDataUtility
{
	[Token(Token = "0x2000166")]
	public enum CachedType
	{
		[Token(Token = "0x400057D")]
		ExcludeObsolete,
		[Token(Token = "0x400057E")]
		IncludeObsoleteExceptErrors,
		[Token(Token = "0x400057F")]
		IncludeAllObsolete
	}

	[Token(Token = "0x400057B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<(CachedType, Type), EnumData> s_EnumData;

	[Token(Token = "0x6000A25")]
	[Address(RVA = "0x4DF9370", Offset = "0x4DF9370", VA = "0x4DF9370")]
	internal static EnumData GetCachedEnumData(Type enumType, [Optional][DefaultParameterValue(1)] CachedType cachedType, [Optional] Func<string, string> nicifyName)
	{
		return default(EnumData);
	}

	[Token(Token = "0x6000A26")]
	[Address(RVA = "0x4DFA7F0", Offset = "0x4DFA7F0", VA = "0x4DFA7F0")]
	internal static void HandleInspectorOrderAttribute(Type enumType, ref EnumData enumData)
	{
	}

	[Token(Token = "0x6000A27")]
	[Address(RVA = "0x4DFA700", Offset = "0x4DFA700", VA = "0x4DFA700")]
	private static bool CheckObsoleteAddition(FieldInfo field, CachedType cachedType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A28")]
	[Address(RVA = "0x4DFAD50", Offset = "0x4DFAD50", VA = "0x4DFAD50")]
	private static string EnumTooltipFromEnumField(FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x6000A29")]
	[Address(RVA = "0x4DFAE60", Offset = "0x4DFAE60", VA = "0x4DFAE60")]
	private static string EnumNameFromEnumField(FieldInfo field, Func<string, string> nicifyName)
	{
		return null;
	}
}
