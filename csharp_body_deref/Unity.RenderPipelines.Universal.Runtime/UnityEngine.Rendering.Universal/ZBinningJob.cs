// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ZBinningJob
// Update status: NEW in this game update
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

[Token(Token = "0x20001BF")]
[BurstCompile(FloatMode = FloatMode.Fast, DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
internal struct ZBinningJob : IJobFor
{
	[Token(Token = "0x4000998")]
	public const int batchSize = 128;

	[Token(Token = "0x4000999")]
	public const int headerLength = 2;

	[Token(Token = "0x400099A")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableParallelForRestriction]
	public NativeArray<uint> bins;

	[Token(Token = "0x400099B")]
	[FieldOffset(Offset = "0x10")]
	[ReadOnly]
	public NativeArray<float2> minMaxZs;

	[Token(Token = "0x400099C")]
	[FieldOffset(Offset = "0x20")]
	public float zBinScale;

	[Token(Token = "0x400099D")]
	[FieldOffset(Offset = "0x24")]
	public float zBinOffset;

	[Token(Token = "0x400099E")]
	[FieldOffset(Offset = "0x28")]
	public int binCount;

	[Token(Token = "0x400099F")]
	[FieldOffset(Offset = "0x2C")]
	public int wordsPerTile;

	[Token(Token = "0x40009A0")]
	[FieldOffset(Offset = "0x30")]
	public int lightCount;

	[Token(Token = "0x40009A1")]
	[FieldOffset(Offset = "0x34")]
	public int reflectionProbeCount;

	[Token(Token = "0x40009A2")]
	[FieldOffset(Offset = "0x38")]
	public int batchCount;

	[Token(Token = "0x40009A3")]
	[FieldOffset(Offset = "0x3C")]
	public int viewCount;

	[Token(Token = "0x40009A4")]
	[FieldOffset(Offset = "0x40")]
	public bool isOrthographic;

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x2CB1560", Offset = "0x2CAFB60", VA = "0x182CB1560")]
	private static uint EncodeHeader(uint min, uint max)
	{
		return default(uint);
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x2CB1500", Offset = "0x2CAFB00", VA = "0x182CB1500")]
	private static (uint, uint) DecodeHeader(uint zBin)
	{
		return default((uint, uint));
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x2CB1570", Offset = "0x2CAFB70", VA = "0x182CB1570", Slot = "4")]
	public void Execute(int jobIndex)
	{
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x2CB1680", Offset = "0x2CAFC80", VA = "0x182CB1680")]
	private void FillZBins(int binStart, int binEnd, int itemStart, int itemEnd, int headerIndex, int itemOffset, int binOffset)
	{
	}
}
