// ==================== AoTTG2 cross-reference ====================
// Type: Characters.FlareItem
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/FlareItem.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Items/FlareItem.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006C6")]
internal class FlareItem : SimpleUseable
{
	[Token(Token = "0x4001FE5")]
	[FieldOffset(Offset = "0x38")]
	private Color _color;

	[Token(Token = "0x4001FE6")]
	[FieldOffset(Offset = "0x48")]
	private float Speed;

	[Token(Token = "0x4001FE7")]
	[FieldOffset(Offset = "0x4C")]
	private Vector3 Gravity;

	[Token(Token = "0x6004206")]
	[Address(RVA = "0x5AFAA40", Offset = "0x5AF9A40", VA = "0x5AFAA40")]
	public FlareItem(BaseCharacter owner, string name, Color color, float cooldown)
	{
		// Lifted from source/cpp/Characters/FlareItem.c (Characters.FlareItem$$.ctor): clean
		float fVar1;
		uint uVar2;
		uint uVar3;
		float local_38;
		float fStack_34;

		this.Speed = 150.0;
		uVar2 = (Vector3.downVector).x;
		uVar3 = (Vector3.downVector).y;
		fVar1 = (Vector3.downVector).z;
		this.Gravity.x = (float)uVar2 * 15.0;
		this.Gravity.y = (float)uVar3 * 15.0;
		this.Gravity.z = fVar1 * 15.0;
		base(owner, 0.0, -1);
		this.Name = name;
		local_38 = color.r;
		fStack_34 = color.g;
		this._color.r = local_38;
		this._color.g = fStack_34;
		this._color.b = color.b;
		this._color.a = color.a;
		this.Cooldown = cooldown;
		return;
	}

	[Token(Token = "0x6004207")]
	[Address(RVA = "0x5AFAB10", Offset = "0x5AF9B10", VA = "0x5AFAB10", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/FlareItem.c (Characters.FlareItem$$Activate): 42 lines keep C-only constructs
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
		object pIVar12;
		object pIVar13;
		String name;
		float fVar14;
		float fVar15;
		float fVar16;
		uint uVar17;
		uint extraout_XMM0_Db;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dc_01;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float extraout_XMM0_Dd_01;
		float fVar18;
		float fVar19;
		float fVar20;
		byte[] auVar21 = new byte[16];
		Quaternion rotation;
		Vector3 UVar22;
		Vector3 UVar23;
		Vector3 UVar24;
		ulong uStack_a8;
		ulong uStack_98;
		Vector3 UStack_88;
		float fStack_78;
		float fStack_74;
		float fStack_70;
		float fStack_6c;
		float fStack_68;
		float fStack_64;
		ulong uStack_60;
		byte[] auStack_58 = new byte[16];
		float fStack_48;
		float fStack_44;
		Vector3 UStack_40;
		float fStack_34;
		ulong uStack_30;

		__this_00 = this._owner;
		if (__this_00 == null) goto label_05bfaf8b;
		pCVar4 = __this_00.klass;
		bVar3 = (typeof(Human)._2).typeHierarchyDepth;
		if (((pCVar4._2).typeHierarchyDepth < bVar3) ||((pCVar4._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(Human))) {
			throw new InvalidCastException();
		}
		UVar22 = __this_00.GetAimPoint();
		pUVar5 = __this_00.Cache;
		if ((pUVar5 == null) ||(pUVar6 = pUVar5.Transform, pUVar6 == null)) goto label_05bfaf8b;
		UVar23 = pUVar6.position;
		pUVar5 = __this_00.Cache;
		if ((pUVar5 == null) ||(pUVar6 = pUVar5.Transform, pUVar6 == null)) goto label_05bfaf8b;
		UVar24 = pUVar6.up;
		fVar18 = UVar24.z + UVar24.z;
		fVar14 = UVar24.x + UVar24.x;
		fVar16 = UVar24.y + UVar24.y;
		fVar20 = extraout_XMM0_Dc_01 + extraout_XMM0_Dc_01;
		fVar15 = extraout_XMM0_Dd_01 + extraout_XMM0_Dd_01;
		if (g_data_0753e72d == false) {
			fStack_68 = fVar18;
			fStack_78 = fVar14;
			fStack_74 = fVar16;
			fStack_70 = extraout_XMM0_Dc_01 + extraout_XMM0_Dc_01;
			fStack_6c = extraout_XMM0_Dd_01 + extraout_XMM0_Dd_01;
			g_data_0753e72d = true;
			fVar14 = fStack_78;
			fVar16 = fStack_74;
			fVar20 = fStack_70;
			fVar15 = fStack_6c;
			fVar18 = fStack_68;
		}
		uStack_98._0_4_ = UVar23.x;
		uStack_98._4_4_ = UVar23.y;
		fVar18 = UVar23.z + fVar18;
		UStack_88.x = 0.0;
		UStack_88.y = 0.0;
		uStack_a8._0_4_ = UVar22.x;
		uStack_a8._4_4_ = UVar22.y;
		auVar21._0_4_ = (float)uStack_a8 - ((float)uStack_98 + fVar14);
		auVar21._4_4_ = uStack_a8._4_4_ - (uStack_98._4_4_ + fVar16);
		auVar21._8_4_ = extraout_XMM0_Dc - (extraout_XMM0_Dc_00 + fVar20);
		auVar21._12_4_ = extraout_XMM0_Dd - (extraout_XMM0_Dd_00 + fVar15);
		fVar20 = UVar22.z - fVar18;
		uVar17 = 0;
		fVar15 = fVar20 * fVar20 + auVar21._4_4_ * auVar21._4_4_ + auVar21._0_4_ * auVar21._0_4_;
		if (fVar15 < 0.0) {
			fVar15 = sqrtf(fVar15);
			uVar17 = extraout_XMM0_Db;
			if (1e-05 < fVar15) goto label_05bfad5a;
	label_05bfad1e: ;
			pUVar11 = typeof(Vector3).static_fields;
			fVar20 = (pUVar11.zeroVector).z;
		}
		else {
			fVar15 = SQRT(fVar15);
			if (fVar15 <= 1e-05) goto label_05bfad1e;
	label_05bfad5a: ;
			fVar20 = fVar20 / fVar15;
			auVar10._4_4_ = fVar15;
			auVar10._0_4_ = fVar15;
			auVar10._8_4_ = uVar17;
			auVar10._12_4_ = uVar17;
			auVar21 = divps(auVar21, auVar10);
			UStack_88.x = auVar21._0_4_;
			UStack_88.y = auVar21._4_4_;
			pUVar11 = (UnityEngine_Vector3_StaticFields)&UStack_88;
		}
		uVar1 = (pUVar11.zeroVector).x;
		uVar2 = (pUVar11.zeroVector).y;
		if ((typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor == 0) {
			name = ProjectilePrefabs.Flare;
			if (g_data_0753e72b == false) goto label_05bfadd0;
	label_05bfada5: ;
			pCVar7 = this._owner;
		}
		else {
			name = ProjectilePrefabs.Flare;
			if (g_data_0753e72b != false) goto label_05bfada5;
	label_05bfadd0: ;
			g_data_0753e72b = true;
			pCVar7 = this._owner;
		}
		if (((pCVar7 != null) &&(pUVar5 = pCVar7.Cache, pUVar5 != null)) &&(pPVar8 = pUVar5.PhotonView, pPVar8 != null)) {
			UStack_40.z = (Quaternion.identityQuaternion).x;
			fStack_34 = (Quaternion.identityQuaternion).y;
			uStack_30._0_4_ = 0.0;
			uStack_30._4_4_ = 0.0;
			fStack_48 = (Quaternion.identityQuaternion).z;
			fStack_44 = (Quaternion.identityQuaternion).w;
			UStack_40.x = 0.0;
			UStack_40.y = 0.0;
			auStack_58 = ZEXT416((uint)this.Speed);
			fStack_68 = this.Gravity.x;
			fStack_64 = this.Gravity.y;
			uStack_60._0_4_ = 0.0;
			uStack_60._4_4_ = 0.0;
			fStack_78 = this.Gravity.z;
			charViewId = pPVar8.viewIdField;
			settings = (Object[])new object[1];
			UStack_88.x = this._color.r;
			UStack_88.y = this._color.g;
			UStack_88.z = this._color.b;
			pIVar12 = (object)UStack_88;
			if (settings != null) {
				if ((pIVar12 != null) &&(pIVar13 = il2cpp_vm_Object_IsInst(pIVar12, (((settings.obj).klass)._1).element_class), pIVar13 == null)) {
					pIVar12 = new ArrayTypeMismatchException();
					throw pIVar12;
				}
				if ((int)settings.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				fVar20 = fVar20 * (float)auStack_58._0_4_;
				fVar15 = (float)uVar1 * (float)auStack_58._0_4_;
				fVar19 = (float)uVar2 * (float)auStack_58._0_4_;
				settings[0] = pIVar12;
				rotation.z = fStack_48;
				rotation.w = fStack_44;
				rotation.x = UStack_40.z;
				rotation.y = fStack_34;
				UVar22.z = fVar18;
				UVar22.x = (float)uStack_98 + fVar14;
				UVar22.y = uStack_98._4_4_ + fVar16;
				UVar23.z = fStack_78;
				UVar23.x = fStack_68;
				UVar23.y = fStack_64;
				UVar24.z = fVar20;
				UVar24.x = fVar15;
				UVar24.y = fVar19;
				ProjectileSpawner.Spawn(name, UVar22, rotation, UVar24, UVar23, 6.5, charViewId, "", settings);
				__this_00.PlaySound(HumanSounds.FlareLaunch);
				return;
			}
		}
	label_05bfaf8b: ;
		throw new NullReferenceException();
	}
}
