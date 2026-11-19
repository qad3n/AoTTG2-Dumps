// ==================== AoTTG2 cross-reference ====================
// Type: Characters.SmokeBombSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/SmokeBombSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SmokeBombSpecial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006E2")]
internal class SmokeBombSpecial : SimpleUseable
{
	[Token(Token = "0x4002069")]
	[FieldOffset(Offset = "0x38")]
	private float Speed;

	[Token(Token = "0x400206A")]
	[FieldOffset(Offset = "0x3C")]
	private Vector3 Gravity;

	[Token(Token = "0x60042D2")]
	[Address(RVA = "0x5B0E0A0", Offset = "0x5B0D0A0", VA = "0x5B0E0A0")]
	public SmokeBombSpecial(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/SmokeBombSpecial.c (Characters.SmokeBombSpecial$$.ctor): clean
		float fVar1;
		uint uVar2;
		uint uVar3;

		this.Speed = 150.0;
		uVar2 = (Vector3.downVector).x;
		uVar3 = (Vector3.downVector).y;
		fVar1 = (Vector3.downVector).z;
		this.Gravity.x = (float)uVar2 * 15.0;
		this.Gravity.y = (float)uVar3 * 15.0;
		this.Gravity.z = fVar1 * 15.0;
		base(owner);
		this.Cooldown = 15.0;
		return;
	}

	[Token(Token = "0x60042D3")]
	[Address(RVA = "0x5B0E120", Offset = "0x5B0D120", VA = "0x5B0E120", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/SmokeBombSpecial.c (Characters.SmokeBombSpecial$$Activate): 49 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte bVar3;
		int charViewId;
		BaseCharacter __this_00;
		BaseCharacter pCVar4;
		BaseComponentCache pUVar5;
		Transform pUVar6;
		BaseCharacter pCVar7;
		PhotonView pPVar8;
		byte[] auVar10 = new byte[16];
		UnityEngine_Vector3_StaticFields pUVar11;
		Object[] settings;
		String name;
		float fVar12;
		float fVar13;
		uint uVar14;
		uint extraout_XMM0_Db;
		float extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		float extraout_XMM0_Dc_01;
		float fVar15;
		float extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		float extraout_XMM0_Dd_01;
		float fVar16;
		float fVar17;
		byte[] auVar18 = new byte[16];
		Quaternion rotation;
		Vector3 UVar19;
		Vector3 UVar20;
		Vector3 UVar21;
		ulong uStack_88;
		byte[] auStack_70 = new byte[12];
		float fStack_64;
		float fStack_60;
		float fStack_5c;
		byte[] auStack_58 = new byte[12];
		float fStack_4c;
		float fStack_48;
		float fStack_44;
		Vector3 UStack_40;
		float fStack_34;
		ulong uStack_30;

		__this_00 = this._owner;
		if (__this_00 == null) goto label_05c0e515;
		pCVar4 = __this_00.klass;
		bVar3 = (typeof(Human)._2).typeHierarchyDepth;
		if (((pCVar4._2).typeHierarchyDepth < bVar3) ||((pCVar4._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(Human))) {
			throw new InvalidCastException();
		}
		UVar19 = __this_00.GetAimPoint();
		pUVar5 = __this_00.Cache;
		if ((pUVar5 == null) ||(pUVar6 = pUVar5.Transform, pUVar6 == null)) goto label_05c0e515;
		UVar20 = pUVar6.position;
		pUVar5 = __this_00.Cache;
		if (pUVar5 == null) goto label_05c0e515;
		fStack_60 = (float)extraout_XMM0_Dc_00;
		fStack_5c = (float)extraout_XMM0_Dd_00;
		pUVar6 = pUVar5.Transform;
		if (pUVar6 == null) goto label_05c0e515;
		UVar21 = pUVar6.up;
		fVar17 = UVar21.z + UVar21.z;
		fVar12 = UVar21.x + UVar21.x;
		fVar13 = UVar21.y + UVar21.y;
		fVar15 = extraout_XMM0_Dc_01 + extraout_XMM0_Dc_01;
		fVar16 = extraout_XMM0_Dd_01 + extraout_XMM0_Dd_01;
		if (g_data_0753e72d == false) {
			fStack_48 = fVar17;
			auStack_58._4_4_ = fVar13;
			auStack_58._0_4_ = fVar12;
			fStack_4c = extraout_XMM0_Dd_01 + extraout_XMM0_Dd_01;
			auStack_58._8_4_ = extraout_XMM0_Dc_01 + extraout_XMM0_Dc_01;
			g_data_0753e72d = true;
			fVar12 = (float)auStack_58._0_4_;
			fVar13 = (float)auStack_58._4_4_;
			fVar15 = (float)auStack_58._8_4_;
			fVar16 = fStack_4c;
			fVar17 = fStack_48;
		}
		auStack_70._8_4_ = (float)auStack_70._8_4_ + fVar12;
		fStack_64 = fStack_64 + fVar13;
		fStack_60 = fStack_60 + fVar15;
		fStack_5c = fStack_5c + fVar16;
		fVar17 = UVar20.z + fVar17;
		auStack_70._0_4_ = 0.0;
		auStack_70._4_4_ = 0.0;
		fVar12 = (float)auStack_70._8_4_;
		fVar13 = fStack_64;
		fVar15 = fStack_60;
		fVar16 = fStack_5c;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			fVar12 = (float)auStack_70._8_4_;
			fVar13 = fStack_64;
			fVar15 = fStack_60;
			fVar16 = fStack_5c;
		}
		uStack_88._0_4_ = UVar19.x;
		uStack_88._4_4_ = UVar19.y;
		auVar18._0_4_ = (float)uStack_88 - fVar12;
		auVar18._4_4_ = uStack_88._4_4_ - fVar13;
		auVar18._8_4_ = extraout_XMM0_Dc - fVar15;
		auVar18._12_4_ = extraout_XMM0_Dd - fVar16;
		fVar12 = UVar19.z - fVar17;
		uVar14 = 0;
		fVar13 = fVar12 * fVar12 + auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_;
		if (fVar13 < 0.0) {
			fVar13 = sqrtf(fVar13);
			uVar14 = extraout_XMM0_Db;
			if (1e-05 < fVar13) goto label_05c0e359;
	label_05c0e31d: ;
			pUVar11 = typeof(Vector3).static_fields;
			fVar12 = (pUVar11.zeroVector).z;
		}
		else {
			fVar13 = SQRT(fVar13);
			if (fVar13 <= 1e-05) goto label_05c0e31d;
	label_05c0e359: ;
			fVar12 = fVar12 / fVar13;
			auVar10._4_4_ = fVar13;
			auVar10._0_4_ = fVar13;
			auVar10._8_4_ = uVar14;
			auVar10._12_4_ = uVar14;
			auVar18 = divps(auVar18, auVar10);
			auStack_70._0_4_ = auVar18._0_4_;
			auStack_70._4_4_ = auVar18._4_4_;
			pUVar11 = (UnityEngine_Vector3_StaticFields)auStack_70;
		}
		uVar1 = (pUVar11.zeroVector).x;
		uVar2 = (pUVar11.zeroVector).y;
		if ((typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor == 0) {
			name = ProjectilePrefabs.SmokeBomb;
			if (g_data_0753e72b == false) goto label_05c0e3d3;
	label_05c0e39d: ;
			pCVar7 = this._owner;
		}
		else {
			name = ProjectilePrefabs.SmokeBomb;
			if (g_data_0753e72b != false) goto label_05c0e39d;
	label_05c0e3d3: ;
			g_data_0753e72b = true;
			pCVar7 = this._owner;
		}
		if (((pCVar7 != null) &&(pUVar5 = pCVar7.Cache, pUVar5 != null)) &&(pPVar8 = pUVar5.PhotonView, pPVar8 != null)) {
			fStack_48 = (Quaternion.identityQuaternion).x;
			fStack_44 = (Quaternion.identityQuaternion).y;
			UStack_40.x = 0.0;
			UStack_40.y = 0.0;
			auStack_58._0_4_ = (Quaternion.identityQuaternion).z;
			auStack_58._4_4_ = (Quaternion.identityQuaternion).w;
			auStack_58._8_4_ = 0.0;
			fStack_4c = 0.0;
			fVar13 = this.Speed;
			UStack_40.z = this.Gravity.x;
			fStack_34 = this.Gravity.y;
			uStack_30._0_4_ = 0.0;
			uStack_30._4_4_ = 0.0;
			fVar15 = this.Gravity.z;
			charViewId = pPVar8.viewIdField;
			settings = (Object[])new object[0];
			rotation.z = (float)auStack_58._0_4_;
			rotation.w = (float)auStack_58._4_4_;
			rotation.x = fStack_48;
			rotation.y = fStack_44;
			UVar19.z = fVar17;
			UVar19.x = (float)auStack_70._8_4_;
			UVar19.y = fStack_64;
			UVar20.z = fVar15;
			UVar20.x = UStack_40.z;
			UVar20.y = fStack_34;
			UVar21.z = fVar12 * fVar13;
			UVar21.x = (float)uVar1 * fVar13;
			UVar21.y = (float)uVar2 * fVar13;
			ProjectileSpawner.Spawn(name, UVar19, rotation, UVar21, UVar20, 6.5, charViewId, "", settings);
			__this_00.PlaySound(HumanSounds.FlareLaunch);
			return;
		}
	label_05c0e515: ;
		throw new NullReferenceException();
	}
}
