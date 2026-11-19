// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.DoubleRewindableAllocators
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000049")]
public struct DoubleRewindableAllocators : IDisposable
{
	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x0")]
	private unsafe RewindableAllocator* Pointer;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x8")]
	private AllocatorHelper<RewindableAllocator> UpdateAllocatorHelper0;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x18")]
	private AllocatorHelper<RewindableAllocator> UpdateAllocatorHelper1;

	[Token(Token = "0x17000037")]
	public unsafe ref RewindableAllocator Allocator
	{
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x6363DB0", Offset = "0x6362DB0", VA = "0x6363DB0")]
		get
		{
			return ref *(RewindableAllocator*)null;
		}
	}

	[Token(Token = "0x17000038")]
	public bool IsCreated
	{
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x6363E30", Offset = "0x6362E30", VA = "0x6363E30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000039")]
	internal bool EnableBlockFree
	{
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x6364050", Offset = "0x6363050", VA = "0x6364050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x63640A0", Offset = "0x63630A0", VA = "0x63640A0")]
		set
		{
		}
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x6363D30", Offset = "0x6362D30", VA = "0x6363D30")]
	public void Update()
	{
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x6363DE0", Offset = "0x6362DE0", VA = "0x6363DE0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckIsCreated()
	{
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x6363E40", Offset = "0x6362E40", VA = "0x6363E40")]
	public DoubleRewindableAllocators(AllocatorManager.AllocatorHandle backingAllocator, int initialSizeInBytes)
	{
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x6363E60", Offset = "0x6362E60", VA = "0x6363E60")]
	public void Initialize(AllocatorManager.AllocatorHandle backingAllocator, int initialSizeInBytes)
	{
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x6363FB0", Offset = "0x6362FB0", VA = "0x6363FB0", Slot = "4")]
	public void Dispose()
	{
	}
}
