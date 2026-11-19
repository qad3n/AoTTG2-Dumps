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
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x200019A")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEditor.UIBuilderModule" })]
internal static class EnumDataUtility
{
	[Token(Token = "0x200019B")]
	public enum CachedType
	{
		[Token(Token = "0x4000613")]
		ExcludeObsolete,
		[Token(Token = "0x4000614")]
		IncludeObsoleteExceptErrors,
		[Token(Token = "0x4000615")]
		IncludeAllObsolete
	}

	[Token(Token = "0x4000611")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<(CachedType, Type), EnumData> s_EnumData;

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x6917140", Offset = "0x6916140", VA = "0x6917140")]
	public static EnumData GetCachedEnumData(Type enumType, [Optional][DefaultParameterValue(1)] CachedType cachedType, [Optional] Func<string, string> nicifyName)
	{
		return default(EnumData);
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x69185A0", Offset = "0x69175A0", VA = "0x69185A0")]
	public static void HandleInspectorOrderAttribute(Type enumType, ref EnumData enumData)
	{
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x69184B0", Offset = "0x69174B0", VA = "0x69184B0")]
	private static bool CheckObsoleteAddition(FieldInfo field, CachedType cachedType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x6918CB0", Offset = "0x6917CB0", VA = "0x6918CB0")]
	private static string EnumTooltipFromEnumField(FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x6918DC0", Offset = "0x6917DC0", VA = "0x6918DC0")]
	private static string EnumNameFromEnumField(FieldInfo field, Func<string, string> nicifyName)
	{
		return null;
	}
}
