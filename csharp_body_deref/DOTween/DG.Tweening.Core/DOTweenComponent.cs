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
			[Address(RVA = "0x231FB10", Offset = "0x231FB10", VA = "0x231FB10", Slot = "4")]
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
			[Address(RVA = "0x231FB60", Offset = "0x231FB60", VA = "0x231FB60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003F9")]
		[Address(RVA = "0x231F5A0", Offset = "0x231F5A0", VA = "0x231F5A0")]
		[DebuggerHidden]
		public _003CWaitForCompletion_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x231FAA0", Offset = "0x231FAA0", VA = "0x231FAA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x231FAB0", Offset = "0x231FAB0", VA = "0x231FAB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x231FB20", Offset = "0x231FB20", VA = "0x231FB20", Slot = "8")]
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
			[Address(RVA = "0x231FBE0", Offset = "0x231FBE0", VA = "0x231FBE0", Slot = "4")]
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
			[Address(RVA = "0x231FC30", Offset = "0x231FC30", VA = "0x231FC30", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x231F740", Offset = "0x231F740", VA = "0x231F740")]
		[DebuggerHidden]
		public _003CWaitForElapsedLoops_003Ed__20(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000400")]
		[Address(RVA = "0x231FB70", Offset = "0x231FB70", VA = "0x231FB70", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000401")]
		[Address(RVA = "0x231FB80", Offset = "0x231FB80", VA = "0x231FB80", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000403")]
		[Address(RVA = "0x231FBF0", Offset = "0x231FBF0", VA = "0x231FBF0", Slot = "8")]
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
			[Address(RVA = "0x231FCA0", Offset = "0x231FCA0", VA = "0x231FCA0", Slot = "4")]
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
			[Address(RVA = "0x231FCF0", Offset = "0x231FCF0", VA = "0x231FCF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000405")]
		[Address(RVA = "0x231F6A0", Offset = "0x231F6A0", VA = "0x231F6A0")]
		[DebuggerHidden]
		public _003CWaitForKill_003Ed__19(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000406")]
		[Address(RVA = "0x231FC40", Offset = "0x231FC40", VA = "0x231FC40", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000407")]
		[Address(RVA = "0x231FC50", Offset = "0x231FC50", VA = "0x231FC50", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000409")]
		[Address(RVA = "0x231FCB0", Offset = "0x231FCB0", VA = "0x231FCB0", Slot = "8")]
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
			[Address(RVA = "0x231FF90", Offset = "0x231FF90", VA = "0x231FF90", Slot = "4")]
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
			[Address(RVA = "0x231FFE0", Offset = "0x231FFE0", VA = "0x231FFE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600040B")]
		[Address(RVA = "0x231FEF0", Offset = "0x231FEF0", VA = "0x231FEF0")]
		[DebuggerHidden]
		public _003CWaitForPosition_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600040C")]
		[Address(RVA = "0x231FF10", Offset = "0x231FF10", VA = "0x231FF10", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600040D")]
		[Address(RVA = "0x231FF20", Offset = "0x231FF20", VA = "0x231FF20", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600040F")]
		[Address(RVA = "0x231FFA0", Offset = "0x231FFA0", VA = "0x231FFA0", Slot = "8")]
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
			[Address(RVA = "0x2320090", Offset = "0x2320090", VA = "0x2320090", Slot = "4")]
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
			[Address(RVA = "0x23200E0", Offset = "0x23200E0", VA = "0x23200E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000411")]
		[Address(RVA = "0x231FFF0", Offset = "0x231FFF0", VA = "0x231FFF0")]
		[DebuggerHidden]
		public _003CWaitForRewind_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000412")]
		[Address(RVA = "0x2320010", Offset = "0x2320010", VA = "0x2320010", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000413")]
		[Address(RVA = "0x2320020", Offset = "0x2320020", VA = "0x2320020", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000415")]
		[Address(RVA = "0x23200A0", Offset = "0x23200A0", VA = "0x23200A0", Slot = "8")]
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
			[Address(RVA = "0x2320180", Offset = "0x2320180", VA = "0x2320180", Slot = "4")]
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
			[Address(RVA = "0x23201D0", Offset = "0x23201D0", VA = "0x23201D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000417")]
		[Address(RVA = "0x23200F0", Offset = "0x23200F0", VA = "0x23200F0")]
		[DebuggerHidden]
		public _003CWaitForStart_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000418")]
		[Address(RVA = "0x2320110", Offset = "0x2320110", VA = "0x2320110", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000419")]
		[Address(RVA = "0x2320120", Offset = "0x2320120", VA = "0x2320120", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600041B")]
		[Address(RVA = "0x2320190", Offset = "0x2320190", VA = "0x2320190", Slot = "8")]
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
	[Address(RVA = "0x231E380", Offset = "0x231E380", VA = "0x231E380")]
	private void Awake()
	{
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x231E5C0", Offset = "0x231E5C0", VA = "0x231E5C0")]
	private void Start()
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x231E680", Offset = "0x231E680", VA = "0x231E680")]
	private void Update()
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x231EA60", Offset = "0x231EA60", VA = "0x231EA60")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x231EC00", Offset = "0x231EC00", VA = "0x231EC00")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x231EDE0", Offset = "0x231EDE0", VA = "0x231EDE0")]
	private void OnDrawGizmos()
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x231EF80", Offset = "0x231EF80", VA = "0x231EF80")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x231F3D0", Offset = "0x231F3D0", VA = "0x231F3D0")]
	public void OnApplicationPause(bool pauseStatus)
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x231F430", Offset = "0x231F430", VA = "0x231F430")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x231F4D0", Offset = "0x231F4D0", VA = "0x231F4D0", Slot = "4")]
	public IDOTweenInit SetCapacity(int tweenersCapacity, int sequencesCapacity)
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x231F530", Offset = "0x231F530", VA = "0x231F530")]
	[IteratorStateMachine(typeof(_003CWaitForCompletion_003Ed__17))]
	internal IEnumerator WaitForCompletion(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x231F5C0", Offset = "0x231F5C0", VA = "0x231F5C0")]
	[IteratorStateMachine(typeof(_003CWaitForRewind_003Ed__18))]
	internal IEnumerator WaitForRewind(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x231F630", Offset = "0x231F630", VA = "0x231F630")]
	[IteratorStateMachine(typeof(_003CWaitForKill_003Ed__19))]
	internal IEnumerator WaitForKill(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x231F6C0", Offset = "0x231F6C0", VA = "0x231F6C0")]
	[IteratorStateMachine(typeof(_003CWaitForElapsedLoops_003Ed__20))]
	internal IEnumerator WaitForElapsedLoops(Tween t, int elapsedLoops)
	{
		return null;
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x231F760", Offset = "0x231F760", VA = "0x231F760")]
	[IteratorStateMachine(typeof(_003CWaitForPosition_003Ed__21))]
	internal IEnumerator WaitForPosition(Tween t, float position)
	{
		return null;
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x231F7E0", Offset = "0x231F7E0", VA = "0x231F7E0")]
	[IteratorStateMachine(typeof(_003CWaitForStart_003Ed__22))]
	internal IEnumerator WaitForStart(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x231F850", Offset = "0x231F850", VA = "0x231F850")]
	internal static void Create()
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x231F990", Offset = "0x231F990", VA = "0x231F990")]
	internal static void DestroyInstance()
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x231FA90", Offset = "0x231FA90", VA = "0x231FA90")]
	public DOTweenComponent()
	{
	}
}
