// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SubPassDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000370")]
public struct SubPassDescriptor
{
	[Token(Token = "0x4000A06")]
	[FieldOffset(Offset = "0x0")]
	public AttachmentIndexArray inputs;

	[Token(Token = "0x4000A07")]
	[FieldOffset(Offset = "0x24")]
	public AttachmentIndexArray colorOutputs;

	[Token(Token = "0x4000A08")]
	[FieldOffset(Offset = "0x48")]
	public SubPassFlags flags;
}
