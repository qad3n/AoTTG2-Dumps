// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalCachedChunk
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Mathematics;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200008E")]
internal class DecalCachedChunk : DecalChunk
{
	[Token(Token = "0x40002B5")]
	[FieldOffset(Offset = "0x28")]
	public MaterialPropertyBlock propertyBlock;

	[Token(Token = "0x40002B6")]
	[FieldOffset(Offset = "0x30")]
	public int passIndexDBuffer;

	[Token(Token = "0x40002B7")]
	[FieldOffset(Offset = "0x34")]
	public int passIndexEmissive;

	[Token(Token = "0x40002B8")]
	[FieldOffset(Offset = "0x38")]
	public int passIndexScreenSpace;

	[Token(Token = "0x40002B9")]
	[FieldOffset(Offset = "0x3C")]
	public int passIndexGBuffer;

	[Token(Token = "0x40002BA")]
	[FieldOffset(Offset = "0x40")]
	public int drawOrder;

	[Token(Token = "0x40002BB")]
	[FieldOffset(Offset = "0x44")]
	public bool isCreated;

	[Token(Token = "0x40002BC")]
	[FieldOffset(Offset = "0x48")]
	public NativeArray<float4x4> decalToWorlds;

	[Token(Token = "0x40002BD")]
	[FieldOffset(Offset = "0x58")]
	public NativeArray<float4x4> normalToWorlds;

	[Token(Token = "0x40002BE")]
	[FieldOffset(Offset = "0x68")]
	public NativeArray<float4x4> sizeOffsets;

	[Token(Token = "0x40002BF")]
	[FieldOffset(Offset = "0x78")]
	public NativeArray<float2> drawDistances;

	[Token(Token = "0x40002C0")]
	[FieldOffset(Offset = "0x88")]
	public NativeArray<float2> angleFades;

	[Token(Token = "0x40002C1")]
	[FieldOffset(Offset = "0x98")]
	public NativeArray<float4> uvScaleBias;

	[Token(Token = "0x40002C2")]
	[FieldOffset(Offset = "0xA8")]
	public NativeArray<int> layerMasks;

	[Token(Token = "0x40002C3")]
	[FieldOffset(Offset = "0xB8")]
	public NativeArray<ulong> sceneLayerMasks;

	[Token(Token = "0x40002C4")]
	[FieldOffset(Offset = "0xC8")]
	public NativeArray<float> fadeFactors;

	[Token(Token = "0x40002C5")]
	[FieldOffset(Offset = "0xD8")]
	public NativeArray<BoundingSphere> boundingSpheres;

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0xE8")]
	public NativeArray<DecalScaleMode> scaleModes;

	[Token(Token = "0x40002C7")]
	[FieldOffset(Offset = "0xF8")]
	public NativeArray<uint> renderingLayerMasks;

	[Token(Token = "0x40002C8")]
	[FieldOffset(Offset = "0x108")]
	public NativeArray<float3> positions;

	[Token(Token = "0x40002C9")]
	[FieldOffset(Offset = "0x118")]
	public NativeArray<quaternion> rotation;

	[Token(Token = "0x40002CA")]
	[FieldOffset(Offset = "0x128")]
	public NativeArray<float3> scales;

	[Token(Token = "0x40002CB")]
	[FieldOffset(Offset = "0x138")]
	public NativeArray<bool> dirty;

	[Token(Token = "0x40002CC")]
	[FieldOffset(Offset = "0x148")]
	public BoundingSphere[] boundingSphereArray;

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x2C1B920", Offset = "0x2C19F20", VA = "0x182C1B920", Slot = "6")]
	public override void RemoveAtSwapBack(int entityIndex)
	{
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x2C1BC30", Offset = "0x2C1A230", VA = "0x182C1BC30", Slot = "7")]
	public override void SetCapacity(int newCapacity)
	{
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x2C1B730", Offset = "0x2C19D30", VA = "0x182C1B730", Slot = "8")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DecalCachedChunk()
	{
	}
}
