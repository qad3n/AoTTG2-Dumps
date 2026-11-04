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

[Token(Token = "0x20006B3")]
internal class BasicTitan : BaseTitan
{
	[Token(Token = "0x20006B4")]
	[CompilerGenerated]
	private sealed class _003CPlayDecapitationBlood_003Ed__156 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400208D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400208E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400208F")]
		[FieldOffset(Offset = "0x20")]
		public BasicTitan _003C_003E4__this;

		[Token(Token = "0x17000BA7")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004272")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BA8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004274")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600426F")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CPlayDecapitationBlood_003Ed__156(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004270")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004271")]
		[Address(RVA = "0x21B7B40", Offset = "0x21B6140", VA = "0x1821B7B40", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004273")]
		[Address(RVA = "0x21B7C40", Offset = "0x21B6240", VA = "0x1821B7C40", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20006B5")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__132 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002090")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002091")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002092")]
		[FieldOffset(Offset = "0x20")]
		public BasicTitan _003C_003E4__this;

		[Token(Token = "0x4002093")]
		[FieldOffset(Offset = "0x28")]
		private string _003CdieAnimation_003E5__2;

		[Token(Token = "0x17000BA9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004278")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BAA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600427A")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004275")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__132(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004276")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004277")]
		[Address(RVA = "0x21B7D30", Offset = "0x21B6330", VA = "0x1821B7D30", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004279")]
		[Address(RVA = "0x21B8110", Offset = "0x21B6710", VA = "0x1821B8110", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400204D")]
	[FieldOffset(Offset = "0x288")]
	public BasicTitanComponentCache BasicCache;

	[Token(Token = "0x400204E")]
	[FieldOffset(Offset = "0x290")]
	protected BasicTitanAnimations BasicAnimations;

	[Token(Token = "0x400204F")]
	[FieldOffset(Offset = "0x298")]
	public bool IsCrawler;

	[Token(Token = "0x4002050")]
	[FieldOffset(Offset = "0x299")]
	public bool isWarded;

	[Token(Token = "0x4002051")]
	[FieldOffset(Offset = "0x29C")]
	public TitanDeathType DeathType;

	[Token(Token = "0x4002052")]
	[FieldOffset(Offset = "0x2A0")]
	public Vector3 DeathVelocity;

	[Token(Token = "0x4002053")]
	[FieldOffset(Offset = "0x2B0")]
	protected string _runAnimation;

	[Token(Token = "0x4002054")]
	[FieldOffset(Offset = "0x2B8")]
	public BasicTitanSetup Setup;

	[Token(Token = "0x4002055")]
	[FieldOffset(Offset = "0x2C0")]
	public Quaternion _oldHeadRotation;

	[Token(Token = "0x4002056")]
	[FieldOffset(Offset = "0x2D0")]
	private Quaternion? _aiHeadRotation;

	[Token(Token = "0x4002057")]
	[FieldOffset(Offset = "0x2E4")]
	private float _turnDegrees;

	[Token(Token = "0x4002058")]
	[FieldOffset(Offset = "0x2E8")]
	public Quaternion? LateUpdateHeadRotation;

	[Token(Token = "0x4002059")]
	[FieldOffset(Offset = "0x2FC")]
	public Quaternion? LateUpdateHeadRotationRecv;

	[Token(Token = "0x400205A")]
	[FieldOffset(Offset = "0x310")]
	public Vector2 LastGoodHeadAngle;

	[Token(Token = "0x400205B")]
	[FieldOffset(Offset = "0x318")]
	public float BellyFlopTime;

	[Token(Token = "0x400205C")]
	[FieldOffset(Offset = "0x31C")]
	protected float _leftArmDisabledTimeLeft;

	[Token(Token = "0x400205D")]
	[FieldOffset(Offset = "0x320")]
	protected float _rightArmDisabledTimeLeft;

	[Token(Token = "0x400205E")]
	[FieldOffset(Offset = "0x324")]
	protected float ArmDisableTime;

	[Token(Token = "0x400205F")]
	private const float LimbRegrowthTime = 6.5f;

	[Token(Token = "0x4002060")]
	private const float LimbBloodDuration = 4f;

	[Token(Token = "0x4002061")]
	private const float LimbSteamSoundFadeInDuration = 0.3f;

	[Token(Token = "0x4002062")]
	private const float LimbSteamSoundFadeOutDuration = 0.5f;

	[Token(Token = "0x4002063")]
	[FieldOffset(Offset = "0x328")]
	private float _limbSteamSoundFade;

	[Token(Token = "0x4002064")]
	[FieldOffset(Offset = "0x32C")]
	public float RockThrow1Speed;

	[Token(Token = "0x4002065")]
	[FieldOffset(Offset = "0x330")]
	public float RockThrowMaxAimAngle;

	[Token(Token = "0x4002066")]
	[FieldOffset(Offset = "0x334")]
	public float RockThrowCloseAimAngle;

	[Token(Token = "0x4002067")]
	[FieldOffset(Offset = "0x338")]
	public float RockThrowCloseAimDistance;

	[Token(Token = "0x4002068")]
	[FieldOffset(Offset = "0x33C")]
	public float RockThrowFullAimDistance;

	[Token(Token = "0x4002069")]
	[FieldOffset(Offset = "0x340")]
	protected Vector3 _rockThrowTarget;

	[Token(Token = "0x400206A")]
	[FieldOffset(Offset = "0x350")]
	protected BaseCharacter _rockThrowTargetCharacter;

	[Token(Token = "0x400206B")]
	[FieldOffset(Offset = "0x358")]
	protected Vector3 _rockThrowForward;

	[Token(Token = "0x400206C")]
	[FieldOffset(Offset = "0x364")]
	protected bool _rockThrowWillHitSelf;

	[Token(Token = "0x400206D")]
	[FieldOffset(Offset = "0x368")]
	protected float _originalCapsuleValue;

	[Token(Token = "0x400206E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] SizeScaledAnimations;

	[Token(Token = "0x400206F")]
	[FieldOffset(Offset = "0x36C")]
	public int TargetViewId;

	[Token(Token = "0x4002070")]
	[FieldOffset(Offset = "0x370")]
	public bool LookAtTarget;

	[Token(Token = "0x4002071")]
	[FieldOffset(Offset = "0x374")]
	public float HeadSize;

	[Token(Token = "0x4002072")]
	[FieldOffset(Offset = "0x378")]
	private Vector3 _headScale;

	[Token(Token = "0x4002073")]
	[FieldOffset(Offset = "0x384")]
	private bool _headDetached;

	[Token(Token = "0x4002074")]
	[FieldOffset(Offset = "0x385")]
	private bool _hairCut;

	[Token(Token = "0x4002075")]
	[FieldOffset(Offset = "0x388")]
	private TitanLimbMesh _limbMesh;

	[Token(Token = "0x4002076")]
	[FieldOffset(Offset = "0x390")]
	private bool _limbCutsVisible;

	[Token(Token = "0x4002077")]
	[FieldOffset(Offset = "0x398")]
	private TitanDeathDissolve _deathDissolve;

	[Token(Token = "0x4002078")]
	[FieldOffset(Offset = "0x3A0")]
	private float _deathVisualStartTime;

	[Token(Token = "0x4002079")]
	[FieldOffset(Offset = "0x3A4")]
	private float _deathFallSoundVolume;

	[Token(Token = "0x400207A")]
	[FieldOffset(Offset = "0x3A8")]
	private float _steamSoundVolume;

	[Token(Token = "0x400207B")]
	private const float DeathFallSoundDuration = 1.2f;

	[Token(Token = "0x400207C")]
	private const float DeathFallSoundFadeDuration = 0.2f;

	[Token(Token = "0x400207D")]
	private const float DeathSteamSoundFadeInDuration = 0.5f;

	[Token(Token = "0x400207E")]
	private const float DeathSteamSoundFadeOutDuration = 1f;

	[Token(Token = "0x400207F")]
	private const float DeathSteamSoundTailDuration = 0.25f;

	[Token(Token = "0x4002080")]
	private const float DeathDissolveDelay = 3f;

	[Token(Token = "0x4002081")]
	private const float DeathDissolveDuration = 6f;

	[Token(Token = "0x4002082")]
	private const float HeadLaunchSpeed = 45f;

	[Token(Token = "0x4002083")]
	[FieldOffset(Offset = "0x3AC")]
	private Vector3 _finisherDeathVelocity;

	[Token(Token = "0x4002084")]
	[FieldOffset(Offset = "0x3B8")]
	private Vector3 _headLaunchVelocity;

	[Token(Token = "0x4002085")]
	[FieldOffset(Offset = "0x3C8")]
	private string _pendingDeathAnimation;

	[Token(Token = "0x4002086")]
	[FieldOffset(Offset = "0x3D0")]
	private TitanDeathType _pendingDeathType;

	[Token(Token = "0x4002087")]
	[FieldOffset(Offset = "0x3D8")]
	[SerializeField]
	private GameObject hardenedNape;

	[Token(Token = "0x4002088")]
	[FieldOffset(Offset = "0x3E0")]
	public WardedWeakSpot CurrentWardedWeakSpot;

	[Token(Token = "0x4002089")]
	[FieldOffset(Offset = "0x3E4")]
	public WardedWeakSpot LastWardedWeakSpot;

	[Token(Token = "0x400208A")]
	[FieldOffset(Offset = "0x3E8")]
	private TitanCustomSet _customSet;

	[Token(Token = "0x400208B")]
	[FieldOffset(Offset = "0x3F0")]
	private TitanCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x400208C")]
	[FieldOffset(Offset = "0x3F8")]
	private int _skinSlot;

	[Token(Token = "0x17000BA1")]
	private Vector3 ArmEffectOffset
	{
		[Token(Token = "0x6004204")]
		[Address(RVA = "0x21924F0", Offset = "0x2190AF0", VA = "0x1821924F0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000BA2")]
	public override bool CanSprint
	{
		[Token(Token = "0x6004205")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "123")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BA3")]
	public override bool CanWallClimb
	{
		[Token(Token = "0x6004206")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "122")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BA4")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x6004207")]
		[Address(RVA = "0x2192570", Offset = "0x2190B70", VA = "0x182192570", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BA5")]
	private bool IsBellyFlopping
	{
		[Token(Token = "0x6004225")]
		[Address(RVA = "0x2192820", Offset = "0x2190E20", VA = "0x182192820")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BA6")]
	public override bool TreatAsSmall
	{
		[Token(Token = "0x6004256")]
		[Address(RVA = "0x2192890", Offset = "0x2190E90", VA = "0x182192890", Slot = "143")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004208")]
	[Address(RVA = "0x21875A0", Offset = "0x2185BA0", VA = "0x1821875A0")]
	public void Init(bool ai, string team, JSONNode data, TitanCustomSet customSet, int skinSlot)
	{
	}

	[Token(Token = "0x6004209")]
	[Address(RVA = "0x218C060", Offset = "0x218A660", VA = "0x18218C060")]
	public void SetWarded(bool warded)
	{
	}

	[Token(Token = "0x600420A")]
	[Address(RVA = "0x218B0C0", Offset = "0x21896C0", VA = "0x18218B0C0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x600420B")]
	[Address(RVA = "0x21879B0", Offset = "0x2185FB0", VA = "0x1821879B0", Slot = "139")]
	public override bool IsGrabAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x600420C")]
	[Address(RVA = "0x2187290", Offset = "0x2185890", VA = "0x182187290", Slot = "138")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x600420D")]
	[Address(RVA = "0x218BA80", Offset = "0x218A080", VA = "0x18218BA80", Slot = "191")]
	protected override void SetSizeParticles(float size)
	{
	}

	[Token(Token = "0x600420E")]
	[Address(RVA = "0x218B980", Offset = "0x2189F80", VA = "0x18218B980", Slot = "192")]
	protected override void SetSizeAnimations(float size)
	{
	}

	[Token(Token = "0x600420F")]
	[Address(RVA = "0x21874B0", Offset = "0x2185AB0", VA = "0x1821874B0")]
	private static float GetSizeSpeedMultiplier(float size)
	{
		return default(float);
	}

	[Token(Token = "0x6004210")]
	[Address(RVA = "0x2186C50", Offset = "0x2185250", VA = "0x182186C50")]
	private float GetHeadSize(float size)
	{
		return default(float);
	}

	[Token(Token = "0x6004211")]
	[Address(RVA = "0x218B680", Offset = "0x2189C80", VA = "0x18218B680")]
	[PunRPC]
	public void SetCrawlerRPC(bool crawler, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004212")]
	[Address(RVA = "0x218BEB0", Offset = "0x218A4B0", VA = "0x18218BEB0")]
	[PunRPC]
	public void SetWardedRPC(bool warded, WardedWeakSpot wardedWeakSpot, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004213")]
	[Address(RVA = "0x2185D70", Offset = "0x2184370", VA = "0x182185D70")]
	[PunRPC]
	private void DisableWardedEffectsRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004214")]
	[Address(RVA = "0x2184F30", Offset = "0x2183530", VA = "0x182184F30")]
	[PunRPC]
	public void ClearRockRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004215")]
	[Address(RVA = "0x210A580", Offset = "0x2108B80", VA = "0x18210A580", Slot = "77")]
	public override Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x6004216")]
	[Address(RVA = "0x218C7B0", Offset = "0x218ADB0", VA = "0x18218C7B0", Slot = "104")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6004217")]
	[Address(RVA = "0x218C210", Offset = "0x218A810", VA = "0x18218C210")]
	[PunRPC]
	public void SetupRPC(string json, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004218")]
	[Address(RVA = "0x2187A00", Offset = "0x2186000", VA = "0x182187A00")]
	public bool IsHaircutHit(Collider collider, Vector3 bladePosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6004219")]
	[Address(RVA = "0x2187E60", Offset = "0x2186460", VA = "0x182187E60")]
	private bool IsTopOfHead(Vector3 localHitPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x600421A")]
	[Address(RVA = "0x21832B0", Offset = "0x21818B0", VA = "0x1821832B0")]
	[PunRPC]
	public void ApplyHaircutRPC(int attackerViewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600421B")]
	[Address(RVA = "0x218A410", Offset = "0x2188A10", VA = "0x18218A410")]
	protected void LoadSkin()
	{
	}

	[Token(Token = "0x600421C")]
	[Address(RVA = "0x218A220", Offset = "0x2188820", VA = "0x18218A220")]
	[PunRPC]
	public void LoadSkinRPC(string url, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600421D")]
	[Address(RVA = "0x21851C0", Offset = "0x21837C0", VA = "0x1821851C0", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x600421E")]
	[Address(RVA = "0x2185140", Offset = "0x2183740", VA = "0x182185140", Slot = "176")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x600421F")]
	[Address(RVA = "0x2186140", Offset = "0x2184740", VA = "0x182186140", Slot = "80")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x6004220")]
	[Address(RVA = "0x2185030", Offset = "0x2183630", VA = "0x182185030")]
	public void CoverNape()
	{
	}

	[Token(Token = "0x6004221")]
	[Address(RVA = "0x218D090", Offset = "0x218B690", VA = "0x18218D090")]
	public void UncoverNape()
	{
	}

	[Token(Token = "0x6004222")]
	[Address(RVA = "0x2185A60", Offset = "0x2184060", VA = "0x182185A60", Slot = "178")]
	public override void DisableArm(bool left)
	{
	}

	[Token(Token = "0x6004223")]
	[Address(RVA = "0x2185AB0", Offset = "0x21840B0", VA = "0x182185AB0")]
	public void DisableHand(bool left)
	{
	}

	[Token(Token = "0x6004224")]
	[Address(RVA = "0x2185AC0", Offset = "0x21840C0", VA = "0x182185AC0")]
	private void DisableLimb(bool left, bool hand)
	{
	}

	[Token(Token = "0x6004226")]
	[Address(RVA = "0x217ABF0", Offset = "0x21791F0", VA = "0x18217ABF0", Slot = "151")]
	public override bool CanAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x6004227")]
	[Address(RVA = "0x2185A20", Offset = "0x2184020", VA = "0x182185A20", Slot = "203")]
	[PunRPC]
	public virtual void DisableArmRPC(bool left, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004228")]
	[Address(RVA = "0x2185A70", Offset = "0x2184070", VA = "0x182185A70")]
	[PunRPC]
	public void DisableHandRPC(bool left, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004229")]
	[Address(RVA = "0x2182CC0", Offset = "0x21812C0", VA = "0x182182CC0")]
	private void ApplyDisabledLimb(bool left, bool hand)
	{
	}

	[Token(Token = "0x600422A")]
	[Address(RVA = "0x218B870", Offset = "0x2189E70", VA = "0x18218B870")]
	private void SetLimbDisabled(bool left, bool arm, bool hand)
	{
	}

	[Token(Token = "0x600422B")]
	[Address(RVA = "0x2187C80", Offset = "0x2186280", VA = "0x182187C80", Slot = "179")]
	public override bool IsToggleColliderActive(Collider collider)
	{
		return default(bool);
	}

	[Token(Token = "0x600422C")]
	[Address(RVA = "0x218A0C0", Offset = "0x21886C0", VA = "0x18218A0C0")]
	public void Laugh(BaseCharacter character)
	{
	}

	[Token(Token = "0x600422D")]
	[Address(RVA = "0x2185F30", Offset = "0x2184530", VA = "0x182185F30")]
	public void Distract(BaseCharacter character)
	{
	}

	[Token(Token = "0x600422E")]
	[Address(RVA = "0x2189EE0", Offset = "0x21884E0", VA = "0x182189EE0", Slot = "204")]
	[PunRPC]
	public virtual void LaughRPC(Vector3 source)
	{
	}

	[Token(Token = "0x600422F")]
	[Address(RVA = "0x2185E70", Offset = "0x2184470", VA = "0x182185E70", Slot = "205")]
	[PunRPC]
	public virtual void DistractRPC(int viewId)
	{
	}

	[Token(Token = "0x6004230")]
	[Address(RVA = "0x2190750", Offset = "0x218ED50", VA = "0x182190750", Slot = "177")]
	protected override void UpdateDisableArm()
	{
	}

	[Token(Token = "0x6004231")]
	[Address(RVA = "0x218BDA0", Offset = "0x218A3A0", VA = "0x18218BDA0")]
	private void SetSteamVolume(float fade)
	{
	}

	[Token(Token = "0x6004232")]
	[Address(RVA = "0x2190920", Offset = "0x218EF20", VA = "0x182190920")]
	private float UpdateDisabledLimb(bool left, float timeLeft)
	{
		return default(float);
	}

	[Token(Token = "0x6004233")]
	[Address(RVA = "0x2191060", Offset = "0x218F660", VA = "0x182191060")]
	private void UpdateLimbParticles(bool left, float timeLeft)
	{
	}

	[Token(Token = "0x6004234")]
	[Address(RVA = "0x218B510", Offset = "0x2189B10", VA = "0x18218B510", Slot = "157")]
	public override void Run()
	{
	}

	[Token(Token = "0x6004235")]
	[Address(RVA = "0x2191D80", Offset = "0x2190380", VA = "0x182191D80", Slot = "159")]
	public override void WallClimb()
	{
	}

	[Token(Token = "0x6004236")]
	[Address(RVA = "0x2188020", Offset = "0x2186620", VA = "0x182188020", Slot = "148")]
	public override void Jump(Vector3 direction)
	{
	}

	[Token(Token = "0x6004237")]
	[Address(RVA = "0x218CBB0", Offset = "0x218B1B0", VA = "0x18218CBB0", Slot = "206")]
	public virtual void StunDirectional(bool left, float time, bool refresh)
	{
	}

	[Token(Token = "0x6004238")]
	[Address(RVA = "0x218C670", Offset = "0x218AC70", VA = "0x18218C670", Slot = "149")]
	public override void StartJump()
	{
	}

	[Token(Token = "0x6004239")]
	[Address(RVA = "0x2187FB0", Offset = "0x21865B0", VA = "0x182187FB0")]
	public void JumpImmediate()
	{
	}

	[Token(Token = "0x600423A")]
	[Address(RVA = "0x2186070", Offset = "0x2184670", VA = "0x182186070", Slot = "160")]
	public override void Eat()
	{
	}

	[Token(Token = "0x600423B")]
	[Address(RVA = "0x21882D0", Offset = "0x21868D0", VA = "0x1821882D0", Slot = "165")]
	public override void Land()
	{
	}

	[Token(Token = "0x600423C")]
	[Address(RVA = "0x21865E0", Offset = "0x2184BE0", VA = "0x1821865E0", Slot = "166")]
	public override void Fall()
	{
	}

	[Token(Token = "0x600423D")]
	[Address(RVA = "0x21874F0", Offset = "0x2185AF0", VA = "0x1821874F0", Slot = "163")]
	public override void Idle(float fadeTime)
	{
	}

	[Token(Token = "0x600423E")]
	[Address(RVA = "0x218CDA0", Offset = "0x218B3A0", VA = "0x18218CDA0", Slot = "167")]
	public override void Turn(Vector3 targetDirection)
	{
	}

	[Token(Token = "0x600423F")]
	[Address(RVA = "0x2191B70", Offset = "0x2190170", VA = "0x182191B70", Slot = "180")]
	protected override void UpdateTurn()
	{
	}

	[Token(Token = "0x6004240")]
	[Address(RVA = "0x218A640", Offset = "0x2188C40", VA = "0x18218A640", Slot = "93")]
	[PunRPC]
	public override void MarkDeadRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004241")]
	[Address(RVA = "0x218CCE0", Offset = "0x218B2E0", VA = "0x18218CCE0", Slot = "82")]
	public override void TakeDamage(int damage)
	{
	}

	[Token(Token = "0x6004242")]
	[Address(RVA = "0x2185A10", Offset = "0x2184010", VA = "0x182185A10", Slot = "83")]
	public override void Die()
	{
	}

	[Token(Token = "0x6004243")]
	[Address(RVA = "0x2191D10", Offset = "0x2190310", VA = "0x182191D10", Slot = "84")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__132))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x6004244")]
	[Address(RVA = "0x218C310", Offset = "0x218A910", VA = "0x18218C310")]
	private void StartDeathAnimation()
	{
	}

	[Token(Token = "0x6004245")]
	[Address(RVA = "0x2184690", Offset = "0x2182C90", VA = "0x182184690", Slot = "101")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6004246")]
	[Address(RVA = "0x2186E20", Offset = "0x2185420", VA = "0x182186E20", Slot = "90")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6004247")]
	[Address(RVA = "0x21834D0", Offset = "0x2181AD0", VA = "0x1821834D0")]
	private void ApplyHit(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6004248")]
	[Address(RVA = "0x2188280", Offset = "0x2186880", VA = "0x182188280", Slot = "153")]
	public override void Kick()
	{
	}

	[Token(Token = "0x6004249")]
	[Address(RVA = "0x2183F20", Offset = "0x2182520", VA = "0x182183F20", Slot = "150")]
	public override void Attack(string attack)
	{
	}

	[Token(Token = "0x600424A")]
	[Address(RVA = "0x218D120", Offset = "0x218B720", VA = "0x18218D120", Slot = "187")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x600424B")]
	[Address(RVA = "0x2191E90", Offset = "0x2190490", VA = "0x182191E90")]
	private bool WouldRockHitSelf(Vector3 hand, Vector3 direction, float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x600424C")]
	[Address(RVA = "0x2190C00", Offset = "0x218F200", VA = "0x182190C00", Slot = "188")]
	protected override void UpdateEat()
	{
	}

	[Token(Token = "0x600424D")]
	[Address(RVA = "0x21915A0", Offset = "0x218FBA0", VA = "0x1821915A0")]
	private void UpdateThrowHuman()
	{
	}

	[Token(Token = "0x600424E")]
	[Address(RVA = "0x21848A0", Offset = "0x2182EA0", VA = "0x1821848A0", Slot = "168")]
	public override void Blind()
	{
	}

	[Token(Token = "0x600424F")]
	[Address(RVA = "0x2187410", Offset = "0x2185A10", VA = "0x182187410", Slot = "181")]
	protected override string GetSitIdleAniamtion()
	{
		return null;
	}

	[Token(Token = "0x6004250")]
	[Address(RVA = "0x21873C0", Offset = "0x21859C0", VA = "0x1821873C0", Slot = "182")]
	protected override string GetSitFallAnimation()
	{
		return null;
	}

	[Token(Token = "0x6004251")]
	[Address(RVA = "0x2187460", Offset = "0x2185A60", VA = "0x182187460", Slot = "183")]
	protected override string GetSitUpAnimation()
	{
		return null;
	}

	[Token(Token = "0x6004252")]
	[Address(RVA = "0x21852E0", Offset = "0x21838E0", VA = "0x1821852E0", Slot = "169")]
	public override void Cripple(float time = 0f)
	{
	}

	[Token(Token = "0x6004253")]
	[Address(RVA = "0x218B350", Offset = "0x2189950", VA = "0x18218B350", Slot = "170")]
	protected override void RegenerateWardedWeakSpot()
	{
	}

	[Token(Token = "0x6004254")]
	[Address(RVA = "0x218AA40", Offset = "0x2189040", VA = "0x18218AA40", Slot = "89")]
	public override void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
	}

	[Token(Token = "0x6004255")]
	[Address(RVA = "0x218B020", Offset = "0x2189620", VA = "0x18218B020", Slot = "94")]
	protected override void OnNotifyDie(BaseCharacter killer)
	{
	}

	[Token(Token = "0x6004257")]
	[Address(RVA = "0x218A9A0", Offset = "0x2188FA0", VA = "0x18218A9A0", Slot = "156")]
	protected override void OnFinisherKill(Vector3 direction, bool launch, bool decapitate)
	{
	}

	[Token(Token = "0x6004258")]
	[Address(RVA = "0x21858B0", Offset = "0x2183EB0", VA = "0x1821858B0")]
	private void DetachHead()
	{
	}

	[Token(Token = "0x6004259")]
	[Address(RVA = "0x2185530", Offset = "0x2183B30", VA = "0x182185530")]
	[PunRPC]
	public void DetachHeadRPC(Vector3 launch, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600425A")]
	[Address(RVA = "0x218B2E0", Offset = "0x21898E0", VA = "0x18218B2E0")]
	[IteratorStateMachine(typeof(_003CPlayDecapitationBlood_003Ed__156))]
	private IEnumerator PlayDecapitationBlood()
	{
		return null;
	}

	[Token(Token = "0x600425B")]
	[Address(RVA = "0x2186F40", Offset = "0x2185540", VA = "0x182186F40")]
	private Vector2 GetLookAngle(Vector3 target)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600425C")]
	[Address(RVA = "0x2188600", Offset = "0x2186C00", VA = "0x182188600")]
	protected void LateUpdateHeadPosition(Vector3 position)
	{
	}

	[Token(Token = "0x600425D")]
	[Address(RVA = "0x2188CF0", Offset = "0x21872F0", VA = "0x182188CF0")]
	protected void LateUpdateHead(BaseCharacter target)
	{
	}

	[Token(Token = "0x600425E")]
	[Address(RVA = "0x2191CF0", Offset = "0x21902F0", VA = "0x182191CF0", Slot = "184")]
	protected override void Update()
	{
	}

	[Token(Token = "0x600425F")]
	[Address(RVA = "0x2186710", Offset = "0x2184D10", VA = "0x182186710", Slot = "113")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x6004260")]
	[Address(RVA = "0x2190DF0", Offset = "0x218F3F0", VA = "0x182190DF0")]
	private static void UpdateHandHurtbox(Collider hurtbox, BaseHitbox hitbox, float normalRadius, bool grabbing)
	{
	}

	[Token(Token = "0x6004261")]
	[Address(RVA = "0x2189500", Offset = "0x2187B00", VA = "0x182189500", Slot = "114")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6004262")]
	[Address(RVA = "0x21863E0", Offset = "0x21849E0", VA = "0x1821863E0")]
	private void EnsureLimbMesh()
	{
	}

	[Token(Token = "0x6004263")]
	[Address(RVA = "0x2190EE0", Offset = "0x218F4E0", VA = "0x182190EE0")]
	private void UpdateLimbCuts()
	{
	}

	[Token(Token = "0x6004264")]
	[Address(RVA = "0x2186E70", Offset = "0x2185470", VA = "0x182186E70")]
	private static float GetLimbRegrowthProgress(float timeLeft, bool arm)
	{
		return default(float);
	}

	[Token(Token = "0x6004265")]
	[Address(RVA = "0x2191130", Offset = "0x218F730", VA = "0x182191130")]
	private void UpdateLimbRegrowth(bool left, bool armDisabled, bool handDisabled, float timeLeft)
	{
	}

	[Token(Token = "0x6004266")]
	[Address(RVA = "0x218D0C0", Offset = "0x218B6C0", VA = "0x18218D0C0", Slot = "198")]
	protected override void UpdateAnimationColliders()
	{
	}

	[Token(Token = "0x6004267")]
	[Address(RVA = "0x2190400", Offset = "0x218EA00", VA = "0x182190400")]
	private void UpdateDeathDissolve()
	{
	}

	[Token(Token = "0x6004268")]
	[Address(RVA = "0x21905B0", Offset = "0x218EBB0", VA = "0x1821905B0")]
	private void UpdateDeathSounds(float dissolveElapsed)
	{
	}

	[Token(Token = "0x6004269")]
	[Address(RVA = "0x218A830", Offset = "0x2188E30", VA = "0x18218A830", Slot = "112")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x600426A")]
	[Address(RVA = "0x2186900", Offset = "0x2184F00", VA = "0x182186900", Slot = "117")]
	protected override int GetFootstepPhase()
	{
		return default(int);
	}

	[Token(Token = "0x600426B")]
	[Address(RVA = "0x21871A0", Offset = "0x21857A0", VA = "0x1821871A0")]
	protected string GetPlayingRunAnimation()
	{
		return null;
	}

	[Token(Token = "0x600426C")]
	[Address(RVA = "0x2184990", Offset = "0x2182F90", VA = "0x182184990", Slot = "107")]
	protected override void CheckGround()
	{
	}

	[Token(Token = "0x600426D")]
	[Address(RVA = "0x21922F0", Offset = "0x21908F0", VA = "0x1821922F0")]
	public BasicTitan()
	{
	}
}
