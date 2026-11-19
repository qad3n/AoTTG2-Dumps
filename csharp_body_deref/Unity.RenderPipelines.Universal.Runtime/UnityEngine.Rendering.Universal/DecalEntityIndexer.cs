// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalEntityIndexer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000086")]
internal class DecalEntityIndexer
{
	[Token(Token = "0x2000087")]
	public struct DecalEntityItem
	{
		[Token(Token = "0x4000293")]
		[FieldOffset(Offset = "0x0")]
		public int chunkIndex;

		[Token(Token = "0x4000294")]
		[FieldOffset(Offset = "0x4")]
		public int arrayIndex;

		[Token(Token = "0x4000295")]
		[FieldOffset(Offset = "0x8")]
		public int version;
	}

	[Token(Token = "0x4000291")]
	[FieldOffset(Offset = "0x10")]
	private List<DecalEntityItem> m_Entities;

	[Token(Token = "0x4000292")]
	[FieldOffset(Offset = "0x18")]
	private Queue<int> m_FreeIndices;

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x6614D70", Offset = "0x6613D70", VA = "0x6614D70")]
	public bool IsValid(DecalEntity decalEntity)
	{
		return default(bool);
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x6614DF0", Offset = "0x6613DF0", VA = "0x6614DF0")]
	public DecalEntity CreateDecalEntity(int arrayIndex, int chunkIndex)
	{
		return default(DecalEntity);
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x6614F60", Offset = "0x6613F60", VA = "0x6614F60")]
	public void DestroyDecalEntity(DecalEntity decalEntity)
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x6615010", Offset = "0x6614010", VA = "0x6615010")]
	public DecalEntityItem GetItem(DecalEntity decalEntity)
	{
		return default(DecalEntityItem);
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x6615060", Offset = "0x6614060", VA = "0x6615060")]
	public void UpdateIndex(DecalEntity decalEntity, int newArrayIndex)
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x66150F0", Offset = "0x66140F0", VA = "0x66150F0")]
	public void RemapChunkIndices(List<int> remaper)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x6615210", Offset = "0x6614210", VA = "0x6615210")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x6615270", Offset = "0x6614270", VA = "0x6615270")]
	public DecalEntityIndexer()
	{
	}
}
