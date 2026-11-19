// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.TemperatureTrend
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x200000F")]
internal class TemperatureTrend
{
	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x10")]
	private bool m_UseProviderTrend;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x18")]
	private double m_SumX;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x20")]
	private double m_SumY;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x28")]
	private double m_SumXY;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x30")]
	private double m_SumXX;

	[Token(Token = "0x4000053")]
	private const int MeasurementTimeframeSeconds = 20;

	[Token(Token = "0x4000054")]
	private const int UpdateFrequency = 10;

	[Token(Token = "0x4000055")]
	private const int SamplesCapacity = 200;

	[Token(Token = "0x4000056")]
	private const double SlopeAtMaxTrend = 0.005;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x38")]
	private float[] m_TimeStamps;

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x40")]
	private float[] m_Temperature;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x48")]
	private int m_NumValues;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x4C")]
	private int m_NextValueIndex;

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x50")]
	private int m_OldestValueIndex;

	[Token(Token = "0x1700002E")]
	public float ThermalTrend
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x6885EE0", Offset = "0x6884EE0", VA = "0x6885EE0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x6885EF0", Offset = "0x6884EF0", VA = "0x6885EF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x6885DA0", Offset = "0x6884DA0", VA = "0x6885DA0")]
	private void PopOldestValue()
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x6885E40", Offset = "0x6884E40", VA = "0x6885E40")]
	private void PushNewValue(float tempLevel, float timestamp)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x6882E00", Offset = "0x6881E00", VA = "0x6882E00")]
	public TemperatureTrend(bool useProviderTrend)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x6880DE0", Offset = "0x687FDE0", VA = "0x6880DE0")]
	public void Reset()
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x6885F00", Offset = "0x6884F00", VA = "0x6885F00")]
	private void UpdateTrend()
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x6880B90", Offset = "0x687FB90", VA = "0x6880B90")]
	public void Update(float temperatureTrendFromProvider, float newTemperatureLevel, bool changed, float newTemperatureTimestamp)
	{
	}
}
