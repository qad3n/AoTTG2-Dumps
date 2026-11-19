// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalCulledChunk
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000092")]
internal class DecalCulledChunk : DecalChunk
{
	[Token(Token = "0x40002DD")]
	[FieldOffset(Offset = "0x28")]
	public Vector3 cameraPosition;

	[Token(Token = "0x40002DE")]
	[FieldOffset(Offset = "0x38")]
	public ulong sceneCullingMask;

	[Token(Token = "0x40002DF")]
	[FieldOffset(Offset = "0x40")]
	public int cullingMask;

	[Token(Token = "0x40002E0")]
	[FieldOffset(Offset = "0x48")]
	public CullingGroup cullingGroups;

	[Token(Token = "0x40002E1")]
	[FieldOffset(Offset = "0x50")]
	public int[] visibleDecalIndexArray;

	[Token(Token = "0x40002E2")]
	[FieldOffset(Offset = "0x58")]
	public NativeArray<int> visibleDecalIndices;

	[Token(Token = "0x40002E3")]
	[FieldOffset(Offset = "0x68")]
	public int visibleDecalCount;

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x661A6B0", Offset = "0x66196B0", VA = "0x661A6B0", Slot = "6")]
	public override void RemoveAtSwapBack(int entityIndex)
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x661A720", Offset = "0x6619720", VA = "0x661A720", Slot = "7")]
	public override void SetCapacity(int newCapacity)
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x661A7D0", Offset = "0x66197D0", VA = "0x661A7D0", Slot = "8")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x6616860", Offset = "0x6615860", VA = "0x6616860")]
	public DecalCulledChunk()
	{
	}
}
