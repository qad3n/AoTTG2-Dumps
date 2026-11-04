// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeKeyValueArrays
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Jobs;

namespace Unity.Collections;

[Token(Token = "0x200009E")]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
{
	typeof(int),
	typeof(int)
})]
public struct NativeKeyValueArrays<TKey, TValue> : INativeDisposable, IDisposable where TKey : struct where TValue : struct
{
	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x0")]
	public NativeArray<TKey> Keys;

	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x0")]
	public NativeArray<TValue> Values;

	[Token(Token = "0x170000D7")]
	public int Length
	{
		[Token(Token = "0x60007DA")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60007DB")]
	public NativeKeyValueArrays(int length, AllocatorManager.AllocatorHandle allocator, NativeArrayOptions options)
	{
	}

	[Token(Token = "0x60007DC")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60007DD")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}
}
