using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000D9")]
public static class XListPool
{
	[Token(Token = "0x6000519")]
	public static List<T> ToListPooled<T>(this IEnumerable<T> source)
	{
		return null;
	}

	[Token(Token = "0x600051A")]
	public static void Free<T>(this List<T> list)
	{
	}
}
