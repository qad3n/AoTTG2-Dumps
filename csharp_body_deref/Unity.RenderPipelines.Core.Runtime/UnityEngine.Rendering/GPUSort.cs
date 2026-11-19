// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUSort
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001CF")]
public struct GPUSort
{
	[Token(Token = "0x20001D0")]
	public struct Args
	{
		[Token(Token = "0x4000910")]
		[FieldOffset(Offset = "0x0")]
		public uint count;

		[Token(Token = "0x4000911")]
		[FieldOffset(Offset = "0x4")]
		public uint maxDepth;

		[Token(Token = "0x4000912")]
		[FieldOffset(Offset = "0x8")]
		public GraphicsBuffer inputKeys;

		[Token(Token = "0x4000913")]
		[FieldOffset(Offset = "0x10")]
		public GraphicsBuffer inputValues;

		[Token(Token = "0x4000914")]
		[FieldOffset(Offset = "0x18")]
		public SupportResources resources;

		[Token(Token = "0x4000915")]
		[FieldOffset(Offset = "0x28")]
		internal int workGroupCount;
	}

	[Token(Token = "0x20001D1")]
	public struct RenderGraphResources
	{
		[Token(Token = "0x4000916")]
		[FieldOffset(Offset = "0x0")]
		public BufferHandle sortBufferKeys;

		[Token(Token = "0x4000917")]
		[FieldOffset(Offset = "0xC")]
		public BufferHandle sortBufferValues;

		[Token(Token = "0x6000E30")]
		[Address(RVA = "0x654AC30", Offset = "0x6549C30", VA = "0x654AC30")]
		[Obsolete("This Create signature is deprecated and will be removed in the future. Please use Create(IBaseRenderGraphBuilder) instead. #from(6000.3)")]
		public static RenderGraphResources Create(int count, RenderGraph renderGraph, RenderGraphBuilder builder)
		{
			return default(RenderGraphResources);
		}

		[Token(Token = "0x6000E31")]
		[Address(RVA = "0x654AD40", Offset = "0x6549D40", VA = "0x654AD40")]
		public static RenderGraphResources Create(int count, RenderGraph renderGraph, IBaseRenderGraphBuilder builder)
		{
			return default(RenderGraphResources);
		}
	}

	[Token(Token = "0x20001D2")]
	public struct SupportResources
	{
		[Token(Token = "0x4000918")]
		[FieldOffset(Offset = "0x0")]
		public GraphicsBuffer sortBufferKeys;

		[Token(Token = "0x4000919")]
		[FieldOffset(Offset = "0x8")]
		public GraphicsBuffer sortBufferValues;

		[Token(Token = "0x6000E32")]
		[Address(RVA = "0x654AF20", Offset = "0x6549F20", VA = "0x654AF20")]
		public static SupportResources Load(RenderGraphResources renderGraphResources)
		{
			return default(SupportResources);
		}

		[Token(Token = "0x6000E33")]
		[Address(RVA = "0x654AFC0", Offset = "0x6549FC0", VA = "0x654AFC0")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x20001D3")]
	public struct SystemResources
	{
		[Token(Token = "0x400091A")]
		[FieldOffset(Offset = "0x0")]
		public ComputeShader computeAsset;
	}

	[Token(Token = "0x20001D4")]
	private enum Stage
	{
		[Token(Token = "0x400091C")]
		LocalBMS,
		[Token(Token = "0x400091D")]
		LocalDisperse,
		[Token(Token = "0x400091E")]
		BigFlip,
		[Token(Token = "0x400091F")]
		BigDisperse
	}

	[Token(Token = "0x400090D")]
	private const uint kWorkGroupSize = 1024u;

	[Token(Token = "0x400090E")]
	[FieldOffset(Offset = "0x0")]
	private LocalKeyword[] m_Keywords;

	[Token(Token = "0x400090F")]
	[FieldOffset(Offset = "0x8")]
	private SystemResources resources;

	[Token(Token = "0x6000E2A")]
	[Address(RVA = "0x654A2F0", Offset = "0x65492F0", VA = "0x654A2F0")]
	public GPUSort(SystemResources resources)
	{
	}

	[Token(Token = "0x6000E2B")]
	[Address(RVA = "0x654A4F0", Offset = "0x65494F0", VA = "0x654A4F0")]
	private void DispatchStage(CommandBuffer cmd, Args args, uint h, Stage stage)
	{
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x654A7D0", Offset = "0x65497D0", VA = "0x654A7D0")]
	private void CopyBuffer(CommandBuffer cmd, GraphicsBuffer src, GraphicsBuffer dst)
	{
	}

	[Token(Token = "0x6000E2D")]
	[Address(RVA = "0x654A9B0", Offset = "0x65499B0", VA = "0x654A9B0")]
	internal static int DivRoundUp(int x, int y)
	{
		return default(int);
	}

	[Token(Token = "0x6000E2E")]
	[Address(RVA = "0x654A9C0", Offset = "0x65499C0", VA = "0x654A9C0")]
	public void Dispatch(IComputeCommandBuffer cmd, Args args)
	{
	}

	[Token(Token = "0x6000E2F")]
	[Address(RVA = "0x654AA30", Offset = "0x6549A30", VA = "0x654AA30")]
	public void Dispatch(CommandBuffer cmd, Args args)
	{
	}
}
