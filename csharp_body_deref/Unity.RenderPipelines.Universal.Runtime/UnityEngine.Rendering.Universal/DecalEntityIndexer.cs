// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalEntityIndexer
// Update status: NEW in this game update
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
	[Address(RVA = "0x2C1EC50", Offset = "0x2C1D250", VA = "0x182C1EC50")]
	public bool IsValid(DecalEntity decalEntity)
	{
		return default(bool);
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x2C1E940", Offset = "0x2C1CF40", VA = "0x182C1E940")]
	public DecalEntity CreateDecalEntity(int arrayIndex, int chunkIndex)
	{
		return default(DecalEntity);
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x2C1EB10", Offset = "0x2C1D110", VA = "0x182C1EB10")]
	public void DestroyDecalEntity(DecalEntity decalEntity)
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x2C1EBD0", Offset = "0x2C1D1D0", VA = "0x182C1EBD0")]
	public DecalEntityItem GetItem(DecalEntity decalEntity)
	{
		return default(DecalEntityItem);
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x2C1EE10", Offset = "0x2C1D410", VA = "0x182C1EE10")]
	public void UpdateIndex(DecalEntity decalEntity, int newArrayIndex)
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x2C1ECE0", Offset = "0x2C1D2E0", VA = "0x182C1ECE0")]
	public void RemapChunkIndices(List<int> remaper)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x2C1E8D0", Offset = "0x2C1CED0", VA = "0x182C1E8D0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x2C1EEC0", Offset = "0x2C1D4C0", VA = "0x182C1EEC0")]
	public DecalEntityIndexer()
	{
	}
}
