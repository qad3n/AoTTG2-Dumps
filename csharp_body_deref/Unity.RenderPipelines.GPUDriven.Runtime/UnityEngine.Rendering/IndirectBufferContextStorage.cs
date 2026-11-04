// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IndirectBufferContextStorage
// Update status: NEW in this game update
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
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000053")]
	public GraphicsBuffer instanceInfoBuffer
	{
		[Token(Token = "0x6000310")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000054")]
	public GraphicsBuffer dispatchArgsBuffer
	{
		[Token(Token = "0x6000311")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000055")]
	public GraphicsBuffer drawArgsBuffer
	{
		[Token(Token = "0x6000312")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000056")]
	public GraphicsBuffer drawInfoBuffer
	{
		[Token(Token = "0x6000313")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000057")]
	public GraphicsBufferHandle visibleInstanceBufferHandle
	{
		[Token(Token = "0x6000314")]
		[Address(RVA = "0x2BEFA10", Offset = "0x2BEE010", VA = "0x182BEFA10")]
		get
		{
			return default(GraphicsBufferHandle);
		}
	}

	[Token(Token = "0x17000058")]
	public GraphicsBufferHandle indirectDrawArgsBufferHandle
	{
		[Token(Token = "0x6000315")]
		[Address(RVA = "0x2BEF9F0", Offset = "0x2BEDFF0", VA = "0x182BEF9F0")]
		get
		{
			return default(GraphicsBufferHandle);
		}
	}

	[Token(Token = "0x17000059")]
	public NativeArray<IndirectInstanceInfo> instanceInfoGlobalArray
	{
		[Token(Token = "0x6000317")]
		[Address(RVA = "0x8E7990", Offset = "0x8E5F90", VA = "0x1808E7990")]
		get
		{
			return default(NativeArray<IndirectInstanceInfo>);
		}
	}

	[Token(Token = "0x1700005A")]
	public NativeArray<IndirectDrawInfo> drawInfoGlobalArray
	{
		[Token(Token = "0x6000318")]
		[Address(RVA = "0xE8F6D0", Offset = "0xE8DCD0", VA = "0x180E8F6D0")]
		get
		{
			return default(NativeArray<IndirectDrawInfo>);
		}
	}

	[Token(Token = "0x1700005B")]
	public NativeArray<int> allocationCounters
	{
		[Token(Token = "0x6000319")]
		[Address(RVA = "0x12BEF80", Offset = "0x12BD580", VA = "0x1812BEF80")]
		get
		{
			return default(NativeArray<int>);
		}
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x2BEF3C0", Offset = "0x2BED9C0", VA = "0x182BEF3C0")]
	public IndirectBufferContextHandles ImportBuffers(RenderGraph renderGraph)
	{
		return default(IndirectBufferContextHandles);
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x2BEF4C0", Offset = "0x2BEDAC0", VA = "0x182BEF4C0")]
	public void Init()
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x2BEEC10", Offset = "0x2BED210", VA = "0x182BEEC10")]
	private void AllocateInstanceBuffers(int maxInstanceCount)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x2BEEFC0", Offset = "0x2BED5C0", VA = "0x182BEEFC0")]
	private void FreeInstanceBuffers()
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x2BEEAA0", Offset = "0x2BED0A0", VA = "0x182BEEAA0")]
	private void AllocateDrawBuffers(int maxDrawCount)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x2BEEF40", Offset = "0x2BED540", VA = "0x182BEEF40")]
	private void FreeDrawBuffers()
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x2BEEE40", Offset = "0x2BED440", VA = "0x182BEEE40", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x2BEF780", Offset = "0x2BEDD80", VA = "0x182BEF780")]
	private void SyncContexts()
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x2BEF620", Offset = "0x2BEDC20", VA = "0x182BEF620")]
	private void ResetAllocators()
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x2BEF220", Offset = "0x2BED820", VA = "0x182BEF220")]
	private void GrowBuffers()
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x2BEED40", Offset = "0x2BED340", VA = "0x182BEED40")]
	public void ClearContextsAndGrowBuffers()
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x2BEF850", Offset = "0x2BEDE50", VA = "0x182BEF850")]
	public int TryAllocateContext(int viewID)
	{
		return default(int);
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x2BEF980", Offset = "0x2BEDF80", VA = "0x182BEF980")]
	public int TryGetContextIndex(int viewID)
	{
		return default(int);
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x2BEF030", Offset = "0x2BED630", VA = "0x182BEF030")]
	public NativeArray<IndirectBufferAllocInfo> GetAllocInfoSubArray(int contextIndex)
	{
		return default(NativeArray<IndirectBufferAllocInfo>);
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x2BEF0B0", Offset = "0x2BED6B0", VA = "0x182BEF0B0")]
	public IndirectBufferAllocInfo GetAllocInfo(int contextIndex)
	{
		return default(IndirectBufferAllocInfo);
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x2BEED70", Offset = "0x2BED370", VA = "0x182BEED70")]
	public void CopyFromStaging(CommandBuffer cmd, in IndirectBufferAllocInfo allocInfo)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x2BEF210", Offset = "0x2BED810", VA = "0x182BEF210")]
	public IndirectBufferLimits GetLimits(int contextIndex)
	{
		return default(IndirectBufferLimits);
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x2BEF140", Offset = "0x2BED740", VA = "0x182BEF140")]
	public IndirectBufferContext GetBufferContext(int contextIndex)
	{
		return default(IndirectBufferContext);
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x2BEF6C0", Offset = "0x2BEDCC0", VA = "0x182BEF6C0")]
	public void SetBufferContext(int contextIndex, IndirectBufferContext ctx)
	{
	}
}
