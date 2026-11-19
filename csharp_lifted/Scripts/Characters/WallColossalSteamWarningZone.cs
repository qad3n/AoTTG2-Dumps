// ==================== AoTTG2 cross-reference ====================
// Type: Characters.WallColossalSteamWarningZone
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/WallColossalSteamWarningZone.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000709")]
internal class WallColossalSteamWarningZone : MonoBehaviour
{
	[Token(Token = "0x400216B")]
	[FieldOffset(Offset = "0x20")]
	private HashSet<Human> _humansInZone;

	[Token(Token = "0x400216C")]
	[FieldOffset(Offset = "0x28")]
	private HashSet<Rigidbody> _rigidbodiesInZone;

	[Token(Token = "0x400216D")]
	[FieldOffset(Offset = "0x30")]
	private WallColossalShifter _owner;

	[Token(Token = "0x400216E")]
	[FieldOffset(Offset = "0x38")]
	private bool _isActive;

	[Token(Token = "0x400216F")]
	[FieldOffset(Offset = "0x3C")]
	public float KnockbackForce;

	[Token(Token = "0x4002170")]
	[FieldOffset(Offset = "0x40")]
	public float ThunderspearKnockbackMultiplier;

	[Token(Token = "0x4002171")]
	[FieldOffset(Offset = "0x44")]
	public float KnockbackInterval;

	[Token(Token = "0x4002172")]
	[FieldOffset(Offset = "0x48")]
	private float _knockbackTimer;

	[Token(Token = "0x4002173")]
	[FieldOffset(Offset = "0x4C")]
	private float _projectileCheckTimer;

	[Token(Token = "0x4002174")]
	[FieldOffset(Offset = "0x50")]
	private float _projectileCheckInterval;

	[Token(Token = "0x4002175")]
	[FieldOffset(Offset = "0x58")]
	private BoxCollider _boxCollider;

	[Token(Token = "0x60043E8")]
	[Address(RVA = "0x5B21830", Offset = "0x5B20830", VA = "0x5B21830")]
	internal void Initialize(WallColossalShifter owner)
	{
		// Lifted from source/cpp/Characters/WallColossalSteamWarningZone.c (Characters.WallColossalSteamWarningZone$$Initialize): clean
		BoxCollider pUVar1;

		this._owner = owner;
		pUVar1 = (BoxCollider)this.GetComponent<BoxCollider>();
		this._boxCollider = pUVar1;
		return;
	}

	[Token(Token = "0x60043E9")]
	[Address(RVA = "0x5B21630", Offset = "0x5B20630", VA = "0x5B21630")]
	internal void SetActive(bool active)
	{
		// Lifted from source/cpp/Characters/WallColossalSteamWarningZone.c (Characters.WallColossalSteamWarningZone$$SetActive): 5 lines keep C-only constructs
		HashSet<object> pSVar1;
		Human __this_00;
		bool bVar2;
		byte[] local_60 = new byte[16];
		Human local_50;
		byte[] local_48 = new byte[16];
		Human local_38;

		if (Il2CppMethodInitialized_0754775e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Clear) ;
			Il2CppMethodInitialized_0754775e = true;
		}
		this._isActive = active;
		if (active) {
			return;
		}
		pSVar1 = (HashSet<object>)this._humansInZone;
		if (pSVar1 != null) {
			local_60.GetEnumerator(pSVar1);
			local_38 = local_50;
			local_48._0_8_ = local_60._0_8_;
			local_48._8_8_ = local_60._8_8_;
			local_60._0_8_ = null;
			local_60._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_48;
			while (true) {
				bVar2 = local_48.MoveNext();
				__this_00 = local_38;
				if (!(bVar2)) break;
				bVar2 = ((Object)__this_00 != null);
				if (bVar2) {
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					if (__this_00.Dead == false) {
						__this_00.ToggleFire1(false);
					}
				}
			}
			local_48.Dispose();
			pSVar1 = (HashSet<object>)this._humansInZone;
			if (pSVar1 != null) {
				pSVar1.Clear();
				pSVar1 = (HashSet<object>)this._rigidbodiesInZone;
				if (pSVar1 != null) {
					pSVar1.Clear() ;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043EA")]
	[Address(RVA = "0x5B23F40", Offset = "0x5B22F40", VA = "0x5B23F40")]
	private void OnTriggerEnter(Collider other)
	{
		// Lifted from source/cpp/Characters/WallColossalSteamWarningZone.c (Characters.WallColossalSteamWarningZone$$OnTriggerEnter): clean
		int iVar1;
		WallColossalShifter x;
		HashSet<object> __this_00;
		bool bVar2;
		int iVar3;
		GameObject __this_01;
		Human __this_02;

		if (this._isActive != false) {
			x = this._owner;
			bVar2 = ((Object)x == null);
			if (!bVar2) {
				if ((other == null) ||(__this_01 = other.gameObject, __this_01 == null)) {
	label_05c240c2: ;
					throw new NullReferenceException();
				}
				iVar3 = __this_01.layer;
				if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
					iVar1 = PhysicsLayer.Human;
				}
				else {
					iVar1 = PhysicsLayer.Human;
				}
				if (iVar3 == iVar1) {
					__this_02 = other.GetComponent<Human>();
					bVar2 = ((Object)__this_02 != null);
					if (bVar2) {
						if (__this_02 != null) {
							if (__this_02.Dead != false) {
								return;
							}
							bVar2 = __this_02.IsMine();
							if (!bVar2) {
								return;
							}
							__this_00 = (HashSet<object>)this._humansInZone;
							if (__this_00 != null) {
								__this_00.Add((object)__this_02);
								__this_02.ToggleFire1(true);
								return;
							}
						}
						goto label_05c240c2;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x60043EB")]
	[Address(RVA = "0x5B240D0", Offset = "0x5B230D0", VA = "0x5B240D0")]
	private void OnTriggerExit(Collider other)
	{
		// Lifted from source/cpp/Characters/WallColossalSteamWarningZone.c (Characters.WallColossalSteamWarningZone$$OnTriggerExit): clean
		int iVar1;
		WallColossalShifter x;
		HashSet<object> pSVar2;
		bool bVar3;
		int iVar4;
		GameObject __this_00;
		Human __this_01;

		x = this._owner;
		bVar3 = ((Object)x == null);
		if (!bVar3) {
			if ((other == null) ||(__this_00 = other.gameObject, __this_00 == null)) goto label_05c2426d;
			iVar4 = __this_00.layer;
			if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
				iVar1 = PhysicsLayer.Human;
			}
			else {
				iVar1 = PhysicsLayer.Human;
			}
			if (iVar4 == iVar1) {
				__this_01 = other.GetComponent<Human>();
				bVar3 = ((Object)__this_01 != null);
				if (bVar3) {
					pSVar2 = (HashSet<object>)this._humansInZone;
					if (pSVar2 == null) {
	label_05c2426d: ;
						throw new NullReferenceException();
					}
					bVar3 = pSVar2.Contains((object)__this_01) ;
					if (bVar3) {
						pSVar2 = (HashSet<object>)this._humansInZone;
						if ((pSVar2 == null) ||(pSVar2.Remove((object)__this_01), __this_01 == null)) goto label_05c2426d;
						if ((__this_01.Dead == false) &&(bVar3 = __this_01.IsMine())) {
							__this_01.ToggleFire1(false);
							return;
						}
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x60043EC")]
	[Address(RVA = "0x5B24280", Offset = "0x5B23280", VA = "0x5B24280")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Characters/WallColossalSteamWarningZone.c (Characters.WallColossalSteamWarningZone$$OnDestroy): 5 lines keep C-only constructs
		HashSet<object> pSVar1;
		Human __this_00;
		bool bVar2;
		byte[] local_60 = new byte[16];
		Human local_50;
		byte[] local_48 = new byte[16];
		Human local_38;

		if (Il2CppMethodInitialized_07547761 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Clear) ;
			Il2CppMethodInitialized_07547761 = true;
		}
		pSVar1 = (HashSet<object>)this._humansInZone;
		if (pSVar1 != null) {
			local_60.GetEnumerator(pSVar1);
			local_38 = local_50;
			local_48._0_8_ = local_60._0_8_;
			local_48._8_8_ = local_60._8_8_;
			local_60._0_8_ = null;
			local_60._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_48;
			while(true) {
				bVar2 = local_48.MoveNext();
				__this_00 = local_38;
				if (!bVar2) break;
				bVar2 = ((Object)__this_00 != null);
				if (bVar2) {
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					if (__this_00.Dead == false) {
						bVar2 = __this_00.IsMine();
						if (bVar2) {
							__this_00.ToggleFire1(false);
						}
					}
				}
			}
			local_48.Dispose();
			pSVar1 = (HashSet<object>)this._humansInZone;
			if (pSVar1 != null) {
				pSVar1.Clear();
				pSVar1 = (HashSet<object>)this._rigidbodiesInZone;
				if (pSVar1 != null) {
					pSVar1.Clear() ;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043ED")]
	[Address(RVA = "0x5B24480", Offset = "0x5B23480", VA = "0x5B24480")]
	private void Update()
	{
		// Lifted from source/cpp/Characters/WallColossalSteamWarningZone.c (Characters.WallColossalSteamWarningZone$$Update): 6 lines keep C-only constructs
		HashSet<object> pSVar1;
		object pIVar2;
		WallColossalShifter x;
		Object x_00;
		bool bVar3;
		Characters_WallColossalSteamWarningZone___c_StaticFields pCVar4;
		Predicate<T> pSVar5;
		float fVar6;
		float fVar7;
		ulong local_58;
		System_Collections_Generic_HashSet_Enumerator_T__o local_50;
		System_Collections_Generic_HashSet_Enumerator_T__o local_48;

		local_48._set = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		pSVar1 = (HashSet<object>)this._humansInZone;
		if ((typeof(WallColossalSteamWarningZone.c)._2).cctor_finished_or_no_cctor == 0) {
			pCVar4 = typeof(WallColossalSteamWarningZone.c).static_fields;
			pSVar5 = (Predicate<T>)pCVar4.__9__16_0;
		}
		else {
			pCVar4 = typeof(WallColossalSteamWarningZone.c).static_fields;
			pSVar5 = (Predicate<T>)pCVar4.__9__16_0;
		}
		if (pSVar5 == null) {
			if (((typeof(WallColossalSteamWarningZone.c))._2).cctor_finished_or_no_cctor == 0) {
				pCVar4 = typeof(WallColossalSteamWarningZone.c).static_fields;
			}
			pIVar2 = (object)pCVar4.__9;
			pSVar5 = new Predicate<Rigidbody>(pIVar2, (intptr_t)MethodInfo_Characters_WallColossalSteamWarningZone_c_Update_b__16_0);
			pCVar4 = typeof(WallColossalSteamWarningZone.c).static_fields;
			pCVar4.__9__16_0 = (Predicate<Human>)pSVar5;
		}
		if (pSVar1 != null) {
			pSVar1.RemoveWhere(pSVar5);
			pSVar1 = (HashSet<object>)this._rigidbodiesInZone;
			if ((typeof(WallColossalSteamWarningZone.c)._2).cctor_finished_or_no_cctor == 0) {
				pCVar4 = typeof(WallColossalSteamWarningZone.c).static_fields;
				pSVar5 = (Predicate<T>)pCVar4.__9__16_1;
			}
			else {
				pCVar4 = typeof(WallColossalSteamWarningZone.c).static_fields;
				pSVar5 = (Predicate<T>)pCVar4.__9__16_1;
			}
			if (pSVar5 == null) {
				if (((typeof(WallColossalSteamWarningZone.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar4 = typeof(WallColossalSteamWarningZone.c).static_fields;
				}
				pIVar2 = (object)pCVar4.__9;
				pSVar5 = new Predicate<Rigidbody>(pIVar2, (intptr_t)MethodInfo_Characters_WallColossalSteamWarningZone_c_Update_b__16_1);
				pCVar4 = typeof(WallColossalSteamWarningZone.c).static_fields;
				pCVar4.__9__16_1 = (Predicate<Rigidbody>)pSVar5;
			}
			if (pSVar1 != null) {
				pSVar1.RemoveWhere(pSVar5);
				if (this._isActive != false) {
					x = this._owner;
					bVar3 = ((Object)x != null);
					if (bVar3) {
						x_00 = (Object)this._boxCollider;
						bVar3 = (x_00 != null);
						if (bVar3) {
							fVar7 = this._projectileCheckTimer;
							fVar6 = Time.deltaTime;
							fVar7 = fVar7 - fVar6;
							this._projectileCheckTimer = fVar7;
							if (fVar7 <= 0.0) {
								this.CheckForProjectiles();
								this._projectileCheckTimer = this._projectileCheckInterval;
							}
							fVar7 = this._knockbackTimer;
							fVar6 = Time.deltaTime;
							fVar7 = fVar7 - fVar6;
							this._knockbackTimer = fVar7;
							if (fVar7 <= 0.0) {
								pSVar1 = (HashSet<object>)this._rigidbodiesInZone;
								if (pSVar1 == null) goto label_05c24847;
								local_48 = pSVar1.GetEnumerator();
								local_58 = 0;
								local_50 = &local_48;
								while (true) {
									bVar3 = local_48.MoveNext();
									pIVar2 = local_48._current;
									if (!(bVar3)) break;
									bVar3 = ((Object)pIVar2 != null);
									if (bVar3) {
										if ((Object)pIVar2 == null) {
											throw new NullReferenceException();
										}
										bVar3 = pIVar2.isKinematic;
										if (!bVar3) {
											this.ApplyKnockback((Rigidbody)pIVar2);
										}
									}
								}
								il2cpp_runtime_helper_02fd9310(&local_58);
								this._knockbackTimer = this.KnockbackInterval;
							}
						}
					}
				}
				return;
			}
		}
	label_05c24847: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043EE")]
	[Address(RVA = "0x5B248C0", Offset = "0x5B238C0", VA = "0x5B248C0")]
	private void CheckForProjectiles()
	{
		// Lifted from source/cpp/Characters/WallColossalSteamWarningZone.c (Characters.WallColossalSteamWarningZone$$CheckForProjectiles): 1 lines keep C-only constructs
		int iVar1;
		BoxCollider pUVar2;
		HashSet<object> pSVar3;
		bool bVar4;
		uint uVar5;
		WallColossalSteamWarningZone.c__DisplayClass17_0 __this_00;
		Transform pUVar6;
		Collider[] pUVar7;
		HashSet<Rigidbody> __this_01;
		Object x;
		Predicate<T> match;
		uint uVar8;
		Quaternion orientation;
		Vector3 UVar9;
		Vector3 UVar10;
		Vector3 UVar11;
		Vector3 halfExtents;
		float local_98;
		float fStack_94;
		float local_58;
		float fStack_54;

		__this_00 = new WallColossalSteamWarningZone.c__DisplayClass17_0();
		pUVar6 = this.transform;
		pUVar2 = this._boxCollider;
		if (pUVar2 != null) {
			UVar9 = pUVar2.center;
			if (pUVar6 != null) {
				UVar9 = pUVar6.TransformPoint(UVar9);
				pUVar2 = this._boxCollider;
				if (pUVar2 != null) {
					UVar10 = pUVar2.size;
					pUVar6 = this.transform;
					if (pUVar6 != null) {
						UVar11 = pUVar6.lossyScale;
						pUVar6 = this.transform;
						if (pUVar6 != null) {
							local_98 = UVar10.x;
							fStack_94 = UVar10.y;
							orientation = pUVar6.rotation;
							local_58 = UVar11.x;
							fStack_54 = UVar11.y;
							halfExtents.x = local_98 * 0.5 * local_58;
							halfExtents.y = fStack_94 * 0.5 * fStack_54;
							halfExtents.z = UVar10.z * 0.5 * UVar11.z;
							iVar1 = PhysicsLayer.Projectile;
							pUVar7 = Physics.OverlapBox(UVar9, halfExtents, orientation, 1 << ((byte)iVar1 & 0x1f));
							__this_01 = new HashSet<Rigidbody>();
							if (__this_00 != null) {
								__this_00.currentProjectiles = __this_01;
								if (pUVar7 != null) {
									uVar5 = (uint)pUVar7.Length;
									if (0 < (int)uVar5) {
										uVar8 = 0;
										do {
											if (uVar5 <= uVar8) {
												throw new IndexOutOfRangeException();
											}
											if ((Component)pUVar7[(int)uVar8] ==null) goto label_05c24ce9;
											x = (Object)(pUVar7[(int)uVar8]).GetComponent<Rigidbody>();
											bVar4 = (x != null) ;
											if (bVar4) {
												if (x == null) goto label_05c24ce9;
												bVar4 = x.isKinematic;
												if (!bVar4) {
													pSVar3 = (HashSet<object>)__this_00.currentProjectiles;
													if (pSVar3 == null) goto label_05c24ce9;
													pSVar3.Add((object)x);
													pSVar3 = (HashSet<object>)this._rigidbodiesInZone;
													if (pSVar3 == null) goto label_05c24ce9;
													bVar4 = pSVar3.Contains((object)x);
													if (!bVar4) {
														pSVar3 = (HashSet<object>)this._rigidbodiesInZone;
														if (pSVar3 == null) goto label_05c24ce9;
														pSVar3.Add((object)x);
														this.ApplyKnockback((Rigidbody)x);
													}
												}
											}
											uVar8 = uVar8 + 1;
											uVar5 = (uint)pUVar7.Length;
										} while ((int)uVar8 < (int)uVar5);
									}
									pSVar3 = (HashSet<object>)this._rigidbodiesInZone;
									match = new Predicate<Rigidbody>((object)__this_00, (intptr_t) MethodInfo_Characters_WallColossalSteamWarningZone_c__DisplayClass17_0_CheckForProjectiles_b__0);
									if (pSVar3 != null) {
										pSVar3.RemoveWhere(match);
										return;
									}
								}
							}
						}
					}
				}
			}
		}
	label_05c24ce9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60043EF")]
	[Address(RVA = "0x5B24D00", Offset = "0x5B23D00", VA = "0x5B24D00")]
	private void ApplyKnockback(Rigidbody rb)
	{
		// Lifted from source/cpp/Characters/WallColossalSteamWarningZone.c (Characters.WallColossalSteamWarningZone$$ApplyKnockback): 40 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		WallColossalShifter pCVar4;
		WallColossalComponentCache pCVar5;
		Component __this_00;
		byte[] auVar6 = new byte[16];
		bool bVar7;
		Transform __this_01;
		UnityEngine_Vector3_StaticFields pUVar8;
		String pSVar9;
		Object x;
		float fVar10;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		uint in_XMM1_Db;
		byte[] auVar11 = new byte[16];
		Vector3 UVar12;
		float local_6c;
		byte[] local_50 = new byte[24];
		byte[] local_38 = new byte[8];
		float fStack_30;
		float fStack_2c;

		pCVar4 = this._owner;
		bVar7 = ((Object)pCVar4 == null);
		if (bVar7) {
			return;
		}
		pCVar4 = this._owner;
		if (pCVar4 == null) goto label_05c25040;
		pCVar5 = pCVar4.ColossalCache;
		if (pCVar5 == null) {
			x = null;
			uVar3 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			x = (Object)pCVar5.NapeHurtbox;
			uVar3 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		bVar7 = (x == null);
		if (bVar7) {
			return;
		}
		pCVar4 = this._owner;
		if ((((pCVar4 == null) ||(pCVar5 = pCVar4.ColossalCache, pCVar5 == null)) ||(__this_00 = (Component)pCVar5.NapeHurtbox, __this_00 == null)) ||(__this_01 = __this_00.transform, __this_01 == null)) goto label_05c25040;
		UVar12 = __this_01.position;
		fStack_30 = (float)extraout_XMM0_Dc;
		local_38 = UVar12._0_8_;
		fStack_2c = (float)extraout_XMM0_Dd;
		local_50._8_4_ = UVar12.z;
		if (rb == null) goto label_05c25040;
		UVar12 = rb.position;
		if (Il2CppMethodInitialized_0753e72d == false) {
			in_XMM1_Db = 0;
			Il2CppMethodInitialized_0753e72d = true;
			local_50._0_4_ = 0.0;
			local_50._4_4_ = 0.0;
		}
		else {
			local_50._0_4_ = 0.0;
			local_50._4_4_ = 0.0;
		}
		local_50._0_4_ = 0.0;
		local_50._4_4_ = 0.0;
		if (g_data_0753e729 == false) {
			local_50._0_4_ = 0.0;
			local_50._4_4_ = 0.0;
			in_XMM1_Db = 0;
			g_data_0753e729 = true;
		}
		auVar11._0_4_ = UVar12.x - (float)local_38._0_4_;
		auVar11._4_4_ = UVar12.y - (float)local_38._4_4_;
		auVar11._8_4_ = extraout_XMM0_Dc_00 - fStack_30;
		auVar11._12_4_ = extraout_XMM0_Dd_00 - fStack_2c;
		local_6c = UVar12.z - (float)local_50._8_4_;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			in_XMM1_Db = 0;
		}
		fVar10 = local_6c * local_6c + auVar11._4_4_ * auVar11._4_4_ + auVar11._0_4_ * auVar11._0_4_;
		if (fVar10 < 0.0) {
			fVar10 = sqrtf(fVar10);
			in_XMM1_Db = extraout_XMM0_Db;
			if (1e-05 < fVar10) goto label_05c24f0d;
	label_05c24eb3: ;
			pUVar8 = typeof(Vector3).static_fields;
			local_6c = (pUVar8.zeroVector).z;
		}
		else {
			fVar10 = SQRT(fVar10);
			if (fVar10 <= 1e-05) goto label_05c24eb3;
	label_05c24f0d: ;
			local_6c = local_6c / fVar10;
			auVar6._4_4_ = fVar10;
			auVar6._0_4_ = fVar10;
			auVar6._8_4_ = in_XMM1_Db;
			auVar6._12_4_ = in_XMM1_Db;
			auVar11 = divps(auVar11, auVar6);
			local_50._0_4_ = auVar11._0_4_;
			local_50._4_4_ = auVar11._4_4_;
			pUVar8 = (UnityEngine_Vector3_StaticFields)local_50;
		}
		uVar1 = (pUVar8.zeroVector).x;
		uVar2 = (pUVar8.zeroVector).y;
		local_50._8_16_ = ZEXT416((uint)this.KnockbackForce);
		pSVar9 = rb.name;
		if (pSVar9 == null) {
	label_05c25040: ;
			throw new NullReferenceException();
		}
		bVar7 = pSVar9.Contains("Thunderspear");
		if (!bVar7) {
			pSVar9 = rb.name;
			if (pSVar9 == null) goto label_05c25040;
			bVar7 = pSVar9.Contains("ThunderSpear");
			if (!bVar7) {
				fVar10 = (float)local_50._8_4_;
				goto label_05c25010;
			}
		}
		fVar10 = (float)local_50._8_4_ * this.ThunderspearKnockbackMultiplier;
	label_05c25010: ;
		UVar12.z = local_6c * fVar10;
		UVar12.x = (float)uVar1 * fVar10;
		UVar12.y = (float)uVar2 * fVar10;
		rb.AddForce(UVar12, 1);
		return;
	}

	[Token(Token = "0x60043F0")]
	[Address(RVA = "0x5B25060", Offset = "0x5B24060", VA = "0x5B25060")]
	public WallColossalSteamWarningZone()
	{
		// Lifted from source/cpp/Characters/WallColossalSteamWarningZone.c (Characters.WallColossalSteamWarningZone$$.ctor): clean
		HashSet<Human> __this_00;
		HashSet<Rigidbody> __this_01;

		__this_00 = new HashSet<Human>();
		this._humansInZone = __this_00;
		__this_01 = new HashSet<Rigidbody>();
		this._rigidbodiesInZone = __this_01;
		this.KnockbackForce = 100.0;
		this.ThunderspearKnockbackMultiplier = 5.0;
		this.KnockbackInterval = 0.1;
		this._projectileCheckInterval = 0.05;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/WallColossalSteamWarningZone.c.

	// Characters.WallColossalSteamWarningZone.<>c__DisplayClass17_0$$.ctor: clean
	private void c__DisplayClass17_0__ctor()
	{
		base();
		return;
	}

	// Characters.WallColossalSteamWarningZone.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new WallColossalSteamWarningZone.c();
		WallColossalSteamWarningZone.c.__9 =(WallColossalSteamWarningZone.c)__this;
		return;
	}

	// Characters.WallColossalSteamWarningZone.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Characters.WallColossalSteamWarningZone.<>c$$<Update>b__16_0: clean
	private bool c__Update_b__16_0(Human h)
	{
		bool bVar1;
		bool bVar2;

		bVar1 = ((Object)h == null);
		if (!bVar1) {
			if (h == null) {
				throw new NullReferenceException();
			}
			bVar2 = h.Dead != false;
		}
		return bVar2;
	}

	// Characters.WallColossalSteamWarningZone.<>c$$<Update>b__16_1: clean
	private bool c__Update_b__16_1(Rigidbody rb)
	{
		bool bVar1;

		bVar1 = ((Object)rb == null);
		return bVar1;
	}

	// Characters.WallColossalSteamWarningZone.<>c__DisplayClass17_0$$<CheckForProjectiles>b__0: clean
	private bool c__DisplayClass17_0__CheckForProjectiles_b__0(Rigidbody rb)
	{
		HashSet<object> __this_00;
		bool bVar1;

		__this_00 = (HashSet<object>)this.currentProjectiles;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.Contains((object)rb);
		return !bVar1;
	}
}
