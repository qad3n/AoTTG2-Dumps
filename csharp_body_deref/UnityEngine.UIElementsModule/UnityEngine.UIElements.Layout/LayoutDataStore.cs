using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x200050E")]
internal struct LayoutDataStore : IDisposable
{
	[Token(Token = "0x200050F")]
	private struct Chunk
	{
		[Token(Token = "0x40010D8")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		public unsafe byte* Buffer;
	}

	[Token(Token = "0x2000510")]
	private struct ComponentDataStore : IDisposable
	{
		[Token(Token = "0x40010D9")]
		[FieldOffset(Offset = "0x0")]
		public Allocator Allocator;

		[Token(Token = "0x40010DA")]
		[FieldOffset(Offset = "0x4")]
		public int Size;

		[Token(Token = "0x40010DB")]
		[FieldOffset(Offset = "0x8")]
		public int ComponentCountPerChunk;

		[Token(Token = "0x40010DC")]
		[FieldOffset(Offset = "0xC")]
		public int ChunkCount;

		[Token(Token = "0x40010DD")]
		[FieldOffset(Offset = "0x10")]
		[NativeDisableUnsafePtrRestriction]
		private unsafe Chunk* m_Chunks;

		[Token(Token = "0x6001F46")]
		[Address(RVA = "0x4C93EF0", Offset = "0x4C93EF0", VA = "0x4C93EF0")]
		public ComponentDataStore(int size, Allocator allocator)
		{
		}

		[Token(Token = "0x6001F47")]
		[Address(RVA = "0x4C940A0", Offset = "0x4C940A0", VA = "0x4C940A0", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6001F48")]
		[Address(RVA = "0x4C94180", Offset = "0x4C94180", VA = "0x4C94180")]
		public unsafe byte* GetComponentDataPtr(int index)
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}

		[Token(Token = "0x6001F49")]
		[Address(RVA = "0x4C94450", Offset = "0x4C94450", VA = "0x4C94450")]
		public void ResizeCapacity(int capacity)
		{
		}
	}

	[Token(Token = "0x2000511")]
	private struct Data
	{
		[Token(Token = "0x40010DE")]
		[FieldOffset(Offset = "0x0")]
		public int Capacity;

		[Token(Token = "0x40010DF")]
		[FieldOffset(Offset = "0x4")]
		public int NextFreeIndex;

		[Token(Token = "0x40010E0")]
		[FieldOffset(Offset = "0x8")]
		public int ComponentCount;

		[Token(Token = "0x40010E1")]
		[FieldOffset(Offset = "0x10")]
		[NativeDisableUnsafePtrRestriction]
		public unsafe int* Versions;

		[Token(Token = "0x40010E2")]
		[FieldOffset(Offset = "0x18")]
		[NativeDisableUnsafePtrRestriction]
		public unsafe ComponentDataStore* Components;
	}

	[Token(Token = "0x40010D5")]
	private const int k_ChunkSize = 32768;

	[Token(Token = "0x40010D6")]
	[FieldOffset(Offset = "0x0")]
	private readonly Allocator m_Allocator;

	[Token(Token = "0x40010D7")]
	[FieldOffset(Offset = "0x8")]
	[NativeDisableUnsafePtrRestriction]
	private unsafe Data* m_Data;

	[Token(Token = "0x170007F3")]
	public bool IsValid
	{
		[Token(Token = "0x6001F38")]
		[Address(RVA = "0x4C939F0", Offset = "0x4C939F0", VA = "0x4C939F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001F39")]
	[Address(RVA = "0x4C8D810", Offset = "0x4C8D810", VA = "0x4C8D810")]
	public LayoutDataStore(ComponentType[] components, int initialCapacity, Allocator allocator)
	{
	}

	[Token(Token = "0x6001F3A")]
	[Address(RVA = "0x4C8DB00", Offset = "0x4C8DB00", VA = "0x4C8DB00", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001F3B")]
	[Address(RVA = "0x4C94110", Offset = "0x4C94110", VA = "0x4C94110")]
	public bool Exists(in LayoutHandle handle)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F3C")]
	[Address(RVA = "0x4C94140", Offset = "0x4C94140", VA = "0x4C94140")]
	internal unsafe readonly void* GetComponentDataPtr(int index, int componentIndex)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6001F3D")]
	[Address(RVA = "0x4C941B0", Offset = "0x4C941B0", VA = "0x4C941B0")]
	private unsafe LayoutHandle Allocate(byte** data, int count)
	{
		return default(LayoutHandle);
	}

	[Token(Token = "0x6001F3E")]
	[Address(RVA = "0x4C8DD30", Offset = "0x4C8DD30", VA = "0x4C8DD30")]
	public void Free(in LayoutHandle handle)
	{
	}

	[Token(Token = "0x6001F3F")]
	[Address(RVA = "0x4C94350", Offset = "0x4C94350", VA = "0x4C94350")]
	private unsafe static void SetNextFreeIndex(ComponentDataStore* ptr, int index, int value)
	{
	}

	[Token(Token = "0x6001F40")]
	[Address(RVA = "0x4C942F0", Offset = "0x4C942F0", VA = "0x4C942F0")]
	private unsafe static int GetNextFreeIndex(ComponentDataStore* ptr, int index)
	{
		return default(int);
	}

	[Token(Token = "0x6001F41")]
	[Address(RVA = "0x4C94320", Offset = "0x4C94320", VA = "0x4C94320")]
	private void IncreaseCapacity()
	{
	}

	[Token(Token = "0x6001F42")]
	[Address(RVA = "0x4C93F20", Offset = "0x4C93F20", VA = "0x4C93F20")]
	private void ResizeCapacity(int capacity)
	{
	}

	[Token(Token = "0x6001F43")]
	[Address(RVA = "0x4C94380", Offset = "0x4C94380", VA = "0x4C94380")]
	private unsafe static void* ResizeArray(void* fromPtr, long fromCount, long toCount, long size, int align, Allocator allocator)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6001F44")]
	public LayoutHandle Allocate<T0>(in T0 component0) where T0 : struct
	{
		return default(LayoutHandle);
	}

	[Token(Token = "0x6001F45")]
	public LayoutHandle Allocate<T0, T1, T2, T3, T4, T5, T6>(in T0 component0, in T1 component1, in T2 component2, in T3 component3, in T4 component4, in T5 component5, in T6 component6) where T0 : struct where T1 : struct where T2 : struct where T3 : struct where T4 : struct where T5 : struct where T6 : struct
	{
		return default(LayoutHandle);
	}
}
