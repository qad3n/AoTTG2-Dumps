// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.AutoFreeAllocator
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
		[Address(RVA = "0x635DA60", Offset = "0x635CA60", VA = "0x635DA60")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x635DBC0", Offset = "0x635CBC0", VA = "0x635DBC0")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x635D7B0", Offset = "0x635C7B0", VA = "0x635D7B0")]
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
		[Address(RVA = "0x635D610", Offset = "0x635C610", VA = "0x635D610", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000026")]
	public AllocatorManager.AllocatorHandle Handle
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x635D860", Offset = "0x635C860", VA = "0x635D860", Slot = "6")]
		get
		{
			return default(AllocatorManager.AllocatorHandle);
		}
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x635D870", Offset = "0x635C870", VA = "0x635D870", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public Allocator ToAllocator
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x635D880", Offset = "0x635C880", VA = "0x635D880", Slot = "8")]
		get
		{
			return default(Allocator);
		}
	}

	[Token(Token = "0x17000028")]
	public bool IsCustomAllocator
	{
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x635D890", Offset = "0x635C890", VA = "0x635D890", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000029")]
	public bool IsAutoDispose
	{
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x635D8A0", Offset = "0x635C8A0", VA = "0x635D8A0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x635D320", Offset = "0x635C320", VA = "0x635D320")]
	public void Update()
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x635D460", Offset = "0x635C460", VA = "0x635D460")]
	public void Initialize(AllocatorManager.AllocatorHandle backingAllocatorHandle)
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x635D510", Offset = "0x635C510", VA = "0x635D510")]
	public void FreeAll()
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x635D5C0", Offset = "0x635C5C0", VA = "0x635D5C0", Slot = "11")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x635D6E0", Offset = "0x635C6E0", VA = "0x635D6E0", Slot = "5")]
	public int Try(ref AllocatorManager.Block block)
	{
		return default(int);
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x635D310", Offset = "0x635C310", VA = "0x635D310")]
	[BurstCompile]
	[MonoPInvokeCallback(typeof(AllocatorManager.TryFunction))]
	internal static int Try(IntPtr state, ref AllocatorManager.Block block)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x635D8B0", Offset = "0x635C8B0", VA = "0x635D8B0")]
	[BurstCompile]
	[MonoPInvokeCallback(typeof(AllocatorManager.TryFunction))]
	internal static int Try_0024BurstManaged(IntPtr state, ref AllocatorManager.Block block)
	{
		return default(int);
	}
}
