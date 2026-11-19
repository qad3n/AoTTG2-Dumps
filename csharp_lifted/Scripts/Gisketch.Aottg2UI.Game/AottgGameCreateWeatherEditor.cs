// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.SettingsScreen;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200027A")]
internal static class AottgGameCreateWeatherEditor
{
	[Token(Token = "0x4000CD5")]
	private const string Id = "game-create-weather";

	[Token(Token = "0x4000CD6")]
	private const string HeaderId = "game-create-weather-header";

	[Token(Token = "0x4000CD7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<IAottgSettingsStateSync> Rows;

	[Token(Token = "0x4000CD8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static WeatherSet _draft;

	[Token(Token = "0x4000CD9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static WeatherSet _draftSource;

	[Token(Token = "0x1700018E")]
	private static SetSettingsContainer<WeatherSet> Sets
	{
		[Token(Token = "0x6000F20")]
		[Address(RVA = "0x57A8790", Offset = "0x57A7790", VA = "0x57A8790")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$get_Sets): clean
			WeatherSettings pSVar1;

			pSVar1 = SettingsManager.WeatherSettings;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			return pSVar1.WeatherSets;
		}
	}

	[Token(Token = "0x6000F21")]
	[Address(RVA = "0x57A87E0", Offset = "0x57A77E0", VA = "0x57A87E0")]
	public static void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Build): 9 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		int length;
		uint uVar3;
		List<IAottgSettingsStateSync> pSVar4;
		WeatherSettings pSVar5;
		SetSettingsContainer<WeatherSet> __this;
		BoolSetting pSVar6;
		StringSetting setting;
		AottgGameCreateWeatherEditor.c__DisplayClass7_0 __this_00;
		WeatherSet pSVar8;
		WeatherSet pSVar9;
		AottgBoolSettingAdapter pGVar10;
		AottgSettingRow pGVar11;
		Action<AottgUi> __this_01;
		GisketchLayoutDefinition layout;
		AottgStringSettingAdapter __this_02;
		String[] options;
		AottgGameCreateWeatherEditor.c__DisplayClass7_0 targetAddress;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateWeatherEditor.c__DisplayClass7_0));
		__this_00 = new Object();
		pSVar4 = AottgGameCreateWeatherEditor.Rows;
		if (pSVar4 != null) {
			piVar1 = &pSVar4._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar4._size;
			pSVar4._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar4._items, 0, length);
			}
			pSVar5 = SettingsManager.WeatherSettings;
			if (((pSVar5 != null) &&(__this = pSVar5.WeatherSets, __this != null)) && (pSVar8 = (WeatherSet)__this.GetSelectedSet(), pSVar8 != null)) {
				bVar2 = (typeof(WeatherSet)._2).typeHierarchyDepth;
				if (((pSVar8.klass._2).typeHierarchyDepth < bVar2) ||((pSVar8.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(WeatherSet))) {
					throw new InvalidCastException();
				}
				pSVar6 = pSVar8.Preset;
				if (pSVar6 != null) {
					if (pSVar6._value == false) {
						pSVar9 = null;
						uVar3 = (typeof(AottgGameCreateWeatherEditor)._2). cctor_finished_or_no_cctor;
					}
					else {
						pSVar9 = AottgGameCreateWeatherEditor.Draft(pSVar8);
						uVar3 = (typeof(AottgGameCreateWeatherEditor)._2). cctor_finished_or_no_cctor;
					}
					if (uVar3 == 0) {
					}
					AottgGameCreateWeatherEditor._draft = pSVar9;
					if (__this_00 != null) {
						pSVar9 = AottgGameCreateWeatherEditor._draft;
						if (pSVar9 != null) {
							pSVar8 = pSVar9;
						}
						targetAddress = &__this_00.fields;
						__this_00.target = pSVar8;
						AottgGameCreateWeatherEditor.BuildHeader(ui);
						if (targetAddress.target != null) {
							pSVar6 = targetAddress.target.UseSchedule;
							pGVar10 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgBoolSettingAdapter));
							pGVar10 = new AottgBoolSettingAdapter(pSVar6);
							pGVar11 = AottgGameCreateWeatherEditor.Row("UseSchedule", 0, (IAottgSettingAdapter)pGVar10, null);
							if (ui != null) {
								ui.Component((AottgComponent)pGVar11);
								if (targetAddress.target != null) {
									pSVar6 = targetAddress.target.ScheduleLoop;
									pGVar10 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgBoolSettingAdapter));
									pGVar10 = new AottgBoolSettingAdapter(pSVar6);
									pGVar11 = AottgGameCreateWeatherEditor.Row("ScheduleLoop", 0, (IAottgSettingAdapter)pGVar10, null);
									ui.Component((AottgComponent)pGVar11);
									__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass7_0_Build_b__0);
									layout = AottgUi.Layout("Row", null, null, null, "Wrap", 12.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
									ui.Panel("clear", __this_01, "game-create-weather-schedule-actions", layout, null);
									pSVar8 = __this_00.target;
									if (pSVar8 != null) {
										setting = pSVar8.Skybox;
										__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgStringSettingAdapter));
										__this_02 = new AottgStringSettingAdapter(setting);
										options = Util.EnumToStringArray<WeatherSkybox>();
										pGVar11 = AottgGameCreateWeatherEditor.Row("Skybox", 1, (IAottgSettingAdapter)__this_02, options);
										ui.Component((AottgComponent)pGVar11);
										if (targetAddress.target != null) {
											AottgGameCreateWeatherEditor.Color(ui, "SkyboxColor", targetAddress.target.SkyboxColor);
											if (targetAddress.target != null) {
												AottgGameCreateWeatherEditor.Color(ui, "Daylight", targetAddress.target.Daylight);
												if (targetAddress.target != null) {
													AottgGameCreateWeatherEditor.Float(ui, "DaylightIntensity", targetAddress.target.DaylightIntensity, true);
													if (targetAddress.target != null) {
														AottgGameCreateWeatherEditor.Vector(ui, "DaylightDirection", targetAddress.target.DaylightDirection);
														if (targetAddress.target != null) {
															AottgGameCreateWeatherEditor.Color(ui, "AmbientLight", targetAddress.target.AmbientLight);
															if (targetAddress.target != null) {
																AottgGameCreateWeatherEditor.Color(ui, "Flashlight", targetAddress.target.Flashlight);
																if (targetAddress.target != null) {
																	AottgGameCreateWeatherEditor.Color(ui, "FogColor", targetAddress.target.FogColor);
																	if (targetAddress.target != null) {
																		AottgGameCreateWeatherEditor.Float(ui, "FogDensity", targetAddress.target.FogDensity, false);
																		if (targetAddress.target != null) {
																			AottgGameCreateWeatherEditor.Float(ui, "Rain", targetAddress.target.Rain, true);
																			if (targetAddress.target != null) {
																				AottgGameCreateWeatherEditor.Float(ui, "Thunder", targetAddress.target.Thunder, true);
																				if (targetAddress.target != null) {
																					AottgGameCreateWeatherEditor.Float(ui, "Snow", targetAddress.target.Snow, true);
																					if (targetAddress.target != null) {
																						AottgGameCreateWeatherEditor.Float(ui, "Wind", targetAddress.target.Wind, true);
																						if (targetAddress.target != null) {
																							AottgGameCreateWeatherEditor.Vector(ui, "WindDirection", targetAddress.target.WindDirection);
																							if (targetAddress.target != null) {
																								AottgGameCreateWeatherEditor.Float(ui, "RainForce", targetAddress.target.RainForce, false);
																								if (targetAddress.target != null) {
																									AottgGameCreateWeatherEditor.Float(ui, "SnowForce", targetAddress.target.SnowForce, false);
																									if (targetAddress.target != null) {
																										AottgGameCreateWeatherEditor.Float(ui, "WindForce", targetAddress.target.WindForce, false);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F22")]
	[Address(RVA = "0x57A9D10", Offset = "0x57A8D10", VA = "0x57A9D10")]
	public static void SaveChanges()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$SaveChanges): clean
		WeatherSettings pSVar1;

		pSVar1 = SettingsManager.WeatherSettings;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar1.Save();
		return;
	}

	[Token(Token = "0x6000F23")]
	[Address(RVA = "0x57A9110", Offset = "0x57A8110", VA = "0x57A9110")]
	private static void BuildHeader(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$BuildHeader): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		style = "clear";
		pGVar1 = typeof(AottgGameCreateWeatherEditor.c).static_fields;
		__this = pGVar1.__9__9_0;
		if (__this == null) {
			if ((typeof(AottgGameCreateWeatherEditor.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgGameCreateWeatherEditor.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c_BuildHeader_b__9_0);
			pGVar1 = typeof(AottgGameCreateWeatherEditor.c).static_fields;
			pGVar1.__9__9_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 12.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel(style, __this, "game-create-weather-header", layout, null);
		return;
	}

	[Token(Token = "0x6000F24")]
	[Address(RVA = "0x57A9D60", Offset = "0x57A8D60", VA = "0x57A9D60")]
	private static string PresetNotice(WeatherSet preset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$PresetNotice): clean
		uint uVar1;
		String pSVar2;
		WeatherSet pSVar3;
		String pSVar4;

		pSVar2 = AottgGameCreateWeatherEditor.CopyName(preset);
		pSVar3 = AottgGameCreateWeatherEditor.ExistingCopy(preset);
		uVar1 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
		if (pSVar3 == null) {
			pSVar4 = "PresetNotice";
			if (uVar1 == 0) {
				pSVar4 = "PresetNotice";
			}
		}
		else {
			pSVar4 = "PresetNoticeExisting";
			if (uVar1 == 0) {
				pSVar4 = "PresetNoticeExisting";
			}
		}
		pSVar4 = String.Concat("GameCreate.Sandbox.Weather.", pSVar4);
		pSVar4 = Aottg2GisketchLocale.Text(pSVar4);
		if (pSVar4 == null) {
			throw new NullReferenceException();
		}
		pSVar2 = pSVar4.Replace("{0}", pSVar2);
		return pSVar2;
	}

	[Token(Token = "0x6000F25")]
	[Address(RVA = "0x57AA0F0", Offset = "0x57A90F0", VA = "0x57AA0F0")]
	private static void RefreshHeader(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$RefreshHeader): 1 lines keep C-only constructs
		GisketchNodeDefinition replacement;
		Action<AottgUi> __this;
		GisketchNodeDefinition[] pGVar1;
		GisketchNodeRefreshOptions __this_00;

		__this = new Action<AottgUi>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_BuildHeader);
		if (root != null) {
			pGVar1 = root.BuildDetachedNodes("game-create-weather-header", __this, "game-create-weather-header");
			if (pGVar1 != null) {
				if ((int)pGVar1.Length != 1) {
					return;
				}
				replacement = pGVar1[0];
				__this_00 = new GisketchNodeRefreshOptions();
				if (__this_00 != null) {
					__this_00.PreserveScroll = true;
					__this_00.PreserveFocus = true;
					__this_00.SettleLayout = true;
					root.RefreshNode("game-create-weather-header", replacement, __this_00);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F26")]
	[Address(RVA = "0x57A9010", Offset = "0x57A8010", VA = "0x57A9010")]
	private static WeatherSet Draft(WeatherSet preset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Draft): clean
		BoolSetting __this;
		StringSetting __this_00;
		WeatherSet __this_01;
		String value;

		AottgGameCreateWeatherEditor._draftSource = preset;
		__this_01 = new WeatherSet();
		if (__this_01 != null) {
			__this_01.Copy((BaseSetting)preset);
			__this = __this_01.Preset;
			if (__this != null) {
				__this.Value = false;
				__this_00 = __this_01.Name;
				value = AottgGameCreateWeatherEditor.CopyName(preset);
				if (__this_00 != null) {
					__this_00.Value = (object)value;
					return __this_01;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F27")]
	[Address(RVA = "0x57A9EB0", Offset = "0x57A8EB0", VA = "0x57A9EB0")]
	private static string CopyName(WeatherSet preset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$CopyName): clean
		StringSetting pSVar1;
		String pSVar2;

		if (((preset == null) ||(pSVar1 = preset.Name, pSVar1 == null)) ||(pSVar2 = pSVar1._value, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		pSVar2 = pSVar2.TrimEnd(0x2a);
		pSVar2 = String.Concat(pSVar2, " (Custom)");
		return pSVar2;
	}

	[Token(Token = "0x6000F28")]
	[Address(RVA = "0x57A9F20", Offset = "0x57A8F20", VA = "0x57A9F20")]
	private static WeatherSet ExistingCopy(WeatherSet preset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$ExistingCopy): 3 lines keep C-only constructs
		WeatherSettings pSVar1;
		SetSettingsContainer<WeatherSet> pSVar2;
		ListSetting<T> pSVar3;
		List<T> source;
		AottgGameCreateWeatherEditor.c__DisplayClass14_0 __this;
		String pSVar4;
		Func<WeatherSet, bool> __this_00;
		WeatherSet pSVar5;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateWeatherEditor.c__DisplayClass14_0));
		__this = new Object();
		pSVar4 = AottgGameCreateWeatherEditor.CopyName(preset);
		if (__this != null) {
			__this.name = pSVar4;
			pSVar1 = SettingsManager.WeatherSettings;
			if (((pSVar1 != null) &&(pSVar2 = pSVar1.WeatherSets, pSVar2 != null)) && (pSVar3 = pSVar2.Sets, pSVar3 != null)) {
				source = pSVar3._value;
				__this_00 = new Func<WeatherSet, bool>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass14_0_ExistingCopy_b__0);
				pSVar5 = Enumerable.FirstOrDefault<WeatherSet>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
				return pSVar5;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F29")]
	[Address(RVA = "0x57AA210", Offset = "0x57A9210", VA = "0x57AA210")]
	private static bool PromoteDraft()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$PromoteDraft): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		WeatherSet edited;
		Object[] pSVar5;
		WeatherSettings pSVar6;
		SetSettingsContainer<WeatherSet> pSVar7;
		ListSetting<T> pSVar8;
		List<object> pSVar9;
		IntSetting pSVar10;
		InGameSet pSVar11;
		IntSetting pSVar12;
		StringSetting pSVar13;
		int value;
		WeatherSet target;
		String pSVar14;
		String pSVar15;
		GisketchUIRoot __this;
		AottgToastDefinition __this_00;
		bool bVar17;
		Guid local_48;
		WeatherSet local_38;

		if (Il2CppMethodInitialized_07545307 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherSet_IndexOf) ;
			Il2CppMethodInitialized_07545307 = true;
		}
		local_48 = (Guid)ZEXT816(0);
		edited = AottgGameCreateWeatherEditor._draft;
		AottgGameCreateWeatherEditor._draft = null;
		target = AottgGameCreateWeatherEditor.ExistingCopy(AottgGameCreateWeatherEditor. _draftSource);
		if (target == null) {
			if (edited == null) goto label_058aa89d;
			pSVar13 = edited.UniqueId;
			local_48 = (Guid)Guid.NewGuid();
			pSVar14 = local_48.ToString();
			if (pSVar13 == null) goto label_058aa89d;
			pSVar13.Value = (object)pSVar14;
			pSVar6 = SettingsManager.WeatherSettings;
			if ((((pSVar6 == null) ||(pSVar7 = pSVar6.WeatherSets, pSVar7 == null) ) || (pSVar8 = pSVar7.Sets, pSVar8 == null)) ||(pSVar9 = (List<object>)pSVar8._value, pSVar9 == null)) goto label_058aa89d;
			piVar1 = &pSVar9._version;
			*piVar1 = *piVar1 + 1;
			pSVar5 = pSVar9._items;
			if (pSVar5 == null) goto label_058aa89d;
			uVar3 = pSVar9._size;
			if (uVar3 < (uint)pSVar5.Length) {
				pSVar9._size = uVar3 + 1;
				pSVar5[(int)uVar3] = (object)edited;
				uVar2 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
			}
			else {
				pSVar9.AddWithResize((object)edited);
				uVar2 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
			}
		}
		else {
			AottgGameCreateWeatherEditor.CopyChangedSettings(AottgGameCreateWeatherEditor._draftSource, edited, target);
			uVar2 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
			edited = target;
		}
		if (uVar2 == 0) {
		}
		pSVar6 = SettingsManager.WeatherSettings;
		if (((pSVar6 == null) ||(pSVar7 = pSVar6.WeatherSets, pSVar7 == null)) || ((pSVar8 = pSVar7.Sets, pSVar8 == null ||(pSVar9 = (List<object>)pSVar8._value, pSVar9 == null)))) goto label_058aa89d;
		pSVar10 = pSVar7.SelectedSetIndex;
		value = pSVar9.IndexOf((object)edited);
		if (pSVar10 == null) goto label_058aa89d;
		pSVar10.Value = value;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd != false) goto label_058aa567;
	label_058aa596: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058aa573;
	label_058aa5b5: ;
			pSVar11 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd == false) goto label_058aa596;
	label_058aa567: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058aa5b5;
	label_058aa573: ;
			pSVar11 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (pSVar11 != null) {
			pSVar10 = pSVar11.WeatherIndex;
			pSVar6 = SettingsManager.WeatherSettings;
			if (((pSVar6 != null) &&(pSVar7 = pSVar6.WeatherSets, pSVar7 != null)) && ((pSVar12 = pSVar7.SelectedSetIndex, pSVar12 != null &&(pSVar10 != null)))) {
				pSVar10.Value = pSVar12._value;
				pSVar6 = SettingsManager.WeatherSettings;
				if (pSVar6 != null) {
					pSVar6.Save();
					AottgGameCreateSession.RefreshSandboxContent();
					uVar2 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
					local_38 = target;
					if (target == null) {
						pSVar14 = "CopyCreated";
						if (uVar2 == 0) {
							pSVar14 = "CopyCreated";
						}
					}
					else {
						pSVar14 = "CopyUpdated";
						if (uVar2 == 0) {
							pSVar14 = "CopyUpdated";
						}
					}
					pSVar14 = String.Concat("GameCreate.Sandbox.Weather.", pSVar14);
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pSVar15 = Aottg2GisketchLocale.Text(pSVar14);
					__this = AottgGisketchUiHost.Root;
					pSVar14 = "Title";
					if ((typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor == 0 ) {
						pSVar14 = "Title";
					}
					"Title" = pSVar14;
					pSVar14 = String.Concat("GameCreate.Sandbox.Weather.", pSVar14);
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pSVar14 = Aottg2GisketchLocale.Text(pSVar14);
					if (((edited != null) &&(pSVar13 = edited.Name, pSVar13 != null)) &&(pSVar15 != null)) {
						pSVar15 = pSVar15.Replace("{0}", pSVar13._value);
						__this_00 = new AottgToastDefinition(2, "information", pSVar14, pSVar15, null);
						if (__this != null) {
							bVar17 = local_38 == null;
							__this.ShowToast(__this_00);
							return bVar17;
						}
					}
				}
			}
		}
	label_058aa89d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F2A")]
	[Address(RVA = "0x57AA8B0", Offset = "0x57A98B0", VA = "0x57AA8B0")]
	private static void CopyChangedSettings(WeatherSet source, WeatherSet edited, WeatherSet target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$CopyChangedSettings): 19 lines keep C-only constructs
		byte bVar1;
		OrderedDictionary pSVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		sbyte cVar5;
		bool bVar6;
		object pIVar7;
		VirtualInvokeData pVVar8;
		String a;
		long plVar9;
		String a_00;
		long plVar10;
		String b;
		ulong uVar11;
		long lVar12;
		object local_70;
		object local_68;
		WeatherSet local_60;
		WeatherSet local_58;
		WeatherSet local_50;
		object* local_40;
		object* local_38;

		local_58 = source;
		local_70 = null;
		local_68 = null;
		if (((edited == null) ||(pSVar2 = edited.Settings, pSVar2 == null )) || (pIVar7 = (object)pSVar2.Keys, pIVar7 == null)) {
			throw new NullReferenceException();
		}
		pIVar3 = pIVar7.klass;
		uVar11 = (ulong)(pIVar3._2).interface_offsets_count;
		local_60 = target;
		local_50 = edited;
		pIVar7 = (object)pIVar7.Dispose();
		local_40 = &local_70;
		local_38 = &local_68;
		do {
			local_70 = pIVar7;
			if (pIVar7 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = pIVar7.klass;
			uVar11 = (ulong)(pIVar3._2).interface_offsets_count;
			cVar5 = pIVar7.Dispose();
			pIVar7 = local_70;
			if (cVar5 == false) {
				pIVar7 = (local_70 as IDisposable);
				if (pIVar7 == null) {
					return;
				}
				pIVar3 = pIVar7.klass;
				uVar11 = (ulong)(pIVar3._2).interface_offsets_count;
				local_68 = pIVar7;
				if (uVar11 == 0) goto label_058aad7f;
				pIVar4 = (pIVar3._1).interfaceOffsets;
				lVar12 = 0;
				break;
			}
			if (local_70 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = local_70.klass;
			uVar11 = (ulong)(pIVar3._2).interface_offsets_count;
			a = (String)pIVar7.Dispose();
			if ((a != null) && (a.klass != g_data_07556758)) {
				throw new InvalidCastException();
			}
			bVar6 = (a == "Name");
			pIVar7 = local_70;
			if (((!bVar6) &&(bVar6 = (a == "UniqueId"), pIVar7 = local_70, !bVar6)) &&(bVar6 = (a == "Preset"), pIVar7 = local_70, !bVar6)) {
				pSVar2 = local_50.Settings;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				pIVar7 = pSVar2.get_Item((object)a);
				if (pIVar7 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = pIVar7.klass;
				bVar1 = (typeof(BaseSetting)._2).typeHierarchyDepth;
				if (((pIVar3._2).typeHierarchyDepth < bVar1) ||((pIVar3._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseSetting))) {
					throw new InvalidCastException();
				}
				plVar9 = (long)(*pIVar3.vtable[5].methodPtr)(pIVar7,pIVar3.vtable[5].method);
				if (plVar9 == null) {
					throw new NullReferenceException();
				}
				a_00 = (String)(**(code*)(*plVar9 + 0x168))(plVar9,*(ulong)(*plVar9 + 0x170));
				if (local_58 == null) {
					throw new NullReferenceException();
				}
				pSVar2 = local_58.Settings;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				pIVar7 = pSVar2.get_Item((object)a);
				if (pIVar7 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = pIVar7.klass;
				bVar1 = (typeof(BaseSetting)._2).typeHierarchyDepth;
				if (((pIVar3._2).typeHierarchyDepth < bVar1) ||((pIVar3._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseSetting))) {
					throw new InvalidCastException();
				}
				plVar10 = (long)(*pIVar3.vtable[5].methodPtr)(pIVar7,pIVar3.vtable[5].method);
				if (plVar10 == null) {
					throw new NullReferenceException();
				}
				b = (String)(**(code*)(*plVar10 + 0x168))(plVar10,*(ulong)(*plVar10 + 0x170));
				bVar6 = (a_00 != b);
				pIVar7 = local_70;
				if (bVar6) {
					if (local_60 == null) {
						throw new NullReferenceException();
					}
					pSVar2 = local_60.Settings;
					if (pSVar2 == null) {
						throw new NullReferenceException();
					}
					pIVar7 = pSVar2.get_Item((object)a);
					if (pIVar7 == null) {
						throw new NullReferenceException();
					}
					pIVar3 = pIVar7.klass;
					bVar1 = (typeof(BaseSetting)._2).typeHierarchyDepth;
					if (((pIVar3._2).typeHierarchyDepth < bVar1) ||((pIVar3._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseSetting))) {
						throw new InvalidCastException();
					}
					(*pIVar3.vtable[6].methodPtr)(pIVar7,plVar9,pIVar3.vtable[6].method);
					pIVar7 = local_70;
				}
			}
		} while(true);
		while (true) {
			lVar12 = lVar12 + 0x10;
			if (!(uVar11 * 0x10 != lVar12)) break;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar12) == typeof(IDisposable)) {
				pVVar8 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar12);
				goto label_058aad9d;
			}
		}
	label_058aad7f: ;
	label_058aad9d: ;
		pIVar7.Dispose();
		return;
	}

	[Token(Token = "0x6000F2B")]
	[Address(RVA = "0x57AAEA0", Offset = "0x57A9EA0", VA = "0x57AAEA0")]
	private static void Edited(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Edited): 4 lines keep C-only constructs
		uint uVar1;
		WeatherSet pSVar2;
		bool bVar3;
		GisketchUIRoot root;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07545309 == false) {
			Il2CppMethodInitialized_07545309 = true;
			uVar1 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = AottgGameCreateWeatherEditor._draft;
		}
		else {
			pSVar2 = *(WeatherSet*)((long)(typeof(AottgGameCreateWeatherEditor)). static_fields + 8);
		}
		if (pSVar2 == null) {
			return;
		}
		if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar3 = ((Object)context.GameObject != null);
		if (bVar3) {
			if (context.GameObject == null) {
				throw new NullReferenceException();
			}
			root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
			uVar1 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateWeatherEditor);
		}
		else {
			root = AottgGisketchUiHost.Root;
			uVar1 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateWeatherEditor);
		}
		typeof(AottgGameCreateWeatherEditor) =(AottgGameCreateWeatherEditor)klass;
		if (uVar1 == 0) {
		}
		bVar3 = AottgGameCreateWeatherEditor.PromoteDraft();
		uVar1 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
		if (bVar3) {
			if (uVar1 == 0) {
			}
			AottgGameCreateWeatherEditor.RefreshHeader(root);
			return;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07545313 == false) {
			Il2CppMethodInitialized_07545313 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgGameCreateSession.RefreshSandboxContent();
		AottgGameCreateScreen.Refresh(root);
		return;
	}

	[Token(Token = "0x6000F2C")]
	private static T Track<T>(T row) where T : AottgComponent, IAottgSettingsStateSync
	{
		return null;
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x57AB110", Offset = "0x57AA110", VA = "0x57AB110")]
	public static void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$SyncState): 2 lines keep C-only constructs
		List<object> __this;
		object __this_00;
		bool bVar3;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		__this = (List<object>)AottgGameCreateWeatherEditor.Rows;
		if (__this == null) {
			throw new NullReferenceException();
		}
		local_58 = __this.GetEnumerator();
		local_30 = (byte)&local_58;
		do {
			bVar3 = local_58.MoveNext() ;
			__this_00 = local_58._current;
			if (!bVar3) {
				local_58.Dispose();
				return;
			}
			if (local_58._current == null) {
				throw new NullReferenceException();
			}
			__this_00.SyncState(root);
		} while(true);
	}

	[Token(Token = "0x6000F2E")]
	[Address(RVA = "0x57A92F0", Offset = "0x57A82F0", VA = "0x57A92F0")]
	private static AottgSettingRow Row(string key, AottgSettingControlKind kind, IAottgSettingAdapter adapter, [Optional] string[] options)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Row): 2 lines keep C-only constructs
		String id;
		String pSVar1;
		AottgSettingDescriptor __this;
		AottgSettingOption[] pGVar2;
		Action<GisketchActionContext> __this_00;
		AottgSettingRow pGVar3;

		id = String.Concat("game-create-weather-", key);
		pSVar1 = String.Concat("GameCreate.Sandbox.Weather.", key);
		pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
		__this = new AottgSettingDescriptor(id, pSVar1, kind, adapter);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.ShowValue = true;
		pGVar2 = AottgSettingOption.StringOptions(options);
		__this.Options = pGVar2;
		__this_00 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Edited);
		__this.OnChanged = __this_00;
		pGVar3 = il2cpp_codegen_object_new(typeof(AottgSettingRow)) ;
		pGVar3 = new AottgSettingRow(__this);
		pGVar3 = AottgGameCreateWeatherEditor.Track<AottgSettingRow>((object)pGVar3);
		return pGVar3;
	}

	[Token(Token = "0x6000F2F")]
	[Address(RVA = "0x57A9700", Offset = "0x57A8700", VA = "0x57A9700")]
	private static void Float(AottgUi ui, string key, FloatSetting setting, bool slider = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Float): clean
		AottgFloatSettingAdapter __this;
		AottgSettingRow component;

		__this = new AottgFloatSettingAdapter(setting);
		component = AottgGameCreateWeatherEditor.Row(key, 4 - (uint)slider, (IAottgSettingAdapter)__this, null);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Component((AottgComponent)component);
		return;
	}

	[Token(Token = "0x6000F30")]
	[Address(RVA = "0x57A94F0", Offset = "0x57A84F0", VA = "0x57A94F0")]
	private static void Color(AottgUi ui, string key, ColorSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Color): 1 lines keep C-only constructs
		String id;
		String pSVar1;
		AottgColorSettingAdapter __this;
		AottgSettingDescriptor __this_00;
		Action<GisketchActionContext> __this_01;
		AottgColorSettingRow pGVar2;

		id = String.Concat("game-create-weather-", key);
		pSVar1 = String.Concat("GameCreate.Sandbox.Weather.", key);
		pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
		__this = new AottgColorSettingAdapter(setting);
		__this_00 = new AottgSettingDescriptor(id, pSVar1, 6, (IAottgSettingAdapter)__this);
		__this_01 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Edited);
		if (__this_00 != null) {
			__this_00.OnChanged = __this_01;
			pGVar2 = new AottgColorSettingRow(__this_00);
			pGVar2 = AottgGameCreateWeatherEditor.Track<AottgColorSettingRow>((object)pGVar2);
			if (ui != null) {
				ui.Component((AottgComponent)pGVar2);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F31")]
	[Address(RVA = "0x57A97B0", Offset = "0x57A87B0", VA = "0x57A97B0")]
	private static void Vector(AottgUi ui, string key, Vector3Setting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Vector): 15 lines keep C-only constructs
		float fVar1;
		float fVar2;
		Vector3Setting pSVar3;
		AottgUi __this;
		AottgGameCreateWeatherEditor.c__DisplayClass23_0 pGVar4;
		String pSVar5;
		String id;
		AottgGameCreateWeatherEditor.c__DisplayClass23_1 __this_00;
		FloatSetting pSVar6;
		object pIVar7;
		AottgFloatSettingAdapter __this_01;
		AottgSettingDescriptor __this_02;
		Action<GisketchActionContext> __this_03;
		AottgSettingRow pGVar8;
		Il2CppClass pIVar9;
		IndexOutOfRangeException __this_04;
		MethodInfo lastManagedFrame;
		uint local_5c;
		float local_58;
		AottgGameCreateWeatherEditor.c__DisplayClass23_0 local_40;
		AottgUi local_38;

		local_5c = 0;
		pGVar4 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateWeatherEditor.c__DisplayClass23_0));
		pGVar4 = new Object();
		if (pGVar4 != null) {
			pGVar4.setting = setting;
			pSVar5 = String.Concat("GameCreate.Sandbox.Weather.", key);
			pSVar5 = Aottg2GisketchLocale.Text(pSVar5);
			id = String.Concat("game-create-weather-", key, "-label");
			if (ui != null) {
				ui.Text(pSVar5, "text", id, null, null);
				local_5c = 0;
				local_40 = pGVar4;
				local_38 = ui;
				while(true) {
					pGVar4 = local_40;
					__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateWeatherEditor.c__DisplayClass23_1));
					__this_00 = new Object();
					if (__this_00 == null) break;
					__this_00.CS___8__locals1 = pGVar4;
					__this_00.component = local_5c;
					pGVar4 = __this_00.CS___8__locals1;
					if ((pGVar4 == null) ||(pSVar3 = pGVar4.setting, pSVar3 == null)) break;
					fVar1 = pSVar3._value.x;
					fVar2 = pSVar3._value.y;
					if (local_5c != 0) {
						if (local_5c == 2) {
							fVar1 = pSVar3._value.z;
							fVar2 = 0.0;
						}
						else {
							if (local_5c != 1) {
								pIVar9 = il2cpp_codegen_get_runtime_metadata(&typeof(IndexOutOfRangeException));
								__this_04 = (IndexOutOfRangeException)il2cpp_codegen_object_new(pIVar9);
								pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Invalid Vector3 index!");
								__this_04 = new IndexOutOfRangeException(pSVar5);
								lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UnityEngine_Vector3_get_Item) ;
								throw (object)__this_04;
							}
							fVar1 = fVar2;
						}
					}
					local_58 = fVar1;
					pSVar6 = new FloatSetting(local_58, -3.4028235e+38, 3.4028235e+38);
					__this_00.value = pSVar6;
					pSVar5 = local_5c.ToString();
					pSVar5 = String.Concat("game-create-weather-", key, "-", pSVar5);
					pIVar7 = new string[3];
					if (pIVar7 == null) break;
					if (*(int)&pIVar7[1].monitor == 0) {
	label_058a9cbf: ;
						throw new IndexOutOfRangeException();
					}
					pIVar7[2].klass = (Il2CppClass *)"X";
					if (((ulong)pIVar7[1].monitor & 0xfffffffe) == 0) goto label_058a9cbf;
					pIVar7[2].monitor = "Y";
					if (*(uint)&pIVar7[1].monitor < 3) goto label_058a9cbf;
					pIVar7[3].klass = (Il2CppClass *)"Z";
					if (*(uint)&pIVar7[1].monitor <= local_5c) goto label_058a9cbf;
					pIVar9 = (&pIVar7[2].klass)[(int)local_5c];
					pSVar6 = __this_00.value;
					__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgFloatSettingAdapter));
					__this_01 = new AottgFloatSettingAdapter(pSVar6);
					__this_02 = il2cpp_codegen_object_new(typeof(AottgSettingDescriptor));
					__this_02 = new AottgSettingDescriptor(pSVar5, (String)pIVar9, 4, (IAottgSettingAdapter)__this_01);
					__this_03 = new Action<GisketchActionContext>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass23_1_Vector_b__0);
					if (__this_02 == null) break;
					__this_02.OnChanged = __this_03;
					pGVar8 = new AottgSettingRow(__this_02);
					__this = local_38;
					if ((typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pGVar8 = AottgGameCreateWeatherEditor.Track<AottgSettingRow>((object)pGVar8);
					__this.Component((AottgComponent)pGVar8);
					local_5c = local_5c + 1;
					if (2 < (int)local_5c) {
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F32")]
	[Address(RVA = "0x57AB320", Offset = "0x57AA320", VA = "0x57AB320")]
	private static void Operate(GisketchUIRoot root, WeatherSet selected, string operation)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Operate): 16 lines keep C-only constructs
		String* targetAddress;
		WeatherSet* targetAddress_00;
		BoolSetting pSVar1;
		StringSetting pSVar2;
		WeatherSettings pSVar3;
		SetSettingsContainer<WeatherSet> pSVar4;
		ListSetting<T> __this;
		WeatherSet pSVar5;
		bool bVar6;
		int iVar7;
		AottgGameCreateWeatherEditor.c__DisplayClass24_0 __this_00;
		SetNamePopup __this_01;
		String pSVar8;
		UnityAction pUVar9;
		String pSVar10;
		ConfirmPopup __this_02;
		ImportPopup __this_03;
		JSONNode pSVar11;
		JSONNode pSVar12;
		ExportPopup __this_04;
		AottgGameCreateWeatherEditor.c__DisplayClass24_0 targetAddress_01;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateWeatherEditor.c__DisplayClass24_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			targetAddress = &__this_00.operation;
			__this_00.operation = operation;
			targetAddress_00 = &__this_00.selected;
			__this_00.selected = selected;
			__this_00.root = root;
			targetAddress_01 = &__this_00.fields;
			__this_00.menu = UIManager.CurrentMenu;
			pSVar8 = __this_00.operation;
			bVar6 = (pSVar8 == "Create");
			if (((bVar6) ||(bVar6 = (pSVar8 == "Copy"))) ||(bVar6 = (pSVar8 == "Rename"))) {
				bVar6 = (*targetAddress == "Rename");
				if (bVar6) {
					if ((*targetAddress_00 == null) ||(pSVar1 = ((*targetAddress_00).fields).Preset, pSVar1 == null)) goto label_058aba02;
					if (pSVar1._value != false) {
						return;
					}
				}
				if (targetAddress_01.menu != null) {
					__this_01 = AottgGisketchUiHost.AboveOverlay<SetNamePopup>((object)targetAddress_01.menu.SetNamePopup);
					bVar6 = (*targetAddress == "Rename");
					if (bVar6) {
						if ((*targetAddress_00 == null) ||(pSVar2 = ((*targetAddress_00).fields).Name, pSVar2 == null)) goto label_058aba02;
						pSVar8 = pSVar2._value;
					}
					else {
						pSVar8 = "NewSet";
						pSVar8 = String.Concat("GameCreate.Sandbox.Weather.", pSVar8);
						pSVar8 = Aottg2GisketchLocale.Text(pSVar8);
					}
					pUVar9 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass24_0_Operate_b__0);
					pSVar10 = __this_00.operation;
					pSVar10 = UIManager.GetLocaleCommon(pSVar10);
					if (__this_01 != null) {
						__this_01.Show(pSVar8, pUVar9, pSVar10, null);
						return;
					}
				}
			}
			else {
				bVar6 = (pSVar8 == "Delete");
				if (bVar6) {
					if ((*targetAddress_00 != null) &&(pSVar1 = ((*targetAddress_00).fields).Preset, pSVar1 != null)) {
						if (pSVar1._value != false) {
							return;
						}
						pSVar3 = SettingsManager.WeatherSettings;
						if (((pSVar3 != null) &&(pSVar4 = pSVar3.WeatherSets, pSVar4 != null)) &&(__this = pSVar4.Sets, __this != null)) {
							iVar7 = __this.GetCount();
							if (iVar7 < 2) {
								return;
							}
							if (targetAddress_01.menu != null) {
								__this_02 = AottgGisketchUiHost.AboveOverlay<ConfirmPopup>((object)targetAddress_01.menu.ConfirmPopup);
								pSVar8 = UIManager.GetLocaleCommon("DeleteWarning");
								pUVar9 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass24_0_Operate_b__1);
								pSVar10 = UIManager.GetLocaleCommon("Delete");
								if (__this_02 != null) {
									__this_02.Show(pSVar8, pUVar9, pSVar10);
									return;
								}
							}
						}
					}
				}
				else {
					bVar6 = (pSVar8 == "Import");
					if (bVar6) {
						if ((*targetAddress_00 != null) &&(pSVar1 = ((*targetAddress_00).fields).Preset, pSVar1 != null)) {
							if (pSVar1._value != false) {
								return;
							}
							if (targetAddress_01.menu != null) {
								__this_03 = AottgGisketchUiHost.AboveOverlay<ImportPopup>((object)targetAddress_01.menu.ImportPopup);
								pUVar9 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass24_0_Operate_b__2);
								if (__this_03 != null) {
									__this_03.Show(pUVar9, true, "", "");
									return;
								}
							}
						}
					}
					else {
						bVar6 = (pSVar8 == "Export");
						if (!bVar6) {
							return;
						}
						pSVar5 = *targetAddress_00;
						if (pSVar5 != null) {
							pSVar11 = pSVar5.SerializeToJsonObject();
							pSVar12 = ((JSONNode)false);
							if (pSVar11 != null) {
								pSVar11.set_Item("Preset", pSVar12);
								if (targetAddress_01.menu != null) {
									__this_04 = AottgGisketchUiHost.AboveOverlay<ExportPopup>((object)targetAddress_01.menu.ExportPopup);
									pSVar8 = pSVar11.ToString(4);
									if (__this_04 != null) {
										__this_04.Show(pSVar8);
										return;
									}
								}
							}
						}
					}
				}
			}
		}
	label_058aba02: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F33")]
	[Address(RVA = "0x57ABA20", Offset = "0x57AAA20", VA = "0x57ABA20")]
	private static void ImportSchedule(GisketchUIRoot root, WeatherSet target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$ImportSchedule): 2 lines keep C-only constructs
		BaseMenu pUVar1;
		WeatherSet pSVar2;
		StringSetting pSVar3;
		AottgGameCreateWeatherEditor.c__DisplayClass25_0 __this;
		ImportPopup pUVar4;
		UnityAction __this_00;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateWeatherEditor.c__DisplayClass25_0));
		__this = new Object();
		if (__this != null) {
			__this.target = target;
			__this.root = root;
			pUVar1 = UIManager.CurrentMenu;
			if (pUVar1 != null) {
				pUVar4 = AottgGisketchUiHost.AboveOverlay<ImportPopup>((object)pUVar1.ImportPopup);
				__this.popup = pUVar4;
				pUVar4 = __this.popup;
				__this_00 = new UnityAction((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass25_0_ImportSchedule_b__0);
				pSVar2 = __this.target;
				if (((pSVar2 != null) &&(pSVar3 = pSVar2.Schedule, pSVar3 != null)) &&(pUVar4 != null)) {
					pUVar4.Show(__this_00, true, "", pSVar3._value);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F34")]
	[Address(RVA = "0x57ABBB0", Offset = "0x57AABB0", VA = "0x57ABBB0")]
	internal static bool TryImport(string text, out WeatherSet imported, out string error)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$TryImport): 26 lines keep C-only constructs
		byte bVar1;
		OrderedDictionary pSVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		JSONNode pSVar5;
		StringSetting pSVar6;
		BoolSetting __this;
		Il2CppType handle;
		bool bVar7;
		int iVar8;
		int iVar9;
		int iVar10;
		String pSVar11;
		JSONNode pSVar12;
		WeatherSet __this_00;
		object pIVar13;
		VirtualInvokeData pVVar14;
		JSONNode pSVar15;
		long plVar16;
		Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_StaticFields pGVar17;
		Func<JSONNode, bool> __this_01;
		Type enumType;
		WeatherSchedule __this_02;
		ulong uVar18;
		long lVar19;
		float fVar20;
		object local_88;
		int local_7c;
		ulong local_78;
		long local_70;
		object local_68;
		ulong local_60;
		object* local_58;
		object* local_50;
		IEnumerable<JSONNode> local_48;
		WeatherSet* local_40;
		object local_38;

		local_7c = 0;
		local_88 = null;
		local_68 = null;
		*imported = null;
		pSVar11 = UIManager.GetLocale("Common", "InvalidPreset", "", "", "");
		*error = pSVar11;
		pSVar12 = JSON.Parse(text);
		if (pSVar12 == null) {
			return false;
		}
		bVar1 = (typeof(JSONObject)._2).typeHierarchyDepth;
		if ((pSVar12.klass._2).typeHierarchyDepth < bVar1) {
			return false;
		}
		if ((pSVar12.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(JSONObject)) {
			return false;
		}
		__this_00 = new WeatherSet();
		if (((__this_00 != null) &&(pSVar2 = __this_00.Settings, local_40 = imported, pSVar2 != null)) &&(pIVar13 = (object)pSVar2.Keys, pIVar13 != null)) {
			pIVar3 = pIVar13.klass;
			uVar18 = (ulong)(pIVar3._2).interface_offsets_count;
			local_88 = (object)pIVar13.Dispose();
			local_60 = 0;
			local_58 = &local_88;
			local_50 = &local_68;
			local_70 = 0;
			local_78 = 0;
	label_058abed0: ;
			pIVar13 = local_88;
			if (local_88 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = local_88.klass;
			uVar18 = (ulong)(pIVar3._2).interface_offsets_count;
			bVar7 = pIVar13.Dispose();
			pIVar13 = local_88;
			if (bVar7) goto code_r0x058abf44;
			iVar8 = 0x14;
			goto label_058ac367;
		}
		goto label_058ac5d3;
	code_r0x058abf44: ;
		if (local_88 == null) {
			throw new NullReferenceException();
		}
		pIVar3 = local_88.klass;
		uVar18 = (ulong)(pIVar3._2).interface_offsets_count;
		pSVar11 = (String)pIVar13.Dispose();
		if ((pSVar11 != null) && (pSVar11.klass != g_data_07556758)) {
			throw new InvalidCastException();
		}
		bVar7 = pSVar12.HasKey(pSVar11);
		if (!bVar7) goto label_058abed0;
		pSVar2 = __this_00.Settings;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		pIVar13 = pSVar2.get_Item((object)pSVar11);
		if (pIVar13 != null) {
			bVar1 = (typeof(BaseSetting)._2).typeHierarchyDepth;
			if (((pIVar13.klass._2).typeHierarchyDepth < bVar1) ||((pIVar13.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseSetting))) {
				throw new InvalidCastException();
			}
		}
		pSVar15 = pSVar12.get_Item(pSVar11);
		if (pIVar13 == null) {
			throw new NullReferenceException();
		}
		plVar16 = (long)(*pIVar13.klass.vtable[5].methodPtr)(pIVar13,pIVar13.klass.vtable[5].method);
		local_38 = pIVar13;
		if (plVar16 == null) {
			throw new NullReferenceException();
		}
		iVar8 = (**(code*)(*plVar16 + 0x178))(plVar16,*(ulong)(*plVar16 + 0x180));
		if (pSVar15 == null) {
			throw new NullReferenceException();
		}
		iVar9 = pSVar15.unknown() ;
		if (iVar8 == iVar9) {
			bVar1 = (typeof(JSONArray)._2).typeHierarchyDepth;
			if ((*(byte)(*plVar16 + 0x130) < bVar1) ||(*(JSONArray*)(*(long)(*plVar16 + 200) + -8 + (ulong)bVar1 * 8) != typeof(JSONArray))) {
	label_058ac250: ;
				bVar7 = pSVar15.get_IsNumber();
				if ((!bVar7) ||((fVar20 = pSVar15.get_AsFloat(),(uint)ABS(fVar20) < 0x7f800001 &&(fVar20 = pSVar15.get_AsFloat(), ABS(fVar20) != INFINITY)))) {
					(*local_38.klass.vtable[6].methodPtr)(local_38,pSVar15,local_38.klass.vtable[6].method);
					bVar7 = (pSVar11 != "Name");
					uVar18 = local_78;
					if (bVar7) {
						bVar7 = (pSVar11 != "UniqueId");
						if (bVar7) {
							bVar7 = (pSVar11 != "Preset");
						}
						else {
							bVar7 = false;
						}
						local_78 = uVar18 & 1;
					}
					else {
						bVar7 = false;
					}
					local_78 = CONCAT71((int7)((local_78 & 0xffffffffffffff01) >> 8), (byte)(local_78 & 0xffffffffffffff01) | bVar7);
					goto label_058abed0;
				}
				iVar8 = 8;
				goto label_058ac367;
			}
			pSVar5 = pSVar15.klass;
			if ((bVar1 <= (pSVar5._2).typeHierarchyDepth) &&((pSVar5._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(JSONArray))) {
				iVar10 = pSVar15.get_Count();
				iVar8 = (**(code*)(*plVar16 + 0x1e8))(plVar16,*(ulong)(*plVar16 + 0x1f0));
				if (iVar10 != iVar8) {
					iVar8 = 8;
					goto label_058ac367;
				}
				local_48 = pSVar15.get_Children();
				if ((typeof(AottgGameCreateWeatherEditor.c)._2).cctor_finished_or_no_cctor == 0 ) {
				}
				pGVar17 = typeof(AottgGameCreateWeatherEditor.c).static_fields;
				__this_01 = pGVar17.__9__26_0;
				if (__this_01 == null) {
					if ((typeof(AottgGameCreateWeatherEditor.c)._2).cctor_finished_or_no_cctor == 0) {
						pGVar17 = typeof(AottgGameCreateWeatherEditor.c).static_fields;
					}
					pIVar13 = (object)pGVar17.__9;
					__this_01 = new Func<JSONNode, bool>(pIVar13, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c_TryImport_b__26_0);
					pGVar17 = typeof(AottgGameCreateWeatherEditor.c).static_fields;
					pGVar17.__9__26_0 = __this_01;
				}
				bVar7 = Enumerable.Any<JSONNode>((System_Collections_Generic_IEnumerable_TSource__o)local_48, (System_Func_TSource__bool__o)__this_01);
				if (!bVar7) goto label_058ac250;
			}
		}
		iVar8 = 8;
	label_058ac367: ;
		pIVar13 = (local_88 as IDisposable);
		local_68 = pIVar13;
		if (pIVar13 == null) goto label_058ac3e6;
		pIVar3 = pIVar13.klass;
		uVar18 = (ulong)(pIVar3._2).interface_offsets_count;
		if (uVar18 == 0) goto label_058ac3bf;
		pIVar4 = (pIVar3._1).interfaceOffsets;
		lVar19 = 0;
		goto label_058ac3b0;
		while (true) {
			lVar19 = lVar19 + 0x10;
			if (!(uVar18 * 0x10 != lVar19)) break;
	label_058ac3b0: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar19) == typeof(IDisposable)) {
				pVVar14 = (VirtualInvokeData)&pIVar3.vtable[*(int)((long)&pIVar4.offset + lVar19)].methodPtr;
				goto label_058ac3dd;
			}
		}
	label_058ac3bf: ;
	label_058ac3dd: ;
		pIVar13.Dispose();
	label_058ac3e6: ;
		if (local_70 != 0) {
			throw;
		}
		if (((iVar8 != 0x14) && (iVar8 != 0)) || ((char)local_78 == false)) {
			return false;
		}
		pSVar6 = __this_00.Skybox;
		if (pSVar6 != null) {
			pSVar11 = pSVar6._value;
			bVar7 = Enum.TryParse<WeatherSkybox>(pSVar11, ref local_7c);
			handle = TypeRef_Weather_WeatherSkybox;
			if (!bVar7) {
				return false;
			}
			enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			local_60 = CONCAT44(local_60._4_4_, local_7c);
			pIVar13 = (object)local_60;
			bVar7 = Enum.IsDefined(enumType, pIVar13);
			if (!bVar7) {
				return false;
			}
			__this_02 = new WeatherSchedule();
			pSVar6 = __this_00.Schedule;
			if ((pSVar6 != null) && (__this_02 != null)) {
				pSVar11 = __this_02.DeserializeFromCSV(pSVar6._value);
				*error = pSVar11;
				bVar7 = String.IsNullOrEmpty(*error);
				if (!bVar7) {
					return false;
				}
				__this = __this_00.Preset;
				if (__this != null) {
					__this.Value = false;
					*local_40 = __this_00;
					return true;
				}
			}
		}
	label_058ac5d3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F35")]
	[Address(RVA = "0x57AC820", Offset = "0x57AB820", VA = "0x57AC820")]
	private static void Save(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Save): clean
		uint uVar1;
		WeatherSettings pSVar2;

		if (Il2CppMethodInitialized_07545312 == false) {
			Il2CppMethodInitialized_07545312 = true;
			uVar1 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar2 = SettingsManager.WeatherSettings;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		pSVar2.Save();
		AottgGameCreateSession.RefreshSandboxContent();
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateScreen.Refresh(root);
			return;
		}
		AottgGameCreateScreen.Refresh(root);
		return;
	}

	[Token(Token = "0x6000F36")]
	[Address(RVA = "0x57AB090", Offset = "0x57AA090", VA = "0x57AB090")]
	private static void Refresh(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Refresh): clean
		AottgGameCreateSession.RefreshSandboxContent();
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateScreen.Refresh(root);
			return;
		}
		AottgGameCreateScreen.Refresh(root);
		return;
	}

	[Token(Token = "0x6000F37")]
	[Address(RVA = "0x57AA070", Offset = "0x57A9070", VA = "0x57AA070")]
	private static string Text(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c (Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Text): clean
		String pSVar1;

		pSVar1 = String.Concat("GameCreate.Sandbox.Weather.", key);
		if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0) {
			pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
			return pSVar1;
		}
		pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
		return pSVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateWeatherEditor.c.

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Track<object>: 5 lines keep C-only constructs
	private static object Track_object(object row)
	{
		int piVar1;
		uint uVar2;
		uint uVar3;
		List<object> __this;
		Object[] pSVar4;
		MethodInfo pMVar5;

		if (Il2CppMethodInitialized_0753e83c == false) {
			Il2CppMethodInitialized_0753e83c = true;
			uVar2 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (List<object>)AottgGameCreateWeatherEditor.Rows;
			pMVar5 = MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_Add;
		}
		else {
			__this = *(List<object>*)(typeof(AottgGameCreateWeatherEditor)).static_fields;
			pMVar5 = MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_Add;
		}
		MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_Add = pMVar5;
		if (__this != null) {
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar4 = __this._items;
			if (pSVar4 != null) {
				uVar3 = __this._size;
				if (uVar3 < (uint)pSVar4.Length) {
					__this._size = uVar3 + 1;
					pSVar4[(int)uVar3] = row;
				}
				else {
					__this.AddWithResize(row);
				}
				return row;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass7_0$$.ctor: clean
	private void c__DisplayClass7_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass14_0$$.ctor: clean
	private void c__DisplayClass14_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass23_0$$.ctor: clean
	private void c__DisplayClass23_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass23_1$$.ctor: clean
	private void c__DisplayClass23_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass24_0$$.ctor: clean
	private void c__DisplayClass24_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass25_0$$.ctor: clean
	private void c__DisplayClass25_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$.cctor: clean
	static AottgGameCreateWeatherEditor()
	{
		List<object> __this;

		__this = new List<IAottgSettingsStateSync>();
		AottgGameCreateWeatherEditor.Rows =(List<IAottgSettingsStateSync>)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgGameCreateWeatherEditor.c();
		AottgGameCreateWeatherEditor.c.__9 =(AottgGameCreateWeatherEditor.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c$$<BuildHeader>b__9_0: 12 lines keep C-only constructs
	private void c__BuildHeader_b__9_0(AottgUi header)
	{
		byte bVar1;
		WeatherSettings pSVar2;
		SetSettingsContainer<WeatherSet> pSVar3;
		BoolSetting pSVar4;
		IntSetting setting;
		object @object;
		WeatherSet pSVar5;
		AottgGameCreateWeatherEditor.c__DisplayClass9_0 __this_00;
		WeatherSet pSVar6;
		String pSVar7;
		AottgIntSettingAdapter __this_01;
		AottgSettingDescriptor __this_02;
		String[] labels;
		AottgSettingOption[] pGVar8;
		Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_StaticFields pGVar9;
		Action<GisketchActionContext> __this_03;
		GisketchUIRoot root;
		AottgSettingRow __this_04;
		Action<AottgUi> __this_05;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		MethodInfo method_00;
		WeatherSet* targetAddress;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateWeatherEditor.c__DisplayClass9_0));
		__this_00 = new Object();
		pSVar2 = SettingsManager.WeatherSettings;
		if (((pSVar2 != null) &&(pSVar3 = pSVar2.WeatherSets, pSVar3 != null)) && (pSVar6 = (WeatherSet)pSVar3.GetSelectedSet(), pSVar5 = typeof(WeatherSet), __this_00 != null)) {
			if (pSVar6 == null) {
				__this_00.selected = null;
			}
			else {
				bVar1 = (typeof(WeatherSet)._2).typeHierarchyDepth;
				if (((pSVar6.klass._2).typeHierarchyDepth < bVar1) ||((pSVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(WeatherSet))) {
	label_058ad1fc: ;
					throw new InvalidCastException();
				}
				__this_00.selected = pSVar6;
				if (((pSVar6.klass._2).typeHierarchyDepth < bVar1) ||((pSVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass)pSVar5)) goto label_058ad1fc;
			}
			targetAddress = &__this_00.selected;
			if ((*targetAddress != null) &&(pSVar4 = ((*targetAddress).fields).Preset, pSVar4 != null)) {
				__this_00.preset = pSVar4._value;
				pSVar7 = "Title";
				pSVar7 = String.Concat("GameCreate.Sandbox.Weather.", pSVar7);
				pSVar7 = Aottg2GisketchLocale.Text(pSVar7);
				if (header != null) {
					header.Text(pSVar7, "header", "game-create-weather-title", null, null);
					pSVar7 = "Description";
					pSVar7 = String.Concat("GameCreate.Sandbox.Weather.", pSVar7);
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pSVar7 = Aottg2GisketchLocale.Text(pSVar7);
					header.Text(pSVar7, "text", "game-create-weather-description", null, null);
					pSVar7 = "Set";
					pSVar7 = String.Concat("GameCreate.Sandbox.Weather.", pSVar7);
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pSVar7 = Aottg2GisketchLocale.Text(pSVar7);
					pSVar2 = SettingsManager.WeatherSettings;
					if ((pSVar2 != null) &&(pSVar3 = pSVar2.WeatherSets, pSVar3 != null)) {
						setting = pSVar3.SelectedSetIndex;
						__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgIntSettingAdapter));
						__this_01 = new AottgIntSettingAdapter(setting);
						__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingDescriptor));
						__this_02 = new AottgSettingDescriptor("game-create-weather-set", pSVar7, 1, (IAottgSettingAdapter)__this_01);
						pSVar2 = SettingsManager.WeatherSettings;
						if ((pSVar2 != null) &&(pSVar3 = pSVar2.WeatherSets, pSVar3 != null)) {
							labels = pSVar3.GetSetNames();
							pGVar8 = AottgSettingOption.IndexedOptions(labels);
							if (__this_02 != null) {
								__this_02.Options = pGVar8;
								if ((typeof(AottgGameCreateWeatherEditor.c)._2). cctor_finished_or_no_cctor == 0) {
									pGVar9 = typeof(AottgGameCreateWeatherEditor.c).static_fields;
									__this_03 = pGVar9.__9__9_2;
								}
								else {
									pGVar9 = typeof(AottgGameCreateWeatherEditor.c).static_fields;
									__this_03 = pGVar9.__9__9_2;
								}
								if (__this_03 == null) {
									if (((typeof(AottgGameCreateWeatherEditor.c))._2). cctor_finished_or_no_cctor == 0) {
										pGVar9 = typeof(AottgGameCreateWeatherEditor.c).static_fields;
									}
									@object = (object)pGVar9.__9;
									__this_03 = new Action<GisketchActionContext>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c_BuildHeader_b__9_2);
									pGVar9 = typeof(AottgGameCreateWeatherEditor.c).static_fields;
									pGVar9.__9__9_2 = __this_03;
								}
								__this_02.OnChanged = __this_03;
								root = AottgGisketchUiHost.Root;
								AottgSettingRow.SyncValue(root, __this_02);
								__this_04 = il2cpp_codegen_object_new(typeof(AottgSettingRow)) ;
								__this_04 = new AottgSettingRow(__this_02);
								header.Component((AottgComponent)__this_04);
								__this_05 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass9_0_BuildHeader_b__1);
								width = AottgUi.Percent(100.0);
								layout = AottgUi.Layout("Row", null, null, null, "Wrap", 12.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
								method_00 = (MethodInfo *)"clear";
								header.Panel("clear", __this_05, "game-create-weather-actions", layout, null);
								if (__this_00.preset == false) {
									return;
								}
								pSVar6 = *targetAddress;
								if ((typeof(AottgGameCreateWeatherEditor)._2). cctor_finished_or_no_cctor == 0) {
								}
								pSVar7 = AottgGameCreateWeatherEditor.PresetNotice(pSVar6);
								header.Callout(0, pSVar7, "game-create-weather-preset-notice") ;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass9_0$$.ctor: clean
	private void c__DisplayClass9_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c$$<BuildHeader>b__9_2: clean
	private void c__BuildHeader_b__9_2(GisketchActionContext context)
	{
		uint uVar1;
		InGameSet pSVar2;
		IntSetting __this_00;
		WeatherSettings pSVar3;
		SetSettingsContainer<WeatherSet> pSVar4;
		IntSetting pSVar5;
		GisketchUIRoot root;

		if (Il2CppMethodInitialized_07545318 == false) {
			Il2CppMethodInitialized_07545318 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			pSVar2 = *(InGameSet*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x40);
		}
		if (pSVar2 != null) {
			__this_00 = pSVar2.WeatherIndex;
			if (((typeof(AottgGameCreateWeatherEditor))._2). cctor_finished_or_no_cctor == 0) {
			}
			pSVar3 = SettingsManager.WeatherSettings;
			if ((((pSVar3 != null) &&(pSVar4 = pSVar3.WeatherSets, pSVar4 != null) ) && (pSVar5 = pSVar4.SelectedSetIndex, pSVar5 != null)) &&((__this_00 != null &&(__this_00.Value = pSVar5._value, context.GameObject != null)))) {
				root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
				AottgGameCreateSession.RefreshSandboxContent();
				AottgGameCreateScreen.Refresh(root);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c$$<TryImport>b__26_0: clean
	private bool c__TryImport_b__26_0(JSONNode item)
	{
		bool bVar1;
		bool bVar2;
		float fVar3;

		if (item == null) {
			throw new NullReferenceException();
		}
		bVar1 = item.get_IsNumber();
		if (bVar1) {
			fVar3 = item.get_AsFloat();
			if ((uint)ABS(fVar3) < 0x7f800001) {
				fVar3 = item.get_AsFloat();
				bVar2 = ABS(fVar3) == INFINITY;
			}
		}
		return bVar2;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass14_0$$<ExistingCopy>b__0: clean
	private bool c__DisplayClass14_0__ExistingCopy_b__0(WeatherSet set)
	{
		BoolSetting pSVar1;
		StringSetting pSVar2;
		bool bVar3;

		if ((set != null) &&(pSVar1 = set.Preset, pSVar1 != null)) {
			if (pSVar1._value != false) {
				return false;
			}
			pSVar2 = set.Name;
			if (pSVar2 != null) {
				bVar3 = (pSVar2._value == this.name);
				return bVar3;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass23_1$$<Vector>b__0: 12 lines keep C-only constructs
	private void c__DisplayClass23_1__Vector_b__0(GisketchActionContext context)
	{
		int iVar1;
		AottgGameCreateWeatherEditor.c__DisplayClass23_0 pGVar2;
		Vector3Setting __this_00;
		FloatSetting pSVar3;
		float pfVar4;
		Il2CppClass klass;
		IndexOutOfRangeException __this_01;
		String message;
		MethodInfo lastManagedFrame;
		Vector3 value;
		float[] local_18 = new float[2];
		ulong local_10;

		pfVar4 = local_18;
		pGVar2 = this.CS___8__locals1;
		if ((pGVar2 != null) &&(__this_00 = pGVar2.setting, __this_00 != null)) {
			local_10._0_4_ = __this_00._value.x;
			local_10._4_4_ = __this_00._value.y;
			local_18[0] = (((Settings_TypedSetting_Vector3__Fields)&__this_00.fields)._value).z;
			pSVar3 = this.value;
			if (pSVar3 != null) {
				iVar1 = this.component;
				if (iVar1 == 0) {
					pfVar4 = (float)&local_10;
				}
				else if (iVar1 != 2) {
					if (iVar1 != 1) {
						klass = il2cpp_codegen_get_runtime_metadata(&typeof(IndexOutOfRangeException));
						__this_01 = (IndexOutOfRangeException)il2cpp_codegen_object_new(klass);
						message = il2cpp_codegen_get_runtime_metadata(&"Invalid Vector3 index!");
						__this_01 = new IndexOutOfRangeException(message);
						lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UnityEngine_Vector3_set_Item);
						throw (object)__this_01;
					}
					pfVar4 = (float)((long)&local_10 + 4);
				}
				*pfVar4 = pSVar3._value;
				value.z = local_18[0];
				value.x = (float)(undefined4)local_10;
				value.y = (float)local_10._4_4_;
				__this_00.Value = value;
				if ((typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor == 0) {
					AottgGameCreateWeatherEditor.Edited(context);
					return;
				}
				AottgGameCreateWeatherEditor.Edited(context);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass24_0$$<Operate>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass24_0__Operate_b__0()
	{
		uint uVar1;
		uint value;
		BaseMenu pUVar2;
		SetNamePopup pUVar3;
		StringSetting pSVar4;
		WeatherSet pSVar5;
		WeatherSettings pSVar6;
		SetSettingsContainer<WeatherSet> pSVar7;
		ListSetting<T> pSVar8;
		List<object> __this_00;
		IntSetting pSVar9;
		InGameSet pSVar10;
		IntSetting pSVar11;
		GisketchUIRoot root;
		bool bVar12;
		int iVar13;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_0754531b == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherSet_IndexOf) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_SetSettingsContainer_WeatherSet_CreateSet) ;
			Il2CppMethodInitialized_0754531b = true;
		}
		pUVar2 = this.menu;
		if (((pUVar2 == null) ||(pUVar3 = pUVar2.SetNamePopup, pUVar3 == null)) ||(pSVar4 = pUVar3.NameSetting, pSVar4 == null)) goto label_058adb27;
		method_00 = (MethodInfo)pSVar4._value;
		bVar12 = (this.operation == "Rename");
		if (bVar12) {
			pSVar5 = this.selected;
			if ((pSVar5 == null) ||(pSVar4 = pSVar5.Name, pSVar4 == null)) goto label_058adb27;
			pSVar4.Value = (object)method_00;
			goto label_058adaf5;
		}
		pSVar6 = SettingsManager.WeatherSettings;
		if (((pSVar6 == null) ||(pSVar7 = pSVar6.WeatherSets, pSVar7 == null)) || ((pSVar8 = pSVar7.Sets, pSVar8 == null ||(__this_00 = (List<object>)pSVar8._value, __this_00 == null)))) goto label_058adb27;
		pSVar9 = pSVar7.SelectedSetIndex;
		iVar13 = __this_00.IndexOf((object)this.selected);
		if (pSVar9 == null) goto label_058adb27;
		pSVar9.Value = iVar13;
		bVar12 = (this.operation == "Create");
		uVar1 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
		if (bVar12) {
			if (uVar1 == 0) {
			}
			pSVar6 = SettingsManager.WeatherSettings;
			if ((pSVar6 == null) ||(pSVar7 = pSVar6.WeatherSets, pSVar7 == null)) goto label_058adb27;
			pSVar7.CreateSet((String)method_00);
			uVar1 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (uVar1 == 0) {
			}
			pSVar6 = SettingsManager.WeatherSettings;
			if ((pSVar6 == null) ||(pSVar7 = pSVar6.WeatherSets, pSVar7 == null)) goto label_058adb27;
			pSVar7.CopySelectedSet((String)method_00);
			uVar1 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar6 = SettingsManager.WeatherSettings;
		if (((pSVar6 == null) ||(pSVar7 = pSVar6.WeatherSets, pSVar7 == null)) || (pSVar8 = pSVar7.Sets, pSVar8 == null)) goto label_058adb27;
		pSVar9 = pSVar7.SelectedSetIndex;
		iVar13 = pSVar8.GetCount();
		if (pSVar9 == null) goto label_058adb27;
		pSVar9.Value = iVar13 + -1;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd != false) goto label_058ada1a;
	label_058ada60: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058ada26;
	label_058ada7f: ;
			pSVar10 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd == false) goto label_058ada60;
	label_058ada1a: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058ada7f;
	label_058ada26: ;
			pSVar10 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (pSVar10 != null) {
			pSVar9 = pSVar10.WeatherIndex;
			pSVar6 = SettingsManager.WeatherSettings;
			if (((pSVar6 != null) &&(pSVar7 = pSVar6.WeatherSets, pSVar7 != null)) && ((pSVar11 = pSVar7.SelectedSetIndex, pSVar11 != null &&(pSVar9 != null)))) {
				value = pSVar11._value;
				method_00 = (MethodInfo)(ulong)value;
				pSVar9.Value = value;
	label_058adaf5: ;
				root = this.root;
				AottgGameCreateWeatherEditor.Save(root);
				return;
			}
		}
	label_058adb27: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass24_0$$<Operate>b__1: 1 lines keep C-only constructs
	private void c__DisplayClass24_0__Operate_b__1()
	{
		uint uVar1;
		int iVar2;
		uint value;
		WeatherSettings pSVar3;
		SetSettingsContainer<WeatherSet> pSVar4;
		ListSetting<T> pSVar5;
		List<object> pSVar6;
		InGameSet pSVar7;
		IntSetting pSVar8;
		IntSetting pSVar9;
		int index;
		int value_00;

		if (Il2CppMethodInitialized_0754531c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherSet_IndexOf) ;
			Il2CppMethodInitialized_0754531c = true;
			uVar1 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = SettingsManager.WeatherSettings;
		if ((((pSVar3 == null) ||(pSVar4 = pSVar3.WeatherSets, pSVar4 == null)) || (pSVar5 = pSVar4.Sets, pSVar5 == null)) ||(pSVar6 = (List<object>)pSVar5._value, pSVar6 == null)) goto label_058adf59;
		index = pSVar6.IndexOf((object)this.selected);
		if (index < 0) {
			return;
		}
		pSVar3 = SettingsManager.WeatherSettings;
		if (((pSVar3 == null) ||(pSVar4 = pSVar3.WeatherSets, pSVar4 == null)) || ((pSVar5 = pSVar4.Sets, pSVar5 == null ||(pSVar6 = (List<object>)pSVar5._value, pSVar6 == null)))) goto label_058adf59;
		pSVar6.RemoveAt(index);
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd == false) goto label_058add6e;
	label_058adc83: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058adc93;
	label_058add91: ;
			pSVar7 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd != false) goto label_058adc83;
	label_058add6e: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058add91;
	label_058adc93: ;
			pSVar7 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar7 == null) ||(pSVar8 = pSVar7.WeatherIndex, pSVar8 == null)) goto label_058adf59;
		iVar2 = pSVar8._value;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058addff;
	label_058addcf: ;
			pSVar7 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058addcf;
	label_058addff: ;
			pSVar7 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar7 == null) ||(pSVar8 = pSVar7.WeatherIndex, pSVar8 == null)) goto label_058adf59;
		value_00 = 0;
		if (iVar2 != index) {
			value_00 = iVar2 - (uint)(index < iVar2);
		}
		pSVar8.Value = value_00;
		pSVar3 = SettingsManager.WeatherSettings;
		if ((pSVar3 == null) ||(pSVar4 = pSVar3.WeatherSets, pSVar4 == null)) goto label_058adf59;
		pSVar8 = pSVar4.SelectedSetIndex;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd == false) goto label_058adeef;
	label_058adeb0: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058adebc;
	label_058adf0e: ;
			pSVar7 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd != false) goto label_058adeb0;
	label_058adeef: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058adf0e;
	label_058adebc: ;
			pSVar7 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (((pSVar7 != null) &&(pSVar9 = pSVar7.WeatherIndex, pSVar9 != null)) &&(pSVar8 != null)) {
			value = pSVar9._value;
			pSVar8.Value = value;
			AottgGameCreateWeatherEditor.Save(this.root);
			return;
		}
	label_058adf59: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass24_0$$<Operate>b__2: clean
	private void c__DisplayClass24_0__Operate_b__2()
	{
		BaseMenu pUVar1;
		ImportPopup pUVar2;
		StringSetting pSVar3;
		String text;
		WeatherSet pSVar4;
		StringSetting pSVar5;
		BoolSetting __this_00;
		GisketchUIRoot root;
		bool bVar6;
		WeatherSet pSStack_28;
		String pSStack_20;

		pSStack_28 = null;
		pSStack_20 = null;
		pUVar1 = this.menu;
		if (((pUVar1 != null) &&(pUVar2 = pUVar1.ImportPopup, pUVar2 != null)) &&(pSVar3 = pUVar2.ImportSetting, pSVar3 != null)) {
			text = pSVar3._value;
			bVar6 = AottgGameCreateWeatherEditor.TryImport(text, ref pSStack_28, ref pSStack_20);
			if (bVar6) {
				if (((((pSStack_28 != null) &&(pSVar4 = this.selected, pSVar4 != null)) &&((pSVar3 = pSVar4.Name, pSVar3 != null &&((((pSVar5 = pSStack_28.Name, pSVar5 != null &&(pSVar5.Value = (object)pSVar3._value, pSStack_28 != null)) &&(pSVar4 = this.selected, pSVar4 != null)) &&((pSVar3 = pSVar4.UniqueId, pSVar3 != null &&(pSVar5 = pSStack_28.UniqueId, pSVar5 != null)))))))) &&(pSVar5.Value = (object)pSVar3._value, pSStack_28 != null)) &&(__this_00 = pSStack_28.Preset, __this_00 != null)) {
					__this_00.Value = false;
					pSVar4 = this.selected;
					if (pSVar4 != null) {
						pSVar4.Copy((BaseSetting)pSStack_28);
						pUVar1 = this.menu;
						if ((pUVar1 != null) &&(pUVar2 = pUVar1.ImportPopup, pUVar2 != null)) {
							pUVar2.Hide();
							root = this.root;
							AottgGameCreateWeatherEditor.Save(root);
							return;
						}
					}
				}
			}
			else {
				pUVar1 = this.menu;
				if ((pUVar1 != null) &&(pUVar2 = pUVar1.ImportPopup, pUVar2 != null)) {
					pUVar2.ShowError(pSStack_20);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass25_0$$<ImportSchedule>b__0: 5 lines keep C-only constructs
	private void c__DisplayClass25_0__ImportSchedule_b__0()
	{
		uint uVar1;
		ImportPopup pUVar2;
		StringSetting pSVar3;
		WeatherSet pSVar4;
		StringSetting __this_00;
		GisketchUIRoot root;
		WeatherSettings pSVar5;
		bool bVar6;
		WeatherSchedule __this_01;
		String value;
		Il2CppClass klass;

		__this_01 = new WeatherSchedule();
		pUVar2 = this.popup;
		if (((pUVar2 != null) &&(pSVar3 = pUVar2.ImportSetting, pSVar3 != null)) &&(__this_01 != null)) {
			value = __this_01.DeserializeFromCSV(pSVar3._value);
			bVar6 = String.IsNullOrEmpty(value);
			if (bVar6) {
				pSVar4 = this.target;
				if (((pSVar4 != null) &&(pUVar2 = this.popup, pUVar2 != null)) &&((pSVar3 = pUVar2.ImportSetting, pSVar3 != null &&(__this_00 = pSVar4.Schedule, __this_00 != null)))) {
					__this_00.Value = (object)pSVar3._value;
					pUVar2 = this.popup;
					if (pUVar2 != null) {
						pUVar2.Hide();
						if ((typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor == 0) {
							pSVar4 = AottgGameCreateWeatherEditor._draft;
							uVar1 = (typeof(AottgGameCreateWeatherEditor)._2). cctor_finished_or_no_cctor;
							klass = typeof(AottgGameCreateWeatherEditor);
						}
						else {
							pSVar4 = AottgGameCreateWeatherEditor._draft;
							uVar1 = (typeof(AottgGameCreateWeatherEditor)._2). cctor_finished_or_no_cctor;
							klass = typeof(AottgGameCreateWeatherEditor);
						}
						typeof(AottgGameCreateWeatherEditor) =(AottgGameCreateWeatherEditor)klass;
						if (pSVar4 == null) {
							if (uVar1 == 0) {
							}
							pSVar5 = SettingsManager.WeatherSettings;
							if (pSVar5 == null) goto label_058ae3f3;
							pSVar5.Save();
							root = this.root;
							uVar1 = (typeof(AottgGameCreateWeatherEditor)._2). cctor_finished_or_no_cctor;
						}
						else {
							if (uVar1 == 0) {
							}
							AottgGameCreateWeatherEditor.PromoteDraft();
							root = this.root;
							uVar1 = (typeof(AottgGameCreateWeatherEditor)._2). cctor_finished_or_no_cctor;
						}
						if (uVar1 == 0) {
						}
						if (Il2CppMethodInitialized_07545313 == false) {
							il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgGameCreateScreen)) ;
							Il2CppMethodInitialized_07545313 = true;
							uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
						}
						else {
							uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
						}
						if (uVar1 == 0) {
						}
						AottgGameCreateSession.RefreshSandboxContent();
						AottgGameCreateScreen.Refresh(root);
						return;
					}
				}
			}
			else {
				pUVar2 = this.popup;
				if (pUVar2 != null) {
					pUVar2.ShowError(value);
					return;
				}
			}
		}
	label_058ae3f3: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass7_0$$<Build>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass7_0__Build_b__0(AottgUi actions)
	{
		uint uVar1;
		String pSVar2;
		Action<GisketchActionContext> pSVar3;

		if (Il2CppMethodInitialized_0754531f == false) {
			Il2CppMethodInitialized_0754531f = true;
			uVar1 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = "ImportSchedule";
		}
		else {
			pSVar2 = "ImportSchedule";
		}
		"ImportSchedule" = pSVar2;
		pSVar2 = String.Concat("GameCreate.Sandbox.Weather.", pSVar2);
		pSVar2 = Aottg2GisketchLocale.Text(pSVar2);
		pSVar3 = this.__9__1;
		if (pSVar3 == null) {
			pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass7_0_Build_b__1);
			this.__9__1 = pSVar3;
		}
		if (actions == null) {
			throw new NullReferenceException();
		}
		actions.Button(1, pSVar2, pSVar3, "game-create-weather-import-schedule", null, null, null);
		pSVar2 = "ExportSchedule";
		if ((typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor == 0) {
			pSVar2 = "ExportSchedule";
		}
		"ExportSchedule" = pSVar2;
		pSVar2 = String.Concat("GameCreate.Sandbox.Weather.", pSVar2);
		pSVar2 = Aottg2GisketchLocale.Text(pSVar2);
		pSVar3 = this.__9__2;
		if (pSVar3 == null) {
			pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass7_0_Build_b__2);
			this.__9__2 = pSVar3;
		}
		actions.Button(1, pSVar2, pSVar3, "game-create-weather-export-schedule", null, null, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass7_0$$<Build>b__1: clean
	private void c__DisplayClass7_0__Build_b__1(GisketchActionContext context)
	{
		WeatherSet target;
		GisketchUIRoot root;

		if (context.GameObject == null) {
			throw new NullReferenceException();
		}
		root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
		target = this.target;
		if ((typeof(AottgGameCreateWeatherEditor)._2).cctor_finished_or_no_cctor == 0) {
		}
		AottgGameCreateWeatherEditor.ImportSchedule(root, target);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass7_0$$<Build>b__2: clean
	private void c__DisplayClass7_0__Build_b__2(GisketchActionContext __)
	{
		uint uVar1;
		BaseMenu pUVar2;
		WeatherSet pSVar3;
		StringSetting pSVar4;
		ExportPopup __this_00;

		if (Il2CppMethodInitialized_07545321 == false) {
			Il2CppMethodInitialized_07545321 = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pUVar2 = UIManager.CurrentMenu;
		}
		else {
			pUVar2 = *(BaseMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (pUVar2 != null) {
			__this_00 = AottgGisketchUiHost.AboveOverlay<ExportPopup>((object)pUVar2.ExportPopup);
			pSVar3 = this.target;
			if (((pSVar3 != null) &&(pSVar4 = pSVar3.Schedule, pSVar4 != null)) &&(__this_00 != null)) {
				__this_00.Show(pSVar4._value);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass9_0$$<BuildHeader>b__1: 16 lines keep C-only constructs
	private void c__DisplayClass9_0__BuildHeader_b__1(AottgUi actions)
	{
		Il2CppClass pIVar1;
		WeatherSettings pSVar2;
		SetSettingsContainer<WeatherSet> __this_00;
		bool bVar3;
		bool bVar4;
		uint uVar5;
		object pIVar6;
		AottgGameCreateWeatherEditor.c__DisplayClass9_1 __this_01;
		String tooltip;
		String icon;
		Action<GisketchActionContext> __this_02;
		String pSVar7;
		GisketchNodeDefinition pGVar8;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar9;
		ulong uVar10;
		Nullable<bool>[] aSStack_58 = new Nullable<bool>[4];
		AottgGameCreateWeatherEditor.c__DisplayClass9_0 pGStack_50;
		object pIStack_48;
		ulong uStack_40;
		AottgGameCreateWeatherEditor.c__DisplayClass9_1 pGStack_38;

		pGStack_50 = this;
		if (pGStack_50.preset == false) {
			pIVar6 = new string[6];
			if (pIVar6 != null) {
				if (*(int)&pIVar6[1].monitor != 0) {
					pIVar6[2].klass = (Il2CppClass *)"Create";
					if (((ulong)pIVar6[1].monitor & 0xfffffffe) != 0) {
						pIVar6[2].monitor = "Copy";
						if (2 < *(uint)&pIVar6[1].monitor) {
							pIVar6[3].klass = (Il2CppClass *)"Rename";
							if (((ulong)pIVar6[1].monitor & 0xfffffffc) != 0) {
								pIVar6[3].monitor = "Delete";
								if (4 < *(uint)&pIVar6[1].monitor) {
									pIVar6[4].klass = (Il2CppClass *)"Import";
									if (5 < *(uint)&pIVar6[1].monitor) {
										pIVar6[4].monitor = "Export";
										uVar5 = (uint)pIVar6[1].monitor;
										pIStack_48 = pIVar6;
										goto joined_r0x058aeaf5;
									}
								}
							}
						}
					}
				}
				goto label_058aee07;
			}
		}
		else {
			pIVar6 = new string[3];
			if (pIVar6 != null) {
				if (*(int)&pIVar6[1].monitor != 0) {
					pIVar6[2].klass = (Il2CppClass *)"Create";
					if (((ulong)pIVar6[1].monitor & 0xfffffffe) != 0) {
						pIVar6[2].monitor = "Copy";
						if (2 < *(uint)&pIVar6[1].monitor) {
							pIVar6[3].klass = (Il2CppClass *)"Export";
							uVar5 = (uint)pIVar6[1].monitor;
							pIStack_48 = pIVar6;
	joined_r0x058aeaf5: ;
							if (0 < (int)uVar5) {
								uVar10 = 0;
								do {
									if (uVar5 <= uVar10) goto label_058aee07;
									pIVar1 = (&pIStack_48[2].klass)[uVar10];
									__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateWeatherEditor.c__DisplayClass9_1));
									__this_01 = new Object();
									if (__this_01 ==null) goto label_058aee02;
									__this_01.CS___8__locals1 = pGStack_50;
									uStack_40 = uVar10;
									pGStack_38 = &__this_01.fields;
									__this_01.name = (String)pIVar1;
									pSVar7 = __this_01.name;
									tooltip = UIManager.GetLocaleCommon(pSVar7);
									bVar3 = (__this_01.name == "Delete");
									icon = SetActionIcons.For(__this_01.name);
									__this_02 = new Action<GisketchActionContext>((object)__this_01, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass9_1_BuildHeader_b__3);
									pSVar7 = __this_01.name;
									if (pSVar7 == null) goto label_058aee02;
									pSVar7 = pSVar7.ToLowerInvariant();
									pSVar7 = String.Concat("game-create-weather-", pSVar7);
									if ((actions == null) ||(pGVar8 = actions.IconButton((uint)bVar3 * 5 + 1, icon, __this_02, pSVar7, tooltip, null), pGVar8 == null)) goto label_058aee02;
									pGVar8.formLabel = tooltip;
									width = AottgUi.Points(42.0);
									height = AottgUi.Points(42.0);
									pGVar9 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
									pGVar8.layout = pGVar9;
									bVar4 = (pGStack_38.name != "Delete") ;
									bVar3 = true;
									if (!bVar4) {
										if ((typeof(AottgGameCreateWeatherEditor)._2). cctor_finished_or_no_cctor == 0) {
										}
										pSVar2 = SettingsManager.WeatherSettings;
										if ((pSVar2 == null) ||(__this_00 = pSVar2.WeatherSets, __this_00 == null)) goto label_058aee02;
										bVar3 = __this_00.CanDeleteSelectedSet() ;
									}
									aSStack_58[0].hasValue = false;
									aSStack_58[0].value = false;
									aSStack_58 = new Nullable<bool>(bVar3);
									pGVar8.enabled = aSStack_58[0];
									uVar10 = uStack_40 + 1;
									uVar5 = *(uint)&pIStack_48[1].monitor;
								} while ((long)uVar10 < (long)(int)uVar5);
							}
							return;
						}
					}
				}
	label_058aee07: ;
				throw new IndexOutOfRangeException();
			}
		}
	label_058aee02: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass9_1$$.ctor: clean
	private void c__DisplayClass9_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass9_1$$<BuildHeader>b__3: clean
	private void c__DisplayClass9_1__BuildHeader_b__3(GisketchActionContext context)
	{
		AottgGameCreateWeatherEditor.c__DisplayClass9_0 pGVar1;
		WeatherSet selected;
		String operation;
		GisketchUIRoot root;

		if (context.GameObject != null) {
			root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
			pGVar1 = this.CS___8__locals1;
			if (pGVar1 != null) {
				selected = pGVar1.selected;
				operation = this.name;
				AottgGameCreateWeatherEditor.Operate(root, selected, operation);
				return;
			}
		}
		throw new NullReferenceException();
	}
}
