using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000D2")]
public static class XArrayPool
{
	[Token(Token = "0x6000507")]
	public static T[] ToArrayPooled<T>(this IEnumerable<T> source)
	{
		return null;
	}

	[Token(Token = "0x6000508")]
	public static void Free<T>(this T[] array)
	{
	}
}
