// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeScratchAllocator
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x200013C")]
[GenerateTestsForBurstCompatibility]
public struct UnsafeScratchAllocator
{
	[Token(Token = "0x400052C")]
	[FieldOffset(Offset = "0x0")]
	private unsafe void* m_Pointer;

	[Token(Token = "0x400052D")]
	[FieldOffset(Offset = "0x8")]
	private int m_LengthInBytes;

	[Token(Token = "0x400052E")]
	[FieldOffset(Offset = "0xC")]
	private readonly int m_CapacityInBytes;

	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x29BFD80", Offset = "0x29BE380", VA = "0x1829BFD80")]
	public unsafe UnsafeScratchAllocator(void* ptr, int capacityInBytes)
	{
	}

	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x29BFCA0", Offset = "0x29BE2A0", VA = "0x1829BFCA0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckAllocationDoesNotExceedCapacity(ulong requestedSize)
	{
	}

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x29BFC00", Offset = "0x29BE200", VA = "0x1829BFC00")]
	public unsafe void* Allocate(int sizeInBytes, int alignmentInBytes)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000D94")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public unsafe void* Allocate<T>(int count = 1) where T : struct
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}
}
