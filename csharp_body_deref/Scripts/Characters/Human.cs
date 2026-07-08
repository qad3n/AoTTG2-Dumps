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

[Token(Token = "0x20004B7")]
internal class Human : BaseCharacter
{
	[Token(Token = "0x20004BA")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__174 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40015A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40015A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40015A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Human _003C_003E4__this;

		[Token(Token = "0x17000961")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60032F9")]
			[Address(RVA = "0x3ED20B0", Offset = "0x3ED20B0", VA = "0x3ED20B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000962")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60032FB")]
			[Address(RVA = "0x3ED2100", Offset = "0x3ED2100", VA = "0x3ED2100", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60032F6")]
		[Address(RVA = "0x3ED1E30", Offset = "0x3ED1E30", VA = "0x3ED1E30")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__174(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60032F7")]
		[Address(RVA = "0x3ED1E50", Offset = "0x3ED1E50", VA = "0x3ED1E50", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60032F8")]
		[Address(RVA = "0x3ED1E60", Offset = "0x3ED1E60", VA = "0x3ED1E60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60032FA")]
		[Address(RVA = "0x3ED20C0", Offset = "0x3ED20C0", VA = "0x3ED20C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20004BB")]
	[CompilerGenerated]
	private sealed class _003CWaitAndMount_003Ed__132 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40015A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40015A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40015A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Human _003C_003E4__this;

		[Token(Token = "0x40015A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int mapObjectID;

		[Token(Token = "0x40015A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string transformName;

		[Token(Token = "0x40015A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Vector3 positionOffset;

		[Token(Token = "0x40015AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		public Vector3 rotationOffset;

		[Token(Token = "0x17000963")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60032FF")]
			[Address(RVA = "0x3ED21E0", Offset = "0x3ED21E0", VA = "0x3ED21E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000964")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003301")]
			[Address(RVA = "0x3ED2230", Offset = "0x3ED2230", VA = "0x3ED2230", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60032FC")]
		[Address(RVA = "0x3ED2110", Offset = "0x3ED2110", VA = "0x3ED2110")]
		[DebuggerHidden]
		public _003CWaitAndMount_003Ed__132(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60032FD")]
		[Address(RVA = "0x3ED2130", Offset = "0x3ED2130", VA = "0x3ED2130", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60032FE")]
		[Address(RVA = "0x3ED2140", Offset = "0x3ED2140", VA = "0x3ED2140", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003300")]
		[Address(RVA = "0x3ED21F0", Offset = "0x3ED21F0", VA = "0x3ED21F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20004BC")]
	[CompilerGenerated]
	private sealed class _003CWaitAndTransformFromShifter_003Ed__161 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40015AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40015AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40015AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Human _003C_003E4__this;

		[Token(Token = "0x40015AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public float previousHumanGas;

		[Token(Token = "0x40015AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public BaseUseable previousHumanWeapon;

		[Token(Token = "0x17000965")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003305")]
			[Address(RVA = "0x3ED2550", Offset = "0x3ED2550", VA = "0x3ED2550", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000966")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003307")]
			[Address(RVA = "0x3ED25A0", Offset = "0x3ED25A0", VA = "0x3ED25A0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003302")]
		[Address(RVA = "0x3ED2240", Offset = "0x3ED2240", VA = "0x3ED2240")]
		[DebuggerHidden]
		public _003CWaitAndTransformFromShifter_003Ed__161(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003303")]
		[Address(RVA = "0x3ED2260", Offset = "0x3ED2260", VA = "0x3ED2260", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003304")]
		[Address(RVA = "0x3ED2270", Offset = "0x3ED2270", VA = "0x3ED2270", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003306")]
		[Address(RVA = "0x3ED2560", Offset = "0x3ED2560", VA = "0x3ED2560", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001529")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public HumanComponentCache HumanCache;

	[Token(Token = "0x400152A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	public BaseUseable Special;

	[Token(Token = "0x400152B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	public BaseUseable Weapon;

	[Token(Token = "0x400152C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	public HookUseable HookLeft;

	[Token(Token = "0x400152D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	public HookUseable HookRight;

	[Token(Token = "0x400152E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	public HumanMountState MountState;

	[Token(Token = "0x400152F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11C")]
	public HumanCarryState CarryState;

	[Token(Token = "0x4001530")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	public Horse Horse;

	[Token(Token = "0x4001531")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	public bool AllowHorse;

	[Token(Token = "0x4001532")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x129")]
	public bool AllowSkin;

	[Token(Token = "0x4001533")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	public HumanSetup Setup;

	[Token(Token = "0x4001534")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	public HumanStats Stats;

	[Token(Token = "0x4001535")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	public bool FinishSetup;

	[Token(Token = "0x4001536")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private HumanCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x4001537")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static LayerMask AimMask;

	[Token(Token = "0x4001538")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public static LayerMask ClipMask;

	[Token(Token = "0x4001539")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private Dictionary<Renderer, Material> FPSMaterials;

	[Token(Token = "0x400153A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private HumanState _state;

	[Token(Token = "0x400153B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	public string CurrentSpecial;

	[Token(Token = "0x400153C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	public BaseTitan Grabber;

	[Token(Token = "0x400153D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	public Transform GrabHand;

	[Token(Token = "0x400153E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	public Human Carrier;

	[Token(Token = "0x400153F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	public Transform CarryBack;

	[Token(Token = "0x4001540")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	public Human BackHuman;

	[Token(Token = "0x4001541")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	public Vector3 CarryVelocity;

	[Token(Token = "0x4001542")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	public MapObject MountedMapObject;

	[Token(Token = "0x4001543")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	public Transform MountedTransform;

	[Token(Token = "0x4001544")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	public Vector3 MountedPositionOffset;

	[Token(Token = "0x4001545")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1BC")]
	public Vector3 MountedRotationOffset;

	[Token(Token = "0x4001546")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	public Vector3 _lastMountedPosition;

	[Token(Token = "0x4001547")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D4")]
	public Vector3 _mountedVelocity;

	[Token(Token = "0x4001548")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	public bool CancelHookLeftKey;

	[Token(Token = "0x4001549")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E1")]
	public bool CancelHookRightKey;

	[Token(Token = "0x400154A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E2")]
	public bool CancelHookBothKey;

	[Token(Token = "0x400154B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E3")]
	public bool CanDodge;

	[Token(Token = "0x400154C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E4")]
	public bool IsInvincible;

	[Token(Token = "0x400154D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	public float InvincibleTimeLeft;

	[Token(Token = "0x400154E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1EC")]
	public bool CanMountedAttack;

	[Token(Token = "0x400154F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1ED")]
	public bool InMountedCombat;

	[Token(Token = "0x4001550")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1EE")]
	public bool IsAttackableState;

	[Token(Token = "0x4001551")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1EF")]
	public bool IsRefillable;

	[Token(Token = "0x4001552")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F0")]
	private object[] _lastMountMessage;

	[Token(Token = "0x4001553")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F8")]
	private int _lastCarryRPCSender;

	[Token(Token = "0x4001554")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1FC")]
	private float _grabIFrames;

	[Token(Token = "0x4001555")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x200")]
	private bool _bladeTrailActive;

	[Token(Token = "0x4001556")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x204")]
	private int _bladeFireState;

	[Token(Token = "0x4001557")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x208")]
	private bool _buff1Active;

	[Token(Token = "0x4001558")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x209")]
	private bool _buff2Active;

	[Token(Token = "0x4001559")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20A")]
	private bool _fire1Active;

	[Token(Token = "0x400155A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20C")]
	public float ReelInAxis;

	[Token(Token = "0x400155B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x210")]
	public float ReelOutAxis;

	[Token(Token = "0x400155C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x214")]
	public float ReelOutScrollTimeLeft;

	[Token(Token = "0x400155D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x218")]
	public float TargetMagnitude;

	[Token(Token = "0x400155E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21C")]
	public bool IsWalk;

	[Token(Token = "0x400155F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21D")]
	private bool _pivot;

	[Token(Token = "0x4001560")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21E")]
	private bool _pivotLeft;

	[Token(Token = "0x4001561")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21F")]
	private bool _pivotRight;

	[Token(Token = "0x4001562")]
	private const float MaxVelocityChange = 10f;

	[Token(Token = "0x4001563")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x220")]
	private float _originalDashSpeed;

	[Token(Token = "0x4001564")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x224")]
	public Quaternion _targetRotation;

	[Token(Token = "0x4001565")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x234")]
	private float _wallRunTime;

	[Token(Token = "0x4001566")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x238")]
	private bool _wallJump;

	[Token(Token = "0x4001567")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x239")]
	private bool _wallSlide;

	[Token(Token = "0x4001568")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x23A")]
	private bool _canWallSlideJump;

	[Token(Token = "0x4001569")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x23C")]
	private Vector3 _wallSlideGround;

	[Token(Token = "0x400156A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x248")]
	private bool _launchLeft;

	[Token(Token = "0x400156B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x249")]
	private bool _launchRight;

	[Token(Token = "0x400156C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24C")]
	private float _launchLeftTime;

	[Token(Token = "0x400156D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x250")]
	private float _launchRightTime;

	[Token(Token = "0x400156E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x254")]
	private bool _needLean;

	[Token(Token = "0x400156F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x255")]
	private bool _almostSingleHook;

	[Token(Token = "0x4001570")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x256")]
	private bool _leanLeft;

	[Token(Token = "0x4001571")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x257")]
	private bool _isTrigger;

	[Token(Token = "0x4001572")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x258")]
	private bool _useFixedUpdateClipping;

	[Token(Token = "0x4001573")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x25C")]
	private Vector3 _lastPosition;

	[Token(Token = "0x4001574")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x268")]
	private Vector3 _lastVelocity;

	[Token(Token = "0x4001575")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x274")]
	private Vector3 _currentVelocity;

	[Token(Token = "0x4001576")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static LayerMask TitanDetectionMask;

	[Token(Token = "0x4001577")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x280")]
	private LayerMask HumanGroundMaskLayers;

	[Token(Token = "0x4001578")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x284")]
	private Quaternion _oldHeadRotation;

	[Token(Token = "0x4001579")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x294")]
	public Vector2 LastGoodHeadAngle;

	[Token(Token = "0x400157A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29C")]
	public Quaternion? LateUpdateHeadRotation;

	[Token(Token = "0x400157B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2B0")]
	public Quaternion? LateUpdateHeadRotationRecv;

	[Token(Token = "0x400157C")]
	private const float CarryLagCompensationDistance = 100f;

	[Token(Token = "0x400157D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C8")]
	public string StandAnimation;

	[Token(Token = "0x400157E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2D0")]
	public string AttackAnimation;

	[Token(Token = "0x400157F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2D8")]
	public bool _gunArmAim;

	[Token(Token = "0x4001580")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2E0")]
	public string RunAnimation;

	[Token(Token = "0x4001581")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2E8")]
	public string WalkAnimation;

	[Token(Token = "0x4001582")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2F0")]
	public bool _attackRelease;

	[Token(Token = "0x4001583")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2F1")]
	public bool _attackButtonRelease;

	[Token(Token = "0x4001584")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2F2")]
	public bool _reelInWaitForRelease;

	[Token(Token = "0x4001585")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2F4")]
	private float _stateTimeLeft;

	[Token(Token = "0x4001586")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2F8")]
	private float _dashTimeLeft;

	[Token(Token = "0x4001587")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2FC")]
	private bool _cancelGasDisable;

	[Token(Token = "0x4001588")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2FD")]
	private bool _animationStopped;

	[Token(Token = "0x4001589")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2FE")]
	private bool _needFinishReload;

	[Token(Token = "0x400158A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x300")]
	private float _reloadTimeLeft;

	[Token(Token = "0x400158B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x304")]
	private float _reloadCooldownLeft;

	[Token(Token = "0x400158C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x308")]
	private string _reloadAnimation;

	[Token(Token = "0x400158D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x310")]
	private float _dashCooldownLeft;

	[Token(Token = "0x400158E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x318")]
	private Human _hookHuman;

	[Token(Token = "0x400158F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x320")]
	private bool _hookHumanLeft;

	[Token(Token = "0x4001590")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x324")]
	private float _hookHumanConstantTimeLeft;

	[Token(Token = "0x4001591")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x328")]
	private bool _isReelingOut;

	[Token(Token = "0x4001592")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x330")]
	private Dictionary<BaseTitan, float> _lastNapeHitTimes;

	[Token(Token = "0x4001593")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x338")]
	private Material _originalSmokeMaterial;

	[Token(Token = "0x4001594")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x340")]
	public IHumanController Controller;

	[Token(Token = "0x4001595")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x348")]
	public InGameCharacterSettings Settings;

	[Token(Token = "0x4001596")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x350")]
	private Collider _lastHit;

	[Token(Token = "0x4001597")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x358")]
	private Vector3 _lastDirection;

	[Token(Token = "0x4001598")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x364")]
	private float _collisionTimer;

	[Token(Token = "0x4001599")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x368")]
	private float _collisionInterval;

	[Token(Token = "0x1700095D")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x600323E")]
		[Address(RVA = "0x3EACB80", Offset = "0x3EACB80", VA = "0x3EACB80", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700095E")]
	public bool Pivot
	{
		[Token(Token = "0x600323F")]
		[Address(RVA = "0x3EACEC0", Offset = "0x3EACEC0", VA = "0x3EACEC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700095F")]
	public override LayerMask GroundMask
	{
		[Token(Token = "0x6003240")]
		[Address(RVA = "0x3EACED0", Offset = "0x3EACED0", VA = "0x3EACED0", Slot = "60")]
		get
		{
			return default(LayerMask);
		}
	}

	[Token(Token = "0x17000960")]
	public HumanState State
	{
		[Token(Token = "0x60032EC")]
		[Address(RVA = "0x3ED10F0", Offset = "0x3ED10F0", VA = "0x3ED10F0")]
		get
		{
			return default(HumanState);
		}
		[Token(Token = "0x60032ED")]
		[Address(RVA = "0x3EAF810", Offset = "0x3EAF810", VA = "0x3EAF810")]
		set
		{
		}
	}

	[Token(Token = "0x6003241")]
	[Address(RVA = "0x3EACEE0", Offset = "0x3EACEE0", VA = "0x3EACEE0", Slot = "69")]
	protected override void CreateDetection()
	{
	}

	[Token(Token = "0x6003242")]
	[Address(RVA = "0x3EACF80", Offset = "0x3EACF80", VA = "0x3EACF80")]
	public void DieChangeCharacter()
	{
	}

	[Token(Token = "0x6003243")]
	[Address(RVA = "0x3EAD040", Offset = "0x3EAD040", VA = "0x3EAD040")]
	public void IsChangingPosition()
	{
	}

	[Token(Token = "0x6003244")]
	[Address(RVA = "0x3EAD050", Offset = "0x3EAD050", VA = "0x3EAD050")]
	[PunRPC]
	public void BlowAwayRPC(Vector3 force, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003245")]
	[Address(RVA = "0x3EAD090", Offset = "0x3EAD090", VA = "0x3EAD090", Slot = "83")]
	[PunRPC]
	public override void MarkDeadRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003246")]
	[Address(RVA = "0x3EAD370", Offset = "0x3EAD370", VA = "0x3EAD370", Slot = "110")]
	[PunRPC]
	public virtual void UngrabRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003247")]
	[Address(RVA = "0x3EAD660", Offset = "0x3EAD660", VA = "0x3EAD660")]
	public Ray GetAimRayAfterHuman()
	{
		return default(Ray);
	}

	[Token(Token = "0x6003248")]
	[Address(RVA = "0x3EAD9D0", Offset = "0x3EAD9D0", VA = "0x3EAD9D0")]
	public Ray GetAimRayAfterHumanCheap()
	{
		return default(Ray);
	}

	[Token(Token = "0x6003249")]
	[Address(RVA = "0x3EADBD0", Offset = "0x3EADBD0", VA = "0x3EADBD0", Slot = "66")]
	public override Vector3 GetAimPoint()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600324A")]
	[Address(RVA = "0x3EADDF0", Offset = "0x3EADDF0", VA = "0x3EADDF0")]
	public Vector3 GetAimPoint(Vector3 origin, Vector3 direction)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600324B")]
	[Address(RVA = "0x3EADF00", Offset = "0x3EADF00", VA = "0x3EADF00")]
	private Vector2 GetLookAngle(Vector3 target)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600324C")]
	[Address(RVA = "0x3EAE120", Offset = "0x3EAE120", VA = "0x3EAE120")]
	public bool CanJump()
	{
		return default(bool);
	}

	[Token(Token = "0x600324D")]
	[Address(RVA = "0x3EAE210", Offset = "0x3EAE210", VA = "0x3EAE210")]
	public void Jump()
	{
	}

	[Token(Token = "0x600324E")]
	[Address(RVA = "0x3EAE530", Offset = "0x3EAE530", VA = "0x3EAE530")]
	public void Mount(Transform transform, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack = false)
	{
	}

	[Token(Token = "0x600324F")]
	[Address(RVA = "0x3EAEAB0", Offset = "0x3EAEAB0", VA = "0x3EAEAB0")]
	public void Mount(MapObject mapObject, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack = false)
	{
	}

	[Token(Token = "0x6003250")]
	[Address(RVA = "0x3EAE750", Offset = "0x3EAE750", VA = "0x3EAE750")]
	public void Mount(MapObject mapObject, string transformName, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack = false)
	{
	}

	[Token(Token = "0x6003251")]
	[Address(RVA = "0x3EAEF70", Offset = "0x3EAEF70", VA = "0x3EAEF70")]
	[PunRPC]
	public void MountRPC(int mapObjectID, string transformName, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003252")]
	[Address(RVA = "0x3EAF340", Offset = "0x3EAF340", VA = "0x3EAF340")]
	[IteratorStateMachine(typeof(_003CWaitAndMount_003Ed__132))]
	private IEnumerator WaitAndMount(int mapObjectID, string transformName, Vector3 positionOffset, Vector3 rotationOffset)
	{
		return null;
	}

	[Token(Token = "0x6003253")]
	[Address(RVA = "0x3EAF110", Offset = "0x3EAF110", VA = "0x3EAF110")]
	private void FinishMount(int mapObjectID, string transformName, Vector3 positionOffset, Vector3 rotationOffset)
	{
	}

	[Token(Token = "0x6003254")]
	[Address(RVA = "0x3EAEB30", Offset = "0x3EAEB30", VA = "0x3EAEB30")]
	public void Unmount(bool immediate)
	{
	}

	[Token(Token = "0x6003255")]
	[Address(RVA = "0x3EAF410", Offset = "0x3EAF410", VA = "0x3EAF410")]
	[PunRPC]
	public void UnmountRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003256")]
	[Address(RVA = "0x3EAF490", Offset = "0x3EAF490", VA = "0x3EAF490")]
	public void MountHorse()
	{
	}

	[Token(Token = "0x6003257")]
	[Address(RVA = "0x3EAF6F0", Offset = "0x3EAF6F0", VA = "0x3EAF6F0")]
	public void Dodge(float targetAngle)
	{
	}

	[Token(Token = "0x6003258")]
	[Address(RVA = "0x3EAF830", Offset = "0x3EAF830", VA = "0x3EAF830")]
	public void DodgeWall()
	{
	}

	[Token(Token = "0x6003259")]
	[Address(RVA = "0x3EAF8D0", Offset = "0x3EAF8D0", VA = "0x3EAF8D0")]
	public void Dash(float targetAngle)
	{
	}

	[Token(Token = "0x600325A")]
	[Address(RVA = "0x3EAFD40", Offset = "0x3EAFD40", VA = "0x3EAFD40")]
	public bool DashVertical(float targetAngle, Vector3 direction, [Optional] Vector3? percentPower)
	{
		return default(bool);
	}

	[Token(Token = "0x600325B")]
	[Address(RVA = "0x3EAE320", Offset = "0x3EAE320", VA = "0x3EAE320")]
	public void Idle()
	{
	}

	[Token(Token = "0x600325C")]
	[Address(RVA = "0x3EB01D0", Offset = "0x3EB01D0", VA = "0x3EB01D0")]
	public void Grab(BaseTitan grabber, string type)
	{
	}

	[Token(Token = "0x600325D")]
	[Address(RVA = "0x3EAD420", Offset = "0x3EAD420", VA = "0x3EAD420")]
	public void Ungrab(bool notifyTitan, bool idle, bool breakArm = false)
	{
	}

	[Token(Token = "0x600325E")]
	[Address(RVA = "0x3EB0690", Offset = "0x3EB0690", VA = "0x3EB0690")]
	public void Carry(Human carrier, Transform back)
	{
	}

	[Token(Token = "0x600325F")]
	[Address(RVA = "0x3EB08C0", Offset = "0x3EB08C0", VA = "0x3EB08C0")]
	[PunRPC]
	public void CarryRPC(int initiatorViewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003260")]
	[Address(RVA = "0x3EB0D40", Offset = "0x3EB0D40", VA = "0x3EB0D40")]
	[PunRPC]
	public void ConfirmCarryRPC(int initiatorViewId, int targetViewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003261")]
	[Address(RVA = "0x3EB0ED0", Offset = "0x3EB0ED0", VA = "0x3EB0ED0")]
	public void Uncarry()
	{
	}

	[Token(Token = "0x6003262")]
	[Address(RVA = "0x3EB1090", Offset = "0x3EB1090", VA = "0x3EB1090", Slot = "111")]
	[PunRPC]
	public virtual void UncarryRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003263")]
	[Address(RVA = "0x3EAD2B0", Offset = "0x3EAD2B0", VA = "0x3EAD2B0")]
	public void SetCarrierTriggerCollider(bool trigger)
	{
	}

	[Token(Token = "0x6003264")]
	[Address(RVA = "0x3EB0FF0", Offset = "0x3EB0FF0", VA = "0x3EB0FF0")]
	public void SetVelocityFromCarrier()
	{
	}

	[Token(Token = "0x6003265")]
	[Address(RVA = "0x3EB1160", Offset = "0x3EB1160", VA = "0x3EB1160")]
	public Human GetHumanAlongRay(Ray ray, float distance)
	{
		return null;
	}

	[Token(Token = "0x6003266")]
	[Address(RVA = "0x3EB14F0", Offset = "0x3EB14F0", VA = "0x3EB14F0")]
	public bool IsValidCarryTarget(Human human, float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x6003267")]
	[Address(RVA = "0x3EB1750", Offset = "0x3EB1750", VA = "0x3EB1750")]
	public bool IsCarryable(Human human)
	{
		return default(bool);
	}

	[Token(Token = "0x6003268")]
	[Address(RVA = "0x3EB0AF0", Offset = "0x3EB0AF0", VA = "0x3EB0AF0")]
	private bool IsCarryableBy(Human initiator)
	{
		return default(bool);
	}

	[Token(Token = "0x6003269")]
	[Address(RVA = "0x3EB1840", Offset = "0x3EB1840", VA = "0x3EB1840")]
	public Human GetCarryOption(float distance)
	{
		return null;
	}

	[Token(Token = "0x600326A")]
	[Address(RVA = "0x3EB1BE0", Offset = "0x3EB1BE0", VA = "0x3EB1BE0")]
	public void StartCarrySpecial(Human target)
	{
	}

	[Token(Token = "0x600326B")]
	[Address(RVA = "0x3EB1D90", Offset = "0x3EB1D90", VA = "0x3EB1D90")]
	public void StopCarrySpecial()
	{
	}

	[Token(Token = "0x600326C")]
	[Address(RVA = "0x3EB1D10", Offset = "0x3EB1D10", VA = "0x3EB1D10")]
	public void ClearAllActionsForSpecial()
	{
	}

	[Token(Token = "0x600326D")]
	[Address(RVA = "0x3EB1E60", Offset = "0x3EB1E60", VA = "0x3EB1E60")]
	public void SpecialActionState(float time)
	{
	}

	[Token(Token = "0x600326E")]
	[Address(RVA = "0x3EB1E90", Offset = "0x3EB1E90", VA = "0x3EB1E90")]
	public void TransformShifter(string shifter, float liveTime)
	{
	}

	[Token(Token = "0x600326F")]
	[Address(RVA = "0x3EB20C0", Offset = "0x3EB20C0", VA = "0x3EB20C0")]
	[IteratorStateMachine(typeof(_003CWaitAndTransformFromShifter_003Ed__161))]
	public IEnumerator WaitAndTransformFromShifter(float previousHumanGas, BaseUseable previousHumanWeapon)
	{
		return null;
	}

	[Token(Token = "0x6003270")]
	[Address(RVA = "0x3EB2160", Offset = "0x3EB2160", VA = "0x3EB2160")]
	public void Reload()
	{
	}

	[Token(Token = "0x6003271")]
	[Address(RVA = "0x3EB27F0", Offset = "0x3EB27F0", VA = "0x3EB27F0")]
	protected void FinishReload()
	{
	}

	[Token(Token = "0x6003272")]
	[Address(RVA = "0x3EB2960", Offset = "0x3EB2960", VA = "0x3EB2960")]
	public bool Refill()
	{
		return default(bool);
	}

	[Token(Token = "0x6003273")]
	[Address(RVA = "0x3EB2AD0", Offset = "0x3EB2AD0", VA = "0x3EB2AD0")]
	public bool SupplySpawnableRefill()
	{
		return default(bool);
	}

	[Token(Token = "0x6003274")]
	[Address(RVA = "0x3EB2BF0", Offset = "0x3EB2BF0", VA = "0x3EB2BF0")]
	public bool NeedRefill(bool isGasTank)
	{
		return default(bool);
	}

	[Token(Token = "0x6003275")]
	[Address(RVA = "0x3EB2D30", Offset = "0x3EB2D30", VA = "0x3EB2D30")]
	public void FinishRefill()
	{
	}

	[Token(Token = "0x6003276")]
	[Address(RVA = "0x3EB2DD0", Offset = "0x3EB2DD0", VA = "0x3EB2DD0", Slot = "70")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x6003277")]
	[Address(RVA = "0x3EB3170", Offset = "0x3EB3170", VA = "0x3EB3170", Slot = "71")]
	public override void ForceAnimation(string animation, float fade)
	{
	}

	[Token(Token = "0x6003278")]
	[Address(RVA = "0x3EB30F0", Offset = "0x3EB30F0", VA = "0x3EB30F0")]
	public void EmoteAnimation(string animation)
	{
	}

	[Token(Token = "0x6003279")]
	[Address(RVA = "0x3EB30B0", Offset = "0x3EB30B0", VA = "0x3EB30B0")]
	public bool CanEmote()
	{
		return default(bool);
	}

	[Token(Token = "0x600327A")]
	[Address(RVA = "0x3EB3200", Offset = "0x3EB3200", VA = "0x3EB3200", Slot = "67")]
	public override Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x600327B")]
	[Address(RVA = "0x3EB3220", Offset = "0x3EB3220", VA = "0x3EB3220", Slot = "68")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x600327C")]
	[Address(RVA = "0x3EB32A0", Offset = "0x3EB32A0", VA = "0x3EB32A0", Slot = "74")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__174))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x600327D")]
	[Address(RVA = "0x3EB3310", Offset = "0x3EB3310", VA = "0x3EB3310")]
	public void Init(bool ai, string team, InGameCharacterSettings settings)
	{
	}

	[Token(Token = "0x600327E")]
	[Address(RVA = "0x3EB33E0", Offset = "0x3EB33E0", VA = "0x3EB33E0")]
	public void ReloadHuman(InGameCharacterSettings settings)
	{
	}

	[Token(Token = "0x600327F")]
	[Address(RVA = "0x3EB67F0", Offset = "0x3EB67F0", VA = "0x3EB67F0", Slot = "90")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003280")]
	[Address(RVA = "0x3EB6BF0", Offset = "0x3EB6BF0", VA = "0x3EB6BF0", Slot = "93")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6003281")]
	[Address(RVA = "0x3EB71A0", Offset = "0x3EB71A0", VA = "0x3EB71A0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6003282")]
	[Address(RVA = "0x3EB37B0", Offset = "0x3EB37B0", VA = "0x3EB37B0")]
	private string GetNetworkSetupJson()
	{
		return null;
	}

	[Token(Token = "0x6003283")]
	[Address(RVA = "0x3EB7570", Offset = "0x3EB7570", VA = "0x3EB7570", Slot = "80")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6003284")]
	[Address(RVA = "0x3EB77A0", Offset = "0x3EB77A0", VA = "0x3EB77A0", Slot = "81")]
	[PunRPC]
	public override void GetDamagedRPC(string name, int damage)
	{
	}

	[Token(Token = "0x6003285")]
	[Address(RVA = "0x3EB77C0", Offset = "0x3EB77C0", VA = "0x3EB77C0", Slot = "79")]
	public override void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
	}

	[Token(Token = "0x6003286")]
	[Address(RVA = "0x3EB8EA0", Offset = "0x3EB8EA0", VA = "0x3EB8EA0")]
	protected void Update()
	{
	}

	[Token(Token = "0x6003287")]
	[Address(RVA = "0x3EBAB20", Offset = "0x3EBAB20", VA = "0x3EBAB20", Slot = "102")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x6003288")]
	[Address(RVA = "0x3EC1B30", Offset = "0x3EC1B30", VA = "0x3EC1B30")]
	private bool CanStockDueToBL()
	{
		return default(bool);
	}

	[Token(Token = "0x6003289")]
	[Address(RVA = "0x3EC1970", Offset = "0x3EC1970", VA = "0x3EC1970")]
	private bool ValidStockAttacks()
	{
		return default(bool);
	}

	[Token(Token = "0x600328A")]
	[Address(RVA = "0x3EB0640", Offset = "0x3EB0640", VA = "0x3EB0640")]
	public bool HasGrabImmunity()
	{
		return default(bool);
	}

	[Token(Token = "0x600328B")]
	[Address(RVA = "0x3EC4410", Offset = "0x3EC4410", VA = "0x3EC4410")]
	public void StartGrabImmunity(float duration)
	{
	}

	[Token(Token = "0x600328C")]
	[Address(RVA = "0x3EBA6F0", Offset = "0x3EBA6F0", VA = "0x3EBA6F0")]
	private void UpdateIFrames()
	{
	}

	[Token(Token = "0x600328D")]
	[Address(RVA = "0x3EBA780", Offset = "0x3EBA780", VA = "0x3EBA780")]
	private void UpdateBladeFire()
	{
	}

	[Token(Token = "0x600328E")]
	[Address(RVA = "0x3EC4550", Offset = "0x3EC4550", VA = "0x3EC4550")]
	private void lookAtTarget(Vector3 target)
	{
	}

	[Token(Token = "0x600328F")]
	[Address(RVA = "0x3EC4920", Offset = "0x3EC4920", VA = "0x3EC4920")]
	protected void LateUpdateHeadPosition(Vector3 position)
	{
	}

	[Token(Token = "0x6003290")]
	[Address(RVA = "0x3EC4EE0", Offset = "0x3EC4EE0", VA = "0x3EC4EE0", Slot = "103")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6003291")]
	[Address(RVA = "0x3EC6770", Offset = "0x3EC6770", VA = "0x3EC6770", Slot = "105")]
	protected override void LateUpdateFPS()
	{
	}

	[Token(Token = "0x6003292")]
	[Address(RVA = "0x3EC6C10", Offset = "0x3EC6C10", VA = "0x3EC6C10")]
	protected void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x6003293")]
	[Address(RVA = "0x3EC8570", Offset = "0x3EC8570", VA = "0x3EC8570")]
	protected void OnCollisionStay(Collision collision)
	{
	}

	[Token(Token = "0x6003294")]
	[Address(RVA = "0x3EC0CF0", Offset = "0x3EC0CF0", VA = "0x3EC0CF0")]
	private void FixedUpdateWallSlide()
	{
	}

	[Token(Token = "0x6003295")]
	[Address(RVA = "0x3EC8C90", Offset = "0x3EC8C90", VA = "0x3EC8C90")]
	private void EndWallSlide()
	{
	}

	[Token(Token = "0x6003296")]
	[Address(RVA = "0x3EC61E0", Offset = "0x3EC61E0", VA = "0x3EC61E0")]
	private void LateUpdateReelOut()
	{
	}

	[Token(Token = "0x6003297")]
	[Address(RVA = "0x3EBFF30", Offset = "0x3EBFF30", VA = "0x3EBFF30")]
	private bool FixedUpdateLaunch(bool left)
	{
		return default(bool);
	}

	[Token(Token = "0x6003298")]
	[Address(RVA = "0x3EC11E0", Offset = "0x3EC11E0", VA = "0x3EC11E0")]
	private void FixedUpdatePivot(Vector3 position)
	{
	}

	[Token(Token = "0x6003299")]
	[Address(RVA = "0x3EC07B0", Offset = "0x3EC07B0", VA = "0x3EC07B0")]
	private bool IsStock(bool pivot)
	{
		return default(bool);
	}

	[Token(Token = "0x600329A")]
	[Address(RVA = "0x3EC1BC0", Offset = "0x3EC1BC0", VA = "0x3EC1BC0")]
	private void FixedUpdateSetHookedDirection()
	{
	}

	[Token(Token = "0x600329B")]
	[Address(RVA = "0x3EC2730", Offset = "0x3EC2730", VA = "0x3EC2730")]
	private void FixedUpdateBodyLean()
	{
	}

	[Token(Token = "0x600329C")]
	[Address(RVA = "0x3EBFEA0", Offset = "0x3EBFEA0", VA = "0x3EBFEA0")]
	private void FixedUpdateUseables()
	{
	}

	[Token(Token = "0x600329D")]
	[Address(RVA = "0x3EBFAF0", Offset = "0x3EBFAF0", VA = "0x3EBFAF0")]
	public void FixedUpdateLookTitan()
	{
	}

	[Token(Token = "0x600329E")]
	[Address(RVA = "0x3EC2DA0", Offset = "0x3EC2DA0", VA = "0x3EC2DA0")]
	private void FixedUpdateClippingCheck()
	{
	}

	[Token(Token = "0x600329F")]
	[Address(RVA = "0x3EC5130", Offset = "0x3EC5130", VA = "0x3EC5130")]
	private void LateUpdateTilt()
	{
	}

	[Token(Token = "0x60032A0")]
	[Address(RVA = "0x3EC62F0", Offset = "0x3EC62F0", VA = "0x3EC62F0")]
	private void LateUpdateGun()
	{
	}

	[Token(Token = "0x60032A1")]
	[Address(RVA = "0x3EC9110", Offset = "0x3EC9110", VA = "0x3EC9110")]
	private void GunHeadMovement()
	{
	}

	[Token(Token = "0x60032A2")]
	[Address(RVA = "0x3EC9120", Offset = "0x3EC9120", VA = "0x3EC9120")]
	private void LeftArmAim(Vector3 target)
	{
	}

	[Token(Token = "0x60032A3")]
	[Address(RVA = "0x3EC9330", Offset = "0x3EC9330", VA = "0x3EC9330")]
	private void RightArmAim(Vector3 target)
	{
	}

	[Token(Token = "0x60032A4")]
	[Address(RVA = "0x3EC9550", Offset = "0x3EC9550", VA = "0x3EC9550", Slot = "92")]
	protected override void SetColliders()
	{
	}

	[Token(Token = "0x60032A5")]
	[Address(RVA = "0x3EC96F0", Offset = "0x3EC96F0", VA = "0x3EC96F0")]
	[PunRPC]
	public void SetupRPC(string customSetJson, int humanWeapon, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032A6")]
	[Address(RVA = "0x3EC9EA0", Offset = "0x3EC9EA0", VA = "0x3EC9EA0")]
	protected void SetupWeapon(int humanWeapon)
	{
	}

	[Token(Token = "0x60032A7")]
	[Address(RVA = "0x3ECAA80", Offset = "0x3ECAA80", VA = "0x3ECAA80")]
	protected void SetupItems()
	{
	}

	[Token(Token = "0x60032A8")]
	[Address(RVA = "0x3ECAF10", Offset = "0x3ECAF10", VA = "0x3ECAF10")]
	public void SetSpecial(string special)
	{
	}

	[Token(Token = "0x60032A9")]
	[Address(RVA = "0x3EB39E0", Offset = "0x3EB39E0", VA = "0x3EB39E0")]
	protected void LoadSkin([Optional] Player player)
	{
	}

	[Token(Token = "0x60032AA")]
	[Address(RVA = "0x3ECB480", Offset = "0x3ECB480", VA = "0x3ECB480")]
	[PunRPC]
	public void LoadSkinRPC(int horse, string url, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032AB")]
	[Address(RVA = "0x3ECB680", Offset = "0x3ECB680", VA = "0x3ECB680")]
	[PunRPC]
	public void SetHookStateRPC(bool left, int hookId, int state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032AC")]
	[Address(RVA = "0x3ECB770", Offset = "0x3ECB770", VA = "0x3ECB770")]
	[PunRPC]
	public void SetHookingRPC(bool left, int hookId, Vector3 baseVelocity, Vector3 relativeVelocity, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032AD")]
	[Address(RVA = "0x3ECB890", Offset = "0x3ECB890", VA = "0x3ECB890")]
	[PunRPC]
	public void SetHookedRPC(bool left, int hookId, Vector3 position, int viewId, int objectId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032AE")]
	[Address(RVA = "0x3ECB9B0", Offset = "0x3ECB9B0", VA = "0x3ECB9B0")]
	[PunRPC]
	public void SetSmokeRPC(bool active, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032AF")]
	[Address(RVA = "0x3EAE380", Offset = "0x3EAE380", VA = "0x3EAE380")]
	protected void ToggleSparks(bool toggle)
	{
	}

	[Token(Token = "0x60032B0")]
	[Address(RVA = "0x3ECBA30", Offset = "0x3ECBA30", VA = "0x3ECBA30")]
	[PunRPC]
	protected void ToggleSparksRPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032B1")]
	[Address(RVA = "0x3EB2690", Offset = "0x3EB2690", VA = "0x3EB2690")]
	public void SetThunderspears(bool hasLeft, bool hasRight)
	{
	}

	[Token(Token = "0x60032B2")]
	[Address(RVA = "0x3ECBAB0", Offset = "0x3ECBAB0", VA = "0x3ECBAB0")]
	[PunRPC]
	public void SetThunderspearsRPC(bool hasLeft, bool hasRight, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032B3")]
	[Address(RVA = "0x3EC06F0", Offset = "0x3EC06F0", VA = "0x3EC06F0")]
	public void ClearDashPerkCDs()
	{
	}

	[Token(Token = "0x60032B4")]
	[Address(RVA = "0x3ECBBE0", Offset = "0x3ECBBE0", VA = "0x3ECBBE0")]
	public void OnHooked(bool left, Vector3 position)
	{
	}

	[Token(Token = "0x60032B5")]
	[Address(RVA = "0x3ECC350", Offset = "0x3ECC350", VA = "0x3ECC350")]
	public void OnHookedHuman(bool left, Vector3 position, Human human)
	{
	}

	[Token(Token = "0x60032B6")]
	[Address(RVA = "0x3EB0660", Offset = "0x3EB0660", VA = "0x3EB0660")]
	public void UnhookHuman(bool left)
	{
	}

	[Token(Token = "0x60032B7")]
	[Address(RVA = "0x3ECC760", Offset = "0x3ECC760", VA = "0x3ECC760")]
	[PunRPC]
	public void OnHookedByHuman(int viewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032B8")]
	[Address(RVA = "0x3ECCE50", Offset = "0x3ECCE50", VA = "0x3ECCE50")]
	[PunRPC]
	public void OnStillHookedByHuman(int viewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032B9")]
	[Address(RVA = "0x3ECD290", Offset = "0x3ECD290", VA = "0x3ECD290")]
	public void GetStunnedByTS(Vector3 origin)
	{
	}

	[Token(Token = "0x60032BA")]
	[Address(RVA = "0x3EAEDB0", Offset = "0x3EAEDB0", VA = "0x3EAEDB0")]
	public void SetInterpolation(bool interpolate)
	{
	}

	[Token(Token = "0x60032BB")]
	[Address(RVA = "0x3EAEE60", Offset = "0x3EAEE60", VA = "0x3EAEE60")]
	private void SetTriggerCollider(bool trigger)
	{
	}

	[Token(Token = "0x60032BC")]
	[Address(RVA = "0x3ECD930", Offset = "0x3ECD930", VA = "0x3ECD930")]
	[PunRPC]
	public void SetTriggerColliderRPC(bool trigger, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032BD")]
	[Address(RVA = "0x3EC8CA0", Offset = "0x3EC8CA0", VA = "0x3EC8CA0")]
	private float GetReelAxis()
	{
		return default(float);
	}

	[Token(Token = "0x60032BE")]
	[Address(RVA = "0x3EC8CC0", Offset = "0x3EC8CC0", VA = "0x3EC8CC0")]
	private float GetLeanAngle(Vector3 hookPosition, bool left)
	{
		return default(float);
	}

	[Token(Token = "0x60032BF")]
	[Address(RVA = "0x3ECD9B0", Offset = "0x3ECD9B0", VA = "0x3ECD9B0")]
	public bool CanBladeAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x60032C0")]
	[Address(RVA = "0x3ECDA30", Offset = "0x3ECDA30", VA = "0x3ECDA30")]
	public void StartSpecialAttack(string animation)
	{
	}

	[Token(Token = "0x60032C1")]
	[Address(RVA = "0x3ECDAA0", Offset = "0x3ECDAA0", VA = "0x3ECDAA0")]
	public void ActivateBlades()
	{
	}

	[Token(Token = "0x60032C2")]
	[Address(RVA = "0x3ECDB60", Offset = "0x3ECDB60", VA = "0x3ECDB60")]
	public void StartBladeSwing()
	{
	}

	[Token(Token = "0x60032C3")]
	[Address(RVA = "0x3ECEA30", Offset = "0x3ECEA30", VA = "0x3ECEA30")]
	private string GetBladeAnimationMouse()
	{
		return null;
	}

	[Token(Token = "0x60032C4")]
	[Address(RVA = "0x3ECE6F0", Offset = "0x3ECE6F0", VA = "0x3ECE6F0")]
	private string GetBladeAnimationTarget(Transform target)
	{
		return null;
	}

	[Token(Token = "0x60032C5")]
	[Address(RVA = "0x3ECE0B0", Offset = "0x3ECE0B0", VA = "0x3ECE0B0")]
	private BaseTitan FindNearestTitan()
	{
		return null;
	}

	[Token(Token = "0x60032C6")]
	[Address(RVA = "0x3ECEAF0", Offset = "0x3ECEAF0", VA = "0x3ECEAF0")]
	private Human FindNearestHuman()
	{
		return null;
	}

	[Token(Token = "0x60032C7")]
	[Address(RVA = "0x3EAD190", Offset = "0x3EAD190", VA = "0x3EAD190")]
	public void FalseAttack()
	{
	}

	[Token(Token = "0x60032C8")]
	[Address(RVA = "0x3EBA8D0", Offset = "0x3EBA8D0", VA = "0x3EBA8D0")]
	public void ContinueAnimation()
	{
	}

	[Token(Token = "0x60032C9")]
	[Address(RVA = "0x3ECEEB0", Offset = "0x3ECEEB0", VA = "0x3ECEEB0")]
	[PunRPC]
	public void ContinueAnimationRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032CA")]
	[Address(RVA = "0x3EBA960", Offset = "0x3EBA960", VA = "0x3EBA960")]
	public void PauseAnimation()
	{
	}

	[Token(Token = "0x60032CB")]
	[Address(RVA = "0x3ECEF70", Offset = "0x3ECEF70", VA = "0x3ECEF70")]
	[PunRPC]
	public void PauseAnimationRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032CC")]
	[Address(RVA = "0x3ECB050", Offset = "0x3ECB050", VA = "0x3ECB050")]
	private void CustomAnimationSpeed()
	{
	}

	[Token(Token = "0x60032CD")]
	[Address(RVA = "0x3EC0770", Offset = "0x3EC0770", VA = "0x3EC0770")]
	private bool HasHook()
	{
		return default(bool);
	}

	[Token(Token = "0x60032CE")]
	[Address(RVA = "0x3EC07E0", Offset = "0x3EC07E0", VA = "0x3EC07E0")]
	private bool IsHookedAny()
	{
		return default(bool);
	}

	[Token(Token = "0x60032CF")]
	[Address(RVA = "0x3EC0820", Offset = "0x3EC0820", VA = "0x3EC0820")]
	private bool IsHookedLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x60032D0")]
	[Address(RVA = "0x3EC0840", Offset = "0x3EC0840", VA = "0x3EC0840")]
	private bool IsHookedRight()
	{
		return default(bool);
	}

	[Token(Token = "0x60032D1")]
	[Address(RVA = "0x3EC0950", Offset = "0x3EC0950", VA = "0x3EC0950")]
	private bool IsFrontGrounded()
	{
		return default(bool);
	}

	[Token(Token = "0x60032D2")]
	[Address(RVA = "0x3EC0860", Offset = "0x3EC0860", VA = "0x3EC0860")]
	private bool IsPressDirectionTowardsHero()
	{
		return default(bool);
	}

	[Token(Token = "0x60032D3")]
	[Address(RVA = "0x3EC8C30", Offset = "0x3EC8C30", VA = "0x3EC8C30")]
	private bool IsPressDirectionRelativeToWall(Vector3 wallNormal, float dotValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60032D4")]
	[Address(RVA = "0x3EC0A60", Offset = "0x3EC0A60", VA = "0x3EC0A60")]
	private bool IsUpFrontGrounded()
	{
		return default(bool);
	}

	[Token(Token = "0x60032D5")]
	[Address(RVA = "0x3EC0B80", Offset = "0x3EC0B80", VA = "0x3EC0B80")]
	public bool IsFiringThunderspear()
	{
		return default(bool);
	}

	[Token(Token = "0x60032D6")]
	[Address(RVA = "0x3EC4420", Offset = "0x3EC4420", VA = "0x3EC4420")]
	private void ToggleBladeFire(int state)
	{
	}

	[Token(Token = "0x60032D7")]
	[Address(RVA = "0x3EBA9F0", Offset = "0x3EBA9F0", VA = "0x3EBA9F0")]
	private void ToggleBladeTrails(bool toggle)
	{
	}

	[Token(Token = "0x60032D8")]
	[Address(RVA = "0x3EB2580", Offset = "0x3EB2580", VA = "0x3EB2580")]
	public void ToggleBlades(bool toggle)
	{
	}

	[Token(Token = "0x60032D9")]
	[Address(RVA = "0x3ECEFB0", Offset = "0x3ECEFB0", VA = "0x3ECEFB0")]
	[PunRPC]
	protected void ToggleBladesRPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032DA")]
	[Address(RVA = "0x3ECF170", Offset = "0x3ECF170", VA = "0x3ECF170")]
	[PunRPC]
	protected void ToggleBladeTrailsRPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032DB")]
	[Address(RVA = "0x3ECF480", Offset = "0x3ECF480", VA = "0x3ECF480")]
	[PunRPC]
	protected void ToggleBladeFireRPC(int state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032DC")]
	[Address(RVA = "0x3ECF8F0", Offset = "0x3ECF8F0", VA = "0x3ECF8F0")]
	public void ToggleBuff1(bool toggle)
	{
	}

	[Token(Token = "0x60032DD")]
	[Address(RVA = "0x3ECFA20", Offset = "0x3ECFA20", VA = "0x3ECFA20")]
	[PunRPC]
	protected void ToggleBuff1RPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032DE")]
	[Address(RVA = "0x3ECFCF0", Offset = "0x3ECFCF0", VA = "0x3ECFCF0")]
	public void ToggleBuff2(bool toggle)
	{
	}

	[Token(Token = "0x60032DF")]
	[Address(RVA = "0x3ECFE20", Offset = "0x3ECFE20", VA = "0x3ECFE20")]
	[PunRPC]
	protected void ToggleBuff2RPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032E0")]
	[Address(RVA = "0x3ECFEE0", Offset = "0x3ECFEE0", VA = "0x3ECFEE0")]
	public void ToggleFire1(bool toggle)
	{
	}

	[Token(Token = "0x60032E1")]
	[Address(RVA = "0x3ED0010", Offset = "0x3ED0010", VA = "0x3ED0010")]
	[PunRPC]
	protected void ToggleFire1RPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60032E2")]
	[Address(RVA = "0x3ECFAE0", Offset = "0x3ECFAE0", VA = "0x3ECFAE0")]
	private void SetParticleSystemsActive(Transform parent, bool active)
	{
	}

	[Token(Token = "0x60032E3")]
	[Address(RVA = "0x3ED00D0", Offset = "0x3ED00D0", VA = "0x3ED00D0")]
	private void DisableAllCustomParticleEffects()
	{
	}

	[Token(Token = "0x60032E4")]
	[Address(RVA = "0x3ED0100", Offset = "0x3ED0100", VA = "0x3ED0100", Slot = "107")]
	protected override string GetFootstepAudio(int phase)
	{
		return null;
	}

	[Token(Token = "0x60032E5")]
	[Address(RVA = "0x3ED0160", Offset = "0x3ED0160", VA = "0x3ED0160", Slot = "106")]
	protected override int GetFootstepPhase()
	{
		return default(int);
	}

	[Token(Token = "0x60032E6")]
	[Address(RVA = "0x3ED03B0", Offset = "0x3ED03B0", VA = "0x3ED03B0", Slot = "101")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60032E7")]
	[Address(RVA = "0x3EC38B0", Offset = "0x3EC38B0", VA = "0x3EC38B0")]
	protected void EnableSmartTitans()
	{
	}

	[Token(Token = "0x60032E8")]
	[Address(RVA = "0x3ED05D0", Offset = "0x3ED05D0", VA = "0x3ED05D0", Slot = "96")]
	protected override void CheckGround()
	{
	}

	[Token(Token = "0x60032E9")]
	[Address(RVA = "0x3ED09B0", Offset = "0x3ED09B0", VA = "0x3ED09B0", Slot = "97")]
	public override bool CheckRaycastIgnoreTriggers(Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x60032EA")]
	[Address(RVA = "0x3ED0B80", Offset = "0x3ED0B80", VA = "0x3ED0B80")]
	public Vector3? PivotPosition()
	{
		return null;
	}

	[Token(Token = "0x60032EB")]
	[Address(RVA = "0x3ED0C70", Offset = "0x3ED0C70", VA = "0x3ED0C70", Slot = "108")]
	protected override List<Renderer> GetFPSDisabledRenderers()
	{
		return null;
	}

	[Token(Token = "0x60032EE")]
	[Address(RVA = "0x3ED1100", Offset = "0x3ED1100", VA = "0x3ED1100")]
	public Human()
	{
	}
}
