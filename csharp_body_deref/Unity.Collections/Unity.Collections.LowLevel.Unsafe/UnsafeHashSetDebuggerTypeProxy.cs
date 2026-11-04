// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeHashSetDebuggerTypeProxy
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000110")]
internal sealed class UnsafeHashSetDebuggerTypeProxy<T> where T : struct, IEquatable<T>
{
	[Token(Token = "0x40004C7")]
	[FieldOffset(Offset = "0x0")]
	private HashMapHelper<T> Data;

	[Token(Token = "0x1700015A")]
	public List<T> Items
	{
		[Token(Token = "0x6000BB3")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BB2")]
	public UnsafeHashSetDebuggerTypeProxy(UnsafeHashSet<T> data)
	{
	}
}
