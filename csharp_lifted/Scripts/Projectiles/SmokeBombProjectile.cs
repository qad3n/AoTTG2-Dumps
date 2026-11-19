// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.SmokeBombProjectile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/SmokeBombProjectile.c
// Prior real C# source (older reference): Assets/Scripts/Projectiles/SmokeBombProjectile.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x200007B")]
internal class SmokeBombProjectile : BaseProjectile
{
	[Token(Token = "0x1700008A")]
	protected override float DestroyDelay
	{
		[Token(Token = "0x6000367")]
		[Address(RVA = "0x5773880", Offset = "0x5772880", VA = "0x5773880", Slot = "11")]
		get
		{
			// Lifted from source/cpp/Projectiles/SmokeBombProjectile.c (Projectiles.SmokeBombProjectile$$get_DestroyDelay): clean
			return 10.0;
		}
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x5773890", Offset = "0x5772890", VA = "0x5773890")]
	private void OnCollisionEnter(Collision collision)
	{
		// Lifted from source/cpp/Projectiles/SmokeBombProjectile.c (Projectiles.SmokeBombProjectile$$OnCollisionEnter): 12 lines keep C-only constructs
		BaseCharacter pCVar1;
		Object x;
		BaseTitanComponentCache pCVar2;
		Object y;
		bool bVar3;
		LayerMask mask;
		int layerMask;
		uint uVar4;
		PhotonView pPVar5;
		Transform pUVar6;
		Int32[] layers;
		Collider[] pUVar7;
		String pSVar8;
		GameObject __this_00;
		BasicTitan x_00;
		uint uVar9;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		uint uVar10;
		uint uVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		Quaternion UVar16;
		Vector3 UVar17;
		Vector3 UStack_68;
		byte[] auStack_58 = new byte[16];
		byte[] auStack_48 = new byte[24];

		pPVar5 = this.photonView;
		if (pPVar5 != null) {
			if ((pPVar5._IsMine_k__BackingField == false) || (this.Disabled != false)) {
				return;
			}
			pUVar6 = this.transform;
			if (pUVar6 != null) {
				UVar17 = pUVar6.position;
				layers = (Int32[])new int[1];
				if (layers != null) {
					if ((int)layers.Length == 0) {
	label_05873c4d: ;
						throw new IndexOutOfRangeException();
					}
					layers[0] = PhysicsLayer.Hurtbox;
					mask = PhysicsLayer.GetMask(layers);
					layerMask = ((LayerMask)mask);
					uVar10 = 0;
					uVar11 = 0;
					pUVar7 = Physics.OverlapSphere(UVar17, 4.0, layerMask);
					if (pUVar7 != null) {
						uVar4 = (uint)pUVar7.Length;
						if (0 < (int)uVar4) {
							uVar9 = 0;
							do {
								if (uVar4 <= uVar9) goto label_05873c4d;
								x = (Object)pUVar7[(int)uVar9];
								if ((((x == null) ||(pUVar6 = x.transform, pUVar6 == null)) ||(pUVar6 = pUVar6.root, pUVar6 == null)) ||(__this_00 = pUVar6.gameObject, __this_00 == null)) goto label_05873c48;
								x_00 = __this_00.GetComponent<BasicTitan>();
								bVar3 = ((Object)x_00 != null);
								if (bVar3) {
									if ((x_00 == null) ||(pCVar2 = x_00.BaseTitanCache, pCVar2 == null)) goto label_05873c48;
									y = (Object)pCVar2.EyesHurtbox;
									bVar3 = (x == y);
									if (bVar3) {
										pSVar8 = EffectPrefabs.CriticalHit;
										pUVar6 = this.transform;
										if (pUVar6 == null) goto label_05873c48;
										UVar17 = pUVar6.position;
										UStack_68.x = 4.712389;
										UStack_68.y = 0.0;
										UStack_68.z = 0.0;
										UVar16 = Quaternion.Internal_FromEulerRad(ref UStack_68);
										fVar12 = UVar16.x;
										fVar13 = UVar16.y;
										fVar14 = UVar16.z;
										fVar15 = UVar16.w;
										if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
											auStack_48._8_4_ = extraout_XMM0_Dc;
											auStack_48._0_8_ = UVar16._0_8_;
											auStack_48._12_4_ = extraout_XMM0_Dd;
											auStack_58._8_4_ = uVar10;
											auStack_58._0_8_ = UVar16._8_8_;
											auStack_58._12_4_ = uVar11;
											fVar12 = (float)auStack_48._0_4_;
											fVar13 = (float)auStack_48._4_4_;
											fVar14 = (float)auStack_58._0_4_;
											fVar15 = (float)auStack_58._4_4_;
										}
										uVar10 = 0;
										uVar11 = 0;
										UVar16.y = fVar13;
										UVar16.x = fVar12;
										UVar16.w = fVar15;
										UVar16.z = fVar14;
										EffectSpawner.Spawn(pSVar8, UVar17, UVar16, 1.0, true, null);
										pCVar1 = this._owner;
										pSVar8 = x.name;
										x_00.GetHit(pCVar1, 0, "SmokeBomb", pSVar8);
									}
								}
								uVar9 = uVar9 + 1;
								uVar4 = (uint)pUVar7.Length;
							} while ((int)uVar9 < (int)uVar4);
						}
						this.DestroySelf();
						return;
					}
				}
			}
		}
	label_05873c48: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x5773C60", Offset = "0x5772C60", VA = "0x5773C60")]
	public SmokeBombProjectile()
	{
		// Lifted from source/cpp/Projectiles/SmokeBombProjectile.c (Projectiles.SmokeBombProjectile$$.ctor): clean
		base();
		return;
	}
}
