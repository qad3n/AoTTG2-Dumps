// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HumanSpecials
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HumanSpecials.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanSpecials.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006C4")]
internal class HumanSpecials
{
	[Token(Token = "0x4001FD2")]
	[FieldOffset(Offset = "0x0")]
	public static string[] AnySpecials;

	[Token(Token = "0x4001FD3")]
	[FieldOffset(Offset = "0x8")]
	public static string[] AHSSSpecials;

	[Token(Token = "0x4001FD4")]
	[FieldOffset(Offset = "0x10")]
	public static string[] BladeSpecials;

	[Token(Token = "0x4001FD5")]
	[FieldOffset(Offset = "0x18")]
	public static string[] ShifterSpecials;

	[Token(Token = "0x4001FD6")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string DefaultSpecial;

	[Token(Token = "0x60041F2")]
	[Address(RVA = "0x5AF7A20", Offset = "0x5AF6A20", VA = "0x5AF7A20")]
	public static List<string> GetSpecialNames(string loadout, bool includeShifters)
	{
		// Lifted from source/cpp/Characters/HumanSpecials.c (Characters.HumanSpecials$$GetSpecialNames): 23 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		String[] pSVar4;
		String pSVar5;
		String[] pSVar6;
		MethodInfo pMVar7;
		bool bVar8;
		int iVar9;
		List<string> __this;
		ulong uVar10;
		ulong uVar11;

		__this = new List<string>();
		pSVar4 = HumanSpecials.AnySpecials;
		if (pSVar4 == null) goto label_05bf826c;
		iVar9 = (int)pSVar4.Length;
		if (__this == null) {
			if (iVar9 < 1) goto label_05bf7bf8;
	label_05bf8242: ;
			goto label_05bf826c;
		}
		if (0 < iVar9) {
			uVar10 = pSVar4.Length & 0xffffffff;
			uVar11 = 0;
			do {
				if (uVar10 <= uVar11) goto label_05bf823d;
				pSVar5 = pSVar4[uVar11];
				pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pSVar6 = __this._items;
				if (pSVar6 == null) goto label_05bf826c;
				uVar2 = __this._size;
				if (uVar2 < (uint)pSVar6.Length) {
					__this._size = uVar2 + 1;
					pSVar6[(int)uVar2] = pSVar5;
				}
				else {
					__this.AddWithResize((object)pSVar5);
				}
				uVar11 = uVar11 + 1;
				uVar2 = (uint)pSVar4.Length;
				uVar10 = (ulong)uVar2;
			} while ((long)uVar11 < (long)(int)uVar2);
		}
	label_05bf7bf8: ;
		bVar8 = (loadout == HumanLoadout.Blade);
		if (bVar8) {
			pSVar4 = HumanSpecials.BladeSpecials;
			if (pSVar4 == null) goto label_05bf826c;
			iVar9 = (int)pSVar4.Length;
			if (__this == null) {
	label_05bf7ea0: ;
				if (0 < iVar9) goto label_05bf8242;
			}
			else if (0 < iVar9) {
				uVar10 = pSVar4.Length & 0xffffffff;
				uVar11 = 0;
				do {
					if (uVar10 <= uVar11) goto label_05bf823d;
					pSVar5 = pSVar4[uVar11];
					pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar6 = __this._items;
					if (pSVar6 == null) goto label_05bf826c;
					uVar2 = __this._size;
					if (uVar2 < (uint)pSVar6.Length) {
						__this._size = uVar2 + 1;
						pSVar6[(int)uVar2] = pSVar5;
					}
					else {
						__this.AddWithResize((object)pSVar5);
					}
					uVar11 = uVar11 + 1;
					uVar2 = (uint)pSVar4.Length;
					uVar10 = (ulong)uVar2;
				} while ((long)uVar11 < (long)(int)uVar2);
			}
		}
		else {
			bVar8 = (loadout == HumanLoadout.AHSS);
			if (bVar8) {
				pSVar4 = HumanSpecials.AHSSSpecials;
				if (pSVar4 == null) goto label_05bf826c;
				iVar9 = (int)pSVar4.Length;
				if (__this == null) goto label_05bf7ea0;
				if (0 < iVar9) {
					uVar10 = pSVar4.Length & 0xffffffff;
					uVar11 = 0;
					do {
						if (uVar10 <= uVar11) goto label_05bf823d;
						pSVar5 = pSVar4[uVar11];
						if (Il2CppMethodInitialized_0754763f == false) {
							il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add) ;
							Il2CppMethodInitialized_0754763f = true;
						}
						pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar6 = __this._items;
						if (pSVar6 == null) goto label_05bf826c;
						uVar2 = __this._size;
						if (uVar2 < (uint)pSVar6.Length) {
							__this._size = uVar2 + 1;
							pSVar6[(int)uVar2] = pSVar5;
						}
						else {
							__this.AddWithResize((object)pSVar5);
						}
						uVar11 = uVar11 + 1;
						uVar2 = (uint)pSVar4.Length;
						uVar10 = (ulong)uVar2;
					} while ((long)uVar11 < (long)(int)uVar2);
				}
			}
		}
		if (includeShifters) {
			pSVar4 = HumanSpecials.ShifterSpecials;
			if (pSVar4 == null) goto label_05bf826c;
			iVar9 = (int)pSVar4.Length;
			if (__this == null) {
				if (0 < iVar9) goto label_05bf8242;
			}
			else if (0 < iVar9) {
				uVar10 = pSVar4.Length & 0xffffffff;
				uVar11 = 0;
				do {
					if (uVar10 <= uVar11) {
	label_05bf823d: ;
						throw new IndexOutOfRangeException();
					}
					pSVar5 = pSVar4[uVar11];
					pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar6 = __this._items;
					if (pSVar6 == null) goto label_05bf826c;
					uVar2 = __this._size;
					if (uVar2 < (uint)pSVar6.Length) {
						__this._size = uVar2 + 1;
						pSVar6[(int)uVar2] = pSVar5;
					}
					else {
						__this.AddWithResize((object)pSVar5);
					}
					uVar11 = uVar11 + 1;
					uVar2 = (uint)pSVar4.Length;
					uVar10 = (ulong)uVar2;
				} while ((long)uVar11 < (long)(int)uVar2);
			}
		}
		bVar8 = (loadout == HumanLoadout.Thunderspear);
		if (bVar8) {
			pSVar5 = "Stock";
			if ((typeof(HumanSpecials)._2).cctor_finished_or_no_cctor == 0) {
				pSVar5 = "Stock";
			}
			pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
			"Stock" = pSVar5;
			if (Il2CppMethodInitialized_0754763f == false) {
				Il2CppMethodInitialized_0754763f = true;
				pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
			}
			MethodInfo_System_Collections_Generic_List_string_Add = pMVar7;
			if (__this == null) goto label_05bf826c;
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar4 = __this._items;
			if (pSVar4 == null) goto label_05bf826c;
			uVar2 = __this._size;
			if (uVar2 < (uint)pSVar4.Length) {
				__this._size = uVar2 + 1;
				pSVar4[(int)uVar2] = pSVar5;
				goto label_05bf80bf;
			}
			__this.AddWithResize((object)pSVar5);
			uVar3 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_05bf80bf: ;
			uVar3 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		bVar8 = (loadout == HumanLoadout.Unarmed);
		if (bVar8) {
	label_05bf811d: ;
			if (__this == null) goto label_05bf826c;
			__this.Remove((Il2CppObject *)"Escape");
		}
		else {
			bVar8 = (loadout == HumanLoadout.Civilian);
			if (bVar8) goto label_05bf811d;
		}
		pSVar5 = "None";
		if ((typeof(HumanSpecials)._2).cctor_finished_or_no_cctor == 0) {
			pSVar5 = "None";
		}
		pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
		"None" = pSVar5;
		if (Il2CppMethodInitialized_0754763f == false) {
			Il2CppMethodInitialized_0754763f = true;
			pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
		}
		MethodInfo_System_Collections_Generic_List_string_Add = pMVar7;
		if (__this != null) {
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar4 = __this._items;
			if (pSVar4 != null) {
				uVar2 = __this._size;
				if (uVar2 < (uint)pSVar4.Length) {
					__this._size = uVar2 + 1;
					pSVar4[(int)uVar2] = pSVar5;
				}
				else {
					__this.AddWithResize((object)pSVar5);
				}
				return __this;
			}
		}
	label_05bf826c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041F3")]
	[Address(RVA = "0x5AF8280", Offset = "0x5AF7280", VA = "0x5AF8280")]
	private static void AddSpecialName(List<string> specials, string special)
	{
		// Lifted from source/cpp/Characters/HumanSpecials.c (Characters.HumanSpecials$$AddSpecialName): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String[] pSVar3;

		if (specials != null) {
			piVar1 = &specials._version;
			*piVar1 = *piVar1 + 1;
			pSVar3 = specials._items;
			if (pSVar3 != null) {
				uVar2 = specials._size;
				if (uVar2 < (uint)pSVar3.Length) {
					specials._size = uVar2 + 1;
					pSVar3[(int)uVar2] = special;
					return;
				}
				specials.AddWithResize((object)special);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041F4")]
	[Address(RVA = "0x5AF8320", Offset = "0x5AF7320", VA = "0x5AF8320")]
	public static BaseUseable GetSpecialUseable(BaseCharacter owner, string special)
	{
		// Lifted from source/cpp/Characters/HumanSpecials.c (Characters.HumanSpecials$$GetSpecialUseable): 3 lines keep C-only constructs
		bool bVar1;
		uint uVar2;
		Spin3Special __this;
		StockSpecial __this_00;
		EscapeSpecial __this_01;
		PotatoSpecial __this_02;
		DownStrikeSpecial __this_03;
		SupplySpecial __this_04;
		Spin1Special __this_05;
		SwitchbackSpecial __this_06;
		CarrySpecial __this_07;
		SmokeBombSpecial __this_08;
		ConfuseSpecial __this_09;
		Spin2Special __this_10;
		DistractSpecial __this_11;
		BladeThrowSpecial __this_12;
		SmellSpecial __this_13;
		ShifterTransformSpecial __this_14;
		NoneSpecial __this_15;
		AHSSTwinShot __this_16;
		DanceSpecial __this_17;
		String* ppSVar3;

		uVar2 = _PrivateImplementationDetails_.ComputeStringHash(special);
		if (uVar2 < 0x50d88c80) {
			if (uVar2 < 0x132fe373) {
				if (uVar2 < 0x23f06bf) {
					if (uVar2 == 0x3f0398) {
						bVar1 = (special == "Spin1");
						if (bVar1) {
							__this_05 = new Spin1Special(owner);
							return (BaseUseable)__this_05;
						}
						return null;
					}
					if (uVar2 == 0x23f06be) {
						bVar1 = (special == "Spin3");
						if (bVar1) {
							__this = new Spin3Special(owner);
							return (BaseUseable)__this;
						}
						return null;
					}
				}
				else {
					if (uVar2 == 0x33f0851) {
						bVar1 = (special == "Spin2");
						if (bVar1) {
							__this_10 = new Spin2Special(owner);
							return (BaseUseable)__this_10;
						}
						return null;
					}
					if (uVar2 == 0xfb12e57) {
						bVar1 = (special == "Distract");
						if (bVar1) {
							__this_11 = new DistractSpecial(owner);
							return (BaseUseable)__this_11;
						}
						return null;
					}
					if (uVar2 == 0x132fe372) {
						bVar1 = (special == "Potato");
						if (bVar1) {
							__this_02 = new PotatoSpecial(owner);
							return (BaseUseable)__this_02;
						}
						return null;
					}
				}
			}
			else if (uVar2 < 0x27e47193) {
				if (uVar2 == 0x184b43d0) {
					bVar1 = (special == "Carry");
					if (bVar1) {
						__this_07 = new CarrySpecial(owner);
						return (BaseUseable)__this_07;
					}
					return null;
				}
				if (uVar2 == 0x27e47192) {
					ppSVar3 = &"Annie";
	label_05bf8a5d: ;
					bVar1 = (special == *ppSVar3);
					if (bVar1) {
						__this_14 = new ShifterTransformSpecial(owner, *ppSVar3);
						return (BaseUseable)__this_14;
					}
					return null;
				}
			}
			else {
				if (uVar2 == 0x2ab69de5) {
					ppSVar3 = &"Armored";
					goto label_05bf8a5d;
				}
				if (uVar2 == 0x304ff7fb) {
					bVar1 = (special == "None");
					if (bVar1) {
						__this_15 = new NoneSpecial(owner);
						return (BaseUseable)__this_15;
					}
					return null;
				}
				if (uVar2 == 0x50d88c7f) {
					bVar1 = (special == "DownStrike");
					if (bVar1) {
						__this_03 = new DownStrikeSpecial(owner);
						return (BaseUseable)__this_03;
					}
					return null;
				}
			}
		}
		else if (uVar2 < 0x9d6edc06) {
			if (uVar2 < 0x67c7f536) {
				if (uVar2 == 0x548b671e) {
					bVar1 = (special == "Switchback");
					if (bVar1) {
						__this_06 = new SwitchbackSpecial(owner);
						return (BaseUseable)__this_06;
					}
					return null;
				}
				if (uVar2 == 0x67c7f535) {
					bVar1 = (special == "Stock");
					if (bVar1) {
						__this_00 = new StockSpecial(owner);
						return (BaseUseable)__this_00;
					}
					return null;
				}
			}
			else {
				if (uVar2 == 0x8d87a40b) {
					bVar1 = (special == "BladeThrow");
					if (bVar1) {
						__this_12 = new BladeThrowSpecial(owner);
						return (BaseUseable)__this_12;
					}
					return null;
				}
				if (uVar2 == 0x960fb720) {
					bVar1 = (special == "Smell");
					if (bVar1) {
						__this_13 = new SmellSpecial(owner);
						return (BaseUseable)__this_13;
					}
					return null;
				}
				if (uVar2 == 0x9d6edc05) {
					ppSVar3 = &"Eren";
					goto label_05bf8a5d;
				}
			}
		}
		else if (uVar2 < 0xb7bb7227) {
			if (uVar2 == 0x9fc581fa) {
				bVar1 = (special == "SmokeBomb");
				if (bVar1) {
					__this_08 = new SmokeBombSpecial(owner);
					return (BaseUseable)__this_08;
				}
				return null;
			}
			if (uVar2 == 0xa499f21e) {
				bVar1 = (special == "Confuse");
				if (bVar1) {
					__this_09 = new ConfuseSpecial(owner);
					return (BaseUseable)__this_09;
				}
				return null;
			}
			if (uVar2 == 0xb7bb7226) {
				bVar1 = (special == "Escape");
				if (bVar1) {
					__this_01 = new EscapeSpecial(owner);
					return (BaseUseable)__this_01;
				}
				return null;
			}
		}
		else {
			if (uVar2 == 0xc7ef102c) {
				bVar1 = (special == "AHSSTwinShot");
				if (bVar1) {
					__this_16 = new AHSSTwinShot(owner);
					return (BaseUseable)__this_16;
				}
				return null;
			}
			if (uVar2 == 0xca0fab3c) {
				bVar1 = (special == "Dance");
				if (bVar1) {
					__this_17 = new DanceSpecial(owner);
					return (BaseUseable)__this_17;
				}
				return null;
			}
			if (uVar2 == 0xdba7f44e) {
				bVar1 = (special == "Supply");
				if (bVar1) {
					__this_04 = new SupplySpecial(owner);
					return (BaseUseable)__this_04;
				}
				return null;
			}
		}
		return null;
	}

	[Token(Token = "0x60041F5")]
	[Address(RVA = "0x5AF8B70", Offset = "0x5AF7B70", VA = "0x5AF8B70")]
	public static string GetSpecialIcon(string special)
	{
		// Lifted from source/cpp/Characters/HumanSpecials.c (Characters.HumanSpecials$$GetSpecialIcon): clean
		String pSVar1;

		if (special == null) {
			throw new NullReferenceException();
		}
		pSVar1 = special.Replace(" ", "");
		pSVar1 = String.Concat(pSVar1, "SpecialIcon");
		return pSVar1;
	}

	[Token(Token = "0x60041F6")]
	[Address(RVA = "0x5AF8BF0", Offset = "0x5AF7BF0", VA = "0x5AF8BF0")]
	public HumanSpecials()
	{
		// Lifted from source/cpp/Characters/HumanSpecials.c (Characters.HumanSpecials$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/HumanSpecials.c.

	// Characters.HumanSpecials$$.cctor: clean
	static HumanSpecials()
	{
		Characters_HumanSpecials_StaticFields pCVar1;
		String[] pSVar2;

		pSVar2 = (String[])new string[10];
		if (pSVar2 == null) goto label_05bf9083;
		if ((int)pSVar2.Length != 0) {
			pSVar2[0] = "Potato";
			if ((pSVar2.Length & 0xfffffffe) != 0) {
				pSVar2[1] = "Escape";
				if (2 < (uint)pSVar2.Length) {
					pSVar2[2] = "Dance";
					if ((pSVar2.Length & 0xfffffffc) != 0) {
						pSVar2[3] = "Distract";
						if (4 < (uint)pSVar2.Length) {
							pSVar2[4] = "Smell";
							if (5 < (uint)pSVar2.Length) {
								pSVar2[5] = "Supply";
								if (6 < (uint)pSVar2.Length) {
									pSVar2[6] = "SmokeBomb";
									if ((pSVar2.Length & 0xfffffff8) != 0) {
										pSVar2[7] = "Carry";
										if (8 < (uint)pSVar2.Length) {
											pSVar2[8] = "Switchback";
											if (9 < (uint)pSVar2.Length) {
												pSVar2[9] = "Confuse";
												HumanSpecials.AnySpecials = pSVar2;
												pSVar2 = (String[])new string[1];
												if (pSVar2 == null) {
	label_05bf9083: ;
													throw new NullReferenceException();
												}
												if ((int)pSVar2.Length != 0) {
													pSVar2[0] = "AHSSTwinShot";
													pCVar1 = typeof(HumanSpecials).static_fields;
													pCVar1.AHSSSpecials = pSVar2;
													pSVar2 = (String[])new string[5];
													if (pSVar2 == null) goto label_05bf9083;
													if ((int)pSVar2.Length != 0) {
														pSVar2[0] = "DownStrike";
														if ((pSVar2.Length & 0xfffffffe) != 0) {
															pSVar2[1] = "Spin1";
															if (2 < (uint)pSVar2.Length) {
																pSVar2[2] = "Spin2";
																if ((pSVar2.Length & 0xfffffffc) != 0) {
																	pSVar2[3] = "Spin3";
																	if (4 < (uint)pSVar2.Length) {
																		pSVar2[4] = "BladeThrow";
																		pCVar1 = typeof(HumanSpecials).static_fields;
																		pCVar1.BladeSpecials = pSVar2;
																		pSVar2 = (String[])new string[2];
																		if (pSVar2 == null) goto label_05bf9083;
																		if ((int)pSVar2.Length != 0) {
																			pSVar2[0] = "Eren";
																			if ((pSVar2.Length & 0xfffffffe) != 0) {
																				pSVar2[1] = "Annie";
																				pCVar1 = typeof(HumanSpecials).static_fields;
																				pCVar1.ShifterSpecials = pSVar2;
																				pCVar1 = typeof(HumanSpecials).static_fields;
																				pCVar1.DefaultSpecial = "Switchback";
																				return;
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
		throw new IndexOutOfRangeException();
	}
}
