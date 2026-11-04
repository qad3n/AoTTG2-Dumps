// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeHashSetDebuggerTypeProxy
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

[Token(Token = "0x2000095")]
internal sealed class NativeHashSetDebuggerTypeProxy<T> where T : struct, IEquatable<T>
{
	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0x0")]
	private unsafe HashMapHelper<T>* Data;

	[Token(Token = "0x170000CB")]
	public List<T> Items
	{
		[Token(Token = "0x600078B")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600078A")]
	public NativeHashSetDebuggerTypeProxy(NativeHashSet<T> data)
	{
	}
}
