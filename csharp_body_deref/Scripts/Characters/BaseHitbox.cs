// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseHitbox
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/BaseHitbox.c
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseHitbox.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CustomLogic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000691")]
internal class BaseHitbox : MonoBehaviour
{
	[Token(Token = "0x2000692")]
	[CompilerGenerated]
	private sealed class _003CSweepMap_003Ed__20 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001DAA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001DAB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001DAC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public BaseHitbox _003C_003E4__this;

		[Token(Token = "0x17000B14")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003FF9")]
			[Address(RVA = "0x5ABB9E0", Offset = "0x5ABA9E0", VA = "0x5ABB9E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B15")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003FFB")]
			[Address(RVA = "0x5ABBA30", Offset = "0x5ABAA30", VA = "0x5ABBA30", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003FF6")]
		[Address(RVA = "0x5ABB140", Offset = "0x5ABA140", VA = "0x5ABB140")]
		[DebuggerHidden]
		public _003CSweepMap_003Ed__20(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003FF7")]
		[Address(RVA = "0x5ABB920", Offset = "0x5ABA920", VA = "0x5ABB920", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003FF8")]
		[Address(RVA = "0x5ABB930", Offset = "0x5ABA930", VA = "0x5ABB930", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003FFA")]
		[Address(RVA = "0x5ABB9F0", Offset = "0x5ABA9F0", VA = "0x5ABB9F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000693")]
	[CompilerGenerated]
	private sealed class _003CWaitAndActivate_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001DAD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001DAE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001DAF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x4001DB0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BaseHitbox _003C_003E4__this;

		[Token(Token = "0x17000B16")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003FFF")]
			[Address(RVA = "0x5ABBB00", Offset = "0x5ABAB00", VA = "0x5ABBB00", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B17")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004001")]
			[Address(RVA = "0x5ABBB50", Offset = "0x5ABAB50", VA = "0x5ABBB50", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003FFC")]
		[Address(RVA = "0x5ABB0B0", Offset = "0x5ABA0B0", VA = "0x5ABB0B0")]
		[DebuggerHidden]
		public _003CWaitAndActivate_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003FFD")]
		[Address(RVA = "0x5ABBA40", Offset = "0x5ABAA40", VA = "0x5ABBA40", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003FFE")]
		[Address(RVA = "0x5ABBA50", Offset = "0x5ABAA50", VA = "0x5ABBA50", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004000")]
		[Address(RVA = "0x5ABBB10", Offset = "0x5ABAB10", VA = "0x5ABBB10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000694")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDeactivate_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001DB1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001DB2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001DB3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x4001DB4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BaseHitbox _003C_003E4__this;

		[Token(Token = "0x17000B18")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004005")]
			[Address(RVA = "0x5ABBC90", Offset = "0x5ABAC90", VA = "0x5ABBC90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B19")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004007")]
			[Address(RVA = "0x5ABBCE0", Offset = "0x5ABACE0", VA = "0x5ABBCE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004002")]
		[Address(RVA = "0x5ABB160", Offset = "0x5ABA160", VA = "0x5ABB160")]
		[DebuggerHidden]
		public _003CWaitAndDeactivate_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004003")]
		[Address(RVA = "0x5ABBB60", Offset = "0x5ABAB60", VA = "0x5ABBB60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004004")]
		[Address(RVA = "0x5ABBB70", Offset = "0x5ABAB70", VA = "0x5ABBB70", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004006")]
		[Address(RVA = "0x5ABBCA0", Offset = "0x5ABACA0", VA = "0x5ABBCA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001DA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public BaseCharacter Owner;

	[Token(Token = "0x4001DA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public bool TwoFixedUpdates;

	[Token(Token = "0x4001DA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected HashSet<GameObject> _hitGameObjects;

	[Token(Token = "0x4001DA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected HashSet<Collider> _firstFrameColliders;

	[Token(Token = "0x4001DA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected HashSet<BaseCharacter> _firstHitCharacters;

	[Token(Token = "0x4001DA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected HashSet<CustomLogicCollisionHandler> _firstHitHandlers;

	[Token(Token = "0x4001DA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public Collider _collider;

	[Token(Token = "0x4001DA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public GameObject _debugObject;

	[Token(Token = "0x4001DA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private Coroutine _mapSweep;

	[Token(Token = "0x17000B13")]
	protected virtual bool DestroysMap
	{
		[Token(Token = "0x6003FE2")]
		[Address(RVA = "0x5ABA610", Offset = "0x5AB9610", VA = "0x5ABA610", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003FE3")]
	[Address(RVA = "0x5ABA670", Offset = "0x5AB9670", VA = "0x5ABA670")]
	public static BaseHitbox Create(BaseCharacter owner, GameObject obj, [Optional] Collider collider)
	{
		return null;
	}

	[Token(Token = "0x6003FE4")]
	[Address(RVA = "0x5ABAA60", Offset = "0x5AB9A60", VA = "0x5ABAA60")]
	public void UpdateSphereCollider(float radius)
	{
	}

	[Token(Token = "0x6003FE5")]
	[Address(RVA = "0x5AA6310", Offset = "0x5AA5310", VA = "0x5AA6310")]
	public void ScaleSphereCollider(float scale)
	{
	}

	[Token(Token = "0x6003FE6")]
	[Address(RVA = "0x5ABA7B0", Offset = "0x5AB97B0", VA = "0x5ABA7B0")]
	protected void UpdateDebugCollider(SphereCollider collider)
	{
	}

	[Token(Token = "0x6003FE7")]
	[Address(RVA = "0x5ABAAF0", Offset = "0x5AB9AF0", VA = "0x5ABAAF0")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6003FE8")]
	[Address(RVA = "0x5ABAB10", Offset = "0x5AB9B10", VA = "0x5ABAB10", Slot = "5")]
	public virtual void Activate(float delay = 0f, float length = 0f)
	{
	}

	[Token(Token = "0x6003FE9")]
	[Address(RVA = "0x5ABAF80", Offset = "0x5AB9F80", VA = "0x5ABAF80", Slot = "6")]
	public virtual void Deactivate()
	{
	}

	[Token(Token = "0x6003FEA")]
	[Address(RVA = "0x5ABAE80", Offset = "0x5AB9E80", VA = "0x5ABAE80")]
	[IteratorStateMachine(typeof(_003CWaitAndActivate_003Ed__18))]
	protected IEnumerator WaitAndActivate(float delay)
	{
		return null;
	}

	[Token(Token = "0x6003FEB")]
	[Address(RVA = "0x5ABAD10", Offset = "0x5AB9D10", VA = "0x5ABAD10")]
	private void Enable()
	{
	}

	[Token(Token = "0x6003FEC")]
	[Address(RVA = "0x5ABB0D0", Offset = "0x5ABA0D0", VA = "0x5ABB0D0")]
	[IteratorStateMachine(typeof(_003CSweepMap_003Ed__20))]
	private IEnumerator SweepMap()
	{
		return null;
	}

	[Token(Token = "0x6003FED")]
	[Address(RVA = "0x5ABAF00", Offset = "0x5AB9F00", VA = "0x5ABAF00")]
	[IteratorStateMachine(typeof(_003CWaitAndDeactivate_003Ed__21))]
	protected IEnumerator WaitAndDeactivate(float delay)
	{
		return null;
	}

	[Token(Token = "0x6003FEE")]
	[Address(RVA = "0x5ABB180", Offset = "0x5ABA180", VA = "0x5ABB180", Slot = "7")]
	protected virtual void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x6003FEF")]
	[Address(RVA = "0x5ABB300", Offset = "0x5ABA300", VA = "0x5ABB300", Slot = "8")]
	protected virtual void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x6003FF0")]
	[Address(RVA = "0x5ABB320", Offset = "0x5ABA320", VA = "0x5ABB320", Slot = "9")]
	protected virtual void OnTrigger(Collider other)
	{
	}

	[Token(Token = "0x6003FF1")]
	[Address(RVA = "0x5ABB1C0", Offset = "0x5ABA1C0", VA = "0x5ABB1C0")]
	private bool RequiresRepeatedContact(Collider other)
	{
		return default(bool);
	}

	[Token(Token = "0x6003FF2")]
	[Address(RVA = "0x5ABB620", Offset = "0x5ABA620", VA = "0x5ABB620", Slot = "10")]
	protected virtual void OnHit(BaseCharacter victim, Collider collider)
	{
	}

	[Token(Token = "0x6003FF3")]
	[Address(RVA = "0x5ABB6F0", Offset = "0x5ABA6F0", VA = "0x5ABB6F0", Slot = "11")]
	protected virtual void OnHit(CustomLogicCollisionHandler handler, Collider collider)
	{
	}

	[Token(Token = "0x6003FF4")]
	[Address(RVA = "0x5ABB030", Offset = "0x5ABA030", VA = "0x5ABB030")]
	protected void ToggleDebug(bool toggle)
	{
	}

	[Token(Token = "0x6003FF5")]
	[Address(RVA = "0x5ABB7C0", Offset = "0x5ABA7C0", VA = "0x5ABB7C0")]
	public BaseHitbox()
	{
	}
}
