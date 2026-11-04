// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.EnumUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001A4")]
public static class EnumUtility
{
	[Token(Token = "0x6001025")]
	[Address(RVA = "0x2E50590", Offset = "0x2E4EB90", VA = "0x182E50590")]
	public static bool HasFlag(this Enum value, Enum flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6001026")]
	[Address(RVA = "0x2E50600", Offset = "0x2E4EC00", VA = "0x182E50600")]
	public static Dictionary<string, Enum> ValuesByNames(Type enumType, bool obsolete = false)
	{
		return null;
	}

	[Token(Token = "0x6001027")]
	public static Dictionary<string, T> ValuesByNames<T>(bool obsolete = false)
	{
		return null;
	}
}
