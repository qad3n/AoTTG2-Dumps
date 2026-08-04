// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ArrayExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4BEE5A0", Offset = "0x4BEE5A0", VA = "0x4BEE5A0")]
	public static void ResizeArray(this ref TransformAccessArray array, int capacity)
	{
	}

	[Token(Token = "0x6000BA4")]
	public static void ResizeArray<T>(ref T[] array, int capacity)
	{
	}
}
