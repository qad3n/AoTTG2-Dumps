using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000B3")]
public abstract class DebugDisplayStats<TProfileId> where TProfileId : Enum
{
	[Token(Token = "0x20000B4")]
	private class AccumulatedTiming
	{
		[Token(Token = "0x400027B")]
		[FieldOffset(Offset = "0x0")]
		public float accumulatedValue;

		[Token(Token = "0x400027C")]
		[FieldOffset(Offset = "0x0")]
		public float lastAverage;

		[Token(Token = "0x60006CE")]
		internal void UpdateLastAverage(int frameCount)
		{
		}

		[Token(Token = "0x60006CF")]
		public AccumulatedTiming()
		{
		}
	}

	[Token(Token = "0x20000B5")]
	private enum DebugProfilingType
	{
		[Token(Token = "0x400027E")]
		CPU,
		[Token(Token = "0x400027F")]
		InlineCPU,
		[Token(Token = "0x4000280")]
		GPU
	}

	[Token(Token = "0x4000273")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] k_DetailedStatsColumnLabels;

	[Token(Token = "0x4000274")]
	[FieldOffset(Offset = "0x0")]
	private Dictionary<TProfileId, AccumulatedTiming>[] m_AccumulatedTiming;

	[Token(Token = "0x4000275")]
	[FieldOffset(Offset = "0x0")]
	private float m_TimeSinceLastAvgValue;

	[Token(Token = "0x4000276")]
	[FieldOffset(Offset = "0x0")]
	private int m_AccumulatedFrames;

	[Token(Token = "0x4000277")]
	[FieldOffset(Offset = "0x0")]
	private HashSet<TProfileId> m_HiddenProfileIds;

	[Token(Token = "0x4000278")]
	private const float k_AccumulationTimeInSeconds = 1f;

	[Token(Token = "0x4000279")]
	[FieldOffset(Offset = "0x0")]
	protected bool averageProfilerTimingsOverASecond;

	[Token(Token = "0x400027A")]
	[FieldOffset(Offset = "0x0")]
	protected bool hideEmptyScopes;

	[Token(Token = "0x60006C1")]
	public abstract void EnableProfilingRecorders();

	[Token(Token = "0x60006C2")]
	public abstract void DisableProfilingRecorders();

	[Token(Token = "0x60006C3")]
	public abstract void RegisterDebugUI(List<DebugUI.Widget> list);

	[Token(Token = "0x60006C4")]
	public abstract void Update();

	[Token(Token = "0x60006C5")]
	protected List<TProfileId> GetProfilerIdsToDisplay()
	{
		return null;
	}

	[Token(Token = "0x60006C6")]
	protected void UpdateDetailedStats(List<TProfileId> samplers)
	{
	}

	[Token(Token = "0x60006C7")]
	protected DebugUI.Widget BuildDetailedStatsList(string title, List<TProfileId> samplers)
	{
		return null;
	}

	[Token(Token = "0x60006C8")]
	private void UpdateListOfAveragedProfilerTimings(bool needUpdatingAverages, List<TProfileId> samplers)
	{
	}

	[Token(Token = "0x60006C9")]
	private float GetSamplerTiming(TProfileId samplerId, ProfilingSampler sampler, DebugProfilingType type)
	{
		return default(float);
	}

	[Token(Token = "0x60006CA")]
	private ObservableList<DebugUI.Widget> BuildProfilingSamplerWidgetList(IEnumerable<TProfileId> samplers)
	{
		return null;
	}

	[Token(Token = "0x60006CB")]
	protected DebugDisplayStats()
	{
	}
}
