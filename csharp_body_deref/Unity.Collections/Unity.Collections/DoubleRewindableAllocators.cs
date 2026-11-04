// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.DoubleRewindableAllocators
// Update status: NEW in this game update
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
		[Address(RVA = "0x299B4F0", Offset = "0x2999AF0", VA = "0x18299B4F0")]
		get
		{
			return ref *(RewindableAllocator*)null;
		}
	}

	[Token(Token = "0x17000038")]
	public bool IsCreated
	{
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0xA507A0", Offset = "0xA4EDA0", VA = "0x180A507A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000039")]
	internal bool EnableBlockFree
	{
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x299B530", Offset = "0x2999B30", VA = "0x18299B530")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x299B580", Offset = "0x2999B80", VA = "0x18299B580")]
		set
		{
		}
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x299B440", Offset = "0x2999A40", VA = "0x18299B440")]
	public void Update()
	{
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x299B230", Offset = "0x2999830", VA = "0x18299B230")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckIsCreated()
	{
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x299B4D0", Offset = "0x2999AD0", VA = "0x18299B4D0")]
	public DoubleRewindableAllocators(AllocatorManager.AllocatorHandle backingAllocator, int initialSizeInBytes)
	{
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x299B340", Offset = "0x2999940", VA = "0x18299B340")]
	public void Initialize(AllocatorManager.AllocatorHandle backingAllocator, int initialSizeInBytes)
	{
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x299B2A0", Offset = "0x29998A0", VA = "0x18299B2A0", Slot = "4")]
	public void Dispose()
	{
	}
}
