// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Human
// Update status: CHANGED in this game update
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

[Token(Token = "0x20006B4")]
internal class Human : BaseCharacter
{
	[Token(Token = "0x20006B5")]
	private sealed class SupplyTransfer
	{
		[Token(Token = "0x4001ED8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public int Id;

		[Token(Token = "0x4001ED9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Player Recipient;

		[Token(Token = "0x4001EDA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public BaseUseable Weapon;

		[Token(Token = "0x4001EDB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public float Gas;

		[Token(Token = "0x4001EDC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public int Ammo;

		[Token(Token = "0x4001EDD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int RemovedRounds;

		[Token(Token = "0x60041C2")]
		[Address(RVA = "0x5AF3840", Offset = "0x5AF2840", VA = "0x5AF3840")]
		public SupplyTransfer()
		{
		}
	}

	[Token(Token = "0x20006B7")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__228 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001EE2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001EE3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001EE4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Human _003C_003E4__this;

		[Token(Token = "0x17000B43")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60041C6")]
			[Address(RVA = "0x5AF3AF0", Offset = "0x5AF2AF0", VA = "0x5AF3AF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B44")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60041C8")]
			[Address(RVA = "0x5AF3B40", Offset = "0x5AF2B40", VA = "0x5AF3B40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60041C3")]
		[Address(RVA = "0x5AF3850", Offset = "0x5AF2850", VA = "0x5AF3850")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__228(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60041C4")]
		[Address(RVA = "0x5AF3870", Offset = "0x5AF2870", VA = "0x5AF3870", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60041C5")]
		[Address(RVA = "0x5AF3880", Offset = "0x5AF2880", VA = "0x5AF3880", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60041C7")]
		[Address(RVA = "0x5AF3B00", Offset = "0x5AF2B00", VA = "0x5AF3B00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20006B8")]
	[CompilerGenerated]
	private sealed class _003CWaitAndMount_003Ed__175 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001EE5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001EE6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001EE7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Human _003C_003E4__this;

		[Token(Token = "0x4001EE8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int mapObjectID;

		[Token(Token = "0x4001EE9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string transformName;

		[Token(Token = "0x4001EEA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Vector3 positionOffset;

		[Token(Token = "0x4001EEB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		public Vector3 rotationOffset;

		[Token(Token = "0x17000B45")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60041CC")]
			[Address(RVA = "0x5AF3C20", Offset = "0x5AF2C20", VA = "0x5AF3C20", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B46")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60041CE")]
			[Address(RVA = "0x5AF3C70", Offset = "0x5AF2C70", VA = "0x5AF3C70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60041C9")]
		[Address(RVA = "0x5AF3B50", Offset = "0x5AF2B50", VA = "0x5AF3B50")]
		[DebuggerHidden]
		public _003CWaitAndMount_003Ed__175(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60041CA")]
		[Address(RVA = "0x5AF3B70", Offset = "0x5AF2B70", VA = "0x5AF3B70", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60041CB")]
		[Address(RVA = "0x5AF3B80", Offset = "0x5AF2B80", VA = "0x5AF3B80", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60041CD")]
		[Address(RVA = "0x5AF3C30", Offset = "0x5AF2C30", VA = "0x5AF3C30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20006B9")]
	[CompilerGenerated]
	private sealed class _003CWaitAndTransformFromShifter_003Ed__203 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001EEC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001EED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001EEE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Human _003C_003E4__this;

		[Token(Token = "0x4001EEF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public float previousHumanGas;

		[Token(Token = "0x4001EF0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public BaseUseable previousHumanWeapon;

		[Token(Token = "0x17000B47")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60041D2")]
			[Address(RVA = "0x5AF3F90", Offset = "0x5AF2F90", VA = "0x5AF3F90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B48")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60041D4")]
			[Address(RVA = "0x5AF3FE0", Offset = "0x5AF2FE0", VA = "0x5AF3FE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60041CF")]
		[Address(RVA = "0x5AF3C80", Offset = "0x5AF2C80", VA = "0x5AF3C80")]
		[DebuggerHidden]
		public _003CWaitAndTransformFromShifter_003Ed__203(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60041D0")]
		[Address(RVA = "0x5AF3CA0", Offset = "0x5AF2CA0", VA = "0x5AF3CA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60041D1")]
		[Address(RVA = "0x5AF3CB0", Offset = "0x5AF2CB0", VA = "0x5AF3CB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60041D3")]
		[Address(RVA = "0x5AF3FA0", Offset = "0x5AF2FA0", VA = "0x5AF3FA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20006BA")]
	[CompilerGenerated]
	private sealed class _003CWaitForSupplyTransfer_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001EF1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001EF2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001EF3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Human _003C_003E4__this;

		[Token(Token = "0x4001EF4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public SupplyTransfer transfer;

		[Token(Token = "0x17000B49")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60041D8")]
			[Address(RVA = "0x5AF4180", Offset = "0x5AF3180", VA = "0x5AF4180", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B4A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60041DA")]
			[Address(RVA = "0x5AF41D0", Offset = "0x5AF31D0", VA = "0x5AF41D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60041D5")]
		[Address(RVA = "0x5AF3FF0", Offset = "0x5AF2FF0", VA = "0x5AF3FF0")]
		[DebuggerHidden]
		public _003CWaitForSupplyTransfer_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60041D6")]
		[Address(RVA = "0x5AF4010", Offset = "0x5AF3010", VA = "0x5AF4010", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60041D7")]
		[Address(RVA = "0x5AF4020", Offset = "0x5AF3020", VA = "0x5AF4020", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60041D9")]
		[Address(RVA = "0x5AF4190", Offset = "0x5AF3190", VA = "0x5AF4190", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001E5A")]
	private const float AirInteractionRange = 25f;

	[Token(Token = "0x4001E5B")]
	private const float GroundInteractionRange = 10f;

	[Token(Token = "0x4001E5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private SupplyTransfer _supplyTransfer;

	[Token(Token = "0x4001E5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private int _nextSupplyTransfer;

	[Token(Token = "0x4001E5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	public HumanComponentCache HumanCache;

	[Token(Token = "0x4001E5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	public BaseUseable Special;

	[Token(Token = "0x4001E60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	public BaseUseable Weapon;

	[Token(Token = "0x4001E61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	public HookUseable HookLeft;

	[Token(Token = "0x4001E62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	public HookUseable HookRight;

	[Token(Token = "0x4001E63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	public HumanMountState MountState;

	[Token(Token = "0x4001E64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x13C")]
	public HumanCarryState CarryState;

	[Token(Token = "0x4001E65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	public Horse Horse;

	[Token(Token = "0x4001E66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	public bool AllowHorse;

	[Token(Token = "0x4001E67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x149")]
	public bool AllowSkin;

	[Token(Token = "0x4001E68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	public HumanSetup Setup;

	[Token(Token = "0x4001E69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	public HumanStats Stats;

	[Token(Token = "0x4001E6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	public bool FinishSetup;

	[Token(Token = "0x4001E6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private HumanCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x4001E6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static LayerMask AimMask;

	[Token(Token = "0x4001E6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public static LayerMask ClipMask;

	[Token(Token = "0x4001E6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private Dictionary<Renderer, Material> FPSMaterials;

	[Token(Token = "0x4001E6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly RaycastHit[] _raycastHits;

	[Token(Token = "0x4001E70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private HumanState _state;

	[Token(Token = "0x4001E71")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	public string CurrentSpecial;

	[Token(Token = "0x4001E72")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	public BaseTitan Grabber;

	[Token(Token = "0x4001E73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	public Transform GrabHand;

	[Token(Token = "0x4001E74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	public Human Carrier;

	[Token(Token = "0x4001E75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	public Transform CarryBack;

	[Token(Token = "0x4001E76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	public Human BackHuman;

	[Token(Token = "0x4001E77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	public Vector3 CarryVelocity;

	[Token(Token = "0x4001E78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	public MapObject MountedMapObject;

	[Token(Token = "0x4001E79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	public Transform MountedTransform;

	[Token(Token = "0x4001E7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	public Vector3 MountedPositionOffset;

	[Token(Token = "0x4001E7B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1DC")]
	public Vector3 MountedRotationOffset;

	[Token(Token = "0x4001E7C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	public Vector3 _lastMountedPosition;

	[Token(Token = "0x4001E7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F4")]
	public Vector3 _mountedVelocity;

	[Token(Token = "0x4001E7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x200")]
	public bool CancelHookLeftKey;

	[Token(Token = "0x4001E7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x201")]
	public bool CancelHookRightKey;

	[Token(Token = "0x4001E80")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x202")]
	public bool CancelHookBothKey;

	[Token(Token = "0x4001E81")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x203")]
	public bool CanDodge;

	[Token(Token = "0x4001E82")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x204")]
	public bool IsInvincible;

	[Token(Token = "0x4001E83")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x208")]
	public float InvincibleTimeLeft;

	[Token(Token = "0x4001E84")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20C")]
	public bool CanMountedAttack;

	[Token(Token = "0x4001E85")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20D")]
	public bool InMountedCombat;

	[Token(Token = "0x4001E86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20E")]
	public bool IsAttackableState;

	[Token(Token = "0x4001E87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20F")]
	public bool IsRefillable;

	[Token(Token = "0x4001E88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x210")]
	private object[] _lastMountMessage;

	[Token(Token = "0x4001E89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x218")]
	private int _lastCarryRPCSender;

	[Token(Token = "0x4001E8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21C")]
	private float _grabIFrames;

	[Token(Token = "0x4001E8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x220")]
	private bool _bladeTrailActive;

	[Token(Token = "0x4001E8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x224")]
	private int _bladeFireState;

	[Token(Token = "0x4001E8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x228")]
	private bool _buff1Active;

	[Token(Token = "0x4001E8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x229")]
	private bool _buff2Active;

	[Token(Token = "0x4001E8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x22A")]
	private bool _fire1Active;

	[Token(Token = "0x4001E90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x22C")]
	public float ReelInAxis;

	[Token(Token = "0x4001E91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x230")]
	public float ReelOutAxis;

	[Token(Token = "0x4001E92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x234")]
	public float ReelOutScrollTimeLeft;

	[Token(Token = "0x4001E93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x238")]
	public float TargetMagnitude;

	[Token(Token = "0x4001E94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x23C")]
	public bool IsWalk;

	[Token(Token = "0x4001E95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x23D")]
	private bool _pivot;

	[Token(Token = "0x4001E96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x23E")]
	private bool _pivotLeft;

	[Token(Token = "0x4001E97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x23F")]
	private bool _pivotRight;

	[Token(Token = "0x4001E98")]
	private const float MaxVelocityChange = 10f;

	[Token(Token = "0x4001E99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x240")]
	private float _originalDashSpeed;

	[Token(Token = "0x4001E9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x244")]
	public Quaternion _targetRotation;

	[Token(Token = "0x4001E9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x254")]
	private float _wallRunTime;

	[Token(Token = "0x4001E9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x258")]
	private bool _wallJump;

	[Token(Token = "0x4001E9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x259")]
	private bool _wallSlide;

	[Token(Token = "0x4001E9E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x25A")]
	private bool _canWallSlideJump;

	[Token(Token = "0x4001E9F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x25C")]
	private Vector3 _wallSlideGround;

	[Token(Token = "0x4001EA0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x268")]
	private bool _launchLeft;

	[Token(Token = "0x4001EA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x269")]
	private bool _launchRight;

	[Token(Token = "0x4001EA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x26C")]
	private float _launchLeftTime;

	[Token(Token = "0x4001EA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x270")]
	private float _launchRightTime;

	[Token(Token = "0x4001EA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x274")]
	private bool _needLean;

	[Token(Token = "0x4001EA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x275")]
	private bool _almostSingleHook;

	[Token(Token = "0x4001EA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x276")]
	private bool _leanLeft;

	[Token(Token = "0x4001EA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x277")]
	private bool _isTrigger;

	[Token(Token = "0x4001EA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x278")]
	private bool _useFixedUpdateClipping;

	[Token(Token = "0x4001EA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x27C")]
	private Vector3 _lastPosition;

	[Token(Token = "0x4001EAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x288")]
	private Vector3 _lastVelocity;

	[Token(Token = "0x4001EAB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x294")]
	private Vector3 _currentVelocity;

	[Token(Token = "0x4001EAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static LayerMask TitanDetectionMask;

	[Token(Token = "0x4001EAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2A0")]
	private LayerMask HumanGroundMaskLayers;

	[Token(Token = "0x4001EAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2A4")]
	private Quaternion _oldHeadRotation;

	[Token(Token = "0x4001EAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2B4")]
	public Vector2 LastGoodHeadAngle;

	[Token(Token = "0x4001EB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2BC")]
	public Quaternion? LateUpdateHeadRotation;

	[Token(Token = "0x4001EB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2D0")]
	public Quaternion? LateUpdateHeadRotationRecv;

	[Token(Token = "0x4001EB2")]
	private const float CarryLagCompensationDistance = 100f;

	[Token(Token = "0x4001EB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2E8")]
	public string StandAnimation;

	[Token(Token = "0x4001EB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2F0")]
	public string AttackAnimation;

	[Token(Token = "0x4001EB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2F8")]
	public bool _gunArmAim;

	[Token(Token = "0x4001EB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x300")]
	public string RunAnimation;

	[Token(Token = "0x4001EB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x308")]
	public string WalkAnimation;

	[Token(Token = "0x4001EB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x310")]
	public bool _attackRelease;

	[Token(Token = "0x4001EB9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x311")]
	public bool _attackButtonRelease;

	[Token(Token = "0x4001EBA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x312")]
	public bool _reelInWaitForRelease;

	[Token(Token = "0x4001EBB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x314")]
	private float _stateTimeLeft;

	[Token(Token = "0x4001EBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x318")]
	private float _dashTimeLeft;

	[Token(Token = "0x4001EBD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31C")]
	private bool _cancelGasDisable;

	[Token(Token = "0x4001EBE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31D")]
	private bool _gasEffectEnabled;

	[Token(Token = "0x4001EBF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31E")]
	private bool _smokeActive;

	[Token(Token = "0x4001EC0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31F")]
	private bool _sparksActive;

	[Token(Token = "0x4001EC1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x320")]
	private bool _animationStopped;

	[Token(Token = "0x4001EC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x321")]
	private bool _needFinishReload;

	[Token(Token = "0x4001EC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x322")]
	private bool _needFinishSheatheSwap;

	[Token(Token = "0x4001EC4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x323")]
	private bool _sheathedTsLeft;

	[Token(Token = "0x4001EC5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x324")]
	private bool _sheathedTsRight;

	[Token(Token = "0x4001EC6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x325")]
	public bool Sheathed;

	[Token(Token = "0x4001EC7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x328")]
	private float _reloadTimeLeft;

	[Token(Token = "0x4001EC8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x32C")]
	private float _reloadCooldownLeft;

	[Token(Token = "0x4001EC9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x330")]
	private string _reloadAnimation;

	[Token(Token = "0x4001ECA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x338")]
	private float _dashCooldownLeft;

	[Token(Token = "0x4001ECB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x340")]
	private Human _hookHuman;

	[Token(Token = "0x4001ECC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x348")]
	private bool _hookHumanLeft;

	[Token(Token = "0x4001ECD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34C")]
	private float _hookHumanConstantTimeLeft;

	[Token(Token = "0x4001ECE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x350")]
	private bool _isReelingOut;

	[Token(Token = "0x4001ECF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x358")]
	private Dictionary<BaseTitan, float> _lastNapeHitTimes;

	[Token(Token = "0x4001ED0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x360")]
	private readonly HashSet<BasicTitan> _haircutTargets;

	[Token(Token = "0x4001ED1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x368")]
	private Material _originalSmokeMaterial;

	[Token(Token = "0x4001ED2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x370")]
	public IHumanController Controller;

	[Token(Token = "0x4001ED3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x378")]
	public InGameCharacterSettings Settings;

	[Token(Token = "0x4001ED4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x380")]
	private Collider _lastHit;

	[Token(Token = "0x4001ED5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x388")]
	private Vector3 _lastDirection;

	[Token(Token = "0x4001ED6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x394")]
	private float _collisionTimer;

	[Token(Token = "0x4001ED7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x398")]
	private float _collisionInterval;

	[Token(Token = "0x17000B35")]
	private float InteractionRange
	{
		[Token(Token = "0x60040EC")]
		[Address(RVA = "0x5ABD0B0", Offset = "0x5ABC0B0", VA = "0x5ABD0B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B36")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x60040F7")]
		[Address(RVA = "0x5ABEF80", Offset = "0x5ABDF80", VA = "0x5ABEF80", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B37")]
	public override float MaxFootstepDistance
	{
		[Token(Token = "0x60040F8")]
		[Address(RVA = "0x5ABF2B0", Offset = "0x5ABE2B0", VA = "0x5ABF2B0", Slot = "60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B38")]
	public override float MaxSoundDistance
	{
		[Token(Token = "0x60040F9")]
		[Address(RVA = "0x5ABF2C0", Offset = "0x5ABE2C0", VA = "0x5ABF2C0", Slot = "61")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B39")]
	public override float LODQualityMediumDistance
	{
		[Token(Token = "0x60040FA")]
		[Address(RVA = "0x5ABF2D0", Offset = "0x5ABE2D0", VA = "0x5ABF2D0", Slot = "62")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B3A")]
	public override float LODQualityLowDistance
	{
		[Token(Token = "0x60040FB")]
		[Address(RVA = "0x5ABF2E0", Offset = "0x5ABE2E0", VA = "0x5ABF2E0", Slot = "63")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B3B")]
	public override float CullShadowsDistance
	{
		[Token(Token = "0x60040FC")]
		[Address(RVA = "0x5ABF2F0", Offset = "0x5ABE2F0", VA = "0x5ABF2F0", Slot = "64")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B3C")]
	public override float CullRendererDistance
	{
		[Token(Token = "0x60040FD")]
		[Address(RVA = "0x5ABF300", Offset = "0x5ABE300", VA = "0x5ABF300", Slot = "65")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B3D")]
	public override float CullEffectsDistance
	{
		[Token(Token = "0x60040FE")]
		[Address(RVA = "0x5ABF310", Offset = "0x5ABE310", VA = "0x5ABF310", Slot = "66")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B3E")]
	public float CullGasEffectDistance
	{
		[Token(Token = "0x60040FF")]
		[Address(RVA = "0x5ABF320", Offset = "0x5ABE320", VA = "0x5ABF320")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B3F")]
	public bool Pivot
	{
		[Token(Token = "0x6004100")]
		[Address(RVA = "0x5ABF330", Offset = "0x5ABE330", VA = "0x5ABF330")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B40")]
	public override LayerMask GroundMask
	{
		[Token(Token = "0x6004101")]
		[Address(RVA = "0x5ABF340", Offset = "0x5ABE340", VA = "0x5ABF340", Slot = "67")]
		get
		{
			return default(LayerMask);
		}
	}

	[Token(Token = "0x17000B41")]
	public bool IsUnarmed
	{
		[Token(Token = "0x6004131")]
		[Address(RVA = "0x5AC3D00", Offset = "0x5AC2D00", VA = "0x5AC3D00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B42")]
	public HumanState State
	{
		[Token(Token = "0x60041BC")]
		[Address(RVA = "0x5AE1310", Offset = "0x5AE0310", VA = "0x5AE1310")]
		get
		{
			return default(HumanState);
		}
		[Token(Token = "0x60041BD")]
		[Address(RVA = "0x5AC1AE0", Offset = "0x5AC0AE0", VA = "0x5AC1AE0")]
		set
		{
		}
	}

	[Token(Token = "0x60040ED")]
	[Address(RVA = "0x5ABD0D0", Offset = "0x5ABC0D0", VA = "0x5ABD0D0")]
	public void ToggleCarry()
	{
	}

	[Token(Token = "0x60040EE")]
	[Address(RVA = "0x5ABD780", Offset = "0x5ABC780", VA = "0x5ABD780")]
	public void ShareSupplies()
	{
	}

	[Token(Token = "0x60040EF")]
	[Address(RVA = "0x5ABE3E0", Offset = "0x5ABD3E0", VA = "0x5ABE3E0")]
	[IteratorStateMachine(typeof(_003CWaitForSupplyTransfer_003Ed__9))]
	private IEnumerator WaitForSupplyTransfer(SupplyTransfer transfer)
	{
		return null;
	}

	[Token(Token = "0x60040F0")]
	[Address(RVA = "0x5ABE460", Offset = "0x5ABD460", VA = "0x5ABE460")]
	[PunRPC]
	public void ShareSuppliesRPC(int recipientId, int transferId, float gas, int ammo, int weapon, float range, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60040F1")]
	[Address(RVA = "0x5ABEBF0", Offset = "0x5ABDBF0", VA = "0x5ABEBF0")]
	[PunRPC]
	public void ConfirmSharedSuppliesRPC(int transferId, float gas, int ammo, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60040F2")]
	[Address(RVA = "0x5ABECA0", Offset = "0x5ABDCA0", VA = "0x5ABECA0")]
	private void CompleteSupplyTransfer(float gas, int ammo)
	{
	}

	[Token(Token = "0x60040F3")]
	[Address(RVA = "0x5ABE010", Offset = "0x5ABD010", VA = "0x5ABE010")]
	internal static int GetSupplyAmmo(BaseUseable weapon)
	{
		return default(int);
	}

	[Token(Token = "0x60040F4")]
	[Address(RVA = "0x5ABE140", Offset = "0x5ABD140", VA = "0x5ABE140")]
	internal static void RemoveSupplyAmmo(BaseUseable weapon, int amount)
	{
	}

	[Token(Token = "0x60040F5")]
	[Address(RVA = "0x5ABE9C0", Offset = "0x5ABD9C0", VA = "0x5ABE9C0")]
	internal static int AddSupplyAmmo(BaseUseable weapon, int amount, int restoreRounds = 0)
	{
		return default(int);
	}

	[Token(Token = "0x60040F6")]
	[Address(RVA = "0x5ABE290", Offset = "0x5ABD290", VA = "0x5ABE290")]
	private void RefreshSupplyWeapon()
	{
	}

	[Token(Token = "0x6004102")]
	[Address(RVA = "0x5ABF350", Offset = "0x5ABE350", VA = "0x5ABF350", Slot = "69")]
	public override bool AlwaysAnimate()
	{
		return default(bool);
	}

	[Token(Token = "0x6004103")]
	[Address(RVA = "0x5ABF3E0", Offset = "0x5ABE3E0", VA = "0x5ABF3E0", Slot = "79")]
	protected override void CreateDetection()
	{
	}

	[Token(Token = "0x6004104")]
	[Address(RVA = "0x5ABF480", Offset = "0x5ABE480", VA = "0x5ABF480")]
	public void DieChangeCharacter()
	{
	}

	[Token(Token = "0x6004105")]
	[Address(RVA = "0x5ABF540", Offset = "0x5ABE540", VA = "0x5ABF540")]
	public void IsChangingPosition()
	{
	}

	[Token(Token = "0x6004106")]
	[Address(RVA = "0x5ABF550", Offset = "0x5ABE550", VA = "0x5ABF550")]
	[PunRPC]
	public void BlowAwayRPC(Vector3 force, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004107")]
	[Address(RVA = "0x5ABF590", Offset = "0x5ABE590", VA = "0x5ABF590", Slot = "93")]
	[PunRPC]
	public override void MarkDeadRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004108")]
	[Address(RVA = "0x5ABF7D0", Offset = "0x5ABE7D0", VA = "0x5ABF7D0", Slot = "121")]
	[PunRPC]
	public virtual void UngrabRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004109")]
	[Address(RVA = "0x5ABFAC0", Offset = "0x5ABEAC0", VA = "0x5ABFAC0")]
	public Ray GetAimRayAfterHuman()
	{
		return default(Ray);
	}

	[Token(Token = "0x600410A")]
	[Address(RVA = "0x5ABFDD0", Offset = "0x5ABEDD0", VA = "0x5ABFDD0")]
	public Ray GetAimRayAfterHumanCheap()
	{
		return default(Ray);
	}

	[Token(Token = "0x600410B")]
	[Address(RVA = "0x5ABFFE0", Offset = "0x5ABEFE0", VA = "0x5ABFFE0", Slot = "76")]
	public override Vector3 GetAimPoint()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600410C")]
	[Address(RVA = "0x5AC0090", Offset = "0x5ABF090", VA = "0x5AC0090")]
	public Vector3 GetAimPoint(Vector3 origin, Vector3 direction)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600410D")]
	[Address(RVA = "0x5AC01A0", Offset = "0x5ABF1A0", VA = "0x5AC01A0")]
	private Vector2 GetLookAngle(Vector3 target)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600410E")]
	[Address(RVA = "0x5AC03B0", Offset = "0x5ABF3B0", VA = "0x5AC03B0")]
	public bool CanJump()
	{
		return default(bool);
	}

	[Token(Token = "0x600410F")]
	[Address(RVA = "0x5AC04A0", Offset = "0x5ABF4A0", VA = "0x5AC04A0")]
	public void Jump()
	{
	}

	[Token(Token = "0x6004110")]
	[Address(RVA = "0x5AC0780", Offset = "0x5ABF780", VA = "0x5AC0780")]
	public void Mount(Transform transform, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack = false)
	{
	}

	[Token(Token = "0x6004111")]
	[Address(RVA = "0x5AC0D10", Offset = "0x5ABFD10", VA = "0x5AC0D10")]
	public void Mount(MapObject mapObject, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack = false)
	{
	}

	[Token(Token = "0x6004112")]
	[Address(RVA = "0x5AC0990", Offset = "0x5ABF990", VA = "0x5AC0990")]
	public void Mount(MapObject mapObject, string transformName, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack = false)
	{
	}

	[Token(Token = "0x6004113")]
	[Address(RVA = "0x5AC11F0", Offset = "0x5AC01F0", VA = "0x5AC11F0")]
	[PunRPC]
	public void MountRPC(int mapObjectID, string transformName, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004114")]
	[Address(RVA = "0x5AC15D0", Offset = "0x5AC05D0", VA = "0x5AC15D0")]
	[IteratorStateMachine(typeof(_003CWaitAndMount_003Ed__175))]
	private IEnumerator WaitAndMount(int mapObjectID, string transformName, Vector3 positionOffset, Vector3 rotationOffset)
	{
		return null;
	}

	[Token(Token = "0x6004115")]
	[Address(RVA = "0x5AC1390", Offset = "0x5AC0390", VA = "0x5AC1390")]
	private void FinishMount(int mapObjectID, string transformName, Vector3 positionOffset, Vector3 rotationOffset)
	{
	}

	[Token(Token = "0x6004116")]
	[Address(RVA = "0x5AC0D90", Offset = "0x5ABFD90", VA = "0x5AC0D90")]
	public void Unmount(bool immediate)
	{
	}

	[Token(Token = "0x6004117")]
	[Address(RVA = "0x5AC16A0", Offset = "0x5AC06A0", VA = "0x5AC16A0")]
	[PunRPC]
	public void UnmountRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004118")]
	[Address(RVA = "0x5AC1720", Offset = "0x5AC0720", VA = "0x5AC1720")]
	public void MountHorse()
	{
	}

	[Token(Token = "0x6004119")]
	[Address(RVA = "0x5AC19C0", Offset = "0x5AC09C0", VA = "0x5AC19C0")]
	public void Dodge(float targetAngle)
	{
	}

	[Token(Token = "0x600411A")]
	[Address(RVA = "0x5AC1B00", Offset = "0x5AC0B00", VA = "0x5AC1B00")]
	public void DodgeWall()
	{
	}

	[Token(Token = "0x600411B")]
	[Address(RVA = "0x5AC1BA0", Offset = "0x5AC0BA0", VA = "0x5AC1BA0")]
	public void Dash(float targetAngle)
	{
	}

	[Token(Token = "0x600411C")]
	[Address(RVA = "0x5AC1FB0", Offset = "0x5AC0FB0", VA = "0x5AC1FB0")]
	public bool DashVertical(float targetAngle, Vector3 direction, [Optional] Vector3? percentPower)
	{
		return default(bool);
	}

	[Token(Token = "0x600411D")]
	[Address(RVA = "0x5AC05B0", Offset = "0x5ABF5B0", VA = "0x5AC05B0")]
	public void Idle()
	{
	}

	[Token(Token = "0x600411E")]
	[Address(RVA = "0x5AC23F0", Offset = "0x5AC13F0", VA = "0x5AC23F0")]
	public void Grab(BaseTitan grabber, string type)
	{
	}

	[Token(Token = "0x600411F")]
	[Address(RVA = "0x5ABF880", Offset = "0x5ABE880", VA = "0x5ABF880")]
	public void Ungrab(bool notifyTitan, bool idle, bool breakArm = false)
	{
	}

	[Token(Token = "0x6004120")]
	[Address(RVA = "0x5AC2940", Offset = "0x5AC1940", VA = "0x5AC2940")]
	public void Carry(Human carrier, Transform back)
	{
	}

	[Token(Token = "0x6004121")]
	[Address(RVA = "0x5AC2A80", Offset = "0x5AC1A80", VA = "0x5AC2A80")]
	[PunRPC]
	public void CarryRPC(int initiatorViewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004122")]
	[Address(RVA = "0x5AC2E70", Offset = "0x5AC1E70", VA = "0x5AC2E70")]
	[PunRPC]
	public void ConfirmCarryRPC(int initiatorViewId, int targetViewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004123")]
	[Address(RVA = "0x5AC3070", Offset = "0x5AC2070", VA = "0x5AC3070")]
	public void Uncarry()
	{
	}

	[Token(Token = "0x6004124")]
	[Address(RVA = "0x5AC3250", Offset = "0x5AC2250", VA = "0x5AC3250", Slot = "122")]
	[PunRPC]
	public virtual void UncarryRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004125")]
	[Address(RVA = "0x5AC31B0", Offset = "0x5AC21B0", VA = "0x5AC31B0")]
	public void SetVelocityFromCarrier()
	{
	}

	[Token(Token = "0x6004126")]
	[Address(RVA = "0x5AC3320", Offset = "0x5AC2320", VA = "0x5AC3320")]
	public Human GetHumanAlongRay(Ray ray, float distance)
	{
		return null;
	}

	[Token(Token = "0x6004127")]
	[Address(RVA = "0x5AC36A0", Offset = "0x5AC26A0", VA = "0x5AC36A0")]
	public bool IsValidCarryTarget(Human human, float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x6004128")]
	[Address(RVA = "0x5AC3870", Offset = "0x5AC2870", VA = "0x5AC3870")]
	public bool IsCarryable(Human human)
	{
		return default(bool);
	}

	[Token(Token = "0x6004129")]
	[Address(RVA = "0x5AC2C90", Offset = "0x5AC1C90", VA = "0x5AC2C90")]
	private bool IsCarryableBy(Human initiator)
	{
		return default(bool);
	}

	[Token(Token = "0x600412A")]
	[Address(RVA = "0x5ABD320", Offset = "0x5ABC320", VA = "0x5ABD320")]
	public Human GetCarryOption(float distance)
	{
		return null;
	}

	[Token(Token = "0x600412B")]
	[Address(RVA = "0x5ABD650", Offset = "0x5ABC650", VA = "0x5ABD650")]
	public void StartCarrySpecial(Human target)
	{
	}

	[Token(Token = "0x600412C")]
	[Address(RVA = "0x5ABD240", Offset = "0x5ABC240", VA = "0x5ABD240")]
	public void StopCarrySpecial()
	{
	}

	[Token(Token = "0x600412D")]
	[Address(RVA = "0x5AC3960", Offset = "0x5AC2960", VA = "0x5AC3960")]
	public void ClearAllActionsForSpecial()
	{
	}

	[Token(Token = "0x600412E")]
	[Address(RVA = "0x5AC39E0", Offset = "0x5AC29E0", VA = "0x5AC39E0")]
	public void SpecialActionState(float time)
	{
	}

	[Token(Token = "0x600412F")]
	[Address(RVA = "0x5AC3A10", Offset = "0x5AC2A10", VA = "0x5AC3A10")]
	public void TransformShifter(string shifter, float liveTime)
	{
	}

	[Token(Token = "0x6004130")]
	[Address(RVA = "0x5AC3C60", Offset = "0x5AC2C60", VA = "0x5AC3C60")]
	[IteratorStateMachine(typeof(_003CWaitAndTransformFromShifter_003Ed__203))]
	public IEnumerator WaitAndTransformFromShifter(float previousHumanGas, BaseUseable previousHumanWeapon)
	{
		return null;
	}

	[Token(Token = "0x6004132")]
	[Address(RVA = "0x5AC3D60", Offset = "0x5AC2D60", VA = "0x5AC3D60")]
	public void Reload()
	{
	}

	[Token(Token = "0x6004133")]
	[Address(RVA = "0x5AC4180", Offset = "0x5AC3180", VA = "0x5AC4180")]
	private void PlayWeaponSwapSound()
	{
	}

	[Token(Token = "0x6004134")]
	[Address(RVA = "0x5AC4270", Offset = "0x5AC3270", VA = "0x5AC4270")]
	private void PlayWeaponSwapAnimation()
	{
	}

	[Token(Token = "0x6004135")]
	[Address(RVA = "0x5AC43C0", Offset = "0x5AC33C0", VA = "0x5AC43C0")]
	private bool WeaponSwapAnimationDone()
	{
		return default(bool);
	}

	[Token(Token = "0x6004136")]
	[Address(RVA = "0x5AC4470", Offset = "0x5AC3470", VA = "0x5AC4470")]
	public bool CanSheathe()
	{
		return default(bool);
	}

	[Token(Token = "0x6004137")]
	[Address(RVA = "0x5AC4530", Offset = "0x5AC3530", VA = "0x5AC4530")]
	public void ToggleSheathe()
	{
	}

	[Token(Token = "0x6004138")]
	[Address(RVA = "0x5AC4550", Offset = "0x5AC3550", VA = "0x5AC4550")]
	public void SetSheathed(bool sheathed)
	{
	}

	[Token(Token = "0x6004139")]
	[Address(RVA = "0x5AC4890", Offset = "0x5AC3890", VA = "0x5AC4890")]
	[PunRPC]
	protected void SetSheathedRPC(bool sheathed, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600413A")]
	[Address(RVA = "0x5AC48D0", Offset = "0x5AC38D0", VA = "0x5AC48D0")]
	public void RefreshWeaponVisibility()
	{
	}

	[Token(Token = "0x600413B")]
	[Address(RVA = "0x5AC49E0", Offset = "0x5AC39E0", VA = "0x5AC49E0")]
	protected void FinishSheatheSwap()
	{
	}

	[Token(Token = "0x600413C")]
	[Address(RVA = "0x5AC49F0", Offset = "0x5AC39F0", VA = "0x5AC49F0")]
	private void ResetSheatheState()
	{
	}

	[Token(Token = "0x600413D")]
	[Address(RVA = "0x5AC4B30", Offset = "0x5AC3B30", VA = "0x5AC4B30")]
	protected void FinishReload()
	{
	}

	[Token(Token = "0x600413E")]
	[Address(RVA = "0x5AC4CA0", Offset = "0x5AC3CA0", VA = "0x5AC4CA0")]
	public bool Refill()
	{
		return default(bool);
	}

	[Token(Token = "0x600413F")]
	[Address(RVA = "0x5AC4E10", Offset = "0x5AC3E10", VA = "0x5AC4E10")]
	public bool SupplySpawnableRefill()
	{
		return default(bool);
	}

	[Token(Token = "0x6004140")]
	[Address(RVA = "0x5AC4F30", Offset = "0x5AC3F30", VA = "0x5AC4F30")]
	public bool NeedRefill(bool isGasTank)
	{
		return default(bool);
	}

	[Token(Token = "0x6004141")]
	[Address(RVA = "0x5AC5070", Offset = "0x5AC4070", VA = "0x5AC5070")]
	public void FinishRefill()
	{
	}

	[Token(Token = "0x6004142")]
	[Address(RVA = "0x5AC5120", Offset = "0x5AC4120", VA = "0x5AC5120", Slot = "80")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x6004143")]
	[Address(RVA = "0x5AC5450", Offset = "0x5AC4450", VA = "0x5AC5450", Slot = "81")]
	public override void ForceAnimation(string animation, float fade)
	{
	}

	[Token(Token = "0x6004144")]
	[Address(RVA = "0x5ABE360", Offset = "0x5ABD360", VA = "0x5ABE360")]
	public void EmoteAnimation(string animation)
	{
	}

	[Token(Token = "0x6004145")]
	[Address(RVA = "0x5ABD1F0", Offset = "0x5ABC1F0", VA = "0x5ABD1F0")]
	public bool CanEmote()
	{
		return default(bool);
	}

	[Token(Token = "0x6004146")]
	[Address(RVA = "0x5AC54E0", Offset = "0x5AC44E0", VA = "0x5AC54E0", Slot = "77")]
	public override Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x6004147")]
	[Address(RVA = "0x5AC5500", Offset = "0x5AC4500", VA = "0x5AC5500", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6004148")]
	[Address(RVA = "0x5AC5580", Offset = "0x5AC4580", VA = "0x5AC5580", Slot = "84")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__228))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x6004149")]
	[Address(RVA = "0x5AC55F0", Offset = "0x5AC45F0", VA = "0x5AC55F0")]
	public void Init(bool ai, string team, InGameCharacterSettings settings)
	{
	}

	[Token(Token = "0x600414A")]
	[Address(RVA = "0x5AC56D0", Offset = "0x5AC46D0", VA = "0x5AC56D0")]
	public void ReloadHuman(InGameCharacterSettings settings)
	{
	}

	[Token(Token = "0x600414B")]
	[Address(RVA = "0x5AC8530", Offset = "0x5AC7530", VA = "0x5AC8530", Slot = "101")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600414C")]
	[Address(RVA = "0x5AC8800", Offset = "0x5AC7800", VA = "0x5AC8800", Slot = "104")]
	protected override void Start()
	{
	}

	[Token(Token = "0x600414D")]
	[Address(RVA = "0x5AC8F20", Offset = "0x5AC7F20", VA = "0x5AC8F20", Slot = "70")]
	public override void OnDistanceUpdate(float distance, float soundDistance)
	{
	}

	[Token(Token = "0x600414E")]
	[Address(RVA = "0x5AC8F50", Offset = "0x5AC7F50", VA = "0x5AC8F50", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x600414F")]
	[Address(RVA = "0x5AC5AC0", Offset = "0x5AC4AC0", VA = "0x5AC5AC0")]
	private string GetNetworkSetupJson()
	{
		return null;
	}

	[Token(Token = "0x6004150")]
	[Address(RVA = "0x5AC9400", Offset = "0x5AC8400", VA = "0x5AC9400", Slot = "90")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6004151")]
	[Address(RVA = "0x5AC9630", Offset = "0x5AC8630", VA = "0x5AC9630", Slot = "91")]
	[PunRPC]
	public override void GetDamagedRPC(string name, int damage)
	{
	}

	[Token(Token = "0x6004152")]
	[Address(RVA = "0x5AC9650", Offset = "0x5AC8650", VA = "0x5AC9650", Slot = "89")]
	public override void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
	}

	[Token(Token = "0x6004153")]
	[Address(RVA = "0x5ACAFC0", Offset = "0x5AC9FC0", VA = "0x5ACAFC0")]
	protected void Update()
	{
	}

	[Token(Token = "0x6004154")]
	[Address(RVA = "0x5ACC970", Offset = "0x5ACB970", VA = "0x5ACC970", Slot = "113")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x6004155")]
	[Address(RVA = "0x5AD26A0", Offset = "0x5AD16A0", VA = "0x5AD26A0")]
	private bool CanStockDueToBL()
	{
		return default(bool);
	}

	[Token(Token = "0x6004156")]
	[Address(RVA = "0x5AD24E0", Offset = "0x5AD14E0", VA = "0x5AD24E0")]
	private bool ValidStockAttacks()
	{
		return default(bool);
	}

	[Token(Token = "0x6004157")]
	[Address(RVA = "0x5AC27C0", Offset = "0x5AC17C0", VA = "0x5AC27C0")]
	public bool HasGrabImmunity()
	{
		return default(bool);
	}

	[Token(Token = "0x6004158")]
	[Address(RVA = "0x5AD4350", Offset = "0x5AD3350", VA = "0x5AD4350")]
	public void StartGrabImmunity(float duration)
	{
	}

	[Token(Token = "0x6004159")]
	[Address(RVA = "0x5ACC550", Offset = "0x5ACB550", VA = "0x5ACC550")]
	private void UpdateIFrames()
	{
	}

	[Token(Token = "0x600415A")]
	[Address(RVA = "0x5ACC5E0", Offset = "0x5ACB5E0", VA = "0x5ACC5E0")]
	private void UpdateBladeFire()
	{
	}

	[Token(Token = "0x600415B")]
	[Address(RVA = "0x5AD44A0", Offset = "0x5AD34A0", VA = "0x5AD44A0")]
	private void lookAtTarget(Vector3 target)
	{
	}

	[Token(Token = "0x600415C")]
	[Address(RVA = "0x5AD4870", Offset = "0x5AD3870", VA = "0x5AD4870")]
	protected void LateUpdateHeadPosition(Vector3 position)
	{
	}

	[Token(Token = "0x600415D")]
	[Address(RVA = "0x5AD4E70", Offset = "0x5AD3E70", VA = "0x5AD4E70", Slot = "114")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x600415E")]
	[Address(RVA = "0x5AD67B0", Offset = "0x5AD57B0", VA = "0x5AD67B0", Slot = "116")]
	protected override void LateUpdateFPS()
	{
	}

	[Token(Token = "0x600415F")]
	[Address(RVA = "0x5AD6C20", Offset = "0x5AD5C20", VA = "0x5AD6C20")]
	protected void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x6004160")]
	[Address(RVA = "0x5AD8450", Offset = "0x5AD7450", VA = "0x5AD8450")]
	protected void OnCollisionStay(Collision collision)
	{
	}

	[Token(Token = "0x6004161")]
	[Address(RVA = "0x5AD1830", Offset = "0x5AD0830", VA = "0x5AD1830")]
	private void FixedUpdateWallSlide()
	{
	}

	[Token(Token = "0x6004162")]
	[Address(RVA = "0x5AD1200", Offset = "0x5AD0200", VA = "0x5AD1200")]
	private void EndWallSlide()
	{
	}

	[Token(Token = "0x6004163")]
	[Address(RVA = "0x5AD61C0", Offset = "0x5AD51C0", VA = "0x5AD61C0")]
	private void LateUpdateReelOut()
	{
	}

	[Token(Token = "0x6004164")]
	[Address(RVA = "0x5AD09C0", Offset = "0x5ACF9C0", VA = "0x5AD09C0")]
	private bool FixedUpdateLaunch(bool left)
	{
		return default(bool);
	}

	[Token(Token = "0x6004165")]
	[Address(RVA = "0x5AD1D40", Offset = "0x5AD0D40", VA = "0x5AD1D40")]
	private void FixedUpdatePivot(Vector3 position)
	{
	}

	[Token(Token = "0x6004166")]
	[Address(RVA = "0x5AD12E0", Offset = "0x5AD02E0", VA = "0x5AD12E0")]
	private bool IsStock(bool pivot)
	{
		return default(bool);
	}

	[Token(Token = "0x6004167")]
	[Address(RVA = "0x5AD2730", Offset = "0x5AD1730", VA = "0x5AD2730")]
	private void FixedUpdateSetHookedDirection()
	{
	}

	[Token(Token = "0x6004168")]
	[Address(RVA = "0x5AD32A0", Offset = "0x5AD22A0", VA = "0x5AD32A0")]
	private void FixedUpdateBodyLean(float speedAtStart, Vector3 forwardAtStart)
	{
	}

	[Token(Token = "0x6004169")]
	[Address(RVA = "0x5AD0930", Offset = "0x5ACF930", VA = "0x5AD0930")]
	private void FixedUpdateUseables()
	{
	}

	[Token(Token = "0x600416A")]
	[Address(RVA = "0x5AD06D0", Offset = "0x5ACF6D0", VA = "0x5AD06D0")]
	public void FixedUpdateLookTitan()
	{
	}

	[Token(Token = "0x600416B")]
	[Address(RVA = "0x5AD3850", Offset = "0x5AD2850", VA = "0x5AD3850")]
	private void FixedUpdateClippingCheck()
	{
	}

	[Token(Token = "0x600416C")]
	[Address(RVA = "0x5AD50D0", Offset = "0x5AD40D0", VA = "0x5AD50D0")]
	private void LateUpdateTilt()
	{
	}

	[Token(Token = "0x600416D")]
	[Address(RVA = "0x5AD62C0", Offset = "0x5AD52C0", VA = "0x5AD62C0")]
	private void LateUpdateGun()
	{
	}

	[Token(Token = "0x600416E")]
	[Address(RVA = "0x5AD9070", Offset = "0x5AD8070", VA = "0x5AD9070")]
	private void GunHeadMovement()
	{
	}

	[Token(Token = "0x600416F")]
	[Address(RVA = "0x5AD9080", Offset = "0x5AD8080", VA = "0x5AD9080")]
	private void LeftArmAim(Vector3 target)
	{
	}

	[Token(Token = "0x6004170")]
	[Address(RVA = "0x5AD9270", Offset = "0x5AD8270", VA = "0x5AD9270")]
	private void RightArmAim(Vector3 target)
	{
	}

	[Token(Token = "0x6004171")]
	[Address(RVA = "0x5AD9490", Offset = "0x5AD8490", VA = "0x5AD9490", Slot = "103")]
	protected override void SetColliders()
	{
	}

	[Token(Token = "0x6004172")]
	[Address(RVA = "0x5AD9640", Offset = "0x5AD8640", VA = "0x5AD9640")]
	[PunRPC]
	public void SetupRPC(string customSetJson, int humanWeapon, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004173")]
	[Address(RVA = "0x5AD9E90", Offset = "0x5AD8E90", VA = "0x5AD9E90")]
	protected void SetupWeapon(int humanWeapon)
	{
	}

	[Token(Token = "0x6004174")]
	[Address(RVA = "0x5ADAAC0", Offset = "0x5AD9AC0", VA = "0x5ADAAC0")]
	protected void SetupItems()
	{
	}

	[Token(Token = "0x6004175")]
	[Address(RVA = "0x5ADAF40", Offset = "0x5AD9F40", VA = "0x5ADAF40")]
	public void SetSpecial(string special)
	{
	}

	[Token(Token = "0x6004176")]
	[Address(RVA = "0x5ADB530", Offset = "0x5ADA530", VA = "0x5ADB530")]
	public void ToggleHood()
	{
	}

	[Token(Token = "0x6004177")]
	[Address(RVA = "0x5ADB770", Offset = "0x5ADA770", VA = "0x5ADB770")]
	[PunRPC]
	public void SetHoodRPC(bool hoodUp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004178")]
	[Address(RVA = "0x5AC5CF0", Offset = "0x5AC4CF0", VA = "0x5AC5CF0")]
	protected void LoadSkin([Optional] Player player)
	{
	}

	[Token(Token = "0x6004179")]
	[Address(RVA = "0x5ADB960", Offset = "0x5ADA960", VA = "0x5ADB960")]
	[PunRPC]
	public void LoadSkinRPC(int horse, string url, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600417A")]
	[Address(RVA = "0x5ADBB70", Offset = "0x5ADAB70", VA = "0x5ADBB70")]
	[PunRPC]
	public void SetHookStateRPC(bool left, int hookId, int state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600417B")]
	[Address(RVA = "0x5ADBC30", Offset = "0x5ADAC30", VA = "0x5ADBC30")]
	[PunRPC]
	public void SetHookingRPC(bool left, int hookId, Vector3 baseVelocity, Vector3 relativeVelocity, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600417C")]
	[Address(RVA = "0x5ADBD20", Offset = "0x5ADAD20", VA = "0x5ADBD20")]
	[PunRPC]
	public void SetHookedRPC(bool left, int hookId, Vector3 position, int viewId, int objectId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600417D")]
	[Address(RVA = "0x5AC2810", Offset = "0x5AC1810", VA = "0x5AC2810")]
	private void SetSmoke(bool active)
	{
	}

	[Token(Token = "0x600417E")]
	[Address(RVA = "0x5ADBE10", Offset = "0x5ADAE10", VA = "0x5ADBE10")]
	[PunRPC]
	public void SetSmokeRPC(bool active, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600417F")]
	[Address(RVA = "0x5AC0610", Offset = "0x5ABF610", VA = "0x5AC0610")]
	protected void ToggleSparks(bool toggle)
	{
	}

	[Token(Token = "0x6004180")]
	[Address(RVA = "0x5ADBE80", Offset = "0x5ADAE80", VA = "0x5ADBE80")]
	[PunRPC]
	protected void ToggleSparksRPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004181")]
	[Address(RVA = "0x5ABEE10", Offset = "0x5ABDE10", VA = "0x5ABEE10")]
	public void SetThunderspears(bool hasLeft, bool hasRight)
	{
	}

	[Token(Token = "0x6004182")]
	[Address(RVA = "0x5ADBEF0", Offset = "0x5ADAEF0", VA = "0x5ADBEF0")]
	[PunRPC]
	public void SetThunderspearsRPC(bool hasLeft, bool hasRight, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004183")]
	[Address(RVA = "0x5AD1210", Offset = "0x5AD0210", VA = "0x5AD1210")]
	public void ClearDashPerkCDs()
	{
	}

	[Token(Token = "0x6004184")]
	[Address(RVA = "0x5ADC050", Offset = "0x5ADB050", VA = "0x5ADC050")]
	public void OnHooked(bool left, Vector3 position)
	{
	}

	[Token(Token = "0x6004185")]
	[Address(RVA = "0x5ADC7D0", Offset = "0x5ADB7D0", VA = "0x5ADC7D0")]
	public void OnHookedHuman(bool left, Vector3 position, Human human)
	{
	}

	[Token(Token = "0x6004186")]
	[Address(RVA = "0x5AC27E0", Offset = "0x5AC17E0", VA = "0x5AC27E0")]
	public void UnhookHuman(bool left)
	{
	}

	[Token(Token = "0x6004187")]
	[Address(RVA = "0x5ADCAA0", Offset = "0x5ADBAA0", VA = "0x5ADCAA0")]
	[PunRPC]
	public void OnHookedByHuman(int viewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004188")]
	[Address(RVA = "0x5ADD0E0", Offset = "0x5ADC0E0", VA = "0x5ADD0E0")]
	[PunRPC]
	public void OnStillHookedByHuman(int viewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004189")]
	[Address(RVA = "0x5ADD4A0", Offset = "0x5ADC4A0", VA = "0x5ADD4A0")]
	public void GetStunnedByTS(Vector3 origin)
	{
	}

	[Token(Token = "0x600418A")]
	[Address(RVA = "0x5AC1010", Offset = "0x5AC0010", VA = "0x5AC1010")]
	public void SetInterpolation(bool interpolate)
	{
	}

	[Token(Token = "0x600418B")]
	[Address(RVA = "0x5AC10D0", Offset = "0x5AC00D0", VA = "0x5AC10D0")]
	private void SetTriggerCollider(bool trigger)
	{
	}

	[Token(Token = "0x600418C")]
	[Address(RVA = "0x5ADDBB0", Offset = "0x5ADCBB0", VA = "0x5ADDBB0")]
	[PunRPC]
	public void SetTriggerColliderRPC(bool trigger, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600418D")]
	[Address(RVA = "0x5AD8BF0", Offset = "0x5AD7BF0", VA = "0x5AD8BF0")]
	private float GetReelAxis()
	{
		return default(float);
	}

	[Token(Token = "0x600418E")]
	[Address(RVA = "0x5AD8C10", Offset = "0x5AD7C10", VA = "0x5AD8C10")]
	private float GetLeanAngle(Vector3 hookPosition, bool left)
	{
		return default(float);
	}

	[Token(Token = "0x600418F")]
	[Address(RVA = "0x5ADDC40", Offset = "0x5ADCC40", VA = "0x5ADDC40")]
	public bool CanBladeAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x6004190")]
	[Address(RVA = "0x5ADDCC0", Offset = "0x5ADCCC0", VA = "0x5ADDCC0")]
	public void StartSpecialAttack(string animation)
	{
	}

	[Token(Token = "0x6004191")]
	[Address(RVA = "0x5ADDD30", Offset = "0x5ADCD30", VA = "0x5ADDD30")]
	public void ActivateBlades()
	{
	}

	[Token(Token = "0x6004192")]
	[Address(RVA = "0x5ADDE50", Offset = "0x5ADCE50", VA = "0x5ADDE50")]
	public void StartBladeSwing()
	{
	}

	[Token(Token = "0x6004193")]
	[Address(RVA = "0x5ADEC90", Offset = "0x5ADDC90", VA = "0x5ADEC90")]
	private string GetBladeAnimationMouse()
	{
		return null;
	}

	[Token(Token = "0x6004194")]
	[Address(RVA = "0x5ADE950", Offset = "0x5ADD950", VA = "0x5ADE950")]
	private string GetBladeAnimationTarget(Transform target)
	{
		return null;
	}

	[Token(Token = "0x6004195")]
	[Address(RVA = "0x5ADE410", Offset = "0x5ADD410", VA = "0x5ADE410")]
	private BaseTitan FindNearestTitan()
	{
		return null;
	}

	[Token(Token = "0x6004196")]
	[Address(RVA = "0x5ADED50", Offset = "0x5ADDD50", VA = "0x5ADED50")]
	private Human FindNearestHuman()
	{
		return null;
	}

	[Token(Token = "0x6004197")]
	[Address(RVA = "0x5ABF690", Offset = "0x5ABE690", VA = "0x5ABF690")]
	public void FalseAttack()
	{
	}

	[Token(Token = "0x6004198")]
	[Address(RVA = "0x5ACC710", Offset = "0x5ACB710", VA = "0x5ACC710")]
	public void ContinueAnimation()
	{
	}

	[Token(Token = "0x6004199")]
	[Address(RVA = "0x5ADF0A0", Offset = "0x5ADE0A0", VA = "0x5ADF0A0")]
	[PunRPC]
	public void ContinueAnimationRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600419A")]
	[Address(RVA = "0x5ACC7A0", Offset = "0x5ACB7A0", VA = "0x5ACC7A0")]
	public void PauseAnimation()
	{
	}

	[Token(Token = "0x600419B")]
	[Address(RVA = "0x5ADF160", Offset = "0x5ADE160", VA = "0x5ADF160")]
	[PunRPC]
	public void PauseAnimationRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600419C")]
	[Address(RVA = "0x5ADB270", Offset = "0x5ADA270", VA = "0x5ADB270")]
	private void CustomAnimationSpeed()
	{
	}

	[Token(Token = "0x600419D")]
	[Address(RVA = "0x5AD12A0", Offset = "0x5AD02A0", VA = "0x5AD12A0")]
	private bool HasHook()
	{
		return default(bool);
	}

	[Token(Token = "0x600419E")]
	[Address(RVA = "0x5AD1310", Offset = "0x5AD0310", VA = "0x5AD1310")]
	private bool IsHookedAny()
	{
		return default(bool);
	}

	[Token(Token = "0x600419F")]
	[Address(RVA = "0x5AD1350", Offset = "0x5AD0350", VA = "0x5AD1350")]
	private bool IsHookedLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x60041A0")]
	[Address(RVA = "0x5AD1370", Offset = "0x5AD0370", VA = "0x5AD1370")]
	private bool IsHookedRight()
	{
		return default(bool);
	}

	[Token(Token = "0x60041A1")]
	[Address(RVA = "0x5AD1490", Offset = "0x5AD0490", VA = "0x5AD1490")]
	private bool IsFrontGrounded()
	{
		return default(bool);
	}

	[Token(Token = "0x60041A2")]
	[Address(RVA = "0x5AD1390", Offset = "0x5AD0390", VA = "0x5AD1390")]
	private bool IsPressDirectionTowardsHero()
	{
		return default(bool);
	}

	[Token(Token = "0x60041A3")]
	[Address(RVA = "0x5AD8B90", Offset = "0x5AD7B90", VA = "0x5AD8B90")]
	private bool IsPressDirectionRelativeToWall(Vector3 wallNormal, float dotValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60041A4")]
	[Address(RVA = "0x5AD15A0", Offset = "0x5AD05A0", VA = "0x5AD15A0")]
	private bool IsUpFrontGrounded()
	{
		return default(bool);
	}

	[Token(Token = "0x60041A5")]
	[Address(RVA = "0x5AD16C0", Offset = "0x5AD06C0", VA = "0x5AD16C0")]
	public bool IsFiringThunderspear()
	{
		return default(bool);
	}

	[Token(Token = "0x60041A6")]
	[Address(RVA = "0x5AD4360", Offset = "0x5AD3360", VA = "0x5AD4360")]
	private void ToggleBladeFire(int state)
	{
	}

	[Token(Token = "0x60041A7")]
	[Address(RVA = "0x5ACC830", Offset = "0x5ACB830", VA = "0x5ACC830")]
	private void ToggleBladeTrails(bool toggle)
	{
	}

	[Token(Token = "0x60041A8")]
	[Address(RVA = "0x5AC4070", Offset = "0x5AC3070", VA = "0x5AC4070")]
	public void ToggleBlades(bool toggle)
	{
	}

	[Token(Token = "0x60041A9")]
	[Address(RVA = "0x5ADF1B0", Offset = "0x5ADE1B0", VA = "0x5ADF1B0")]
	[PunRPC]
	protected void ToggleBladesRPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60041AA")]
	[Address(RVA = "0x5ADB090", Offset = "0x5ADA090", VA = "0x5ADB090")]
	private void SetWeaponPartsActive(bool active)
	{
	}

	[Token(Token = "0x60041AB")]
	[Address(RVA = "0x5ADF210", Offset = "0x5ADE210", VA = "0x5ADF210")]
	[PunRPC]
	protected void ToggleBladeTrailsRPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60041AC")]
	[Address(RVA = "0x5ADF580", Offset = "0x5ADE580", VA = "0x5ADF580")]
	[PunRPC]
	protected void ToggleBladeFireRPC(int state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60041AD")]
	[Address(RVA = "0x5ADF9F0", Offset = "0x5ADE9F0", VA = "0x5ADF9F0")]
	public void ToggleBuff1(bool toggle)
	{
	}

	[Token(Token = "0x60041AE")]
	[Address(RVA = "0x5ADFB30", Offset = "0x5ADEB30", VA = "0x5ADFB30")]
	[PunRPC]
	protected void ToggleBuff1RPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60041AF")]
	[Address(RVA = "0x5ADFE00", Offset = "0x5ADEE00", VA = "0x5ADFE00")]
	public void ToggleBuff2(bool toggle)
	{
	}

	[Token(Token = "0x60041B0")]
	[Address(RVA = "0x5ADFF40", Offset = "0x5ADEF40", VA = "0x5ADFF40")]
	[PunRPC]
	protected void ToggleBuff2RPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60041B1")]
	[Address(RVA = "0x5AE0020", Offset = "0x5ADF020", VA = "0x5AE0020")]
	public void ToggleFire1(bool toggle)
	{
	}

	[Token(Token = "0x60041B2")]
	[Address(RVA = "0x5AE0160", Offset = "0x5ADF160", VA = "0x5AE0160")]
	[PunRPC]
	protected void ToggleFire1RPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60041B3")]
	[Address(RVA = "0x5ADFC10", Offset = "0x5ADEC10", VA = "0x5ADFC10")]
	private void SetParticleSystemsActive(Transform parent, bool active)
	{
	}

	[Token(Token = "0x60041B4")]
	[Address(RVA = "0x5AE0240", Offset = "0x5ADF240", VA = "0x5AE0240")]
	private void DisableAllCustomParticleEffects()
	{
	}

	[Token(Token = "0x60041B5")]
	[Address(RVA = "0x5AE0280", Offset = "0x5ADF280", VA = "0x5AE0280", Slot = "118")]
	protected override string GetFootstepAudio(int phase)
	{
		return null;
	}

	[Token(Token = "0x60041B6")]
	[Address(RVA = "0x5AE02F0", Offset = "0x5ADF2F0", VA = "0x5AE02F0", Slot = "117")]
	protected override int GetFootstepPhase()
	{
		return default(int);
	}

	[Token(Token = "0x60041B7")]
	[Address(RVA = "0x5AE0510", Offset = "0x5ADF510", VA = "0x5AE0510", Slot = "112")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60041B8")]
	[Address(RVA = "0x5AE0730", Offset = "0x5ADF730", VA = "0x5AE0730", Slot = "107")]
	protected override void CheckGround()
	{
	}

	[Token(Token = "0x60041B9")]
	[Address(RVA = "0x5AE0B20", Offset = "0x5ADFB20", VA = "0x5AE0B20", Slot = "108")]
	public override bool CheckRaycastIgnoreTriggers(Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x60041BA")]
	[Address(RVA = "0x5AE0CB0", Offset = "0x5ADFCB0", VA = "0x5AE0CB0")]
	public Vector3? PivotPosition()
	{
		return null;
	}

	[Token(Token = "0x60041BB")]
	[Address(RVA = "0x5AE0D90", Offset = "0x5ADFD90", VA = "0x5AE0D90", Slot = "119")]
	protected override List<Renderer> GetFPSDisabledRenderers()
	{
		return null;
	}

	[Token(Token = "0x60041BE")]
	[Address(RVA = "0x5AE1320", Offset = "0x5AE0320", VA = "0x5AE1320")]
	public Human()
	{
	}
}
