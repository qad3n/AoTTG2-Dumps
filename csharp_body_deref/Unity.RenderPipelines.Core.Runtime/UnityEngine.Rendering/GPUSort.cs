using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001B7")]
public struct GPUSort
{
	[Token(Token = "0x20001B8")]
	public struct Args
	{
		[Token(Token = "0x400079F")]
		[FieldOffset(Offset = "0x0")]
		public uint count;

		[Token(Token = "0x40007A0")]
		[FieldOffset(Offset = "0x4")]
		public uint maxDepth;

		[Token(Token = "0x40007A1")]
		[FieldOffset(Offset = "0x8")]
		public GraphicsBuffer inputKeys;

		[Token(Token = "0x40007A2")]
		[FieldOffset(Offset = "0x10")]
		public GraphicsBuffer inputValues;

		[Token(Token = "0x40007A3")]
		[FieldOffset(Offset = "0x18")]
		public SupportResources resources;

		[Token(Token = "0x40007A4")]
		[FieldOffset(Offset = "0x28")]
		internal int workGroupCount;
	}

	[Token(Token = "0x20001B9")]
	public struct RenderGraphResources
	{
		[Token(Token = "0x40007A5")]
		[FieldOffset(Offset = "0x0")]
		public BufferHandle sortBufferKeys;

		[Token(Token = "0x40007A6")]
		[FieldOffset(Offset = "0xC")]
		public BufferHandle sortBufferValues;

		[Token(Token = "0x6000CF7")]
		[Address(RVA = "0x48DB450", Offset = "0x48DB450", VA = "0x48DB450")]
		public static RenderGraphResources Create(int count, RenderGraph renderGraph, RenderGraphBuilder builder)
		{
			return default(RenderGraphResources);
		}
	}

	[Token(Token = "0x20001BA")]
	public struct SupportResources
	{
		[Token(Token = "0x40007A7")]
		[FieldOffset(Offset = "0x0")]
		public GraphicsBuffer sortBufferKeys;

		[Token(Token = "0x40007A8")]
		[FieldOffset(Offset = "0x8")]
		public GraphicsBuffer sortBufferValues;

		[Token(Token = "0x6000CF8")]
		[Address(RVA = "0x48DB560", Offset = "0x48DB560", VA = "0x48DB560")]
		public static SupportResources Load(RenderGraphResources renderGraphResources)
		{
			return default(SupportResources);
		}

		[Token(Token = "0x6000CF9")]
		[Address(RVA = "0x48DB600", Offset = "0x48DB600", VA = "0x48DB600")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x20001BB")]
	public struct SystemResources
	{
		[Token(Token = "0x40007A9")]
		[FieldOffset(Offset = "0x0")]
		public ComputeShader computeAsset;
	}

	[Token(Token = "0x20001BC")]
	private enum Stage
	{
		[Token(Token = "0x40007AB")]
		LocalBMS,
		[Token(Token = "0x40007AC")]
		LocalDisperse,
		[Token(Token = "0x40007AD")]
		BigFlip,
		[Token(Token = "0x40007AE")]
		BigDisperse
	}

	[Token(Token = "0x400079B")]
	private const uint kWorkGroupSize = 1024u;

	[Token(Token = "0x400079C")]
	[FieldOffset(Offset = "0x0")]
	private string[] m_StageNames;

	[Token(Token = "0x400079D")]
	[FieldOffset(Offset = "0x8")]
	private LocalKeyword[] m_Keywords;

	[Token(Token = "0x400079E")]
	[FieldOffset(Offset = "0x10")]
	private SystemResources resources;

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x48DA8E0", Offset = "0x48DA8E0", VA = "0x48DA8E0")]
	public GPUSort(SystemResources resources)
	{
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x48DAD10", Offset = "0x48DAD10", VA = "0x48DAD10")]
	private void DispatchStage(CommandBuffer cmd, Args args, uint h, Stage stage)
	{
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x48DB040", Offset = "0x48DB040", VA = "0x48DB040")]
	private void CopyBuffer(CommandBuffer cmd, GraphicsBuffer src, GraphicsBuffer dst)
	{
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x48DB240", Offset = "0x48DB240", VA = "0x48DB240")]
	internal static int DivRoundUp(int x, int y)
	{
		return default(int);
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x48DB250", Offset = "0x48DB250", VA = "0x48DB250")]
	public void Dispatch(CommandBuffer cmd, Args args)
	{
	}
}
