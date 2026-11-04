// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Core.DOTweenComponent
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
using UnityEngine;

namespace DG.Tweening.Core;

[Token(Token = "0x20000A5")]
[AddComponentMenu("")]
public class DOTweenComponent : MonoBehaviour, IDOTweenInit
{
	[Token(Token = "0x20000A6")]
	[CompilerGenerated]
	private sealed class _003CWaitForCompletion_003Ed__17 : IEnumerator<object>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40001D2")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001D3")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40001D4")]
		[FieldOffset(Offset = "0x20")]
		public Tween t;

		[Token(Token = "0x17000012")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60003FC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000013")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60003FE")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003F9")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitForCompletion_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x573EE0", Offset = "0x5724E0", VA = "0x180573EE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x573E20", Offset = "0x572420", VA = "0x180573E20", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x573EA0", Offset = "0x5724A0", VA = "0x180573EA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000A7")]
	[CompilerGenerated]
	private sealed class _003CWaitForElapsedLoops_003Ed__20 : IEnumerator<object>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40001D5")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001D6")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40001D7")]
		[FieldOffset(Offset = "0x20")]
		public Tween t;

		[Token(Token = "0x40001D8")]
		[FieldOffset(Offset = "0x28")]
		public int elapsedLoops;

		[Token(Token = "0x17000014")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000402")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000015")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000404")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitForElapsedLoops_003Ed__20(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000400")]
		[Address(RVA = "0x573EE0", Offset = "0x5724E0", VA = "0x180573EE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000401")]
		[Address(RVA = "0x573F20", Offset = "0x572520", VA = "0x180573F20", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000403")]
		[Address(RVA = "0x573F90", Offset = "0x572590", VA = "0x180573F90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000A8")]
	[CompilerGenerated]
	private sealed class _003CWaitForKill_003Ed__19 : IEnumerator<object>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40001D9")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001DA")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40001DB")]
		[FieldOffset(Offset = "0x20")]
		public Tween t;

		[Token(Token = "0x17000016")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000408")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000017")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600040A")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000405")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitForKill_003Ed__19(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000406")]
		[Address(RVA = "0x573EE0", Offset = "0x5724E0", VA = "0x180573EE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000407")]
		[Address(RVA = "0x573FD0", Offset = "0x5725D0", VA = "0x180573FD0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000409")]
		[Address(RVA = "0x574030", Offset = "0x572630", VA = "0x180574030", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000A9")]
	[CompilerGenerated]
	private sealed class _003CWaitForPosition_003Ed__21 : IEnumerator<object>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40001DC")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001DD")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40001DE")]
		[FieldOffset(Offset = "0x20")]
		public Tween t;

		[Token(Token = "0x40001DF")]
		[FieldOffset(Offset = "0x28")]
		public float position;

		[Token(Token = "0x17000018")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600040E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000019")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000410")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600040B")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitForPosition_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600040C")]
		[Address(RVA = "0x573EE0", Offset = "0x5724E0", VA = "0x180573EE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600040D")]
		[Address(RVA = "0x5823D0", Offset = "0x5809D0", VA = "0x1805823D0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600040F")]
		[Address(RVA = "0x582450", Offset = "0x580A50", VA = "0x180582450", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000AA")]
	[CompilerGenerated]
	private sealed class _003CWaitForRewind_003Ed__18 : IEnumerator<object>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40001E0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001E1")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40001E2")]
		[FieldOffset(Offset = "0x20")]
		public Tween t;

		[Token(Token = "0x1700001A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000414")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700001B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000416")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000411")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitForRewind_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000412")]
		[Address(RVA = "0x573EE0", Offset = "0x5724E0", VA = "0x180573EE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000413")]
		[Address(RVA = "0x582490", Offset = "0x580A90", VA = "0x180582490", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000415")]
		[Address(RVA = "0x582510", Offset = "0x580B10", VA = "0x180582510", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000AB")]
	[CompilerGenerated]
	private sealed class _003CWaitForStart_003Ed__22 : IEnumerator<object>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40001E3")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001E4")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40001E5")]
		[FieldOffset(Offset = "0x20")]
		public Tween t;

		[Token(Token = "0x1700001C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600041A")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700001D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600041C")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000417")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitForStart_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000418")]
		[Address(RVA = "0x573EE0", Offset = "0x5724E0", VA = "0x180573EE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000419")]
		[Address(RVA = "0x582550", Offset = "0x580B50", VA = "0x180582550", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600041B")]
		[Address(RVA = "0x5825C0", Offset = "0x580BC0", VA = "0x1805825C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x20")]
	public int inspectorUpdater;

	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x24")]
	private float _unscaledTime;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x28")]
	private float _unscaledDeltaTime;

	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x2C")]
	private bool _paused;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x30")]
	private float _pausedTime;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x34")]
	private bool _isQuitting;

	[Token(Token = "0x40001D1")]
	[FieldOffset(Offset = "0x35")]
	private bool _duplicateToDestroy;

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x565FC0", Offset = "0x5645C0", VA = "0x180565FC0")]
	private void Awake()
	{
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x567280", Offset = "0x565880", VA = "0x180567280")]
	private void Start()
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x567350", Offset = "0x565950", VA = "0x180567350")]
	private void Update()
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x5667F0", Offset = "0x564DF0", VA = "0x1805667F0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x566650", Offset = "0x564C50", VA = "0x180566650")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x5670B0", Offset = "0x5656B0", VA = "0x1805670B0")]
	private void OnDrawGizmos()
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x566A40", Offset = "0x565040", VA = "0x180566A40")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x566940", Offset = "0x564F40", VA = "0x180566940")]
	public void OnApplicationPause(bool pauseStatus)
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x5669A0", Offset = "0x564FA0", VA = "0x1805669A0")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x567210", Offset = "0x565810", VA = "0x180567210", Slot = "4")]
	public IDOTweenInit SetCapacity(int tweenersCapacity, int sequencesCapacity)
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x567700", Offset = "0x565D00", VA = "0x180567700")]
	[IteratorStateMachine(typeof(_003CWaitForCompletion_003Ed__17))]
	internal IEnumerator WaitForCompletion(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x5678E0", Offset = "0x565EE0", VA = "0x1805678E0")]
	[IteratorStateMachine(typeof(_003CWaitForRewind_003Ed__18))]
	internal IEnumerator WaitForRewind(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x5677F0", Offset = "0x565DF0", VA = "0x1805677F0")]
	[IteratorStateMachine(typeof(_003CWaitForKill_003Ed__19))]
	internal IEnumerator WaitForKill(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x567770", Offset = "0x565D70", VA = "0x180567770")]
	[IteratorStateMachine(typeof(_003CWaitForElapsedLoops_003Ed__20))]
	internal IEnumerator WaitForElapsedLoops(Tween t, int elapsedLoops)
	{
		return null;
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x567860", Offset = "0x565E60", VA = "0x180567860")]
	[IteratorStateMachine(typeof(_003CWaitForPosition_003Ed__21))]
	internal IEnumerator WaitForPosition(Tween t, float position)
	{
		return null;
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x567950", Offset = "0x565F50", VA = "0x180567950")]
	[IteratorStateMachine(typeof(_003CWaitForStart_003Ed__22))]
	internal IEnumerator WaitForStart(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x5663D0", Offset = "0x5649D0", VA = "0x1805663D0")]
	internal static void Create()
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x566520", Offset = "0x564B20", VA = "0x180566520")]
	internal static void DestroyInstance()
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public DOTweenComponent()
	{
	}
}
