// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IndirectBufferContextStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000B2")]
internal struct IndirectBufferContextStorage : IDisposable
{
	[Token(Token = "0x4000354")]
	private const int kAllocatorCount = 2;

	[Token(Token = "0x4000355")]
	internal const int kInstanceInfoGpuOffsetMultiplier = 2;

	[Token(Token = "0x4000356")]
	[FieldOffset(Offset = "0x0")]
	private IndirectBufferLimits m_BufferLimits;

	[Token(Token = "0x4000357")]
	[FieldOffset(Offset = "0x8")]
	private GraphicsBuffer m_InstanceBuffer;

	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0x10")]
	private GraphicsBuffer m_InstanceInfoBuffer;

	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0x18")]
	private NativeArray<IndirectInstanceInfo> m_InstanceInfoStaging;

	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0x28")]
	private GraphicsBuffer m_DispatchArgsBuffer;

	[Token(Token = "0x400035B")]
	[FieldOffset(Offset = "0x30")]
	private GraphicsBuffer m_DrawArgsBuffer;

	[Token(Token = "0x400035C")]
	[FieldOffset(Offset = "0x38")]
	private GraphicsBuffer m_DrawInfoBuffer;

	[Token(Token = "0x400035D")]
	[FieldOffset(Offset = "0x40")]
	private NativeArray<IndirectDrawInfo> m_DrawInfoStaging;

	[Token(Token = "0x400035E")]
	[FieldOffset(Offset = "0x50")]
	private int m_ContextAllocCounter;

	[Token(Token = "0x400035F")]
	[FieldOffset(Offset = "0x58")]
	private NativeHashMap<int, int> m_ContextIndexFromViewID;

	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x60")]
	private NativeList<IndirectBufferContext> m_Contexts;

	[Token(Token = "0x4000361")]
	[FieldOffset(Offset = "0x68")]
	private NativeArray<IndirectBufferAllocInfo> m_ContextAllocInfo;

	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0x78")]
	private NativeArray<int> m_AllocationCounters;

	[Token(Token = "0x17000052")]
	public GraphicsBuffer instanceBuffer
	{
		[Token(Token = "0x600030F")]
		[Address(RVA = "0x65E7240", Offset = "0x65E6240", VA = "0x65E7240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000053")]
	public GraphicsBuffer instanceInfoBuffer
	{
		[Token(Token = "0x6000310")]
		[Address(RVA = "0x65E7250", Offset = "0x65E6250", VA = "0x65E7250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000054")]
	public GraphicsBuffer dispatchArgsBuffer
	{
		[Token(Token = "0x6000311")]
		[Address(RVA = "0x65E7260", Offset = "0x65E6260", VA = "0x65E7260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000055")]
	public GraphicsBuffer drawArgsBuffer
	{
		[Token(Token = "0x6000312")]
		[Address(RVA = "0x65E7270", Offset = "0x65E6270", VA = "0x65E7270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000056")]
	public GraphicsBuffer drawInfoBuffer
	{
		[Token(Token = "0x6000313")]
		[Address(RVA = "0x65E7280", Offset = "0x65E6280", VA = "0x65E7280")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000057")]
	public GraphicsBufferHandle visibleInstanceBufferHandle
	{
		[Token(Token = "0x6000314")]
		[Address(RVA = "0x65E7290", Offset = "0x65E6290", VA = "0x65E7290")]
		get
		{
			return default(GraphicsBufferHandle);
		}
	}

	[Token(Token = "0x17000058")]
	public GraphicsBufferHandle indirectDrawArgsBufferHandle
	{
		[Token(Token = "0x6000315")]
		[Address(RVA = "0x65E72B0", Offset = "0x65E62B0", VA = "0x65E72B0")]
		get
		{
			return default(GraphicsBufferHandle);
		}
	}

	[Token(Token = "0x17000059")]
	public NativeArray<IndirectInstanceInfo> instanceInfoGlobalArray
	{
		[Token(Token = "0x6000317")]
		[Address(RVA = "0x65E73B0", Offset = "0x65E63B0", VA = "0x65E73B0")]
		get
		{
			return default(NativeArray<IndirectInstanceInfo>);
		}
	}

	[Token(Token = "0x1700005A")]
	public NativeArray<IndirectDrawInfo> drawInfoGlobalArray
	{
		[Token(Token = "0x6000318")]
		[Address(RVA = "0x65E73C0", Offset = "0x65E63C0", VA = "0x65E73C0")]
		get
		{
			return default(NativeArray<IndirectDrawInfo>);
		}
	}

	[Token(Token = "0x1700005B")]
	public NativeArray<int> allocationCounters
	{
		[Token(Token = "0x6000319")]
		[Address(RVA = "0x65E73D0", Offset = "0x65E63D0", VA = "0x65E73D0")]
		get
		{
			return default(NativeArray<int>);
		}
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x65E72D0", Offset = "0x65E62D0", VA = "0x65E72D0")]
	public IndirectBufferContextHandles ImportBuffers(RenderGraph renderGraph)
	{
		return default(IndirectBufferContextHandles);
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x65E73E0", Offset = "0x65E63E0", VA = "0x65E73E0")]
	public void Init()
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x65E75C0", Offset = "0x65E65C0", VA = "0x65E75C0")]
	private void AllocateInstanceBuffers(int maxInstanceCount)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x65E78F0", Offset = "0x65E68F0", VA = "0x65E78F0")]
	private void FreeInstanceBuffers()
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x65E76F0", Offset = "0x65E66F0", VA = "0x65E76F0")]
	private void AllocateDrawBuffers(int maxDrawCount)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x65E7950", Offset = "0x65E6950", VA = "0x65E7950")]
	private void FreeDrawBuffers()
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x65E79D0", Offset = "0x65E69D0", VA = "0x65E79D0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x65E7B00", Offset = "0x65E6B00", VA = "0x65E7B00")]
	private void SyncContexts()
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x65E7850", Offset = "0x65E6850", VA = "0x65E7850")]
	private void ResetAllocators()
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x65E7BE0", Offset = "0x65E6BE0", VA = "0x65E7BE0")]
	private void GrowBuffers()
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x65E7DD0", Offset = "0x65E6DD0", VA = "0x65E7DD0")]
	public void ClearContextsAndGrowBuffers()
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x65E7E80", Offset = "0x65E6E80", VA = "0x65E7E80")]
	public int TryAllocateContext(int viewID)
	{
		return default(int);
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x65E7F90", Offset = "0x65E6F90", VA = "0x65E7F90")]
	public int TryGetContextIndex(int viewID)
	{
		return default(int);
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x65E7FF0", Offset = "0x65E6FF0", VA = "0x65E7FF0")]
	public NativeArray<IndirectBufferAllocInfo> GetAllocInfoSubArray(int contextIndex)
	{
		return default(NativeArray<IndirectBufferAllocInfo>);
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x65E8040", Offset = "0x65E7040", VA = "0x65E8040")]
	public IndirectBufferAllocInfo GetAllocInfo(int contextIndex)
	{
		return default(IndirectBufferAllocInfo);
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x65E80C0", Offset = "0x65E70C0", VA = "0x65E80C0")]
	public void CopyFromStaging(CommandBuffer cmd, in IndirectBufferAllocInfo allocInfo)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x65E8170", Offset = "0x65E7170", VA = "0x65E8170")]
	public IndirectBufferLimits GetLimits(int contextIndex)
	{
		return default(IndirectBufferLimits);
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x65E8180", Offset = "0x65E7180", VA = "0x65E8180")]
	public IndirectBufferContext GetBufferContext(int contextIndex)
	{
		return default(IndirectBufferContext);
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x65E8250", Offset = "0x65E7250", VA = "0x65E8250")]
	public void SetBufferContext(int contextIndex, IndirectBufferContext ctx)
	{
	}
}
