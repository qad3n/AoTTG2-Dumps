// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DrawBatch
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200003A")]
internal struct DrawBatch
{
	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x0")]
	public DrawKey key;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x3C")]
	public int instanceCount;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x40")]
	public int instanceOffset;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x44")]
	public MeshProceduralInfo procInfo;
}
