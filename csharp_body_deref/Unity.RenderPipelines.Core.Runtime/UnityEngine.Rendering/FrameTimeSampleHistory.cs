using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000F5")]
internal class FrameTimeSampleHistory
{
	[Token(Token = "0x4000355")]
	[FieldOffset(Offset = "0x10")]
	private List<FrameTimeSample> m_Samples;

	[Token(Token = "0x4000356")]
	[FieldOffset(Offset = "0x18")]
	internal FrameTimeSample SampleAverage;

	[Token(Token = "0x4000357")]
	[FieldOffset(Offset = "0x30")]
	internal FrameTimeSample SampleMin;

	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0x48")]
	internal FrameTimeSample SampleMax;

	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0x0")]
	private static Func<float, float, float> s_SampleValueAdd;

	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0x8")]
	private static Func<float, float, float> s_SampleValueMin;

	[Token(Token = "0x400035B")]
	[FieldOffset(Offset = "0x10")]
	private static Func<float, float, float> s_SampleValueMax;

	[Token(Token = "0x400035C")]
	[FieldOffset(Offset = "0x18")]
	private static Func<float, float, float> s_SampleValueCountValid;

	[Token(Token = "0x400035D")]
	[FieldOffset(Offset = "0x20")]
	private static Func<float, float, float> s_SampleValueEnsureValid;

	[Token(Token = "0x400035E")]
	[FieldOffset(Offset = "0x28")]
	private static Func<float, float, float> s_SampleValueDivide;

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x4887400", Offset = "0x4887400", VA = "0x4887400")]
	public FrameTimeSampleHistory(int initialCapacity)
	{
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x48874A0", Offset = "0x48874A0", VA = "0x48874A0")]
	internal void Add(FrameTimeSample sample)
	{
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x4887580", Offset = "0x4887580", VA = "0x4887580")]
	internal void ComputeAggregateValues()
	{
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x4887E80", Offset = "0x4887E80", VA = "0x4887E80")]
	internal void DiscardOldSamples(int sampleHistorySize)
	{
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x4887F10", Offset = "0x4887F10", VA = "0x4887F10")]
	internal void Clear()
	{
	}
}
