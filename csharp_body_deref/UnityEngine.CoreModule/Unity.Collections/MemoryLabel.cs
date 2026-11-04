// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.MemoryLabel
// Update status: NEW in this game update
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
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x1B449D0", Offset = "0x1B42FD0", VA = "0x181B449D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x2ECD030", Offset = "0x2ECB630", VA = "0x182ECD030")]
	public MemoryLabel(string areaName, string objectName, Allocator allocator = Allocator.Persistent)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x2ECD010", Offset = "0x2ECB610", VA = "0x182ECD010")]
	public static bool SupportsAllocator(Allocator allocator)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x1C52D30", Offset = "0x1C51330", VA = "0x181C52D30")]
	private static bool IsNullOrEmpty(string str)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x2ECCFF0", Offset = "0x2ECB5F0", VA = "0x182ECCFF0")]
	private unsafe static bool IsNullOrEmpty__Unmanaged(byte* name, int nameLen)
	{
		return default(bool);
	}
}
