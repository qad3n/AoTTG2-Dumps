// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexer
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x200001B")]
public class AdaptivePerformanceIndexer
{
	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x10")]
	private List<AdaptivePerformanceScaler> m_UnappliedScalers;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x18")]
	private List<AdaptivePerformanceScaler> m_AppliedScalers;

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x20")]
	private List<AdaptivePerformanceScaler> m_DisabledScalers;

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x28")]
	private ThermalStateTracker m_ThermalStateTracker;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x30")]
	private PerformanceStateTracker m_PerformanceStateTracker;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x38")]
	private AdaptivePerformanceScalerEfficiencyTracker m_ScalerEfficiencyTracker;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x40")]
	private IAdaptivePerformanceSettings m_Settings;

	[Token(Token = "0x400007B")]
	private const string m_FeatureName = "Indexer";

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<AdaptivePerformanceScaler> ScalerLevelChanged;

	[Token(Token = "0x1700003A")]
	public float TimeUntilNextAction
	{
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x5853E0", Offset = "0x5839E0", VA = "0x1805853E0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x2E847A0", Offset = "0x2E82DA0", VA = "0x182E847A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	private StateAction ThermalAction
	{
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x58A9A0", Offset = "0x588FA0", VA = "0x18058A9A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public StateAction PerformanceAction
	{
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x58A540", Offset = "0x588B40", VA = "0x18058A540")]
		[CompilerGenerated]
		get
		{
			return default(StateAction);
		}
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x58A8D0", Offset = "0x588ED0", VA = "0x18058A8D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x2E83C30", Offset = "0x2E82230", VA = "0x182E83C30")]
	internal void NotifyScalerLevelChanged(AdaptivePerformanceScaler scaler)
	{
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x2E83A80", Offset = "0x2E82080", VA = "0x182E83A80")]
	public void GetAppliedScalers(ref List<AdaptivePerformanceScaler> scalers)
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x2E83BA0", Offset = "0x2E821A0", VA = "0x182E83BA0")]
	public void GetUnappliedScalers(ref List<AdaptivePerformanceScaler> scalers)
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x2E83B10", Offset = "0x2E82110", VA = "0x182E83B10")]
	public void GetDisabledScalers(ref List<AdaptivePerformanceScaler> scalers)
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x2E83D80", Offset = "0x2E82380", VA = "0x182E83D80")]
	public void UnapplyAllScalers()
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x2E84180", Offset = "0x2E82780", VA = "0x182E84180")]
	internal void UpdateOverrideLevel(AdaptivePerformanceScaler scaler)
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x2E82D90", Offset = "0x2E81390", VA = "0x182E82D90")]
	internal void AddScaler(AdaptivePerformanceScaler scaler)
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x2E83C50", Offset = "0x2E82250", VA = "0x182E83C50")]
	internal bool RemoveScaler(AdaptivePerformanceScaler scaler)
	{
		return default(bool);
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x2E845F0", Offset = "0x2E82BF0", VA = "0x182E845F0")]
	internal AdaptivePerformanceIndexer(ref IAdaptivePerformanceSettings settings, PerformanceStateTracker tracker)
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x2E841F0", Offset = "0x2E827F0", VA = "0x182E841F0")]
	internal void Update()
	{
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x2E83A70", Offset = "0x2E82070", VA = "0x182E83A70", Slot = "4")]
	protected virtual float DeltaTime()
	{
		return default(float);
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x2E833A0", Offset = "0x2E819A0", VA = "0x182E833A0")]
	private void CollectProfilerStats()
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x2E83740", Offset = "0x2E81D40", VA = "0x182E83740")]
	private void DeactivateDisabledScalers()
	{
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x2E82BE0", Offset = "0x2E811E0", VA = "0x182E82BE0")]
	private void ActivateEnabledScalers()
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x2E82E30", Offset = "0x2E81430", VA = "0x182E82E30")]
	private bool ApplyLowestCostScaler()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x2E83180", Offset = "0x2E81780", VA = "0x182E83180")]
	private void ApplyScaler(AdaptivePerformanceScaler scaler)
	{
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x2E83E20", Offset = "0x2E82420", VA = "0x182E83E20")]
	private bool UnapplyHighestCostScaler()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x2E84010", Offset = "0x2E82610", VA = "0x182E84010")]
	private void UnapplyScaler(AdaptivePerformanceScaler scaler)
	{
	}
}
