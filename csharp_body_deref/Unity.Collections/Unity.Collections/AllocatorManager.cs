// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.AllocatorManager
// Update status: NEW in this game update
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
			[Address(RVA = "0x2994050", Offset = "0x2992650", VA = "0x182994050")]
			get
			{
				return ref *(TableEntry*)null;
			}
		}

		[Token(Token = "0x17000002")]
		internal bool IsInstalled
		{
			[Token(Token = "0x6000074")]
			[Address(RVA = "0x2993FA0", Offset = "0x29925A0", VA = "0x182993FA0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000003")]
		public int Value
		{
			[Token(Token = "0x6000079")]
			[Address(RVA = "0x846ED0", Offset = "0x8454D0", VA = "0x180846ED0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000004")]
		public TryFunction Function
		{
			[Token(Token = "0x600007D")]
			[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000005")]
		public AllocatorHandle Handle
		{
			[Token(Token = "0x600007F")]
			[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0", Slot = "6")]
			get
			{
				return default(AllocatorHandle);
			}
			[Token(Token = "0x6000080")]
			[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10", Slot = "7")]
			set
			{
			}
		}

		[Token(Token = "0x17000006")]
		public Allocator ToAllocator
		{
			[Token(Token = "0x6000081")]
			[Address(RVA = "0x29940E0", Offset = "0x29926E0", VA = "0x1829940E0", Slot = "8")]
			get
			{
				return default(Allocator);
			}
		}

		[Token(Token = "0x17000007")]
		public bool IsCustomAllocator
		{
			[Token(Token = "0x6000082")]
			[Address(RVA = "0x2993F90", Offset = "0x2992590", VA = "0x182993F90", Slot = "9")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000008")]
		public bool IsAutoDispose
		{
			[Token(Token = "0x6000083")]
			[Address(RVA = "0x2993EE0", Offset = "0x29924E0", VA = "0x182993EE0", Slot = "10")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000075")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		internal void IncrementVersion()
		{
		}

		[Token(Token = "0x6000076")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		internal void Rewind()
		{
		}

		[Token(Token = "0x6000077")]
		[Address(RVA = "0x2993E60", Offset = "0x2992460", VA = "0x182993E60")]
		internal void Install(TableEntry tableEntry)
		{
		}

		[Token(Token = "0x6000078")]
		[Address(RVA = "0x2994120", Offset = "0x2992720", VA = "0x182994120")]
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
		[Address(RVA = "0x2993C90", Offset = "0x2992290", VA = "0x182993C90")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private static void CheckAllocatedSuccessfully(int error)
		{
		}

		[Token(Token = "0x600007E")]
		[Address(RVA = "0x2993E80", Offset = "0x2992480", VA = "0x182993E80", Slot = "5")]
		public int Try(ref Block block)
		{
			return default(int);
		}

		[Token(Token = "0x6000084")]
		[Address(RVA = "0x2993D30", Offset = "0x2992330", VA = "0x182993D30", Slot = "11")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000085")]
		[Address(RVA = "0x2993D70", Offset = "0x2992370", VA = "0x182993D70", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000086")]
		[Address(RVA = "0x1A7C310", Offset = "0x1A7A910", VA = "0x181A7C310", Slot = "12")]
		public bool Equals(AllocatorHandle other)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x2993D50", Offset = "0x2992350", VA = "0x182993D50")]
		public bool Equals(Allocator other)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000088")]
		[Address(RVA = "0x846ED0", Offset = "0x8454D0", VA = "0x180846ED0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000089")]
		[Address(RVA = "0x29940F0", Offset = "0x29926F0", VA = "0x1829940F0")]
		public static bool operator ==(AllocatorHandle lhs, AllocatorHandle rhs)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600008A")]
		[Address(RVA = "0x2994140", Offset = "0x2992740", VA = "0x182994140")]
		public static bool operator !=(AllocatorHandle lhs, AllocatorHandle rhs)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x2994160", Offset = "0x2992760", VA = "0x182994160")]
		public static bool operator <(AllocatorHandle lhs, AllocatorHandle rhs)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x2994110", Offset = "0x2992710", VA = "0x182994110")]
		public static bool operator >(AllocatorHandle lhs, AllocatorHandle rhs)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x2994150", Offset = "0x2992750", VA = "0x182994150")]
		public static bool operator <=(AllocatorHandle lhs, AllocatorHandle rhs)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x2994100", Offset = "0x2992700", VA = "0x182994100")]
		public static bool operator >=(AllocatorHandle lhs, AllocatorHandle rhs)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x1A7BFA0", Offset = "0x1A7A5A0", VA = "0x181A7BFA0", Slot = "13")]
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
		[Address(RVA = "0x29B11A0", Offset = "0x29AF7A0", VA = "0x1829B11A0", Slot = "4")]
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
			[Address(RVA = "0x2997A10", Offset = "0x2996010", VA = "0x182997A10")]
			get
			{
				return default(long);
			}
		}

		[Token(Token = "0x1700000A")]
		public long AllocatedBytes
		{
			[Token(Token = "0x6000092")]
			[Address(RVA = "0x2997A00", Offset = "0x2996000", VA = "0x182997A00")]
			get
			{
				return default(long);
			}
		}

		[Token(Token = "0x1700000B")]
		public int Alignment
		{
			[Token(Token = "0x6000093")]
			[Address(RVA = "0x29979F0", Offset = "0x2995FF0", VA = "0x1829979F0")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000094")]
			[Address(RVA = "0x2997A20", Offset = "0x2996020", VA = "0x182997A20")]
			set
			{
			}
		}

		[Token(Token = "0x6000095")]
		[Address(RVA = "0x29979A0", Offset = "0x2995FA0", VA = "0x1829979A0", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000096")]
		[Address(RVA = "0x29977D0", Offset = "0x2995DD0", VA = "0x1829977D0")]
		public int TryAllocate()
		{
			return default(int);
		}

		[Token(Token = "0x6000097")]
		[Address(RVA = "0x29979A0", Offset = "0x2995FA0", VA = "0x1829979A0")]
		public int TryFree()
		{
			return default(int);
		}

		[Token(Token = "0x6000098")]
		[Address(RVA = "0x29977D0", Offset = "0x2995DD0", VA = "0x1829977D0")]
		public void Allocate()
		{
		}

		[Token(Token = "0x6000099")]
		[Address(RVA = "0x29979A0", Offset = "0x2995FA0", VA = "0x1829979A0")]
		public void Free()
		{
		}

		[Token(Token = "0x600009A")]
		[Address(RVA = "0x2997820", Offset = "0x2995E20", VA = "0x182997820")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void CheckFailedToAllocate(int error)
		{
		}

		[Token(Token = "0x600009B")]
		[Address(RVA = "0x29978E0", Offset = "0x2995EE0", VA = "0x1829978E0")]
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
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "6")]
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
			[Address(RVA = "0x29B1F70", Offset = "0x29B0570", VA = "0x1829B1F70")]
			[BurstDiscard]
			private static void GetFunctionPointerDiscard(ref IntPtr P_0)
			{
			}

			[Token(Token = "0x60000B2")]
			[Address(RVA = "0x29B20F0", Offset = "0x29B06F0", VA = "0x1829B20F0")]
			private static IntPtr GetFunctionPointer()
			{
				return default(IntPtr);
			}

			[Token(Token = "0x60000B3")]
			[Address(RVA = "0x29B1AA0", Offset = "0x29B00A0", VA = "0x1829B1AA0")]
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
			[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0", Slot = "6")]
			get
			{
				return default(AllocatorHandle);
			}
			[Token(Token = "0x60000A4")]
			[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10", Slot = "7")]
			set
			{
			}
		}

		[Token(Token = "0x17000012")]
		public Allocator ToAllocator
		{
			[Token(Token = "0x60000A5")]
			[Address(RVA = "0x29940E0", Offset = "0x29926E0", VA = "0x1829940E0", Slot = "8")]
			get
			{
				return default(Allocator);
			}
		}

		[Token(Token = "0x17000013")]
		public bool IsCustomAllocator
		{
			[Token(Token = "0x60000A6")]
			[Address(RVA = "0x2993F90", Offset = "0x2992590", VA = "0x182993F90", Slot = "9")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000014")]
		public TryFunction Function
		{
			[Token(Token = "0x60000AA")]
			[Address(RVA = "0x29B1D90", Offset = "0x29B0390", VA = "0x1829B1D90", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x29B1A50", Offset = "0x29B0050", VA = "0x1829B1A50")]
		public void Initialize(Block storage)
		{
		}

		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x29B1C90", Offset = "0x29B0290", VA = "0x1829B1C90", Slot = "5")]
		public int Try(ref Block block)
		{
			return default(int);
		}

		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x29B1AA0", Offset = "0x29B00A0", VA = "0x1829B1AA0")]
		[BurstCompile]
		[MonoPInvokeCallback(typeof(TryFunction))]
		public static int Try(IntPtr allocatorState, ref Block block)
		{
			return default(int);
		}

		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "11")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x29B1A70", Offset = "0x29B0070", VA = "0x1829B1A70")]
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
			[Address(RVA = "0x29B2300", Offset = "0x29B0900", VA = "0x1829B2300")]
			[BurstDiscard]
			private static void GetFunctionPointerDiscard(ref IntPtr P_0)
			{
			}

			[Token(Token = "0x60000C8")]
			[Address(RVA = "0x29B2480", Offset = "0x29B0A80", VA = "0x1829B2480")]
			private static IntPtr GetFunctionPointer()
			{
				return default(IntPtr);
			}

			[Token(Token = "0x60000C9")]
			[Address(RVA = "0x29B1340", Offset = "0x29AF940", VA = "0x1829B1340")]
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
			[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0", Slot = "6")]
			get
			{
				return default(AllocatorHandle);
			}
			[Token(Token = "0x60000B5")]
			[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10", Slot = "7")]
			set
			{
			}
		}

		[Token(Token = "0x17000016")]
		public Allocator ToAllocator
		{
			[Token(Token = "0x60000B6")]
			[Address(RVA = "0x29940E0", Offset = "0x29926E0", VA = "0x1829940E0", Slot = "8")]
			get
			{
				return default(Allocator);
			}
		}

		[Token(Token = "0x17000017")]
		public bool IsCustomAllocator
		{
			[Token(Token = "0x60000B7")]
			[Address(RVA = "0x2993F90", Offset = "0x2992590", VA = "0x182993F90", Slot = "9")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000018")]
		public long BudgetInBytes
		{
			[Token(Token = "0x60000B8")]
			[Address(RVA = "0x29B1770", Offset = "0x29AFD70", VA = "0x1829B1770")]
			get
			{
				return default(long);
			}
		}

		[Token(Token = "0x17000019")]
		public long AllocatedBytes
		{
			[Token(Token = "0x60000B9")]
			[Address(RVA = "0x29B1760", Offset = "0x29AFD60", VA = "0x1829B1760")]
			get
			{
				return default(long);
			}
		}

		[Token(Token = "0x1700001A")]
		internal int SlabSizeInBytes
		{
			[Token(Token = "0x60000BA")]
			[Address(RVA = "0x29B1860", Offset = "0x29AFE60", VA = "0x1829B1860")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60000BB")]
			[Address(RVA = "0x29B1890", Offset = "0x29AFE90", VA = "0x1829B1890")]
			set
			{
			}
		}

		[Token(Token = "0x1700001B")]
		internal int Slabs
		{
			[Token(Token = "0x60000BC")]
			[Address(RVA = "0x29B1870", Offset = "0x29AFE70", VA = "0x1829B1870")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700001C")]
		public TryFunction Function
		{
			[Token(Token = "0x60000C0")]
			[Address(RVA = "0x29B1780", Offset = "0x29AFD80", VA = "0x1829B1780", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x29B1220", Offset = "0x29AF820", VA = "0x1829B1220")]
		internal void Initialize(Block storage, int slabSizeInBytes, long budget)
		{
		}

		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x29B1530", Offset = "0x29AFB30", VA = "0x1829B1530", Slot = "5")]
		public int Try(ref Block block)
		{
			return default(int);
		}

		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x29B1340", Offset = "0x29AF940", VA = "0x1829B1340")]
		[BurstCompile]
		[MonoPInvokeCallback(typeof(TryFunction))]
		public static int Try(IntPtr allocatorState, ref Block block)
		{
			return default(int);
		}

		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "11")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x29B1310", Offset = "0x29AF910", VA = "0x1829B1310")]
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
			[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
			[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
			[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
			public IsAutoDispose()
			{
			}
		}

		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x29B0F70", Offset = "0x29AF570", VA = "0x1829B0F70")]
		[ExcludeFromBurstCompatTesting("Uses managed delegate")]
		public static void RegisterDelegate(int index, TryFunction function)
		{
		}

		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x29B1050", Offset = "0x29AF650", VA = "0x1829B1050")]
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
	[Address(RVA = "0x2994170", Offset = "0x2992770", VA = "0x182994170")]
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
	[Address(RVA = "0x29942F0", Offset = "0x29928F0", VA = "0x1829942F0")]
	public unsafe static void Free(AllocatorHandle handle, void* pointer, int itemSizeInBytes, int alignmentInBytes, int items = 1)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x2994380", Offset = "0x2992980", VA = "0x182994380")]
	public unsafe static void Free(AllocatorHandle handle, void* pointer)
	{
	}

	[Token(Token = "0x6000057")]
	public unsafe static void Free<T>(AllocatorHandle handle, T* pointer, int items = 1) where T : struct
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x29942D0", Offset = "0x29928D0", VA = "0x1829942D0")]
	public static AllocatorHandle ConvertToAllocatorHandle(Allocator a)
	{
		return default(AllocatorHandle);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x2994200", Offset = "0x2992800", VA = "0x182994200")]
	[BurstDiscard]
	private static void CheckDelegate(ref bool useDelegate)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x2994F50", Offset = "0x2993550", VA = "0x182994F50")]
	private static bool UseDelegate()
	{
		return default(bool);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x29950E0", Offset = "0x29936E0", VA = "0x1829950E0")]
	private static int allocate_block(ref Block block)
	{
		return default(int);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x2995170", Offset = "0x2993770", VA = "0x182995170")]
	[BurstDiscard]
	private static void forward_mono_allocate_block(ref Block block, ref int error)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x29947A0", Offset = "0x2992DA0", VA = "0x1829947A0")]
	internal static Allocator LegacyOf(AllocatorHandle handle)
	{
		return default(Allocator);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x2994AD0", Offset = "0x29930D0", VA = "0x182994AD0")]
	private static int TryLegacy(ref Block block)
	{
		return default(int);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x2994C30", Offset = "0x2993230", VA = "0x182994C30")]
	public static int Try(ref Block block)
	{
		return default(int);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public static void Initialize()
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x29943F0", Offset = "0x29929F0", VA = "0x1829943F0")]
	internal static void Install(AllocatorHandle handle, IntPtr allocatorState, FunctionPointer<TryFunction> functionPointer, TryFunction function, bool IsAutoDispose = false)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x29946D0", Offset = "0x2992CD0", VA = "0x1829946D0")]
	internal static void Install(AllocatorHandle handle, IntPtr allocatorState, TryFunction function)
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x29947B0", Offset = "0x2992DB0", VA = "0x1829947B0")]
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
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public static void Shutdown()
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x2994790", Offset = "0x2992D90", VA = "0x182994790")]
	internal static bool IsCustomAllocator(AllocatorHandle allocator)
	{
		return default(bool);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x2994210", Offset = "0x2992810", VA = "0x182994210")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal static void CheckFailedToAllocate(int error)
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x2994270", Offset = "0x2992870", VA = "0x182994270")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal static void CheckFailedToFree(int error)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal static void CheckValid(AllocatorHandle handle)
	{
	}
}
