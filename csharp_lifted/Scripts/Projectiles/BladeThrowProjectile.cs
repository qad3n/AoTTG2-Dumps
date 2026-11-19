// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.BladeThrowProjectile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/BladeThrowProjectile.c
// Prior real C# source (older reference): Assets/Scripts/Projectiles/BladeThrowProjectile.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x2000074")]
internal class BladeThrowProjectile : BaseProjectile
{
	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0xE0")]
	protected Transform _blade;

	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0xE8")]
	protected GameObject _model;

	[Token(Token = "0x4000240")]
	[FieldOffset(Offset = "0xF0")]
	private MeleeWeaponTrail WeaponTrail;

	[Token(Token = "0x4000241")]
	[FieldOffset(Offset = "0xF8")]
	public Vector3 InitialPlayerVelocity;

	[Token(Token = "0x17000083")]
	protected override float DestroyDelay
	{
		[Token(Token = "0x6000342")]
		[Address(RVA = "0x5770120", Offset = "0x576F120", VA = "0x5770120", Slot = "11")]
		get
		{
			// Lifted from source/cpp/Projectiles/BladeThrowProjectile.c (Projectiles.BladeThrowProjectile$$get_DestroyDelay): clean
			return 1.5;
		}
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x5770130", Offset = "0x576F130", VA = "0x5770130", Slot = "5")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Projectiles/BladeThrowProjectile.c (Projectiles.BladeThrowProjectile$$Awake): 3 lines keep C-only constructs
		GraphicsSettings pSVar1;
		IntSetting pSVar2;
		Transform pUVar3;
		GameObject pUVar4;
		MeleeWeaponTrail pMVar5;
		MeleeWeaponTrail* targetAddress;

		this.Awake();
		pUVar3 = this.transform;
		if (pUVar3 != null) {
			pUVar3 = pUVar3.Find("Blade");
			this._blade = pUVar3;
			pUVar3 = this._blade;
			if (pUVar3 != null) {
				pUVar3 = pUVar3.Find("Model");
				if (pUVar3 != null) {
					pUVar4 = pUVar3.gameObject;
					this._model = pUVar4;
					pMVar5 = this.GetComponentInChildren<MeleeWeaponTrail>();
					this.WeaponTrail = pMVar5;
					targetAddress = &this.WeaponTrail;
					pSVar1 = SettingsManager.GraphicsSettings;
					if ((pSVar1 != null) &&(pSVar2 = pSVar1.WeaponTrail, pSVar2 != null)) {
						pMVar5 = *targetAddress;
						if (pSVar2._value == 0) {
							if (pMVar5 != null) {
								pMVar5._emit = false;
								return;
							}
						}
						else if (pMVar5 != null) {
							pMVar5._emit = true;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x5770290", Offset = "0x576F290", VA = "0x5770290")]
	protected void Start()
	{
		// Lifted from source/cpp/Projectiles/BladeThrowProjectile.c (Projectiles.BladeThrowProjectile$$Start): 3 lines keep C-only constructs
		byte bVar1;
		BaseCharacter pCVar2;
		MeleeWeaponTrail pMVar3;
		String pSVar4;
		String SVar5;
		bool bVar6;
		BaseCharacter pCVar7;

		pCVar2 = this._owner;
		bVar6 = ((Object)pCVar2 == null);
		if ((!bVar6) && (pCVar2 = this._owner, pCVar2 != null)) {
			pCVar7 = pCVar2.klass;
			bVar1 = (typeof(Human)._2).typeHierarchyDepth;
			if ((pCVar7._2).typeHierarchyDepth < bVar1) {
				return;
			}
			if ((pCVar7._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human)) {
				return;
			}
			if (pCVar2.EffectsEnabled == false) {
				pMVar3 = this.WeaponTrail;
				if (pMVar3 == null) goto label_058703cf;
				pMVar3._emit = false;
				pCVar7 = pCVar2.klass;
			}
			bVar6 = pCVar2.IsMine();
			if (bVar6) {
				pCVar2 = this._owner;
				if (pCVar2 != null) {
					bVar1 = (typeof(Human)._2).typeHierarchyDepth;
					if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human))) {
						throw new InvalidCastException();
					}
					pSVar4 = (*(ulong)((sbyte)pCVar2 + 0x150));
					if (((pSVar4 != null) &&(SVar5 = pSVar4[0xf], SVar5 != (String)0x0)) &&(pMVar3 = this.WeaponTrail, pMVar3 != null)) {
						pMVar3.SetMaterial(*(Material*)((long)SVar5 + 0x28));
						return;
					}
				}
	label_058703cf: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x57703E0", Offset = "0x576F3E0", VA = "0x57703E0", Slot = "15")]
	protected override void RegisterObjects()
	{
		// Lifted from source/cpp/Projectiles/BladeThrowProjectile.c (Projectiles.BladeThrowProjectile$$RegisterObjects): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<GameObject> __this_00;
		GameObject item;
		GameObject[] pUVar3;

		__this_00 = this._hideObjects;
		if (__this_00 != null) {
			item = this._model;
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x5770470", Offset = "0x576F470", VA = "0x5770470", Slot = "19")]
	[PunRPC]
	public override void DisableRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Projectiles/BladeThrowProjectile.c (Projectiles.BladeThrowProjectile$$DisableRPC): clean
		PhotonView pPVar1;

		if (this.Disabled == false) {
			pPVar1 = this.photonView;
			if (pPVar1 == null) {
				throw new NullReferenceException();
			}
			if (info.Sender == pPVar1._Owner_k__BackingField) {
				this.DisableRPC(info);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x57704C0", Offset = "0x576F4C0", VA = "0x57704C0")]
	private void OnCollisionEnter(Collision collision)
	{
		// Lifted from source/cpp/Projectiles/BladeThrowProjectile.c (Projectiles.BladeThrowProjectile$$OnCollisionEnter): 24 lines keep C-only constructs
		byte bVar1;
		bool bVar3;
		PhotonView pPVar4;
		Collider pUVar5;
		Transform pUVar6;
		BaseCharacter a;
		AudioSource __this_00;
		String pSVar7;
		float fVar8;
		float fVar9;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		ulong uVar10;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		uint uVar11;
		uint uVar12;
		Quaternion UVar13;
		Vector3 UVar14;
		float fStack_7c;
		Vector3 UStack_78;
		byte[] auStack_68 = new byte[16];
		float fStack_58;
		float fStack_54;
		byte[] auStack_48 = new byte[16];
		Vector3 UStack_30;

		pPVar4 = this.photonView;
		if (pPVar4 == null) goto label_05870860;
		if (pPVar4._IsMine_k__BackingField == false) {
			return;
		}
		if (this.Disabled != false) {
			return;
		}
		if ((((collision == null) ||(pUVar5 = collision.collider, pUVar5 == null)) ||(pUVar6 = pUVar5.transform, pUVar6 == null)) ||(pUVar6 = pUVar6.root, pUVar6 == null)) goto label_05870860;
		a = pUVar6.GetComponent<BaseCharacter>();
		bVar3 = ((Object)a == null);
		if (bVar3) {
			pSVar7 = EffectPrefabs.BladeThrowHit;
			pUVar6 = this.transform;
			if (pUVar6 == null) goto label_05870860;
			UVar14 = pUVar6.position;
			fStack_7c = UVar14.z;
			auStack_48._8_4_ = extraout_XMM0_Dc;
			auStack_48._0_8_ = UVar14._0_8_;
			auStack_48._12_4_ = extraout_XMM0_Dd;
			UStack_78.x = this._velocity.x;
			UStack_78.y = this._velocity.y;
			UStack_78.z = this._velocity.z;
			UStack_30.x = (Vector3.upVector).x;
			UStack_30.y = (Vector3.upVector).y;
			UStack_30.z = (Vector3.upVector).z;
			in_XMM1_Dc = 0;
			in_XMM1_Dd = 0;
			UVar13 = Quaternion.Internal_LookRotation(ref UStack_78, ref UStack_30);
			uVar10 = UVar13._8_8_;
			fVar8 = UVar13.x;
			fVar9 = UVar13.y;
	label_058706ac: ;
			uVar11 = (int)uVar10;
			uVar12 = (int)((ulong)uVar10 >> 0x20);
			if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
				auStack_68._8_4_ = in_XMM1_Dc;
				auStack_68._0_8_ = uVar10;
				auStack_68._12_4_ = in_XMM1_Dd;
				fStack_58 = fVar8;
				fStack_54 = fVar9;
				fVar8 = fStack_58;
				fVar9 = fStack_54;
				uVar11 = auStack_68._0_4_;
				uVar12 = auStack_68._4_4_;
			}
			UVar13.y = fVar9;
			UVar13.x = fVar8;
			UVar13.w = (float)uVar12;
			UVar13.z = (float)uVar11;
			UVar14.z = fStack_7c;
			UVar14.x = (float)auStack_48._0_4_;
			UVar14.y = (float)auStack_48._4_4_;
			EffectSpawner.Spawn(pSVar7, UVar14, UVar13, 1.0, true, null);
		}
		else {
			pSVar7 = this._team;
			bVar3 = TeamInfo.SameTeam(a, pSVar7);
			if ((!bVar3) && (a != null)) {
				bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
				if ((bVar1 <= (a.klass._2).typeHierarchyDepth) &&((a.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BaseTitan))) {
					pSVar7 = EffectPrefabs.Blood1;
					pUVar6 = this.transform;
					if (pUVar6 == null) goto label_05870860;
					UVar14 = pUVar6.position;
					fStack_7c = UVar14.z;
					auStack_48._8_4_ = extraout_XMM0_Dc_00;
					auStack_48._0_8_ = UVar14._0_8_;
					auStack_48._12_4_ = extraout_XMM0_Dd_00;
					UStack_78.x = 4.712389;
					UStack_78.y = 0.0;
					UStack_78.z = 0.0;
					UVar13 = Quaternion.Internal_FromEulerRad(ref UStack_78);
					uVar10 = UVar13._8_8_;
					fVar8 = UVar13.x;
					fVar9 = UVar13.y;
					goto label_058706ac;
				}
			}
		}
		pUVar6 = this.transform;
		if (((pUVar6 != null) &&(pUVar6 = pUVar6.Find("BladeHit"), pUVar6 != null)) &&(__this_00 = pUVar6.GetComponent<AudioSource>(), __this_00 != null)) {
			__this_00.Play();
			pUVar5 = collision.collider;
			this.CheckHurtboxes(pUVar5);
			this.DestroySelf();
			return;
		}
	label_05870860: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x5770870", Offset = "0x576F870", VA = "0x5770870")]
	private void CheckHurtboxes(Collider firstCollider)
	{
		// Lifted from source/cpp/Projectiles/BladeThrowProjectile.c (Projectiles.BladeThrowProjectile$$CheckHurtboxes): 29 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		byte bVar4;
		uint uVar5;
		Object y;
		BaseMenu obj;
		BaseCamera obj_00;
		List<object> __this_00;
		BaseComponentCache pUVar7;
		object x;
		bool bVar8;
		byte bVar9;
		sbyte cVar10;
		LayerMask mask;
		int iVar11;
		SphereCollider __this_01;
		Transform pUVar12;
		Int32[] layers;
		Collider[] pUVar13;
		List<Collider> __this_02;
		HashSet<Horse> __this_03;
		GameObject pUVar14;
		BaseCharacter pCVar15;
		CustomLogicCollisionHandler __this_04;
		String pSVar16;
		JSONNode pSVar17;
		object pIVar18;
		InGameMenu pUVar19;
		InGameCamera pCVar20;
		AudioSource __this_05;
		BaseCharacter pCVar21;
		BaseCharacter pCVar22;
		MethodInfo pMVar23;
		float fVar24;
		uint uVar25;
		uint uVar26;
		Quaternion UVar27;
		Quaternion rotation;
		Vector3 UVar28;
		Vector3 position;
		float local_b8;
		System_Collections_Generic_List_Enumerator_object__o local_98;
		byte[] local_80 = new byte[16];
		Object local_70;
		byte[] local_68 = new byte[16];
		Vector3 local_58;
		float local_48;

		local_98._list = null;
		local_98._index = 0;
		local_98._version = 0;
		local_98._current = null;
		__this_01 = this.GetComponent<SphereCollider>();
		if (__this_01 != null) {
			fVar24 = __this_01.radius;
			pUVar12 = this.transform;
			if (pUVar12 != null) {
				UVar28 = pUVar12.lossyScale;
				pUVar12 = this.transform;
				if (pUVar12 != null) {
					position = pUVar12.position;
					layers = (Int32[])new int[3];
					if (layers != null) {
						uVar5 = (uint)layers.Length;
						if (uVar5 != 0) {
							layers[0] = PhysicsLayer.Hurtbox;
							if ((uVar5 != 1) && (layers[1] = PhysicsLayer.Human, 2 < uVar5)) {
								local_b8 = UVar28.x;
								layers[2] = PhysicsLayer.NPC;
								mask = PhysicsLayer.GetMask(layers);
								iVar11 = ((LayerMask)mask);
								uVar25 = 0;
								uVar26 = 0;
								pUVar13 = Physics.OverlapSphere(position, fVar24 * local_b8 * 1.3, iVar11);
								__this_02 = new List<Collider>((IEnumerable<T>)pUVar13);
								__this_03 = new HashSet<Horse>();
								if (__this_02 != null) {
									bVar8 = __this_02.Contains((object)firstCollider);
									if (!bVar8) {
										piVar1 = &__this_02._version;
										*piVar1 = *piVar1 + 1;
										pUVar13 = __this_02._items;
										if (pUVar13 == null) goto label_05871700;
										uVar5 = __this_02._size;
										if (uVar5 < (uint)pUVar13.Length) {
											__this_02._size = uVar5 + 1;
											pUVar13[(int)uVar5] = firstCollider;
										}
										else {
											__this_02.AddWithResize((object)firstCollider);
										}
									}
									local_80.GetEnumerator((List<object>)__this_02);
									local_98._current = (object)local_70;
									local_98._list = (List<T>)local_80._0_8_;
									local_98._index = local_80._8_4_;
									local_98._version = local_80._12_4_;
									local_80._0_8_ = null;
									local_80._8_8_ = &local_98;
	label_05870ca0: ;
									do {
										do {
											do {
												do {
													while(true) {
														bVar8 = local_98.MoveNext();
														x = local_98._current;
														if (!bVar8) {
															local_98.Dispose() ;
															return;
														}
														if ((Object)local_98._current == null) {
															throw new NullReferenceException();
														}
														pUVar12 = local_98._current.transform;
														if (pUVar12 == null) {
															throw new NullReferenceException();
														}
														pUVar12 = pUVar12.root;
														if (pUVar12 == null) {
															throw new NullReferenceException();
														}
														pUVar14 = pUVar12.gameObject;
														if (pUVar14 == null) {
															throw new NullReferenceException();
														}
														pCVar15 = pUVar14.GetComponent<BaseCharacter>();
														pUVar14 = x.gameObject;
														if (pUVar14 == null) {
															throw new NullReferenceException();
														}
														pMVar23 = MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler ;
														__this_04 = pUVar14.GetComponent<CustomLogicCollisionHandler>();
														iVar11 = this.CalculateDamage();
														bVar8 = ((Object)__this_04 != null);
														pSVar16 = "BladeThrow";
														if (!bVar8) break;
														pCVar15 = this._owner;
														pCVar22 = pCVar15;
														if (Il2CppMethodInitialized_07545163 == false) {
															Il2CppMethodInitialized_07545163 = true;
															pCVar22 = this._owner;
														}
														bVar8 = ((Object)pCVar22 != null);
														if (bVar8) {
															pCVar22 = this._owner;
															if (pCVar22 == null) {
																throw new NullReferenceException();
															}
															pSVar16 = pCVar22.RichTextName;
														}
														pUVar12 = this.transform;
														if (pUVar12 == null) {
															throw new NullReferenceException();
														}
														UVar28 = pUVar12.position;
														if (__this_04 == null) {
															throw new NullReferenceException();
														}
														__this_04.GetHit(pCVar15, pSVar16, iVar11, "BladeThrow", UVar28);
													}
													bVar8 = ((Object)pCVar15 == null);
												} while (bVar8);
												pCVar22 = this._owner;
												bVar8 = ((Object)pCVar15 == (Object)pCVar22);
											} while (bVar8);
											pSVar16 = this._team;
											bVar8 = TeamInfo.SameTeam(pCVar15, pSVar16);
										} while (bVar8);
										if (pCVar15 == null) {
											throw new NullReferenceException();
										}
									} while (pCVar15.Dead != false);
									pCVar21 = pCVar15.klass;
									bVar9 = (pCVar21._2).typeHierarchyDepth;
									bVar4 = (typeof(Horse)._2).typeHierarchyDepth;
									if ((bVar4 <= bVar9) &&((pCVar21._2).typeHierarchy[(ulong)bVar4 - 1] == typeof(Horse)) ) goto code_r0x05870f2f;
									goto label_05870f62;
								}
								goto label_05871700;
							}
						}
						throw new IndexOutOfRangeException();
					}
				}
			}
		}
	label_05871700: ;
		throw new NullReferenceException();
	code_r0x05870f2f: ;
		if (__this_03 == null) {
			throw new NullReferenceException();
		}
		bVar8 = __this_03.Add((object)pCVar15);
		if (bVar8) {
			pCVar21 = pCVar15.klass;
			bVar9 = (pCVar21._2).typeHierarchyDepth;
	label_05870f62: ;
			bVar4 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if ((bVar9 < bVar4) ||((pCVar21._2).typeHierarchy[(ulong)bVar4 - 1] != typeof(BaseTitan))) {
				pCVar22 = this._owner;
				bVar8 = ((Object)pCVar22 != null);
				if ((bVar8) && (pCVar22 = this._owner, pCVar22 != null)) {
					pCVar21 = pCVar22.klass;
					bVar9 = (typeof(Human)._2).typeHierarchyDepth;
					if ((bVar9 <= (pCVar21._2).typeHierarchyDepth) &&((pCVar21._2).typeHierarchy[(ulong)bVar9 - 1] == typeof(Human))) {
						pUVar19 = (InGameMenu)UIManager.CurrentMenu;
						if (pUVar19 == null) {
							throw new NullReferenceException();
						}
						bVar9 = (typeof(InGameMenu)._2).typeHierarchyDepth;
						if (((pUVar19.klass._2).typeHierarchyDepth < bVar9) ||((pUVar19.klass._2).typeHierarchy[(ulong)bVar9 - 1] != typeof(InGameMenu))) {
							throw new InvalidCastException();
						}
						pUVar19.ShowKillScore(iVar11, false);
						pCVar22 = this._owner;
						pSVar16 = x.name;
						pCVar15.GetHit(pCVar22, iVar11, "BladeThrow", pSVar16);
						pUVar7 = pCVar15.Cache;
						if (pUVar7 == null) {
							throw new NullReferenceException();
						}
						pUVar12 = pUVar7.Transform;
						if (pUVar12 == null) {
							throw new NullReferenceException();
						}
						pCVar20 = (InGameCamera)SceneLoader.CurrentCamera;
						UVar28 = pUVar12.position;
						if (pCVar20 == null) {
							throw new NullReferenceException();
						}
						bVar9 = (typeof(InGameCamera)._2).typeHierarchyDepth;
						if (((pCVar20.klass._2).typeHierarchyDepth < bVar9) ||((pCVar20.klass._2).typeHierarchy[(ulong)bVar9 - 1] !=typeof(InGameCamera))) {
							throw new InvalidCastException();
						}
						pCVar20.TakeSnapshot(UVar28, iVar11);
						goto label_05870ca0;
					}
				}
				pSVar16 = x.name;
				pCVar15.GetHit("Blade", 100, "BladeThrow", pSVar16);
				goto label_05870ca0;
			}
			if (pCVar15.AI != false) {
				pUVar12 = this.transform;
				if (pUVar12 == null) {
					throw new NullReferenceException();
				}
				UVar28 = pUVar12.position;
				uVar2 = this._velocity.x;
				uVar3 = this._velocity.y;
				local_68._4_4_ = uVar3;
				local_68._0_4_ = uVar2;
				local_68._8_8_ = 0;
				fVar24 = this._velocity.z;
				local_48 = Time.fixedDeltaTime;
				if ((*(ulong)((sbyte)pCVar15 + 0x108)) == null) {
					throw new NullReferenceException();
				}
				y = *(Object*)((long)(*(ulong)((sbyte)pCVar15 + 0x108)) + 0x68);
				bVar8 = ((Object)x == y);
				if (bVar8) {
					pSVar17 = CharacterData.HumanWeaponInfo;
					if (pSVar17 == null) {
						throw new NullReferenceException();
					}
					pSVar17 = pSVar17.get_Item("Blade");
					if (pSVar17 == null) {
						throw new NullReferenceException();
					}
					pSVar17 = pSVar17.get_Item("RestrictAngle");
					if (pSVar17 == null) {
						throw new NullReferenceException();
					}
					_fVar29 = pSVar17.get_AsFloat();
					fVar24 = fVar24 * local_48;
					local_b8 = UVar28.x;
					uVar25 = 0;
					uVar26 = 0;
					cVar10 = (*(code)((Il2CppClass)pCVar15.klass).vtable[202].methodPtr)(local_b8 - ((float)local_68._0_4_ * local_48 + (float)local_68._0_4_ * local_48), UVar28.z - (fVar24 + fVar24),(undefined8)_fVar29,pCVar15);
					if (cVar10 == false) goto label_05870ca0;
					pCVar22 = this._owner;
					bVar8 = ((Object)pCVar22 != null);
					if ((bVar8) && (pCVar22 = this._owner, pCVar22 != null)) {
						pCVar21 = pCVar22.klass;
						bVar9 = (typeof(Human)._2).typeHierarchyDepth;
						if ((bVar9 <= (pCVar21._2).typeHierarchyDepth) &&((pCVar21._2).typeHierarchy[(ulong)bVar9 - 1] == typeof(Human))) {
							obj = UIManager.CurrentMenu;
							pIVar18 = il2cpp_codegen_is_inst_class((object)obj, typeof(InGameMenu));
							if (pIVar18 == null) {
								throw new NullReferenceException();
							}
							pUVar19 = (InGameMenu)il2cpp_codegen_is_inst_class((object)obj, typeof(InGameMenu));
							pUVar19.ShowKillScore(iVar11, false);
							if ((*(ulong)((sbyte)pCVar15 + 0x108)) == null) {
								throw new NullReferenceException();
							}
							pUVar12 = *(Transform*)((long)(*(ulong)((sbyte)pCVar15 + 0x108)) + 0x40);
							if (pUVar12 == null) {
								throw new NullReferenceException();
							}
							obj_00 = SceneLoader.CurrentCamera;
							UVar28 = pUVar12.position;
							pIVar18 = il2cpp_codegen_is_inst_class((object)obj_00, typeof(InGameCamera));
							if (pIVar18 == null) {
								throw new NullReferenceException();
							}
							pCVar20 = (InGameCamera)il2cpp_codegen_is_inst_class((object)obj_00, typeof(InGameCamera));
							uVar25 = 0;
							uVar26 = 0;
							pCVar20.TakeSnapshot(UVar28, iVar11);
						}
					}
					pUVar12 = this.transform;
					if (pUVar12 == null) {
						throw new NullReferenceException();
					}
					pUVar12 = pUVar12.Find("BladeHitNape");
					if (pUVar12 == null) {
						throw new NullReferenceException();
					}
					__this_05 = pUVar12.GetComponent<AudioSource>();
					if (__this_05 == null) {
						throw new NullReferenceException();
					}
					__this_05.Play();
				}
				if ((*(ulong)((sbyte)pCVar15 + 0x108)) == null) {
					throw new NullReferenceException();
				}
				__this_00 = *(List<object>*)((long)(*(ulong)((sbyte)pCVar15 + 0x108)) + 0xf8);
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				bVar8 = __this_00.Contains(x);
				if (bVar8) {
					pSVar16 = EffectPrefabs.CriticalHit;
					pUVar12 = this.transform;
					if (pUVar12 == null) {
						throw new NullReferenceException();
					}
					UVar28 = pUVar12.position;
					local_58.x = 4.712389;
					local_58.y = 0.0;
					local_58.z = 0.0;
					UVar27 = Quaternion.Internal_FromEulerRad(ref local_58);
					local_68._8_4_ = uVar25;
					local_68._0_8_ = UVar27._8_8_;
					local_68._12_4_ = uVar26;
					uVar25 = 0;
					uVar26 = 0;
					rotation.z = (float)local_68._0_4_;
					rotation.w = (float)local_68._4_4_;
					rotation.x = UVar27.x;
					rotation.y = UVar27.y;
					EffectSpawner.Spawn(pSVar16, UVar28, rotation, 1.0, true, null);
					pCVar22 = this._owner;
					bVar8 = ((Object)pCVar22 == null);
					if ((!bVar8) && (pCVar22 = this._owner, pCVar22 != null)) {
						bVar9 = (typeof(Human)._2).typeHierarchyDepth;
						if ((bVar9 <= (pCVar22.klass._2).typeHierarchyDepth) &&((pCVar22.klass._2).typeHierarchy[(ulong)bVar9 - 1] == typeof(Human) )) {
							pSVar16 = x.name;
							pCVar15.GetHit(pCVar22, iVar11, "BladeThrow", pSVar16);
							goto label_05870ca0;
						}
					}
					pSVar16 = x.name;
					pCVar15.GetHit("Blade", 100, "BladeThrow", pSVar16);
				}
			}
		}
		goto label_05870ca0;
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x57718D0", Offset = "0x57708D0", VA = "0x57718D0")]
	private int CalculateDamage()
	{
		// Lifted from source/cpp/Projectiles/BladeThrowProjectile.c (Projectiles.BladeThrowProjectile$$CalculateDamage): 2 lines keep C-only constructs
		float fVar1;
		byte bVar2;
		BaseCharacter pCVar3;
		bool bVar4;
		int iVar5;
		JSONNode pSVar6;
		long plVar7;
		int iVar8;
		float fVar9;
		float fVar10;

		fVar9 = this.InitialPlayerVelocity.x;
		fVar10 = this.InitialPlayerVelocity.y;
		fVar1 = this.InitialPlayerVelocity.z;
		fVar9 = fVar1 * fVar1 + fVar10 * fVar10 + fVar9 * fVar9;
		if (fVar9 < 0.0) {
			fVar9 = sqrtf(fVar9);
		}
		else {
			fVar9 = SQRT(fVar9);
		}
		pSVar6 = CharacterData.HumanWeaponInfo;
		if (pSVar6 != null) {
			pSVar6 = pSVar6.get_Item("Blade");
			if (pSVar6 != null) {
				plVar7 = (long)pSVar6.get_Item("DamageMultiplier");
				if (plVar7 != null) {
					fVar10 = (float)(**(code*)(*plVar7 + 0x388))(plVar7);
					iVar5 = (int)(fVar9 * 10.0 * fVar10);
					if (10 < iVar5) {
					}
					pCVar3 = this._owner;
					bVar4 = ((Object)pCVar3 != null);
					if ((bVar4) && (pCVar3 = this._owner, pCVar3 != null)) {
						bVar2 = (typeof(Human)._2).typeHierarchyDepth;
						if ((bVar2 <= (pCVar3.klass._2).typeHierarchyDepth) &&(((pCVar3.klass._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(Human) && (pCVar3.CustomDamageEnabled != false)))) {
						}
					}
					return iVar8;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x5771B00", Offset = "0x5770B00", VA = "0x5771B00", Slot = "9")]
	protected override void Update()
	{
		// Lifted from source/cpp/Projectiles/BladeThrowProjectile.c (Projectiles.BladeThrowProjectile$$Update): clean
		uint uVar1;
		PhotonView pPVar2;
		Transform __this_00;
		Transform __this_01;
		Rigidbody __this_02;
		float fVar3;
		float fVar4;
		Vector3 UVar5;
		Vector3 axis;

		this.Update();
		pPVar2 = this._photonView;
		if (pPVar2 != null) {
			if (pPVar2._IsMine_k__BackingField != false) {
				fVar4 = this._timeLeft;
				fVar3 = Time.deltaTime;
				fVar4 = fVar4 - fVar3;
				this._timeLeft = fVar4;
				if (fVar4 <= 0.0) {
					this.OnExceedLiveTime();
				}
			}
			if (this.Disabled != false) {
				return;
			}
			__this_02 = this.GetComponent<Rigidbody>();
			if (__this_02 != null) {
				UVar5 = __this_02.linearVelocity;
				if (Il2CppMethodInitialized_0753e729 == false) {
					Il2CppMethodInitialized_0753e729 = true;
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				fVar4 = UVar5.z * UVar5.z + UVar5.y * UVar5.y + UVar5.x * UVar5.x;
				if (fVar4 < 0.0) {
					fVar4 = sqrtf(fVar4);
				}
				else {
					fVar4 = SQRT(fVar4);
				}
				__this_00 = this._blade;
				if (__this_00 != null) {
					UVar5 = __this_00.position;
					__this_01 = this._blade;
					if (__this_01 != null) {
						if (fVar4 <= 80.0) {
							fVar4 = 80.0;
						}
						axis = __this_01.right;
						fVar3 = Time.deltaTime;
						__this_00.RotateAround(UVar5, axis, fVar4 * 1600.0 * fVar3);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x5771D20", Offset = "0x5770D20", VA = "0x5771D20")]
	public BladeThrowProjectile()
	{
		// Lifted from source/cpp/Projectiles/BladeThrowProjectile.c (Projectiles.BladeThrowProjectile$$.ctor): clean
		base();
		return;
	}
}
