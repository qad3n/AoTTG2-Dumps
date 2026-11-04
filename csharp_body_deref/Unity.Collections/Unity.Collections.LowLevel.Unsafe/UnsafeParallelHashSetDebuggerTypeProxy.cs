// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashSetDebuggerTypeProxy
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000132")]
internal sealed class UnsafeParallelHashSetDebuggerTypeProxy<T> where T : struct, IEquatable<T>
{
	[Token(Token = "0x4000516")]
	[FieldOffset(Offset = "0x0")]
	private UnsafeParallelHashSet<T> Data;

	[Token(Token = "0x17000188")]
	public List<T> Items
	{
		[Token(Token = "0x6000CC4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CC3")]
	public UnsafeParallelHashSetDebuggerTypeProxy(UnsafeParallelHashSet<T> data)
	{
	}
}
