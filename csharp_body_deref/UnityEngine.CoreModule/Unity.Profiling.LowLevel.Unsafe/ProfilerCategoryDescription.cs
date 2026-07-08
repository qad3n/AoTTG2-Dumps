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
