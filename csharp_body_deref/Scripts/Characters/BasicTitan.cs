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

[Token(Token = "0x2000510")]
internal class BasicTitan : BaseTitan
{
	[Token(Token = "0x2000511")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__60 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001882")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001883")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001884")]
		[FieldOffset(Offset = "0x20")]
		public BasicTitan _003C_003E4__this;

		[Token(Token = "0x4001885")]
		[FieldOffset(Offset = "0x28")]
		private string _003CdieAnimation_003E5__2;

		[Token(Token = "0x170009EE")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60035AE")]
			[Address(RVA = "0x3F11620", Offset = "0x3F11620", VA = "0x3F11620", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009EF")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60035B0")]
			[Address(RVA = "0x3F11670", Offset = "0x3F11670", VA = "0x3F11670", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60035AB")]
		[Address(RVA = "0x3F0A100", Offset = "0x3F0A100", VA = "0x3F0A100")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__60(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60035AC")]
		[Address(RVA = "0x3F11030", Offset = "0x3F11030", VA = "0x3F11030", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60035AD")]
		[Address(RVA = "0x3F11040", Offset = "0x3F11040", VA = "0x3F11040", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60035AF")]
		[Address(RVA = "0x3F11630", Offset = "0x3F11630", VA = "0x3F11630", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400186F")]
	[FieldOffset(Offset = "0x278")]
	public BasicTitanComponentCache BasicCache;

	[Token(Token = "0x4001870")]
	[FieldOffset(Offset = "0x280")]
	protected BasicTitanAnimations BasicAnimations;

	[Token(Token = "0x4001871")]
	[FieldOffset(Offset = "0x288")]
	public bool IsCrawler;

	[Token(Token = "0x4001872")]
	[FieldOffset(Offset = "0x290")]
	protected string _runAnimation;

	[Token(Token = "0x4001873")]
	[FieldOffset(Offset = "0x298")]
	public BasicTitanSetup Setup;

	[Token(Token = "0x4001874")]
	[FieldOffset(Offset = "0x2A0")]
	public Quaternion _oldHeadRotation;

	[Token(Token = "0x4001875")]
	[FieldOffset(Offset = "0x2B0")]
	public Quaternion? LateUpdateHeadRotation;

	[Token(Token = "0x4001876")]
	[FieldOffset(Offset = "0x2C4")]
	public Quaternion? LateUpdateHeadRotationRecv;

	[Token(Token = "0x4001877")]
	[FieldOffset(Offset = "0x2D8")]
	public Vector2 LastGoodHeadAngle;

	[Token(Token = "0x4001878")]
	[FieldOffset(Offset = "0x2E0")]
	public float BellyFlopTime;

	[Token(Token = "0x4001879")]
	[FieldOffset(Offset = "0x2E4")]
	protected float _leftArmDisabledTimeLeft;

	[Token(Token = "0x400187A")]
	[FieldOffset(Offset = "0x2E8")]
	protected float _rightArmDisabledTimeLeft;

	[Token(Token = "0x400187B")]
	[FieldOffset(Offset = "0x2EC")]
	protected float ArmDisableTime;

	[Token(Token = "0x400187C")]
	[FieldOffset(Offset = "0x2F0")]
	public float RockThrow1Speed;

	[Token(Token = "0x400187D")]
	[FieldOffset(Offset = "0x2F4")]
	protected Vector3 _rockThrowTarget;

	[Token(Token = "0x400187E")]
	[FieldOffset(Offset = "0x300")]
	protected float _originalCapsuleValue;

	[Token(Token = "0x400187F")]
	[FieldOffset(Offset = "0x304")]
	public int TargetViewId;

	[Token(Token = "0x4001880")]
	[FieldOffset(Offset = "0x308")]
	public bool LookAtTarget;

	[Token(Token = "0x4001881")]
	[FieldOffset(Offset = "0x310")]
	private TitanCustomSet _customSet;

	[Token(Token = "0x170009EB")]
	public override bool CanSprint
	{
		[Token(Token = "0x600356E")]
		[Address(RVA = "0x3F05620", Offset = "0x3F05620", VA = "0x3F05620", Slot = "112")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009EC")]
	public override bool CanWallClimb
	{
		[Token(Token = "0x600356F")]
		[Address(RVA = "0x3F05630", Offset = "0x3F05630", VA = "0x3F05630", Slot = "111")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009ED")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x6003570")]
		[Address(RVA = "0x3F05640", Offset = "0x3F05640", VA = "0x3F05640", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003571")]
	[Address(RVA = "0x3F058B0", Offset = "0x3F058B0", VA = "0x3F058B0")]
	public void Init(bool ai, string team, JSONNode data, TitanCustomSet customSet)
	{
	}

	[Token(Token = "0x6003572")]
	[Address(RVA = "0x3F05C90", Offset = "0x3F05C90", VA = "0x3F05C90")]
	public float DeathTimeElapsed()
	{
		return default(float);
	}

	[Token(Token = "0x6003573")]
	[Address(RVA = "0x3F05DA0", Offset = "0x3F05DA0", VA = "0x3F05DA0", Slot = "122")]
	public override bool IsGrabAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x6003574")]
	[Address(RVA = "0x3F05DF0", Offset = "0x3F05DF0", VA = "0x3F05DF0", Slot = "121")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x6003575")]
	[Address(RVA = "0x3F05F10", Offset = "0x3F05F10", VA = "0x3F05F10", Slot = "165")]
	protected override void SetSizeParticles(float size)
	{
	}

	[Token(Token = "0x6003576")]
	[Address(RVA = "0x3F06180", Offset = "0x3F06180", VA = "0x3F06180")]
	[PunRPC]
	public void SetCrawlerRPC(bool crawler, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003577")]
	[Address(RVA = "0x3F06320", Offset = "0x3F06320", VA = "0x3F06320")]
	[PunRPC]
	public void ClearRockRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003578")]
	[Address(RVA = "0x3F06430", Offset = "0x3F06430", VA = "0x3F06430", Slot = "67")]
	public override Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x6003579")]
	[Address(RVA = "0x3F06450", Offset = "0x3F06450", VA = "0x3F06450", Slot = "93")]
	protected override void Start()
	{
	}

	[Token(Token = "0x600357A")]
	[Address(RVA = "0x3F06650", Offset = "0x3F06650", VA = "0x3F06650")]
	[PunRPC]
	public void SetupRPC(string json, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600357B")]
	[Address(RVA = "0x3F07400", Offset = "0x3F07400", VA = "0x3F07400", Slot = "68")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x600357C")]
	[Address(RVA = "0x3F07970", Offset = "0x3F07970", VA = "0x3F07970", Slot = "151")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x600357D")]
	[Address(RVA = "0x3F085B0", Offset = "0x3F085B0", VA = "0x3F085B0", Slot = "70")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x600357E")]
	[Address(RVA = "0x3F088F0", Offset = "0x3F088F0", VA = "0x3F088F0")]
	public void CoverNape()
	{
	}

	[Token(Token = "0x600357F")]
	[Address(RVA = "0x3F08970", Offset = "0x3F08970", VA = "0x3F08970")]
	public void UncoverNape()
	{
	}

	[Token(Token = "0x6003580")]
	[Address(RVA = "0x3F089A0", Offset = "0x3F089A0", VA = "0x3F089A0", Slot = "153")]
	public override void DisableArm(bool left)
	{
	}

	[Token(Token = "0x6003581")]
	[Address(RVA = "0x3F08D80", Offset = "0x3F08D80", VA = "0x3F08D80", Slot = "129")]
	public override bool CanAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x6003582")]
	[Address(RVA = "0x3F08D90", Offset = "0x3F08D90", VA = "0x3F08D90", Slot = "176")]
	[PunRPC]
	public virtual void DisableArmRPC(bool left, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003583")]
	[Address(RVA = "0x3F08E30", Offset = "0x3F08E30", VA = "0x3F08E30")]
	public void Laugh(BaseCharacter character)
	{
	}

	[Token(Token = "0x6003584")]
	[Address(RVA = "0x3F08F80", Offset = "0x3F08F80", VA = "0x3F08F80")]
	public void Distract(BaseCharacter character)
	{
	}

	[Token(Token = "0x6003585")]
	[Address(RVA = "0x3F090C0", Offset = "0x3F090C0", VA = "0x3F090C0", Slot = "177")]
	[PunRPC]
	public virtual void LaughRPC(Vector3 source)
	{
	}

	[Token(Token = "0x6003586")]
	[Address(RVA = "0x3F09460", Offset = "0x3F09460", VA = "0x3F09460", Slot = "178")]
	[PunRPC]
	public virtual void DistractRPC(int viewId)
	{
	}

	[Token(Token = "0x6003587")]
	[Address(RVA = "0x3F09510", Offset = "0x3F09510", VA = "0x3F09510", Slot = "152")]
	protected override void UpdateDisableArm()
	{
	}

	[Token(Token = "0x6003588")]
	[Address(RVA = "0x3F096D0", Offset = "0x3F096D0", VA = "0x3F096D0", Slot = "133")]
	public override void Run()
	{
	}

	[Token(Token = "0x6003589")]
	[Address(RVA = "0x3F09760", Offset = "0x3F09760", VA = "0x3F09760", Slot = "135")]
	public override void WallClimb()
	{
	}

	[Token(Token = "0x600358A")]
	[Address(RVA = "0x3F097E0", Offset = "0x3F097E0", VA = "0x3F097E0", Slot = "126")]
	public override void Jump(Vector3 direction)
	{
	}

	[Token(Token = "0x600358B")]
	[Address(RVA = "0x3F09940", Offset = "0x3F09940", VA = "0x3F09940", Slot = "179")]
	public virtual void StunDirectional(bool left)
	{
	}

	[Token(Token = "0x600358C")]
	[Address(RVA = "0x3F099B0", Offset = "0x3F099B0", VA = "0x3F099B0", Slot = "127")]
	public override void StartJump()
	{
	}

	[Token(Token = "0x600358D")]
	[Address(RVA = "0x3F099F0", Offset = "0x3F099F0", VA = "0x3F099F0")]
	public void JumpImmediate()
	{
	}

	[Token(Token = "0x600358E")]
	[Address(RVA = "0x3F09A50", Offset = "0x3F09A50", VA = "0x3F09A50", Slot = "136")]
	public override void Eat()
	{
	}

	[Token(Token = "0x600358F")]
	[Address(RVA = "0x3F09B20", Offset = "0x3F09B20", VA = "0x3F09B20", Slot = "141")]
	public override void Land()
	{
	}

	[Token(Token = "0x6003590")]
	[Address(RVA = "0x3F09CF0", Offset = "0x3F09CF0", VA = "0x3F09CF0", Slot = "142")]
	public override void Fall()
	{
	}

	[Token(Token = "0x6003591")]
	[Address(RVA = "0x3F09D80", Offset = "0x3F09D80", VA = "0x3F09D80", Slot = "139")]
	public override void Idle(float fadeTime)
	{
	}

	[Token(Token = "0x6003592")]
	[Address(RVA = "0x3F09DF0", Offset = "0x3F09DF0", VA = "0x3F09DF0", Slot = "143")]
	public override void Turn(Vector3 targetDirection)
	{
	}

	[Token(Token = "0x6003593")]
	[Address(RVA = "0x3F09FE0", Offset = "0x3F09FE0", VA = "0x3F09FE0", Slot = "83")]
	[PunRPC]
	public override void MarkDeadRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003594")]
	[Address(RVA = "0x3F0A090", Offset = "0x3F0A090", VA = "0x3F0A090", Slot = "74")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__60))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x6003595")]
	[Address(RVA = "0x3F0A120", Offset = "0x3F0A120", VA = "0x3F0A120", Slot = "90")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003596")]
	[Address(RVA = "0x3F0A1D0", Offset = "0x3F0A1D0", VA = "0x3F0A1D0", Slot = "80")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6003597")]
	[Address(RVA = "0x3F0A910", Offset = "0x3F0A910", VA = "0x3F0A910", Slot = "131")]
	public override void Kick()
	{
	}

	[Token(Token = "0x6003598")]
	[Address(RVA = "0x3F0A960", Offset = "0x3F0A960", VA = "0x3F0A960", Slot = "128")]
	public override void Attack(string attack)
	{
	}

	[Token(Token = "0x6003599")]
	[Address(RVA = "0x3F0B490", Offset = "0x3F0B490", VA = "0x3F0B490", Slot = "161")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x600359A")]
	[Address(RVA = "0x3F0E100", Offset = "0x3F0E100", VA = "0x3F0E100", Slot = "162")]
	protected override void UpdateEat()
	{
	}

	[Token(Token = "0x600359B")]
	[Address(RVA = "0x3F0E2D0", Offset = "0x3F0E2D0", VA = "0x3F0E2D0")]
	private void UpdateThrowHuman()
	{
	}

	[Token(Token = "0x600359C")]
	[Address(RVA = "0x3F0E880", Offset = "0x3F0E880", VA = "0x3F0E880", Slot = "144")]
	public override void Blind()
	{
	}

	[Token(Token = "0x600359D")]
	[Address(RVA = "0x3F0E900", Offset = "0x3F0E900", VA = "0x3F0E900", Slot = "155")]
	protected override string GetSitIdleAniamtion()
	{
		return null;
	}

	[Token(Token = "0x600359E")]
	[Address(RVA = "0x3F0E950", Offset = "0x3F0E950", VA = "0x3F0E950", Slot = "156")]
	protected override string GetSitFallAnimation()
	{
		return null;
	}

	[Token(Token = "0x600359F")]
	[Address(RVA = "0x3F0E9A0", Offset = "0x3F0E9A0", VA = "0x3F0E9A0", Slot = "157")]
	protected override string GetSitUpAnimation()
	{
		return null;
	}

	[Token(Token = "0x60035A0")]
	[Address(RVA = "0x3F0E9F0", Offset = "0x3F0E9F0", VA = "0x3F0E9F0", Slot = "145")]
	public override void Cripple(float time = 0f)
	{
	}

	[Token(Token = "0x60035A1")]
	[Address(RVA = "0x3F0EB10", Offset = "0x3F0EB10", VA = "0x3F0EB10", Slot = "79")]
	public override void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
	}

	[Token(Token = "0x60035A2")]
	[Address(RVA = "0x3F0F0F0", Offset = "0x3F0F0F0", VA = "0x3F0F0F0")]
	private Vector2 GetLookAngle(Vector3 target)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60035A3")]
	[Address(RVA = "0x3F0F310", Offset = "0x3F0F310", VA = "0x3F0F310")]
	protected void LateUpdateHeadPosition(Vector3 position)
	{
	}

	[Token(Token = "0x60035A4")]
	[Address(RVA = "0x3F0F890", Offset = "0x3F0F890", VA = "0x3F0F890")]
	protected void LateUpdateHead(BaseCharacter target)
	{
	}

	[Token(Token = "0x60035A5")]
	[Address(RVA = "0x3F0FDF0", Offset = "0x3F0FDF0", VA = "0x3F0FDF0", Slot = "103")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x60035A6")]
	[Address(RVA = "0x3F10670", Offset = "0x3F10670", VA = "0x3F10670", Slot = "101")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60035A7")]
	[Address(RVA = "0x3F107B0", Offset = "0x3F107B0", VA = "0x3F107B0", Slot = "106")]
	protected override int GetFootstepPhase()
	{
		return default(int);
	}

	[Token(Token = "0x60035A8")]
	[Address(RVA = "0x3F108D0", Offset = "0x3F108D0", VA = "0x3F108D0")]
	protected string GetPlayingRunAnimation()
	{
		return null;
	}

	[Token(Token = "0x60035A9")]
	[Address(RVA = "0x3F109B0", Offset = "0x3F109B0", VA = "0x3F109B0", Slot = "96")]
	protected override void CheckGround()
	{
	}

	[Token(Token = "0x60035AA")]
	[Address(RVA = "0x3F10EC0", Offset = "0x3F10EC0", VA = "0x3F10EC0")]
	public BasicTitan()
	{
	}
}
