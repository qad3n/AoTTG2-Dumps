// ==================== AoTTG2 cross-reference ====================
// Type: Map.BatchSlice
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Map/BatchSlice.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x2000390")]
internal readonly struct BatchSlice
{
	[Token(Token = "0x4001274")]
	[FieldOffset(Offset = "0x0")]
	public readonly Mesh Mesh;

	[Token(Token = "0x4001275")]
	[FieldOffset(Offset = "0x8")]
	public readonly int Start;

	[Token(Token = "0x4001276")]
	[FieldOffset(Offset = "0xC")]
	public readonly int Count;

	[Token(Token = "0x6001691")]
	[Address(RVA = "0xA44EA0", Offset = "0xA434A0", VA = "0x180A44EA0")]
	public BatchSlice(Mesh mesh, int start, int count)
	{
	}
}
