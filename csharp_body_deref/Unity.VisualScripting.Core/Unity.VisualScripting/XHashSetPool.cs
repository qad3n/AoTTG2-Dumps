using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000D6")]
public static class XHashSetPool
{
	[Token(Token = "0x6000512")]
	public static HashSet<T> ToHashSetPooled<T>(this IEnumerable<T> source)
	{
		return null;
	}

	[Token(Token = "0x6000513")]
	public static void Free<T>(this HashSet<T> hashSet)
	{
	}
}
