// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.CopyDepthPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal.Internal;

[Token(Token = "0x2000213")]
public class CopyDepthPass : ScriptableRenderPass
{
	[Token(Token = "0x2000214")]
	private static class ShaderConstants
	{
		[Token(Token = "0x4000CED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly int _CameraDepthAttachment;

		[Token(Token = "0x4000CEE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public static readonly int _CameraDepthTexture;

		[Token(Token = "0x4000CEF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public static readonly int _ZWriteShaderHandle;
	}

	[Token(Token = "0x2000215")]
	private class PassData
	{
		[Token(Token = "0x4000CF0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal TextureHandle source;

		[Token(Token = "0x4000CF1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal TextureHandle destination;

		[Token(Token = "0x4000CF2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x4000CF3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		internal Material copyDepthMaterial;

		[Token(Token = "0x4000CF4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		internal int msaaSamples;

		[Token(Token = "0x4000CF5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		internal bool copyResolvedDepth;

		[Token(Token = "0x4000CF6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x45")]
		internal bool copyToDepth;

		[Token(Token = "0x4000CF7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x46")]
		internal bool isDstBackbuffer;

		[Token(Token = "0x6000B97")]
		[Address(RVA = "0x66C7430", Offset = "0x66C6430", VA = "0x66C7430")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000CEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Material m_CopyDepthMaterial;

	[Token(Token = "0x4000CEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	internal bool m_CopyResolvedDepth;

	[Token(Token = "0x170002CE")]
	internal int MsaaSamples
	{
		[Token(Token = "0x6000B87")]
		[Address(RVA = "0x66C5CD0", Offset = "0x66C4CD0", VA = "0x66C5CD0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000B88")]
		[Address(RVA = "0x66C5CE0", Offset = "0x66C4CE0", VA = "0x66C5CE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002CF")]
	internal bool CopyToDepth
	{
		[Token(Token = "0x6000B89")]
		[Address(RVA = "0x66C5CF0", Offset = "0x66C4CF0", VA = "0x66C5CF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B8A")]
		[Address(RVA = "0x66C5D00", Offset = "0x66C4D00", VA = "0x66C5D00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002D0")]
	internal bool CopyToDepthXR
	{
		[Token(Token = "0x6000B8B")]
		[Address(RVA = "0x66C5D10", Offset = "0x66C4D10", VA = "0x66C5D10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B8C")]
		[Address(RVA = "0x66C5D20", Offset = "0x66C4D20", VA = "0x66C5D20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002D1")]
	internal bool CopyToBackbuffer
	{
		[Token(Token = "0x6000B8D")]
		[Address(RVA = "0x66C5D30", Offset = "0x66C4D30", VA = "0x66C5D30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B8E")]
		[Address(RVA = "0x66C5D40", Offset = "0x66C4D40", VA = "0x66C5D40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x66C5CB0", Offset = "0x66C4CB0", VA = "0x66C5CB0", Slot = "6")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void OnCameraSetup(CommandBuffer cmd, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x66C5CC0", Offset = "0x66C4CC0", VA = "0x66C5CC0", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x66C5D50", Offset = "0x66C4D50", VA = "0x66C5D50")]
	public CopyDepthPass(RenderPassEvent evt, Shader copyDepthShader, [Optional][DefaultParameterValue(false)] bool shouldClear, [Optional][DefaultParameterValue(false)] bool copyToDepth, [Optional][DefaultParameterValue(false)] bool copyResolvedDepth, [Optional] string customPassName)
	{
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x66C5EB0", Offset = "0x66C4EB0", VA = "0x66C5EB0")]
	public void Setup(RTHandle source, RTHandle destination)
	{
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x66C5EC0", Offset = "0x66C4EC0", VA = "0x66C5EC0")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x66C5F20", Offset = "0x66C4F20", VA = "0x66C5F20")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData passData, RTHandle source, bool yflip)
	{
	}

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x66C65E0", Offset = "0x66C55E0", VA = "0x66C65E0", Slot = "10")]
	public override void OnCameraCleanup(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x66C65F0", Offset = "0x66C55F0", VA = "0x66C65F0")]
	public void Render(RenderGraph renderGraph, ContextContainer frameData, TextureHandle destination, TextureHandle source, bool bindAsCameraDepth = false, string passName = "Copy Depth")
	{
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x66C66B0", Offset = "0x66C56B0", VA = "0x66C66B0")]
	public void Render(RenderGraph renderGraph, TextureHandle destination, TextureHandle source, UniversalResourceData resourceData, UniversalCameraData cameraData, bool bindAsCameraDepth = false, string passName = "Copy Depth")
	{
	}
}
