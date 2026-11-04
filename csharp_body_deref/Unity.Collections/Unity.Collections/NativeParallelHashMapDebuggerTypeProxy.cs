// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeParallelHashMapDebuggerTypeProxy
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

[Token(Token = "0x20000A3")]
internal sealed class NativeParallelHashMapDebuggerTypeProxy<TKey, TValue> where TKey : struct, IEquatable<TKey> where TValue : struct
{
	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0x0")]
	private UnsafeParallelHashMap<TKey, TValue> m_Target;

	[Token(Token = "0x170000E5")]
	public List<Pair<TKey, TValue>> Items
	{
		[Token(Token = "0x6000817")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000815")]
	public NativeParallelHashMapDebuggerTypeProxy(NativeParallelHashMap<TKey, TValue> target)
	{
	}

	[Token(Token = "0x6000816")]
	internal NativeParallelHashMapDebuggerTypeProxy(NativeParallelHashMap<TKey, TValue>.ReadOnly target)
	{
	}
}
