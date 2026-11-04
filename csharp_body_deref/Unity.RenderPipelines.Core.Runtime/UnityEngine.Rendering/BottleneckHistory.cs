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
	[Address(RVA = "0x2AD31C0", Offset = "0x2AD17C0", VA = "0x182AD31C0")]
	public BottleneckHistory(int initialCapacity)
	{
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x2AD3120", Offset = "0x2AD1720", VA = "0x182AD3120")]
	internal void DiscardOldSamples(int historySize)
	{
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x2AD2DA0", Offset = "0x2AD13A0", VA = "0x182AD2DA0")]
	internal void AddBottleneckFromAveragedSample(FrameTimeSample frameHistorySampleAverage)
	{
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x2AD2F20", Offset = "0x2AD1520", VA = "0x182AD2F20")]
	internal void ComputeHistogram()
	{
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x2AD3080", Offset = "0x2AD1680", VA = "0x182AD3080")]
	private static PerformanceBottleneck DetermineBottleneck(FrameTimeSample s)
	{
		return default(PerformanceBottleneck);
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x2AD2ED0", Offset = "0x2AD14D0", VA = "0x182AD2ED0")]
	internal void Clear()
	{
	}
}
