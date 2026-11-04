// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.CopyDepthPass
// Update status: NEW in this game update
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x1A2A530", Offset = "0x1A28B30", VA = "0x181A2A530")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000B88")]
		[Address(RVA = "0x1B6A390", Offset = "0x1B68990", VA = "0x181B6A390")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002CF")]
	internal bool CopyToDepth
	{
		[Token(Token = "0x6000B89")]
		[Address(RVA = "0x2CBC320", Offset = "0x2CBA920", VA = "0x182CBC320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B8A")]
		[Address(RVA = "0x2CBC350", Offset = "0x2CBA950", VA = "0x182CBC350")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002D0")]
	internal bool CopyToDepthXR
	{
		[Token(Token = "0x6000B8B")]
		[Address(RVA = "0x2511000", Offset = "0x250F600", VA = "0x182511000")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B8C")]
		[Address(RVA = "0x2CBC340", Offset = "0x2CBA940", VA = "0x182CBC340")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002D1")]
	internal bool CopyToBackbuffer
	{
		[Token(Token = "0x6000B8D")]
		[Address(RVA = "0x2510380", Offset = "0x250E980", VA = "0x182510380")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B8E")]
		[Address(RVA = "0x2CBC330", Offset = "0x2CBA930", VA = "0x182CBC330")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void OnCameraSetup(CommandBuffer cmd, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x2CBC1D0", Offset = "0x2CBA7D0", VA = "0x182CBC1D0")]
	public CopyDepthPass(RenderPassEvent evt, Shader copyDepthShader, [Optional][DefaultParameterValue(false)] bool shouldClear, [Optional][DefaultParameterValue(false)] bool copyToDepth, [Optional][DefaultParameterValue(false)] bool copyResolvedDepth, [Optional] string customPassName)
	{
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x2CBC1C0", Offset = "0x2CBA7C0", VA = "0x182CBC1C0")]
	public void Setup(RTHandle source, RTHandle destination)
	{
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x2CBB020", Offset = "0x2CB9620", VA = "0x182CBB020")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x2CBB070", Offset = "0x2CB9670", VA = "0x182CBB070")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData passData, RTHandle source, bool yflip)
	{
	}

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	public override void OnCameraCleanup(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x2CBB650", Offset = "0x2CB9C50", VA = "0x182CBB650")]
	public void Render(RenderGraph renderGraph, ContextContainer frameData, TextureHandle destination, TextureHandle source, bool bindAsCameraDepth = false, string passName = "Copy Depth")
	{
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x2CBB740", Offset = "0x2CB9D40", VA = "0x182CBB740")]
	public void Render(RenderGraph renderGraph, TextureHandle destination, TextureHandle source, UniversalResourceData resourceData, UniversalCameraData cameraData, bool bindAsCameraDepth = false, string passName = "Copy Depth")
	{
	}
}
