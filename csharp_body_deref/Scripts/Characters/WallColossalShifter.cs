// ==================== AoTTG2 cross-reference ====================
// Type: Characters.WallColossalShifter
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/WallColossalShifter.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/WallColossal/WallColossalShifter.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using CustomSkins;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using Settings;
using SimpleJSONFixed;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x2000705")]
internal class WallColossalShifter : BaseShifter
{
	[Token(Token = "0x400213F")]
	[FieldOffset(Offset = "0x2D8")]
	public WallColossalComponentCache ColossalCache;

	[Token(Token = "0x4002140")]
	[FieldOffset(Offset = "0x2E0")]
	protected WallColossalAnimations ColossalAnimations;

	[Token(Token = "0x4002141")]
	[FieldOffset(Offset = "0x2E8")]
	protected float _steamTimeLeft;

	[Token(Token = "0x4002142")]
	[FieldOffset(Offset = "0x2EC")]
	protected float _steamBlowAwayTimeLeft;

	[Token(Token = "0x4002143")]
	[FieldOffset(Offset = "0x2F0")]
	protected float _steamDamageTimeLeft;

	[Token(Token = "0x4002144")]
	[FieldOffset(Offset = "0x2F4")]
	protected ColossalSteamState _steamState;

	[Token(Token = "0x4002145")]
	[FieldOffset(Offset = "0x2F8")]
	public float WarningSteamTime;

	[Token(Token = "0x4002146")]
	[FieldOffset(Offset = "0x2FC")]
	public float SteamDamageInterval;

	[Token(Token = "0x4002147")]
	[FieldOffset(Offset = "0x300")]
	public int SteamDamagePerSecond;

	[Token(Token = "0x4002148")]
	private const float DeathDelay = 0.1f;

	[Token(Token = "0x4002149")]
	[FieldOffset(Offset = "0x304")]
	public int MaxLeftHandHealth;

	[Token(Token = "0x400214A")]
	[FieldOffset(Offset = "0x308")]
	public int MaxRightHandHealth;

	[Token(Token = "0x400214B")]
	[FieldOffset(Offset = "0x30C")]
	public int CurrentLeftHandHealth;

	[Token(Token = "0x400214C")]
	[FieldOffset(Offset = "0x310")]
	public int CurrentRightHandHealth;

	[Token(Token = "0x400214D")]
	[FieldOffset(Offset = "0x314")]
	public bool CanDamageLeftHand;

	[Token(Token = "0x400214E")]
	[FieldOffset(Offset = "0x315")]
	public bool CanDamageRightHand;

	[Token(Token = "0x400214F")]
	[FieldOffset(Offset = "0x318")]
	protected ColossalHandState _leftHandState;

	[Token(Token = "0x4002150")]
	[FieldOffset(Offset = "0x31C")]
	protected ColossalHandState _rightHandState;

	[Token(Token = "0x4002151")]
	[FieldOffset(Offset = "0x320")]
	protected ColossalStunState _stunState;

	[Token(Token = "0x4002152")]
	[FieldOffset(Offset = "0x324")]
	public float LeftHandSeverTimeLeft;

	[Token(Token = "0x4002153")]
	[FieldOffset(Offset = "0x328")]
	public float RightHandSeverTimeLeft;

	[Token(Token = "0x4002154")]
	[FieldOffset(Offset = "0x32C")]
	public float HandSeverWindow;

	[Token(Token = "0x4002155")]
	[FieldOffset(Offset = "0x330")]
	public float StunDuration;

	[Token(Token = "0x4002156")]
	[FieldOffset(Offset = "0x334")]
	public float StunTimeLeft;

	[Token(Token = "0x4002157")]
	[FieldOffset(Offset = "0x338")]
	protected float _stunAnimationTimeLeft;

	[Token(Token = "0x4002158")]
	[FieldOffset(Offset = "0x33C")]
	public float RecoveryDuration;

	[Token(Token = "0x4002159")]
	[FieldOffset(Offset = "0x340")]
	public float RecoveryTimeLeft;

	[Token(Token = "0x400215A")]
	[FieldOffset(Offset = "0x344")]
	public float SteamBlowAwayForce;

	[Token(Token = "0x400215B")]
	[FieldOffset(Offset = "0x348")]
	public float DefaultBlowAwayForce;

	[Token(Token = "0x400215C")]
	[FieldOffset(Offset = "0x34C")]
	public float BlowAwayMaxDistance;

	[Token(Token = "0x400215D")]
	[FieldOffset(Offset = "0x350")]
	public float BlowAwaySteamTime;

	[Token(Token = "0x17000BAE")]
	public override float MaxFootstepDistance
	{
		[Token(Token = "0x60043AF")]
		[Address(RVA = "0x5B1EE30", Offset = "0x5B1DE30", VA = "0x5B1EE30", Slot = "60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BAF")]
	public override float MaxSoundDistance
	{
		[Token(Token = "0x60043B0")]
		[Address(RVA = "0x5B1EE40", Offset = "0x5B1DE40", VA = "0x5B1EE40", Slot = "61")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BB0")]
	public override float LODQualityMediumDistance
	{
		[Token(Token = "0x60043B1")]
		[Address(RVA = "0x5B1EE50", Offset = "0x5B1DE50", VA = "0x5B1EE50", Slot = "62")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BB1")]
	public override float LODQualityLowDistance
	{
		[Token(Token = "0x60043B2")]
		[Address(RVA = "0x5B1EE60", Offset = "0x5B1DE60", VA = "0x5B1EE60", Slot = "63")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BB2")]
	public override float CullShadowsDistance
	{
		[Token(Token = "0x60043B3")]
		[Address(RVA = "0x5B1EE70", Offset = "0x5B1DE70", VA = "0x5B1EE70", Slot = "64")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BB3")]
	public override float CullEffectsDistance
	{
		[Token(Token = "0x60043B4")]
		[Address(RVA = "0x5B1EE80", Offset = "0x5B1DE80", VA = "0x5B1EE80", Slot = "66")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BB4")]
	public ColossalSteamState SteamState
	{
		[Token(Token = "0x60043B5")]
		[Address(RVA = "0x5B1EE90", Offset = "0x5B1DE90", VA = "0x5B1EE90")]
		get
		{
			return default(ColossalSteamState);
		}
	}

	[Token(Token = "0x17000BB5")]
	public ColossalHandState LeftHandState
	{
		[Token(Token = "0x60043B6")]
		[Address(RVA = "0x5B1EEA0", Offset = "0x5B1DEA0", VA = "0x5B1EEA0")]
		get
		{
			return default(ColossalHandState);
		}
	}

	[Token(Token = "0x17000BB6")]
	public ColossalHandState RightHandState
	{
		[Token(Token = "0x60043B7")]
		[Address(RVA = "0x5B1EEB0", Offset = "0x5B1DEB0", VA = "0x5B1EEB0")]
		get
		{
			return default(ColossalHandState);
		}
	}

	[Token(Token = "0x17000BB7")]
	public ColossalStunState StunState
	{
		[Token(Token = "0x60043B8")]
		[Address(RVA = "0x5B1EEC0", Offset = "0x5B1DEC0", VA = "0x5B1EEC0")]
		get
		{
			return default(ColossalStunState);
		}
	}

	[Token(Token = "0x17000BB8")]
	protected override float SizeMultiplier
	{
		[Token(Token = "0x60043B9")]
		[Address(RVA = "0x5B1EED0", Offset = "0x5B1DED0", VA = "0x5B1EED0", Slot = "134")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60043BA")]
	[Address(RVA = "0x5B1EEE0", Offset = "0x5B1DEE0", VA = "0x5B1EEE0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x60043BB")]
	[Address(RVA = "0x5B1F5E0", Offset = "0x5B1E5E0", VA = "0x5B1F5E0", Slot = "202")]
	public override bool CheckNapeAngle(Vector3 hitPosition, float maxAngle)
	{
		return default(bool);
	}

	[Token(Token = "0x60043BC")]
	[Address(RVA = "0x5B1F5F0", Offset = "0x5B1E5F0", VA = "0x5B1F5F0")]
	public void SteamAttack()
	{
	}

	[Token(Token = "0x60043BD")]
	[Address(RVA = "0x5B1F660", Offset = "0x5B1E660", VA = "0x5B1F660")]
	public void SetLeftHandHealth(int health)
	{
	}

	[Token(Token = "0x60043BE")]
	[Address(RVA = "0x5B1F6C0", Offset = "0x5B1E6C0", VA = "0x5B1F6C0")]
	public void SetRightHandHealth(int health)
	{
	}

	[Token(Token = "0x60043BF")]
	[Address(RVA = "0x5B1F690", Offset = "0x5B1E690", VA = "0x5B1F690")]
	public void SetCurrentLeftHandHealth(int health)
	{
	}

	[Token(Token = "0x60043C0")]
	[Address(RVA = "0x5B1F6F0", Offset = "0x5B1E6F0", VA = "0x5B1F6F0")]
	public void SetCurrentRightHandHealth(int health)
	{
	}

	[Token(Token = "0x60043C1")]
	[Address(RVA = "0x5B1F720", Offset = "0x5B1E720", VA = "0x5B1F720")]
	public void SetMaxLeftHandHealth(int maxHealth)
	{
	}

	[Token(Token = "0x60043C2")]
	[Address(RVA = "0x5B1F760", Offset = "0x5B1E760", VA = "0x5B1F760")]
	public void SetMaxRightHandHealth(int maxHealth)
	{
	}

	[Token(Token = "0x60043C3")]
	[Address(RVA = "0x5B1F7A0", Offset = "0x5B1E7A0", VA = "0x5B1F7A0", Slot = "207")]
	protected virtual void OnLeftHandHealthChange()
	{
	}

	[Token(Token = "0x60043C4")]
	[Address(RVA = "0x5B1FCD0", Offset = "0x5B1ECD0", VA = "0x5B1FCD0", Slot = "208")]
	protected virtual void OnRightHandHealthChange()
	{
	}

	[Token(Token = "0x60043C5")]
	[Address(RVA = "0x5B1FCB0", Offset = "0x5B1ECB0", VA = "0x5B1FCB0")]
	protected void CheckStunCondition()
	{
	}

	[Token(Token = "0x60043C6")]
	[Address(RVA = "0x5B201E0", Offset = "0x5B1F1E0", VA = "0x5B201E0")]
	public void EnterStunState(float duration = 0f, bool refresh = false)
	{
	}

	[Token(Token = "0x60043C7")]
	[Address(RVA = "0x5B20790", Offset = "0x5B1F790", VA = "0x5B20790")]
	[PunRPC]
	public void SetLeftHandHealthRPC(int currentHealth, int maxHealth, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60043C8")]
	[Address(RVA = "0x5B207E0", Offset = "0x5B1F7E0", VA = "0x5B207E0")]
	[PunRPC]
	public void SetRightHandHealthRPC(int currentHealth, int maxHealth, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60043C9")]
	[Address(RVA = "0x5B20830", Offset = "0x5B1F830", VA = "0x5B20830")]
	[PunRPC]
	public void SetLeftHandStateRPC(byte state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60043CA")]
	[Address(RVA = "0x5B20A40", Offset = "0x5B1FA40", VA = "0x5B20A40")]
	[PunRPC]
	public void SetRightHandStateRPC(byte state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60043CB")]
	[Address(RVA = "0x5B20C50", Offset = "0x5B1FC50", VA = "0x5B20C50")]
	[PunRPC]
	public void SetSteamStateRPC(byte state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60043CC")]
	[Address(RVA = "0x5B20C90", Offset = "0x5B1FC90", VA = "0x5B20C90")]
	[PunRPC]
	public void SetStunStateRPC(byte state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60043CD")]
	[Address(RVA = "0x5B20CD0", Offset = "0x5B1FCD0", VA = "0x5B20CD0")]
	[PunRPC]
	public void SetHandSeverTimesRPC(float leftTime, float rightTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60043CE")]
	[Address(RVA = "0x5B20D30", Offset = "0x5B1FD30", VA = "0x5B20D30")]
	[PunRPC]
	public void SetStunRecoveryTimesRPC(float stunTime, float recoveryTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60043CF")]
	[Address(RVA = "0x5B20D90", Offset = "0x5B1FD90", VA = "0x5B20D90", Slot = "204")]
	public override void Init(bool ai, string team, JSONNode data, float liveTime)
	{
	}

	[Token(Token = "0x60043D0")]
	[Address(RVA = "0x5B21170", Offset = "0x5B20170", VA = "0x5B21170", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x60043D1")]
	[Address(RVA = "0x5B212B0", Offset = "0x5B202B0", VA = "0x5B212B0", Slot = "176")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x60043D2")]
	[Address(RVA = "0x5B21530", Offset = "0x5B20530", VA = "0x5B21530", Slot = "206")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x60043D3")]
	[Address(RVA = "0x5B21580", Offset = "0x5B20580", VA = "0x5B21580", Slot = "205")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x60043D4")]
	[Address(RVA = "0x5B215C0", Offset = "0x5B205C0", VA = "0x5B215C0", Slot = "84")]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x60043D5")]
	[Address(RVA = "0x5B1E6C0", Offset = "0x5B1D6C0", VA = "0x5B1E6C0")]
	public void ApplySteamState(ColossalSteamState newState)
	{
	}

	[Token(Token = "0x60043D6")]
	[Address(RVA = "0x5B20870", Offset = "0x5B1F870", VA = "0x5B20870")]
	public void ApplyLeftHandState(ColossalHandState newState)
	{
	}

	[Token(Token = "0x60043D7")]
	[Address(RVA = "0x5B20A80", Offset = "0x5B1FA80", VA = "0x5B20A80")]
	public void ApplyRightHandState(ColossalHandState newState)
	{
	}

	[Token(Token = "0x60043D8")]
	[Address(RVA = "0x5B1ED10", Offset = "0x5B1DD10", VA = "0x5B1ED10")]
	public void ApplyStunState(ColossalStunState newState)
	{
	}

	[Token(Token = "0x60043D9")]
	[Address(RVA = "0x5B218A0", Offset = "0x5B208A0", VA = "0x5B218A0")]
	public new void LateUpdate()
	{
	}

	[Token(Token = "0x60043DA")]
	[Address(RVA = "0x5B21C30", Offset = "0x5B20C30", VA = "0x5B21C30")]
	public new void Update()
	{
	}

	[Token(Token = "0x60043DB")]
	[Address(RVA = "0x5B21600", Offset = "0x5B20600", VA = "0x5B21600")]
	protected void ToggleParticleSystem(ParticleSystem system, bool enabled)
	{
	}

	[Token(Token = "0x60043DC")]
	[Address(RVA = "0x5B20540", Offset = "0x5B1F540", VA = "0x5B20540")]
	public void StopSteam()
	{
	}

	[Token(Token = "0x60043DD")]
	[Address(RVA = "0x5B22A40", Offset = "0x5B21A40", VA = "0x5B22A40")]
	protected void StartSteam()
	{
	}

	[Token(Token = "0x60043DE")]
	[Address(RVA = "0x5B21CF0", Offset = "0x5B20CF0", VA = "0x5B21CF0")]
	protected void UpdateSteam()
	{
	}

	[Token(Token = "0x60043DF")]
	[Address(RVA = "0x5B21F60", Offset = "0x5B20F60", VA = "0x5B21F60")]
	protected void UpdateHandSeverWindows()
	{
	}

	[Token(Token = "0x60043E0")]
	[Address(RVA = "0x5B22240", Offset = "0x5B21240", VA = "0x5B22240")]
	protected void UpdateStunRecovery()
	{
	}

	[Token(Token = "0x60043E1")]
	[Address(RVA = "0x5B229C0", Offset = "0x5B219C0", VA = "0x5B229C0")]
	protected void UpdateStunAnimation()
	{
	}

	[Token(Token = "0x60043E2")]
	[Address(RVA = "0x5B23020", Offset = "0x5B22020", VA = "0x5B23020", Slot = "189")]
	protected override void DeactivateAllHitboxes()
	{
	}

	[Token(Token = "0x60043E3")]
	[Address(RVA = "0x5B231F0", Offset = "0x5B221F0", VA = "0x5B231F0", Slot = "187")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x60043E4")]
	[Address(RVA = "0x5B22B80", Offset = "0x5B21B80", VA = "0x5B22B80")]
	protected void BlowAwayHumans(Transform source, float angle, float force)
	{
	}

	[Token(Token = "0x60043E5")]
	[Address(RVA = "0x5B23A00", Offset = "0x5B22A00", VA = "0x5B23A00")]
	protected void BlowAwayHumans(Vector3 source, float force)
	{
	}

	[Token(Token = "0x60043E6")]
	[Address(RVA = "0x5B23CA0", Offset = "0x5B22CA0", VA = "0x5B23CA0", Slot = "90")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x60043E7")]
	[Address(RVA = "0x5B23EE0", Offset = "0x5B22EE0", VA = "0x5B23EE0")]
	public WallColossalShifter()
	{
	}
}
