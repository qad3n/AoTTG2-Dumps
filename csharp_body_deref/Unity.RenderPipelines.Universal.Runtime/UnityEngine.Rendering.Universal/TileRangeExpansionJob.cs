// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.TileRangeExpansionJob
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001B9")]
[BurstCompile(FloatMode = FloatMode.Fast, DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
internal struct TileRangeExpansionJob : IJobFor
{
	[Token(Token = "0x400096F")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public NativeArray<InclusiveRange> tileRanges;

	[Token(Token = "0x4000970")]
	[FieldOffset(Offset = "0x10")]
	[NativeDisableParallelForRestriction]
	public NativeArray<uint> tileMasks;

	[Token(Token = "0x4000971")]
	[FieldOffset(Offset = "0x20")]
	public int rangesPerItem;

	[Token(Token = "0x4000972")]
	[FieldOffset(Offset = "0x24")]
	public int itemsPerTile;

	[Token(Token = "0x4000973")]
	[FieldOffset(Offset = "0x28")]
	public int wordsPerTile;

	[Token(Token = "0x4000974")]
	[FieldOffset(Offset = "0x2C")]
	public int2 tileResolution;

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x6693B00", Offset = "0x6692B00", VA = "0x6693B00", Slot = "4")]
	public void Execute(int jobIndex)
	{
	}
}
