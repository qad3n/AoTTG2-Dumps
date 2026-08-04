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

[Token(Token = "0x20004D3")]
internal class BaseCharacter : MonoBehaviourPunCallbacks, ITargetable
{
	[Token(Token = "0x20004D4")]
	[CompilerGenerated]
	private sealed class _003CFadeSoundOverTime_003Ed__108 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001574")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001575")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001576")]
		[FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x4001577")]
		[FieldOffset(Offset = "0x28")]
		public AudioSource source;

		[Token(Token = "0x4001578")]
		[FieldOffset(Offset = "0x30")]
		public float volumeIncrement;

		[Token(Token = "0x170009B2")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003357")]
			[Address(RVA = "0x41A6300", Offset = "0x41A6300", VA = "0x41A6300", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009B3")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003359")]
			[Address(RVA = "0x41A6350", Offset = "0x41A6350", VA = "0x41A6350", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003354")]
		[Address(RVA = "0x41A2150", Offset = "0x41A2150", VA = "0x41A2150")]
		[DebuggerHidden]
		public _003CFadeSoundOverTime_003Ed__108(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003355")]
		[Address(RVA = "0x41A6220", Offset = "0x41A6220", VA = "0x41A6220", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003356")]
		[Address(RVA = "0x41A6230", Offset = "0x41A6230", VA = "0x41A6230", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003358")]
		[Address(RVA = "0x41A6310", Offset = "0x41A6310", VA = "0x41A6310", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20004D5")]
	[CompilerGenerated]
	private sealed class _003CRevealAndRemove_003Ed__61 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001579")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400157A")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400157B")]
		[FieldOffset(Offset = "0x20")]
		public float startDelay;

		[Token(Token = "0x400157C")]
		[FieldOffset(Offset = "0x28")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x400157D")]
		[FieldOffset(Offset = "0x30")]
		public float seconds;

		[Token(Token = "0x170009B4")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600335D")]
			[Address(RVA = "0x41A6500", Offset = "0x41A6500", VA = "0x41A6500", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009B5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600335F")]
			[Address(RVA = "0x41A6550", Offset = "0x41A6550", VA = "0x41A6550", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600335A")]
		[Address(RVA = "0x419FA20", Offset = "0x419FA20", VA = "0x419FA20")]
		[DebuggerHidden]
		public _003CRevealAndRemove_003Ed__61(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600335B")]
		[Address(RVA = "0x41A6360", Offset = "0x41A6360", VA = "0x41A6360", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600335C")]
		[Address(RVA = "0x41A6370", Offset = "0x41A6370", VA = "0x41A6370", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600335E")]
		[Address(RVA = "0x41A6510", Offset = "0x41A6510", VA = "0x41A6510", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20004D6")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__83 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400157E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400157F")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001580")]
		[FieldOffset(Offset = "0x20")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x170009B6")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003363")]
			[Address(RVA = "0x41A65E0", Offset = "0x41A65E0", VA = "0x41A65E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009B7")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003365")]
			[Address(RVA = "0x41A6630", Offset = "0x41A6630", VA = "0x41A6630", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003360")]
		[Address(RVA = "0x41A0B20", Offset = "0x41A0B20", VA = "0x41A0B20")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__83(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003361")]
		[Address(RVA = "0x41A6560", Offset = "0x41A6560", VA = "0x41A6560", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003362")]
		[Address(RVA = "0x41A6570", Offset = "0x41A6570", VA = "0x41A6570", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003364")]
		[Address(RVA = "0x41A65F0", Offset = "0x41A65F0", VA = "0x41A65F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20004D7")]
	[CompilerGenerated]
	private sealed class _003CWaitAndNotifyReloaded_003Ed__130 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001581")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001582")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001583")]
		[FieldOffset(Offset = "0x20")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x170009B8")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003369")]
			[Address(RVA = "0x41A67F0", Offset = "0x41A67F0", VA = "0x41A67F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009B9")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600336B")]
			[Address(RVA = "0x41A6840", Offset = "0x41A6840", VA = "0x41A6840", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003366")]
		[Address(RVA = "0x41A4D90", Offset = "0x41A4D90", VA = "0x41A4D90")]
		[DebuggerHidden]
		public _003CWaitAndNotifyReloaded_003Ed__130(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003367")]
		[Address(RVA = "0x41A6640", Offset = "0x41A6640", VA = "0x41A6640", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003368")]
		[Address(RVA = "0x41A6650", Offset = "0x41A6650", VA = "0x41A6650", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600336A")]
		[Address(RVA = "0x41A6800", Offset = "0x41A6800", VA = "0x41A6800", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20004D8")]
	[CompilerGenerated]
	private sealed class _003CWaitAndNotifySpawn_003Ed__129 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001584")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001585")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001586")]
		[FieldOffset(Offset = "0x20")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x170009BA")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600336F")]
			[Address(RVA = "0x41A6A70", Offset = "0x41A6A70", VA = "0x41A6A70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009BB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003371")]
			[Address(RVA = "0x41A6AC0", Offset = "0x41A6AC0", VA = "0x41A6AC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600336C")]
		[Address(RVA = "0x41A4D00", Offset = "0x41A4D00", VA = "0x41A4D00")]
		[DebuggerHidden]
		public _003CWaitAndNotifySpawn_003Ed__129(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600336D")]
		[Address(RVA = "0x41A6850", Offset = "0x41A6850", VA = "0x41A6850", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600336E")]
		[Address(RVA = "0x41A6860", Offset = "0x41A6860", VA = "0x41A6860", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003370")]
		[Address(RVA = "0x41A6A80", Offset = "0x41A6A80", VA = "0x41A6A80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20004D9")]
	[CompilerGenerated]
	private sealed class _003CWaitAndPlaySound_003Ed__103 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001587")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001588")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001589")]
		[FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x400158A")]
		[FieldOffset(Offset = "0x28")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x400158B")]
		[FieldOffset(Offset = "0x30")]
		public string sound;

		[Token(Token = "0x170009BC")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003375")]
			[Address(RVA = "0x41A6B90", Offset = "0x41A6B90", VA = "0x41A6B90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009BD")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003377")]
			[Address(RVA = "0x41A6BE0", Offset = "0x41A6BE0", VA = "0x41A6BE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003372")]
		[Address(RVA = "0x41A1B60", Offset = "0x41A1B60", VA = "0x41A1B60")]
		[DebuggerHidden]
		public _003CWaitAndPlaySound_003Ed__103(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003373")]
		[Address(RVA = "0x41A6AD0", Offset = "0x41A6AD0", VA = "0x41A6AD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003374")]
		[Address(RVA = "0x41A6AE0", Offset = "0x41A6AE0", VA = "0x41A6AE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003376")]
		[Address(RVA = "0x41A6BA0", Offset = "0x41A6BA0", VA = "0x41A6BA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001550")]
	[FieldOffset(Offset = "0x28")]
	public bool FootstepsEnabled;

	[Token(Token = "0x4001551")]
	[FieldOffset(Offset = "0x29")]
	public bool SoundsEnabled;

	[Token(Token = "0x4001552")]
	[FieldOffset(Offset = "0x2C")]
	public float MaxFootstepDistance;

	[Token(Token = "0x4001553")]
	[FieldOffset(Offset = "0x30")]
	public float MaxSoundDistance;

	[Token(Token = "0x4001554")]
	[FieldOffset(Offset = "0x34")]
	protected float _disableKinematicTimeLeft;

	[Token(Token = "0x4001555")]
	[FieldOffset(Offset = "0x38")]
	public string RichTextName;

	[Token(Token = "0x4001556")]
	[FieldOffset(Offset = "0x40")]
	public string VisibleName;

	[Token(Token = "0x4001557")]
	[FieldOffset(Offset = "0x48")]
	public bool HasExplicitNameTag;

	[Token(Token = "0x4001558")]
	[FieldOffset(Offset = "0x50")]
	public string Guild;

	[Token(Token = "0x4001559")]
	[FieldOffset(Offset = "0x58")]
	public string FeedKillerName;

	[Token(Token = "0x400155A")]
	[FieldOffset(Offset = "0x60")]
	public string FeedVictimName;

	[Token(Token = "0x400155B")]
	[FieldOffset(Offset = "0x68")]
	public bool Dead;

	[Token(Token = "0x400155C")]
	[FieldOffset(Offset = "0x69")]
	public bool CustomDamageEnabled;

	[Token(Token = "0x400155D")]
	[FieldOffset(Offset = "0x6C")]
	public int CustomDamage;

	[Token(Token = "0x400155E")]
	[FieldOffset(Offset = "0x70")]
	public BaseComponentCache Cache;

	[Token(Token = "0x400155F")]
	[FieldOffset(Offset = "0x78")]
	public bool AI;

	[Token(Token = "0x4001560")]
	[FieldOffset(Offset = "0x7C")]
	public int MaxHealth;

	[Token(Token = "0x4001561")]
	[FieldOffset(Offset = "0x80")]
	public int CurrentHealth;

	[Token(Token = "0x4001562")]
	[FieldOffset(Offset = "0x88")]
	public string Team;

	[Token(Token = "0x4001563")]
	[FieldOffset(Offset = "0x90")]
	public List<BaseUseable> Items;

	[Token(Token = "0x4001564")]
	[FieldOffset(Offset = "0x98")]
	protected InGameManager _inGameManager;

	[Token(Token = "0x4001565")]
	[FieldOffset(Offset = "0xA0")]
	protected bool _cameraFPS;

	[Token(Token = "0x4001566")]
	[FieldOffset(Offset = "0xA1")]
	protected bool _wasMainCharacter;

	[Token(Token = "0x4001567")]
	[FieldOffset(Offset = "0xA8")]
	public BaseMovementSync MovementSync;

	[Token(Token = "0x4001568")]
	[FieldOffset(Offset = "0xB0")]
	public AnimationHandler Animation;

	[Token(Token = "0x4001569")]
	[FieldOffset(Offset = "0xB8")]
	public BaseDetection Detection;

	[Token(Token = "0x400156A")]
	[FieldOffset(Offset = "0xC0")]
	public float CurrentSpeed;

	[Token(Token = "0x400156B")]
	[FieldOffset(Offset = "0xC4")]
	public bool Grounded;

	[Token(Token = "0x400156C")]
	[FieldOffset(Offset = "0xC5")]
	public bool JustGrounded;

	[Token(Token = "0x400156D")]
	[FieldOffset(Offset = "0xC8")]
	public float TargetAngle;

	[Token(Token = "0x400156E")]
	[FieldOffset(Offset = "0xCC")]
	public bool HasDirection;

	[Token(Token = "0x400156F")]
	[FieldOffset(Offset = "0xD0")]
	protected int _stepPhase;

	[Token(Token = "0x4001570")]
	[FieldOffset(Offset = "0xD4")]
	private LayerMask GroundMaskLayers;

	[Token(Token = "0x4001571")]
	[FieldOffset(Offset = "0xD8")]
	protected Outline OutlineComponent;

	[Token(Token = "0x4001573")]
	[FieldOffset(Offset = "0xE8")]
	private object[] crossfadeCache;

	[Token(Token = "0x170009AC")]
	protected virtual int DefaultMaxHealth
	{
		[Token(Token = "0x60032E7")]
		[Address(RVA = "0x419F1A0", Offset = "0x419F1A0", VA = "0x419F1A0", Slot = "57")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170009AD")]
	protected virtual Vector3 Gravity
	{
		[Token(Token = "0x60032E8")]
		[Address(RVA = "0x419F1B0", Offset = "0x419F1B0", VA = "0x419F1B0", Slot = "58")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170009AE")]
	public virtual List<string> EmoteActions
	{
		[Token(Token = "0x60032E9")]
		[Address(RVA = "0x419F200", Offset = "0x419F200", VA = "0x419F200", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009AF")]
	public string Name
	{
		[Token(Token = "0x60032EA")]
		[Address(RVA = "0x419F260", Offset = "0x419F260", VA = "0x419F260")]
		get
		{
			return null;
		}
		[Token(Token = "0x60032EB")]
		[Address(RVA = "0x419F270", Offset = "0x419F270", VA = "0x419F270")]
		set
		{
		}
	}

	[Token(Token = "0x170009B0")]
	public virtual LayerMask GroundMask
	{
		[Token(Token = "0x60032EC")]
		[Address(RVA = "0x419F2F0", Offset = "0x419F2F0", VA = "0x419F2F0", Slot = "60")]
		get
		{
			return default(LayerMask);
		}
	}

	[Token(Token = "0x170009B1")]
	protected virtual float GroundDistance
	{
		[Token(Token = "0x60032ED")]
		[Address(RVA = "0x419F300", Offset = "0x419F300", VA = "0x419F300", Slot = "61")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x14000003")]
	public event Action<ExitGames.Client.Photon.Hashtable> OnPlayerPropertiesChanged
	{
		[Token(Token = "0x60032EE")]
		[Address(RVA = "0x419F310", Offset = "0x419F310", VA = "0x419F310")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60032EF")]
		[Address(RVA = "0x419F3C0", Offset = "0x419F3C0", VA = "0x419F3C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60032F0")]
	[Address(RVA = "0x419F470", Offset = "0x419F470", VA = "0x419F470", Slot = "47")]
	public override void OnPlayerPropertiesUpdate(Player targetPlayer, ExitGames.Client.Photon.Hashtable changedProps)
	{
	}

	[Token(Token = "0x60032F1")]
	[Address(RVA = "0x419F4C0", Offset = "0x419F4C0", VA = "0x419F4C0")]
	public void SetKinematic(bool kinematic, float forTime = 0f)
	{
	}

	[Token(Token = "0x60032F2")]
	[Address(RVA = "0x419F510", Offset = "0x419F510", VA = "0x419F510")]
	public Vector3 GetVelocity()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60032F3")]
	[Address(RVA = "0x419F5E0", Offset = "0x419F5E0", VA = "0x419F5E0")]
	public void Reveal(float startDelay, float activeTime)
	{
	}

	[Token(Token = "0x60032F4")]
	[Address(RVA = "0x419F710", Offset = "0x419F710", VA = "0x419F710")]
	public void AddOutline()
	{
	}

	[Token(Token = "0x60032F5")]
	[Address(RVA = "0x419F7F0", Offset = "0x419F7F0", VA = "0x419F7F0")]
	public void AddVisibleOutlineWithColor(Color color)
	{
	}

	[Token(Token = "0x60032F6")]
	[Address(RVA = "0x419F720", Offset = "0x419F720", VA = "0x419F720")]
	public void AddOutlineWithColor(Color color, Outline.Mode mode)
	{
	}

	[Token(Token = "0x60032F7")]
	[Address(RVA = "0x419F800", Offset = "0x419F800", VA = "0x419F800")]
	public void ChangeOutlineColor(Color color)
	{
	}

	[Token(Token = "0x60032F8")]
	[Address(RVA = "0x419F890", Offset = "0x419F890", VA = "0x419F890")]
	public void ChangeOutlineMode(Outline.Mode mode)
	{
	}

	[Token(Token = "0x60032F9")]
	[Address(RVA = "0x419F910", Offset = "0x419F910", VA = "0x419F910")]
	public void ChangeOutlineWidth(float width)
	{
	}

	[Token(Token = "0x60032FA")]
	[Address(RVA = "0x419F9A0", Offset = "0x419F9A0", VA = "0x419F9A0")]
	public void RemoveOutline()
	{
	}

	[Token(Token = "0x60032FB")]
	[Address(RVA = "0x419F680", Offset = "0x419F680", VA = "0x419F680")]
	[IteratorStateMachine(typeof(_003CRevealAndRemove_003Ed__61))]
	private IEnumerator RevealAndRemove(float startDelay, float seconds)
	{
		return null;
	}

	[Token(Token = "0x60032FC")]
	[Address(RVA = "0x419FA40", Offset = "0x419FA40", VA = "0x419FA40", Slot = "62")]
	public virtual string GetTeam()
	{
		return null;
	}

	[Token(Token = "0x60032FD")]
	[Address(RVA = "0x419FA50", Offset = "0x419FA50", VA = "0x419FA50", Slot = "63")]
	public virtual Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60032FE")]
	[Address(RVA = "0x419FB10", Offset = "0x419FB10", VA = "0x419FB10", Slot = "64")]
	public virtual bool ValidTarget()
	{
		return default(bool);
	}

	[Token(Token = "0x60032FF")]
	[Address(RVA = "0x419F5C0", Offset = "0x419F5C0", VA = "0x419F5C0")]
	public bool IsMine()
	{
		return default(bool);
	}

	[Token(Token = "0x6003300")]
	[Address(RVA = "0x419FB70", Offset = "0x419FB70", VA = "0x419FB70")]
	public bool IsMainCharacter()
	{
		return default(bool);
	}

	[Token(Token = "0x6003301")]
	[Address(RVA = "0x419FBE0", Offset = "0x419FBE0", VA = "0x419FBE0", Slot = "65")]
	public virtual void Init(bool ai, string team)
	{
	}

	[Token(Token = "0x6003302")]
	[Address(RVA = "0x419FFD0", Offset = "0x419FFD0", VA = "0x419FFD0", Slot = "66")]
	public virtual Vector3 GetAimPoint()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003303")]
	[Address(RVA = "0x419FF00", Offset = "0x419FF00", VA = "0x419FF00")]
	public void SetTeam(string team)
	{
	}

	[Token(Token = "0x6003304")]
	[Address(RVA = "0x41A0090", Offset = "0x41A0090", VA = "0x41A0090", Slot = "67")]
	public virtual Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x6003305")]
	[Address(RVA = "0x41A00B0", Offset = "0x41A00B0", VA = "0x41A00B0", Slot = "68")]
	protected virtual void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6003306")]
	[Address(RVA = "0x41A0150", Offset = "0x41A0150", VA = "0x41A0150", Slot = "69")]
	protected virtual void CreateDetection()
	{
	}

	[Token(Token = "0x6003307")]
	[Address(RVA = "0x41A0170", Offset = "0x41A0170", VA = "0x41A0170", Slot = "70")]
	public virtual void Emote(string emote)
	{
	}

	[Token(Token = "0x6003308")]
	[Address(RVA = "0x41A0180", Offset = "0x41A0180", VA = "0x41A0180", Slot = "71")]
	public virtual void ForceAnimation(string animation, float fade)
	{
	}

	[Token(Token = "0x6003309")]
	[Address(RVA = "0x41A0190", Offset = "0x41A0190", VA = "0x41A0190")]
	[PunRPC]
	public void InitRPC(bool ai, string name, string guild, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600330A")]
	[Address(RVA = "0x41A02F0", Offset = "0x41A02F0", VA = "0x41A02F0")]
	[PunRPC]
	public void SetHealthRPC(int currentHealth, int maxHealth, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600330B")]
	[Address(RVA = "0x41A0340", Offset = "0x41A0340", VA = "0x41A0340")]
	[PunRPC]
	public void SetTeamRPC(string team, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600330C")]
	[Address(RVA = "0x41A0840", Offset = "0x41A0840", VA = "0x41A0840")]
	public void SetCurrentHealth(int currentHealth)
	{
	}

	[Token(Token = "0x600330D")]
	[Address(RVA = "0x41A0890", Offset = "0x41A0890", VA = "0x41A0890")]
	public void SetMaxHealth(int maxHealth)
	{
	}

	[Token(Token = "0x600330E")]
	[Address(RVA = "0x41A08F0", Offset = "0x41A08F0", VA = "0x41A08F0")]
	public void SetHealth(int health)
	{
	}

	[Token(Token = "0x600330F")]
	[Address(RVA = "0x41A0940", Offset = "0x41A0940", VA = "0x41A0940", Slot = "72")]
	public virtual void TakeDamage(int damage)
	{
	}

	[Token(Token = "0x6003310")]
	[Address(RVA = "0x41A09A0", Offset = "0x41A09A0", VA = "0x41A09A0", Slot = "73")]
	public virtual void Die()
	{
	}

	[Token(Token = "0x6003311")]
	[Address(RVA = "0x41A0AB0", Offset = "0x41A0AB0", VA = "0x41A0AB0", Slot = "74")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__83))]
	protected virtual IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x6003312")]
	[Address(RVA = "0x41A0B40", Offset = "0x41A0B40", VA = "0x41A0B40", Slot = "75")]
	public virtual void UseItem(int item)
	{
	}

	[Token(Token = "0x6003313")]
	[Address(RVA = "0x41A0BB0", Offset = "0x41A0BB0", VA = "0x41A0BB0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6003314")]
	[Address(RVA = "0x41A0F20", Offset = "0x41A0F20", VA = "0x41A0F20")]
	public void PlayAnimation(string animation, float startTime = 0f)
	{
	}

	[Token(Token = "0x6003315")]
	[Address(RVA = "0x41A1070", Offset = "0x41A1070", VA = "0x41A1070")]
	public void PlayAnimationReset(string animation)
	{
	}

	[Token(Token = "0x6003316")]
	[Address(RVA = "0x41A1150", Offset = "0x41A1150", VA = "0x41A1150")]
	[PunRPC]
	public void PlayAnimationRPC(string animation, float startTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003317")]
	[Address(RVA = "0x41A1190", Offset = "0x41A1190", VA = "0x41A1190")]
	[PunRPC]
	public void PlayAnimationResetRPC(string animation, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003318")]
	[Address(RVA = "0x41A11E0", Offset = "0x41A11E0", VA = "0x41A11E0")]
	public void PlayAnimationIfNotPlaying(string animation, float startTime = 0f)
	{
	}

	[Token(Token = "0x6003319")]
	[Address(RVA = "0x41A1250", Offset = "0x41A1250", VA = "0x41A1250")]
	public void CrossFade(string animation, float fadeTime = 0f, float startTime = 0f)
	{
	}

	[Token(Token = "0x600331A")]
	[Address(RVA = "0x41A1420", Offset = "0x41A1420", VA = "0x41A1420")]
	public void CrossFadeWithSpeed(string animation, float speed, float fadeTime = 0f, float startTime = 0f)
	{
	}

	[Token(Token = "0x600331B")]
	[Address(RVA = "0x41A1630", Offset = "0x41A1630", VA = "0x41A1630")]
	public void CrossFadeIfNotPlaying(string animation, float fadeTime = 0f, float startTime = 0f)
	{
	}

	[Token(Token = "0x600331C")]
	[Address(RVA = "0x41A16B0", Offset = "0x41A16B0", VA = "0x41A16B0")]
	public float GetAnimationSpeed(string animation)
	{
		return default(float);
	}

	[Token(Token = "0x600331D")]
	[Address(RVA = "0x41A1710", Offset = "0x41A1710", VA = "0x41A1710")]
	public void SetAnimationSpeed(string animation, float speed)
	{
	}

	[Token(Token = "0x600331E")]
	[Address(RVA = "0x41A1850", Offset = "0x41A1850", VA = "0x41A1850")]
	public void SetAnimationSpeedNonRPC(string animation, float speed)
	{
	}

	[Token(Token = "0x600331F")]
	[Address(RVA = "0x41A1870", Offset = "0x41A1870", VA = "0x41A1870")]
	[PunRPC]
	public void SetAnimationSpeedRPC(string animation, float speed, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003320")]
	[Address(RVA = "0x41A18B0", Offset = "0x41A18B0", VA = "0x41A18B0")]
	[PunRPC]
	public void CrossFadeRPC(string animation, float fadeTime, float startTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003321")]
	[Address(RVA = "0x41A18F0", Offset = "0x41A18F0", VA = "0x41A18F0")]
	[PunRPC]
	public void CrossFadeWithSpeedRPC(string animation, float speed, float fadeTime, float startTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003322")]
	[Address(RVA = "0x41A1970", Offset = "0x41A1970", VA = "0x41A1970")]
	public void PlaySound(string sound)
	{
	}

	[Token(Token = "0x6003323")]
	[Address(RVA = "0x41A1A50", Offset = "0x41A1A50", VA = "0x41A1A50")]
	public bool IsPlayingSound(string sound)
	{
		return default(bool);
	}

	[Token(Token = "0x6003324")]
	[Address(RVA = "0x41A1AC0", Offset = "0x41A1AC0", VA = "0x41A1AC0")]
	[IteratorStateMachine(typeof(_003CWaitAndPlaySound_003Ed__103))]
	protected IEnumerator WaitAndPlaySound(string sound, float delay)
	{
		return null;
	}

	[Token(Token = "0x6003325")]
	[Address(RVA = "0x41A1B80", Offset = "0x41A1B80", VA = "0x41A1B80", Slot = "76")]
	[PunRPC]
	public virtual void PlaySoundRPC(string sound, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003326")]
	[Address(RVA = "0x41A1C50", Offset = "0x41A1C50", VA = "0x41A1C50")]
	public void StopSound(string sound)
	{
	}

	[Token(Token = "0x6003327")]
	[Address(RVA = "0x41A1D30", Offset = "0x41A1D30", VA = "0x41A1D30")]
	public void FadeSound(string sound, float volume, float time)
	{
	}

	[Token(Token = "0x6003328")]
	[Address(RVA = "0x41A1EE0", Offset = "0x41A1EE0", VA = "0x41A1EE0", Slot = "77")]
	[PunRPC]
	public virtual void FadeSoundRPC(string sound, float volume, float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003329")]
	[Address(RVA = "0x41A20C0", Offset = "0x41A20C0", VA = "0x41A20C0")]
	[IteratorStateMachine(typeof(_003CFadeSoundOverTime_003Ed__108))]
	private IEnumerator FadeSoundOverTime(AudioSource source, float volumeIncrement, float time)
	{
		return null;
	}

	[Token(Token = "0x600332A")]
	[Address(RVA = "0x41A2170", Offset = "0x41A2170", VA = "0x41A2170")]
	[PunRPC]
	public void StopSoundRPC(string sound, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600332B")]
	[Address(RVA = "0x41A2240", Offset = "0x41A2240", VA = "0x41A2240", Slot = "78")]
	protected virtual void OnHealthChange()
	{
	}

	[Token(Token = "0x600332C")]
	[Address(RVA = "0x41A23B0", Offset = "0x41A23B0", VA = "0x41A23B0", Slot = "79")]
	public virtual void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
	}

	[Token(Token = "0x600332D")]
	[Address(RVA = "0x41A23C0", Offset = "0x41A23C0", VA = "0x41A23C0", Slot = "80")]
	[PunRPC]
	public virtual void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x600332E")]
	[Address(RVA = "0x41A2AB0", Offset = "0x41A2AB0", VA = "0x41A2AB0", Slot = "81")]
	[PunRPC]
	public virtual void GetDamagedRPC(string name, int damage)
	{
	}

	[Token(Token = "0x600332F")]
	[Address(RVA = "0x41A3050", Offset = "0x41A3050", VA = "0x41A3050", Slot = "82")]
	[PunRPC]
	public virtual void GetKilledRPC(string name)
	{
	}

	[Token(Token = "0x6003330")]
	[Address(RVA = "0x41A29E0", Offset = "0x41A29E0", VA = "0x41A29E0")]
	private static int KillFeedActorNumber(BaseCharacter character)
	{
		return default(int);
	}

	[Token(Token = "0x6003331")]
	[Address(RVA = "0x41A3510", Offset = "0x41A3510", VA = "0x41A3510", Slot = "83")]
	[PunRPC]
	public virtual void MarkDeadRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003332")]
	[Address(RVA = "0x41A3540", Offset = "0x41A3540", VA = "0x41A3540")]
	[PunRPC]
	public void NotifyDieRPC(int viewId, string name, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003333")]
	[Address(RVA = "0x41A3810", Offset = "0x41A3810", VA = "0x41A3810")]
	[PunRPC]
	public void NotifyDamagedRPC(int viewId, string name, int damage, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003334")]
	[Address(RVA = "0x41A3CE0", Offset = "0x41A3CE0", VA = "0x41A3CE0", Slot = "84")]
	public virtual void GetHit(BaseCharacter enemy, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6003335")]
	[Address(RVA = "0x41A3F80", Offset = "0x41A3F80", VA = "0x41A3F80", Slot = "85")]
	public virtual void GetHit(string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6003336")]
	[Address(RVA = "0x41A41B0", Offset = "0x41A41B0", VA = "0x41A41B0", Slot = "86")]
	public virtual void GetDamaged(string name, int damage)
	{
	}

	[Token(Token = "0x6003337")]
	[Address(RVA = "0x41A4300", Offset = "0x41A4300", VA = "0x41A4300", Slot = "87")]
	public virtual void GetKilled(string name)
	{
	}

	[Token(Token = "0x6003338")]
	[Address(RVA = "0x41A4400", Offset = "0x41A4400", VA = "0x41A4400", Slot = "88")]
	public virtual void BlowAway(Vector3 source, float force, float maxDistance)
	{
	}

	[Token(Token = "0x6003339")]
	[Address(RVA = "0x41A4600", Offset = "0x41A4600", VA = "0x41A4600", Slot = "89")]
	[PunRPC]
	public virtual void BlowAwayRPC(Vector3 source, float force, float maxDistance)
	{
	}

	[Token(Token = "0x600333A")]
	[Address(RVA = "0x41A4960", Offset = "0x41A4960", VA = "0x41A4960", Slot = "90")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x600333B")]
	[Address(RVA = "0x41A4B80", Offset = "0x41A4B80", VA = "0x41A4B80", Slot = "91")]
	protected virtual void CreateCharacterIcon()
	{
	}

	[Token(Token = "0x600333C")]
	[Address(RVA = "0x41A4B90", Offset = "0x41A4B90", VA = "0x41A4B90", Slot = "92")]
	protected virtual void SetColliders()
	{
	}

	[Token(Token = "0x600333D")]
	[Address(RVA = "0x41A4BA0", Offset = "0x41A4BA0", VA = "0x41A4BA0", Slot = "93")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x600333E")]
	[Address(RVA = "0x41A4C90", Offset = "0x41A4C90", VA = "0x41A4C90")]
	[IteratorStateMachine(typeof(_003CWaitAndNotifySpawn_003Ed__129))]
	protected IEnumerator WaitAndNotifySpawn()
	{
		return null;
	}

	[Token(Token = "0x600333F")]
	[Address(RVA = "0x41A4D20", Offset = "0x41A4D20", VA = "0x41A4D20")]
	[IteratorStateMachine(typeof(_003CWaitAndNotifyReloaded_003Ed__130))]
	protected IEnumerator WaitAndNotifyReloaded()
	{
		return null;
	}

	[Token(Token = "0x6003340")]
	[Address(RVA = "0x41A0F00", Offset = "0x41A0F00", VA = "0x41A0F00")]
	public string GetCurrentAnimation()
	{
		return null;
	}

	[Token(Token = "0x6003341")]
	[Address(RVA = "0x41A4DB0", Offset = "0x41A4DB0", VA = "0x41A4DB0", Slot = "94")]
	public virtual Quaternion GetTargetRotation()
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6003342")]
	[Address(RVA = "0x41A4DE0", Offset = "0x41A4DE0", VA = "0x41A4DE0", Slot = "95")]
	public virtual Vector3 GetTargetDirection()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003343")]
	[Address(RVA = "0x41A4F30", Offset = "0x41A4F30", VA = "0x41A4F30")]
	protected float GetAngleToTarget(Vector3 targetDirection)
	{
		return default(float);
	}

	[Token(Token = "0x6003344")]
	[Address(RVA = "0x41A5020", Offset = "0x41A5020", VA = "0x41A5020", Slot = "96")]
	protected virtual void CheckGround()
	{
	}

	[Token(Token = "0x6003345")]
	[Address(RVA = "0x41A5190", Offset = "0x41A5190", VA = "0x41A5190", Slot = "97")]
	public virtual bool CheckRaycastIgnoreTriggers(Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6003346")]
	[Address(RVA = "0x41A5220", Offset = "0x41A5220", VA = "0x41A5220", Slot = "98")]
	protected virtual RaycastHit? RaycastIgnoreTriggers(Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6003347")]
	[Address(RVA = "0x41A53F0", Offset = "0x41A53F0", VA = "0x41A53F0", Slot = "99")]
	protected virtual void ToggleSound(string sound, bool toggle)
	{
	}

	[Token(Token = "0x6003348")]
	[Address(RVA = "0x41A54C0", Offset = "0x41A54C0", VA = "0x41A54C0", Slot = "100")]
	protected virtual void ToggleSoundLocal(string sound, bool toggle)
	{
	}

	[Token(Token = "0x6003349")]
	[Address(RVA = "0x41A5660", Offset = "0x41A5660", VA = "0x41A5660", Slot = "101")]
	protected virtual void OnDestroy()
	{
	}

	[Token(Token = "0x600334A")]
	[Address(RVA = "0x41A5670", Offset = "0x41A5670", VA = "0x41A5670", Slot = "102")]
	protected virtual void FixedUpdate()
	{
	}

	[Token(Token = "0x600334B")]
	[Address(RVA = "0x41A5780", Offset = "0x41A5780", VA = "0x41A5780", Slot = "103")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x600334C")]
	[Address(RVA = "0x41A57B0", Offset = "0x41A57B0", VA = "0x41A57B0", Slot = "104")]
	protected virtual void LateUpdateFootstep()
	{
	}

	[Token(Token = "0x600334D")]
	[Address(RVA = "0x41A58F0", Offset = "0x41A58F0", VA = "0x41A58F0", Slot = "105")]
	protected virtual void LateUpdateFPS()
	{
	}

	[Token(Token = "0x600334E")]
	[Address(RVA = "0x41A5CF0", Offset = "0x41A5CF0", VA = "0x41A5CF0", Slot = "106")]
	protected virtual int GetFootstepPhase()
	{
		return default(int);
	}

	[Token(Token = "0x600334F")]
	[Address(RVA = "0x41A5D00", Offset = "0x41A5D00", VA = "0x41A5D00", Slot = "107")]
	protected virtual string GetFootstepAudio(int phase)
	{
		return null;
	}

	[Token(Token = "0x6003350")]
	[Address(RVA = "0x41A5D30", Offset = "0x41A5D30", VA = "0x41A5D30", Slot = "108")]
	protected virtual List<Renderer> GetFPSDisabledRenderers()
	{
		return null;
	}

	[Token(Token = "0x6003351")]
	[Address(RVA = "0x41A5D90", Offset = "0x41A5D90", VA = "0x41A5D90")]
	protected void AddRendererIfExists(List<Renderer> renderers, GameObject go, bool multiple = false)
	{
	}

	[Token(Token = "0x6003352")]
	[Address(RVA = "0x41A6030", Offset = "0x41A6030", VA = "0x41A6030", Slot = "109")]
	public virtual Vector3 GetCenterPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003353")]
	[Address(RVA = "0x41A6050", Offset = "0x41A6050", VA = "0x41A6050")]
	public BaseCharacter()
	{
	}
}
