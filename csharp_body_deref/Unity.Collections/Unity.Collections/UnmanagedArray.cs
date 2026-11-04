// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.UnmanagedArray
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x20000D5")]
internal struct UnmanagedArray<T> : IDisposable where T : struct
{
	[Token(Token = "0x4000417")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr m_pointer;

	[Token(Token = "0x4000418")]
	[FieldOffset(Offset = "0x0")]
	private int m_length;

	[Token(Token = "0x4000419")]
	[FieldOffset(Offset = "0x0")]
	private AllocatorManager.AllocatorHandle m_allocator;

	[Token(Token = "0x1700011E")]
	public int Length
	{
		[Token(Token = "0x60009F5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700011F")]
	public unsafe ref T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60009F9")]
		get
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x60009F6")]
	public UnmanagedArray(int length, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x60009F7")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60009F8")]
	public unsafe T* GetUnsafePointer()
	{
		//IL_0002: Expected I, but got O
		return (T*)unchecked((nint)null);
	}
}
