using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000187")]
public class RTHandleSystem : IDisposable
{
	[Token(Token = "0x2000188")]
	internal enum ResizeMode
	{
		[Token(Token = "0x40006BE")]
		Auto,
		[Token(Token = "0x40006BF")]
		OnDemand
	}

	[Token(Token = "0x40006B6")]
	[FieldOffset(Offset = "0x10")]
	private bool m_HardwareDynamicResRequested;

	[Token(Token = "0x40006B7")]
	[FieldOffset(Offset = "0x18")]
	private HashSet<RTHandle> m_AutoSizedRTs;

	[Token(Token = "0x40006B8")]
	[FieldOffset(Offset = "0x20")]
	private RTHandle[] m_AutoSizedRTsArray;

	[Token(Token = "0x40006B9")]
	[FieldOffset(Offset = "0x28")]
	private HashSet<RTHandle> m_ResizeOnDemandRTs;

	[Token(Token = "0x40006BA")]
	[FieldOffset(Offset = "0x30")]
	private RTHandleProperties m_RTHandleProperties;

	[Token(Token = "0x40006BB")]
	[FieldOffset(Offset = "0x60")]
	private int m_MaxWidths;

	[Token(Token = "0x40006BC")]
	[FieldOffset(Offset = "0x64")]
	private int m_MaxHeights;

	[Token(Token = "0x17000145")]
	public RTHandleProperties rtHandleProperties
	{
		[Token(Token = "0x6000B18")]
		[Address(RVA = "0x48BD720", Offset = "0x48BD720", VA = "0x48BD720")]
		get
		{
			return default(RTHandleProperties);
		}
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x48BD740", Offset = "0x48BD740", VA = "0x48BD740")]
	public RTHandleSystem()
	{
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x48BD800", Offset = "0x48BD800", VA = "0x48BD800", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x48BD9F0", Offset = "0x48BD9F0", VA = "0x48BD9F0")]
	public void Initialize(int width, int height)
	{
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x48BDCD0", Offset = "0x48BDCD0", VA = "0x48BDCD0")]
	public void Release(RTHandle rth)
	{
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x48BDCE0", Offset = "0x48BDCE0", VA = "0x48BDCE0")]
	internal void Remove(RTHandle rth)
	{
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x48BDD30", Offset = "0x48BDD30", VA = "0x48BDD30")]
	public void ResetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x48BDF60", Offset = "0x48BDF60", VA = "0x48BDF60")]
	public void SetReferenceSize(int width, int height)
	{
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x48BDD40", Offset = "0x48BDD40", VA = "0x48BDD40")]
	public void SetReferenceSize(int width, int height, bool reset)
	{
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x48BE2F0", Offset = "0x48BE2F0", VA = "0x48BE2F0")]
	internal Vector2 CalculateRatioAgainstMaxSize(in Vector2Int viewportSize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x48BE630", Offset = "0x48BE630", VA = "0x48BE630")]
	public void SetHardwareDynamicResolutionState(bool enableHWDynamicRes)
	{
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x48BE7D0", Offset = "0x48BE7D0", VA = "0x48BE7D0")]
	internal void SwitchResizeMode(RTHandle rth, ResizeMode mode)
	{
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x48BE8D0", Offset = "0x48BE8D0", VA = "0x48BE8D0")]
	private void DemandResize(RTHandle rth)
	{
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x48BEC50", Offset = "0x48BEC50", VA = "0x48BEC50")]
	public int GetMaxWidth()
	{
		return default(int);
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x48BEC60", Offset = "0x48BEC60", VA = "0x48BEC60")]
	public int GetMaxHeight()
	{
		return default(int);
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x48BD810", Offset = "0x48BD810", VA = "0x48BD810")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x48BDF70", Offset = "0x48BDF70", VA = "0x48BDF70")]
	private void Resize(int width, int height, bool sizeChanged)
	{
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x48BEC70", Offset = "0x48BEC70", VA = "0x48BEC70")]
	public RTHandle Alloc(int width, int height, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x48BED40", Offset = "0x48BED40", VA = "0x48BED40")]
	public RTHandle Alloc(int width, int height, TextureWrapMode wrapModeU, TextureWrapMode wrapModeV, TextureWrapMode wrapModeW = TextureWrapMode.Repeat, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x48BF490", Offset = "0x48BF490", VA = "0x48BF490")]
	public RTHandle Alloc(Vector2 scaleFactor, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x48BFD80", Offset = "0x48BFD80", VA = "0x48BFD80")]
	public RTHandle Alloc(ScaleFunc scaleFunc, int slices = 1, DepthBits depthBufferBits = DepthBits.None, GraphicsFormat colorFormat = GraphicsFormat.R8G8B8A8_SRGB, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Repeat, TextureDimension dimension = TextureDimension.Tex2D, bool enableRandomWrite = false, bool useMipMap = false, bool autoGenerateMips = true, bool isShadowMap = false, int anisoLevel = 1, float mipMapBias = 0f, MSAASamples msaaSamples = MSAASamples.None, bool bindTextureMS = false, bool useDynamicScale = false, RenderTextureMemoryless memoryless = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, string name = "")
	{
		return null;
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x48BF7E0", Offset = "0x48BF7E0", VA = "0x48BF7E0")]
	private RTHandle AllocAutoSizedRenderTexture(int width, int height, int slices, DepthBits depthBufferBits, GraphicsFormat colorFormat, FilterMode filterMode, TextureWrapMode wrapMode, TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int anisoLevel, float mipMapBias, MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, RenderTextureMemoryless memoryless, VRTextureUsage vrUsage, string name)
	{
		return null;
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x48BFEF0", Offset = "0x48BFEF0", VA = "0x48BFEF0")]
	public RTHandle Alloc(RenderTexture texture)
	{
		return null;
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x48BFF90", Offset = "0x48BFF90", VA = "0x48BFF90")]
	public RTHandle Alloc(Texture texture)
	{
		return null;
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x48C0030", Offset = "0x48C0030", VA = "0x48C0030")]
	public RTHandle Alloc(RenderTargetIdentifier texture)
	{
		return null;
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x48C0150", Offset = "0x48C0150", VA = "0x48C0150")]
	public RTHandle Alloc(RenderTargetIdentifier texture, string name)
	{
		return null;
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x48C0230", Offset = "0x48C0230", VA = "0x48C0230")]
	private static RTHandle Alloc(RTHandle tex)
	{
		return null;
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x48C0290", Offset = "0x48C0290", VA = "0x48C0290")]
	internal string DumpRTInfo()
	{
		return null;
	}
}
