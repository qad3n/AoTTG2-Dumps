// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeParallelHashSetDebuggerTypeProxy
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x20000A9")]
internal sealed class NativeParallelHashSetDebuggerTypeProxy<T> where T : struct, IEquatable<T>
{
	[Token(Token = "0x40003D1")]
	[FieldOffset(Offset = "0x0")]
	private NativeParallelHashSet<T> Data;

	[Token(Token = "0x170000EF")]
	public List<T> Items
	{
		[Token(Token = "0x6000844")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000843")]
	public NativeParallelHashSetDebuggerTypeProxy(NativeParallelHashSet<T> data)
	{
	}
}
