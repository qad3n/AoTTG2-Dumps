// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.BasicTitanPlayerController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/BasicTitanPlayerController.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/BasicTitanPlayerController.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using Settings;

namespace Controllers;

[Token(Token = "0x200067C")]
internal class BasicTitanPlayerController : BasePlayerController
{
	[Token(Token = "0x4001D02")]
	[FieldOffset(Offset = "0x58")]
	protected BasicTitan _titan;

	[Token(Token = "0x4001D03")]
	[FieldOffset(Offset = "0x60")]
	protected TitanInputSettings _titanInput;

	[Token(Token = "0x4001D04")]
	[FieldOffset(Offset = "0x68")]
	protected float _enemyTimeLeft;

	[Token(Token = "0x4001D05")]
	[FieldOffset(Offset = "0x6C")]
	protected float RockCooldown;

	[Token(Token = "0x4001D06")]
	[FieldOffset(Offset = "0x70")]
	protected float _rockCooldownLeft;

	[Token(Token = "0x6003E89")]
	[Address(RVA = "0x5AA4D40", Offset = "0x5AA3D40", VA = "0x5AA4D40", Slot = "4")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Controllers/BasicTitanPlayerController.c (Controllers.BasicTitanPlayerController$$Awake): 7 lines keep C-only constructs
		BasicTitan* targetAddress;
		InputSettings pSVar1;
		BasicTitanComponentCache pCVar2;
		BaseHitbox pCVar3;
		Dictionary<string, float> __this_00;
		BasicTitan pCVar4;

		this.Awake();
		pCVar4 = this.GetComponent<BasicTitan>();
		targetAddress = &this._titan;
		this._titan = pCVar4;
		pSVar1 = SettingsManager.InputSettings;
		if (pSVar1 != null) {
			this._titanInput = pSVar1.Titan;
			pCVar4 = this._titan;
			if (pCVar4 != null) {
				pCVar4.RunSpeedBase = 12.0;
				pCVar4.WalkSpeedBase = 5.0;
				pCVar4.RunSpeedPerLevel = 18.0;
				pCVar4.WalkSpeedPerLevel = 1.0;
				pCVar4.BellyFlopTime = 2.6;
				pCVar4.AttackSpeedMultiplier = 1.2;
				pCVar4.JumpForce = 200.0;
				pCVar4.RotateSpeed = 8.0;
				pCVar4.ActionPause = 0.1;
				pCVar4.AttackPause = 0.1;
				pCVar4.RockThrow1Speed = 450.0;
				pCVar2 = pCVar4.BasicCache;
				if ((pCVar2 != null) &&(pCVar3 = pCVar2.HandLHitbox, pCVar3 != null)) {
					pCVar3.ScaleSphereCollider(1.3);
					if ((*targetAddress != null) &&((pCVar2 = ((*targetAddress).fields).BasicCache, pCVar2 != null &&(pCVar3 = pCVar2.HandRHitbox, pCVar3 != null)))) {
						pCVar3.ScaleSphereCollider(1.3);
						if ((*targetAddress != null) &&((pCVar2 = ((*targetAddress).fields).BasicCache, pCVar2 != null &&(pCVar3 = pCVar2.FootLHitbox, pCVar3 != null)))) {
							pCVar3.ScaleSphereCollider(1.3);
							if ((*targetAddress != null) &&((pCVar2 = ((*targetAddress).fields).BasicCache, pCVar2 != null &&(pCVar3 = pCVar2.FootRHitbox, pCVar3 != null)))) {
								pCVar3.ScaleSphereCollider(1.3);
								if ((*targetAddress != null) &&((pCVar2 = ((*targetAddress).fields).BasicCache, pCVar2 != null &&(pCVar3 = pCVar2.MouthHitbox, pCVar3 != null)))) {
									pCVar3.ScaleSphereCollider(1.2);
									if ((*targetAddress != null) &&(__this_00 = ((*targetAddress).fields).AttackSpeeds, __this_00 != null)) {
										__this_00.set_Item((Il2CppObject *)"AttackGrabAirL", 0.7);
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E8A")]
	[Address(RVA = "0x5AA4F90", Offset = "0x5AA3F90", VA = "0x5AA4F90", Slot = "9")]
	protected override void UpdateUI(bool inMenu)
	{
		// Lifted from source/cpp/Controllers/BasicTitanPlayerController.c (Controllers.BasicTitanPlayerController$$UpdateUI): clean
		String text;

		text = (String)**(ulong*)(g_data_07556758 + 0xb8);
		CursorManager.SetCrosshairText(text);
		CursorManager.SetCrosshairColor(true);
		return;
	}

	[Token(Token = "0x6003E8B")]
	[Address(RVA = "0x5AA5000", Offset = "0x5AA4000", VA = "0x5AA5000", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
		// Lifted from source/cpp/Controllers/BasicTitanPlayerController.c (Controllers.BasicTitanPlayerController$$UpdateActionInput): 37 lines keep C-only constructs
		uint uVar1;
		ulong uVar2;
		uint uVar3;
		TitanInputSettings pSVar4;
		OrderedDictionary pSVar5;
		BaseComponentCache pUVar7;
		Transform __this_00;
		bool bVar8;
		sbyte cVar9;
		String* ppSVar10;
		ICollection pSVar11;
		String __this_01;
		object obj;
		object pIVar12;
		KeybindSetting pSVar13;
		BasicTitan pCVar14;
		float fVar16;
		float extraout_XMM0_Db;
		byte[] auVar17 = new byte[16];
		byte[] auVar18 = new byte[16];
		Vector3 UVar19;
		long lStack_70;
		ulong uStack_68;
		ulong uStack_50;
		long plStack_48;
		ulong puStack_40;
		ulong uStack_38;

		lStack_70 = 0;
		uStack_38 = 0;
		uStack_68 = CONCAT44(uStack_68._4_4_, this._rockCooldownLeft);
		fVar16 = Time.deltaTime;
		this._rockCooldownLeft = (float)uStack_68 - fVar16;
		this.UpdateActionInput(inMenu);
		if (inMenu) {
			return;
		}
		pSVar4 = this._titanInput;
		if ((pSVar4 != null) &&(pSVar13 = pSVar4.Walk, pSVar13 != null)) {
			pCVar14 = this._titan;
			bVar8 = pSVar13.GetKey(false);
			if (pCVar14 != null) {
				pCVar14.IsWalk = bVar8;
				pSVar4 = this._titanInput;
				if ((pSVar4 != null) &&(pSVar13 = pSVar4.Sit, pSVar13 != null)) {
					pCVar14 = this._titan;
					bVar8 = pSVar13.GetKey(false);
					if (pCVar14 != null) {
						pCVar14.IsSit = bVar8;
						pSVar4 = this._titanInput;
						if ((pSVar4 != null) &&(pSVar13 = pSVar4.Sprint, pSVar13 != null)) {
							pCVar14 = this._titan;
							bVar8 = pSVar13.GetKey(false);
							if (pCVar14 != null) {
								pCVar14.IsSprint = bVar8;
								uStack_68 = CONCAT44(uStack_68._4_4_, this._enemyTimeLeft);
								fVar16 = Time.deltaTime;
								this._enemyTimeLeft = (float)uStack_68 - fVar16;
								pSVar4 = this._titanInput;
								if ((pSVar4 != null) &&(pSVar13 = pSVar4.CoverNape1, pSVar13 != null)) {
									bVar8 = pSVar13.GetKeyUp(false);
									if (bVar8) {
										pCVar14 = this._titan;
										if (pCVar14 == null) goto label_05ba59a0;
										pCVar14.UncoverNape();
									}
									pCVar14 = this._titan;
									if (pCVar14 != null) {
										bVar8 = pCVar14.CanAction();
										if (bVar8) {
											pSVar4 = this._titanInput;
											if ((pSVar4 != null) &&(pSVar13 = pSVar4.Jump, pSVar13 != null)) {
												bVar8 = pSVar13.GetKeyDown(false);
												if (bVar8) {
													pCVar14 = this._titan;
													if (pCVar14 != null) {
														pCVar14.JumpForce = 200.0;
														ppSVar10 = &"AttackJump";
	label_05ba5240: ;
														pCVar14.Attack(*ppSVar10);
														return;
													}
												}
												else {
													pSVar4 = this._titanInput;
													if ((pSVar4 != null) &&(pSVar13 = pSVar4.CoverNape1, pSVar13 != null )) {
														bVar8 = pSVar13.GetKeyDown(false);
														if (bVar8) {
															pCVar14 = this._titan;
															if (pCVar14 != null) {
																pCVar14.CoverNape();
																return;
															}
														}
														else {
															pSVar4 = this._titanInput;
															if ((pSVar4 != null) &&(pSVar13 = pSVar4.Kick, pSVar13 != null)) {
																bVar8 = pSVar13.GetKeyDown(false);
																if (bVar8) {
																	pCVar14 = this._titan;
																	if (pCVar14 != null) {
																		ppSVar10 = &"AttackKick";
																		goto label_05ba5240;
																	}
																}
																else {
																	pSVar4 = this._titanInput;
																	if ((pSVar4 != null) &&(pSVar13 = pSVar4.AttackSwing, pSVar13 != null)) {
																		bVar8 = pSVar13.GetKeyDown(false) ;
																		if (bVar8) {
																			this.AttackSwing();
																			return;
																		}
																		pSVar4 = this._titanInput;
																		if ((pSVar4 != null) &&(pSVar13 = pSVar4.AttackGrabAirFar, pSVar13 != null)) {
																			bVar8 = pSVar13.GetKeyDown(false);
																			if (bVar8) {
																				this.AttackGrabAirFar() ;
																				return;
																			}
																			pSVar4 = this._titanInput;
																			if ((pSVar4 != null) &&(pSVar13 = pSVar4.AttackGrabAir, pSVar13 != null)) {
																				bVar8 = pSVar13.GetKeyDown(false);
																				if (bVar8) {
																					this.AttackGrabAir();
																					return;
																				}
																				pSVar4 = this._titanInput;
																				if ((pSVar4 != null) &&(pSVar13 = pSVar4.AttackGrabBody, pSVar13 != null)) {
																					bVar8 = pSVar13.GetKeyDown(false);
																					if (bVar8) {
																						this.AttackGrabBody();
																						return;
																					}
																					pSVar4 = this._titanInput;
																					if ((pSVar4 != null) &&(pSVar13 = pSVar4.AttackGrabCore, pSVar13 != null)) {
																						bVar8 = pSVar13.GetKeyDown(false);
																						if (bVar8) {
																							this.AttackGrabCore();
																							return;
																						}
																						pSVar4 = this._titanInput;
																						if ((pSVar4 != null) &&(pSVar13 = pSVar4.AttackGrabGround, pSVar13 != null)) {
																							bVar8 = pSVar13.GetKeyDown(false);
																							if (bVar8) {
																								this.AttackGrabGround();
																								return;
																							}
																							pSVar4 = this._titanInput;
																							if ((pSVar4 != null) &&(pSVar13 = pSVar4.AttackGrabHead, pSVar13 != null)) {
																								bVar8 = pSVar13.GetKeyDown(false);
																								if (bVar8) {
																									this.AttackGrabHead();
																									return;
																								}
																								pSVar4 = this._titanInput;
																								if ((pSVar4 != null) &&(pSVar13 = pSVar4.AttackGrabHigh, pSVar13 != null)) {
																									bVar8 = pSVar13.GetKeyDown(false);
																									if (bVar8) {
																										this.AttackGrabHigh();
																										return;
																									}
																									pSVar4 = this._titanInput;
																									if ((pSVar4 != null) &&(pSVar13 = pSVar4.AttackBrushChest, pSVar13 != null)) {
																										bVar8 = pSVar13.GetKeyDown(false);
																										if (bVar8) {
																											this.AttackBrushChest();
																											return;
																										}
																										pSVar4 = this._titanInput;
																										if ((pSVar4 != null) &&(pSVar13 = pSVar4.AttackRockThrow, pSVar13 != null)) {
																											bVar8 = pSVar13.GetKeyDown(false);
																											if (bVar8) {
																												if (0.0 < this._rockCooldownLeft) {
																													return;
																												}
																												pCVar14 = this._titan;
																												if (pCVar14 != null) {
																													if (pCVar14.Grounded == false) {
																														return;
																													}
																													pCVar14.Attack("AttackRockThrow");
																													this._rockCooldownLeft =this.RockCooldown;
																													return;
																												}
																											}
																											else {
																												pSVar4 = this._titanInput;
																												if (((pSVar4 != null) &&(pSVar5 = pSVar4.Settings, pSVar5 != (OrderedDictionary)0x0)) && (pSVar11 = pSVar5.Keys, pSVar11 != null)) {
																													lStack_70 = il2cpp_runtime_helper_02ad5a70(0, typeof(IEnumerable), pSVar11);
																												uStack_50 = 0;
																												plStack_48 = &lStack_70;
																												puStack_40 = &uStack_38;
																												while(true) {
																													if (lStack_70 == 0) {
																														throw new NullReferenceException();
																													}
																													cVar9 = il2cpp_runtime_helper_02ad5af0(0, typeof(IEnumerator));
																												if (cVar9 == false) {
																													il2cpp_runtime_helper_02fd8580(&uStack_50);
																													return;
																												}
																												if (lStack_70 == 0) {
																													throw new NullReferenceException();
																												}
																												__this_01 = (String)il2cpp_runtime_helper_02ad5a70(1, typeof(IEnumerator));
																												if (__this_01 == null) break;
																												if (__this_01.klass != g_data_07556758) {
																													throw new InvalidCastException();
																												}
																												bVar8 = __this_01.StartsWith("Attack");
																												if (bVar8) {
																													pSVar4 = this._titanInput;
																													if (pSVar4 == null) {
																														throw new NullReferenceException();
																													}
																													pSVar5 = pSVar4.Settings;
																													if (pSVar5 == (OrderedDictionary)0x0) {
																													throw new NullReferenceException();
																												}
																												obj = pSVar5.get_Item((object)__this_01);
																												pIVar12 = il2cpp_codegen_is_inst_class(obj, (Il2CppClass)typeof(KeybindSetting));
																												if (pIVar12 == null) {
																													throw new NullReferenceException();
																												}
																												pSVar13 = (KeybindSetting)il2cpp_codegen_is_inst_class(obj, (Il2CppClass)typeof(KeybindSetting));
																												bVar8 = pSVar13.GetKeyDown(false);
																												if (bVar8) {
																													pCVar14 = this._titan;
																													if (pCVar14 == null) {
																														throw new NullReferenceException();
																													}
																													pCVar14.Attack(__this_01);
																												}
																												}
																												}
																												throw new NullReferenceException();
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										else {
											pCVar14 = this._titan;
											if (pCVar14 != null) {
												if (pCVar14.State != 4) {
													return;
												}
												pSVar4 = this._titanInput;
												if ((pSVar4 != null) &&(pSVar13 = pSVar4.Jump, pSVar13 != null)) {
													bVar8 = pSVar13.GetKeyUp(false);
													if (!bVar8) {
														return;
													}
													pCVar14 = this._titan;
													if (pCVar14 != null) {
														fVar16 = (Vector3.upVector).z;
														uVar2._0_4_ = (Vector3.upVector).y;
														pCVar14._jumpDirection.x = (Vector3.upVector).x;
														pCVar14._jumpDirection.y = (float)uVar2;
														pCVar14._jumpDirection.z = fVar16;
														pCVar14 = this._titan;
														if (pCVar14 != null) {
															pCVar14.JumpForce = 120.0;
															if (pCVar14.HasDirection == false) {
	label_05ba5991: ;
																pCVar14.JumpImmediate();
																return;
															}
															pUVar7 = pCVar14.Cache;
															if ((pUVar7 != null) &&(__this_00 = pUVar7.Transform, __this_00 != null)) {
																uStack_68._0_4_ = pCVar14._jumpDirection.x;
																uStack_68._4_4_ = pCVar14._jumpDirection.y;
																fVar16 = pCVar14._jumpDirection.z;
																UVar19 = __this_00.forward;
																pCVar14._jumpDirection.x = UVar19.x * 0.5 + (float)uStack_68;
																pCVar14._jumpDirection.y = UVar19.y * 0.5 + uStack_68._4_4_;
																pCVar14._jumpDirection.z = UVar19.z * 0.5 + fVar16;
																pCVar14 = this._titan;
																if (pCVar14 != null) {
																	fVar16 = pCVar14._jumpDirection.x;
																	uVar2._0_4_ = pCVar14._jumpDirection.y;
																	uVar2._4_4_ = pCVar14._jumpDirection.z;
																	if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
																		uStack_68 = uVar2;
																		uVar2._0_4_ = (float)uStack_68;
																		uVar2._4_4_ = uStack_68._4_4_;
																	}
																	uVar2._4_4_ = uVar2._4_4_ * uVar2._4_4_;
																	fVar16 = uVar2._4_4_ + fVar16 * fVar16 + (float)uVar2 * (float)uVar2;
																	if (fVar16 < 0.0) {
																		fVar16 = sqrtf(fVar16);
																		uVar2._4_4_ = extraout_XMM0_Db;
																	}
																	else {
																		fVar16 = SQRT(fVar16);
																	}
																	if (fVar16 <= 1e-05) {
																		pCVar14._jumpDirection.x = 0.0;
																		pCVar14._jumpDirection.y = 0.0;
																		fVar16 = 0.0;
																	}
																	else {
																		uVar1 = pCVar14._jumpDirection.x;
																		uVar3 = pCVar14._jumpDirection.y;
																		auVar17._4_4_ = uVar3;
																		auVar17._0_4_ = uVar1;
																		auVar17._8_8_ = 0;
																		auVar18._4_4_ = fVar16;
																		auVar18._0_4_ = fVar16;
																		auVar18._8_4_ = uVar2._4_4_;
																		auVar18._12_4_ = uVar2._4_4_;
																		auVar18 = divps(auVar17, auVar18);
																		pCVar14._jumpDirection.x = (float)auVar18._0_4_;
																		pCVar14._jumpDirection.y = (float)auVar18._4_4_;
																		fVar16 = pCVar14._jumpDirection.z / fVar16;
																	}
																	pCVar14._jumpDirection.z = fVar16;
																	pCVar14 = this._titan;
																	if (pCVar14 != null) goto label_05ba5991;
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05ba59a0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E8C")]
	[Address(RVA = "0x5AA59D0", Offset = "0x5AA49D0", VA = "0x5AA59D0")]
	protected void AttackSwing()
	{
		// Lifted from source/cpp/Controllers/BasicTitanPlayerController.c (Controllers.BasicTitanPlayerController$$AttackSwing): 2 lines keep C-only constructs
		BasicTitan pCVar1;
		Single[] pSVar2;
		String* ppSVar3;

		pSVar2 = this.GetAimAngles() ;
		if (pSVar2 != null) {
			if ((int)pSVar2.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pCVar1 = this._titan;
			if (pCVar1 != null) {
				if (pSVar2[0] <= 0.0) {
					ppSVar3 = &"AttackSwingR";
				}
				else {
					ppSVar3 = &"AttackSwingL";
				}
				pCVar1.Attack(*ppSVar3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E8D")]
	[Address(RVA = "0x5AA5A60", Offset = "0x5AA4A60", VA = "0x5AA5A60")]
	protected void AttackGrabAirFar()
	{
		// Lifted from source/cpp/Controllers/BasicTitanPlayerController.c (Controllers.BasicTitanPlayerController$$AttackGrabAirFar): 2 lines keep C-only constructs
		BasicTitan pCVar1;
		Single[] pSVar2;
		String* ppSVar3;

		pSVar2 = this.GetAimAngles() ;
		if (pSVar2 != null) {
			if ((int)pSVar2.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pCVar1 = this._titan;
			if (pCVar1 != null) {
				if (pSVar2[0] <= 0.0) {
					ppSVar3 = &"AttackGrabAirFarL";
				}
				else {
					ppSVar3 = &"AttackGrabAirFarR";
				}
				pCVar1.Attack(*ppSVar3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E8E")]
	[Address(RVA = "0x5AA5AF0", Offset = "0x5AA4AF0", VA = "0x5AA5AF0")]
	protected void AttackGrabAir()
	{
		// Lifted from source/cpp/Controllers/BasicTitanPlayerController.c (Controllers.BasicTitanPlayerController$$AttackGrabAir): 2 lines keep C-only constructs
		BasicTitan pCVar1;
		Single[] pSVar2;
		String* ppSVar3;

		pSVar2 = this.GetAimAngles() ;
		if (pSVar2 != null) {
			if ((int)pSVar2.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pCVar1 = this._titan;
			if (pCVar1 != null) {
				if (pSVar2[0] <= 0.0) {
					ppSVar3 = &"AttackGrabAirL";
				}
				else {
					ppSVar3 = &"AttackGrabAirR";
				}
				pCVar1.Attack(*ppSVar3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E8F")]
	[Address(RVA = "0x5AA5B80", Offset = "0x5AA4B80", VA = "0x5AA5B80")]
	protected void AttackGrabBody()
	{
		// Lifted from source/cpp/Controllers/BasicTitanPlayerController.c (Controllers.BasicTitanPlayerController$$AttackGrabBody): 2 lines keep C-only constructs
		float fVar1;
		BasicTitan pCVar2;
		Single[] pSVar3;
		String* ppSVar4;

		pSVar3 = this.GetAimAngles() ;
		if (pSVar3 != null) {
			if ((int)pSVar3.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			fVar1 = pSVar3[0];
			if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
				if (fVar1 <= 90.0) {
					ppSVar4 = &"AttackGrabBackL";
					if (-90.0 <= fVar1) {
						ppSVar4 = &"AttackGrabStomachL";
					}
					if (0.0 <= fVar1) {
						ppSVar4 = &"AttackGrabBackL";
					}
				}
				else {
					ppSVar4 = &"AttackGrabBackR";
				}
			}
			else {
				ppSVar4 = &"AttackGrabStomachR";
			}
			pCVar2 = this._titan;
			if (pCVar2 != null) {
				pCVar2.Attack(*ppSVar4);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E90")]
	[Address(RVA = "0x5AA5C60", Offset = "0x5AA4C60", VA = "0x5AA5C60")]
	protected void AttackGrabCore()
	{
		// Lifted from source/cpp/Controllers/BasicTitanPlayerController.c (Controllers.BasicTitanPlayerController$$AttackGrabCore): 2 lines keep C-only constructs
		BasicTitan pCVar1;
		Single[] pSVar2;
		String* ppSVar3;

		pSVar2 = this.GetAimAngles() ;
		if (pSVar2 != null) {
			if ((int)pSVar2.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pCVar1 = this._titan;
			if (pCVar1 != null) {
				if (pSVar2[0] <= 0.0) {
					ppSVar3 = &"AttackGrabCoreL";
				}
				else {
					ppSVar3 = &"AttackGrabCoreR";
				}
				pCVar1.Attack(*ppSVar3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E91")]
	[Address(RVA = "0x5AA5CF0", Offset = "0x5AA4CF0", VA = "0x5AA5CF0")]
	protected void AttackGrabGround()
	{
		// Lifted from source/cpp/Controllers/BasicTitanPlayerController.c (Controllers.BasicTitanPlayerController$$AttackGrabGround): 2 lines keep C-only constructs
		float fVar1;
		BasicTitan pCVar2;
		Single[] pSVar3;
		String* ppSVar4;

		pSVar3 = this.GetAimAngles() ;
		if (pSVar3 != null) {
			if ((int)pSVar3.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			fVar1 = pSVar3[0];
			if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
				if (fVar1 <= 90.0) {
					ppSVar4 = &"AttackGrabGroundBackL";
					if (-90.0 <= fVar1) {
						ppSVar4 = &"AttackGrabGroundFrontL";
					}
					if (0.0 <= fVar1) {
						ppSVar4 = &"AttackGrabGroundBackL";
					}
				}
				else {
					ppSVar4 = &"AttackGrabGroundBackR";
				}
			}
			else {
				ppSVar4 = &"AttackGrabGroundFrontR";
			}
			pCVar2 = this._titan;
			if (pCVar2 != null) {
				pCVar2.Attack(*ppSVar4);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E92")]
	[Address(RVA = "0x5AA5DD0", Offset = "0x5AA4DD0", VA = "0x5AA5DD0")]
	protected void AttackGrabHead()
	{
		// Lifted from source/cpp/Controllers/BasicTitanPlayerController.c (Controllers.BasicTitanPlayerController$$AttackGrabHead): 2 lines keep C-only constructs
		float fVar1;
		BasicTitan pCVar2;
		Single[] pSVar3;
		String* ppSVar4;

		pSVar3 = this.GetAimAngles() ;
		if (pSVar3 != null) {
			if ((int)pSVar3.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			fVar1 = pSVar3[0];
			if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
				if (fVar1 <= 90.0) {
					ppSVar4 = &"AttackGrabHeadBackL";
					if (-90.0 <= fVar1) {
						ppSVar4 = &"AttackGrabHeadFrontL";
					}
					if (0.0 <= fVar1) {
						ppSVar4 = &"AttackGrabHeadBackL";
					}
				}
				else {
					ppSVar4 = &"AttackGrabHeadBackR";
				}
			}
			else {
				ppSVar4 = &"AttackGrabHeadFrontR";
			}
			pCVar2 = this._titan;
			if (pCVar2 != null) {
				pCVar2.Attack(*ppSVar4);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E93")]
	[Address(RVA = "0x5AA5EB0", Offset = "0x5AA4EB0", VA = "0x5AA5EB0")]
	protected void AttackGrabHigh()
	{
		// Lifted from source/cpp/Controllers/BasicTitanPlayerController.c (Controllers.BasicTitanPlayerController$$AttackGrabHigh): 2 lines keep C-only constructs
		BasicTitan pCVar1;
		Single[] pSVar2;
		String* ppSVar3;

		pSVar2 = this.GetAimAngles() ;
		if (pSVar2 != null) {
			if ((int)pSVar2.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pCVar1 = this._titan;
			if (pCVar1 != null) {
				if (pSVar2[0] <= 0.0) {
					ppSVar3 = &"AttackGrabHighL";
				}
				else {
					ppSVar3 = &"AttackGrabHighR";
				}
				pCVar1.Attack(*ppSVar3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E94")]
	[Address(RVA = "0x5AA5F40", Offset = "0x5AA4F40", VA = "0x5AA5F40")]
	protected void AttackBrushChest()
	{
		// Lifted from source/cpp/Controllers/BasicTitanPlayerController.c (Controllers.BasicTitanPlayerController$$AttackBrushChest): 2 lines keep C-only constructs
		BasicTitan pCVar1;
		Single[] pSVar2;
		String* ppSVar3;

		pSVar2 = this.GetAimAngles() ;
		if (pSVar2 != null) {
			if ((int)pSVar2.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pCVar1 = this._titan;
			if (pCVar1 != null) {
				if (pSVar2[0] <= 0.0) {
					ppSVar3 = &"AttackBrushChestR";
				}
				else {
					ppSVar3 = &"AttackBrushChestL";
				}
				pCVar1.Attack(*ppSVar3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E95")]
	[Address(RVA = "0x5AA5FD0", Offset = "0x5AA4FD0", VA = "0x5AA5FD0")]
	public BasicTitanPlayerController()
	{
		// Lifted from source/cpp/Controllers/BasicTitanPlayerController.c (Controllers.BasicTitanPlayerController$$.ctor): clean
		this.RockCooldown = 5.0;
		base();
		return;
	}
}
