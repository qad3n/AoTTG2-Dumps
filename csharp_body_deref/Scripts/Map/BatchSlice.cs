// ==================== AoTTG2 cross-reference ====================
// Type: Map.BatchSlice
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/BatchSlice.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x20003EB")]
internal readonly struct BatchSlice
{
	[Token(Token = "0x4001406")]
	[FieldOffset(Offset = "0x0")]
	public readonly Mesh Mesh;

	[Token(Token = "0x4001407")]
	[FieldOffset(Offset = "0x8")]
	public readonly int Start;

	[Token(Token = "0x4001408")]
	[FieldOffset(Offset = "0xC")]
	public readonly int Count;

	[Token(Token = "0x60018F8")]
	[Address(RVA = "0x5877D20", Offset = "0x5876D20", VA = "0x5877D20")]
	public BatchSlice(Mesh mesh, int start, int count)
	{
	}
}
