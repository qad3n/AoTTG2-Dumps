// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.TemperatureTrend
// Update status: NEW in this game update
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
		[Address(RVA = "0x2D45BF0", Offset = "0x2D441F0", VA = "0x182D45BF0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x2D45F10", Offset = "0x2D44510", VA = "0x182D45F10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x2E92E00", Offset = "0x2E91400", VA = "0x182E92E00")]
	private void PopOldestValue()
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x2E92ED0", Offset = "0x2E914D0", VA = "0x182E92ED0")]
	private void PushNewValue(float tempLevel, float timestamp)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x2E93260", Offset = "0x2E91860", VA = "0x182E93260")]
	public TemperatureTrend(bool useProviderTrend)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x2E92FA0", Offset = "0x2E915A0", VA = "0x182E92FA0")]
	public void Reset()
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x2E92FC0", Offset = "0x2E915C0", VA = "0x182E92FC0")]
	private void UpdateTrend()
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x2E93100", Offset = "0x2E91700", VA = "0x182E93100")]
	public void Update(float temperatureTrendFromProvider, float newTemperatureLevel, bool changed, float newTemperatureTimestamp)
	{
	}
}
