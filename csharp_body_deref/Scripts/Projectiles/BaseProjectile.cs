// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.BaseProjectile
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000072")]
internal class BaseProjectile : BaseMovementSync
{
	[Token(Token = "0x2000073")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishDestroyCoroutine_003Ed__23 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400023A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400023B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400023C")]
		[FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x400023D")]
		[FieldOffset(Offset = "0x28")]
		public BaseProjectile _003C_003E4__this;

		[Token(Token = "0x17000081")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600033F")]
			[Address(RVA = "0x57700C0", Offset = "0x576F0C0", VA = "0x57700C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000082")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000341")]
			[Address(RVA = "0x5770110", Offset = "0x576F110", VA = "0x5770110", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600033C")]
		[Address(RVA = "0x576F850", Offset = "0x576E850", VA = "0x576F850")]
		[DebuggerHidden]
		public _003CWaitAndFinishDestroyCoroutine_003Ed__23(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600033D")]
		[Address(RVA = "0x576FFC0", Offset = "0x576EFC0", VA = "0x576FFC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600033E")]
		[Address(RVA = "0x576FFD0", Offset = "0x576EFD0", VA = "0x576FFD0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000340")]
		[Address(RVA = "0x57700D0", Offset = "0x576F0D0", VA = "0x57700D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x98")]
	protected BaseCharacter _owner;

	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0xA0")]
	protected float _timeLeft;

	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0xA8")]
	protected string _team;

	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0xB0")]
	protected Vector3 _velocity;

	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0xC0")]
	protected List<GameObject> _hideObjects;

	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0xC8")]
	protected List<Collider> _colliders;

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0xD0")]
	protected List<ParticleSystem> _fadeTrails;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0xD8")]
	protected ConstantForce _force;

	[Token(Token = "0x1700007F")]
	protected virtual float TrailFadeMultiplier
	{
		[Token(Token = "0x600032B")]
		[Address(RVA = "0x576E9E0", Offset = "0x576D9E0", VA = "0x576E9E0", Slot = "10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000080")]
	protected virtual float DestroyDelay
	{
		[Token(Token = "0x600032C")]
		[Address(RVA = "0x576E9F0", Offset = "0x576D9F0", VA = "0x576E9F0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x576EA00", Offset = "0x576DA00", VA = "0x576EA00", Slot = "12")]
	public virtual void Setup(float liveTime, Vector3 velocity, Vector3 gravity, int charViewId, string team, object[] settings)
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x576EC90", Offset = "0x576DC90", VA = "0x576EC90")]
	protected string GetOwnerName(string fallback)
	{
		return null;
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x576ED10", Offset = "0x576DD10", VA = "0x576ED10", Slot = "13")]
	[PunRPC]
	public virtual void SetupRPC(int charViewId, object[] settings, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x576F550", Offset = "0x576E550", VA = "0x576F550")]
	protected static BaseCharacter GetHitCharacter(Collider collider)
	{
		return null;
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x576F610", Offset = "0x576E610", VA = "0x576F610", Slot = "14")]
	protected virtual void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x576F3E0", Offset = "0x576E3E0", VA = "0x576F3E0")]
	protected void RegisterColliders()
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x576F620", Offset = "0x576E620", VA = "0x576F620")]
	public bool IsMine()
	{
		return default(bool);
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x576F640", Offset = "0x576E640", VA = "0x576F640", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x576F6C0", Offset = "0x576E6C0", VA = "0x576F6C0", Slot = "15")]
	protected virtual void RegisterObjects()
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x576F6D0", Offset = "0x576E6D0", VA = "0x576F6D0", Slot = "16")]
	protected virtual void OnExceedLiveTime()
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x576F6F0", Offset = "0x576E6F0", VA = "0x576F6F0", Slot = "17")]
	public virtual void DestroySelf()
	{
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x576F7D0", Offset = "0x576E7D0", VA = "0x576F7D0", Slot = "18")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishDestroyCoroutine_003Ed__23))]
	protected virtual IEnumerator WaitAndFinishDestroyCoroutine(float time)
	{
		return null;
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x576F870", Offset = "0x576E870", VA = "0x576F870", Slot = "19")]
	[PunRPC]
	public virtual void DisableRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x576FD40", Offset = "0x576ED40", VA = "0x576FD40")]
	protected void SetDisabledTrailFade(ParticleSystem particleSystem)
	{
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x576FEA0", Offset = "0x576EEA0", VA = "0x576FEA0")]
	public BaseProjectile()
	{
	}
}
