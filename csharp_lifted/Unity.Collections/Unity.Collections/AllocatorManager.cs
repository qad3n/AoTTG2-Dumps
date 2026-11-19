// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.AllocatorManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using AOT;
using Il2CppDummyDll;
using Unity.Burst;

namespace Unity.Collections;

[Token(Token = "0x2000018")]
public static class AllocatorManager
{
	[Token(Token = "0x2000019")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	public delegate int TryFunction(IntPtr allocatorState, ref Block block);

	[Token(Token = "0x200001A")]
	public struct AllocatorHandle : IAllocator, IDisposable, IEquatable<AllocatorHandle>, IComparable<AllocatorHandle>
	{
		[Token(Token = "0x4000018")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ushort Index;

		[Token(Token = "0x4000019")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
		public ushort Version;

		[Token(Token = "0x17000001")]
		internal unsafe ref TableEntry TableEntry
		{
			[Token(Token = "0x6000073")]
			[Address(RVA = "0x635A220", Offset = "0x6359220", VA = "0x635A220")]
			get
			{
				return ref *(TableEntry*)null;
			}
		}

		[Token(Token = "0x17000002")]
		internal bool IsInstalled
		{
			[Token(Token = "0x6000074")]
			[Address(RVA = "0x635B220", Offset = "0x635A220", VA = "0x635B220")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000003")]
		public int Value
		{
			[Token(Token = "0x6000079")]
			[Address(RVA = "0x635B330", Offset = "0x635A330", VA = "0x635B330")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000004")]
		public TryFunction Function
		{
			[Token(Token = "0x600007D")]
			[Address(RVA = "0x635B3C0", Offset = "0x635A3C0", VA = "0x635B3C0", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000005")]
		public AllocatorHandle Handle
		{
			[Token(Token = "0x600007F")]
			[Address(RVA = "0x635A460", Offset = "0x6359460", VA = "0x635A460", Slot = "6")]
			get
			{
				return default(AllocatorHandle);
			}
			[Token(Token = "0x6000080")]
			[Address(RVA = "0x635B430", Offset = "0x635A430", VA = "0x635B430", Slot = "7")]
			set
			{
			}
		}

		[Token(Token = "0x17000006")]
		public Allocator ToAllocator
		{
			[Token(Token = "0x6000081")]
			[Address(RVA = "0x635B440", Offset = "0x635A440", VA = "0x635B440", Slot = "8")]
			get
			{
				return default(Allocator);
			}
		}

		[Token(Token = "0x17000007")]
		public bool IsCustomAllocator
		{
			[Token(Token = "0x6000082")]
			[Address(RVA = "0x635B450", Offset = "0x635A450", VA = "0x635B450", Slot = "9")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000008")]
		public bool IsAutoDispose
		{
			[Token(Token = "0x6000083")]
			[Address(RVA = "0x635B460", Offset = "0x635A460", VA = "0x635B460", Slot = "10")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000075")]
		[Address(RVA = "0x635B310", Offset = "0x635A310", VA = "0x635B310")]
		internal void IncrementVersion()
		{
		}

		[Token(Token = "0x6000076")]
		[Address(RVA = "0x635B320", Offset = "0x635A320", VA = "0x635B320")]
		internal void Rewind()
		{
		}

		[Token(Token = "0x6000077")]
		[Address(RVA = "0x635A9B0", Offset = "0x63599B0", VA = "0x635A9B0")]
		internal void Install(TableEntry tableEntry)
		{
		}

		[Token(Token = "0x6000078")]
		[Address(RVA = "0x635A5D0", Offset = "0x63595D0", VA = "0x635A5D0")]
		public static implicit operator AllocatorHandle(Allocator a)
		{
			return default(AllocatorHandle);
		}

		[Token(Token = "0x600007A")]
		public int TryAllocateBlock<T>(out Block block, int items) where T : struct
		{
			return default(int);
		}

		[Token(Token = "0x600007B")]
		public Block AllocateBlock<T>(int items) where T : struct
		{
			return default(Block);
		}

		[Token(Token = "0x600007C")]
		[Address(RVA = "0x635B340", Offset = "0x635A340", VA = "0x635B340")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private static void CheckAllocatedSuccessfully(int error)
		{
		}

		[Token(Token = "0x600007E")]
		[Address(RVA = "0x635B3D0", Offset = "0x635A3D0", VA = "0x635B3D0", Slot = "5")]
		public int Try(ref Block block)
		{
			return default(int);
		}

		[Token(Token = "0x6000084")]
		[Address(RVA = "0x635B510", Offset = "0x635A510", VA = "0x635B510", Slot = "11")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000085")]
		[Address(RVA = "0x635B5A0", Offset = "0x635A5A0", VA = "0x635B5A0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000086")]
		[Address(RVA = "0x635B620", Offset = "0x635A620", VA = "0x635B620", Slot = "12")]
		public bool Equals(AllocatorHandle other)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x635B630", Offset = "0x635A630", VA = "0x635B630")]
		public bool Equals(Allocator other)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000088")]
		[Address(RVA = "0x635B640", Offset = "0x635A640", VA = "0x635B640", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000089")]
		[Address(RVA = "0x635B650", Offset = "0x635A650", VA = "0x635B650")]
		public static bool operator ==(AllocatorHandle lhs, AllocatorHandle rhs)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600008A")]
		[Address(RVA = "0x635B660", Offset = "0x635A660", VA = "0x635B660")]
		public static bool operator !=(AllocatorHandle lhs, AllocatorHandle rhs)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x635B670", Offset = "0x635A670", VA = "0x635B670")]
		public static bool operator <(AllocatorHandle lhs, AllocatorHandle rhs)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x635B680", Offset = "0x635A680", VA = "0x635B680")]
		public static bool operator >(AllocatorHandle lhs, AllocatorHandle rhs)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x635B690", Offset = "0x635A690", VA = "0x635B690")]
		public static bool operator <=(AllocatorHandle lhs, AllocatorHandle rhs)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x635B6A0", Offset = "0x635A6A0", VA = "0x635B6A0")]
		public static bool operator >=(AllocatorHandle lhs, AllocatorHandle rhs)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x635B6B0", Offset = "0x635A6B0", VA = "0x635B6B0", Slot = "13")]
		public int CompareTo(AllocatorHandle other)
		{
			return default(int);
		}
	}

	[Token(Token = "0x200001B")]
	public struct BlockHandle
	{
		[Token(Token = "0x400001A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ushort Value;
	}

	[Token(Token = "0x200001C")]
	public struct Range : IDisposable
	{
		[Token(Token = "0x400001B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public IntPtr Pointer;

		[Token(Token = "0x400001C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public int Items;

		[Token(Token = "0x400001D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		public AllocatorHandle Allocator;

		[Token(Token = "0x6000090")]
		[Address(RVA = "0x635B6C0", Offset = "0x635A6C0", VA = "0x635B6C0", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x200001D")]
	public struct Block : IDisposable
	{
		[Token(Token = "0x400001E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Range Range;

		[Token(Token = "0x400001F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public int BytesPerItem;

		[Token(Token = "0x4000020")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		public int AllocatedItems;

		[Token(Token = "0x4000021")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public byte Log2Alignment;

		[Token(Token = "0x4000022")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x19")]
		public byte Padding0;

		[Token(Token = "0x4000023")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1A")]
		public ushort Padding1;

		[Token(Token = "0x4000024")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		public uint Padding2;

		[Token(Token = "0x17000009")]
		public long Bytes
		{
			[Token(Token = "0x6000091")]
			[Address(RVA = "0x635A5B0", Offset = "0x63595B0", VA = "0x635A5B0")]
			get
			{
				return default(long);
			}
		}

		[Token(Token = "0x1700000A")]
		public long AllocatedBytes
		{
			[Token(Token = "0x6000092")]
			[Address(RVA = "0x635B7A0", Offset = "0x635A7A0", VA = "0x635B7A0")]
			get
			{
				return default(long);
			}
		}

		[Token(Token = "0x1700000B")]
		public int Alignment
		{
			[Token(Token = "0x6000093")]
			[Address(RVA = "0x635A5C0", Offset = "0x63595C0", VA = "0x635A5C0")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000094")]
			[Address(RVA = "0x635B7B0", Offset = "0x635A7B0", VA = "0x635B7B0")]
			set
			{
			}
		}

		[Token(Token = "0x6000095")]
		[Address(RVA = "0x635B740", Offset = "0x635A740", VA = "0x635B740", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000096")]
		[Address(RVA = "0x635B850", Offset = "0x635A850", VA = "0x635B850")]
		public int TryAllocate()
		{
			return default(int);
		}

		[Token(Token = "0x6000097")]
		[Address(RVA = "0x635B7F0", Offset = "0x635A7F0", VA = "0x635B7F0")]
		public int TryFree()
		{
			return default(int);
		}

		[Token(Token = "0x6000098")]
		[Address(RVA = "0x635B8B0", Offset = "0x635A8B0", VA = "0x635B8B0")]
		public void Allocate()
		{
		}

		[Token(Token = "0x6000099")]
		[Address(RVA = "0x635B910", Offset = "0x635A910", VA = "0x635B910")]
		public void Free()
		{
		}

		[Token(Token = "0x600009A")]
		[Address(RVA = "0x635B970", Offset = "0x635A970", VA = "0x635B970")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void CheckFailedToAllocate(int error)
		{
		}

		[Token(Token = "0x600009B")]
		[Address(RVA = "0x635BA30", Offset = "0x635AA30", VA = "0x635BA30")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void CheckFailedToFree(int error)
		{
		}
	}

	[Token(Token = "0x200001E")]
	public interface IAllocator : IDisposable
	{
		[Token(Token = "0x1700000C")]
		TryFunction Function
		{
			[Token(Token = "0x600009C")]
			get;
		}

		[Token(Token = "0x1700000D")]
		AllocatorHandle Handle
		{
			[Token(Token = "0x600009E")]
			get;
			[Token(Token = "0x600009F")]
			set;
		}

		[Token(Token = "0x1700000E")]
		Allocator ToAllocator
		{
			[Token(Token = "0x60000A0")]
			get;
		}

		[Token(Token = "0x1700000F")]
		bool IsCustomAllocator
		{
			[Token(Token = "0x60000A1")]
			get;
		}

		[Token(Token = "0x17000010")]
		bool IsAutoDispose
		{
			[Token(Token = "0x60000A2")]
			[Address(RVA = "0x635BAF0", Offset = "0x635AAF0", VA = "0x635BAF0", Slot = "6")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600009D")]
		int Try(ref Block block);
	}

	[Token(Token = "0x200001F")]
	[BurstCompile]
	internal struct StackAllocator : IAllocator, IDisposable
	{
		[Token(Token = "0x2000020")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		internal delegate int Try_000000A9_0024PostfixBurstDelegate(IntPtr allocatorState, ref Block block);

		[Token(Token = "0x2000021")]
		internal static class Try_000000A9_0024BurstDirectCall
		{
			[Token(Token = "0x4000028")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private static IntPtr Pointer;

			[Token(Token = "0x60000B1")]
			[Address(RVA = "0x635BF90", Offset = "0x635AF90", VA = "0x635BF90")]
			[BurstDiscard]
			private static void GetFunctionPointerDiscard(ref IntPtr P_0)
			{
			}

			[Token(Token = "0x60000B2")]
			[Address(RVA = "0x635C0F0", Offset = "0x635B0F0", VA = "0x635C0F0")]
			private static IntPtr GetFunctionPointer()
			{
				return default(IntPtr);
			}

			[Token(Token = "0x60000B3")]
			[Address(RVA = "0x635BC50", Offset = "0x635AC50", VA = "0x635BC50")]
			public static int Invoke(IntPtr allocatorState, ref Block block)
			{
				return default(int);
			}
		}

		[Token(Token = "0x4000025")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal AllocatorHandle m_handle;

		[Token(Token = "0x4000026")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal Block m_storage;

		[Token(Token = "0x4000027")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal long m_top;

		[Token(Token = "0x17000011")]
		public AllocatorHandle Handle
		{
			[Token(Token = "0x60000A3")]
			[Address(RVA = "0x635BB10", Offset = "0x635AB10", VA = "0x635BB10", Slot = "6")]
			get
			{
				return default(AllocatorHandle);
			}
			[Token(Token = "0x60000A4")]
			[Address(RVA = "0x635BB20", Offset = "0x635AB20", VA = "0x635BB20", Slot = "7")]
			set
			{
			}
		}

		[Token(Token = "0x17000012")]
		public Allocator ToAllocator
		{
			[Token(Token = "0x60000A5")]
			[Address(RVA = "0x635BB30", Offset = "0x635AB30", VA = "0x635BB30", Slot = "8")]
			get
			{
				return default(Allocator);
			}
		}

		[Token(Token = "0x17000013")]
		public bool IsCustomAllocator
		{
			[Token(Token = "0x60000A6")]
			[Address(RVA = "0x635BB40", Offset = "0x635AB40", VA = "0x635BB40", Slot = "9")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000014")]
		public TryFunction Function
		{
			[Token(Token = "0x60000AA")]
			[Address(RVA = "0x635BD00", Offset = "0x635AD00", VA = "0x635BD00", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x635BB50", Offset = "0x635AB50", VA = "0x635BB50")]
		public void Initialize(Block storage)
		{
		}

		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x635BB70", Offset = "0x635AB70", VA = "0x635BB70", Slot = "5")]
		public int Try(ref Block block)
		{
			return default(int);
		}

		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x635BB00", Offset = "0x635AB00", VA = "0x635BB00")]
		[BurstCompile]
		[MonoPInvokeCallback(typeof(TryFunction))]
		public static int Try(IntPtr allocatorState, ref Block block)
		{
			return default(int);
		}

		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x635BDD0", Offset = "0x635ADD0", VA = "0x635BDD0", Slot = "11")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x635BDE0", Offset = "0x635ADE0", VA = "0x635BDE0")]
		[BurstCompile]
		[MonoPInvokeCallback(typeof(TryFunction))]
		internal static int Try_0024BurstManaged(IntPtr allocatorState, ref Block block)
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000022")]
	[BurstCompile]
	internal struct SlabAllocator : IAllocator, IDisposable
	{
		[Token(Token = "0x2000023")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		internal delegate int Try_000000B7_0024PostfixBurstDelegate(IntPtr allocatorState, ref Block block);

		[Token(Token = "0x2000024")]
		internal static class Try_000000B7_0024BurstDirectCall
		{
			[Token(Token = "0x400002F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private static IntPtr Pointer;

			[Token(Token = "0x60000C7")]
			[Address(RVA = "0x635CEF0", Offset = "0x635BEF0", VA = "0x635CEF0")]
			[BurstDiscard]
			private static void GetFunctionPointerDiscard(ref IntPtr P_0)
			{
			}

			[Token(Token = "0x60000C8")]
			[Address(RVA = "0x635D050", Offset = "0x635C050", VA = "0x635D050")]
			private static IntPtr GetFunctionPointer()
			{
				return default(IntPtr);
			}

			[Token(Token = "0x60000C9")]
			[Address(RVA = "0x635CBB0", Offset = "0x635BBB0", VA = "0x635CBB0")]
			public static int Invoke(IntPtr allocatorState, ref Block block)
			{
				return default(int);
			}
		}

		[Token(Token = "0x4000029")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal AllocatorHandle m_handle;

		[Token(Token = "0x400002A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal Block Storage;

		[Token(Token = "0x400002B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal int Log2SlabSizeInBytes;

		[Token(Token = "0x400002C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal FixedList4096Bytes<int> Occupied;

		[Token(Token = "0x400002D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1030")]
		internal long budgetInBytes;

		[Token(Token = "0x400002E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1038")]
		internal long allocatedBytes;

		[Token(Token = "0x17000015")]
		public AllocatorHandle Handle
		{
			[Token(Token = "0x60000B4")]
			[Address(RVA = "0x635C120", Offset = "0x635B120", VA = "0x635C120", Slot = "6")]
			get
			{
				return default(AllocatorHandle);
			}
			[Token(Token = "0x60000B5")]
			[Address(RVA = "0x635C130", Offset = "0x635B130", VA = "0x635C130", Slot = "7")]
			set
			{
			}
		}

		[Token(Token = "0x17000016")]
		public Allocator ToAllocator
		{
			[Token(Token = "0x60000B6")]
			[Address(RVA = "0x635C140", Offset = "0x635B140", VA = "0x635C140", Slot = "8")]
			get
			{
				return default(Allocator);
			}
		}

		[Token(Token = "0x17000017")]
		public bool IsCustomAllocator
		{
			[Token(Token = "0x60000B7")]
			[Address(RVA = "0x635C150", Offset = "0x635B150", VA = "0x635C150", Slot = "9")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000018")]
		public long BudgetInBytes
		{
			[Token(Token = "0x60000B8")]
			[Address(RVA = "0x635C160", Offset = "0x635B160", VA = "0x635C160")]
			get
			{
				return default(long);
			}
		}

		[Token(Token = "0x17000019")]
		public long AllocatedBytes
		{
			[Token(Token = "0x60000B9")]
			[Address(RVA = "0x635C170", Offset = "0x635B170", VA = "0x635C170")]
			get
			{
				return default(long);
			}
		}

		[Token(Token = "0x1700001A")]
		internal int SlabSizeInBytes
		{
			[Token(Token = "0x60000BA")]
			[Address(RVA = "0x635C180", Offset = "0x635B180", VA = "0x635C180")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60000BB")]
			[Address(RVA = "0x635C190", Offset = "0x635B190", VA = "0x635C190")]
			set
			{
			}
		}

		[Token(Token = "0x1700001B")]
		internal int Slabs
		{
			[Token(Token = "0x60000BC")]
			[Address(RVA = "0x635C1E0", Offset = "0x635B1E0", VA = "0x635C1E0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700001C")]
		public TryFunction Function
		{
			[Token(Token = "0x60000C0")]
			[Address(RVA = "0x635CC60", Offset = "0x635BC60", VA = "0x635CC60", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x635C200", Offset = "0x635B200", VA = "0x635C200")]
		internal void Initialize(Block storage, int slabSizeInBytes, long budget)
		{
		}

		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x635C2F0", Offset = "0x635B2F0", VA = "0x635C2F0", Slot = "5")]
		public int Try(ref Block block)
		{
			return default(int);
		}

		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x635C110", Offset = "0x635B110", VA = "0x635C110")]
		[BurstCompile]
		[MonoPInvokeCallback(typeof(TryFunction))]
		public static int Try(IntPtr allocatorState, ref Block block)
		{
			return default(int);
		}

		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x635CD30", Offset = "0x635BD30", VA = "0x635CD30", Slot = "11")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x635CD40", Offset = "0x635BD40", VA = "0x635CD40")]
		[BurstCompile]
		[MonoPInvokeCallback(typeof(TryFunction))]
		internal static int Try_0024BurstManaged(IntPtr allocatorState, ref Block block)
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000025")]
	internal struct TableEntry
	{
		[Token(Token = "0x4000030")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal IntPtr function;

		[Token(Token = "0x4000031")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal IntPtr state;
	}

	[Token(Token = "0x2000026")]
	internal struct Array16<T> where T : struct
	{
		[Token(Token = "0x4000032")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal T f0;

		[Token(Token = "0x4000033")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal T f1;

		[Token(Token = "0x4000034")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal T f2;

		[Token(Token = "0x4000035")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal T f3;

		[Token(Token = "0x4000036")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal T f4;

		[Token(Token = "0x4000037")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal T f5;

		[Token(Token = "0x4000038")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal T f6;

		[Token(Token = "0x4000039")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal T f7;

		[Token(Token = "0x400003A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal T f8;

		[Token(Token = "0x400003B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal T f9;

		[Token(Token = "0x400003C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal T f10;

		[Token(Token = "0x400003D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal T f11;

		[Token(Token = "0x400003E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal T f12;

		[Token(Token = "0x400003F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal T f13;

		[Token(Token = "0x4000040")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal T f14;

		[Token(Token = "0x4000041")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal T f15;
	}

	[Token(Token = "0x2000027")]
	internal struct Array256<T> where T : struct
	{
		[Token(Token = "0x4000042")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array16<T> f0;

		[Token(Token = "0x4000043")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array16<T> f1;

		[Token(Token = "0x4000044")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array16<T> f2;

		[Token(Token = "0x4000045")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array16<T> f3;

		[Token(Token = "0x4000046")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array16<T> f4;

		[Token(Token = "0x4000047")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array16<T> f5;

		[Token(Token = "0x4000048")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array16<T> f6;

		[Token(Token = "0x4000049")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array16<T> f7;

		[Token(Token = "0x400004A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array16<T> f8;

		[Token(Token = "0x400004B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array16<T> f9;

		[Token(Token = "0x400004C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array16<T> f10;

		[Token(Token = "0x400004D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array16<T> f11;

		[Token(Token = "0x400004E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array16<T> f12;

		[Token(Token = "0x400004F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array16<T> f13;

		[Token(Token = "0x4000050")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array16<T> f14;

		[Token(Token = "0x4000051")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array16<T> f15;
	}

	[Token(Token = "0x2000028")]
	internal struct Array4096<T> where T : struct
	{
		[Token(Token = "0x4000052")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array256<T> f0;

		[Token(Token = "0x4000053")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array256<T> f1;

		[Token(Token = "0x4000054")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array256<T> f2;

		[Token(Token = "0x4000055")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array256<T> f3;

		[Token(Token = "0x4000056")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array256<T> f4;

		[Token(Token = "0x4000057")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array256<T> f5;

		[Token(Token = "0x4000058")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array256<T> f6;

		[Token(Token = "0x4000059")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array256<T> f7;

		[Token(Token = "0x400005A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array256<T> f8;

		[Token(Token = "0x400005B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array256<T> f9;

		[Token(Token = "0x400005C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array256<T> f10;

		[Token(Token = "0x400005D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array256<T> f11;

		[Token(Token = "0x400005E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array256<T> f12;

		[Token(Token = "0x400005F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array256<T> f13;

		[Token(Token = "0x4000060")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array256<T> f14;

		[Token(Token = "0x4000061")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array256<T> f15;
	}

	[Token(Token = "0x2000029")]
	internal struct Array32768<T> : IIndexable<T> where T : struct
	{
		[Token(Token = "0x4000062")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array4096<T> f0;

		[Token(Token = "0x4000063")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array4096<T> f1;

		[Token(Token = "0x4000064")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array4096<T> f2;

		[Token(Token = "0x4000065")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array4096<T> f3;

		[Token(Token = "0x4000066")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array4096<T> f4;

		[Token(Token = "0x4000067")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array4096<T> f5;

		[Token(Token = "0x4000068")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array4096<T> f6;

		[Token(Token = "0x4000069")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Array4096<T> f7;

		[Token(Token = "0x1700001D")]
		public int Length
		{
			[Token(Token = "0x60000CA")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60000CB")]
			set
			{
			}
		}

		[Token(Token = "0x60000CC")]
		public unsafe ref T ElementAt(int index)
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x200002A")]
	internal sealed class SharedStatics
	{
		[Token(Token = "0x200002B")]
		internal sealed class IsInstalled
		{
			[Token(Token = "0x400006A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			internal static readonly SharedStatic<Long1024> Ref;

			[Token(Token = "0x60000CE")]
			[Address(RVA = "0x635D080", Offset = "0x635C080", VA = "0x635D080")]
			public IsInstalled()
			{
			}
		}

		[Token(Token = "0x200002C")]
		internal sealed class TableEntry
		{
			[Token(Token = "0x400006B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			internal static readonly SharedStatic<Array32768<AllocatorManager.TableEntry>> Ref;

			[Token(Token = "0x60000D0")]
			[Address(RVA = "0x635D0F0", Offset = "0x635C0F0", VA = "0x635D0F0")]
			public TableEntry()
			{
			}
		}

		[Token(Token = "0x200002D")]
		internal sealed class IsAutoDispose
		{
			[Token(Token = "0x400006C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			internal static readonly SharedStatic<Long1024> Ref;

			[Token(Token = "0x60000D2")]
			[Address(RVA = "0x635D160", Offset = "0x635C160", VA = "0x635D160")]
			public IsAutoDispose()
			{
			}
		}

		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x635D070", Offset = "0x635C070", VA = "0x635D070")]
		public SharedStatics()
		{
		}
	}

	[Token(Token = "0x200002E")]
	internal static class Managed
	{
		[Token(Token = "0x400006D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal static TryFunction[] TryFunctionDelegates;

		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x635AA50", Offset = "0x6359A50", VA = "0x635AA50")]
		[ExcludeFromBurstCompatTesting("Uses managed delegate")]
		public static void RegisterDelegate(int index, TryFunction function)
		{
		}

		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x635D1D0", Offset = "0x635C1D0", VA = "0x635D1D0")]
		[ExcludeFromBurstCompatTesting("Uses managed delegate")]
		public static void UnregisterDelegate(int index)
		{
		}
	}

	[Token(Token = "0x200002F")]
	private static class AllocatorCache<T> where T : struct, IAllocator
	{
		[Token(Token = "0x400006E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static FunctionPointer<TryFunction> TryFunction;

		[Token(Token = "0x400006F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static TryFunction CachedFunction;
	}

	[Token(Token = "0x400000A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly AllocatorHandle Invalid;

	[Token(Token = "0x400000B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public static readonly AllocatorHandle None;

	[Token(Token = "0x400000C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly AllocatorHandle Temp;

	[Token(Token = "0x400000D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public static readonly AllocatorHandle TempJob;

	[Token(Token = "0x400000E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly AllocatorHandle Persistent;

	[Token(Token = "0x400000F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	public static readonly AllocatorHandle AudioKernel;

	[Token(Token = "0x4000010")]
	public const int kErrorNone = 0;

	[Token(Token = "0x4000011")]
	public const int kErrorBufferOverflow = -1;

	[Token(Token = "0x4000012")]
	public const ushort FirstUserIndex = 64;

	[Token(Token = "0x4000013")]
	public const ushort MaxNumCustomAllocators = 32768;

	[Token(Token = "0x4000014")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal static readonly ushort NumGlobalScratchAllocators;

	[Token(Token = "0x4000015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A")]
	internal static readonly ushort MaxNumGlobalAllocators;

	[Token(Token = "0x4000016")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	internal static readonly uint GlobalAllocatorBaseIndex;

	[Token(Token = "0x4000017")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal static readonly uint FirstGlobalScratchpadAllocatorIndex;

	[Token(Token = "0x600004B")]
	internal static Block AllocateBlock<T>(this ref T t, int sizeOf, int alignOf, int items) where T : struct, IAllocator
	{
		return default(Block);
	}

	[Token(Token = "0x600004C")]
	internal static Block AllocateBlock<T, U>(this ref T t, U u, int items) where T : struct, IAllocator where U : struct
	{
		return default(Block);
	}

	[Token(Token = "0x600004D")]
	public unsafe static void* Allocate<T>(this ref T t, int sizeOf, int alignOf, int items = 1) where T : struct, IAllocator
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x600004E")]
	internal unsafe static U* Allocate<T, U>(this ref T t, U u, int items) where T : struct, IAllocator where U : struct
	{
		//IL_0002: Expected I, but got O
		return (U*)unchecked((nint)null);
	}

	[Token(Token = "0x600004F")]
	internal unsafe static void* AllocateStruct<T, U>(this ref T t, U u, int items) where T : struct, IAllocator where U : struct
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000050")]
	internal static void FreeBlock<T>(this ref T t, ref Block block) where T : struct, IAllocator
	{
	}

	[Token(Token = "0x6000051")]
	internal unsafe static void Free<T>(this ref T t, void* pointer, int sizeOf, int alignOf, int items) where T : struct, IAllocator
	{
	}

	[Token(Token = "0x6000052")]
	internal unsafe static void Free<T, U>(this ref T t, U* pointer, int items) where T : struct, IAllocator where U : struct
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x6359F10", Offset = "0x6358F10", VA = "0x6359F10")]
	public unsafe static void* Allocate(AllocatorHandle handle, int itemSizeInBytes, int alignmentInBytes, int items = 1)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000054")]
	public unsafe static T* Allocate<T>(AllocatorHandle handle, int items = 1) where T : struct
	{
		//IL_0002: Expected I, but got O
		return (T*)unchecked((nint)null);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x6359F90", Offset = "0x6358F90", VA = "0x6359F90")]
	public unsafe static void Free(AllocatorHandle handle, void* pointer, int itemSizeInBytes, int alignmentInBytes, int items = 1)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x635A010", Offset = "0x6359010", VA = "0x635A010")]
	public unsafe static void Free(AllocatorHandle handle, void* pointer)
	{
	}

	[Token(Token = "0x6000057")]
	public unsafe static void Free<T>(AllocatorHandle handle, T* pointer, int items = 1) where T : struct
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x635A080", Offset = "0x6359080", VA = "0x635A080")]
	public static AllocatorHandle ConvertToAllocatorHandle(Allocator a)
	{
		return default(AllocatorHandle);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x635A090", Offset = "0x6359090", VA = "0x635A090")]
	[BurstDiscard]
	private static void CheckDelegate(ref bool useDelegate)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x635A0A0", Offset = "0x63590A0", VA = "0x635A0A0")]
	private static bool UseDelegate()
	{
		return default(bool);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x635A0F0", Offset = "0x63590F0", VA = "0x635A0F0")]
	private static int allocate_block(ref Block block)
	{
		return default(int);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x635A2B0", Offset = "0x63592B0", VA = "0x635A2B0")]
	[BurstDiscard]
	private static void forward_mono_allocate_block(ref Block block, ref int error)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x635A470", Offset = "0x6359470", VA = "0x635A470")]
	internal static Allocator LegacyOf(AllocatorHandle handle)
	{
		return default(Allocator);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x635A480", Offset = "0x6359480", VA = "0x635A480")]
	private static int TryLegacy(ref Block block)
	{
		return default(int);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x635A5E0", Offset = "0x63595E0", VA = "0x635A5E0")]
	public static int Try(ref Block block)
	{
		return default(int);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x635A760", Offset = "0x6359760", VA = "0x635A760")]
	public static void Initialize()
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x635A770", Offset = "0x6359770", VA = "0x635A770")]
	internal static void Install(AllocatorHandle handle, IntPtr allocatorState, FunctionPointer<TryFunction> functionPointer, TryFunction function, bool IsAutoDispose = false)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x635AB20", Offset = "0x6359B20", VA = "0x635AB20")]
	internal static void Install(AllocatorHandle handle, IntPtr allocatorState, TryFunction function)
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x635ABF0", Offset = "0x6359BF0", VA = "0x635ABF0")]
	internal static AllocatorHandle Register(IntPtr allocatorState, FunctionPointer<TryFunction> functionPointer, bool IsAutoDispose = false, bool isGlobal = false, int globalIndex = 0)
	{
		return default(AllocatorHandle);
	}

	[Token(Token = "0x6000064")]
	[ExcludeFromBurstCompatTesting("Uses managed delegate")]
	public static void Register<T>(this ref T t, bool IsAutoDispose = false, bool isGlobal = false, int globalIndex = 0) where T : struct, IAllocator
	{
	}

	[Token(Token = "0x6000065")]
	public static void UnmanagedUnregister<T>(this ref T t) where T : struct, IAllocator
	{
	}

	[Token(Token = "0x6000066")]
	[ExcludeFromBurstCompatTesting("Uses managed delegate")]
	public static void Unregister<T>(this ref T t) where T : struct, IAllocator
	{
	}

	[Token(Token = "0x6000067")]
	[ExcludeFromBurstCompatTesting("Register uses managed delegate")]
	internal unsafe static ref T CreateAllocator<T>(AllocatorHandle backingAllocator, bool isGlobal = false, int globalIndex = 0) where T : struct, IAllocator
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x6000068")]
	[ExcludeFromBurstCompatTesting("Registration uses managed delegates")]
	internal static void DestroyAllocator<T>(this ref T t, AllocatorHandle backingAllocator) where T : struct, IAllocator
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x635AF00", Offset = "0x6359F00", VA = "0x635AF00")]
	public static void Shutdown()
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x635AF10", Offset = "0x6359F10", VA = "0x635AF10")]
	internal static bool IsCustomAllocator(AllocatorHandle allocator)
	{
		return default(bool);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x635AF20", Offset = "0x6359F20", VA = "0x635AF20")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal static void CheckFailedToAllocate(int error)
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x635AF70", Offset = "0x6359F70", VA = "0x635AF70")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal static void CheckFailedToFree(int error)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x635AFC0", Offset = "0x6359FC0", VA = "0x635AFC0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal static void CheckValid(AllocatorHandle handle)
	{
	}
}
