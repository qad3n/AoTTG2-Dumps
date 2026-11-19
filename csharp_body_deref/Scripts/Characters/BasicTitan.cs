// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BasicTitan
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/BasicTitan.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitan.cs
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

[Token(Token = "0x2000711")]
internal class BasicTitan : BaseTitan
{
	[Token(Token = "0x2000713")]
	[CompilerGenerated]
	private sealed class _003CPlayDecapitationBlood_003Ed__167 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002243")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002244")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002245")]
		[FieldOffset(Offset = "0x20")]
		public BasicTitan _003C_003E4__this;

		[Token(Token = "0x17000BF0")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004516")]
			[Address(RVA = "0x5B3E6B0", Offset = "0x5B3D6B0", VA = "0x5B3E6B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BF1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004518")]
			[Address(RVA = "0x5B3E700", Offset = "0x5B3D700", VA = "0x5B3E700", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004513")]
		[Address(RVA = "0x5B3E590", Offset = "0x5B3D590", VA = "0x5B3E590")]
		[DebuggerHidden]
		public _003CPlayDecapitationBlood_003Ed__167(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004514")]
		[Address(RVA = "0x5B3E5B0", Offset = "0x5B3D5B0", VA = "0x5B3E5B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004515")]
		[Address(RVA = "0x5B3E5C0", Offset = "0x5B3D5C0", VA = "0x5B3E5C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004517")]
		[Address(RVA = "0x5B3E6C0", Offset = "0x5B3D6C0", VA = "0x5B3E6C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000714")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__141 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002246")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002247")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002248")]
		[FieldOffset(Offset = "0x20")]
		public BasicTitan _003C_003E4__this;

		[Token(Token = "0x4002249")]
		[FieldOffset(Offset = "0x28")]
		private string _003CdieAnimation_003E5__2;

		[Token(Token = "0x17000BF2")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600451C")]
			[Address(RVA = "0x5B3EC80", Offset = "0x5B3DC80", VA = "0x5B3EC80", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BF3")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600451E")]
			[Address(RVA = "0x5B3ECD0", Offset = "0x5B3DCD0", VA = "0x5B3ECD0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004519")]
		[Address(RVA = "0x5B3E710", Offset = "0x5B3D710", VA = "0x5B3E710")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__141(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600451A")]
		[Address(RVA = "0x5B3E730", Offset = "0x5B3D730", VA = "0x5B3E730", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600451B")]
		[Address(RVA = "0x5B3E740", Offset = "0x5B3D740", VA = "0x5B3E740", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600451D")]
		[Address(RVA = "0x5B3EC90", Offset = "0x5B3DC90", VA = "0x5B3EC90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40021FE")]
	[FieldOffset(Offset = "0x2A0")]
	public BasicTitanComponentCache BasicCache;

	[Token(Token = "0x40021FF")]
	[FieldOffset(Offset = "0x2A8")]
	protected BasicTitanAnimations BasicAnimations;

	[Token(Token = "0x4002200")]
	[FieldOffset(Offset = "0x2B0")]
	public bool IsCrawler;

	[Token(Token = "0x4002201")]
	[FieldOffset(Offset = "0x2B1")]
	public bool isWarded;

	[Token(Token = "0x4002202")]
	[FieldOffset(Offset = "0x2B4")]
	public TitanDeathType DeathType;

	[Token(Token = "0x4002203")]
	[FieldOffset(Offset = "0x2B8")]
	public Vector3 DeathVelocity;

	[Token(Token = "0x4002204")]
	[FieldOffset(Offset = "0x2C8")]
	protected string _runAnimation;

	[Token(Token = "0x4002205")]
	[FieldOffset(Offset = "0x2D0")]
	public BasicTitanSetup Setup;

	[Token(Token = "0x4002206")]
	[FieldOffset(Offset = "0x2D8")]
	public Quaternion _oldHeadRotation;

	[Token(Token = "0x4002207")]
	[FieldOffset(Offset = "0x2E8")]
	private Quaternion? _aiHeadRotation;

	[Token(Token = "0x4002208")]
	[FieldOffset(Offset = "0x2FC")]
	private float _turnDegrees;

	[Token(Token = "0x4002209")]
	[FieldOffset(Offset = "0x300")]
	public Quaternion? LateUpdateHeadRotation;

	[Token(Token = "0x400220A")]
	[FieldOffset(Offset = "0x314")]
	public Quaternion? LateUpdateHeadRotationRecv;

	[Token(Token = "0x400220B")]
	[FieldOffset(Offset = "0x328")]
	public Vector2 LastGoodHeadAngle;

	[Token(Token = "0x400220C")]
	[FieldOffset(Offset = "0x330")]
	public float BellyFlopTime;

	[Token(Token = "0x400220D")]
	[FieldOffset(Offset = "0x334")]
	protected float _leftArmDisabledTimeLeft;

	[Token(Token = "0x400220E")]
	[FieldOffset(Offset = "0x338")]
	protected float _rightArmDisabledTimeLeft;

	[Token(Token = "0x400220F")]
	[FieldOffset(Offset = "0x33C")]
	protected float ArmDisableTime;

	[Token(Token = "0x4002210")]
	private const float LimbRegrowthTime = 6.5f;

	[Token(Token = "0x4002211")]
	private const float LimbBloodDuration = 4f;

	[Token(Token = "0x4002212")]
	private const float LimbSteamSoundFadeInDuration = 0.3f;

	[Token(Token = "0x4002213")]
	private const float LimbSteamSoundFadeOutDuration = 0.5f;

	[Token(Token = "0x4002214")]
	private const float HairScaleTolerance = 0.001f;

	[Token(Token = "0x4002215")]
	[FieldOffset(Offset = "0x340")]
	private float _limbSteamSoundFade;

	[Token(Token = "0x4002216")]
	[FieldOffset(Offset = "0x344")]
	public float RockThrow1Speed;

	[Token(Token = "0x4002217")]
	[FieldOffset(Offset = "0x348")]
	public float RockThrowMaxAimAngle;

	[Token(Token = "0x4002218")]
	[FieldOffset(Offset = "0x34C")]
	public float RockThrowCloseAimAngle;

	[Token(Token = "0x4002219")]
	[FieldOffset(Offset = "0x350")]
	public float RockThrowCloseAimDistance;

	[Token(Token = "0x400221A")]
	[FieldOffset(Offset = "0x354")]
	public float RockThrowFullAimDistance;

	[Token(Token = "0x400221B")]
	[FieldOffset(Offset = "0x358")]
	protected Vector3 _rockThrowTarget;

	[Token(Token = "0x400221C")]
	[FieldOffset(Offset = "0x368")]
	protected BaseCharacter _rockThrowTargetCharacter;

	[Token(Token = "0x400221D")]
	[FieldOffset(Offset = "0x370")]
	protected Vector3 _rockThrowForward;

	[Token(Token = "0x400221E")]
	[FieldOffset(Offset = "0x37C")]
	protected bool _rockThrowWillHitSelf;

	[Token(Token = "0x400221F")]
	[FieldOffset(Offset = "0x380")]
	protected float _originalCapsuleValue;

	[Token(Token = "0x4002220")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] SizeScaledAnimations;

	[Token(Token = "0x4002221")]
	[FieldOffset(Offset = "0x384")]
	public int TargetViewId;

	[Token(Token = "0x4002222")]
	[FieldOffset(Offset = "0x388")]
	public bool LookAtTarget;

	[Token(Token = "0x4002223")]
	[FieldOffset(Offset = "0x38C")]
	public float HeadSize;

	[Token(Token = "0x4002224")]
	[FieldOffset(Offset = "0x390")]
	private Vector3 _headScale;

	[Token(Token = "0x4002225")]
	[FieldOffset(Offset = "0x39C")]
	private float _hairScale;

	[Token(Token = "0x4002226")]
	[FieldOffset(Offset = "0x3A0")]
	private bool _headDetached;

	[Token(Token = "0x4002227")]
	[FieldOffset(Offset = "0x3A1")]
	private bool _hairCut;

	[Token(Token = "0x4002228")]
	[FieldOffset(Offset = "0x3A8")]
	private TitanLimbMesh _limbMesh;

	[Token(Token = "0x4002229")]
	[FieldOffset(Offset = "0x3B0")]
	private bool _limbCutsVisible;

	[Token(Token = "0x400222A")]
	[FieldOffset(Offset = "0x3B4")]
	private float _deathVisualStartTime;

	[Token(Token = "0x400222B")]
	[FieldOffset(Offset = "0x3B8")]
	private float _deathFallSoundVolume;

	[Token(Token = "0x400222C")]
	[FieldOffset(Offset = "0x3BC")]
	private float _steamSoundVolume;

	[Token(Token = "0x400222D")]
	private const float DeathFallSoundDuration = 1.2f;

	[Token(Token = "0x400222E")]
	private const float DeathFallSoundFadeDuration = 0.2f;

	[Token(Token = "0x400222F")]
	private const float DeathSteamSoundFadeInDuration = 0.5f;

	[Token(Token = "0x4002230")]
	private const float DeathSteamSoundFadeOutDuration = 1f;

	[Token(Token = "0x4002231")]
	private const float DeathSteamSoundTailDuration = 0.25f;

	[Token(Token = "0x4002232")]
	private const float DeathDissolveDelay = 3f;

	[Token(Token = "0x4002233")]
	private const float DeathDissolveDuration = 6f;

	[Token(Token = "0x4002234")]
	private const float HeadLaunchSpeed = 45f;

	[Token(Token = "0x4002235")]
	[FieldOffset(Offset = "0x3C0")]
	private Vector3 _finisherDeathVelocity;

	[Token(Token = "0x4002236")]
	[FieldOffset(Offset = "0x3CC")]
	private Vector3 _headLaunchVelocity;

	[Token(Token = "0x4002237")]
	[FieldOffset(Offset = "0x3D8")]
	private Vector3? _napeChunkVelocity;

	[Token(Token = "0x4002238")]
	[FieldOffset(Offset = "0x3E8")]
	private bool _napeChunkPlayed;

	[Token(Token = "0x4002239")]
	[FieldOffset(Offset = "0x3F0")]
	private string _pendingDeathAnimation;

	[Token(Token = "0x400223A")]
	[FieldOffset(Offset = "0x3F8")]
	private TitanDeathType _pendingDeathType;

	[Token(Token = "0x400223B")]
	[FieldOffset(Offset = "0x400")]
	[SerializeField]
	private GameObject hardenedNape;

	[Token(Token = "0x400223C")]
	[FieldOffset(Offset = "0x408")]
	public WardedWeakSpot CurrentWardedWeakSpot;

	[Token(Token = "0x400223D")]
	[FieldOffset(Offset = "0x40C")]
	public WardedWeakSpot LastWardedWeakSpot;

	[Token(Token = "0x400223E")]
	[FieldOffset(Offset = "0x410")]
	private TitanCustomSet _customSet;

	[Token(Token = "0x400223F")]
	[FieldOffset(Offset = "0x418")]
	private TitanCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x4002240")]
	[FieldOffset(Offset = "0x420")]
	private int _skinSlot;

	[Token(Token = "0x17000BE9")]
	private Vector3 ArmEffectOffset
	{
		[Token(Token = "0x600449C")]
		[Address(RVA = "0x5B2E170", Offset = "0x5B2D170", VA = "0x5B2E170")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000BEA")]
	public override bool CanSprint
	{
		[Token(Token = "0x600449D")]
		[Address(RVA = "0x5B2E1D0", Offset = "0x5B2D1D0", VA = "0x5B2E1D0", Slot = "123")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BEB")]
	public override bool CanWallClimb
	{
		[Token(Token = "0x600449E")]
		[Address(RVA = "0x5B2E1E0", Offset = "0x5B2D1E0", VA = "0x5B2E1E0", Slot = "122")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BEC")]
	public bool IsBald
	{
		[Token(Token = "0x600449F")]
		[Address(RVA = "0x5B2E1F0", Offset = "0x5B2D1F0", VA = "0x5B2E1F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BED")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x60044A0")]
		[Address(RVA = "0x5B2E200", Offset = "0x5B2D200", VA = "0x5B2E200", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BEE")]
	private bool IsBellyFlopping
	{
		[Token(Token = "0x60044C2")]
		[Address(RVA = "0x5B31080", Offset = "0x5B30080", VA = "0x5B31080")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BEF")]
	public override bool TreatAsSmall
	{
		[Token(Token = "0x60044F5")]
		[Address(RVA = "0x5B3A180", Offset = "0x5B39180", VA = "0x5B3A180", Slot = "143")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60044A1")]
	[Address(RVA = "0x5B2E470", Offset = "0x5B2D470", VA = "0x5B2E470")]
	public void Init(bool ai, string team, JSONNode data, TitanCustomSet customSet, int skinSlot)
	{
	}

	[Token(Token = "0x60044A2")]
	[Address(RVA = "0x5B2E880", Offset = "0x5B2D880", VA = "0x5B2E880")]
	public void SetWarded(bool warded)
	{
	}

	[Token(Token = "0x60044A3")]
	[Address(RVA = "0x5B2EA20", Offset = "0x5B2DA20", VA = "0x5B2EA20", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x60044A4")]
	[Address(RVA = "0x5B2ECB0", Offset = "0x5B2DCB0", VA = "0x5B2ECB0", Slot = "139")]
	public override bool IsGrabAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x60044A5")]
	[Address(RVA = "0x5B2ED00", Offset = "0x5B2DD00", VA = "0x5B2ED00", Slot = "138")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x60044A6")]
	[Address(RVA = "0x5B2EE20", Offset = "0x5B2DE20", VA = "0x5B2EE20", Slot = "191")]
	protected override void SetSizeParticles(float size)
	{
	}

	[Token(Token = "0x60044A7")]
	[Address(RVA = "0x5B2F070", Offset = "0x5B2E070", VA = "0x5B2F070", Slot = "192")]
	protected override void SetSizeAnimations(float size)
	{
	}

	[Token(Token = "0x60044A8")]
	[Address(RVA = "0x5B2F1E0", Offset = "0x5B2E1E0", VA = "0x5B2F1E0", Slot = "193")]
	protected override void SetSizeHead(float size)
	{
	}

	[Token(Token = "0x60044A9")]
	[Address(RVA = "0x5B2F3C0", Offset = "0x5B2E3C0", VA = "0x5B2F3C0")]
	private void UpdateHeadScale()
	{
	}

	[Token(Token = "0x60044AA")]
	[Address(RVA = "0x5B2F490", Offset = "0x5B2E490", VA = "0x5B2F490")]
	private void ResetHairCloth()
	{
	}

	[Token(Token = "0x60044AB")]
	[Address(RVA = "0x5B2F1A0", Offset = "0x5B2E1A0", VA = "0x5B2F1A0")]
	private static float GetSizeSpeedMultiplier(float size)
	{
		return default(float);
	}

	[Token(Token = "0x60044AC")]
	[Address(RVA = "0x5B2F210", Offset = "0x5B2E210", VA = "0x5B2F210")]
	private float GetHeadSize(float size)
	{
		return default(float);
	}

	[Token(Token = "0x60044AD")]
	[Address(RVA = "0x5B2F5D0", Offset = "0x5B2E5D0", VA = "0x5B2F5D0")]
	[PunRPC]
	public void SetCrawlerRPC(bool crawler, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60044AE")]
	[Address(RVA = "0x5B2F790", Offset = "0x5B2E790", VA = "0x5B2F790")]
	[PunRPC]
	public void SetWardedRPC(bool warded, WardedWeakSpot wardedWeakSpot, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60044AF")]
	[Address(RVA = "0x5B2F940", Offset = "0x5B2E940", VA = "0x5B2F940")]
	[PunRPC]
	private void DisableWardedEffectsRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60044B0")]
	[Address(RVA = "0x5B2FA30", Offset = "0x5B2EA30", VA = "0x5B2FA30")]
	[PunRPC]
	public void ClearRockRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60044B1")]
	[Address(RVA = "0x5B2FB40", Offset = "0x5B2EB40", VA = "0x5B2FB40", Slot = "77")]
	public override Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x60044B2")]
	[Address(RVA = "0x5B2FB60", Offset = "0x5B2EB60", VA = "0x5B2FB60", Slot = "104")]
	protected override void Start()
	{
	}

	[Token(Token = "0x60044B3")]
	[Address(RVA = "0x5B2FFF0", Offset = "0x5B2EFF0", VA = "0x5B2FFF0")]
	[PunRPC]
	public void SetupRPC(string json, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60044B4")]
	[Address(RVA = "0x5B300E0", Offset = "0x5B2F0E0", VA = "0x5B300E0")]
	public bool IsHaircutHit(Collider collider, Vector3 bladePosition)
	{
		return default(bool);
	}

	[Token(Token = "0x60044B5")]
	[Address(RVA = "0x5B302D0", Offset = "0x5B2F2D0", VA = "0x5B302D0")]
	private bool IsTopOfHead(Vector3 localHitPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x60044B6")]
	[Address(RVA = "0x5B303E0", Offset = "0x5B2F3E0", VA = "0x5B303E0")]
	[PunRPC]
	public void ApplyHaircutRPC(int attackerViewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60044B7")]
	[Address(RVA = "0x5B2FDD0", Offset = "0x5B2EDD0", VA = "0x5B2FDD0")]
	protected void LoadSkin()
	{
	}

	[Token(Token = "0x60044B8")]
	[Address(RVA = "0x5B30630", Offset = "0x5B2F630", VA = "0x5B30630")]
	[PunRPC]
	public void LoadSkinRPC(string url, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60044B9")]
	[Address(RVA = "0x5B30820", Offset = "0x5B2F820", VA = "0x5B30820", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x60044BA")]
	[Address(RVA = "0x5B308A0", Offset = "0x5B2F8A0", VA = "0x5B308A0", Slot = "190")]
	protected override void ScaleSounds(float size)
	{
	}

	[Token(Token = "0x60044BB")]
	[Address(RVA = "0x5B30960", Offset = "0x5B2F960", VA = "0x5B30960", Slot = "176")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x60044BC")]
	[Address(RVA = "0x5B309D0", Offset = "0x5B2F9D0", VA = "0x5B309D0", Slot = "80")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x60044BD")]
	[Address(RVA = "0x5B30CF0", Offset = "0x5B2FCF0", VA = "0x5B30CF0")]
	public void CoverNape()
	{
	}

	[Token(Token = "0x60044BE")]
	[Address(RVA = "0x5B30DE0", Offset = "0x5B2FDE0", VA = "0x5B30DE0")]
	public void UncoverNape()
	{
	}

	[Token(Token = "0x60044BF")]
	[Address(RVA = "0x5B30E10", Offset = "0x5B2FE10", VA = "0x5B30E10", Slot = "178")]
	public override void DisableArm(bool left)
	{
	}

	[Token(Token = "0x60044C0")]
	[Address(RVA = "0x5B31070", Offset = "0x5B30070", VA = "0x5B31070")]
	public void DisableHand(bool left)
	{
	}

	[Token(Token = "0x60044C1")]
	[Address(RVA = "0x5B30E20", Offset = "0x5B2FE20", VA = "0x5B30E20")]
	private void DisableLimb(bool left, bool hand)
	{
	}

	[Token(Token = "0x60044C3")]
	[Address(RVA = "0x5B310E0", Offset = "0x5B300E0", VA = "0x5B310E0", Slot = "151")]
	public override bool CanAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x60044C4")]
	[Address(RVA = "0x5B31100", Offset = "0x5B30100", VA = "0x5B31100", Slot = "204")]
	[PunRPC]
	public virtual void DisableArmRPC(bool left, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60044C5")]
	[Address(RVA = "0x5B316C0", Offset = "0x5B306C0", VA = "0x5B316C0")]
	[PunRPC]
	public void DisableHandRPC(bool left, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60044C6")]
	[Address(RVA = "0x5B31140", Offset = "0x5B30140", VA = "0x5B31140")]
	private void ApplyDisabledLimb(bool left, bool hand)
	{
	}

	[Token(Token = "0x60044C7")]
	[Address(RVA = "0x5B319F0", Offset = "0x5B309F0", VA = "0x5B319F0")]
	private void SetLimbDisabled(bool left, bool arm, bool hand)
	{
	}

	[Token(Token = "0x60044C8")]
	[Address(RVA = "0x5B31B00", Offset = "0x5B30B00", VA = "0x5B31B00", Slot = "179")]
	public override bool IsToggleColliderActive(Collider collider)
	{
		return default(bool);
	}

	[Token(Token = "0x60044C9")]
	[Address(RVA = "0x5B31C80", Offset = "0x5B30C80", VA = "0x5B31C80")]
	public void Laugh(BaseCharacter character)
	{
	}

	[Token(Token = "0x60044CA")]
	[Address(RVA = "0x5B31DD0", Offset = "0x5B30DD0", VA = "0x5B31DD0")]
	public void Distract(BaseCharacter character)
	{
	}

	[Token(Token = "0x60044CB")]
	[Address(RVA = "0x5B31F10", Offset = "0x5B30F10", VA = "0x5B31F10", Slot = "205")]
	[PunRPC]
	public virtual void LaughRPC(Vector3 source)
	{
	}

	[Token(Token = "0x60044CC")]
	[Address(RVA = "0x5B322E0", Offset = "0x5B312E0", VA = "0x5B322E0", Slot = "206")]
	[PunRPC]
	public virtual void DistractRPC(int viewId)
	{
	}

	[Token(Token = "0x60044CD")]
	[Address(RVA = "0x5B323A0", Offset = "0x5B313A0", VA = "0x5B323A0", Slot = "177")]
	protected override void UpdateDisableArm()
	{
	}

	[Token(Token = "0x60044CE")]
	[Address(RVA = "0x5B327C0", Offset = "0x5B317C0", VA = "0x5B327C0")]
	private void SetSteamVolume(float fade)
	{
	}

	[Token(Token = "0x60044CF")]
	[Address(RVA = "0x5B32580", Offset = "0x5B31580", VA = "0x5B32580")]
	private float UpdateDisabledLimb(bool left, float timeLeft)
	{
		return default(float);
	}

	[Token(Token = "0x60044D0")]
	[Address(RVA = "0x5B328D0", Offset = "0x5B318D0", VA = "0x5B328D0")]
	private void UpdateLimbParticles(bool left, float timeLeft)
	{
	}

	[Token(Token = "0x60044D1")]
	[Address(RVA = "0x5B329A0", Offset = "0x5B319A0", VA = "0x5B329A0", Slot = "157")]
	public override void Run()
	{
	}

	[Token(Token = "0x60044D2")]
	[Address(RVA = "0x5B32B20", Offset = "0x5B31B20", VA = "0x5B32B20", Slot = "159")]
	public override void WallClimb()
	{
	}

	[Token(Token = "0x60044D3")]
	[Address(RVA = "0x5B32C20", Offset = "0x5B31C20", VA = "0x5B32C20", Slot = "148")]
	public override void Jump(Vector3 direction)
	{
	}

	[Token(Token = "0x60044D4")]
	[Address(RVA = "0x5B32E90", Offset = "0x5B31E90", VA = "0x5B32E90", Slot = "207")]
	public virtual void StunDirectional(bool left, float time, bool refresh)
	{
	}

	[Token(Token = "0x60044D5")]
	[Address(RVA = "0x5B32FB0", Offset = "0x5B31FB0", VA = "0x5B32FB0", Slot = "149")]
	public override void StartJump()
	{
	}

	[Token(Token = "0x60044D6")]
	[Address(RVA = "0x5B32FF0", Offset = "0x5B31FF0", VA = "0x5B32FF0")]
	public void JumpImmediate()
	{
	}

	[Token(Token = "0x60044D7")]
	[Address(RVA = "0x5B33050", Offset = "0x5B32050", VA = "0x5B33050", Slot = "160")]
	public override void Eat()
	{
	}

	[Token(Token = "0x60044D8")]
	[Address(RVA = "0x5B331C0", Offset = "0x5B321C0", VA = "0x5B331C0", Slot = "165")]
	public override void Land()
	{
	}

	[Token(Token = "0x60044D9")]
	[Address(RVA = "0x5B33470", Offset = "0x5B32470", VA = "0x5B33470", Slot = "166")]
	public override void Fall()
	{
	}

	[Token(Token = "0x60044DA")]
	[Address(RVA = "0x5B33560", Offset = "0x5B32560", VA = "0x5B33560", Slot = "163")]
	public override void Idle(float fadeTime)
	{
	}

	[Token(Token = "0x60044DB")]
	[Address(RVA = "0x5B335D0", Offset = "0x5B325D0", VA = "0x5B335D0", Slot = "167")]
	public override void Turn(Vector3 targetDirection)
	{
	}

	[Token(Token = "0x60044DC")]
	[Address(RVA = "0x5B33880", Offset = "0x5B32880", VA = "0x5B33880", Slot = "180")]
	protected override void UpdateTurn()
	{
	}

	[Token(Token = "0x60044DD")]
	[Address(RVA = "0x5B339C0", Offset = "0x5B329C0", VA = "0x5B339C0", Slot = "93")]
	[PunRPC]
	public override void MarkDeadRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60044DE")]
	[Address(RVA = "0x5B33BC0", Offset = "0x5B32BC0", VA = "0x5B33BC0", Slot = "82")]
	public override void TakeDamage(int damage)
	{
	}

	[Token(Token = "0x60044DF")]
	[Address(RVA = "0x5B33C80", Offset = "0x5B32C80", VA = "0x5B33C80", Slot = "83")]
	public override void Die()
	{
	}

	[Token(Token = "0x60044E0")]
	[Address(RVA = "0x5B33C90", Offset = "0x5B32C90", VA = "0x5B33C90", Slot = "84")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__141))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x60044E1")]
	[Address(RVA = "0x5B33D00", Offset = "0x5B32D00", VA = "0x5B33D00")]
	private void StartDeathAnimation()
	{
	}

	[Token(Token = "0x60044E2")]
	[Address(RVA = "0x5B34190", Offset = "0x5B33190", VA = "0x5B34190", Slot = "101")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60044E3")]
	[Address(RVA = "0x5B34280", Offset = "0x5B33280", VA = "0x5B34280", Slot = "90")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x60044E4")]
	[Address(RVA = "0x5B342B0", Offset = "0x5B332B0", VA = "0x5B342B0")]
	private void ApplyHit(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x60044E5")]
	[Address(RVA = "0x5B34C70", Offset = "0x5B33C70", VA = "0x5B34C70")]
	private Vector3 GetNapeChunkVelocity(int killerViewId)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60044E6")]
	[Address(RVA = "0x5B34E90", Offset = "0x5B33E90", VA = "0x5B34E90")]
	[PunRPC]
	public void PlayNapeChunkRPC(Vector3 velocity, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60044E7")]
	[Address(RVA = "0x5B34F90", Offset = "0x5B33F90", VA = "0x5B34F90", Slot = "153")]
	public override void Kick()
	{
	}

	[Token(Token = "0x60044E8")]
	[Address(RVA = "0x5B34FE0", Offset = "0x5B33FE0", VA = "0x5B34FE0", Slot = "150")]
	public override void Attack(string attack)
	{
	}

	[Token(Token = "0x60044E9")]
	[Address(RVA = "0x5B35B50", Offset = "0x5B34B50", VA = "0x5B35B50", Slot = "187")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x60044EA")]
	[Address(RVA = "0x5B38980", Offset = "0x5B37980", VA = "0x5B38980")]
	private bool WouldRockHitSelf(Vector3 hand, Vector3 direction, float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x60044EB")]
	[Address(RVA = "0x5B38CC0", Offset = "0x5B37CC0", VA = "0x5B38CC0", Slot = "188")]
	protected override void UpdateEat()
	{
	}

	[Token(Token = "0x60044EC")]
	[Address(RVA = "0x5B38EA0", Offset = "0x5B37EA0", VA = "0x5B38EA0")]
	private void UpdateThrowHuman()
	{
	}

	[Token(Token = "0x60044ED")]
	[Address(RVA = "0x5B39600", Offset = "0x5B38600", VA = "0x5B39600", Slot = "168")]
	public override void Blind()
	{
	}

	[Token(Token = "0x60044EE")]
	[Address(RVA = "0x5B397A0", Offset = "0x5B387A0", VA = "0x5B397A0", Slot = "181")]
	protected override string GetSitIdleAniamtion()
	{
		return null;
	}

	[Token(Token = "0x60044EF")]
	[Address(RVA = "0x5B397F0", Offset = "0x5B387F0", VA = "0x5B397F0", Slot = "182")]
	protected override string GetSitFallAnimation()
	{
		return null;
	}

	[Token(Token = "0x60044F0")]
	[Address(RVA = "0x5B39840", Offset = "0x5B38840", VA = "0x5B39840", Slot = "183")]
	protected override string GetSitUpAnimation()
	{
		return null;
	}

	[Token(Token = "0x60044F1")]
	[Address(RVA = "0x5B39890", Offset = "0x5B38890", VA = "0x5B39890", Slot = "169")]
	public override void Cripple(float time = 0f)
	{
	}

	[Token(Token = "0x60044F2")]
	[Address(RVA = "0x5B39A40", Offset = "0x5B38A40", VA = "0x5B39A40", Slot = "170")]
	protected override void RegenerateWardedWeakSpot()
	{
	}

	[Token(Token = "0x60044F3")]
	[Address(RVA = "0x5B39BE0", Offset = "0x5B38BE0", VA = "0x5B39BE0", Slot = "89")]
	public override void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
	}

	[Token(Token = "0x60044F4")]
	[Address(RVA = "0x5B3A0F0", Offset = "0x5B390F0", VA = "0x5B3A0F0", Slot = "94")]
	protected override void OnNotifyDie(BaseCharacter killer)
	{
	}

	[Token(Token = "0x60044F6")]
	[Address(RVA = "0x5B3A190", Offset = "0x5B39190", VA = "0x5B3A190", Slot = "156")]
	protected override void OnFinisherKill(Vector3 direction, bool launch, bool decapitate)
	{
	}

	[Token(Token = "0x60044F7")]
	[Address(RVA = "0x5B34030", Offset = "0x5B33030", VA = "0x5B34030")]
	private void DetachHead()
	{
	}

	[Token(Token = "0x60044F8")]
	[Address(RVA = "0x5B3A230", Offset = "0x5B39230", VA = "0x5B3A230")]
	[PunRPC]
	public void DetachHeadRPC(Vector3 launch, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60044F9")]
	[Address(RVA = "0x5B3A770", Offset = "0x5B39770", VA = "0x5B3A770")]
	[IteratorStateMachine(typeof(_003CPlayDecapitationBlood_003Ed__167))]
	private IEnumerator PlayDecapitationBlood()
	{
		return null;
	}

	[Token(Token = "0x60044FA")]
	[Address(RVA = "0x5B3A7E0", Offset = "0x5B397E0", VA = "0x5B3A7E0")]
	private Vector2 GetLookAngle(Vector3 target)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60044FB")]
	[Address(RVA = "0x5B3A9F0", Offset = "0x5B399F0", VA = "0x5B3A9F0")]
	protected void LateUpdateHeadPosition(Vector3 position)
	{
	}

	[Token(Token = "0x60044FC")]
	[Address(RVA = "0x5B3AFF0", Offset = "0x5B39FF0", VA = "0x5B3AFF0")]
	protected void LateUpdateHead(BaseCharacter target)
	{
	}

	[Token(Token = "0x60044FD")]
	[Address(RVA = "0x5B3B6B0", Offset = "0x5B3A6B0", VA = "0x5B3B6B0", Slot = "184")]
	protected override void Update()
	{
	}

	[Token(Token = "0x60044FE")]
	[Address(RVA = "0x5B3B6D0", Offset = "0x5B3A6D0", VA = "0x5B3B6D0", Slot = "113")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x60044FF")]
	[Address(RVA = "0x5B3B8A0", Offset = "0x5B3A8A0", VA = "0x5B3B8A0")]
	private static void UpdateHandHurtbox(Collider hurtbox, BaseHitbox hitbox, float normalRadius, bool grabbing)
	{
	}

	[Token(Token = "0x6004500")]
	[Address(RVA = "0x5B3B980", Offset = "0x5B3A980", VA = "0x5B3B980", Slot = "114")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6004501")]
	[Address(RVA = "0x5B3BE90", Offset = "0x5B3AE90", VA = "0x5B3BE90")]
	private void UpdateHiddenLimbs()
	{
	}

	[Token(Token = "0x6004502")]
	[Address(RVA = "0x5B3CB50", Offset = "0x5B3BB50", VA = "0x5B3CB50")]
	private static void SetLimbHidden(Transform limb, bool hidden)
	{
	}

	[Token(Token = "0x6004503")]
	[Address(RVA = "0x5B318F0", Offset = "0x5B308F0", VA = "0x5B318F0")]
	private Vector3 GetLimbEffectPosition(bool left, bool hand)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6004504")]
	[Address(RVA = "0x5B31700", Offset = "0x5B30700", VA = "0x5B31700")]
	private void EnsureLimbMesh()
	{
	}

	[Token(Token = "0x6004505")]
	[Address(RVA = "0x5B3C780", Offset = "0x5B3B780", VA = "0x5B3C780")]
	private void UpdateLimbCuts()
	{
	}

	[Token(Token = "0x6004506")]
	[Address(RVA = "0x5B31840", Offset = "0x5B30840", VA = "0x5B31840")]
	private static float GetLimbRegrowthProgress(float timeLeft, bool arm)
	{
		return default(float);
	}

	[Token(Token = "0x6004507")]
	[Address(RVA = "0x5B3CC70", Offset = "0x5B3BC70", VA = "0x5B3CC70")]
	private void UpdateLimbRegrowth(bool left, bool armDisabled, bool handDisabled, float timeLeft)
	{
	}

	[Token(Token = "0x6004508")]
	[Address(RVA = "0x5B3C4D0", Offset = "0x5B3B4D0", VA = "0x5B3C4D0")]
	private void UpdateDeathDissolve()
	{
	}

	[Token(Token = "0x6004509")]
	[Address(RVA = "0x5B3D320", Offset = "0x5B3C320", VA = "0x5B3D320")]
	private float GetDeathDissolveScale()
	{
		return default(float);
	}

	[Token(Token = "0x600450A")]
	[Address(RVA = "0x5B3D1A0", Offset = "0x5B3C1A0", VA = "0x5B3D1A0")]
	private void UpdateDeathSounds(float dissolveElapsed)
	{
	}

	[Token(Token = "0x600450B")]
	[Address(RVA = "0x5B3D710", Offset = "0x5B3C710", VA = "0x5B3D710", Slot = "112")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x600450C")]
	[Address(RVA = "0x5B3D870", Offset = "0x5B3C870", VA = "0x5B3D870", Slot = "117")]
	protected override int GetFootstepPhase()
	{
		return default(int);
	}

	[Token(Token = "0x600450D")]
	[Address(RVA = "0x5B3DAD0", Offset = "0x5B3CAD0", VA = "0x5B3DAD0")]
	protected string GetPlayingRunAnimation()
	{
		return null;
	}

	[Token(Token = "0x600450E")]
	[Address(RVA = "0x5B3DBC0", Offset = "0x5B3CBC0", VA = "0x5B3DBC0", Slot = "107")]
	protected override void CheckGround()
	{
	}

	[Token(Token = "0x600450F")]
	[Address(RVA = "0x5B3E0F0", Offset = "0x5B3D0F0", VA = "0x5B3E0F0")]
	public BasicTitan()
	{
	}
}
