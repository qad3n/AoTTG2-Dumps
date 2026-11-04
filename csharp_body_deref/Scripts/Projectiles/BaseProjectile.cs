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

[Token(Token = "0x20000FE")]
internal class BaseProjectile : BaseMovementSync
{
	[Token(Token = "0x20000FF")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishDestroyCoroutine_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40005D5")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40005D6")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40005D7")]
		[FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x40005D8")]
		[FieldOffset(Offset = "0x28")]
		public BaseProjectile _003C_003E4__this;

		[Token(Token = "0x170000B6")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60004D6")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000B7")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60004D8")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60004D3")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndFinishDestroyCoroutine_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60004D5")]
		[Address(RVA = "0x1F2A520", Offset = "0x1F28B20", VA = "0x181F2A520", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x1F2A610", Offset = "0x1F28C10", VA = "0x181F2A610", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x98")]
	protected BaseCharacter _owner;

	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0xA0")]
	protected float _timeLeft;

	[Token(Token = "0x40005CF")]
	[FieldOffset(Offset = "0xA8")]
	protected string _team;

	[Token(Token = "0x40005D0")]
	[FieldOffset(Offset = "0xB0")]
	protected Vector3 _velocity;

	[Token(Token = "0x40005D1")]
	[FieldOffset(Offset = "0xC0")]
	protected List<GameObject> _hideObjects;

	[Token(Token = "0x40005D2")]
	[FieldOffset(Offset = "0xC8")]
	protected List<Collider> _colliders;

	[Token(Token = "0x40005D3")]
	[FieldOffset(Offset = "0xD0")]
	protected List<ParticleSystem> _fadeTrails;

	[Token(Token = "0x40005D4")]
	[FieldOffset(Offset = "0xD8")]
	protected ConstantForce _force;

	[Token(Token = "0x170000B4")]
	protected virtual float TrailFadeMultiplier
	{
		[Token(Token = "0x60004C4")]
		[Address(RVA = "0x1F0E9D0", Offset = "0x1F0CFD0", VA = "0x181F0E9D0", Slot = "10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000B5")]
	protected virtual float DestroyDelay
	{
		[Token(Token = "0x60004C5")]
		[Address(RVA = "0x1F0E9C0", Offset = "0x1F0CFC0", VA = "0x181F0E9C0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x1F0E4E0", Offset = "0x1F0CAE0", VA = "0x181F0E4E0", Slot = "12")]
	public virtual void Setup(float liveTime, Vector3 velocity, Vector3 gravity, int charViewId, string team, object[] settings)
	{
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x1F0DE30", Offset = "0x1F0C430", VA = "0x181F0DE30", Slot = "13")]
	[PunRPC]
	public virtual void SetupRPC(int charViewId, object[] settings, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "14")]
	protected virtual void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x1F0DB30", Offset = "0x1F0C130", VA = "0x181F0DB30")]
	protected void RegisterColliders()
	{
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x1F0DAF0", Offset = "0x1F0C0F0", VA = "0x181F0DAF0")]
	public bool IsMine()
	{
		return default(bool);
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x1F0E7A0", Offset = "0x1F0CDA0", VA = "0x181F0E7A0", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "15")]
	protected virtual void RegisterObjects()
	{
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x1F0DB10", Offset = "0x1F0C110", VA = "0x181F0DB10", Slot = "16")]
	protected virtual void OnExceedLiveTime()
	{
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x1F0D440", Offset = "0x1F0BA40", VA = "0x181F0D440", Slot = "17")]
	public virtual void DestroySelf()
	{
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x1F0E820", Offset = "0x1F0CE20", VA = "0x181F0E820", Slot = "18")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishDestroyCoroutine_003Ed__21))]
	protected virtual IEnumerator WaitAndFinishDestroyCoroutine(float time)
	{
		return null;
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x1F0D520", Offset = "0x1F0BB20", VA = "0x181F0D520", Slot = "19")]
	[PunRPC]
	public virtual void DisableRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x1F0DCB0", Offset = "0x1F0C2B0", VA = "0x181F0DCB0")]
	protected void SetDisabledTrailFade(ParticleSystem particleSystem)
	{
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x1F0E8A0", Offset = "0x1F0CEA0", VA = "0x181F0E8A0")]
	public BaseProjectile()
	{
	}
}
