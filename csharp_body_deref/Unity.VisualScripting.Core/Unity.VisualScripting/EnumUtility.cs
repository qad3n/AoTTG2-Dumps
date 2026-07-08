using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001A4")]
public static class EnumUtility
{
	[Token(Token = "0x6001018")]
	[Address(RVA = "0x4A3AE90", Offset = "0x4A3AE90", VA = "0x4A3AE90")]
	public static bool HasFlag(this Enum value, Enum flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6001019")]
	[Address(RVA = "0x4A3AF00", Offset = "0x4A3AF00", VA = "0x4A3AF00")]
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
