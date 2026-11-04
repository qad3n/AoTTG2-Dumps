// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.AllocatorHelper
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000030")]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(AllocatorManager.AllocatorHandle) })]
public struct AllocatorHelper<T> : IDisposable where T : struct, AllocatorManager.IAllocator
{
	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x0")]
	private unsafe readonly T* m_allocator;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x0")]
	private AllocatorManager.AllocatorHandle m_backingAllocator;

	[Token(Token = "0x1700001E")]
	public unsafe ref T Allocator
	{
		[Token(Token = "0x60000D7")]
		get
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x60000D8")]
	[ExcludeFromBurstCompatTesting("CreateAllocator is unburstable")]
	public AllocatorHelper(AllocatorManager.AllocatorHandle backingAllocator, bool isGlobal = false, int globalIndex = 0)
	{
	}

	[Token(Token = "0x60000D9")]
	[ExcludeFromBurstCompatTesting("DestroyAllocator is unburstable")]
	public void Dispose()
	{
	}
}
