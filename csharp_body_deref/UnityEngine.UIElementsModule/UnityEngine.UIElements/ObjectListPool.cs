using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000461")]
internal class ObjectListPool<T>
{
	[Token(Token = "0x4000D28")]
	[FieldOffset(Offset = "0x0")]
	private static ObjectPool<List<T>> pool;

	[Token(Token = "0x6001B78")]
	public static List<T> Get()
	{
		return null;
	}

	[Token(Token = "0x6001B79")]
	public static void Release(List<T> elements)
	{
	}
}
