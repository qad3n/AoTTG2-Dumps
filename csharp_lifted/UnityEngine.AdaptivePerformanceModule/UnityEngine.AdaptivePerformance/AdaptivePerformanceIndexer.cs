// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexer
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200002D")]
public class AdaptivePerformanceIndexer
{
	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x10")]
	private List<AdaptivePerformanceScaler> m_UnappliedScalers;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x18")]
	private List<AdaptivePerformanceScaler> m_AppliedScalers;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x20")]
	private List<AdaptivePerformanceScaler> m_DisabledScalers;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x28")]
	private ThermalStateTracker m_ThermalStateTracker;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x30")]
	private PerformanceStateTracker m_PerformanceStateTracker;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x38")]
	private AdaptivePerformanceScalerEfficiencyTracker m_ScalerEfficiencyTracker;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x40")]
	private IAdaptivePerformanceSettings m_Settings;

	[Token(Token = "0x40000A6")]
	private const string m_FeatureName = "Indexer";

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<AdaptivePerformanceScaler> ScalerLevelChanged;

	[Token(Token = "0x17000058")]
	public float TimeUntilNextAction
	{
		[Token(Token = "0x6000102")]
		[Address(RVA = "0x6887550", Offset = "0x6886550", VA = "0x6887550")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000103")]
		[Address(RVA = "0x6887560", Offset = "0x6886560", VA = "0x6887560")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000059")]
	private StateAction ThermalAction
	{
		[Token(Token = "0x6000104")]
		[Address(RVA = "0x6887570", Offset = "0x6886570", VA = "0x6887570")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public StateAction PerformanceAction
	{
		[Token(Token = "0x6000105")]
		[Address(RVA = "0x6887580", Offset = "0x6886580", VA = "0x6887580")]
		[CompilerGenerated]
		get
		{
			return default(StateAction);
		}
		[Token(Token = "0x6000106")]
		[Address(RVA = "0x6887590", Offset = "0x6886590", VA = "0x6887590")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x68875A0", Offset = "0x68865A0", VA = "0x68875A0")]
	internal void NotifyScalerLevelChanged(AdaptivePerformanceScaler scaler)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x68875C0", Offset = "0x68865C0", VA = "0x68875C0")]
	public void GetAppliedScalers(ref List<AdaptivePerformanceScaler> scalers)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x6887640", Offset = "0x6886640", VA = "0x6887640")]
	public void GetUnappliedScalers(ref List<AdaptivePerformanceScaler> scalers)
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x68876C0", Offset = "0x68866C0", VA = "0x68876C0")]
	public void GetDisabledScalers(ref List<AdaptivePerformanceScaler> scalers)
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x68837B0", Offset = "0x68827B0", VA = "0x68837B0")]
	public void UnapplyAllScalers()
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x68879B0", Offset = "0x68869B0", VA = "0x68879B0")]
	internal void UpdateOverrideLevel(AdaptivePerformanceScaler scaler)
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x6887C60", Offset = "0x6886C60", VA = "0x6887C60")]
	internal void AddScaler(AdaptivePerformanceScaler scaler)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x6887D40", Offset = "0x6886D40", VA = "0x6887D40")]
	internal bool RemoveScaler(AdaptivePerformanceScaler scaler)
	{
		return default(bool);
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x6883220", Offset = "0x6882220", VA = "0x6883220")]
	internal AdaptivePerformanceIndexer(ref IAdaptivePerformanceSettings settings, PerformanceStateTracker tracker)
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x6880520", Offset = "0x687F520", VA = "0x6880520")]
	internal void Update()
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x6888FD0", Offset = "0x6887FD0", VA = "0x6888FD0", Slot = "4")]
	protected virtual float DeltaTime()
	{
		return default(float);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x6888690", Offset = "0x6887690", VA = "0x6888690")]
	private void CollectProfilerStats()
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x6887F30", Offset = "0x6886F30", VA = "0x6887F30")]
	private void DeactivateDisabledScalers()
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x6888470", Offset = "0x6887470", VA = "0x6888470")]
	private void ActivateEnabledScalers()
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x6888C60", Offset = "0x6887C60", VA = "0x6888C60")]
	private bool ApplyLowestCostScaler()
	{
		return default(bool);
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x6887A10", Offset = "0x6886A10", VA = "0x6887A10")]
	private void ApplyScaler(AdaptivePerformanceScaler scaler)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x6888A70", Offset = "0x6887A70", VA = "0x6888A70")]
	private bool UnapplyHighestCostScaler()
	{
		return default(bool);
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x6887760", Offset = "0x6886760", VA = "0x6887760")]
	private void UnapplyScaler(AdaptivePerformanceScaler scaler)
	{
	}
}
