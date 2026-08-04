// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseHitbox
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20004DA")]
internal class BaseHitbox : MonoBehaviour
{
	[Token(Token = "0x20004DB")]
	[CompilerGenerated]
	private sealed class _003CWaitAndActivate_003Ed__15 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001594")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001595")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001596")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x4001597")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BaseHitbox _003C_003E4__this;

		[Token(Token = "0x170009BE")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600338B")]
			[Address(RVA = "0x41A7D50", Offset = "0x41A7D50", VA = "0x41A7D50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009BF")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600338D")]
			[Address(RVA = "0x41A7DA0", Offset = "0x41A7DA0", VA = "0x41A7DA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003388")]
		[Address(RVA = "0x41A75A0", Offset = "0x41A75A0", VA = "0x41A75A0")]
		[DebuggerHidden]
		public _003CWaitAndActivate_003Ed__15(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003389")]
		[Address(RVA = "0x41A7C10", Offset = "0x41A7C10", VA = "0x41A7C10", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600338A")]
		[Address(RVA = "0x41A7C20", Offset = "0x41A7C20", VA = "0x41A7C20", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600338C")]
		[Address(RVA = "0x41A7D60", Offset = "0x41A7D60", VA = "0x41A7D60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20004DC")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDeactivate_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001598")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001599")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400159A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x400159B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BaseHitbox _003C_003E4__this;

		[Token(Token = "0x170009C0")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003391")]
			[Address(RVA = "0x41A7EF0", Offset = "0x41A7EF0", VA = "0x41A7EF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009C1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003393")]
			[Address(RVA = "0x41A7F40", Offset = "0x41A7F40", VA = "0x41A7F40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600338E")]
		[Address(RVA = "0x41A75C0", Offset = "0x41A75C0", VA = "0x41A75C0")]
		[DebuggerHidden]
		public _003CWaitAndDeactivate_003Ed__16(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600338F")]
		[Address(RVA = "0x41A7DB0", Offset = "0x41A7DB0", VA = "0x41A7DB0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003390")]
		[Address(RVA = "0x41A7DC0", Offset = "0x41A7DC0", VA = "0x41A7DC0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003392")]
		[Address(RVA = "0x41A7F00", Offset = "0x41A7F00", VA = "0x41A7F00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400158C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public BaseCharacter Owner;

	[Token(Token = "0x400158D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public bool TwoFixedUpdates;

	[Token(Token = "0x400158E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected HashSet<GameObject> _hitGameObjects;

	[Token(Token = "0x400158F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected HashSet<Collider> _firstFrameColliders;

	[Token(Token = "0x4001590")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected HashSet<BaseCharacter> _firstHitCharacters;

	[Token(Token = "0x4001591")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected HashSet<CustomLogicCollisionHandler> _firstHitHandlers;

	[Token(Token = "0x4001592")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public Collider _collider;

	[Token(Token = "0x4001593")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public GameObject _debugObject;

	[Token(Token = "0x6003378")]
	[Address(RVA = "0x41A6BF0", Offset = "0x41A6BF0", VA = "0x41A6BF0")]
	public static BaseHitbox Create(BaseCharacter owner, GameObject obj, [Optional] Collider collider)
	{
		return null;
	}

	[Token(Token = "0x6003379")]
	[Address(RVA = "0x41A7060", Offset = "0x41A7060", VA = "0x41A7060")]
	public void UpdateSphereCollider(float radius)
	{
	}

	[Token(Token = "0x600337A")]
	[Address(RVA = "0x41A70F0", Offset = "0x41A70F0", VA = "0x41A70F0")]
	public void ScaleSphereCollider(float scale)
	{
	}

	[Token(Token = "0x600337B")]
	[Address(RVA = "0x41A6DB0", Offset = "0x41A6DB0", VA = "0x41A6DB0")]
	protected void UpdateDebugCollider(SphereCollider collider)
	{
	}

	[Token(Token = "0x600337C")]
	[Address(RVA = "0x41A7180", Offset = "0x41A7180", VA = "0x41A7180")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x600337D")]
	[Address(RVA = "0x41A71A0", Offset = "0x41A71A0", VA = "0x41A71A0")]
	public void Activate(float delay = 0f, float length = 0f)
	{
	}

	[Token(Token = "0x600337E")]
	[Address(RVA = "0x41A6D20", Offset = "0x41A6D20", VA = "0x41A6D20")]
	public void Deactivate()
	{
	}

	[Token(Token = "0x600337F")]
	[Address(RVA = "0x41A74A0", Offset = "0x41A74A0", VA = "0x41A74A0")]
	[IteratorStateMachine(typeof(_003CWaitAndActivate_003Ed__15))]
	protected IEnumerator WaitAndActivate(float delay)
	{
		return null;
	}

	[Token(Token = "0x6003380")]
	[Address(RVA = "0x41A7520", Offset = "0x41A7520", VA = "0x41A7520")]
	[IteratorStateMachine(typeof(_003CWaitAndDeactivate_003Ed__16))]
	protected IEnumerator WaitAndDeactivate(float delay)
	{
		return null;
	}

	[Token(Token = "0x6003381")]
	[Address(RVA = "0x41A75E0", Offset = "0x41A75E0", VA = "0x41A75E0", Slot = "4")]
	protected virtual void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x6003382")]
	[Address(RVA = "0x41A7600", Offset = "0x41A7600", VA = "0x41A7600", Slot = "5")]
	protected virtual void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x6003383")]
	[Address(RVA = "0x41A7620", Offset = "0x41A7620", VA = "0x41A7620", Slot = "6")]
	protected virtual void OnTrigger(Collider other)
	{
	}

	[Token(Token = "0x6003384")]
	[Address(RVA = "0x41A7910", Offset = "0x41A7910", VA = "0x41A7910", Slot = "7")]
	protected virtual void OnHit(BaseCharacter victim, Collider collider)
	{
	}

	[Token(Token = "0x6003385")]
	[Address(RVA = "0x41A79E0", Offset = "0x41A79E0", VA = "0x41A79E0", Slot = "8")]
	protected virtual void OnHit(CustomLogicCollisionHandler handler, Collider collider)
	{
	}

	[Token(Token = "0x6003386")]
	[Address(RVA = "0x41A7420", Offset = "0x41A7420", VA = "0x41A7420")]
	protected void ToggleDebug(bool toggle)
	{
	}

	[Token(Token = "0x6003387")]
	[Address(RVA = "0x41A7AB0", Offset = "0x41A7AB0", VA = "0x41A7AB0")]
	public BaseHitbox()
	{
	}
}
