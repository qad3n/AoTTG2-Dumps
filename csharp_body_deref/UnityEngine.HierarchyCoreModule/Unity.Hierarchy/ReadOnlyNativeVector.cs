// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.ReadOnlyNativeVector
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Hierarchy;

[Token(Token = "0x2000015")]
internal readonly struct ReadOnlyNativeVector<T> where T : struct
{
	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x0")]
	private readonly IntPtr m_Ptr;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_Count;

	[Token(Token = "0x17000008")]
	public int Count
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600004F")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000009")]
	public unsafe ref readonly T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000051")]
		get
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x6000050")]
	public ReadOnlyNativeVector(IntPtr ptr, int size)
	{
	}
}
