// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapDataEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000126")]
internal struct UnsafeParallelHashMapDataEnumerator
{
	[Token(Token = "0x4000501")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe UnsafeParallelHashMapData* m_Buffer;

	[Token(Token = "0x4000502")]
	[FieldOffset(Offset = "0x8")]
	internal int m_Index;

	[Token(Token = "0x4000503")]
	[FieldOffset(Offset = "0xC")]
	internal int m_BucketIndex;

	[Token(Token = "0x4000504")]
	[FieldOffset(Offset = "0x10")]
	internal int m_NextIndex;

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x638D960", Offset = "0x638C960", VA = "0x638D960")]
	internal unsafe UnsafeParallelHashMapDataEnumerator(UnsafeParallelHashMapData* data)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x638D980", Offset = "0x638C980", VA = "0x638D980")]
	internal bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x638DA10", Offset = "0x638CA10", VA = "0x638DA10")]
	internal void Reset()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C66")]
	internal KeyValue<TKey, TValue> GetCurrent<TKey, TValue>() where TKey : struct, IEquatable<TKey> where TValue : struct
	{
		return default(KeyValue<TKey, TValue>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C67")]
	internal TKey GetCurrentKey<TKey>() where TKey : struct, IEquatable<TKey>
	{
		return (TKey)null;
	}
}
