// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.RewindableAllocator
// Update status: NEW in this game update
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
			[Address(RVA = "0x29BD7E0", Offset = "0x29BBDE0", VA = "0x1829BD7E0")]
			get
			{
				return default(long);
			}
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000A10")]
			[Address(RVA = "0x29BD820", Offset = "0x29BBE20", VA = "0x1829BD820")]
			set
			{
			}
		}

		[Token(Token = "0x1700012B")]
		internal long m_allocCount
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000A11")]
			[Address(RVA = "0x29BD7D0", Offset = "0x29BBDD0", VA = "0x1829BD7D0")]
			get
			{
				return default(long);
			}
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000A12")]
			[Address(RVA = "0x29BD800", Offset = "0x29BBE00", VA = "0x1829BD800")]
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
		[Address(RVA = "0x29B4B70", Offset = "0x29B3170", VA = "0x1829B4B70")]
		public MemoryBlock(long bytes)
		{
		}

		[Token(Token = "0x6000A14")]
		[Address(RVA = "0x29B4B60", Offset = "0x29B3160", VA = "0x1829B4B60")]
		public void Rewind()
		{
		}

		[Token(Token = "0x6000A15")]
		[Address(RVA = "0x29B4AF0", Offset = "0x29B30F0", VA = "0x1829B4AF0", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000A16")]
		[Address(RVA = "0x29B4AA0", Offset = "0x29B30A0", VA = "0x1829B4AA0")]
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
		[Address(RVA = "0x29BC070", Offset = "0x29BA670", VA = "0x1829BC070")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x6000A1C")]
		[Address(RVA = "0x29BC1F0", Offset = "0x29BA7F0", VA = "0x1829BC1F0")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000A1D")]
		[Address(RVA = "0x29B99C0", Offset = "0x29B7FC0", VA = "0x1829B99C0")]
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
		[Address(RVA = "0x29B9C40", Offset = "0x29B8240", VA = "0x1829B9C40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009FC")]
		[Address(RVA = "0x29B9D20", Offset = "0x29B8320", VA = "0x1829B9D20")]
		set
		{
		}
	}

	[Token(Token = "0x17000121")]
	public int BlocksAllocated
	{
		[Token(Token = "0x60009FD")]
		[Address(RVA = "0x29B9BB0", Offset = "0x29B81B0", VA = "0x1829B9BB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000122")]
	public int InitialSizeInBytes
	{
		[Token(Token = "0x60009FE")]
		[Address(RVA = "0x29B9CB0", Offset = "0x29B82B0", VA = "0x1829B9CB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000123")]
	internal long MaxMemoryBlockSize
	{
		[Token(Token = "0x60009FF")]
		[Address(RVA = "0x29B9D00", Offset = "0x29B8300", VA = "0x1829B9D00")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000124")]
	internal long BytesAllocated
	{
		[Token(Token = "0x6000A00")]
		[Address(RVA = "0x29B9BC0", Offset = "0x29B81C0", VA = "0x1829B9BC0")]
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
		[Address(RVA = "0x29B9C50", Offset = "0x29B8250", VA = "0x1829B9C50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000126")]
	public AllocatorManager.AllocatorHandle Handle
	{
		[Token(Token = "0x6000A07")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0", Slot = "6")]
		get
		{
			return default(AllocatorManager.AllocatorHandle);
		}
		[Token(Token = "0x6000A08")]
		[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000127")]
	public Allocator ToAllocator
	{
		[Token(Token = "0x6000A09")]
		[Address(RVA = "0x29B9D10", Offset = "0x29B8310", VA = "0x1829B9D10", Slot = "8")]
		get
		{
			return default(Allocator);
		}
	}

	[Token(Token = "0x17000128")]
	public bool IsCustomAllocator
	{
		[Token(Token = "0x6000A0A")]
		[Address(RVA = "0x29B9CF0", Offset = "0x29B82F0", VA = "0x1829B9CF0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000129")]
	public bool IsAutoDispose
	{
		[Token(Token = "0x6000A0B")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x29B9150", Offset = "0x29B7750", VA = "0x1829B9150")]
	public void Initialize(int initialSizeInBytes, bool enableBlockFree = false)
	{
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x29B9240", Offset = "0x29B7840", VA = "0x1829B9240")]
	public void Rewind()
	{
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x29B9020", Offset = "0x29B7620", VA = "0x1829B9020", Slot = "11")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000A04")]
	[Address(RVA = "0x29B93D0", Offset = "0x29B79D0", VA = "0x1829B93D0")]
	private int TryAllocate(ref AllocatorManager.Block block, int startIndex, int lastIndex, long alignedSize, long alignmentMask)
	{
		return default(int);
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x29B9630", Offset = "0x29B7C30", VA = "0x1829B9630", Slot = "5")]
	public int Try(ref AllocatorManager.Block block)
	{
		return default(int);
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x29B99C0", Offset = "0x29B7FC0", VA = "0x1829B99C0")]
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
	[Address(RVA = "0x29B9600", Offset = "0x29B7C00", VA = "0x1829B9600")]
	[BurstCompile]
	[MonoPInvokeCallback(typeof(AllocatorManager.TryFunction))]
	internal static int Try_0024BurstManaged(IntPtr state, ref AllocatorManager.Block block)
	{
		return default(int);
	}
}
