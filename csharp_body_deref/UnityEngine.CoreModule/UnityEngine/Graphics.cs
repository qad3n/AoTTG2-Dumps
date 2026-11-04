// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Graphics
// Update status: CHANGED in this game update
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

[Token(Token = "0x20000D0")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/PlayerSettings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/LightProbeProxyVolume.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CopyTexture.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ColorGamut.h")]
public class Graphics
{
	[Token(Token = "0x4000222")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly int kMaxDrawMeshInstanceCount;

	[Token(Token = "0x4000223")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static Dictionary<int, RenderInstancedDataLayout> s_RenderInstancedDataLayouts;

	[Token(Token = "0x170000C0")]
	[UnityEngine.Bindings.StaticAccessor("GetGfxDevice()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static extern GraphicsTier activeTier
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000460")]
		[Address(RVA = "0x2ECAF90", Offset = "0x2EC9590", VA = "0x182ECAF90")]
		get;
	}

	[Token(Token = "0x170000C1")]
	public static bool preserveFramebufferAlpha
	{
		[Token(Token = "0x6000462")]
		[Address(RVA = "0x2ECB020", Offset = "0x2EC9620", VA = "0x182ECB020")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C2")]
	public static OpenGLESVersion minOpenGLESVersion
	{
		[Token(Token = "0x6000464")]
		[Address(RVA = "0x2ECAFC0", Offset = "0x2EC95C0", VA = "0x182ECAFC0")]
		get
		{
			return default(OpenGLESVersion);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600045F")]
	[Address(RVA = "0x2ECA840", Offset = "0x2EC8E40", VA = "0x182ECA840")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::GetMaxDrawMeshInstanceCount", IsThreadSafe = true)]
	private static extern int Internal_GetMaxDrawMeshInstanceCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000461")]
	[Address(RVA = "0x2ECA290", Offset = "0x2EC8890", VA = "0x182ECA290")]
	[UnityEngine.Bindings.NativeMethod(Name = "GetPreserveFramebufferAlpha")]
	[UnityEngine.Bindings.StaticAccessor("GetPlayerSettings()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	internal static extern bool GetPreserveFramebufferAlpha();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000463")]
	[Address(RVA = "0x2ECA260", Offset = "0x2EC8860", VA = "0x182ECA260")]
	[UnityEngine.Bindings.StaticAccessor("GetPlayerSettings()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	[UnityEngine.Bindings.NativeMethod(Name = "GetMinOpenGLESVersion")]
	internal static extern OpenGLESVersion GetMinOpenGLESVersion();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000465")]
	[Address(RVA = "0x2ECA870", Offset = "0x2EC8E70", VA = "0x182ECA870")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::SetNullRT")]
	private static extern void Internal_SetNullRT();

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x2ECA8F0", Offset = "0x2EC8EF0", VA = "0x182ECA8F0")]
	[UnityEngine.Bindings.NativeMethod(Name = "GraphicsScripting::SetRTSimple", IsFreeFunction = true, ThrowsException = true)]
	private static void Internal_SetRTSimple(RenderBuffer color, RenderBuffer depth, int mip, CubemapFace face, int depthSlice)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000467")]
	[Address(RVA = "0x2EC8A70", Offset = "0x2EC7070", VA = "0x182EC8A70")]
	[UnityEngine.Bindings.StaticAccessor("GetGfxDevice()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static extern void ClearRandomWriteTargets();

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x2EC8C20", Offset = "0x2EC7220", VA = "0x182EC8C20")]
	[UnityEngine.Bindings.FreeFunction("CopyTexture")]
	private static void CopyTexture_Slice(Texture src, int srcElement, int srcMip, Texture dst, int dstElement, int dstMip)
	{
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x2EC8AF0", Offset = "0x2EC70F0", VA = "0x182EC8AF0")]
	[UnityEngine.Bindings.FreeFunction("CopyTextureRegion")]
	private static void CopyTexture_Region(Texture src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, Texture dst, int dstElement, int dstMip, int dstX, int dstY)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600046A")]
	[Address(RVA = "0x2ECA800", Offset = "0x2EC8E00", VA = "0x182ECA800")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::DrawTexture")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule" })]
	internal static extern void Internal_DrawTexture(ref Internal_DrawTextureArguments args);

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x2ECA620", Offset = "0x2EC8C20", VA = "0x182ECA620")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::DrawMesh")]
	private static void Internal_DrawMesh(Mesh mesh, int submeshIndex, Matrix4x4 matrix, Material material, int layer, Camera camera, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, Transform probeAnchor, LightProbeUsage lightProbeUsage, LightProbeProxyVolume lightProbeProxyVolume)
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x2ECA320", Offset = "0x2EC8920", VA = "0x182ECA320")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::DrawMeshInstanced")]
	private static void Internal_DrawMeshInstanced([UnityEngine.Bindings.NotNull] Mesh mesh, int submeshIndex, [UnityEngine.Bindings.NotNull] Material material, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, int layer, Camera camera, LightProbeUsage lightProbeUsage, LightProbeProxyVolume lightProbeProxyVolume)
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x2EC8850", Offset = "0x2EC6E50", VA = "0x182EC8850")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::Blit")]
	private static void Blit4(Texture source, RenderTexture dest, Vector2 scale, Vector2 offset)
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x2ECA1A0", Offset = "0x2EC87A0", VA = "0x182ECA1A0")]
	[UnityEngine.Bindings.NativeMethod(Name = "GraphicsScripting::ExecuteCommandBuffer", IsFreeFunction = true, ThrowsException = true)]
	public static void ExecuteCommandBuffer([UnityEngine.Bindings.NotNull] CommandBuffer buffer)
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x2ECAB40", Offset = "0x2EC9140", VA = "0x182ECAB40")]
	internal static void SetRenderTargetImpl(RenderBuffer colorBuffer, RenderBuffer depthBuffer, int mipLevel, CubemapFace face, int depthSlice)
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x2ECA980", Offset = "0x2EC8F80", VA = "0x182ECA980")]
	internal static void SetRenderTargetImpl(RenderTexture rt, int mipLevel, CubemapFace face, int depthSlice)
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x2ECACE0", Offset = "0x2EC92E0", VA = "0x182ECACE0")]
	public static void SetRenderTarget(RenderTexture rt, [DefaultValue("0")] int mipLevel, [DefaultValue("CubemapFace.Unknown")] CubemapFace face, [DefaultValue("0")] int depthSlice)
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x2EC8CF0", Offset = "0x2EC72F0", VA = "0x182EC8CF0")]
	public static void CopyTexture(Texture src, int srcElement, int srcMip, Texture dst, int dstElement, int dstMip)
	{
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x2EC8DF0", Offset = "0x2EC73F0", VA = "0x182EC8DF0")]
	public static void CopyTexture(Texture src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, Texture dst, int dstElement, int dstMip, int dstX, int dstY)
	{
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x2EC9E60", Offset = "0x2EC8460", VA = "0x182EC9E60")]
	public static void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int layer, Camera camera, int submeshIndex, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, Transform probeAnchor, LightProbeUsage lightProbeUsage, [DefaultValue("null")] LightProbeProxyVolume lightProbeProxyVolume)
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x2EC8FC0", Offset = "0x2EC75C0", VA = "0x182EC8FC0")]
	public static void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, Matrix4x4[] matrices, [DefaultValue("matrices.Length")] int count, [DefaultValue("null")] MaterialPropertyBlock properties, [DefaultValue("ShadowCastingMode.On")] ShadowCastingMode castShadows, [DefaultValue("true")] bool receiveShadows, [DefaultValue("0")] int layer, [DefaultValue("null")] Camera camera, [DefaultValue("LightProbeUsage.BlendProbes")] LightProbeUsage lightProbeUsage, [DefaultValue("null")] LightProbeProxyVolume lightProbeProxyVolume)
	{
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x2EC8940", Offset = "0x2EC6F40", VA = "0x182EC8940")]
	public static void Blit(Texture source, RenderTexture dest, Vector2 scale, Vector2 offset)
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x2EC9710", Offset = "0x2EC7D10", VA = "0x182EC9710")]
	[ExcludeFromDocs]
	public static void DrawMesh(Mesh mesh, Vector3 position, Quaternion rotation, Material material, int layer, Camera camera)
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x2EC9C20", Offset = "0x2EC8220", VA = "0x182EC9C20")]
	[ExcludeFromDocs]
	public static void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int layer, Camera camera, int submeshIndex, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x2EC99E0", Offset = "0x2EC7FE0", VA = "0x182EC99E0")]
	[ExcludeFromDocs]
	public static void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int layer, Camera camera, int submeshIndex, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows)
	{
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x2EC94F0", Offset = "0x2EC7AF0", VA = "0x182EC94F0")]
	[ExcludeFromDocs]
	public static void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int layer, Camera camera, int submeshIndex, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, Transform probeAnchor, LightProbeUsage lightProbeUsage)
	{
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x2EC8F00", Offset = "0x2EC7500", VA = "0x182EC8F00")]
	[ExcludeFromDocs]
	public static void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, int layer, Camera camera)
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x2ECAC10", Offset = "0x2EC9210", VA = "0x182ECAC10")]
	[ExcludeFromDocs]
	public static void SetRenderTarget(RenderTexture rt)
	{
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x2ECAC70", Offset = "0x2EC9270", VA = "0x182ECAC70")]
	[ExcludeFromDocs]
	public static void SetRenderTarget(RenderTexture rt, int mipLevel)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600047F")]
	[Address(RVA = "0x2ECA8A0", Offset = "0x2EC8EA0", VA = "0x182ECA8A0")]
	private static extern void Internal_SetRTSimple_Injected([In] ref RenderBuffer color, [In] ref RenderBuffer depth, int mip, CubemapFace face, int depthSlice);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000480")]
	[Address(RVA = "0x2EC8BD0", Offset = "0x2EC71D0", VA = "0x182EC8BD0")]
	private static extern void CopyTexture_Slice_Injected(IntPtr src, int srcElement, int srcMip, IntPtr dst, int dstElement, int dstMip);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000481")]
	[Address(RVA = "0x2EC8AA0", Offset = "0x2EC70A0", VA = "0x182EC8AA0")]
	private static extern void CopyTexture_Region_Injected(IntPtr src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, IntPtr dst, int dstElement, int dstMip, int dstX, int dstY);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000482")]
	[Address(RVA = "0x2ECA5C0", Offset = "0x2EC8BC0", VA = "0x182ECA5C0")]
	private static extern void Internal_DrawMesh_Injected(IntPtr mesh, int submeshIndex, [In] ref Matrix4x4 matrix, IntPtr material, int layer, IntPtr camera, IntPtr properties, ShadowCastingMode castShadows, bool receiveShadows, IntPtr probeAnchor, LightProbeUsage lightProbeUsage, IntPtr lightProbeProxyVolume);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000483")]
	[Address(RVA = "0x2ECA2C0", Offset = "0x2EC88C0", VA = "0x182ECA2C0")]
	private static extern void Internal_DrawMeshInstanced_Injected(IntPtr mesh, int submeshIndex, IntPtr material, ref ManagedSpanWrapper matrices, int count, IntPtr properties, ShadowCastingMode castShadows, bool receiveShadows, int layer, IntPtr camera, LightProbeUsage lightProbeUsage, IntPtr lightProbeProxyVolume);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000484")]
	[Address(RVA = "0x2EC8800", Offset = "0x2EC6E00", VA = "0x182EC8800")]
	private static extern void Blit4_Injected(IntPtr source, IntPtr dest, [In] ref Vector2 scale, [In] ref Vector2 offset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000485")]
	[Address(RVA = "0x2ECA160", Offset = "0x2EC8760", VA = "0x182ECA160")]
	private static extern void ExecuteCommandBuffer_Injected(IntPtr buffer);
}
