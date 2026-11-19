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

[Token(Token = "0x20006AD")]
internal class Horse : BaseCharacter
{
	[Token(Token = "0x20006AE")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__68 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001E3C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001E3D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001E3E")]
		[FieldOffset(Offset = "0x20")]
		public Horse _003C_003E4__this;

		[Token(Token = "0x17000B33")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60040E0")]
			[Address(RVA = "0x5AF31C0", Offset = "0x5AF21C0", VA = "0x5AF31C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B34")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60040E2")]
			[Address(RVA = "0x5AF3210", Offset = "0x5AF2210", VA = "0x5AF3210", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60040DD")]
		[Address(RVA = "0x5AF0C70", Offset = "0x5AEFC70", VA = "0x5AF0C70")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__68(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60040DE")]
		[Address(RVA = "0x5AF3020", Offset = "0x5AF2020", VA = "0x5AF3020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60040DF")]
		[Address(RVA = "0x5AF3030", Offset = "0x5AF2030", VA = "0x5AF3030", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60040E1")]
		[Address(RVA = "0x5AF31D0", Offset = "0x5AF21D0", VA = "0x5AF31D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001E2D")]
	[FieldOffset(Offset = "0x100")]
	private Human _assignedHuman;

	[Token(Token = "0x4001E2E")]
	[FieldOffset(Offset = "0x108")]
	private float? _runSpeed;

	[Token(Token = "0x4001E32")]
	[FieldOffset(Offset = "0x120")]
	private HorseComponentCache HorseCache;

	[Token(Token = "0x4001E33")]
	[FieldOffset(Offset = "0x128")]
	public HorseState State;

	[Token(Token = "0x4001E34")]
	[FieldOffset(Offset = "0x12C")]
	private float WalkSpeed;

	[Token(Token = "0x4001E35")]
	[FieldOffset(Offset = "0x130")]
	private float RunCloseSpeed;

	[Token(Token = "0x4001E36")]
	[FieldOffset(Offset = "0x134")]
	private float JumpForce;

	[Token(Token = "0x4001E37")]
	[FieldOffset(Offset = "0x138")]
	private float MaxTilt;

	[Token(Token = "0x4001E38")]
	private const float SaddleHeight = 1.95f;

	[Token(Token = "0x4001E39")]
	private const float SaddleTolerance = 1f;

	[Token(Token = "0x4001E3A")]
	[FieldOffset(Offset = "0x13C")]
	private float _idleTimeLeft;

	[Token(Token = "0x4001E3B")]
	[FieldOffset(Offset = "0x140")]
	private float _jumpCooldownLeft;

	[Token(Token = "0x17000B21")]
	public HorseController Controller
	{
		[Token(Token = "0x60040AD")]
		[Address(RVA = "0x5AEFC00", Offset = "0x5AEEC00", VA = "0x5AEFC00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B22")]
	public Human AssignedHuman
	{
		[Token(Token = "0x60040AE")]
		[Address(RVA = "0x5AEFC10", Offset = "0x5AEEC10", VA = "0x5AEFC10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B23")]
	public Human Rider
	{
		[Token(Token = "0x60040AF")]
		[Address(RVA = "0x5AEFC20", Offset = "0x5AEEC20", VA = "0x5AEFC20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B24")]
	public BaseCharacter OrderTarget
	{
		[Token(Token = "0x60040B0")]
		[Address(RVA = "0x5AEFCF0", Offset = "0x5AEECF0", VA = "0x5AEFCF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B25")]
	public bool DespawnWithAssignedHuman
	{
		[Token(Token = "0x60040B1")]
		[Address(RVA = "0x5AEFDB0", Offset = "0x5AEEDB0", VA = "0x5AEFDB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60040B2")]
		[Address(RVA = "0x5AEFDC0", Offset = "0x5AEEDC0", VA = "0x5AEFDC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000B26")]
	public bool RecallEnabled
	{
		[Token(Token = "0x60040B3")]
		[Address(RVA = "0x5AEFDD0", Offset = "0x5AEEDD0", VA = "0x5AEFDD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60040B4")]
		[Address(RVA = "0x5AEFDE0", Offset = "0x5AEEDE0", VA = "0x5AEFDE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000B27")]
	public float RunSpeed
	{
		[Token(Token = "0x60040B5")]
		[Address(RVA = "0x5AEFDF0", Offset = "0x5AEEDF0", VA = "0x5AEFDF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60040B6")]
		[Address(RVA = "0x5AEFEB0", Offset = "0x5AEEEB0", VA = "0x5AEFEB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000B28")]
	public override float MaxFootstepDistance
	{
		[Token(Token = "0x60040B7")]
		[Address(RVA = "0x5AEFF30", Offset = "0x5AEEF30", VA = "0x5AEFF30", Slot = "60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B29")]
	public override float MaxSoundDistance
	{
		[Token(Token = "0x60040B8")]
		[Address(RVA = "0x5AEFF40", Offset = "0x5AEEF40", VA = "0x5AEFF40", Slot = "61")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B2A")]
	public override float LODQualityMediumDistance
	{
		[Token(Token = "0x60040B9")]
		[Address(RVA = "0x5AEFF50", Offset = "0x5AEEF50", VA = "0x5AEFF50", Slot = "62")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B2B")]
	public override float LODQualityLowDistance
	{
		[Token(Token = "0x60040BA")]
		[Address(RVA = "0x5AEFF60", Offset = "0x5AEEF60", VA = "0x5AEFF60", Slot = "63")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B2C")]
	public override float CullShadowsDistance
	{
		[Token(Token = "0x60040BB")]
		[Address(RVA = "0x5AEFF70", Offset = "0x5AEEF70", VA = "0x5AEFF70", Slot = "64")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B2D")]
	public override float CullRendererDistance
	{
		[Token(Token = "0x60040BC")]
		[Address(RVA = "0x5AEFF80", Offset = "0x5AEEF80", VA = "0x5AEFF80", Slot = "65")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B2E")]
	public override float CullEffectsDistance
	{
		[Token(Token = "0x60040BD")]
		[Address(RVA = "0x5AEFF90", Offset = "0x5AEEF90", VA = "0x5AEFF90", Slot = "66")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B2F")]
	public bool FollowingEnabled
	{
		[Token(Token = "0x60040BE")]
		[Address(RVA = "0x5AEFFA0", Offset = "0x5AEEFA0", VA = "0x5AEFFA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60040BF")]
		[Address(RVA = "0x5AEFFC0", Offset = "0x5AEEFC0", VA = "0x5AEFFC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000B30")]
	protected override Vector3 Gravity
	{
		[Token(Token = "0x60040C0")]
		[Address(RVA = "0x5AF0140", Offset = "0x5AEF140", VA = "0x5AF0140", Slot = "58")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000B31")]
	protected override int DefaultMaxHealth
	{
		[Token(Token = "0x60040C1")]
		[Address(RVA = "0x5AF0190", Offset = "0x5AEF190", VA = "0x5AF0190", Slot = "57")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B32")]
	public Vector3 SaddlePosition
	{
		[Token(Token = "0x60040C2")]
		[Address(RVA = "0x5AF0200", Offset = "0x5AEF200", VA = "0x5AF0200")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x60040C3")]
	[Address(RVA = "0x5AF0270", Offset = "0x5AEF270", VA = "0x5AF0270")]
	public void Init(Human human)
	{
	}

	[Token(Token = "0x60040C4")]
	[Address(RVA = "0x5AF0380", Offset = "0x5AEF380", VA = "0x5AF0380", Slot = "75")]
	public override void Init(bool ai, string team)
	{
	}

	[Token(Token = "0x60040C5")]
	[Address(RVA = "0x5AEFD10", Offset = "0x5AEED10", VA = "0x5AEFD10")]
	private static BaseCharacter ResolveCharacter(int viewId)
	{
		return null;
	}

	[Token(Token = "0x60040C6")]
	[Address(RVA = "0x5AF0080", Offset = "0x5AEF080", VA = "0x5AF0080")]
	public bool Follow(BaseCharacter target, float distance = 5f)
	{
		return default(bool);
	}

	[Token(Token = "0x60040C7")]
	[Address(RVA = "0x5AF05D0", Offset = "0x5AEF5D0", VA = "0x5AF05D0")]
	public bool ComeTo(BaseCharacter target, float distance = 5f)
	{
		return default(bool);
	}

	[Token(Token = "0x60040C8")]
	[Address(RVA = "0x5AF0640", Offset = "0x5AEF640", VA = "0x5AF0640")]
	public bool MoveTo(Vector3 position, float distance = 5f)
	{
		return default(bool);
	}

	[Token(Token = "0x60040C9")]
	[Address(RVA = "0x5AF00F0", Offset = "0x5AEF0F0", VA = "0x5AF00F0")]
	public bool Stay()
	{
		return default(bool);
	}

	[Token(Token = "0x60040CA")]
	[Address(RVA = "0x5AF03F0", Offset = "0x5AEF3F0", VA = "0x5AF03F0")]
	private bool IssueOrder(HorseOrder order, BaseCharacter target, Vector3 position, float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x60040CB")]
	[Address(RVA = "0x5AF0650", Offset = "0x5AEF650", VA = "0x5AF0650", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x60040CC")]
	[Address(RVA = "0x5AF0790", Offset = "0x5AEF790", VA = "0x5AF0790")]
	public void Jump()
	{
	}

	[Token(Token = "0x60040CD")]
	[Address(RVA = "0x5AF0860", Offset = "0x5AEF860", VA = "0x5AF0860", Slot = "73")]
	public override bool ValidTarget()
	{
		return default(bool);
	}

	[Token(Token = "0x60040CE")]
	[Address(RVA = "0x5AF0870", Offset = "0x5AEF870", VA = "0x5AF0870")]
	public Human FindSaddledHuman()
	{
		return null;
	}

	[Token(Token = "0x60040CF")]
	[Address(RVA = "0x5AF0B20", Offset = "0x5AEFB20", VA = "0x5AF0B20", Slot = "90")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x60040D0")]
	[Address(RVA = "0x5AF0C00", Offset = "0x5AEFC00", VA = "0x5AF0C00", Slot = "84")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__68))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x60040D1")]
	[Address(RVA = "0x5AF0C90", Offset = "0x5AEFC90", VA = "0x5AF0C90", Slot = "104")]
	protected override void Start()
	{
	}

	[Token(Token = "0x60040D2")]
	[Address(RVA = "0x5AF0CC0", Offset = "0x5AEFCC0", VA = "0x5AF0CC0", Slot = "101")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60040D3")]
	[Address(RVA = "0x5AF0D80", Offset = "0x5AEFD80", VA = "0x5AF0D80")]
	private void ToggleDust(bool toggle)
	{
	}

	[Token(Token = "0x60040D4")]
	[Address(RVA = "0x5AF0DC0", Offset = "0x5AEFDC0", VA = "0x5AF0DC0")]
	private void RecallTo(BaseCharacter target)
	{
	}

	[Token(Token = "0x60040D5")]
	[Address(RVA = "0x5AF1230", Offset = "0x5AF0230", VA = "0x5AF1230")]
	private void UpdateIdle()
	{
	}

	[Token(Token = "0x60040D6")]
	[Address(RVA = "0x5AF1630", Offset = "0x5AF0630", VA = "0x5AF1630")]
	private void IdleOneShot(string animation)
	{
	}

	[Token(Token = "0x60040D7")]
	[Address(RVA = "0x5AF1680", Offset = "0x5AF0680", VA = "0x5AF1680")]
	private void Update()
	{
	}

	[Token(Token = "0x60040D8")]
	[Address(RVA = "0x5AF1C10", Offset = "0x5AF0C10", VA = "0x5AF1C10", Slot = "113")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x60040D9")]
	[Address(RVA = "0x5AF2800", Offset = "0x5AF1800", VA = "0x5AF2800", Slot = "114")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x60040DA")]
	[Address(RVA = "0x5AF2DB0", Offset = "0x5AF1DB0", VA = "0x5AF2DB0", Slot = "107")]
	protected override void CheckGround()
	{
	}

	[Token(Token = "0x60040DB")]
	[Address(RVA = "0x5AF2F90", Offset = "0x5AF1F90", VA = "0x5AF2F90")]
	public Horse()
	{
	}
}
