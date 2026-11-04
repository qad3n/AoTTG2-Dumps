// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeScratchBufferPool
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200013E")]
internal class ProbeVolumeScratchBufferPool
{
	[Token(Token = "0x200013F")]
	[DebuggerDisplay("ChunkCount = {chunkCount} ElementCount = {pool.Count}")]
	private class ScratchBufferPool : IComparable<ScratchBufferPool>
	{
		[Token(Token = "0x400060F")]
		[FieldOffset(Offset = "0x10")]
		public int chunkCount;

		[Token(Token = "0x4000610")]
		[FieldOffset(Offset = "0x18")]
		public Stack<ProbeReferenceVolume.CellStreamingScratchBuffer> pool;

		[Token(Token = "0x6000AC7")]
		[Address(RVA = "0x2B32F60", Offset = "0x2B31560", VA = "0x182B32F60")]
		public ScratchBufferPool(int chunkCount)
		{
		}

		[Token(Token = "0x6000AC8")]
		[Address(RVA = "0x2B32FF0", Offset = "0x2B315F0", VA = "0x182B32FF0")]
		private ScratchBufferPool()
		{
		}

		[Token(Token = "0x6000AC9")]
		[Address(RVA = "0x2B32F20", Offset = "0x2B31520", VA = "0x182B32F20", Slot = "4")]
		public int CompareTo(ScratchBufferPool other)
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000603")]
	[FieldOffset(Offset = "0x18")]
	private int m_L0Size;

	[Token(Token = "0x4000604")]
	[FieldOffset(Offset = "0x1C")]
	private int m_L1Size;

	[Token(Token = "0x4000605")]
	[FieldOffset(Offset = "0x20")]
	private int m_ValiditySize;

	[Token(Token = "0x4000606")]
	[FieldOffset(Offset = "0x24")]
	private int m_ValidityLayerCount;

	[Token(Token = "0x4000607")]
	[FieldOffset(Offset = "0x28")]
	private int m_L2Size;

	[Token(Token = "0x4000608")]
	[FieldOffset(Offset = "0x2C")]
	private int m_ProbeOcclusionSize;

	[Token(Token = "0x4000609")]
	[FieldOffset(Offset = "0x30")]
	private int m_SkyOcclusionSize;

	[Token(Token = "0x400060A")]
	[FieldOffset(Offset = "0x34")]
	private int m_SkyShadingDirectionSize;

	[Token(Token = "0x400060B")]
	[FieldOffset(Offset = "0x38")]
	private int m_CurrentlyAllocatedChunkCount;

	[Token(Token = "0x400060C")]
	[FieldOffset(Offset = "0x40")]
	private List<ScratchBufferPool> m_Pools;

	[Token(Token = "0x400060D")]
	[FieldOffset(Offset = "0x48")]
	private Dictionary<int, ProbeReferenceVolume.CellStreamingScratchBufferLayout> m_Layouts;

	[Token(Token = "0x400060E")]
	[FieldOffset(Offset = "0x0")]
	private static int s_ChunkCount;

	[Token(Token = "0x1700013C")]
	public int chunkSize
	{
		[Token(Token = "0x6000ABC")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000ABD")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700013D")]
	public int maxChunkCount
	{
		[Token(Token = "0x6000ABE")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000ABF")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	public int allocatedMemory
	{
		[Token(Token = "0x6000AC0")]
		[Address(RVA = "0x2B2D0F0", Offset = "0x2B2B6F0", VA = "0x182B2D0F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x2B2CFC0", Offset = "0x2B2B5C0", VA = "0x182B2CFC0")]
	public ProbeVolumeScratchBufferPool(ProbeVolumeBakingSet bakingSet, ProbeVolumeSHBands shBands)
	{
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x2B2CA50", Offset = "0x2B2B050", VA = "0x182B2CA50")]
	private ProbeReferenceVolume.CellStreamingScratchBufferLayout GetOrCreateScratchBufferLayout(int chunkCount)
	{
		return default(ProbeReferenceVolume.CellStreamingScratchBufferLayout);
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x2B2C9E0", Offset = "0x2B2AFE0", VA = "0x182B2C9E0")]
	private ProbeReferenceVolume.CellStreamingScratchBuffer CreateScratchBuffer(int chunkCount, bool allocateGraphicsBuffers)
	{
		return null;
	}

	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x2B2C3D0", Offset = "0x2B2A9D0", VA = "0x182B2C3D0")]
	public bool AllocateScratchBuffer(int chunkCount, out ProbeReferenceVolume.CellStreamingScratchBuffer scratchBuffer, out ProbeReferenceVolume.CellStreamingScratchBufferLayout layout, bool allocateGraphicsBuffers)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x2B2CE20", Offset = "0x2B2B420", VA = "0x182B2CE20")]
	public void ReleaseScratchBuffer(ProbeReferenceVolume.CellStreamingScratchBuffer scratchBuffer)
	{
	}

	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x2B2C810", Offset = "0x2B2AE10", VA = "0x182B2C810")]
	public void Cleanup()
	{
	}
}
