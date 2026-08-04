// ==================== AoTTG2 cross-reference ====================
// Type: Characters.WallColossalShifter
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000547")]
internal class WallColossalShifter : BaseShifter
{
	[Token(Token = "0x2000548")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__66 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40018E4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40018E5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40018E6")]
		[FieldOffset(Offset = "0x20")]
		public WallColossalShifter _003C_003E4__this;

		[Token(Token = "0x17000A2F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60036E6")]
			[Address(RVA = "0x420A890", Offset = "0x420A890", VA = "0x420A890", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A30")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60036E8")]
			[Address(RVA = "0x420A8E0", Offset = "0x420A8E0", VA = "0x420A8E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60036E3")]
		[Address(RVA = "0x4207BF0", Offset = "0x4207BF0", VA = "0x4207BF0")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__66(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60036E4")]
		[Address(RVA = "0x420A5E0", Offset = "0x420A5E0", VA = "0x420A5E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60036E5")]
		[Address(RVA = "0x420A5F0", Offset = "0x420A5F0", VA = "0x420A5F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60036E7")]
		[Address(RVA = "0x420A8A0", Offset = "0x420A8A0", VA = "0x420A8A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40018C6")]
	[FieldOffset(Offset = "0x290")]
	public WallColossalComponentCache ColossalCache;

	[Token(Token = "0x40018C7")]
	[FieldOffset(Offset = "0x298")]
	protected WallColossalAnimations ColossalAnimations;

	[Token(Token = "0x40018C8")]
	[FieldOffset(Offset = "0x2A0")]
	protected float _steamTimeLeft;

	[Token(Token = "0x40018C9")]
	[FieldOffset(Offset = "0x2A4")]
	protected float _steamBlowAwayTimeLeft;

	[Token(Token = "0x40018CA")]
	[FieldOffset(Offset = "0x2A8")]
	protected float _steamDamageTimeLeft;

	[Token(Token = "0x40018CB")]
	[FieldOffset(Offset = "0x2AC")]
	protected ColossalSteamState _steamState;

	[Token(Token = "0x40018CC")]
	[FieldOffset(Offset = "0x2B0")]
	public float WarningSteamTime;

	[Token(Token = "0x40018CD")]
	[FieldOffset(Offset = "0x2B4")]
	public float SteamDamageInterval;

	[Token(Token = "0x40018CE")]
	[FieldOffset(Offset = "0x2B8")]
	public int SteamDamagePerSecond;

	[Token(Token = "0x40018CF")]
	[FieldOffset(Offset = "0x2BC")]
	public int MaxLeftHandHealth;

	[Token(Token = "0x40018D0")]
	[FieldOffset(Offset = "0x2C0")]
	public int MaxRightHandHealth;

	[Token(Token = "0x40018D1")]
	[FieldOffset(Offset = "0x2C4")]
	public int CurrentLeftHandHealth;

	[Token(Token = "0x40018D2")]
	[FieldOffset(Offset = "0x2C8")]
	public int CurrentRightHandHealth;

	[Token(Token = "0x40018D3")]
	[FieldOffset(Offset = "0x2CC")]
	public bool CanDamageLeftHand;

	[Token(Token = "0x40018D4")]
	[FieldOffset(Offset = "0x2CD")]
	public bool CanDamageRightHand;

	[Token(Token = "0x40018D5")]
	[FieldOffset(Offset = "0x2D0")]
	protected ColossalHandState _leftHandState;

	[Token(Token = "0x40018D6")]
	[FieldOffset(Offset = "0x2D4")]
	protected ColossalHandState _rightHandState;

	[Token(Token = "0x40018D7")]
	[FieldOffset(Offset = "0x2D8")]
	protected ColossalStunState _stunState;

	[Token(Token = "0x40018D8")]
	[FieldOffset(Offset = "0x2DC")]
	public float LeftHandSeverTimeLeft;

	[Token(Token = "0x40018D9")]
	[FieldOffset(Offset = "0x2E0")]
	public float RightHandSeverTimeLeft;

	[Token(Token = "0x40018DA")]
	[FieldOffset(Offset = "0x2E4")]
	public float HandSeverWindow;

	[Token(Token = "0x40018DB")]
	[FieldOffset(Offset = "0x2E8")]
	public float StunDuration;

	[Token(Token = "0x40018DC")]
	[FieldOffset(Offset = "0x2EC")]
	public float StunTimeLeft;

	[Token(Token = "0x40018DD")]
	[FieldOffset(Offset = "0x2F0")]
	protected float _stunAnimationTimeLeft;

	[Token(Token = "0x40018DE")]
	[FieldOffset(Offset = "0x2F4")]
	public float RecoveryDuration;

	[Token(Token = "0x40018DF")]
	[FieldOffset(Offset = "0x2F8")]
	public float RecoveryTimeLeft;

	[Token(Token = "0x40018E0")]
	[FieldOffset(Offset = "0x2FC")]
	public float SteamBlowAwayForce;

	[Token(Token = "0x40018E1")]
	[FieldOffset(Offset = "0x300")]
	public float DefaultBlowAwayForce;

	[Token(Token = "0x40018E2")]
	[FieldOffset(Offset = "0x304")]
	public float BlowAwayMaxDistance;

	[Token(Token = "0x40018E3")]
	[FieldOffset(Offset = "0x308")]
	public float BlowAwaySteamTime;

	[Token(Token = "0x17000A2A")]
	public ColossalSteamState SteamState
	{
		[Token(Token = "0x60036B0")]
		[Address(RVA = "0x4205A70", Offset = "0x4205A70", VA = "0x4205A70")]
		get
		{
			return default(ColossalSteamState);
		}
	}

	[Token(Token = "0x17000A2B")]
	public ColossalHandState LeftHandState
	{
		[Token(Token = "0x60036B1")]
		[Address(RVA = "0x4205A80", Offset = "0x4205A80", VA = "0x4205A80")]
		get
		{
			return default(ColossalHandState);
		}
	}

	[Token(Token = "0x17000A2C")]
	public ColossalHandState RightHandState
	{
		[Token(Token = "0x60036B2")]
		[Address(RVA = "0x4205A90", Offset = "0x4205A90", VA = "0x4205A90")]
		get
		{
			return default(ColossalHandState);
		}
	}

	[Token(Token = "0x17000A2D")]
	public ColossalStunState StunState
	{
		[Token(Token = "0x60036B3")]
		[Address(RVA = "0x4205AA0", Offset = "0x4205AA0", VA = "0x4205AA0")]
		get
		{
			return default(ColossalStunState);
		}
	}

	[Token(Token = "0x17000A2E")]
	protected override float SizeMultiplier
	{
		[Token(Token = "0x60036B4")]
		[Address(RVA = "0x4205AB0", Offset = "0x4205AB0", VA = "0x4205AB0", Slot = "117")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60036B5")]
	[Address(RVA = "0x4205AC0", Offset = "0x4205AC0", VA = "0x4205AC0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x60036B6")]
	[Address(RVA = "0x4206170", Offset = "0x4206170", VA = "0x4206170", Slot = "174")]
	public override bool CheckNapeAngle(Vector3 hitPosition, float maxAngle)
	{
		return default(bool);
	}

	[Token(Token = "0x60036B7")]
	[Address(RVA = "0x4206180", Offset = "0x4206180", VA = "0x4206180")]
	public void SteamAttack()
	{
	}

	[Token(Token = "0x60036B8")]
	[Address(RVA = "0x42061F0", Offset = "0x42061F0", VA = "0x42061F0")]
	public void SetLeftHandHealth(int health)
	{
	}

	[Token(Token = "0x60036B9")]
	[Address(RVA = "0x4206250", Offset = "0x4206250", VA = "0x4206250")]
	public void SetRightHandHealth(int health)
	{
	}

	[Token(Token = "0x60036BA")]
	[Address(RVA = "0x4206220", Offset = "0x4206220", VA = "0x4206220")]
	public void SetCurrentLeftHandHealth(int health)
	{
	}

	[Token(Token = "0x60036BB")]
	[Address(RVA = "0x4206280", Offset = "0x4206280", VA = "0x4206280")]
	public void SetCurrentRightHandHealth(int health)
	{
	}

	[Token(Token = "0x60036BC")]
	[Address(RVA = "0x42062B0", Offset = "0x42062B0", VA = "0x42062B0")]
	public void SetMaxLeftHandHealth(int maxHealth)
	{
	}

	[Token(Token = "0x60036BD")]
	[Address(RVA = "0x42062F0", Offset = "0x42062F0", VA = "0x42062F0")]
	public void SetMaxRightHandHealth(int maxHealth)
	{
	}

	[Token(Token = "0x60036BE")]
	[Address(RVA = "0x4206330", Offset = "0x4206330", VA = "0x4206330", Slot = "179")]
	protected virtual void OnLeftHandHealthChange()
	{
	}

	[Token(Token = "0x60036BF")]
	[Address(RVA = "0x4206830", Offset = "0x4206830", VA = "0x4206830", Slot = "180")]
	protected virtual void OnRightHandHealthChange()
	{
	}

	[Token(Token = "0x60036C0")]
	[Address(RVA = "0x4206810", Offset = "0x4206810", VA = "0x4206810")]
	protected void CheckStunCondition()
	{
	}

	[Token(Token = "0x60036C1")]
	[Address(RVA = "0x4206D10", Offset = "0x4206D10", VA = "0x4206D10")]
	protected void EnterStunState()
	{
	}

	[Token(Token = "0x60036C2")]
	[Address(RVA = "0x42070A0", Offset = "0x42070A0", VA = "0x42070A0")]
	[PunRPC]
	public void SetLeftHandHealthRPC(int currentHealth, int maxHealth, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60036C3")]
	[Address(RVA = "0x42070F0", Offset = "0x42070F0", VA = "0x42070F0")]
	[PunRPC]
	public void SetRightHandHealthRPC(int currentHealth, int maxHealth, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60036C4")]
	[Address(RVA = "0x4207140", Offset = "0x4207140", VA = "0x4207140")]
	[PunRPC]
	public void SetLeftHandStateRPC(byte state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60036C5")]
	[Address(RVA = "0x4207310", Offset = "0x4207310", VA = "0x4207310")]
	[PunRPC]
	public void SetRightHandStateRPC(byte state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60036C6")]
	[Address(RVA = "0x42074E0", Offset = "0x42074E0", VA = "0x42074E0")]
	[PunRPC]
	public void SetSteamStateRPC(byte state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60036C7")]
	[Address(RVA = "0x4207520", Offset = "0x4207520", VA = "0x4207520")]
	[PunRPC]
	public void SetStunStateRPC(byte state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60036C8")]
	[Address(RVA = "0x4207560", Offset = "0x4207560", VA = "0x4207560")]
	[PunRPC]
	public void SetHandSeverTimesRPC(float leftTime, float rightTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60036C9")]
	[Address(RVA = "0x42075C0", Offset = "0x42075C0", VA = "0x42075C0")]
	[PunRPC]
	public void SetStunRecoveryTimesRPC(float stunTime, float recoveryTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60036CA")]
	[Address(RVA = "0x4207620", Offset = "0x4207620", VA = "0x4207620", Slot = "176")]
	public override void Init(bool ai, string team, JSONNode data, float liveTime)
	{
	}

	[Token(Token = "0x60036CB")]
	[Address(RVA = "0x4207A00", Offset = "0x4207A00", VA = "0x4207A00", Slot = "68")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x60036CC")]
	[Address(RVA = "0x4207A80", Offset = "0x4207A80", VA = "0x4207A80", Slot = "151")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x60036CD")]
	[Address(RVA = "0x4207AF0", Offset = "0x4207AF0", VA = "0x4207AF0", Slot = "178")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x60036CE")]
	[Address(RVA = "0x4207B40", Offset = "0x4207B40", VA = "0x4207B40", Slot = "177")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x60036CF")]
	[Address(RVA = "0x4207B80", Offset = "0x4207B80", VA = "0x4207B80", Slot = "74")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__66))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x60036D0")]
	[Address(RVA = "0x4205360", Offset = "0x4205360", VA = "0x4205360")]
	public void ApplySteamState(ColossalSteamState newState)
	{
	}

	[Token(Token = "0x60036D1")]
	[Address(RVA = "0x4207180", Offset = "0x4207180", VA = "0x4207180")]
	public void ApplyLeftHandState(ColossalHandState newState)
	{
	}

	[Token(Token = "0x60036D2")]
	[Address(RVA = "0x4207350", Offset = "0x4207350", VA = "0x4207350")]
	public void ApplyRightHandState(ColossalHandState newState)
	{
	}

	[Token(Token = "0x60036D3")]
	[Address(RVA = "0x42059F0", Offset = "0x42059F0", VA = "0x42059F0")]
	public void ApplyStunState(ColossalStunState newState)
	{
	}

	[Token(Token = "0x60036D4")]
	[Address(RVA = "0x4207F00", Offset = "0x4207F00", VA = "0x4207F00")]
	public new void LateUpdate()
	{
	}

	[Token(Token = "0x60036D5")]
	[Address(RVA = "0x4208200", Offset = "0x4208200", VA = "0x4208200")]
	public new void Update()
	{
	}

	[Token(Token = "0x60036D6")]
	[Address(RVA = "0x4207C10", Offset = "0x4207C10", VA = "0x4207C10")]
	protected void ToggleParticleSystem(ParticleSystem system, bool enabled)
	{
	}

	[Token(Token = "0x60036D7")]
	[Address(RVA = "0x4206F90", Offset = "0x4206F90", VA = "0x4206F90")]
	public void StopSteam()
	{
	}

	[Token(Token = "0x60036D8")]
	[Address(RVA = "0x4209040", Offset = "0x4209040", VA = "0x4209040")]
	protected void StartSteam()
	{
	}

	[Token(Token = "0x60036D9")]
	[Address(RVA = "0x4208320", Offset = "0x4208320", VA = "0x4208320")]
	protected void UpdateSteam()
	{
	}

	[Token(Token = "0x60036DA")]
	[Address(RVA = "0x4208580", Offset = "0x4208580", VA = "0x4208580")]
	protected void UpdateHandSeverWindows()
	{
	}

	[Token(Token = "0x60036DB")]
	[Address(RVA = "0x4208860", Offset = "0x4208860", VA = "0x4208860")]
	protected void UpdateStunRecovery()
	{
	}

	[Token(Token = "0x60036DC")]
	[Address(RVA = "0x4208FC0", Offset = "0x4208FC0", VA = "0x4208FC0")]
	protected void UpdateStunAnimation()
	{
	}

	[Token(Token = "0x60036DD")]
	[Address(RVA = "0x4209650", Offset = "0x4209650", VA = "0x4209650", Slot = "163")]
	protected override void DeactivateAllHitboxes()
	{
	}

	[Token(Token = "0x60036DE")]
	[Address(RVA = "0x4209860", Offset = "0x4209860", VA = "0x4209860", Slot = "161")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x60036DF")]
	[Address(RVA = "0x4209170", Offset = "0x4209170", VA = "0x4209170")]
	protected void BlowAwayHumans(Transform source, float angle, float force)
	{
	}

	[Token(Token = "0x60036E0")]
	[Address(RVA = "0x420A010", Offset = "0x420A010", VA = "0x420A010")]
	protected void BlowAwayHumans(Vector3 source, float force)
	{
	}

	[Token(Token = "0x60036E1")]
	[Address(RVA = "0x420A330", Offset = "0x420A330", VA = "0x420A330", Slot = "80")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x60036E2")]
	[Address(RVA = "0x420A560", Offset = "0x420A560", VA = "0x420A560")]
	public WallColossalShifter()
	{
	}
}
