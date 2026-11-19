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

[Token(Token = "0x200068A")]
internal class BaseCharacter : MonoBehaviourPunCallbacks, ITargetable
{
	[Token(Token = "0x200068B")]
	[CompilerGenerated]
	private sealed class _003CFadeSoundOverTime_003Ed__129 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D86")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D87")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D88")]
		[FieldOffset(Offset = "0x20")]
		public AudioSource source;

		[Token(Token = "0x4001D89")]
		[FieldOffset(Offset = "0x28")]
		public float volume;

		[Token(Token = "0x4001D8A")]
		[FieldOffset(Offset = "0x2C")]
		public float time;

		[Token(Token = "0x4001D8B")]
		[FieldOffset(Offset = "0x30")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x4001D8C")]
		[FieldOffset(Offset = "0x38")]
		private float _003CstartVolume_003E5__2;

		[Token(Token = "0x4001D8D")]
		[FieldOffset(Offset = "0x3C")]
		private float _003Celapsed_003E5__3;

		[Token(Token = "0x17000B07")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003FC1")]
			[Address(RVA = "0x5AB9D30", Offset = "0x5AB8D30", VA = "0x5AB9D30", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B08")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003FC3")]
			[Address(RVA = "0x5AB9D80", Offset = "0x5AB8D80", VA = "0x5AB9D80", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003FBE")]
		[Address(RVA = "0x5AB5A90", Offset = "0x5AB4A90", VA = "0x5AB5A90")]
		[DebuggerHidden]
		public _003CFadeSoundOverTime_003Ed__129(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003FBF")]
		[Address(RVA = "0x5AB9BE0", Offset = "0x5AB8BE0", VA = "0x5AB9BE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003FC0")]
		[Address(RVA = "0x5AB9BF0", Offset = "0x5AB8BF0", VA = "0x5AB9BF0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003FC2")]
		[Address(RVA = "0x5AB9D40", Offset = "0x5AB8D40", VA = "0x5AB9D40", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200068C")]
	[CompilerGenerated]
	private sealed class _003CRevealAndRemove_003Ed__81 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D8E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D8F")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D90")]
		[FieldOffset(Offset = "0x20")]
		public float startDelay;

		[Token(Token = "0x4001D91")]
		[FieldOffset(Offset = "0x28")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x4001D92")]
		[FieldOffset(Offset = "0x30")]
		public float seconds;

		[Token(Token = "0x17000B09")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003FC7")]
			[Address(RVA = "0x5AB9F30", Offset = "0x5AB8F30", VA = "0x5AB9F30", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B0A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003FC9")]
			[Address(RVA = "0x5AB9F80", Offset = "0x5AB8F80", VA = "0x5AB9F80", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003FC4")]
		[Address(RVA = "0x5AB33B0", Offset = "0x5AB23B0", VA = "0x5AB33B0")]
		[DebuggerHidden]
		public _003CRevealAndRemove_003Ed__81(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003FC5")]
		[Address(RVA = "0x5AB9D90", Offset = "0x5AB8D90", VA = "0x5AB9D90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003FC6")]
		[Address(RVA = "0x5AB9DA0", Offset = "0x5AB8DA0", VA = "0x5AB9DA0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003FC8")]
		[Address(RVA = "0x5AB9F40", Offset = "0x5AB8F40", VA = "0x5AB9F40", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200068D")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__103 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D93")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D94")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D95")]
		[FieldOffset(Offset = "0x20")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x17000B0B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003FCD")]
			[Address(RVA = "0x5ABA010", Offset = "0x5AB9010", VA = "0x5ABA010", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B0C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003FCF")]
			[Address(RVA = "0x5ABA060", Offset = "0x5AB9060", VA = "0x5ABA060", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003FCA")]
		[Address(RVA = "0x5AB4090", Offset = "0x5AB3090", VA = "0x5AB4090")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__103(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003FCB")]
		[Address(RVA = "0x5AB9F90", Offset = "0x5AB8F90", VA = "0x5AB9F90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003FCC")]
		[Address(RVA = "0x5AB9FA0", Offset = "0x5AB8FA0", VA = "0x5AB9FA0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003FCE")]
		[Address(RVA = "0x5ABA020", Offset = "0x5AB9020", VA = "0x5ABA020", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200068E")]
	[CompilerGenerated]
	private sealed class _003CWaitAndNotifyReloaded_003Ed__152 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D96")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D97")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D98")]
		[FieldOffset(Offset = "0x20")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x17000B0D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003FD3")]
			[Address(RVA = "0x5ABA220", Offset = "0x5AB9220", VA = "0x5ABA220", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B0E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003FD5")]
			[Address(RVA = "0x5ABA270", Offset = "0x5AB9270", VA = "0x5ABA270", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003FD0")]
		[Address(RVA = "0x5AB8790", Offset = "0x5AB7790", VA = "0x5AB8790")]
		[DebuggerHidden]
		public _003CWaitAndNotifyReloaded_003Ed__152(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003FD1")]
		[Address(RVA = "0x5ABA070", Offset = "0x5AB9070", VA = "0x5ABA070", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003FD2")]
		[Address(RVA = "0x5ABA080", Offset = "0x5AB9080", VA = "0x5ABA080", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003FD4")]
		[Address(RVA = "0x5ABA230", Offset = "0x5AB9230", VA = "0x5ABA230", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200068F")]
	[CompilerGenerated]
	private sealed class _003CWaitAndNotifySpawn_003Ed__151 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D99")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D9A")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D9B")]
		[FieldOffset(Offset = "0x20")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x17000B0F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003FD9")]
			[Address(RVA = "0x5ABA490", Offset = "0x5AB9490", VA = "0x5ABA490", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B10")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003FDB")]
			[Address(RVA = "0x5ABA4E0", Offset = "0x5AB94E0", VA = "0x5ABA4E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003FD6")]
		[Address(RVA = "0x5AB8700", Offset = "0x5AB7700", VA = "0x5AB8700")]
		[DebuggerHidden]
		public _003CWaitAndNotifySpawn_003Ed__151(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003FD7")]
		[Address(RVA = "0x5ABA280", Offset = "0x5AB9280", VA = "0x5ABA280", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003FD8")]
		[Address(RVA = "0x5ABA290", Offset = "0x5AB9290", VA = "0x5ABA290", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003FDA")]
		[Address(RVA = "0x5ABA4A0", Offset = "0x5AB94A0", VA = "0x5ABA4A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000690")]
	[CompilerGenerated]
	private sealed class _003CWaitAndPlaySound_003Ed__124 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D9C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D9D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D9E")]
		[FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x4001D9F")]
		[FieldOffset(Offset = "0x28")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x4001DA0")]
		[FieldOffset(Offset = "0x30")]
		public string sound;

		[Token(Token = "0x17000B11")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003FDF")]
			[Address(RVA = "0x5ABA5B0", Offset = "0x5AB95B0", VA = "0x5ABA5B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B12")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003FE1")]
			[Address(RVA = "0x5ABA600", Offset = "0x5AB9600", VA = "0x5ABA600", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003FDC")]
		[Address(RVA = "0x5AB5310", Offset = "0x5AB4310", VA = "0x5AB5310")]
		[DebuggerHidden]
		public _003CWaitAndPlaySound_003Ed__124(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003FDD")]
		[Address(RVA = "0x5ABA4F0", Offset = "0x5AB94F0", VA = "0x5ABA4F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003FDE")]
		[Address(RVA = "0x5ABA500", Offset = "0x5AB9500", VA = "0x5ABA500", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003FE0")]
		[Address(RVA = "0x5ABA5C0", Offset = "0x5AB95C0", VA = "0x5ABA5C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001D60")]
	[FieldOffset(Offset = "0x28")]
	public bool FootstepsEnabled;

	[Token(Token = "0x4001D61")]
	[FieldOffset(Offset = "0x29")]
	public bool SoundsEnabled;

	[Token(Token = "0x4001D62")]
	[FieldOffset(Offset = "0x2A")]
	public bool EffectsEnabled;

	[Token(Token = "0x4001D63")]
	[FieldOffset(Offset = "0x30")]
	private HashSet<string> _activeSoundLoops;

	[Token(Token = "0x4001D64")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<AudioSource, Coroutine> _soundFades;

	[Token(Token = "0x4001D65")]
	[FieldOffset(Offset = "0x40")]
	public bool IsVisible;

	[Token(Token = "0x4001D66")]
	[FieldOffset(Offset = "0x44")]
	protected float _disableKinematicTimeLeft;

	[Token(Token = "0x4001D67")]
	[FieldOffset(Offset = "0x48")]
	public string RichTextName;

	[Token(Token = "0x4001D68")]
	[FieldOffset(Offset = "0x50")]
	public string VisibleName;

	[Token(Token = "0x4001D69")]
	[FieldOffset(Offset = "0x58")]
	public bool HasExplicitNameTag;

	[Token(Token = "0x4001D6A")]
	[FieldOffset(Offset = "0x60")]
	public string Guild;

	[Token(Token = "0x4001D6B")]
	[FieldOffset(Offset = "0x68")]
	public string FeedKillerName;

	[Token(Token = "0x4001D6C")]
	[FieldOffset(Offset = "0x70")]
	public string FeedVictimName;

	[Token(Token = "0x4001D6D")]
	[FieldOffset(Offset = "0x78")]
	public bool Dead;

	[Token(Token = "0x4001D6E")]
	[FieldOffset(Offset = "0x79")]
	public bool CustomDamageEnabled;

	[Token(Token = "0x4001D6F")]
	[FieldOffset(Offset = "0x7C")]
	public int CustomDamage;

	[Token(Token = "0x4001D70")]
	[FieldOffset(Offset = "0x80")]
	public BaseComponentCache Cache;

	[Token(Token = "0x4001D71")]
	[FieldOffset(Offset = "0x88")]
	public bool AI;

	[Token(Token = "0x4001D72")]
	[FieldOffset(Offset = "0x8C")]
	public int MaxHealth;

	[Token(Token = "0x4001D73")]
	[FieldOffset(Offset = "0x90")]
	public int CurrentHealth;

	[Token(Token = "0x4001D74")]
	[FieldOffset(Offset = "0x98")]
	public string Team;

	[Token(Token = "0x4001D75")]
	[FieldOffset(Offset = "0xA0")]
	public List<BaseUseable> Items;

	[Token(Token = "0x4001D76")]
	[FieldOffset(Offset = "0xA8")]
	protected InGameManager _inGameManager;

	[Token(Token = "0x4001D77")]
	[FieldOffset(Offset = "0xB0")]
	protected bool _cameraFPS;

	[Token(Token = "0x4001D78")]
	[FieldOffset(Offset = "0xB1")]
	protected bool _wasMainCharacter;

	[Token(Token = "0x4001D79")]
	[FieldOffset(Offset = "0xB8")]
	public BaseMovementSync MovementSync;

	[Token(Token = "0x4001D7A")]
	[FieldOffset(Offset = "0xC0")]
	public AnimationHandler Animation;

	[Token(Token = "0x4001D7B")]
	[FieldOffset(Offset = "0xC8")]
	public BaseDetection Detection;

	[Token(Token = "0x4001D7C")]
	[FieldOffset(Offset = "0xD0")]
	public float CurrentSpeed;

	[Token(Token = "0x4001D7D")]
	[FieldOffset(Offset = "0xD4")]
	public bool Grounded;

	[Token(Token = "0x4001D7E")]
	[FieldOffset(Offset = "0xD5")]
	public bool JustGrounded;

	[Token(Token = "0x4001D7F")]
	[FieldOffset(Offset = "0xD8")]
	public float TargetAngle;

	[Token(Token = "0x4001D80")]
	[FieldOffset(Offset = "0xDC")]
	public bool HasDirection;

	[Token(Token = "0x4001D81")]
	[FieldOffset(Offset = "0xE0")]
	protected int _stepPhase;

	[Token(Token = "0x4001D82")]
	[FieldOffset(Offset = "0xE4")]
	private LayerMask GroundMaskLayers;

	[Token(Token = "0x4001D83")]
	[FieldOffset(Offset = "0xE8")]
	protected Outline OutlineComponent;

	[Token(Token = "0x4001D84")]
	[FieldOffset(Offset = "0xF0")]
	[CompilerGenerated]
	private Action<ExitGames.Client.Photon.Hashtable> m_OnPlayerPropertiesChanged;

	[Token(Token = "0x4001D85")]
	[FieldOffset(Offset = "0xF8")]
	private object[] crossfadeCache;

	[Token(Token = "0x17000AFA")]
	protected virtual int DefaultMaxHealth
	{
		[Token(Token = "0x6003F42")]
		[Address(RVA = "0x5AB29D0", Offset = "0x5AB19D0", VA = "0x5AB29D0", Slot = "57")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AFB")]
	protected virtual Vector3 Gravity
	{
		[Token(Token = "0x6003F43")]
		[Address(RVA = "0x5AB29E0", Offset = "0x5AB19E0", VA = "0x5AB29E0", Slot = "58")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000AFC")]
	public virtual List<string> EmoteActions
	{
		[Token(Token = "0x6003F44")]
		[Address(RVA = "0x5AB2A30", Offset = "0x5AB1A30", VA = "0x5AB2A30", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AFD")]
	public virtual float MaxFootstepDistance
	{
		[Token(Token = "0x6003F45")]
		[Address(RVA = "0x5AB2A90", Offset = "0x5AB1A90", VA = "0x5AB2A90", Slot = "60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AFE")]
	public virtual float MaxSoundDistance
	{
		[Token(Token = "0x6003F46")]
		[Address(RVA = "0x5AB2AA0", Offset = "0x5AB1AA0", VA = "0x5AB2AA0", Slot = "61")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AFF")]
	public virtual float LODQualityMediumDistance
	{
		[Token(Token = "0x6003F47")]
		[Address(RVA = "0x5AB2AB0", Offset = "0x5AB1AB0", VA = "0x5AB2AB0", Slot = "62")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B00")]
	public virtual float LODQualityLowDistance
	{
		[Token(Token = "0x6003F48")]
		[Address(RVA = "0x5AB2AC0", Offset = "0x5AB1AC0", VA = "0x5AB2AC0", Slot = "63")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B01")]
	public virtual float CullShadowsDistance
	{
		[Token(Token = "0x6003F49")]
		[Address(RVA = "0x5AB2AD0", Offset = "0x5AB1AD0", VA = "0x5AB2AD0", Slot = "64")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B02")]
	public virtual float CullRendererDistance
	{
		[Token(Token = "0x6003F4A")]
		[Address(RVA = "0x5AB2AE0", Offset = "0x5AB1AE0", VA = "0x5AB2AE0", Slot = "65")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B03")]
	public virtual float CullEffectsDistance
	{
		[Token(Token = "0x6003F4B")]
		[Address(RVA = "0x5AB2AF0", Offset = "0x5AB1AF0", VA = "0x5AB2AF0", Slot = "66")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B04")]
	public string Name
	{
		[Token(Token = "0x6003F4C")]
		[Address(RVA = "0x5AB2B00", Offset = "0x5AB1B00", VA = "0x5AB2B00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003F4D")]
		[Address(RVA = "0x5AB2B10", Offset = "0x5AB1B10", VA = "0x5AB2B10")]
		set
		{
		}
	}

	[Token(Token = "0x17000B05")]
	public virtual LayerMask GroundMask
	{
		[Token(Token = "0x6003F4E")]
		[Address(RVA = "0x5AB2B90", Offset = "0x5AB1B90", VA = "0x5AB2B90", Slot = "67")]
		get
		{
			return default(LayerMask);
		}
	}

	[Token(Token = "0x17000B06")]
	protected virtual float GroundDistance
	{
		[Token(Token = "0x6003F4F")]
		[Address(RVA = "0x5AB2BA0", Offset = "0x5AB1BA0", VA = "0x5AB2BA0", Slot = "68")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x14000004")]
	public event Action<ExitGames.Client.Photon.Hashtable> OnPlayerPropertiesChanged
	{
		[Token(Token = "0x6003F50")]
		[Address(RVA = "0x5AB2BB0", Offset = "0x5AB1BB0", VA = "0x5AB2BB0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6003F51")]
		[Address(RVA = "0x5AB2C60", Offset = "0x5AB1C60", VA = "0x5AB2C60")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6003F52")]
	[Address(RVA = "0x5AB2D10", Offset = "0x5AB1D10", VA = "0x5AB2D10", Slot = "69")]
	public virtual bool AlwaysAnimate()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F53")]
	[Address(RVA = "0x5AB2D20", Offset = "0x5AB1D20", VA = "0x5AB2D20")]
	public void RefreshRenderers()
	{
	}

	[Token(Token = "0x6003F54")]
	[Address(RVA = "0x5AB2D40", Offset = "0x5AB1D40", VA = "0x5AB2D40")]
	protected void ToggleParticles(ParticleSystem system, bool toggle)
	{
	}

	[Token(Token = "0x6003F55")]
	[Address(RVA = "0x5AB2D90", Offset = "0x5AB1D90", VA = "0x5AB2D90", Slot = "70")]
	public virtual void OnDistanceUpdate(float distance, float soundDistance)
	{
	}

	[Token(Token = "0x6003F56")]
	[Address(RVA = "0x5AB2E20", Offset = "0x5AB1E20", VA = "0x5AB2E20", Slot = "47")]
	public override void OnPlayerPropertiesUpdate(Player targetPlayer, ExitGames.Client.Photon.Hashtable changedProps)
	{
	}

	[Token(Token = "0x6003F57")]
	[Address(RVA = "0x5AB2E70", Offset = "0x5AB1E70", VA = "0x5AB2E70")]
	public void SetKinematic(bool kinematic, float forTime = 0f)
	{
	}

	[Token(Token = "0x6003F58")]
	[Address(RVA = "0x5AB2EC0", Offset = "0x5AB1EC0", VA = "0x5AB2EC0")]
	public Vector3 GetVelocity()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003F59")]
	[Address(RVA = "0x5AB2F70", Offset = "0x5AB1F70", VA = "0x5AB2F70")]
	public void Reveal(float startDelay, float activeTime)
	{
	}

	[Token(Token = "0x6003F5A")]
	[Address(RVA = "0x5AB3090", Offset = "0x5AB2090", VA = "0x5AB3090")]
	public void AddOutline()
	{
	}

	[Token(Token = "0x6003F5B")]
	[Address(RVA = "0x5AB3180", Offset = "0x5AB2180", VA = "0x5AB3180")]
	public void AddVisibleOutlineWithColor(Color color)
	{
	}

	[Token(Token = "0x6003F5C")]
	[Address(RVA = "0x5AB30B0", Offset = "0x5AB20B0", VA = "0x5AB30B0")]
	public void AddOutlineWithColor(Color color, Outline.Mode mode)
	{
	}

	[Token(Token = "0x6003F5D")]
	[Address(RVA = "0x5AB3190", Offset = "0x5AB2190", VA = "0x5AB3190")]
	public void ChangeOutlineColor(Color color)
	{
	}

	[Token(Token = "0x6003F5E")]
	[Address(RVA = "0x5AB3220", Offset = "0x5AB2220", VA = "0x5AB3220")]
	public void ChangeOutlineMode(Outline.Mode mode)
	{
	}

	[Token(Token = "0x6003F5F")]
	[Address(RVA = "0x5AB32A0", Offset = "0x5AB22A0", VA = "0x5AB32A0")]
	public void ChangeOutlineWidth(float width)
	{
	}

	[Token(Token = "0x6003F60")]
	[Address(RVA = "0x5AB3330", Offset = "0x5AB2330", VA = "0x5AB3330")]
	public void RemoveOutline()
	{
	}

	[Token(Token = "0x6003F61")]
	[Address(RVA = "0x5AB3000", Offset = "0x5AB2000", VA = "0x5AB3000")]
	[IteratorStateMachine(typeof(_003CRevealAndRemove_003Ed__81))]
	private IEnumerator RevealAndRemove(float startDelay, float seconds)
	{
		return null;
	}

	[Token(Token = "0x6003F62")]
	[Address(RVA = "0x5AB33D0", Offset = "0x5AB23D0", VA = "0x5AB33D0", Slot = "71")]
	public virtual string GetTeam()
	{
		return null;
	}

	[Token(Token = "0x6003F63")]
	[Address(RVA = "0x5AB33E0", Offset = "0x5AB23E0", VA = "0x5AB33E0", Slot = "72")]
	public virtual Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003F64")]
	[Address(RVA = "0x5AB34B0", Offset = "0x5AB24B0", VA = "0x5AB34B0", Slot = "73")]
	public virtual bool ValidTarget()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F65")]
	[Address(RVA = "0x5AB3510", Offset = "0x5AB2510", VA = "0x5AB3510", Slot = "74")]
	public virtual bool IsMine()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F66")]
	[Address(RVA = "0x5AB3540", Offset = "0x5AB2540", VA = "0x5AB3540")]
	public bool IsMainCharacter()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F67")]
	[Address(RVA = "0x5AB35B0", Offset = "0x5AB25B0", VA = "0x5AB35B0", Slot = "75")]
	public virtual void Init(bool ai, string team)
	{
	}

	[Token(Token = "0x6003F68")]
	[Address(RVA = "0x5AB39B0", Offset = "0x5AB29B0", VA = "0x5AB39B0", Slot = "76")]
	public virtual Vector3 GetAimPoint()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003F69")]
	[Address(RVA = "0x5AB38E0", Offset = "0x5AB28E0", VA = "0x5AB38E0")]
	public void SetTeam(string team)
	{
	}

	[Token(Token = "0x6003F6A")]
	[Address(RVA = "0x5AB3A70", Offset = "0x5AB2A70", VA = "0x5AB3A70", Slot = "77")]
	public virtual Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x6003F6B")]
	[Address(RVA = "0x5AB3A90", Offset = "0x5AB2A90", VA = "0x5AB3A90", Slot = "78")]
	protected virtual void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6003F6C")]
	[Address(RVA = "0x5AB3B30", Offset = "0x5AB2B30", VA = "0x5AB3B30", Slot = "79")]
	protected virtual void CreateDetection()
	{
	}

	[Token(Token = "0x6003F6D")]
	[Address(RVA = "0x5AB3B50", Offset = "0x5AB2B50", VA = "0x5AB3B50", Slot = "80")]
	public virtual void Emote(string emote)
	{
	}

	[Token(Token = "0x6003F6E")]
	[Address(RVA = "0x5AB3B60", Offset = "0x5AB2B60", VA = "0x5AB3B60", Slot = "81")]
	public virtual void ForceAnimation(string animation, float fade)
	{
	}

	[Token(Token = "0x6003F6F")]
	[Address(RVA = "0x5AB3B70", Offset = "0x5AB2B70", VA = "0x5AB3B70")]
	[PunRPC]
	public void InitRPC(bool ai, string name, string guild, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F70")]
	[Address(RVA = "0x5AB3CD0", Offset = "0x5AB2CD0", VA = "0x5AB3CD0")]
	[PunRPC]
	public void SetHealthRPC(int currentHealth, int maxHealth, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F71")]
	[Address(RVA = "0x5AB3D20", Offset = "0x5AB2D20", VA = "0x5AB3D20")]
	[PunRPC]
	public void SetTeamRPC(string team, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F72")]
	[Address(RVA = "0x5AB3DA0", Offset = "0x5AB2DA0", VA = "0x5AB3DA0")]
	public void SetCurrentHealth(int currentHealth)
	{
	}

	[Token(Token = "0x6003F73")]
	[Address(RVA = "0x5AB3DF0", Offset = "0x5AB2DF0", VA = "0x5AB3DF0")]
	public void SetMaxHealth(int maxHealth)
	{
	}

	[Token(Token = "0x6003F74")]
	[Address(RVA = "0x5AB3E50", Offset = "0x5AB2E50", VA = "0x5AB3E50")]
	public void SetHealth(int health)
	{
	}

	[Token(Token = "0x6003F75")]
	[Address(RVA = "0x5AB3EA0", Offset = "0x5AB2EA0", VA = "0x5AB3EA0", Slot = "82")]
	public virtual void TakeDamage(int damage)
	{
	}

	[Token(Token = "0x6003F76")]
	[Address(RVA = "0x5AB3F00", Offset = "0x5AB2F00", VA = "0x5AB3F00", Slot = "83")]
	public virtual void Die()
	{
	}

	[Token(Token = "0x6003F77")]
	[Address(RVA = "0x5AB4020", Offset = "0x5AB3020", VA = "0x5AB4020", Slot = "84")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__103))]
	protected virtual IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x6003F78")]
	[Address(RVA = "0x5AB40B0", Offset = "0x5AB30B0", VA = "0x5AB40B0", Slot = "85")]
	public virtual void UseItem(int item)
	{
	}

	[Token(Token = "0x6003F79")]
	[Address(RVA = "0x5AB4120", Offset = "0x5AB3120", VA = "0x5AB4120", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6003F7A")]
	[Address(RVA = "0x5AB44A0", Offset = "0x5AB34A0", VA = "0x5AB44A0")]
	public void PlayAnimation(string animation, float startTime = 0f)
	{
	}

	[Token(Token = "0x6003F7B")]
	[Address(RVA = "0x5AB4600", Offset = "0x5AB3600", VA = "0x5AB4600")]
	public void PlayAnimationReset(string animation)
	{
	}

	[Token(Token = "0x6003F7C")]
	[Address(RVA = "0x5AB46F0", Offset = "0x5AB36F0", VA = "0x5AB46F0")]
	[PunRPC]
	public void PlayAnimationRPC(string animation, float startTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F7D")]
	[Address(RVA = "0x5AB4730", Offset = "0x5AB3730", VA = "0x5AB4730")]
	[PunRPC]
	public void PlayAnimationResetRPC(string animation, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F7E")]
	[Address(RVA = "0x5AB4780", Offset = "0x5AB3780", VA = "0x5AB4780")]
	public void PlayAnimationIfNotPlaying(string animation, float startTime = 0f)
	{
	}

	[Token(Token = "0x6003F7F")]
	[Address(RVA = "0x5AB47F0", Offset = "0x5AB37F0", VA = "0x5AB47F0")]
	public void CrossFade(string animation, float fadeTime = 0f, float startTime = 0f)
	{
	}

	[Token(Token = "0x6003F80")]
	[Address(RVA = "0x5AB49C0", Offset = "0x5AB39C0", VA = "0x5AB49C0")]
	public void CrossFadeWithSpeed(string animation, float speed, float fadeTime = 0f, float startTime = 0f)
	{
	}

	[Token(Token = "0x6003F81")]
	[Address(RVA = "0x5AB4BE0", Offset = "0x5AB3BE0", VA = "0x5AB4BE0")]
	public void CrossFadeIfNotPlaying(string animation, float fadeTime = 0f, float startTime = 0f)
	{
	}

	[Token(Token = "0x6003F82")]
	[Address(RVA = "0x5AB4C60", Offset = "0x5AB3C60", VA = "0x5AB4C60")]
	public float GetAnimationSpeed(string animation)
	{
		return default(float);
	}

	[Token(Token = "0x6003F83")]
	[Address(RVA = "0x5AB4CC0", Offset = "0x5AB3CC0", VA = "0x5AB4CC0")]
	public void SetAnimationSpeed(string animation, float speed)
	{
	}

	[Token(Token = "0x6003F84")]
	[Address(RVA = "0x5AB4E10", Offset = "0x5AB3E10", VA = "0x5AB4E10")]
	public void SetAnimationSpeedNonRPC(string animation, float speed)
	{
	}

	[Token(Token = "0x6003F85")]
	[Address(RVA = "0x5AB4E80", Offset = "0x5AB3E80", VA = "0x5AB4E80")]
	[PunRPC]
	public void SetAnimationSpeedRPC(string animation, float speed, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F86")]
	[Address(RVA = "0x5AB4F20", Offset = "0x5AB3F20", VA = "0x5AB4F20")]
	[PunRPC]
	public void CrossFadeRPC(string animation, float fadeTime, float startTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F87")]
	[Address(RVA = "0x5AB4F60", Offset = "0x5AB3F60", VA = "0x5AB4F60")]
	[PunRPC]
	public void CrossFadeWithSpeedRPC(string animation, float speed, float fadeTime, float startTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F88")]
	[Address(RVA = "0x5AB5040", Offset = "0x5AB4040", VA = "0x5AB5040")]
	public void PlaySound(string sound)
	{
	}

	[Token(Token = "0x6003F89")]
	[Address(RVA = "0x5AB5190", Offset = "0x5AB4190", VA = "0x5AB5190")]
	public bool HasSound(string sound)
	{
		return default(bool);
	}

	[Token(Token = "0x6003F8A")]
	[Address(RVA = "0x5AB51F0", Offset = "0x5AB41F0", VA = "0x5AB51F0")]
	public bool IsPlayingSound(string sound)
	{
		return default(bool);
	}

	[Token(Token = "0x6003F8B")]
	[Address(RVA = "0x5AB5280", Offset = "0x5AB4280", VA = "0x5AB5280")]
	[IteratorStateMachine(typeof(_003CWaitAndPlaySound_003Ed__124))]
	protected IEnumerator WaitAndPlaySound(string sound, float delay)
	{
		return null;
	}

	[Token(Token = "0x6003F8C")]
	[Address(RVA = "0x5AB5330", Offset = "0x5AB4330", VA = "0x5AB5330", Slot = "86")]
	[PunRPC]
	public virtual void PlaySoundRPC(string sound, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F8D")]
	[Address(RVA = "0x5AB5410", Offset = "0x5AB4410", VA = "0x5AB5410")]
	public void StopSound(string sound)
	{
	}

	[Token(Token = "0x6003F8E")]
	[Address(RVA = "0x5AB5560", Offset = "0x5AB4560", VA = "0x5AB5560")]
	public void FadeSound(string sound, float volume, float time)
	{
	}

	[Token(Token = "0x6003F8F")]
	[Address(RVA = "0x5AB5780", Offset = "0x5AB4780", VA = "0x5AB5780", Slot = "87")]
	[PunRPC]
	public virtual void FadeSoundRPC(string sound, float volume, float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F90")]
	[Address(RVA = "0x5AB59F0", Offset = "0x5AB49F0", VA = "0x5AB59F0")]
	[IteratorStateMachine(typeof(_003CFadeSoundOverTime_003Ed__129))]
	private IEnumerator FadeSoundOverTime(AudioSource source, float volume, float time)
	{
		return null;
	}

	[Token(Token = "0x6003F91")]
	[Address(RVA = "0x5AB5AB0", Offset = "0x5AB4AB0", VA = "0x5AB5AB0")]
	[PunRPC]
	public void StopSoundRPC(string sound, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F92")]
	[Address(RVA = "0x5AB5B80", Offset = "0x5AB4B80", VA = "0x5AB5B80", Slot = "88")]
	protected virtual void OnHealthChange()
	{
	}

	[Token(Token = "0x6003F93")]
	[Address(RVA = "0x5AB5D00", Offset = "0x5AB4D00", VA = "0x5AB5D00", Slot = "89")]
	public virtual void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
	}

	[Token(Token = "0x6003F94")]
	[Address(RVA = "0x5AB5D10", Offset = "0x5AB4D10", VA = "0x5AB5D10", Slot = "90")]
	[PunRPC]
	public virtual void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6003F95")]
	[Address(RVA = "0x5AB6410", Offset = "0x5AB5410", VA = "0x5AB6410", Slot = "91")]
	[PunRPC]
	public virtual void GetDamagedRPC(string name, int damage)
	{
	}

	[Token(Token = "0x6003F96")]
	[Address(RVA = "0x5AB69B0", Offset = "0x5AB59B0", VA = "0x5AB69B0", Slot = "92")]
	[PunRPC]
	public virtual void GetKilledRPC(string name)
	{
	}

	[Token(Token = "0x6003F97")]
	[Address(RVA = "0x5AB6340", Offset = "0x5AB5340", VA = "0x5AB6340")]
	private static int KillFeedActorNumber(BaseCharacter character)
	{
		return default(int);
	}

	[Token(Token = "0x6003F98")]
	[Address(RVA = "0x5AB6E50", Offset = "0x5AB5E50", VA = "0x5AB6E50", Slot = "93")]
	[PunRPC]
	public virtual void MarkDeadRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F99")]
	[Address(RVA = "0x5AB6E90", Offset = "0x5AB5E90", VA = "0x5AB6E90", Slot = "94")]
	protected virtual void OnNotifyDie(BaseCharacter killer)
	{
	}

	[Token(Token = "0x6003F9A")]
	[Address(RVA = "0x5AB6EA0", Offset = "0x5AB5EA0", VA = "0x5AB6EA0")]
	[PunRPC]
	public void NotifyDieRPC(int viewId, string name, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F9B")]
	[Address(RVA = "0x5AB7190", Offset = "0x5AB6190", VA = "0x5AB7190")]
	[PunRPC]
	public void NotifyDamagedRPC(int viewId, string name, int damage, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003F9C")]
	[Address(RVA = "0x5AB7670", Offset = "0x5AB6670", VA = "0x5AB7670", Slot = "95")]
	public virtual void GetHit(BaseCharacter enemy, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6003F9D")]
	[Address(RVA = "0x5AB7910", Offset = "0x5AB6910", VA = "0x5AB7910", Slot = "96")]
	public virtual void GetHit(string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6003F9E")]
	[Address(RVA = "0x5AB7B40", Offset = "0x5AB6B40", VA = "0x5AB7B40", Slot = "97")]
	public virtual void GetDamaged(string name, int damage)
	{
	}

	[Token(Token = "0x6003F9F")]
	[Address(RVA = "0x5AB7CA0", Offset = "0x5AB6CA0", VA = "0x5AB7CA0", Slot = "98")]
	public virtual void GetKilled(string name)
	{
	}

	[Token(Token = "0x6003FA0")]
	[Address(RVA = "0x5AB7DA0", Offset = "0x5AB6DA0", VA = "0x5AB7DA0", Slot = "99")]
	public virtual void BlowAway(Vector3 source, float force, float maxDistance)
	{
	}

	[Token(Token = "0x6003FA1")]
	[Address(RVA = "0x5AB7FB0", Offset = "0x5AB6FB0", VA = "0x5AB7FB0", Slot = "100")]
	[PunRPC]
	public virtual void BlowAwayRPC(Vector3 source, float force, float maxDistance)
	{
	}

	[Token(Token = "0x6003FA2")]
	[Address(RVA = "0x5AB8360", Offset = "0x5AB7360", VA = "0x5AB8360", Slot = "101")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6003FA3")]
	[Address(RVA = "0x5AB8590", Offset = "0x5AB7590", VA = "0x5AB8590", Slot = "102")]
	protected virtual void CreateCharacterIcon()
	{
	}

	[Token(Token = "0x6003FA4")]
	[Address(RVA = "0x5AB85A0", Offset = "0x5AB75A0", VA = "0x5AB85A0", Slot = "103")]
	protected virtual void SetColliders()
	{
	}

	[Token(Token = "0x6003FA5")]
	[Address(RVA = "0x5AB85B0", Offset = "0x5AB75B0", VA = "0x5AB85B0", Slot = "104")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x6003FA6")]
	[Address(RVA = "0x5AB8690", Offset = "0x5AB7690", VA = "0x5AB8690")]
	[IteratorStateMachine(typeof(_003CWaitAndNotifySpawn_003Ed__151))]
	protected IEnumerator WaitAndNotifySpawn()
	{
		return null;
	}

	[Token(Token = "0x6003FA7")]
	[Address(RVA = "0x5AB8720", Offset = "0x5AB7720", VA = "0x5AB8720")]
	[IteratorStateMachine(typeof(_003CWaitAndNotifyReloaded_003Ed__152))]
	protected IEnumerator WaitAndNotifyReloaded()
	{
		return null;
	}

	[Token(Token = "0x6003FA8")]
	[Address(RVA = "0x5AB4480", Offset = "0x5AB3480", VA = "0x5AB4480")]
	public string GetCurrentAnimation()
	{
		return null;
	}

	[Token(Token = "0x6003FA9")]
	[Address(RVA = "0x5AB87B0", Offset = "0x5AB77B0", VA = "0x5AB87B0", Slot = "105")]
	public virtual Quaternion GetTargetRotation()
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6003FAA")]
	[Address(RVA = "0x5AB87F0", Offset = "0x5AB77F0", VA = "0x5AB87F0", Slot = "106")]
	public virtual Vector3 GetTargetDirection()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003FAB")]
	[Address(RVA = "0x5AB8970", Offset = "0x5AB7970", VA = "0x5AB8970")]
	protected float GetAngleToTarget(Vector3 targetDirection)
	{
		return default(float);
	}

	[Token(Token = "0x6003FAC")]
	[Address(RVA = "0x5AB8A70", Offset = "0x5AB7A70", VA = "0x5AB8A70", Slot = "107")]
	protected virtual void CheckGround()
	{
	}

	[Token(Token = "0x6003FAD")]
	[Address(RVA = "0x5AB8BE0", Offset = "0x5AB7BE0", VA = "0x5AB8BE0", Slot = "108")]
	public virtual bool CheckRaycastIgnoreTriggers(Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6003FAE")]
	[Address(RVA = "0x5AB8C70", Offset = "0x5AB7C70", VA = "0x5AB8C70", Slot = "109")]
	protected virtual RaycastHit? RaycastIgnoreTriggers(Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6003FAF")]
	[Address(RVA = "0x5AB8DB0", Offset = "0x5AB7DB0", VA = "0x5AB8DB0")]
	protected bool IsSoundLoopActive(string sound)
	{
		return default(bool);
	}

	[Token(Token = "0x6003FB0")]
	[Address(RVA = "0x5AB8E00", Offset = "0x5AB7E00", VA = "0x5AB8E00")]
	protected void ToggleSoundLoop(string sound, bool toggle)
	{
	}

	[Token(Token = "0x6003FB1")]
	[Address(RVA = "0x5AB8EC0", Offset = "0x5AB7EC0", VA = "0x5AB8EC0", Slot = "110")]
	protected virtual void ToggleSound(string sound, bool toggle)
	{
	}

	[Token(Token = "0x6003FB2")]
	[Address(RVA = "0x5AB8F60", Offset = "0x5AB7F60", VA = "0x5AB8F60", Slot = "111")]
	protected virtual void ToggleSoundLocal(string sound, bool toggle)
	{
	}

	[Token(Token = "0x6003FB3")]
	[Address(RVA = "0x5AB9020", Offset = "0x5AB8020", VA = "0x5AB9020", Slot = "112")]
	protected virtual void OnDestroy()
	{
	}

	[Token(Token = "0x6003FB4")]
	[Address(RVA = "0x5AB9030", Offset = "0x5AB8030", VA = "0x5AB9030", Slot = "113")]
	protected virtual void FixedUpdate()
	{
	}

	[Token(Token = "0x6003FB5")]
	[Address(RVA = "0x5AB9150", Offset = "0x5AB8150", VA = "0x5AB9150", Slot = "114")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x6003FB6")]
	[Address(RVA = "0x5AB9180", Offset = "0x5AB8180", VA = "0x5AB9180", Slot = "115")]
	protected virtual void LateUpdateFootstep()
	{
	}

	[Token(Token = "0x6003FB7")]
	[Address(RVA = "0x5AB92B0", Offset = "0x5AB82B0", VA = "0x5AB92B0", Slot = "116")]
	protected virtual void LateUpdateFPS()
	{
	}

	[Token(Token = "0x6003FB8")]
	[Address(RVA = "0x5AB9650", Offset = "0x5AB8650", VA = "0x5AB9650", Slot = "117")]
	protected virtual int GetFootstepPhase()
	{
		return default(int);
	}

	[Token(Token = "0x6003FB9")]
	[Address(RVA = "0x5AB9660", Offset = "0x5AB8660", VA = "0x5AB9660", Slot = "118")]
	protected virtual string GetFootstepAudio(int phase)
	{
		return null;
	}

	[Token(Token = "0x6003FBA")]
	[Address(RVA = "0x5AB9690", Offset = "0x5AB8690", VA = "0x5AB9690", Slot = "119")]
	protected virtual List<Renderer> GetFPSDisabledRenderers()
	{
		return null;
	}

	[Token(Token = "0x6003FBB")]
	[Address(RVA = "0x5AB96F0", Offset = "0x5AB86F0", VA = "0x5AB96F0")]
	protected void AddRendererIfExists(List<Renderer> renderers, GameObject go, bool multiple = false)
	{
	}

	[Token(Token = "0x6003FBC")]
	[Address(RVA = "0x5AB9990", Offset = "0x5AB8990", VA = "0x5AB9990", Slot = "120")]
	public virtual Vector3 GetCenterPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003FBD")]
	[Address(RVA = "0x5AB99C0", Offset = "0x5AB89C0", VA = "0x5AB99C0")]
	public BaseCharacter()
	{
	}
}
