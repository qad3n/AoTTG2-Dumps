// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.XROcclusionMeshPass
// Update status: NEW in this game update
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x400040A")]
	[FieldOffset(Offset = "0x60")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public bool m_IsActiveTargetBackBuffer;

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x2C52280", Offset = "0x2C50880", VA = "0x182C52280")]
	public XROcclusionMeshPass(RenderPassEvent evt)
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x2C51BF0", Offset = "0x2C501F0", VA = "0x182C51BF0")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData data)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x2C51C80", Offset = "0x2C50280", VA = "0x182C51C80")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData, in TextureHandle cameraColorAttachment, in TextureHandle cameraDepthAttachment)
	{
	}
}
