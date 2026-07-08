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
	[Address(RVA = "0x4886F70", Offset = "0x4886F70", VA = "0x4886F70")]
	public BottleneckHistory(int initialCapacity)
	{
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x4887010", Offset = "0x4887010", VA = "0x4887010")]
	internal void DiscardOldSamples(int historySize)
	{
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x48870A0", Offset = "0x48870A0", VA = "0x48870A0")]
	internal void AddBottleneckFromAveragedSample(FrameTimeSample frameHistorySampleAverage)
	{
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x4887230", Offset = "0x4887230", VA = "0x4887230")]
	internal void ComputeHistogram()
	{
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x48871A0", Offset = "0x48871A0", VA = "0x48871A0")]
	private static PerformanceBottleneck DetermineBottleneck(FrameTimeSample s)
	{
		return default(PerformanceBottleneck);
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x4887390", Offset = "0x4887390", VA = "0x4887390")]
	internal void Clear()
	{
	}
}
