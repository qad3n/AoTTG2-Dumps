// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Human
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/Human.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Human.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Controllers;
using CustomSkins;
using Il2CppDummyDll;
using Map;
using Photon.Pun;
using Photon.Realtime;
using Settings;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x20004FC")]
internal class Human : BaseCharacter
{
	[Token(Token = "0x20004FF")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__174 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40016B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40016B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40016B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Human _003C_003E4__this;

		[Token(Token = "0x170009CB")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003507")]
			[Address(RVA = "0x41DE970", Offset = "0x41DE970", VA = "0x41DE970", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009CC")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003509")]
			[Address(RVA = "0x41DE9C0", Offset = "0x41DE9C0", VA = "0x41DE9C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003504")]
		[Address(RVA = "0x41DE6F0", Offset = "0x41DE6F0", VA = "0x41DE6F0")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__174(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003505")]
		[Address(RVA = "0x41DE710", Offset = "0x41DE710", VA = "0x41DE710", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003506")]
		[Address(RVA = "0x41DE720", Offset = "0x41DE720", VA = "0x41DE720", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003508")]
		[Address(RVA = "0x41DE980", Offset = "0x41DE980", VA = "0x41DE980", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000500")]
	[CompilerGenerated]
	private sealed class _003CWaitAndMount_003Ed__132 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40016B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40016B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40016B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Human _003C_003E4__this;

		[Token(Token = "0x40016B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int mapObjectID;

		[Token(Token = "0x40016B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string transformName;

		[Token(Token = "0x40016BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Vector3 positionOffset;

		[Token(Token = "0x40016BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		public Vector3 rotationOffset;

		[Token(Token = "0x170009CD")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600350D")]
			[Address(RVA = "0x41DEAA0", Offset = "0x41DEAA0", VA = "0x41DEAA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009CE")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600350F")]
			[Address(RVA = "0x41DEAF0", Offset = "0x41DEAF0", VA = "0x41DEAF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600350A")]
		[Address(RVA = "0x41DE9D0", Offset = "0x41DE9D0", VA = "0x41DE9D0")]
		[DebuggerHidden]
		public _003CWaitAndMount_003Ed__132(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600350B")]
		[Address(RVA = "0x41DE9F0", Offset = "0x41DE9F0", VA = "0x41DE9F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600350C")]
		[Address(RVA = "0x41DEA00", Offset = "0x41DEA00", VA = "0x41DEA00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600350E")]
		[Address(RVA = "0x41DEAB0", Offset = "0x41DEAB0", VA = "0x41DEAB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000501")]
	[CompilerGenerated]
	private sealed class _003CWaitAndTransformFromShifter_003Ed__161 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40016BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40016BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40016BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Human _003C_003E4__this;

		[Token(Token = "0x40016BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public float previousHumanGas;

		[Token(Token = "0x40016C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public BaseUseable previousHumanWeapon;

		[Token(Token = "0x170009CF")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003513")]
			[Address(RVA = "0x41DEE10", Offset = "0x41DEE10", VA = "0x41DEE10", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009D0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003515")]
			[Address(RVA = "0x41DEE60", Offset = "0x41DEE60", VA = "0x41DEE60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003510")]
		[Address(RVA = "0x41DEB00", Offset = "0x41DEB00", VA = "0x41DEB00")]
		[DebuggerHidden]
		public _003CWaitAndTransformFromShifter_003Ed__161(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003511")]
		[Address(RVA = "0x41DEB20", Offset = "0x41DEB20", VA = "0x41DEB20", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003512")]
		[Address(RVA = "0x41DEB30", Offset = "0x41DEB30", VA = "0x41DEB30", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003514")]
		[Address(RVA = "0x41DEE20", Offset = "0x41DEE20", VA = "0x41DEE20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400163A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public HumanComponentCache HumanCache;

	[Token(Token = "0x400163B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	public BaseUseable Special;

	[Token(Token = "0x400163C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	public BaseUseable Weapon;

	[Token(Token = "0x400163D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	public HookUseable HookLeft;

	[Token(Token = "0x400163E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	public HookUseable HookRight;

	[Token(Token = "0x400163F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	public HumanMountState MountState;

	[Token(Token = "0x4001640")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11C")]
	public HumanCarryState CarryState;

	[Token(Token = "0x4001641")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	public Horse Horse;

	[Token(Token = "0x4001642")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	public bool AllowHorse;

	[Token(Token = "0x4001643")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x129")]
	public bool AllowSkin;

	[Token(Token = "0x4001644")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	public HumanSetup Setup;

	[Token(Token = "0x4001645")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	public HumanStats Stats;

	[Token(Token = "0x4001646")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	public bool FinishSetup;

	[Token(Token = "0x4001647")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private HumanCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x4001648")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static LayerMask AimMask;

	[Token(Token = "0x4001649")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public static LayerMask ClipMask;

	[Token(Token = "0x400164A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private Dictionary<Renderer, Material> FPSMaterials;

	[Token(Token = "0x400164B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private HumanState _state;

	[Token(Token = "0x400164C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	public string CurrentSpecial;

	[Token(Token = "0x400164D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	public BaseTitan Grabber;

	[Token(Token = "0x400164E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	public Transform GrabHand;

	[Token(Token = "0x400164F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	public Human Carrier;

	[Token(Token = "0x4001650")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	public Transform CarryBack;

	[Token(Token = "0x4001651")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	public Human BackHuman;

	[Token(Token = "0x4001652")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	public Vector3 CarryVelocity;

	[Token(Token = "0x4001653")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	public MapObject MountedMapObject;

	[Token(Token = "0x4001654")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	public Transform MountedTransform;

	[Token(Token = "0x4001655")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	public Vector3 MountedPositionOffset;

	[Token(Token = "0x4001656")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1BC")]
	public Vector3 MountedRotationOffset;

	[Token(Token = "0x4001657")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	public Vector3 _lastMountedPosition;

	[Token(Token = "0x4001658")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D4")]
	public Vector3 _mountedVelocity;

	[Token(Token = "0x4001659")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	public bool CancelHookLeftKey;

	[Token(Token = "0x400165A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E1")]
	public bool CancelHookRightKey;

	[Token(Token = "0x400165B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E2")]
	public bool CancelHookBothKey;

	[Token(Token = "0x400165C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E3")]
	public bool CanDodge;

	[Token(Token = "0x400165D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E4")]
	public bool IsInvincible;

	[Token(Token = "0x400165E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	public float InvincibleTimeLeft;

	[Token(Token = "0x400165F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1EC")]
	public bool CanMountedAttack;

	[Token(Token = "0x4001660")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1ED")]
	public bool InMountedCombat;

	[Token(Token = "0x4001661")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1EE")]
	public bool IsAttackableState;

	[Token(Token = "0x4001662")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1EF")]
	public bool IsRefillable;

	[Token(Token = "0x4001663")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F0")]
	private object[] _lastMountMessage;

	[Token(Token = "0x4001664")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F8")]
	private int _lastCarryRPCSender;

	[Token(Token = "0x4001665")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1FC")]
	private float _grabIFrames;

	[Token(Token = "0x4001666")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x200")]
	private bool _bladeTrailActive;

	[Token(Token = "0x4001667")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x204")]
	private int _bladeFireState;

	[Token(Token = "0x4001668")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x208")]
	private bool _buff1Active;

	[Token(Token = "0x4001669")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x209")]
	private bool _buff2Active;

	[Token(Token = "0x400166A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20A")]
	private bool _fire1Active;

	[Token(Token = "0x400166B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20C")]
	public float ReelInAxis;

	[Token(Token = "0x400166C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x210")]
	public float ReelOutAxis;

	[Token(Token = "0x400166D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x214")]
	public float ReelOutScrollTimeLeft;

	[Token(Token = "0x400166E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x218")]
	public float TargetMagnitude;

	[Token(Token = "0x400166F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21C")]
	public bool IsWalk;

	[Token(Token = "0x4001670")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21D")]
	private bool _pivot;

	[Token(Token = "0x4001671")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21E")]
	private bool _pivotLeft;

	[Token(Token = "0x4001672")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21F")]
	private bool _pivotRight;

	[Token(Token = "0x4001673")]
	private const float MaxVelocityChange = 10f;

	[Token(Token = "0x4001674")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x220")]
	private float _originalDashSpeed;

	[Token(Token = "0x4001675")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x224")]
	public Quaternion _targetRotation;

	[Token(Token = "0x4001676")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x234")]
	private float _wallRunTime;

	[Token(Token = "0x4001677")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x238")]
	private bool _wallJump;

	[Token(Token = "0x4001678")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x239")]
	private bool _wallSlide;

	[Token(Token = "0x4001679")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x23A")]
	private bool _canWallSlideJump;

	[Token(Token = "0x400167A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x23C")]
	private Vector3 _wallSlideGround;

	[Token(Token = "0x400167B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x248")]
	private bool _launchLeft;

	[Token(Token = "0x400167C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x249")]
	private bool _launchRight;

	[Token(Token = "0x400167D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24C")]
	private float _launchLeftTime;

	[Token(Token = "0x400167E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x250")]
	private float _launchRightTime;

	[Token(Token = "0x400167F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x254")]
	private bool _needLean;

	[Token(Token = "0x4001680")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x255")]
	private bool _almostSingleHook;

	[Token(Token = "0x4001681")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x256")]
	private bool _leanLeft;

	[Token(Token = "0x4001682")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x257")]
	private bool _isTrigger;

	[Token(Token = "0x4001683")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x258")]
	private bool _useFixedUpdateClipping;

	[Token(Token = "0x4001684")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x25C")]
	private Vector3 _lastPosition;

	[Token(Token = "0x4001685")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x268")]
	private Vector3 _lastVelocity;

	[Token(Token = "0x4001686")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x274")]
	private Vector3 _currentVelocity;

	[Token(Token = "0x4001687")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static LayerMask TitanDetectionMask;

	[Token(Token = "0x4001688")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x280")]
	private LayerMask HumanGroundMaskLayers;

	[Token(Token = "0x4001689")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x284")]
	private Quaternion _oldHeadRotation;

	[Token(Token = "0x400168A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x294")]
	public Vector2 LastGoodHeadAngle;

	[Token(Token = "0x400168B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29C")]
	public Quaternion? LateUpdateHeadRotation;

	[Token(Token = "0x400168C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2B0")]
	public Quaternion? LateUpdateHeadRotationRecv;

	[Token(Token = "0x400168D")]
	private const float CarryLagCompensationDistance = 100f;

	[Token(Token = "0x400168E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C8")]
	public string StandAnimation;

	[Token(Token = "0x400168F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2D0")]
	public string AttackAnimation;

	[Token(Token = "0x4001690")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2D8")]
	public bool _gunArmAim;

	[Token(Token = "0x4001691")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2E0")]
	public string RunAnimation;

	[Token(Token = "0x4001692")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2E8")]
	public string WalkAnimation;

	[Token(Token = "0x4001693")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2F0")]
	public bool _attackRelease;

	[Token(Token = "0x4001694")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2F1")]
	public bool _attackButtonRelease;

	[Token(Token = "0x4001695")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2F2")]
	public bool _reelInWaitForRelease;

	[Token(Token = "0x4001696")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2F4")]
	private float _stateTimeLeft;

	[Token(Token = "0x4001697")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2F8")]
	private float _dashTimeLeft;

	[Token(Token = "0x4001698")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2FC")]
	private bool _cancelGasDisable;

	[Token(Token = "0x4001699")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2FD")]
	private bool _animationStopped;

	[Token(Token = "0x400169A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2FE")]
	private bool _needFinishReload;

	[Token(Token = "0x400169B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x300")]
	private float _reloadTimeLeft;

	[Token(Token = "0x400169C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x304")]
	private float _reloadCooldownLeft;

	[Token(Token = "0x400169D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x308")]
	private string _reloadAnimation;

	[Token(Token = "0x400169E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x310")]
	private float _dashCooldownLeft;

	[Token(Token = "0x400169F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x318")]
	private Human _hookHuman;

	[Token(Token = "0x40016A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x320")]
	private bool _hookHumanLeft;

	[Token(Token = "0x40016A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x324")]
	private float _hookHumanConstantTimeLeft;

	[Token(Token = "0x40016A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x328")]
	private bool _isReelingOut;

	[Token(Token = "0x40016A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x330")]
	private Dictionary<BaseTitan, float> _lastNapeHitTimes;

	[Token(Token = "0x40016A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x338")]
	private Material _originalSmokeMaterial;

	[Token(Token = "0x40016A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x340")]
	public IHumanController Controller;

	[Token(Token = "0x40016A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x348")]
	public InGameCharacterSettings Settings;

	[Token(Token = "0x40016A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x350")]
	private Collider _lastHit;

	[Token(Token = "0x40016A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x358")]
	private Vector3 _lastDirection;

	[Token(Token = "0x40016A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x364")]
	private float _collisionTimer;

	[Token(Token = "0x40016AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x368")]
	private float _collisionInterval;

	[Token(Token = "0x170009C7")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x600344C")]
		[Address(RVA = "0x41B9420", Offset = "0x41B9420", VA = "0x41B9420", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009C8")]
	public bool Pivot
	{
		[Token(Token = "0x600344D")]
		[Address(RVA = "0x41B9760", Offset = "0x41B9760", VA = "0x41B9760")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009C9")]
	public override LayerMask GroundMask
	{
		[Token(Token = "0x600344E")]
		[Address(RVA = "0x41B9770", Offset = "0x41B9770", VA = "0x41B9770", Slot = "60")]
		get
		{
			return default(LayerMask);
		}
	}

	[Token(Token = "0x170009CA")]
	public HumanState State
	{
		[Token(Token = "0x60034FA")]
		[Address(RVA = "0x41DD9B0", Offset = "0x41DD9B0", VA = "0x41DD9B0")]
		get
		{
			return default(HumanState);
		}
		[Token(Token = "0x60034FB")]
		[Address(RVA = "0x41BC0B0", Offset = "0x41BC0B0", VA = "0x41BC0B0")]
		set
		{
		}
	}

	[Token(Token = "0x600344F")]
	[Address(RVA = "0x41B9780", Offset = "0x41B9780", VA = "0x41B9780", Slot = "69")]
	protected override void CreateDetection()
	{
	}

	[Token(Token = "0x6003450")]
	[Address(RVA = "0x41B9820", Offset = "0x41B9820", VA = "0x41B9820")]
	public void DieChangeCharacter()
	{
	}

	[Token(Token = "0x6003451")]
	[Address(RVA = "0x41B98E0", Offset = "0x41B98E0", VA = "0x41B98E0")]
	public void IsChangingPosition()
	{
	}

	[Token(Token = "0x6003452")]
	[Address(RVA = "0x41B98F0", Offset = "0x41B98F0", VA = "0x41B98F0")]
	[PunRPC]
	public void BlowAwayRPC(Vector3 force, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003453")]
	[Address(RVA = "0x41B9930", Offset = "0x41B9930", VA = "0x41B9930", Slot = "83")]
	[PunRPC]
	public override void MarkDeadRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003454")]
	[Address(RVA = "0x41B9C10", Offset = "0x41B9C10", VA = "0x41B9C10", Slot = "110")]
	[PunRPC]
	public virtual void UngrabRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003455")]
	[Address(RVA = "0x41B9F00", Offset = "0x41B9F00", VA = "0x41B9F00")]
	public Ray GetAimRayAfterHuman()
	{
		return default(Ray);
	}

	[Token(Token = "0x6003456")]
	[Address(RVA = "0x41BA270", Offset = "0x41BA270", VA = "0x41BA270")]
	public Ray GetAimRayAfterHumanCheap()
	{
		return default(Ray);
	}

	[Token(Token = "0x6003457")]
	[Address(RVA = "0x41BA470", Offset = "0x41BA470", VA = "0x41BA470", Slot = "66")]
	public override Vector3 GetAimPoint()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003458")]
	[Address(RVA = "0x41BA690", Offset = "0x41BA690", VA = "0x41BA690")]
	public Vector3 GetAimPoint(Vector3 origin, Vector3 direction)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003459")]
	[Address(RVA = "0x41BA7A0", Offset = "0x41BA7A0", VA = "0x41BA7A0")]
	private Vector2 GetLookAngle(Vector3 target)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600345A")]
	[Address(RVA = "0x41BA9C0", Offset = "0x41BA9C0", VA = "0x41BA9C0")]
	public bool CanJump()
	{
		return default(bool);
	}

	[Token(Token = "0x600345B")]
	[Address(RVA = "0x41BAAB0", Offset = "0x41BAAB0", VA = "0x41BAAB0")]
	public void Jump()
	{
	}

	[Token(Token = "0x600345C")]
	[Address(RVA = "0x41BADD0", Offset = "0x41BADD0", VA = "0x41BADD0")]
	public void Mount(Transform transform, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack = false)
	{
	}

	[Token(Token = "0x600345D")]
	[Address(RVA = "0x41BB350", Offset = "0x41BB350", VA = "0x41BB350")]
	public void Mount(MapObject mapObject, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack = false)
	{
	}

	[Token(Token = "0x600345E")]
	[Address(RVA = "0x41BAFF0", Offset = "0x41BAFF0", VA = "0x41BAFF0")]
	public void Mount(MapObject mapObject, string transformName, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack = false)
	{
	}

	[Token(Token = "0x600345F")]
	[Address(RVA = "0x41BB810", Offset = "0x41BB810", VA = "0x41BB810")]
	[PunRPC]
	public void MountRPC(int mapObjectID, string transformName, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003460")]
	[Address(RVA = "0x41BBBE0", Offset = "0x41BBBE0", VA = "0x41BBBE0")]
	[IteratorStateMachine(typeof(_003CWaitAndMount_003Ed__132))]
	private IEnumerator WaitAndMount(int mapObjectID, string transformName, Vector3 positionOffset, Vector3 rotationOffset)
	{
		return null;
	}

	[Token(Token = "0x6003461")]
	[Address(RVA = "0x41BB9B0", Offset = "0x41BB9B0", VA = "0x41BB9B0")]
	private void FinishMount(int mapObjectID, string transformName, Vector3 positionOffset, Vector3 rotationOffset)
	{
	}

	[Token(Token = "0x6003462")]
	[Address(RVA = "0x41BB3D0", Offset = "0x41BB3D0", VA = "0x41BB3D0")]
	public void Unmount(bool immediate)
	{
	}

	[Token(Token = "0x6003463")]
	[Address(RVA = "0x41BBCB0", Offset = "0x41BBCB0", VA = "0x41BBCB0")]
	[PunRPC]
	public void UnmountRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003464")]
	[Address(RVA = "0x41BBD30", Offset = "0x41BBD30", VA = "0x41BBD30")]
	public void MountHorse()
	{
	}

	[Token(Token = "0x6003465")]
	[Address(RVA = "0x41BBF90", Offset = "0x41BBF90", VA = "0x41BBF90")]
	public void Dodge(float targetAngle)
	{
	}

	[Token(Token = "0x6003466")]
	[Address(RVA = "0x41BC0D0", Offset = "0x41BC0D0", VA = "0x41BC0D0")]
	public void DodgeWall()
	{
	}

	[Token(Token = "0x6003467")]
	[Address(RVA = "0x41BC170", Offset = "0x41BC170", VA = "0x41BC170")]
	public void Dash(float targetAngle)
	{
	}

	[Token(Token = "0x6003468")]
	[Address(RVA = "0x41BC5E0", Offset = "0x41BC5E0", VA = "0x41BC5E0")]
	public bool DashVertical(float targetAngle, Vector3 direction, [Optional] Vector3? percentPower)
	{
		return default(bool);
	}

	[Token(Token = "0x6003469")]
	[Address(RVA = "0x41BABC0", Offset = "0x41BABC0", VA = "0x41BABC0")]
	public void Idle()
	{
	}

	[Token(Token = "0x600346A")]
	[Address(RVA = "0x41BCA70", Offset = "0x41BCA70", VA = "0x41BCA70")]
	public void Grab(BaseTitan grabber, string type)
	{
	}

	[Token(Token = "0x600346B")]
	[Address(RVA = "0x41B9CC0", Offset = "0x41B9CC0", VA = "0x41B9CC0")]
	public void Ungrab(bool notifyTitan, bool idle, bool breakArm = false)
	{
	}

	[Token(Token = "0x600346C")]
	[Address(RVA = "0x41BCF30", Offset = "0x41BCF30", VA = "0x41BCF30")]
	public void Carry(Human carrier, Transform back)
	{
	}

	[Token(Token = "0x600346D")]
	[Address(RVA = "0x41BD160", Offset = "0x41BD160", VA = "0x41BD160")]
	[PunRPC]
	public void CarryRPC(int initiatorViewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600346E")]
	[Address(RVA = "0x41BD5E0", Offset = "0x41BD5E0", VA = "0x41BD5E0")]
	[PunRPC]
	public void ConfirmCarryRPC(int initiatorViewId, int targetViewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600346F")]
	[Address(RVA = "0x41BD770", Offset = "0x41BD770", VA = "0x41BD770")]
	public void Uncarry()
	{
	}

	[Token(Token = "0x6003470")]
	[Address(RVA = "0x41BD930", Offset = "0x41BD930", VA = "0x41BD930", Slot = "111")]
	[PunRPC]
	public virtual void UncarryRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003471")]
	[Address(RVA = "0x41B9B50", Offset = "0x41B9B50", VA = "0x41B9B50")]
	public void SetCarrierTriggerCollider(bool trigger)
	{
	}

	[Token(Token = "0x6003472")]
	[Address(RVA = "0x41BD890", Offset = "0x41BD890", VA = "0x41BD890")]
	public void SetVelocityFromCarrier()
	{
	}

	[Token(Token = "0x6003473")]
	[Address(RVA = "0x41BDA00", Offset = "0x41BDA00", VA = "0x41BDA00")]
	public Human GetHumanAlongRay(Ray ray, float distance)
	{
		return null;
	}

	[Token(Token = "0x6003474")]
	[Address(RVA = "0x41BDD90", Offset = "0x41BDD90", VA = "0x41BDD90")]
	public bool IsValidCarryTarget(Human human, float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x6003475")]
	[Address(RVA = "0x41BDFF0", Offset = "0x41BDFF0", VA = "0x41BDFF0")]
	public bool IsCarryable(Human human)
	{
		return default(bool);
	}

	[Token(Token = "0x6003476")]
	[Address(RVA = "0x41BD390", Offset = "0x41BD390", VA = "0x41BD390")]
	private bool IsCarryableBy(Human initiator)
	{
		return default(bool);
	}

	[Token(Token = "0x6003477")]
	[Address(RVA = "0x41BE0E0", Offset = "0x41BE0E0", VA = "0x41BE0E0")]
	public Human GetCarryOption(float distance)
	{
		return null;
	}

	[Token(Token = "0x6003478")]
	[Address(RVA = "0x41BE480", Offset = "0x41BE480", VA = "0x41BE480")]
	public void StartCarrySpecial(Human target)
	{
	}

	[Token(Token = "0x6003479")]
	[Address(RVA = "0x41BE630", Offset = "0x41BE630", VA = "0x41BE630")]
	public void StopCarrySpecial()
	{
	}

	[Token(Token = "0x600347A")]
	[Address(RVA = "0x41BE5B0", Offset = "0x41BE5B0", VA = "0x41BE5B0")]
	public void ClearAllActionsForSpecial()
	{
	}

	[Token(Token = "0x600347B")]
	[Address(RVA = "0x41BE700", Offset = "0x41BE700", VA = "0x41BE700")]
	public void SpecialActionState(float time)
	{
	}

	[Token(Token = "0x600347C")]
	[Address(RVA = "0x41BE730", Offset = "0x41BE730", VA = "0x41BE730")]
	public void TransformShifter(string shifter, float liveTime)
	{
	}

	[Token(Token = "0x600347D")]
	[Address(RVA = "0x41BE960", Offset = "0x41BE960", VA = "0x41BE960")]
	[IteratorStateMachine(typeof(_003CWaitAndTransformFromShifter_003Ed__161))]
	public IEnumerator WaitAndTransformFromShifter(float previousHumanGas, BaseUseable previousHumanWeapon)
	{
		return null;
	}

	[Token(Token = "0x600347E")]
	[Address(RVA = "0x41BEA00", Offset = "0x41BEA00", VA = "0x41BEA00")]
	public void Reload()
	{
	}

	[Token(Token = "0x600347F")]
	[Address(RVA = "0x41BF090", Offset = "0x41BF090", VA = "0x41BF090")]
	protected void FinishReload()
	{
	}

	[Token(Token = "0x6003480")]
	[Address(RVA = "0x41BF200", Offset = "0x41BF200", VA = "0x41BF200")]
	public bool Refill()
	{
		return default(bool);
	}

	[Token(Token = "0x6003481")]
	[Address(RVA = "0x41BF370", Offset = "0x41BF370", VA = "0x41BF370")]
	public bool SupplySpawnableRefill()
	{
		return default(bool);
	}

	[Token(Token = "0x6003482")]
	[Address(RVA = "0x41BF490", Offset = "0x41BF490", VA = "0x41BF490")]
	public bool NeedRefill(bool isGasTank)
	{
		return default(bool);
	}

	[Token(Token = "0x6003483")]
	[Address(RVA = "0x41BF5D0", Offset = "0x41BF5D0", VA = "0x41BF5D0")]
	public void FinishRefill()
	{
	}

	[Token(Token = "0x6003484")]
	[Address(RVA = "0x41BF670", Offset = "0x41BF670", VA = "0x41BF670", Slot = "70")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x6003485")]
	[Address(RVA = "0x41BFA10", Offset = "0x41BFA10", VA = "0x41BFA10", Slot = "71")]
	public override void ForceAnimation(string animation, float fade)
	{
	}

	[Token(Token = "0x6003486")]
	[Address(RVA = "0x41BF990", Offset = "0x41BF990", VA = "0x41BF990")]
	public void EmoteAnimation(string animation)
	{
	}

	[Token(Token = "0x6003487")]
	[Address(RVA = "0x41BF950", Offset = "0x41BF950", VA = "0x41BF950")]
	public bool CanEmote()
	{
		return default(bool);
	}

	[Token(Token = "0x6003488")]
	[Address(RVA = "0x41BFAA0", Offset = "0x41BFAA0", VA = "0x41BFAA0", Slot = "67")]
	public override Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x6003489")]
	[Address(RVA = "0x41BFAC0", Offset = "0x41BFAC0", VA = "0x41BFAC0", Slot = "68")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x600348A")]
	[Address(RVA = "0x41BFB40", Offset = "0x41BFB40", VA = "0x41BFB40", Slot = "74")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__174))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x600348B")]
	[Address(RVA = "0x41BFBB0", Offset = "0x41BFBB0", VA = "0x41BFBB0")]
	public void Init(bool ai, string team, InGameCharacterSettings settings)
	{
	}

	[Token(Token = "0x600348C")]
	[Address(RVA = "0x41BFC80", Offset = "0x41BFC80", VA = "0x41BFC80")]
	public void ReloadHuman(InGameCharacterSettings settings)
	{
	}

	[Token(Token = "0x600348D")]
	[Address(RVA = "0x41C3090", Offset = "0x41C3090", VA = "0x41C3090", Slot = "90")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600348E")]
	[Address(RVA = "0x41C3490", Offset = "0x41C3490", VA = "0x41C3490", Slot = "93")]
	protected override void Start()
	{
	}

	[Token(Token = "0x600348F")]
	[Address(RVA = "0x41C3A40", Offset = "0x41C3A40", VA = "0x41C3A40", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6003490")]
	[Address(RVA = "0x41C0050", Offset = "0x41C0050", VA = "0x41C0050")]
	private string GetNetworkSetupJson()
	{
		return null;
	}

	[Token(Token = "0x6003491")]
	[Address(RVA = "0x41C3E10", Offset = "0x41C3E10", VA = "0x41C3E10", Slot = "80")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6003492")]
	[Address(RVA = "0x41C4040", Offset = "0x41C4040", VA = "0x41C4040", Slot = "81")]
	[PunRPC]
	public override void GetDamagedRPC(string name, int damage)
	{
	}

	[Token(Token = "0x6003493")]
	[Address(RVA = "0x41C4060", Offset = "0x41C4060", VA = "0x41C4060", Slot = "79")]
	public override void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
	}

	[Token(Token = "0x6003494")]
	[Address(RVA = "0x41C5740", Offset = "0x41C5740", VA = "0x41C5740")]
	protected void Update()
	{
	}

	[Token(Token = "0x6003495")]
	[Address(RVA = "0x41C73C0", Offset = "0x41C73C0", VA = "0x41C73C0", Slot = "102")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x6003496")]
	[Address(RVA = "0x41CE3D0", Offset = "0x41CE3D0", VA = "0x41CE3D0")]
	private bool CanStockDueToBL()
	{
		return default(bool);
	}

	[Token(Token = "0x6003497")]
	[Address(RVA = "0x41CE210", Offset = "0x41CE210", VA = "0x41CE210")]
	private bool ValidStockAttacks()
	{
		return default(bool);
	}

	[Token(Token = "0x6003498")]
	[Address(RVA = "0x41BCEE0", Offset = "0x41BCEE0", VA = "0x41BCEE0")]
	public bool HasGrabImmunity()
	{
		return default(bool);
	}

	[Token(Token = "0x6003499")]
	[Address(RVA = "0x41D0CB0", Offset = "0x41D0CB0", VA = "0x41D0CB0")]
	public void StartGrabImmunity(float duration)
	{
	}

	[Token(Token = "0x600349A")]
	[Address(RVA = "0x41C6F90", Offset = "0x41C6F90", VA = "0x41C6F90")]
	private void UpdateIFrames()
	{
	}

	[Token(Token = "0x600349B")]
	[Address(RVA = "0x41C7020", Offset = "0x41C7020", VA = "0x41C7020")]
	private void UpdateBladeFire()
	{
	}

	[Token(Token = "0x600349C")]
	[Address(RVA = "0x41D0DF0", Offset = "0x41D0DF0", VA = "0x41D0DF0")]
	private void lookAtTarget(Vector3 target)
	{
	}

	[Token(Token = "0x600349D")]
	[Address(RVA = "0x41D11C0", Offset = "0x41D11C0", VA = "0x41D11C0")]
	protected void LateUpdateHeadPosition(Vector3 position)
	{
	}

	[Token(Token = "0x600349E")]
	[Address(RVA = "0x41D1780", Offset = "0x41D1780", VA = "0x41D1780", Slot = "103")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x600349F")]
	[Address(RVA = "0x41D3010", Offset = "0x41D3010", VA = "0x41D3010", Slot = "105")]
	protected override void LateUpdateFPS()
	{
	}

	[Token(Token = "0x60034A0")]
	[Address(RVA = "0x41D34B0", Offset = "0x41D34B0", VA = "0x41D34B0")]
	protected void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x60034A1")]
	[Address(RVA = "0x41D4E10", Offset = "0x41D4E10", VA = "0x41D4E10")]
	protected void OnCollisionStay(Collision collision)
	{
	}

	[Token(Token = "0x60034A2")]
	[Address(RVA = "0x41CD590", Offset = "0x41CD590", VA = "0x41CD590")]
	private void FixedUpdateWallSlide()
	{
	}

	[Token(Token = "0x60034A3")]
	[Address(RVA = "0x41D5530", Offset = "0x41D5530", VA = "0x41D5530")]
	private void EndWallSlide()
	{
	}

	[Token(Token = "0x60034A4")]
	[Address(RVA = "0x41D2A80", Offset = "0x41D2A80", VA = "0x41D2A80")]
	private void LateUpdateReelOut()
	{
	}

	[Token(Token = "0x60034A5")]
	[Address(RVA = "0x41CC7D0", Offset = "0x41CC7D0", VA = "0x41CC7D0")]
	private bool FixedUpdateLaunch(bool left)
	{
		return default(bool);
	}

	[Token(Token = "0x60034A6")]
	[Address(RVA = "0x41CDA80", Offset = "0x41CDA80", VA = "0x41CDA80")]
	private void FixedUpdatePivot(Vector3 position)
	{
	}

	[Token(Token = "0x60034A7")]
	[Address(RVA = "0x41CD050", Offset = "0x41CD050", VA = "0x41CD050")]
	private bool IsStock(bool pivot)
	{
		return default(bool);
	}

	[Token(Token = "0x60034A8")]
	[Address(RVA = "0x41CE460", Offset = "0x41CE460", VA = "0x41CE460")]
	private void FixedUpdateSetHookedDirection()
	{
	}

	[Token(Token = "0x60034A9")]
	[Address(RVA = "0x41CEFD0", Offset = "0x41CEFD0", VA = "0x41CEFD0")]
	private void FixedUpdateBodyLean()
	{
	}

	[Token(Token = "0x60034AA")]
	[Address(RVA = "0x41CC740", Offset = "0x41CC740", VA = "0x41CC740")]
	private void FixedUpdateUseables()
	{
	}

	[Token(Token = "0x60034AB")]
	[Address(RVA = "0x41CC390", Offset = "0x41CC390", VA = "0x41CC390")]
	public void FixedUpdateLookTitan()
	{
	}

	[Token(Token = "0x60034AC")]
	[Address(RVA = "0x41CF640", Offset = "0x41CF640", VA = "0x41CF640")]
	private void FixedUpdateClippingCheck()
	{
	}

	[Token(Token = "0x60034AD")]
	[Address(RVA = "0x41D19D0", Offset = "0x41D19D0", VA = "0x41D19D0")]
	private void LateUpdateTilt()
	{
	}

	[Token(Token = "0x60034AE")]
	[Address(RVA = "0x41D2B90", Offset = "0x41D2B90", VA = "0x41D2B90")]
	private void LateUpdateGun()
	{
	}

	[Token(Token = "0x60034AF")]
	[Address(RVA = "0x41D59B0", Offset = "0x41D59B0", VA = "0x41D59B0")]
	private void GunHeadMovement()
	{
	}

	[Token(Token = "0x60034B0")]
	[Address(RVA = "0x41D59C0", Offset = "0x41D59C0", VA = "0x41D59C0")]
	private void LeftArmAim(Vector3 target)
	{
	}

	[Token(Token = "0x60034B1")]
	[Address(RVA = "0x41D5BD0", Offset = "0x41D5BD0", VA = "0x41D5BD0")]
	private void RightArmAim(Vector3 target)
	{
	}

	[Token(Token = "0x60034B2")]
	[Address(RVA = "0x41D5DF0", Offset = "0x41D5DF0", VA = "0x41D5DF0", Slot = "92")]
	protected override void SetColliders()
	{
	}

	[Token(Token = "0x60034B3")]
	[Address(RVA = "0x41D5F90", Offset = "0x41D5F90", VA = "0x41D5F90")]
	[PunRPC]
	public void SetupRPC(string customSetJson, int humanWeapon, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034B4")]
	[Address(RVA = "0x41D6740", Offset = "0x41D6740", VA = "0x41D6740")]
	protected void SetupWeapon(int humanWeapon)
	{
	}

	[Token(Token = "0x60034B5")]
	[Address(RVA = "0x41D7320", Offset = "0x41D7320", VA = "0x41D7320")]
	protected void SetupItems()
	{
	}

	[Token(Token = "0x60034B6")]
	[Address(RVA = "0x41D77B0", Offset = "0x41D77B0", VA = "0x41D77B0")]
	public void SetSpecial(string special)
	{
	}

	[Token(Token = "0x60034B7")]
	[Address(RVA = "0x41C0280", Offset = "0x41C0280", VA = "0x41C0280")]
	protected void LoadSkin([Optional] Player player)
	{
	}

	[Token(Token = "0x60034B8")]
	[Address(RVA = "0x41D7D20", Offset = "0x41D7D20", VA = "0x41D7D20")]
	[PunRPC]
	public void LoadSkinRPC(int horse, string url, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034B9")]
	[Address(RVA = "0x41D7F20", Offset = "0x41D7F20", VA = "0x41D7F20")]
	[PunRPC]
	public void SetHookStateRPC(bool left, int hookId, int state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034BA")]
	[Address(RVA = "0x41D8010", Offset = "0x41D8010", VA = "0x41D8010")]
	[PunRPC]
	public void SetHookingRPC(bool left, int hookId, Vector3 baseVelocity, Vector3 relativeVelocity, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034BB")]
	[Address(RVA = "0x41D8130", Offset = "0x41D8130", VA = "0x41D8130")]
	[PunRPC]
	public void SetHookedRPC(bool left, int hookId, Vector3 position, int viewId, int objectId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034BC")]
	[Address(RVA = "0x41D8250", Offset = "0x41D8250", VA = "0x41D8250")]
	[PunRPC]
	public void SetSmokeRPC(bool active, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034BD")]
	[Address(RVA = "0x41BAC20", Offset = "0x41BAC20", VA = "0x41BAC20")]
	protected void ToggleSparks(bool toggle)
	{
	}

	[Token(Token = "0x60034BE")]
	[Address(RVA = "0x41D82D0", Offset = "0x41D82D0", VA = "0x41D82D0")]
	[PunRPC]
	protected void ToggleSparksRPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034BF")]
	[Address(RVA = "0x41BEF30", Offset = "0x41BEF30", VA = "0x41BEF30")]
	public void SetThunderspears(bool hasLeft, bool hasRight)
	{
	}

	[Token(Token = "0x60034C0")]
	[Address(RVA = "0x41D8350", Offset = "0x41D8350", VA = "0x41D8350")]
	[PunRPC]
	public void SetThunderspearsRPC(bool hasLeft, bool hasRight, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034C1")]
	[Address(RVA = "0x41CCF90", Offset = "0x41CCF90", VA = "0x41CCF90")]
	public void ClearDashPerkCDs()
	{
	}

	[Token(Token = "0x60034C2")]
	[Address(RVA = "0x41D8480", Offset = "0x41D8480", VA = "0x41D8480")]
	public void OnHooked(bool left, Vector3 position)
	{
	}

	[Token(Token = "0x60034C3")]
	[Address(RVA = "0x41D8C10", Offset = "0x41D8C10", VA = "0x41D8C10")]
	public void OnHookedHuman(bool left, Vector3 position, Human human)
	{
	}

	[Token(Token = "0x60034C4")]
	[Address(RVA = "0x41BCF00", Offset = "0x41BCF00", VA = "0x41BCF00")]
	public void UnhookHuman(bool left)
	{
	}

	[Token(Token = "0x60034C5")]
	[Address(RVA = "0x41D9020", Offset = "0x41D9020", VA = "0x41D9020")]
	[PunRPC]
	public void OnHookedByHuman(int viewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034C6")]
	[Address(RVA = "0x41D9710", Offset = "0x41D9710", VA = "0x41D9710")]
	[PunRPC]
	public void OnStillHookedByHuman(int viewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034C7")]
	[Address(RVA = "0x41D9B50", Offset = "0x41D9B50", VA = "0x41D9B50")]
	public void GetStunnedByTS(Vector3 origin)
	{
	}

	[Token(Token = "0x60034C8")]
	[Address(RVA = "0x41BB650", Offset = "0x41BB650", VA = "0x41BB650")]
	public void SetInterpolation(bool interpolate)
	{
	}

	[Token(Token = "0x60034C9")]
	[Address(RVA = "0x41BB700", Offset = "0x41BB700", VA = "0x41BB700")]
	private void SetTriggerCollider(bool trigger)
	{
	}

	[Token(Token = "0x60034CA")]
	[Address(RVA = "0x41DA1F0", Offset = "0x41DA1F0", VA = "0x41DA1F0")]
	[PunRPC]
	public void SetTriggerColliderRPC(bool trigger, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034CB")]
	[Address(RVA = "0x41D5540", Offset = "0x41D5540", VA = "0x41D5540")]
	private float GetReelAxis()
	{
		return default(float);
	}

	[Token(Token = "0x60034CC")]
	[Address(RVA = "0x41D5560", Offset = "0x41D5560", VA = "0x41D5560")]
	private float GetLeanAngle(Vector3 hookPosition, bool left)
	{
		return default(float);
	}

	[Token(Token = "0x60034CD")]
	[Address(RVA = "0x41DA270", Offset = "0x41DA270", VA = "0x41DA270")]
	public bool CanBladeAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x60034CE")]
	[Address(RVA = "0x41DA2F0", Offset = "0x41DA2F0", VA = "0x41DA2F0")]
	public void StartSpecialAttack(string animation)
	{
	}

	[Token(Token = "0x60034CF")]
	[Address(RVA = "0x41DA360", Offset = "0x41DA360", VA = "0x41DA360")]
	public void ActivateBlades()
	{
	}

	[Token(Token = "0x60034D0")]
	[Address(RVA = "0x41DA420", Offset = "0x41DA420", VA = "0x41DA420")]
	public void StartBladeSwing()
	{
	}

	[Token(Token = "0x60034D1")]
	[Address(RVA = "0x41DB2F0", Offset = "0x41DB2F0", VA = "0x41DB2F0")]
	private string GetBladeAnimationMouse()
	{
		return null;
	}

	[Token(Token = "0x60034D2")]
	[Address(RVA = "0x41DAFB0", Offset = "0x41DAFB0", VA = "0x41DAFB0")]
	private string GetBladeAnimationTarget(Transform target)
	{
		return null;
	}

	[Token(Token = "0x60034D3")]
	[Address(RVA = "0x41DA970", Offset = "0x41DA970", VA = "0x41DA970")]
	private BaseTitan FindNearestTitan()
	{
		return null;
	}

	[Token(Token = "0x60034D4")]
	[Address(RVA = "0x41DB3B0", Offset = "0x41DB3B0", VA = "0x41DB3B0")]
	private Human FindNearestHuman()
	{
		return null;
	}

	[Token(Token = "0x60034D5")]
	[Address(RVA = "0x41B9A30", Offset = "0x41B9A30", VA = "0x41B9A30")]
	public void FalseAttack()
	{
	}

	[Token(Token = "0x60034D6")]
	[Address(RVA = "0x41C7170", Offset = "0x41C7170", VA = "0x41C7170")]
	public void ContinueAnimation()
	{
	}

	[Token(Token = "0x60034D7")]
	[Address(RVA = "0x41DB770", Offset = "0x41DB770", VA = "0x41DB770")]
	[PunRPC]
	public void ContinueAnimationRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034D8")]
	[Address(RVA = "0x41C7200", Offset = "0x41C7200", VA = "0x41C7200")]
	public void PauseAnimation()
	{
	}

	[Token(Token = "0x60034D9")]
	[Address(RVA = "0x41DB830", Offset = "0x41DB830", VA = "0x41DB830")]
	[PunRPC]
	public void PauseAnimationRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034DA")]
	[Address(RVA = "0x41D78F0", Offset = "0x41D78F0", VA = "0x41D78F0")]
	private void CustomAnimationSpeed()
	{
	}

	[Token(Token = "0x60034DB")]
	[Address(RVA = "0x41CD010", Offset = "0x41CD010", VA = "0x41CD010")]
	private bool HasHook()
	{
		return default(bool);
	}

	[Token(Token = "0x60034DC")]
	[Address(RVA = "0x41CD080", Offset = "0x41CD080", VA = "0x41CD080")]
	private bool IsHookedAny()
	{
		return default(bool);
	}

	[Token(Token = "0x60034DD")]
	[Address(RVA = "0x41CD0C0", Offset = "0x41CD0C0", VA = "0x41CD0C0")]
	private bool IsHookedLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x60034DE")]
	[Address(RVA = "0x41CD0E0", Offset = "0x41CD0E0", VA = "0x41CD0E0")]
	private bool IsHookedRight()
	{
		return default(bool);
	}

	[Token(Token = "0x60034DF")]
	[Address(RVA = "0x41CD1F0", Offset = "0x41CD1F0", VA = "0x41CD1F0")]
	private bool IsFrontGrounded()
	{
		return default(bool);
	}

	[Token(Token = "0x60034E0")]
	[Address(RVA = "0x41CD100", Offset = "0x41CD100", VA = "0x41CD100")]
	private bool IsPressDirectionTowardsHero()
	{
		return default(bool);
	}

	[Token(Token = "0x60034E1")]
	[Address(RVA = "0x41D54D0", Offset = "0x41D54D0", VA = "0x41D54D0")]
	private bool IsPressDirectionRelativeToWall(Vector3 wallNormal, float dotValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60034E2")]
	[Address(RVA = "0x41CD300", Offset = "0x41CD300", VA = "0x41CD300")]
	private bool IsUpFrontGrounded()
	{
		return default(bool);
	}

	[Token(Token = "0x60034E3")]
	[Address(RVA = "0x41CD420", Offset = "0x41CD420", VA = "0x41CD420")]
	public bool IsFiringThunderspear()
	{
		return default(bool);
	}

	[Token(Token = "0x60034E4")]
	[Address(RVA = "0x41D0CC0", Offset = "0x41D0CC0", VA = "0x41D0CC0")]
	private void ToggleBladeFire(int state)
	{
	}

	[Token(Token = "0x60034E5")]
	[Address(RVA = "0x41C7290", Offset = "0x41C7290", VA = "0x41C7290")]
	private void ToggleBladeTrails(bool toggle)
	{
	}

	[Token(Token = "0x60034E6")]
	[Address(RVA = "0x41BEE20", Offset = "0x41BEE20", VA = "0x41BEE20")]
	public void ToggleBlades(bool toggle)
	{
	}

	[Token(Token = "0x60034E7")]
	[Address(RVA = "0x41DB870", Offset = "0x41DB870", VA = "0x41DB870")]
	[PunRPC]
	protected void ToggleBladesRPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034E8")]
	[Address(RVA = "0x41DBA30", Offset = "0x41DBA30", VA = "0x41DBA30")]
	[PunRPC]
	protected void ToggleBladeTrailsRPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034E9")]
	[Address(RVA = "0x41DBD40", Offset = "0x41DBD40", VA = "0x41DBD40")]
	[PunRPC]
	protected void ToggleBladeFireRPC(int state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034EA")]
	[Address(RVA = "0x41DC1B0", Offset = "0x41DC1B0", VA = "0x41DC1B0")]
	public void ToggleBuff1(bool toggle)
	{
	}

	[Token(Token = "0x60034EB")]
	[Address(RVA = "0x41DC2E0", Offset = "0x41DC2E0", VA = "0x41DC2E0")]
	[PunRPC]
	protected void ToggleBuff1RPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034EC")]
	[Address(RVA = "0x41DC5B0", Offset = "0x41DC5B0", VA = "0x41DC5B0")]
	public void ToggleBuff2(bool toggle)
	{
	}

	[Token(Token = "0x60034ED")]
	[Address(RVA = "0x41DC6E0", Offset = "0x41DC6E0", VA = "0x41DC6E0")]
	[PunRPC]
	protected void ToggleBuff2RPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034EE")]
	[Address(RVA = "0x41DC7A0", Offset = "0x41DC7A0", VA = "0x41DC7A0")]
	public void ToggleFire1(bool toggle)
	{
	}

	[Token(Token = "0x60034EF")]
	[Address(RVA = "0x41DC8D0", Offset = "0x41DC8D0", VA = "0x41DC8D0")]
	[PunRPC]
	protected void ToggleFire1RPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034F0")]
	[Address(RVA = "0x41DC3A0", Offset = "0x41DC3A0", VA = "0x41DC3A0")]
	private void SetParticleSystemsActive(Transform parent, bool active)
	{
	}

	[Token(Token = "0x60034F1")]
	[Address(RVA = "0x41DC990", Offset = "0x41DC990", VA = "0x41DC990")]
	private void DisableAllCustomParticleEffects()
	{
	}

	[Token(Token = "0x60034F2")]
	[Address(RVA = "0x41DC9C0", Offset = "0x41DC9C0", VA = "0x41DC9C0", Slot = "107")]
	protected override string GetFootstepAudio(int phase)
	{
		return null;
	}

	[Token(Token = "0x60034F3")]
	[Address(RVA = "0x41DCA20", Offset = "0x41DCA20", VA = "0x41DCA20", Slot = "106")]
	protected override int GetFootstepPhase()
	{
		return default(int);
	}

	[Token(Token = "0x60034F4")]
	[Address(RVA = "0x41DCC70", Offset = "0x41DCC70", VA = "0x41DCC70", Slot = "101")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60034F5")]
	[Address(RVA = "0x41D0150", Offset = "0x41D0150", VA = "0x41D0150")]
	protected void EnableSmartTitans()
	{
	}

	[Token(Token = "0x60034F6")]
	[Address(RVA = "0x41DCE90", Offset = "0x41DCE90", VA = "0x41DCE90", Slot = "96")]
	protected override void CheckGround()
	{
	}

	[Token(Token = "0x60034F7")]
	[Address(RVA = "0x41DD270", Offset = "0x41DD270", VA = "0x41DD270", Slot = "97")]
	public override bool CheckRaycastIgnoreTriggers(Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x60034F8")]
	[Address(RVA = "0x41DD440", Offset = "0x41DD440", VA = "0x41DD440")]
	public Vector3? PivotPosition()
	{
		return null;
	}

	[Token(Token = "0x60034F9")]
	[Address(RVA = "0x41DD530", Offset = "0x41DD530", VA = "0x41DD530", Slot = "108")]
	protected override List<Renderer> GetFPSDisabledRenderers()
	{
		return null;
	}

	[Token(Token = "0x60034FC")]
	[Address(RVA = "0x41DD9C0", Offset = "0x41DD9C0", VA = "0x41DD9C0")]
	public Human()
	{
	}
}
