// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.DeferredPass
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal.Internal;

[Token(Token = "0x2000230")]
internal class DeferredPass : ScriptableRenderPass
{
	[Token(Token = "0x2000231")]
	private class PassData
	{
		[Token(Token = "0x4000D9C")]
		[FieldOffset(Offset = "0x10")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x4000D9D")]
		[FieldOffset(Offset = "0x18")]
		internal UniversalLightData lightData;

		[Token(Token = "0x4000D9E")]
		[FieldOffset(Offset = "0x20")]
		internal UniversalShadowData shadowData;

		[Token(Token = "0x4000D9F")]
		[FieldOffset(Offset = "0x28")]
		internal TextureHandle[] gbuffer;

		[Token(Token = "0x4000DA0")]
		[FieldOffset(Offset = "0x30")]
		internal DeferredLights deferredLights;

		[Token(Token = "0x6000C13")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000D9B")]
	[FieldOffset(Offset = "0x60")]
	private DeferredLights m_DeferredLights;

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x2CCA550", Offset = "0x2CC8B50", VA = "0x182CCA550")]
	public DeferredPass(RenderPassEvent evt, DeferredLights deferredLights)
	{
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x2CC9ED0", Offset = "0x2CC84D0", VA = "0x182CC9ED0")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData, TextureHandle color, TextureHandle depth, TextureHandle[] gbuffer)
	{
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x2CC9EB0", Offset = "0x2CC84B0", VA = "0x182CC9EB0", Slot = "10")]
	public override void OnCameraCleanup(CommandBuffer cmd)
	{
	}
}
