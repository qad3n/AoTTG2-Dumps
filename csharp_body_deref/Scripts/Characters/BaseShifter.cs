// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseShifter
// Update status: CHANGED in this game update
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

[Token(Token = "0x20006F6")]
internal class BaseShifter : BaseTitan
{
	[Token(Token = "0x20006F8")]
	[CompilerGenerated]
	private sealed class _003CWaitAndBecomeHuman_003Ed__45 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40020D7")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40020D8")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40020D9")]
		[FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x40020DA")]
		[FieldOffset(Offset = "0x28")]
		public BaseShifter _003C_003E4__this;

		[Token(Token = "0x17000B9F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004372")]
			[Address(RVA = "0x5B18920", Offset = "0x5B17920", VA = "0x5B18920", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BA0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004374")]
			[Address(RVA = "0x5B18970", Offset = "0x5B17970", VA = "0x5B18970", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600436F")]
		[Address(RVA = "0x5B16F40", Offset = "0x5B15F40", VA = "0x5B16F40")]
		[DebuggerHidden]
		public _003CWaitAndBecomeHuman_003Ed__45(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004370")]
		[Address(RVA = "0x5B184B0", Offset = "0x5B174B0", VA = "0x5B184B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004371")]
		[Address(RVA = "0x5B184C0", Offset = "0x5B174C0", VA = "0x5B184C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004373")]
		[Address(RVA = "0x5B18930", Offset = "0x5B17930", VA = "0x5B18930", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20006F9")]
	[CompilerGenerated]
	private sealed class _003CWaitForDeathVisuals_003Ed__47 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40020DB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40020DC")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40020DD")]
		[FieldOffset(Offset = "0x20")]
		public BaseShifter _003C_003E4__this;

		[Token(Token = "0x40020DE")]
		[FieldOffset(Offset = "0x28")]
		public float delay;

		[Token(Token = "0x17000BA1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004378")]
			[Address(RVA = "0x5B18B80", Offset = "0x5B17B80", VA = "0x5B18B80", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BA2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600437A")]
			[Address(RVA = "0x5B18BD0", Offset = "0x5B17BD0", VA = "0x5B18BD0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004375")]
		[Address(RVA = "0x5B170B0", Offset = "0x5B160B0", VA = "0x5B170B0")]
		[DebuggerHidden]
		public _003CWaitForDeathVisuals_003Ed__47(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004376")]
		[Address(RVA = "0x5B18980", Offset = "0x5B17980", VA = "0x5B18980", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004377")]
		[Address(RVA = "0x5B18990", Offset = "0x5B17990", VA = "0x5B18990", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004379")]
		[Address(RVA = "0x5B18B90", Offset = "0x5B17B90", VA = "0x5B18B90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40020C9")]
	[FieldOffset(Offset = "0x299")]
	protected bool _needRoar;

	[Token(Token = "0x40020CA")]
	[FieldOffset(Offset = "0x29A")]
	public bool TransformingToHuman;

	[Token(Token = "0x40020CB")]
	[FieldOffset(Offset = "0x29C")]
	public float PreviousHumanGas;

	[Token(Token = "0x40020CC")]
	[FieldOffset(Offset = "0x2A0")]
	public BaseUseable PreviousHumanWeapon;

	[Token(Token = "0x40020CD")]
	[FieldOffset(Offset = "0x2A8")]
	public float DeathAnimationLength;

	[Token(Token = "0x40020CE")]
	private const float DeathDissolveDuration = 6f;

	[Token(Token = "0x40020CF")]
	[FieldOffset(Offset = "0x2AC")]
	private bool _deathVisualsStarted;

	[Token(Token = "0x40020D0")]
	[FieldOffset(Offset = "0x2B0")]
	private float _deathVisualsTime;

	[Token(Token = "0x40020D1")]
	[FieldOffset(Offset = "0x2B8")]
	protected BaseCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x40020D2")]
	[FieldOffset(Offset = "0x2C0")]
	private bool _forceEmote;

	[Token(Token = "0x40020D3")]
	[FieldOffset(Offset = "0x2C4")]
	private float _liveTime;

	[Token(Token = "0x40020D4")]
	[FieldOffset(Offset = "0x2C8")]
	private float _liveTimeEnd;

	[Token(Token = "0x17000B92")]
	protected override int DefaultMaxHealth
	{
		[Token(Token = "0x6004347")]
		[Address(RVA = "0x5B15E40", Offset = "0x5B14E40", VA = "0x5B15E40", Slot = "57")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B93")]
	protected override float DefaultRunSpeed
	{
		[Token(Token = "0x6004348")]
		[Address(RVA = "0x5B15E50", Offset = "0x5B14E50", VA = "0x5B15E50", Slot = "130")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B94")]
	protected override float DefaultWalkSpeed
	{
		[Token(Token = "0x6004349")]
		[Address(RVA = "0x5B15E60", Offset = "0x5B14E60", VA = "0x5B15E60", Slot = "131")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B95")]
	protected override float DefaultRotateSpeed
	{
		[Token(Token = "0x600434A")]
		[Address(RVA = "0x5B15E70", Offset = "0x5B14E70", VA = "0x5B15E70", Slot = "133")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B96")]
	protected override float DefaultJumpForce
	{
		[Token(Token = "0x600434B")]
		[Address(RVA = "0x5B15E80", Offset = "0x5B14E80", VA = "0x5B15E80", Slot = "132")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B97")]
	protected override float SizeMultiplier
	{
		[Token(Token = "0x600434C")]
		[Address(RVA = "0x5B15E90", Offset = "0x5B14E90", VA = "0x5B15E90", Slot = "134")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B98")]
	public override float DefaultCrippleTime
	{
		[Token(Token = "0x600434D")]
		[Address(RVA = "0x5B15EA0", Offset = "0x5B14EA0", VA = "0x5B15EA0", Slot = "121")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B99")]
	public override float LaunchForce
	{
		[Token(Token = "0x600434E")]
		[Address(RVA = "0x5B15EB0", Offset = "0x5B14EB0", VA = "0x5B15EB0", Slot = "126")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B9A")]
	public override float LaunchTime
	{
		[Token(Token = "0x600434F")]
		[Address(RVA = "0x5B15ED0", Offset = "0x5B14ED0", VA = "0x5B15ED0", Slot = "127")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B9B")]
	protected override float DisableCooldown
	{
		[Token(Token = "0x6004350")]
		[Address(RVA = "0x5B15EF0", Offset = "0x5B14EF0", VA = "0x5B15EF0", Slot = "135")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B9C")]
	public string SpecialIcon
	{
		[Token(Token = "0x6004351")]
		[Address(RVA = "0x5B15F00", Offset = "0x5B14F00", VA = "0x5B15F00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004352")]
		[Address(RVA = "0x5B15F10", Offset = "0x5B14F10", VA = "0x5B15F10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000B9D")]
	public float LiveTimeRatio
	{
		[Token(Token = "0x6004353")]
		[Address(RVA = "0x5B15F30", Offset = "0x5B14F30", VA = "0x5B15F30")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B9E")]
	protected override string MeleeHitType
	{
		[Token(Token = "0x6004356")]
		[Address(RVA = "0x5B16AD0", Offset = "0x5B15AD0", VA = "0x5B16AD0", Slot = "141")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004354")]
	[Address(RVA = "0x5B15FA0", Offset = "0x5B14FA0", VA = "0x5B15FA0", Slot = "104")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6004355")]
	[Address(RVA = "0x5B16A80", Offset = "0x5B15A80", VA = "0x5B16A80", Slot = "153")]
	public override void Kick()
	{
	}

	[Token(Token = "0x6004357")]
	[Address(RVA = "0x5B16B00", Offset = "0x5B15B00", VA = "0x5B16B00", Slot = "144")]
	protected override string GetFinisherReaction(bool kick, bool smallVictim, bool headHit)
	{
		return null;
	}

	[Token(Token = "0x6004358")]
	[Address(RVA = "0x5B16B80", Offset = "0x5B15B80", VA = "0x5B16B80")]
	[PunRPC]
	public void MarkTransformingRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004359")]
	[Address(RVA = "0x5B16BC0", Offset = "0x5B15BC0", VA = "0x5B16BC0", Slot = "204")]
	public virtual void Init(bool ai, string team, JSONNode data, float liveTime)
	{
	}

	[Token(Token = "0x600435A")]
	[Address(RVA = "0x5B16EC0", Offset = "0x5B15EC0", VA = "0x5B16EC0")]
	[IteratorStateMachine(typeof(_003CWaitAndBecomeHuman_003Ed__45))]
	protected IEnumerator WaitAndBecomeHuman(float time)
	{
		return null;
	}

	[Token(Token = "0x600435B")]
	[Address(RVA = "0x5B16F60", Offset = "0x5B15F60", VA = "0x5B16F60", Slot = "84")]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x600435C")]
	[Address(RVA = "0x5B17030", Offset = "0x5B16030", VA = "0x5B17030")]
	[IteratorStateMachine(typeof(_003CWaitForDeathVisuals_003Ed__47))]
	protected IEnumerator WaitForDeathVisuals(float delay)
	{
		return null;
	}

	[Token(Token = "0x600435D")]
	[Address(RVA = "0x5B170D0", Offset = "0x5B160D0", VA = "0x5B170D0")]
	[PunRPC]
	public void StartDeathVisualsRPC(float delay, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600435E")]
	[Address(RVA = "0x5B171E0", Offset = "0x5B161E0", VA = "0x5B171E0")]
	protected void UpdateDeathVisuals()
	{
	}

	[Token(Token = "0x600435F")]
	[Address(RVA = "0x5B173B0", Offset = "0x5B163B0", VA = "0x5B173B0")]
	private SkinnedMeshRenderer FindBodyRenderer()
	{
		return null;
	}

	[Token(Token = "0x6004360")]
	[Address(RVA = "0x5B17520", Offset = "0x5B16520", VA = "0x5B17520")]
	private float GetDeathDissolveScale()
	{
		return default(float);
	}

	[Token(Token = "0x6004361")]
	[Address(RVA = "0x5B17670", Offset = "0x5B16670", VA = "0x5B17670", Slot = "101")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6004362")]
	[Address(RVA = "0x5B176B0", Offset = "0x5B166B0", VA = "0x5B176B0", Slot = "90")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6004363")]
	[Address(RVA = "0x5B17C70", Offset = "0x5B16C70", VA = "0x5B17C70", Slot = "89")]
	public override void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
	}

	[Token(Token = "0x6004364")]
	[Address(RVA = "0x5B17F30", Offset = "0x5B16F30", VA = "0x5B17F30", Slot = "184")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6004365")]
	[Address(RVA = "0x5B15DB0", Offset = "0x5B14DB0", VA = "0x5B15DB0", Slot = "114")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6004366")]
	[Address(RVA = "0x5B17FC0", Offset = "0x5B16FC0", VA = "0x5B17FC0", Slot = "146")]
	public override bool CanEmote()
	{
		return default(bool);
	}

	[Token(Token = "0x6004367")]
	[Address(RVA = "0x5B17FE0", Offset = "0x5B16FE0", VA = "0x5B17FE0", Slot = "165")]
	public override void Land()
	{
	}

	[Token(Token = "0x6004368")]
	[Address(RVA = "0x5B16310", Offset = "0x5B15310", VA = "0x5B16310")]
	protected void LoadSkin()
	{
	}

	[Token(Token = "0x6004369")]
	[Address(RVA = "0x5B18230", Offset = "0x5B17230", VA = "0x5B18230", Slot = "205")]
	protected virtual string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x600436A")]
	[Address(RVA = "0x5B18260", Offset = "0x5B17260", VA = "0x5B18260", Slot = "206")]
	protected virtual BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x600436B")]
	[Address(RVA = "0x5B18270", Offset = "0x5B17270", VA = "0x5B18270")]
	[PunRPC]
	public void LoadSkinRPC(string url, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600436C")]
	[Address(RVA = "0x5B156B0", Offset = "0x5B146B0", VA = "0x5B156B0")]
	public BaseShifter()
	{
	}
}
