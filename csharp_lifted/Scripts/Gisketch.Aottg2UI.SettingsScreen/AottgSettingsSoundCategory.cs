// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSoundCategory.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x20001A9")]
internal static class AottgSettingsSoundCategory
{
	[Token(Token = "0x6000957")]
	[Address(RVA = "0x5D51960", Offset = "0x5D50960", VA = "0x5D51960")]
	public static void Build(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSoundCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$Build): 2 lines keep C-only constructs
		String categoryId;
		AottgSettingsGroup[] groups;
		AottgVirtualSettingsScrollCategory __this;
		String* method_00;

		if (g_data_07548656 == false) {
			method_00 = &"sound";
			g_data_07548656 = true;
		}
		groups = AottgSettingsSoundCategory.Groups();
		categoryId = "sound";
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgVirtualSettingsScrollCategory));
		__this = new AottgVirtualSettingsScrollCategory(context, categoryId, groups, null, 0.0, (Nullable<float>)0x0);
		if (content == null) {
			throw new NullReferenceException();
		}
		content.Component((AottgComponent)__this);
		return;
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x5D52BC0", Offset = "0x5D51BC0", VA = "0x5D52BC0")]
	public static void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSoundCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$SyncState): clean
		AottgSettingsGroup[] groups;

		groups = AottgSettingsSoundCategory.Groups();
		AottgSettingsCategoryPage.SyncState(root, groups);
		return;
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x5D51A30", Offset = "0x5D50A30", VA = "0x5D51A30")]
	private static AottgSettingsGroup[] Groups()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSoundCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$Groups): 42 lines keep C-only constructs
		uint uVar1;
		SoundSettings settings;
		AottgSettingsRowBlock __this;
		String pSVar2;
		String id;
		String id_00;
		AottgSettingsGroup[] pGVar3;
		AottgComponent[] pGVar4;
		object pIVar5;
		object pIVar6;
		AottgSettingsGroup pGVar7;
		AottgSettingsRowBlock[] pGVar8;
		Func<string> pSVar9;
		String pSVar10;
		StringSetting setting;
		String[] values;
		AottgCustomPlaylistRow __this_00;
		FloatSetting pSVar11;
		BoolSetting pSVar12;
		MethodInfo pMVar13;
		IntSetting setting_00;
		MethodInfo method_00;
		ulong uVar14;
		MethodInfo pMVar15;

		settings = SettingsManager.SoundSettings;
		pGVar3 = (AottgSettingsGroup[])new AottgSettingsGroup[5];
		pGVar4 = (AottgComponent[])new AottgComponent[3];
		pSVar10 = "settings-sound-volume";
		if (settings == null) {
			pSVar11 = null;
		}
		else {
			pSVar11 = settings.Volume;
		}
		pIVar5 = (object)AottgSettingsRows.Slider("settings-sound-volume-master", "Sound", "Volume", pSVar11, null, null);
		if (pGVar4 == null) goto label_05e52ba4;
		if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pGVar4.obj).klass)._1).element_class), pIVar6 == null)) {
	label_05e52bae: ;
			pIVar5 = new ArrayTypeMismatchException();
			throw pIVar5;
		}
		if ((int)pGVar4.Length != 0) {
			pGVar4[0] = (AottgComponent)pIVar5;
			if (settings == null) {
				pSVar11 = null;
			}
			else {
				pSVar11 = settings.Music;
			}
			pIVar5 = (object)AottgSettingsRows.Slider("settings-sound-volume-music", "Sound", "Music", pSVar11, null, null);
			if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pGVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05e52bae;
			if ((pGVar4.Length & 0xfffffffe) != 0) {
				pGVar4[1] = (AottgComponent)pIVar5;
				if (settings == null) {
					pMVar15 = null;
				}
				else {
					pMVar15 = (MethodInfo)settings.MuteMinimized;
				}
				pIVar5 = (object)AottgSettingsRows.Switch("settings-sound-mute-minimized", "Sound", "MuteMinimized", (BoolSetting)pMVar15, null, null);
				if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pGVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05e52bae;
				if (2 < (uint)pGVar4.Length) {
					pGVar4[2] = (AottgComponent)pIVar5;
					pGVar7 = new AottgSettingsGroup(pSVar10, pGVar4);
					if (pGVar3 == null) {
	label_05e52ba4: ;
						throw new NullReferenceException();
					}
					if ((int)pGVar3.Length != 0) {
						pGVar3[0] = pGVar7;
						pGVar4 = (AottgComponent[])new AottgComponent[9];
						pSVar10 = "settings-sound-effects";
						if (settings == null) {
							pSVar12 = null;
						}
						else {
							pSVar12 = settings.TitanGrabMusic;
						}
						pIVar5 = (object)AottgSettingsRows.Switch("settings-sound-titan-grab-music", "Sound", "TitanGrabMusic", pSVar12, null, null);
						if (pGVar4 == null) goto label_05e52ba4;
						if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pGVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05e52bae;
						if ((int)pGVar4.Length != 0) {
							pGVar4[0] = (AottgComponent)pIVar5;
							if (settings == null) {
								pSVar12 = null;
							}
							else {
								pSVar12 = settings.TitanVocalEffect;
							}
							pIVar5 = (object)AottgSettingsRows.Switch("settings-sound-titan-vocal-effect", "Sound", "TitanVocalEffect", pSVar12, null, null);
							if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pGVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05e52bae;
							if ((pGVar4.Length & 0xfffffffe) != 0) {
								pGVar4[1] = (AottgComponent)pIVar5;
								if (settings == null) {
									pSVar12 = null;
								}
								else {
									pSVar12 = settings.GasEffect;
								}
								pIVar5 = (object)AottgSettingsRows.Switch("settings-sound-gas-effect", "Sound", "GasEffect", pSVar12, null, null);
								if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pGVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05e52bae;
								if (2 < (uint)pGVar4.Length) {
									pGVar4[2] = (AottgComponent)pIVar5;
									if (settings == null) {
										pSVar12 = null;
									}
									else {
										pSVar12 = settings.ReelInEffect;
									}
									pIVar5 = (object)AottgSettingsRows.Switch("settings-sound-reel-in-effect", "Sound", "ReelInEffect", pSVar12, null, null);
									if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pGVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05e52bae;
									if ((pGVar4.Length & 0xfffffffc) != 0) {
										pGVar4[3] = (AottgComponent)pIVar5;
										if (settings == null) {
											pSVar12 = null;
										}
										else {
											pSVar12 = settings.ReelOutEffect;
										}
										pIVar5 = (object)AottgSettingsRows.Switch("settings-sound-reel-out-effect", "Sound", "ReelOutEffect", pSVar12, null, null) ;
										if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pGVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05e52bae;
										if (4 < (uint)pGVar4.Length) {
											pGVar4[4] = (AottgComponent)pIVar5;
											if (settings == null) {
												pSVar12 = null;
											}
											else {
												pSVar12 = settings.HookRetractEffect;
											}
											pIVar5 = (object)AottgSettingsRows.Switch("settings-sound-hook-retract-effect", "Sound", "HookRetractEffect", pSVar12, null, null);
											if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pGVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05e52bae;
											if (5 < (uint)pGVar4.Length) {
												pGVar4[5] = (AottgComponent)pIVar5;
												if (settings == null) {
													pSVar12 = null;
												}
												else {
													pSVar12 = settings.HookImpactEffect;
												}
												pIVar5 = (object)AottgSettingsRows.Switch("settings-sound-hook-impact-effect", "Sound", "HookImpactEffect", pSVar12, null, null);
												if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pGVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05e52bae;
												if (6 < (uint)pGVar4.Length) {
													pGVar4[6] = (AottgComponent)pIVar5;
													if (settings == null) {
														pSVar12 = null;
													}
													else {
														pSVar12 = settings.CrashLandEffect;
													}
													pIVar5 = (object)AottgSettingsRows.Switch("settings-sound-crash-land-effect", "Sound", "CrashLandEffect", pSVar12, null, null);
													if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pGVar4.obj).klass)._1).element_class) , pIVar6 == null)) goto label_05e52bae;
													if ((pGVar4.Length & 0xfffffff8) != 0) {
														pGVar4[7] = (AottgComponent)pIVar5;
														if (settings == null) {
															pMVar15 = null;
														}
														else {
															pMVar15 = (MethodInfo)settings.HorseSoundEffect;
														}
														pIVar5 = (object)AottgSettingsRows.Switch("settings-sound-horse-effect", "Sound", "HorseSoundEffect", (BoolSetting)pMVar15, null, null);
														if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pGVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05e52bae;
														if (8 < (uint)pGVar4.Length) {
															pGVar4[8] = (AottgComponent)pIVar5;
															pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsGroup));
															pGVar7 = new AottgSettingsGroup(pSVar10, pGVar4);
															if ((pGVar7 != null) &&(pGVar8 = pGVar7._blocks, pGVar8 != null)) {
																uVar14 = 0;
																do {
																	uVar1 = (uint)pGVar8.Length;
																	if ((long)(int)uVar1 <= (long)uVar14) {
																		if ((pGVar3.Length & 0xfffffffe) == 0) goto label_05e52ba9;
																		pGVar3[1] = pGVar7;
																		pGVar4 = (AottgComponent[])new AottgComponent[3];
																		pSVar9 = new Func<string>(null, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory_CurrentSong);
																		if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
																		}
																		pSVar10 = Aottg2GisketchLocale.Text("Common.None");
																		pIVar5 = (object)AottgSettingsRows.Dynamic("settings-sound-current-song", "Sound", "CurrentSong", pSVar9, pSVar10, "settings.sound.currentSong", null);
																		if (pGVar4 != null) {
																			if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pGVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05e52bae;
																			if ((int)pGVar4.Length == 0) goto label_05e52ba9;
																			pGVar4[0] = (AottgComponent)pIVar5;
																			id_00 = "settings-sound-music-playlist";
																			id = "settings-sound-force-playlist";
																			pSVar2 = "Sound";
																			pSVar10 = "ForcePlaylist";
																			if (settings == null) {
																				setting = null;
																			}
																			else {
																				setting = settings.ForcePlaylist;
																			}
																			values = (String[])new string[8];
																			if (values != null) {
																				if ((int)values.Length == 0) goto label_05e52ba9;
																				values[0] = "Default";
																				if ((values.Length & 0xfffffffe) == 0) goto label_05e52ba9;
																				values[1] = "None";
																				if ((uint)values.Length < 3) goto label_05e52ba9;
																				values[2] = "Custom";
																				if ((values.Length & 0xfffffffc) == 0) goto label_05e52ba9;
																				values[3] = "Menu";
																				if ((uint)values.Length < 5) goto label_05e52ba9;
																				values[4] = "Ambient";
																				if ((uint)values.Length < 6) goto label_05e52ba9;
																				values[5] = "Peaceful";
																				if ((uint)values.Length < 7) goto label_05e52ba9;
																				values[6] = "Battle";
																				if ((values.Length & 0xfffffff8) == 0) goto label_05e52ba9;
																				values[7] = "Racing";
																				pMVar15 = null;
																				pIVar5 = (object)AottgSettingsRows.Dropdown(id, pSVar2, pSVar10, setting, values, null, null);
																				if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pGVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05e52bae;
																				if ((pGVar4.Length & 0xfffffffe) == 0) goto label_05e52ba9;
																				pGVar4[1] = (AottgComponent)pIVar5;
																				pSVar2 = "Sound";
																				pSVar10 = "CustomPlaylist";
																				pSVar10 = String.Concat("SettingsPopup.", pSVar2, ".", pSVar10);
																				pSVar9 = new Func<string>(null, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory_CustomPlaylistDirtyValue);
																				__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgCustomPlaylistRow));
																				pMVar13 = (MethodInfo *)"settings.sound.customPlaylist";
																				__this_00 = new AottgCustomPlaylistRow("settings-sound-custom-playlist", pSVar10, "settings.sound.customPlaylist", pSVar9);
																				if ((__this_00 !=null) && (pIVar5 = il2cpp_vm_Object_IsInst((object)__this_00, (((pGVar4.obj).klass)._1).element_class), pIVar5 == null)) goto label_05e52bae;
																				if ((uint)pGVar4.Length < 3) goto label_05e52ba9;
																				pGVar4[2] =(AottgComponent)__this_00;
																				pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsGroup));
																				pGVar7 = new AottgSettingsGroup(id_00, pGVar4);
																				if ((uint)pGVar3.Length < 3) goto label_05e52ba9;
																				pGVar3[2] = pGVar7;
																				pGVar4 = (AottgComponent[])new AottgComponent[4];
																				pSVar10 = "settings-sound-voice-chat";
																				if (settings == null) {
																					setting_00 = null;
																				}
																				else {
																					setting_00 = settings.VoiceChatInput;
																				}
																				pIVar5 = (object)AottgSettingsRows.Select("settings-sound-voice-chat-input", "Sound", "VoiceChatInput", setting_00, null, null);
																				if (pGVar4 != null) {
																					il2cpp_codegen_array_element_type_check((Array)pGVar4, pIVar5);
																					pMVar13 = null;
																					il2cpp_codegen_array_set_ref((Array)pGVar4, 0, pIVar5);
																					pIVar5 = (object)AottgSettingsSoundCategory.MicrophoneDropdown(settings);
																					il2cpp_codegen_array_element_type_check((Array)pGVar4, pIVar5);
																					il2cpp_codegen_array_set_ref((Array)pGVar4, 1, pIVar5);
																					if (settings == null) {
																						pMVar13 = null;
																						pIVar5 = (object)AottgSettingsRows.Slider("settings-sound-voice-chat-mic-volume", "Sound", "VoiceChatMicVolume", null, null, null);
																						il2cpp_codegen_array_element_type_check((Array)pGVar4, pIVar5);
																						il2cpp_codegen_array_set_ref((Array)pGVar4, 2, pIVar5);
																					}
																					else {
																						pIVar5 = (object)AottgSettingsRows.Slider("settings-sound-voice-chat-mic-volume", "Sound", "VoiceChatMicVolume", settings.VoiceChatMicVolume, null, null);
																						il2cpp_codegen_array_element_type_check((Array)pGVar4, pIVar5);
																						il2cpp_codegen_array_set_ref((Array)pGVar4, 2, pIVar5);
																						pMVar13 = (MethodInfo)settings.VoiceChatAudioVolume;
																					}
																					pSVar12 = null;
																					pIVar5 = (object)AottgSettingsRows.Slider("settings-sound-voice-chat-audio-volume", "Sound", "VoiceChatAudioVolume", (FloatSetting)pMVar13, null, null);
																					il2cpp_codegen_array_element_type_check((Array)pGVar4, pIVar5);
																					il2cpp_codegen_array_set_ref((Array)pGVar4, 3, pIVar5);
																					pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsGroup));
																					pGVar7 = new AottgSettingsGroup(pSVar10, pGVar4);
																					il2cpp_runtime_helper_02fe1060(pGVar3, 3, pGVar7);
																					pGVar4 = (AottgComponent[])new AottgComponent[3] ;
																					pMVar13 = (MethodInfo *)"settings-sound-legacy-effects";
																					if (settings != null) {
																						pSVar12 = settings.OldHookEffect;
																					}
																					pIVar5 = (object)AottgSettingsRows.Switch("settings-sound-old-hook-effect", "Sound", "OldHookEffect", pSVar12, null, null);
																					if (pGVar4 != null) {
																						il2cpp_codegen_array_element_type_check((Array)pGVar4, pIVar5);
																						il2cpp_codegen_array_set_ref((Array)pGVar4, 0, pIVar5);
																						if (settings == null) {
																							method_00 = null;
																							pIVar5 = (object)AottgSettingsRows.Switch("settings-sound-old-blade-effect", "Sound", "OldBladeEffect", null, null, null);
																							il2cpp_codegen_array_element_type_check((Array)pGVar4, pIVar5);
																							il2cpp_codegen_array_set_ref((Array)pGVar4, 1, pIVar5);
																						}
																						else {
																							pIVar5 = (object)AottgSettingsRows.Switch("settings-sound-old-blade-effect", "Sound", "OldBladeEffect", settings.OldBladeEffect, null, null);
																							il2cpp_codegen_array_element_type_check((Array)pGVar4, pIVar5);
																							il2cpp_codegen_array_set_ref((Array)pGVar4, 1, pIVar5);
																							method_00 = (MethodInfo)settings.OldNapeEffect;
																						}
																						pIVar5 = (object)AottgSettingsRows.Switch("settings-sound-old-nape-effect", "Sound", "OldNapeEffect", (BoolSetting)method_00, null, null);
																						il2cpp_codegen_array_element_type_check((Array)pGVar4, pIVar5);
																						il2cpp_codegen_array_set_ref((Array)pGVar4, 2, pIVar5);
																						pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsGroup));
																						pGVar7 = new AottgSettingsGroup((String)pMVar13, pGVar4);
																						if (pGVar7 != null) {
																							pGVar7.UseTwoColumnLayout();
																							il2cpp_runtime_helper_02fe1060(pGVar3, 4, pGVar7);
																							return pGVar3;
																						}
																					}
																				}
																			}
																		}
																		break;
																	}
																	if (uVar1 <= uVar14) goto label_05e52ba9;
																	__this = pGVar8[uVar14];
																	if (__this != null) {
																		if (__this == (AottgSettingsRowBlock)0x0) break;
																		__this.SetLayoutMode(0);
																		pGVar8 = pGVar7._blocks;
																	}
																	uVar14 = uVar14 + 1;
																} while (pGVar8 != null);
															}
															goto label_05e52ba4;
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
	label_05e52ba9: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x5D52DF0", Offset = "0x5D51DF0", VA = "0x5D52DF0")]
	private static string CurrentSong()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSoundCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$CurrentSong): clean
		String pSVar1;

		return pSVar1;
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x5D52BE0", Offset = "0x5D51BE0", VA = "0x5D52BE0")]
	private static string NoneText()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSoundCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$NoneText): clean
		String pSVar1;

		pSVar1 = Aottg2GisketchLocale.Text("Common.None");
		return pSVar1;
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x5D52E70", Offset = "0x5D51E70", VA = "0x5D52E70")]
	internal static string CustomPlaylistText()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSoundCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$CustomPlaylistText): clean
		String pSVar1;

		return pSVar1;
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x5D52E80", Offset = "0x5D51E80", VA = "0x5D52E80")]
	private static string CustomPlaylistDirtyValue()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSoundCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$CustomPlaylistDirtyValue): clean
		SoundSettings pSVar1;
		StringSetting pSVar2;

		pSVar1 = SettingsManager.SoundSettings;
		if (pSVar1 == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pSVar2 = pSVar1.CustomPlaylist;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		return pSVar2._value;
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x5D52C40", Offset = "0x5D51C40", VA = "0x5D52C40")]
	private static AottgComponent MicrophoneDropdown(SoundSettings settings)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSoundCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$MicrophoneDropdown): 3 lines keep C-only constructs
		uint uVar1;
		String[] values;
		String[] labels;
		ulong uVar2;
		String pSVar3;
		AottgComponent pGVar4;
		String* ppSVar5;
		String* ppSVar6;
		StringSetting setting;
		ulong uVar7;

		ppSVar6 = (String*)settings;
		if (Il2CppMethodInitialized_0754865a == false) {
			ppSVar6 = &"Sound";
			Il2CppMethodInitialized_0754865a = true;
		}
		values = AottgSettingsSoundCategory.SafeMicrophones() ;
		if (values == null) {
			throw new NullReferenceException();
		}
		labels = (String[])new string[(uint32_t)values.Length];
		if (0 < (int)values.Length) {
			if (labels == null) {
				pSVar3 = values[0];
				VoiceChatManager.GetDeviceLabel(pSVar3);
				throw new NullReferenceException();
			}
			uVar2 = values.Length & 0xffffffff;
			ppSVar6 = labels.m_Items;
			ppSVar5 = values.m_Items;
			uVar7 = 0;
			do {
				if (uVar2 <= uVar7) {
	label_05e52db0: ;
					throw new IndexOutOfRangeException();
				}
				pSVar3 = *ppSVar5;
				pSVar3 = VoiceChatManager.GetDeviceLabel(pSVar3);
				if ((uint)labels.Length <= uVar7) goto label_05e52db0;
				*ppSVar6 = pSVar3;
				uVar7 = uVar7 + 1;
				uVar1 = (uint)values.Length;
				uVar2 = (ulong)uVar1;
				ppSVar5 = ppSVar5 + 1;
				ppSVar6 = ppSVar6 + 1;
			} while ((long)uVar7 < (long)(int)uVar1);
		}
		if (settings == null) {
			setting = null;
		}
		else {
			setting = settings.VoiceChatDevice;
		}
		pGVar4 = AottgSettingsRows.StringChoice("settings-sound-voice-chat-device", "Sound", "VoiceChatDevice", 1, setting, values, labels, null, null);
		return pGVar4;
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x5D52F00", Offset = "0x5D51F00", VA = "0x5D52F00")]
	private static string[] SafeMicrophones()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSoundCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSoundCategory$$SafeMicrophones): clean
		String[] pSVar1;

		return pSVar1;
	}
}
