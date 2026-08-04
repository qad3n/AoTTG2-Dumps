// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.TempAllocator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004CD")]
internal class TempAllocator<T> : IDisposable where T : struct
{
	[Token(Token = "0x20004CE")]
	private struct Page
	{
		[Token(Token = "0x4000F89")]
		[FieldOffset(Offset = "0x0")]
		public NativeArray<T> array;

		[Token(Token = "0x4000F8A")]
		[FieldOffset(Offset = "0x0")]
		public int used;
	}

	[Token(Token = "0x4000F83")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_ExcessMinCapacity;

	[Token(Token = "0x4000F84")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_ExcessMaxCapacity;

	[Token(Token = "0x4000F85")]
	[FieldOffset(Offset = "0x0")]
	private Page m_Pool;

	[Token(Token = "0x4000F86")]
	[FieldOffset(Offset = "0x0")]
	private List<Page> m_Excess;

	[Token(Token = "0x4000F87")]
	[FieldOffset(Offset = "0x0")]
	private int m_NextExcessSize;

	[Token(Token = "0x1700078A")]
	protected bool disposed
	{
		[Token(Token = "0x6001DC8")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001DC9")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001DC7")]
	public TempAllocator(int poolCapacity, int excessMinCapacity, int excessMaxCapacity)
	{
	}

	[Token(Token = "0x6001DCA")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001DCB")]
	protected void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001DCC")]
	public NativeSlice<T> Alloc(int count)
	{
		return default(NativeSlice<T>);
	}

	[Token(Token = "0x6001DCD")]
	public void Reset()
	{
	}

	[Token(Token = "0x6001DCE")]
	private void ReleaseExcess()
	{
	}
}
