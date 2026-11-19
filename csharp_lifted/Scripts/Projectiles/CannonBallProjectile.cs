// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.CannonBallProjectile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/CannonBallProjectile.c
// Prior real C# source (older reference): Assets/Scripts/Projectiles/CannonBallProjectile.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x2000075")]
internal class CannonBallProjectile : BaseProjectile
{
	[Token(Token = "0x600034C")]
	[Address(RVA = "0x5771D30", Offset = "0x5770D30", VA = "0x5771D30", Slot = "15")]
	protected override void RegisterObjects()
	{
		// Lifted from source/cpp/Projectiles/CannonBallProjectile.c (Projectiles.CannonBallProjectile$$RegisterObjects): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<GameObject> __this_00;
		GameObject[] pUVar3;
		Transform pUVar5;
		GameObject item;

		pUVar5 = this.transform;
		if (pUVar5 != null) {
			pUVar5 = pUVar5.Find("CannonBallModel");
			if (pUVar5 != null) {
				item = pUVar5.gameObject;
				__this_00 = this._hideObjects;
				if (__this_00 != null) {
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pUVar3 = __this_00._items;
					if (pUVar3 != null) {
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pUVar3.Length) {
							__this_00._size = uVar2 + 1;
							pUVar3[(int)uVar2] = item;
							return;
						}
						__this_00.AddWithResize((object)item);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x5771E00", Offset = "0x5770E00", VA = "0x5771E00")]
	private void OnCollisionEnter(Collision collision)
	{
		// Lifted from source/cpp/Projectiles/CannonBallProjectile.c (Projectiles.CannonBallProjectile$$OnCollisionEnter): 15 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		BaseCharacter pCVar3;
		BaseMenu obj;
		bool bVar5;
		int score;
		PhotonView pPVar6;
		Collider pUVar7;
		BaseCharacter a;
		GameObject __this_00;
		CustomLogicCollisionHandler __this_01;
		Transform pUVar8;
		Object pUVar9;
		String pSVar10;
		object pIVar11;
		InGameMenu __this_02;
		BaseCharacter pCVar12;
		BaseCharacter pCVar14;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		uint uVar15;
		uint uVar16;
		float fVar17;
		float fVar18;
		float fVar19;
		float fVar20;
		Quaternion UVar21;
		Vector3 UVar22;
		int iStack_8c;
		Vector3 UStack_78;
		Vector3 UStack_68;
		byte[] auStack_58 = new byte[16];
		byte[] auStack_48 = new byte[24];

		pPVar6 = this.photonView;
		if (pPVar6 == null) goto label_0587238d;
		if (pPVar6._IsMine_k__BackingField == false) {
			return;
		}
		if (this.Disabled != false) {
			return;
		}
		if (collision == null) goto label_0587238d;
		pUVar7 = collision.collider;
		a = BaseProjectile.GetHitCharacter(pUVar7);
		pUVar7 = collision.collider;
		if ((pUVar7 == null) ||(__this_00 = pUVar7.gameObject, __this_00 == null)) goto label_0587238d;
		__this_01 = __this_00.GetComponent<CustomLogicCollisionHandler>();
		bVar5 = ((Object)__this_01 != null);
		if (bVar5) {
			pCVar14 = this._owner;
			bVar5 = ((Object)pCVar14 != null);
			pSVar10 = "CannonBall";
			pCVar14 = this._owner;
			if (bVar5) {
				if (pCVar14 == null) {
					iStack_8c = 100;
					pCVar14 = null;
				}
				else {
					if (pCVar14.CustomDamageEnabled == false) goto label_05871fa4;
					iStack_8c = pCVar14.CustomDamage;
				}
			}
			else {
	label_05871fa4: ;
				iStack_8c = 100;
			}
			pCVar12 = pCVar14;
			if (Il2CppMethodInitialized_07545163 == false) {
				Il2CppMethodInitialized_07545163 = true;
				pCVar12 = this._owner;
			}
			bVar5 = ((Object)pCVar12 != null);
			if (bVar5) {
				pCVar12 = this._owner;
				if (pCVar12 == null) goto label_0587238d;
				pSVar10 = pCVar12.RichTextName;
			}
			pUVar8 = this.transform;
			if ((pUVar8 == null) ||(UVar22 = pUVar8.position, __this_01 == null)) goto label_0587238d;
			__this_01.GetHit(pCVar14, pSVar10, iStack_8c, "CannonBall", UVar22);
		}
		bVar5 = ((Object)a != null);
		if (bVar5) {
			pSVar10 = this._team;
			bVar5 = TeamInfo.SameTeam(a, pSVar10);
			if (bVar5) goto label_05872182;
			pCVar14 = this._owner;
			bVar5 = ((Object)pCVar14 == null);
			if ((bVar5) || (pCVar14 = this._owner, pCVar14 == null)) {
	label_05872133: ;
				pUVar9 = (Object)collision.collider;
				if ((pUVar9 == null) ||(pSVar10 = pUVar9.name, a == null)) goto label_0587238d;
				a.GetHit("CannonBall", 100, "CannonBall", pSVar10);
				goto label_05872182;
			}
			pCVar3 = pCVar14.klass;
			bVar1 = (typeof(Human)._2).typeHierarchyDepth;
			if (((pCVar3._2).typeHierarchyDepth < bVar1) ||((pCVar3._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human))) goto label_05872133;
			score = this.CalculateDamage();
			obj = UIManager.CurrentMenu;
			pIVar11 = il2cpp_codegen_is_inst_class((object)obj, typeof(InGameMenu));
			if (pIVar11 == null) goto label_0587238d;
			__this_02 = (InGameMenu)il2cpp_codegen_is_inst_class((object)obj, typeof(InGameMenu));
			__this_02.ShowKillScore(score, false);
			pCVar14 = this._owner;
			pUVar9 = (Object)collision.collider;
			if ((pUVar9 == null) ||(pSVar10 = pUVar9.name, a == null)) goto label_0587238d;
			a.GetHit(pCVar14, score, "CannonBall", pSVar10);
			uVar2 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_05872182: ;
			uVar2 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pSVar10 = EffectPrefabs.Boom4;
		pUVar8 = this.transform;
		if (pUVar8 != null) {
			UVar22 = pUVar8.position;
			UStack_68.x = this._velocity.x;
			UStack_68.y = this._velocity.y;
			UStack_68.z = this._velocity.z;
			UStack_78.x = (Vector3.upVector).x;
			UStack_78.y = (Vector3.upVector).y;
			UStack_78.z = (Vector3.upVector).z;
			uVar15 = 0;
			uVar16 = 0;
			UVar21 = Quaternion.Internal_LookRotation(ref UStack_68, ref UStack_78);
			fVar17 = UVar21.x;
			fVar18 = UVar21.y;
			fVar19 = UVar21.z;
			fVar20 = UVar21.w;
			if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
				auStack_48._8_4_ = extraout_XMM0_Dc;
				auStack_48._0_8_ = UVar21._0_8_;
				auStack_48._12_4_ = extraout_XMM0_Dd;
				auStack_58._8_4_ = uVar15;
				auStack_58._0_8_ = UVar21._8_8_;
				auStack_58._12_4_ = uVar16;
				fVar17 = (float)auStack_48._0_4_;
				fVar18 = (float)auStack_48._4_4_;
				fVar19 = (float)auStack_58._0_4_;
				fVar20 = (float)auStack_58._4_4_;
			}
			UVar21.y = fVar18;
			UVar21.x = fVar17;
			UVar21.w = fVar20;
			UVar21.z = fVar19;
			EffectSpawner.Spawn(pSVar10, UVar22, UVar21, 0.5, true, null);
			this.DestroySelf();
			return;
		}
	label_0587238d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x57723A0", Offset = "0x57713A0", VA = "0x57723A0")]
	private int CalculateDamage()
	{
		// Lifted from source/cpp/Projectiles/CannonBallProjectile.c (Projectiles.CannonBallProjectile$$CalculateDamage): clean
		BaseCharacter pCVar1;
		bool bVar2;
		int iVar3;

		pCVar1 = this._owner;
		bVar2 = ((Object)pCVar1 != null);
		if (((bVar2) && (pCVar1 = this._owner, pCVar1 != null)) &&(pCVar1.CustomDamageEnabled != false)) {
		}
		return iVar3;
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x5772420", Offset = "0x5771420", VA = "0x5772420")]
	public CannonBallProjectile()
	{
		// Lifted from source/cpp/Projectiles/CannonBallProjectile.c (Projectiles.CannonBallProjectile$$.ctor): clean
		base();
		return;
	}
}
