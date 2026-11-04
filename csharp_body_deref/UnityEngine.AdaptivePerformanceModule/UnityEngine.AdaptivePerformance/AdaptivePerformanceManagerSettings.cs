// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceManagerSettings
// Update status: NEW in this game update
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000190")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CInitializeLoader_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000191")]
		[Address(RVA = "0x2E93BA0", Offset = "0x2E921A0", VA = "0x182E93BA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000192")]
		[Address(RVA = "0x2E93790", Offset = "0x2E91D90", VA = "0x182E93790", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000193")]
		[Address(RVA = "0x2E93C30", Offset = "0x2E92230", VA = "0x182E93C30")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000195")]
		[Address(RVA = "0x2E93B60", Offset = "0x2E92160", VA = "0x182E93B60", Slot = "8")]
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
	[Tooltip("Determines if the Adaptive Performance Manager instance is responsible for starting and stopping subsystems for the active loader instance.")]
	[SerializeField]
	private bool m_AutomaticRunning;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x20")]
	[Tooltip("List of Adaptive Performance Loader instances arranged in desired load order.")]
	[SerializeField]
	private List<AdaptivePerformanceLoader> m_Loaders;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x0")]
	[HideInInspector]
	private static AdaptivePerformanceLoader s_ActiveLoader;

	[Token(Token = "0x1700007D")]
	public bool automaticLoading
	{
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x2E85210", Offset = "0x2E83810", VA = "0x182E85210")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x18C3360", Offset = "0x18C1960", VA = "0x1818C3360")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public bool automaticRunning
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x2E85220", Offset = "0x2E83820", VA = "0x182E85220")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x1CB9D80", Offset = "0x1CB8380", VA = "0x181CB9D80")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public List<AdaptivePerformanceLoader> loaders
	{
		[Token(Token = "0x6000182")]
		[Address(RVA = "0x2E85240", Offset = "0x2E83840", VA = "0x182E85240")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000183")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public bool isInitializationComplete
	{
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x2E85230", Offset = "0x2E83830", VA = "0x182E85230")]
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
		[Address(RVA = "0x2E851D0", Offset = "0x2E837D0", VA = "0x182E851D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x2E85250", Offset = "0x2E83850", VA = "0x182E85250")]
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
	[Address(RVA = "0x2E84BE0", Offset = "0x2E831E0", VA = "0x182E84BE0")]
	internal void InitializeLoaderSync()
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x2E84E60", Offset = "0x2E83460", VA = "0x182E84E60")]
	[IteratorStateMachine(typeof(_003CInitializeLoader_003Ed__21))]
	internal IEnumerator InitializeLoader()
	{
		return null;
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x2E84F00", Offset = "0x2E83500", VA = "0x182E84F00")]
	internal void StartSubsystems()
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x2E85020", Offset = "0x2E83620", VA = "0x182E85020")]
	internal void StopSubsystems()
	{
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x2E84A60", Offset = "0x2E83060", VA = "0x182E84A60")]
	internal void DeinitializeLoader()
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x2E84EE0", Offset = "0x2E834E0", VA = "0x182E84EE0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x2E84ED0", Offset = "0x2E834D0", VA = "0x182E84ED0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x2E85140", Offset = "0x2E83740", VA = "0x182E85140")]
	public AdaptivePerformanceManagerSettings()
	{
	}
}
