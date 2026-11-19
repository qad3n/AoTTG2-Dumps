// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalEntityManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200008A")]
internal class DecalEntityManager : IDisposable
{
	[Token(Token = "0x200008B")]
	private struct CombinedChunks
	{
		[Token(Token = "0x40002AA")]
		[FieldOffset(Offset = "0x0")]
		public DecalEntityChunk entityChunk;

		[Token(Token = "0x40002AB")]
		[FieldOffset(Offset = "0x8")]
		public DecalCachedChunk cachedChunk;

		[Token(Token = "0x40002AC")]
		[FieldOffset(Offset = "0x10")]
		public DecalCulledChunk culledChunk;

		[Token(Token = "0x40002AD")]
		[FieldOffset(Offset = "0x18")]
		public DecalDrawCallChunk drawCallChunk;

		[Token(Token = "0x40002AE")]
		[FieldOffset(Offset = "0x20")]
		public int previousChunkIndex;

		[Token(Token = "0x40002AF")]
		[FieldOffset(Offset = "0x24")]
		public bool valid;
	}

	[Token(Token = "0x400029C")]
	[FieldOffset(Offset = "0x10")]
	public List<DecalEntityChunk> entityChunks;

	[Token(Token = "0x400029D")]
	[FieldOffset(Offset = "0x18")]
	public List<DecalCachedChunk> cachedChunks;

	[Token(Token = "0x400029E")]
	[FieldOffset(Offset = "0x20")]
	public List<DecalCulledChunk> culledChunks;

	[Token(Token = "0x400029F")]
	[FieldOffset(Offset = "0x28")]
	public List<DecalDrawCallChunk> drawCallChunks;

	[Token(Token = "0x40002A0")]
	[FieldOffset(Offset = "0x30")]
	public int chunkCount;

	[Token(Token = "0x40002A1")]
	[FieldOffset(Offset = "0x38")]
	private ProfilingSampler m_AddDecalSampler;

	[Token(Token = "0x40002A2")]
	[FieldOffset(Offset = "0x40")]
	private ProfilingSampler m_ResizeChunks;

	[Token(Token = "0x40002A3")]
	[FieldOffset(Offset = "0x48")]
	private ProfilingSampler m_SortChunks;

	[Token(Token = "0x40002A4")]
	[FieldOffset(Offset = "0x50")]
	private DecalEntityIndexer m_DecalEntityIndexer;

	[Token(Token = "0x40002A5")]
	[FieldOffset(Offset = "0x58")]
	private Dictionary<Material, int> m_MaterialToChunkIndex;

	[Token(Token = "0x40002A6")]
	[FieldOffset(Offset = "0x60")]
	private List<CombinedChunks> m_CombinedChunks;

	[Token(Token = "0x40002A7")]
	[FieldOffset(Offset = "0x68")]
	private List<int> m_CombinedChunkRemmap;

	[Token(Token = "0x40002A8")]
	[FieldOffset(Offset = "0x70")]
	private Material m_ErrorMaterial;

	[Token(Token = "0x40002A9")]
	[FieldOffset(Offset = "0x78")]
	private Mesh m_DecalProjectorMesh;

	[Token(Token = "0x170000E0")]
	public Material errorMaterial
	{
		[Token(Token = "0x600033C")]
		[Address(RVA = "0x6610D00", Offset = "0x660FD00", VA = "0x6610D00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E1")]
	public Mesh decalProjectorMesh
	{
		[Token(Token = "0x600033D")]
		[Address(RVA = "0x6614270", Offset = "0x6613270", VA = "0x6614270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x66154C0", Offset = "0x66144C0", VA = "0x66154C0")]
	public DecalEntityManager()
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x6615800", Offset = "0x6614800", VA = "0x6615800")]
	public bool IsValid(DecalEntity decalEntity)
	{
		return default(bool);
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x6615880", Offset = "0x6614880", VA = "0x6615880")]
	public DecalEntity CreateDecalEntity(DecalProjector decalProjector)
	{
		return default(DecalEntity);
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x6615E40", Offset = "0x6614E40", VA = "0x6615E40")]
	private int CreateChunkIndex(Material material)
	{
		return default(int);
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x6616870", Offset = "0x6615870", VA = "0x6616870")]
	public void UpdateAllDecalEntitiesData()
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x66163F0", Offset = "0x66153F0", VA = "0x66163F0")]
	public void UpdateDecalEntityData(DecalEntity decalEntity, DecalProjector decalProjector)
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x6616AF0", Offset = "0x6615AF0", VA = "0x6616AF0")]
	public void DestroyDecalEntity(DecalEntity decalEntity)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x6616D60", Offset = "0x6615D60", VA = "0x6616D60")]
	public void Update()
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x6617800", Offset = "0x6616800", VA = "0x6617800", Slot = "4")]
	public void Dispose()
	{
	}
}
