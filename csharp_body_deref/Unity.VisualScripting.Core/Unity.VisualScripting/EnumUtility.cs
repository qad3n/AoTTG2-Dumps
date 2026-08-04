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
	[Token(Token = "0x6001018")]
	[Address(RVA = "0x4D5FCF0", Offset = "0x4D5FCF0", VA = "0x4D5FCF0")]
	public static bool HasFlag(this Enum value, Enum flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6001019")]
	[Address(RVA = "0x4D5FD60", Offset = "0x4D5FD60", VA = "0x4D5FD60")]
	public static Dictionary<string, Enum> ValuesByNames(Type enumType, bool obsolete = false)
	{
		return null;
	}

	[Token(Token = "0x600101A")]
	public static Dictionary<string, T> ValuesByNames<T>(bool obsolete = false)
	{
		return null;
	}
}
