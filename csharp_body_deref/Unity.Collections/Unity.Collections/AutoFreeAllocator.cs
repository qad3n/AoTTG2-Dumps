// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.AutoFreeAllocator
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

[Token(Token = "0x2000032")]
[BurstCompile]
internal struct AutoFreeAllocator : AllocatorManager.IAllocator, IDisposable
{
	[Token(Token = "0x2000033")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	internal delegate int Try_000000E1_0024PostfixBurstDelegate(IntPtr state, ref AllocatorManager.Block block);

	[Token(Token = "0x2000034")]
	internal static class Try_000000E1_0024BurstDirectCall
	{
		[Token(Token = "0x400007C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static IntPtr Pointer;

		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x29B2690", Offset = "0x29B0C90", VA = "0x1829B2690")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x29B2810", Offset = "0x29B0E10", VA = "0x1829B2810")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x2995480", Offset = "0x2993A80", VA = "0x182995480")]
		public static int Invoke(IntPtr state, ref AllocatorManager.Block block)
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000078")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private ArrayOfArrays<IntPtr> m_allocated;

	[Token(Token = "0x4000079")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private ArrayOfArrays<IntPtr> m_tofree;

	[Token(Token = "0x400007A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private AllocatorManager.AllocatorHandle m_handle;

	[Token(Token = "0x400007B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private AllocatorManager.AllocatorHandle m_backingAllocatorHandle;

	[Token(Token = "0x17000025")]
	public AllocatorManager.TryFunction Function
	{
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x2995880", Offset = "0x2993E80", VA = "0x182995880", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000026")]
	public AllocatorManager.AllocatorHandle Handle
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0", Slot = "6")]
		get
		{
			return default(AllocatorManager.AllocatorHandle);
		}
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x58AA60", Offset = "0x589060", VA = "0x18058AA60", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public Allocator ToAllocator
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x2995970", Offset = "0x2993F70", VA = "0x182995970", Slot = "8")]
		get
		{
			return default(Allocator);
		}
	}

	[Token(Token = "0x17000028")]
	public bool IsCustomAllocator
	{
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x2995960", Offset = "0x2993F60", VA = "0x182995960", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000029")]
	public bool IsAutoDispose
	{
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x2995750", Offset = "0x2993D50", VA = "0x182995750")]
	public void Update()
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x2995380", Offset = "0x2993980", VA = "0x182995380")]
	public void Initialize(AllocatorManager.AllocatorHandle backingAllocatorHandle)
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x29952E0", Offset = "0x29938E0", VA = "0x1829952E0")]
	public void FreeAll()
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x2995280", Offset = "0x2993880", VA = "0x182995280", Slot = "11")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x2995670", Offset = "0x2993C70", VA = "0x182995670", Slot = "5")]
	public int Try(ref AllocatorManager.Block block)
	{
		return default(int);
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x2995480", Offset = "0x2993A80", VA = "0x182995480")]
	[BurstCompile]
	[MonoPInvokeCallback(typeof(AllocatorManager.TryFunction))]
	internal static int Try(IntPtr state, ref AllocatorManager.Block block)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x2995450", Offset = "0x2993A50", VA = "0x182995450")]
	[BurstCompile]
	[MonoPInvokeCallback(typeof(AllocatorManager.TryFunction))]
	internal static int Try_0024BurstManaged(IntPtr state, ref AllocatorManager.Block block)
	{
		return default(int);
	}
}
