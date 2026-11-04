// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ArrayExtensions
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Jobs;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001AC")]
public static class ArrayExtensions
{
	[Token(Token = "0x6000CBA")]
	public static void ResizeArray<T>(this ref NativeArray<T> array, int capacity) where T : struct
	{
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x2B34BF0", Offset = "0x2B331F0", VA = "0x182B34BF0")]
	public static void ResizeArray(this ref TransformAccessArray array, int capacity)
	{
	}

	[Token(Token = "0x6000CBC")]
	public static void ResizeArray<T>(ref T[] array, int capacity)
	{
	}

	[Token(Token = "0x6000CBD")]
	public static void FillArray<T>(this ref NativeArray<T> array, in T value, int startIndex = 0, int length = -1) where T : struct
	{
	}
}
