// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMapDebuggerTypeProxy
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000139")]
internal sealed class UnsafeParallelMultiHashMapDebuggerTypeProxy<TKey, TValue> where TKey : struct, IEquatable<TKey>, IComparable<TKey> where TValue : struct
{
	[Token(Token = "0x4000523")]
	[FieldOffset(Offset = "0x0")]
	private UnsafeParallelMultiHashMap<TKey, TValue> m_Target;

	[Token(Token = "0x17000194")]
	public List<ListPair<TKey, List<TValue>>> Items
	{
		[Token(Token = "0x6000D7C")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D7A")]
	public UnsafeParallelMultiHashMapDebuggerTypeProxy(UnsafeParallelMultiHashMap<TKey, TValue> target)
	{
	}

	[Token(Token = "0x6000D7B")]
	public static (NativeArray<TKey>, int) GetUniqueKeyArray(ref UnsafeParallelMultiHashMap<TKey, TValue> hashMap, AllocatorManager.AllocatorHandle allocator)
	{
		return default((NativeArray<TKey>, int));
	}
}
