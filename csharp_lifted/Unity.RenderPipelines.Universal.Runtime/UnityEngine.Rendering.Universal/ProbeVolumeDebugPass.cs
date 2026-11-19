// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ProbeVolumeDebugPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000149")]
internal class ProbeVolumeDebugPass : ScriptableRenderPass
{
	[Token(Token = "0x200014A")]
	private class WriteApvData
	{
		[Token(Token = "0x400077A")]
		[FieldOffset(Offset = "0x10")]
		public ComputeShader computeShader;

		[Token(Token = "0x400077B")]
		[FieldOffset(Offset = "0x18")]
		public BufferHandle resultBuffer;

		[Token(Token = "0x400077C")]
		[FieldOffset(Offset = "0x24")]
		public Vector2 clickCoordinates;

		[Token(Token = "0x400077D")]
		[FieldOffset(Offset = "0x2C")]
		public TextureHandle depthBuffer;

		[Token(Token = "0x400077E")]
		[FieldOffset(Offset = "0x3C")]
		public TextureHandle normalBuffer;

		[Token(Token = "0x60007A2")]
		[Address(RVA = "0x666EAD0", Offset = "0x666DAD0", VA = "0x666EAD0")]
		public WriteApvData()
		{
		}
	}

	[Token(Token = "0x4000779")]
	[FieldOffset(Offset = "0x60")]
	private ComputeShader m_ComputeShader;

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x666E380", Offset = "0x666D380", VA = "0x666E380")]
	public ProbeVolumeDebugPass(RenderPassEvent evt, ComputeShader computeShader)
	{
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x666E420", Offset = "0x666D420", VA = "0x666E420")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData, TextureHandle depthPyramidBuffer, TextureHandle normalBuffer)
	{
	}
}
