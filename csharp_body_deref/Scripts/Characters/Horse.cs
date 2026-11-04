// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Horse
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/Horse.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/Horse.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Controllers;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x200064E")]
internal class Horse : BaseCharacter
{
	[Token(Token = "0x200064F")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__61 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C8E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C8F")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001C90")]
		[FieldOffset(Offset = "0x20")]
		public Horse _003C_003E4__this;

		[Token(Token = "0x17000AE9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003E46")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AEA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003E48")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003E43")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__61(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003E44")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003E45")]
		[Address(RVA = "0x2160B40", Offset = "0x215F140", VA = "0x182160B40", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003E47")]
		[Address(RVA = "0x2160D10", Offset = "0x215F310", VA = "0x182160D10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001C81")]
	[FieldOffset(Offset = "0xF8")]
	private Human _assignedHuman;

	[Token(Token = "0x4001C82")]
	[FieldOffset(Offset = "0x100")]
	private float? _runSpeed;

	[Token(Token = "0x4001C86")]
	[FieldOffset(Offset = "0x118")]
	private HorseComponentCache HorseCache;

	[Token(Token = "0x4001C87")]
	[FieldOffset(Offset = "0x120")]
	public HorseState State;

	[Token(Token = "0x4001C88")]
	[FieldOffset(Offset = "0x124")]
	private float WalkSpeed;

	[Token(Token = "0x4001C89")]
	[FieldOffset(Offset = "0x128")]
	private float RunCloseSpeed;

	[Token(Token = "0x4001C8A")]
	[FieldOffset(Offset = "0x12C")]
	private float JumpForce;

	[Token(Token = "0x4001C8B")]
	[FieldOffset(Offset = "0x130")]
	private float MaxTilt;

	[Token(Token = "0x4001C8C")]
	[FieldOffset(Offset = "0x134")]
	private float _idleTimeLeft;

	[Token(Token = "0x4001C8D")]
	[FieldOffset(Offset = "0x138")]
	private float _jumpCooldownLeft;

	[Token(Token = "0x17000AD9")]
	public HorseController Controller
	{
		[Token(Token = "0x6003E16")]
		[Address(RVA = "0x1BD4C80", Offset = "0x1BD3280", VA = "0x181BD4C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000ADA")]
	public Human AssignedHuman
	{
		[Token(Token = "0x6003E17")]
		[Address(RVA = "0x1BD4F90", Offset = "0x1BD3590", VA = "0x181BD4F90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000ADB")]
	public Human Rider
	{
		[Token(Token = "0x6003E18")]
		[Address(RVA = "0x2150200", Offset = "0x214E800", VA = "0x182150200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000ADC")]
	public BaseCharacter OrderTarget
	{
		[Token(Token = "0x6003E19")]
		[Address(RVA = "0x2150140", Offset = "0x214E740", VA = "0x182150140")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000ADD")]
	public bool DespawnWithAssignedHuman
	{
		[Token(Token = "0x6003E1A")]
		[Address(RVA = "0x1C3F920", Offset = "0x1C3DF20", VA = "0x181C3F920")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003E1B")]
		[Address(RVA = "0x1C3FA40", Offset = "0x1C3E040", VA = "0x181C3FA40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000ADE")]
	public bool RecallEnabled
	{
		[Token(Token = "0x6003E1C")]
		[Address(RVA = "0x21501F0", Offset = "0x214E7F0", VA = "0x1821501F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003E1D")]
		[Address(RVA = "0x21503D0", Offset = "0x214E9D0", VA = "0x1821503D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000ADF")]
	public float RunSpeed
	{
		[Token(Token = "0x6003E1E")]
		[Address(RVA = "0x21502D0", Offset = "0x214E8D0", VA = "0x1821502D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6003E1F")]
		[Address(RVA = "0x21503E0", Offset = "0x214E9E0", VA = "0x1821503E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000AE0")]
	public override float MaxFootstepDistance
	{
		[Token(Token = "0x6003E20")]
		[Address(RVA = "0x1DA8AF0", Offset = "0x1DA70F0", VA = "0x181DA8AF0", Slot = "60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AE1")]
	public override float MaxSoundDistance
	{
		[Token(Token = "0x6003E21")]
		[Address(RVA = "0x1DA8AF0", Offset = "0x1DA70F0", VA = "0x181DA8AF0", Slot = "61")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AE2")]
	public override float LODQualityMediumDistance
	{
		[Token(Token = "0x6003E22")]
		[Address(RVA = "0x1DA8AF0", Offset = "0x1DA70F0", VA = "0x181DA8AF0", Slot = "62")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AE3")]
	public override float LODQualityLowDistance
	{
		[Token(Token = "0x6003E23")]
		[Address(RVA = "0x210FBA0", Offset = "0x210E1A0", VA = "0x18210FBA0", Slot = "63")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AE4")]
	public override float CullShadowsDistance
	{
		[Token(Token = "0x6003E24")]
		[Address(RVA = "0x1DA8B00", Offset = "0x1DA7100", VA = "0x181DA8B00", Slot = "64")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AE5")]
	public override float CullRendererDistance
	{
		[Token(Token = "0x6003E25")]
		[Address(RVA = "0x21500A0", Offset = "0x214E6A0", VA = "0x1821500A0", Slot = "65")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AE6")]
	public override float CullEffectsDistance
	{
		[Token(Token = "0x6003E26")]
		[Address(RVA = "0x21500A0", Offset = "0x214E6A0", VA = "0x1821500A0", Slot = "66")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AE7")]
	public bool FollowingEnabled
	{
		[Token(Token = "0x6003E27")]
		[Address(RVA = "0x21500B0", Offset = "0x214E6B0", VA = "0x1821500B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003E28")]
		[Address(RVA = "0x21503A0", Offset = "0x214E9A0", VA = "0x1821503A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000AE8")]
	protected override Vector3 Gravity
	{
		[Token(Token = "0x6003E29")]
		[Address(RVA = "0x21500E0", Offset = "0x214E6E0", VA = "0x1821500E0", Slot = "58")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6003E2A")]
	[Address(RVA = "0x214E4B0", Offset = "0x214CAB0", VA = "0x18214E4B0")]
	public void Init(Human human)
	{
	}

	[Token(Token = "0x6003E2B")]
	[Address(RVA = "0x214E590", Offset = "0x214CB90", VA = "0x18214E590", Slot = "75")]
	public override void Init(bool ai, string team)
	{
	}

	[Token(Token = "0x6003E2C")]
	[Address(RVA = "0x214F3D0", Offset = "0x214D9D0", VA = "0x18214F3D0")]
	private static BaseCharacter ResolveCharacter(int viewId)
	{
		return null;
	}

	[Token(Token = "0x6003E2D")]
	[Address(RVA = "0x214E2F0", Offset = "0x214C8F0", VA = "0x18214E2F0")]
	public bool Follow(BaseCharacter target, float distance = 5f)
	{
		return default(bool);
	}

	[Token(Token = "0x6003E2E")]
	[Address(RVA = "0x214D500", Offset = "0x214BB00", VA = "0x18214D500")]
	public bool ComeTo(BaseCharacter target, float distance = 5f)
	{
		return default(bool);
	}

	[Token(Token = "0x6003E2F")]
	[Address(RVA = "0x214EDF0", Offset = "0x214D3F0", VA = "0x18214EDF0")]
	public bool MoveTo(Vector3 position, float distance = 5f)
	{
		return default(bool);
	}

	[Token(Token = "0x6003E30")]
	[Address(RVA = "0x214F4B0", Offset = "0x214DAB0", VA = "0x18214F4B0")]
	public bool Stay()
	{
		return default(bool);
	}

	[Token(Token = "0x6003E31")]
	[Address(RVA = "0x214E5C0", Offset = "0x214CBC0", VA = "0x18214E5C0")]
	private bool IssueOrder(HorseOrder order, BaseCharacter target, Vector3 position, float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x6003E32")]
	[Address(RVA = "0x214D590", Offset = "0x214BB90", VA = "0x18214D590", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6003E33")]
	[Address(RVA = "0x214E7D0", Offset = "0x214CDD0", VA = "0x18214E7D0")]
	public void Jump()
	{
	}

	[Token(Token = "0x6003E34")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "73")]
	public override bool ValidTarget()
	{
		return default(bool);
	}

	[Token(Token = "0x6003E35")]
	[Address(RVA = "0x214E380", Offset = "0x214C980", VA = "0x18214E380", Slot = "90")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6003E36")]
	[Address(RVA = "0x214FF90", Offset = "0x214E590", VA = "0x18214FF90", Slot = "84")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__61))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x6003E37")]
	[Address(RVA = "0x214F470", Offset = "0x214DA70", VA = "0x18214F470", Slot = "104")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6003E38")]
	[Address(RVA = "0x214D210", Offset = "0x214B810", VA = "0x18214D210", Slot = "101")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003E39")]
	[Address(RVA = "0x214F530", Offset = "0x214DB30", VA = "0x18214F530")]
	private void ToggleDust(bool toggle)
	{
	}

	[Token(Token = "0x6003E3A")]
	[Address(RVA = "0x214EE30", Offset = "0x214D430", VA = "0x18214EE30")]
	private void RecallTo(BaseCharacter target)
	{
	}

	[Token(Token = "0x6003E3B")]
	[Address(RVA = "0x214F580", Offset = "0x214DB80", VA = "0x18214F580")]
	private void UpdateIdle()
	{
	}

	[Token(Token = "0x6003E3C")]
	[Address(RVA = "0x214E450", Offset = "0x214CA50", VA = "0x18214E450")]
	private void IdleOneShot(string animation)
	{
	}

	[Token(Token = "0x6003E3D")]
	[Address(RVA = "0x214F930", Offset = "0x214DF30", VA = "0x18214F930")]
	private void Update()
	{
	}

	[Token(Token = "0x6003E3E")]
	[Address(RVA = "0x214D6D0", Offset = "0x214BCD0", VA = "0x18214D6D0", Slot = "113")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x6003E3F")]
	[Address(RVA = "0x214E8D0", Offset = "0x214CED0", VA = "0x18214E8D0", Slot = "114")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6003E40")]
	[Address(RVA = "0x214D2D0", Offset = "0x214B8D0", VA = "0x18214D2D0", Slot = "107")]
	protected override void CheckGround()
	{
	}

	[Token(Token = "0x6003E41")]
	[Address(RVA = "0x2150000", Offset = "0x214E600", VA = "0x182150000")]
	public Horse()
	{
	}
}
