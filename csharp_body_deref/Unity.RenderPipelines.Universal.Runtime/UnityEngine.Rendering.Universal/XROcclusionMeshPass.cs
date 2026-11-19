// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.XROcclusionMeshPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000BB")]
public class XROcclusionMeshPass : ScriptableRenderPass
{
	[Token(Token = "0x20000BC")]
	private class PassData
	{
		[Token(Token = "0x400040B")]
		[FieldOffset(Offset = "0x10")]
		internal XRPass xr;

		[Token(Token = "0x400040C")]
		[FieldOffset(Offset = "0x18")]
		internal bool isActiveTargetBackBuffer;

		[Token(Token = "0x400040D")]
		[FieldOffset(Offset = "0x19")]
		internal bool shouldYFlip;

		[Token(Token = "0x400040E")]
		[FieldOffset(Offset = "0x1C")]
		internal TextureHandle cameraColorAttachment;

		[Token(Token = "0x6000490")]
		[Address(RVA = "0x662A150", Offset = "0x6629150", VA = "0x662A150")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x400040A")]
	[FieldOffset(Offset = "0x5C")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public bool m_IsActiveTargetBackBuffer;

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x6629830", Offset = "0x6628830", VA = "0x6629830", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x6629840", Offset = "0x6628840", VA = "0x6629840")]
	public XROcclusionMeshPass(RenderPassEvent evt)
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x66298C0", Offset = "0x66288C0", VA = "0x66298C0")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData data)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x6629940", Offset = "0x6628940", VA = "0x6629940")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData, in TextureHandle cameraColorAttachment, in TextureHandle cameraDepthAttachment)
	{
	}
}
