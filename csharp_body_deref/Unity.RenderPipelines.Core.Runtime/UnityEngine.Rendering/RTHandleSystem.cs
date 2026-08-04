// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RTHandleSystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000188")]
public class RTHandleSystem : IDisposable
{
	[Token(Token = "0x2000189")]
	internal enum ResizeMode
	{
		[Token(Token = "0x40006BF")]
		Auto,
		[Token(Token = "0x40006C0")]
		OnDemand
	}

	[Token(Token = "0x40006B7")]
	[FieldOffset(Offset = "0x10")]
	private bool m_HardwareDynamicResRequested;

	[Token(Token = "0x40006B8")]
	[FieldOffset(Offset = "0x18")]
	private HashSet<RTHandle> m_AutoSizedRTs;

	[Token(Token = "0x40006B9")]
	[FieldOffset(Offset = "0x20")]
	private RTHandle[] m_AutoSizedRTsArray;

	[Token(Token = "0x40006BA")]
	[FieldOffset(Offset = "0x28")]
	private HashSet<RTHandle> m_ResizeOnDemandRTs;

	[Token(Token = "0x40006BB")]
	[FieldOffset(Offset = "0x30")]
	private RTHandleProperties m_RTHandleProperties;

	[Token(Token = "0x40006BC")]
	[FieldOffset(Offset = "0x60")]
	private int m_MaxWidths;

	[Token(Token = "0x40006BD")]
	[FieldOffset(Offset = "0x64")]
	private int m_MaxHeights;

	[Token(Token = "0x17000148")]
	public RTHandleProperties rtHandleProperties
	{
		[Token(Token = "0x6000B2E")]
		[Address(RVA = "0x4BE57B0", Offset = "0x4BE57B0", VA = "0x4BE57B0")]
		get
		{
			return default(RTHandleProperties);
		}
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x4BE5580", Offset = "0x4BE5580", VA = "0x4BE5580")]
	public RTHandleSystem()
	{
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x4BE57D0", Offset = "0x4BE57D0", VA = "0x4BE57D0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x4BE4A60", Offset = "0x4BE4A60", VA = "0x4BE4A60")]
	public void Initialize(int width, int height)
	{
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x4BE4DD0", Offset = "0x4BE4DD0", VA = "0x4BE4DD0")]
	public void Release(RTHandle rth)
	{
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x4BE59C0", Offset = "0x4BE59C0", VA = "0x4BE59C0")]
	internal void Remove(RTHandle rth)
	{
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x4BE5130", Offset = "0x4BE5130", VA = "0x4BE5130")]
	public void ResetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x4BE5090", Offset = "0x4BE5090", VA = "0x4BE5090")]
	public void SetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x4BE5A10", Offset = "0x4BE5A10", VA = "0x4BE5A10")]
	public void SetReferenceSize(int width, int height, bool reset)
	{
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x4BE51D0", Offset = "0x4BE51D0", VA = "0x4BE51D0")]
	internal Vector2 CalculateRatioAgainstMaxSize(in Vector2Int viewportSize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x4BE4E60", Offset = "0x4BE4E60", VA = "0x4BE4E60")]
	public void SetHardwareDynamicResolutionState(bool enableHWDynamicRes)
	{
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x4BE5FB0", Offset = "0x4BE5FB0", VA = "0x4BE5FB0")]
	internal void SwitchResizeMode(RTHandle rth, ResizeMode mode)
	{
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x4BE60B0", Offset = "0x4BE60B0", VA = "0x4BE60B0")]
	private void DemandResize(RTHandle rth)
	{
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x4BE6430", Offset = "0x4BE6430", VA = "0x4BE6430")]
	public int GetMaxWidth()
	{
		return default(int);
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x4BE6440", Offset = "0x4BE6440", VA = "0x4BE6440")]
	public int GetMaxHeight()
	{
		return default(int);
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x4BE57E0", Offset = "0x4BE57E0", VA = "0x4BE57E0")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x4BE5C30", Offset = "0x4BE5C30", VA = "0x4BE5C30")]
	private void Resize(int width, int height, bool sizeChanged)
	{
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x4BE2980", Offset = "0x4BE2980", VA = "0x4BE2980")]
	public RTHandle Alloc(int width, int height, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x4BE2BE0", Offset = "0x4BE2BE0", VA = "0x4BE2BE0")]
	public RTHandle Alloc(int width, int height, TextureWrapMode wrapModeU, TextureWrapMode wrapModeV, TextureWrapMode wrapModeW = TextureWrapMode.Repeat, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x4BE36B0", Offset = "0x4BE36B0", VA = "0x4BE36B0")]
	public RTHandle Alloc(Vector2 scaleFactor, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x4BE3E70", Offset = "0x4BE3E70", VA = "0x4BE3E70")]
	public RTHandle Alloc(ScaleFunc scaleFunc, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x4BE6530", Offset = "0x4BE6530", VA = "0x4BE6530")]
	private RTHandle AllocAutoSizedRenderTexture(int width, int height, int slices, DepthBits depthBufferBits, GraphicsFormat colorFormat, FilterMode filterMode, TextureWrapMode wrapMode, TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int anisoLevel, float mipMapBias, MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, RenderTextureMemoryless memoryless, VRTextureUsage vrUsage, string name)
	{
		return null;
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x4BE44C0", Offset = "0x4BE44C0", VA = "0x4BE44C0")]
	public RTHandle Alloc(RenderTexture texture)
	{
		return null;
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x4BE43A0", Offset = "0x4BE43A0", VA = "0x4BE43A0")]
	public RTHandle Alloc(Texture texture)
	{
		return null;
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x4BE4600", Offset = "0x4BE4600", VA = "0x4BE4600")]
	public RTHandle Alloc(RenderTargetIdentifier texture)
	{
		return null;
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x4BE4890", Offset = "0x4BE4890", VA = "0x4BE4890")]
	public RTHandle Alloc(RenderTargetIdentifier texture, string name)
	{
		return null;
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x4BE6AD0", Offset = "0x4BE6AD0", VA = "0x4BE6AD0")]
	private static RTHandle Alloc(RTHandle tex)
	{
		return null;
	}

	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x4BE6B30", Offset = "0x4BE6B30", VA = "0x4BE6B30")]
	internal string DumpRTInfo()
	{
		return null;
	}
}
