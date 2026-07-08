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

[Token(Token = "0x2000495")]
internal class BaseHitbox : MonoBehaviour
{
	[Token(Token = "0x2000496")]
	[CompilerGenerated]
	private sealed class _003CWaitAndActivate_003Ed__15 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001483")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001484")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001485")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x4001486")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BaseHitbox _003C_003E4__this;

		[Token(Token = "0x17000954")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600317D")]
			[Address(RVA = "0x3E9B4B0", Offset = "0x3E9B4B0", VA = "0x3E9B4B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000955")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600317F")]
			[Address(RVA = "0x3E9B500", Offset = "0x3E9B500", VA = "0x3E9B500", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600317A")]
		[Address(RVA = "0x3E9AD00", Offset = "0x3E9AD00", VA = "0x3E9AD00")]
		[DebuggerHidden]
		public _003CWaitAndActivate_003Ed__15(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600317B")]
		[Address(RVA = "0x3E9B370", Offset = "0x3E9B370", VA = "0x3E9B370", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600317C")]
		[Address(RVA = "0x3E9B380", Offset = "0x3E9B380", VA = "0x3E9B380", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600317E")]
		[Address(RVA = "0x3E9B4C0", Offset = "0x3E9B4C0", VA = "0x3E9B4C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000497")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDeactivate_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001487")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001488")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001489")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x400148A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BaseHitbox _003C_003E4__this;

		[Token(Token = "0x17000956")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003183")]
			[Address(RVA = "0x3E9B650", Offset = "0x3E9B650", VA = "0x3E9B650", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000957")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003185")]
			[Address(RVA = "0x3E9B6A0", Offset = "0x3E9B6A0", VA = "0x3E9B6A0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003180")]
		[Address(RVA = "0x3E9AD20", Offset = "0x3E9AD20", VA = "0x3E9AD20")]
		[DebuggerHidden]
		public _003CWaitAndDeactivate_003Ed__16(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003181")]
		[Address(RVA = "0x3E9B510", Offset = "0x3E9B510", VA = "0x3E9B510", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003182")]
		[Address(RVA = "0x3E9B520", Offset = "0x3E9B520", VA = "0x3E9B520", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003184")]
		[Address(RVA = "0x3E9B660", Offset = "0x3E9B660", VA = "0x3E9B660", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400147B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public BaseCharacter Owner;

	[Token(Token = "0x400147C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public bool TwoFixedUpdates;

	[Token(Token = "0x400147D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected HashSet<GameObject> _hitGameObjects;

	[Token(Token = "0x400147E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected HashSet<Collider> _firstFrameColliders;

	[Token(Token = "0x400147F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected HashSet<BaseCharacter> _firstHitCharacters;

	[Token(Token = "0x4001480")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected HashSet<CustomLogicCollisionHandler> _firstHitHandlers;

	[Token(Token = "0x4001481")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public Collider _collider;

	[Token(Token = "0x4001482")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public GameObject _debugObject;

	[Token(Token = "0x600316A")]
	[Address(RVA = "0x3E9A350", Offset = "0x3E9A350", VA = "0x3E9A350")]
	public static BaseHitbox Create(BaseCharacter owner, GameObject obj, [Optional] Collider collider)
	{
		return null;
	}

	[Token(Token = "0x600316B")]
	[Address(RVA = "0x3E9A7C0", Offset = "0x3E9A7C0", VA = "0x3E9A7C0")]
	public void UpdateSphereCollider(float radius)
	{
	}

	[Token(Token = "0x600316C")]
	[Address(RVA = "0x3E9A850", Offset = "0x3E9A850", VA = "0x3E9A850")]
	public void ScaleSphereCollider(float scale)
	{
	}

	[Token(Token = "0x600316D")]
	[Address(RVA = "0x3E9A510", Offset = "0x3E9A510", VA = "0x3E9A510")]
	protected void UpdateDebugCollider(SphereCollider collider)
	{
	}

	[Token(Token = "0x600316E")]
	[Address(RVA = "0x3E9A8E0", Offset = "0x3E9A8E0", VA = "0x3E9A8E0")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x600316F")]
	[Address(RVA = "0x3E9A900", Offset = "0x3E9A900", VA = "0x3E9A900")]
	public void Activate(float delay = 0f, float length = 0f)
	{
	}

	[Token(Token = "0x6003170")]
	[Address(RVA = "0x3E9A480", Offset = "0x3E9A480", VA = "0x3E9A480")]
	public void Deactivate()
	{
	}

	[Token(Token = "0x6003171")]
	[Address(RVA = "0x3E9AC00", Offset = "0x3E9AC00", VA = "0x3E9AC00")]
	[IteratorStateMachine(typeof(_003CWaitAndActivate_003Ed__15))]
	protected IEnumerator WaitAndActivate(float delay)
	{
		return null;
	}

	[Token(Token = "0x6003172")]
	[Address(RVA = "0x3E9AC80", Offset = "0x3E9AC80", VA = "0x3E9AC80")]
	[IteratorStateMachine(typeof(_003CWaitAndDeactivate_003Ed__16))]
	protected IEnumerator WaitAndDeactivate(float delay)
	{
		return null;
	}

	[Token(Token = "0x6003173")]
	[Address(RVA = "0x3E9AD40", Offset = "0x3E9AD40", VA = "0x3E9AD40", Slot = "4")]
	protected virtual void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x6003174")]
	[Address(RVA = "0x3E9AD60", Offset = "0x3E9AD60", VA = "0x3E9AD60", Slot = "5")]
	protected virtual void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x6003175")]
	[Address(RVA = "0x3E9AD80", Offset = "0x3E9AD80", VA = "0x3E9AD80", Slot = "6")]
	protected virtual void OnTrigger(Collider other)
	{
	}

	[Token(Token = "0x6003176")]
	[Address(RVA = "0x3E9B070", Offset = "0x3E9B070", VA = "0x3E9B070", Slot = "7")]
	protected virtual void OnHit(BaseCharacter victim, Collider collider)
	{
	}

	[Token(Token = "0x6003177")]
	[Address(RVA = "0x3E9B140", Offset = "0x3E9B140", VA = "0x3E9B140", Slot = "8")]
	protected virtual void OnHit(CustomLogicCollisionHandler handler, Collider collider)
	{
	}

	[Token(Token = "0x6003178")]
	[Address(RVA = "0x3E9AB80", Offset = "0x3E9AB80", VA = "0x3E9AB80")]
	protected void ToggleDebug(bool toggle)
	{
	}

	[Token(Token = "0x6003179")]
	[Address(RVA = "0x3E9B210", Offset = "0x3E9B210", VA = "0x3E9B210")]
	public BaseHitbox()
	{
	}
}
