// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BasicTitan
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/BasicTitan.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitan.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Photon.Pun;
using Settings;
using SimpleJSONFixed;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x2000555")]
internal class BasicTitan : BaseTitan
{
	[Token(Token = "0x2000556")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__62 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001995")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001996")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001997")]
		[FieldOffset(Offset = "0x20")]
		public BasicTitan _003C_003E4__this;

		[Token(Token = "0x4001998")]
		[FieldOffset(Offset = "0x28")]
		private string _003CdieAnimation_003E5__2;

		[Token(Token = "0x17000A58")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60037BC")]
			[Address(RVA = "0x421E020", Offset = "0x421E020", VA = "0x421E020", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A59")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60037BE")]
			[Address(RVA = "0x421E070", Offset = "0x421E070", VA = "0x421E070", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60037B9")]
		[Address(RVA = "0x4216A10", Offset = "0x4216A10", VA = "0x4216A10")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__62(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60037BA")]
		[Address(RVA = "0x421DA30", Offset = "0x421DA30", VA = "0x421DA30", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60037BB")]
		[Address(RVA = "0x421DA40", Offset = "0x421DA40", VA = "0x421DA40", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60037BD")]
		[Address(RVA = "0x421E030", Offset = "0x421E030", VA = "0x421E030", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001980")]
	[FieldOffset(Offset = "0x278")]
	public BasicTitanComponentCache BasicCache;

	[Token(Token = "0x4001981")]
	[FieldOffset(Offset = "0x280")]
	protected BasicTitanAnimations BasicAnimations;

	[Token(Token = "0x4001982")]
	[FieldOffset(Offset = "0x288")]
	public bool IsCrawler;

	[Token(Token = "0x4001983")]
	[FieldOffset(Offset = "0x290")]
	protected string _runAnimation;

	[Token(Token = "0x4001984")]
	[FieldOffset(Offset = "0x298")]
	public BasicTitanSetup Setup;

	[Token(Token = "0x4001985")]
	[FieldOffset(Offset = "0x2A0")]
	public Quaternion _oldHeadRotation;

	[Token(Token = "0x4001986")]
	[FieldOffset(Offset = "0x2B0")]
	public Quaternion? LateUpdateHeadRotation;

	[Token(Token = "0x4001987")]
	[FieldOffset(Offset = "0x2C4")]
	public Quaternion? LateUpdateHeadRotationRecv;

	[Token(Token = "0x4001988")]
	[FieldOffset(Offset = "0x2D8")]
	public Vector2 LastGoodHeadAngle;

	[Token(Token = "0x4001989")]
	[FieldOffset(Offset = "0x2E0")]
	public float BellyFlopTime;

	[Token(Token = "0x400198A")]
	[FieldOffset(Offset = "0x2E4")]
	protected float _leftArmDisabledTimeLeft;

	[Token(Token = "0x400198B")]
	[FieldOffset(Offset = "0x2E8")]
	protected float _rightArmDisabledTimeLeft;

	[Token(Token = "0x400198C")]
	[FieldOffset(Offset = "0x2EC")]
	protected float ArmDisableTime;

	[Token(Token = "0x400198D")]
	[FieldOffset(Offset = "0x2F0")]
	public float RockThrow1Speed;

	[Token(Token = "0x400198E")]
	[FieldOffset(Offset = "0x2F4")]
	protected Vector3 _rockThrowTarget;

	[Token(Token = "0x400198F")]
	[FieldOffset(Offset = "0x300")]
	protected float _originalCapsuleValue;

	[Token(Token = "0x4001990")]
	[FieldOffset(Offset = "0x304")]
	public int TargetViewId;

	[Token(Token = "0x4001991")]
	[FieldOffset(Offset = "0x308")]
	public bool LookAtTarget;

	[Token(Token = "0x4001992")]
	[FieldOffset(Offset = "0x30C")]
	public float HeadSize;

	[Token(Token = "0x4001993")]
	[FieldOffset(Offset = "0x310")]
	private Vector3 _headScale;

	[Token(Token = "0x4001994")]
	[FieldOffset(Offset = "0x320")]
	private TitanCustomSet _customSet;

	[Token(Token = "0x17000A55")]
	public override bool CanSprint
	{
		[Token(Token = "0x600377C")]
		[Address(RVA = "0x4211EE0", Offset = "0x4211EE0", VA = "0x4211EE0", Slot = "112")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A56")]
	public override bool CanWallClimb
	{
		[Token(Token = "0x600377D")]
		[Address(RVA = "0x4211EF0", Offset = "0x4211EF0", VA = "0x4211EF0", Slot = "111")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A57")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x600377E")]
		[Address(RVA = "0x4211F00", Offset = "0x4211F00", VA = "0x4211F00", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600377F")]
	[Address(RVA = "0x4212170", Offset = "0x4212170", VA = "0x4212170")]
	public void Init(bool ai, string team, JSONNode data, TitanCustomSet customSet)
	{
	}

	[Token(Token = "0x6003780")]
	[Address(RVA = "0x4212550", Offset = "0x4212550", VA = "0x4212550")]
	public float DeathTimeElapsed()
	{
		return default(float);
	}

	[Token(Token = "0x6003781")]
	[Address(RVA = "0x4212660", Offset = "0x4212660", VA = "0x4212660", Slot = "122")]
	public override bool IsGrabAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x6003782")]
	[Address(RVA = "0x42126B0", Offset = "0x42126B0", VA = "0x42126B0", Slot = "121")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x6003783")]
	[Address(RVA = "0x42127D0", Offset = "0x42127D0", VA = "0x42127D0", Slot = "165")]
	protected override void SetSizeParticles(float size)
	{
	}

	[Token(Token = "0x6003784")]
	[Address(RVA = "0x4212A90", Offset = "0x4212A90", VA = "0x4212A90")]
	[PunRPC]
	public void SetCrawlerRPC(bool crawler, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003785")]
	[Address(RVA = "0x4212C30", Offset = "0x4212C30", VA = "0x4212C30")]
	[PunRPC]
	public void ClearRockRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003786")]
	[Address(RVA = "0x4212D40", Offset = "0x4212D40", VA = "0x4212D40", Slot = "67")]
	public override Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x6003787")]
	[Address(RVA = "0x4212D60", Offset = "0x4212D60", VA = "0x4212D60", Slot = "93")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6003788")]
	[Address(RVA = "0x4212F60", Offset = "0x4212F60", VA = "0x4212F60")]
	[PunRPC]
	public void SetupRPC(string json, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003789")]
	[Address(RVA = "0x4213D10", Offset = "0x4213D10", VA = "0x4213D10", Slot = "68")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x600378A")]
	[Address(RVA = "0x4214280", Offset = "0x4214280", VA = "0x4214280", Slot = "151")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x600378B")]
	[Address(RVA = "0x4214EC0", Offset = "0x4214EC0", VA = "0x4214EC0", Slot = "70")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x600378C")]
	[Address(RVA = "0x4215200", Offset = "0x4215200", VA = "0x4215200")]
	public void CoverNape()
	{
	}

	[Token(Token = "0x600378D")]
	[Address(RVA = "0x4215280", Offset = "0x4215280", VA = "0x4215280")]
	public void UncoverNape()
	{
	}

	[Token(Token = "0x600378E")]
	[Address(RVA = "0x42152B0", Offset = "0x42152B0", VA = "0x42152B0", Slot = "153")]
	public override void DisableArm(bool left)
	{
	}

	[Token(Token = "0x600378F")]
	[Address(RVA = "0x4215690", Offset = "0x4215690", VA = "0x4215690", Slot = "129")]
	public override bool CanAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x6003790")]
	[Address(RVA = "0x42156A0", Offset = "0x42156A0", VA = "0x42156A0", Slot = "176")]
	[PunRPC]
	public virtual void DisableArmRPC(bool left, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003791")]
	[Address(RVA = "0x4215740", Offset = "0x4215740", VA = "0x4215740")]
	public void Laugh(BaseCharacter character)
	{
	}

	[Token(Token = "0x6003792")]
	[Address(RVA = "0x4215890", Offset = "0x4215890", VA = "0x4215890")]
	public void Distract(BaseCharacter character)
	{
	}

	[Token(Token = "0x6003793")]
	[Address(RVA = "0x42159D0", Offset = "0x42159D0", VA = "0x42159D0", Slot = "177")]
	[PunRPC]
	public virtual void LaughRPC(Vector3 source)
	{
	}

	[Token(Token = "0x6003794")]
	[Address(RVA = "0x4215D70", Offset = "0x4215D70", VA = "0x4215D70", Slot = "178")]
	[PunRPC]
	public virtual void DistractRPC(int viewId)
	{
	}

	[Token(Token = "0x6003795")]
	[Address(RVA = "0x4215E20", Offset = "0x4215E20", VA = "0x4215E20", Slot = "152")]
	protected override void UpdateDisableArm()
	{
	}

	[Token(Token = "0x6003796")]
	[Address(RVA = "0x4215FE0", Offset = "0x4215FE0", VA = "0x4215FE0", Slot = "133")]
	public override void Run()
	{
	}

	[Token(Token = "0x6003797")]
	[Address(RVA = "0x4216070", Offset = "0x4216070", VA = "0x4216070", Slot = "135")]
	public override void WallClimb()
	{
	}

	[Token(Token = "0x6003798")]
	[Address(RVA = "0x42160F0", Offset = "0x42160F0", VA = "0x42160F0", Slot = "126")]
	public override void Jump(Vector3 direction)
	{
	}

	[Token(Token = "0x6003799")]
	[Address(RVA = "0x4216250", Offset = "0x4216250", VA = "0x4216250", Slot = "179")]
	public virtual void StunDirectional(bool left)
	{
	}

	[Token(Token = "0x600379A")]
	[Address(RVA = "0x42162C0", Offset = "0x42162C0", VA = "0x42162C0", Slot = "127")]
	public override void StartJump()
	{
	}

	[Token(Token = "0x600379B")]
	[Address(RVA = "0x4216300", Offset = "0x4216300", VA = "0x4216300")]
	public void JumpImmediate()
	{
	}

	[Token(Token = "0x600379C")]
	[Address(RVA = "0x4216360", Offset = "0x4216360", VA = "0x4216360", Slot = "136")]
	public override void Eat()
	{
	}

	[Token(Token = "0x600379D")]
	[Address(RVA = "0x4216430", Offset = "0x4216430", VA = "0x4216430", Slot = "141")]
	public override void Land()
	{
	}

	[Token(Token = "0x600379E")]
	[Address(RVA = "0x4216600", Offset = "0x4216600", VA = "0x4216600", Slot = "142")]
	public override void Fall()
	{
	}

	[Token(Token = "0x600379F")]
	[Address(RVA = "0x4216690", Offset = "0x4216690", VA = "0x4216690", Slot = "139")]
	public override void Idle(float fadeTime)
	{
	}

	[Token(Token = "0x60037A0")]
	[Address(RVA = "0x4216700", Offset = "0x4216700", VA = "0x4216700", Slot = "143")]
	public override void Turn(Vector3 targetDirection)
	{
	}

	[Token(Token = "0x60037A1")]
	[Address(RVA = "0x42168F0", Offset = "0x42168F0", VA = "0x42168F0", Slot = "83")]
	[PunRPC]
	public override void MarkDeadRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60037A2")]
	[Address(RVA = "0x42169A0", Offset = "0x42169A0", VA = "0x42169A0", Slot = "74")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__62))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x60037A3")]
	[Address(RVA = "0x4216A30", Offset = "0x4216A30", VA = "0x4216A30", Slot = "90")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60037A4")]
	[Address(RVA = "0x4216AE0", Offset = "0x4216AE0", VA = "0x4216AE0", Slot = "80")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x60037A5")]
	[Address(RVA = "0x4217220", Offset = "0x4217220", VA = "0x4217220", Slot = "131")]
	public override void Kick()
	{
	}

	[Token(Token = "0x60037A6")]
	[Address(RVA = "0x4217270", Offset = "0x4217270", VA = "0x4217270", Slot = "128")]
	public override void Attack(string attack)
	{
	}

	[Token(Token = "0x60037A7")]
	[Address(RVA = "0x4217DA0", Offset = "0x4217DA0", VA = "0x4217DA0", Slot = "161")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x60037A8")]
	[Address(RVA = "0x421AA10", Offset = "0x421AA10", VA = "0x421AA10", Slot = "162")]
	protected override void UpdateEat()
	{
	}

	[Token(Token = "0x60037A9")]
	[Address(RVA = "0x421ABE0", Offset = "0x421ABE0", VA = "0x421ABE0")]
	private void UpdateThrowHuman()
	{
	}

	[Token(Token = "0x60037AA")]
	[Address(RVA = "0x421B190", Offset = "0x421B190", VA = "0x421B190", Slot = "144")]
	public override void Blind()
	{
	}

	[Token(Token = "0x60037AB")]
	[Address(RVA = "0x421B210", Offset = "0x421B210", VA = "0x421B210", Slot = "155")]
	protected override string GetSitIdleAniamtion()
	{
		return null;
	}

	[Token(Token = "0x60037AC")]
	[Address(RVA = "0x421B260", Offset = "0x421B260", VA = "0x421B260", Slot = "156")]
	protected override string GetSitFallAnimation()
	{
		return null;
	}

	[Token(Token = "0x60037AD")]
	[Address(RVA = "0x421B2B0", Offset = "0x421B2B0", VA = "0x421B2B0", Slot = "157")]
	protected override string GetSitUpAnimation()
	{
		return null;
	}

	[Token(Token = "0x60037AE")]
	[Address(RVA = "0x421B300", Offset = "0x421B300", VA = "0x421B300", Slot = "145")]
	public override void Cripple(float time = 0f)
	{
	}

	[Token(Token = "0x60037AF")]
	[Address(RVA = "0x421B420", Offset = "0x421B420", VA = "0x421B420", Slot = "79")]
	public override void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
	}

	[Token(Token = "0x60037B0")]
	[Address(RVA = "0x421BA00", Offset = "0x421BA00", VA = "0x421BA00")]
	private Vector2 GetLookAngle(Vector3 target)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60037B1")]
	[Address(RVA = "0x421BC20", Offset = "0x421BC20", VA = "0x421BC20")]
	protected void LateUpdateHeadPosition(Vector3 position)
	{
	}

	[Token(Token = "0x60037B2")]
	[Address(RVA = "0x421C1A0", Offset = "0x421C1A0", VA = "0x421C1A0")]
	protected void LateUpdateHead(BaseCharacter target)
	{
	}

	[Token(Token = "0x60037B3")]
	[Address(RVA = "0x421C700", Offset = "0x421C700", VA = "0x421C700", Slot = "103")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x60037B4")]
	[Address(RVA = "0x421D020", Offset = "0x421D020", VA = "0x421D020", Slot = "101")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60037B5")]
	[Address(RVA = "0x421D160", Offset = "0x421D160", VA = "0x421D160", Slot = "106")]
	protected override int GetFootstepPhase()
	{
		return default(int);
	}

	[Token(Token = "0x60037B6")]
	[Address(RVA = "0x421D280", Offset = "0x421D280", VA = "0x421D280")]
	protected string GetPlayingRunAnimation()
	{
		return null;
	}

	[Token(Token = "0x60037B7")]
	[Address(RVA = "0x421D360", Offset = "0x421D360", VA = "0x421D360", Slot = "96")]
	protected override void CheckGround()
	{
	}

	[Token(Token = "0x60037B8")]
	[Address(RVA = "0x421D870", Offset = "0x421D870", VA = "0x421D870")]
	public BasicTitan()
	{
	}
}
