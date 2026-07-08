using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000162")]
internal static class EnumDataUtility
{
	[Token(Token = "0x2000163")]
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

	[Token(Token = "0x6000A23")]
	[Address(RVA = "0x4AD1A40", Offset = "0x4AD1A40", VA = "0x4AD1A40")]
	internal static EnumData GetCachedEnumData(Type enumType, [Optional][DefaultParameterValue(1)] CachedType cachedType, [Optional] Func<string, string> nicifyName)
	{
		return default(EnumData);
	}

	[Token(Token = "0x6000A24")]
	[Address(RVA = "0x4AD2EC0", Offset = "0x4AD2EC0", VA = "0x4AD2EC0")]
	internal static void HandleInspectorOrderAttribute(Type enumType, ref EnumData enumData)
	{
	}

	[Token(Token = "0x6000A25")]
	[Address(RVA = "0x4AD2DD0", Offset = "0x4AD2DD0", VA = "0x4AD2DD0")]
	private static bool CheckObsoleteAddition(FieldInfo field, CachedType cachedType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A26")]
	[Address(RVA = "0x4AD3420", Offset = "0x4AD3420", VA = "0x4AD3420")]
	private static string EnumTooltipFromEnumField(FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x6000A27")]
	[Address(RVA = "0x4AD3530", Offset = "0x4AD3530", VA = "0x4AD3530")]
	private static string EnumNameFromEnumField(FieldInfo field, Func<string, string> nicifyName)
	{
		return null;
	}
}
