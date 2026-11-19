// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ContinuousDamageHitbox
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/ContinuousDamageHitbox.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using CustomLogic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200069E")]
internal class ContinuousDamageHitbox : BaseHitbox
{
	[Token(Token = "0x4001DD5")]
	[FieldOffset(Offset = "0x68")]
	public int DamagePerSecond;

	[Token(Token = "0x4001DD6")]
	[FieldOffset(Offset = "0x6C")]
	public float DamageInterval;

	[Token(Token = "0x4001DD7")]
	[FieldOffset(Offset = "0x70")]
	private Dictionary<BaseCharacter, float> _characterDamageTimers;

	[Token(Token = "0x4001DD8")]
	[FieldOffset(Offset = "0x78")]
	private Dictionary<BaseCharacter, Collider> _characterColliders;

	[Token(Token = "0x4001DD9")]
	[FieldOffset(Offset = "0x80")]
	private HashSet<BaseCharacter> _charactersInside;

	[Token(Token = "0x4001DDA")]
	[FieldOffset(Offset = "0x88")]
	private Dictionary<CustomLogicCollisionHandler, float> _handlerDamageTimers;

	[Token(Token = "0x4001DDB")]
	[FieldOffset(Offset = "0x90")]
	private Dictionary<CustomLogicCollisionHandler, Collider> _handlerColliders;

	[Token(Token = "0x4001DDC")]
	[FieldOffset(Offset = "0x98")]
	private HashSet<CustomLogicCollisionHandler> _handlersInside;

	[Token(Token = "0x4001DDD")]
	[FieldOffset(Offset = "0xA0")]
	private readonly List<BaseCharacter> _charactersToRemove;

	[Token(Token = "0x4001DDE")]
	[FieldOffset(Offset = "0xA8")]
	private readonly List<CustomLogicCollisionHandler> _handlersToRemove;

	[Token(Token = "0x17000B1C")]
	protected override bool DestroysMap
	{
		[Token(Token = "0x600403C")]
		[Address(RVA = "0x5AE2F90", Offset = "0x5AE1F90", VA = "0x5AE2F90", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Characters/ContinuousDamageHitbox.c (Characters.ContinuousDamageHitbox$$get_DestroysMap): clean
			return false;
		}
	}

	[Token(Token = "0x600403D")]
	[Address(RVA = "0x5AE2FA0", Offset = "0x5AE1FA0", VA = "0x5AE2FA0")]
	public static ContinuousDamageHitbox CreateContinuous(BaseCharacter owner, GameObject obj, Collider collider, int damagePerSecond, float damageInterval)
	{
		// Lifted from source/cpp/Characters/ContinuousDamageHitbox.c (Characters.ContinuousDamageHitbox$$CreateContinuous): clean
		ContinuousDamageHitbox pCVar1;

		if (obj != null) {
			pCVar1 = obj.AddComponent<ContinuousDamageHitbox>();
			if (pCVar1 != null) {
				pCVar1.Owner = owner;
				pCVar1._collider = collider;
				pCVar1.DamagePerSecond = damagePerSecond;
				pCVar1.DamageInterval = damageInterval;
				pCVar1.Deactivate();
				return pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600403E")]
	[Address(RVA = "0x5AE3050", Offset = "0x5AE2050", VA = "0x5AE3050", Slot = "5")]
	public override void Activate(float delay = 0f, float length = 0f)
	{
		// Lifted from source/cpp/Characters/ContinuousDamageHitbox.c (Characters.ContinuousDamageHitbox$$Activate): clean
		this.ClearOccupants();
		this.Activate(delay, length);
		return;
	}

	[Token(Token = "0x600403F")]
	[Address(RVA = "0x5AE31A0", Offset = "0x5AE21A0", VA = "0x5AE31A0", Slot = "6")]
	public override void Deactivate()
	{
		// Lifted from source/cpp/Characters/ContinuousDamageHitbox.c (Characters.ContinuousDamageHitbox$$Deactivate): clean
		this.ClearOccupants();
		this.Deactivate();
		return;
	}

	[Token(Token = "0x6004040")]
	[Address(RVA = "0x5AE3090", Offset = "0x5AE2090", VA = "0x5AE3090")]
	private void ClearOccupants()
	{
		// Lifted from source/cpp/Characters/ContinuousDamageHitbox.c (Characters.ContinuousDamageHitbox$$ClearOccupants): clean
		Dictionary<BaseCharacter, float> __this_00;
		Dictionary<object, object> pSVar1;
		HashSet<object> pSVar2;
		Dictionary<CustomLogicCollisionHandler, float> __this_01;

		__this_00 = this._characterDamageTimers;
		if (__this_00 != null) {
			__this_00.Clear();
			pSVar1 = (Dictionary<object, object>)this._characterColliders;
			if (pSVar1 != null) {
				pSVar1.Clear();
				pSVar2 = (HashSet<object>)this._charactersInside;
				if (pSVar2 != null) {
					pSVar2.Clear();
					__this_01 = this._handlerDamageTimers;
					if (__this_01 != null) {
						__this_01.Clear() ;
						pSVar1 = (Dictionary<object, object>)this._handlerColliders;
						if (pSVar1 != null) {
							pSVar1.Clear();
							pSVar2 = (HashSet<object>)this._handlersInside;
							if (pSVar2 != null) {
								pSVar2.Clear();
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004041")]
	[Address(RVA = "0x5AE31C0", Offset = "0x5AE21C0", VA = "0x5AE31C0", Slot = "7")]
	protected override void OnTriggerEnter(Collider other)
	{
		// Lifted from source/cpp/Characters/ContinuousDamageHitbox.c (Characters.ContinuousDamageHitbox$$OnTriggerEnter): clean
		BaseCharacter a;
		HashSet<object> pSVar1;
		Dictionary<CustomLogicCollisionHandler, float> __this_00;
		Dictionary<BaseCharacter, float> __this_01;
		bool bVar2;
		Transform pUVar3;
		GameObject pUVar4;
		BaseCharacter b;
		BaseCharacter x;
		Dictionary<CustomLogicCollisionHandler, Collider> __this_02;

		if ((((other != null) &&(pUVar3 = other.transform, pUVar3 != null)) &&(pUVar3 = pUVar3.root, pUVar3 != null)) &&(pUVar4 = pUVar3.gameObject, pUVar4 != null)) {
			b = pUVar4.GetComponent<BaseCharacter>();
			pUVar4 = other.gameObject;
			if (pUVar4 == null) goto label_05be34a4;
			x = (BaseCharacter)pUVar4.GetComponent<CustomLogicCollisionHandler>();
			bVar2 = ((Object)b != null);
			if (bVar2) {
				a = this.Owner;
				bVar2 = TeamInfo.SameTeam(a, b);
				if (!bVar2) {
					pSVar1 = (HashSet<object>)this._charactersInside;
					if (pSVar1 == null) goto label_05be34a4;
					bVar2 = pSVar1.Contains((object)b);
					if (bVar2) {
						return;
					}
					pSVar1 = (HashSet<object>)this._charactersInside;
					if (pSVar1 == null) goto label_05be34a4;
					pSVar1.Add((object)b);
					__this_01 = this._characterDamageTimers;
					if (__this_01 == null) goto label_05be34a4;
					__this_01.set_Item((object)b, 0.0);
					__this_02 = (Dictionary<CustomLogicCollisionHandler, Collider>)this._characterColliders;
					if (__this_02 == null ) goto label_05be34a4;
					goto label_05be348e;
				}
			}
			bVar2 = ((Object)x != null);
			if (!bVar2) {
				return;
			}
			pSVar1 = (HashSet<object>)this._handlersInside;
			if (pSVar1 != null) {
				bVar2 = pSVar1.Contains((object)x);
				if (bVar2) {
					return;
				}
				pSVar1 = (HashSet<object>)this._handlersInside;
				if (pSVar1 != null) {
					pSVar1.Add((object)x);
					__this_00 = this._handlerDamageTimers;
					if (__this_00 != null) {
						__this_00.set_Item((object)x, 0.0);
						__this_02 = this._handlerColliders;
						if (__this_02 !=null) {
							b = x;
	label_05be348e: ;
							__this_02.set_Item((object)b, (object)other);
							return;
						}
					}
				}
			}
		}
	label_05be34a4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004042")]
	[Address(RVA = "0x5AE34B0", Offset = "0x5AE24B0", VA = "0x5AE34B0", Slot = "8")]
	protected override void OnTriggerStay(Collider other)
	{
		// Lifted from source/cpp/Characters/ContinuousDamageHitbox.c (Characters.ContinuousDamageHitbox$$OnTriggerStay): clean
		BaseCharacter a;
		HashSet<object> pSVar1;
		Dictionary<CustomLogicCollisionHandler, float> __this_00;
		Dictionary<BaseCharacter, float> __this_01;
		bool bVar2;
		Transform pUVar3;
		GameObject pUVar4;
		BaseCharacter b;
		BaseCharacter x;
		Dictionary<CustomLogicCollisionHandler, Collider> __this_02;

		if ((((other != null) &&(pUVar3 = other.transform, pUVar3 != null)) &&(pUVar3 = pUVar3.root, pUVar3 != null)) &&(pUVar4 = pUVar3.gameObject, pUVar4 != null)) {
			b = pUVar4.GetComponent<BaseCharacter>();
			pUVar4 = other.gameObject;
			if (pUVar4 == null) goto label_05be3794;
			x = (BaseCharacter)pUVar4.GetComponent<CustomLogicCollisionHandler>();
			bVar2 = ((Object)b != null);
			if (bVar2) {
				a = this.Owner;
				bVar2 = TeamInfo.SameTeam(a, b);
				if (!bVar2) {
					pSVar1 = (HashSet<object>)this._charactersInside;
					if (pSVar1 == null) goto label_05be3794;
					bVar2 = pSVar1.Contains((object)b);
					if (bVar2) {
						return;
					}
					pSVar1 = (HashSet<object>)this._charactersInside;
					if (pSVar1 == null) goto label_05be3794;
					pSVar1.Add((object)b);
					__this_01 = this._characterDamageTimers;
					if (__this_01 == null) goto label_05be3794;
					__this_01.set_Item((object)b, 0.0);
					__this_02 = (Dictionary<CustomLogicCollisionHandler, Collider>)this._characterColliders;
					if (__this_02 == null ) goto label_05be3794;
					goto label_05be377e;
				}
			}
			bVar2 = ((Object)x != null);
			if (!bVar2) {
				return;
			}
			pSVar1 = (HashSet<object>)this._handlersInside;
			if (pSVar1 != null) {
				bVar2 = pSVar1.Contains((object)x);
				if (bVar2) {
					return;
				}
				pSVar1 = (HashSet<object>)this._handlersInside;
				if (pSVar1 != null) {
					pSVar1.Add((object)x);
					__this_00 = this._handlerDamageTimers;
					if (__this_00 != null) {
						__this_00.set_Item((object)x, 0.0);
						__this_02 = this._handlerColliders;
						if (__this_02 !=null) {
							b = x;
	label_05be377e: ;
							__this_02.set_Item((object)b, (object)other);
							return;
						}
					}
				}
			}
		}
	label_05be3794: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004043")]
	[Address(RVA = "0x5AE37A0", Offset = "0x5AE27A0", VA = "0x5AE37A0", Slot = "12")]
	protected virtual void OnTriggerExit(Collider other)
	{
		// Lifted from source/cpp/Characters/ContinuousDamageHitbox.c (Characters.ContinuousDamageHitbox$$OnTriggerExit): clean
		HashSet<object> pSVar1;
		Dictionary<BaseCharacter, float> __this_00;
		Dictionary<CustomLogicCollisionHandler, float> __this_01;
		bool bVar2;
		Transform pUVar3;
		GameObject pUVar4;
		BaseCharacter x;
		BaseCharacter x_00;
		Dictionary<BaseCharacter, Collider> __this_02;

		if ((((other != null) &&(pUVar3 = other.transform, pUVar3 != null)) &&(pUVar3 = pUVar3.root, pUVar3 != null)) &&(pUVar4 = pUVar3.gameObject, pUVar4 != null)) {
			x = pUVar4.GetComponent<BaseCharacter>();
			pUVar4 = other.gameObject;
			if (pUVar4 == null) goto label_05be3a33;
			x_00 = (BaseCharacter)pUVar4.GetComponent<CustomLogicCollisionHandler>();
			bVar2 = ((Object)x != null);
			if (bVar2) {
				pSVar1 = (HashSet<object>)this._charactersInside;
				if (pSVar1 == null) goto label_05be3a33;
				bVar2 = pSVar1.Contains((object)x);
				if (bVar2) {
					pSVar1 = (HashSet<object>)this._charactersInside;
					if (pSVar1 == null) goto label_05be3a33;
					pSVar1.Remove((object)x);
					__this_00 = this._characterDamageTimers;
					if (__this_00 == null) goto label_05be3a33;
					__this_00.Remove((object)x);
					__this_02 = this._characterColliders;
					if (__this_02 == null) goto label_05be3a33;
					x_00 = x;
					goto label_05be3a17;
				}
			}
			bVar2 = ((Object)x_00 != null);
			if (!bVar2) {
				return;
			}
			pSVar1 = (HashSet<object>)this._handlersInside;
			if (pSVar1 != null) {
				bVar2 = pSVar1.Contains((object)x_00);
				if (!bVar2) {
					return;
				}
				pSVar1 = (HashSet<object>)this._handlersInside;
				if (pSVar1 != null) {
					pSVar1.Remove((object)x_00);
					__this_01 = this._handlerDamageTimers;
					if (__this_01 != null) {
						__this_01.Remove((object)x_00);
						__this_02 = (Dictionary<BaseCharacter, Collider>)this._handlerColliders;
						if (__this_02 != null) {
	label_05be3a17: ;
							__this_02.Remove((object)x_00);
							return;
						}
					}
				}
			}
		}
	label_05be3a33: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004044")]
	[Address(RVA = "0x5AE3A40", Offset = "0x5AE2A40", VA = "0x5AE3A40", Slot = "13")]
	protected virtual void Update()
	{
		// Lifted from source/cpp/Characters/ContinuousDamageHitbox.c (Characters.ContinuousDamageHitbox$$Update): 25 lines keep C-only constructs
		int piVar1;
		int iVar2;
		uint uVar3;
		List<BaseCharacter> pSVar4;
		HashSet<object> pSVar5;
		BaseCharacter[] pCVar6;
		Dictionary<BaseCharacter, float> pSVar7;
		Dictionary<object, object> pSVar8;
		List<CustomLogicCollisionHandler> pSVar9;
		CustomLogicCollisionHandler[] pCVar10;
		Dictionary<CustomLogicCollisionHandler, float> pSVar11;
		BaseCharacter pCVar13;
		bool bVar14;
		Collider pUVar15;
		float fVar16;
		byte[] auStack_c8 = new byte[16];
		BaseCharacter pCStack_b8;
		float fStack_ac;
		byte[] auStack_a8 = new byte[8];
		ulong uStack_a0;
		BaseCharacter pCStack_98;
		byte[] auStack_88 = new byte[8];
		BaseCharacter pCStack_78;
		byte[] auStack_68 = new byte[8];
		BaseCharacter pCStack_58;
		byte[] auStack_48 = new byte[8];
		BaseCharacter pCStack_38;

		if (Il2CppMethodInitialized_075475d1 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Enumerator_CustomLogicCollisionHandler_MoveNext) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCollisionHandler_get_Current) ;
			Il2CppMethodInitialized_075475d1 = true;
		}
		auStack_48 = (byte[])0x0;
		pCStack_38 = null;
		auStack_68 = (byte[])0x0;
		pCStack_58 = null;
		auStack_88 = (byte[])0x0;
		pCStack_78 = null;
		auStack_a8 = (byte[])0x0;
		uStack_a0._0_4_ = 0;
		uStack_a0._4_4_ = 0;
		pCStack_98 = null;
		bVar14 = this.IsActive();
		if (!bVar14) {
			return;
		}
		pSVar4 = this._charactersToRemove;
		if (pSVar4 != null) {
			piVar1 = &pSVar4._version;
			*piVar1 = *piVar1 + 1;
			iVar2 = pSVar4._size;
			pSVar4._size = 0;
			if (0 < iVar2) {
				Array.Clear((Array)pSVar4._items, 0, iVar2);
			}
			pSVar5 = (HashSet<object>)this._charactersInside;
			if (pSVar5 != null) {
				auStack_c8.GetEnumerator(pSVar5);
				pCStack_38 = pCStack_b8;
				auStack_48 = (byte[])auStack_c8._0_8_;
				auStack_c8._0_8_ = null;
				auStack_c8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_48;
	label_05be3d27: ;
				bVar14 = auStack_48.MoveNext();
				pCVar13 = pCStack_38;
				if (bVar14) {
					bVar14 = ((Object)pCVar13 == null);
					if (!bVar14) {
						if (pCVar13 == null) {
							throw new NullReferenceException();
						}
						if (pCVar13.Dead == false) {
							pSVar7 = this._characterDamageTimers;
							if (pSVar7 == null) {
								throw new NullReferenceException();
							}
							bVar14 = pSVar7.ContainsKey((object)pCVar13);
							if (bVar14) {
								pSVar7 = this._characterDamageTimers;
								if (pSVar7 == null) {
									throw new NullReferenceException();
								}
								fStack_ac = pSVar7.get_Item((object)pCVar13);
								fVar16 = Time.deltaTime;
								pSVar7.set_Item((object)pCVar13, fStack_ac + fVar16);
								pSVar7 = this._characterDamageTimers;
								if (pSVar7 == null) {
									throw new NullReferenceException();
								}
								fVar16 = pSVar7.get_Item((object)pCVar13);
								if (this.DamageInterval <= fVar16) {
									pSVar8 = (Dictionary<object, object>)this._characterColliders;
									if (pSVar8 == null) {
										throw new NullReferenceException();
									}
									bVar14 = pSVar8.ContainsKey((object)pCVar13);
									if (bVar14) {
										pSVar8 = (Dictionary<object, object>)this._characterColliders;
										if (pSVar8 == null) {
											throw new NullReferenceException();
										}
										pUVar15 = pSVar8.get_Item((object)pCVar13);
										this.OnHit(pCVar13, pUVar15);
									}
									pSVar7 = this._characterDamageTimers;
									if (pSVar7 == null) {
										throw new NullReferenceException();
									}
									pSVar7.set_Item((object)pCVar13, 0.0);
								}
							}
							goto label_05be3d27;
						}
					}
					pSVar4 = this._charactersToRemove;
					if (pSVar4 == null) {
	label_05be435f: ;
						throw new NullReferenceException();
					}
					piVar1 = &pSVar4._version;
					*piVar1 = *piVar1 + 1;
					pCVar6 = pSVar4._items;
					if (pCVar6 == null) goto label_05be435f;
					uVar3 = pSVar4._size;
					if (uVar3 < (uint)pCVar6.Length) {
						pSVar4._size = uVar3 + 1;
						pCVar6[(int)uVar3] = pCVar13;
					}
					else {
						pSVar4.AddWithResize((object)pCVar13);
					}
					goto label_05be3d27;
				}
				auStack_48.Dispose();
				pSVar4 = this._charactersToRemove;
				if (pSVar4 != null) {
					auStack_c8.GetEnumerator((List<object>)pSVar4);
					pCStack_58 = pCStack_b8;
					auStack_68 = (byte[])auStack_c8._0_8_;
					auStack_c8._0_8_ = null;
					auStack_c8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_68;
					while (true) {
						bVar14 = auStack_68.MoveNext();
						pCVar13 = pCStack_58;
						if (!(bVar14)) break;
						pSVar5 = (HashSet<object>)this._charactersInside;
						if (pSVar5 == null) {
							throw new NullReferenceException();
						}
						pSVar5.Remove((object)pCStack_58) ;
						pSVar7 = this._characterDamageTimers;
						if (pSVar7 == null) {
							throw new NullReferenceException();
						}
						pSVar7.Remove((object)pCVar13);
						pSVar8 = (Dictionary<object, object>)this._characterColliders;
						if (pSVar8 == null) {
							throw new NullReferenceException();
						}
						pSVar8.Remove((object)pCVar13);
					}
					auStack_68.Dispose();
					pSVar9 = this._handlersToRemove;
					if (pSVar9 != null) {
						piVar1 = &pSVar9._version;
						*piVar1 = *piVar1 + 1;
						iVar2 = pSVar9._size;
						pSVar9._size = 0;
						if (0 < iVar2) {
							Array.Clear((Array)pSVar9._items, 0, iVar2);
						}
						pSVar5 = (HashSet<object>)this._handlersInside;
						if (pSVar5 != null) {
							auStack_c8.GetEnumerator(pSVar5);
							pCStack_78 = pCStack_b8;
							auStack_88 = (byte[])auStack_c8._0_8_;
							auStack_c8._0_8_ = null;
							auStack_c8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_88;
							while (true) {
								bVar14 = auStack_88.MoveNext();
								pCVar13 = pCStack_78;
								if (!(bVar14)) break;
								bVar14 = ((Object)pCVar13 == null);
								if (bVar14) {
									pSVar9 = this._handlersToRemove;
									if (pSVar9 == null) {
	label_05be4382: ;
										throw new NullReferenceException();
									}
									piVar1 = &pSVar9._version;
									*piVar1 = *piVar1 + 1;
									pCVar10 = pSVar9._items;
									if (pCVar10 == null) goto label_05be4382;
									uVar3 = pSVar9._size;
									if (uVar3 < (uint)pCVar10.Length) {
										pSVar9._size = uVar3 + 1;
										pCVar10[(int)uVar3] = (CustomLogicCollisionHandler)pCVar13;
									}
									else {
										pSVar9.AddWithResize((object)pCVar13);
									}
								}
								else {
									pSVar11 = this._handlerDamageTimers;
									if (pSVar11 ==null) {
										throw new NullReferenceException();
									}
									bVar14 = pSVar11.ContainsKey((object)pCVar13);
									if (bVar14) {
										pSVar11 = this._handlerDamageTimers;
										if (pSVar11 ==null) {
											throw new NullReferenceException();
										}
										fStack_ac = pSVar11.get_Item((object)pCVar13);
										fVar16 = Time.deltaTime;
										pSVar11.set_Item((object)pCVar13, fStack_ac + fVar16);
										pSVar11 = this._handlerDamageTimers;
										if (pSVar11 ==null) {
											throw new NullReferenceException();
										}
										fVar16 = pSVar11.get_Item((object)pCVar13);
										if (this.DamageInterval <= fVar16) {
											pSVar8 = (Dictionary<object, object>)this._handlerColliders;
											if (pSVar8 == null) {
												throw new NullReferenceException();
											}
											bVar14 = pSVar8.ContainsKey((object)pCVar13);
											if (bVar14) {
												pSVar8 = (Dictionary<object, object>)this._handlerColliders;
												if (pSVar8 == null) {
													throw new NullReferenceException();
												}
												pUVar15 = pSVar8.get_Item((object)pCVar13);
												this.OnHit((CustomLogicCollisionHandler)pCVar13, pUVar15);
											}
											pSVar11 = this._handlerDamageTimers;
											if (pSVar11 ==null) {
												throw new NullReferenceException();
											}
											pSVar11.set_Item((object)pCVar13, 0.0);
										}
									}
								}
							}
							auStack_88.Dispose();
							pSVar9 = this._handlersToRemove;
							if (pSVar9 != null) {
								auStack_c8.GetEnumerator((List<object>)pSVar9) ;
								pCStack_98 = pCStack_b8;
								auStack_a8 = (byte[])auStack_c8._0_8_;
								uStack_a0 = (System_Collections_Generic_List_Enumerator_object__o)auStack_c8._8_8_;
								auStack_c8._0_8_ = null;
								auStack_c8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_a8;
								while(true) {
									bVar14 = auStack_a8.MoveNext();
									pCVar13 = pCStack_98;
									if (!bVar14) {
										auStack_a8.Dispose();
										return;
									}
									pSVar5 = (HashSet<object>)this._handlersInside;
									if (pSVar5 == null) {
										throw new NullReferenceException();
									}
									pSVar5.Remove((object)pCStack_98);
									pSVar11 = this._handlerDamageTimers;
									if (pSVar11 ==null) {
										throw new NullReferenceException();
									}
									pSVar11.Remove((object)pCVar13);
									pSVar8 = (Dictionary<object, object>)this._handlerColliders;
									if (pSVar8 == null) break;
									pSVar8.Remove((object)pCVar13);
								}
								throw new NullReferenceException();
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004045")]
	[Address(RVA = "0x5AE45E0", Offset = "0x5AE35E0", VA = "0x5AE45E0", Slot = "10")]
	protected override void OnHit(BaseCharacter victim, Collider collider)
	{
		// Lifted from source/cpp/Characters/ContinuousDamageHitbox.c (Characters.ContinuousDamageHitbox$$OnHit): clean
		BaseCharacter pCVar1;

		pCVar1 = this.Owner;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pCVar1.OnHit((BaseHitbox)this, (object)victim, collider, "", true);
		return;
	}

	[Token(Token = "0x6004046")]
	[Address(RVA = "0x5AE4660", Offset = "0x5AE3660", VA = "0x5AE4660", Slot = "11")]
	protected override void OnHit(CustomLogicCollisionHandler handler, Collider collider)
	{
		// Lifted from source/cpp/Characters/ContinuousDamageHitbox.c (Characters.ContinuousDamageHitbox$$OnHit): clean
		BaseCharacter pCVar1;

		pCVar1 = this.Owner;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pCVar1.OnHit((BaseHitbox)this, (object)handler, collider, "", true);
		return;
	}

	[Token(Token = "0x6004047")]
	[Address(RVA = "0x5AE46E0", Offset = "0x5AE36E0", VA = "0x5AE46E0")]
	public ContinuousDamageHitbox()
	{
		// Lifted from source/cpp/Characters/ContinuousDamageHitbox.c (Characters.ContinuousDamageHitbox$$.ctor): 6 lines keep C-only constructs
		Dictionary<BaseCharacter, float> __this_00;
		Dictionary<BaseCharacter, Collider> __this_01;
		HashSet<BaseCharacter> __this_02;
		Dictionary<CustomLogicCollisionHandler, float> __this_03;
		Dictionary<CustomLogicCollisionHandler, Collider> __this_04;
		HashSet<CustomLogicCollisionHandler> __this_05;
		List<BaseCharacter> __this_06;
		List<CustomLogicCollisionHandler> __this_07;

		if (Il2CppMethodInitialized_075475d4 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCharacter_ctor) ;
			Il2CppMethodInitialized_075475d4 = true;
		}
		this.DamagePerSecond = 100;
		this.DamageInterval = 0.1;
		__this_00 = new Dictionary<BaseCharacter, float>();
		this._characterDamageTimers = __this_00;
		__this_01 = il2cpp_codegen_object_new(typeof(Dictionary<BaseCharacter, Collider>)) ;
		__this_01 = new Dictionary<object, object>();
		this._characterColliders = __this_01;
		__this_02 = new HashSet<BaseCharacter>();
		this._charactersInside = __this_02;
		__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<CustomLogicCollisionHandler, float>));
		__this_03 = new Dictionary<object, float>();
		this._handlerDamageTimers = __this_03;
		__this_04 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<CustomLogicCollisionHandler, Collider>));
		__this_04 = new Dictionary<object, object>();
		this._handlerColliders = __this_04;
		__this_05 = il2cpp_codegen_object_new((Il2CppClass)typeof(HashSet<CustomLogicCollisionHandler>));
		__this_05 = new HashSet<object>();
		this._handlersInside = __this_05;
		__this_06 = il2cpp_codegen_object_new(typeof(List<BaseCharacter>)) ;
		__this_06 = new List<object>();
		this._charactersToRemove = __this_06;
		__this_07 = new List<CustomLogicCollisionHandler>();
		this._handlersToRemove = __this_07;
		base();
		return;
	}
}
