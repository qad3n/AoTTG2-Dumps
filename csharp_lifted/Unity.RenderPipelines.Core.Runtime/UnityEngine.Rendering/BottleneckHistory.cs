// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BottleneckHistory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000C9")]
internal class BottleneckHistory
{
	[Token(Token = "0x4000298")]
	[FieldOffset(Offset = "0x10")]
	private List<PerformanceBottleneck> m_Bottlenecks;

	[Token(Token = "0x4000299")]
	[FieldOffset(Offset = "0x18")]
	internal BottleneckHistogram Histogram;

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x64C8800", Offset = "0x64C7800", VA = "0x64C8800")]
	public BottleneckHistory(int initialCapacity)
	{
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x64C9480", Offset = "0x64C8480", VA = "0x64C9480")]
	internal void DiscardOldSamples(int historySize)
	{
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x64C9510", Offset = "0x64C8510", VA = "0x64C9510")]
	internal void AddBottleneckFromAveragedSample(FrameTimeSample frameHistorySampleAverage)
	{
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x64C9610", Offset = "0x64C8610", VA = "0x64C9610")]
	internal void ComputeHistogram()
	{
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x64D8050", Offset = "0x64D7050", VA = "0x64D8050")]
	private static PerformanceBottleneck DetermineBottleneck(FrameTimeSample s)
	{
		return default(PerformanceBottleneck);
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x64CB490", Offset = "0x64CA490", VA = "0x64CB490")]
	internal void Clear()
	{
	}
}
