// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SubPassDescriptor
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200039C")]
public struct SubPassDescriptor
{
	[Token(Token = "0x4000B26")]
	[FieldOffset(Offset = "0x0")]
	public AttachmentIndexArray inputs;

	[Token(Token = "0x4000B27")]
	[FieldOffset(Offset = "0x24")]
	public AttachmentIndexArray colorOutputs;

	[Token(Token = "0x4000B28")]
	[FieldOffset(Offset = "0x48")]
	public SubPassFlags flags;
}
