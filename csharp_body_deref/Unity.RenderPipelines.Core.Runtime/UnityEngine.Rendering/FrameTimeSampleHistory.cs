// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.FrameTimeSampleHistory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000CB")]
internal class FrameTimeSampleHistory
{
	[Token(Token = "0x40002A0")]
	[FieldOffset(Offset = "0x10")]
	private List<FrameTimeSample> m_Samples;

	[Token(Token = "0x40002A1")]
	[FieldOffset(Offset = "0x18")]
	internal FrameTimeSample SampleAverage;

	[Token(Token = "0x40002A2")]
	[FieldOffset(Offset = "0x30")]
	internal FrameTimeSample SampleMin;

	[Token(Token = "0x40002A3")]
	[FieldOffset(Offset = "0x48")]
	internal FrameTimeSample SampleMax;

	[Token(Token = "0x40002A4")]
	[FieldOffset(Offset = "0x0")]
	private static Func<float, float, float> s_SampleValueAdd;

	[Token(Token = "0x40002A5")]
	[FieldOffset(Offset = "0x8")]
	private static Func<float, float, float> s_SampleValueMin;

	[Token(Token = "0x40002A6")]
	[FieldOffset(Offset = "0x10")]
	private static Func<float, float, float> s_SampleValueMax;

	[Token(Token = "0x40002A7")]
	[FieldOffset(Offset = "0x18")]
	private static Func<float, float, float> s_SampleValueCountValid;

	[Token(Token = "0x40002A8")]
	[FieldOffset(Offset = "0x20")]
	private static Func<float, float, float> s_SampleValueEnsureValid;

	[Token(Token = "0x40002A9")]
	[FieldOffset(Offset = "0x28")]
	private static Func<float, float, float> s_SampleValueDivide;

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x64C8760", Offset = "0x64C7760", VA = "0x64C8760")]
	public FrameTimeSampleHistory(int initialCapacity)
	{
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x64C8BC0", Offset = "0x64C7BC0", VA = "0x64C8BC0")]
	internal void Add(FrameTimeSample sample)
	{
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x64C8C50", Offset = "0x64C7C50", VA = "0x64C8C50")]
	internal void ComputeAggregateValues()
	{
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x64C8B30", Offset = "0x64C7B30", VA = "0x64C8B30")]
	internal void DiscardOldSamples(int sampleHistorySize)
	{
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x64CB4E0", Offset = "0x64CA4E0", VA = "0x64CB4E0")]
	internal void Clear()
	{
	}
}
