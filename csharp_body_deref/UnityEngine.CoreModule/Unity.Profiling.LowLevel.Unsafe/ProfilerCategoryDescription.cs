// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Profiling.LowLevel.Unsafe.ProfilerCategoryDescription
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.Profiling.LowLevel.Unsafe;

[StructLayout((LayoutKind)2)]
[Token(Token = "0x200002B")]
public readonly struct ProfilerCategoryDescription
{
	[Token(Token = "0x4000075")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly ushort Id;

	[Token(Token = "0x4000076")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
	public readonly ushort Flags;

	[Token(Token = "0x4000077")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public readonly Color32 Color;

	[Token(Token = "0x4000078")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly int reserved0;

	[Token(Token = "0x4000079")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public readonly int NameUtf8Len;

	[Token(Token = "0x400007A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public unsafe readonly byte* NameUtf8;
}
