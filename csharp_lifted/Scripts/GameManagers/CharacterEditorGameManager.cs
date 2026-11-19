// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.CharacterEditorGameManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameManagers/CharacterEditorGameManager.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/CharacterEditorGameManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Characters;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x2000375")]
internal class CharacterEditorGameManager : BaseGameManager
{
	[Token(Token = "0x2000376")]
	[CompilerGenerated]
	private sealed class _003CGenerateHumanPreviewsCoroutine_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001152")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001153")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001154")]
		[FieldOffset(Offset = "0x20")]
		public CharacterEditorGameManager _003C_003E4__this;

		[Token(Token = "0x4001155")]
		[FieldOffset(Offset = "0x28")]
		private HumanCustomSet _003Cset_003E5__2;

		[Token(Token = "0x4001156")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x4001157")]
		[FieldOffset(Offset = "0x38")]
		private List<BaseSetting>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x4001158")]
		[FieldOffset(Offset = "0x50")]
		private HumanCustomSet _003Cpreset_003E5__5;

		[Token(Token = "0x17000259")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001584")]
			[Address(RVA = "0x58283E0", Offset = "0x58273E0", VA = "0x58283E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700025A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001586")]
			[Address(RVA = "0x5828430", Offset = "0x5827430", VA = "0x5828430", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6001580")]
		[Address(RVA = "0x58260F0", Offset = "0x58250F0", VA = "0x58260F0")]
		[DebuggerHidden]
		public _003CGenerateHumanPreviewsCoroutine_003Ed__10(int _003C_003E1__state)
		{
			// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6001581")]
		[Address(RVA = "0x5826410", Offset = "0x5825410", VA = "0x5826410", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$System.IDisposable.Dispose): clean
			uint uVar1;

			uVar1 = this.__1__state + 3;
			if ((0x11 < uVar1) || ((0x30001U >> (uVar1 & 0x1f) & 1) == 0)) {
				return;
			}
			this.__1__state = -1;
			(this.__7__wrap3).Dispose();
			return;
		}

		[Token(Token = "0x6001582")]
		[Address(RVA = "0x5826470", Offset = "0x5825470", VA = "0x5826470", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$MoveNext): 23 lines keep C-only constructs
			int iVar1;
			byte bVar2;
			uint uVar3;
			uint uVar4;
			CharacterEditorGameManager pGVar5;
			StringSetting pSVar6;
			IntSetting pSVar7;
			HumanCustomSettings pSVar8;
			Settings_SetSettingsContainer_HumanCustomSet__o pSVar9;
			ListSetting<T> obj;
			Il2CppRuntimeInterfaceOffsetPair pIVar10;
			DummyHuman pCVar11;
			HumanSetup pCVar12;
			HumanCustomSet pSVar13;
			CharacterEditorGameManager.d__10<GenerateHumanPreviewsCoroutine> pGVar14;
			bool bVar15;
			HumanCustomSet pSVar16;
			String pSVar17;
			Transform pUVar18;
			VirtualInvokeData pVVar19;
			WaitForSeconds __this_00;
			List<object> __this_01;
			object pIVar20;
			ulong uVar21;
			int iVar22;
			int iVar23;
			String* __this_02;
			CharacterEditorGameManager pGVar24;
			Il2CppClass pIVar25;
			long lVar26;
			Quaternion value;
			CharacterEditorGameManager.d__10<GenerateHumanPreviewsCoroutine> pGStack_60;
			CharacterEditorGameManager.d__10<GenerateHumanPreviewsCoroutine>* ppGStack_50;
			List<T> pSStack_48;
			ulong uStack_40;
			System_Collections_Generic_List_Enumerator_T__o SStack_30;

			__this_02 = (String*)this;
			pGStack_60 = this;
			if (Il2CppMethodInitialized_07545785 == false) {
				__this_02 = &"HairM";
				Il2CppMethodInitialized_07545785 = true;
			}
			ppGStack_50 = &pGStack_60;
			uVar3 = this.__1__state;
			if (0xe < uVar3) {
				return false;
			}
			pGVar5 = this.__4__this;
			switch(uVar3) {
			case 0:
				this.__1__state = -1;
				pSVar16 = new HumanCustomSet();
				pGStack_60._set_5__2 = pSVar16;
				pSVar16 = pGStack_60._set_5__2;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar6 = pSVar16.Hair;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				pSVar6.Value = (Il2CppObject *)"HairM8";
				pSVar16 = pGStack_60._set_5__2;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar7 = pSVar16.Costume;
				if (pSVar7 == null) {
					throw new NullReferenceException();
				}
				pSVar7.Value = 1;
				pGStack_60._i_5__3 = 0;
				iVar22 = 0;
				uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05926eaa;
			case 1:
				this.__1__state = -1;
				pSVar17 = (this._i_5__3).ToString();
				pGVar24 = (GameManagers_CharacterEditorGameManager_o *)"Eye";
				pSVar17 = String.Concat("Eye", pSVar17);
				if (pGVar5 == null) {
					throw new NullReferenceException();
				}
				pGVar24.Screenshot(870.0, 500.0, 172.0, 172.0, pSVar17);
				iVar22 = pGStack_60._i_5__3 + 1;
				pGStack_60._i_5__3 = iVar22;
				uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
		joined_r0x05926eaa: ;
				if (uVar4 == 0) {
				}
				pSVar16 = pGStack_60._set_5__2;
				if (iVar22 < HumanSetup.EyeCount) {
					if (pSVar16 == null) {
						throw new NullReferenceException();
					}
					pSVar7 = pSVar16.Eye;
					if (pSVar7 == null) {
						throw new NullReferenceException();
					}
					pSVar7.Value = pGStack_60._i_5__3;
					if (pGVar5 == null) {
						throw new NullReferenceException();
					}
					pCVar11 = pGVar5.Human;
					if (pCVar11 == null) {
						throw new NullReferenceException();
					}
					pCVar12 = pCVar11.Setup;
					if (pCVar12 == null) {
						throw new NullReferenceException();
					}
					pCVar12.Load(pGStack_60._set_5__2, 0, false);
					pIVar20 = new WaitForEndOfFrame();
					pGStack_60.__2__current = pIVar20;
					iVar23 = 1;
				}
				else {
					if (pSVar16 == null) {
						throw new NullReferenceException();
					}
					pSVar7 = pSVar16.Eye;
					if (pSVar7 == null) {
						throw new NullReferenceException();
					}
					pSVar7.Value = 0;
					pGStack_60._i_5__3 = -1;
					iVar22 = -1;
					uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
		joined_r0x05926bee: ;
					if (uVar4 == 0) {
						iVar1 = HumanSetup.FaceCount;
					}
					else {
						iVar1 = *(int)((long)(typeof(HumanSetup)).static_fields + 0x1c);
					}
					if (iVar22 < iVar1) {
						pSVar16 = pGStack_60._set_5__2;
						if (pGStack_60._i_5__3 == -1) {
							if (pSVar16 == null) {
								throw new NullReferenceException();
							}
							pSVar6 = pSVar16.Face;
							if (pSVar6 == null) {
								throw new NullReferenceException();
							}
							pSVar6.Value = (Il2CppObject *)"FaceNone";
						}
						else {
							if (pSVar16 == null) {
								throw new NullReferenceException();
							}
							pSVar6 = pSVar16.Face;
							pSVar17 = (pGStack_60._i_5__3).ToString();
							pSVar17 = String.Concat("Face", pSVar17);
							if (pSVar6 == null) {
								throw new NullReferenceException();
							}
							pSVar6.Value = (object)pSVar17;
						}
						if (pGVar5 == null) {
							throw new NullReferenceException();
						}
						pCVar11 = pGVar5.Human;
						if (pCVar11 == null) {
							throw new NullReferenceException();
						}
						pCVar12 = pCVar11.Setup;
						if (pCVar12 == null) {
							throw new NullReferenceException();
						}
						pCVar12.Load(pGStack_60._set_5__2, 0, false);
						pIVar20 = new WaitForEndOfFrame();
						pGStack_60.__2__current = pIVar20;
						iVar23 = 2;
					}
					else {
						pSVar16 = pGStack_60._set_5__2;
						if (pSVar16 == null) {
							throw new NullReferenceException();
						}
						pSVar6 = pSVar16.Face;
						if (pSVar6 == null) {
							throw new NullReferenceException();
						}
						pSVar6.Value = (Il2CppObject *)"FaceNone";
						pGStack_60._i_5__3 = -1;
						iVar22 = -1;
						uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
		joined_r0x05926cd3: ;
						if (uVar4 == 0) {
							iVar1 = HumanSetup.GlassCount;
						}
						else {
							iVar1 = *(int)((long)(typeof(HumanSetup)).static_fields + 0x20);
						}
						if (iVar22 < iVar1) {
							pSVar16 = pGStack_60._set_5__2;
							if (pGStack_60._i_5__3 == -1) {
								if (pSVar16 == null) {
									throw new NullReferenceException();
								}
								pSVar6 = pSVar16.Glass;
								if (pSVar6 == null) {
									throw new NullReferenceException();
								}
								pSVar6.Value = (Il2CppObject *)"GlassNone";
							}
							else {
								if (pSVar16 == null) {
									throw new NullReferenceException();
								}
								pSVar6 = pSVar16.Glass;
								pSVar17 = (pGStack_60._i_5__3).ToString();
								pSVar17 = String.Concat("Glass", pSVar17);
								if (pSVar6 == null) {
									throw new NullReferenceException();
								}
								pSVar6.Value = (object)pSVar17;
							}
							if (pGVar5 == null) {
								throw new NullReferenceException();
							}
							pCVar11 = pGVar5.Human;
							if (pCVar11 == null) {
								throw new NullReferenceException();
							}
							pCVar12 = pCVar11.Setup;
							if (pCVar12 == null) {
								throw new NullReferenceException();
							}
							pCVar12.Load(pGStack_60._set_5__2, 0, false);
							pIVar20 = new WaitForEndOfFrame();
							pGStack_60.__2__current = pIVar20;
							iVar23 = 3;
						}
						else {
							pSVar16 = pGStack_60._set_5__2;
							if (pSVar16 == null) {
								throw new NullReferenceException();
							}
							pSVar6 = pSVar16.Glass;
							if (pSVar6 == null) {
								throw new NullReferenceException();
							}
							pSVar6.Value = (Il2CppObject *)"GlassNone";
							pGStack_60._i_5__3 = 0;
							iVar22 = 0;
							uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
		joined_r0x05926892: ;
							if (uVar4 == 0) {
								iVar1 = HumanSetup.HairMCount;
								pIVar25 = typeof(HumanSetup);
							}
							else {
								iVar1 = *(int)((long)(typeof(HumanSetup)).static_fields + 0x2c);
								pIVar25 = typeof(HumanSetup);
							}
							typeof(HumanSetup) = (HumanSetup)pIVar25;
							if (iVar22 < iVar1) {
								pSVar16 = pGStack_60._set_5__2;
								if (pSVar16 == null) {
									throw new NullReferenceException();
								}
								pSVar6 = pSVar16.Hair;
								pSVar17 = (pGStack_60._i_5__3).ToString();
								pSVar17 = String.Concat("HairM", pSVar17);
								if (pSVar6 == null) {
									throw new NullReferenceException();
								}
								pSVar6.Value = (object)pSVar17;
								if (pGVar5 == null) {
									throw new NullReferenceException();
								}
								pCVar11 = pGVar5.Human;
								if (pCVar11 == null) {
									throw new NullReferenceException();
								}
								pCVar12 = pCVar11.Setup;
								if (pCVar12 == null) {
									throw new NullReferenceException();
								}
								pCVar12.Load(pGStack_60._set_5__2, 0, false);
								pIVar20 = new WaitForEndOfFrame() ;
								pGStack_60.__2__current = pIVar20;
								iVar23 = 4;
							}
							else {
								pGStack_60._i_5__3 = 0;
								iVar22 = 0;
								uVar4 = (pIVar25._2).cctor_finished_or_no_cctor;
		joined_r0x05927059: ;
								if (uVar4 == 0) {
									pIVar25 = typeof(HumanSetup);
								}
								pSVar16 = pGStack_60._set_5__2;
								if (iVar22 < *(int)((long)pIVar25.static_fields + 0x30)) {
									if (pSVar16 == null) {
										throw new NullReferenceException();
									}
									pSVar6 = pSVar16.Hair;
									pSVar17 = (pGStack_60._i_5__3).ToString();
									pSVar17 = String.Concat("HairF", pSVar17);
									if (pSVar6 == null) {
										throw new NullReferenceException();
									}
									pSVar6.Value = (object)pSVar17;
									if (pGVar5 == null) {
										throw new NullReferenceException();
									}
									pCVar11 = pGVar5.Human;
									if (pCVar11 == null) {
										throw new NullReferenceException();
									}
									pCVar12 = pCVar11.Setup;
									if (pCVar12 == null) {
										throw new NullReferenceException();
									}
									pCVar12.Load(pGStack_60._set_5__2, 0, false);
									pIVar20 = new WaitForEndOfFrame();
									pGStack_60.__2__current = pIVar20;
									iVar23 = 5;
								}
								else {
									if (pSVar16 == null) {
										throw new NullReferenceException();
									}
									pSVar6 = pSVar16.Hair;
									if (pSVar6 == null) {
										throw new NullReferenceException();
									}
									pSVar6.Value = (Il2CppObject *)"HairM10";
									pGStack_60._i_5__3 = -1;
									iVar22 = -1;
									uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
		joined_r0x05926dbb: ;
									if (uVar4 == 0) {
										iVar1 = HumanSetup.HatCount;
									}
									else {
										iVar1 = *(int)((long)(typeof(HumanSetup)).static_fields + 0x3c);
									}
									if (iVar22 < iVar1) {
										pSVar16 = pGStack_60._set_5__2;
										if (pGStack_60._i_5__3 == -1) {
											if (pSVar16 == null) {
												throw new NullReferenceException();
											}
											pSVar6 = pSVar16.Hat;
											if (pSVar6 == null) {
												throw new NullReferenceException();
											}
											pSVar6.Value = (Il2CppObject *)"HatNone";
										}
										else {
											if (pSVar16 == null) {
												throw new NullReferenceException();
											}
											pSVar6 = pSVar16.Hat;
											pSVar17 = (pGStack_60._i_5__3).ToString();
											pSVar17 = String.Concat("Hat", pSVar17);
											if (pSVar6 == null) {
												throw new NullReferenceException();
											}
											pSVar6.Value = (object)pSVar17;
										}
										if (pGVar5 == null) {
											throw new NullReferenceException();
										}
										pCVar11 = pGVar5.Human;
										if (pCVar11 == null) {
											throw new NullReferenceException();
										}
										pCVar12 = pCVar11.Setup;
										if (pCVar12 == null) {
											throw new NullReferenceException();
										}
										pCVar12.Load(pGStack_60._set_5__2, 0, false);
										pIVar20 = new WaitForEndOfFrame();
										pGStack_60.__2__current = pIVar20;
										iVar23 = 7;
									}
									else {
										pSVar16 = pGStack_60._set_5__2;
										if (pSVar16 == null) {
											throw new NullReferenceException();
										}
										pSVar6 = pSVar16.Hat;
										if (pSVar6 == null) {
											throw new NullReferenceException();
										}
										pSVar6.Value = (Il2CppObject *)"HatNone";
										if (pGVar5 == null) {
											throw new NullReferenceException();
										}
										pCVar11 = pGVar5.Human;
										if (pCVar11 == null) {
											throw new NullReferenceException();
										}
										pUVar18 = pCVar11.transform;
										pSStack_48 = (List<T>)0xc0490fdb00000000;
										uStack_40 = (ulong)uStack_40._4_4_ << 0x20;
										value = Quaternion.Internal_FromEulerRad(ref pSStack_48);
										if (pUVar18 == null) {
											throw new NullReferenceException();
										}
										pUVar18.rotation = value;
										pGStack_60._i_5__3 = -1;
										iVar22 = -1;
										uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
		joined_r0x05926b06: ;
										if (uVar4 == 0) {
											iVar1 = HumanSetup.BackCount;
										}
										else {
											iVar1 = *(int)((long)(typeof(HumanSetup)).static_fields + 0x34 );
										}
										if (iVar22 < iVar1) {
											pSVar16 = pGStack_60._set_5__2;
											if (pGStack_60._i_5__3 == -1) {
												if (pSVar16 == null) {
													throw new NullReferenceException();
												}
												pSVar6 = pSVar16.Back;
												if (pSVar6 == null) {
													throw new NullReferenceException();
												}
												pSVar6.Value = (Il2CppObject *)"BackNone";
											}
											else {
												if (pSVar16 == null) {
													throw new NullReferenceException();
												}
												pSVar6 = pSVar16.Back;
												pSVar17 = (pGStack_60._i_5__3).ToString();
												pSVar17 = String.Concat("Back", pSVar17);
												if (pSVar6 == null) {
													throw new NullReferenceException();
												}
												pSVar6.Value = (object)pSVar17;
											}
											pCVar11 = pGVar5.Human;
											if (pCVar11 == null) {
												throw new NullReferenceException();
											}
											pCVar12 = pCVar11.Setup;
											if (pCVar12 == null) {
												throw new NullReferenceException();
											}
											pCVar12.Load(pGStack_60._set_5__2, 0, false);
											__this_00 = new WaitForSeconds(1.0);
											pGStack_60.__2__current = (object)__this_00;
											iVar23 = 8;
										}
										else {
											pSVar16 = pGStack_60._set_5__2;
											if (pSVar16 == null) {
												throw new NullReferenceException();
											}
											pSVar6 = pSVar16.Back;
											if (pSVar6 == null) {
												throw new NullReferenceException();
											}
											pSVar6.Value = (Il2CppObject *)"BackNone";
											pCVar11 = pGVar5.Human;
											if (pCVar11 == null) {
												throw new NullReferenceException();
											}
											pUVar18 = pCVar11.transform;
											if (pUVar18 == null) {
												throw new NullReferenceException();
											}
											pUVar18.rotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
											pGStack_60._i_5__3 = -1;
											iVar22 = -1;
											uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
		joined_r0x059270d4: ;
											if (uVar4 == 0) {
												iVar1 = HumanSetup.HeadCount;
											}
											else {
												iVar1 = *(int)((long)(typeof(HumanSetup)).static_fields + 0x38);
											}
											if (iVar22 < iVar1) {
												pSVar16 = pGStack_60._set_5__2;
												if (pGStack_60._i_5__3 == -1) {
													if (pSVar16 == null) {
														throw new NullReferenceException();
													}
													pSVar6 = pSVar16.Head;
													if (pSVar6 == null) {
														throw new NullReferenceException();
													}
													pSVar6.Value = (Il2CppObject *)"HeadNone";
												}
												else {
													if (pSVar16 == null) {
														throw new NullReferenceException();
													}
													pSVar6 = pSVar16.Head;
													pSVar17 = (pGStack_60._i_5__3).ToString();
													pSVar17 = String.Concat("Head", pSVar17) ;
													if (pSVar6 == null) {
														throw new NullReferenceException();
													}
													pSVar6.Value = (object)pSVar17;
												}
												pCVar11 = pGVar5.Human;
												if (pCVar11 == null) {
													throw new NullReferenceException();
												}
												pCVar12 = pCVar11.Setup;
												if (pCVar12 == null) {
													throw new NullReferenceException();
												}
												pCVar12.Load(pGStack_60._set_5__2, 0, false);
												pIVar20 = (object)il2cpp_codegen_object_new(typeof(WaitForEndOfFrame)) ;
												pIVar20 = new WaitForEndOfFrame();
												pGStack_60.__2__current = pIVar20;
												iVar23 = 10;
											}
											else {
												pSVar16 = pGStack_60._set_5__2;
												if (pSVar16 == null) {
													throw new NullReferenceException();
												}
												pSVar6 = pSVar16.Head;
												if (pSVar6 == null) {
													throw new NullReferenceException();
												}
												pSVar6.Value = (Il2CppObject *)"HeadNone";
												pSVar16 = pGStack_60._set_5__2;
												if (pSVar16 == null) {
													throw new NullReferenceException();
												}
												pSVar6 = pSVar16.Hair;
												if (pSVar6 == null) {
													throw new NullReferenceException();
												}
												pSVar6.Value = (Il2CppObject *)"HairM8";
												pGStack_60._i_5__3 = 0;
												iVar22 = 0;
												uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
		joined_r0x0592681a: ;
												if (uVar4 == 0) {
												}
												pSVar16 = pGStack_60._set_5__2;
												if (iVar22 < HumanSetup.CostumeMCount) {
													if (pSVar16 == null) {
														throw new NullReferenceException();
													}
													pSVar7 = pSVar16.Costume;
													if (pSVar7 == null) {
														throw new NullReferenceException();
													}
													pSVar7.Value = pGStack_60._i_5__3;
													pCVar11 = pGVar5.Human;
													if (pCVar11 == null) {
														throw new NullReferenceException();
													}
													pCVar12 = pCVar11.Setup;
													if (pCVar12 == null) {
														throw new NullReferenceException();
													}
													pCVar12.Load(pGStack_60._set_5__2, 0, false);
													pIVar20 = new WaitForEndOfFrame();
													pGStack_60.__2__current = pIVar20;
													iVar23 = 0xb;
												}
												else {
													if (pSVar16 == null) {
														throw new NullReferenceException();
													}
													pSVar7 = pSVar16.Sex;
													if (pSVar7 == null) {
														throw new NullReferenceException();
													}
													pSVar7.Value = 1;
													pSVar16 = pGStack_60._set_5__2;
													if (pSVar16 == null) {
														throw new NullReferenceException();
													}
													pSVar6 = pSVar16.Hair;
													if (pSVar6 == null) {
														throw new NullReferenceException();
													}
													pSVar6.Value = (Il2CppObject *)"HairF7";
													pGStack_60._i_5__3 = 0;
													iVar22 = 0;
													uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
		joined_r0x059269e5: ;
													if (uVar4 == 0) {
														iVar1 = HumanSetup.CostumeFCount;
													}
													else {
														iVar1 = *(int)((long)(typeof(HumanSetup)).static_fields + 0x28);
													}
													if (iVar22 < iVar1) {
														pSVar16 = pGStack_60._set_5__2;
														if (pSVar16 == null) {
															throw new NullReferenceException();
														}
														pSVar7 = pSVar16.Costume;
														if (pSVar7 == null) {
															throw new NullReferenceException();
														}
														pSVar7.Value = pGStack_60._i_5__3;
														pCVar11 = pGVar5.Human;
														if (pCVar11 == null) {
															throw new NullReferenceException();
														}
														pCVar12 = pCVar11.Setup;
														if (pCVar12 == null) {
															throw new NullReferenceException();
														}
														pCVar12.Load(pGStack_60._set_5__2, 0, false);
														pIVar20 = new WaitForEndOfFrame();
														pGStack_60.__2__current = pIVar20;
														iVar23 = 0xc;
													}
													else {
														pSVar8 = SettingsManager.HumanCustomSettings;
														if (pSVar8 == null) {
															throw new NullReferenceException();
														}
														pSVar9 = pSVar8.Costume1Sets;
														if (pSVar9 == null) {
															throw new NullReferenceException();
														}
														obj = pSVar9.Sets;
														if (obj == null) {
															throw new NullReferenceException();
														}
														pIVar25 = (Il2CppClass)obj.klass;
														uVar21 = (ulong)(pIVar25._2).interface_offsets_count;
														if (uVar21 != 0) {
															pIVar10 = (pIVar25._1).interfaceOffsets;
															lVar26 = 0;
															do {
																if (*(Il2CppClass*)((long)&pIVar10.interfaceType + lVar26) ==typeof(IListSetting)) {
																	pVVar19 = (VirtualInvokeData)&pIVar25.vtable[*(int)((long)&pIVar10.offset + lVar26) + 2]. methodPtr;
																	goto label_05927bb9;
																}
																lVar26 = lVar26 + 0x10;
															} while (uVar21 * 0x10 != lVar26);
														}
														pVVar19 = GetInterfaceInvokeDataFromVTableSlowPath((object)obj, typeof(IListSetting), 2);
		label_05927bb9: ;
														__this_01 = (List<object>)(*pVVar19.methodPtr)(obj,pVVar19.method);
														if (__this_01 == null) {
															throw new NullReferenceException();
														}
														SStack_30 = __this_01.GetEnumerator();
														pSStack_48 = SStack_30._list;
														uStack_40._0_4_ = SStack_30._index;
														uStack_40._4_4_ = SStack_30._version;
														pGStack_60.__7__wrap3._current =(BaseSetting)SStack_30._current;
														pGStack_60.__7__wrap3._list = SStack_30._list;
														pGStack_60.__7__wrap3._index = SStack_30._index;
														pGStack_60.__7__wrap3._version = SStack_30._version;
														pGStack_60.__1__state = -3;
		label_05927c1a: ;
														bVar15 = (pGStack_60.__7__wrap3).MoveNext();
														pGVar14 = pGStack_60;
														pSVar13 = typeof(HumanCustomSet);
														if (!bVar15) {
															pGVar14.__1__state = -1;
															pGVar24 = (CharacterEditorGameManager)&pGVar14.__7__wrap3 ;
															pGVar24.Dispose();
															pGStack_60.__7__wrap3._list =null;
															pGStack_60.__7__wrap3._index = 0;
															pGStack_60.__7__wrap3._version = 0;
															pGStack_60.__7__wrap3._current = null;
															if (pGVar5 == null) {
																throw new NullReferenceException();
															}
															pGVar24.Screenshot(450.0, 360.0, 128.0, 128.0, "PresetNone");
															return false;
														}
														pSVar16 = (HumanCustomSet)pGStack_60.__7__wrap3._current ;
														if (pSVar16 == null) {
															pGStack_60._preset_5__5 = null;
														}
														else {
															bVar2 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
															if (((pSVar16.klass._2).typeHierarchyDepth < bVar2) ||((pSVar16.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(HumanCustomSet))) {
		label_05927c8e: ;
																throw new InvalidCastException();
															}
															pGStack_60._preset_5__5 = pSVar16;
															if (((pSVar16.klass._2).typeHierarchyDepth < bVar2) ||((pSVar16.klass._2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass)pSVar13)) goto label_05927c8e;
														}
														if (pGVar5 == null) {
															throw new NullReferenceException();
														}
														pCVar11 = pGVar5.Human;
														if (pCVar11 == null) {
															throw new NullReferenceException();
														}
														pCVar12 = pCVar11.Setup;
														if (pCVar12 == null) {
															throw new NullReferenceException();
														}
														pCVar12.Load(pGStack_60._preset_5__5, 0, false);
														pIVar20 = new WaitForEndOfFrame();
														pGStack_60.__2__current = pIVar20;
														iVar23 = 0xd;
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
				break;
			case 2:
				this.__1__state = -1;
				pSVar16 = this._set_5__2;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar6 = pSVar16.Face;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				if (pGVar5 == null) {
					throw new NullReferenceException();
				}
				__this_02.Screenshot(870.0, 470.0, 172.0, 172.0, pSVar6._value);
				iVar22 = pGStack_60._i_5__3 + 1;
				pGStack_60._i_5__3 = iVar22;
				uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05926bee;
			case 3:
				this.__1__state = -1;
				pSVar16 = this._set_5__2;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar6 = pSVar16.Glass;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				if (pGVar5 == null) {
					throw new NullReferenceException();
				}
				__this_02.Screenshot(870.0, 500.0, 172.0, 172.0, pSVar6._value);
				iVar22 = pGStack_60._i_5__3 + 1;
				pGStack_60._i_5__3 = iVar22;
				uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05926cd3;
			case 4:
				this.__1__state = -1;
				pSVar16 = this._set_5__2;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar6 = pSVar16.Hair;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				if (pGVar5 == null) {
					throw new NullReferenceException();
				}
				__this_02.Screenshot(816.0, 510.0, 280.0, 280.0, pSVar6._value);
				iVar22 = pGStack_60._i_5__3 + 1;
				pGStack_60._i_5__3 = iVar22;
				uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05926892;
			case 5:
				this.__1__state = -1;
				pIVar20 = (object)il2cpp_codegen_object_new(typeof(WaitForEndOfFrame)) ;
				pIVar20 = new WaitForEndOfFrame();
				pGStack_60.__2__current = pIVar20;
				iVar23 = 6;
				break;
			case 6:
				this.__1__state = -1;
				pSVar16 = this._set_5__2;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar6 = pSVar16.Hair;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				if (pGVar5 == null) {
					throw new NullReferenceException();
				}
				__this_02.Screenshot(816.0, 510.0, 280.0, 280.0, pSVar6._value);
				iVar22 = pGStack_60._i_5__3 + 1;
				pGStack_60._i_5__3 = iVar22;
				uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
				pIVar25 = typeof(HumanSetup);
				goto joined_r0x05927059;
			case 7:
				this.__1__state = -1;
				pSVar16 = this._set_5__2;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar6 = pSVar16.Hat;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				if (pGVar5 == null) {
					throw new NullReferenceException();
				}
				__this_02.Screenshot(796.0, 570.0, 320.0, 320.0, pSVar6._value);
				iVar22 = pGStack_60._i_5__3 + 1;
				pGStack_60._i_5__3 = iVar22;
				uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05926dbb;
			case 8:
				this.__1__state = -1;
				pIVar20 = (object)il2cpp_codegen_object_new(typeof(WaitForEndOfFrame)) ;
				pIVar20 = new WaitForEndOfFrame();
				pGStack_60.__2__current = pIVar20;
				iVar23 = 9;
				break;
			case 9:
				this.__1__state = -1;
				pSVar16 = this._set_5__2;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar6 = pSVar16.Back;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				if (pGVar5 == null) {
					throw new NullReferenceException();
				}
				__this_02.Screenshot(776.0, 300.0, 360.0, 360.0, pSVar6._value);
				iVar22 = pGStack_60._i_5__3 + 1;
				pGStack_60._i_5__3 = iVar22;
				uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05926b06;
			case 10:
				this.__1__state = -1;
				pSVar16 = this._set_5__2;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar6 = pSVar16.Head;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				if (pGVar5 == null) {
					throw new NullReferenceException();
				}
				__this_02.Screenshot(801.0, 470.0, 310.0, 310.0, pSVar6._value);
				iVar22 = pGStack_60._i_5__3 + 1;
				pGStack_60._i_5__3 = iVar22;
				uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
				goto joined_r0x059270d4;
			case 0xb:
				this.__1__state = -1;
				pSVar17 = (this._i_5__3).ToString();
				pGVar24 = (GameManagers_CharacterEditorGameManager_o *)"CostumeM";
				pSVar17 = String.Concat("CostumeM", pSVar17);
				if (pGVar5 == null) {
					throw new NullReferenceException();
				}
				pGVar24.Screenshot(826.0, 250.0, 260.0, 260.0, pSVar17);
				iVar22 = pGStack_60._i_5__3 + 1;
				pGStack_60._i_5__3 = iVar22;
				uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
				goto joined_r0x0592681a;
			case 0xc:
				this.__1__state = -1;
				pSVar17 = (this._i_5__3).ToString();
				pGVar24 = (GameManagers_CharacterEditorGameManager_o *)"CostumeF";
				pSVar17 = String.Concat("CostumeF", pSVar17);
				if (pGVar5 == null) {
					throw new NullReferenceException();
				}
				pGVar24.Screenshot(826.0, 250.0, 260.0, 260.0, pSVar17);
				iVar22 = pGStack_60._i_5__3 + 1;
				pGStack_60._i_5__3 = iVar22;
				uVar4 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
				goto joined_r0x059269e5;
			case 0xd:
				this.__1__state = -3;
				pIVar20 = (object)il2cpp_codegen_object_new(typeof(WaitForEndOfFrame)) ;
				pIVar20 = new WaitForEndOfFrame();
				pGStack_60.__2__current = pIVar20;
				iVar23 = 0xe;
				break;
			case 0xe:
				this.__1__state = -3;
				pSVar16 = this._preset_5__5;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar6 = pSVar16.Name;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				pGVar24 = (GameManagers_CharacterEditorGameManager_o *)"Preset";
				pSVar17 = String.Concat("Preset", pSVar6._value);
				if (pGVar5 == null) {
					throw new NullReferenceException();
				}
				pGVar24.Screenshot(746.0, 360.0, 420.0, 420.0, pSVar17);
				pGStack_60._preset_5__5 = null;
				goto label_05927c1a;
			}
			pGStack_60.__1__state = iVar23;
			return true;
		}

		[Token(Token = "0x6001583")]
		[Address(RVA = "0x58283A0", Offset = "0x58273A0", VA = "0x58283A0")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$<>m__Finally1): clean
			this.__1__state = -1;
			(this.__7__wrap3).Dispose();
			return;
		}

		[Token(Token = "0x6001585")]
		[Address(RVA = "0x58283F0", Offset = "0x58273F0", VA = "0x58283F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_GameManagers_CharacterEditorGameManager_GenerateHumanPreviewsCoroutine_d__10_System_Collections);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000377")]
	[CompilerGenerated]
	private sealed class _003CGenerateTitanPreviewsCoroutine_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001159")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400115A")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400115B")]
		[FieldOffset(Offset = "0x20")]
		public CharacterEditorGameManager _003C_003E4__this;

		[Token(Token = "0x400115C")]
		[FieldOffset(Offset = "0x28")]
		private TitanCustomSet _003Cset_003E5__2;

		[Token(Token = "0x400115D")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x400115E")]
		[FieldOffset(Offset = "0x38")]
		private List<string>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x400115F")]
		[FieldOffset(Offset = "0x50")]
		private string _003Chair_003E5__5;

		[Token(Token = "0x1700025B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600158B")]
			[Address(RVA = "0x5828E60", Offset = "0x5827E60", VA = "0x5828E60", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700025C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600158D")]
			[Address(RVA = "0x5828EB0", Offset = "0x5827EB0", VA = "0x5828EB0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6001587")]
		[Address(RVA = "0x5826110", Offset = "0x5825110", VA = "0x5826110")]
		[DebuggerHidden]
		public _003CGenerateTitanPreviewsCoroutine_003Ed__11(int _003C_003E1__state)
		{
			// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6001588")]
		[Address(RVA = "0x5828440", Offset = "0x5827440", VA = "0x5828440", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$System.IDisposable.Dispose): clean
			int iVar1;

			iVar1 = this.__1__state;
			if ((iVar1 != 3) && (iVar1 != -3)) {
				return;
			}
			this.__1__state = -1;
			(this.__7__wrap3).Dispose();
			return;
		}

		[Token(Token = "0x6001589")]
		[Address(RVA = "0x5828490", Offset = "0x5827490", VA = "0x5828490", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$MoveNext): 16 lines keep C-only constructs
			int iVar1;
			byte bVar2;
			uint uVar3;
			uint uVar4;
			CharacterEditorGameManager __this_00;
			TitanCustomSettings pSVar5;
			Settings_SetSettingsContainer_TitanCustomSet__o __this_01;
			List<string> __this_02;
			StringSetting pSVar6;
			IntSetting pSVar7;
			TitanCustomSet pSVar8;
			CharacterEditorGameManager.d__11<GenerateTitanPreviewsCoroutine> pGVar9;
			bool bVar10;
			TitanCustomSet pSVar11;
			String pSVar12;
			object pIVar13;
			int iVar14;
			int iVar15;
			String* __this_03;
			CharacterEditorGameManager pGVar16;
			CharacterEditorGameManager.d__11<GenerateTitanPreviewsCoroutine> pGStack_68;
			byte puStack_58;
			System_Collections_Generic_List_Enumerator_T__o SStack_50;

			__this_03 = (String*)this;
			pGStack_68 = this;
			if (Il2CppMethodInitialized_07545787 == false) {
				__this_03 = &"HairM1";
				Il2CppMethodInitialized_07545787 = true;
			}
			puStack_58 = (byte)&pGStack_68;
			uVar3 = this.__1__state;
			if (uVar3 < 5) {
				__this_00 = this.__4__this;
				switch(uVar3) {
				case 0:
					this.__1__state = -1;
					pSVar5 = SettingsManager.TitanCustomSettings;
					if (pSVar5 == null) {
						puStack_58 = (byte)&pGStack_68;
						throw new NullReferenceException();
					}
					__this_01 = pSVar5.TitanCustomSets;
					if (__this_01 == null) {
						puStack_58 = (byte)&pGStack_68;
						throw new NullReferenceException();
					}
					puStack_58 = (byte)&pGStack_68;
					pSVar11 = (TitanCustomSet)__this_01.GetSelectedSet();
					pSVar8 = typeof(TitanCustomSet);
					if (pSVar11 == null) {
						pGStack_68._set_5__2 = null;
					}
					else {
						bVar2 = (typeof(TitanCustomSet)._2).typeHierarchyDepth;
						if (((((BaseSetSetting)pSVar11.klass)._2).typeHierarchyDepth < bVar2) ||((((BaseSetSetting)pSVar11.klass)._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(TitanCustomSet))) {
		label_05928626: ;
							throw new InvalidCastException();
						}
						pGStack_68._set_5__2 = pSVar11;
						if (((((BaseSetSetting)pSVar11.klass)._2).typeHierarchyDepth < bVar2) ||((((BaseSetSetting)pSVar11.klass)._2).typeHierarchy[(ulong)bVar2 - 1] !=(Il2CppClass)pSVar8)) goto label_05928626;
					}
					pSVar11 = pGStack_68._set_5__2;
					if (pSVar11 == null) {
						throw new NullReferenceException();
					}
					pSVar11.SetDefault();
					pSVar11 = pGStack_68._set_5__2;
					if (pSVar11 == null) {
						throw new NullReferenceException();
					}
					pSVar6 = pSVar11.Hair;
					if (pSVar6 == null) {
						throw new NullReferenceException();
					}
					pSVar6.Value = (Il2CppObject *)"HairM1";
					pGStack_68._i_5__3 = 0;
					iVar14 = 0;
					uVar4 = (typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor;
					break;
				case 1:
					this.__1__state = -1;
					puStack_58 = (byte)&pGStack_68;
					pSVar12 = (this._i_5__3).ToString();
					pGVar16 = (GameManagers_CharacterEditorGameManager_o *)"Eye";
					pSVar12 = String.Concat("Eye", pSVar12);
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					pGVar16.Screenshot(876.0, 570.0, 172.0, 172.0, pSVar12);
					iVar14 = pGStack_68._i_5__3 + 1;
					pGStack_68._i_5__3 = iVar14;
					uVar4 = (typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor;
					break;
				case 2:
					this.__1__state = -1;
					puStack_58 = (byte)&pGStack_68;
					pSVar12 = (this._i_5__3).ToString();
					pGVar16 = (GameManagers_CharacterEditorGameManager_o *)"Head";
					pSVar12 = String.Concat("Head", pSVar12);
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					pGVar16.Screenshot(852.0, 580.0, 220.0, 220.0, pSVar12);
					iVar14 = pGStack_68._i_5__3 + 1;
					pGStack_68._i_5__3 = iVar14;
					uVar4 = (typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor;
					goto joined_r0x0592872e;
				case 3:
					this.__1__state = -3;
					if (__this_00 == null) {
						puStack_58 = (byte)&pGStack_68;
						throw new NullReferenceException();
					}
					puStack_58 = (byte)&pGStack_68;
					__this_03.Screenshot(820.0, 560.0, 280.0, 280.0, this._hair_5__5);
					pGStack_68._hair_5__5 = null;
					goto label_05928aba;
				case 4:
					this.__1__state = -1;
					pSVar12 = (this._i_5__3).ToString();
					pGVar16 = (GameManagers_CharacterEditorGameManager_o *)"Body";
					pSVar12 = String.Concat("Body", pSVar12);
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					pGVar16.Screenshot(766.0, 220.0, 380.0, 380.0, pSVar12);
					iVar14 = pGStack_68._i_5__3 + 1;
					pGStack_68._i_5__3 = iVar14;
					uVar4 = (typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor;
					goto joined_r0x059286a1;
				}
				if (uVar4 == 0) {
				}
				pSVar11 = pGStack_68._set_5__2;
				if (iVar14 < BasicTitanSetup.EyeCount) {
					if (pSVar11 == null) {
						throw new NullReferenceException();
					}
					pSVar7 = pSVar11.Eye;
					if (pSVar7 == null) {
						throw new NullReferenceException();
					}
					pSVar7.Value = pGStack_68._i_5__3;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					__this_00.ReinstantiateCharacter(false);
					pIVar13 = new WaitForEndOfFrame();
					pGStack_68.__2__current = pIVar13;
					iVar15 = 1;
				}
				else {
					if (pSVar11 == null) {
						throw new NullReferenceException();
					}
					pSVar11.SetDefault();
					pSVar11 = pGStack_68._set_5__2;
					if (pSVar11 == null) {
						throw new NullReferenceException();
					}
					pSVar6 = pSVar11.Hair;
					if (pSVar6 == null) {
						throw new NullReferenceException();
					}
					pSVar6.Value = (Il2CppObject *)"HairM1";
					pGStack_68._i_5__3 = 0;
					iVar14 = 0;
					uVar4 = (typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor;
		joined_r0x0592872e: ;
					if (uVar4 == 0) {
					}
					pSVar11 = pGStack_68._set_5__2;
					if (iVar14 < BasicTitanSetup.HeadCount) {
						if (pSVar11 == null) {
							throw new NullReferenceException();
						}
						pSVar7 = pSVar11.Head;
						if (pSVar7 == null) {
							throw new NullReferenceException();
						}
						pSVar7.Value = pGStack_68._i_5__3;
						if (__this_00 == null) {
							throw new NullReferenceException();
						}
						__this_00.ReinstantiateCharacter(false);
						pIVar13 = new WaitForEndOfFrame();
						pGStack_68.__2__current = pIVar13;
						iVar15 = 2;
					}
					else {
						if (pSVar11 == null) {
							throw new NullReferenceException();
						}
						pSVar11.SetDefault();
						__this_02 = BasicTitanSetup.AllHairs;
						if (__this_02 == null) {
							throw new NullReferenceException();
						}
						SStack_50 = __this_02.GetEnumerator();
						pGStack_68.__7__wrap3._current = (String)SStack_50._current;
						pGStack_68.__7__wrap3._list = SStack_50._list;
						pGStack_68.__7__wrap3._index = SStack_50._index;
						pGStack_68.__7__wrap3._version = SStack_50._version;
						pGStack_68.__1__state = -3;
		label_05928aba: ;
						bVar10 = (pGStack_68.__7__wrap3).MoveNext();
						pGVar9 = pGStack_68;
						if (bVar10) {
							pGStack_68._hair_5__5 = pGStack_68.__7__wrap3._current;
							pSVar11 = pGStack_68._set_5__2;
							if (pSVar11 == null) {
								throw new NullReferenceException();
							}
							pSVar6 = pSVar11.Hair;
							if (pSVar6 == null) {
								throw new NullReferenceException();
							}
							pSVar6.Value = (object)pGStack_68._hair_5__5;
							if (__this_00 == null) {
								throw new NullReferenceException();
							}
							__this_00.ReinstantiateCharacter(false);
							pIVar13 = new WaitForEndOfFrame();
							pGStack_68.__2__current = pIVar13;
							iVar15 = 3;
						}
						else {
							pGVar9.__1__state = -1;
							(pGVar9.__7__wrap3).Dispose();
							pGStack_68.__7__wrap3._list = null;
							pGStack_68.__7__wrap3._index = 0;
							pGStack_68.__7__wrap3._version = 0;
							pGStack_68.__7__wrap3._current = null;
							pSVar11 = pGStack_68._set_5__2;
							if (pSVar11 == null) {
								throw new NullReferenceException();
							}
							pSVar11.SetDefault();
							pSVar11 = pGStack_68._set_5__2;
							if (pSVar11 == null) {
								throw new NullReferenceException();
							}
							pSVar6 = pSVar11.Hair;
							if (pSVar6 == null) {
								throw new NullReferenceException();
							}
							pSVar6.Value = (Il2CppObject *)"HairM1";
							pGStack_68._i_5__3 = 0;
							iVar14 = 0;
							uVar4 = (typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor;
		joined_r0x059286a1: ;
							if (uVar4 == 0) {
								iVar1 = BasicTitanSetup.BodyCount;
							}
							else {
								iVar1 = *(int)((long)(typeof(BasicTitanSetup)).static_fields + 8);
							}
							if (iVar1 <= iVar14) goto label_05928dda;
							pSVar11 = pGStack_68._set_5__2;
							if (pSVar11 == null) {
								throw new NullReferenceException();
							}
							pSVar7 = pSVar11.Body;
							if (pSVar7 == null) {
								throw new NullReferenceException();
							}
							pSVar7.Value = pGStack_68._i_5__3;
							if (__this_00 == null) {
								throw new NullReferenceException();
							}
							__this_00.ReinstantiateCharacter(false);
							pIVar13 = new WaitForEndOfFrame();
							pGStack_68.__2__current = pIVar13;
							iVar15 = 4;
						}
					}
				}
				pGStack_68.__1__state = iVar15;
				bVar10 = true;
			}
			else {
		label_05928dda: ;
				bVar10 = false;
			}
			return bVar10;
		}

		[Token(Token = "0x600158A")]
		[Address(RVA = "0x5828E20", Offset = "0x5827E20", VA = "0x5828E20")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$<>m__Finally1): clean
			this.__1__state = -1;
			(this.__7__wrap3).Dispose();
			return;
		}

		[Token(Token = "0x600158C")]
		[Address(RVA = "0x5828E70", Offset = "0x5827E70", VA = "0x5828E70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_GameManagers_CharacterEditorGameManager_GenerateTitanPreviewsCoroutine_d__11_System_Collections);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x400114B")]
	[FieldOffset(Offset = "0x0")]
	public static bool HumanMode;

	[Token(Token = "0x400114C")]
	[FieldOffset(Offset = "0x28")]
	public DummyHuman Human;

	[Token(Token = "0x400114D")]
	[FieldOffset(Offset = "0x30")]
	public DummyTitan Titan;

	[Token(Token = "0x400114E")]
	[FieldOffset(Offset = "0x38")]
	public DummyCharacter Character;

	[Token(Token = "0x400114F")]
	[FieldOffset(Offset = "0x8")]
	private static string PreviewFolderPath;

	[Token(Token = "0x4001150")]
	private const string TitanPreviewHair = "HairM1";

	[Token(Token = "0x4001151")]
	[FieldOffset(Offset = "0x40")]
	private GameObject platform;

	[Token(Token = "0x6001578")]
	[Address(RVA = "0x5825410", Offset = "0x5824410", VA = "0x5825410", Slot = "54")]
	protected override void Awake()
	{
		// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager$$Awake): 8 lines keep C-only constructs
		GameObject* targetAddress;
		float fVar1;
		uint uVar2;
		uint uVar3;
		byte bVar4;
		uint uVar5;
		String path;
		HumanCustomSettings pSVar7;
		Settings_SetSettingsContainer_HumanCustomSet__o pSVar8;
		IntSetting pSVar9;
		TitanCustomSettings pSVar10;
		Settings_SetSettingsContainer_TitanCustomSet__o pSVar11;
		Quaternion rotation;
		GameObject pUVar12;
		Transform __this_00;
		Renderer pUVar13;
		Material pUVar14;
		Color value;
		Vector3 position;
		Vector3 value_00;

		if (Il2CppMethodInitialized_0754577e == false) {
			Il2CppMethodInitialized_0754577e = true;
			uVar5 = (typeof(ResourcePaths)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar5 = (typeof(ResourcePaths)._2).cctor_finished_or_no_cctor;
		}
		if (uVar5 == 0) {
			path = ResourcePaths.Map;
		}
		else {
			path = *(String*)((long)(typeof(ResourcePaths)).static_fields + 0x40);
		}
		uVar2 = (Vector3.downVector).x;
		uVar3 = (Vector3.downVector).y;
		fVar1 = (Vector3.downVector).z;
		position.x = (float)uVar2 * 0.05;
		position.y = (float)uVar3 * 0.05;
		position.z = fVar1 * 0.05;
		rotation = *(Quaternion)typeof(Quaternion).static_fields;
		pUVar12 = ResourceManager.InstantiateAsset<GameObject>(path, "Geometry/Prefabs/Cuboid", position, (Quaternion)rotation, false, false);
		targetAddress = &this.platform;
		this.platform = pUVar12;
		pUVar12 = this.platform;
		if ((pUVar12 != null) &&(__this_00 = pUVar12.transform, __this_00 != null)) {
			value_00.z = 2.0;
			value_00.x = 2.0;
			value_00.y = 0.1;
			__this_00.localScale = value_00;
			if (*targetAddress != null) {
				pUVar13 = (*targetAddress).GetComponent<Renderer>();
				pUVar14 = (Material)ResourceManager.LoadAsset(ResourcePaths.Map, "Materials/TransparentMaterial", false, false);
				if (pUVar13 != null) {
					if (pUVar14 != null) {
						bVar4 = (typeof(Material)._2).typeHierarchyDepth;
						if (((pUVar14.klass._2).typeHierarchyDepth < bVar4) ||((pUVar14.klass._2).typeHierarchy[(ulong)bVar4 - 1] !=typeof(Material))) {
							throw new InvalidCastException();
						}
					}
					pUVar13.material = pUVar14;
					if (((*targetAddress != null) &&(pUVar13 = (*targetAddress).GetComponent<Renderer>(), pUVar13 != null)) &&(pUVar14 = pUVar13.material, pUVar14 != null)) {
						value.b = 1.0;
						value.a = 0.2;
						value.r = 1.0;
						value.g = 1.0;
						pUVar14.color = value;
						pSVar7 = SettingsManager.HumanCustomSettings;
						if (((pSVar7 != null) &&(pSVar8 = pSVar7.CustomSets, pSVar8 != null)) &&(pSVar9 = pSVar8.SelectedSetIndex, pSVar9 != null)) {
							pSVar9.Value = 0;
							pSVar10 = SettingsManager.TitanCustomSettings;
							if (((pSVar10 != null) &&(pSVar11 = pSVar10.TitanCustomSets, pSVar11 != null)) &&(pSVar9 = pSVar11.SelectedSetIndex, pSVar9 != null)) {
								pSVar9.Value = 0;
								CharacterPreviewGenerator.InitializePreviewSystem();
								CharacterEditorTitanSkinsPanel.ResetPreview();
								this.ReinstantiateCharacter(true);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001579")]
	[Address(RVA = "0x5825800", Offset = "0x5824800", VA = "0x5825800")]
	public void ReinstantiateCharacter(bool applySkins = true)
	{
		// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager$$ReinstantiateCharacter): 62 lines keep C-only constructs
		DummyCharacter* targetAddress;
		uint uVar1;
		ulong uVar2;
		ulong uVar3;
		ulong uVar4;
		uint uVar7;
		ulong uVar5;
		ulong uVar6;
		sbyte cVar8;
		byte bVar9;
		DummyCharacter x;
		String pSVar10;
		UnityEngine_Vector3_StaticFields pUVar11;
		UnityEngine_Quaternion_StaticFields pUVar12;
		HumanCustomSettings pSVar13;
		Settings_SetSettingsContainer_HumanCustomSet__o __this_00;
		HumanSetup __this_01;
		TitanCustomSettings pSVar14;
		Settings_SetSettingsContainer_TitanCustomSet__o __this_02;
		bool bVar15;
		Object obj;
		GameObject pUVar16;
		DummyHuman pCVar17;
		Human __this_03;
		HumanMovementSync __this_04;
		HumanCustomSet customSet;
		TitanCustomSet __this_05;
		String str1;
		String pSVar18;
		DummyTitan pCVar19;
		BasicTitan __this_06;
		BasicTitanMovementSync __this_07;
		undefined7 in_register_00000031;
		DummyHuman* targetAddress_00;
		DummyTitan* targetAddress_01;
		float fVar20;
		Quaternion rotation;
		Quaternion rotation_00;
		Vector3 position;
		Vector3 position_00;
		int local_7c;
		ulong local_78;
		ulong local_68;
		ulong uStack_60;
		ulong local_58;
		ulong local_48;

		x = this.Character;
		targetAddress = &this.Character;
		bVar15 = ((Object)x != null);
		if (bVar15) {
			if (*targetAddress == null) goto label_05925ea6;
			obj = (Object)(*targetAddress).gameObject;
			Object.Destroy(obj);
		}
		if ((typeof(CharacterEditorGameManager)._2).cctor_finished_or_no_cctor == 0) {
			cVar8 = CharacterEditorGameManager.HumanMode;
		}
		else {
			cVar8 = CharacterEditorGameManager.HumanMode;
		}
		if (cVar8 == false) {
			pSVar14 = SettingsManager.TitanCustomSettings;
			if (((pSVar14 != null) &&(__this_02 = pSVar14.TitanCustomSets, __this_02 != null)) &&(__this_05 = (TitanCustomSet)__this_02.GetSelectedSet(), __this_05 != null)) {
				bVar9 = (typeof(TitanCustomSet)._2).typeHierarchyDepth;
				if (((__this_05.klass._2).typeHierarchyDepth < bVar9) ||((__this_05.klass._2).typeHierarchy[(ulong)bVar9 - 1] !=typeof(TitanCustomSet))) {
					throw new InvalidCastException();
				}
				local_7c = __this_05.GetBody();
				local_68 = CONCAT44(local_68._4_4_, (int)CONCAT71(in_register_00000031, applySkins));
				pSVar10 = ResourcePaths.Characters;
				pSVar18 = CharacterPrefabs.BasicTitanPrefix;
				str1 = local_7c.ToString();
				pSVar18 = String.Concat(pSVar18, str1);
				pUVar11 = typeof(Vector3).static_fields;
				uVar1 = (pUVar11.zeroVector).x;
				uVar7 = (pUVar11.zeroVector).y;
				position_00.y = (float)uVar7;
				position_00.x = (float)uVar1;
				fVar20 = (pUVar11.zeroVector).z;
				if (Il2CppMethodInitialized_0753e72b == false) {
					local_78 = CONCAT44(local_78._4_4_, fVar20);
					Il2CppMethodInitialized_0753e72b = true;
					fVar20 = (float)local_78;
				}
				pUVar12 = typeof(Quaternion).static_fields;
				uVar5._0_4_ = (pUVar12.identityQuaternion).x;
				uVar5._4_4_ = (pUVar12.identityQuaternion).y;
				uVar6._0_4_ = (pUVar12.identityQuaternion).z;
				uVar6._4_4_ = (pUVar12.identityQuaternion).w;
				if ((typeof(ResourceManager)._2).cctor_finished_or_no_cctor == 0) {
					local_78 = CONCAT44(local_78._4_4_, fVar20);
					local_58 = uVar5;
					local_48 = uVar6;
					fVar20 = (float)local_78;
					uVar5._0_4_ = (undefined4)local_58;
					uVar5._4_4_ = local_58._4_4_;
					uVar6._0_4_ = (undefined4)local_48;
					uVar6._4_4_ = local_48._4_4_;
				}
				rotation_00.y = (float)uVar5._4_4_;
				rotation_00.x = (float)(undefined4)uVar5;
				rotation_00.w = (float)uVar6._4_4_;
				rotation_00.z = (float)(undefined4)uVar6;
				position_00.z = fVar20;
				pUVar16 = ResourceManager.InstantiateAsset<GameObject>(pSVar10, pSVar18, position_00, rotation_00, false, false) ;
				if (pUVar16 != null) {
					pCVar19 = pUVar16.AddComponent<DummyTitan>();
					this.Titan = pCVar19;
					targetAddress_01 = &this.Titan;
					__this_06 = pUVar16.GetComponent<BasicTitan>();
					uVar5 = local_68;
					if (__this_06 != null) {
						__this_06.enabled = false;
						__this_07 = pUVar16.GetComponent<BasicTitanMovementSync>();
						if (__this_07 != null) {
							__this_07.enabled = false;
							if (*targetAddress_01 != null) {
								(*targetAddress_01).LoadSet(__this_05, SUB81(uVar5, 0));
								if (*targetAddress_01 != null) {
									(*targetAddress_01).Idle();
									*targetAddress = (DummyCharacter)*targetAddress_01;
									return;
								}
							}
						}
					}
				}
			}
		}
		else {
			if (((typeof(ResourcePaths))._2).cctor_finished_or_no_cctor == 0) {
				pSVar10 = ResourcePaths.Characters;
			}
			else {
				pSVar10 = *(String*)((long)(typeof(ResourcePaths)).static_fields + 8);
			}
			pUVar11 = typeof(Vector3).static_fields;
			uVar2._0_4_ = (pUVar11.zeroVector).x;
			uVar2._4_4_ = (pUVar11.zeroVector).y;
			fVar20 = (pUVar11.zeroVector).z;
			uVar5._0_4_ = 0;
			uVar6._0_4_ = 0;
			if (Il2CppMethodInitialized_0753e72b == false) {
				uStack_60 = 0;
				local_68 = uVar2;
				Il2CppMethodInitialized_0753e72b = true;
				uVar2._0_4_ = (undefined4)local_68;
				uVar2._4_4_ = local_68._4_4_;
				uVar5._0_4_ = (undefined4)uStack_60;
				uVar6._0_4_ = uStack_60._4_4_;
			}
			pUVar12 = typeof(Quaternion).static_fields;
			uVar3._0_4_ = (pUVar12.identityQuaternion).x;
			uVar3._4_4_ = (pUVar12.identityQuaternion).y;
			uVar4._0_4_ = (pUVar12.identityQuaternion).z;
			uVar4._4_4_ = (pUVar12.identityQuaternion).w;
			if ((typeof(ResourceManager)._2).cctor_finished_or_no_cctor == 0) {
				local_68 = CONCAT44(uVar2._4_4_, (undefined4)uVar2);
				uStack_60 = CONCAT44((undefined4)uVar6, (undefined4)uVar5);
				local_78 = uVar3;
				local_58 = uVar4;
				uVar2._0_4_ = (undefined4)local_68;
				uVar2._4_4_ = local_68._4_4_;
				uVar3._0_4_ = (float)local_78;
				uVar3._4_4_ = local_78._4_4_;
				uVar4._0_4_ = (undefined4)local_58;
				uVar4._4_4_ = local_58._4_4_;
			}
			rotation.y = (float)uVar3._4_4_;
			rotation.x = (float)(undefined4)uVar3;
			rotation.w = (float)uVar4._4_4_;
			rotation.z = (float)(undefined4)uVar4;
			position.y = (float)uVar2._4_4_;
			position.x = (float)(undefined4)uVar2;
			position.z = fVar20;
			pUVar16 = ResourceManager.InstantiateAsset<GameObject>(pSVar10, "Human/Prefabs/HumanPlayer", position, rotation, false, false);
			if (pUVar16 != null) {
				pCVar17 = pUVar16.AddComponent<DummyHuman>();
				this.Human = pCVar17;
				targetAddress_00 = &this.Human;
				__this_03 = pUVar16.GetComponent<Human>();
				if (__this_03 != null) {
					__this_03.enabled = false;
					__this_04 = pUVar16.GetComponent<HumanMovementSync>();
					if (__this_04 != null) {
						__this_04.enabled = false;
						if (((*targetAddress_00 != null) &&(pSVar13 = SettingsManager.HumanCustomSettings, pSVar13 != null)) &&(__this_00 = pSVar13.CustomSets, __this_00 != null)) {
							__this_01 = ((*targetAddress_00).fields).Setup;
							customSet = (HumanCustomSet)__this_00.GetSelectedSet();
							if (__this_01 != null) {
								if (customSet != null) {
									bVar9 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
									if (((customSet.klass._2).typeHierarchyDepth < bVar9) ||((customSet.klass._2).typeHierarchy[(ulong)bVar9 - 1] !=typeof(HumanCustomSet))) {
										throw new InvalidCastException();
									}
								}
								__this_01.Load(customSet, 0, false);
								if (*targetAddress_00 != null) {
									(*targetAddress_00).Idle();
									*targetAddress = (DummyCharacter)*targetAddress_00;
									return;
								}
							}
						}
					}
				}
			}
		}
	label_05925ea6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600157A")]
	[Address(RVA = "0x5825EC0", Offset = "0x5824EC0", VA = "0x5825EC0")]
	public void GeneratePreviews()
	{
		// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager$$GeneratePreviews): 5 lines keep C-only constructs
		sbyte cVar1;
		GameObject __this_00;
		bool bVar2;
		CharacterEditorGameManager.d__10<GenerateHumanPreviewsCoroutine>* ppGVar3;
		object __this_01;

		bVar2 = Directory.Exists(CharacterEditorGameManager.PreviewFolderPath);
		if (!bVar2) {
			Directory.CreateDirectory(CharacterEditorGameManager.PreviewFolderPath);
		}
		__this_00 = this.platform;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetActive(false);
		if ((typeof(CharacterEditorGameManager)._2).cctor_finished_or_no_cctor == 0) {
			cVar1 = CharacterEditorGameManager.HumanMode;
		}
		else {
			cVar1 = CharacterEditorGameManager.HumanMode;
		}
		if (cVar1 == false) {
			ppGVar3 = (CharacterEditorGameManager.d__10<GenerateHumanPreviewsCoroutine>*)&typeof(CharacterEditorGameManager.d__11<GenerateTitanPreviewsCoroutine>);
		}
		else {
			ppGVar3 = &typeof(CharacterEditorGameManager.d__10<GenerateHumanPreviewsCoroutine>);
		}
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)*ppGVar3);
		__this_01 = new Object();
		*(uint)&__this_01[1].klass = 0;
		__this_01[2].klass = (Il2CppClass)this;
		this.StartCoroutine((IEnumerator)__this_01);
		return;
	}

	[Token(Token = "0x600157B")]
	[Address(RVA = "0x5826010", Offset = "0x5825010", VA = "0x5826010")]
	[IteratorStateMachine(typeof(_003CGenerateHumanPreviewsCoroutine_003Ed__10))]
	private IEnumerator GenerateHumanPreviewsCoroutine()
	{
		// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager$$GenerateHumanPreviewsCoroutine): 1 lines keep C-only constructs
		CharacterEditorGameManager.d__10<GenerateHumanPreviewsCoroutine> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorGameManager.d__10<GenerateHumanPreviewsCoroutine>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600157C")]
	[Address(RVA = "0x5826080", Offset = "0x5825080", VA = "0x5826080")]
	[IteratorStateMachine(typeof(_003CGenerateTitanPreviewsCoroutine_003Ed__11))]
	private IEnumerator GenerateTitanPreviewsCoroutine()
	{
		// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager$$GenerateTitanPreviewsCoroutine): 1 lines keep C-only constructs
		CharacterEditorGameManager.d__11<GenerateTitanPreviewsCoroutine> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorGameManager.d__11<GenerateTitanPreviewsCoroutine>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600157D")]
	[Address(RVA = "0x5826130", Offset = "0x5825130", VA = "0x5826130")]
	private void Screenshot(float x, float y, float w, float h, string file)
	{
		// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager$$Screenshot): clean
		Texture2D __this_00;
		String path;
		Byte[] bytes;
		Color color;
		Rect source;

		__this_00 = new Texture2D((int)w, (int)h, 3, false);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		color.b = 1.0;
		color.a = 1.0;
		color.r = 1.0;
		color.g = 1.0;
		__this_00.SetPixel(0, 0, color);
		source.m_YMin = y;
		source.m_XMin = x;
		source.m_Height = h;
		source.m_Width = w;
		__this_00.ReadPixels(source, 0, 0);
		__this_00.Apply();
		TextureScaler.ScaleBlocking(__this_00, 0x80, 0x80);
		path = String.Concat(CharacterEditorGameManager.PreviewFolderPath, "/", file, ".png");
		bytes = ImageConversion.EncodeToPNG(__this_00);
		File.WriteAllBytes(path, bytes);
		return;
	}

	[Token(Token = "0x600157E")]
	[Address(RVA = "0x5826350", Offset = "0x5825350", VA = "0x5826350")]
	public CharacterEditorGameManager()
	{
		// Lifted from source/cpp/GameManagers/CharacterEditorGameManager.c (GameManagers.CharacterEditorGameManager$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/GameManagers/CharacterEditorGameManager.c.

	// GameManagers.CharacterEditorGameManager$$.cctor: clean
	static CharacterEditorGameManager()
	{
		String pSVar2;

		CharacterEditorGameManager.HumanMode = true;
		pSVar2 = String.Concat(FolderPaths.Documents, "/CharacterPreviews");
		CharacterEditorGameManager.PreviewFolderPath = pSVar2;
		return;
	}
}
