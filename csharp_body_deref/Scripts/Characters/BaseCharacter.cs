// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseCharacter
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/BaseCharacter.c
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseCharacter.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ExitGames.Client.Photon;
using GameManagers;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x200062B")]
internal class BaseCharacter : MonoBehaviourPunCallbacks, ITargetable
{
	[Token(Token = "0x200062C")]
	[CompilerGenerated]
	private sealed class _003CFadeSoundOverTime_003Ed__127 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001BE2")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001BE3")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001BE4")]
		[FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x4001BE5")]
		[FieldOffset(Offset = "0x28")]
		public AudioSource source;

		[Token(Token = "0x4001BE6")]
		[FieldOffset(Offset = "0x30")]
		public float volumeIncrement;

		[Token(Token = "0x17000ABF")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003D2F")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AC0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003D31")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003D2C")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CFadeSoundOverTime_003Ed__127(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003D2D")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003D2E")]
		[Address(RVA = "0x211D130", Offset = "0x211B730", VA = "0x18211D130", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003D30")]
		[Address(RVA = "0x211D210", Offset = "0x211B810", VA = "0x18211D210", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200062D")]
	[CompilerGenerated]
	private sealed class _003CRevealAndRemove_003Ed__80 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001BE7")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001BE8")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001BE9")]
		[FieldOffset(Offset = "0x20")]
		public float startDelay;

		[Token(Token = "0x4001BEA")]
		[FieldOffset(Offset = "0x28")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x4001BEB")]
		[FieldOffset(Offset = "0x30")]
		public float seconds;

		[Token(Token = "0x17000AC1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003D35")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AC2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003D37")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003D32")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CRevealAndRemove_003Ed__80(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003D33")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003D34")]
		[Address(RVA = "0x211EAE0", Offset = "0x211D0E0", VA = "0x18211EAE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003D36")]
		[Address(RVA = "0x211ED20", Offset = "0x211D320", VA = "0x18211ED20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200062E")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__102 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001BEC")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001BED")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001BEE")]
		[FieldOffset(Offset = "0x20")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x17000AC3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003D3B")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AC4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003D3D")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003D38")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__102(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003D39")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003D3A")]
		[Address(RVA = "0x211F270", Offset = "0x211D870", VA = "0x18211F270", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003D3C")]
		[Address(RVA = "0x211F2F0", Offset = "0x211D8F0", VA = "0x18211F2F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200062F")]
	[CompilerGenerated]
	private sealed class _003CWaitAndNotifyReloaded_003Ed__150 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001BEF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001BF0")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001BF1")]
		[FieldOffset(Offset = "0x20")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x17000AC5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003D41")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AC6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003D43")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003D3E")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndNotifyReloaded_003Ed__150(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003D3F")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003D40")]
		[Address(RVA = "0x211F330", Offset = "0x211D930", VA = "0x18211F330", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003D42")]
		[Address(RVA = "0x211F510", Offset = "0x211DB10", VA = "0x18211F510", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000630")]
	[CompilerGenerated]
	private sealed class _003CWaitAndNotifySpawn_003Ed__149 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001BF2")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001BF3")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001BF4")]
		[FieldOffset(Offset = "0x20")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x17000AC7")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003D47")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AC8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003D49")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003D44")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndNotifySpawn_003Ed__149(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003D45")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003D46")]
		[Address(RVA = "0x211F550", Offset = "0x211DB50", VA = "0x18211F550", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003D48")]
		[Address(RVA = "0x211F7A0", Offset = "0x211DDA0", VA = "0x18211F7A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000631")]
	[CompilerGenerated]
	private sealed class _003CWaitAndPlaySound_003Ed__122 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001BF5")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001BF6")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001BF7")]
		[FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x4001BF8")]
		[FieldOffset(Offset = "0x28")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x4001BF9")]
		[FieldOffset(Offset = "0x30")]
		public string sound;

		[Token(Token = "0x17000AC9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003D4D")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000ACA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003D4F")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003D4A")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndPlaySound_003Ed__122(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003D4B")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003D4C")]
		[Address(RVA = "0x211F7E0", Offset = "0x211DDE0", VA = "0x18211F7E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003D4E")]
		[Address(RVA = "0x211F8A0", Offset = "0x211DEA0", VA = "0x18211F8A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001BBD")]
	[FieldOffset(Offset = "0x28")]
	public bool FootstepsEnabled;

	[Token(Token = "0x4001BBE")]
	[FieldOffset(Offset = "0x29")]
	public bool SoundsEnabled;

	[Token(Token = "0x4001BBF")]
	[FieldOffset(Offset = "0x2A")]
	public bool EffectsEnabled;

	[Token(Token = "0x4001BC0")]
	[FieldOffset(Offset = "0x30")]
	private HashSet<string> _activeSoundLoops;

	[Token(Token = "0x4001BC1")]
	[FieldOffset(Offset = "0x38")]
	public bool IsVisible;

	[Token(Token = "0x4001BC2")]
	[FieldOffset(Offset = "0x3C")]
	protected float _disableKinematicTimeLeft;

	[Token(Token = "0x4001BC3")]
	[FieldOffset(Offset = "0x40")]
	public string RichTextName;

	[Token(Token = "0x4001BC4")]
	[FieldOffset(Offset = "0x48")]
	public string VisibleName;

	[Token(Token = "0x4001BC5")]
	[FieldOffset(Offset = "0x50")]
	public bool HasExplicitNameTag;

	[Token(Token = "0x4001BC6")]
	[FieldOffset(Offset = "0x58")]
	public string Guild;

	[Token(Token = "0x4001BC7")]
	[FieldOffset(Offset = "0x60")]
	public string FeedKillerName;

	[Token(Token = "0x4001BC8")]
	[FieldOffset(Offset = "0x68")]
	public string FeedVictimName;

	[Token(Token = "0x4001BC9")]
	[FieldOffset(Offset = "0x70")]
	public bool Dead;

	[Token(Token = "0x4001BCA")]
	[FieldOffset(Offset = "0x71")]
	public bool CustomDamageEnabled;

	[Token(Token = "0x4001BCB")]
	[FieldOffset(Offset = "0x74")]
	public int CustomDamage;

	[Token(Token = "0x4001BCC")]
	[FieldOffset(Offset = "0x78")]
	public BaseComponentCache Cache;

	[Token(Token = "0x4001BCD")]
	[FieldOffset(Offset = "0x80")]
	public bool AI;

	[Token(Token = "0x4001BCE")]
	[FieldOffset(Offset = "0x84")]
	public int MaxHealth;

	[Token(Token = "0x4001BCF")]
	[FieldOffset(Offset = "0x88")]
	public int CurrentHealth;

	[Token(Token = "0x4001BD0")]
	[FieldOffset(Offset = "0x90")]
	public string Team;

	[Token(Token = "0x4001BD1")]
	[FieldOffset(Offset = "0x98")]
	public List<BaseUseable> Items;

	[Token(Token = "0x4001BD2")]
	[FieldOffset(Offset = "0xA0")]
	protected InGameManager _inGameManager;

	[Token(Token = "0x4001BD3")]
	[FieldOffset(Offset = "0xA8")]
	protected bool _cameraFPS;

	[Token(Token = "0x4001BD4")]
	[FieldOffset(Offset = "0xA9")]
	protected bool _wasMainCharacter;

	[Token(Token = "0x4001BD5")]
	[FieldOffset(Offset = "0xB0")]
	public BaseMovementSync MovementSync;

	[Token(Token = "0x4001BD6")]
	[FieldOffset(Offset = "0xB8")]
	public AnimationHandler Animation;

	[Token(Token = "0x4001BD7")]
	[FieldOffset(Offset = "0xC0")]
	public BaseDetection Detection;

	[Token(Token = "0x4001BD8")]
	[FieldOffset(Offset = "0xC8")]
	public float CurrentSpeed;

	[Token(Token = "0x4001BD9")]
	[FieldOffset(Offset = "0xCC")]
	public bool Grounded;

	[Token(Token = "0x4001BDA")]
	[FieldOffset(Offset = "0xCD")]
	public bool JustGrounded;

	[Token(Token = "0x4001BDB")]
	[FieldOffset(Offset = "0xD0")]
	public float TargetAngle;

	[Token(Token = "0x4001BDC")]
	[FieldOffset(Offset = "0xD4")]
	public bool HasDirection;

	[Token(Token = "0x4001BDD")]
	[FieldOffset(Offset = "0xD8")]
	protected int _stepPhase;

	[Token(Token = "0x4001BDE")]
	[FieldOffset(Offset = "0xDC")]
	private LayerMask GroundMaskLayers;

	[Token(Token = "0x4001BDF")]
	[FieldOffset(Offset = "0xE0")]
	protected Outline OutlineComponent;

	[Token(Token = "0x4001BE0")]
	[FieldOffset(Offset = "0xE8")]
	[CompilerGenerated]
	private Action<ExitGames.Client.Photon.Hashtable> m_OnPlayerPropertiesChanged;

	[Token(Token = "0x4001BE1")]
	[FieldOffset(Offset = "0xF0")]
	private object[] crossfadeCache;

	[Token(Token = "0x17000AB2")]
	protected virtual int DefaultMaxHealth
	{
		[Token(Token = "0x6003CB1")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "57")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AB3")]
	protected virtual Vector3 Gravity
	{
		[Token(Token = "0x6003CB2")]
		[Address(RVA = "0x210FB10", Offset = "0x210E110", VA = "0x18210FB10", Slot = "58")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000AB4")]
	public virtual List<string> EmoteActions
	{
		[Token(Token = "0x6003CB3")]
		[Address(RVA = "0x210FAB0", Offset = "0x210E0B0", VA = "0x18210FAB0", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AB5")]
	public virtual float MaxFootstepDistance
	{
		[Token(Token = "0x6003CB4")]
		[Address(RVA = "0x210FBA0", Offset = "0x210E1A0", VA = "0x18210FBA0", Slot = "60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AB6")]
	public virtual float MaxSoundDistance
	{
		[Token(Token = "0x6003CB5")]
		[Address(RVA = "0x210FB90", Offset = "0x210E190", VA = "0x18210FB90", Slot = "61")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AB7")]
	public virtual float LODQualityMediumDistance
	{
		[Token(Token = "0x6003CB6")]
		[Address(RVA = "0x210FB90", Offset = "0x210E190", VA = "0x18210FB90", Slot = "62")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AB8")]
	public virtual float LODQualityLowDistance
	{
		[Token(Token = "0x6003CB7")]
		[Address(RVA = "0x210FA90", Offset = "0x210E090", VA = "0x18210FA90", Slot = "63")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AB9")]
	public virtual float CullShadowsDistance
	{
		[Token(Token = "0x6003CB8")]
		[Address(RVA = "0x210FA90", Offset = "0x210E090", VA = "0x18210FA90", Slot = "64")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000ABA")]
	public virtual float CullRendererDistance
	{
		[Token(Token = "0x6003CB9")]
		[Address(RVA = "0x210FAA0", Offset = "0x210E0A0", VA = "0x18210FAA0", Slot = "65")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000ABB")]
	public virtual float CullEffectsDistance
	{
		[Token(Token = "0x6003CBA")]
		[Address(RVA = "0x210FA90", Offset = "0x210E090", VA = "0x18210FA90", Slot = "66")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000ABC")]
	public string Name
	{
		[Token(Token = "0x6003CBB")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003CBC")]
		[Address(RVA = "0x210FC60", Offset = "0x210E260", VA = "0x18210FC60")]
		set
		{
		}
	}

	[Token(Token = "0x17000ABD")]
	public virtual LayerMask GroundMask
	{
		[Token(Token = "0x6003CBD")]
		[Address(RVA = "0x210FB80", Offset = "0x210E180", VA = "0x18210FB80", Slot = "67")]
		get
		{
			return default(LayerMask);
		}
	}

	[Token(Token = "0x17000ABE")]
	protected virtual float GroundDistance
	{
		[Token(Token = "0x6003CBE")]
		[Address(RVA = "0x210FB70", Offset = "0x210E170", VA = "0x18210FB70", Slot = "68")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x14000003")]
	public event Action<ExitGames.Client.Photon.Hashtable> OnPlayerPropertiesChanged
	{
		[Token(Token = "0x6003CBF")]
		[Address(RVA = "0x210F9E0", Offset = "0x210DFE0", VA = "0x18210F9E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6003CC0")]
		[Address(RVA = "0x210FBB0", Offset = "0x210E1B0", VA = "0x18210FBB0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6003CC1")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "69")]
	public virtual bool AlwaysAnimate()
	{
		return default(bool);
	}

	[Token(Token = "0x6003CC2")]
	[Address(RVA = "0x210E670", Offset = "0x210CC70", VA = "0x18210E670")]
	public void RefreshRenderers()
	{
	}

	[Token(Token = "0x6003CC3")]
	[Address(RVA = "0x210F0F0", Offset = "0x210D6F0", VA = "0x18210F0F0")]
	protected void ToggleParticles(ParticleSystem system, bool toggle)
	{
	}

	[Token(Token = "0x6003CC4")]
	[Address(RVA = "0x210D790", Offset = "0x210BD90", VA = "0x18210D790", Slot = "70")]
	public virtual void OnDistanceUpdate(float distance)
	{
	}

	[Token(Token = "0x6003CC5")]
	[Address(RVA = "0x210DE10", Offset = "0x210C410", VA = "0x18210DE10", Slot = "47")]
	public override void OnPlayerPropertiesUpdate(Player targetPlayer, ExitGames.Client.Photon.Hashtable changedProps)
	{
	}

	[Token(Token = "0x6003CC6")]
	[Address(RVA = "0x210EB80", Offset = "0x210D180", VA = "0x18210EB80")]
	public void SetKinematic(bool kinematic, float forTime = 0f)
	{
	}

	[Token(Token = "0x6003CC7")]
	[Address(RVA = "0x210C2E0", Offset = "0x210A8E0", VA = "0x18210C2E0")]
	public Vector3 GetVelocity()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003CC8")]
	[Address(RVA = "0x210E7A0", Offset = "0x210CDA0", VA = "0x18210E7A0")]
	public void Reveal(float startDelay, float activeTime)
	{
	}

	[Token(Token = "0x6003CC9")]
	[Address(RVA = "0x21086B0", Offset = "0x2106CB0", VA = "0x1821086B0")]
	public void AddOutline()
	{
	}

	[Token(Token = "0x6003CCA")]
	[Address(RVA = "0x21088F0", Offset = "0x2106EF0", VA = "0x1821088F0")]
	public void AddVisibleOutlineWithColor(Color color)
	{
	}

	[Token(Token = "0x6003CCB")]
	[Address(RVA = "0x21085F0", Offset = "0x2106BF0", VA = "0x1821085F0")]
	public void AddOutlineWithColor(Color color, Outline.Mode mode)
	{
	}

	[Token(Token = "0x6003CCC")]
	[Address(RVA = "0x2109170", Offset = "0x2107770", VA = "0x182109170")]
	public void ChangeOutlineColor(Color color)
	{
	}

	[Token(Token = "0x6003CCD")]
	[Address(RVA = "0x2109210", Offset = "0x2107810", VA = "0x182109210")]
	public void ChangeOutlineMode(Outline.Mode mode)
	{
	}

	[Token(Token = "0x6003CCE")]
	[Address(RVA = "0x21092A0", Offset = "0x21078A0", VA = "0x1821092A0")]
	public void ChangeOutlineWidth(float width)
	{
	}

	[Token(Token = "0x6003CCF")]
	[Address(RVA = "0x210E690", Offset = "0x210CC90", VA = "0x18210E690")]
	public void RemoveOutline()
	{
	}

	[Token(Token = "0x6003CD0")]
	[Address(RVA = "0x210E710", Offset = "0x210CD10", VA = "0x18210E710")]
	[IteratorStateMachine(typeof(_003CRevealAndRemove_003Ed__80))]
	private IEnumerator RevealAndRemove(float startDelay, float seconds)
	{
		return null;
	}

	[Token(Token = "0x6003CD1")]
	[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0", Slot = "71")]
	public virtual string GetTeam()
	{
		return null;
	}

	[Token(Token = "0x6003CD2")]
	[Address(RVA = "0x210C0C0", Offset = "0x210A6C0", VA = "0x18210C0C0", Slot = "72")]
	public virtual Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003CD3")]
	[Address(RVA = "0x210F520", Offset = "0x210DB20", VA = "0x18210F520", Slot = "73")]
	public virtual bool ValidTarget()
	{
		return default(bool);
	}

	[Token(Token = "0x6003CD4")]
	[Address(RVA = "0x210C8D0", Offset = "0x210AED0", VA = "0x18210C8D0", Slot = "74")]
	public virtual bool IsMine()
	{
		return default(bool);
	}

	[Token(Token = "0x6003CD5")]
	[Address(RVA = "0x210C860", Offset = "0x210AE60", VA = "0x18210C860")]
	public bool IsMainCharacter()
	{
		return default(bool);
	}

	[Token(Token = "0x6003CD6")]
	[Address(RVA = "0x210C4E0", Offset = "0x210AAE0", VA = "0x18210C4E0", Slot = "75")]
	public virtual void Init(bool ai, string team)
	{
	}

	[Token(Token = "0x6003CD7")]
	[Address(RVA = "0x210A300", Offset = "0x2108900", VA = "0x18210A300", Slot = "76")]
	public virtual Vector3 GetAimPoint()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003CD8")]
	[Address(RVA = "0x210ECD0", Offset = "0x210D2D0", VA = "0x18210ECD0")]
	public void SetTeam(string team)
	{
	}

	[Token(Token = "0x6003CD9")]
	[Address(RVA = "0x210A580", Offset = "0x2108B80", VA = "0x18210A580", Slot = "77")]
	public virtual Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x6003CDA")]
	[Address(RVA = "0x21095F0", Offset = "0x2107BF0", VA = "0x1821095F0", Slot = "78")]
	protected virtual void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6003CDB")]
	[Address(RVA = "0x2109680", Offset = "0x2107C80", VA = "0x182109680", Slot = "79")]
	protected virtual void CreateDetection()
	{
	}

	[Token(Token = "0x6003CDC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "80")]
	public virtual void Emote(string emote)
	{
	}

	[Token(Token = "0x6003CDD")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "81")]
	public virtual void ForceAnimation(string animation, float fade)
	{
	}

	[Token(Token = "0x6003CDE")]
	[Address(RVA = "0x210C3D0", Offset = "0x210A9D0", VA = "0x18210C3D0")]
	[PunRPC]
	public void InitRPC(bool ai, string name, string guild, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003CDF")]
	[Address(RVA = "0x210EAD0", Offset = "0x210D0D0", VA = "0x18210EAD0")]
	[PunRPC]
	public void SetHealthRPC(int currentHealth, int maxHealth, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003CE0")]
	[Address(RVA = "0x210EC30", Offset = "0x210D230", VA = "0x18210EC30")]
	[PunRPC]
	public void SetTeamRPC(string team, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003CE1")]
	[Address(RVA = "0x210EA70", Offset = "0x210D070", VA = "0x18210EA70")]
	public void SetCurrentHealth(int currentHealth)
	{
	}

	[Token(Token = "0x6003CE2")]
	[Address(RVA = "0x210EBD0", Offset = "0x210D1D0", VA = "0x18210EBD0")]
	public void SetMaxHealth(int maxHealth)
	{
	}

	[Token(Token = "0x6003CE3")]
	[Address(RVA = "0x210EB20", Offset = "0x210D120", VA = "0x18210EB20")]
	public void SetHealth(int health)
	{
	}

	[Token(Token = "0x6003CE4")]
	[Address(RVA = "0x210F080", Offset = "0x210D680", VA = "0x18210F080", Slot = "82")]
	public virtual void TakeDamage(int damage)
	{
	}

	[Token(Token = "0x6003CE5")]
	[Address(RVA = "0x2109C70", Offset = "0x2108270", VA = "0x182109C70", Slot = "83")]
	public virtual void Die()
	{
	}

	[Token(Token = "0x6003CE6")]
	[Address(RVA = "0x210F580", Offset = "0x210DB80", VA = "0x18210F580", Slot = "84")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__102))]
	protected virtual IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x6003CE7")]
	[Address(RVA = "0x210F4B0", Offset = "0x210DAB0", VA = "0x18210F4B0", Slot = "85")]
	public virtual void UseItem(int item)
	{
	}

	[Token(Token = "0x6003CE8")]
	[Address(RVA = "0x210D9B0", Offset = "0x210BFB0", VA = "0x18210D9B0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6003CE9")]
	[Address(RVA = "0x210E1D0", Offset = "0x210C7D0", VA = "0x18210E1D0")]
	public void PlayAnimation(string animation, float startTime = 0f)
	{
	}

	[Token(Token = "0x6003CEA")]
	[Address(RVA = "0x210E0D0", Offset = "0x210C6D0", VA = "0x18210E0D0")]
	public void PlayAnimationReset(string animation)
	{
	}

	[Token(Token = "0x6003CEB")]
	[Address(RVA = "0x210E030", Offset = "0x210C630", VA = "0x18210E030")]
	[PunRPC]
	public void PlayAnimationRPC(string animation, float startTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003CEC")]
	[Address(RVA = "0x210E080", Offset = "0x210C680", VA = "0x18210E080")]
	[PunRPC]
	public void PlayAnimationResetRPC(string animation, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003CED")]
	[Address(RVA = "0x210DE70", Offset = "0x210C470", VA = "0x18210DE70")]
	public void PlayAnimationIfNotPlaying(string animation, float startTime = 0f)
	{
	}

	[Token(Token = "0x6003CEE")]
	[Address(RVA = "0x2109A80", Offset = "0x2108080", VA = "0x182109A80")]
	public void CrossFade(string animation, float fadeTime = 0f, float startTime = 0f)
	{
	}

	[Token(Token = "0x6003CEF")]
	[Address(RVA = "0x2109820", Offset = "0x2107E20", VA = "0x182109820")]
	public void CrossFadeWithSpeed(string animation, float speed, float fadeTime = 0f, float startTime = 0f)
	{
	}

	[Token(Token = "0x6003CF0")]
	[Address(RVA = "0x21096A0", Offset = "0x2107CA0", VA = "0x1821096A0")]
	public void CrossFadeIfNotPlaying(string animation, float fadeTime = 0f, float startTime = 0f)
	{
	}

	[Token(Token = "0x6003CF1")]
	[Address(RVA = "0x210A520", Offset = "0x2108B20", VA = "0x18210A520")]
	public float GetAnimationSpeed(string animation)
	{
		return default(float);
	}

	[Token(Token = "0x6003CF2")]
	[Address(RVA = "0x210E910", Offset = "0x210CF10", VA = "0x18210E910")]
	public void SetAnimationSpeed(string animation, float speed)
	{
	}

	[Token(Token = "0x6003CF3")]
	[Address(RVA = "0x210E840", Offset = "0x210CE40", VA = "0x18210E840")]
	public void SetAnimationSpeedNonRPC(string animation, float speed)
	{
	}

	[Token(Token = "0x6003CF4")]
	[Address(RVA = "0x210E8C0", Offset = "0x210CEC0", VA = "0x18210E8C0")]
	[PunRPC]
	public void SetAnimationSpeedRPC(string animation, float speed, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003CF5")]
	[Address(RVA = "0x2109730", Offset = "0x2107D30", VA = "0x182109730")]
	[PunRPC]
	public void CrossFadeRPC(string animation, float fadeTime, float startTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003CF6")]
	[Address(RVA = "0x2109790", Offset = "0x2107D90", VA = "0x182109790")]
	[PunRPC]
	public void CrossFadeWithSpeedRPC(string animation, float speed, float fadeTime, float startTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003CF7")]
	[Address(RVA = "0x210E430", Offset = "0x210CA30", VA = "0x18210E430")]
	public void PlaySound(string sound)
	{
	}

	[Token(Token = "0x6003CF8")]
	[Address(RVA = "0x210C900", Offset = "0x210AF00", VA = "0x18210C900")]
	public bool IsPlayingSound(string sound)
	{
		return default(bool);
	}

	[Token(Token = "0x6003CF9")]
	[Address(RVA = "0x210F6D0", Offset = "0x210DCD0", VA = "0x18210F6D0")]
	[IteratorStateMachine(typeof(_003CWaitAndPlaySound_003Ed__122))]
	protected IEnumerator WaitAndPlaySound(string sound, float delay)
	{
		return null;
	}

	[Token(Token = "0x6003CFA")]
	[Address(RVA = "0x210E350", Offset = "0x210C950", VA = "0x18210E350", Slot = "86")]
	[PunRPC]
	public virtual void PlaySoundRPC(string sound, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003CFB")]
	[Address(RVA = "0x210EF80", Offset = "0x210D580", VA = "0x18210EF80")]
	public void StopSound(string sound)
	{
	}

	[Token(Token = "0x6003CFC")]
	[Address(RVA = "0x2109FE0", Offset = "0x21085E0", VA = "0x182109FE0")]
	public void FadeSound(string sound, float volume, float time)
	{
	}

	[Token(Token = "0x6003CFD")]
	[Address(RVA = "0x2109E20", Offset = "0x2108420", VA = "0x182109E20", Slot = "87")]
	[PunRPC]
	public virtual void FadeSoundRPC(string sound, float volume, float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003CFE")]
	[Address(RVA = "0x2109D90", Offset = "0x2108390", VA = "0x182109D90")]
	[IteratorStateMachine(typeof(_003CFadeSoundOverTime_003Ed__127))]
	private IEnumerator FadeSoundOverTime(AudioSource source, float volumeIncrement, float time)
	{
		return null;
	}

	[Token(Token = "0x6003CFF")]
	[Address(RVA = "0x210EEA0", Offset = "0x210D4A0", VA = "0x18210EEA0")]
	[PunRPC]
	public void StopSoundRPC(string sound, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003D00")]
	[Address(RVA = "0x210D820", Offset = "0x210BE20", VA = "0x18210D820", Slot = "88")]
	protected virtual void OnHealthChange()
	{
	}

	[Token(Token = "0x6003D01")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "89")]
	public virtual void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
	}

	[Token(Token = "0x6003D02")]
	[Address(RVA = "0x210AE70", Offset = "0x2109470", VA = "0x18210AE70", Slot = "90")]
	[PunRPC]
	public virtual void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6003D03")]
	[Address(RVA = "0x210A620", Offset = "0x2108C20", VA = "0x18210A620", Slot = "91")]
	[PunRPC]
	public virtual void GetDamagedRPC(string name, int damage)
	{
	}

	[Token(Token = "0x6003D04")]
	[Address(RVA = "0x210BAC0", Offset = "0x210A0C0", VA = "0x18210BAC0", Slot = "92")]
	[PunRPC]
	public virtual void GetKilledRPC(string name)
	{
	}

	[Token(Token = "0x6003D05")]
	[Address(RVA = "0x210C9D0", Offset = "0x210AFD0", VA = "0x18210C9D0")]
	private static int KillFeedActorNumber(BaseCharacter character)
	{
		return default(int);
	}

	[Token(Token = "0x6003D06")]
	[Address(RVA = "0x210D030", Offset = "0x210B630", VA = "0x18210D030", Slot = "93")]
	[PunRPC]
	public virtual void MarkDeadRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003D07")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "94")]
	protected virtual void OnNotifyDie(BaseCharacter killer)
	{
	}

	[Token(Token = "0x6003D08")]
	[Address(RVA = "0x210D500", Offset = "0x210BB00", VA = "0x18210D500")]
	[PunRPC]
	public void NotifyDieRPC(int viewId, string name, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003D09")]
	[Address(RVA = "0x210D070", Offset = "0x210B670", VA = "0x18210D070")]
	[PunRPC]
	public void NotifyDamagedRPC(int viewId, string name, int damage, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003D0A")]
	[Address(RVA = "0x210B7D0", Offset = "0x2109DD0", VA = "0x18210B7D0", Slot = "95")]
	public virtual void GetHit(BaseCharacter enemy, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6003D0B")]
	[Address(RVA = "0x210B540", Offset = "0x2109B40", VA = "0x18210B540", Slot = "96")]
	public virtual void GetHit(string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6003D0C")]
	[Address(RVA = "0x210AC70", Offset = "0x2109270", VA = "0x18210AC70", Slot = "97")]
	public virtual void GetDamaged(string name, int damage)
	{
	}

	[Token(Token = "0x6003D0D")]
	[Address(RVA = "0x210BFB0", Offset = "0x210A5B0", VA = "0x18210BFB0", Slot = "98")]
	public virtual void GetKilled(string name)
	{
	}

	[Token(Token = "0x6003D0E")]
	[Address(RVA = "0x2108F30", Offset = "0x2107530", VA = "0x182108F30", Slot = "99")]
	public virtual void BlowAway(Vector3 source, float force, float maxDistance)
	{
	}

	[Token(Token = "0x6003D0F")]
	[Address(RVA = "0x2108C50", Offset = "0x2107250", VA = "0x182108C50", Slot = "100")]
	[PunRPC]
	public virtual void BlowAwayRPC(Vector3 source, float force, float maxDistance)
	{
	}

	[Token(Token = "0x6003D10")]
	[Address(RVA = "0x21089C0", Offset = "0x2106FC0", VA = "0x1821089C0", Slot = "101")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6003D11")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "102")]
	protected virtual void CreateCharacterIcon()
	{
	}

	[Token(Token = "0x6003D12")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "103")]
	protected virtual void SetColliders()
	{
	}

	[Token(Token = "0x6003D13")]
	[Address(RVA = "0x210EDC0", Offset = "0x210D3C0", VA = "0x18210EDC0", Slot = "104")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x6003D14")]
	[Address(RVA = "0x210F660", Offset = "0x210DC60", VA = "0x18210F660")]
	[IteratorStateMachine(typeof(_003CWaitAndNotifySpawn_003Ed__149))]
	protected IEnumerator WaitAndNotifySpawn()
	{
		return null;
	}

	[Token(Token = "0x6003D15")]
	[Address(RVA = "0x210F5F0", Offset = "0x210DBF0", VA = "0x18210F5F0")]
	[IteratorStateMachine(typeof(_003CWaitAndNotifyReloaded_003Ed__150))]
	protected IEnumerator WaitAndNotifyReloaded()
	{
		return null;
	}

	[Token(Token = "0x6003D16")]
	[Address(RVA = "0x210A5F0", Offset = "0x2108BF0", VA = "0x18210A5F0")]
	public string GetCurrentAnimation()
	{
		return null;
	}

	[Token(Token = "0x6003D17")]
	[Address(RVA = "0x210C290", Offset = "0x210A890", VA = "0x18210C290", Slot = "105")]
	public virtual Quaternion GetTargetRotation()
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6003D18")]
	[Address(RVA = "0x210C1A0", Offset = "0x210A7A0", VA = "0x18210C1A0", Slot = "106")]
	public virtual Vector3 GetTargetDirection()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003D19")]
	[Address(RVA = "0x210A400", Offset = "0x2108A00", VA = "0x18210A400")]
	protected float GetAngleToTarget(Vector3 targetDirection)
	{
		return default(float);
	}

	[Token(Token = "0x6003D1A")]
	[Address(RVA = "0x2109330", Offset = "0x2107930", VA = "0x182109330", Slot = "107")]
	protected virtual void CheckGround()
	{
	}

	[Token(Token = "0x6003D1B")]
	[Address(RVA = "0x2109530", Offset = "0x2107B30", VA = "0x182109530", Slot = "108")]
	public virtual bool CheckRaycastIgnoreTriggers(Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6003D1C")]
	[Address(RVA = "0x210E530", Offset = "0x210CB30", VA = "0x18210E530", Slot = "109")]
	protected virtual RaycastHit? RaycastIgnoreTriggers(Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6003D1D")]
	[Address(RVA = "0x210C970", Offset = "0x210AF70", VA = "0x18210C970")]
	protected bool IsSoundLoopActive(string sound)
	{
		return default(bool);
	}

	[Token(Token = "0x6003D1E")]
	[Address(RVA = "0x210F2F0", Offset = "0x210D8F0", VA = "0x18210F2F0")]
	protected void ToggleSoundLoop(string sound, bool toggle)
	{
	}

	[Token(Token = "0x6003D1F")]
	[Address(RVA = "0x210F3D0", Offset = "0x210D9D0", VA = "0x18210F3D0", Slot = "110")]
	protected virtual void ToggleSound(string sound, bool toggle)
	{
	}

	[Token(Token = "0x6003D20")]
	[Address(RVA = "0x210F150", Offset = "0x210D750", VA = "0x18210F150", Slot = "111")]
	protected virtual void ToggleSoundLocal(string sound, bool toggle)
	{
	}

	[Token(Token = "0x6003D21")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "112")]
	protected virtual void OnDestroy()
	{
	}

	[Token(Token = "0x6003D22")]
	[Address(RVA = "0x210A1D0", Offset = "0x21087D0", VA = "0x18210A1D0", Slot = "113")]
	protected virtual void FixedUpdate()
	{
	}

	[Token(Token = "0x6003D23")]
	[Address(RVA = "0x210CFF0", Offset = "0x210B5F0", VA = "0x18210CFF0", Slot = "114")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x6003D24")]
	[Address(RVA = "0x210CE20", Offset = "0x210B420", VA = "0x18210CE20", Slot = "115")]
	protected virtual void LateUpdateFootstep()
	{
	}

	[Token(Token = "0x6003D25")]
	[Address(RVA = "0x210CAB0", Offset = "0x210B0B0", VA = "0x18210CAB0", Slot = "116")]
	protected virtual void LateUpdateFPS()
	{
	}

	[Token(Token = "0x6003D26")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "117")]
	protected virtual int GetFootstepPhase()
	{
		return default(int);
	}

	[Token(Token = "0x6003D27")]
	[Address(RVA = "0x210AE40", Offset = "0x2109440", VA = "0x18210AE40", Slot = "118")]
	protected virtual string GetFootstepAudio(int phase)
	{
		return null;
	}

	[Token(Token = "0x6003D28")]
	[Address(RVA = "0x210ADE0", Offset = "0x21093E0", VA = "0x18210ADE0", Slot = "119")]
	protected virtual List<Renderer> GetFPSDisabledRenderers()
	{
		return null;
	}

	[Token(Token = "0x6003D29")]
	[Address(RVA = "0x2108770", Offset = "0x2106D70", VA = "0x182108770")]
	protected void AddRendererIfExists(List<Renderer> renderers, GameObject go, bool multiple = false)
	{
	}

	[Token(Token = "0x6003D2A")]
	[Address(RVA = "0x210A5A0", Offset = "0x2108BA0", VA = "0x18210A5A0", Slot = "120")]
	public virtual Vector3 GetCenterPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003D2B")]
	[Address(RVA = "0x210F770", Offset = "0x210DD70", VA = "0x18210F770")]
	public BaseCharacter()
	{
	}
}
