// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DBufferCopyDepthPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;
using UnityEngine.Rendering.Universal.Internal;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200006E")]
internal class DBufferCopyDepthPass : CopyDepthPass
{
	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x660D640", Offset = "0x660C640", VA = "0x660D640")]
	public DBufferCopyDepthPass(RenderPassEvent evt, Shader copyDepthShader, bool shouldClear = false, bool copyToDepth = false, bool copyResolvedDepth = false)
	{
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x660D660", Offset = "0x660C660", VA = "0x660D660", Slot = "11")]
	public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
	{
	}
}
