// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphParameters
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000026")]
public struct RenderGraphParameters
{
	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x0")]
	public string executionName;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x8")]
	public int currentFrameIndex;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0xC")]
	public bool rendererListCulling;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x10")]
	public ScriptableRenderContext scriptableRenderContext;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x18")]
	public CommandBuffer commandBuffer;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x20")]
	internal bool invalidContextForTesting;
}
