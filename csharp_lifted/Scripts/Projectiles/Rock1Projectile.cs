// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.Rock1Projectile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/Rock1Projectile.c
// Prior real C# source (older reference): Assets/Scripts/Projectiles/Rock1Projectile.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x2000079")]
internal class Rock1Projectile : BaseProjectile
{
	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0xE0")]
	protected float _size;

	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0xE4")]
	protected float _impactCooldownLeft;

	[Token(Token = "0x17000085")]
	protected virtual bool DestroyOnImpact
	{
		[Token(Token = "0x6000358")]
		[Address(RVA = "0x5772840", Offset = "0x5771840", VA = "0x5772840", Slot = "20")]
		get
		{
			// Lifted from source/cpp/Projectiles/Rock1Projectile.c (Projectiles.Rock1Projectile$$get_DestroyOnImpact): clean
			return true;
		}
	}

	[Token(Token = "0x17000086")]
	protected virtual float MinImpactVelocity
	{
		[Token(Token = "0x6000359")]
		[Address(RVA = "0x5772850", Offset = "0x5771850", VA = "0x5772850", Slot = "21")]
		get
		{
			// Lifted from source/cpp/Projectiles/Rock1Projectile.c (Projectiles.Rock1Projectile$$get_MinImpactVelocity): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000087")]
	protected virtual float ImpactCooldown
	{
		[Token(Token = "0x600035A")]
		[Address(RVA = "0x5772860", Offset = "0x5771860", VA = "0x5772860", Slot = "22")]
		get
		{
			// Lifted from source/cpp/Projectiles/Rock1Projectile.c (Projectiles.Rock1Projectile$$get_ImpactCooldown): clean
			return 1.0;
		}
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x5772870", Offset = "0x5771870", VA = "0x5772870", Slot = "15")]
	protected override void RegisterObjects()
	{
		// Lifted from source/cpp/Projectiles/Rock1Projectile.c (Projectiles.Rock1Projectile$$RegisterObjects): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<GameObject> __this_00;
		GameObject[] pUVar3;
		Transform pUVar5;
		GameObject item;

		pUVar5 = this.transform;
		if (pUVar5 != null) {
			pUVar5 = pUVar5.Find("Rubble3Model");
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

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x5772940", Offset = "0x5771940", VA = "0x5772940", Slot = "9")]
	protected override void Update()
	{
		// Lifted from source/cpp/Projectiles/Rock1Projectile.c (Projectiles.Rock1Projectile$$Update): clean
		PhotonView pPVar1;
		float fVar2;
		float fVar3;

		this.Update();
		pPVar1 = this._photonView;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		if (pPVar1._IsMine_k__BackingField != false) {
			fVar3 = this._timeLeft;
			fVar2 = Time.deltaTime;
			fVar3 = fVar3 - fVar2;
			this._timeLeft = fVar3;
			if (fVar3 <= 0.0) {
				this.OnExceedLiveTime();
			}
		}
		fVar3 = this._impactCooldownLeft;
		fVar2 = Time.deltaTime;
		this._impactCooldownLeft = fVar3 - fVar2;
		return;
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x57729E0", Offset = "0x57719E0", VA = "0x57729E0", Slot = "14")]
	protected override void SetupSettings(object[] settings)
	{
		// Lifted from source/cpp/Projectiles/Rock1Projectile.c (Projectiles.Rock1Projectile$$SetupSettings): 3 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		object obj;
		float pfVar5;
		Transform __this_00;
		Vector3 value;

		if (settings != null) {
			if ((int)settings.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = settings[0];
			if (obj != null) {
				if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556740 + 0x40)) {
					throw new InvalidCastException();
				}
				pfVar5 = il2cpp_vm_Object_Unbox(obj);
				this._size = *pfVar5;
				__this_00 = this.transform;
				if (__this_00 != null) {
					fVar1 = this._size;
					value.z = (Vector3.oneVector).z * fVar1;
					uVar2 = (Vector3.oneVector).x;
					uVar3 = (Vector3.oneVector).y;
					value.x = fVar1 * (float)uVar2;
					value.y = fVar1 * (float)uVar3;
					__this_00.localScale = value;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x5772AC0", Offset = "0x5771AC0", VA = "0x5772AC0")]
	private void OnCollisionEnter(Collision collision)
	{
		// Lifted from source/cpp/Projectiles/Rock1Projectile.c (Projectiles.Rock1Projectile$$OnCollisionEnter): 2 lines keep C-only constructs
		uint uVar1;
		Rigidbody __this_00;
		BaseCharacter pCVar2;
		bool bVar3;
		PhotonView pPVar4;
		Collider pUVar5;
		BaseCharacter a;
		GameObject __this_01;
		CustomLogicCollisionHandler __this_02;
		String pSVar6;
		Transform pUVar7;
		Object __this_03;
		String pSVar8;
		MethodInfo* method_00;
		uint damage;
		float fVar10;
		float fVar11;
		Quaternion rotation;
		Vector3 UVar12;

		pPVar4 = this.photonView;
		if (pPVar4 != null) {
			if ((pPVar4._IsMine_k__BackingField == false) || (this.Disabled != false)) {
				return;
			}
			__this_00 = this._rigidbody;
			if (__this_00 != null) {
				UVar12 = __this_00.linearVelocity;
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
				}
				else {
					fVar11 = SQRT(fVar11);
				}
				fVar10 = this.get_MinImpactVelocity();
				if (fVar11 < fVar10) {
					return;
				}
				if (0.0 < this._impactCooldownLeft) {
					return;
				}
				fVar11 = this.get_ImpactCooldown();
				this._impactCooldownLeft = fVar11;
				if (collision != null) {
					pUVar5 = collision.collider;
					a = BaseProjectile.GetHitCharacter(pUVar5);
					pUVar5 = collision.collider;
					if ((pUVar5 != null) &&(__this_01 = pUVar5.gameObject, __this_01 != null)) {
						method_00 = &MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler;
						__this_02 = __this_01.GetComponent<CustomLogicCollisionHandler>();
						pCVar2 = this._owner;
						bVar3 = ((Object)pCVar2 != null);
						damage = 100;
						if (((bVar3) && (pCVar2 = this._owner, pCVar2 != null)) &&(pCVar2.CustomDamageEnabled != false)) {
							damage = pCVar2.CustomDamage;
						}
						pSVar6 = this.GetName();
						bVar3 = ((Object)__this_02 != null);
						if (bVar3) {
							pCVar2 = this._owner;
							pUVar7 = this.transform ;
							if ((pUVar7 == null) ||(UVar12 = pUVar7.position, __this_02 == null)) goto label_05872f90;
							__this_02.GetHit(pCVar2, pSVar6, damage, "Rock", UVar12);
						}
						bVar3 = ((Object)a != null);
						if (bVar3) {
							pSVar8 = this._team;
							bVar3 = TeamInfo.SameTeam(a, pSVar8);
							if (!bVar3) {
								__this_03 = (Object)collision.collider;
								if ((__this_03 == null) ||(pSVar8 = __this_03.name, a == null)) goto label_05872f90;
								method_00 = (MethodInfo **)"Rock";
								a.GetHit(pSVar6, damage, "Rock", pSVar8);
							}
						}
						fVar11 = this._size;
						this.KillPlayersInRadius(fVar11 + fVar11, damage, a);
						pSVar6 = EffectPrefabs.Boom7;
						pUVar7 = this.transform;
						if (pUVar7 != null) {
							UVar12 = pUVar7.position;
							pUVar7 = this.transform ;
							if (pUVar7 != null) {
								rotation = pUVar7.rotation;
								fVar11 = this._size;
								EffectSpawner.Spawn(pSVar6, UVar12, rotation, fVar11, true, null);
								bVar3 = this.get_DestroyOnImpact();
								if (bVar3) {
									this.DestroySelf();
									return;
								}
								return;
							}
						}
					}
				}
			}
		}
	label_05872f90: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x57730D0", Offset = "0x57720D0", VA = "0x57730D0")]
	private void KillPlayersInRadius(float radius, int damage, BaseCharacter damagedHuman)
	{
		// Lifted from source/cpp/Projectiles/Rock1Projectile.c (Projectiles.Rock1Projectile$$KillPlayersInRadius): 27 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		BaseGameManager pGVar3;
		HashSet<object> __this_00;
		BaseComponentCache pUVar4;
		String pSVar5;
		BaseCharacter pCVar6;
		bool bVar7;
		Transform pUVar8;
		float fVar9;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		float fVar10;
		float in_XMM1_Db;
		float fVar11;
		Vector3 UVar12;
		byte[] local_f0 = new byte[16];
		BaseCharacter local_e0;
		String local_d8;
		Rock1Projectile local_d0;
		byte[] local_c8 = new byte[8];
		ulong uStack_c0;
		BaseCharacter local_b8;
		byte[] local_a8 = new byte[8];
		BaseCharacter local_98;
		float local_88;
		float fStack_84;
		byte[] local_78 = new byte[24];
		BaseGameManager local_60;
		float local_58;
		byte[] local_48 = new byte[24];

		local_a8 = (byte[])0x0;
		local_98 = null;
		local_c8 = (byte[])0x0;
		uStack_c0._0_4_ = 0;
		uStack_c0._4_4_ = 0;
		local_b8 = null;
		pGVar3 = SceneLoader.CurrentGameManager;
		if (pGVar3 != null) {
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar3.klass._2).typeHierarchyDepth < bVar1) ||((pGVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
				throw new InvalidCastException();
			}
		}
		pUVar8 = this.transform;
		if (pUVar8 != null) {
			UVar12 = pUVar8.position;
			local_88 = UVar12.z;
			local_78._8_4_ = extraout_XMM0_Dc;
			local_78._0_8_ = UVar12._0_8_;
			local_78._12_4_ = extraout_XMM0_Dd;
			fStack_84 = in_XMM1_Db;
			local_d8 = this.GetName();
			if ((pGVar3 != null) &&(__this_00 = (HashSet<object>)(*(ulong)((sbyte)pGVar3 + 0x40)) , local_d0 = this, local_60 = pGVar3, __this_00 != null)) {
				local_f0.GetEnumerator(__this_00);
				local_98 = local_e0;
				local_a8 = (byte[])local_f0._0_8_;
				local_f0._0_8_ = null;
				fStack_84 = (float)local_78._0_4_;
				local_f0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_a8;
				while (true) {
					bVar7 = local_a8.MoveNext();
					pCVar6 = local_98;
					if (!(bVar7)) break;
					bVar7 = ((Object)pCVar6 == null);
					if (!bVar7) {
						if (pCVar6 == null) {
							throw new NullReferenceException();
						}
						if (pCVar6.Dead == false) {
							bVar7 = ((Object)pCVar6 == (Object)damagedHuman);
							if (!bVar7) {
								pUVar4 = pCVar6.Cache;
								if (pUVar4 == null) {
									throw new NullReferenceException();
								}
								pUVar8 = pUVar4.Transform;
								if (pUVar8 == null) {
									throw new NullReferenceException();
								}
								UVar12 = pUVar8.position;
								local_58 = UVar12.z;
								local_48._8_4_ = extraout_XMM0_Dc_00;
								local_48._0_8_ = UVar12._0_8_;
								local_48._12_4_ = extraout_XMM0_Dd_00;
								if (Il2CppMethodInitialized_0753e7b7 == false) {
									Il2CppMethodInitialized_0753e7b7 = true;
									uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
								}
								else {
									uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
								}
								if (uVar2 == 0) {
								}
								fVar9 = ((float)local_48._4_4_ - (float)local_78._4_4_) *((float)local_48._4_4_ - (float)local_78._4_4_) +((float)local_48._0_4_ - fStack_84) * ((float)local_48._0_4_ - fStack_84) +(local_58 - local_88) * (local_58 - local_88);
								if (fVar9 < 0.0) {
									fVar9 = sqrtf(fVar9);
								}
								else {
									fVar9 = SQRT(fVar9);
								}
								in_XMM1_Db = 0.0;
								if (fVar9 < radius) {
									in_XMM1_Db = 0.0;
									pSVar5 = local_d0._team;
									if (((typeof(TeamInfo))._2).cctor_finished_or_no_cctor == 0) {
									}
									bVar7 = TeamInfo.SameTeam(pCVar6, pSVar5);
									if (!bVar7) {
										pCVar6.GetHit(local_d8, damage, "Rock", "");
									}
								}
							}
						}
					}
				}
				local_a8.Dispose() ;
				if ((*(ulong)((sbyte)local_60 + 0x58)) != null) {
					local_f0.GetEnumerator((*(ulong)((sbyte)local_60 + 0x58)));
					local_b8 = local_e0;
					local_c8 = (byte[])local_f0._0_8_;
					uStack_c0 = (System_Collections_Generic_HashSet_Enumerator_T__o)local_f0._8_8_;
					local_f0._0_8_ = null;
					local_f0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_c8;
					while(true) {
						do {
							do {
								do {
									bVar7 = local_c8.MoveNext();
									pCVar6 = local_b8;
									if (!bVar7) {
										local_c8.Dispose();
										return;
									}
									bVar7 = ((Object)pCVar6 == null);
								} while (bVar7);
								if (pCVar6 == null) {
									throw new NullReferenceException();
								}
							} while (pCVar6.Dead != false);
							bVar7 = ((Object)pCVar6 == (Object)damagedHuman);
						} while (bVar7);
						pUVar4 = pCVar6.Cache;
						if (pUVar4 == null) {
							throw new NullReferenceException();
						}
						pUVar8 = pUVar4.Transform;
						if (pUVar8 == null) break;
						UVar12 = pUVar8.position;
						fVar9 = UVar12.y - (float)local_78._4_4_;
						fVar10 = UVar12.z - local_88;
						fVar11 = UVar12.x - fStack_84;
						if (fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10 < radius * radius) {
							pSVar5 = local_d0._team;
							bVar7 = TeamInfo.SameTeam(pCVar6, pSVar5);
							if (!bVar7) {
								pCVar6.GetHit(local_d8, damage, "Rock", "");
							}
						}
					}
					throw new NullReferenceException();
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x5772FA0", Offset = "0x5771FA0", VA = "0x5772FA0")]
	private int CalculateDamage()
	{
		// Lifted from source/cpp/Projectiles/Rock1Projectile.c (Projectiles.Rock1Projectile$$CalculateDamage): clean
		BaseCharacter pCVar1;
		bool bVar2;
		int iVar3;

		pCVar1 = this._owner;
		bVar2 = ((Object)pCVar1 != null);
		if (((bVar2) && (pCVar1 = this._owner, pCVar1 != null)) &&(pCVar1.CustomDamageEnabled != false)) {
		}
		return iVar3;
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x5773020", Offset = "0x5772020", VA = "0x5773020")]
	private string GetName()
	{
		// Lifted from source/cpp/Projectiles/Rock1Projectile.c (Projectiles.Rock1Projectile$$GetName): clean
		BaseCharacter pCVar1;
		bool bVar2;
		String pSVar3;

		pCVar1 = this._owner;
		bVar2 = ((Object)pCVar1 == null);
		if (bVar2) {
			return "Rock";
		}
		pCVar1 = this._owner;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar3 = String.Concat(pCVar1.RichTextName, "'s Rock");
		return pSVar3;
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x5773770", Offset = "0x5772770", VA = "0x5773770")]
	public Rock1Projectile()
	{
		// Lifted from source/cpp/Projectiles/Rock1Projectile.c (Projectiles.Rock1Projectile$$.ctor): clean
		base();
		return;
	}
}
