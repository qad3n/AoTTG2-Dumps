// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.UnsafeQueueData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x20000EB")]
[GenerateTestsForBurstCompatibility]
internal struct UnsafeQueueData
{
	[Token(Token = "0x400045F")]
	internal const int m_BlockSize = 16384;

	[Token(Token = "0x4000460")]
	[FieldOffset(Offset = "0x0")]
	public IntPtr m_FirstBlock;

	[Token(Token = "0x4000461")]
	[FieldOffset(Offset = "0x8")]
	public IntPtr m_LastBlock;

	[Token(Token = "0x4000462")]
	[FieldOffset(Offset = "0x10")]
	public int m_MaxItems;

	[Token(Token = "0x4000463")]
	[FieldOffset(Offset = "0x14")]
	public int m_CurrentRead;

	[Token(Token = "0x4000464")]
	[FieldOffset(Offset = "0x18")]
	public unsafe byte* m_CurrentWriteBlockTLS;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x29BFB30", Offset = "0x29BE130", VA = "0x1829BFB30")]
	internal unsafe UnsafeQueueBlockHeader* GetCurrentWriteBlockTLS(int threadIndex)
	{
		//IL_0002: Expected I, but got O
		return (UnsafeQueueBlockHeader*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x29BFB40", Offset = "0x29BE140", VA = "0x1829BFB40")]
	internal unsafe void SetCurrentWriteBlockTLS(int threadIndex, UnsafeQueueBlockHeader* currentWriteBlock)
	{
	}

	[Token(Token = "0x6000A5D")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public unsafe static UnsafeQueueBlockHeader* AllocateWriteBlockMT<T>(UnsafeQueueData* data, AllocatorManager.AllocatorHandle allocator, int threadIndex) where T : struct
	{
		//IL_0002: Expected I, but got O
		return (UnsafeQueueBlockHeader*)unchecked((nint)null);
	}

	[Token(Token = "0x6000A5E")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public unsafe static void AllocateQueue<T>(AllocatorManager.AllocatorHandle allocator, out UnsafeQueueData* outBuf) where T : struct
	{
	}

	[Token(Token = "0x6000A5F")]
	[Address(RVA = "0x29BFA90", Offset = "0x29BE090", VA = "0x1829BFA90")]
	public unsafe static void DeallocateQueue(UnsafeQueueData* data, AllocatorManager.AllocatorHandle allocator)
	{
	}
}
