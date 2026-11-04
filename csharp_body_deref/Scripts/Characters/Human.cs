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

[Token(Token = "0x2000655")]
internal class Human : BaseCharacter
{
	[Token(Token = "0x2000656")]
	private sealed class SupplyTransfer
	{
		[Token(Token = "0x4001D2A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public int Id;

		[Token(Token = "0x4001D2B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Player Recipient;

		[Token(Token = "0x4001D2C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public BaseUseable Weapon;

		[Token(Token = "0x4001D2D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public float Gas;

		[Token(Token = "0x4001D2E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public int Ammo;

		[Token(Token = "0x4001D2F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int RemovedRounds;

		[Token(Token = "0x6003F2A")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public SupplyTransfer()
		{
		}
	}

	[Token(Token = "0x2000658")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__229 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D34")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D35")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D36")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Human _003C_003E4__this;

		[Token(Token = "0x17000AF9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003F2E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AFA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003F30")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003F2B")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__229(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003F2C")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003F2D")]
		[Address(RVA = "0x2160870", Offset = "0x215EE70", VA = "0x182160870", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003F2F")]
		[Address(RVA = "0x2160B00", Offset = "0x215F100", VA = "0x182160B00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000659")]
	[CompilerGenerated]
	private sealed class _003CWaitAndMount_003Ed__175 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D37")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D38")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D39")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Human _003C_003E4__this;

		[Token(Token = "0x4001D3A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int mapObjectID;

		[Token(Token = "0x4001D3B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string transformName;

		[Token(Token = "0x4001D3C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Vector3 positionOffset;

		[Token(Token = "0x4001D3D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		public Vector3 rotationOffset;

		[Token(Token = "0x17000AFB")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003F34")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AFC")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003F36")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003F31")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndMount_003Ed__175(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003F32")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003F33")]
		[Address(RVA = "0x2160D50", Offset = "0x215F350", VA = "0x182160D50", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003F35")]
		[Address(RVA = "0x2160E30", Offset = "0x215F430", VA = "0x182160E30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200065A")]
	[CompilerGenerated]
	private sealed class _003CWaitAndTransformFromShifter_003Ed__204 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D3E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D3F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D40")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Human _003C_003E4__this;

		[Token(Token = "0x4001D41")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public float previousHumanGas;

		[Token(Token = "0x4001D42")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public BaseUseable previousHumanWeapon;

		[Token(Token = "0x17000AFD")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003F3A")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AFE")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003F3C")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003F37")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndTransformFromShifter_003Ed__204(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003F38")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003F39")]
		[Address(RVA = "0x2160E70", Offset = "0x215F470", VA = "0x182160E70", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003F3B")]
		[Address(RVA = "0x21611F0", Offset = "0x215F7F0", VA = "0x1821611F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200065B")]
	[CompilerGenerated]
	private sealed class _003CWaitForSupplyTransfer_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D43")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D44")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D45")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Human _003C_003E4__this;

		[Token(Token = "0x4001D46")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public SupplyTransfer transfer;

		[Token(Token = "0x17000AFF")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003F40")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B00")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003F42")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003F3D")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitForSupplyTransfer_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003F3E")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003F3F")]
		[Address(RVA = "0x2161230", Offset = "0x215F830", VA = "0x182161230", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003F41")]
		[Address(RVA = "0x21613A0", Offset = "0x215F9A0", VA = "0x1821613A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001CAC")]
	private const float AirInteractionRange = 25f;

	[Token(Token = "0x4001CAD")]
	private const float GroundInteractionRange = 10f;

	[Token(Token = "0x4001CAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private SupplyTransfer _supplyTransfer;

	[Token(Token = "0x4001CAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private int _nextSupplyTransfer;

	[Token(Token = "0x4001CB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	public HumanComponentCache HumanCache;

	[Token(Token = "0x4001CB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	public BaseUseable Special;

	[Token(Token = "0x4001CB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	public BaseUseable Weapon;

	[Token(Token = "0x4001CB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	public HookUseable HookLeft;

	[Token(Token = "0x4001CB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	public HookUseable HookRight;

	[Token(Token = "0x4001CB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	public HumanMountState MountState;

	[Token(Token = "0x4001CB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x134")]
	public HumanCarryState CarryState;

	[Token(Token = "0x4001CB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	public Horse Horse;

	[Token(Token = "0x4001CB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	public bool AllowHorse;

	[Token(Token = "0x4001CB9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x141")]
	public bool AllowSkin;

	[Token(Token = "0x4001CBA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	public HumanSetup Setup;

	[Token(Token = "0x4001CBB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	public HumanStats Stats;

	[Token(Token = "0x4001CBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	public bool FinishSetup;

	[Token(Token = "0x4001CBD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private HumanCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x4001CBE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static LayerMask AimMask;

	[Token(Token = "0x4001CBF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public static LayerMask ClipMask;

	[Token(Token = "0x4001CC0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private Dictionary<Renderer, Material> FPSMaterials;

	[Token(Token = "0x4001CC1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly RaycastHit[] _raycastHits;

	[Token(Token = "0x4001CC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private HumanState _state;

	[Token(Token = "0x4001CC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	public string CurrentSpecial;

	[Token(Token = "0x4001CC4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	public BaseTitan Grabber;

	[Token(Token = "0x4001CC5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	public Transform GrabHand;

	[Token(Token = "0x4001CC6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	public Human Carrier;

	[Token(Token = "0x4001CC7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	public Transform CarryBack;

	[Token(Token = "0x4001CC8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	public Human BackHuman;

	[Token(Token = "0x4001CC9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	public Vector3 CarryVelocity;

	[Token(Token = "0x4001CCA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	public MapObject MountedMapObject;

	[Token(Token = "0x4001CCB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	public Transform MountedTransform;

	[Token(Token = "0x4001CCC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	public Vector3 MountedPositionOffset;

	[Token(Token = "0x4001CCD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D4")]
	public Vector3 MountedRotationOffset;

	[Token(Token = "0x4001CCE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	public Vector3 _lastMountedPosition;

	[Token(Token = "0x4001CCF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1EC")]
	public Vector3 _mountedVelocity;

	[Token(Token = "0x4001CD0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F8")]
	public bool CancelHookLeftKey;

	[Token(Token = "0x4001CD1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F9")]
	public bool CancelHookRightKey;

	[Token(Token = "0x4001CD2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1FA")]
	public bool CancelHookBothKey;

	[Token(Token = "0x4001CD3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1FB")]
	public bool CanDodge;

	[Token(Token = "0x4001CD4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1FC")]
	public bool IsInvincible;

	[Token(Token = "0x4001CD5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x200")]
	public float InvincibleTimeLeft;

	[Token(Token = "0x4001CD6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x204")]
	public bool CanMountedAttack;

	[Token(Token = "0x4001CD7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x205")]
	public bool InMountedCombat;

	[Token(Token = "0x4001CD8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x206")]
	public bool IsAttackableState;

	[Token(Token = "0x4001CD9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x207")]
	public bool IsRefillable;

	[Token(Token = "0x4001CDA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x208")]
	private object[] _lastMountMessage;

	[Token(Token = "0x4001CDB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x210")]
	private int _lastCarryRPCSender;

	[Token(Token = "0x4001CDC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x214")]
	private float _grabIFrames;

	[Token(Token = "0x4001CDD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x218")]
	private bool _bladeTrailActive;

	[Token(Token = "0x4001CDE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21C")]
	private int _bladeFireState;

	[Token(Token = "0x4001CDF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x220")]
	private bool _buff1Active;

	[Token(Token = "0x4001CE0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x221")]
	private bool _buff2Active;

	[Token(Token = "0x4001CE1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x222")]
	private bool _fire1Active;

	[Token(Token = "0x4001CE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x224")]
	public float ReelInAxis;

	[Token(Token = "0x4001CE3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x228")]
	public float ReelOutAxis;

	[Token(Token = "0x4001CE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x22C")]
	public float ReelOutScrollTimeLeft;

	[Token(Token = "0x4001CE5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x230")]
	public float TargetMagnitude;

	[Token(Token = "0x4001CE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x234")]
	public bool IsWalk;

	[Token(Token = "0x4001CE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x235")]
	private bool _pivot;

	[Token(Token = "0x4001CE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x236")]
	private bool _pivotLeft;

	[Token(Token = "0x4001CE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x237")]
	private bool _pivotRight;

	[Token(Token = "0x4001CEA")]
	private const float MaxVelocityChange = 10f;

	[Token(Token = "0x4001CEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x238")]
	private float _originalDashSpeed;

	[Token(Token = "0x4001CEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x23C")]
	public Quaternion _targetRotation;

	[Token(Token = "0x4001CED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24C")]
	private float _wallRunTime;

	[Token(Token = "0x4001CEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x250")]
	private bool _wallJump;

	[Token(Token = "0x4001CEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x251")]
	private bool _wallSlide;

	[Token(Token = "0x4001CF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x252")]
	private bool _canWallSlideJump;

	[Token(Token = "0x4001CF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x254")]
	private Vector3 _wallSlideGround;

	[Token(Token = "0x4001CF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x260")]
	private bool _launchLeft;

	[Token(Token = "0x4001CF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x261")]
	private bool _launchRight;

	[Token(Token = "0x4001CF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x264")]
	private float _launchLeftTime;

	[Token(Token = "0x4001CF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x268")]
	private float _launchRightTime;

	[Token(Token = "0x4001CF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x26C")]
	private bool _needLean;

	[Token(Token = "0x4001CF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x26D")]
	private bool _almostSingleHook;

	[Token(Token = "0x4001CF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x26E")]
	private bool _leanLeft;

	[Token(Token = "0x4001CF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x26F")]
	private bool _isTrigger;

	[Token(Token = "0x4001CFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x270")]
	private bool _useFixedUpdateClipping;

	[Token(Token = "0x4001CFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x274")]
	private Vector3 _lastPosition;

	[Token(Token = "0x4001CFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x280")]
	private Vector3 _lastVelocity;

	[Token(Token = "0x4001CFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28C")]
	private Vector3 _currentVelocity;

	[Token(Token = "0x4001CFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static LayerMask TitanDetectionMask;

	[Token(Token = "0x4001CFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x298")]
	private LayerMask HumanGroundMaskLayers;

	[Token(Token = "0x4001D00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29C")]
	private Quaternion _oldHeadRotation;

	[Token(Token = "0x4001D01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2AC")]
	public Vector2 LastGoodHeadAngle;

	[Token(Token = "0x4001D02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2B4")]
	public Quaternion? LateUpdateHeadRotation;

	[Token(Token = "0x4001D03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C8")]
	public Quaternion? LateUpdateHeadRotationRecv;

	[Token(Token = "0x4001D04")]
	private const float CarryLagCompensationDistance = 100f;

	[Token(Token = "0x4001D05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2E0")]
	public string StandAnimation;

	[Token(Token = "0x4001D06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2E8")]
	public string AttackAnimation;

	[Token(Token = "0x4001D07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2F0")]
	public bool _gunArmAim;

	[Token(Token = "0x4001D08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2F8")]
	public string RunAnimation;

	[Token(Token = "0x4001D09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x300")]
	public string WalkAnimation;

	[Token(Token = "0x4001D0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x308")]
	public bool _attackRelease;

	[Token(Token = "0x4001D0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x309")]
	public bool _attackButtonRelease;

	[Token(Token = "0x4001D0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30A")]
	public bool _reelInWaitForRelease;

	[Token(Token = "0x4001D0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30C")]
	private float _stateTimeLeft;

	[Token(Token = "0x4001D0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x310")]
	private float _dashTimeLeft;

	[Token(Token = "0x4001D0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x314")]
	private bool _cancelGasDisable;

	[Token(Token = "0x4001D10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x315")]
	private bool _gasEffectEnabled;

	[Token(Token = "0x4001D11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x316")]
	private bool _smokeActive;

	[Token(Token = "0x4001D12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x317")]
	private bool _sparksActive;

	[Token(Token = "0x4001D13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x318")]
	private bool _animationStopped;

	[Token(Token = "0x4001D14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x319")]
	private bool _needFinishReload;

	[Token(Token = "0x4001D15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31A")]
	private bool _needFinishSheatheSwap;

	[Token(Token = "0x4001D16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31B")]
	private bool _sheathedTsLeft;

	[Token(Token = "0x4001D17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31C")]
	private bool _sheathedTsRight;

	[Token(Token = "0x4001D18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31D")]
	public bool Sheathed;

	[Token(Token = "0x4001D19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x320")]
	private float _reloadTimeLeft;

	[Token(Token = "0x4001D1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x324")]
	private float _reloadCooldownLeft;

	[Token(Token = "0x4001D1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x328")]
	private string _reloadAnimation;

	[Token(Token = "0x4001D1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x330")]
	private float _dashCooldownLeft;

	[Token(Token = "0x4001D1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x338")]
	private Human _hookHuman;

	[Token(Token = "0x4001D1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x340")]
	private bool _hookHumanLeft;

	[Token(Token = "0x4001D1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x344")]
	private float _hookHumanConstantTimeLeft;

	[Token(Token = "0x4001D20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x348")]
	private bool _isReelingOut;

	[Token(Token = "0x4001D21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x350")]
	private Dictionary<BaseTitan, float> _lastNapeHitTimes;

	[Token(Token = "0x4001D22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x358")]
	private readonly HashSet<BasicTitan> _haircutTargets;

	[Token(Token = "0x4001D23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x360")]
	private Material _originalSmokeMaterial;

	[Token(Token = "0x4001D24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x368")]
	public IHumanController Controller;

	[Token(Token = "0x4001D25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x370")]
	public InGameCharacterSettings Settings;

	[Token(Token = "0x4001D26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x378")]
	private Collider _lastHit;

	[Token(Token = "0x4001D27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x380")]
	private Vector3 _lastDirection;

	[Token(Token = "0x4001D28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38C")]
	private float _collisionTimer;

	[Token(Token = "0x4001D29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x390")]
	private float _collisionInterval;

	[Token(Token = "0x17000AEB")]
	private float InteractionRange
	{
		[Token(Token = "0x6003E52")]
		[Address(RVA = "0x2146070", Offset = "0x2144670", VA = "0x182146070")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AEC")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x6003E5D")]
		[Address(RVA = "0x2145CD0", Offset = "0x21442D0", VA = "0x182145CD0", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AED")]
	public override float MaxFootstepDistance
	{
		[Token(Token = "0x6003E5E")]
		[Address(RVA = "0x2146110", Offset = "0x2144710", VA = "0x182146110", Slot = "60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AEE")]
	public override float MaxSoundDistance
	{
		[Token(Token = "0x6003E5F")]
		[Address(RVA = "0x1DA8AF0", Offset = "0x1DA70F0", VA = "0x181DA8AF0", Slot = "61")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AEF")]
	public override float LODQualityMediumDistance
	{
		[Token(Token = "0x6003E60")]
		[Address(RVA = "0x20CF520", Offset = "0x20CDB20", VA = "0x1820CF520", Slot = "62")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AF0")]
	public override float LODQualityLowDistance
	{
		[Token(Token = "0x6003E61")]
		[Address(RVA = "0x1DA8AF0", Offset = "0x1DA70F0", VA = "0x181DA8AF0", Slot = "63")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AF1")]
	public override float CullShadowsDistance
	{
		[Token(Token = "0x6003E62")]
		[Address(RVA = "0x210FBA0", Offset = "0x210E1A0", VA = "0x18210FBA0", Slot = "64")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AF2")]
	public override float CullRendererDistance
	{
		[Token(Token = "0x6003E63")]
		[Address(RVA = "0x2145CC0", Offset = "0x21442C0", VA = "0x182145CC0", Slot = "65")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AF3")]
	public override float CullEffectsDistance
	{
		[Token(Token = "0x6003E64")]
		[Address(RVA = "0x2145CC0", Offset = "0x21442C0", VA = "0x182145CC0", Slot = "66")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AF4")]
	public float CullGasEffectDistance
	{
		[Token(Token = "0x6003E65")]
		[Address(RVA = "0x210FAA0", Offset = "0x210E0A0", VA = "0x18210FAA0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AF5")]
	public bool Pivot
	{
		[Token(Token = "0x6003E66")]
		[Address(RVA = "0x2146120", Offset = "0x2144720", VA = "0x182146120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AF6")]
	public override LayerMask GroundMask
	{
		[Token(Token = "0x6003E67")]
		[Address(RVA = "0x2146060", Offset = "0x2144660", VA = "0x182146060", Slot = "67")]
		get
		{
			return default(LayerMask);
		}
	}

	[Token(Token = "0x17000AF7")]
	public bool IsUnarmed
	{
		[Token(Token = "0x6003E98")]
		[Address(RVA = "0x2146090", Offset = "0x2144690", VA = "0x182146090")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AF8")]
	public HumanState State
	{
		[Token(Token = "0x6003F24")]
		[Address(RVA = "0x2146130", Offset = "0x2144730", VA = "0x182146130")]
		get
		{
			return default(HumanState);
		}
		[Token(Token = "0x6003F25")]
		[Address(RVA = "0x2146620", Offset = "0x2144C20", VA = "0x182146620")]
		set
		{
		}
	}

	[Token(Token = "0x6003E53")]
	[Address(RVA = "0x2141900", Offset = "0x213FF00", VA = "0x182141900")]
	public void ToggleCarry()
	{
	}

	[Token(Token = "0x6003E54")]
	[Address(RVA = "0x213EC80", Offset = "0x213D280", VA = "0x18213EC80")]
	public void ShareSupplies()
	{
	}

	[Token(Token = "0x6003E55")]
	[Address(RVA = "0x21454F0", Offset = "0x2143AF0", VA = "0x1821454F0")]
	[IteratorStateMachine(typeof(_003CWaitForSupplyTransfer_003Ed__9))]
	private IEnumerator WaitForSupplyTransfer(SupplyTransfer transfer)
	{
		return null;
	}

	[Token(Token = "0x6003E56")]
	[Address(RVA = "0x213E6B0", Offset = "0x213CCB0", VA = "0x18213E6B0")]
	[PunRPC]
	public void ShareSuppliesRPC(int recipientId, int transferId, float gas, int ammo, int weapon, float range, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003E57")]
	[Address(RVA = "0x2121CC0", Offset = "0x21202C0", VA = "0x182121CC0")]
	[PunRPC]
	public void ConfirmSharedSuppliesRPC(int transferId, float gas, int ammo, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003E58")]
	[Address(RVA = "0x21217D0", Offset = "0x211FDD0", VA = "0x1821217D0")]
	private void CompleteSupplyTransfer(float gas, int ammo)
	{
	}

	[Token(Token = "0x6003E59")]
	[Address(RVA = "0x212EE60", Offset = "0x212D460", VA = "0x18212EE60")]
	internal static int GetSupplyAmmo(BaseUseable weapon)
	{
		return default(int);
	}

	[Token(Token = "0x6003E5A")]
	[Address(RVA = "0x213B120", Offset = "0x2139720", VA = "0x18213B120")]
	internal static void RemoveSupplyAmmo(BaseUseable weapon, int amount)
	{
	}

	[Token(Token = "0x6003E5B")]
	[Address(RVA = "0x2120360", Offset = "0x211E960", VA = "0x182120360")]
	internal static int AddSupplyAmmo(BaseUseable weapon, int amount, int restoreRounds = 0)
	{
		return default(int);
	}

	[Token(Token = "0x6003E5C")]
	[Address(RVA = "0x213A600", Offset = "0x2138C00", VA = "0x18213A600")]
	private void RefreshSupplyWeapon()
	{
	}

	[Token(Token = "0x6003E68")]
	[Address(RVA = "0x2120570", Offset = "0x211EB70", VA = "0x182120570", Slot = "69")]
	public override bool AlwaysAnimate()
	{
		return default(bool);
	}

	[Token(Token = "0x6003E69")]
	[Address(RVA = "0x21220D0", Offset = "0x21206D0", VA = "0x1821220D0", Slot = "79")]
	protected override void CreateDetection()
	{
	}

	[Token(Token = "0x6003E6A")]
	[Address(RVA = "0x2122E60", Offset = "0x2121460", VA = "0x182122E60")]
	public void DieChangeCharacter()
	{
	}

	[Token(Token = "0x6003E6B")]
	[Address(RVA = "0x212F940", Offset = "0x212DF40", VA = "0x18212F940")]
	public void IsChangingPosition()
	{
	}

	[Token(Token = "0x6003E6C")]
	[Address(RVA = "0x21208C0", Offset = "0x211EEC0", VA = "0x1821208C0")]
	[PunRPC]
	public void BlowAwayRPC(Vector3 force, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003E6D")]
	[Address(RVA = "0x2134680", Offset = "0x2132C80", VA = "0x182134680", Slot = "93")]
	[PunRPC]
	public override void MarkDeadRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003E6E")]
	[Address(RVA = "0x21429D0", Offset = "0x2140FD0", VA = "0x1821429D0", Slot = "121")]
	[PunRPC]
	public virtual void UngrabRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003E6F")]
	[Address(RVA = "0x212C6C0", Offset = "0x212ACC0", VA = "0x18212C6C0")]
	public Ray GetAimRayAfterHuman()
	{
		return default(Ray);
	}

	[Token(Token = "0x6003E70")]
	[Address(RVA = "0x212C470", Offset = "0x212AA70", VA = "0x18212C470")]
	public Ray GetAimRayAfterHumanCheap()
	{
		return default(Ray);
	}

	[Token(Token = "0x6003E71")]
	[Address(RVA = "0x212C0C0", Offset = "0x212A6C0", VA = "0x18212C0C0", Slot = "76")]
	public override Vector3 GetAimPoint()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003E72")]
	[Address(RVA = "0x212C330", Offset = "0x212A930", VA = "0x18212C330")]
	public Vector3 GetAimPoint(Vector3 origin, Vector3 direction)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003E73")]
	[Address(RVA = "0x212E320", Offset = "0x212C920", VA = "0x18212E320")]
	private Vector2 GetLookAngle(Vector3 target)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6003E74")]
	[Address(RVA = "0x2120A30", Offset = "0x211F030", VA = "0x182120A30")]
	public bool CanJump()
	{
		return default(bool);
	}

	[Token(Token = "0x6003E75")]
	[Address(RVA = "0x2130270", Offset = "0x212E870", VA = "0x182130270")]
	public void Jump()
	{
	}

	[Token(Token = "0x6003E76")]
	[Address(RVA = "0x2134FB0", Offset = "0x21335B0", VA = "0x182134FB0")]
	public void Mount(Transform transform, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack = false)
	{
	}

	[Token(Token = "0x6003E77")]
	[Address(RVA = "0x21351E0", Offset = "0x21337E0", VA = "0x1821351E0")]
	public void Mount(MapObject mapObject, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack = false)
	{
	}

	[Token(Token = "0x6003E78")]
	[Address(RVA = "0x2134C50", Offset = "0x2133250", VA = "0x182134C50")]
	public void Mount(MapObject mapObject, string transformName, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack = false)
	{
	}

	[Token(Token = "0x6003E79")]
	[Address(RVA = "0x2134A90", Offset = "0x2133090", VA = "0x182134A90")]
	[PunRPC]
	public void MountRPC(int mapObjectID, string transformName, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003E7A")]
	[Address(RVA = "0x21453A0", Offset = "0x21439A0", VA = "0x1821453A0")]
	[IteratorStateMachine(typeof(_003CWaitAndMount_003Ed__175))]
	private IEnumerator WaitAndMount(int mapObjectID, string transformName, Vector3 positionOffset, Vector3 rotationOffset)
	{
		return null;
	}

	[Token(Token = "0x6003E7B")]
	[Address(RVA = "0x2124750", Offset = "0x2122D50", VA = "0x182124750")]
	private void FinishMount(int mapObjectID, string transformName, Vector3 positionOffset, Vector3 rotationOffset)
	{
	}

	[Token(Token = "0x6003E7C")]
	[Address(RVA = "0x2142D90", Offset = "0x2141390", VA = "0x182142D90")]
	public void Unmount(bool immediate)
	{
	}

	[Token(Token = "0x6003E7D")]
	[Address(RVA = "0x2142D10", Offset = "0x2141310", VA = "0x182142D10")]
	[PunRPC]
	public void UnmountRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003E7E")]
	[Address(RVA = "0x2134790", Offset = "0x2132D90", VA = "0x182134790")]
	public void MountHorse()
	{
	}

	[Token(Token = "0x6003E7F")]
	[Address(RVA = "0x2123360", Offset = "0x2121960", VA = "0x182123360")]
	public void Dodge(float targetAngle)
	{
	}

	[Token(Token = "0x6003E80")]
	[Address(RVA = "0x21232B0", Offset = "0x21218B0", VA = "0x1821232B0")]
	public void DodgeWall()
	{
	}

	[Token(Token = "0x6003E81")]
	[Address(RVA = "0x21229A0", Offset = "0x2120FA0", VA = "0x1821229A0")]
	public void Dash(float targetAngle)
	{
	}

	[Token(Token = "0x6003E82")]
	[Address(RVA = "0x2122490", Offset = "0x2120A90", VA = "0x182122490")]
	public bool DashVertical(float targetAngle, Vector3 direction, [Optional] Vector3? percentPower)
	{
		return default(bool);
	}

	[Token(Token = "0x6003E83")]
	[Address(RVA = "0x212F4D0", Offset = "0x212DAD0", VA = "0x18212F4D0")]
	public void Idle()
	{
	}

	[Token(Token = "0x6003E84")]
	[Address(RVA = "0x212EF80", Offset = "0x212D580", VA = "0x18212EF80")]
	public void Grab(BaseTitan grabber, string type)
	{
	}

	[Token(Token = "0x6003E85")]
	[Address(RVA = "0x2142A90", Offset = "0x2141090", VA = "0x182142A90")]
	public void Ungrab(bool notifyTitan, bool idle, bool breakArm = false)
	{
	}

	[Token(Token = "0x6003E86")]
	[Address(RVA = "0x2120EA0", Offset = "0x211F4A0", VA = "0x182120EA0")]
	public void Carry(Human carrier, Transform back)
	{
	}

	[Token(Token = "0x6003E87")]
	[Address(RVA = "0x2120C40", Offset = "0x211F240", VA = "0x182120C40")]
	[PunRPC]
	public void CarryRPC(int initiatorViewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003E88")]
	[Address(RVA = "0x2121980", Offset = "0x211FF80", VA = "0x182121980")]
	[PunRPC]
	public void ConfirmCarryRPC(int initiatorViewId, int targetViewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003E89")]
	[Address(RVA = "0x21427E0", Offset = "0x2140DE0", VA = "0x1821427E0")]
	public void Uncarry()
	{
	}

	[Token(Token = "0x6003E8A")]
	[Address(RVA = "0x2142700", Offset = "0x2140D00", VA = "0x182142700", Slot = "122")]
	[PunRPC]
	public virtual void UncarryRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003E8B")]
	[Address(RVA = "0x213B650", Offset = "0x2139C50", VA = "0x18213B650")]
	public void SetCarrierTriggerCollider(bool trigger)
	{
	}

	[Token(Token = "0x6003E8C")]
	[Address(RVA = "0x213CA30", Offset = "0x213B030", VA = "0x18213CA30")]
	public void SetVelocityFromCarrier()
	{
	}

	[Token(Token = "0x6003E8D")]
	[Address(RVA = "0x212DC50", Offset = "0x212C250", VA = "0x18212DC50")]
	public Human GetHumanAlongRay(Ray ray, float distance)
	{
		return null;
	}

	[Token(Token = "0x6003E8E")]
	[Address(RVA = "0x2130060", Offset = "0x212E660", VA = "0x182130060")]
	public bool IsValidCarryTarget(Human human, float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x6003E8F")]
	[Address(RVA = "0x212F840", Offset = "0x212DE40", VA = "0x18212F840")]
	public bool IsCarryable(Human human)
	{
		return default(bool);
	}

	[Token(Token = "0x6003E90")]
	[Address(RVA = "0x212F620", Offset = "0x212DC20", VA = "0x18212F620")]
	private bool IsCarryableBy(Human initiator)
	{
		return default(bool);
	}

	[Token(Token = "0x6003E91")]
	[Address(RVA = "0x212CE10", Offset = "0x212B410", VA = "0x18212CE10")]
	public Human GetCarryOption(float distance)
	{
		return null;
	}

	[Token(Token = "0x6003E92")]
	[Address(RVA = "0x213FC90", Offset = "0x213E290", VA = "0x18213FC90")]
	public void StartCarrySpecial(Human target)
	{
	}

	[Token(Token = "0x6003E93")]
	[Address(RVA = "0x21405F0", Offset = "0x213EBF0", VA = "0x1821405F0")]
	public void StopCarrySpecial()
	{
	}

	[Token(Token = "0x6003E94")]
	[Address(RVA = "0x21216B0", Offset = "0x211FCB0", VA = "0x1821216B0")]
	public void ClearAllActionsForSpecial()
	{
	}

	[Token(Token = "0x6003E95")]
	[Address(RVA = "0x213F800", Offset = "0x213DE00", VA = "0x18213F800")]
	public void SpecialActionState(float time)
	{
	}

	[Token(Token = "0x6003E96")]
	[Address(RVA = "0x2142350", Offset = "0x2140950", VA = "0x182142350")]
	public void TransformShifter(string shifter, float liveTime)
	{
	}

	[Token(Token = "0x6003E97")]
	[Address(RVA = "0x2145450", Offset = "0x2143A50", VA = "0x182145450")]
	[IteratorStateMachine(typeof(_003CWaitAndTransformFromShifter_003Ed__204))]
	public IEnumerator WaitAndTransformFromShifter(float previousHumanGas, BaseUseable previousHumanWeapon)
	{
		return null;
	}

	[Token(Token = "0x6003E99")]
	[Address(RVA = "0x213ADA0", Offset = "0x21393A0", VA = "0x18213ADA0")]
	public void Reload()
	{
	}

	[Token(Token = "0x6003E9A")]
	[Address(RVA = "0x213A310", Offset = "0x2138910", VA = "0x18213A310")]
	private void PlayWeaponSwapSound()
	{
	}

	[Token(Token = "0x6003E9B")]
	[Address(RVA = "0x213A150", Offset = "0x2138750", VA = "0x18213A150")]
	private void PlayWeaponSwapAnimation()
	{
	}

	[Token(Token = "0x6003E9C")]
	[Address(RVA = "0x2145580", Offset = "0x2143B80", VA = "0x182145580")]
	private bool WeaponSwapAnimationDone()
	{
		return default(bool);
	}

	[Token(Token = "0x6003E9D")]
	[Address(RVA = "0x2120B30", Offset = "0x211F130", VA = "0x182120B30")]
	public bool CanSheathe()
	{
		return default(bool);
	}

	[Token(Token = "0x6003E9E")]
	[Address(RVA = "0x2142140", Offset = "0x2140740", VA = "0x182142140")]
	public void ToggleSheathe()
	{
	}

	[Token(Token = "0x6003E9F")]
	[Address(RVA = "0x213BF70", Offset = "0x213A570", VA = "0x18213BF70")]
	public void SetSheathed(bool sheathed)
	{
	}

	[Token(Token = "0x6003EA0")]
	[Address(RVA = "0x213BF30", Offset = "0x213A530", VA = "0x18213BF30")]
	[PunRPC]
	protected void SetSheathedRPC(bool sheathed, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003EA1")]
	[Address(RVA = "0x213A6E0", Offset = "0x2138CE0", VA = "0x18213A6E0")]
	public void RefreshWeaponVisibility()
	{
	}

	[Token(Token = "0x6003EA2")]
	[Address(RVA = "0x2124C20", Offset = "0x2123220", VA = "0x182124C20")]
	protected void FinishSheatheSwap()
	{
	}

	[Token(Token = "0x6003EA3")]
	[Address(RVA = "0x213B290", Offset = "0x2139890", VA = "0x18213B290")]
	private void ResetSheatheState()
	{
	}

	[Token(Token = "0x6003EA4")]
	[Address(RVA = "0x2124A40", Offset = "0x2123040", VA = "0x182124A40")]
	protected void FinishReload()
	{
	}

	[Token(Token = "0x6003EA5")]
	[Address(RVA = "0x213A430", Offset = "0x2138A30", VA = "0x18213A430")]
	public bool Refill()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EA6")]
	[Address(RVA = "0x21406D0", Offset = "0x213ECD0", VA = "0x1821406D0")]
	public bool SupplySpawnableRefill()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EA7")]
	[Address(RVA = "0x2135280", Offset = "0x2133880", VA = "0x182135280")]
	public bool NeedRefill(bool isGasTank)
	{
		return default(bool);
	}

	[Token(Token = "0x6003EA8")]
	[Address(RVA = "0x2124980", Offset = "0x2122F80", VA = "0x182124980")]
	public void FinishRefill()
	{
	}

	[Token(Token = "0x6003EA9")]
	[Address(RVA = "0x2123520", Offset = "0x2121B20", VA = "0x182123520", Slot = "80")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x6003EAA")]
	[Address(RVA = "0x212C020", Offset = "0x212A620", VA = "0x18212C020", Slot = "81")]
	public override void ForceAnimation(string animation, float fade)
	{
	}

	[Token(Token = "0x6003EAB")]
	[Address(RVA = "0x2123490", Offset = "0x2121A90", VA = "0x182123490")]
	public void EmoteAnimation(string animation)
	{
	}

	[Token(Token = "0x6003EAC")]
	[Address(RVA = "0x21209E0", Offset = "0x211EFE0", VA = "0x1821209E0")]
	public bool CanEmote()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EAD")]
	[Address(RVA = "0x212CDF0", Offset = "0x212B3F0", VA = "0x18212CDF0", Slot = "77")]
	public override Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x6003EAE")]
	[Address(RVA = "0x2122040", Offset = "0x2120640", VA = "0x182122040", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6003EAF")]
	[Address(RVA = "0x2145330", Offset = "0x2143930", VA = "0x182145330", Slot = "84")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__229))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x6003EB0")]
	[Address(RVA = "0x212F540", Offset = "0x212DB40", VA = "0x18212F540")]
	public void Init(bool ai, string team, InGameCharacterSettings settings)
	{
	}

	[Token(Token = "0x6003EB1")]
	[Address(RVA = "0x213A860", Offset = "0x2138E60", VA = "0x18213A860")]
	public void ReloadHuman(InGameCharacterSettings settings)
	{
	}

	[Token(Token = "0x6003EB2")]
	[Address(RVA = "0x2120600", Offset = "0x211EC00", VA = "0x182120600", Slot = "101")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003EB3")]
	[Address(RVA = "0x213FE50", Offset = "0x213E450", VA = "0x18213FE50", Slot = "104")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6003EB4")]
	[Address(RVA = "0x2136A30", Offset = "0x2135030", VA = "0x182136A30", Slot = "70")]
	public override void OnDistanceUpdate(float distance)
	{
	}

	[Token(Token = "0x6003EB5")]
	[Address(RVA = "0x21395A0", Offset = "0x2137BA0", VA = "0x1821395A0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6003EB6")]
	[Address(RVA = "0x212E580", Offset = "0x212CB80", VA = "0x18212E580")]
	private string GetNetworkSetupJson()
	{
		return null;
	}

	[Token(Token = "0x6003EB7")]
	[Address(RVA = "0x212D9E0", Offset = "0x212BFE0", VA = "0x18212D9E0", Slot = "90")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6003EB8")]
	[Address(RVA = "0x212D0C0", Offset = "0x212B6C0", VA = "0x18212D0C0", Slot = "91")]
	[PunRPC]
	public override void GetDamagedRPC(string name, int damage)
	{
	}

	[Token(Token = "0x6003EB9")]
	[Address(RVA = "0x2136A70", Offset = "0x2135070", VA = "0x182136A70", Slot = "89")]
	public override void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
	}

	[Token(Token = "0x6003EBA")]
	[Address(RVA = "0x2143220", Offset = "0x2141820", VA = "0x182143220")]
	protected void Update()
	{
	}

	[Token(Token = "0x6003EBB")]
	[Address(RVA = "0x2127580", Offset = "0x2125B80", VA = "0x182127580", Slot = "113")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x6003EBC")]
	[Address(RVA = "0x2120BB0", Offset = "0x211F1B0", VA = "0x182120BB0")]
	private bool CanStockDueToBL()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EBD")]
	[Address(RVA = "0x2145110", Offset = "0x2143710", VA = "0x182145110")]
	private bool ValidStockAttacks()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EBE")]
	[Address(RVA = "0x212F460", Offset = "0x212DA60", VA = "0x18212F460")]
	public bool HasGrabImmunity()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EBF")]
	[Address(RVA = "0x213FDC0", Offset = "0x213E3C0", VA = "0x18213FDC0")]
	public void StartGrabImmunity(float duration)
	{
	}

	[Token(Token = "0x6003EC0")]
	[Address(RVA = "0x21431B0", Offset = "0x21417B0", VA = "0x1821431B0")]
	private void UpdateIFrames()
	{
	}

	[Token(Token = "0x6003EC1")]
	[Address(RVA = "0x2143040", Offset = "0x2141640", VA = "0x182143040")]
	private void UpdateBladeFire()
	{
	}

	[Token(Token = "0x6003EC2")]
	[Address(RVA = "0x2146140", Offset = "0x2144740", VA = "0x182146140")]
	private void lookAtTarget(Vector3 target)
	{
	}

	[Token(Token = "0x6003EC3")]
	[Address(RVA = "0x2130C70", Offset = "0x212F270", VA = "0x182130C70")]
	protected void LateUpdateHeadPosition(Vector3 position)
	{
	}

	[Token(Token = "0x6003EC4")]
	[Address(RVA = "0x2131F70", Offset = "0x2130570", VA = "0x182131F70", Slot = "114")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6003EC5")]
	[Address(RVA = "0x2130390", Offset = "0x212E990", VA = "0x182130390", Slot = "116")]
	protected override void LateUpdateFPS()
	{
	}

	[Token(Token = "0x6003EC6")]
	[Address(RVA = "0x2135470", Offset = "0x2133A70", VA = "0x182135470")]
	protected void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x6003EC7")]
	[Address(RVA = "0x21362C0", Offset = "0x21348C0", VA = "0x1821362C0")]
	protected void OnCollisionStay(Collision collision)
	{
	}

	[Token(Token = "0x6003EC8")]
	[Address(RVA = "0x21270F0", Offset = "0x21256F0", VA = "0x1821270F0")]
	private void FixedUpdateWallSlide()
	{
	}

	[Token(Token = "0x6003EC9")]
	[Address(RVA = "0x2123E80", Offset = "0x2122480", VA = "0x182123E80")]
	private void EndWallSlide()
	{
	}

	[Token(Token = "0x6003ECA")]
	[Address(RVA = "0x2131360", Offset = "0x212F960", VA = "0x182131360")]
	private void LateUpdateReelOut()
	{
	}

	[Token(Token = "0x6003ECB")]
	[Address(RVA = "0x21259E0", Offset = "0x2123FE0", VA = "0x1821259E0")]
	private bool FixedUpdateLaunch(bool left)
	{
		return default(bool);
	}

	[Token(Token = "0x6003ECC")]
	[Address(RVA = "0x2126160", Offset = "0x2124760", VA = "0x182126160")]
	private void FixedUpdatePivot(Vector3 position)
	{
	}

	[Token(Token = "0x6003ECD")]
	[Address(RVA = "0x212FEA0", Offset = "0x212E4A0", VA = "0x18212FEA0")]
	private bool IsStock(bool pivot)
	{
		return default(bool);
	}

	[Token(Token = "0x6003ECE")]
	[Address(RVA = "0x2126820", Offset = "0x2124E20", VA = "0x182126820")]
	private void FixedUpdateSetHookedDirection()
	{
	}

	[Token(Token = "0x6003ECF")]
	[Address(RVA = "0x2124DB0", Offset = "0x21233B0", VA = "0x182124DB0")]
	private void FixedUpdateBodyLean(float speedAtStart, Vector3 forwardAtStart)
	{
	}

	[Token(Token = "0x6003ED0")]
	[Address(RVA = "0x2127050", Offset = "0x2125650", VA = "0x182127050")]
	private void FixedUpdateUseables()
	{
	}

	[Token(Token = "0x6003ED1")]
	[Address(RVA = "0x2125EB0", Offset = "0x21244B0", VA = "0x182125EB0")]
	public void FixedUpdateLookTitan()
	{
	}

	[Token(Token = "0x6003ED2")]
	[Address(RVA = "0x2125250", Offset = "0x2123850", VA = "0x182125250")]
	private void FixedUpdateClippingCheck()
	{
	}

	[Token(Token = "0x6003ED3")]
	[Address(RVA = "0x2131420", Offset = "0x212FA20", VA = "0x182131420")]
	private void LateUpdateTilt()
	{
	}

	[Token(Token = "0x6003ED4")]
	[Address(RVA = "0x21307E0", Offset = "0x212EDE0", VA = "0x1821307E0")]
	private void LateUpdateGun()
	{
	}

	[Token(Token = "0x6003ED5")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void GunHeadMovement()
	{
	}

	[Token(Token = "0x6003ED6")]
	[Address(RVA = "0x2132300", Offset = "0x2130900", VA = "0x182132300")]
	private void LeftArmAim(Vector3 target)
	{
	}

	[Token(Token = "0x6003ED7")]
	[Address(RVA = "0x213B3E0", Offset = "0x21399E0", VA = "0x18213B3E0")]
	private void RightArmAim(Vector3 target)
	{
	}

	[Token(Token = "0x6003ED8")]
	[Address(RVA = "0x213B710", Offset = "0x2139D10", VA = "0x18213B710", Slot = "103")]
	protected override void SetColliders()
	{
	}

	[Token(Token = "0x6003ED9")]
	[Address(RVA = "0x213D1C0", Offset = "0x213B7C0", VA = "0x18213D1C0")]
	[PunRPC]
	public void SetupRPC(string customSetJson, int humanWeapon, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003EDA")]
	[Address(RVA = "0x213DB40", Offset = "0x213C140", VA = "0x18213DB40")]
	protected void SetupWeapon(int humanWeapon)
	{
	}

	[Token(Token = "0x6003EDB")]
	[Address(RVA = "0x213CCC0", Offset = "0x213B2C0", VA = "0x18213CCC0")]
	protected void SetupItems()
	{
	}

	[Token(Token = "0x6003EDC")]
	[Address(RVA = "0x213C430", Offset = "0x213AA30", VA = "0x18213C430")]
	public void SetSpecial(string special)
	{
	}

	[Token(Token = "0x6003EDD")]
	[Address(RVA = "0x2141E70", Offset = "0x2140470", VA = "0x182141E70")]
	public void ToggleHood()
	{
	}

	[Token(Token = "0x6003EDE")]
	[Address(RVA = "0x213B8D0", Offset = "0x2139ED0", VA = "0x18213B8D0")]
	[PunRPC]
	public void SetHoodRPC(bool hoodUp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003EDF")]
	[Address(RVA = "0x2132790", Offset = "0x2130D90", VA = "0x182132790")]
	protected void LoadSkin([Optional] Player player)
	{
	}

	[Token(Token = "0x6003EE0")]
	[Address(RVA = "0x2132560", Offset = "0x2130B60", VA = "0x182132560")]
	[PunRPC]
	public void LoadSkinRPC(int horse, string url, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003EE1")]
	[Address(RVA = "0x213B930", Offset = "0x2139F30", VA = "0x18213B930")]
	[PunRPC]
	public void SetHookStateRPC(bool left, int hookId, int state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003EE2")]
	[Address(RVA = "0x213BB30", Offset = "0x213A130", VA = "0x18213BB30")]
	[PunRPC]
	public void SetHookingRPC(bool left, int hookId, Vector3 baseVelocity, Vector3 relativeVelocity, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003EE3")]
	[Address(RVA = "0x213BA10", Offset = "0x213A010", VA = "0x18213BA10")]
	[PunRPC]
	public void SetHookedRPC(bool left, int hookId, Vector3 position, int viewId, int objectId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003EE4")]
	[Address(RVA = "0x213C300", Offset = "0x213A900", VA = "0x18213C300")]
	private void SetSmoke(bool active)
	{
	}

	[Token(Token = "0x6003EE5")]
	[Address(RVA = "0x213C290", Offset = "0x213A890", VA = "0x18213C290")]
	[PunRPC]
	public void SetSmokeRPC(bool active, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003EE6")]
	[Address(RVA = "0x21421D0", Offset = "0x21407D0", VA = "0x1821421D0")]
	protected void ToggleSparks(bool toggle)
	{
	}

	[Token(Token = "0x6003EE7")]
	[Address(RVA = "0x2142160", Offset = "0x2140760", VA = "0x182142160")]
	[PunRPC]
	protected void ToggleSparksRPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003EE8")]
	[Address(RVA = "0x213C6F0", Offset = "0x213ACF0", VA = "0x18213C6F0")]
	public void SetThunderspears(bool hasLeft, bool hasRight)
	{
	}

	[Token(Token = "0x6003EE9")]
	[Address(RVA = "0x213C590", Offset = "0x213AB90", VA = "0x18213C590")]
	[PunRPC]
	public void SetThunderspearsRPC(bool hasLeft, bool hasRight, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003EEA")]
	[Address(RVA = "0x2121740", Offset = "0x211FD40", VA = "0x182121740")]
	public void ClearDashPerkCDs()
	{
	}

	[Token(Token = "0x6003EEB")]
	[Address(RVA = "0x2138F00", Offset = "0x2137500", VA = "0x182138F00")]
	public void OnHooked(bool left, Vector3 position)
	{
	}

	[Token(Token = "0x6003EEC")]
	[Address(RVA = "0x2138B20", Offset = "0x2137120", VA = "0x182138B20")]
	public void OnHookedHuman(bool left, Vector3 position, Human human)
	{
	}

	[Token(Token = "0x6003EED")]
	[Address(RVA = "0x2142CE0", Offset = "0x21412E0", VA = "0x182142CE0")]
	public void UnhookHuman(bool left)
	{
	}

	[Token(Token = "0x6003EEE")]
	[Address(RVA = "0x2138430", Offset = "0x2136A30", VA = "0x182138430")]
	[PunRPC]
	public void OnHookedByHuman(int viewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003EEF")]
	[Address(RVA = "0x2139AA0", Offset = "0x21380A0", VA = "0x182139AA0")]
	[PunRPC]
	public void OnStillHookedByHuman(int viewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003EF0")]
	[Address(RVA = "0x212E7C0", Offset = "0x212CDC0", VA = "0x18212E7C0")]
	public void GetStunnedByTS(Vector3 origin)
	{
	}

	[Token(Token = "0x6003EF1")]
	[Address(RVA = "0x213BCF0", Offset = "0x213A2F0", VA = "0x18213BCF0")]
	public void SetInterpolation(bool interpolate)
	{
	}

	[Token(Token = "0x6003EF2")]
	[Address(RVA = "0x213C910", Offset = "0x213AF10", VA = "0x18213C910")]
	private void SetTriggerCollider(bool trigger)
	{
	}

	[Token(Token = "0x6003EF3")]
	[Address(RVA = "0x213C880", Offset = "0x213AE80", VA = "0x18213C880")]
	[PunRPC]
	public void SetTriggerColliderRPC(bool trigger, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003EF4")]
	[Address(RVA = "0x212E7A0", Offset = "0x212CDA0", VA = "0x18212E7A0")]
	private float GetReelAxis()
	{
		return default(float);
	}

	[Token(Token = "0x6003EF5")]
	[Address(RVA = "0x212DF40", Offset = "0x212C540", VA = "0x18212DF40")]
	private float GetLeanAngle(Vector3 hookPosition, bool left)
	{
		return default(float);
	}

	[Token(Token = "0x6003EF6")]
	[Address(RVA = "0x2120920", Offset = "0x211EF20", VA = "0x182120920")]
	public bool CanBladeAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EF7")]
	[Address(RVA = "0x213FDD0", Offset = "0x213E3D0", VA = "0x18213FDD0")]
	public void StartSpecialAttack(string animation)
	{
	}

	[Token(Token = "0x6003EF8")]
	[Address(RVA = "0x2120250", Offset = "0x211E850", VA = "0x182120250")]
	public void ActivateBlades()
	{
	}

	[Token(Token = "0x6003EF9")]
	[Address(RVA = "0x213F830", Offset = "0x213DE30", VA = "0x18213F830")]
	public void StartBladeSwing()
	{
	}

	[Token(Token = "0x6003EFA")]
	[Address(RVA = "0x212C9B0", Offset = "0x212AFB0", VA = "0x18212C9B0")]
	private string GetBladeAnimationMouse()
	{
		return null;
	}

	[Token(Token = "0x6003EFB")]
	[Address(RVA = "0x212CA90", Offset = "0x212B090", VA = "0x18212CA90")]
	private string GetBladeAnimationTarget(Transform target)
	{
		return null;
	}

	[Token(Token = "0x6003EFC")]
	[Address(RVA = "0x2124260", Offset = "0x2122860", VA = "0x182124260")]
	private BaseTitan FindNearestTitan()
	{
		return null;
	}

	[Token(Token = "0x6003EFD")]
	[Address(RVA = "0x2123FC0", Offset = "0x21225C0", VA = "0x182123FC0")]
	private Human FindNearestHuman()
	{
		return null;
	}

	[Token(Token = "0x6003EFE")]
	[Address(RVA = "0x2123E90", Offset = "0x2122490", VA = "0x182123E90")]
	public void FalseAttack()
	{
	}

	[Token(Token = "0x6003EFF")]
	[Address(RVA = "0x2121FB0", Offset = "0x21205B0", VA = "0x182121FB0")]
	public void ContinueAnimation()
	{
	}

	[Token(Token = "0x6003F00")]
	[Address(RVA = "0x2121EF0", Offset = "0x21204F0", VA = "0x182121EF0")]
	[PunRPC]
	public void ContinueAnimationRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F01")]
	[Address(RVA = "0x2139F20", Offset = "0x2138520", VA = "0x182139F20")]
	public void PauseAnimation()
	{
	}

	[Token(Token = "0x6003F02")]
	[Address(RVA = "0x2139ED0", Offset = "0x21384D0", VA = "0x182139ED0")]
	[PunRPC]
	public void PauseAnimationRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F03")]
	[Address(RVA = "0x2122190", Offset = "0x2120790", VA = "0x182122190")]
	private void CustomAnimationSpeed()
	{
	}

	[Token(Token = "0x6003F04")]
	[Address(RVA = "0x212F480", Offset = "0x212DA80", VA = "0x18212F480")]
	private bool HasHook()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F05")]
	[Address(RVA = "0x212FC50", Offset = "0x212E250", VA = "0x18212FC50")]
	private bool IsHookedAny()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F06")]
	[Address(RVA = "0x212FCA0", Offset = "0x212E2A0", VA = "0x18212FCA0")]
	private bool IsHookedLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F07")]
	[Address(RVA = "0x212FCD0", Offset = "0x212E2D0", VA = "0x18212FCD0")]
	private bool IsHookedRight()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F08")]
	[Address(RVA = "0x212FAF0", Offset = "0x212E0F0", VA = "0x18212FAF0")]
	private bool IsFrontGrounded()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F09")]
	[Address(RVA = "0x212FD80", Offset = "0x212E380", VA = "0x18212FD80")]
	private bool IsPressDirectionTowardsHero()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F0A")]
	[Address(RVA = "0x212FD00", Offset = "0x212E300", VA = "0x18212FD00")]
	private bool IsPressDirectionRelativeToWall(Vector3 wallNormal, float dotValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6003F0B")]
	[Address(RVA = "0x212FED0", Offset = "0x212E4D0", VA = "0x18212FED0")]
	private bool IsUpFrontGrounded()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F0C")]
	[Address(RVA = "0x212F950", Offset = "0x212DF50", VA = "0x18212F950")]
	public bool IsFiringThunderspear()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F0D")]
	[Address(RVA = "0x2140C90", Offset = "0x213F290", VA = "0x182140C90")]
	private void ToggleBladeFire(int state)
	{
	}

	[Token(Token = "0x6003F0E")]
	[Address(RVA = "0x21411D0", Offset = "0x213F7D0", VA = "0x1821411D0")]
	private void ToggleBladeTrails(bool toggle)
	{
	}

	[Token(Token = "0x6003F0F")]
	[Address(RVA = "0x2141380", Offset = "0x213F980", VA = "0x182141380")]
	public void ToggleBlades(bool toggle)
	{
	}

	[Token(Token = "0x6003F10")]
	[Address(RVA = "0x2141310", Offset = "0x213F910", VA = "0x182141310")]
	[PunRPC]
	protected void ToggleBladesRPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F11")]
	[Address(RVA = "0x213CAE0", Offset = "0x213B0E0", VA = "0x18213CAE0")]
	private void SetWeaponPartsActive(bool active)
	{
	}

	[Token(Token = "0x6003F12")]
	[Address(RVA = "0x2140DD0", Offset = "0x213F3D0", VA = "0x182140DD0")]
	[PunRPC]
	protected void ToggleBladeTrailsRPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F13")]
	[Address(RVA = "0x2140810", Offset = "0x213EE10", VA = "0x182140810")]
	[PunRPC]
	protected void ToggleBladeFireRPC(int state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F14")]
	[Address(RVA = "0x2141590", Offset = "0x213FB90", VA = "0x182141590")]
	public void ToggleBuff1(bool toggle)
	{
	}

	[Token(Token = "0x6003F15")]
	[Address(RVA = "0x21414A0", Offset = "0x213FAA0", VA = "0x1821414A0")]
	[PunRPC]
	protected void ToggleBuff1RPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F16")]
	[Address(RVA = "0x21417C0", Offset = "0x213FDC0", VA = "0x1821417C0")]
	public void ToggleBuff2(bool toggle)
	{
	}

	[Token(Token = "0x6003F17")]
	[Address(RVA = "0x21416D0", Offset = "0x213FCD0", VA = "0x1821416D0")]
	[PunRPC]
	protected void ToggleBuff2RPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F18")]
	[Address(RVA = "0x2141D30", Offset = "0x2140330", VA = "0x182141D30")]
	public void ToggleFire1(bool toggle)
	{
	}

	[Token(Token = "0x6003F19")]
	[Address(RVA = "0x2141C40", Offset = "0x2140240", VA = "0x182141C40")]
	[PunRPC]
	protected void ToggleFire1RPC(bool toggle, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F1A")]
	[Address(RVA = "0x213BDC0", Offset = "0x213A3C0", VA = "0x18213BDC0")]
	private void SetParticleSystemsActive(Transform parent, bool active)
	{
	}

	[Token(Token = "0x6003F1B")]
	[Address(RVA = "0x2122F20", Offset = "0x2121520", VA = "0x182122F20")]
	private void DisableAllCustomParticleEffects()
	{
	}

	[Token(Token = "0x6003F1C")]
	[Address(RVA = "0x212D6A0", Offset = "0x212BCA0", VA = "0x18212D6A0", Slot = "118")]
	protected override string GetFootstepAudio(int phase)
	{
		return null;
	}

	[Token(Token = "0x6003F1D")]
	[Address(RVA = "0x212D730", Offset = "0x212BD30", VA = "0x18212D730", Slot = "117")]
	protected override int GetFootstepPhase()
	{
		return default(int);
	}

	[Token(Token = "0x6003F1E")]
	[Address(RVA = "0x21367F0", Offset = "0x2134DF0", VA = "0x1821367F0", Slot = "112")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6003F1F")]
	[Address(RVA = "0x2123880", Offset = "0x2121E80", VA = "0x182123880")]
	protected void EnableSmartTitans()
	{
	}

	[Token(Token = "0x6003F20")]
	[Address(RVA = "0x2121010", Offset = "0x211F610", VA = "0x182121010", Slot = "107")]
	protected override void CheckGround()
	{
	}

	[Token(Token = "0x6003F21")]
	[Address(RVA = "0x21214F0", Offset = "0x211FAF0", VA = "0x1821214F0", Slot = "108")]
	public override bool CheckRaycastIgnoreTriggers(Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6003F22")]
	[Address(RVA = "0x2139FB0", Offset = "0x21385B0", VA = "0x182139FB0")]
	public Vector3? PivotPosition()
	{
		return null;
	}

	[Token(Token = "0x6003F23")]
	[Address(RVA = "0x212D0E0", Offset = "0x212B6E0", VA = "0x18212D0E0", Slot = "119")]
	protected override List<Renderer> GetFPSDisabledRenderers()
	{
		return null;
	}

	[Token(Token = "0x6003F26")]
	[Address(RVA = "0x21458A0", Offset = "0x2143EA0", VA = "0x1821458A0")]
	public Human()
	{
	}
}
