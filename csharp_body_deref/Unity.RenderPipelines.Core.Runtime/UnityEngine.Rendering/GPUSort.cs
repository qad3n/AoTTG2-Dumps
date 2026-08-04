// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUSort
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001B7")]
public struct GPUSort
{
	[Token(Token = "0x20001B8")]
	private enum Stage
	{
		[Token(Token = "0x40007A0")]
		LocalBMS,
		[Token(Token = "0x40007A1")]
		LocalDisperse,
		[Token(Token = "0x40007A2")]
		BigFlip,
		[Token(Token = "0x40007A3")]
		BigDisperse
	}

	[Token(Token = "0x20001B9")]
	public struct Args
	{
		[Token(Token = "0x40007A4")]
		[FieldOffset(Offset = "0x0")]
		public uint count;

		[Token(Token = "0x40007A5")]
		[FieldOffset(Offset = "0x4")]
		public uint maxDepth;

		[Token(Token = "0x40007A6")]
		[FieldOffset(Offset = "0x8")]
		public GraphicsBuffer inputKeys;

		[Token(Token = "0x40007A7")]
		[FieldOffset(Offset = "0x10")]
		public GraphicsBuffer inputValues;

		[Token(Token = "0x40007A8")]
		[FieldOffset(Offset = "0x18")]
		public SupportResources resources;

		[Token(Token = "0x40007A9")]
		[FieldOffset(Offset = "0x28")]
		internal int workGroupCount;
	}

	[Token(Token = "0x20001BA")]
	public struct RenderGraphResources
	{
		[Token(Token = "0x40007AA")]
		[FieldOffset(Offset = "0x0")]
		public BufferHandle sortBufferKeys;

		[Token(Token = "0x40007AB")]
		[FieldOffset(Offset = "0xC")]
		public BufferHandle sortBufferValues;

		[Token(Token = "0x6000CF7")]
		[Address(RVA = "0x4C004C0", Offset = "0x4C004C0", VA = "0x4C004C0")]
		public static RenderGraphResources Create(int count, RenderGraph renderGraph, RenderGraphBuilder builder)
		{
			return default(RenderGraphResources);
		}
	}

	[Token(Token = "0x20001BB")]
	public struct SupportResources
	{
		[Token(Token = "0x40007AC")]
		[FieldOffset(Offset = "0x0")]
		public GraphicsBuffer sortBufferKeys;

		[Token(Token = "0x40007AD")]
		[FieldOffset(Offset = "0x8")]
		public GraphicsBuffer sortBufferValues;

		[Token(Token = "0x6000CF8")]
		[Address(RVA = "0x4C005D0", Offset = "0x4C005D0", VA = "0x4C005D0")]
		public static SupportResources Load(RenderGraphResources renderGraphResources)
		{
			return default(SupportResources);
		}

		[Token(Token = "0x6000CF9")]
		[Address(RVA = "0x4C00670", Offset = "0x4C00670", VA = "0x4C00670")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x20001BC")]
	public struct SystemResources
	{
		[Token(Token = "0x40007AE")]
		[FieldOffset(Offset = "0x0")]
		public ComputeShader computeAsset;
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
	[Address(RVA = "0x4BFF950", Offset = "0x4BFF950", VA = "0x4BFF950")]
	public GPUSort(SystemResources resources)
	{
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x4BFFD80", Offset = "0x4BFFD80", VA = "0x4BFFD80")]
	private void DispatchStage(CommandBuffer cmd, Args args, uint h, Stage stage)
	{
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x4C000B0", Offset = "0x4C000B0", VA = "0x4C000B0")]
	private void CopyBuffer(CommandBuffer cmd, GraphicsBuffer src, GraphicsBuffer dst)
	{
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x4C002B0", Offset = "0x4C002B0", VA = "0x4C002B0")]
	internal static int DivRoundUp(int x, int y)
	{
		return default(int);
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x4C002C0", Offset = "0x4C002C0", VA = "0x4C002C0")]
	public void Dispatch(CommandBuffer cmd, Args args)
	{
	}
}
