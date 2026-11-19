// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutDataStore
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000605")]
internal struct LayoutDataStore : IDisposable
{
	[Token(Token = "0x2000606")]
	private struct Chunk
	{
		[Token(Token = "0x400166F")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		public unsafe byte* Buffer;
	}

	[Token(Token = "0x2000607")]
	internal struct ComponentDataStore : IDisposable
	{
		[Token(Token = "0x4001670")]
		[FieldOffset(Offset = "0x0")]
		public readonly MemoryLabel MemoryLabel;

		[Token(Token = "0x4001671")]
		[FieldOffset(Offset = "0x10")]
		public int Size;

		[Token(Token = "0x4001672")]
		[FieldOffset(Offset = "0x14")]
		public int ComponentCountPerChunk;

		[Token(Token = "0x4001673")]
		[FieldOffset(Offset = "0x18")]
		public int ChunkCount;

		[Token(Token = "0x4001674")]
		[FieldOffset(Offset = "0x20")]
		[NativeDisableUnsafePtrRestriction]
		private unsafe Chunk* m_Chunks;

		[Token(Token = "0x6002C8F")]
		[Address(RVA = "0x6BC4770", Offset = "0x6BC3770", VA = "0x6BC4770")]
		public ComponentDataStore(int size, MemoryLabel allocLabel)
		{
		}

		[Token(Token = "0x6002C90")]
		[Address(RVA = "0x6BC4A60", Offset = "0x6BC3A60", VA = "0x6BC4A60", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6002C91")]
		[Address(RVA = "0x6BC4B50", Offset = "0x6BC3B50", VA = "0x6BC4B50")]
		public unsafe byte* GetComponentDataPtr(int index)
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}

		[Token(Token = "0x6002C92")]
		[Address(RVA = "0x6BC5000", Offset = "0x6BC4000", VA = "0x6BC5000")]
		public void ResizeCapacity(int capacity)
		{
		}
	}

	[Token(Token = "0x2000608")]
	private struct Data
	{
		[Token(Token = "0x4001675")]
		[FieldOffset(Offset = "0x0")]
		public int Capacity;

		[Token(Token = "0x4001676")]
		[FieldOffset(Offset = "0x4")]
		public int NextFreeIndex;

		[Token(Token = "0x4001677")]
		[FieldOffset(Offset = "0x8")]
		public int ComponentCount;

		[Token(Token = "0x4001678")]
		[FieldOffset(Offset = "0x10")]
		[NativeDisableUnsafePtrRestriction]
		public unsafe int* Versions;

		[Token(Token = "0x4001679")]
		[FieldOffset(Offset = "0x18")]
		[NativeDisableUnsafePtrRestriction]
		public unsafe ComponentDataStore* Components;
	}

	[Token(Token = "0x400166C")]
	private const int k_ChunkSize = 32768;

	[Token(Token = "0x400166D")]
	[FieldOffset(Offset = "0x0")]
	private readonly MemoryLabel m_MemoryLabel;

	[Token(Token = "0x400166E")]
	[FieldOffset(Offset = "0x10")]
	[NativeDisableUnsafePtrRestriction]
	private unsafe Data* m_Data;

	[Token(Token = "0x6002C82")]
	[Address(RVA = "0x6BC4490", Offset = "0x6BC3490", VA = "0x6BC4490")]
	public LayoutDataStore(ComponentType[] components, ReadOnlySpan<MemoryLabel> labels, int initialCapacity, Allocator allocator)
	{
	}

	[Token(Token = "0x6002C83")]
	[Address(RVA = "0x6BC4930", Offset = "0x6BC3930", VA = "0x6BC4930", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002C84")]
	[Address(RVA = "0x6BC4AE0", Offset = "0x6BC3AE0", VA = "0x6BC4AE0")]
	public bool Exists(in LayoutHandle handle)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C85")]
	[Address(RVA = "0x6BC4B10", Offset = "0x6BC3B10", VA = "0x6BC4B10")]
	internal unsafe readonly void* GetComponentDataPtr(int index, int componentIndex)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6002C86")]
	[Address(RVA = "0x6BC4B80", Offset = "0x6BC3B80", VA = "0x6BC4B80")]
	private unsafe LayoutHandle Allocate(byte** data, int count)
	{
		return default(LayoutHandle);
	}

	[Token(Token = "0x6002C87")]
	[Address(RVA = "0x6BC4DD0", Offset = "0x6BC3DD0", VA = "0x6BC4DD0")]
	public void Free(in LayoutHandle handle)
	{
	}

	[Token(Token = "0x6002C88")]
	[Address(RVA = "0x6BC4EE0", Offset = "0x6BC3EE0", VA = "0x6BC4EE0")]
	private unsafe static void SetNextFreeIndex(ComponentDataStore* ptr, int index, int value)
	{
	}

	[Token(Token = "0x6002C89")]
	[Address(RVA = "0x6BC4D70", Offset = "0x6BC3D70", VA = "0x6BC4D70")]
	private unsafe static int GetNextFreeIndex(ComponentDataStore* ptr, int index)
	{
		return default(int);
	}

	[Token(Token = "0x6002C8A")]
	[Address(RVA = "0x6BC4DA0", Offset = "0x6BC3DA0", VA = "0x6BC4DA0")]
	private void IncreaseCapacity()
	{
	}

	[Token(Token = "0x6002C8B")]
	[Address(RVA = "0x6BC47A0", Offset = "0x6BC37A0", VA = "0x6BC47A0")]
	private void ResizeCapacity(int capacity)
	{
	}

	[Token(Token = "0x6002C8C")]
	[Address(RVA = "0x6BC4F10", Offset = "0x6BC3F10", VA = "0x6BC4F10")]
	private unsafe static void* ResizeArray(void* fromPtr, long fromCount, long toCount, long size, int align, MemoryLabel label)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6002C8D")]
	public LayoutHandle Allocate<T0>(in T0 component0) where T0 : struct
	{
		return default(LayoutHandle);
	}

	[Token(Token = "0x6002C8E")]
	public LayoutHandle Allocate<T0, T1, T2, T3>(in T0 component0, in T1 component1, in T2 component2, in T3 component3) where T0 : struct where T1 : struct where T2 : struct where T3 : struct
	{
		return default(LayoutHandle);
	}
}
