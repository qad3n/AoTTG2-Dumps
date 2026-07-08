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

[Token(Token = "0x20004F7")]
internal class BaseShifter : BaseTitan
{
	[Token(Token = "0x20004F8")]
	[CompilerGenerated]
	private sealed class _003CWaitAndBecomeHuman_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001773")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001774")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001775")]
		[FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x4001776")]
		[FieldOffset(Offset = "0x28")]
		public BaseShifter _003C_003E4__this;

		[Token(Token = "0x170009B1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600347A")]
			[Address(RVA = "0x3EF6AC0", Offset = "0x3EF6AC0", VA = "0x3EF6AC0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009B2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600347C")]
			[Address(RVA = "0x3EF6B10", Offset = "0x3EF6B10", VA = "0x3EF6B10", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003477")]
		[Address(RVA = "0x3EF4420", Offset = "0x3EF4420", VA = "0x3EF4420")]
		[DebuggerHidden]
		public _003CWaitAndBecomeHuman_003Ed__26(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003478")]
		[Address(RVA = "0x3EF6650", Offset = "0x3EF6650", VA = "0x3EF6650", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003479")]
		[Address(RVA = "0x3EF6660", Offset = "0x3EF6660", VA = "0x3EF6660", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600347B")]
		[Address(RVA = "0x3EF6AD0", Offset = "0x3EF6AD0", VA = "0x3EF6AD0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20004F9")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001777")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001778")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001779")]
		[FieldOffset(Offset = "0x20")]
		public BaseShifter _003C_003E4__this;

		[Token(Token = "0x170009B3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003480")]
			[Address(RVA = "0x3EF6F00", Offset = "0x3EF6F00", VA = "0x3EF6F00", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009B4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003482")]
			[Address(RVA = "0x3EF6F50", Offset = "0x3EF6F50", VA = "0x3EF6F50", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600347D")]
		[Address(RVA = "0x3EF44B0", Offset = "0x3EF44B0", VA = "0x3EF44B0")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600347E")]
		[Address(RVA = "0x3EF6B20", Offset = "0x3EF6B20", VA = "0x3EF6B20", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600347F")]
		[Address(RVA = "0x3EF6B30", Offset = "0x3EF6B30", VA = "0x3EF6B30", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003481")]
		[Address(RVA = "0x3EF6F10", Offset = "0x3EF6F10", VA = "0x3EF6F10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400176D")]
	[FieldOffset(Offset = "0x271")]
	protected bool _needRoar;

	[Token(Token = "0x400176E")]
	[FieldOffset(Offset = "0x272")]
	public bool TransformingToHuman;

	[Token(Token = "0x400176F")]
	[FieldOffset(Offset = "0x274")]
	public float PreviousHumanGas;

	[Token(Token = "0x4001770")]
	[FieldOffset(Offset = "0x278")]
	public BaseUseable PreviousHumanWeapon;

	[Token(Token = "0x4001771")]
	[FieldOffset(Offset = "0x280")]
	public float DeathAnimationLength;

	[Token(Token = "0x4001772")]
	[FieldOffset(Offset = "0x288")]
	protected BaseCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x170009A9")]
	protected override int DefaultMaxHealth
	{
		[Token(Token = "0x600345F")]
		[Address(RVA = "0x3EF3010", Offset = "0x3EF3010", VA = "0x3EF3010", Slot = "57")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170009AA")]
	protected override float DefaultRunSpeed
	{
		[Token(Token = "0x6003460")]
		[Address(RVA = "0x3EF3020", Offset = "0x3EF3020", VA = "0x3EF3020", Slot = "113")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009AB")]
	protected override float DefaultWalkSpeed
	{
		[Token(Token = "0x6003461")]
		[Address(RVA = "0x3EF3030", Offset = "0x3EF3030", VA = "0x3EF3030", Slot = "114")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009AC")]
	protected override float DefaultRotateSpeed
	{
		[Token(Token = "0x6003462")]
		[Address(RVA = "0x3EF3040", Offset = "0x3EF3040", VA = "0x3EF3040", Slot = "116")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009AD")]
	protected override float DefaultJumpForce
	{
		[Token(Token = "0x6003463")]
		[Address(RVA = "0x3EF3050", Offset = "0x3EF3050", VA = "0x3EF3050", Slot = "115")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009AE")]
	protected override float SizeMultiplier
	{
		[Token(Token = "0x6003464")]
		[Address(RVA = "0x3EF3060", Offset = "0x3EF3060", VA = "0x3EF3060", Slot = "117")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009AF")]
	public override float DefaultCrippleTime
	{
		[Token(Token = "0x6003465")]
		[Address(RVA = "0x3EF3070", Offset = "0x3EF3070", VA = "0x3EF3070", Slot = "110")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009B0")]
	protected override float DisableCooldown
	{
		[Token(Token = "0x6003466")]
		[Address(RVA = "0x3EF3080", Offset = "0x3EF3080", VA = "0x3EF3080", Slot = "118")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003467")]
	[Address(RVA = "0x3EF3090", Offset = "0x3EF3090", VA = "0x3EF3090", Slot = "93")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6003468")]
	[Address(RVA = "0x3EF3710", Offset = "0x3EF3710", VA = "0x3EF3710", Slot = "131")]
	public override void Kick()
	{
	}

	[Token(Token = "0x6003469")]
	[Address(RVA = "0x3EF3760", Offset = "0x3EF3760", VA = "0x3EF3760")]
	[PunRPC]
	public void MarkTransformingRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600346A")]
	[Address(RVA = "0x3EF37A0", Offset = "0x3EF37A0", VA = "0x3EF37A0", Slot = "176")]
	public virtual void Init(bool ai, string team, JSONNode data, float liveTime)
	{
	}

	[Token(Token = "0x600346B")]
	[Address(RVA = "0x3EF3A80", Offset = "0x3EF3A80", VA = "0x3EF3A80")]
	[IteratorStateMachine(typeof(_003CWaitAndBecomeHuman_003Ed__26))]
	protected IEnumerator WaitAndBecomeHuman(float time)
	{
		return null;
	}

	[Token(Token = "0x600346C")]
	[Address(RVA = "0x3EF4440", Offset = "0x3EF4440", VA = "0x3EF4440", Slot = "74")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__27))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x600346D")]
	[Address(RVA = "0x3EF44D0", Offset = "0x3EF44D0", VA = "0x3EF44D0", Slot = "90")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600346E")]
	[Address(RVA = "0x3EF4640", Offset = "0x3EF4640", VA = "0x3EF4640", Slot = "80")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x600346F")]
	[Address(RVA = "0x3EF4C00", Offset = "0x3EF4C00", VA = "0x3EF4C00", Slot = "79")]
	public override void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
	}

	[Token(Token = "0x6003470")]
	[Address(RVA = "0x3EF5090", Offset = "0x3EF5090", VA = "0x3EF5090", Slot = "158")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6003471")]
	[Address(RVA = "0x3EF5F80", Offset = "0x3EF5F80", VA = "0x3EF5F80", Slot = "141")]
	public override void Land()
	{
	}

	[Token(Token = "0x6003472")]
	[Address(RVA = "0x3EF3450", Offset = "0x3EF3450", VA = "0x3EF3450")]
	protected void LoadSkin()
	{
	}

	[Token(Token = "0x6003473")]
	[Address(RVA = "0x3EF6210", Offset = "0x3EF6210", VA = "0x3EF6210", Slot = "177")]
	protected virtual string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x6003474")]
	[Address(RVA = "0x3EF6240", Offset = "0x3EF6240", VA = "0x3EF6240", Slot = "178")]
	protected virtual BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x6003475")]
	[Address(RVA = "0x3EF6250", Offset = "0x3EF6250", VA = "0x3EF6250")]
	[PunRPC]
	public void LoadSkinRPC(string url, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003476")]
	[Address(RVA = "0x3EF2700", Offset = "0x3EF2700", VA = "0x3EF2700")]
	public BaseShifter()
	{
	}
}
