// ==================== AoTTG2 cross-reference ====================
// Type: Characters.CombatDashSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/CombatDashSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/CombatDashSpecial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006D8")]
internal class CombatDashSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x400205E")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x17000B69")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042A2")]
		[Address(RVA = "0x5B0A6B0", Offset = "0x5B096B0", VA = "0x5B0A6B0", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Characters/CombatDashSpecial.c (Characters.CombatDashSpecial$$get_ActiveTime): clean
			return 2.0;
		}
	}

	[Token(Token = "0x17000B6A")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60042A3")]
		[Address(RVA = "0x5B0A6C0", Offset = "0x5B096C0", VA = "0x5B0A6C0", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Characters/CombatDashSpecial.c (Characters.CombatDashSpecial$$get_GroundedOnly): clean
			return false;
		}
	}

	[Token(Token = "0x60042A4")]
	[Address(RVA = "0x5B0A6D0", Offset = "0x5B096D0", VA = "0x5B0A6D0")]
	public CombatDashSpecial(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/CombatDashSpecial.c (Characters.CombatDashSpecial$$.ctor): clean
		this.Range = 200.0;
		base(owner);
		this.Cooldown = 5.0;
		return;
	}

	[Token(Token = "0x60042A5")]
	[Address(RVA = "0x5B0A6F0", Offset = "0x5B096F0", VA = "0x5B0A6F0", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/CombatDashSpecial.c (Characters.CombatDashSpecial$$Activate): 35 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		Human pCVar3;
		BaseComponentCache pUVar4;
		Transform __this_00;
		Rigidbody __this_01;
		byte[] auVar5 = new byte[16];
		UnityEngine_Vector3_StaticFields pUVar6;
		float fVar7;
		uint uVar8;
		uint extraout_XMM0_Db;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float fVar9;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float fVar10;
		float fVar11;
		byte[] auVar12 = new byte[16];
		Vector3 UVar13;
		Vector3 UVar14;
		float local_48;
		float fStack_44;
		byte[] local_30 = new byte[12];
		float fStack_24;
		float fStack_20;
		float fStack_1c;

		pCVar3 = this._human;
		if (pCVar3 == null) goto label_05c0a952;
		pCVar3.EmoteAnimation(HumanAnimations.Dash);
		pCVar3 = this._human;
		if (pCVar3 == null) goto label_05c0a952;
		UVar13 = pCVar3.GetAimPoint();
		pCVar3 = this._human;
		if (((pCVar3 == null) ||(pUVar4 = pCVar3.Cache, pUVar4 == null)) ||(__this_00 = pUVar4.Transform, __this_00 == null)) goto label_05c0a952;
		UVar14 = __this_00.position;
		fVar11 = UVar14.x;
		fVar7 = UVar14.y;
		if (g_data_0753e72d == false) {
			fStack_20 = extraout_XMM0_Dc_00;
			fStack_1c = extraout_XMM0_Dd_00;
			g_data_0753e72d = true;
			local_30._0_4_ = 0.0;
			local_30._4_4_ = 0.0;
			fVar11 = (float)local_30._8_4_;
			fVar7 = fStack_24;
			fVar9 = fStack_20;
			fVar10 = fStack_1c;
		}
		else {
			local_30._0_4_ = 0.0;
			local_30._4_4_ = 0.0;
			fVar9 = extraout_XMM0_Dc_00;
			fVar10 = extraout_XMM0_Dd_00;
		}
		local_30._0_4_ = 0.0;
		local_30._4_4_ = 0.0;
		if (g_data_0753e729 == false) {
			local_30._0_4_ = 0.0;
			local_30._4_4_ = 0.0;
			fStack_24 = fVar7;
			local_30._8_4_ = fVar11;
			fStack_20 = fVar9;
			fStack_1c = fVar10;
			g_data_0753e729 = true;
			fVar11 = (float)local_30._8_4_;
			fVar7 = fStack_24;
			fVar9 = fStack_20;
			fVar10 = fStack_1c;
		}
		local_48 = UVar13.x;
		fStack_44 = UVar13.y;
		auVar12._0_4_ = local_48 - fVar11;
		auVar12._4_4_ = fStack_44 - fVar7;
		auVar12._8_4_ = extraout_XMM0_Dc - fVar9;
		auVar12._12_4_ = extraout_XMM0_Dd - fVar10;
		fVar11 = UVar13.z - UVar14.z;
		uVar8 = 0;
		fVar7 = fVar11 * fVar11 + auVar12._4_4_ * auVar12._4_4_ + auVar12._0_4_ * auVar12._0_4_;
		if (fVar7 < 0.0) {
			fVar7 = sqrtf(fVar7);
			uVar8 = extraout_XMM0_Db;
			if (fVar7 <= 1e-05) goto label_05c0a848;
	label_05c0a884: ;
			fVar11 = fVar11 / fVar7;
			auVar5._4_4_ = fVar7;
			auVar5._0_4_ = fVar7;
			auVar5._8_4_ = uVar8;
			auVar5._12_4_ = uVar8;
			auVar12 = divps(auVar12, auVar5);
			local_30._0_4_ = auVar12._0_4_;
			local_30._4_4_ = auVar12._4_4_;
			pUVar6 = (UnityEngine_Vector3_StaticFields)local_30;
		}
		else {
			fVar7 = SQRT(fVar7);
			if (1e-05 < fVar7) goto label_05c0a884;
	label_05c0a848: ;
			pUVar6 = typeof(Vector3).static_fields;
			fVar11 = (pUVar6.zeroVector).z;
		}
		pCVar3 = this._human;
		if (((pCVar3 != null) &&(pUVar4 = pCVar3.Cache, pUVar4 != null)) &&(__this_01 = pUVar4.Rigidbody, __this_01 != null)) {
			uVar1 = (pUVar6.zeroVector).x;
			uVar2 = (pUVar6.zeroVector).y;
			UVar13.z = fVar11 * 100.0;
			UVar13.x = (float)uVar1 * 100.0;
			UVar13.y = (float)uVar2 * 100.0;
			__this_01.linearVelocity = UVar13;
			return;
		}
	label_05c0a952: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60042A6")]
	[Address(RVA = "0x5B0A960", Offset = "0x5B09960", VA = "0x5B0A960", Slot = "10")]
	protected override void Deactivate()
	{
		// Lifted from source/cpp/Characters/CombatDashSpecial.c (Characters.CombatDashSpecial$$Deactivate): clean
		return;
	}
}
