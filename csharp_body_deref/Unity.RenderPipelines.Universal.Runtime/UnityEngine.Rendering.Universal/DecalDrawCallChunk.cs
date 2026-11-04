// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalDrawCallChunk
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Mathematics;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000082")]
internal class DecalDrawCallChunk : DecalChunk
{
	[Token(Token = "0x400026C")]
	[FieldOffset(Offset = "0x28")]
	public NativeArray<float4x4> decalToWorlds;

	[Token(Token = "0x400026D")]
	[FieldOffset(Offset = "0x38")]
	public NativeArray<float4x4> normalToDecals;

	[Token(Token = "0x400026E")]
	[FieldOffset(Offset = "0x48")]
	public NativeArray<float> renderingLayerMasks;

	[Token(Token = "0x400026F")]
	[FieldOffset(Offset = "0x58")]
	public NativeArray<DecalSubDrawCall> subCalls;

	[Token(Token = "0x4000270")]
	[FieldOffset(Offset = "0x68")]
	public NativeArray<int> subCallCounts;

	[Token(Token = "0x170000DD")]
	public int subCallCount
	{
		[Token(Token = "0x6000315")]
		[Address(RVA = "0x2C1CB10", Offset = "0x2C1B110", VA = "0x182C1CB10")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000314")]
		[Address(RVA = "0x2C1CB20", Offset = "0x2C1B120", VA = "0x182C1CB20")]
		set
		{
		}
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x2C1C9A0", Offset = "0x2C1AFA0", VA = "0x182C1C9A0", Slot = "6")]
	public override void RemoveAtSwapBack(int entityIndex)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x2C1CA70", Offset = "0x2C1B070", VA = "0x182C1CA70", Slot = "7")]
	public override void SetCapacity(int newCapacity)
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x2C1C8F0", Offset = "0x2C1AEF0", VA = "0x182C1C8F0", Slot = "8")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DecalDrawCallChunk()
	{
	}
}
