// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Graphics
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Rendering;

namespace UnityEngine;

[Token(Token = "0x20000D1")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/LightProbeProxyVolume.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/PlayerSettings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ColorGamut.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CopyTexture.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
public class Graphics
{
	[Token(Token = "0x4000227")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly int kMaxDrawMeshInstanceCount;

	[Token(Token = "0x4000228")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static Dictionary<int, RenderInstancedDataLayout> s_RenderInstancedDataLayouts;

	[Token(Token = "0x170000C6")]
	[UnityEngine.Bindings.StaticAccessor("GetGfxDevice()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static extern GraphicsTier activeTier
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600046F")]
		[Address(RVA = "0x68CFCF0", Offset = "0x68CECF0", VA = "0x68CFCF0")]
		get;
	}

	[Token(Token = "0x170000C7")]
	public static bool preserveFramebufferAlpha
	{
		[Token(Token = "0x6000471")]
		[Address(RVA = "0x68CFD50", Offset = "0x68CED50", VA = "0x68CFD50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C8")]
	public static OpenGLESVersion minOpenGLESVersion
	{
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x68CFE00", Offset = "0x68CEE00", VA = "0x68CFE00")]
		get
		{
			return default(OpenGLESVersion);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600046E")]
	[Address(RVA = "0x68CFCC0", Offset = "0x68CECC0", VA = "0x68CFCC0")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::GetMaxDrawMeshInstanceCount", IsThreadSafe = true)]
	private static extern int Internal_GetMaxDrawMeshInstanceCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000470")]
	[Address(RVA = "0x68CFD20", Offset = "0x68CED20", VA = "0x68CFD20")]
	[UnityEngine.Bindings.NativeMethod(Name = "GetPreserveFramebufferAlpha")]
	[UnityEngine.Bindings.StaticAccessor("GetPlayerSettings()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	internal static extern bool GetPreserveFramebufferAlpha();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000472")]
	[Address(RVA = "0x68CFDD0", Offset = "0x68CEDD0", VA = "0x68CFDD0")]
	[UnityEngine.Bindings.NativeMethod(Name = "GetMinOpenGLESVersion")]
	[UnityEngine.Bindings.StaticAccessor("GetPlayerSettings()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	internal static extern OpenGLESVersion GetMinOpenGLESVersion();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000474")]
	[Address(RVA = "0x68CFE80", Offset = "0x68CEE80", VA = "0x68CFE80")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::SetNullRT")]
	private static extern void Internal_SetNullRT();

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x68CFEB0", Offset = "0x68CEEB0", VA = "0x68CFEB0")]
	[UnityEngine.Bindings.NativeMethod(Name = "GraphicsScripting::SetRTSimple", IsFreeFunction = true, ThrowsException = true)]
	private static void Internal_SetRTSimple(RenderBuffer color, RenderBuffer depth, int mip, CubemapFace face, int depthSlice)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000476")]
	[Address(RVA = "0x68CFFC0", Offset = "0x68CEFC0", VA = "0x68CFFC0")]
	[UnityEngine.Bindings.StaticAccessor("GetGfxDevice()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static extern void ClearRandomWriteTargets();

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x68CFFF0", Offset = "0x68CEFF0", VA = "0x68CFFF0")]
	[UnityEngine.Bindings.FreeFunction("CopyTexture")]
	private static void CopyTexture_Slice(Texture src, int srcElement, int srcMip, Texture dst, int dstElement, int dstMip)
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x68D01B0", Offset = "0x68CF1B0", VA = "0x68D01B0")]
	[UnityEngine.Bindings.FreeFunction("CopyTextureRegion")]
	private static void CopyTexture_Region(Texture src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, Texture dst, int dstElement, int dstMip, int dstX, int dstY)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000479")]
	[Address(RVA = "0x68D03A0", Offset = "0x68CF3A0", VA = "0x68D03A0")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::DrawTexture")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule" })]
	internal static extern void Internal_DrawTexture(ref Internal_DrawTextureArguments args);

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x68D03D0", Offset = "0x68CF3D0", VA = "0x68D03D0")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::DrawMesh")]
	private static void Internal_DrawMesh(Mesh mesh, int submeshIndex, Matrix4x4 matrix, Material material, int layer, Camera camera, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, Transform probeAnchor, LightProbeUsage lightProbeUsage, LightProbeProxyVolume lightProbeProxyVolume)
	{
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x68D0680", Offset = "0x68CF680", VA = "0x68D0680")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::DrawMeshInstanced")]
	private static void Internal_DrawMeshInstanced([UnityEngine.Bindings.NotNull] Mesh mesh, int submeshIndex, [UnityEngine.Bindings.NotNull] Material material, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, int layer, Camera camera, LightProbeUsage lightProbeUsage, LightProbeProxyVolume lightProbeProxyVolume)
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x68D09D0", Offset = "0x68CF9D0", VA = "0x68D09D0")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::Blit")]
	private static void Blit4(Texture source, RenderTexture dest, Vector2 scale, Vector2 offset)
	{
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x68D0B90", Offset = "0x68CFB90", VA = "0x68D0B90")]
	[UnityEngine.Bindings.NativeMethod(Name = "GraphicsScripting::ExecuteCommandBuffer", IsFreeFunction = true, ThrowsException = true)]
	public static void ExecuteCommandBuffer([UnityEngine.Bindings.NotNull] CommandBuffer buffer)
	{
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x68D0CA0", Offset = "0x68CFCA0", VA = "0x68D0CA0")]
	internal static void SetRenderTargetImpl(RenderBuffer colorBuffer, RenderBuffer depthBuffer, int mipLevel, CubemapFace face, int depthSlice)
	{
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x68D0DA0", Offset = "0x68CFDA0", VA = "0x68D0DA0")]
	internal static void SetRenderTargetImpl(RenderTexture rt, int mipLevel, CubemapFace face, int depthSlice)
	{
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x68D0ED0", Offset = "0x68CFED0", VA = "0x68D0ED0")]
	public static void SetRenderTarget(RenderTexture rt, [DefaultValue("0")] int mipLevel, [DefaultValue("CubemapFace.Unknown")] CubemapFace face, [DefaultValue("0")] int depthSlice)
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x68D0F30", Offset = "0x68CFF30", VA = "0x68D0F30")]
	public static void CopyTexture(Texture src, int srcElement, int srcMip, Texture dst, int dstElement, int dstMip)
	{
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x68D0FB0", Offset = "0x68CFFB0", VA = "0x68D0FB0")]
	public static void CopyTexture(Texture src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, Texture dst, int dstElement, int dstMip, int dstX, int dstY)
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x68D1070", Offset = "0x68D0070", VA = "0x68D1070")]
	public static void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int layer, Camera camera, int submeshIndex, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, Transform probeAnchor, LightProbeUsage lightProbeUsage, [DefaultValue("null")] LightProbeProxyVolume lightProbeProxyVolume)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x68D1220", Offset = "0x68D0220", VA = "0x68D1220")]
	public static void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, Matrix4x4[] matrices, [DefaultValue("matrices.Length")] int count, [DefaultValue("null")] MaterialPropertyBlock properties, [DefaultValue("ShadowCastingMode.On")] ShadowCastingMode castShadows, [DefaultValue("true")] bool receiveShadows, [DefaultValue("0")] int layer, [DefaultValue("null")] Camera camera, [DefaultValue("LightProbeUsage.BlendProbes")] LightProbeUsage lightProbeUsage, [DefaultValue("null")] LightProbeProxyVolume lightProbeProxyVolume)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x68D1650", Offset = "0x68D0650", VA = "0x68D1650")]
	public static void Blit(Texture source, RenderTexture dest, Vector2 scale, Vector2 offset)
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x68D16D0", Offset = "0x68D06D0", VA = "0x68D16D0")]
	[ExcludeFromDocs]
	public static void DrawMesh(Mesh mesh, Vector3 position, Quaternion rotation, Material material, int layer, Camera camera)
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x68D1920", Offset = "0x68D0920", VA = "0x68D1920")]
	[ExcludeFromDocs]
	public static void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int layer, Camera camera, int submeshIndex, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x68D1A90", Offset = "0x68D0A90", VA = "0x68D1A90")]
	[ExcludeFromDocs]
	public static void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int layer, Camera camera, int submeshIndex, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows)
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x68D1C00", Offset = "0x68D0C00", VA = "0x68D1C00")]
	[ExcludeFromDocs]
	public static void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int layer, Camera camera, int submeshIndex, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, Transform probeAnchor, LightProbeUsage lightProbeUsage)
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x68D1D30", Offset = "0x68D0D30", VA = "0x68D1D30")]
	[ExcludeFromDocs]
	public static void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, int layer, Camera camera)
	{
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x68D1DF0", Offset = "0x68D0DF0", VA = "0x68D1DF0")]
	[ExcludeFromDocs]
	public static void SetRenderTarget(RenderTexture rt)
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x68D1EA0", Offset = "0x68D0EA0", VA = "0x68D1EA0")]
	[ExcludeFromDocs]
	public static void SetRenderTarget(RenderTexture rt, int mipLevel)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600048E")]
	[Address(RVA = "0x68CFF70", Offset = "0x68CEF70", VA = "0x68CFF70")]
	private static extern void Internal_SetRTSimple_Injected([In] ref RenderBuffer color, [In] ref RenderBuffer depth, int mip, CubemapFace face, int depthSlice);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600048F")]
	[Address(RVA = "0x68D0150", Offset = "0x68CF150", VA = "0x68D0150")]
	private static extern void CopyTexture_Slice_Injected(IntPtr src, int srcElement, int srcMip, IntPtr dst, int dstElement, int dstMip);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000490")]
	[Address(RVA = "0x68D0340", Offset = "0x68CF340", VA = "0x68D0340")]
	private static extern void CopyTexture_Region_Injected(IntPtr src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, IntPtr dst, int dstElement, int dstMip, int dstX, int dstY);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000491")]
	[Address(RVA = "0x68D0620", Offset = "0x68CF620", VA = "0x68D0620")]
	private static extern void Internal_DrawMesh_Injected(IntPtr mesh, int submeshIndex, [In] ref Matrix4x4 matrix, IntPtr material, int layer, IntPtr camera, IntPtr properties, ShadowCastingMode castShadows, bool receiveShadows, IntPtr probeAnchor, LightProbeUsage lightProbeUsage, IntPtr lightProbeProxyVolume);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000492")]
	[Address(RVA = "0x68D0970", Offset = "0x68CF970", VA = "0x68D0970")]
	private static extern void Internal_DrawMeshInstanced_Injected(IntPtr mesh, int submeshIndex, IntPtr material, ref ManagedSpanWrapper matrices, int count, IntPtr properties, ShadowCastingMode castShadows, bool receiveShadows, int layer, IntPtr camera, LightProbeUsage lightProbeUsage, IntPtr lightProbeProxyVolume);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000493")]
	[Address(RVA = "0x68D0B40", Offset = "0x68CFB40", VA = "0x68D0B40")]
	private static extern void Blit4_Injected(IntPtr source, IntPtr dest, [In] ref Vector2 scale, [In] ref Vector2 offset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000494")]
	[Address(RVA = "0x68D0C70", Offset = "0x68CFC70", VA = "0x68D0C70")]
	private static extern void ExecuteCommandBuffer_Injected(IntPtr buffer);
}
