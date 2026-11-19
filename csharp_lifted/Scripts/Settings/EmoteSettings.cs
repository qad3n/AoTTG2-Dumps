// ==================== AoTTG2 cross-reference ====================
// Type: Settings.EmoteSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/EmoteSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/EmoteSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A9")]
internal class EmoteSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> TextEmotes;

	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x40")]
	public ListSetting<StringSetting> EmojiEmotes;

	[Token(Token = "0x170000A7")]
	protected override string FileName
	{
		[Token(Token = "0x6000492")]
		[Address(RVA = "0x58D2840", Offset = "0x58D1840", VA = "0x58D2840", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Settings/EmoteSettings.c (Settings.EmoteSettings$$get_FileName): clean
			return "Emote.json";
		}
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x58D2870", Offset = "0x58D1870", VA = "0x58D2870", Slot = "13")]
	protected override bool Validate()
	{
		// Lifted from source/cpp/Settings/EmoteSettings.c (Settings.EmoteSettings$$Validate): 1 lines keep C-only constructs
		ListSetting<StringSetting> pSVar1;
		List<T> pSVar2;

		if (Il2CppMethodInitialized_07545c86 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_07545c86 = true;
		}
		pSVar1 = this.TextEmotes;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1._value, pSVar2 != null)) {
			if (pSVar2._size != 8) {
				return false;
			}
			pSVar1 = this.EmojiEmotes;
			if ((pSVar1 != null) &&(pSVar2 = pSVar1._value, pSVar2 != null)) {
				return pSVar2._size == 8;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x58D28E0", Offset = "0x58D18E0", VA = "0x58D28E0")]
	public EmoteSettings()
	{
		// Lifted from source/cpp/Settings/EmoteSettings.c (Settings.EmoteSettings$$.ctor): 36 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		StringSetting[] pSVar3;
		List<StringSetting> pSVar5;
		StringSetting pSVar6;
		ListSetting<StringSetting> pSVar7;

		if (Il2CppMethodInitialized_07545c87 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_StringSetting_ctor) ;
			Il2CppMethodInitialized_07545c87 = true;
		}
		pSVar5 = new List<StringSetting>();
		pSVar6 = new StringSetting("Help", 0x28);
		if (pSVar5 != null) {
			piVar1 = &pSVar5._version;
			*piVar1 = *piVar1 + 1;
			pSVar3 = pSVar5._items;
			if (pSVar3 != null) {
				uVar2 = pSVar5._size;
				if (uVar2 < (uint)pSVar3.Length) {
					pSVar5._size = uVar2 + 1;
					pSVar3[(int)uVar2] = pSVar6;
				}
				else {
					pSVar5.AddWithResize((object)pSVar6);
				}
				pSVar6 = new StringSetting("Thanks", 0x28);
				piVar1 = &pSVar5._version;
				*piVar1 = *piVar1 + 1;
				pSVar3 = pSVar5._items;
				if (pSVar3 != null) {
					uVar2 = pSVar5._size;
					if (uVar2 < (uint)pSVar3.Length) {
						pSVar5._size = uVar2 + 1;
						pSVar3[(int)uVar2] = pSVar6;
					}
					else {
						pSVar5.AddWithResize((object)pSVar6);
					}
					pSVar6 = new StringSetting("Sorry", 0x28);
					piVar1 = &pSVar5._version;
					*piVar1 = *piVar1 + 1;
					pSVar3 = pSVar5._items;
					if (pSVar3 != null) {
						uVar2 = pSVar5._size;
						if (uVar2 < (uint)pSVar3.Length) {
							pSVar5._size = uVar2 + 1;
							pSVar3[(int)uVar2] = pSVar6;
						}
						else {
							pSVar5.AddWithResize((object)pSVar6);
						}
						pSVar6 = new StringSetting("Titan here", 0x28);
						piVar1 = &pSVar5._version;
						*piVar1 = *piVar1 + 1;
						pSVar3 = pSVar5._items;
						if (pSVar3 != null) {
							uVar2 = pSVar5._size;
							if (uVar2 < (uint)pSVar3.Length) {
								pSVar5._size = uVar2 + 1;
								pSVar3[(int)uVar2] = pSVar6;
							}
							else {
								pSVar5.AddWithResize((object)pSVar6);
							}
							pSVar6 = new StringSetting("Good game", 0x28);
							piVar1 = &pSVar5._version;
							*piVar1 = *piVar1 + 1;
							pSVar3 = pSVar5._items;
							if (pSVar3 != null) {
								uVar2 = pSVar5._size;
								if (uVar2 < (uint)pSVar3.Length) {
									pSVar5._size = uVar2 + 1;
									pSVar3[(int)uVar2] = pSVar6;
								}
								else {
									pSVar5.AddWithResize((object)pSVar6);
								}
								pSVar6 = new StringSetting("Nice hit", 0x28);
								piVar1 = &pSVar5._version;
								*piVar1 = *piVar1 + 1;
								pSVar3 = pSVar5._items;
								if (pSVar3 != null) {
									uVar2 = pSVar5._size;
									if (uVar2 < (uint)pSVar3.Length) {
										pSVar5._size = uVar2 + 1;
										pSVar3[(int)uVar2] = pSVar6;
									}
									else {
										pSVar5.AddWithResize((object)pSVar6);
									}
									pSVar6 = new StringSetting("Oops", 0x28);
									piVar1 = &pSVar5._version;
									*piVar1 = *piVar1 + 1;
									pSVar3 = pSVar5._items;
									if (pSVar3 != null) {
										uVar2 = pSVar5._size;
										if (uVar2 < (uint)pSVar3.Length) {
											pSVar5._size = uVar2 + 1;
											pSVar3[(int)uVar2] = pSVar6;
										}
										else {
											pSVar5.AddWithResize((object)pSVar6);
										}
										pSVar6 = new StringSetting("Welcome", 0x28);
										piVar1 = &pSVar5._version;
										*piVar1 = *piVar1 + 1;
										pSVar3 = pSVar5._items;
										if (pSVar3 != null) {
											uVar2 = pSVar5._size;
											if (uVar2 < (uint)pSVar3.Length) {
												pSVar5._size = uVar2 + 1;
												pSVar3[(int)uVar2] = pSVar6;
											}
											else {
												pSVar5.AddWithResize((object)pSVar6);
											}
											pSVar7 = new ListSetting<StringSetting>((List<T>)pSVar5);
											this.TextEmotes = pSVar7;
											pSVar5 = il2cpp_codegen_object_new(typeof(List<StringSetting>)) ;
											pSVar5 = new List<StringSetting>();
											pSVar6 = new StringSetting("EmojiSmile", 0x28) ;
											if (pSVar5 != null) {
												piVar1 = &pSVar5._version;
												*piVar1 = *piVar1 + 1;
												pSVar3 = pSVar5._items;
												if (pSVar3 != null) {
													uVar2 = pSVar5._size;
													if (uVar2 < (uint)pSVar3.Length) {
														pSVar5._size = uVar2 + 1;
														pSVar3[(int)uVar2] = pSVar6;
													}
													else {
														pSVar5.AddWithResize((object)pSVar6);
													}
													pSVar6 = new StringSetting("EmojiThumbsUp", 0x28);
													piVar1 = &pSVar5._version;
													*piVar1 = *piVar1 + 1;
													pSVar3 = pSVar5._items;
													if (pSVar3 != null) {
														uVar2 = pSVar5._size;
														if (uVar2 < (uint)pSVar3.Length) {
															pSVar5._size = uVar2 + 1;
															pSVar3[(int)uVar2] = pSVar6;
														}
														else {
															pSVar5.AddWithResize((object)pSVar6);
														}
														pSVar6 = new StringSetting("EmojiCool", 0x28);
														piVar1 = &pSVar5._version;
														*piVar1 = *piVar1 + 1;
														pSVar3 = pSVar5._items;
														if (pSVar3 != null) {
															uVar2 = pSVar5._size;
															if (uVar2 < (uint)pSVar3.Length) {
																pSVar5._size = uVar2 + 1;
																pSVar3[(int)uVar2] = pSVar6;
															}
															else {
																pSVar5.AddWithResize((object)pSVar6);
															}
															pSVar6 = il2cpp_codegen_object_new(typeof(StringSetting)) ;
															pSVar6 = new StringSetting("EmojiLove", 0x28);
															piVar1 = &pSVar5._version;
															*piVar1 = *piVar1 + 1;
															pSVar3 = pSVar5._items;
															if (pSVar3 != null) {
																uVar2 = pSVar5._size;
																if (uVar2 < (uint)pSVar3.Length) {
																	pSVar5._size = uVar2 + 1;
																	pSVar3[(int)uVar2] = pSVar6;
																}
																else {
																	pSVar5.AddWithResize((object)pSVar6);
																}
																pSVar6 = new StringSetting("EmojiShocked", 0x28);
																piVar1 = &pSVar5._version;
																*piVar1 = *piVar1 + 1;
																pSVar3 = pSVar5._items;
																if (pSVar3 != null) {
																	uVar2 = pSVar5._size;
																	if (uVar2 < (uint)pSVar3.Length) {
																		pSVar5._size = uVar2 + 1;
																		pSVar3[(int)uVar2] = pSVar6;
																	}
																	else {
																		pSVar5.AddWithResize((object)pSVar6);
																	}
																	pSVar6 = new StringSetting("EmojiCrying", 0x28);
																	piVar1 = &pSVar5._version;
																	*piVar1 = *piVar1 + 1;
																	pSVar3 = pSVar5._items;
																	if (pSVar3 != null) {
																		uVar2 = pSVar5._size;
																		if (uVar2 < (uint)pSVar3.Length) {
																			pSVar5._size = uVar2 + 1;
																			pSVar3[(int)uVar2] = pSVar6;
																		}
																		else {
																			pSVar5.AddWithResize((object)pSVar6);
																		}
																		pSVar6 = new StringSetting("EmojiAnnoyed", 0x28);
																		piVar1 = &pSVar5._version;
																		*piVar1 = *piVar1 + 1;
																		pSVar3 = pSVar5._items;
																		if (pSVar3 != null) {
																			uVar2 = pSVar5._size;
																			if (uVar2 < (uint)pSVar3.Length) {
																				pSVar5._size = uVar2 + 1;
																				pSVar3[(int)uVar2] = pSVar6;
																			}
																			else {
																				pSVar5.AddWithResize((object)pSVar6);
																			}
																			pSVar6 = new StringSetting("EmojiAngry", 0x28);
																			piVar1 = &pSVar5._version;
																			*piVar1 = *piVar1 + 1;
																			pSVar3 = pSVar5._items;
																			if (pSVar3 != null) {
																				uVar2 = pSVar5._size;
																				if (uVar2 < (uint)pSVar3.Length) {
																					pSVar5._size = uVar2 + 1;
																					pSVar3[(int)uVar2] = pSVar6;
																				}
																				else {
																					pSVar5.AddWithResize((object)pSVar6);
																				}
																				pSVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(ListSetting<StringSetting>));
																				pSVar7 = new ListSetting<StringSetting>((List<T>)pSVar5);
																				this.EmojiEmotes = pSVar7;
																				base();
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
		throw new NullReferenceException();
	}
}
