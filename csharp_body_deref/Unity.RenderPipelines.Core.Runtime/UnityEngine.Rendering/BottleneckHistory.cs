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

[Token(Token = "0x20000F3")]
internal class BottleneckHistory
{
	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x10")]
	private List<PerformanceBottleneck> m_Bottlenecks;

	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x18")]
	internal BottleneckHistogram Histogram;

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x4BAC060", Offset = "0x4BAC060", VA = "0x4BAC060")]
	public BottleneckHistory(int initialCapacity)
	{
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x4BAC100", Offset = "0x4BAC100", VA = "0x4BAC100")]
	internal void DiscardOldSamples(int historySize)
	{
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x4BAC190", Offset = "0x4BAC190", VA = "0x4BAC190")]
	internal void AddBottleneckFromAveragedSample(FrameTimeSample frameHistorySampleAverage)
	{
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x4BAC320", Offset = "0x4BAC320", VA = "0x4BAC320")]
	internal void ComputeHistogram()
	{
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x4BAC290", Offset = "0x4BAC290", VA = "0x4BAC290")]
	private static PerformanceBottleneck DetermineBottleneck(FrameTimeSample s)
	{
		return default(PerformanceBottleneck);
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x4BAC480", Offset = "0x4BAC480", VA = "0x4BAC480")]
	internal void Clear()
	{
	}
}
