// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EnumDataUtility
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000199")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEditor.UIBuilderModule" })]
internal static class EnumDataUtility
{
	[Token(Token = "0x200019A")]
	public enum CachedType
	{
		[Token(Token = "0x400060E")]
		ExcludeObsolete,
		[Token(Token = "0x400060F")]
		IncludeObsoleteExceptErrors,
		[Token(Token = "0x4000610")]
		IncludeAllObsolete
	}

	[Token(Token = "0x400060C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<(CachedType, Type), EnumData> s_EnumData;

	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x2F17940", Offset = "0x2F15F40", VA = "0x182F17940")]
	public static EnumData GetCachedEnumData(Type enumType, [Optional][DefaultParameterValue(1)] CachedType cachedType, [Optional] Func<string, string> nicifyName)
	{
		return default(EnumData);
	}

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x2F189A0", Offset = "0x2F16FA0", VA = "0x182F189A0")]
	public static void HandleInspectorOrderAttribute(Type enumType, ref EnumData enumData)
	{
	}

	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x2F17440", Offset = "0x2F15A40", VA = "0x182F17440")]
	private static bool CheckObsoleteAddition(FieldInfo field, CachedType cachedType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x2F17820", Offset = "0x2F15E20", VA = "0x182F17820")]
	private static string EnumTooltipFromEnumField(FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x2F17570", Offset = "0x2F15B70", VA = "0x182F17570")]
	private static string EnumNameFromEnumField(FieldInfo field, Func<string, string> nicifyName)
	{
		return null;
	}
}
