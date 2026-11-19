// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.MemoryLabel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x200004F")]
public readonly struct MemoryLabel
{
	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal readonly IntPtr pointer;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x8")]
	internal readonly Allocator allocator;

	[Token(Token = "0x1700001B")]
	public bool IsCreated
	{
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x68B7A50", Offset = "0x68B6A50", VA = "0x68B7A50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x68B7930", Offset = "0x68B6930", VA = "0x68B7930")]
	public MemoryLabel(string areaName, string objectName, Allocator allocator = Allocator.Persistent)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x68B7A30", Offset = "0x68B6A30", VA = "0x68B7A30")]
	public static bool SupportsAllocator(Allocator allocator)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x68B7A20", Offset = "0x68B6A20", VA = "0x68B7A20")]
	private static bool IsNullOrEmpty(string str)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x68B7A40", Offset = "0x68B6A40", VA = "0x68B7A40")]
	private unsafe static bool IsNullOrEmpty__Unmanaged(byte* name, int nameLen)
	{
		return default(bool);
	}
}
