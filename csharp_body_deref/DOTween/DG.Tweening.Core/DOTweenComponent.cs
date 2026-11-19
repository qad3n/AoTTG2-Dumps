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
			[Address(RVA = "0x3196A40", Offset = "0x3195A40", VA = "0x3196A40", Slot = "4")]
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
			[Address(RVA = "0x3196A90", Offset = "0x3195A90", VA = "0x3196A90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003F9")]
		[Address(RVA = "0x31964E0", Offset = "0x31954E0", VA = "0x31964E0")]
		[DebuggerHidden]
		public _003CWaitForCompletion_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x31969D0", Offset = "0x31959D0", VA = "0x31969D0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x31969E0", Offset = "0x31959E0", VA = "0x31969E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x3196A50", Offset = "0x3195A50", VA = "0x3196A50", Slot = "8")]
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
			[Address(RVA = "0x3196B10", Offset = "0x3195B10", VA = "0x3196B10", Slot = "4")]
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
			[Address(RVA = "0x3196B60", Offset = "0x3195B60", VA = "0x3196B60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x3196670", Offset = "0x3195670", VA = "0x3196670")]
		[DebuggerHidden]
		public _003CWaitForElapsedLoops_003Ed__20(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000400")]
		[Address(RVA = "0x3196AA0", Offset = "0x3195AA0", VA = "0x3196AA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000401")]
		[Address(RVA = "0x3196AB0", Offset = "0x3195AB0", VA = "0x3196AB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000403")]
		[Address(RVA = "0x3196B20", Offset = "0x3195B20", VA = "0x3196B20", Slot = "8")]
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
			[Address(RVA = "0x3196BD0", Offset = "0x3195BD0", VA = "0x3196BD0", Slot = "4")]
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
			[Address(RVA = "0x3196C20", Offset = "0x3195C20", VA = "0x3196C20", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000405")]
		[Address(RVA = "0x31965E0", Offset = "0x31955E0", VA = "0x31965E0")]
		[DebuggerHidden]
		public _003CWaitForKill_003Ed__19(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000406")]
		[Address(RVA = "0x3196B70", Offset = "0x3195B70", VA = "0x3196B70", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000407")]
		[Address(RVA = "0x3196B80", Offset = "0x3195B80", VA = "0x3196B80", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000409")]
		[Address(RVA = "0x3196BE0", Offset = "0x3195BE0", VA = "0x3196BE0", Slot = "8")]
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
			[Address(RVA = "0x3196E70", Offset = "0x3195E70", VA = "0x3196E70", Slot = "4")]
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
			[Address(RVA = "0x3196EC0", Offset = "0x3195EC0", VA = "0x3196EC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600040B")]
		[Address(RVA = "0x3196DD0", Offset = "0x3195DD0", VA = "0x3196DD0")]
		[DebuggerHidden]
		public _003CWaitForPosition_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600040C")]
		[Address(RVA = "0x3196DF0", Offset = "0x3195DF0", VA = "0x3196DF0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600040D")]
		[Address(RVA = "0x3196E00", Offset = "0x3195E00", VA = "0x3196E00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600040F")]
		[Address(RVA = "0x3196E80", Offset = "0x3195E80", VA = "0x3196E80", Slot = "8")]
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
			[Address(RVA = "0x3196F70", Offset = "0x3195F70", VA = "0x3196F70", Slot = "4")]
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
			[Address(RVA = "0x3196FC0", Offset = "0x3195FC0", VA = "0x3196FC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000411")]
		[Address(RVA = "0x3196ED0", Offset = "0x3195ED0", VA = "0x3196ED0")]
		[DebuggerHidden]
		public _003CWaitForRewind_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000412")]
		[Address(RVA = "0x3196EF0", Offset = "0x3195EF0", VA = "0x3196EF0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000413")]
		[Address(RVA = "0x3196F00", Offset = "0x3195F00", VA = "0x3196F00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000415")]
		[Address(RVA = "0x3196F80", Offset = "0x3195F80", VA = "0x3196F80", Slot = "8")]
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
			[Address(RVA = "0x3197060", Offset = "0x3196060", VA = "0x3197060", Slot = "4")]
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
			[Address(RVA = "0x31970B0", Offset = "0x31960B0", VA = "0x31970B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000417")]
		[Address(RVA = "0x3196FD0", Offset = "0x3195FD0", VA = "0x3196FD0")]
		[DebuggerHidden]
		public _003CWaitForStart_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000418")]
		[Address(RVA = "0x3196FF0", Offset = "0x3195FF0", VA = "0x3196FF0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000419")]
		[Address(RVA = "0x3197000", Offset = "0x3196000", VA = "0x3197000", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600041B")]
		[Address(RVA = "0x3197070", Offset = "0x3196070", VA = "0x3197070", Slot = "8")]
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
	[Address(RVA = "0x31952D0", Offset = "0x31942D0", VA = "0x31952D0")]
	private void Awake()
	{
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x3195510", Offset = "0x3194510", VA = "0x3195510")]
	private void Start()
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x31955D0", Offset = "0x31945D0", VA = "0x31955D0")]
	private void Update()
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x31959D0", Offset = "0x31949D0", VA = "0x31959D0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x3195B70", Offset = "0x3194B70", VA = "0x3195B70")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x3195D50", Offset = "0x3194D50", VA = "0x3195D50")]
	private void OnDrawGizmos()
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x3195EC0", Offset = "0x3194EC0", VA = "0x3195EC0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x3196310", Offset = "0x3195310", VA = "0x3196310")]
	public void OnApplicationPause(bool pauseStatus)
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x3196370", Offset = "0x3195370", VA = "0x3196370")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x3196410", Offset = "0x3195410", VA = "0x3196410", Slot = "4")]
	public IDOTweenInit SetCapacity(int tweenersCapacity, int sequencesCapacity)
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x3196470", Offset = "0x3195470", VA = "0x3196470")]
	[IteratorStateMachine(typeof(_003CWaitForCompletion_003Ed__17))]
	internal IEnumerator WaitForCompletion(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x3196500", Offset = "0x3195500", VA = "0x3196500")]
	[IteratorStateMachine(typeof(_003CWaitForRewind_003Ed__18))]
	internal IEnumerator WaitForRewind(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x3196570", Offset = "0x3195570", VA = "0x3196570")]
	[IteratorStateMachine(typeof(_003CWaitForKill_003Ed__19))]
	internal IEnumerator WaitForKill(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x3196600", Offset = "0x3195600", VA = "0x3196600")]
	[IteratorStateMachine(typeof(_003CWaitForElapsedLoops_003Ed__20))]
	internal IEnumerator WaitForElapsedLoops(Tween t, int elapsedLoops)
	{
		return null;
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x3196690", Offset = "0x3195690", VA = "0x3196690")]
	[IteratorStateMachine(typeof(_003CWaitForPosition_003Ed__21))]
	internal IEnumerator WaitForPosition(Tween t, float position)
	{
		return null;
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x3196710", Offset = "0x3195710", VA = "0x3196710")]
	[IteratorStateMachine(typeof(_003CWaitForStart_003Ed__22))]
	internal IEnumerator WaitForStart(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x3196780", Offset = "0x3195780", VA = "0x3196780")]
	internal static void Create()
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x31968C0", Offset = "0x31958C0", VA = "0x31968C0")]
	internal static void DestroyInstance()
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x31969C0", Offset = "0x31959C0", VA = "0x31969C0")]
	public DOTweenComponent()
	{
	}
}
