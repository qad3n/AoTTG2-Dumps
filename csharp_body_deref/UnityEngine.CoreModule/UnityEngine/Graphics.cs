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
	[Address(RVA = "0x4A99260", Offset = "0x4A99260", VA = "0x4A99260")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::GetMaxDrawMeshInstanceCount", IsThreadSafe = true)]
	private static extern int Internal_GetMaxDrawMeshInstanceCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000322")]
	[Address(RVA = "0x4A99290", Offset = "0x4A99290", VA = "0x4A99290")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::SetNullRT")]
	private static extern void Internal_SetNullRT();

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x4A992C0", Offset = "0x4A992C0", VA = "0x4A992C0")]
	[UnityEngine.Bindings.NativeMethod(Name = "GraphicsScripting::SetRTSimple", IsFreeFunction = true, ThrowsException = true)]
	private static void Internal_SetRTSimple(RenderBuffer color, RenderBuffer depth, int mip, CubemapFace face, int depthSlice)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000324")]
	[Address(RVA = "0x4A993D0", Offset = "0x4A993D0", VA = "0x4A993D0")]
	[UnityEngine.Bindings.StaticAccessor("GetGfxDevice()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static extern void ClearRandomWriteTargets();

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x4A99400", Offset = "0x4A99400", VA = "0x4A99400")]
	[UnityEngine.Bindings.FreeFunction("CopyTexture")]
	private static void CopyTexture_Slice(Texture src, int srcElement, int srcMip, Texture dst, int dstElement, int dstMip)
	{
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x4A995F0", Offset = "0x4A995F0", VA = "0x4A995F0")]
	[UnityEngine.Bindings.FreeFunction("CopyTexture")]
	private static void CopyTexture_Region(Texture src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, Texture dst, int dstElement, int dstMip, int dstX, int dstY)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000327")]
	[Address(RVA = "0x4A99800", Offset = "0x4A99800", VA = "0x4A99800")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::DrawTexture")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule" })]
	internal static extern void Internal_DrawTexture(ref Internal_DrawTextureArguments args);

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x4A99830", Offset = "0x4A99830", VA = "0x4A99830")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::DrawMesh")]
	private static void Internal_DrawMesh(Mesh mesh, int submeshIndex, Matrix4x4 matrix, Material material, int layer, Camera camera, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, Transform probeAnchor, LightProbeUsage lightProbeUsage, LightProbeProxyVolume lightProbeProxyVolume)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x4A99B10", Offset = "0x4A99B10", VA = "0x4A99B10")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::DrawMeshInstanced")]
	private static void Internal_DrawMeshInstanced([UnityEngine.Bindings.NotNull("NullExceptionObject")] Mesh mesh, int submeshIndex, [UnityEngine.Bindings.NotNull("NullExceptionObject")] Material material, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, int layer, Camera camera, LightProbeUsage lightProbeUsage, LightProbeProxyVolume lightProbeProxyVolume)
	{
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x4A99E30", Offset = "0x4A99E30", VA = "0x4A99E30")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::BlitMaterial")]
	private static void Internal_BlitMaterial5(Texture source, RenderTexture dest, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Material mat, int pass, bool setRT)
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x4A9A090", Offset = "0x4A9A090", VA = "0x4A9A090")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::BlitMultitap")]
	private static void Internal_BlitMultiTap4(Texture source, RenderTexture dest, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Material mat, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Vector2[] offsets)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x4A9A370", Offset = "0x4A9A370", VA = "0x4A9A370")]
	[UnityEngine.Bindings.FreeFunction("GraphicsScripting::Blit")]
	private static void Blit2(Texture source, RenderTexture dest)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600032D")]
	[Address(RVA = "0x4A9A520", Offset = "0x4A9A520", VA = "0x4A9A520")]
	[UnityEngine.Bindings.NativeMethod(Name = "GraphicsScripting::ExecuteCommandBuffer", IsFreeFunction = true, ThrowsException = true)]
	public static extern void ExecuteCommandBuffer([UnityEngine.Bindings.NotNull("ArgumentNullException")] CommandBuffer buffer);

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x4A9A550", Offset = "0x4A9A550", VA = "0x4A9A550")]
	internal static void SetRenderTargetImpl(RenderBuffer colorBuffer, RenderBuffer depthBuffer, int mipLevel, CubemapFace face, int depthSlice)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x4A9A650", Offset = "0x4A9A650", VA = "0x4A9A650")]
	internal static void SetRenderTargetImpl(RenderTexture rt, int mipLevel, CubemapFace face, int depthSlice)
	{
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x4A9A780", Offset = "0x4A9A780", VA = "0x4A9A780")]
	public static void SetRenderTarget(RenderTexture rt, [DefaultValue("0")] int mipLevel, [DefaultValue("CubemapFace.Unknown")] CubemapFace face, [DefaultValue("0")] int depthSlice)
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x4A9A7E0", Offset = "0x4A9A7E0", VA = "0x4A9A7E0")]
	public static void CopyTexture(Texture src, int srcElement, int srcMip, Texture dst, int dstElement, int dstMip)
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x4A9A860", Offset = "0x4A9A860", VA = "0x4A9A860")]
	public static void CopyTexture(Texture src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, Texture dst, int dstElement, int dstMip, int dstX, int dstY)
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x4A9A920", Offset = "0x4A9A920", VA = "0x4A9A920")]
	public static void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int layer, Camera camera, int submeshIndex, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, Transform probeAnchor, LightProbeUsage lightProbeUsage, [DefaultValue("null")] LightProbeProxyVolume lightProbeProxyVolume)
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x4A9AB30", Offset = "0x4A9AB30", VA = "0x4A9AB30")]
	public static void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, Matrix4x4[] matrices, [DefaultValue("matrices.Length")] int count, [DefaultValue("null")] MaterialPropertyBlock properties, [DefaultValue("ShadowCastingMode.On")] ShadowCastingMode castShadows, [DefaultValue("true")] bool receiveShadows, [DefaultValue("0")] int layer, [DefaultValue("null")] Camera camera, [DefaultValue("LightProbeUsage.BlendProbes")] LightProbeUsage lightProbeUsage, [DefaultValue("null")] LightProbeProxyVolume lightProbeProxyVolume)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x4A9B1F0", Offset = "0x4A9B1F0", VA = "0x4A9B1F0")]
	public static void Blit(Texture source, RenderTexture dest)
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x4A9B240", Offset = "0x4A9B240", VA = "0x4A9B240")]
	public static void Blit(Texture source, RenderTexture dest, Material mat, [DefaultValue("-1")] int pass)
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x4A9B2B0", Offset = "0x4A9B2B0", VA = "0x4A9B2B0")]
	public static void Blit(Texture source, RenderTexture dest, Material mat)
	{
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x4A9B370", Offset = "0x4A9B370", VA = "0x4A9B370")]
	public static void BlitMultiTap(Texture source, RenderTexture dest, Material mat, params Vector2[] offsets)
	{
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x4A9B440", Offset = "0x4A9B440", VA = "0x4A9B440")]
	[ExcludeFromDocs]
	public static void DrawMesh(Mesh mesh, Vector3 position, Quaternion rotation, Material material, int layer, Camera camera)
	{
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x4A9B6D0", Offset = "0x4A9B6D0", VA = "0x4A9B6D0")]
	[ExcludeFromDocs]
	public static void SetRenderTarget(RenderTexture rt)
	{
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x4A9B780", Offset = "0x4A9B780", VA = "0x4A9B780")]
	[ExcludeFromDocs]
	public static void SetRenderTarget(RenderTexture rt, int mipLevel)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600033D")]
	[Address(RVA = "0x4A99380", Offset = "0x4A99380", VA = "0x4A99380")]
	private static extern void Internal_SetRTSimple_Injected([In] ref RenderBuffer color, [In] ref RenderBuffer depth, int mip, CubemapFace face, int depthSlice);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600033E")]
	[Address(RVA = "0x4A99590", Offset = "0x4A99590", VA = "0x4A99590")]
	private static extern void CopyTexture_Slice_Injected(IntPtr src, int srcElement, int srcMip, IntPtr dst, int dstElement, int dstMip);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600033F")]
	[Address(RVA = "0x4A997A0", Offset = "0x4A997A0", VA = "0x4A997A0")]
	private static extern void CopyTexture_Region_Injected(IntPtr src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, IntPtr dst, int dstElement, int dstMip, int dstX, int dstY);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000340")]
	[Address(RVA = "0x4A99AB0", Offset = "0x4A99AB0", VA = "0x4A99AB0")]
	private static extern void Internal_DrawMesh_Injected(IntPtr mesh, int submeshIndex, [In] ref Matrix4x4 matrix, IntPtr material, int layer, IntPtr camera, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, IntPtr probeAnchor, LightProbeUsage lightProbeUsage, IntPtr lightProbeProxyVolume);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000341")]
	[Address(RVA = "0x4A99DD0", Offset = "0x4A99DD0", VA = "0x4A99DD0")]
	private static extern void Internal_DrawMeshInstanced_Injected(IntPtr mesh, int submeshIndex, IntPtr material, ref ManagedSpanWrapper matrices, int count, MaterialPropertyBlock properties, ShadowCastingMode castShadows, bool receiveShadows, int layer, IntPtr camera, LightProbeUsage lightProbeUsage, IntPtr lightProbeProxyVolume);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000342")]
	[Address(RVA = "0x4A9A040", Offset = "0x4A9A040", VA = "0x4A9A040")]
	private static extern void Internal_BlitMaterial5_Injected(IntPtr source, IntPtr dest, IntPtr mat, int pass, bool setRT);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000343")]
	[Address(RVA = "0x4A9A320", Offset = "0x4A9A320", VA = "0x4A9A320")]
	private static extern void Internal_BlitMultiTap4_Injected(IntPtr source, IntPtr dest, IntPtr mat, ref ManagedSpanWrapper offsets);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000344")]
	[Address(RVA = "0x4A9A4E0", Offset = "0x4A9A4E0", VA = "0x4A9A4E0")]
	private static extern void Blit2_Injected(IntPtr source, IntPtr dest);
}
