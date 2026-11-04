// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapDebuggerTypeProxy
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x200012C")]
internal sealed class UnsafeParallelHashMapDebuggerTypeProxy<TKey, TValue> where TKey : struct, IEquatable<TKey> where TValue : struct
{
	[Token(Token = "0x400050E")]
	[FieldOffset(Offset = "0x0")]
	private UnsafeParallelHashMap<TKey, TValue> m_Target;

	[Token(Token = "0x1700017E")]
	public List<Pair<TKey, TValue>> Items
	{
		[Token(Token = "0x6000C9E")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C9D")]
	public UnsafeParallelHashMapDebuggerTypeProxy(UnsafeParallelHashMap<TKey, TValue> target)
	{
	}
}
