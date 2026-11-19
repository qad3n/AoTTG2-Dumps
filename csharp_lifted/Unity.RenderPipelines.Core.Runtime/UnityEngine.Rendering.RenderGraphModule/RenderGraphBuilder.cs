// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000275")]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
[Obsolete("RenderGraphBuilder is deprecated, use IComputeRenderGraphBuilder/IRasterRenderGraphBuilder/IUnsafeRenderGraphBuilder instead.")]
public struct RenderGraphBuilder : IDisposable
{
	[Token(Token = "0x4000B18")]
	[FieldOffset(Offset = "0x0")]
	private RenderGraphPass m_RenderPass;

	[Token(Token = "0x4000B19")]
	[FieldOffset(Offset = "0x8")]
	private RenderGraphResourceRegistry m_Resources;

	[Token(Token = "0x4000B1A")]
	[FieldOffset(Offset = "0x10")]
	private RenderGraph m_RenderGraph;

	[Token(Token = "0x4000B1B")]
	[FieldOffset(Offset = "0x18")]
	private bool m_Disposed;

	[Token(Token = "0x600113D")]
	[Address(RVA = "0x6572760", Offset = "0x6571760", VA = "0x6572760")]
	public TextureHandle UseColorBuffer(in TextureHandle input, int index)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600113E")]
	[Address(RVA = "0x65727B0", Offset = "0x65717B0", VA = "0x65727B0")]
	public TextureHandle UseDepthBuffer(in TextureHandle input, DepthAccess flags)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600113F")]
	[Address(RVA = "0x6572900", Offset = "0x6571900", VA = "0x6572900")]
	public TextureHandle ReadTexture(in TextureHandle input)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001140")]
	[Address(RVA = "0x65728C0", Offset = "0x65718C0", VA = "0x65728C0")]
	public TextureHandle WriteTexture(in TextureHandle input)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001141")]
	[Address(RVA = "0x6572B20", Offset = "0x6571B20", VA = "0x6572B20")]
	public TextureHandle ReadWriteTexture(in TextureHandle input)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001142")]
	[Address(RVA = "0x6572B80", Offset = "0x6571B80", VA = "0x6572B80")]
	public TextureHandle CreateTransientTexture(in TextureDesc desc)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001143")]
	[Address(RVA = "0x6572BE0", Offset = "0x6571BE0", VA = "0x6572BE0")]
	public TextureHandle CreateTransientTexture(in TextureHandle texture)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001144")]
	[Address(RVA = "0x6572C50", Offset = "0x6571C50", VA = "0x6572C50")]
	public RayTracingAccelerationStructureHandle WriteRayTracingAccelerationStructure(in RayTracingAccelerationStructureHandle input)
	{
		return default(RayTracingAccelerationStructureHandle);
	}

	[Token(Token = "0x6001145")]
	[Address(RVA = "0x6572C90", Offset = "0x6571C90", VA = "0x6572C90")]
	public RayTracingAccelerationStructureHandle ReadRayTracingAccelerationStructure(in RayTracingAccelerationStructureHandle input)
	{
		return default(RayTracingAccelerationStructureHandle);
	}

	[Token(Token = "0x6001146")]
	[Address(RVA = "0x6572CB0", Offset = "0x6571CB0", VA = "0x6572CB0")]
	public RendererListHandle UseRendererList(in RendererListHandle input)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001147")]
	[Address(RVA = "0x6572D60", Offset = "0x6571D60", VA = "0x6572D60")]
	public BufferHandle ReadBuffer(in BufferHandle input)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001148")]
	[Address(RVA = "0x6572D80", Offset = "0x6571D80", VA = "0x6572D80")]
	public BufferHandle WriteBuffer(in BufferHandle input)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001149")]
	[Address(RVA = "0x6572DC0", Offset = "0x6571DC0", VA = "0x6572DC0")]
	public BufferHandle CreateTransientBuffer(in BufferDesc desc)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x600114A")]
	[Address(RVA = "0x6572E10", Offset = "0x6571E10", VA = "0x6572E10")]
	public BufferHandle CreateTransientBuffer(in BufferHandle graphicsbuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x600114B")]
	public void SetRenderFunc<PassData>(BaseRenderFunc<PassData, RenderGraphContext> renderFunc) where PassData : class, new()
	{
	}

	[Token(Token = "0x600114C")]
	[Address(RVA = "0x6572E80", Offset = "0x6571E80", VA = "0x6572E80")]
	public void EnableAsyncCompute(bool value)
	{
	}

	[Token(Token = "0x600114D")]
	[Address(RVA = "0x6572EA0", Offset = "0x6571EA0", VA = "0x6572EA0")]
	public void AllowPassCulling(bool value)
	{
	}

	[Token(Token = "0x600114E")]
	[Address(RVA = "0x6572EC0", Offset = "0x6571EC0", VA = "0x6572EC0")]
	public void EnableFoveatedRasterization(bool value)
	{
	}

	[Token(Token = "0x600114F")]
	[Address(RVA = "0x6572EE0", Offset = "0x6571EE0", VA = "0x6572EE0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001150")]
	[Address(RVA = "0x6572FA0", Offset = "0x6571FA0", VA = "0x6572FA0")]
	public void AllowRendererListCulling(bool value)
	{
	}

	[Token(Token = "0x6001151")]
	[Address(RVA = "0x6572FC0", Offset = "0x6571FC0", VA = "0x6572FC0")]
	public RendererListHandle DependsOn(in RendererListHandle input)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001152")]
	[Address(RVA = "0x6573060", Offset = "0x6572060", VA = "0x6573060")]
	internal RenderGraphBuilder(RenderGraphPass renderPass, RenderGraphResourceRegistry resources, RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x6001153")]
	[Address(RVA = "0x6572F40", Offset = "0x6571F40", VA = "0x6572F40")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001154")]
	[Address(RVA = "0x65730A0", Offset = "0x65720A0", VA = "0x65730A0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckResource(in ResourceHandle res, bool checkTransientReadWrite = true)
	{
	}

	[Token(Token = "0x6001155")]
	[Address(RVA = "0x65733D0", Offset = "0x65723D0", VA = "0x65733D0")]
	internal void GenerateDebugData(bool value)
	{
	}
}
