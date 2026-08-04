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

[Token(Token = "0x20000AC")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ColorGamut.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CopyTexture.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/PlayerSettings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/LightProbeProxyVolume.h")]
public class Graphics
{
	[Token(Token = "0x40001C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly int kMaxDrawMeshInstanceCount;

	[Token(Token = "0x40001CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static Dictionary<int, RenderInstancedDataLayout> s_RenderInstancedDataLayouts;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000321")]
	[Address(RVA = "0x4DC0A80", Offset = "0x4DC0A80", VA = "0x4DC0A80")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::GetMaxDrawMeshInstanceCount", IsThreadSafe = true)]
	private static extern int Internal_GetMaxDrawMeshInstanceCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000322")]
	[Address(RVA = "0x4DC0AB0", Offset = "0x4DC0AB0", VA = "0x4DC0AB0")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::SetNullRT")]
	private static extern void Internal_SetNullRT();

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x4DC0AE0", Offset = "0x4DC0AE0", VA = "0x4DC0AE0")]
	[UnityEngine.Bindings.NativeMethod(Name = "GraphicsScripting::SetRTSimple", IsFreeFunction = true, ThrowsException = true)]
	private static void Internal_SetRTSimple(RenderBuffer color, RenderBuffer depth, int mip, CubemapFace face, int depthSlice)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000324")]
	[Address(RVA = "0x4DC0BF0", Offset = "0x4DC0BF0", VA = "0x4DC0BF0")]
	[UnityEngine.Bindings.StaticAccessor("GetGfxDevice()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static extern void ClearRandomWriteTargets();

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x4DC0C20", Offset = "0x4DC0C20", VA = "0x4DC0C20")]
	[UnityEngine.Bindings.FreeFunction("CopyTexture")]
	private static void CopyTexture_Slice(Texture src, int srcElement, int srcMip, Texture dst, int dstElement, int dstMip)
	{
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x4DC0E10", Offset = "0x4DC0E10", VA = "0x4DC0E10")]
	[UnityEngine.Bindings.FreeFunction("CopyTexture")]
	private static void CopyTexture_Region(Texture src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, Texture dst, int dstElement, int dstMip, int dstX, int dstY)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000327")]
	[Address(RVA = "0x4DC1020", Offset = "0x4DC1020", VA = "0x4DC1020")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::DrawTexture")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule" })]
	internal static extern void Internal_DrawTexture(ref Internal_DrawTextureArguments args);

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x4DC1050", Offset = "0x4DC1050", VA = "0x4DC1050")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::DrawMesh")]
	private static void Internal_DrawMesh(Mesh mesh, int submeshIndex, Matrix4x4 matrix, Material material, int layer, Camera camera, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, Transform probeAnchor, LightProbeUsage lightProbeUsage, LightProbeProxyVolume lightProbeProxyVolume)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x4DC1330", Offset = "0x4DC1330", VA = "0x4DC1330")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::DrawMeshInstanced")]
	private static void Internal_DrawMeshInstanced([UnityEngine.Bindings.NotNull("NullExceptionObject")] Mesh mesh, int submeshIndex, [UnityEngine.Bindings.NotNull("NullExceptionObject")] Material material, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, int layer, Camera camera, LightProbeUsage lightProbeUsage, LightProbeProxyVolume lightProbeProxyVolume)
	{
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x4DC1650", Offset = "0x4DC1650", VA = "0x4DC1650")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::BlitMaterial")]
	private static void Internal_BlitMaterial5(Texture source, RenderTexture dest, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Material mat, int pass, bool setRT)
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x4DC18B0", Offset = "0x4DC18B0", VA = "0x4DC18B0")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::BlitMultitap")]
	private static void Internal_BlitMultiTap4(Texture source, RenderTexture dest, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Material mat, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Vector2[] offsets)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x4DC1B90", Offset = "0x4DC1B90", VA = "0x4DC1B90")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::Blit")]
	private static void Blit2(Texture source, RenderTexture dest)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600032D")]
	[Address(RVA = "0x4DC1D40", Offset = "0x4DC1D40", VA = "0x4DC1D40")]
	[UnityEngine.Bindings.NativeMethod(Name = "GraphicsScripting::ExecuteCommandBuffer", IsFreeFunction = true, ThrowsException = true)]
	public static extern void ExecuteCommandBuffer([UnityEngine.Bindings.NotNull("ArgumentNullException")] CommandBuffer buffer);

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x4DC1D70", Offset = "0x4DC1D70", VA = "0x4DC1D70")]
	internal static void SetRenderTargetImpl(RenderBuffer colorBuffer, RenderBuffer depthBuffer, int mipLevel, CubemapFace face, int depthSlice)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x4DC1E70", Offset = "0x4DC1E70", VA = "0x4DC1E70")]
	internal static void SetRenderTargetImpl(RenderTexture rt, int mipLevel, CubemapFace face, int depthSlice)
	{
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x4DC1FA0", Offset = "0x4DC1FA0", VA = "0x4DC1FA0")]
	public static void SetRenderTarget(RenderTexture rt, [DefaultValue("0")] int mipLevel, [DefaultValue("CubemapFace.Unknown")] CubemapFace face, [DefaultValue("0")] int depthSlice)
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x4DC2000", Offset = "0x4DC2000", VA = "0x4DC2000")]
	public static void CopyTexture(Texture src, int srcElement, int srcMip, Texture dst, int dstElement, int dstMip)
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x4DC2080", Offset = "0x4DC2080", VA = "0x4DC2080")]
	public static void CopyTexture(Texture src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, Texture dst, int dstElement, int dstMip, int dstX, int dstY)
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x4DC2140", Offset = "0x4DC2140", VA = "0x4DC2140")]
	public static void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int layer, Camera camera, int submeshIndex, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, Transform probeAnchor, LightProbeUsage lightProbeUsage, [DefaultValue("null")] LightProbeProxyVolume lightProbeProxyVolume)
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x4DC2350", Offset = "0x4DC2350", VA = "0x4DC2350")]
	public static void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, Matrix4x4[] matrices, [DefaultValue("matrices.Length")] int count, [DefaultValue("null")] MaterialPropertyBlock properties, [DefaultValue("ShadowCastingMode.On")] ShadowCastingMode castShadows, [DefaultValue("true")] bool receiveShadows, [DefaultValue("0")] int layer, [DefaultValue("null")] Camera camera, [DefaultValue("LightProbeUsage.BlendProbes")] LightProbeUsage lightProbeUsage, [DefaultValue("null")] LightProbeProxyVolume lightProbeProxyVolume)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x4DC2A10", Offset = "0x4DC2A10", VA = "0x4DC2A10")]
	public static void Blit(Texture source, RenderTexture dest)
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x4DC2A60", Offset = "0x4DC2A60", VA = "0x4DC2A60")]
	public static void Blit(Texture source, RenderTexture dest, Material mat, [DefaultValue("-1")] int pass)
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x4DC2AD0", Offset = "0x4DC2AD0", VA = "0x4DC2AD0")]
	public static void Blit(Texture source, RenderTexture dest, Material mat)
	{
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x4DC2B90", Offset = "0x4DC2B90", VA = "0x4DC2B90")]
	public static void BlitMultiTap(Texture source, RenderTexture dest, Material mat, params Vector2[] offsets)
	{
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x4DC2C60", Offset = "0x4DC2C60", VA = "0x4DC2C60")]
	[ExcludeFromDocs]
	public static void DrawMesh(Mesh mesh, Vector3 position, Quaternion rotation, Material material, int layer, Camera camera)
	{
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x4DC2EF0", Offset = "0x4DC2EF0", VA = "0x4DC2EF0")]
	[ExcludeFromDocs]
	public static void SetRenderTarget(RenderTexture rt)
	{
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x4DC2FA0", Offset = "0x4DC2FA0", VA = "0x4DC2FA0")]
	[ExcludeFromDocs]
	public static void SetRenderTarget(RenderTexture rt, int mipLevel)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600033D")]
	[Address(RVA = "0x4DC0BA0", Offset = "0x4DC0BA0", VA = "0x4DC0BA0")]
	private static extern void Internal_SetRTSimple_Injected([In] ref RenderBuffer color, [In] ref RenderBuffer depth, int mip, CubemapFace face, int depthSlice);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600033E")]
	[Address(RVA = "0x4DC0DB0", Offset = "0x4DC0DB0", VA = "0x4DC0DB0")]
	private static extern void CopyTexture_Slice_Injected(IntPtr src, int srcElement, int srcMip, IntPtr dst, int dstElement, int dstMip);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600033F")]
	[Address(RVA = "0x4DC0FC0", Offset = "0x4DC0FC0", VA = "0x4DC0FC0")]
	private static extern void CopyTexture_Region_Injected(IntPtr src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, IntPtr dst, int dstElement, int dstMip, int dstX, int dstY);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000340")]
	[Address(RVA = "0x4DC12D0", Offset = "0x4DC12D0", VA = "0x4DC12D0")]
	private static extern void Internal_DrawMesh_Injected(IntPtr mesh, int submeshIndex, [In] ref Matrix4x4 matrix, IntPtr material, int layer, IntPtr camera, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, IntPtr probeAnchor, LightProbeUsage lightProbeUsage, IntPtr lightProbeProxyVolume);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000341")]
	[Address(RVA = "0x4DC15F0", Offset = "0x4DC15F0", VA = "0x4DC15F0")]
	private static extern void Internal_DrawMeshInstanced_Injected(IntPtr mesh, int submeshIndex, IntPtr material, ref ManagedSpanWrapper matrices, int count, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, int layer, IntPtr camera, LightProbeUsage lightProbeUsage, IntPtr lightProbeProxyVolume);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000342")]
	[Address(RVA = "0x4DC1860", Offset = "0x4DC1860", VA = "0x4DC1860")]
	private static extern void Internal_BlitMaterial5_Injected(IntPtr source, IntPtr dest, IntPtr mat, int pass, bool setRT);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000343")]
	[Address(RVA = "0x4DC1B40", Offset = "0x4DC1B40", VA = "0x4DC1B40")]
	private static extern void Internal_BlitMultiTap4_Injected(IntPtr source, IntPtr dest, IntPtr mat, ref ManagedSpanWrapper offsets);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000344")]
	[Address(RVA = "0x4DC1D00", Offset = "0x4DC1D00", VA = "0x4DC1D00")]
	private static extern void Blit2_Injected(IntPtr source, IntPtr dest);
}
