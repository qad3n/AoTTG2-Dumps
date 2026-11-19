// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceManagerSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x2000034")]
public sealed class AdaptivePerformanceManagerSettings : ScriptableObject
{
	[Token(Token = "0x2000035")]
	[CompilerGenerated]
	private sealed class _003CInitializeLoader_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000D2")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000D3")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40000D4")]
		[FieldOffset(Offset = "0x20")]
		public AdaptivePerformanceManagerSettings _003C_003E4__this;

		[Token(Token = "0x40000D5")]
		[FieldOffset(Offset = "0x28")]
		private List<AdaptivePerformanceLoader>.Enumerator _003C_003Es__1;

		[Token(Token = "0x40000D6")]
		[FieldOffset(Offset = "0x40")]
		private AdaptivePerformanceLoader _003Cloader_003E5__2;

		[Token(Token = "0x17000082")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000194")]
			[Address(RVA = "0x688BEC0", Offset = "0x688AEC0", VA = "0x688BEC0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000083")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000196")]
			[Address(RVA = "0x688BF10", Offset = "0x688AF10", VA = "0x688BF10", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000190")]
		[Address(RVA = "0x688B900", Offset = "0x688A900", VA = "0x688B900")]
		[DebuggerHidden]
		public _003CInitializeLoader_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000191")]
		[Address(RVA = "0x688B9D0", Offset = "0x688A9D0", VA = "0x688B9D0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000192")]
		[Address(RVA = "0x688BA20", Offset = "0x688AA20", VA = "0x688BA20", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000193")]
		[Address(RVA = "0x688BE80", Offset = "0x688AE80", VA = "0x688BE80")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000195")]
		[Address(RVA = "0x688BED0", Offset = "0x688AED0", VA = "0x688BED0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x18")]
	[HideInInspector]
	private bool m_InitializationComplete;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x19")]
	[Tooltip("Determines if the Adaptive Performance Manager instance is responsible for creating and destroying the appropriate loader instance.")]
	[SerializeField]
	private bool m_AutomaticLoading;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x1A")]
	[SerializeField]
	[Tooltip("Determines if the Adaptive Performance Manager instance is responsible for starting and stopping subsystems for the active loader instance.")]
	private bool m_AutomaticRunning;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[Tooltip("List of Adaptive Performance Loader instances arranged in desired load order.")]
	private List<AdaptivePerformanceLoader> m_Loaders;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x0")]
	[HideInInspector]
	private static AdaptivePerformanceLoader s_ActiveLoader;

	[Token(Token = "0x1700007D")]
	public bool automaticLoading
	{
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x688B7F0", Offset = "0x688A7F0", VA = "0x688B7F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x688AFA0", Offset = "0x6889FA0", VA = "0x688AFA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public bool automaticRunning
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x688B800", Offset = "0x688A800", VA = "0x688B800")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x688AFB0", Offset = "0x6889FB0", VA = "0x688AFB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public List<AdaptivePerformanceLoader> loaders
	{
		[Token(Token = "0x6000182")]
		[Address(RVA = "0x688B810", Offset = "0x688A810", VA = "0x688B810")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x688B820", Offset = "0x688A820", VA = "0x688B820")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public bool isInitializationComplete
	{
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x688B830", Offset = "0x688A830", VA = "0x688B830")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000081")]
	[HideInInspector]
	public AdaptivePerformanceLoader activeLoader
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x688B2B0", Offset = "0x688A2B0", VA = "0x688B2B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x688B840", Offset = "0x688A840", VA = "0x688B840")]
		private set
		{
		}
	}

	[Token(Token = "0x6000187")]
	public T ActiveLoaderAs<T>() where T : AdaptivePerformanceLoader
	{
		return null;
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x688AFC0", Offset = "0x6889FC0", VA = "0x688AFC0")]
	internal void InitializeLoaderSync()
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x688B890", Offset = "0x688A890", VA = "0x688B890")]
	[IteratorStateMachine(typeof(_003CInitializeLoader_003Ed__21))]
	internal IEnumerator InitializeLoader()
	{
		return null;
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x688B2F0", Offset = "0x688A2F0", VA = "0x688B2F0")]
	internal void StartSubsystems()
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x688B410", Offset = "0x688A410", VA = "0x688B410")]
	internal void StopSubsystems()
	{
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x688B530", Offset = "0x688A530", VA = "0x688B530")]
	internal void DeinitializeLoader()
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x688B920", Offset = "0x688A920", VA = "0x688B920")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x688B940", Offset = "0x688A940", VA = "0x688B940")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x688B950", Offset = "0x688A950", VA = "0x688B950")]
	public AdaptivePerformanceManagerSettings()
	{
	}
}
