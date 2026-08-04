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
		[Address(RVA = "0x4FBB820", Offset = "0x4FBB820", VA = "0x4FBB820")]
		public ComponentDataStore(int size, Allocator allocator)
		{
		}

		[Token(Token = "0x6001F47")]
		[Address(RVA = "0x4FBB9D0", Offset = "0x4FBB9D0", VA = "0x4FBB9D0", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6001F48")]
		[Address(RVA = "0x4FBBAB0", Offset = "0x4FBBAB0", VA = "0x4FBBAB0")]
		public unsafe byte* GetComponentDataPtr(int index)
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}

		[Token(Token = "0x6001F49")]
		[Address(RVA = "0x4FBBD80", Offset = "0x4FBBD80", VA = "0x4FBBD80")]
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
		[Address(RVA = "0x4FBB320", Offset = "0x4FBB320", VA = "0x4FBB320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001F39")]
	[Address(RVA = "0x4FB5140", Offset = "0x4FB5140", VA = "0x4FB5140")]
	public LayoutDataStore(ComponentType[] components, int initialCapacity, Allocator allocator)
	{
	}

	[Token(Token = "0x6001F3A")]
	[Address(RVA = "0x4FB5430", Offset = "0x4FB5430", VA = "0x4FB5430", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001F3B")]
	[Address(RVA = "0x4FBBA40", Offset = "0x4FBBA40", VA = "0x4FBBA40")]
	public bool Exists(in LayoutHandle handle)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F3C")]
	[Address(RVA = "0x4FBBA70", Offset = "0x4FBBA70", VA = "0x4FBBA70")]
	internal unsafe readonly void* GetComponentDataPtr(int index, int componentIndex)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6001F3D")]
	[Address(RVA = "0x4FBBAE0", Offset = "0x4FBBAE0", VA = "0x4FBBAE0")]
	private unsafe LayoutHandle Allocate(byte** data, int count)
	{
		return default(LayoutHandle);
	}

	[Token(Token = "0x6001F3E")]
	[Address(RVA = "0x4FB5660", Offset = "0x4FB5660", VA = "0x4FB5660")]
	public void Free(in LayoutHandle handle)
	{
	}

	[Token(Token = "0x6001F3F")]
	[Address(RVA = "0x4FBBC80", Offset = "0x4FBBC80", VA = "0x4FBBC80")]
	private unsafe static void SetNextFreeIndex(ComponentDataStore* ptr, int index, int value)
	{
	}

	[Token(Token = "0x6001F40")]
	[Address(RVA = "0x4FBBC20", Offset = "0x4FBBC20", VA = "0x4FBBC20")]
	private unsafe static int GetNextFreeIndex(ComponentDataStore* ptr, int index)
	{
		return default(int);
	}

	[Token(Token = "0x6001F41")]
	[Address(RVA = "0x4FBBC50", Offset = "0x4FBBC50", VA = "0x4FBBC50")]
	private void IncreaseCapacity()
	{
	}

	[Token(Token = "0x6001F42")]
	[Address(RVA = "0x4FBB850", Offset = "0x4FBB850", VA = "0x4FBB850")]
	private void ResizeCapacity(int capacity)
	{
	}

	[Token(Token = "0x6001F43")]
	[Address(RVA = "0x4FBBCB0", Offset = "0x4FBBCB0", VA = "0x4FBBCB0")]
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
