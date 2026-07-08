using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Characters;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x20000DD")]
internal class BaseProjectile : BaseMovementSync
{
	[Token(Token = "0x20000DE")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishDestroyCoroutine_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400052E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400052F")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000530")]
		[FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x4000531")]
		[FieldOffset(Offset = "0x28")]
		public BaseProjectile _003C_003E4__this;

		[Token(Token = "0x170000A5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000437")]
			[Address(RVA = "0x3E16CA0", Offset = "0x3E16CA0", VA = "0x3E16CA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000A6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000439")]
			[Address(RVA = "0x3E16CF0", Offset = "0x3E16CF0", VA = "0x3E16CF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000434")]
		[Address(RVA = "0x3E163D0", Offset = "0x3E163D0", VA = "0x3E163D0")]
		[DebuggerHidden]
		public _003CWaitAndFinishDestroyCoroutine_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000435")]
		[Address(RVA = "0x3E16BB0", Offset = "0x3E16BB0", VA = "0x3E16BB0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000436")]
		[Address(RVA = "0x3E16BC0", Offset = "0x3E16BC0", VA = "0x3E16BC0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000438")]
		[Address(RVA = "0x3E16CB0", Offset = "0x3E16CB0", VA = "0x3E16CB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000526")]
	[FieldOffset(Offset = "0x98")]
	protected BaseCharacter _owner;

	[Token(Token = "0x4000527")]
	[FieldOffset(Offset = "0xA0")]
	protected float _timeLeft;

	[Token(Token = "0x4000528")]
	[FieldOffset(Offset = "0xA8")]
	protected string _team;

	[Token(Token = "0x4000529")]
	[FieldOffset(Offset = "0xB0")]
	protected Vector3 _velocity;

	[Token(Token = "0x400052A")]
	[FieldOffset(Offset = "0xC0")]
	protected List<GameObject> _hideObjects;

	[Token(Token = "0x400052B")]
	[FieldOffset(Offset = "0xC8")]
	protected List<Collider> _colliders;

	[Token(Token = "0x400052C")]
	[FieldOffset(Offset = "0xD0")]
	protected List<ParticleSystem> _fadeTrails;

	[Token(Token = "0x400052D")]
	[FieldOffset(Offset = "0xD8")]
	protected ConstantForce _force;

	[Token(Token = "0x170000A3")]
	protected virtual float TrailFadeMultiplier
	{
		[Token(Token = "0x6000425")]
		[Address(RVA = "0x3E15980", Offset = "0x3E15980", VA = "0x3E15980", Slot = "10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000A4")]
	protected virtual float DestroyDelay
	{
		[Token(Token = "0x6000426")]
		[Address(RVA = "0x3E15990", Offset = "0x3E15990", VA = "0x3E15990", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x3E159A0", Offset = "0x3E159A0", VA = "0x3E159A0", Slot = "12")]
	public virtual void Setup(float liveTime, Vector3 velocity, Vector3 gravity, int charViewId, string team, object[] settings)
	{
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x3E15C30", Offset = "0x3E15C30", VA = "0x3E15C30", Slot = "13")]
	[PunRPC]
	public virtual void SetupRPC(int charViewId, object[] settings, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x3E16190", Offset = "0x3E16190", VA = "0x3E16190", Slot = "14")]
	protected virtual void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x3E16010", Offset = "0x3E16010", VA = "0x3E16010")]
	protected void RegisterColliders()
	{
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x3E161A0", Offset = "0x3E161A0", VA = "0x3E161A0")]
	public bool IsMine()
	{
		return default(bool);
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x3E161C0", Offset = "0x3E161C0", VA = "0x3E161C0", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x3E16240", Offset = "0x3E16240", VA = "0x3E16240", Slot = "15")]
	protected virtual void RegisterObjects()
	{
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x3E16250", Offset = "0x3E16250", VA = "0x3E16250", Slot = "16")]
	protected virtual void OnExceedLiveTime()
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x3E16270", Offset = "0x3E16270", VA = "0x3E16270", Slot = "17")]
	public virtual void DestroySelf()
	{
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x3E16350", Offset = "0x3E16350", VA = "0x3E16350", Slot = "18")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishDestroyCoroutine_003Ed__21))]
	protected virtual IEnumerator WaitAndFinishDestroyCoroutine(float time)
	{
		return null;
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x3E163F0", Offset = "0x3E163F0", VA = "0x3E163F0", Slot = "19")]
	[PunRPC]
	public virtual void DisableRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x3E16930", Offset = "0x3E16930", VA = "0x3E16930")]
	protected void SetDisabledTrailFade(ParticleSystem particleSystem)
	{
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x3E16A90", Offset = "0x3E16A90", VA = "0x3E16A90")]
	public BaseProjectile()
	{
	}
}
