// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.FastMemoryDesc
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x20002A0")]
public struct FastMemoryDesc
{
	[Token(Token = "0x4000BB5")]
	[FieldOffset(Offset = "0x0")]
	public bool inFastMemory;

	[Token(Token = "0x4000BB6")]
	[FieldOffset(Offset = "0x4")]
	public FastMemoryFlags flags;

	[Token(Token = "0x4000BB7")]
	[FieldOffset(Offset = "0x8")]
	public float residencyFraction;
}
