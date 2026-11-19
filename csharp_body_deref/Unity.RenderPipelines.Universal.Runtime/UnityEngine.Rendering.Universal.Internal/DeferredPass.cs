// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.DeferredPass
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x66D6B10", Offset = "0x66D5B10", VA = "0x66D6B10")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000D9B")]
	[FieldOffset(Offset = "0x60")]
	private DeferredLights m_DeferredLights;

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x66D6230", Offset = "0x66D5230", VA = "0x66D6230")]
	public DeferredPass(RenderPassEvent evt, DeferredLights deferredLights)
	{
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x66D62D0", Offset = "0x66D52D0", VA = "0x66D62D0")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData, TextureHandle color, TextureHandle depth, TextureHandle[] gbuffer)
	{
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x66D6AF0", Offset = "0x66D5AF0", VA = "0x66D6AF0", Slot = "10")]
	public override void OnCameraCleanup(CommandBuffer cmd)
	{
	}
}
