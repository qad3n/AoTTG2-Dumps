// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ErenShifter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ErenShifter.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Eren/ErenShifter.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using CustomSkins;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x20006FC")]
internal class ErenShifter : BaseShifter
{
	[Token(Token = "0x40020F7")]
	[FieldOffset(Offset = "0x2D8")]
	protected ErenComponentCache ErenCache;

	[Token(Token = "0x40020F8")]
	[FieldOffset(Offset = "0x2E0")]
	protected ErenAnimations ErenAnimations;

	[Token(Token = "0x40020F9")]
	[FieldOffset(Offset = "0x2E8")]
	protected int _stepSoundPhase;

	[Token(Token = "0x17000BAB")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x6004385")]
		[Address(RVA = "0x5B19000", Offset = "0x5B18000", VA = "0x5B19000", Slot = "59")]
		get
		{
			// Lifted from source/cpp/Characters/ErenShifter.c (Characters.ErenShifter$$get_EmoteActions): 4 lines keep C-only constructs
			int piVar1;
			uint uVar2;
			String[] pSVar3;
			String pSVar5;
			List<string> __this_00;

			__this_00 = new List<string>();
			pSVar5 = "Nod";
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pSVar3 = __this_00._items;
				if (pSVar3 != null) {
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pSVar3.Length) {
						__this_00._size = uVar2 + 1;
						pSVar3[(int)uVar2] = pSVar5;
					}
					else {
						__this_00.AddWithResize((object)pSVar5);
					}
					pSVar5 = "Roar";
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar3 = __this_00._items;
					if (pSVar3 != null) {
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pSVar3.Length) {
							__this_00._size = uVar2 + 1;
							pSVar3[(int)uVar2] = pSVar5;
						}
						else {
							__this_00.AddWithResize((object)pSVar5);
						}
						return __this_00;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000BAC")]
	protected override float DefaultRunSpeed
	{
		[Token(Token = "0x6004386")]
		[Address(RVA = "0x5B19140", Offset = "0x5B18140", VA = "0x5B19140", Slot = "130")]
		get
		{
			// Lifted from source/cpp/Characters/ErenShifter.c (Characters.ErenShifter$$get_DefaultRunSpeed): clean
			return 90.0;
		}
	}

	[Token(Token = "0x6004387")]
	[Address(RVA = "0x5B19150", Offset = "0x5B18150", VA = "0x5B19150", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
		// Lifted from source/cpp/Characters/ErenShifter.c (Characters.ErenShifter$$CreateCache): clean
		GameObject owner;
		ErenComponentCache __this_00;

		owner = this.gameObject;
		__this_00 = new ErenComponentCache(owner);
		this.ErenCache = __this_00;
		this.CreateCache((BaseComponentCache)this.ErenCache);
		return;
	}

	[Token(Token = "0x6004388")]
	[Address(RVA = "0x5B191D0", Offset = "0x5B181D0", VA = "0x5B191D0", Slot = "176")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
		// Lifted from source/cpp/Characters/ErenShifter.c (Characters.ErenShifter$$CreateAnimations): clean
		ErenAnimations __this_00;

		__this_00 = new ErenAnimations();
		this.ErenAnimations = __this_00;
		this.CreateAnimations((BaseTitanAnimations)this.ErenAnimations);
		return;
	}

	[Token(Token = "0x6004389")]
	[Address(RVA = "0x5B19240", Offset = "0x5B18240", VA = "0x5B19240", Slot = "206")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		// Lifted from source/cpp/Characters/ErenShifter.c (Characters.ErenShifter$$CreateCustomSkinLoader): clean
		GameObject __this_00;
		BaseCustomSkinLoader pCVar1;

		__this_00 = this.gameObject;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pCVar1 = (BaseCustomSkinLoader)__this_00.AddComponent<ErenCustomSkinLoader>();
		return pCVar1;
	}

	[Token(Token = "0x600438A")]
	[Address(RVA = "0x5B19290", Offset = "0x5B18290", VA = "0x5B19290", Slot = "205")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		// Lifted from source/cpp/Characters/ErenShifter.c (Characters.ErenShifter$$GetSkinURL): clean
		StringSetting pSVar1;

		if ((set == null) ||(pSVar1 = set.Eren, pSVar1 == null)) {
			throw new NullReferenceException();
		}
		return pSVar1._value;
	}

	[Token(Token = "0x600438B")]
	[Address(RVA = "0x5B192D0", Offset = "0x5B182D0", VA = "0x5B192D0", Slot = "80")]
	public override void Emote(string emote)
	{
		// Lifted from source/cpp/Characters/ErenShifter.c (Characters.ErenShifter$$Emote): 4 lines keep C-only constructs
		ErenAnimations pCVar1;
		bool bVar2;
		IEnumerator routine;
		String* ppSVar3;
		String a;

		bVar2 = this.CanEmote();
		if (!bVar2) {
			return;
		}
		a = (String)**(ulong*)(g_data_07556758 + 0xb8);
		bVar2 = (emote == "Nod");
		if (bVar2) {
			pCVar1 = this.ErenAnimations;
			if (pCVar1 == null) {
	label_05c1942f: ;
				throw new NullReferenceException();
			}
			ppSVar3 = &pCVar1.EmoteNod;
		}
		else {
			bVar2 = (emote == "Roar");
			if (!bVar2) goto label_05c193ec;
			routine = this.WaitAndPlaySound(ShifterSounds.ErenRoar, 0.9);
			this.StartCoroutine(routine);
			pCVar1 = this.ErenAnimations;
			if (pCVar1 == null) goto label_05c1942f;
			ppSVar3 = &pCVar1.EmoteRoar;
		}
		a = *ppSVar3;
	label_05c193ec: ;
		bVar2 = (a != "");
		if (bVar2) {
			this.StateAction(8, a, 0.1, true);
			return;
		}
		return;
	}

	[Token(Token = "0x600438C")]
	[Address(RVA = "0x5B19440", Offset = "0x5B18440", VA = "0x5B19440", Slot = "138")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		// Lifted from source/cpp/Characters/ErenShifter.c (Characters.ErenShifter$$GetRootMotionAnimations): clean
		ErenAnimations pCVar1;
		Dictionary<string, float> __this_00;

		__this_00 = new Dictionary<string, float>();
		pCVar1 = this.ErenAnimations;
		if ((pCVar1 != null) &&(__this_00 != null)) {
			__this_00.Add((object)pCVar1.AttackCombo, 1.0);
			pCVar1 = this.ErenAnimations;
			if (pCVar1 != null) {
				__this_00.Add((object)pCVar1.AttackKick, 1.0);
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600438D")]
	[Address(RVA = "0x5B19500", Offset = "0x5B18500", VA = "0x5B19500", Slot = "140")]
	protected override bool IsComboAttack()
	{
		// Lifted from source/cpp/Characters/ErenShifter.c (Characters.ErenShifter$$IsComboAttack): clean
		ErenAnimations pCVar1;
		bool bVar2;

		pCVar1 = this.ErenAnimations;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		bVar2 = (this._currentAttackAnimation == pCVar1.AttackCombo);
		return bVar2;
	}

	[Token(Token = "0x600438E")]
	[Address(RVA = "0x5B19530", Offset = "0x5B18530", VA = "0x5B19530", Slot = "187")]
	protected override void UpdateAttack()
	{
		// Lifted from source/cpp/Characters/ErenShifter.c (Characters.ErenShifter$$UpdateAttack): 5 lines keep C-only constructs
		int iVar1;
		ErenAnimations pCVar2;
		ErenComponentCache pCVar3;
		bool bVar4;
		String* ppSVar5;
		BaseHitbox pCVar6;
		float fVar7;

		fVar7 = this.GetAnimationTime();
		pCVar2 = this.ErenAnimations;
		if (pCVar2 == null) goto label_05c197c5;
		bVar4 = (this._currentStateAnimation == pCVar2.AttackCombo);
		if (bVar4) {
			iVar1 = this._currentAttackStage;
			if ((fVar7 <= 0.15) || (iVar1 != 0)) {
				if ((fVar7 <= 0.27) || (iVar1 != 1)) {
					if (fVar7 <= 0.56) {
						return;
					}
					if (iVar1 != 2) {
						return;
					}
					this._currentAttackStage = 3;
					pCVar3 = this.ErenCache;
					if ((pCVar3 == null) ||(pCVar6 = pCVar3.HandRHitbox, pCVar6 == null)) goto label_05c197c5;
					pCVar6.Activate(0.0, 0.25 / this._currentAttackSpeed);
					ppSVar5 = &TitanSounds.Swing3;
				}
				else {
					this._currentAttackStage = 2;
					pCVar3 = this.ErenCache;
					if ((pCVar3 == null) ||(pCVar6 = pCVar3.HandLHitbox, pCVar6 == null)) goto label_05c197c5;
					pCVar6.Activate(0.0, 0.23 / this._currentAttackSpeed);
					ppSVar5 = &TitanSounds.Swing2;
				}
				goto label_05c197a9;
			}
			this._currentAttackStage = 1;
			pCVar3 = this.ErenCache;
			if ((pCVar3 == null) ||(pCVar6 = pCVar3.HandRHitbox, pCVar6 == null)) goto label_05c197c5;
			fVar7 = 0.16;
		}
		else {
			pCVar2 = this.ErenAnimations;
			if (pCVar2 == null) {
	label_05c197c5: ;
				throw new NullReferenceException();
			}
			bVar4 = (this._currentStateAnimation == pCVar2.AttackKick);
			if (((!bVar4) || (fVar7 <= 0.28)) || (this._currentAttackStage != 0)) {
				return;
			}
			this._currentAttackStage = 1;
			pCVar3 = this.ErenCache;
			if ((pCVar3 == null) ||(pCVar6 = pCVar3.FootRHitbox, pCVar6 == null)) goto label_05c197c5;
			fVar7 = 0.5;
		}
		pCVar6.Activate(0.0, fVar7 / this._currentAttackSpeed);
		ppSVar5 = &TitanSounds.Swing1;
	label_05c197a9: ;
		this.PlaySound(*ppSVar5);
		return;
	}

	[Token(Token = "0x600438F")]
	[Address(RVA = "0x5B197D0", Offset = "0x5B187D0", VA = "0x5B197D0", Slot = "202")]
	public override bool CheckNapeAngle(Vector3 hitPosition, float maxAngle)
	{
		// Lifted from source/cpp/Characters/ErenShifter.c (Characters.ErenShifter$$CheckNapeAngle): 35 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		BaseTitanComponentCache pCVar3;
		byte[] auVar4 = new byte[16];
		double dVar5;
		Transform pUVar6;
		UnityEngine_Vector3_StaticFields pUVar7;
		Il2CppClass klass;
		float fVar8;
		float fVar9;
		uint extraout_XMM0_Db;
		float fVar10;
		float in_XMM0_Dc;
		float extraout_XMM0_Dc;
		float in_XMM0_Dd;
		float extraout_XMM0_Dd;
		float fVar11;
		uint in_XMM1_Db;
		float fVar12;
		byte[] auVar13 = new byte[16];
		float fVar14;
		Vector3 UVar15;
		float fStack_48;
		float fStack_44;
		ulong uStack_18;

		pCVar3 = this.BaseTitanCache;
		if (((pCVar3 == null) ||(pUVar6 = pCVar3.Head, pUVar6 == null)) ||(pUVar6 = pUVar6.transform, pUVar6 == null)) {
			throw new NullReferenceException();
		}
		UVar15 = pUVar6.position;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			uStack_18._0_4_ = 0.0;
			uStack_18._4_4_ = 0.0;
		}
		else {
			uStack_18._0_4_ = 0.0;
			uStack_18._4_4_ = 0.0;
		}
		uStack_18._0_4_ = 0.0;
		uStack_18._4_4_ = 0.0;
		if (g_data_0753e729 == false) {
			uStack_18._0_4_ = 0.0;
			uStack_18._4_4_ = 0.0;
			g_data_0753e729 = true;
		}
		fStack_48 = hitPosition.x;
		fStack_44 = hitPosition.y;
		auVar13._0_4_ = fStack_48 - UVar15.x;
		auVar13._4_4_ = fStack_44 - UVar15.y;
		auVar13._8_4_ = in_XMM0_Dc - extraout_XMM0_Dc;
		auVar13._12_4_ = in_XMM0_Dd - extraout_XMM0_Dd;
		fVar12 = hitPosition.z - UVar15.z;
		fVar8 = fVar12 * fVar12 + auVar13._4_4_ * auVar13._4_4_ + auVar13._0_4_ * auVar13._0_4_;
		if (fVar8 < 0.0) {
			fVar8 = sqrtf(fVar8);
			in_XMM1_Db = extraout_XMM0_Db;
		}
		else {
			fVar8 = SQRT(fVar8);
		}
		if (1e-05 < fVar8) {
			fVar12 = fVar12 / fVar8;
			auVar4._4_4_ = fVar8;
			auVar4._0_4_ = fVar8;
			auVar4._8_4_ = in_XMM1_Db;
			auVar4._12_4_ = in_XMM1_Db;
			auVar13 = divps(auVar13, auVar4);
			uStack_18._0_4_ = auVar13._0_4_;
			uStack_18._4_4_ = auVar13._4_4_;
			pUVar7 = (UnityEngine_Vector3_StaticFields)&uStack_18;
		}
		else {
			pUVar7 = typeof(Vector3).static_fields;
			fVar12 = (pUVar7.zeroVector).z;
		}
		uVar1 = (pUVar7.zeroVector).x;
		uVar2 = (pUVar7.zeroVector).y;
		UVar15 = pUVar6.forward;
		fVar11 = UVar15.z;
		fVar8 = UVar15.x;
		fVar10 = UVar15.y;
		fVar14 = fVar11 * fVar11 + fVar10 * fVar10 + fVar8 * fVar8;
		fVar9 = fVar12 * fVar12 + (float)uVar2 * (float)uVar2 + (float)uVar1 * (float)uVar1;
		if (0.0 <= fVar9 * fVar14) {
			fVar9 = SQRT(fVar9 * fVar14);
			klass = typeof(Math);
		}
		else {
			fVar9 = sqrtf(fVar9 * fVar14);
			klass = typeof(Math);
		}
		fVar14 = 0.0;
		typeof(Math) = (Math)klass;
		if (1e-15 <= fVar9) {
			fVar9 = (fVar12 * fVar11 + (float)uVar2 * fVar10 + (float)uVar1 * fVar8) / fVar9;
			fVar12 = 1.0;
			if (fVar9 <= 1.0) {
				fVar12 = fVar9;
			}
			dVar5 = acos((double)(float)(~-(uint)(-1.0 <= fVar9) & 0xbf800000 | (uint)fVar12 & -(uint)(-1.0 <= fVar9)), (MethodInfo)klass);
			fVar14 = (float)dVar5 * 57.29578;
		}
		return fVar14 < maxAngle;
	}

	[Token(Token = "0x6004390")]
	[Address(RVA = "0x5B19B20", Offset = "0x5B18B20", VA = "0x5B19B20")]
	public ErenShifter()
	{
		// Lifted from source/cpp/Characters/ErenShifter.c (Characters.ErenShifter$$.ctor): clean
		this._needRoar = true;
		this.DeathAnimationLength = 2.0;
		base();
		return;
	}
}
