// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.RewindableAllocator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using AOT;
using Il2CppDummyDll;
using Unity.Burst;

namespace Unity.Collections;

[Token(Token = "0x20000D6")]
[BurstCompile]
public struct RewindableAllocator : AllocatorManager.IAllocator, IDisposable
{
	[Token(Token = "0x20000D7")]
	internal struct Union
	{
		[Token(Token = "0x4000427")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal long m_long;

		[Token(Token = "0x4000428")]
		private const int currentBits = 40;

		[Token(Token = "0x4000429")]
		private const int currentOffset = 0;

		[Token(Token = "0x400042A")]
		private const long currentMask = 1099511627775L;

		[Token(Token = "0x400042B")]
		private const int allocCountBits = 24;

		[Token(Token = "0x400042C")]
		private const int allocCountOffset = 40;

		[Token(Token = "0x400042D")]
		private const long allocCountMask = 16777215L;

		[Token(Token = "0x1700012A")]
		internal long m_current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000A0F")]
			[Address(RVA = "0x6384140", Offset = "0x6383140", VA = "0x6384140")]
			get
			{
				return default(long);
			}
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000A10")]
			[Address(RVA = "0x6384150", Offset = "0x6383150", VA = "0x6384150")]
			set
			{
			}
		}

		[Token(Token = "0x1700012B")]
		internal long m_allocCount
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000A11")]
			[Address(RVA = "0x6384180", Offset = "0x6383180", VA = "0x6384180")]
			get
			{
				return default(long);
			}
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000A12")]
			[Address(RVA = "0x6384190", Offset = "0x6383190", VA = "0x6384190")]
			set
			{
			}
		}
	}

	[Token(Token = "0x20000D8")]
	[GenerateTestsForBurstCompatibility]
	internal struct MemoryBlock : IDisposable
	{
		[Token(Token = "0x400042E")]
		public const int kMaximumAlignment = 16384;

		[Token(Token = "0x400042F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public unsafe byte* m_pointer;

		[Token(Token = "0x4000430")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public long m_bytes;

		[Token(Token = "0x4000431")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Union m_union;

		[Token(Token = "0x6000A13")]
		[Address(RVA = "0x6383650", Offset = "0x6382650", VA = "0x6383650")]
		public MemoryBlock(long bytes)
		{
		}

		[Token(Token = "0x6000A14")]
		[Address(RVA = "0x6383950", Offset = "0x6382950", VA = "0x6383950")]
		public void Rewind()
		{
		}

		[Token(Token = "0x6000A15")]
		[Address(RVA = "0x63838F0", Offset = "0x63828F0", VA = "0x63838F0", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000A16")]
		[Address(RVA = "0x6383FE0", Offset = "0x6382FE0", VA = "0x6383FE0")]
		public bool Contains(IntPtr ptr)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20000D9")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	internal delegate int Try_000009EE_0024PostfixBurstDelegate(IntPtr state, ref AllocatorManager.Block block);

	[Token(Token = "0x20000DA")]
	internal static class Try_000009EE_0024BurstDirectCall
	{
		[Token(Token = "0x4000432")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static IntPtr Pointer;

		[Token(Token = "0x6000A1B")]
		[Address(RVA = "0x6384340", Offset = "0x6383340", VA = "0x6384340")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x6000A1C")]
		[Address(RVA = "0x63844A0", Offset = "0x63834A0", VA = "0x63844A0")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000A1D")]
		[Address(RVA = "0x6384020", Offset = "0x6383020", VA = "0x6384020")]
		public static int Invoke(IntPtr state, ref AllocatorManager.Block block)
		{
			return default(int);
		}
	}

	[Token(Token = "0x400041A")]
	private const int kLog2MaxMemoryBlockSize = 26;

	[Token(Token = "0x400041B")]
	private const long kMaxMemoryBlockSize = 67108864L;

	[Token(Token = "0x400041C")]
	private const long kMinMemoryBlockSize = 131072L;

	[Token(Token = "0x400041D")]
	private const int kMaxNumBlocks = 64;

	[Token(Token = "0x400041E")]
	private const int kBlockBusyRewindMask = -2147483648;

	[Token(Token = "0x400041F")]
	private const int kBlockBusyAllocateMask = 2147483647;

	[Token(Token = "0x4000420")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Spinner m_spinner;

	[Token(Token = "0x4000421")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private AllocatorManager.AllocatorHandle m_handle;

	[Token(Token = "0x4000422")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private UnmanagedArray<MemoryBlock> m_block;

	[Token(Token = "0x4000423")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int m_last;

	[Token(Token = "0x4000424")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int m_used;

	[Token(Token = "0x4000425")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private byte m_enableBlockFree;

	[Token(Token = "0x4000426")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
	private byte m_reachMaxBlockSize;

	[Token(Token = "0x17000120")]
	public bool EnableBlockFree
	{
		[Token(Token = "0x60009FB")]
		[Address(RVA = "0x63836A0", Offset = "0x63826A0", VA = "0x63836A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009FC")]
		[Address(RVA = "0x63836B0", Offset = "0x63826B0", VA = "0x63836B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000121")]
	public int BlocksAllocated
	{
		[Token(Token = "0x60009FD")]
		[Address(RVA = "0x63836C0", Offset = "0x63826C0", VA = "0x63836C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000122")]
	public int InitialSizeInBytes
	{
		[Token(Token = "0x60009FE")]
		[Address(RVA = "0x63836D0", Offset = "0x63826D0", VA = "0x63836D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000123")]
	internal long MaxMemoryBlockSize
	{
		[Token(Token = "0x60009FF")]
		[Address(RVA = "0x6383700", Offset = "0x6382700", VA = "0x6383700")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000124")]
	internal long BytesAllocated
	{
		[Token(Token = "0x6000A00")]
		[Address(RVA = "0x6383710", Offset = "0x6382710", VA = "0x6383710")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000125")]
	[ExcludeFromBurstCompatTesting("Uses managed delegate")]
	public AllocatorManager.TryFunction Function
	{
		[Token(Token = "0x6000A03")]
		[Address(RVA = "0x6383A80", Offset = "0x6382A80", VA = "0x6383A80", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000126")]
	public AllocatorManager.AllocatorHandle Handle
	{
		[Token(Token = "0x6000A07")]
		[Address(RVA = "0x63840D0", Offset = "0x63830D0", VA = "0x63840D0", Slot = "6")]
		get
		{
			return default(AllocatorManager.AllocatorHandle);
		}
		[Token(Token = "0x6000A08")]
		[Address(RVA = "0x63840E0", Offset = "0x63830E0", VA = "0x63840E0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000127")]
	public Allocator ToAllocator
	{
		[Token(Token = "0x6000A09")]
		[Address(RVA = "0x63840F0", Offset = "0x63830F0", VA = "0x63840F0", Slot = "8")]
		get
		{
			return default(Allocator);
		}
	}

	[Token(Token = "0x17000128")]
	public bool IsCustomAllocator
	{
		[Token(Token = "0x6000A0A")]
		[Address(RVA = "0x6384100", Offset = "0x6383100", VA = "0x6384100", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000129")]
	public bool IsAutoDispose
	{
		[Token(Token = "0x6000A0B")]
		[Address(RVA = "0x6384110", Offset = "0x6383110", VA = "0x6384110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x6383550", Offset = "0x6382550", VA = "0x6383550")]
	public void Initialize(int initialSizeInBytes, bool enableBlockFree = false)
	{
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x6383770", Offset = "0x6382770", VA = "0x6383770")]
	public void Rewind()
	{
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x6383960", Offset = "0x6382960", VA = "0x6383960", Slot = "11")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000A04")]
	[Address(RVA = "0x6383AE0", Offset = "0x6382AE0", VA = "0x6383AE0")]
	private int TryAllocate(ref AllocatorManager.Block block, int startIndex, int lastIndex, long alignedSize, long alignmentMask)
	{
		return default(int);
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x6383CD0", Offset = "0x6382CD0", VA = "0x6383CD0", Slot = "5")]
	public int Try(ref AllocatorManager.Block block)
	{
		return default(int);
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x6383540", Offset = "0x6382540", VA = "0x6383540")]
	[BurstCompile]
	[MonoPInvokeCallback(typeof(AllocatorManager.TryFunction))]
	internal static int Try(IntPtr state, ref AllocatorManager.Block block)
	{
		return default(int);
	}

	[Token(Token = "0x6000A0C")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public NativeArray<T> AllocateNativeArray<T>(int length) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000A0D")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public NativeList<T> AllocateNativeList<T>(int capacity) where T : struct
	{
		return default(NativeList<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x6384120", Offset = "0x6383120", VA = "0x6384120")]
	[BurstCompile]
	[MonoPInvokeCallback(typeof(AllocatorManager.TryFunction))]
	internal static int Try_0024BurstManaged(IntPtr state, ref AllocatorManager.Block block)
	{
		return default(int);
	}
}
