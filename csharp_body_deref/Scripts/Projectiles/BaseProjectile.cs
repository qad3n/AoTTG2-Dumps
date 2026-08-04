// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.BaseProjectile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/BaseProjectile.c
// Prior real C# source (older reference): Assets/Scripts/Projectiles/BaseProjectile.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

[Token(Token = "0x20000DE")]
internal class BaseProjectile : BaseMovementSync
{
	[Token(Token = "0x20000DF")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishDestroyCoroutine_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000535")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000536")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000537")]
		[FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x4000538")]
		[FieldOffset(Offset = "0x28")]
		public BaseProjectile _003C_003E4__this;

		[Token(Token = "0x170000A7")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600043D")]
			[Address(RVA = "0x4105D90", Offset = "0x4105D90", VA = "0x4105D90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000A8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600043F")]
			[Address(RVA = "0x4105DE0", Offset = "0x4105DE0", VA = "0x4105DE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600043A")]
		[Address(RVA = "0x41054C0", Offset = "0x41054C0", VA = "0x41054C0")]
		[DebuggerHidden]
		public _003CWaitAndFinishDestroyCoroutine_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600043B")]
		[Address(RVA = "0x4105CA0", Offset = "0x4105CA0", VA = "0x4105CA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600043C")]
		[Address(RVA = "0x4105CB0", Offset = "0x4105CB0", VA = "0x4105CB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600043E")]
		[Address(RVA = "0x4105DA0", Offset = "0x4105DA0", VA = "0x4105DA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400052D")]
	[FieldOffset(Offset = "0x98")]
	protected BaseCharacter _owner;

	[Token(Token = "0x400052E")]
	[FieldOffset(Offset = "0xA0")]
	protected float _timeLeft;

	[Token(Token = "0x400052F")]
	[FieldOffset(Offset = "0xA8")]
	protected string _team;

	[Token(Token = "0x4000530")]
	[FieldOffset(Offset = "0xB0")]
	protected Vector3 _velocity;

	[Token(Token = "0x4000531")]
	[FieldOffset(Offset = "0xC0")]
	protected List<GameObject> _hideObjects;

	[Token(Token = "0x4000532")]
	[FieldOffset(Offset = "0xC8")]
	protected List<Collider> _colliders;

	[Token(Token = "0x4000533")]
	[FieldOffset(Offset = "0xD0")]
	protected List<ParticleSystem> _fadeTrails;

	[Token(Token = "0x4000534")]
	[FieldOffset(Offset = "0xD8")]
	protected ConstantForce _force;

	[Token(Token = "0x170000A5")]
	protected virtual float TrailFadeMultiplier
	{
		[Token(Token = "0x600042B")]
		[Address(RVA = "0x4104A70", Offset = "0x4104A70", VA = "0x4104A70", Slot = "10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000A6")]
	protected virtual float DestroyDelay
	{
		[Token(Token = "0x600042C")]
		[Address(RVA = "0x4104A80", Offset = "0x4104A80", VA = "0x4104A80", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x4104A90", Offset = "0x4104A90", VA = "0x4104A90", Slot = "12")]
	public virtual void Setup(float liveTime, Vector3 velocity, Vector3 gravity, int charViewId, string team, object[] settings)
	{
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x4104D20", Offset = "0x4104D20", VA = "0x4104D20", Slot = "13")]
	[PunRPC]
	public virtual void SetupRPC(int charViewId, object[] settings, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x4105280", Offset = "0x4105280", VA = "0x4105280", Slot = "14")]
	protected virtual void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x4105100", Offset = "0x4105100", VA = "0x4105100")]
	protected void RegisterColliders()
	{
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x4105290", Offset = "0x4105290", VA = "0x4105290")]
	public bool IsMine()
	{
		return default(bool);
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x41052B0", Offset = "0x41052B0", VA = "0x41052B0", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x4105330", Offset = "0x4105330", VA = "0x4105330", Slot = "15")]
	protected virtual void RegisterObjects()
	{
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x4105340", Offset = "0x4105340", VA = "0x4105340", Slot = "16")]
	protected virtual void OnExceedLiveTime()
	{
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x4105360", Offset = "0x4105360", VA = "0x4105360", Slot = "17")]
	public virtual void DestroySelf()
	{
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x4105440", Offset = "0x4105440", VA = "0x4105440", Slot = "18")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishDestroyCoroutine_003Ed__21))]
	protected virtual IEnumerator WaitAndFinishDestroyCoroutine(float time)
	{
		return null;
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x41054E0", Offset = "0x41054E0", VA = "0x41054E0", Slot = "19")]
	[PunRPC]
	public virtual void DisableRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x4105A20", Offset = "0x4105A20", VA = "0x4105A20")]
	protected void SetDisabledTrailFade(ParticleSystem particleSystem)
	{
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x4105B80", Offset = "0x4105B80", VA = "0x4105B80")]
	public BaseProjectile()
	{
	}
}
