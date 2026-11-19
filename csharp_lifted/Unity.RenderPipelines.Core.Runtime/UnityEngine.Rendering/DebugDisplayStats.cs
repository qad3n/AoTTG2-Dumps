// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugDisplayStats
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000081")]
public abstract class DebugDisplayStats<TProfileId> where TProfileId : Enum
{
	[Token(Token = "0x2000082")]
	private class AccumulatedTiming
	{
		[Token(Token = "0x40001AC")]
		[FieldOffset(Offset = "0x0")]
		public float accumulatedValue;

		[Token(Token = "0x40001AD")]
		[FieldOffset(Offset = "0x0")]
		public float lastAverage;

		[Token(Token = "0x6000603")]
		internal void UpdateLastAverage(int frameCount)
		{
		}

		[Token(Token = "0x6000604")]
		public AccumulatedTiming()
		{
		}
	}

	[Token(Token = "0x2000083")]
	private enum DebugProfilingType
	{
		[Token(Token = "0x40001AF")]
		CPU,
		[Token(Token = "0x40001B0")]
		InlineCPU,
		[Token(Token = "0x40001B1")]
		GPU
	}

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] k_DetailedStatsColumnLabels;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x0")]
	private Dictionary<TProfileId, AccumulatedTiming>[] m_AccumulatedTiming;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x0")]
	private float m_TimeSinceLastAvgValue;

	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x0")]
	private int m_AccumulatedFrames;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x0")]
	private HashSet<TProfileId> m_HiddenProfileIds;

	[Token(Token = "0x40001A9")]
	private const float k_AccumulationTimeInSeconds = 1f;

	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x0")]
	protected bool averageProfilerTimingsOverASecond;

	[Token(Token = "0x40001AB")]
	[FieldOffset(Offset = "0x0")]
	protected bool hideEmptyScopes;

	[Token(Token = "0x60005F6")]
	public abstract void EnableProfilingRecorders();

	[Token(Token = "0x60005F7")]
	public abstract void DisableProfilingRecorders();

	[Token(Token = "0x60005F8")]
	public abstract void RegisterDebugUI(List<DebugUI.Widget> list);

	[Token(Token = "0x60005F9")]
	public abstract void Update();

	[Token(Token = "0x60005FA")]
	protected List<TProfileId> GetProfilerIdsToDisplay()
	{
		return null;
	}

	[Token(Token = "0x60005FB")]
	protected void UpdateDetailedStats(List<TProfileId> samplers)
	{
	}

	[Token(Token = "0x60005FC")]
	protected DebugUI.Widget BuildDetailedStatsList(string title, List<TProfileId> samplers)
	{
		return null;
	}

	[Token(Token = "0x60005FD")]
	private void UpdateListOfAveragedProfilerTimings(bool needUpdatingAverages, List<TProfileId> samplers)
	{
	}

	[Token(Token = "0x60005FE")]
	private float GetSamplerTiming(TProfileId samplerId, ProfilingSampler sampler, DebugProfilingType type)
	{
		return default(float);
	}

	[Token(Token = "0x60005FF")]
	private ObservableList<DebugUI.Widget> BuildProfilingSamplerWidgetList(IEnumerable<TProfileId> samplers)
	{
		return null;
	}

	[Token(Token = "0x6000600")]
	protected DebugDisplayStats()
	{
	}
}
