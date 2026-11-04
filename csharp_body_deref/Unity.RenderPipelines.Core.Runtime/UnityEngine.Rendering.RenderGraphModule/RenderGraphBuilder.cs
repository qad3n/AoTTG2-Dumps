// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphBuilder
// Update status: NEW in this game update
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
	[Address(RVA = "0x2B6BF80", Offset = "0x2B6A580", VA = "0x182B6BF80")]
	public TextureHandle UseColorBuffer(in TextureHandle input, int index)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600113E")]
	[Address(RVA = "0x2B6C0B0", Offset = "0x2B6A6B0", VA = "0x182B6C0B0")]
	public TextureHandle UseDepthBuffer(in TextureHandle input, DepthAccess flags)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600113F")]
	[Address(RVA = "0x2B6BD70", Offset = "0x2B6A370", VA = "0x182B6BD70")]
	public TextureHandle ReadTexture(in TextureHandle input)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001140")]
	[Address(RVA = "0x2B6C330", Offset = "0x2B6A930", VA = "0x182B6C330")]
	public TextureHandle WriteTexture(in TextureHandle input)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001141")]
	[Address(RVA = "0x2B6BF00", Offset = "0x2B6A500", VA = "0x182B6BF00")]
	public TextureHandle ReadWriteTexture(in TextureHandle input)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001142")]
	[Address(RVA = "0x2B6BB90", Offset = "0x2B6A190", VA = "0x182B6BB90")]
	public TextureHandle CreateTransientTexture(in TextureDesc desc)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001143")]
	[Address(RVA = "0x2B6BB00", Offset = "0x2B6A100", VA = "0x182B6BB00")]
	public TextureHandle CreateTransientTexture(in TextureHandle texture)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001144")]
	[Address(RVA = "0x2B6C2C0", Offset = "0x2B6A8C0", VA = "0x182B6C2C0")]
	public RayTracingAccelerationStructureHandle WriteRayTracingAccelerationStructure(in RayTracingAccelerationStructureHandle input)
	{
		return default(RayTracingAccelerationStructureHandle);
	}

	[Token(Token = "0x6001145")]
	[Address(RVA = "0x2B6BD20", Offset = "0x2B6A320", VA = "0x182B6BD20")]
	public RayTracingAccelerationStructureHandle ReadRayTracingAccelerationStructure(in RayTracingAccelerationStructureHandle input)
	{
		return default(RayTracingAccelerationStructureHandle);
	}

	[Token(Token = "0x6001146")]
	[Address(RVA = "0x2B6C200", Offset = "0x2B6A800", VA = "0x182B6C200")]
	public RendererListHandle UseRendererList(in RendererListHandle input)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001147")]
	[Address(RVA = "0x2B6BD20", Offset = "0x2B6A320", VA = "0x182B6BD20")]
	public BufferHandle ReadBuffer(in BufferHandle input)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001148")]
	[Address(RVA = "0x2B6C250", Offset = "0x2B6A850", VA = "0x182B6C250")]
	public BufferHandle WriteBuffer(in BufferHandle input)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001149")]
	[Address(RVA = "0x2B6BA80", Offset = "0x2B6A080", VA = "0x182B6BA80")]
	public BufferHandle CreateTransientBuffer(in BufferDesc desc)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x600114A")]
	[Address(RVA = "0x2B6B9E0", Offset = "0x2B69FE0", VA = "0x182B6B9E0")]
	public BufferHandle CreateTransientBuffer(in BufferHandle graphicsbuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x600114B")]
	public void SetRenderFunc<PassData>(BaseRenderFunc<PassData, RenderGraphContext> renderFunc) where PassData : class, new()
	{
	}

	[Token(Token = "0x600114C")]
	[Address(RVA = "0x2B6BCC0", Offset = "0x2B6A2C0", VA = "0x182B6BCC0")]
	public void EnableAsyncCompute(bool value)
	{
	}

	[Token(Token = "0x600114D")]
	[Address(RVA = "0x2B6B6F0", Offset = "0x2B69CF0", VA = "0x182B6B6F0")]
	public void AllowPassCulling(bool value)
	{
	}

	[Token(Token = "0x600114E")]
	[Address(RVA = "0x2B6BCE0", Offset = "0x2B6A2E0", VA = "0x182B6BCE0")]
	public void EnableFoveatedRasterization(bool value)
	{
	}

	[Token(Token = "0x600114F")]
	[Address(RVA = "0x2B6BC50", Offset = "0x2B6A250", VA = "0x182B6BC50", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001150")]
	[Address(RVA = "0x2B6B710", Offset = "0x2B69D10", VA = "0x182B6B710")]
	public void AllowRendererListCulling(bool value)
	{
	}

	[Token(Token = "0x6001151")]
	[Address(RVA = "0x2B6BC00", Offset = "0x2B6A200", VA = "0x182B6BC00")]
	public RendererListHandle DependsOn(in RendererListHandle input)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001152")]
	[Address(RVA = "0x2B6C390", Offset = "0x2B6A990", VA = "0x182B6C390")]
	internal RenderGraphBuilder(RenderGraphPass renderPass, RenderGraphResourceRegistry resources, RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x6001153")]
	[Address(RVA = "0x2B6BC50", Offset = "0x2B6A250", VA = "0x182B6BC50")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001154")]
	[Address(RVA = "0x2B6B730", Offset = "0x2B69D30", VA = "0x182B6B730")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckResource(in ResourceHandle res, bool checkTransientReadWrite = true)
	{
	}

	[Token(Token = "0x6001155")]
	[Address(RVA = "0x2B6BD00", Offset = "0x2B6A300", VA = "0x182B6BD00")]
	internal void GenerateDebugData(bool value)
	{
	}
}
