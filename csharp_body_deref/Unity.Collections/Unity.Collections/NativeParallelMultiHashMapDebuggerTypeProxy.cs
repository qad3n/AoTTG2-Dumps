// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeParallelMultiHashMapDebuggerTypeProxy
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x20000B1")]
internal sealed class NativeParallelMultiHashMapDebuggerTypeProxy<TKey, TValue> where TKey : struct, IEquatable<TKey> where TValue : struct
{
	[Token(Token = "0x40003DF")]
	[FieldOffset(Offset = "0x0")]
	private NativeParallelMultiHashMap<TKey, TValue> m_Target;

	[Token(Token = "0x170000FC")]
	public List<ListPair<TKey, List<TValue>>> Items
	{
		[Token(Token = "0x60008C5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008C4")]
	public NativeParallelMultiHashMapDebuggerTypeProxy(NativeParallelMultiHashMap<TKey, TValue> target)
	{
	}
}
