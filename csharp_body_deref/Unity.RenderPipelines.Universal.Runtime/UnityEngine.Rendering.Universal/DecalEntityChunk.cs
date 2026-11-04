// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalEntityChunk
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Jobs;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000089")]
internal class DecalEntityChunk : DecalChunk
{
	[Token(Token = "0x4000298")]
	[FieldOffset(Offset = "0x28")]
	public Material material;

	[Token(Token = "0x4000299")]
	[FieldOffset(Offset = "0x30")]
	public NativeArray<DecalEntity> decalEntities;

	[Token(Token = "0x400029A")]
	[FieldOffset(Offset = "0x40")]
	public DecalProjector[] decalProjectors;

	[Token(Token = "0x400029B")]
	[FieldOffset(Offset = "0x48")]
	public TransformAccessArray transformAccessArray;

	[Token(Token = "0x6000337")]
	[Address(RVA = "0xC7D820", Offset = "0xC7BE20", VA = "0x180C7D820", Slot = "5")]
	public override void Push()
	{
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x2C1E700", Offset = "0x2C1CD00", VA = "0x182C1E700", Slot = "6")]
	public override void RemoveAtSwapBack(int entityIndex)
	{
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x2C1E7A0", Offset = "0x2C1CDA0", VA = "0x182C1E7A0", Slot = "7")]
	public override void SetCapacity(int newCapacity)
	{
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x2C1E690", Offset = "0x2C1CC90", VA = "0x182C1E690", Slot = "8")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DecalEntityChunk()
	{
	}
}
