using System.Collections.Generic;
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000050")]
internal static class TMP_ListPool<T>
{
	[Token(Token = "0x40001E8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TMP_ObjectPool<List<T>> s_ListPool;

	[Token(Token = "0x6000297")]
	public static List<T> Get()
	{
		return null;
	}

	[Token(Token = "0x6000298")]
	public static void Release(List<T> toRelease)
	{
	}
}
