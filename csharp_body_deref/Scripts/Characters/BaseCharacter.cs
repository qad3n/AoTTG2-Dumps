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

[Token(Token = "0x200048E")]
internal class BaseCharacter : MonoBehaviourPunCallbacks, ITargetable
{
	[Token(Token = "0x200048F")]
	[CompilerGenerated]
	private sealed class _003CFadeSoundOverTime_003Ed__108 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001463")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001464")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001465")]
		[FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x4001466")]
		[FieldOffset(Offset = "0x28")]
		public AudioSource source;

		[Token(Token = "0x4001467")]
		[FieldOffset(Offset = "0x30")]
		public float volumeIncrement;

		[Token(Token = "0x17000948")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003149")]
			[Address(RVA = "0x3E99A60", Offset = "0x3E99A60", VA = "0x3E99A60", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000949")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600314B")]
			[Address(RVA = "0x3E99AB0", Offset = "0x3E99AB0", VA = "0x3E99AB0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003146")]
		[Address(RVA = "0x3E95BB0", Offset = "0x3E95BB0", VA = "0x3E95BB0")]
		[DebuggerHidden]
		public _003CFadeSoundOverTime_003Ed__108(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003147")]
		[Address(RVA = "0x3E99980", Offset = "0x3E99980", VA = "0x3E99980", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003148")]
		[Address(RVA = "0x3E99990", Offset = "0x3E99990", VA = "0x3E99990", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600314A")]
		[Address(RVA = "0x3E99A70", Offset = "0x3E99A70", VA = "0x3E99A70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000490")]
	[CompilerGenerated]
	private sealed class _003CRevealAndRemove_003Ed__61 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001468")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001469")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400146A")]
		[FieldOffset(Offset = "0x20")]
		public float startDelay;

		[Token(Token = "0x400146B")]
		[FieldOffset(Offset = "0x28")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x400146C")]
		[FieldOffset(Offset = "0x30")]
		public float seconds;

		[Token(Token = "0x1700094A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600314F")]
			[Address(RVA = "0x3E99C60", Offset = "0x3E99C60", VA = "0x3E99C60", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700094B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003151")]
			[Address(RVA = "0x3E99CB0", Offset = "0x3E99CB0", VA = "0x3E99CB0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600314C")]
		[Address(RVA = "0x3E93480", Offset = "0x3E93480", VA = "0x3E93480")]
		[DebuggerHidden]
		public _003CRevealAndRemove_003Ed__61(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600314D")]
		[Address(RVA = "0x3E99AC0", Offset = "0x3E99AC0", VA = "0x3E99AC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600314E")]
		[Address(RVA = "0x3E99AD0", Offset = "0x3E99AD0", VA = "0x3E99AD0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003150")]
		[Address(RVA = "0x3E99C70", Offset = "0x3E99C70", VA = "0x3E99C70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000491")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__83 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400146D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400146E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400146F")]
		[FieldOffset(Offset = "0x20")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x1700094C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003155")]
			[Address(RVA = "0x3E99D40", Offset = "0x3E99D40", VA = "0x3E99D40", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700094D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003157")]
			[Address(RVA = "0x3E99D90", Offset = "0x3E99D90", VA = "0x3E99D90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003152")]
		[Address(RVA = "0x3E94580", Offset = "0x3E94580", VA = "0x3E94580")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__83(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003153")]
		[Address(RVA = "0x3E99CC0", Offset = "0x3E99CC0", VA = "0x3E99CC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003154")]
		[Address(RVA = "0x3E99CD0", Offset = "0x3E99CD0", VA = "0x3E99CD0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003156")]
		[Address(RVA = "0x3E99D50", Offset = "0x3E99D50", VA = "0x3E99D50", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000492")]
	[CompilerGenerated]
	private sealed class _003CWaitAndNotifyReloaded_003Ed__129 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001470")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001471")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001472")]
		[FieldOffset(Offset = "0x20")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x1700094E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600315B")]
			[Address(RVA = "0x3E99F50", Offset = "0x3E99F50", VA = "0x3E99F50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700094F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600315D")]
			[Address(RVA = "0x3E99FA0", Offset = "0x3E99FA0", VA = "0x3E99FA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003158")]
		[Address(RVA = "0x3E984F0", Offset = "0x3E984F0", VA = "0x3E984F0")]
		[DebuggerHidden]
		public _003CWaitAndNotifyReloaded_003Ed__129(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003159")]
		[Address(RVA = "0x3E99DA0", Offset = "0x3E99DA0", VA = "0x3E99DA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600315A")]
		[Address(RVA = "0x3E99DB0", Offset = "0x3E99DB0", VA = "0x3E99DB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600315C")]
		[Address(RVA = "0x3E99F60", Offset = "0x3E99F60", VA = "0x3E99F60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000493")]
	[CompilerGenerated]
	private sealed class _003CWaitAndNotifySpawn_003Ed__128 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001473")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001474")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001475")]
		[FieldOffset(Offset = "0x20")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x17000950")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003161")]
			[Address(RVA = "0x3E9A1D0", Offset = "0x3E9A1D0", VA = "0x3E9A1D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000951")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003163")]
			[Address(RVA = "0x3E9A220", Offset = "0x3E9A220", VA = "0x3E9A220", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600315E")]
		[Address(RVA = "0x3E98460", Offset = "0x3E98460", VA = "0x3E98460")]
		[DebuggerHidden]
		public _003CWaitAndNotifySpawn_003Ed__128(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600315F")]
		[Address(RVA = "0x3E99FB0", Offset = "0x3E99FB0", VA = "0x3E99FB0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003160")]
		[Address(RVA = "0x3E99FC0", Offset = "0x3E99FC0", VA = "0x3E99FC0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003162")]
		[Address(RVA = "0x3E9A1E0", Offset = "0x3E9A1E0", VA = "0x3E9A1E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000494")]
	[CompilerGenerated]
	private sealed class _003CWaitAndPlaySound_003Ed__103 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001476")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001477")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001478")]
		[FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x4001479")]
		[FieldOffset(Offset = "0x28")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x400147A")]
		[FieldOffset(Offset = "0x30")]
		public string sound;

		[Token(Token = "0x17000952")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003167")]
			[Address(RVA = "0x3E9A2F0", Offset = "0x3E9A2F0", VA = "0x3E9A2F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000953")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003169")]
			[Address(RVA = "0x3E9A340", Offset = "0x3E9A340", VA = "0x3E9A340", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003164")]
		[Address(RVA = "0x3E955C0", Offset = "0x3E955C0", VA = "0x3E955C0")]
		[DebuggerHidden]
		public _003CWaitAndPlaySound_003Ed__103(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003165")]
		[Address(RVA = "0x3E9A230", Offset = "0x3E9A230", VA = "0x3E9A230", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003166")]
		[Address(RVA = "0x3E9A240", Offset = "0x3E9A240", VA = "0x3E9A240", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003168")]
		[Address(RVA = "0x3E9A300", Offset = "0x3E9A300", VA = "0x3E9A300", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400143F")]
	[FieldOffset(Offset = "0x28")]
	public bool FootstepsEnabled;

	[Token(Token = "0x4001440")]
	[FieldOffset(Offset = "0x29")]
	public bool SoundsEnabled;

	[Token(Token = "0x4001441")]
	[FieldOffset(Offset = "0x2C")]
	public float MaxFootstepDistance;

	[Token(Token = "0x4001442")]
	[FieldOffset(Offset = "0x30")]
	public float MaxSoundDistance;

	[Token(Token = "0x4001443")]
	[FieldOffset(Offset = "0x34")]
	protected float _disableKinematicTimeLeft;

	[Token(Token = "0x4001444")]
	[FieldOffset(Offset = "0x38")]
	public string RichTextName;

	[Token(Token = "0x4001445")]
	[FieldOffset(Offset = "0x40")]
	public string VisibleName;

	[Token(Token = "0x4001446")]
	[FieldOffset(Offset = "0x48")]
	public bool HasExplicitNameTag;

	[Token(Token = "0x4001447")]
	[FieldOffset(Offset = "0x50")]
	public string Guild;

	[Token(Token = "0x4001448")]
	[FieldOffset(Offset = "0x58")]
	public string FeedKillerName;

	[Token(Token = "0x4001449")]
	[FieldOffset(Offset = "0x60")]
	public string FeedVictimName;

	[Token(Token = "0x400144A")]
	[FieldOffset(Offset = "0x68")]
	public bool Dead;

	[Token(Token = "0x400144B")]
	[FieldOffset(Offset = "0x69")]
	public bool CustomDamageEnabled;

	[Token(Token = "0x400144C")]
	[FieldOffset(Offset = "0x6C")]
	public int CustomDamage;

	[Token(Token = "0x400144D")]
	[FieldOffset(Offset = "0x70")]
	public BaseComponentCache Cache;

	[Token(Token = "0x400144E")]
	[FieldOffset(Offset = "0x78")]
	public bool AI;

	[Token(Token = "0x400144F")]
	[FieldOffset(Offset = "0x7C")]
	public int MaxHealth;

	[Token(Token = "0x4001450")]
	[FieldOffset(Offset = "0x80")]
	public int CurrentHealth;

	[Token(Token = "0x4001451")]
	[FieldOffset(Offset = "0x88")]
	public string Team;

	[Token(Token = "0x4001452")]
	[FieldOffset(Offset = "0x90")]
	public List<BaseUseable> Items;

	[Token(Token = "0x4001453")]
	[FieldOffset(Offset = "0x98")]
	protected InGameManager _inGameManager;

	[Token(Token = "0x4001454")]
	[FieldOffset(Offset = "0xA0")]
	protected bool _cameraFPS;

	[Token(Token = "0x4001455")]
	[FieldOffset(Offset = "0xA1")]
	protected bool _wasMainCharacter;

	[Token(Token = "0x4001456")]
	[FieldOffset(Offset = "0xA8")]
	public BaseMovementSync MovementSync;

	[Token(Token = "0x4001457")]
	[FieldOffset(Offset = "0xB0")]
	public AnimationHandler Animation;

	[Token(Token = "0x4001458")]
	[FieldOffset(Offset = "0xB8")]
	public BaseDetection Detection;

	[Token(Token = "0x4001459")]
	[FieldOffset(Offset = "0xC0")]
	public float CurrentSpeed;

	[Token(Token = "0x400145A")]
	[FieldOffset(Offset = "0xC4")]
	public bool Grounded;

	[Token(Token = "0x400145B")]
	[FieldOffset(Offset = "0xC5")]
	public bool JustGrounded;

	[Token(Token = "0x400145C")]
	[FieldOffset(Offset = "0xC8")]
	public float TargetAngle;

	[Token(Token = "0x400145D")]
	[FieldOffset(Offset = "0xCC")]
	public bool HasDirection;

	[Token(Token = "0x400145E")]
	[FieldOffset(Offset = "0xD0")]
	protected int _stepPhase;

	[Token(Token = "0x400145F")]
	[FieldOffset(Offset = "0xD4")]
	private LayerMask GroundMaskLayers;

	[Token(Token = "0x4001460")]
	[FieldOffset(Offset = "0xD8")]
	protected Outline OutlineComponent;

	[Token(Token = "0x4001462")]
	[FieldOffset(Offset = "0xE8")]
	private object[] crossfadeCache;

	[Token(Token = "0x17000942")]
	protected virtual int DefaultMaxHealth
	{
		[Token(Token = "0x60030DA")]
		[Address(RVA = "0x3E92C00", Offset = "0x3E92C00", VA = "0x3E92C00", Slot = "57")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000943")]
	protected virtual Vector3 Gravity
	{
		[Token(Token = "0x60030DB")]
		[Address(RVA = "0x3E92C10", Offset = "0x3E92C10", VA = "0x3E92C10", Slot = "58")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000944")]
	public virtual List<string> EmoteActions
	{
		[Token(Token = "0x60030DC")]
		[Address(RVA = "0x3E92C60", Offset = "0x3E92C60", VA = "0x3E92C60", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000945")]
	public string Name
	{
		[Token(Token = "0x60030DD")]
		[Address(RVA = "0x3E92CC0", Offset = "0x3E92CC0", VA = "0x3E92CC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60030DE")]
		[Address(RVA = "0x3E92CD0", Offset = "0x3E92CD0", VA = "0x3E92CD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000946")]
	public virtual LayerMask GroundMask
	{
		[Token(Token = "0x60030DF")]
		[Address(RVA = "0x3E92D50", Offset = "0x3E92D50", VA = "0x3E92D50", Slot = "60")]
		get
		{
			return default(LayerMask);
		}
	}

	[Token(Token = "0x17000947")]
	protected virtual float GroundDistance
	{
		[Token(Token = "0x60030E0")]
		[Address(RVA = "0x3E92D60", Offset = "0x3E92D60", VA = "0x3E92D60", Slot = "61")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x14000002")]
	public event Action<ExitGames.Client.Photon.Hashtable> OnPlayerPropertiesChanged
	{
		[Token(Token = "0x60030E1")]
		[Address(RVA = "0x3E92D70", Offset = "0x3E92D70", VA = "0x3E92D70")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60030E2")]
		[Address(RVA = "0x3E92E20", Offset = "0x3E92E20", VA = "0x3E92E20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60030E3")]
	[Address(RVA = "0x3E92ED0", Offset = "0x3E92ED0", VA = "0x3E92ED0", Slot = "47")]
	public override void OnPlayerPropertiesUpdate(Player targetPlayer, ExitGames.Client.Photon.Hashtable changedProps)
	{
	}

	[Token(Token = "0x60030E4")]
	[Address(RVA = "0x3E92F20", Offset = "0x3E92F20", VA = "0x3E92F20")]
	public void SetKinematic(bool kinematic, float forTime = 0f)
	{
	}

	[Token(Token = "0x60030E5")]
	[Address(RVA = "0x3E92F70", Offset = "0x3E92F70", VA = "0x3E92F70")]
	public Vector3 GetVelocity()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60030E6")]
	[Address(RVA = "0x3E93040", Offset = "0x3E93040", VA = "0x3E93040")]
	public void Reveal(float startDelay, float activeTime)
	{
	}

	[Token(Token = "0x60030E7")]
	[Address(RVA = "0x3E93170", Offset = "0x3E93170", VA = "0x3E93170")]
	public void AddOutline()
	{
	}

	[Token(Token = "0x60030E8")]
	[Address(RVA = "0x3E93250", Offset = "0x3E93250", VA = "0x3E93250")]
	public void AddVisibleOutlineWithColor(Color color)
	{
	}

	[Token(Token = "0x60030E9")]
	[Address(RVA = "0x3E93180", Offset = "0x3E93180", VA = "0x3E93180")]
	public void AddOutlineWithColor(Color color, Outline.Mode mode)
	{
	}

	[Token(Token = "0x60030EA")]
	[Address(RVA = "0x3E93260", Offset = "0x3E93260", VA = "0x3E93260")]
	public void ChangeOutlineColor(Color color)
	{
	}

	[Token(Token = "0x60030EB")]
	[Address(RVA = "0x3E932F0", Offset = "0x3E932F0", VA = "0x3E932F0")]
	public void ChangeOutlineMode(Outline.Mode mode)
	{
	}

	[Token(Token = "0x60030EC")]
	[Address(RVA = "0x3E93370", Offset = "0x3E93370", VA = "0x3E93370")]
	public void ChangeOutlineWidth(float width)
	{
	}

	[Token(Token = "0x60030ED")]
	[Address(RVA = "0x3E93400", Offset = "0x3E93400", VA = "0x3E93400")]
	public void RemoveOutline()
	{
	}

	[Token(Token = "0x60030EE")]
	[Address(RVA = "0x3E930E0", Offset = "0x3E930E0", VA = "0x3E930E0")]
	[IteratorStateMachine(typeof(_003CRevealAndRemove_003Ed__61))]
	private IEnumerator RevealAndRemove(float startDelay, float seconds)
	{
		return null;
	}

	[Token(Token = "0x60030EF")]
	[Address(RVA = "0x3E934A0", Offset = "0x3E934A0", VA = "0x3E934A0", Slot = "62")]
	public virtual string GetTeam()
	{
		return null;
	}

	[Token(Token = "0x60030F0")]
	[Address(RVA = "0x3E934B0", Offset = "0x3E934B0", VA = "0x3E934B0", Slot = "63")]
	public virtual Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60030F1")]
	[Address(RVA = "0x3E93570", Offset = "0x3E93570", VA = "0x3E93570", Slot = "64")]
	public virtual bool ValidTarget()
	{
		return default(bool);
	}

	[Token(Token = "0x60030F2")]
	[Address(RVA = "0x3E93020", Offset = "0x3E93020", VA = "0x3E93020")]
	public bool IsMine()
	{
		return default(bool);
	}

	[Token(Token = "0x60030F3")]
	[Address(RVA = "0x3E935D0", Offset = "0x3E935D0", VA = "0x3E935D0")]
	public bool IsMainCharacter()
	{
		return default(bool);
	}

	[Token(Token = "0x60030F4")]
	[Address(RVA = "0x3E93640", Offset = "0x3E93640", VA = "0x3E93640", Slot = "65")]
	public virtual void Init(bool ai, string team)
	{
	}

	[Token(Token = "0x60030F5")]
	[Address(RVA = "0x3E93A30", Offset = "0x3E93A30", VA = "0x3E93A30", Slot = "66")]
	public virtual Vector3 GetAimPoint()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60030F6")]
	[Address(RVA = "0x3E93960", Offset = "0x3E93960", VA = "0x3E93960")]
	public void SetTeam(string team)
	{
	}

	[Token(Token = "0x60030F7")]
	[Address(RVA = "0x3E93AF0", Offset = "0x3E93AF0", VA = "0x3E93AF0", Slot = "67")]
	public virtual Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x60030F8")]
	[Address(RVA = "0x3E93B10", Offset = "0x3E93B10", VA = "0x3E93B10", Slot = "68")]
	protected virtual void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x60030F9")]
	[Address(RVA = "0x3E93BB0", Offset = "0x3E93BB0", VA = "0x3E93BB0", Slot = "69")]
	protected virtual void CreateDetection()
	{
	}

	[Token(Token = "0x60030FA")]
	[Address(RVA = "0x3E93BD0", Offset = "0x3E93BD0", VA = "0x3E93BD0", Slot = "70")]
	public virtual void Emote(string emote)
	{
	}

	[Token(Token = "0x60030FB")]
	[Address(RVA = "0x3E93BE0", Offset = "0x3E93BE0", VA = "0x3E93BE0", Slot = "71")]
	public virtual void ForceAnimation(string animation, float fade)
	{
	}

	[Token(Token = "0x60030FC")]
	[Address(RVA = "0x3E93BF0", Offset = "0x3E93BF0", VA = "0x3E93BF0")]
	[PunRPC]
	public void InitRPC(bool ai, string name, string guild, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60030FD")]
	[Address(RVA = "0x3E93D50", Offset = "0x3E93D50", VA = "0x3E93D50")]
	[PunRPC]
	public void SetHealthRPC(int currentHealth, int maxHealth, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60030FE")]
	[Address(RVA = "0x3E93DA0", Offset = "0x3E93DA0", VA = "0x3E93DA0")]
	[PunRPC]
	public void SetTeamRPC(string team, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60030FF")]
	[Address(RVA = "0x3E942A0", Offset = "0x3E942A0", VA = "0x3E942A0")]
	public void SetCurrentHealth(int currentHealth)
	{
	}

	[Token(Token = "0x6003100")]
	[Address(RVA = "0x3E942F0", Offset = "0x3E942F0", VA = "0x3E942F0")]
	public void SetMaxHealth(int maxHealth)
	{
	}

	[Token(Token = "0x6003101")]
	[Address(RVA = "0x3E94350", Offset = "0x3E94350", VA = "0x3E94350")]
	public void SetHealth(int health)
	{
	}

	[Token(Token = "0x6003102")]
	[Address(RVA = "0x3E943A0", Offset = "0x3E943A0", VA = "0x3E943A0", Slot = "72")]
	public virtual void TakeDamage(int damage)
	{
	}

	[Token(Token = "0x6003103")]
	[Address(RVA = "0x3E94400", Offset = "0x3E94400", VA = "0x3E94400", Slot = "73")]
	public virtual void Die()
	{
	}

	[Token(Token = "0x6003104")]
	[Address(RVA = "0x3E94510", Offset = "0x3E94510", VA = "0x3E94510", Slot = "74")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__83))]
	protected virtual IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x6003105")]
	[Address(RVA = "0x3E945A0", Offset = "0x3E945A0", VA = "0x3E945A0", Slot = "75")]
	public virtual void UseItem(int item)
	{
	}

	[Token(Token = "0x6003106")]
	[Address(RVA = "0x3E94610", Offset = "0x3E94610", VA = "0x3E94610", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6003107")]
	[Address(RVA = "0x3E94980", Offset = "0x3E94980", VA = "0x3E94980")]
	public void PlayAnimation(string animation, float startTime = 0f)
	{
	}

	[Token(Token = "0x6003108")]
	[Address(RVA = "0x3E94AD0", Offset = "0x3E94AD0", VA = "0x3E94AD0")]
	public void PlayAnimationReset(string animation)
	{
	}

	[Token(Token = "0x6003109")]
	[Address(RVA = "0x3E94BB0", Offset = "0x3E94BB0", VA = "0x3E94BB0")]
	[PunRPC]
	public void PlayAnimationRPC(string animation, float startTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600310A")]
	[Address(RVA = "0x3E94BF0", Offset = "0x3E94BF0", VA = "0x3E94BF0")]
	[PunRPC]
	public void PlayAnimationResetRPC(string animation, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600310B")]
	[Address(RVA = "0x3E94C40", Offset = "0x3E94C40", VA = "0x3E94C40")]
	public void PlayAnimationIfNotPlaying(string animation, float startTime = 0f)
	{
	}

	[Token(Token = "0x600310C")]
	[Address(RVA = "0x3E94CB0", Offset = "0x3E94CB0", VA = "0x3E94CB0")]
	public void CrossFade(string animation, float fadeTime = 0f, float startTime = 0f)
	{
	}

	[Token(Token = "0x600310D")]
	[Address(RVA = "0x3E94E80", Offset = "0x3E94E80", VA = "0x3E94E80")]
	public void CrossFadeWithSpeed(string animation, float speed, float fadeTime = 0f, float startTime = 0f)
	{
	}

	[Token(Token = "0x600310E")]
	[Address(RVA = "0x3E95090", Offset = "0x3E95090", VA = "0x3E95090")]
	public void CrossFadeIfNotPlaying(string animation, float fadeTime = 0f, float startTime = 0f)
	{
	}

	[Token(Token = "0x600310F")]
	[Address(RVA = "0x3E95110", Offset = "0x3E95110", VA = "0x3E95110")]
	public float GetAnimationSpeed(string animation)
	{
		return default(float);
	}

	[Token(Token = "0x6003110")]
	[Address(RVA = "0x3E95170", Offset = "0x3E95170", VA = "0x3E95170")]
	public void SetAnimationSpeed(string animation, float speed)
	{
	}

	[Token(Token = "0x6003111")]
	[Address(RVA = "0x3E952B0", Offset = "0x3E952B0", VA = "0x3E952B0")]
	public void SetAnimationSpeedNonRPC(string animation, float speed)
	{
	}

	[Token(Token = "0x6003112")]
	[Address(RVA = "0x3E952D0", Offset = "0x3E952D0", VA = "0x3E952D0")]
	[PunRPC]
	public void SetAnimationSpeedRPC(string animation, float speed, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003113")]
	[Address(RVA = "0x3E95310", Offset = "0x3E95310", VA = "0x3E95310")]
	[PunRPC]
	public void CrossFadeRPC(string animation, float fadeTime, float startTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003114")]
	[Address(RVA = "0x3E95350", Offset = "0x3E95350", VA = "0x3E95350")]
	[PunRPC]
	public void CrossFadeWithSpeedRPC(string animation, float speed, float fadeTime, float startTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003115")]
	[Address(RVA = "0x3E953D0", Offset = "0x3E953D0", VA = "0x3E953D0")]
	public void PlaySound(string sound)
	{
	}

	[Token(Token = "0x6003116")]
	[Address(RVA = "0x3E954B0", Offset = "0x3E954B0", VA = "0x3E954B0")]
	public bool IsPlayingSound(string sound)
	{
		return default(bool);
	}

	[Token(Token = "0x6003117")]
	[Address(RVA = "0x3E95520", Offset = "0x3E95520", VA = "0x3E95520")]
	[IteratorStateMachine(typeof(_003CWaitAndPlaySound_003Ed__103))]
	protected IEnumerator WaitAndPlaySound(string sound, float delay)
	{
		return null;
	}

	[Token(Token = "0x6003118")]
	[Address(RVA = "0x3E955E0", Offset = "0x3E955E0", VA = "0x3E955E0", Slot = "76")]
	[PunRPC]
	public virtual void PlaySoundRPC(string sound, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003119")]
	[Address(RVA = "0x3E956B0", Offset = "0x3E956B0", VA = "0x3E956B0")]
	public void StopSound(string sound)
	{
	}

	[Token(Token = "0x600311A")]
	[Address(RVA = "0x3E95790", Offset = "0x3E95790", VA = "0x3E95790")]
	public void FadeSound(string sound, float volume, float time)
	{
	}

	[Token(Token = "0x600311B")]
	[Address(RVA = "0x3E95940", Offset = "0x3E95940", VA = "0x3E95940", Slot = "77")]
	[PunRPC]
	public virtual void FadeSoundRPC(string sound, float volume, float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600311C")]
	[Address(RVA = "0x3E95B20", Offset = "0x3E95B20", VA = "0x3E95B20")]
	[IteratorStateMachine(typeof(_003CFadeSoundOverTime_003Ed__108))]
	private IEnumerator FadeSoundOverTime(AudioSource source, float volumeIncrement, float time)
	{
		return null;
	}

	[Token(Token = "0x600311D")]
	[Address(RVA = "0x3E95BD0", Offset = "0x3E95BD0", VA = "0x3E95BD0")]
	[PunRPC]
	public void StopSoundRPC(string sound, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600311E")]
	[Address(RVA = "0x3E95CA0", Offset = "0x3E95CA0", VA = "0x3E95CA0", Slot = "78")]
	protected virtual void OnHealthChange()
	{
	}

	[Token(Token = "0x600311F")]
	[Address(RVA = "0x3E95E10", Offset = "0x3E95E10", VA = "0x3E95E10", Slot = "79")]
	public virtual void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
	}

	[Token(Token = "0x6003120")]
	[Address(RVA = "0x3E95E20", Offset = "0x3E95E20", VA = "0x3E95E20", Slot = "80")]
	[PunRPC]
	public virtual void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6003121")]
	[Address(RVA = "0x3E963A0", Offset = "0x3E963A0", VA = "0x3E963A0", Slot = "81")]
	[PunRPC]
	public virtual void GetDamagedRPC(string name, int damage)
	{
	}

	[Token(Token = "0x6003122")]
	[Address(RVA = "0x3E96880", Offset = "0x3E96880", VA = "0x3E96880", Slot = "82")]
	[PunRPC]
	public virtual void GetKilledRPC(string name)
	{
	}

	[Token(Token = "0x6003123")]
	[Address(RVA = "0x3E96C70", Offset = "0x3E96C70", VA = "0x3E96C70", Slot = "83")]
	[PunRPC]
	public virtual void MarkDeadRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003124")]
	[Address(RVA = "0x3E96CA0", Offset = "0x3E96CA0", VA = "0x3E96CA0")]
	[PunRPC]
	public void NotifyDieRPC(int viewId, string name, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003125")]
	[Address(RVA = "0x3E96F70", Offset = "0x3E96F70", VA = "0x3E96F70")]
	[PunRPC]
	public void NotifyDamagedRPC(int viewId, string name, int damage, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003126")]
	[Address(RVA = "0x3E97440", Offset = "0x3E97440", VA = "0x3E97440", Slot = "84")]
	public virtual void GetHit(BaseCharacter enemy, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6003127")]
	[Address(RVA = "0x3E976E0", Offset = "0x3E976E0", VA = "0x3E976E0", Slot = "85")]
	public virtual void GetHit(string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6003128")]
	[Address(RVA = "0x3E97910", Offset = "0x3E97910", VA = "0x3E97910", Slot = "86")]
	public virtual void GetDamaged(string name, int damage)
	{
	}

	[Token(Token = "0x6003129")]
	[Address(RVA = "0x3E97A60", Offset = "0x3E97A60", VA = "0x3E97A60", Slot = "87")]
	public virtual void GetKilled(string name)
	{
	}

	[Token(Token = "0x600312A")]
	[Address(RVA = "0x3E97B60", Offset = "0x3E97B60", VA = "0x3E97B60", Slot = "88")]
	public virtual void BlowAway(Vector3 source, float force, float maxDistance)
	{
	}

	[Token(Token = "0x600312B")]
	[Address(RVA = "0x3E97D60", Offset = "0x3E97D60", VA = "0x3E97D60", Slot = "89")]
	[PunRPC]
	public virtual void BlowAwayRPC(Vector3 source, float force, float maxDistance)
	{
	}

	[Token(Token = "0x600312C")]
	[Address(RVA = "0x3E980C0", Offset = "0x3E980C0", VA = "0x3E980C0", Slot = "90")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x600312D")]
	[Address(RVA = "0x3E982E0", Offset = "0x3E982E0", VA = "0x3E982E0", Slot = "91")]
	protected virtual void CreateCharacterIcon()
	{
	}

	[Token(Token = "0x600312E")]
	[Address(RVA = "0x3E982F0", Offset = "0x3E982F0", VA = "0x3E982F0", Slot = "92")]
	protected virtual void SetColliders()
	{
	}

	[Token(Token = "0x600312F")]
	[Address(RVA = "0x3E98300", Offset = "0x3E98300", VA = "0x3E98300", Slot = "93")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x6003130")]
	[Address(RVA = "0x3E983F0", Offset = "0x3E983F0", VA = "0x3E983F0")]
	[IteratorStateMachine(typeof(_003CWaitAndNotifySpawn_003Ed__128))]
	protected IEnumerator WaitAndNotifySpawn()
	{
		return null;
	}

	[Token(Token = "0x6003131")]
	[Address(RVA = "0x3E98480", Offset = "0x3E98480", VA = "0x3E98480")]
	[IteratorStateMachine(typeof(_003CWaitAndNotifyReloaded_003Ed__129))]
	protected IEnumerator WaitAndNotifyReloaded()
	{
		return null;
	}

	[Token(Token = "0x6003132")]
	[Address(RVA = "0x3E94960", Offset = "0x3E94960", VA = "0x3E94960")]
	public string GetCurrentAnimation()
	{
		return null;
	}

	[Token(Token = "0x6003133")]
	[Address(RVA = "0x3E98510", Offset = "0x3E98510", VA = "0x3E98510", Slot = "94")]
	public virtual Quaternion GetTargetRotation()
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6003134")]
	[Address(RVA = "0x3E98540", Offset = "0x3E98540", VA = "0x3E98540", Slot = "95")]
	public virtual Vector3 GetTargetDirection()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003135")]
	[Address(RVA = "0x3E98690", Offset = "0x3E98690", VA = "0x3E98690")]
	protected float GetAngleToTarget(Vector3 targetDirection)
	{
		return default(float);
	}

	[Token(Token = "0x6003136")]
	[Address(RVA = "0x3E98780", Offset = "0x3E98780", VA = "0x3E98780", Slot = "96")]
	protected virtual void CheckGround()
	{
	}

	[Token(Token = "0x6003137")]
	[Address(RVA = "0x3E988F0", Offset = "0x3E988F0", VA = "0x3E988F0", Slot = "97")]
	public virtual bool CheckRaycastIgnoreTriggers(Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6003138")]
	[Address(RVA = "0x3E98980", Offset = "0x3E98980", VA = "0x3E98980", Slot = "98")]
	protected virtual RaycastHit? RaycastIgnoreTriggers(Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6003139")]
	[Address(RVA = "0x3E98B50", Offset = "0x3E98B50", VA = "0x3E98B50", Slot = "99")]
	protected virtual void ToggleSound(string sound, bool toggle)
	{
	}

	[Token(Token = "0x600313A")]
	[Address(RVA = "0x3E98C20", Offset = "0x3E98C20", VA = "0x3E98C20", Slot = "100")]
	protected virtual void ToggleSoundLocal(string sound, bool toggle)
	{
	}

	[Token(Token = "0x600313B")]
	[Address(RVA = "0x3E98DC0", Offset = "0x3E98DC0", VA = "0x3E98DC0", Slot = "101")]
	protected virtual void OnDestroy()
	{
	}

	[Token(Token = "0x600313C")]
	[Address(RVA = "0x3E98DD0", Offset = "0x3E98DD0", VA = "0x3E98DD0", Slot = "102")]
	protected virtual void FixedUpdate()
	{
	}

	[Token(Token = "0x600313D")]
	[Address(RVA = "0x3E98EE0", Offset = "0x3E98EE0", VA = "0x3E98EE0", Slot = "103")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x600313E")]
	[Address(RVA = "0x3E98F10", Offset = "0x3E98F10", VA = "0x3E98F10", Slot = "104")]
	protected virtual void LateUpdateFootstep()
	{
	}

	[Token(Token = "0x600313F")]
	[Address(RVA = "0x3E99050", Offset = "0x3E99050", VA = "0x3E99050", Slot = "105")]
	protected virtual void LateUpdateFPS()
	{
	}

	[Token(Token = "0x6003140")]
	[Address(RVA = "0x3E99450", Offset = "0x3E99450", VA = "0x3E99450", Slot = "106")]
	protected virtual int GetFootstepPhase()
	{
		return default(int);
	}

	[Token(Token = "0x6003141")]
	[Address(RVA = "0x3E99460", Offset = "0x3E99460", VA = "0x3E99460", Slot = "107")]
	protected virtual string GetFootstepAudio(int phase)
	{
		return null;
	}

	[Token(Token = "0x6003142")]
	[Address(RVA = "0x3E99490", Offset = "0x3E99490", VA = "0x3E99490", Slot = "108")]
	protected virtual List<Renderer> GetFPSDisabledRenderers()
	{
		return null;
	}

	[Token(Token = "0x6003143")]
	[Address(RVA = "0x3E994F0", Offset = "0x3E994F0", VA = "0x3E994F0")]
	protected void AddRendererIfExists(List<Renderer> renderers, GameObject go, bool multiple = false)
	{
	}

	[Token(Token = "0x6003144")]
	[Address(RVA = "0x3E99790", Offset = "0x3E99790", VA = "0x3E99790", Slot = "109")]
	public virtual Vector3 GetCenterPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003145")]
	[Address(RVA = "0x3E997B0", Offset = "0x3E997B0", VA = "0x3E997B0")]
	public BaseCharacter()
	{
	}
}
