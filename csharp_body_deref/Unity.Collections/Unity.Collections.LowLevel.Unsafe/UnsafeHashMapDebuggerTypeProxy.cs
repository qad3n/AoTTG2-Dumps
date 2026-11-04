// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeHashMapDebuggerTypeProxy
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x200010C")]
internal sealed class UnsafeHashMapDebuggerTypeProxy<TKey, TValue> where TKey : struct, IEquatable<TKey> where TValue : struct
{
	[Token(Token = "0x40004C2")]
	[FieldOffset(Offset = "0x0")]
	private HashMapHelper<TKey> Data;

	[Token(Token = "0x1700014F")]
	public List<Pair<TKey, TValue>> Items
	{
		[Token(Token = "0x6000B90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B8E")]
	public UnsafeHashMapDebuggerTypeProxy(UnsafeHashMap<TKey, TValue> target)
	{
	}

	[Token(Token = "0x6000B8F")]
	public UnsafeHashMapDebuggerTypeProxy(UnsafeHashMap<TKey, TValue>.ReadOnly target)
	{
	}
}
