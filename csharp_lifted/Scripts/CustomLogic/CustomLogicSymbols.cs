// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicSymbols
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicSymbols.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicSymbols.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000647")]
internal class CustomLogicSymbols
{
	[Token(Token = "0x4001B9E")]
	[FieldOffset(Offset = "0x0")]
	public static Dictionary<string, int> Symbols;

	[Token(Token = "0x4001B9F")]
	[FieldOffset(Offset = "0x8")]
	public static HashSet<string> SpecialSymbolNames;

	[Token(Token = "0x4001BA0")]
	[FieldOffset(Offset = "0x10")]
	public static HashSet<string> AlphaSymbolNames;

	[Token(Token = "0x4001BA1")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<int, int> BinopSymbolPriorities;

	[Token(Token = "0x4001BA2")]
	[FieldOffset(Offset = "0x20")]
	public static HashSet<int> ClassSymbols;

	[Token(Token = "0x4001BA3")]
	[FieldOffset(Offset = "0x28")]
	public static HashSet<int> ConditionalSymbols;

	[Token(Token = "0x4001BA4")]
	[FieldOffset(Offset = "0x30")]
	private static bool _loaded;

	[Token(Token = "0x6003C87")]
	[Address(RVA = "0x5A74620", Offset = "0x5A73620", VA = "0x5A74620")]
	public static void Init()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSymbols.c (CustomLogic.CustomLogicSymbols$$Init): 5 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_0754739d == false) {
			Il2CppMethodInitialized_0754739d = true;
			uVar2 = (typeof(CustomLogicSymbols)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicSymbols)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = CustomLogicSymbols._loaded;
			klass = typeof(CustomLogicSymbols);
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(CustomLogicSymbols)).static_fields + 0x30);
			klass = typeof(CustomLogicSymbols);
		}
		if (cVar1 != false) {
			typeof(CustomLogicSymbols) = (CustomLogicSymbols)klass;
			return;
		}
		typeof(CustomLogicSymbols) = (CustomLogicSymbols)klass;
		CustomLogicSymbols.ClearSymbols();
		CustomLogicSymbols.AddSymbols();
		CustomLogicSymbols.CategorizeSymbols();
		CustomLogicSymbols._loaded = true;
		return;
	}

	[Token(Token = "0x6003C88")]
	[Address(RVA = "0x5A7F430", Offset = "0x5A7E430", VA = "0x5A7F430")]
	private static void ClearSymbols()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSymbols.c (CustomLogic.CustomLogicSymbols$$ClearSymbols): clean
		uint uVar1;
		Dictionary<object, int> __this;
		HashSet<object> pSVar2;
		Dictionary<int, int> __this_00;
		HashSet<int> pSVar3;

		if (Il2CppMethodInitialized_0754739e == false) {
			Il2CppMethodInitialized_0754739e = true;
			uVar1 = (typeof(CustomLogicSymbols)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicSymbols)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
		}
		else {
			__this = *(Dictionary<object, int>*)(typeof(CustomLogicSymbols)).static_fields;
		}
		if (__this != null) {
			__this.Clear() ;
			pSVar2 = (HashSet<object>)CustomLogicSymbols.SpecialSymbolNames;
			if (pSVar2 != null) {
				pSVar2.Clear();
				pSVar2 = (HashSet<object>)CustomLogicSymbols.AlphaSymbolNames;
				if (pSVar2 != null) {
					pSVar2.Clear();
					__this_00 = CustomLogicSymbols.BinopSymbolPriorities;
					if (__this_00 != null) {
						__this_00.Clear();
						pSVar3 = CustomLogicSymbols.ClassSymbols;
						if (pSVar3 != null) {
							pSVar3.Clear();
							pSVar3 = CustomLogicSymbols.ConditionalSymbols;
							if (pSVar3 != null) {
								pSVar3.Clear() ;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C89")]
	[Address(RVA = "0x5A7F590", Offset = "0x5A7E590", VA = "0x5A7F590")]
	private static void AddSymbols()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSymbols.c (CustomLogic.CustomLogicSymbols$$AddSymbols): 2 lines keep C-only constructs
		uint uVar1;
		Dictionary<object, int> pSVar2;

		if (Il2CppMethodInitialized_0754739f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&";");
			Il2CppMethodInitialized_0754739f = true;
			uVar1 = (typeof(CustomLogicSymbols)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicSymbols)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
		}
		else {
			pSVar2 = *(Dictionary<object, int>*)(typeof(CustomLogicSymbols)).static_fields;
		}
		if (pSVar2 != null) {
			pSVar2.Add((Il2CppObject *)"class", 1);
			pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
			if (pSVar2 != null) {
				pSVar2.Add((Il2CppObject *)"extension", 2);
				pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
				if (pSVar2 != null) {
					pSVar2.Add((Il2CppObject *)"addon", 3);
					pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
					if (pSVar2 != null) {
						pSVar2.Add((Il2CppObject *)"component", 0);
						pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
						if (pSVar2 != null) {
							pSVar2.Add((Il2CppObject *)"cutscene", 4);
							pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
							if (pSVar2 != null) {
								pSVar2.Add((Il2CppObject *)"function", 5);
								pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
								if (pSVar2 != null) {
									pSVar2.Add((Il2CppObject *)"coroutine", 6);
									pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
									if (pSVar2 != null) {
										pSVar2.Add((Il2CppObject *)"wait", 7);
										pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
										if (pSVar2 != null) {
											pSVar2.Add((Il2CppObject *)"null", 8);
											pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
											if (pSVar2 != null) {
												pSVar2.Add((Il2CppObject *)"return", 0x10);
												pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
												if (pSVar2 != null) {
													pSVar2.Add((Il2CppObject *)"break", 0x12);
													pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
													if (pSVar2 != null) {
														pSVar2.Add((Il2CppObject *)"continue", 0x11);
														pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
														if (pSVar2 != null) {
															pSVar2.Add((Il2CppObject *)"if", 0x2a);
															pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
															if (pSVar2 != null) {
																pSVar2.Add((Il2CppObject *)"else", 0x2b);
																pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
																if (pSVar2 != null) {
																	pSVar2.Add((Il2CppObject *)"elif", 0x2c);
																	pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
																	if (pSVar2 != null) {
																		pSVar2.Add((Il2CppObject *)"for", 0x2e);
																		pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
																		if (pSVar2 != null) {
																			pSVar2.Add((Il2CppObject *)"while", 0x2d);
																			pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
																			if (pSVar2 != null) {
																				pSVar2.Add((Il2CppObject *)"in", 0x2f);
																				pSVar2 = (Dictionary<object, int>)CustomLogicSymbols.Symbols ;
																				if (pSVar2 != (Dictionary<object, int>)0x0) {
																					pSVar2.Add((Il2CppObject *)"{", 9);
																					pSVar2 = (Dictionary<object, int>)CustomLogicSymbols. Symbols;
																					if (pSVar2 != (Dictionary<object, int>)0x0) {
																						pSVar2.Add((Il2CppObject *)"}", 10);
																						pSVar2 = (Dictionary<object, int>)CustomLogicSymbols. Symbols;
																						if (pSVar2 != null) {
																							pSVar2.Add((Il2CppObject *)"(", 0xb);
																							pSVar2 = (Dictionary<object, int>)CustomLogicSymbols. Symbols;
																							if (pSVar2 != (Dictionary<object, int>)0x0) {
																								pSVar2.Add((Il2CppObject *)")", 0xc);
																								pSVar2 = (System_Collections_Generic_Dictionary_object__int__o * )typeof(CustomLogicSymbols).static_fields .Symbols;
																								if (pSVar2 != (Dictionary<object, int>)0x0) {
																									pSVar2.Add((Il2CppObject *)"[", 0xd);
																									pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols). static_fields.Symbols;
																									if (pSVar2 != (Dictionary<object, int>)0x0) {
																										pSVar2.Add((Il2CppObject *)"]", 0xe);
																										pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																										if (pSVar2 != (Dictionary<object, int>)0x0) {
																											pSVar2.Add((Il2CppObject *)"@", 0xf);
																											pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																											if (pSVar2 != (Dictionary<object, int>)0x0) {
																												pSVar2.Add((Il2CppObject *)";", 0x26);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)"\"", 0x27);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)"=", 0x14);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)"+=", 0x15);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)"-=", 0x16);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)"*=", 0x17);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)"/=", 0x18);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)",", 0x28);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)".", 0x29);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)"||", 0x1a);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)"&&", 0x19);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)"+", 0x21);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)"-", 0x22);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)"*", 0x23);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)"/", 0x24);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)"%", 0x25);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)"==", 0x1f);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)"!=", 0x20);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)"<", 0x1b);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)">", 0x1c);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)"<=", 0x1d);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)">=", 0x1e);
																												pSVar2 = (Dictionary<object, int>)typeof(CustomLogicSymbols).static_fields .Symbols;
																												if (pSVar2 != (Dictionary<object, int>)0x0) {

																												pSVar2.Add((Il2CppObject *)"!", 0x13);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C8A")]
	[Address(RVA = "0x5A800C0", Offset = "0x5A7F0C0", VA = "0x5A800C0")]
	private static void CategorizeSymbols()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSymbols.c (CustomLogic.CustomLogicSymbols$$CategorizeSymbols): 59 lines keep C-only constructs
		int iVar1;
		Il2CppClass item;
		HashSet<object> pSVar2;
		Dictionary<object, int> __this;
		Dictionary<int, int> pSVar3;
		IntPtr pvVar4;
		HashSet<int> pSVar5;
		bool bVar6;
		int iVar7;
		object pIVar8;
		ulong uVar9;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_00;
		ulong uVar10;
		byte[] local_68 = new byte[8];
		object local_58;
		byte[] local_48 = new byte[16];
		object local_38;

		if (Il2CppMethodInitialized_075473a0 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_MoveNext) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_075473a0 = true;
		}
		local_68 = (byte[])0x0;
		local_58 = null;
		pIVar8 = new string[0x12];
		if (pIVar8 == null) goto label_05b80b6e;
		if (*(int)&pIVar8[1].monitor != 0) {
			pIVar8[2].klass = (Il2CppClass *)"class";
			if (((ulong)pIVar8[1].monitor & 0xfffffffe) != 0) {
				pIVar8[2].monitor = "component";
				if (2 < *(uint)&pIVar8[1].monitor) {
					pIVar8[3].klass = (Il2CppClass *)"extension";
					if (((ulong)pIVar8[1].monitor & 0xfffffffc) != 0) {
						pIVar8[3].monitor = "addon";
						if (4 < *(uint)&pIVar8[1].monitor) {
							pIVar8[4].klass = (Il2CppClass *)"cutscene";
							if (5 < *(uint)&pIVar8[1].monitor) {
								pIVar8[4].monitor = "function";
								if (6 < *(uint)&pIVar8[1].monitor) {
									pIVar8[5].klass = (Il2CppClass *)"coroutine";
									if (((ulong)pIVar8[1].monitor & 0xfffffff8) != 0) {
										pIVar8[5].monitor = "wait";
										if (8 < *(uint)&pIVar8[1].monitor) {
											pIVar8[6].klass = (Il2CppClass *)"null";
											if (9 < *(uint)&pIVar8[1].monitor) {
												pIVar8[6].monitor = "return";
												if (10 < *(uint)&pIVar8[1].monitor) {
													pIVar8[7].klass = (Il2CppClass *)"break";
													if (0xb < *(uint)&pIVar8[1].monitor) {
														pIVar8[7].monitor = "continue";
														if (0xc < *(uint)&pIVar8[1].monitor) {
															pIVar8[8].klass = (Il2CppClass *)"if";
															if (0xd < *(uint)&pIVar8[1].monitor) {
																pIVar8[8].monitor = "else";
																if (0xe < *(uint)&pIVar8[1].monitor) {
																	pIVar8[9].klass = (Il2CppClass *)"for";
																	if (((ulong)pIVar8[1].monitor & 0xfffffff0) != 0) {
																		pIVar8[9].monitor = "while";
																		if (0x10 < *(uint)&pIVar8[1].monitor) {
																			pIVar8[10].klass = (Il2CppClass *)"elif";
																			if (0x11 < *(uint)&pIVar8[1].monitor) {
																				pIVar8[10].monitor = "in";
																				if (0 < (int)pIVar8[1].monitor) {
																					uVar9 = (ulong)pIVar8[1].monitor & 0xffffffff;
																					uVar10 = 0;
																					do {
																						if (uVar9 <= uVar10) goto label_05b80b69;
																						item = (&pIVar8[2].klass)[uVar10];
																						if ((typeof(CustomLogicSymbols)._2). cctor_finished_or_no_cctor == 0) {
																							il2cpp_codegen_runtime_class_init(typeof(CustomLogicSymbols)) ;
																						}
																						pSVar2 = (HashSet<object>)CustomLogicSymbols. AlphaSymbolNames;
																						if (pSVar2 == null) goto label_05b80b6e;
																						pSVar2.Add((object)item) ;
																						uVar10 = uVar10 + 1;
																						uVar9 = (ulong)*(uint)&pIVar8[1].monitor;
																					} while ((long)uVar10 < (long)(int)*(uint)&pIVar8[1].monitor);
																				}
																				if ((typeof(CustomLogicSymbols)._2). cctor_finished_or_no_cctor == 0) {
																				}
																				__this = (Dictionary<object, int>)CustomLogicSymbols.Symbols ;
																				if (__this != (Dictionary<object, int>)0x0) {
																					__this_00 = __this.Keys;
																					if (__this_00 !=null) {
																						local_48.GetEnumerator(__this_00);
																						local_58 = local_38;
																						local_68 = (byte[])local_48._0_8_;
																						local_48._0_8_ =null;
																						local_48._8_8_ = local_68;
																						while(true) {
																							bVar6 = local_68.MoveNext();
																							pIVar8 = local_58;
																							if (!bVar6) break;
																							if ((typeof(CustomLogicSymbols)._2). cctor_finished_or_no_cctor == 0) {
																							}
																							pSVar2 = (HashSet<object>)CustomLogicSymbols. AlphaSymbolNames;
																							if (pSVar2 == null) {
																								throw new NullReferenceException();
																							}
																							bVar6 = pSVar2.Contains(pIVar8);
																							if (!bVar6) {
																								if ((typeof(CustomLogicSymbols)._2). cctor_finished_or_no_cctor == 0) {
																								}
																								pSVar2 = (HashSet<object>)typeof(CustomLogicSymbols).static_fields .SpecialSymbolNames;
																								if (pSVar2 == (HashSet<object>)0x0) {
																									throw new NullReferenceException();
																								}
																								pSVar2.Add(pIVar8);
																							}
																						}
																						local_68.Dispose();
																						if ((typeof(CustomLogicSymbols)._2). cctor_finished_or_no_cctor == 0) {
																							il2cpp_codegen_runtime_class_init(typeof(CustomLogicSymbols)) ;
																						}
																						pSVar3 = CustomLogicSymbols. BinopSymbolPriorities;
																						if (pSVar3 != (Dictionary<int, int>)0x0) {
																							pSVar3.Add(0x14, 0);
																							pIVar8 = new CustomLogicSymbol[4];
																							RuntimeHelpers.InitializeArray((Array)pIVar8, FieldRva_PrivateImplementationDetails_9D8E086A55799BAA9861B56B4512C9434A47E3C37C0CC4624235075AEEEA35EC);
																							if (pIVar8 != null) {
																								if (0 < (int)pIVar8[1].monitor) {
																									uVar9 = (ulong)pIVar8[1].monitor & 0xffffffff;
																									uVar10 = 0;
																									do {
																										if (uVar9 <= uVar10) goto label_05b80b69;
																										iVar1 = *(int)((long)&pIVar8[2].klass + uVar10 * 4);
																										if ((typeof(CustomLogicSymbols)._2). cctor_finished_or_no_cctor == 0) {
																										}
																										pSVar3 = typeof(CustomLogicSymbols). static_fields.BinopSymbolPriorities;
																										if (pSVar3 == null ) goto label_05b80b6e;
																										pSVar3.Add(iVar1, 0);
																										uVar10 = uVar10 + 1;
																										uVar9 = (ulong)*(uint)&pIVar8[1].monitor;
																									} while ((long)uVar10 < (long)(int)*(uint)&pIVar8[1].monitor );
																								}
																								pIVar8 = new CustomLogicSymbol[2];
																								if (pIVar8 != null) {
																									pvVar4 = pIVar8[1].monitor;
																									iVar7 = (int)pvVar4;
																									if ((iVar7 == 0) ||(*(uint)&pIVar8[2].klass = 0x1a, iVar7 == 1)) goto label_05b80b69;
																									*(uint)((long)&pIVar8[2].klass + 4) = 0x19;
																									if (0 < iVar7) {
																										uVar9 = (ulong)pvVar4 & 0xffffffff;
																										uVar10 = 0;
																										do {
																											if (uVar9 <= uVar10) goto label_05b80b69;
																											iVar1 = *(int)((long)&pIVar8[2].klass + uVar10 * 4);
																											if ((typeof(CustomLogicSymbols)._2). cctor_finished_or_no_cctor == 0) {
																											}
																											pSVar3 = typeof(CustomLogicSymbols). static_fields.BinopSymbolPriorities;
																											if (pSVar3 == null ) goto label_05b80b6e;
																											pSVar3.Add(iVar1, 1);
																											uVar10 = uVar10 + 1;
																											uVar9 = (ulong)*(uint)&pIVar8[1].monitor;
																										} while ((long)uVar10 <(long)(int)*(uint)&pIVar8[1].monitor);
																									}
																									pIVar8 = new CustomLogicSymbol[6];
																									RuntimeHelpers.InitializeArray((Array)pIVar8, FieldRva_PrivateImplementationDetails_341C48B8D763F5BBDF402ED0A0B00F95DB0A677600E86CE8938E7748EB505AFD);
																									if (pIVar8 != null) {
																										if (0 < (int)pIVar8[1].monitor) {
																											uVar9 = (ulong)pIVar8[1].monitor & 0xffffffff;
																											uVar10 = 0;
																											do {
																												if (uVar9 <= uVar10) goto label_05b80b69;
																												iVar1 = *(int)((long)&pIVar8[2].klass + uVar10 * 4);
																												if ((typeof(CustomLogicSymbols)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar3 = typeof(CustomLogicSymbols). static_fields.BinopSymbolPriorities;
																												if (pSVar3 == null ) goto label_05b80b6e;
																												pSVar3.Add(iVar1, 2);
																												uVar10 = uVar10 + 1;
																												uVar9 = (ulong)*(uint)&pIVar8[1].monitor;
																											} while ((long)uVar10 <(long)(int)*(uint)&pIVar8[1].monitor);
																										}
																										pIVar8 = new CustomLogicSymbol[2];
																										if (pIVar8 != null) {
																											pvVar4 = pIVar8[1].monitor;
																											iVar7 = (int)pvVar4;
																											if ((iVar7 == 0) ||(*(uint)&pIVar8[2].klass = 0x21, iVar7 == 1)) goto label_05b80b69;
																											*(uint)((long)&pIVar8[2].klass + 4) = 0x22;
																											if (0 < iVar7) {
																												uVar9 = (ulong)pvVar4 & 0xffffffff;
																												uVar10 = 0;
																												do {
																													if (uVar9 <= uVar10) goto label_05b80b69;
																													iVar1 = *(int)((long)&pIVar8[2].klass + uVar10 * 4);
																													if ((typeof(CustomLogicSymbols)._2). cctor_finished_or_no_cctor == 0) {
																													}
																													pSVar3 = typeof(CustomLogicSymbols). static_fields.BinopSymbolPriorities;
																													if (pSVar3 == null ) goto label_05b80b6e;
																												pSVar3.Add(iVar1, 3);
																												uVar10 = uVar10 + 1;
																												uVar9 = (ulong)*(uint)&pIVar8[1].monitor;
																												} while ((long)uVar10 <(long)(int)*(uint)&pIVar8[1].monitor);
																											}
																											pIVar8 = new CustomLogicSymbol[3];
																											RuntimeHelpers.InitializeArray((Array)pIVar8, FieldRva_PrivateImplementationDetails_22616551FC537E058E1A89FBDE586BDE75467E11C6B1CB1963B5F892FB2B5894);
																											if (pIVar8 != null) {
																												if (0 < (int)pIVar8[1].monitor) {
																													uVar9 = (ulong)pIVar8[1].monitor & 0xffffffff;
																													uVar10 = 0;
																													do {
																														if (uVar9 <= uVar10) goto label_05b80b69;
																														iVar1 = *(int)((long)&pIVar8[2].klass + uVar10 * 4);
																														if ((typeof(CustomLogicSymbols)._2). cctor_finished_or_no_cctor == 0) {
																														}
																														pSVar3 = typeof(CustomLogicSymbols). static_fields.BinopSymbolPriorities;
																														if (pSVar3 == null ) goto label_05b80b6e;
																												pSVar3.Add(iVar1, 4);
																												uVar10 = uVar10 + 1;
																												uVar9 = (ulong)*(uint)&pIVar8[1].monitor;
																												} while ((long)uVar10 <(long)(int)*(uint)&pIVar8[1].monitor);
																												}
																												pIVar8 = new CustomLogicSymbol[5];
																												RuntimeHelpers.InitializeArray((Array)pIVar8, FieldRva_PrivateImplementationDetails_AAA9A0887F1FFCCD7D9FAFD6C581C10DD56E042994AF9075C209B87C175E5590);
																												if (pIVar8 != null) {
																													if (0 < (int)pIVar8[1].monitor) {
																														uVar9 = (ulong)pIVar8[1].monitor & 0xffffffff;
																														uVar10 = 0;
																														do {
																															if (uVar9 <= uVar10) goto label_05b80b69;
																															iVar1 = *(int)((long)&pIVar8[2].klass + uVar10 * 4);
																															if ((typeof(CustomLogicSymbols)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar5 = typeof(CustomLogicSymbols). static_fields.ClassSymbols;
																												if (pSVar5 == null) goto label_05b80b6e;
																												pSVar5.Add(iVar1);
																												uVar10 = uVar10 + 1;
																												uVar9 = (ulong)*(uint)&pIVar8[1].monitor;
																												} while ((long)uVar10 <(long)(int)*(uint)&pIVar8[1].monitor);
																												}
																												pIVar8 = new CustomLogicSymbol[4];
																												RuntimeHelpers.InitializeArray((Array)pIVar8, FieldRva_PrivateImplementationDetails_23971E4980DDAEE2D4BD5DC364AF0446A660BE4E95EAC134739B20FABD26981F);
																												if (pIVar8 != null) {
																													if (0 < (int)pIVar8[1].monitor) {
																														uVar9 = (ulong)pIVar8[1].monitor & 0xffffffff;
																														uVar10 = 0;
																														do {
																															if (uVar9 <= uVar10) goto label_05b80b69;
																															iVar1 = *(int)((long)&pIVar8[2].klass + uVar10 * 4);
																															if ((typeof(CustomLogicSymbols)._2) .cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar5 = typeof(CustomLogicSymbols). static_fields.ConditionalSymbols;
																												if (pSVar5 == null) goto label_05b80b6e;
																												pSVar5.Add(iVar1);
																												uVar10 = uVar10 + 1;
																												uVar9 = (ulong)*(uint)&pIVar8[1].monitor;
																												} while ((long)uVar10 <(long)(int)*(uint)&pIVar8[1].monitor);
																												}
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
	label_05b80b6e: ;
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
	label_05b80b69: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6003C8B")]
	[Address(RVA = "0x5A80BF0", Offset = "0x5A7FBF0", VA = "0x5A80BF0")]
	public CustomLogicSymbols()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSymbols.c (CustomLogic.CustomLogicSymbols$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicSymbols.c.

	// CustomLogic.CustomLogicSymbols$$.cctor: 3 lines keep C-only constructs
	static CustomLogicSymbols()
	{
		CustomLogic_CustomLogicSymbols_StaticFields pCVar1;
		Dictionary<string, int> __this;
		HashSet<string> pSVar2;
		Dictionary<int, int> __this_00;
		HashSet<int> pSVar3;

		if (Il2CppMethodInitialized_075473a1 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor) ;
			Il2CppMethodInitialized_075473a1 = true;
		}
		__this = il2cpp_codegen_object_new(typeof(Dictionary<string, int>)) ;
		__this = new Dictionary<object, int>();
		CustomLogicSymbols.Symbols = __this;
		pSVar2 = new HashSet<string>();
		pCVar1 = typeof(CustomLogicSymbols).static_fields;
		pCVar1.SpecialSymbolNames = pSVar2;
		pSVar2 = new HashSet<string>();
		pCVar1 = typeof(CustomLogicSymbols).static_fields;
		pCVar1.AlphaSymbolNames = pSVar2;
		__this_00 = il2cpp_codegen_object_new(typeof(Dictionary<int, int>)) ;
		__this_00 = new Dictionary<int, int>();
		pCVar1 = typeof(CustomLogicSymbols).static_fields;
		pCVar1.BinopSymbolPriorities = __this_00;
		pSVar3 = new HashSet<int>();
		pCVar1 = typeof(CustomLogicSymbols).static_fields;
		pCVar1.ClassSymbols = pSVar3;
		pSVar3 = new HashSet<int>();
		pCVar1 = typeof(CustomLogicSymbols).static_fields;
		pCVar1.ConditionalSymbols = pSVar3;
		CustomLogicSymbols._loaded = false;
		return;
	}
}
