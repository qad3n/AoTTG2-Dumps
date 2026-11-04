// ==================== AoTTG2 cross-reference ====================
// Type: Characters.WallColossalShifter
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/WallColossalShifter.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/WallColossal/WallColossalShifter.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CustomSkins;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using Settings;
using SimpleJSONFixed;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x20006A5")]
internal class WallColossalShifter : BaseShifter
{
	[Token(Token = "0x20006A6")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__78 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001FAA")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001FAB")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001FAC")]
		[FieldOffset(Offset = "0x20")]
		public WallColossalShifter _003C_003E4__this;

		[Token(Token = "0x17000B6F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600414B")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B70")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600414D")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004148")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__78(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004149")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600414A")]
		[Address(RVA = "0x2193480", Offset = "0x2191A80", VA = "0x182193480", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600414C")]
		[Address(RVA = "0x2193830", Offset = "0x2191E30", VA = "0x182193830", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001F8C")]
	[FieldOffset(Offset = "0x2C0")]
	public WallColossalComponentCache ColossalCache;

	[Token(Token = "0x4001F8D")]
	[FieldOffset(Offset = "0x2C8")]
	protected WallColossalAnimations ColossalAnimations;

	[Token(Token = "0x4001F8E")]
	[FieldOffset(Offset = "0x2D0")]
	protected float _steamTimeLeft;

	[Token(Token = "0x4001F8F")]
	[FieldOffset(Offset = "0x2D4")]
	protected float _steamBlowAwayTimeLeft;

	[Token(Token = "0x4001F90")]
	[FieldOffset(Offset = "0x2D8")]
	protected float _steamDamageTimeLeft;

	[Token(Token = "0x4001F91")]
	[FieldOffset(Offset = "0x2DC")]
	protected ColossalSteamState _steamState;

	[Token(Token = "0x4001F92")]
	[FieldOffset(Offset = "0x2E0")]
	public float WarningSteamTime;

	[Token(Token = "0x4001F93")]
	[FieldOffset(Offset = "0x2E4")]
	public float SteamDamageInterval;

	[Token(Token = "0x4001F94")]
	[FieldOffset(Offset = "0x2E8")]
	public int SteamDamagePerSecond;

	[Token(Token = "0x4001F95")]
	[FieldOffset(Offset = "0x2EC")]
	public int MaxLeftHandHealth;

	[Token(Token = "0x4001F96")]
	[FieldOffset(Offset = "0x2F0")]
	public int MaxRightHandHealth;

	[Token(Token = "0x4001F97")]
	[FieldOffset(Offset = "0x2F4")]
	public int CurrentLeftHandHealth;

	[Token(Token = "0x4001F98")]
	[FieldOffset(Offset = "0x2F8")]
	public int CurrentRightHandHealth;

	[Token(Token = "0x4001F99")]
	[FieldOffset(Offset = "0x2FC")]
	public bool CanDamageLeftHand;

	[Token(Token = "0x4001F9A")]
	[FieldOffset(Offset = "0x2FD")]
	public bool CanDamageRightHand;

	[Token(Token = "0x4001F9B")]
	[FieldOffset(Offset = "0x300")]
	protected ColossalHandState _leftHandState;

	[Token(Token = "0x4001F9C")]
	[FieldOffset(Offset = "0x304")]
	protected ColossalHandState _rightHandState;

	[Token(Token = "0x4001F9D")]
	[FieldOffset(Offset = "0x308")]
	protected ColossalStunState _stunState;

	[Token(Token = "0x4001F9E")]
	[FieldOffset(Offset = "0x30C")]
	public float LeftHandSeverTimeLeft;

	[Token(Token = "0x4001F9F")]
	[FieldOffset(Offset = "0x310")]
	public float RightHandSeverTimeLeft;

	[Token(Token = "0x4001FA0")]
	[FieldOffset(Offset = "0x314")]
	public float HandSeverWindow;

	[Token(Token = "0x4001FA1")]
	[FieldOffset(Offset = "0x318")]
	public float StunDuration;

	[Token(Token = "0x4001FA2")]
	[FieldOffset(Offset = "0x31C")]
	public float StunTimeLeft;

	[Token(Token = "0x4001FA3")]
	[FieldOffset(Offset = "0x320")]
	protected float _stunAnimationTimeLeft;

	[Token(Token = "0x4001FA4")]
	[FieldOffset(Offset = "0x324")]
	public float RecoveryDuration;

	[Token(Token = "0x4001FA5")]
	[FieldOffset(Offset = "0x328")]
	public float RecoveryTimeLeft;

	[Token(Token = "0x4001FA6")]
	[FieldOffset(Offset = "0x32C")]
	public float SteamBlowAwayForce;

	[Token(Token = "0x4001FA7")]
	[FieldOffset(Offset = "0x330")]
	public float DefaultBlowAwayForce;

	[Token(Token = "0x4001FA8")]
	[FieldOffset(Offset = "0x334")]
	public float BlowAwayMaxDistance;

	[Token(Token = "0x4001FA9")]
	[FieldOffset(Offset = "0x338")]
	public float BlowAwaySteamTime;

	[Token(Token = "0x17000B64")]
	public override float MaxFootstepDistance
	{
		[Token(Token = "0x600410F")]
		[Address(RVA = "0x210FB90", Offset = "0x210E190", VA = "0x18210FB90", Slot = "60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B65")]
	public override float MaxSoundDistance
	{
		[Token(Token = "0x6004110")]
		[Address(RVA = "0x210FA90", Offset = "0x210E090", VA = "0x18210FA90", Slot = "61")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B66")]
	public override float LODQualityMediumDistance
	{
		[Token(Token = "0x6004111")]
		[Address(RVA = "0x210FA90", Offset = "0x210E090", VA = "0x18210FA90", Slot = "62")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B67")]
	public override float LODQualityLowDistance
	{
		[Token(Token = "0x6004112")]
		[Address(RVA = "0x219A170", Offset = "0x2198770", VA = "0x18219A170", Slot = "63")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B68")]
	public override float CullShadowsDistance
	{
		[Token(Token = "0x6004113")]
		[Address(RVA = "0x219A170", Offset = "0x2198770", VA = "0x18219A170", Slot = "64")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B69")]
	public override float CullEffectsDistance
	{
		[Token(Token = "0x6004114")]
		[Address(RVA = "0x219A170", Offset = "0x2198770", VA = "0x18219A170", Slot = "66")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B6A")]
	public ColossalSteamState SteamState
	{
		[Token(Token = "0x6004115")]
		[Address(RVA = "0x219A1B0", Offset = "0x21987B0", VA = "0x18219A1B0")]
		get
		{
			return default(ColossalSteamState);
		}
	}

	[Token(Token = "0x17000B6B")]
	public ColossalHandState LeftHandState
	{
		[Token(Token = "0x6004116")]
		[Address(RVA = "0x219A180", Offset = "0x2198780", VA = "0x18219A180")]
		get
		{
			return default(ColossalHandState);
		}
	}

	[Token(Token = "0x17000B6C")]
	public ColossalHandState RightHandState
	{
		[Token(Token = "0x6004117")]
		[Address(RVA = "0x219A190", Offset = "0x2198790", VA = "0x18219A190")]
		get
		{
			return default(ColossalHandState);
		}
	}

	[Token(Token = "0x17000B6D")]
	public ColossalStunState StunState
	{
		[Token(Token = "0x6004118")]
		[Address(RVA = "0x219A1C0", Offset = "0x21987C0", VA = "0x18219A1C0")]
		get
		{
			return default(ColossalStunState);
		}
	}

	[Token(Token = "0x17000B6E")]
	protected override float SizeMultiplier
	{
		[Token(Token = "0x6004119")]
		[Address(RVA = "0x219A1A0", Offset = "0x21987A0", VA = "0x18219A1A0", Slot = "134")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600411A")]
	[Address(RVA = "0x2196EF0", Offset = "0x21954F0", VA = "0x182196EF0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x600411B")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "201")]
	public override bool CheckNapeAngle(Vector3 hitPosition, float maxAngle)
	{
		return default(bool);
	}

	[Token(Token = "0x600411C")]
	[Address(RVA = "0x21985E0", Offset = "0x2196BE0", VA = "0x1821985E0")]
	public void SteamAttack()
	{
	}

	[Token(Token = "0x600411D")]
	[Address(RVA = "0x2197E00", Offset = "0x2196400", VA = "0x182197E00")]
	public void SetLeftHandHealth(int health)
	{
	}

	[Token(Token = "0x600411E")]
	[Address(RVA = "0x2198120", Offset = "0x2196720", VA = "0x182198120")]
	public void SetRightHandHealth(int health)
	{
	}

	[Token(Token = "0x600411F")]
	[Address(RVA = "0x2197CE0", Offset = "0x21962E0", VA = "0x182197CE0")]
	public void SetCurrentLeftHandHealth(int health)
	{
	}

	[Token(Token = "0x6004120")]
	[Address(RVA = "0x2197D10", Offset = "0x2196310", VA = "0x182197D10")]
	public void SetCurrentRightHandHealth(int health)
	{
	}

	[Token(Token = "0x6004121")]
	[Address(RVA = "0x2198050", Offset = "0x2196650", VA = "0x182198050")]
	public void SetMaxLeftHandHealth(int maxHealth)
	{
	}

	[Token(Token = "0x6004122")]
	[Address(RVA = "0x2198090", Offset = "0x2196690", VA = "0x182198090")]
	public void SetMaxRightHandHealth(int maxHealth)
	{
	}

	[Token(Token = "0x6004123")]
	[Address(RVA = "0x2196710", Offset = "0x2194D10", VA = "0x182196710", Slot = "206")]
	protected virtual void OnLeftHandHealthChange()
	{
	}

	[Token(Token = "0x6004124")]
	[Address(RVA = "0x2197500", Offset = "0x2195B00", VA = "0x182197500", Slot = "207")]
	protected virtual void OnRightHandHealthChange()
	{
	}

	[Token(Token = "0x6004125")]
	[Address(RVA = "0x2195440", Offset = "0x2193A40", VA = "0x182195440")]
	protected void CheckStunCondition()
	{
	}

	[Token(Token = "0x6004126")]
	[Address(RVA = "0x21958A0", Offset = "0x2193EA0", VA = "0x1821958A0")]
	public void EnterStunState(float duration = 0f, bool refresh = false)
	{
	}

	[Token(Token = "0x6004127")]
	[Address(RVA = "0x2197DB0", Offset = "0x21963B0", VA = "0x182197DB0")]
	[PunRPC]
	public void SetLeftHandHealthRPC(int currentHealth, int maxHealth, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004128")]
	[Address(RVA = "0x21980D0", Offset = "0x21966D0", VA = "0x1821980D0")]
	[PunRPC]
	public void SetRightHandHealthRPC(int currentHealth, int maxHealth, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004129")]
	[Address(RVA = "0x2197E30", Offset = "0x2196430", VA = "0x182197E30")]
	[PunRPC]
	public void SetLeftHandStateRPC(byte state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600412A")]
	[Address(RVA = "0x2198150", Offset = "0x2196750", VA = "0x182198150")]
	[PunRPC]
	public void SetRightHandStateRPC(byte state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600412B")]
	[Address(RVA = "0x2198370", Offset = "0x2196970", VA = "0x182198370")]
	[PunRPC]
	public void SetSteamStateRPC(byte state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600412C")]
	[Address(RVA = "0x2198440", Offset = "0x2196A40", VA = "0x182198440")]
	[PunRPC]
	public void SetStunStateRPC(byte state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600412D")]
	[Address(RVA = "0x2197D40", Offset = "0x2196340", VA = "0x182197D40")]
	[PunRPC]
	public void SetHandSeverTimesRPC(float leftTime, float rightTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600412E")]
	[Address(RVA = "0x21983D0", Offset = "0x21969D0", VA = "0x1821983D0")]
	[PunRPC]
	public void SetStunRecoveryTimesRPC(float stunTime, float recoveryTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600412F")]
	[Address(RVA = "0x2195FB0", Offset = "0x21945B0", VA = "0x182195FB0", Slot = "203")]
	public override void Init(bool ai, string team, JSONNode data, float liveTime)
	{
	}

	[Token(Token = "0x6004130")]
	[Address(RVA = "0x2195630", Offset = "0x2193C30", VA = "0x182195630", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6004131")]
	[Address(RVA = "0x2195470", Offset = "0x2193A70", VA = "0x182195470", Slot = "176")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x6004132")]
	[Address(RVA = "0x21956C0", Offset = "0x2193CC0", VA = "0x1821956C0", Slot = "205")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x6004133")]
	[Address(RVA = "0x2195F60", Offset = "0x2194560", VA = "0x182195F60", Slot = "204")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x6004134")]
	[Address(RVA = "0x219A060", Offset = "0x2198660", VA = "0x18219A060", Slot = "84")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__78))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x6004135")]
	[Address(RVA = "0x21947B0", Offset = "0x2192DB0", VA = "0x1821947B0")]
	public void ApplySteamState(ColossalSteamState newState)
	{
	}

	[Token(Token = "0x6004136")]
	[Address(RVA = "0x21943B0", Offset = "0x21929B0", VA = "0x1821943B0")]
	public void ApplyLeftHandState(ColossalHandState newState)
	{
	}

	[Token(Token = "0x6004137")]
	[Address(RVA = "0x21945B0", Offset = "0x2192BB0", VA = "0x1821945B0")]
	public void ApplyRightHandState(ColossalHandState newState)
	{
	}

	[Token(Token = "0x6004138")]
	[Address(RVA = "0x2194D20", Offset = "0x2193320", VA = "0x182194D20")]
	public void ApplyStunState(ColossalStunState newState)
	{
	}

	[Token(Token = "0x6004139")]
	[Address(RVA = "0x2196390", Offset = "0x2194990", VA = "0x182196390")]
	public new void LateUpdate()
	{
	}

	[Token(Token = "0x600413A")]
	[Address(RVA = "0x2199FB0", Offset = "0x21985B0", VA = "0x182199FB0")]
	public new void Update()
	{
	}

	[Token(Token = "0x600413B")]
	[Address(RVA = "0x2198770", Offset = "0x2196D70", VA = "0x182198770")]
	protected void ToggleParticleSystem(ParticleSystem system, bool enabled)
	{
	}

	[Token(Token = "0x600413C")]
	[Address(RVA = "0x2198650", Offset = "0x2196C50", VA = "0x182198650")]
	public void StopSteam()
	{
	}

	[Token(Token = "0x600413D")]
	[Address(RVA = "0x21984A0", Offset = "0x2196AA0", VA = "0x1821984A0")]
	protected void StartSteam()
	{
	}

	[Token(Token = "0x600413E")]
	[Address(RVA = "0x2199490", Offset = "0x2197A90", VA = "0x182199490")]
	protected void UpdateSteam()
	{
	}

	[Token(Token = "0x600413F")]
	[Address(RVA = "0x2199180", Offset = "0x2197780", VA = "0x182199180")]
	protected void UpdateHandSeverWindows()
	{
	}

	[Token(Token = "0x6004140")]
	[Address(RVA = "0x2199790", Offset = "0x2197D90", VA = "0x182199790")]
	protected void UpdateStunRecovery()
	{
	}

	[Token(Token = "0x6004141")]
	[Address(RVA = "0x2199700", Offset = "0x2197D00", VA = "0x182199700")]
	protected void UpdateStunAnimation()
	{
	}

	[Token(Token = "0x6004142")]
	[Address(RVA = "0x2195710", Offset = "0x2193D10", VA = "0x182195710", Slot = "189")]
	protected override void DeactivateAllHitboxes()
	{
	}

	[Token(Token = "0x6004143")]
	[Address(RVA = "0x21987A0", Offset = "0x2196DA0", VA = "0x1821987A0", Slot = "187")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x6004144")]
	[Address(RVA = "0x2194E50", Offset = "0x2193450", VA = "0x182194E50")]
	protected void BlowAwayHumans(Transform source, float angle, float force)
	{
	}

	[Token(Token = "0x6004145")]
	[Address(RVA = "0x21951C0", Offset = "0x21937C0", VA = "0x1821951C0")]
	protected void BlowAwayHumans(Vector3 source, float force)
	{
	}

	[Token(Token = "0x6004146")]
	[Address(RVA = "0x2195CF0", Offset = "0x21942F0", VA = "0x182195CF0", Slot = "90")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6004147")]
	[Address(RVA = "0x219A0D0", Offset = "0x21986D0", VA = "0x18219A0D0")]
	public WallColossalShifter()
	{
	}
}
