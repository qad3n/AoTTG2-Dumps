// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SynchronisationStageFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002CB")]
public enum SynchronisationStageFlags
{
	[Token(Token = "0x400080A")]
	VertexProcessing = 1,
	[Token(Token = "0x400080B")]
	PixelProcessing = 2,
	[Token(Token = "0x400080C")]
	ComputeProcessing = 4,
	[Token(Token = "0x400080D")]
	AllGPUOperations = 7
}
