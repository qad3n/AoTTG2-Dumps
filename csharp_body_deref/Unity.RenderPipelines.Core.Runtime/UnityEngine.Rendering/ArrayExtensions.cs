using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Jobs;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000195")]
public static class ArrayExtensions
{
	[Token(Token = "0x6000BA2")]
	public static void ResizeArray<T>(this ref NativeArray<T> array, int capacity) where T : struct
	{
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x48C9530", Offset = "0x48C9530", VA = "0x48C9530")]
	public static void ResizeArray(this ref TransformAccessArray array, int capacity)
	{
	}

	[Token(Token = "0x6000BA4")]
	public static void ResizeArray<T>(ref T[] array, int capacity)
	{
	}
}
