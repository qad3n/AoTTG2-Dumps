// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.AnnieShifterPlayerController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/AnnieShifterPlayerController.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/AnnieShifterPlayerController.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using Settings;

namespace Controllers;

[Token(Token = "0x2000677")]
internal class AnnieShifterPlayerController : BasePlayerController
{
	[Token(Token = "0x4001CAA")]
	[FieldOffset(Offset = "0x58")]
	protected AnnieShifter _shifter;

	[Token(Token = "0x4001CAB")]
	[FieldOffset(Offset = "0x60")]
	protected AnnieShifterInputSettings _shifterInput;

	[Token(Token = "0x6003E1F")]
	[Address(RVA = "0x5A99EB0", Offset = "0x5A98EB0", VA = "0x5A99EB0", Slot = "4")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Controllers/AnnieShifterPlayerController.c (Controllers.AnnieShifterPlayerController$$Awake): 6 lines keep C-only constructs
		AnnieShifter* targetAddress;
		InputSettings pSVar1;
		BaseTitanComponentCache pCVar2;
		BaseHitbox pCVar3;
		AnnieShifter pCVar4;

		this.Awake();
		pCVar4 = this.GetComponent<AnnieShifter>();
		targetAddress = &this._shifter;
		this._shifter = pCVar4;
		pSVar1 = SettingsManager.InputSettings;
		if (pSVar1 != null) {
			this._shifterInput = pSVar1.AnnieShifter;
			pCVar4 = this._shifter;
			if (((pCVar4 != null) &&(pCVar2 = pCVar4.BaseTitanCache, pCVar2 != null)) &&(pCVar3 = pCVar2.HandLHitbox, pCVar3 != null)) {
				pCVar3.ScaleSphereCollider(1.5);
				if (((*targetAddress != null) &&(pCVar2 = ((*targetAddress).fields).BaseTitanCache, pCVar2 != null)) &&(pCVar3 = pCVar2.HandRHitbox, pCVar3 != null)) {
					pCVar3.ScaleSphereCollider(1.5);
					if (((*targetAddress != null) &&(pCVar2 = ((*targetAddress).fields).BaseTitanCache, pCVar2 != null)) &&(pCVar3 = pCVar2.FootLHitbox, pCVar3 != null)) {
						pCVar3.ScaleSphereCollider(1.5);
						if (((*targetAddress != null) &&(pCVar2 = ((*targetAddress).fields).BaseTitanCache, pCVar2 != null)) &&(pCVar3 = pCVar2.FootRHitbox, pCVar3 != null)) {
							pCVar3.ScaleSphereCollider(1.5);
							if (((*targetAddress != null) &&(pCVar2 = ((*targetAddress).fields).BaseTitanCache, pCVar2 != null)) &&(pCVar3 = pCVar2.MouthHitbox, pCVar3 != null)) {
								pCVar3.ScaleSphereCollider(1.5);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E20")]
	[Address(RVA = "0x5A9A270", Offset = "0x5A99270", VA = "0x5A9A270", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
		// Lifted from source/cpp/Controllers/AnnieShifterPlayerController.c (Controllers.AnnieShifterPlayerController$$UpdateActionInput): 9 lines keep C-only constructs
		float fVar1;
		float fVar2;
		byte bVar3;
		AnnieShifterInputSettings pSVar4;
		AnnieShifter pCVar5;
		BaseComponentCache pUVar6;
		Transform __this_00;
		UnityEngine_Vector3_StaticFields pUVar7;
		OrderedDictionary pSVar8;
		bool bVar11;
		sbyte cVar12;
		AnnieShifter pCVar13;
		ICollection pSVar14;
		object pIVar15;
		String __this_01;
		KeybindSetting pSVar17;
		float fVar21;
		Vector3 UVar22;
		object pIStack_78;
		float fStack_6c;
		ulong uStack_68;
		byte puStack_60;
		ulong puStack_58;
		ulong uStack_50;
		ulong uStack_48;

		pIStack_78 = null;
		uStack_50 = 0;
		this.UpdateActionInput(inMenu);
		if (inMenu) {
			return;
		}
		pSVar4 = this._shifterInput;
		if ((pSVar4 != null) &&(pSVar17 = pSVar4.Walk, pSVar17 != null)) {
			pCVar5 = this._shifter;
			bVar11 = pSVar17.GetKey(false);
			if (pCVar5 != null) {
				pCVar5.IsWalk = bVar11;
				pCVar5 = this._shifter;
				if (pCVar5 != null) {
					bVar11 = pCVar5.CanAction();
					if (!bVar11) {
						return;
					}
					pSVar4 = this._shifterInput;
					if ((pSVar4 != null) &&(pSVar17 = pSVar4.Jump, pSVar17 != null)) {
						bVar11 = pSVar17.GetKeyDown(false);
						if (bVar11) {
							pCVar5 = this._shifter;
							if (pCVar5 != null) {
								if (pCVar5.HasDirection == false) {
									pUVar7 = typeof(Vector3).static_fields;
									fVar1 = (pUVar7.upVector).x;
									fVar2 = (pUVar7.upVector).y;
									fVar21 = (pUVar7.upVector).z;
								}
								else {
									pCVar13 = pCVar5;
									if (Il2CppMethodInitialized_0753e72c == false) {
										Il2CppMethodInitialized_0753e72c = true;
										pCVar13 = this._shifter;
										if (pCVar13 == null) goto label_05b9a829;
									}
									pUVar6 = pCVar13.Cache;
									if ((pUVar6 == null) ||(__this_00 = pUVar6.Transform, __this_00 == null)) goto label_05b9a829;
									pUVar7 = typeof(Vector3).static_fields;
									uStack_48._0_4_ = (pUVar7.upVector).x;
									uStack_48._4_4_ = (pUVar7.upVector).y;
									fStack_6c = (pUVar7.upVector).z;
									UVar22 = __this_00.forward;
									fVar1 = UVar22.x + (float)uStack_48;
									fVar2 = UVar22.y + uStack_48._4_4_;
									fVar21 = UVar22.z + fStack_6c;
								}
								UVar22.y = fVar2;
								UVar22.x = fVar1;
								UVar22.z = fVar21;
								pCVar5.Jump(UVar22);
								return;
							}
						}
						else {
							pSVar4 = this._shifterInput;
							if ((pSVar4 != null) &&(pSVar17 = pSVar4.Kick, pSVar17 != null)) {
								bVar11 = pSVar17.GetKeyDown(false);
								if (bVar11) {
									pCVar5 = this._shifter;
									if (pCVar5 != null) {
										pCVar5.Kick();
										return;
									}
								}
								else {
									pSVar4 = this._shifterInput;
									if ((pSVar4 != null) &&(pSVar17 = pSVar4.AttackBrushFront, pSVar17 != null)) {
										bVar11 = pSVar17.GetKeyDown(false);
										if (bVar11) {
											this.AttackBrushFront();
											return;
										}
										pSVar4 = this._shifterInput;
										if ((pSVar4 != null) &&(pSVar17 = pSVar4.AttackBrushHead, pSVar17 != null) ) {
											bVar11 = pSVar17.GetKeyDown(false);
											if (bVar11) {
												this.AttackBrushHead();
												return;
											}
											pSVar4 = this._shifterInput;
											if ((pSVar4 != null) &&(pSVar17 = pSVar4.AttackGrabBottom, pSVar17 != null)) {
												bVar11 = pSVar17.GetKeyDown(false);
												if (bVar11) {
													this.AttackGrabBottom();
													return;
												}
												pSVar4 = this._shifterInput;
												if ((pSVar4 != null) &&(pSVar17 = pSVar4.AttackGrabMid, pSVar17 != null)) {
													bVar11 = pSVar17.GetKeyDown(false);
													if (bVar11) {
														this.AttackGrabMid();
														return;
													}
													pSVar4 = this._shifterInput;
													if ((pSVar4 != null) &&(pSVar17 = pSVar4.AttackGrabUp, pSVar17 != null)) {
														bVar11 = pSVar17.GetKeyDown(false);
														if (bVar11) {
															this.AttackGrabUp();
															return;
														}
														pSVar4 = this._shifterInput;
														if (((pSVar4 != null) &&(pSVar8 = pSVar4.Settings, pSVar8 != null)) &&(pSVar14 = pSVar8.Keys, pSVar14 != null)) {
															pIVar15 = (object)il2cpp_runtime_helper_02ad5a70(0, typeof(IEnumerable), pSVar14);
															puStack_60 = (byte)&pIStack_78;
															uStack_68 = 0;
															puStack_58 = &uStack_50;
															do {
																pIStack_78 = pIVar15;
																if (pIVar15 == null) {
																	throw new NullReferenceException();
																}
																cVar12 = pIVar15.get_Current();
																pIVar15 = pIStack_78;
																if (cVar12 == false) {
																	il2cpp_runtime_helper_02fd8340(&uStack_68);
																	return;
																}
																if (pIStack_78 == null) {
																	throw new NullReferenceException();
																}
																__this_01 = (String)pIVar15.get_Current();
																if (__this_01 == null) {
																	throw new NullReferenceException();
																}
																if (__this_01.klass != g_data_07556758) {
																	throw new InvalidCastException();
																}
																bVar11 = __this_01.StartsWith("Attack");
																pIVar15 = pIStack_78;
																if (bVar11) {
																	pSVar4 = this._shifterInput;
																	if (pSVar4 == null) {
																		throw new NullReferenceException();
																	}
																	pSVar8 = pSVar4.Settings;
																	if (pSVar8 == null) {
																		throw new NullReferenceException();
																	}
																	pSVar17 = (KeybindSetting)pSVar8.get_Item((object)__this_01);
																	if (pSVar17 == null) {
																		throw new NullReferenceException();
																	}
																	bVar3 = (typeof(KeybindSetting)._2).typeHierarchyDepth;
																	if (((pSVar17.klass._2).typeHierarchyDepth < bVar3) ||((pSVar17.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(KeybindSetting))) {
																		throw new InvalidCastException();
																	}
																	bVar11 = pSVar17.GetKeyDown(false);
																	pIVar15 = pIStack_78;
																	if (bVar11) {
																		pCVar5 = this._shifter;
																		if (pCVar5 == null) {
																			throw new NullReferenceException();
																		}
																		pCVar5.Attack(__this_01);
																		pIVar15 = pIStack_78;
																	}
																}
															} while(true);
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
	label_05b9a829: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E21")]
	[Address(RVA = "0x5A9AA90", Offset = "0x5A99A90", VA = "0x5A9AA90")]
	protected void AttackBrushFront()
	{
		// Lifted from source/cpp/Controllers/AnnieShifterPlayerController.c (Controllers.AnnieShifterPlayerController$$AttackBrushFront): 2 lines keep C-only constructs
		AnnieShifter pCVar1;
		Single[] pSVar2;
		String* ppSVar3;

		pSVar2 = this.GetAimAngles() ;
		if (pSVar2 != null) {
			if ((int)pSVar2.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pCVar1 = this._shifter;
			if (pCVar1 != null) {
				if (pSVar2[0] <= 0.0) {
					ppSVar3 = &"AttackBrushFrontL";
				}
				else {
					ppSVar3 = &"AttackBrushFrontR";
				}
				pCVar1.Attack(*ppSVar3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E22")]
	[Address(RVA = "0x5A9AB20", Offset = "0x5A99B20", VA = "0x5A9AB20")]
	protected void AttackBrushHead()
	{
		// Lifted from source/cpp/Controllers/AnnieShifterPlayerController.c (Controllers.AnnieShifterPlayerController$$AttackBrushHead): 2 lines keep C-only constructs
		AnnieShifter pCVar1;
		Single[] pSVar2;
		String* ppSVar3;

		pSVar2 = this.GetAimAngles() ;
		if (pSVar2 != null) {
			if ((int)pSVar2.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pCVar1 = this._shifter;
			if (pCVar1 != null) {
				if (pSVar2[0] <= 0.0) {
					ppSVar3 = &"AttackBrushHeadL";
				}
				else {
					ppSVar3 = &"AttackBrushHeadR";
				}
				pCVar1.Attack(*ppSVar3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E23")]
	[Address(RVA = "0x5A9ABB0", Offset = "0x5A99BB0", VA = "0x5A9ABB0")]
	protected void AttackGrabBottom()
	{
		// Lifted from source/cpp/Controllers/AnnieShifterPlayerController.c (Controllers.AnnieShifterPlayerController$$AttackGrabBottom): 2 lines keep C-only constructs
		AnnieShifter pCVar1;
		Single[] pSVar2;
		String* ppSVar3;

		pSVar2 = this.GetAimAngles() ;
		if (pSVar2 != null) {
			if ((int)pSVar2.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pCVar1 = this._shifter;
			if (pCVar1 != null) {
				if (pSVar2[0] <= 0.0) {
					ppSVar3 = &"AttackGrabBottomLeft";
				}
				else {
					ppSVar3 = &"AttackGrabBottomRight";
				}
				pCVar1.Attack(*ppSVar3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E24")]
	[Address(RVA = "0x5A9AC40", Offset = "0x5A99C40", VA = "0x5A9AC40")]
	protected void AttackGrabMid()
	{
		// Lifted from source/cpp/Controllers/AnnieShifterPlayerController.c (Controllers.AnnieShifterPlayerController$$AttackGrabMid): 2 lines keep C-only constructs
		AnnieShifter pCVar1;
		Single[] pSVar2;
		String* ppSVar3;

		pSVar2 = this.GetAimAngles() ;
		if (pSVar2 != null) {
			if ((int)pSVar2.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pCVar1 = this._shifter;
			if (pCVar1 != null) {
				if (pSVar2[0] <= 0.0) {
					ppSVar3 = &"AttackGrabMidLeft";
				}
				else {
					ppSVar3 = &"AttackGrabMidRight";
				}
				pCVar1.Attack(*ppSVar3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E25")]
	[Address(RVA = "0x5A9ACD0", Offset = "0x5A99CD0", VA = "0x5A9ACD0")]
	protected void AttackGrabUp()
	{
		// Lifted from source/cpp/Controllers/AnnieShifterPlayerController.c (Controllers.AnnieShifterPlayerController$$AttackGrabUp): 2 lines keep C-only constructs
		AnnieShifter pCVar1;
		Single[] pSVar2;
		String* ppSVar3;

		pSVar2 = this.GetAimAngles() ;
		if (pSVar2 != null) {
			if ((int)pSVar2.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (pSVar2[0] <= 45.0) {
				if (-45.0 <= pSVar2[0]) {
					ppSVar3 = &"AttackGrabUp";
				}
				else {
					ppSVar3 = &"AttackGrabUpLeft";
				}
			}
			else {
				ppSVar3 = &"AttackGrabUpRight";
			}
			pCVar1 = this._shifter;
			if (pCVar1 != null) {
				pCVar1.Attack(*ppSVar3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E26")]
	[Address(RVA = "0x5A9B150", Offset = "0x5A9A150", VA = "0x5A9B150")]
	public AnnieShifterPlayerController()
	{
		// Lifted from source/cpp/Controllers/AnnieShifterPlayerController.c (Controllers.AnnieShifterPlayerController$$.ctor): clean
		base();
		return;
	}
}
