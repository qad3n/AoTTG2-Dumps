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
			[Address(RVA = "0x23863F0", Offset = "0x23863F0", VA = "0x23863F0", Slot = "4")]
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
			[Address(RVA = "0x2386440", Offset = "0x2386440", VA = "0x2386440", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003F9")]
		[Address(RVA = "0x2385E80", Offset = "0x2385E80", VA = "0x2385E80")]
		[DebuggerHidden]
		public _003CWaitForCompletion_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x2386380", Offset = "0x2386380", VA = "0x2386380", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x2386390", Offset = "0x2386390", VA = "0x2386390", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x2386400", Offset = "0x2386400", VA = "0x2386400", Slot = "8")]
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
			[Address(RVA = "0x23864C0", Offset = "0x23864C0", VA = "0x23864C0", Slot = "4")]
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
			[Address(RVA = "0x2386510", Offset = "0x2386510", VA = "0x2386510", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x2386020", Offset = "0x2386020", VA = "0x2386020")]
		[DebuggerHidden]
		public _003CWaitForElapsedLoops_003Ed__20(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000400")]
		[Address(RVA = "0x2386450", Offset = "0x2386450", VA = "0x2386450", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000401")]
		[Address(RVA = "0x2386460", Offset = "0x2386460", VA = "0x2386460", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000403")]
		[Address(RVA = "0x23864D0", Offset = "0x23864D0", VA = "0x23864D0", Slot = "8")]
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
			[Address(RVA = "0x2386580", Offset = "0x2386580", VA = "0x2386580", Slot = "4")]
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
			[Address(RVA = "0x23865D0", Offset = "0x23865D0", VA = "0x23865D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000405")]
		[Address(RVA = "0x2385F80", Offset = "0x2385F80", VA = "0x2385F80")]
		[DebuggerHidden]
		public _003CWaitForKill_003Ed__19(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000406")]
		[Address(RVA = "0x2386520", Offset = "0x2386520", VA = "0x2386520", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000407")]
		[Address(RVA = "0x2386530", Offset = "0x2386530", VA = "0x2386530", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000409")]
		[Address(RVA = "0x2386590", Offset = "0x2386590", VA = "0x2386590", Slot = "8")]
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
			[Address(RVA = "0x2386870", Offset = "0x2386870", VA = "0x2386870", Slot = "4")]
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
			[Address(RVA = "0x23868C0", Offset = "0x23868C0", VA = "0x23868C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600040B")]
		[Address(RVA = "0x23867D0", Offset = "0x23867D0", VA = "0x23867D0")]
		[DebuggerHidden]
		public _003CWaitForPosition_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600040C")]
		[Address(RVA = "0x23867F0", Offset = "0x23867F0", VA = "0x23867F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600040D")]
		[Address(RVA = "0x2386800", Offset = "0x2386800", VA = "0x2386800", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600040F")]
		[Address(RVA = "0x2386880", Offset = "0x2386880", VA = "0x2386880", Slot = "8")]
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
			[Address(RVA = "0x2386970", Offset = "0x2386970", VA = "0x2386970", Slot = "4")]
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
			[Address(RVA = "0x23869C0", Offset = "0x23869C0", VA = "0x23869C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000411")]
		[Address(RVA = "0x23868D0", Offset = "0x23868D0", VA = "0x23868D0")]
		[DebuggerHidden]
		public _003CWaitForRewind_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000412")]
		[Address(RVA = "0x23868F0", Offset = "0x23868F0", VA = "0x23868F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000413")]
		[Address(RVA = "0x2386900", Offset = "0x2386900", VA = "0x2386900", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000415")]
		[Address(RVA = "0x2386980", Offset = "0x2386980", VA = "0x2386980", Slot = "8")]
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
			[Address(RVA = "0x2386A60", Offset = "0x2386A60", VA = "0x2386A60", Slot = "4")]
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
			[Address(RVA = "0x2386AB0", Offset = "0x2386AB0", VA = "0x2386AB0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000417")]
		[Address(RVA = "0x23869D0", Offset = "0x23869D0", VA = "0x23869D0")]
		[DebuggerHidden]
		public _003CWaitForStart_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000418")]
		[Address(RVA = "0x23869F0", Offset = "0x23869F0", VA = "0x23869F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000419")]
		[Address(RVA = "0x2386A00", Offset = "0x2386A00", VA = "0x2386A00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600041B")]
		[Address(RVA = "0x2386A70", Offset = "0x2386A70", VA = "0x2386A70", Slot = "8")]
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
	[Address(RVA = "0x2384C60", Offset = "0x2384C60", VA = "0x2384C60")]
	private void Awake()
	{
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x2384EA0", Offset = "0x2384EA0", VA = "0x2384EA0")]
	private void Start()
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x2384F60", Offset = "0x2384F60", VA = "0x2384F60")]
	private void Update()
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x2385340", Offset = "0x2385340", VA = "0x2385340")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x23854E0", Offset = "0x23854E0", VA = "0x23854E0")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x23856C0", Offset = "0x23856C0", VA = "0x23856C0")]
	private void OnDrawGizmos()
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x2385860", Offset = "0x2385860", VA = "0x2385860")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x2385CB0", Offset = "0x2385CB0", VA = "0x2385CB0")]
	public void OnApplicationPause(bool pauseStatus)
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x2385D10", Offset = "0x2385D10", VA = "0x2385D10")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x2385DB0", Offset = "0x2385DB0", VA = "0x2385DB0", Slot = "4")]
	public IDOTweenInit SetCapacity(int tweenersCapacity, int sequencesCapacity)
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x2385E10", Offset = "0x2385E10", VA = "0x2385E10")]
	[IteratorStateMachine(typeof(_003CWaitForCompletion_003Ed__17))]
	internal IEnumerator WaitForCompletion(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x2385EA0", Offset = "0x2385EA0", VA = "0x2385EA0")]
	[IteratorStateMachine(typeof(_003CWaitForRewind_003Ed__18))]
	internal IEnumerator WaitForRewind(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x2385F10", Offset = "0x2385F10", VA = "0x2385F10")]
	[IteratorStateMachine(typeof(_003CWaitForKill_003Ed__19))]
	internal IEnumerator WaitForKill(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x2385FA0", Offset = "0x2385FA0", VA = "0x2385FA0")]
	[IteratorStateMachine(typeof(_003CWaitForElapsedLoops_003Ed__20))]
	internal IEnumerator WaitForElapsedLoops(Tween t, int elapsedLoops)
	{
		return null;
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x2386040", Offset = "0x2386040", VA = "0x2386040")]
	[IteratorStateMachine(typeof(_003CWaitForPosition_003Ed__21))]
	internal IEnumerator WaitForPosition(Tween t, float position)
	{
		return null;
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x23860C0", Offset = "0x23860C0", VA = "0x23860C0")]
	[IteratorStateMachine(typeof(_003CWaitForStart_003Ed__22))]
	internal IEnumerator WaitForStart(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x2386130", Offset = "0x2386130", VA = "0x2386130")]
	internal static void Create()
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x2386270", Offset = "0x2386270", VA = "0x2386270")]
	internal static void DestroyInstance()
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x2386370", Offset = "0x2386370", VA = "0x2386370")]
	public DOTweenComponent()
	{
	}
}
