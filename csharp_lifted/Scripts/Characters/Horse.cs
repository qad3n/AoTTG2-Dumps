// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Horse
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/Horse.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/Horse.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
				// Lifted from source/cpp/Characters/Horse.c (Characters.Horse.<WaitAndDie>d__68$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/Characters/Horse.c (Characters.Horse.<WaitAndDie>d__68$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60040DD")]
		[Address(RVA = "0x5AF0C70", Offset = "0x5AEFC70", VA = "0x5AF0C70")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__68(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse.<WaitAndDie>d__68$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60040DE")]
		[Address(RVA = "0x5AF3020", Offset = "0x5AF2020", VA = "0x5AF3020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse.<WaitAndDie>d__68$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60040DF")]
		[Address(RVA = "0x5AF3030", Offset = "0x5AF2030", VA = "0x5AF3030", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse.<WaitAndDie>d__68$$MoveNext): clean
			int iVar1;
			Horse __this_00;
			BaseComponentCache pUVar2;
			Transform pUVar3;
			String name;
			bool bVar4;
			object pIVar5;
			int iVar6;
			Quaternion rotation;
			Vector3 position;

			iVar1 = this.__1__state;
			bVar4 = false;
			if (iVar1 == 1) {
				iVar6 = -1;
		label_05bf31a6: ;
				this.__1__state = iVar6;
				return bVar4;
			}
			if (iVar1 != 0) {
				return false;
			}
			__this_00 = this.__4__this;
			this.__1__state = -1;
			if (__this_00 != null) {
				bVar4 = __this_00.IsMine() ;
				if (!bVar4) {
					return false;
				}
				pUVar2 = __this_00.Cache;
				if ((pUVar2 != null) &&(pUVar3 = pUVar2.Transform, pUVar3 != null)) {
					name = EffectPrefabs.Blood2;
					position = pUVar3.position;
					pUVar2 = __this_00.Cache;
					if ((pUVar2 != null) &&(pUVar3 = pUVar2.Transform, pUVar3 != null)) {
						rotation = pUVar3.rotation;
						iVar6 = 1;
						EffectSpawner.Spawn(name, position, rotation, 1.0, true, null);
						pIVar5 = (object)__this_00.WaitAndDie();
						this.__2__current = pIVar5;
						bVar4 = true;
						goto label_05bf31a6;
					}
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x60040E1")]
		[Address(RVA = "0x5AF31D0", Offset = "0x5AF21D0", VA = "0x5AF31D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse.<WaitAndDie>d__68$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Characters_Horse_WaitAndDie_d__68_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
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
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$get_Controller): clean
			return this._Controller_k__BackingField;
		}
	}

	[Token(Token = "0x17000B22")]
	public Human AssignedHuman
	{
		[Token(Token = "0x60040AE")]
		[Address(RVA = "0x5AEFC10", Offset = "0x5AEEC10", VA = "0x5AEFC10")]
		get
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$get_AssignedHuman): clean
			return this._assignedHuman;
		}
	}

	[Token(Token = "0x17000B23")]
	public Human Rider
	{
		[Token(Token = "0x60040AF")]
		[Address(RVA = "0x5AEFC20", Offset = "0x5AEEC20", VA = "0x5AEFC20")]
		get
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$get_Rider): clean
			Horse x;
			Human pCVar1;
			bool bVar2;
			Human pCVar3;

			pCVar3 = this._assignedHuman;
			bVar2 = ((Object)pCVar3 != null);
			pCVar3 = null;
			if (bVar2) {
				pCVar3 = this._assignedHuman;
				if (pCVar3 == null) {
		label_05befce7: ;
					throw new NullReferenceException();
				}
				if (pCVar3.Dead == false) {
					x = pCVar3.Horse;
					bVar2 = ((Object)x == (Object)this);
					pCVar3 = null;
					if (bVar2) {
						pCVar1 = this._assignedHuman;
						if (pCVar1 == null) goto label_05befce7;
						pCVar3 = null;
						if (pCVar1.MountState == 1) {
							pCVar3 = pCVar1;
						}
					}
				}
				else {
					pCVar3 = null;
				}
			}
			return pCVar3;
		}
	}

	[Token(Token = "0x17000B24")]
	public BaseCharacter OrderTarget
	{
		[Token(Token = "0x60040B0")]
		[Address(RVA = "0x5AEFCF0", Offset = "0x5AEECF0", VA = "0x5AEFCF0")]
		get
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$get_OrderTarget): clean
			HorseController pCVar1;
			BaseCharacter pCVar2;

			pCVar1 = this._Controller_k__BackingField;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar2;
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
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$get_DespawnWithAssignedHuman): clean
			return this._DespawnWithAssignedHuman_k__BackingField;
		}
		[Token(Token = "0x60040B2")]
		[Address(RVA = "0x5AEFDC0", Offset = "0x5AEEDC0", VA = "0x5AEFDC0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$set_DespawnWithAssignedHuman): clean
			this._DespawnWithAssignedHuman_k__BackingField = value;
			return;
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
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$get_RecallEnabled): clean
			return this._RecallEnabled_k__BackingField;
		}
		[Token(Token = "0x60040B4")]
		[Address(RVA = "0x5AEFDE0", Offset = "0x5AEEDE0", VA = "0x5AEFDE0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$set_RecallEnabled): clean
			this._RecallEnabled_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000B27")]
	public float RunSpeed
	{
		[Token(Token = "0x60040B5")]
		[Address(RVA = "0x5AEFDF0", Offset = "0x5AEEDF0", VA = "0x5AEFDF0")]
		get
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$get_RunSpeed): clean
			Human pCVar1;
			HumanStats pCVar2;
			bool bVar3;

			if (this._runSpeed.hasValue != false) {
				return this._runSpeed.value;
			}
			pCVar1 = this._assignedHuman;
			bVar3 = ((Object)pCVar1 != null);
			if (bVar3) {
				pCVar1 = this._assignedHuman;
				if ((pCVar1 == null) ||(pCVar2 = pCVar1.Stats, pCVar2 == null)) {
					throw new NullReferenceException();
				}
				return pCVar2.HorseSpeed;
			}
			return 50.0;
		}
		[Token(Token = "0x60040B6")]
		[Address(RVA = "0x5AEFEB0", Offset = "0x5AEEEB0", VA = "0x5AEFEB0")]
		set
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$set_RunSpeed): 1 lines keep C-only constructs
			bool bVar1;
			Nullable<float> local_10;

			bVar1 = HorseController.IsFinite(value);
			if ((0.0 < value) && (bVar1)) {
				local_10.hasValue = false;
				local_10._1_3_ = 0;
				local_10.value = 0.0;
				local_10 = new Nullable<float>(value);
				this._runSpeed = local_10;
			}
			return;
		}
	}

	[Token(Token = "0x17000B28")]
	public override float MaxFootstepDistance
	{
		[Token(Token = "0x60040B7")]
		[Address(RVA = "0x5AEFF30", Offset = "0x5AEEF30", VA = "0x5AEFF30", Slot = "60")]
		get
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$get_MaxFootstepDistance): clean
			return 100.0;
		}
	}

	[Token(Token = "0x17000B29")]
	public override float MaxSoundDistance
	{
		[Token(Token = "0x60040B8")]
		[Address(RVA = "0x5AEFF40", Offset = "0x5AEEF40", VA = "0x5AEFF40", Slot = "61")]
		get
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$get_MaxSoundDistance): clean
			return 100.0;
		}
	}

	[Token(Token = "0x17000B2A")]
	public override float LODQualityMediumDistance
	{
		[Token(Token = "0x60040B9")]
		[Address(RVA = "0x5AEFF50", Offset = "0x5AEEF50", VA = "0x5AEFF50", Slot = "62")]
		get
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$get_LODQualityMediumDistance): clean
			return 100.0;
		}
	}

	[Token(Token = "0x17000B2B")]
	public override float LODQualityLowDistance
	{
		[Token(Token = "0x60040BA")]
		[Address(RVA = "0x5AEFF60", Offset = "0x5AEEF60", VA = "0x5AEFF60", Slot = "63")]
		get
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$get_LODQualityLowDistance): clean
			return 200.0;
		}
	}

	[Token(Token = "0x17000B2C")]
	public override float CullShadowsDistance
	{
		[Token(Token = "0x60040BB")]
		[Address(RVA = "0x5AEFF70", Offset = "0x5AEEF70", VA = "0x5AEFF70", Slot = "64")]
		get
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$get_CullShadowsDistance): clean
			return 400.0;
		}
	}

	[Token(Token = "0x17000B2D")]
	public override float CullRendererDistance
	{
		[Token(Token = "0x60040BC")]
		[Address(RVA = "0x5AEFF80", Offset = "0x5AEEF80", VA = "0x5AEFF80", Slot = "65")]
		get
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$get_CullRendererDistance): clean
			return 600.0;
		}
	}

	[Token(Token = "0x17000B2E")]
	public override float CullEffectsDistance
	{
		[Token(Token = "0x60040BD")]
		[Address(RVA = "0x5AEFF90", Offset = "0x5AEEF90", VA = "0x5AEFF90", Slot = "66")]
		get
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$get_CullEffectsDistance): clean
			return 600.0;
		}
	}

	[Token(Token = "0x17000B2F")]
	public bool FollowingEnabled
	{
		[Token(Token = "0x60040BE")]
		[Address(RVA = "0x5AEFFA0", Offset = "0x5AEEFA0", VA = "0x5AEFFA0")]
		get
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$get_FollowingEnabled): clean
			HorseController pCVar1;

			pCVar1 = this._Controller_k__BackingField;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1._Order_k__BackingField == 1;
		}
		[Token(Token = "0x60040BF")]
		[Address(RVA = "0x5AEFFC0", Offset = "0x5AEEFC0", VA = "0x5AEFFC0")]
		set
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$set_FollowingEnabled): 2 lines keep C-only constructs
			Human target;
			undefined7 in_register_00000031;

			if ((int)CONCAT71(in_register_00000031, value) == 0) {
				this.IssueOrder(0, null, (Vector3)(Vector3.zeroVector), 5.0);
				return;
			}
			target = this._assignedHuman;
			this.IssueOrder(1, (BaseCharacter)target, (Vector3)(Vector3.zeroVector), 5.0);
			return;
		}
	}

	[Token(Token = "0x17000B30")]
	protected override Vector3 Gravity
	{
		[Token(Token = "0x60040C0")]
		[Address(RVA = "0x5AF0140", Offset = "0x5AEF140", VA = "0x5AF0140", Slot = "58")]
		get
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$get_Gravity): clean
			uint uVar1;
			uint uVar2;
			Vector3 UVar4;

			uVar1 = (Vector3.downVector).x;
			uVar2 = (Vector3.downVector).y;
			UVar4.x = (float)uVar1 * 30.0;
			UVar4.y = (float)uVar2 * 30.0;
			UVar4.z = (Vector3.downVector).z * 30.0;
			return (Vector3)UVar4;
		}
	}

	[Token(Token = "0x17000B31")]
	protected override int DefaultMaxHealth
	{
		[Token(Token = "0x60040C1")]
		[Address(RVA = "0x5AF0190", Offset = "0x5AEF190", VA = "0x5AF0190", Slot = "57")]
		get
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$get_DefaultMaxHealth): clean
			InGameSet pSVar1;
			InGameMiscSettings pSVar2;
			IntSetting pSVar3;

			pSVar1 = SettingsManager.InGameCurrent;
			if (((pSVar1 == null) ||(pSVar2 = pSVar1.Misc, pSVar2 == null)) ||(pSVar3 = pSVar2.HorseHealth, pSVar3 == null)) {
				throw new NullReferenceException();
			}
			return pSVar3._value;
		}
	}

	[Token(Token = "0x17000B32")]
	public Vector3 SaddlePosition
	{
		[Token(Token = "0x60040C2")]
		[Address(RVA = "0x5AF0200", Offset = "0x5AEF200", VA = "0x5AF0200")]
		get
		{
			// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$get_SaddlePosition): clean
			BaseComponentCache pUVar1;
			Transform pUVar2;
			Vector3 UVar3;
			Vector3 UVar4;
			Vector3 UVar5;
			float local_18;
			float fStack_14;

			pUVar1 = this.Cache;
			if ((pUVar1 != null) &&(pUVar2 = pUVar1.Transform, pUVar2 != null)) {
				UVar3 = pUVar2.position;
				pUVar1 = this.Cache;
				if (pUVar1 != null) {
					pUVar2 = pUVar1.Transform;
					if (pUVar2 != null) {
						UVar4 = pUVar2.up;
						local_18 = UVar3.x;
						fStack_14 = UVar3.y;
						UVar5.x = UVar4.x * 1.95 + local_18;
						UVar5.y = UVar4.y * 1.95 + fStack_14;
						UVar5.z = UVar4.z * 1.95 + UVar3.z;
						return (Vector3)UVar5;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x60040C3")]
	[Address(RVA = "0x5AF0270", Offset = "0x5AEF270", VA = "0x5AF0270")]
	public void Init(Human human)
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$Init): clean
		bool bVar1;
		String value;

		if (human != null) {
			bVar1 = String.IsNullOrWhiteSpace(human.VisibleName);
			if (bVar1) {
				value = "Horse";
			}
			else {
				value = String.Concat(human.RichTextName, "'s horse");
			}
			if (this != null) {
				this.Name = value;
				this.Init(true, human.Team);
				this._assignedHuman = human;
				this._DespawnWithAssignedHuman_k__BackingField = true;
				this._RecallEnabled_k__BackingField = true;
				this.IssueOrder(1, (BaseCharacter)human, (Vector3)(Vector3.zeroVector), 5.0);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60040C4")]
	[Address(RVA = "0x5AF0380", Offset = "0x5AEF380", VA = "0x5AF0380", Slot = "75")]
	public override void Init(bool ai, string team)
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$Init): clean


		this.Init(true, team);
		this._DespawnWithAssignedHuman_k__BackingField = false;
		this._RecallEnabled_k__BackingField = false;
		this.IssueOrder(0, null, (Vector3)(Vector3.zeroVector), 5.0);
		return;
	}

	[Token(Token = "0x60040C5")]
	[Address(RVA = "0x5AEFD10", Offset = "0x5AEED10", VA = "0x5AEFD10")]
	private static BaseCharacter ResolveCharacter(int viewId)
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$ResolveCharacter): clean
		uint uVar1;
		bool bVar2;
		PhotonView x;
		BaseCharacter pCVar3;

		if (viewId < 1) {
			x = null;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			x = PhotonView.Find(viewId);
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = ((Object)x != null);
		if (bVar2) {
			if (x == null) {
				throw new NullReferenceException();
			}
			pCVar3 = x.GetComponent<BaseCharacter>();
			return pCVar3;
		}
		return null;
	}

	[Token(Token = "0x60040C6")]
	[Address(RVA = "0x5AF0080", Offset = "0x5AEF080", VA = "0x5AF0080")]
	public bool Follow(BaseCharacter target, float distance = 5f)
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$Follow): clean
		bool bVar1;

		bVar1 = this.IssueOrder(1, target, (Vector3)(Vector3.zeroVector), distance);
		return bVar1;
	}

	[Token(Token = "0x60040C7")]
	[Address(RVA = "0x5AF05D0", Offset = "0x5AEF5D0", VA = "0x5AF05D0")]
	public bool ComeTo(BaseCharacter target, float distance = 5f)
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$ComeTo): clean
		bool bVar1;

		bVar1 = this.IssueOrder(2, target, (Vector3)(Vector3.zeroVector), distance);
		return bVar1;
	}

	[Token(Token = "0x60040C8")]
	[Address(RVA = "0x5AF0640", Offset = "0x5AEF640", VA = "0x5AF0640")]
	public bool MoveTo(Vector3 position, float distance = 5f)
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$MoveTo): clean
		bool bVar1;

		bVar1 = this.IssueOrder(3, null, position, distance);
		return bVar1;
	}

	[Token(Token = "0x60040C9")]
	[Address(RVA = "0x5AF00F0", Offset = "0x5AEF0F0", VA = "0x5AF00F0")]
	public bool Stay()
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$Stay): clean
		bool bVar1;

		bVar1 = this.IssueOrder(0, null, (Vector3)(Vector3.zeroVector), 5.0);
		return bVar1;
	}

	[Token(Token = "0x60040CA")]
	[Address(RVA = "0x5AF03F0", Offset = "0x5AEF3F0", VA = "0x5AF03F0")]
	private bool IssueOrder(HorseOrder order, BaseCharacter target, Vector3 position, float distance)
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$IssueOrder): clean
		int iVar1;
		HorseController pCVar2;
		bool bVar3;
		bool hasAuthority;
		bool mounted;
		PhotonView pPVar4;
		Human pCVar5;
		bool bVar6;
		int targetViewId;

		targetViewId = 0;
		bVar3 = ((Object)target != null);
		if (bVar3) {
			if (target == null) goto label_05bf05c2;
			if (target.Dead == false) {
				targetViewId = 0;
				bVar3 = ((Object)target != (Object)this);
				if (bVar3) {
					pPVar4 = target.photonView;
					if (pPVar4 == null) goto label_05bf05c2;
					targetViewId = pPVar4.viewIdField;
				}
			}
		}
		pCVar2 = this._Controller_k__BackingField;
		if (pCVar2 == null) {
	label_05bf05c2: ;
			throw new NullReferenceException();
		}
		iVar1 = pCVar2._Revision_k__BackingField;
		hasAuthority = this.IsMine();
		bVar3 = this.Dead;
		pCVar5 = this.Rider;
		mounted = ((Object)pCVar5 != null);
		bVar3 = pCVar2.TrySetOrder(order, targetViewId, position, distance, hasAuthority, bVar3 == false, mounted);
		if (bVar3) {
			pCVar2 = this._Controller_k__BackingField;
			if (pCVar2 == null) goto label_05bf05c2;
			if (iVar1 != pCVar2._Revision_k__BackingField) {
				pCVar5 = this.Rider;
				bVar3 = ((Object)pCVar5 == null);
				if (bVar3) {
					this.State = 0;
				}
			}
		}
		return bVar6;
	}

	[Token(Token = "0x60040CB")]
	[Address(RVA = "0x5AF0650", Offset = "0x5AEF650", VA = "0x5AF0650", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$CreateCache): clean
		GameObject owner;
		HorseComponentCache __this_00;

		owner = this.gameObject;
		__this_00 = new HorseComponentCache(owner);
		this.HorseCache = __this_00;
		this.CreateCache((BaseComponentCache)this.HorseCache);
		return;
	}

	[Token(Token = "0x60040CC")]
	[Address(RVA = "0x5AF0790", Offset = "0x5AEF790", VA = "0x5AF0790")]
	public void Jump()
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$Jump): clean
		float fVar1;
		uint uVar2;
		uint uVar3;
		BaseComponentCache pUVar4;
		Rigidbody __this_00;
		bool bVar6;
		Vector3 force;

		bVar6 = this.IsMine();
		if ((((!bVar6) || (this.Dead != false)) || (0.0 < this._jumpCooldownLeft)) ||(this.Grounded == false)) {
			return;
		}
		pUVar4 = this.Cache;
		if (pUVar4 != null) {
			__this_00 = pUVar4.Rigidbody;
			if (__this_00 != null) {
				fVar1 = this.JumpForce;
				force.z = (Vector3.upVector).z * fVar1;
				uVar2 = (Vector3.upVector).x;
				uVar3 = (Vector3.upVector).y;
				force.x = fVar1 * (float)uVar2;
				force.y = fVar1 * (float)uVar3;
				__this_00.AddForce(force, 2);
				this._jumpCooldownLeft = 0.0;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60040CD")]
	[Address(RVA = "0x5AF0860", Offset = "0x5AEF860", VA = "0x5AF0860", Slot = "73")]
	public override bool ValidTarget()
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$ValidTarget): clean
		return false;
	}

	[Token(Token = "0x60040CE")]
	[Address(RVA = "0x5AF0870", Offset = "0x5AEF870", VA = "0x5AF0870")]
	public Human FindSaddledHuman()
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$FindSaddledHuman): 14 lines keep C-only constructs
		BaseComponentCache pUVar1;
		Transform pUVar2;
		InGameManager pGVar3;
		HashSet<object> __this_00;
		uint uVar4;
		bool bVar5;
		Human pCVar6;
		Human x;
		int iVar7;
		float fVar8;
		float fVar9;
		float in_XMM1_Db;
		float fVar10;
		Vector3 UVar11;
		byte[] local_80 = new byte[16];
		Human local_70;
		float local_68;
		float fStack_64;
		float fStack_60;
		float fStack_5c;
		byte[] local_58 = new byte[8];
		System_Collections_Generic_HashSet_Enumerator_T__o local_48;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pUVar2 = pUVar1.Transform, pUVar2 != null)) {
			UVar11 = pUVar2.position;
			local_68 = UVar11.z;
			local_58 = (byte[])UVar11._0_8_;
			pUVar1 = this.Cache;
			if ((pUVar1 != null) &&(pUVar2 = pUVar1.Transform, pUVar2 != null)) {
				fStack_64 = in_XMM1_Db;
				UVar11 = pUVar2.up;
				pGVar3 = this._inGameManager;
				if ((pGVar3 != null) &&(__this_00 = (HashSet<object>)pGVar3.Humans, __this_00 != null)) {
					uVar4 = local_58._0_4_;
					local_58._0_4_ = (float)local_58._4_4_ + UVar11.y * 1.95;
					local_68 = local_68 + UVar11.z * 1.95;
					fStack_60 = fStack_64 + in_XMM1_Db * 0.0;
					fStack_5c = (float)local_58._4_4_ + UVar11.y * 0.0;
					fStack_64 = (float)uVar4 + UVar11.x * 1.95;
					local_80.GetEnumerator(__this_00);
					local_48._current = (object)local_70;
					local_48._set = (HashSet<T>)local_80._0_8_;
					local_48._index = local_80._8_4_;
					local_48._version = local_80._12_4_;
					local_80._0_8_ = null;
					local_80._8_8_ = &local_48;
					do {
						do {
							do {
								bVar5 = local_48.MoveNext();
								x = (Human)local_48._current;
								if (!bVar5) {
									iVar7 = 5;
									x = null;
									goto label_05bf0a74;
								}
								bVar5 = ((Object)x != null);
							} while (!bVar5);
							if (x == null) {
								throw new NullReferenceException();
							}
						} while (((Human)((long)x + 0x10)).Dead != false);
						pUVar1 = ((Human)((long)x + 0x10)).Cache;
						if (pUVar1 == null) {
							throw new NullReferenceException();
						}
						pUVar2 = pUVar1.Transform;
						if (pUVar2 == null) {
							throw new NullReferenceException();
						}
						UVar11 = pUVar2.position;
						fVar8 = UVar11.y - (float)local_58._0_4_;
						fVar9 = UVar11.z - local_68;
						fVar10 = UVar11.x - fStack_64;
					} while (1.0 <= fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
					iVar7 = 4;
	label_05bf0a74: ;
					local_48.Dispose();
					if (iVar7 == 4) {
					}
					return pCVar6;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60040CF")]
	[Address(RVA = "0x5AF0B20", Offset = "0x5AEFB20", VA = "0x5AF0B20", Slot = "90")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$GetHitRPC): clean
		Human pCVar1;
		bool bVar2;
		PhotonView pPVar3;

		if (0 < viewId) {
			pCVar1 = this._assignedHuman;
			bVar2 = ((Object)pCVar1 != null);
			if (bVar2) {
				pCVar1 = this._assignedHuman;
				if ((pCVar1 == null) ||(pPVar3 = pCVar1.photonView, pPVar3 == null)) {
					throw new NullReferenceException();
				}
				if (pPVar3.viewIdField == viewId) {
					return;
				}
			}
		}
		this.GetHitRPC(viewId, name, damage, type, collider);
		return;
	}

	[Token(Token = "0x60040D0")]
	[Address(RVA = "0x5AF0C00", Offset = "0x5AEFC00", VA = "0x5AF0C00", Slot = "84")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__68))]
	protected override IEnumerator WaitAndDie()
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$WaitAndDie): clean
		Horse.d__68<WaitAndDie> __this_00;

		__this_00 = new Horse.d__68<WaitAndDie>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60040D1")]
	[Address(RVA = "0x5AF0C90", Offset = "0x5AEFC90", VA = "0x5AF0C90", Slot = "104")]
	protected override void Start()
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$Start): clean
		InGameManager __this_00;

		__this_00 = this._inGameManager;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.RegisterCharacter((BaseCharacter)this);
		this.Start();
		return;
	}

	[Token(Token = "0x60040D2")]
	[Address(RVA = "0x5AF0CC0", Offset = "0x5AEFCC0", VA = "0x5AF0CC0", Slot = "101")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$Awake): clean
		bool bVar1;

		this.Awake();
		bVar1 = String.IsNullOrWhiteSpace(this.RichTextName);
		if (bVar1) {
			this.Name = "Horse";
		}
		bVar1 = this.IsMine();
		if (bVar1) {
			this.CrossFade(HorseAnimations.Idle0, 0.1, 0.0);
			return;
		}
		return;
	}

	[Token(Token = "0x60040D3")]
	[Address(RVA = "0x5AF0D80", Offset = "0x5AEFD80", VA = "0x5AF0D80")]
	private void ToggleDust(bool toggle)
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$ToggleDust): clean
		HorseComponentCache pCVar1;
		ParticleSystem system;

		pCVar1 = this.HorseCache;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		system = pCVar1.Dust;
		if (toggle) {
			this.ToggleParticles(system, this.EffectsEnabled != false);
			return;
		}
		this.ToggleParticles(system, false);
		return;
	}

	[Token(Token = "0x60040D4")]
	[Address(RVA = "0x5AF0DC0", Offset = "0x5AEFDC0", VA = "0x5AF0DC0")]
	private void RecallTo(BaseCharacter target)
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$RecallTo): 3 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		BaseComponentCache pUVar10;
		Transform pUVar11;
		Rigidbody pUVar12;
		Vector3 direction;
		bool bVar13;
		LayerMask UVar14;
		int iVar15;
		UnityEngine_Vector3_StaticFields pUVar16;
		float fVar17;
		float fVar18;
		float fVar19;
		float fVar20;
		Vector3 UVar21;
		Vector3 start;
		Vector3 value;
		Vector3 value_00;
		Vector3 end;
		ulong local_88;
		RaycastHit local_58;

		local_58.m_UV.x = 0.0;
		local_58.m_UV.y = 0.0;
		local_58.m_Collider.m_Data = (EntityId)0x0;
		local_58.m_Normal.y = 0.0;
		local_58.m_Normal.z = 0.0;
		local_58.m_FaceID = 0;
		local_58.m_Distance = 0.0;
		local_58.m_Point.x = 0.0;
		local_58.m_Point.y = 0.0;
		local_58.m_Point.z = 0.0;
		local_58.m_Normal.x = 0.0;
		if (((target == null) ||(pUVar10 = target.Cache, pUVar10 == null)) ||(pUVar11 = pUVar10.Transform, pUVar11 == null)) {
	label_05bf1220: ;
			throw new NullReferenceException();
		}
		UVar21 = pUVar11.position;
		pUVar16 = typeof(Vector3).static_fields;
		uVar2 = (pUVar16.rightVector).x;
		uVar6 = (pUVar16.rightVector).y;
		fVar19 = (pUVar16.rightVector).z;
		fVar17 = Random.Range(-2.0, 2.0);
		local_88._0_4_ = UVar21.x;
		local_88._4_4_ = UVar21.y;
		pUVar16 = typeof(Vector3).static_fields;
		uVar3 = (pUVar16.forwardVector).x;
		uVar7 = (pUVar16.forwardVector).y;
		fVar1 = (pUVar16.forwardVector).z;
		fVar18 = Random.Range(-2.0, 2.0);
		fVar19 = UVar21.z + fVar19 * fVar17 + fVar1 * fVar18;
		fVar20 = (float)local_88 + fVar17 * (float)uVar2 + fVar18 * (float)uVar3;
		pUVar16 = typeof(Vector3).static_fields;
		uVar4 = (pUVar16.upVector).x;
		uVar8 = (pUVar16.upVector).y;
		fVar1 = (pUVar16.upVector).z;
		if (Il2CppMethodInitialized_075450a5 == false) {
			Il2CppMethodInitialized_075450a5 = true;
			pUVar16 = typeof(Vector3).static_fields;
		}
		direction = (pUVar16.downVector);
		UVar14 = this.get_GroundMask();
		iVar15 = ((LayerMask)UVar14);
		UVar21.z = fVar1 + fVar19;
		UVar21.x = (float)uVar4 + fVar20;
		UVar21.y = (float)uVar8 + local_88._4_4_ + fVar17 * (float)uVar6 + fVar18 * (float)uVar7;
		bVar13 = Physics.Raycast(UVar21, (Vector3)direction, ref local_58, 1000.0, iVar15, 1);
		if (bVar13) {
			UVar21 = local_58.point;
			fVar17 = UVar21.y + 1.0;
			pUVar16 = typeof(Vector3).static_fields;
			uVar5 = (pUVar16.upVector).x;
			uVar9 = (pUVar16.upVector).y;
			fVar1 = (pUVar16.upVector).z;
			end.z = fVar1 * 1.4 + fVar19;
			UVar14 = this.get_GroundMask();
			iVar15 = ((LayerMask)UVar14);
			start.y = (float)uVar9 * 0.6 + fVar17;
			start.x = (float)uVar5 * 0.6 + fVar20;
			start.z = fVar1 * 0.6 + fVar19;
			end.x = (float)uVar5 * 1.4 + fVar20;
			end.y = (float)uVar9 * 1.4 + fVar17;
			bVar13 = Physics.CheckCapsule(start, end, 0.6, iVar15, 1);
			if (!bVar13) {
				pUVar10 = this.Cache;
				if ((pUVar10 != null) &&(pUVar12 = pUVar10.Rigidbody, pUVar12 != null)) {
					value.z = fVar19;
					value.x = fVar20;
					value.y = fVar17;
					pUVar12.position = value;
					pUVar10 = this.Cache;
					if ((pUVar10 != null) &&(pUVar11 = pUVar10.Transform, pUVar11 != null)) {
						value_00.z = fVar19;
						value_00.x = fVar20;
						value_00.y = fVar17;
						pUVar11.position = value_00;
						pUVar10 = this.Cache;
						if (pUVar10 != null) {
							pUVar12 = pUVar10.Rigidbody;
							if (pUVar12 != null) {
								pUVar12.linearVelocity = (Vector3)(Vector3.zeroVector);
								return;
							}
						}
					}
				}
				goto label_05bf1220;
			}
		}
		return;
	}

	[Token(Token = "0x60040D5")]
	[Address(RVA = "0x5AF1230", Offset = "0x5AF0230", VA = "0x5AF1230")]
	private void UpdateIdle()
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$UpdateIdle): clean
		uint uVar1;
		AnimationHandler pCVar2;
		SoundSettings pSVar3;
		BoolSetting pSVar4;
		bool bVar5;
		String pSVar6;
		float fVar7;
		float fVar8;

		fVar8 = this._idleTimeLeft;
		fVar7 = Time.deltaTime;
		fVar8 = fVar8 - fVar7;
		this._idleTimeLeft = fVar8;
		if (0.0 < fVar8) {
			return;
		}
		pCVar2 = this.Animation;
		if (pCVar2 != null) {
			bVar5 = pCVar2.IsPlaying(HorseAnimations.Idle0);
			if (!bVar5) {
				this.CrossFade(HorseAnimations.Idle0, 0.1, 0.0);
				fVar8 = Random.Range(6.0, 9.0);
	label_05bf13b4: ;
				this._idleTimeLeft = fVar8;
				return;
			}
			fVar8 = Random.Range(0.0, 1.0);
			if (0.25 <= fVar8) {
				if (fVar8 < 0.5) {
					pSVar6 = HorseAnimations.Idle2;
					this.CrossFade(pSVar6, 0.1, 0.0);
					pCVar2 = this.Animation;
					if (pCVar2 != null) {
						fVar8 = pCVar2.GetLength(pSVar6);
						this._idleTimeLeft = fVar8;
						pSVar3 = SettingsManager.SoundSettings;
						if ((pSVar3 != null) &&(pSVar4 = pSVar3.HorseSoundEffect, pSVar4 != null)) {
							if (pSVar4._value == false) {
								return;
							}
							pSVar6 = HorseSounds.Idle1;
							goto label_05bf1610;
						}
					}
				}
				else {
					uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
					if (0.75 <= fVar8) {
						if (uVar1 == 0) {
						}
						pSVar6 = HorseAnimations.Crazy;
						this.CrossFade(pSVar6, 0.1, 0.0);
						pCVar2 = this.Animation;
						if (pCVar2 != null) {
							fVar8 = pCVar2.GetLength(pSVar6);
							this._idleTimeLeft = fVar8;
							pSVar3 = SettingsManager.SoundSettings;
							if ((pSVar3 != null) &&(pSVar4 = pSVar3.HorseSoundEffect, pSVar4 != null)) {
								if (pSVar4._value == false) {
									return;
								}
								pSVar6 = HorseSounds.Idle3;
								goto label_05bf1610;
							}
						}
					}
					else {
						if (uVar1 == 0) {
						}
						pSVar6 = HorseAnimations.Idle3;
						this.CrossFade(pSVar6, 0.1, 0.0);
						pCVar2 = this.Animation;
						if (pCVar2 != null) {
							fVar8 = pCVar2.GetLength(pSVar6);
							this._idleTimeLeft = fVar8;
							pSVar3 = SettingsManager.SoundSettings;
							if ((pSVar3 != null) &&(pSVar4 = pSVar3.HorseSoundEffect, pSVar4 != null)) {
								if (pSVar4._value == false) {
									return;
								}
								pSVar6 = HorseSounds.Idle2;
	label_05bf1610: ;
								this.PlaySound(pSVar6);
								return;
							}
						}
					}
				}
			}
			else {
				pSVar6 = HorseAnimations.Idle1;
				this.CrossFade(pSVar6, 0.1, 0.0);
				pCVar2 = this.Animation;
				if (pCVar2 != null) {
					fVar8 = pCVar2.GetLength(pSVar6);
					goto label_05bf13b4;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60040D6")]
	[Address(RVA = "0x5AF1630", Offset = "0x5AF0630", VA = "0x5AF1630")]
	private void IdleOneShot(string animation)
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$IdleOneShot): clean
		AnimationHandler __this_00;
		float fVar1;

		this.CrossFade(animation, 0.1, 0.0);
		__this_00 = this.Animation;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar1 = __this_00.GetLength(animation);
		this._idleTimeLeft = fVar1;
		return;
	}

	[Token(Token = "0x60040D7")]
	[Address(RVA = "0x5AF1680", Offset = "0x5AF0680", VA = "0x5AF1680")]
	private void Update()
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$Update): 69 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		BaseComponentCache pUVar3;
		Transform pUVar4;
		Rigidbody pUVar5;
		bool bVar7;
		bool mounted;
		bool bVar8;
		GameObject targetGo;
		Human pCVar9;
		BaseCharacter target;
		HorseController pCVar10;
		int iVar11;
		ulong uVar12;
		float fVar13;
		float fVar14;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dc_03;
		uint extraout_XMM0_Dc_04;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		uint extraout_XMM0_Dd_03;
		uint extraout_XMM0_Dd_04;
		uint uVar15;
		uint uVar16;
		Quaternion UVar17;
		Vector3 UVar18;
		Vector3 velocity;
		System_Nullable_Vector3__o targetPosition;
		Quaternion UStack_b8;
		byte[] auStack_a8 = new byte[16];
		Quaternion UStack_98;
		byte[] auStack_88 = new byte[16];
		byte[] auStack_78 = new byte[16];
		ulong uStack_68;
		float fStack_58;
		float fStack_54;
		byte[] auStack_48 = new byte[16];

		bVar7 = this.IsMine();
		if (!bVar7) {
			return;
		}
		if (this.Dead != false) {
			return;
		}
		auStack_a8._0_4_ = this._jumpCooldownLeft;
		fVar13 = Time.deltaTime;
		this._jumpCooldownLeft = (float)auStack_a8._0_4_ - fVar13;
		if (this._DespawnWithAssignedHuman_k__BackingField != false) {
			pCVar9 = this._assignedHuman;
			bVar7 = ((Object)pCVar9 == null);
			if (bVar7) {
	label_05bf1770: ;
				targetGo = this.gameObject;
				PhotonNetwork.Destroy(targetGo);
				return;
			}
			pCVar9 = this._assignedHuman;
			if (pCVar9 == null) goto label_05bf1c06;
			if (pCVar9.Dead != false) goto label_05bf1770;
		}
		pCVar9 = this.Rider;
		pCVar10 = this._Controller_k__BackingField;
		if (pCVar10 == null) goto label_05bf1c06;
		target = Horse.ResolveCharacter(pCVar10._TargetViewId_k__BackingField);
		pUVar3 = this.Cache;
		if ((pUVar3 == null) ||(pUVar4 = pUVar3.Transform, pUVar4 == null)) goto label_05bf1c06;
		pCVar10 = this._Controller_k__BackingField;
		UVar18 = pUVar4.position;
		pUVar3 = this.Cache;
		if (pUVar3 == null) goto label_05bf1c06;
		auStack_78._0_4_ = UVar18.z;
		auStack_a8._8_4_ = extraout_XMM0_Dc;
		auStack_a8._0_8_ = UVar18._0_8_;
		auStack_a8._12_4_ = extraout_XMM0_Dd;
		pUVar5 = pUVar3.Rigidbody;
		if (pUVar5 == null) goto label_05bf1c06;
		UVar18 = pUVar5.linearVelocity;
		fStack_58 = UVar18.z;
		auStack_88._8_4_ = extraout_XMM0_Dc_00;
		auStack_88._0_8_ = UVar18._0_8_;
		auStack_88._12_4_ = extraout_XMM0_Dd_00;
		bVar7 = this.Grounded;
		uVar12._0_4_ = 0.0;
		uVar12._4_4_ = 0.0;
		auStack_48._0_8_ = pCVar9;
		mounted = ((Object)pCVar9 != null);
		bVar8 = ((Object)target != null);
		if (bVar8) {
			if (target == null) goto label_05bf1c06;
			if (target.Dead == false) {
				pUVar3 = target.Cache;
				if ((pUVar3 == null) ||(pUVar4 = pUVar3.Transform, pUVar4 == null)) goto label_05bf1c06;
				UVar18 = pUVar4.position;
				UStack_b8.x = 0.0;
				UStack_b8.y = 0.0;
				UStack_b8.z = 0.0;
				UStack_b8.w = 0.0;
				UStack_b8 = new Nullable<Vector3>(UVar18);
				fVar13 = UStack_b8.z;
				fVar14 = UStack_b8.w;
				uVar12 = UStack_b8._0_8_;
				goto label_05bf18f4;
			}
			uStack_68 = 0;
			uVar12._0_4_ = 0.0;
			uVar12._4_4_ = 0.0;
		}
		else {
			fVar13 = 0.0;
			fVar14 = 0.0;
	label_05bf18f4: ;
			uStack_68 = CONCAT44(fVar14, fVar13);
		}
		bVar8 = this._RecallEnabled_k__BackingField;
		fVar13 = Time.deltaTime;
		if (pCVar10 == null) goto label_05bf1c06;
		uVar15 = 0;
		uVar16 = 0;
		UVar18.z = (float)auStack_78._0_4_;
		UVar18.x = (float)auStack_a8._0_4_;
		UVar18.y = (float)auStack_a8._4_4_;
		velocity.z = fStack_58;
		velocity.x = (float)auStack_88._0_4_;
		velocity.y = (float)auStack_88._4_4_;
		targetPosition.value.y = (float)(undefined4)uStack_68;
		targetPosition.value.z = (float)uStack_68._4_4_;
		targetPosition._0_8_ = uVar12;
		pCVar10.Tick(UVar18, velocity, bVar7, mounted, targetPosition, bVar8, fVar13);
		uVar12 = auStack_48._0_8_;
		bVar7 = ((Object)auStack_48._0_8_ != null);
		if (bVar7) {
			if ((Object)uVar12 == null) goto label_05bf1c06;
			if (*(sbyte)((long)&((Object)(uVar12 + 0xd8)).klass + 4) == false) {
				this.State = 3;
			}
			else {
				pUVar3 = this.Cache;
				if ((pUVar3 == null) ||(pUVar5 = pUVar3.Rigidbody, pUVar5 == null)) goto label_05bf1c06;
				UVar17 = pUVar5.rotation;
				fVar13 = UVar17.z;
				fVar14 = UVar17.w;
				auStack_a8._8_4_ = extraout_XMM0_Dc_01;
				auStack_a8._0_8_ = UVar17._0_8_;
				auStack_a8._12_4_ = extraout_XMM0_Dd_01;
				auStack_78._8_4_ = uVar15;
				auStack_78._0_8_ = UVar17._8_8_;
				auStack_78._12_4_ = uVar16;
				auStack_88._0_8_ =(*(*(Object*)uVar12)[5]._1.interopData)(uVar12,(*(Object*)uVar12)[5]._1.klass);
				auStack_88._8_4_ = extraout_XMM0_Dc_02;
				auStack_88._12_4_ = extraout_XMM0_Dd_02;
				fStack_58 = fVar13;
				fStack_54 = fVar14;
				fVar13 = Time.deltaTime;
				UStack_b8._0_8_ = auStack_a8._0_8_;
				UStack_b8._8_8_ = auStack_78._0_8_;
				UStack_98._0_8_ = auStack_88._0_8_;
				UStack_98.z = fStack_58;
				UStack_98.w = fStack_54;
				UVar17 = Quaternion.Internal_Lerp(ref UStack_b8, ref UStack_98, fVar13 * 5.0);
				pUVar5.MoveRotation(UVar17);
				this.State = *(sbyte)((long)&(((Object)(uVar12 + 0x228)).fields).m_CachedPtr + 4) == false ^ 5;
			}
		}
		else {
			pCVar10 = this._Controller_k__BackingField;
			if (pCVar10 == null) goto label_05bf1c06;
			if (pCVar10._Moving_k__BackingField == false) {
				iVar11 = 0;
			}
			else {
				iVar11 = 2 - (uint)(pCVar10._Running_k__BackingField == false);
			}
			this.State = iVar11;
			uVar1 = pCVar10._Direction_k__BackingField.x;
			uVar2 = pCVar10._Direction_k__BackingField.y;
			fVar13 = pCVar10._Direction_k__BackingField.z;
			uVar15 = 0;
			uVar16 = 0;
			if (0.001 < fVar13 * fVar13 + (float)uVar2 * (float)uVar2 + (float)uVar1 * (float)uVar1) {
				pUVar3 = this.Cache;
				if ((pUVar3 == null) ||(pUVar5 = pUVar3.Rigidbody, pUVar5 == null)) {
	label_05bf1c06: ;
					throw new NullReferenceException();
				}
				UVar17 = pUVar5.rotation;
				pCVar10 = this._Controller_k__BackingField;
				if (pCVar10 == null) goto label_05bf1c06;
				auStack_78._8_4_ = uVar15;
				auStack_78._0_8_ = UVar17._8_8_;
				auStack_78._12_4_ = uVar16;
				auStack_a8._8_4_ = extraout_XMM0_Dc_03;
				auStack_a8._0_8_ = UVar17._0_8_;
				auStack_a8._12_4_ = extraout_XMM0_Dd_03;
				UStack_b8.x = pCVar10._Direction_k__BackingField.x;
				UStack_b8.y = pCVar10._Direction_k__BackingField.y;
				UStack_b8.z = pCVar10._Direction_k__BackingField.z;
				UStack_98.x = (Vector3.upVector).x;
				UStack_98.y = (Vector3.upVector).y;
				UStack_98.z = (Vector3.upVector).z;
				uVar15 = 0;
				uVar16 = 0;
				UVar17 = Quaternion.Internal_LookRotation(ref UStack_b8, ref UStack_98);
				auStack_48._8_4_ = extraout_XMM0_Dc_04;
				auStack_48._0_8_ = UVar17._0_8_;
				auStack_48._12_4_ = extraout_XMM0_Dd_04;
				auStack_88._8_4_ = uVar15;
				auStack_88._0_8_ = UVar17._8_8_;
				auStack_88._12_4_ = uVar16;
				fVar13 = Time.deltaTime;
				UStack_b8._0_8_ = auStack_a8._0_8_;
				UStack_b8._8_8_ = auStack_78._0_8_;
				UStack_98.z = auStack_88._0_4_;
				UStack_98.w = auStack_88._4_4_;
				UStack_98._0_8_ = auStack_48._0_8_;
				UVar17 = Quaternion.Internal_Lerp(ref UStack_b8, ref UStack_98, fVar13 * 10.0);
				pUVar5.MoveRotation(UVar17);
				pCVar10 = this._Controller_k__BackingField;
				if (pCVar10 == null) goto label_05bf1c06;
			}
			if (pCVar10._WantsRecall_k__BackingField != false) {
				bVar7 = ((Object)target != null);
				if (bVar7) {
					this.RecallTo(target);
				}
			}
		}
		return;
	}

	[Token(Token = "0x60040D8")]
	[Address(RVA = "0x5AF1C10", Offset = "0x5AF0C10", VA = "0x5AF1C10", Slot = "113")]
	protected override void FixedUpdate()
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$FixedUpdate): 202 lines keep C-only constructs
		float pfVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar7;
		uint uVar8;
		ulong uVar6;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		int iVar13;
		Rigidbody pUVar14;
		Component __this_00;
		byte[] auVar16 = new byte[16];
		byte[] auVar17 = new byte[16];
		bool bVar18;
		BaseComponentCache pUVar19;
		UnityEngine_Vector3_StaticFields pUVar20;
		Transform pUVar21;
		int mode;
		Rigidbody pUVar23;
		float fVar24;
		float fVar25;
		byte[] auVar26 = new byte[4];
		uint extraout_XMM0_Db;
		uint uVar28;
		ulong uVar27;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		float extraout_XMM0_Dc_03;
		float extraout_XMM0_Dc_04;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		float extraout_XMM0_Dd_03;
		float extraout_XMM0_Dd_04;
		ulong extraout_XMM1_Qa;
		float fVar36;
		ulong extraout_XMM1_Qb;
		byte[] auVar29 = new byte[16];
		byte[] auVar30 = new byte[16];
		byte[] auVar31 = new byte[16];
		byte[] auVar32 = new byte[16];
		ulong extraout_XMM1_Qa_00;
		ulong extraout_XMM1_Qa_01;
		ulong extraout_XMM1_Qb_00;
		ulong extraout_XMM1_Qb_01;
		byte[] auVar33 = new byte[16];
		byte[] auVar34 = new byte[16];
		byte[] auVar35 = new byte[16];
		float fVar37;
		float fVar38;
		float fVar39;
		float fVar40;
		Quaternion UVar41;
		Quaternion UVar42;
		Vector3 UVar43;
		Vector3 value;
		Vector3 force;
		Quaternion UStack_a8;
		byte[] auStack_98 = new byte[8];
		float fStack_90;
		float fStack_8c;
		ulong uStack_88;
		byte[] auStack_78 = new byte[4];
		byte[] auStack_74 = new byte[8];
		float fStack_6c;
		float fStack_5c;
		Quaternion UStack_58;
		float fStack_48;
		float fStack_44;
		Vector3 UStack_40;
		Quaternion UStack_30;

		uStack_88 = 0;
		this.FixedUpdate();
		bVar18 = this.IsMine();
		if (!bVar18) {
			return;
		}
		if (this.Dead != false) {
			return;
		}
		this.CheckGround();
		auVar29._8_8_ = extraout_XMM1_Qb;
		auVar29._0_8_ = extraout_XMM1_Qa;
		pUVar19 = this.Cache;
		if ((pUVar19 == null) ||(pUVar23 = pUVar19.Rigidbody, pUVar23 == null)) goto label_05bf27f4;
		pUVar23.angularDamping = 6.0;
		if (this.Grounded == false) goto label_05bf2454;
		uVar11 = this.State;
		if (uVar11 == 3) {
			pUVar19 = this.Cache;
			if ((pUVar19 == null) ||(pUVar23 = pUVar19.Rigidbody, pUVar23 == null)) goto label_05bf27f4;
			UVar43 = pUVar23.linearVelocity;
			auStack_98._0_4_ = UVar43.z;
			UStack_a8.z = (float)extraout_XMM0_Dc;
			UStack_a8._0_8_ = UVar43._0_8_;
			UStack_a8.w = (float)extraout_XMM0_Dd;
	label_05bf1ce9: ;
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar12 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar12 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar12 == 0) {
			}
			uVar6._0_4_ = (float)auStack_98._0_4_ * (float)auStack_98._0_4_ + UStack_a8.y * UStack_a8.y + UStack_a8.x * UStack_a8.x;
			fStack_48 = (float)uVar6;
			if ((float)uVar6 < 0.0) {
				uVar6._0_4_ = sqrtf((float)uVar6);
			}
			else {
				uVar6._0_4_ = SQRT((float)uVar6);
			}
			auStack_78 = (byte[])0x3f800000;
			if ((float)uVar6 < 1.0) {
				pUVar19 = this.Cache;
				if (pUVar19 == null) goto label_05bf27f4;
				pUVar23 = pUVar19.Rigidbody;
				if (Il2CppMethodInitialized_0753e72c == false) {
					Il2CppMethodInitialized_0753e72c = true;
					pUVar19 = this.Cache;
					if (pUVar19 == null) goto label_05bf27f4;
				}
				pUVar14 = pUVar19.Rigidbody;
				if (pUVar14 == null) goto label_05bf27f4;
				pUVar20 = typeof(Vector3).static_fields;
				uVar2 = (pUVar20.upVector).x;
				uVar7 = (pUVar20.upVector).y;
				uVar6._0_4_ = (pUVar20.upVector).z;
				UVar43 = pUVar14.linearVelocity;
				uVar6._4_4_ = UVar43.y;
				if (pUVar23 == null) goto label_05bf27f4;
				value.z = (float)uVar6 * uVar6._4_4_;
				value.y = (float)uVar7 * uVar6._4_4_;
				value.x = (float)uVar2 * uVar6._4_4_;
				auVar29 = ZEXT816(0);
				pUVar23.linearVelocity = value;
				goto label_05bf2454;
			}
			if (fStack_48 < 0.0) {
				fStack_5c = sqrtf(fStack_48);
			}
			else {
				fStack_5c = SQRT(fStack_48);
			}
			if (uVar11 == 3) {
				auStack_78 = (byte[])0x3f000000;
			}
			else {
				uVar6._0_4_ = Time.fixedDeltaTime;
				auStack_78 = (byte[])((float)auStack_78 / (float)uVar6);
			}
			pUVar19 = this.Cache;
			if (pUVar19 == null) goto label_05bf27f4;
			pUVar23 = pUVar19.Rigidbody;
			if (Il2CppMethodInitialized_0753e72d == false) {
				Il2CppMethodInitialized_0753e72d = true;
				UStack_58.x = 0.0;
				UStack_58.y = 0.0;
				if (Il2CppMethodInitialized_0753e729 != false) goto label_05bf1f5a;
	label_05bf237c: ;
				UStack_58.x = 0.0;
				UStack_58.y = 0.0;
				Il2CppMethodInitialized_0753e729 = true;
				uVar12 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				UStack_58.x = 0.0;
				UStack_58.y = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) goto label_05bf237c;
	label_05bf1f5a: ;
				UStack_58.x = 0.0;
				UStack_58.y = 0.0;
				uVar12 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar12 == 0) {
			}
			uVar28 = 0;
			if (fStack_48 < 0.0) {
				uVar6._0_4_ = sqrtf(fStack_48);
				uVar28 = extraout_XMM0_Db;
			}
			else {
				uVar6._0_4_ = SQRT(fStack_48);
			}
			if ((float)uVar6 <= 1e-05) {
				pUVar20 = typeof(Vector3).static_fields;
			}
			else {
				auStack_98._0_4_ = (float)auStack_98._0_4_ / (float)uVar6;
				auVar16._4_4_ = (float)uVar6;
				auVar16._0_4_ = (float)uVar6;
				auVar16._8_4_ = uVar28;
				auVar16._12_4_ = uVar28;
				auVar29 = divps((byte[])UStack_a8, auVar16);
				UStack_58.x = auVar29._0_4_;
				UStack_58.y = auVar29._4_4_;
				pUVar20 = (UnityEngine_Vector3_StaticFields)&UStack_58;
			}
			uVar3 = (pUVar20.zeroVector).x;
			uVar8 = (pUVar20.zeroVector).y;
			uVar6._4_4_ = this.RunSpeed;
			if (pUVar23 == null) goto label_05bf27f4;
			auVar30._0_8_ = auStack_98 ^ 0x8000000080000000;
			auVar30._8_4_ = (uint)fStack_90 ^ 0x80000000;
			auVar30._12_4_ = (uint)fStack_8c ^ 0x80000000;
			if (fStack_5c * (float)auStack_78 <= uVar6._4_4_) {
				uVar6._4_4_ = fStack_5c * (float)auStack_78;
			}
			auVar31._4_12_ = auVar30._4_12_;
			auVar31._0_4_ = -(float)auStack_98._0_4_ * uVar6._4_4_;
			fVar24 = uVar6._4_4_ * -(float)uVar3;
			uVar6._4_4_ = uVar6._4_4_ * -(float)uVar8;
			mode = 5;
	label_05bf244d: ;
			force.y = uVar6._4_4_;
			force.x = fVar24;
			force.z = auVar31._0_4_;
			auVar17._12_4_ = 0;
			auVar17._0_12_ = auVar31._4_12_;
			auVar29 = auVar17 << 0x20;
			pUVar23.AddForce(force, mode);
		}
		else if (uVar11 < 6) {
			if ((0x36U >> (uVar11 & 0x1f) & 1) != 0) {
				uVar6._0_4_ = this.RunSpeed;
				iVar13 = this.State;
				if (iVar13 == 1) {
					uVar6._4_4_ = this.RunCloseSpeed;
					if (uVar6._4_4_ <= (float)uVar6) {
						uVar6._0_4_ = uVar6._4_4_;
					}
				}
				else if ((iVar13 == 5) && (uVar6._4_4_ = this.WalkSpeed, uVar6._4_4_ <= (float)uVar6)) {
					uVar6._0_4_ = uVar6._4_4_;
				}
				pUVar19 = this.Cache;
				if ((pUVar19 == null) ||(pUVar21 = pUVar19.Transform, pUVar21 == null)) goto label_05bf27f4;
				pUVar23 = pUVar19.Rigidbody;
				UVar43 = pUVar21.forward;
				auStack_74._4_4_ = extraout_XMM0_Dc_01;
				fStack_6c = (float)extraout_XMM0_Dd_01;
				uVar6._4_4_ = this.RunSpeed;
				if (pUVar23 == null) goto label_05bf27f4;
				UVar43.z = UVar43.z * uVar6._4_4_;
				UVar43.x = uVar6._4_4_ * (float)auStack_78;
				UVar43.y = uVar6._4_4_ * (float)auStack_74._0_4_;
				auVar29 = ZEXT816(0);
				pUVar23.AddForce(UVar43, 5);
				pUVar19 = this.Cache;
				if ((pUVar19 == null) ||(pUVar23 = pUVar19.Rigidbody, pUVar23 == null)) goto label_05bf27f4;
				UVar43 = pUVar23.linearVelocity;
				auVar32._4_12_ = auVar29._4_12_;
				auVar32._0_4_ = UVar43.z;
				uStack_88 = UVar43._0_8_;
				auVar26 = (byte[])UVar43.x;
				uVar6._4_4_ = UVar43.y;
				uVar28 = extraout_XMM0_Dc_02;
				fVar24 = (float)extraout_XMM0_Dd_02;
				if (Il2CppMethodInitialized_0753e729 == false) {
					auStack_74._4_4_ = extraout_XMM0_Dc_02;
					fStack_6c = (float)extraout_XMM0_Dd_02;
					auVar32 = ZEXT416((uint)auVar32._0_4_);
					Il2CppMethodInitialized_0753e729 = true;
					auVar26 = auStack_78;
					uVar6._4_4_ = (float)auStack_74._0_4_;
					uVar28 = auStack_74._4_4_;
					fVar24 = fStack_6c;
				}
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
					auStack_74._0_4_ = uVar6._4_4_;
					auStack_78 = auVar26;
					auStack_74._4_4_ = uVar28;
					fStack_6c = fVar24;
					auVar32 = ZEXT416(auVar32._0_4_);
					auVar26 = auStack_78;
					uVar6._4_4_ = (float)auStack_74._0_4_;
				}
				auVar29._4_12_ = auVar32._4_12_;
				auVar29._0_4_ = auVar32._0_4_ * auVar32._0_4_ + uVar6._4_4_ * uVar6._4_4_ + (float)auVar26 * (float)auVar26;
				if (auVar29._0_4_ < 0.0) {
					uVar6._4_4_ = sqrtf(auVar29._0_4_);
				}
				else {
					uVar6._4_4_ = SQRT(auVar29._0_4_);
				}
				if (uVar6._4_4_ < (float)uVar6) goto label_05bf2454;
				pUVar19 = this.Cache;
				if ((pUVar19 == null) ||(pUVar23 = pUVar19.Rigidbody, pUVar23 == null)) goto label_05bf27f4;
				pUVar23.angularDamping = 1.0;
				uVar6._4_4_ = this.RunSpeed;
				pUVar19 = this.Cache;
				if (((float)uVar6 != uVar6._4_4_) || (NAN((float)uVar6) || NAN(uVar6._4_4_))) {
					if ((pUVar19 == null) ||(pUVar23 = pUVar19.Rigidbody, pUVar23 == null)) goto label_05bf27f4;
					UVar43 = pUVar23.linearVelocity;
					uStack_88 = UVar43._0_8_;
					uVar6._4_4_ = (float)il2cpp_runtime_helper_0599adc0(&uStack_88);
					pUVar19 = this.Cache;
					if ((pUVar19 == null) ||(pUVar14 = pUVar19.Rigidbody, pUVar14 == null)) goto label_05bf27f4;
					uVar6._0_4_ = (float)uVar6 - uVar6._4_4_;
					if ((float)uVar6 <= -1.0) {
						uVar6._0_4_ = -1.0;
					}
					UVar43 = pUVar14.linearVelocity;
					uStack_88 = UVar43._0_8_;
					uVar27 = il2cpp_runtime_helper_059d80e0(&uStack_88, 0);
					auVar33._8_8_ = extraout_XMM1_Qb_01;
					auVar33._0_8_ = extraout_XMM1_Qa_01;
				}
				else {
					if ((pUVar19 == null) ||(pUVar23 = pUVar19.Rigidbody, pUVar23 == null)) goto label_05bf27f4;
					UVar43 = pUVar23.linearVelocity;
					uStack_88 = UVar43._0_8_;
					uVar6._4_4_ = (float)il2cpp_runtime_helper_0599adc0(&uStack_88);
					pUVar19 = this.Cache;
					if ((pUVar19 == null) ||(pUVar14 = pUVar19.Rigidbody, pUVar14 == null)) goto label_05bf27f4;
					UVar43 = pUVar14.linearVelocity;
					uStack_88 = UVar43._0_8_;
					uVar27 = il2cpp_runtime_helper_059d80e0(&uStack_88, 0);
					auVar33._8_8_ = extraout_XMM1_Qb_00;
					auVar33._0_8_ = extraout_XMM1_Qa_00;
					uVar6._0_4_ = (float)uVar6 - uVar6._4_4_;
				}
				fVar24 = (float)uVar27 * (float)uVar6;
				uVar6._4_4_ = (float)((ulong)uVar27 >> 0x20) * (float)uVar6;
				auVar31._4_12_ = auVar33._4_12_;
				auVar31._0_4_ = auVar33._0_4_ * (float)uVar6;
				mode = 2;
				goto label_05bf244d;
			}
			if (uVar11 == 0) {
				pUVar19 = this.Cache;
				if ((pUVar19 == null) ||(pUVar23 = pUVar19.Rigidbody, pUVar23 == null)) goto label_05bf27f4;
				UVar43 = pUVar23.linearVelocity;
				auStack_98._0_4_ = UVar43.z;
				UStack_a8.z = extraout_XMM0_Dc_00;
				UStack_a8._0_8_ = UVar43._0_8_;
				UStack_a8.w = extraout_XMM0_Dd_00;
				pUVar20 = typeof(Vector3).static_fields;
				uVar6._0_4_ = (pUVar20.upVector).x;
				uVar6._4_4_ = (pUVar20.upVector).y;
				auVar26 = (byte[])(pUVar20.upVector).z;
				fVar24 = 0.0;
				fVar36 = 0.0;
				if (g_data_07545e2d == false) {
					auStack_78 = auVar26;
					UStack_40.x = 0.0;
					UStack_40.y = 0.0;
					g_data_07545e2d = true;
					auVar26 = auStack_78;
					uVar6._0_4_ = fStack_48;
					uVar6._4_4_ = fStack_44;
					fVar24 = UStack_40.x;
					fVar36 = UStack_40.y;
				}
				fVar25 = (float)auVar26 * (float)auVar26 + uVar6._4_4_ * uVar6._4_4_ + (float)uVar6 * (float)uVar6;
				if (Mathf.Epsilon <= fVar25) {
					UStack_a8.x = UVar43.x;
					UStack_a8.y = UVar43.y;
					auStack_98._4_4_ = auVar29._4_4_;
					fStack_90 = auVar29._8_4_;
					fStack_8c = auVar29._12_4_;
					fVar25 = ((float)auStack_98._0_4_ * (float)auVar26 + UStack_a8.y * uVar6._4_4_ + UStack_a8.x * (float)uVar6) / fVar25;
					UStack_a8.y = UStack_a8.y - fVar25 * uVar6._4_4_;
					UStack_a8.x = UStack_a8.x - fVar25 * (float)uVar6;
					UStack_a8.z = extraout_XMM0_Dc_00 - fVar25 * fVar24;
					UStack_a8.w = extraout_XMM0_Dd_00 - fVar25 * fVar36;
					auStack_98._0_4_ = (float)auStack_98._0_4_ - (float)auVar26 * fVar25;
				}
				goto label_05bf1ce9;
			}
		}
	label_05bf2454: ;
		pUVar19 = this.Cache;
		if ((pUVar19 != null) &&(__this_00 = (Component)pUVar19.Rigidbody, __this_00 != null)) {
			pUVar20 = typeof(Vector3).static_fields;
			uVar27._0_4_ = (pUVar20.upVector).x;
			uVar27._4_4_ = (pUVar20.upVector).y;
			uVar6._0_4_ = (pUVar20.upVector).z;
			pUVar21 = __this_00.transform;
			if (pUVar21 != null) {
				UVar43 = pUVar21.up;
				auVar34._12_4_ = 0;
				auVar34._0_12_ = auVar29._4_12_;
				auVar34 = auVar34 << 0x20;
				UStack_58.z = (float)uVar6;
				UStack_30.x = UVar43.x;
				UStack_30.y = UVar43.y;
				UStack_30.z = UVar43.z;
				UStack_58._0_8_ = uVar27;
				UVar41 = Quaternion.Internal_FromToRotation(ref UStack_58, ref UStack_30);
				UVar41._8_8_ = UVar41._8_8_;
				uVar4 = (Quaternion.identityQuaternion).x;
				uVar9 = (Quaternion.identityQuaternion).y;
				uVar5 = (Quaternion.identityQuaternion).z;
				uVar10 = (Quaternion.identityQuaternion).w;
				uVar6._0_4_ = ABS((float)uVar10 * UVar41.w +(float)uVar9 * UVar41.y + (float)uVar4 * UVar41.x +(float)uVar5 * UVar41.z);
				if (1.0 <= (float)uVar6) {
					uVar6._0_4_ = 1.0;
				}
				uVar6._4_4_ = 0.0;
				if ((float)uVar6 <= 0.999999) {
					uVar6._0_4_ = acosf((float)uVar6);
					uVar6._4_4_ = ((float)uVar6 + (float)uVar6) * 57.29578;
				}
				pfVar1 = &this.MaxTilt;
				if (*pfVar1 <= uVar6._4_4_ && uVar6._4_4_ != *pfVar1) {
					UStack_58._0_8_ = UVar41._0_8_;
					UStack_58._8_8_ = UVar41._8_8_;
					UVar41 = Quaternion.Internal_Inverse(ref UStack_58);
					auVar35._8_8_ = UVar41._16_8_;
					auVar35._0_8_ = UVar41._8_8_;
					pUVar19 = this.Cache;
					if ((pUVar19 == null) ||(pUVar23 = pUVar19.Rigidbody, pUVar23 == null)) goto label_05bf27f4;
					UVar42 = pUVar23.rotation;
					uVar6._0_4_ = UVar42.x;
					uVar6._4_4_ = UVar42.y;
					pUVar19 = this.Cache;
					if ((pUVar19 == null) ||(pUVar23 = pUVar19.Rigidbody, pUVar23 == null)) goto label_05bf27f4;
					UStack_a8.x = UVar41.x;
					UStack_a8.y = UVar41.y;
					fVar24 = UVar42.z;
					fVar36 = UVar42.w;
					fVar25 = auVar35._8_4_;
					fVar37 = auVar35._12_4_;
					auStack_98._0_4_ = UVar41.z;
					auStack_98._4_4_ = UVar41.w;
					fStack_90 = UVar41._16_4_;
					fStack_8c = UVar41._20_4_;
					fVar39 = (float)auStack_98._4_4_ * uVar6._4_4_ + UStack_a8.y * fVar36;
					fVar38 = (fVar39 + (float)auStack_98._0_4_ * (float)uVar6) - UStack_a8.x * fVar24;
					auStack_74._0_4_ = (fVar39 + (float)auStack_98._4_4_ * uVar6._4_4_) - UStack_a8.y * fVar36;
					auStack_78 = (byte[])fVar38;
					auStack_74._4_4_ = (fVar39 + fStack_90 * extraout_XMM0_Dc_04) - extraout_XMM0_Dc_03 * fVar25;
					fStack_6c = (fVar39 + fStack_8c * extraout_XMM0_Dd_04) - extraout_XMM0_Dd_03 * fVar37;
					fVar39 = (uVar6._4_4_ * UStack_a8.x + fVar36 * (float)auStack_98._0_4_ + (float)auStack_98._4_4_ * fVar24) - UStack_a8.y * (float)uVar6;
					fVar40 = (fVar24 * UStack_a8.y + (float)uVar6 * (float)auStack_98._4_4_ + UStack_a8.x * fVar36) -(float)auStack_98._0_4_ * uVar6._4_4_;
					fStack_44 = fVar40;
					fStack_48 = fVar39;
					UStack_40.y = (extraout_XMM0_Dd_04 * extraout_XMM0_Dd_03 + fVar37 * fStack_8c + fStack_8c * fVar37) - extraout_XMM0_Dd_03 * extraout_XMM0_Dd_04;
					UStack_40.x = (extraout_XMM0_Dc_04 * extraout_XMM0_Dc_03 + fVar25 * fStack_90 + fStack_90 * fVar25) - extraout_XMM0_Dc_03 * extraout_XMM0_Dc_04;
					uVar6._4_4_ = (((float)auStack_98._4_4_ * fVar36 - UStack_a8.x * (float)uVar6) - UStack_a8.y * uVar6._4_4_) - (float)auStack_98._0_4_ * fVar24;
					UStack_30 = pUVar23.rotation;
					uVar27 = UStack_30._8_8_;
					uVar6._0_4_ = UStack_30.x;
					fVar24 = UStack_30.y;
					UStack_58.x = fVar40;
					UStack_58.y = fVar38;
					UStack_58.z = fVar39;
					UStack_58.w = uVar6._4_4_;
					uVar6._4_4_ = ABS(UStack_30.w * uVar6._4_4_ +(float)uVar6 * fStack_44 + fVar24 * (float)auStack_78 + UStack_30.z * fStack_48);
					if (1.0 <= uVar6._4_4_) {
						uVar6._4_4_ = 1.0;
					}
					if (uVar6._4_4_ <= 0.999999) {
						auStack_78 = (byte[])this.MaxTilt;
						uVar6._4_4_ = acosf(uVar6._4_4_);
						uVar6._4_4_ = (uVar6._4_4_ + uVar6._4_4_) * 57.29578;
						if ((uVar6._4_4_ != 0.0) || (NAN(uVar6._4_4_))) {
							uVar6._0_4_ = 1.0;
							if ((float)auStack_78 / uVar6._4_4_ <= 1.0) {
								uVar6._0_4_ = (float)auStack_78 / uVar6._4_4_;
							}
							UVar41 = Quaternion.Internal_SlerpUnclamped(ref UStack_58, ref UStack_30, (float)uVar6);
							uVar27 = UVar41._8_8_;
							uVar6._0_4_ = UVar41.x;
							fVar24 = UVar41.y;
						}
					}
					pUVar19 = this.Cache;
					if ((pUVar19 == null) ||(pUVar23 = pUVar19.Rigidbody, pUVar23 == null)) goto label_05bf27f4;
					UVar41.y = fVar24;
					UVar41.x = (float)uVar6;
					UVar41.z = (float)(int)uVar27;
					UVar41.w = (float)(int)((ulong)uVar27 >> 0x20);
					pUVar23.MoveRotation(UVar41);
				}
				pUVar19 = this.Cache;
				if (pUVar19 != null) {
					pUVar23 = pUVar19.Rigidbody;
					UVar43 = this.get_Gravity();
					if (pUVar23 != null) {
						pUVar23.AddForce(UVar43, 5);
						return;
					}
				}
			}
		}
	label_05bf27f4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60040D9")]
	[Address(RVA = "0x5AF2800", Offset = "0x5AF1800", VA = "0x5AF2800", Slot = "114")]
	protected override void LateUpdate()
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$LateUpdate): clean
		uint uVar1;
		BaseComponentCache pUVar2;
		Rigidbody pUVar3;
		AnimationHandler __this_00;
		HorseComponentCache pCVar4;
		SoundSettings pSVar5;
		BoolSetting pSVar6;
		bool bVar7;
		bool bVar8;
		Human __this_01;
		String pSVar10;
		ParticleSystem system;
		float fVar11;
		Vector3 UVar12;

		this.LateUpdate();
		bVar7 = this.IsMine();
		if (bVar7) {
			if (this.Dead != false) {
				return;
			}
			__this_01 = this.Rider;
			bVar7 = false;
			bVar8 = ((Object)__this_01 != null);
			if (bVar8) {
				if (__this_01 == null) goto label_05bf2da0;
				bVar7 = __this_01._state != 0;
			}
			pUVar2 = this.Cache;
			if ((pUVar2 == null) ||(pUVar3 = pUVar2.Rigidbody, pUVar3 == null)) goto label_05bf2da0;
			UVar12 = pUVar3.linearVelocity;
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			fVar11 = UVar12.z * UVar12.z + UVar12.y * UVar12.y + UVar12.x * UVar12.x;
			if (fVar11 < 0.0) {
				fVar11 = sqrtf(fVar11);
				if (fVar11 <= 8.0) goto label_05bf2971;
	label_05bf2ab9: ;
				this.CrossFadeIfNotPlaying(HorseAnimations.Run, 0.1, 0.0);
				bVar8 = ((Object)__this_01 != null);
				if ((!bVar7) && (bVar8)) {
					if (__this_01 == null) goto label_05bf2da0;
					pSVar10 = HumanAnimations.HorseRun;
	label_05bf2c5d: ;
					__this_01.CrossFadeIfNotPlaying(pSVar10, 0.1, 0.0);
				}
			}
			else {
				if (8.0 < SQRT(fVar11)) goto label_05bf2ab9;
	label_05bf2971: ;
				pUVar2 = this.Cache;
				if ((pUVar2 == null) ||(pUVar3 = pUVar2.Rigidbody, pUVar3 == null)) goto label_05bf2da0;
				UVar12 = pUVar3.linearVelocity;
				fVar11 = UVar12.z * UVar12.z + UVar12.y * UVar12.y + UVar12.x * UVar12.x;
				if (fVar11 < 0.0) {
					fVar11 = sqrtf(fVar11);
				}
				else {
					fVar11 = SQRT(fVar11);
				}
				if (fVar11 <= 1.0) {
					this.UpdateIdle();
					bVar8 = ((Object)__this_01 != null);
					if ((!bVar7) && (bVar8)) {
						if (__this_01 == null) goto label_05bf2da0;
						__this_01.CrossFadeIfNotPlaying(HumanAnimations.HorseIdle, 0.1, 0.0);
					}
					goto label_05bf2c7d;
				}
				if (((typeof(HorseAnimations))._2).cctor_finished_or_no_cctor == 0) {
				}
				this.CrossFadeIfNotPlaying(HorseAnimations.Walk, 0.1, 0.0);
				bVar8 = ((Object)__this_01 != null);
				if ((!bVar7) && (bVar8)) {
					if (__this_01 == null) goto label_05bf2da0;
					pSVar10 = HumanAnimations.HorseIdle;
					goto label_05bf2c5d;
				}
			}
			this._idleTimeLeft = 0.0;
		}
	label_05bf2c7d: ;
		__this_00 = this.Animation;
		if (__this_00 == null) goto label_05bf2da0;
		bVar7 = __this_00.IsPlaying(HorseAnimations.Run);
		pCVar4 = this.HorseCache;
		if (bVar7) {
			if (pCVar4 == null) goto label_05bf2da0;
			system = pCVar4.Dust;
			if (this.Grounded == false) goto label_05bf2cf9;
			bVar8 = this.EffectsEnabled != false;
			bVar7 = true;
		}
		else {
			if (pCVar4 == null) goto label_05bf2da0;
			system = pCVar4.Dust;
	label_05bf2cf9: ;
			bVar7 = false;
			bVar8 = false;
		}
		this.ToggleParticles(system, bVar8);
		if ((typeof(HorseSounds)._2).cctor_finished_or_no_cctor == 0) {
			pSVar10 = HorseSounds.Run;
		}
		else {
			pSVar10 = HorseSounds.Run;
		}
		if (bVar7) {
			pSVar5 = SettingsManager.SoundSettings;
			if ((pSVar5 == null) ||(pSVar6 = pSVar5.HorseSoundEffect, pSVar6 == null)) {
	label_05bf2da0: ;
				throw new NullReferenceException();
			}
			bVar7 = pSVar6._value != false;
		}
		else {
			bVar7 = false;
		}
		this.ToggleSoundLocal(pSVar10, bVar7);
		return;
	}

	[Token(Token = "0x60040DA")]
	[Address(RVA = "0x5AF2DB0", Offset = "0x5AF1DB0", VA = "0x5AF2DB0", Slot = "107")]
	protected override void CheckGround()
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$CheckGround): 15 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		BaseComponentCache pUVar3;
		Transform __this_00;
		bool bVar4;
		int layerMask;
		UnityEngine_Vector3_StaticFields pUVar5;
		bool bVar6;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dd;
		float fVar7;
		float fVar8;
		float fVar9;
		Vector3 UVar10;
		Vector3 direction;
		LayerMask[] aUStack_80 = new LayerMask[2];
		byte[] auStack_78 = new byte[8];
		float fStack_70;
		float fStack_6c;
		float fStack_68;
		float fStack_64;
		float fStack_60;
		float fStack_5c;
		ulong uStack_58;
		RaycastHit UStack_48;

		UStack_48.m_UV.x = 0.0;
		UStack_48.m_UV.y = 0.0;
		UStack_48.m_Collider.m_Data = (EntityId)0x0;
		UStack_48.m_Normal.y = 0.0;
		UStack_48.m_Normal.z = 0.0;
		UStack_48.m_FaceID = 0;
		UStack_48.m_Distance = 0.0;
		UStack_48.m_Point.x = 0.0;
		UStack_48.m_Point.y = 0.0;
		UStack_48.m_Point.z = 0.0;
		UStack_48.m_Normal.x = 0.0;
		this.JustGrounded = false;
		pUVar3 = this.Cache;
		if ((pUVar3 == null) ||(__this_00 = pUVar3.Transform, __this_00 == null)) {
			throw new NullReferenceException();
		}
		UVar10 = __this_00.position;
		auStack_78._0_4_ = UVar10.x;
		auStack_78._4_4_ = UVar10.y;
		fStack_70 = extraout_XMM0_Dc;
		fStack_6c = extraout_XMM0_Dd;
		if (Il2CppMethodInitialized_0753e72c == false) {
			auStack_78 = (byte[])UVar10._0_8_;
			Il2CppMethodInitialized_0753e72c = true;
		}
		pUVar5 = typeof(Vector3).static_fields;
		uVar1 = (pUVar5.upVector).x;
		uVar2 = (pUVar5.upVector).y;
		uStack_58._0_4_ = (pUVar5.upVector).z * 0.8;
		fStack_68 = (float)uVar1 * 0.8;
		fVar7 = (float)uVar2 * 0.8;
		fVar8 = 0.0;
		fVar9 = 0.0;
		if (Il2CppMethodInitialized_075450a5 == false) {
			fStack_64 = (float)uVar2 * 0.8;
			fStack_60 = 0.0;
			fStack_5c = 0.0;
			Il2CppMethodInitialized_075450a5 = true;
			pUVar5 = typeof(Vector3).static_fields;
			fVar7 = fStack_64;
			fVar8 = fStack_60;
			fVar9 = fStack_5c;
		}
		auStack_78._4_4_ = (float)auStack_78._4_4_ + fVar7;
		auStack_78._0_4_ = (float)auStack_78._0_4_ + fStack_68;
		fStack_70 = fStack_70 + fVar8;
		fStack_6c = fStack_6c + fVar9;
		UVar10.z = UVar10.z + (float)uStack_58;
		uStack_58._0_4_ = (pUVar5.downVector).x;
		uStack_58._4_4_ = (pUVar5.downVector).y;
		fStack_68 = (pUVar5.downVector).z;
		aUStack_80[0] =this.get_GroundMask();
		layerMask = aUStack_80.value;
		bVar6 = false;
		UVar10.x = (float)auStack_78._0_4_;
		UVar10.y = (float)auStack_78._4_4_;
		direction.z = fStack_68;
		direction.x = (float)uStack_58;
		direction.y = (float)uStack_58._4_4_;
		bVar4 = Physics.SphereCast(UVar10, 0.6, direction, ref UStack_48, 0.8, layerMask);
		if (bVar4) {
			if (this.Grounded != false) {
				return;
			}
			this.JustGrounded = true;
			bVar6 = true;
		}
		this.Grounded = bVar6;
		return;
	}

	[Token(Token = "0x60040DB")]
	[Address(RVA = "0x5AF2F90", Offset = "0x5AF1F90", VA = "0x5AF2F90")]
	public Horse()
	{
		// Lifted from source/cpp/Characters/Horse.c (Characters.Horse$$.ctor): clean
		HorseController __this_00;

		__this_00 = new HorseController();
		this._Controller_k__BackingField = __this_00;
		this._DespawnWithAssignedHuman_k__BackingField = true;
		this._RecallEnabled_k__BackingField = true;
		this.WalkSpeed = 15.0;
		this.RunCloseSpeed = 20.0;
		this.JumpForce = 30.0;
		this.MaxTilt = 45.0;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/Horse.c.

	// Characters.Horse$$<>n__0: clean
	private IEnumerator n__0()
	{
		IEnumerator pSVar1;

		return pSVar1;
	}
}
