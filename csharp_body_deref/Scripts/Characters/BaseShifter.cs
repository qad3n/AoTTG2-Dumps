// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseShifter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseShifter.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/BaseShifter.cs
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
using Settings;
using SimpleJSONFixed;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200053C")]
internal class BaseShifter : BaseTitan
{
	[Token(Token = "0x200053D")]
	[CompilerGenerated]
	private sealed class _003CWaitAndBecomeHuman_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001884")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001885")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001886")]
		[FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x4001887")]
		[FieldOffset(Offset = "0x28")]
		public BaseShifter _003C_003E4__this;

		[Token(Token = "0x17000A1B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003688")]
			[Address(RVA = "0x4203380", Offset = "0x4203380", VA = "0x4203380", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A1C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600368A")]
			[Address(RVA = "0x42033D0", Offset = "0x42033D0", VA = "0x42033D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003685")]
		[Address(RVA = "0x4200CE0", Offset = "0x4200CE0", VA = "0x4200CE0")]
		[DebuggerHidden]
		public _003CWaitAndBecomeHuman_003Ed__26(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003686")]
		[Address(RVA = "0x4202F10", Offset = "0x4202F10", VA = "0x4202F10", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003687")]
		[Address(RVA = "0x4202F20", Offset = "0x4202F20", VA = "0x4202F20", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003689")]
		[Address(RVA = "0x4203390", Offset = "0x4203390", VA = "0x4203390", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200053E")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001888")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001889")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400188A")]
		[FieldOffset(Offset = "0x20")]
		public BaseShifter _003C_003E4__this;

		[Token(Token = "0x17000A1D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600368E")]
			[Address(RVA = "0x42037C0", Offset = "0x42037C0", VA = "0x42037C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A1E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003690")]
			[Address(RVA = "0x4203810", Offset = "0x4203810", VA = "0x4203810", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600368B")]
		[Address(RVA = "0x4200D70", Offset = "0x4200D70", VA = "0x4200D70")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600368C")]
		[Address(RVA = "0x42033E0", Offset = "0x42033E0", VA = "0x42033E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600368D")]
		[Address(RVA = "0x42033F0", Offset = "0x42033F0", VA = "0x42033F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600368F")]
		[Address(RVA = "0x42037D0", Offset = "0x42037D0", VA = "0x42037D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400187E")]
	[FieldOffset(Offset = "0x271")]
	protected bool _needRoar;

	[Token(Token = "0x400187F")]
	[FieldOffset(Offset = "0x272")]
	public bool TransformingToHuman;

	[Token(Token = "0x4001880")]
	[FieldOffset(Offset = "0x274")]
	public float PreviousHumanGas;

	[Token(Token = "0x4001881")]
	[FieldOffset(Offset = "0x278")]
	public BaseUseable PreviousHumanWeapon;

	[Token(Token = "0x4001882")]
	[FieldOffset(Offset = "0x280")]
	public float DeathAnimationLength;

	[Token(Token = "0x4001883")]
	[FieldOffset(Offset = "0x288")]
	protected BaseCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x17000A13")]
	protected override int DefaultMaxHealth
	{
		[Token(Token = "0x600366D")]
		[Address(RVA = "0x41FF8D0", Offset = "0x41FF8D0", VA = "0x41FF8D0", Slot = "57")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A14")]
	protected override float DefaultRunSpeed
	{
		[Token(Token = "0x600366E")]
		[Address(RVA = "0x41FF8E0", Offset = "0x41FF8E0", VA = "0x41FF8E0", Slot = "113")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A15")]
	protected override float DefaultWalkSpeed
	{
		[Token(Token = "0x600366F")]
		[Address(RVA = "0x41FF8F0", Offset = "0x41FF8F0", VA = "0x41FF8F0", Slot = "114")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A16")]
	protected override float DefaultRotateSpeed
	{
		[Token(Token = "0x6003670")]
		[Address(RVA = "0x41FF900", Offset = "0x41FF900", VA = "0x41FF900", Slot = "116")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A17")]
	protected override float DefaultJumpForce
	{
		[Token(Token = "0x6003671")]
		[Address(RVA = "0x41FF910", Offset = "0x41FF910", VA = "0x41FF910", Slot = "115")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A18")]
	protected override float SizeMultiplier
	{
		[Token(Token = "0x6003672")]
		[Address(RVA = "0x41FF920", Offset = "0x41FF920", VA = "0x41FF920", Slot = "117")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A19")]
	public override float DefaultCrippleTime
	{
		[Token(Token = "0x6003673")]
		[Address(RVA = "0x41FF930", Offset = "0x41FF930", VA = "0x41FF930", Slot = "110")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A1A")]
	protected override float DisableCooldown
	{
		[Token(Token = "0x6003674")]
		[Address(RVA = "0x41FF940", Offset = "0x41FF940", VA = "0x41FF940", Slot = "118")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003675")]
	[Address(RVA = "0x41FF950", Offset = "0x41FF950", VA = "0x41FF950", Slot = "93")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6003676")]
	[Address(RVA = "0x41FFFD0", Offset = "0x41FFFD0", VA = "0x41FFFD0", Slot = "131")]
	public override void Kick()
	{
	}

	[Token(Token = "0x6003677")]
	[Address(RVA = "0x4200020", Offset = "0x4200020", VA = "0x4200020")]
	[PunRPC]
	public void MarkTransformingRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003678")]
	[Address(RVA = "0x4200060", Offset = "0x4200060", VA = "0x4200060", Slot = "176")]
	public virtual void Init(bool ai, string team, JSONNode data, float liveTime)
	{
	}

	[Token(Token = "0x6003679")]
	[Address(RVA = "0x4200340", Offset = "0x4200340", VA = "0x4200340")]
	[IteratorStateMachine(typeof(_003CWaitAndBecomeHuman_003Ed__26))]
	protected IEnumerator WaitAndBecomeHuman(float time)
	{
		return null;
	}

	[Token(Token = "0x600367A")]
	[Address(RVA = "0x4200D00", Offset = "0x4200D00", VA = "0x4200D00", Slot = "74")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__27))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x600367B")]
	[Address(RVA = "0x4200D90", Offset = "0x4200D90", VA = "0x4200D90", Slot = "90")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600367C")]
	[Address(RVA = "0x4200F00", Offset = "0x4200F00", VA = "0x4200F00", Slot = "80")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x600367D")]
	[Address(RVA = "0x42014C0", Offset = "0x42014C0", VA = "0x42014C0", Slot = "79")]
	public override void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
	}

	[Token(Token = "0x600367E")]
	[Address(RVA = "0x4201950", Offset = "0x4201950", VA = "0x4201950", Slot = "158")]
	protected override void Update()
	{
	}

	[Token(Token = "0x600367F")]
	[Address(RVA = "0x4202840", Offset = "0x4202840", VA = "0x4202840", Slot = "141")]
	public override void Land()
	{
	}

	[Token(Token = "0x6003680")]
	[Address(RVA = "0x41FFD10", Offset = "0x41FFD10", VA = "0x41FFD10")]
	protected void LoadSkin()
	{
	}

	[Token(Token = "0x6003681")]
	[Address(RVA = "0x4202AD0", Offset = "0x4202AD0", VA = "0x4202AD0", Slot = "177")]
	protected virtual string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x6003682")]
	[Address(RVA = "0x4202B00", Offset = "0x4202B00", VA = "0x4202B00", Slot = "178")]
	protected virtual BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x6003683")]
	[Address(RVA = "0x4202B10", Offset = "0x4202B10", VA = "0x4202B10")]
	[PunRPC]
	public void LoadSkinRPC(string url, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003684")]
	[Address(RVA = "0x41FEFC0", Offset = "0x41FEFC0", VA = "0x41FEFC0")]
	public BaseShifter()
	{
	}
}
