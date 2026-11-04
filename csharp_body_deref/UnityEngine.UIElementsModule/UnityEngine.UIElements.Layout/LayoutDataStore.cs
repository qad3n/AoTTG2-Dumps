// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutDataStore
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x31B89C0", Offset = "0x31B6FC0", VA = "0x1831B89C0")]
		public ComponentDataStore(int size, MemoryLabel allocLabel)
		{
		}

		[Token(Token = "0x6002C90")]
		[Address(RVA = "0x31B86D0", Offset = "0x31B6CD0", VA = "0x1831B86D0", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6002C91")]
		[Address(RVA = "0x31B8760", Offset = "0x31B6D60", VA = "0x1831B8760")]
		public unsafe byte* GetComponentDataPtr(int index)
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}

		[Token(Token = "0x6002C92")]
		[Address(RVA = "0x31B8790", Offset = "0x31B6D90", VA = "0x1831B8790")]
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
	[Address(RVA = "0x31BDD80", Offset = "0x31BC380", VA = "0x1831BDD80")]
	public LayoutDataStore(ComponentType[] components, ReadOnlySpan<MemoryLabel> labels, int initialCapacity, Allocator allocator)
	{
	}

	[Token(Token = "0x6002C83")]
	[Address(RVA = "0x31BD6D0", Offset = "0x31BBCD0", VA = "0x1831BD6D0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002C84")]
	[Address(RVA = "0x31BD830", Offset = "0x31BBE30", VA = "0x1831BD830")]
	public bool Exists(in LayoutHandle handle)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C85")]
	[Address(RVA = "0x31BD9B0", Offset = "0x31BBFB0", VA = "0x1831BD9B0")]
	internal unsafe readonly void* GetComponentDataPtr(int index, int componentIndex)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6002C86")]
	[Address(RVA = "0x31BD470", Offset = "0x31BBA70", VA = "0x1831BD470")]
	private unsafe LayoutHandle Allocate(byte** data, int count)
	{
		return default(LayoutHandle);
	}

	[Token(Token = "0x6002C87")]
	[Address(RVA = "0x31BD870", Offset = "0x31BBE70", VA = "0x1831BD870")]
	public void Free(in LayoutHandle handle)
	{
	}

	[Token(Token = "0x6002C88")]
	[Address(RVA = "0x31BDD40", Offset = "0x31BC340", VA = "0x1831BDD40")]
	private unsafe static void SetNextFreeIndex(ComponentDataStore* ptr, int index, int value)
	{
	}

	[Token(Token = "0x6002C89")]
	[Address(RVA = "0x31BDA00", Offset = "0x31BC000", VA = "0x1831BDA00")]
	private unsafe static int GetNextFreeIndex(ComponentDataStore* ptr, int index)
	{
		return default(int);
	}

	[Token(Token = "0x6002C8A")]
	[Address(RVA = "0x31BDA40", Offset = "0x31BC040", VA = "0x1831BDA40")]
	private void IncreaseCapacity()
	{
	}

	[Token(Token = "0x6002C8B")]
	[Address(RVA = "0x31BDB60", Offset = "0x31BC160", VA = "0x1831BDB60")]
	private void ResizeCapacity(int capacity)
	{
	}

	[Token(Token = "0x6002C8C")]
	[Address(RVA = "0x31BDA80", Offset = "0x31BC080", VA = "0x1831BDA80")]
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
