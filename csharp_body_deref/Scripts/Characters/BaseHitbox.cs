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

[Token(Token = "0x2000632")]
internal class BaseHitbox : MonoBehaviour
{
	[Token(Token = "0x2000633")]
	[CompilerGenerated]
	private sealed class _003CSweepMap_003Ed__20 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C03")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C04")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001C05")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public BaseHitbox _003C_003E4__this;

		[Token(Token = "0x17000ACC")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003D67")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000ACD")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003D69")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003D64")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CSweepMap_003Ed__20(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003D65")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003D66")]
		[Address(RVA = "0x211ED60", Offset = "0x211D360", VA = "0x18211ED60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003D68")]
		[Address(RVA = "0x211EE20", Offset = "0x211D420", VA = "0x18211EE20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000634")]
	[CompilerGenerated]
	private sealed class _003CWaitAndActivate_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C06")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C07")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001C08")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x4001C09")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BaseHitbox _003C_003E4__this;

		[Token(Token = "0x17000ACE")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003D6D")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000ACF")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003D6F")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003D6A")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndActivate_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003D6B")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003D6C")]
		[Address(RVA = "0x211F060", Offset = "0x211D660", VA = "0x18211F060", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003D6E")]
		[Address(RVA = "0x211F120", Offset = "0x211D720", VA = "0x18211F120", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000635")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDeactivate_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C0A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C0B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001C0C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x4001C0D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BaseHitbox _003C_003E4__this;

		[Token(Token = "0x17000AD0")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003D73")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AD1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003D75")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003D70")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndDeactivate_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003D71")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003D72")]
		[Address(RVA = "0x211F160", Offset = "0x211D760", VA = "0x18211F160", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003D74")]
		[Address(RVA = "0x211F230", Offset = "0x211D830", VA = "0x18211F230", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001BFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public BaseCharacter Owner;

	[Token(Token = "0x4001BFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public bool TwoFixedUpdates;

	[Token(Token = "0x4001BFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected HashSet<GameObject> _hitGameObjects;

	[Token(Token = "0x4001BFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected HashSet<Collider> _firstFrameColliders;

	[Token(Token = "0x4001BFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected HashSet<BaseCharacter> _firstHitCharacters;

	[Token(Token = "0x4001BFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected HashSet<CustomLogicCollisionHandler> _firstHitHandlers;

	[Token(Token = "0x4001C00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public Collider _collider;

	[Token(Token = "0x4001C01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public GameObject _debugObject;

	[Token(Token = "0x4001C02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private Coroutine _mapSweep;

	[Token(Token = "0x17000ACB")]
	protected virtual bool DestroysMap
	{
		[Token(Token = "0x6003D50")]
		[Address(RVA = "0x21124F0", Offset = "0x2110AF0", VA = "0x1821124F0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003D51")]
	[Address(RVA = "0x2111360", Offset = "0x210F960", VA = "0x182111360")]
	public static BaseHitbox Create(BaseCharacter owner, GameObject obj, [Optional] Collider collider)
	{
		return null;
	}

	[Token(Token = "0x6003D52")]
	[Address(RVA = "0x21121D0", Offset = "0x21107D0", VA = "0x1821121D0")]
	public void UpdateSphereCollider(float radius)
	{
	}

	[Token(Token = "0x6003D53")]
	[Address(RVA = "0x2111CF0", Offset = "0x21102F0", VA = "0x182111CF0")]
	public void ScaleSphereCollider(float scale)
	{
	}

	[Token(Token = "0x6003D54")]
	[Address(RVA = "0x2111ED0", Offset = "0x21104D0", VA = "0x182111ED0")]
	protected void UpdateDebugCollider(SphereCollider collider)
	{
	}

	[Token(Token = "0x6003D55")]
	[Address(RVA = "0x2111670", Offset = "0x210FC70", VA = "0x182111670")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6003D56")]
	[Address(RVA = "0x2111190", Offset = "0x210F790", VA = "0x182111190")]
	public void Activate(float delay = 0f, float length = 0f)
	{
	}

	[Token(Token = "0x6003D57")]
	[Address(RVA = "0x2111500", Offset = "0x210FB00", VA = "0x182111500")]
	public void Deactivate()
	{
	}

	[Token(Token = "0x6003D58")]
	[Address(RVA = "0x21122A0", Offset = "0x21108A0", VA = "0x1821122A0")]
	[IteratorStateMachine(typeof(_003CWaitAndActivate_003Ed__18))]
	protected IEnumerator WaitAndActivate(float delay)
	{
		return null;
	}

	[Token(Token = "0x6003D59")]
	[Address(RVA = "0x2111550", Offset = "0x210FB50", VA = "0x182111550")]
	private void Enable()
	{
	}

	[Token(Token = "0x6003D5A")]
	[Address(RVA = "0x2111DD0", Offset = "0x21103D0", VA = "0x182111DD0")]
	[IteratorStateMachine(typeof(_003CSweepMap_003Ed__20))]
	private IEnumerator SweepMap()
	{
		return null;
	}

	[Token(Token = "0x6003D5B")]
	[Address(RVA = "0x2112320", Offset = "0x2110920", VA = "0x182112320")]
	[IteratorStateMachine(typeof(_003CWaitAndDeactivate_003Ed__21))]
	protected IEnumerator WaitAndDeactivate(float delay)
	{
		return null;
	}

	[Token(Token = "0x6003D5C")]
	[Address(RVA = "0x2111850", Offset = "0x210FE50", VA = "0x182111850", Slot = "5")]
	protected virtual void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x6003D5D")]
	[Address(RVA = "0x2111890", Offset = "0x210FE90", VA = "0x182111890", Slot = "6")]
	protected virtual void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x6003D5E")]
	[Address(RVA = "0x21118B0", Offset = "0x210FEB0", VA = "0x1821118B0", Slot = "7")]
	protected virtual void OnTrigger(Collider other)
	{
	}

	[Token(Token = "0x6003D5F")]
	[Address(RVA = "0x2111B90", Offset = "0x2110190", VA = "0x182111B90")]
	private bool RequiresRepeatedContact(Collider other)
	{
		return default(bool);
	}

	[Token(Token = "0x6003D60")]
	[Address(RVA = "0x2111690", Offset = "0x210FC90", VA = "0x182111690", Slot = "8")]
	protected virtual void OnHit(BaseCharacter victim, Collider collider)
	{
	}

	[Token(Token = "0x6003D61")]
	[Address(RVA = "0x2111770", Offset = "0x210FD70", VA = "0x182111770", Slot = "9")]
	protected virtual void OnHit(CustomLogicCollisionHandler handler, Collider collider)
	{
	}

	[Token(Token = "0x6003D62")]
	[Address(RVA = "0x2111E40", Offset = "0x2110440", VA = "0x182111E40")]
	protected void ToggleDebug(bool toggle)
	{
	}

	[Token(Token = "0x6003D63")]
	[Address(RVA = "0x21123A0", Offset = "0x21109A0", VA = "0x1821123A0")]
	public BaseHitbox()
	{
	}
}
