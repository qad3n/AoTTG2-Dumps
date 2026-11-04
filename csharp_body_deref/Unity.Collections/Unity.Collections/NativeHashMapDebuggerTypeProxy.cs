// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeHashMapDebuggerTypeProxy
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x2000091")]
internal sealed class NativeHashMapDebuggerTypeProxy<TKey, TValue> where TKey : struct, IEquatable<TKey> where TValue : struct
{
	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x0")]
	private unsafe HashMapHelper<TKey>* Data;

	[Token(Token = "0x170000C0")]
	public List<Pair<TKey, TValue>> Items
	{
		[Token(Token = "0x6000765")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000763")]
	public NativeHashMapDebuggerTypeProxy(NativeHashMap<TKey, TValue> target)
	{
	}

	[Token(Token = "0x6000764")]
	public NativeHashMapDebuggerTypeProxy(NativeHashMap<TKey, TValue>.ReadOnly target)
	{
	}
}
