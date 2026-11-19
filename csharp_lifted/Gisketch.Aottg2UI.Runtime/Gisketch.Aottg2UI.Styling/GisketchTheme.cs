// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchTheme
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000030")]
public sealed class GisketchTheme
{
	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x0")]
	public static readonly GisketchTheme Default;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, Color> _colors;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x18")]
	private readonly Dictionary<string, GisketchStyleDefinition> _styles;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, GisketchMotionToken> _motions;

	[Token(Token = "0x1700001F")]
	internal float ReliefIntensity
	{
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x5241500", Offset = "0x5240500", VA = "0x5241500")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$get_ReliefIntensity): clean
			return this._ReliefIntensity_k__BackingField;
		}
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x5241510", Offset = "0x5240510", VA = "0x5241510")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$set_ReliefIntensity): clean
			this._ReliefIntensity_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000020")]
	internal bool IsDarkMode
	{
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x5241520", Offset = "0x5240520", VA = "0x5241520")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$get_IsDarkMode): clean
			return this._IsDarkMode_k__BackingField;
		}
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x5241530", Offset = "0x5240530", VA = "0x5241530")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$set_IsDarkMode): clean
			this._IsDarkMode_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x5235450", Offset = "0x5234450", VA = "0x5235450")]
	private void AddAtomDefaults()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$AddAtomDefaults): 26 lines keep C-only constructs
		Dictionary<string, GisketchStyleDefinition>* ppSVar1;
		Dictionary<string, Color> pSVar2;
		Dictionary<object, object> pSVar3;
		GisketchTheme __this_00;
		GisketchStyleDefinition pGVar4;
		GisketchLength pGVar5;
		MethodInfo pMVar6;
		Color value;
		Nullable<bool>[] local_88 = new Nullable<bool>[4];
		Nullable<bool>[] local_80 = new Nullable<bool>[4];
		Nullable<bool>[] local_78 = new Nullable<bool>[4];
		Nullable<bool>[] local_70 = new Nullable<bool>[4];
		Nullable<bool>[] local_68 = new Nullable<bool>[4];
		Nullable<float> local_60;
		Nullable<float> local_58;
		Nullable<float> local_50;
		Nullable<float> local_48;
		Nullable<float> local_40;
		GisketchTheme local_38;

		pSVar2 = this._colors;
		if (pSVar2 != null) {
			pSVar2.set_Item((Il2CppObject *)"shadow", (Color)(ZEXT816(0x3ea3d70a00000000) << 0x40));
			pSVar2 = this._colors;
			if (pSVar2 != null) {
				value = pSVar2.get_Item((Il2CppObject *)"primary");
				pSVar2.set_Item((Il2CppObject *)"controlMark", value) ;
				pSVar3 = (Dictionary<object, object>)this._styles;
				if (pSVar3 != null) {
					pGVar4 = pSVar3.get_Item((Il2CppObject *)"tooltip");
					local_68[0].hasValue = false;
					local_68[0].value = false;
					local_68 = new Nullable<bool>(true);
					if (pGVar4 != null) {
						ppSVar1 = &this._styles;
						pGVar4.shadow = local_68[0];
						if ((Dictionary<object, object>)*ppSVar1 !=null) {
							pGVar4 = (*ppSVar1).get_Item((Il2CppObject *)"dialog");
							local_70[0].hasValue = false;
							local_70[0].value = false;
							local_70 = new Nullable<bool>(true);
							if (pGVar4 != null) {
								pGVar4.shadow = local_70[0];
								if ((Dictionary<object, object>)*ppSVar1 !=null) {
									pGVar4 = (*ppSVar1).get_Item((Il2CppObject *)"popover");
									local_78[0].hasValue = false;
									local_78[0].value = false;
									local_78 = new Nullable<bool>(true);
									if (pGVar4 != null) {
										pGVar4.shadow = local_78[0];
										pSVar3 = (Dictionary<object, object>)*ppSVar1;
										if ((typeof(GisketchTheme)._2).cctor_finished_or_no_cctor == 0) {
										}
										pGVar4 = GisketchTheme.IconStyle("icon", "text", 24.0);
										if (pSVar3 != null) {
											pSVar3.set_Item((Il2CppObject *)"icon", (object)pGVar4);
											pSVar3 = (Dictionary<object, object>)*ppSVar1;
											pGVar4 = GisketchTheme.ControlStyle("spriteButton", "clear", 48.0);
											if (pSVar3 != null) {
												local_38 = this;
												pSVar3.set_Item((Il2CppObject *)"spriteButton", (object)pGVar4);
												if ((Dictionary<object, object>)*ppSVar1 !=null) {
													pGVar4 = (*ppSVar1).get_Item((Il2CppObject *)"spriteButton");
													pGVar5 = new GisketchLength();
													if (pGVar5 != null) {
														pGVar5.value = 48.0;
														pGVar5.unit = "point";
														if (pGVar4 != null) {
															pGVar4.width = pGVar5;
															pSVar3 = (Dictionary<object, object>)*ppSVar1;
															pGVar4 = GisketchTheme.ControlStyle("separator", "primary", 2.0);
															if (pSVar3 != null) {
																pSVar3.set_Item((Il2CppObject *)"separator", (object)pGVar4);
																pSVar3 = (Dictionary<object, object>)*ppSVar1;
																pGVar4 = GisketchTheme.ControlStyle("dropdown", "clear", 42.0);
																if (pSVar3 != null) {
																	pSVar3.set_Item((Il2CppObject *)"dropdown", (object)pGVar4);
																	pSVar3 = (Dictionary<object, object>)*ppSVar1;
																	pGVar4 = GisketchTheme.ControlStyle("select", "clear", 42.0);
																	if (pSVar3 != null) {
																		pSVar3.set_Item((Il2CppObject *)"select", (object)pGVar4);
																		pSVar3 = (Dictionary<object, object>)*ppSVar1 ;
																		pGVar4 = GisketchTheme.DropdownItemStyle("dropdownItem", false);
																		if (pSVar3 != null ) {
																			pSVar3.set_Item((Il2CppObject *)"dropdownItem", (object)pGVar4);
																			pSVar3 = (Dictionary<object, object>)*ppSVar1;
																			pGVar4 = GisketchTheme.DropdownItemStyle("searchResultItem", true);
																			if (pSVar3 != (Dictionary<object, object>)0x0) {
																				pSVar3.set_Item((Il2CppObject *)"searchResultItem", (object)pGVar4);
																				pSVar3 = (Dictionary<object, object>)*ppSVar1;
																				pGVar4 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																				pGVar4 = new GisketchStyleDefinition();
																				if (pGVar4 != null) {
																					pGVar4.name = "callout";
																					pGVar4.background = "surface";
																					local_40.hasValue = false;
																					local_40._1_3_ = 0;
																					local_40.value = 0.0;
																					local_40 = new Nullable<float>(0.0);
																					pGVar4.padding = local_40;
																					local_48.hasValue = false;
																					local_48._1_3_ = 0;
																					local_48.value = 0.0;
																					local_48 = new Nullable<float>(12.0);
																					pGVar4.gap = local_48;
																					local_80[0].hasValue = false;
																					local_80[0].value = false;
																					local_80 = new Nullable<bool>(true) ;
																					pGVar4.textured = local_80[0];
																					local_88[0].hasValue = false;
																					local_88[0].value = false;
																					local_88 = new Nullable<bool>(true) ;
																					pGVar4.worn = local_88[0];
																					local_50.hasValue = false;
																					local_50._1_3_ = 0;
																					local_50.value = 0.0;
																					local_50 = new Nullable<float>(4.0);
																					pGVar4.wornStainScale = local_50;
																					local_58.hasValue = false;
																					local_58._1_3_ = 0;
																					local_58.value = 0.0;
																					local_58 = new Nullable<float>(0.0);
																					pGVar4.relief = local_58;
																					if (pSVar3 != null) {
																						pSVar3.set_Item((Il2CppObject *)"callout", (object)pGVar4);
																						pSVar3 = (Dictionary<object, object>)*ppSVar1;
																						pGVar4 = GisketchTheme.TextStyle("calloutText", "textMuted", "text", 400, 18.0);
																						if (pSVar3 != null) {
																							pSVar3.set_Item((Il2CppObject *)"calloutText", (object)pGVar4);
																							if ((Dictionary<object, object>)*ppSVar1 !=null ) {
																								pGVar4 = (*ppSVar1).get_Item((Il2CppObject *)"calloutText");
																								if (pGVar4 != null) {
																									pGVar4.fontStyle = "italic";
																									if ((System_Collections_Generic_Dictionary_object__object__o * )*ppSVar1 !=(System_Collections_Generic_Dictionary_object__object__o * )0x0) {
																										pGVar4 = (*ppSVar1).get_Item((Il2CppObject *)"calloutText");
																										local_60.hasValue = false;
																										local_60._1_3_ = 0;
																										local_60.value = 0.0;
																										local_60 = new Nullable<float>(12.0);
																										if (pGVar4 != null) {
																											pGVar4.padding = local_60;
																											pSVar3 = (Dictionary<object, object>)*ppSVar1;
																											pGVar4 = GisketchTheme.ControlStyle("calloutBorderPrimary", "primary", 42.0);
																											if (pSVar3 != null) {
																												pSVar3.set_Item((Il2CppObject *)"calloutBorderPrimary", (object)pGVar4);
																												pSVar3 = (Dictionary<object, object>)*ppSVar1;
																												pGVar4 = GisketchTheme.ControlStyle("calloutBorderSuccess", "success", 42.0);
																												if (pSVar3 != null) {

																												pSVar3.set_Item((Il2CppObject *)"calloutBorderSuccess", (object)pGVar4);
																												pSVar3 = (Dictionary<object, object>)*ppSVar1;
																												pGVar4 = GisketchTheme.ControlStyle("calloutBorderWarning", "warning", 42.0);
																												if (pSVar3 != null) {

																												pSVar3.set_Item((Il2CppObject *)"calloutBorderWarning", (object)pGVar4);
																												pSVar3 = (Dictionary<object, object>)*ppSVar1;
																												pGVar4 = GisketchTheme.ControlStyle("calloutBorderError", "destructive", 42.0);
																												if (pSVar3 != null) {
																													pMVar6 = (MethodInfo *)"calloutBorderError";

																												pSVar3.set_Item((Il2CppObject *)"calloutBorderError", (object)pGVar4);
																												pSVar3 = (Dictionary<object, object>)*ppSVar1;
																												pGVar4 = GisketchTheme.CopyInputStyle("textArea", 118.0);
																												if (pSVar3 != null) {

																												pSVar3.set_Item((Il2CppObject *)"textArea", (object)pGVar4);
																												pSVar3 = (Dictionary<object, object>)*ppSVar1;
																												pGVar4 = GisketchTheme.ControlStyle("slider", "clear", 48.0);
																												if (pSVar3 != null) {

																												pSVar3.set_Item((Il2CppObject *)"slider", (object)pGVar4);
																												pSVar3 = (Dictionary<object, object>)*ppSVar1;
																												pGVar4 = GisketchTheme.ControlStyle("sliderTrack", "engravedBg", 18.0);
																												if (pSVar3 != null) {

																												pSVar3.set_Item((Il2CppObject *)"sliderTrack", (object)pGVar4);
																												pSVar3 = (Dictionary<object, object>)*ppSVar1;
																												pGVar4 = GisketchTheme.ButtonStyle("sliderFill", "primary", "header", 400, 1.0, 18.0);
																												if (pSVar3 != null) {

																												pSVar3.set_Item((Il2CppObject *)"sliderFill", (object)pGVar4);
																												pSVar3 = (Dictionary<object, object>)*ppSVar1;
																												pGVar4 = GisketchTheme.ButtonStyle("sliderThumb", "surfaceSoft", "header", 400, 1.0, 24.0);
																												if (pSVar3 != null) {

																												pSVar3.set_Item((Il2CppObject *)"sliderThumb", (object)pGVar4);
																												if ((Dictionary<object, object>)*ppSVar1 !=null) {
																													pGVar4 = (*ppSVar1).get_Item((Il2CppObject *)"sliderThumb");
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar5 = new GisketchLength();
																												if (pGVar5 != null) {
																													pGVar5.value = 24.0;
																													pGVar5.unit = "point";
																													if (pGVar4 != null) {
																													pGVar4.width = pGVar5;
																													if ((Dictionary<object, object>)*ppSVar1 !=null) {
																													pGVar4 = (*ppSVar1).get_Item((Il2CppObject *)"sliderThumb");
																												if (pGVar4 != null) {
																													pGVar4.textColor = "text";
																													pSVar3 = (Dictionary<object, object>)*ppSVar1;
																												pGVar4 = GisketchTheme.TextStyle("sliderValue", "textMuted", "text", 500, 18.0);
																												if (pSVar3 != null) {

																												pSVar3.set_Item((Il2CppObject *)"sliderValue", (object)pGVar4);
																												pSVar3 = (Dictionary<object, object>)*ppSVar1;
																												pGVar4 = GisketchTheme.TextStyle("stateMetaText", "textMuted", "text", 400, 20.0);
																												if (pSVar3 != null) {

																												pSVar3.set_Item((Il2CppObject *)"stateMetaText", (object)pGVar4);
																												if ((Dictionary<object, object>)*ppSVar1 !=null) {
																													pGVar4 = (*ppSVar1).get_Item((Il2CppObject *)"stateMetaText");
																												if (pGVar4 != null) {
																													pGVar4.textAlignment = "left";
																													if ((Dictionary<object, object>)*ppSVar1 !=null) {
																													pGVar4 = (*ppSVar1).get_Item((Il2CppObject *)"stateMetaText");
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar5 = new GisketchLength();
																												if (pGVar5 != null) {
																													pGVar5.value = 100.0;
																													pGVar5.unit = "percent";
																													if (pGVar4 != null) {
																													pGVar4.width = pGVar5;
																													pSVar3 = (Dictionary<object, object>)*ppSVar1;
																												pGVar4 = GisketchTheme.ControlStyle("checkbox", "clear", 42.0);
																												if (pSVar3 != null) {

																												pSVar3.set_Item((Il2CppObject *)"checkbox", (object)pGVar4);
																												pSVar3 = (Dictionary<object, object>)*ppSVar1;
																												pGVar4 = GisketchTheme.ControlStyle("radio", "clear", 42.0);
																												if (pSVar3 != null) {

																												pSVar3.set_Item((Il2CppObject *)"radio", (object)pGVar4);
																												pSVar3 = (Dictionary<object, object>)*ppSVar1;
																												pGVar4 = GisketchTheme.ControlStyle("checkBox", "engravedBg", 26.0);
																												if (pSVar3 != null) {

																												pSVar3.set_Item((Il2CppObject *)"checkBox", (object)pGVar4);
																												pSVar3 = (Dictionary<object, object>)*ppSVar1;
																												pGVar4 = GisketchTheme.ControlStyle("checkMark", "controlMark", 16.0);
																												if (pSVar3 != null) {

																												pSVar3.set_Item((Il2CppObject *)"checkMark", (object)pGVar4);
																												pSVar3 = (Dictionary<object, object>)*ppSVar1;
																												pGVar4 = GisketchTheme.ControlStyle("switch", "clear", 42.0);
																												if (pSVar3 != null) {

																												pSVar3.set_Item((Il2CppObject *)"switch", (object)pGVar4);
																												if ((Dictionary<object, object>)*ppSVar1 !=null) {
																													pGVar4 = (*ppSVar1).get_Item((Il2CppObject *)"switch");
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar5 = new GisketchLength();
																												if (pGVar5 != null) {
																													pGVar5.value = 58.0;
																													pGVar5.unit = "point";
																													if (pGVar4 != null) {
																													pGVar4.width = pGVar5;
																													pSVar3 = (Dictionary<object, object>)*ppSVar1;
																												pGVar4 = GisketchTheme.ControlStyle("switchTrack", "engravedBg", 26.0);
																												if (pSVar3 != null) {

																												pSVar3.set_Item((Il2CppObject *)"switchTrack", (object)pGVar4);
																												if ((Dictionary<object, object>)*ppSVar1 !=null) {
																													pGVar4 = (*ppSVar1).get_Item((Il2CppObject *)"switchTrack");
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar5 = new GisketchLength();
																												if (pGVar5 != null) {
																													pGVar5.value = 52.0;
																													pGVar5.unit = "point";
																													if (pGVar4 != null) {
																													pGVar4.width = pGVar5;
																													pSVar3 = (Dictionary<object, object>)*ppSVar1;
																												pGVar4 = GisketchTheme.ButtonStyle("switchThumb", "surfaceSoft", "header", 400, 1.0, 22.0);
																												if (pSVar3 != null) {

																												pSVar3.set_Item((Il2CppObject *)"switchThumb", (object)pGVar4);
																												if ((Dictionary<object, object>)*ppSVar1 !=null) {
																													pGVar4 = (*ppSVar1).get_Item((Il2CppObject *)"switchThumb");
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar5 = new GisketchLength();
																												if (pGVar5 != null) {
																													pGVar5.value = 22.0;
																													pGVar5.unit = "point";
																													if (pGVar4 != null) {
																													pGVar4.width = pGVar5;
																													pSVar3 = (Dictionary<object, object>)*ppSVar1;
																												pGVar4 = GisketchTheme.TextStyle("controlLabel", "text", "text", 400, 19.0);
																												if (pSVar3 != null) {
																													pMVar6 = (MethodInfo *)"controlLabel";

																												pSVar3.set_Item((Il2CppObject *)"controlLabel", (object)pGVar4);
																												__this_00 = local_38;
																												local_38.AddToastDefaults();
																												__this_00.AddMainMenuDefaults();
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

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x5237530", Offset = "0x5236530", VA = "0x5237530")]
	private void AddToastDefaults()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$AddToastDefaults): 4 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		GisketchStyleDefinition pGVar2;
		GisketchLength pGVar3;
		Nullable<bool>[] local_68 = new Nullable<bool>[4];
		Nullable<bool>[] local_60 = new Nullable<bool>[4];
		Nullable<bool>[] local_58 = new Nullable<bool>[4];
		Nullable<float> local_50;
		Nullable<float> local_48;
		Nullable<float> local_40;
		Nullable<float> local_38;

		pSVar1 = (Dictionary<object, object>)this._styles;
		pGVar2 = new GisketchStyleDefinition();
		if (pGVar2 != null) {
			pGVar2.name = "toast";
			pGVar2.background = "surface";
			pGVar3 = new GisketchLength();
			if (pGVar3 != null) {
				pGVar3.value = 520.0;
				pGVar3.unit = "point";
				pGVar2.width = pGVar3;
				pGVar2.motion = "balloon";
				local_58[0].hasValue = false;
				local_58[0].value = false;
				local_58 = new Nullable<bool>(true);
				pGVar2.textured = local_58[0];
				local_60[0].hasValue = false;
				local_60[0].value = false;
				local_60 = new Nullable<bool>(true);
				pGVar2.worn = local_60[0];
				local_38.hasValue = false;
				local_38._1_3_ = 0;
				local_38.value = 0.0;
				local_38 = new Nullable<float>(4.0);
				pGVar2.wornStainScale = local_38;
				local_40.hasValue = false;
				local_40._1_3_ = 0;
				local_40.value = 0.0;
				local_40 = new Nullable<float>(1.0);
				pGVar2.relief = local_40;
				local_68[0].hasValue = false;
				local_68[0].value = false;
				local_68 = new Nullable<bool>(true);
				pGVar2.shadow = local_68[0];
				if (pSVar1 != null) {
					pSVar1.set_Item((Il2CppObject *)"toast", (object)pGVar2);
					pSVar1 = (Dictionary<object, object>)this._styles;
					pGVar2 = new GisketchStyleDefinition();
					if (pGVar2 != null) {
						pGVar2.name = "toastContentPanel";
						pGVar2.background = "clear";
						local_48.hasValue = false;
						local_48._1_3_ = 0;
						local_48.value = 0.0;
						local_48 = new Nullable<float>(12.0);
						pGVar2.padding = local_48;
						local_50.hasValue = false;
						local_50._1_3_ = 0;
						local_50.value = 0.0;
						local_50 = new Nullable<float>(6.0);
						pGVar2.gap = local_50;
						if (pSVar1 != null) {
							pSVar1.set_Item((Il2CppObject *)"toastContentPanel", (object)pGVar2);
							pSVar1 = (Dictionary<object, object>)this._styles;
							pGVar2 = GisketchTheme.TextStyle("toastTitle", "text", "header", 400, 22.0);
							if (pSVar1 != null) {
								pSVar1.set_Item((Il2CppObject *)"toastTitle", (object)pGVar2);
								pSVar1 = (Dictionary<object, object>)this._styles;
								pGVar2 = GisketchTheme.TextStyle("toastContent", "textMuted", "text", 400, 18.0);
								if (pSVar1 != null) {
									pSVar1.set_Item((Il2CppObject *)"toastContent", (object)pGVar2);
									pSVar1 = (Dictionary<object, object>)this._styles;
									pGVar2 = GisketchTheme.ButtonStyle("toastCloseButton", "primary", "header", 400, 1.0, 34.0);
									if (pSVar1 != null) {
										pSVar1.set_Item((Il2CppObject *)"toastCloseButton", (object)pGVar2);
										pSVar1 = (Dictionary<object, object>)this._styles ;
										if (pSVar1 != null) {
											pGVar2 = pSVar1.get_Item((Il2CppObject *)"toastCloseButton");
											pGVar3 = new GisketchLength();
											if (pGVar3 != null) {
												pGVar3.value = 34.0;
												pGVar3.unit = "point";
												if (pGVar2 != null) {
													pGVar2.width = pGVar3;
													this.AddToastVariant("Error", "destructive", "destructive");
													this.AddToastVariant("Warning", "warning", "warning");
													this.AddToastVariant("Information", "negative", "negative");
													this.AddToastVariant("Workshop", "workshop", "workshop");
													this.AddToastVariant("Success", "success", "success");
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x523C5C0", Offset = "0x523B5C0", VA = "0x523C5C0")]
	private void AddToastVariant(string suffix, string border, string icon)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$AddToastVariant): clean
		Dictionary<object, object> pSVar1;
		String pSVar2;
		GisketchStyleDefinition pGVar3;
		String pSVar4;
		GisketchLength pGVar5;

		pSVar1 = (Dictionary<object, object>)this._styles;
		pSVar2 = String.Concat("toastBorder", suffix);
		pGVar3 = new GisketchStyleDefinition();
		pSVar4 = String.Concat("toastBorder", suffix);
		if (pGVar3 != null) {
			pGVar3.name = pSVar4;
			pGVar3.background = border;
			pGVar5 = new GisketchLength();
			if (pGVar5 != null) {
				pGVar5.value = 6.0;
				pGVar5.unit = "point";
				pGVar3.width = pGVar5;
				pGVar5 = new GisketchLength();
				if (pGVar5 != null) {
					pGVar5.value = 100.0;
					pGVar5.unit = "percent";
					pGVar3.height = pGVar5;
					if (pSVar1 != null) {
						pSVar1.set_Item((object)pSVar2, (object)pGVar3) ;
						pSVar1 = (Dictionary<object, object>)this._styles;
						pSVar2 = String.Concat("toastIcon", suffix);
						pSVar4 = String.Concat("toastIcon", suffix);
						pGVar3 = GisketchTheme.IconStyle(pSVar4, icon, 24.0);
						if (pSVar1 != null) {
							pSVar1.set_Item((object)pSVar2, (object)pGVar3);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x5236E90", Offset = "0x5235E90", VA = "0x5236E90")]
	private static GisketchStyleDefinition CopyInputStyle(string name, float height)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$CopyInputStyle): 5 lines keep C-only constructs
		GisketchStyleDefinition __this;
		GisketchLength pGVar1;
		Nullable<bool>[] local_60 = new Nullable<bool>[4];
		Nullable<bool>[] local_58 = new Nullable<bool>[2];
		float local_54;
		Nullable<float> local_50;
		Nullable<float> local_48;
		Nullable<float> local_40;
		Nullable<float> local_38;
		Nullable<int> local_30;

		local_54 = height;
		__this = new GisketchStyleDefinition();
		if (__this != null) {
			__this.name = name;
			__this.background = "engravedBg";
			__this.textColor = "text";
			__this.fontFamily = "text";
			local_30.hasValue = false;
			local_30._1_3_ = 0;
			local_30.value = 0;
			local_30 = new Nullable<int>(400);
			__this.fontWeight = local_30;
			local_38.hasValue = false;
			local_38._1_3_ = 0;
			local_38.value = 0.0;
			local_38 = new Nullable<float>(19.0);
			__this.fontSize = local_38;
			local_40.hasValue = false;
			local_40._1_3_ = 0;
			local_40.value = 0.0;
			local_40 = new Nullable<float>(12.0);
			__this.padding = local_40;
			pGVar1 = new GisketchLength();
			if (pGVar1 != null) {
				pGVar1.value = 280.0;
				pGVar1.unit = "point";
				__this.width = pGVar1;
				pGVar1 = new GisketchLength();
				if (pGVar1 != null) {
					pGVar1.value = local_54;
					pGVar1.unit = "point";
					__this.height = pGVar1;
					local_58[0].hasValue = false;
					local_58[0].value = false;
					local_58 = new Nullable<bool>(true);
					__this.textured = local_58[0];
					local_60[0].hasValue = false;
					local_60[0].value = false;
					local_60 = new Nullable<bool>(true);
					__this.worn = local_60[0];
					local_48.hasValue = false;
					local_48._1_3_ = 0;
					local_48.value = 0.0;
					local_48 = new Nullable<float>(4.0);
					__this.wornStainScale = local_48;
					local_50.hasValue = false;
					local_50._1_3_ = 0;
					local_50.value = 0.0;
					local_50 = new Nullable<float>(-1.0);
					__this.relief = local_50;
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x5236800", Offset = "0x5235800", VA = "0x5236800")]
	private static GisketchStyleDefinition ControlStyle(string name, string background, float height)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$ControlStyle): 2 lines keep C-only constructs
		bool bVar1;
		GisketchStyleDefinition __this;
		GisketchLength __this_00;
		float value;
		Nullable<bool>[] local_40 = new Nullable<bool>[4];
		Nullable<bool>[] local_38 = new Nullable<bool>[4];
		Nullable<float> local_30;
		float local_24;

		local_24 = height;
		__this = new GisketchStyleDefinition();
		if (__this == null) {
	label_05336a81: ;
			throw new NullReferenceException();
		}
		__this.name = name;
		__this.background = background;
		__this_00 = new GisketchLength();
		if (__this_00 == null) goto label_05336a81;
		__this_00.value = local_24;
		__this_00.unit = "point";
		__this.height = __this_00;
		bVar1 = (background != "clear");
		local_38[0].hasValue = false;
		local_38[0].value = false;
		local_38 = new Nullable<bool>(bVar1);
		__this.textured = local_38[0];
		local_40[0].hasValue = false;
		local_40[0].value = false;
		local_40 = new Nullable<bool>(true);
		__this.worn = local_40[0];
		local_30.hasValue = false;
		local_30._1_3_ = 0;
		local_30.value = 0.0;
		local_30 = new Nullable<float>(4.0);
		__this.wornStainScale = local_30;
		bVar1 = (background == "inputBg");
		if (!bVar1) {
			bVar1 = (background == "engravedBg");
			value = 0.0;
			if (!bVar1) goto label_05336a38;
		}
		value = -1.0;
	label_05336a38: ;
		local_30.hasValue = false;
		local_30._1_3_ = 0;
		local_30.value = 0.0;
		local_30 = new Nullable<float>(value);
		__this.relief = local_30;
		return __this;
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x5236630", Offset = "0x5235630", VA = "0x5236630")]
	private static GisketchStyleDefinition IconStyle(string name, string color, float size)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$IconStyle): clean
		GisketchStyleDefinition __this;
		GisketchLength pGVar1;

		__this = new GisketchStyleDefinition();
		if (__this != null) {
			__this.name = name;
			__this.textColor = color;
			pGVar1 = new GisketchLength();
			if (pGVar1 != null) {
				pGVar1.value = size;
				pGVar1.unit = "point";
				__this.width = pGVar1;
				pGVar1 = new GisketchLength();
				if (pGVar1 != null) {
					pGVar1.value = size;
					pGVar1.unit = "point";
					__this.height = pGVar1;
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x5236B20", Offset = "0x5235B20", VA = "0x5236B20")]
	private static GisketchStyleDefinition DropdownItemStyle(string name = "dropdownItem", bool leftAligned = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$DropdownItemStyle): 3 lines keep C-only constructs
		GisketchStyleDefinition __this;
		GisketchLength __this_00;
		String pSVar1;
		Nullable<float> local_38;
		Nullable<float> local_30;
		Nullable<int> local_28;

		__this = new GisketchStyleDefinition();
		if (__this != null) {
			__this.name = name;
			__this.background = "clear";
			__this.textColor = "text";
			__this.fontFamily = "text";
			local_28.hasValue = false;
			local_28._1_3_ = 0;
			local_28.value = 0;
			local_28 = new Nullable<int>(400);
			__this.fontWeight = local_28;
			local_30.hasValue = false;
			local_30._1_3_ = 0;
			local_30.value = 0.0;
			local_30 = new Nullable<float>(20.0);
			__this.fontSize = local_30;
			__this_00 = new GisketchLength();
			if (__this_00 != null) {
				__this_00.value = 38.0;
				__this_00.unit = "point";
				__this.height = __this_00;
				local_38.hasValue = false;
				local_38._1_3_ = 0;
				local_38.value = 0.0;
				local_38 = new Nullable<float>(12.0);
				__this.paddingX = local_38;
				if (leftAligned) {
					pSVar1 = "left";
				}
				else {
					pSVar1 = null;
				}
				__this.textAlignment = pSVar1;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x52374A0", Offset = "0x52364A0", VA = "0x52374A0")]
	private static GisketchLength Percent(float value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$Percent): clean
		GisketchLength __this;

		__this = new GisketchLength();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.value = value;
		__this.unit = "percent";
		return __this;
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x523C850", Offset = "0x523B850", VA = "0x523C850")]
	private void AddChangelogDefaults()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$AddChangelogDefaults): 4 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		GisketchStyleDefinition pGVar2;
		GisketchLength pGVar3;

		pSVar1 = (Dictionary<object, object>)this._styles;
		pGVar2 = GisketchTheme.TextStyle("changelogSectionHeader", "text", "header", 400, 32.0);
		if (pSVar1 != null) {
			pSVar1.set_Item((Il2CppObject *)"changelogSectionHeader", (object)pGVar2);
			pSVar1 = (Dictionary<object, object>)this._styles;
			if (pSVar1 != null) {
				pGVar2 = pSVar1.get_Item((Il2CppObject *)"changelogSectionHeader");
				if (pGVar2 != null) {
					pGVar2.textAlignment = "left";
					pSVar1 = (Dictionary<object, object>)this._styles;
					pGVar2 = GisketchTheme.TextStyle("changelogMarkdownHeader", "text", "header", 400, 30.0);
					if (pSVar1 != null) {
						pSVar1.set_Item((Il2CppObject *)"changelogMarkdownHeader", (object)pGVar2) ;
						pSVar1 = (Dictionary<object, object>)this._styles;
						if (pSVar1 != null) {
							pGVar2 = pSVar1.get_Item((Il2CppObject *)"changelogMarkdownHeader");
							if (pGVar2 != null) {
								pGVar2.textAlignment = "left";
								pSVar1 = (Dictionary<object, object>)this._styles;
								pGVar2 = GisketchTheme.TextStyle("changelogPreviewVersion", "text", "text", 700, 22.0);
								if (pSVar1 != null) {
									pSVar1.set_Item((Il2CppObject *)"changelogPreviewVersion", (object)pGVar2);
									pSVar1 = (Dictionary<object, object>)this._styles;
									if (pSVar1 != null) {
										pGVar2 = pSVar1.get_Item((Il2CppObject *)"changelogPreviewVersion");
										pGVar3 = new GisketchLength();
										if (pGVar3 != null) {
											pGVar3.value = 100.0;
											pGVar3.unit = "percent";
											if (pGVar2 != null) {
												pGVar2.width = pGVar3;
												pSVar1 = (Dictionary<object, object>)this._styles;
												pGVar2 = GisketchTheme.TextStyle("changelogPreviewMeta", "textMuted", "text", 400, 20.0);
												if (pSVar1 != null) {
													pSVar1.set_Item((Il2CppObject *)"changelogPreviewMeta", (object)pGVar2);
													pSVar1 = (Dictionary<object, object>)this._styles;
													if (pSVar1 != null) {
														pGVar2 = pSVar1.get_Item((Il2CppObject *)"changelogPreviewMeta");
														if (pGVar2 != null) {
															pGVar2.textAlignment = "left";
															pSVar1 = (Dictionary<object, object>)this._styles;
															if (pSVar1 != null) {
																pGVar2 = pSVar1.get_Item((Il2CppObject *)"changelogPreviewMeta");
																pGVar3 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																pGVar3 = new GisketchLength();
																if (pGVar3 != null) {
																	pGVar3.value = 100.0;
																	pGVar3.unit = "percent";
																	if (pGVar2 != null) {
																		pGVar2.width = pGVar3;
																		pSVar1 = (Dictionary<object, object>)this._styles;
																		pGVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition)) ;
																		pGVar2 = new GisketchStyleDefinition();
																		if (pGVar2 != null) {
																			pGVar2.name = "changelogPreviewIcon";
																			pGVar2.textColor = "text";
																			pGVar3 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																			pGVar3 = new GisketchLength();
																			if (pGVar3 != null) {
																				pGVar3.value = 32.0;
																				pGVar3.unit = "points";
																				pGVar2.width = pGVar3;
																				pGVar3 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																				pGVar3 = new GisketchLength();
																				if (pGVar3 != null) {
																					pGVar3.value = 32.0;
																					pGVar3.unit = "points";
																					pGVar2.height = pGVar3;
																					if (pSVar1 != null) {
																						pSVar1.set_Item((Il2CppObject *)"changelogPreviewIcon", (object)pGVar2);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x523CD70", Offset = "0x523BD70", VA = "0x523CD70")]
	private void AddDefaults()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$AddDefaults): 106 lines keep C-only constructs
		GisketchTheme pGVar1;
		Dictionary<string, GisketchStyleDefinition>* ppSVar2;
		Dictionary<string, Color> pSVar3;
		Dictionary<object, object> pSVar4;
		GisketchTheme pGVar5;
		GisketchMotionToken __this_00;
		GisketchStyleDefinition pGVar6;
		GisketchLength pGVar7;
		MethodInfo method_03;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		Color value;
		Color value_00;
		Color value_01;
		Color value_02;
		Color value_03;
		Color value_04;
		Color value_05;
		Color value_06;
		Color value_07;
		Color value_08;
		Color UVar8;
		Color value_09;
		Color value_10;
		Color value_11;
		Color value_12;
		Color value_13;
		Color value_14;
		Color value_15;
		Color value_16;
		Color value_17;
		Color value_18;
		Nullable<bool>[] local_280 = new Nullable<bool>[4];
		Nullable<bool>[] local_278 = new Nullable<bool>[4];
		Nullable<bool>[] local_270 = new Nullable<bool>[4];
		Nullable<bool>[] local_268 = new Nullable<bool>[4];
		Nullable<bool>[] local_260 = new Nullable<bool>[4];
		Nullable<bool>[] local_258 = new Nullable<bool>[4];
		Nullable<bool>[] local_250 = new Nullable<bool>[4];
		Nullable<bool>[] local_248 = new Nullable<bool>[4];
		Nullable<bool>[] local_240 = new Nullable<bool>[4];
		Nullable<bool>[] local_238 = new Nullable<bool>[4];
		Nullable<bool>[] local_230 = new Nullable<bool>[4];
		Nullable<bool>[] local_228 = new Nullable<bool>[4];
		Nullable<bool>[] local_220 = new Nullable<bool>[4];
		Nullable<bool>[] local_218 = new Nullable<bool>[4];
		Nullable<bool>[] local_210 = new Nullable<bool>[4];
		Nullable<bool>[] local_208 = new Nullable<bool>[4];
		Nullable<bool>[] local_200 = new Nullable<bool>[4];
		Nullable<bool>[] local_1f8 = new Nullable<bool>[4];
		Nullable<bool>[] local_1f0 = new Nullable<bool>[4];
		Nullable<bool>[] local_1e8 = new Nullable<bool>[4];
		Nullable<bool>[] local_1e0 = new Nullable<bool>[4];
		Nullable<bool>[] local_1d8 = new Nullable<bool>[4];
		GisketchTheme local_1d0;
		Nullable<float> local_1c8;
		Nullable<float> local_1c0;
		Nullable<float> local_1b8;
		Nullable<float> local_1b0;
		Nullable<int> local_1a8;
		Nullable<float> local_1a0;
		Nullable<float> local_198;
		Nullable<float> local_190;
		Nullable<int> local_188;
		Nullable<float> local_180;
		Nullable<float> local_178;
		Nullable<float> local_170;
		Nullable<float> local_168;
		Nullable<float> local_160;
		Nullable<float> local_158;
		Nullable<float> local_150;
		Nullable<float> local_148;
		Nullable<float> local_140;
		Nullable<float> local_138;
		Nullable<float> local_130;
		Nullable<float> local_128;
		Nullable<float> local_120;
		Nullable<float> local_118;
		Nullable<float> local_110;
		Nullable<float> local_108;
		Nullable<float> local_100;
		Nullable<float> local_f8;
		Nullable<float> local_f0;
		Nullable<float> local_e8;
		Nullable<float> local_e0;
		Nullable<float> local_d8;
		Nullable<float> local_d0;
		Nullable<float> local_c8;
		Nullable<float> local_c0;
		Nullable<float> local_b8;
		Nullable<float> local_b0;
		Nullable<float> local_a8;
		Nullable<float> local_a0;
		Nullable<float> local_98;
		Nullable<float> local_90;
		Nullable<float> local_88;
		Nullable<float> local_80;
		Nullable<float> local_78;
		Nullable<float> local_70;
		Nullable<float> local_68;
		Nullable<int> local_60;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];

		pSVar3 = this._colors;
		if (pSVar3 != null) {
			pGVar1 = &this.fields;
			pSVar3.set_Item((Il2CppObject *)"clear", (Color)ZEXT416(0));
			if (pGVar1._colors != null) {
				UVar8.b = 0.2;
				UVar8.a = 1.0;
				UVar8.r = 0.71;
				UVar8.g = 0.18;
				(pGVar1._colors).set_Item((Il2CppObject *)"primary", UVar8) ;
				if (pGVar1._colors != null) {
					value.b = 0.13;
					value.a = 1.0;
					value.r = 0.84;
					value.g = 0.1;
					(pGVar1._colors).set_Item((Il2CppObject *)"destructive", value);
					if (pGVar1._colors != null) {
						value_00.b = 0.65;
						value_00.a = 1.0;
						value_00.r = 0.44;
						value_00.g = 0.29;
						(pGVar1._colors).set_Item((Il2CppObject *)"secondary", value_00);
						if (pGVar1._colors != null) {
							value_01.b = 0.82;
							value_01.a = 1.0;
							value_01.r = 0.0;
							value_01.g = 0.68;
							(pGVar1._colors).set_Item((Il2CppObject *)"workshop", value_01);
							if (pGVar1._colors != null) {
								value_02.b = 0.08;
								value_02.a = 1.0;
								value_02.r = 0.92;
								value_02.g = 0.64;
								(pGVar1._colors).set_Item((Il2CppObject *)"warning", value_02);
								if (pGVar1._colors != null) {
									value_03.b = 0.32;
									value_03.a = 1.0;
									value_03.r = 0.12;
									value_03.g = 0.62;
									(pGVar1._colors).set_Item((Il2CppObject *)"success", value_03);
									if (pGVar1._colors != null) {
										value_04.b = 0.12;
										value_04.a = 0.86;
										value_04.r = 1.0;
										value_04.g = 0.66;
										(pGVar1._colors).set_Item((Il2CppObject *)"settingsDirty", value_04);
										if (pGVar1._colors != null) {
											value_05.b = 1.0;
											value_05.a = 1.0;
											value_05.r = 1.0;
											value_05.g = 1.0;
											(pGVar1._colors).set_Item((Il2CppObject *)"surface", value_05);
											if (pGVar1._colors != null) {
												value_06.b = 0.95;
												value_06.a = 1.0;
												value_06._0_8_ = 0x3f7333333f733333;
												(pGVar1._colors).set_Item((Il2CppObject *)"surfaceSoft", value_06);
												if (pGVar1._colors != null) {
													value_07.b = 0.02;
													value_07.a = 1.0;
													value_07.r = 0.02;
													value_07.g = 0.02;
													(pGVar1._colors).set_Item((Il2CppObject *)"text", value_07);
													if (pGVar1._colors != null) {
														value_08.b = 0.2;
														value_08.a = 1.0;
														value_08.r = 0.2;
														value_08.g = 0.2;
														(pGVar1._colors).set_Item((Il2CppObject *)"textMuted", value_08);
														pSVar3 = pGVar1._colors;
														if (pSVar3 != null) {
															UVar8 = pSVar3.get_Item((Il2CppObject *)"text");
															local_48._8_4_ = extraout_XMM0_Dc;
															local_48._0_8_ = UVar8._0_8_;
															local_48._12_4_ = extraout_XMM0_Dd;
															if (pGVar1._colors !=null) {
																UVar8 = (pGVar1._colors).get_Item((Il2CppObject *)"text");
																local_58._8_4_ = extraout_XMM0_Dc_00;
																local_58._0_8_ = UVar8._0_8_;
																local_58._12_4_ = extraout_XMM0_Dd_00;
																if (pGVar1._colors !=null) {
																	UVar8 = (pGVar1._colors).get_Item((Il2CppObject *)"text");
																	value_09.b = UVar8.b;
																	value_09.a = 0.75;
																	value_09.g = (float)local_58._4_4_;
																	value_09.r = (float)local_48._0_4_;
																	pSVar3.set_Item((Il2CppObject *)"settingInfoIcon", value_09);
																	if (pGVar1._colors !=null) {
																		value_10.b = 1.0;
																		value_10.a = 1.0;
																		value_10.r = 1.0;
																		value_10.g = 1.0;
																		(pGVar1._colors).set_Item((Il2CppObject *)"buttonText", value_10);
																		if (pGVar1._colors !=null) {
																			(pGVar1._colors).set_Item((Il2CppObject *)"negative", (Color)(ZEXT816(0x3f80000000000000) << 0x40));
																			if (pGVar1._colors !=null) {
																				value_11.b = 1.0;
																				value_11.a = 1.0;
																				value_11.r = 1.0;
																				value_11.g = 1.0;
																				(pGVar1._colors).set_Item((Il2CppObject *)"negativeText", value_11);
																				if (pGVar1._colors !=null) {
																					value_12.b = 0.94;
																					value_12.a = 1.0;
																					value_12.r = 0.94;
																					value_12.g = 0.94;
																					(pGVar1._colors).set_Item((Il2CppObject *)"inputBg", value_12);
																					if (pGVar1._colors !=null) {
																						value_13.b = 0.85;
																						value_13.a = 1.0;
																						value_13.r = 0.85;
																						value_13.g = 0.85;
																						(pGVar1._colors).set_Item((Il2CppObject *)"engravedBg", value_13);
																						if (pGVar1._colors !=null) {
																							value_14.b = 0.42;
																							value_14.a = 1.0;
																							value_14.r = 0.42;
																							value_14.g = 0.42;
																							(pGVar1._colors).set_Item((Il2CppObject *)"inputPlaceholder", value_14);
																							pSVar3 = pGVar1._colors;
																							if (pSVar3 != null) {
																								UVar8 = pSVar3.get_Item((Il2CppObject *)"primary");
																								pSVar3.set_Item((Il2CppObject *)"focusRing", UVar8);
																								if (pGVar1._colors !=(Dictionary<string, Color>)0x0) {
																									value_15.b = 0.02;
																									value_15.a = 0.96;
																									value_15.r = 0.02;
																									value_15.g = 0.02;
																									(pGVar1._colors).set_Item((Il2CppObject *)"tooltipBg", value_15);
																									if (pGVar1._colors !=(Dictionary<string, Color>)0x0) {
																										value_16.b = 1.0;
																										value_16.a = 1.0;
																										value_16.r = 1.0;
																										value_16.g = 1.0;
																										(pGVar1._colors).set_Item((Il2CppObject *)"tooltipText", value_16);
																										if (pGVar1._colors !=null) {
																											(pGVar1._colors).set_Item((Il2CppObject *)"void", (Color)(ZEXT816(0x3f80000000000000) << 0x40));
																											if (pGVar1._colors !=null) {
																												(pGVar1._colors).set_Item((Il2CppObject *)"brushSidePanelOutline", (Color)(ZEXT816(0x3f80000000000000) << 0x40));
																												pSVar3 = pGVar1._colors;
																												if (pSVar3 != null) {
																													UVar8 = pSVar3.get_Item((Il2CppObject *)"surface");
																												pSVar3.set_Item((Il2CppObject *)"paper", UVar8);
																												pSVar3 = pGVar1._colors;
																												if (pSVar3 != null) {
																													UVar8 = pSVar3.get_Item((Il2CppObject *)"surface");
																												pSVar3.set_Item((Il2CppObject *)"panel", UVar8);
																												pSVar3 = pGVar1._colors;
																												if (pSVar3 != null) {
																													UVar8 = pSVar3.get_Item((Il2CppObject *)"surfaceSoft");
																												pSVar3.set_Item((Il2CppObject *)"panelSoft", UVar8);
																												pSVar3 = pGVar1._colors;
																												if (pSVar3 != null) {
																													UVar8 = pSVar3.get_Item((Il2CppObject *)"text");
																												pSVar3.set_Item((Il2CppObject *)"ink", UVar8);
																												pSVar3 = pGVar1._colors;
																												if (pSVar3 != null) {
																													UVar8 = pSVar3.get_Item((Il2CppObject *)"textMuted");
																												pSVar3.set_Item((Il2CppObject *)"muted", UVar8);
																												pSVar3 = pGVar1._colors;
																												if (pSVar3 != null) {
																													UVar8 = pSVar3.get_Item((Il2CppObject *)"engravedBg");
																												pSVar3.set_Item((Il2CppObject *)"profileCardAvatarBg", UVar8);
																												pSVar3 = pGVar1._colors;
																												if (pSVar3 != null) {
																													UVar8 = pSVar3.get_Item((Il2CppObject *)"surfaceSoft");
																												pSVar3.set_Item((Il2CppObject *)"profileCardAvatarBorder", UVar8);
																												pSVar3 = pGVar1._colors;
																												if (pSVar3 != null) {
																													UVar8 = pSVar3.get_Item((Il2CppObject *)"engravedBg");
																												pSVar3.set_Item((Il2CppObject *)"profileCardBannerBg", UVar8);
																												if (pGVar1._colors !=null) {
																													value_17.b = 0.72;
																													value_17.a = 1.0;
																													value_17.r = 0.72;
																													value_17.g = 0.72;

																												(pGVar1._colors).set_Item((Il2CppObject *)"skeletonBase", value_17);
																												if (pGVar1._colors !=null) {
																													value_18.b = 0.82;
																													value_18.a = 1.0;
																													value_18.r = 0.82;
																													value_18.g = 0.82;

																												(pGVar1._colors).set_Item((Il2CppObject *)"skeletonPulse", value_18);
																												pSVar3 = pGVar1._colors;
																												if (pSVar3 != null) {
																													UVar8 = pSVar3.get_Item((Il2CppObject *)"primary");
																												pSVar3.set_Item((Il2CppObject *)"accent", UVar8);
																												pSVar3 = pGVar1._colors;
																												if (pSVar3 != null) {
																													UVar8 = pSVar3.get_Item((Il2CppObject *)"secondary");
																												pSVar3.set_Item((Il2CppObject *)"accent2", UVar8);
																												pSVar4 = (Dictionary<object, object>)this._motions;
																												__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchMotionToken));
																												__this_00 = new GisketchMotionToken();
																												if (__this_00 !=null ) {
																													__this_00.name = "screenSlide";
																													__this_00.preset = "slide";
																													__this_00.duration = 0.053;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"screenSlide", (object)__this_00);
																												pSVar4 = (Dictionary<object, object>)this._styles;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "default";
																													pGVar6.background = "clear";
																													pGVar6.textColor = "text";
																													pGVar6.fontFamily = "text";
																													local_60.hasValue = false;
																													local_60._1_3_ = 0;
																													local_60.value = 0;
																													local_60 = new Nullable<int>(400);
																													pGVar6.fontWeight = local_60;
																													local_68.hasValue = false;
																													local_68._1_3_ = 0;
																													local_68.value = 0.0;
																													local_68 = new Nullable<float>(24.0);
																													pGVar6.fontSize = local_68;
																													if (pSVar4 != null) {
																													ppSVar2 = &this._styles;

																												pSVar4.set_Item((Il2CppObject *)"default", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "tooltip";
																													pGVar6.background = "tooltipBg";
																													local_70.hasValue = false;
																													local_70._1_3_ = 0;
																													local_70.value = 0.0;
																													local_70 = new Nullable<float>(8.0);
																													pGVar6.padding = local_70;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"tooltip", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												local_1d0 = this;
																												if ((typeof(GisketchTheme). _2).cctor_finished_or_no_cctor == 0) {
																												}
																												pGVar6 = GisketchTheme.TextStyle("tooltipText", "tooltipText", "text", 500, 16.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"tooltipText", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "screen";
																													pGVar6.background = "surface";
																													local_78.hasValue = false;
																													local_78._1_3_ = 0;
																													local_78.value = 0.0;
																													local_78 = new Nullable<float>(44.0);
																													pGVar6.padding = local_78;
																													local_80.hasValue = false;
																													local_80._1_3_ = 0;
																													local_80.value = 0.0;
																													local_80 = new Nullable<float>(14.0);
																													pGVar6.gap = local_80;
																													pGVar6.motion = "screenSlide";
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"screen", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "screenFlush";
																													pGVar6.background = "surface";
																													local_88.hasValue = false;
																													local_88._1_3_ = 0;
																													local_88.value = 0.0;
																													local_88 = new Nullable<float>(0.0);
																													pGVar6.padding = local_88;
																													local_90.hasValue = false;
																													local_90._1_3_ = 0;
																													local_90.value = 0.0;
																													local_90 = new Nullable<float>(0.0);
																													pGVar6.gap = local_90;
																													pGVar6.motion = "screenSlide";
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"screenFlush", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "scrollView";
																													pGVar6.background = "clear";
																													local_98.hasValue = false;
																													local_98._1_3_ = 0;
																													local_98.value = 0.0;
																													local_98 = new Nullable<float>(0.0);
																													pGVar6.padding = local_98;
																													local_a0.hasValue = false;
																													local_a0._1_3_ = 0;
																													local_a0.value = 0.0;
																													local_a0 = new Nullable<float>(0.0);
																													pGVar6.gap = local_a0;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"scrollView", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "scrollbar";
																													pGVar6.background = "surfaceSoft";
																												pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar7 = new GisketchLength();
																												if (pGVar7 != null) {
																													pGVar7.value = 12.0;
																													pGVar7.unit = "point";
																													pGVar6.width = pGVar7;
																													local_1d8[0].hasValue = false;
																													local_1d8[0].value = false;
																													local_1d8 = new Nullable<bool>(true);
																													pGVar6.textured = local_1d8[0];
																													local_1e0[0].hasValue = false;
																													local_1e0[0].value = false;
																													local_1e0 = new Nullable<bool>(true);
																													pGVar6.worn = local_1e0[0];
																													local_a8.hasValue = false;
																													local_a8._1_3_ = 0;
																													local_a8.value = 0.0;
																													local_a8 = new Nullable<float>(4.0);
																													pGVar6.wornStainScale = local_a8;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"scrollbar", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "scrollbarThumb";
																													pGVar6.background = "primary";
																													local_1e8[0].hasValue = false;
																													local_1e8[0].value = false;
																													local_1e8 = new Nullable<bool>(true);
																													pGVar6.textured = local_1e8[0];
																													local_1f0[0].hasValue = false;
																													local_1f0[0].value = false;
																													local_1f0 = new Nullable<bool>(true);
																													pGVar6.worn = local_1f0[0];
																													local_b0.hasValue = false;
																													local_b0._1_3_ = 0;
																													local_b0.value = 0.0;
																													local_b0 = new Nullable<float>(1.0);
																													pGVar6.relief = local_b0;
																													local_1f8[0].hasValue = false;
																													local_1f8[0].value = false;
																													local_1f8 = new Nullable<bool>(true);
																													pGVar6.reliefGradient = local_1f8[0] ;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"scrollbarThumb", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "card";
																													pGVar6.background = "surface";
																													local_b8.hasValue = false;
																													local_b8._1_3_ = 0;
																													local_b8.value = 0.0;
																													local_b8 = new Nullable<float>(24.0);
																													pGVar6.padding = local_b8;
																													local_c0.hasValue = false;
																													local_c0._1_3_ = 0;
																													local_c0.value = 0.0;
																													local_c0 = new Nullable<float>(12.0);
																													pGVar6.gap = local_c0;
																												pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar7 = new GisketchLength();
																												if (pGVar7 != null) {
																													pGVar7.value = 760.0;
																													pGVar7.unit = "point";
																													pGVar6.width = pGVar7;
																													local_200[0].hasValue = false;
																													local_200[0].value = false;
																													local_200 = new Nullable<bool>(true);
																													pGVar6.textured = local_200[0];
																													local_208[0].hasValue = false;
																													local_208[0].value = false;
																													local_208 = new Nullable<bool>(true);
																													pGVar6.worn = local_208[0];
																													local_c8.hasValue = false;
																													local_c8._1_3_ = 0;
																													local_c8.value = 0.0;
																													local_c8 = new Nullable<float>(4.0);
																													pGVar6.wornStainScale = local_c8;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"card", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "row";
																													pGVar6.background = "surfaceSoft";
																													local_d0.hasValue = false;
																													local_d0._1_3_ = 0;
																													local_d0.value = 0.0;
																													local_d0 = new Nullable<float>(10.0);
																													pGVar6.padding = local_d0;
																													local_d8.hasValue = false;
																													local_d8._1_3_ = 0;
																													local_d8.value = 0.0;
																													local_d8 = new Nullable<float>(8.0);
																													pGVar6.gap = local_d8;
																													local_210[0].hasValue = false;
																													local_210[0].value = false;
																													local_210 = new Nullable<bool>(true);
																													pGVar6.textured = local_210[0];
																													local_218[0].hasValue = false;
																													local_218[0].value = false;
																													local_218 = new Nullable<bool>(true);
																													pGVar6.worn = local_218[0];
																													local_e0.hasValue = false;
																													local_e0._1_3_ = 0;
																													local_e0.value = 0.0;
																													local_e0 = new Nullable<float>(4.0);
																													pGVar6.wornStainScale = local_e0;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"row", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "skeleton";
																													pGVar6.background = "skeletonBase";
																													pGVar6.textColor = "skeletonPulse";
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"skeleton", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.TextStyle("header", "text", "header", 400, 44.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"header", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.TextStyle("settingLabel", "text", "text", 500, 20.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"settingLabel", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.TextStyle("settingStepperValue", "text", "text", 500, 20.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"settingStepperValue", (object)pGVar6);
																												if ((Dictionary<object, object>)*ppSVar2 !=null) {
																													pGVar6 = (*ppSVar2).get_Item((Il2CppObject *)"settingStepperValue");
																												if (pGVar6 != null) {
																													pGVar6.textAlignment = "center";
																													pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "settingInfoIcon";
																													pGVar6.background = "settingInfoIcon";
																												pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar7 = new GisketchLength();
																												if (pGVar7 != null) {
																													pGVar7.value = 24.0;
																													pGVar7.unit = "point";
																													pGVar6.width = pGVar7;
																												pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar7 = new GisketchLength();
																												if (pGVar7 != null) {
																													pGVar7.value = 24.0;
																													pGVar7.unit = "point";
																													pGVar6.height = pGVar7;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"settingInfoIcon", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "settingsDirtyStrip";
																													pGVar6.background = "settingsDirty";
																												pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar7 = new GisketchLength();
																												if (pGVar7 != null) {
																													pGVar7.value = 3.0;
																													pGVar7.unit = "point";
																													pGVar6.width = pGVar7;
																												pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar7 = new GisketchLength();
																												if (pGVar7 != null) {
																													pGVar7.value = 34.0;
																													pGVar7.unit = "point";
																													pGVar6.height = pGVar7;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"settingsDirtyStrip", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "settingsDirtyDot";
																													pGVar6.background = "settingsDirty";
																												pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar7 = new GisketchLength();
																												if (pGVar7 != null) {
																													pGVar7.value = 7.0;
																													pGVar7.unit = "point";
																													pGVar6.width = pGVar7;
																												pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar7 = new GisketchLength();
																												if (pGVar7 != null) {
																													pGVar7.value = 7.0;
																													pGVar7.unit = "point";
																													pGVar6.height = pGVar7;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"settingsDirtyDot", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.TextStyle("subtext", "textMuted", "subtext", 400, 24.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"subtext", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.TextStyle("text", "textMuted", "text", 400, 20.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"text", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "dialog";
																													pGVar6.background = "surface";
																													local_e8.hasValue = false;
																													local_e8._1_3_ = 0;
																													local_e8.value = 0.0;
																													local_e8 = new Nullable<float>(0.0);
																													pGVar6.padding = local_e8;
																													local_f0.hasValue = false;
																													local_f0._1_3_ = 0;
																													local_f0.value = 0.0;
																													local_f0 = new Nullable<float>(0.0);
																													pGVar6.gap = local_f0;
																												pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar7 = new GisketchLength();
																												if (pGVar7 != null) {
																													pGVar7.value = 620.0;
																													pGVar7.unit = "point";
																													pGVar6.width = pGVar7;
																													pGVar6.motion = "pop";
																													local_220[0].hasValue = false;
																													local_220[0].value = false;
																													local_220 = new Nullable<bool>(true);
																													pGVar6.textured = local_220[0];
																													local_228[0].hasValue = false;
																													local_228[0].value = false;
																													local_228 = new Nullable<bool>(true);
																													pGVar6.worn = local_228[0];
																													local_f8.hasValue = false;
																													local_f8._1_3_ = 0;
																													local_f8.value = 0.0;
																													local_f8 = new Nullable<float>(4.0);
																													pGVar6.wornStainScale = local_f8;
																													local_100.hasValue = false;
																													local_100._1_3_ = 0;
																													local_100.value = 0.0;
																													local_100 = new Nullable<float>(1.0);
																													pGVar6.relief = local_100;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"dialog", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "dialogHeader";
																													pGVar6.background = "clear";
																													local_108.hasValue = false;
																													local_108._1_3_ = 0;
																													local_108.value = 0.0;
																													local_108 = new Nullable<float>(0.0);
																													pGVar6.gap = local_108;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"dialogHeader", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "dialogBody";
																													pGVar6.background = "clear";
																													local_110.hasValue = false;
																													local_110._1_3_ = 0;
																													local_110.value = 0.0;
																													local_110 = new Nullable<float>(18.0);
																													pGVar6.padding = local_110;
																													local_118.hasValue = false;
																													local_118._1_3_ = 0;
																													local_118.value = 0.0;
																													local_118 = new Nullable<float>(8.0);
																													pGVar6.gap = local_118;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"dialogBody", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "dialogFooter";
																													pGVar6.background = "clear";
																													local_120.hasValue = false;
																													local_120._1_3_ = 0;
																													local_120.value = 0.0;
																													local_120 = new Nullable<float>(18.0);
																													pGVar6.padding = local_120;
																													local_128.hasValue = false;
																													local_128._1_3_ = 0;
																													local_128.value = 0.0;
																													local_128 = new Nullable<float>(8.0);
																													pGVar6.gap = local_128;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"dialogFooter", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.TextStyle("dialogTitle", "text", "header", 400, 34.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"dialogTitle", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "dialogTitleBar";
																													pGVar6.background = "primary";
																													local_130.hasValue = false;
																													local_130._1_3_ = 0;
																													local_130.value = 0.0;
																													local_130 = new Nullable<float>(18.0);
																													pGVar6.paddingX = local_130;
																													local_138.hasValue = false;
																													local_138._1_3_ = 0;
																													local_138.value = 0.0;
																													local_138 = new Nullable<float>(8.0);
																													pGVar6.paddingY = local_138;
																													local_140.hasValue = false;
																													local_140._1_3_ = 0;
																													local_140.value = 0.0;
																													local_140 = new Nullable<float>(8.0);
																													pGVar6.gap = local_140;
																													local_230[0].hasValue = false;
																													local_230[0].value = false;
																													local_230 = new Nullable<bool>(true);
																													pGVar6.textured = local_230[0];
																													local_238[0].hasValue = false;
																													local_238[0].value = false;
																													local_238 = new Nullable<bool>(true);
																													pGVar6.worn = local_238[0];
																													local_148.hasValue = false;
																													local_148._1_3_ = 0;
																													local_148.value = 0.0;
																													local_148 = new Nullable<float>(1.0);
																													pGVar6.relief = local_148;
																													local_240[0].hasValue = false;
																													local_240[0].value = false;
																													local_240 = new Nullable<bool>(true);
																													pGVar6.reliefGradient = local_240[0] ;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"dialogTitleBar", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.TextStyle("dialogTitleText", "buttonText", "header", 400, 26.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"dialogTitleText", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.TextStyle("dialogTitleTextQuiet", "text", "header", 400, 26.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"dialogTitleTextQuiet", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.TextStyle("dialogTitleTextNegative", "negativeText", "header", 400, 26.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"dialogTitleTextNegative", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.IconStyle("dialogTitleIcon", "buttonText", 24.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"dialogTitleIcon", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.IconStyle("dialogTitleIconQuiet", "text", 24.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"dialogTitleIconQuiet", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.IconStyle("dialogTitleIconNegative", "negativeText", 24.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"dialogTitleIconNegative", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.ButtonStyle("dialogTitleCloseButton", "primary", "header", 400, 22.0, 34.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"dialogTitleCloseButton", (object)pGVar6);
																												pGVar5 = local_1d0;
																												local_1d0.AddDialogVariant("Secondary", "secondary", "buttonText");
																												pGVar5.AddDialogVariant("Workshop", "workshop", "buttonText");
																												pGVar5.AddDialogVariant("Quiet", "surfaceSoft", "text");
																												pGVar5.AddDialogVariant("Danger", "destructive", "buttonText");
																												pGVar5.AddDialogVariant("Negative", "negative", "negativeText");
																												pSVar4 = (Dictionary<object, object>)pGVar5._styles;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "stepper";
																													pGVar6.background = "surfaceSoft";
																													local_150.hasValue = false;
																													local_150._1_3_ = 0;
																													local_150.value = 0.0;
																													local_150 = new Nullable<float>(10.0);
																													pGVar6.padding = local_150;
																													local_158.hasValue = false;
																													local_158._1_3_ = 0;
																													local_158.value = 0.0;
																													local_158 = new Nullable<float>(8.0);
																													pGVar6.gap = local_158;
																													local_248[0].hasValue = false;
																													local_248[0].value = false;
																													local_248 = new Nullable<bool>(true);
																													pGVar6.textured = local_248[0];
																													local_250[0].hasValue = false;
																													local_250[0].value = false;
																													local_250 = new Nullable<bool>(true);
																													pGVar6.worn = local_250[0];
																													local_160.hasValue = false;
																													local_160._1_3_ = 0;
																													local_160.value = 0.0;
																													local_160 = new Nullable<float>(4.0);
																													pGVar6.wornStainScale = local_160;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"stepper", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "popover";
																													pGVar6.background = "surface";
																													local_168.hasValue = false;
																													local_168._1_3_ = 0;
																													local_168.value = 0.0;
																													local_168 = new Nullable<float>(12.0);
																													pGVar6.padding = local_168;
																													local_170.hasValue = false;
																													local_170._1_3_ = 0;
																													local_170.value = 0.0;
																													local_170 = new Nullable<float>(8.0);
																													pGVar6.gap = local_170;
																												pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar7 = new GisketchLength();
																												if (pGVar7 != null) {
																													pGVar7.value = 420.0;
																													pGVar7.unit = "point";
																													pGVar6.width = pGVar7;
																													pGVar6.motion = "balloon";
																													local_258[0].hasValue = false;
																													local_258[0].value = false;
																													local_258 = new Nullable<bool>(true);
																													pGVar6.textured = local_258[0];
																													local_260[0].hasValue = false;
																													local_260[0].value = false;
																													local_260 = new Nullable<bool>(true);
																													pGVar6.worn = local_260[0];
																													local_178.hasValue = false;
																													local_178._1_3_ = 0;
																													local_178.value = 0.0;
																													local_178 = new Nullable<float>(4.0);
																													pGVar6.wornStainScale = local_178;
																													local_180.hasValue = false;
																													local_180._1_3_ = 0;
																													local_180.value = 0.0;
																													local_180 = new Nullable<float>(1.0);
																													pGVar6.relief = local_180;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"popover", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.ButtonStyle("buttonPrimary", "primary", "header", 400, 21.0, 42.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"buttonPrimary", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.ButtonStyle("buttonSecondary", "secondary", "header", 500, 20.0, 40.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"buttonSecondary", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.ButtonStyle("buttonWorkshop", "workshop", "header", 500, 20.0, 40.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"buttonWorkshop", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.ButtonStyle("buttonQuiet", "surfaceSoft", "header", 500, 20.0, 40.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"buttonQuiet", (object)pGVar6);
																												if ((Dictionary<object, object>)*ppSVar2 !=null) {
																													pGVar6 = (*ppSVar2).get_Item((Il2CppObject *)"buttonQuiet");
																												if (pGVar6 != null) {
																													pGVar6.textColor = "text";
																													pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "buttonHeaderTab";
																													pGVar6.background = "clear";
																													pGVar6.textColor = "text";
																													pGVar6.fontFamily = "header";
																													local_188.hasValue = false;
																													local_188._1_3_ = 0;
																													local_188.value = 0;
																													local_188 = new Nullable<int>(400);
																													pGVar6.fontWeight = local_188;
																													local_190.hasValue = false;
																													local_190._1_3_ = 0;
																													local_190.value = 0.0;
																													local_190 = new Nullable<float>(44.0);
																													pGVar6.fontSize = local_190;
																													pGVar6.textAlignment = "left";
																													local_198.hasValue = false;
																													local_198._1_3_ = 0;
																													local_198.value = 0.0;
																													local_198 = new Nullable<float>(0.0);
																													pGVar6.paddingX = local_198;
																												pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar7 = new GisketchLength();
																												if (pGVar7 != null) {
																													pGVar7.value = 72.0;
																													pGVar7.unit = "point";
																													pGVar6.height = pGVar7;
																													local_268[0].hasValue = false;
																													local_268[0].value = false;
																													local_268 = new Nullable<bool>(false);
																													pGVar6.textured = local_268[0];
																													local_270[0].hasValue = false;
																													local_270[0].value = false;
																													local_270 = new Nullable<bool>(false);
																													pGVar6.worn = local_270[0];
																													local_1a0.hasValue = false;
																													local_1a0._1_3_ = 0;
																													local_1a0.value = 0.0;
																													local_1a0 = new Nullable<float>(0.0);
																													pGVar6.relief = local_1a0;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"buttonHeaderTab", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.ButtonStyle("buttonPlain", "paper", "header", 500, 20.0, 40.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"buttonPlain", (object)pGVar6);
																												if ((Dictionary<object, object>)*ppSVar2 !=null) {
																													pGVar6 = (*ppSVar2).get_Item((Il2CppObject *)"buttonPlain");
																												if (pGVar6 != null) {
																													pGVar6.textColor = "text";
																													pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.ButtonStyle("keybindButton", "paper", "header", 500, 20.0, 46.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"keybindButton", (object)pGVar6);
																												if ((Dictionary<object, object>)*ppSVar2 !=null) {
																													pGVar6 = (*ppSVar2).get_Item((Il2CppObject *)"keybindButton");
																												if (pGVar6 != null) {
																													pGVar6.textColor = "text";
																													pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.ButtonStyle("buttonDanger", "destructive", "header", 700, 20.0, 40.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"buttonDanger", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.ButtonStyle("buttonNegative", "negative", "header", 500, 20.0, 40.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"buttonNegative", (object)pGVar6);
																												if ((Dictionary<object, object>)*ppSVar2 !=null) {
																													pGVar6 = (*ppSVar2).get_Item((Il2CppObject *)"buttonNegative");
																												if (pGVar6 != null) {
																													pGVar6.textColor = "negativeText";
																													pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar6 = new GisketchStyleDefinition();
																												if (pGVar6 != null) {
																													pGVar6.name = "inputField";
																													pGVar6.background = "engravedBg";
																													pGVar6.textColor = "text";
																													pGVar6.fontFamily = "text";
																													local_1a8.hasValue = false;
																													local_1a8._1_3_ = 0;
																													local_1a8.value = 0;
																													local_1a8 = new Nullable<int>(400);
																													pGVar6.fontWeight = local_1a8;
																													local_1b0.hasValue = false;
																													local_1b0._1_3_ = 0;
																													local_1b0.value = 0.0;
																													local_1b0 = new Nullable<float>(19.0);
																													pGVar6.fontSize = local_1b0;
																													local_1b8.hasValue = false;
																													local_1b8._1_3_ = 0;
																													local_1b8.value = 0.0;
																													local_1b8 = new Nullable<float>(12.0);
																													pGVar6.padding = local_1b8;
																												pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar7 = new GisketchLength();
																												if (pGVar7 != null) {
																													pGVar7.value = 280.0;
																													pGVar7.unit = "point";
																													pGVar6.width = pGVar7;
																												pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar7 = new GisketchLength();
																												if (pGVar7 != null) {
																													pGVar7.value = 42.0;
																													pGVar7.unit = "point";
																													pGVar6.height = pGVar7;
																													local_278[0].hasValue = false;
																													local_278[0].value = false;
																													local_278 = new Nullable<bool>(true);
																													pGVar6.textured = local_278[0];
																													local_280[0].hasValue = false;
																													local_280[0].value = false;
																													local_280 = new Nullable<bool>(true);
																													pGVar6.worn = local_280[0];
																													local_1c0.hasValue = false;
																													local_1c0._1_3_ = 0;
																													local_1c0.value = 0.0;
																													local_1c0 = new Nullable<float>(4.0);
																													pGVar6.wornStainScale = local_1c0;
																													local_1c8.hasValue = false;
																													local_1c8._1_3_ = 0;
																													local_1c8.value = 0.0;
																													local_1c8 = new Nullable<float>(-1.0);
																													pGVar6.relief = local_1c8;
																													if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"inputField", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												pGVar6 = GisketchTheme.TextStyle("inputPlaceholder", "inputPlaceholder", "text", 400, 19.0);
																												if (pSVar4 != null) {

																												pSVar4.set_Item((Il2CppObject *)"inputPlaceholder", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												if (pSVar4 != null) {
																													pGVar6 = pSVar4.get_Item((Il2CppObject *)"buttonPrimary");
																												pSVar4.set_Item((Il2CppObject *)"primaryButton", (object)pGVar6);
																												pSVar4 = (Dictionary<object, object>)*ppSVar2;
																												if (pSVar4 != null) {
																													pGVar6 = pSVar4.get_Item((Il2CppObject *)"buttonSecondary");
																												method_03 = (MethodInfo *)"secondaryButton";
																												pSVar4.set_Item((Il2CppObject *)"secondaryButton", (object)pGVar6);
																												pGVar5 = local_1d0;
																												local_1d0.AddSettingsDefaults();
																												pGVar5.AddAtomDefaults();
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

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x5240320", Offset = "0x523F320", VA = "0x5240320")]
	private void AddDialogVariant(string suffix, string background, string textColor = "buttonText")
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$AddDialogVariant): clean
		Dictionary<object, object> pSVar1;
		String pSVar2;
		String pSVar3;
		GisketchStyleDefinition pGVar4;

		pSVar1 = (Dictionary<object, object>)this._styles;
		pSVar2 = String.Concat("dialogTitleBar", suffix);
		pSVar3 = String.Concat("dialogTitleBar", suffix);
		if ((typeof(GisketchTheme)._2).cctor_finished_or_no_cctor == 0) {
		}
		pGVar4 = GisketchTheme.DialogTitleBar(pSVar3, background);
		if (pSVar1 != null) {
			pSVar1.set_Item((object)pSVar2, (object)pGVar4);
			pSVar1 = (Dictionary<object, object>)this._styles;
			pSVar2 = String.Concat("dialogTitleCloseButton", suffix);
			pSVar3 = String.Concat("dialogTitleCloseButton", suffix);
			pGVar4 = GisketchTheme.ButtonStyle(pSVar3, background, "header", 400, 22.0, 34.0);
			if (pSVar1 != null) {
				pSVar1.set_Item((object)pSVar2, (object)pGVar4);
				pSVar1 = (Dictionary<object, object>)this._styles;
				pSVar2 = String.Concat("dialogTitleCloseButton", suffix);
				if (pSVar1 != null) {
					pGVar4 = pSVar1.get_Item((object)pSVar2);
					if (pGVar4 != null) {
						pGVar4.textColor = textColor;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x5240600", Offset = "0x523F600", VA = "0x5240600")]
	private static GisketchStyleDefinition DialogTitleBar(string name, string background)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$DialogTitleBar): 4 lines keep C-only constructs
		GisketchStyleDefinition __this;
		Nullable<bool>[] local_50 = new Nullable<bool>[4];
		Nullable<bool>[] local_48 = new Nullable<bool>[4];
		Nullable<bool>[] local_40 = new Nullable<bool>[4];
		Nullable<float> local_38;
		Nullable<float> local_30;
		Nullable<float> local_28;
		Nullable<float> local_20;

		__this = new GisketchStyleDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.name = name;
		__this.background = background;
		local_20.hasValue = false;
		local_20._1_3_ = 0;
		local_20.value = 0.0;
		local_20 = new Nullable<float>(18.0);
		__this.paddingX = local_20;
		local_28.hasValue = false;
		local_28._1_3_ = 0;
		local_28.value = 0.0;
		local_28 = new Nullable<float>(8.0);
		__this.paddingY = local_28;
		local_30.hasValue = false;
		local_30._1_3_ = 0;
		local_30.value = 0.0;
		local_30 = new Nullable<float>(8.0);
		__this.gap = local_30;
		local_40[0].hasValue = false;
		local_40[0].value = false;
		local_40 = new Nullable<bool>(true);
		__this.textured = local_40[0];
		local_48[0].hasValue = false;
		local_48[0].value = false;
		local_48 = new Nullable<bool>(true);
		__this.worn = local_48[0];
		local_38.hasValue = false;
		local_38._1_3_ = 0;
		local_38.value = 0.0;
		local_38 = new Nullable<float>(1.0);
		__this.relief = local_38;
		local_50[0].hasValue = false;
		local_50[0].value = false;
		local_50 = new Nullable<bool>(true);
		__this.reliefGradient = local_50[0];
		return __this;
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x52371F0", Offset = "0x52361F0", VA = "0x52371F0")]
	private static GisketchStyleDefinition ButtonStyle(string name, string background, string fontFamily, int fontWeight, float fontSize, float height)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$ButtonStyle): 3 lines keep C-only constructs
		GisketchStyleDefinition __this;
		GisketchLength __this_00;
		Nullable<bool>[] local_58 = new Nullable<bool>[4];
		Nullable<bool>[] local_50 = new Nullable<bool>[4];
		float local_48;
		float local_44;
		Nullable<float> local_40;
		Nullable<float> local_38;
		Nullable<int> local_30;

		local_48 = height;
		local_44 = fontSize;
		__this = new GisketchStyleDefinition();
		if (__this != null) {
			__this.name = name;
			__this.background = background;
			__this.textColor = "buttonText";
			__this.fontFamily = fontFamily;
			local_30.hasValue = false;
			local_30._1_3_ = 0;
			local_30.value = 0;
			local_30 = new Nullable<int>(fontWeight);
			__this.fontWeight = local_30;
			local_38.hasValue = false;
			local_38._1_3_ = 0;
			local_38.value = 0.0;
			local_38 = new Nullable<float>(local_44);
			__this.fontSize = local_38;
			__this_00 = new GisketchLength();
			if (__this_00 != null) {
				__this_00.value = local_48;
				__this_00.unit = "point";
				__this.height = __this_00;
				__this.motion = "slide";
				local_50[0].hasValue = false;
				local_50[0].value = false;
				local_50 = new Nullable<bool>(true);
				__this.textured = local_50[0];
				local_58[0].hasValue = false;
				local_58[0].value = false;
				local_58 = new Nullable<bool>(true);
				__this.worn = local_58[0];
				local_40.hasValue = false;
				local_40._1_3_ = 0;
				local_40.value = 0.0;
				local_40 = new Nullable<float>(1.0);
				__this.relief = local_40;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x5236D70", Offset = "0x5235D70", VA = "0x5236D70")]
	private static GisketchStyleDefinition TextStyle(string name, string textColor, string fontFamily, int fontWeight, float fontSize)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$TextStyle): 2 lines keep C-only constructs
		GisketchStyleDefinition __this;
		Nullable<float> local_38;
		Nullable<int> local_30;

		__this = new GisketchStyleDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.name = name;
		__this.textColor = textColor;
		__this.fontFamily = fontFamily;
		local_30.hasValue = false;
		local_30._1_3_ = 0;
		local_30.value = 0;
		local_30 = new Nullable<int>(fontWeight);
		__this.fontWeight = local_30;
		local_38.hasValue = false;
		local_38._1_3_ = 0;
		local_38.value = 0.0;
		local_38 = new Nullable<float>(fontSize);
		__this.fontSize = local_38;
		return __this;
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x5236A90", Offset = "0x5235A90", VA = "0x5236A90")]
	private static GisketchLength Points(float value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$Points): clean
		GisketchLength __this;

		__this = new GisketchLength();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.value = value;
		__this.unit = "point";
		return __this;
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x52407C0", Offset = "0x523F7C0", VA = "0x52407C0")]
	private void AddRoomIconStyle(string name, Color color)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$AddRoomIconStyle): clean
		Dictionary<string, Color> __this_00;
		Dictionary<object, object> __this_01;
		GisketchStyleDefinition value;

		__this_00 = this._colors;
		if (__this_00 != null) {
			__this_00.set_Item((object)name, color);
			__this_01 = (Dictionary<object, object>)this._styles;
			if ((typeof(GisketchTheme)._2).cctor_finished_or_no_cctor == 0) {
			}
			value = GisketchTheme.IconStyle(name, name, 24.0);
			if (__this_01 != null) {
				__this_01.set_Item((object)name, (object)value);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x5237BF0", Offset = "0x5236BF0", VA = "0x5237BF0")]
	private void AddMainMenuDefaults()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$AddMainMenuDefaults): 193 lines keep C-only constructs
		Dictionary<string, GisketchStyleDefinition>* ppSVar1;
		Dictionary<object, object> pSVar2;
		GisketchTheme pGVar3;
		GisketchTheme pGVar4;
		GisketchStyleDefinition pGVar5;
		GisketchLength pGVar6;
		MethodInfo method_03;
		Color color;
		Color color_00;
		Color color_01;
		Nullable<bool>[] local_450 = new Nullable<bool>[4];
		Nullable<bool>[] local_448 = new Nullable<bool>[4];
		Nullable<bool>[] local_440 = new Nullable<bool>[4];
		Nullable<bool>[] local_438 = new Nullable<bool>[4];
		Nullable<bool>[] local_430 = new Nullable<bool>[4];
		Nullable<bool>[] local_428 = new Nullable<bool>[4];
		Nullable<bool>[] local_420 = new Nullable<bool>[4];
		Nullable<bool>[] local_418 = new Nullable<bool>[4];
		Nullable<bool>[] local_410 = new Nullable<bool>[4];
		Nullable<bool>[] local_408 = new Nullable<bool>[4];
		Nullable<bool>[] local_400 = new Nullable<bool>[4];
		Nullable<bool>[] local_3f8 = new Nullable<bool>[4];
		Nullable<bool>[] local_3f0 = new Nullable<bool>[4];
		Nullable<bool>[] local_3e8 = new Nullable<bool>[4];
		Nullable<bool>[] local_3e0 = new Nullable<bool>[4];
		Nullable<bool>[] local_3d8 = new Nullable<bool>[4];
		Nullable<bool>[] local_3d0 = new Nullable<bool>[4];
		Nullable<bool>[] local_3c8 = new Nullable<bool>[4];
		Nullable<bool>[] local_3c0 = new Nullable<bool>[4];
		Nullable<bool>[] local_3b8 = new Nullable<bool>[4];
		Nullable<bool>[] local_3b0 = new Nullable<bool>[4];
		Nullable<bool>[] local_3a8 = new Nullable<bool>[4];
		Nullable<bool>[] local_3a0 = new Nullable<bool>[4];
		Nullable<bool>[] local_398 = new Nullable<bool>[4];
		Nullable<bool>[] local_390 = new Nullable<bool>[4];
		Nullable<bool>[] local_388 = new Nullable<bool>[4];
		Nullable<bool>[] local_380 = new Nullable<bool>[4];
		Nullable<bool>[] local_378 = new Nullable<bool>[4];
		Nullable<bool>[] local_370 = new Nullable<bool>[4];
		Nullable<bool>[] local_368 = new Nullable<bool>[4];
		Nullable<bool>[] local_360 = new Nullable<bool>[4];
		Nullable<bool>[] local_358 = new Nullable<bool>[4];
		Nullable<bool>[] local_350 = new Nullable<bool>[4];
		Nullable<bool>[] local_348 = new Nullable<bool>[4];
		Nullable<bool>[] local_340 = new Nullable<bool>[4];
		Nullable<bool>[] local_338 = new Nullable<bool>[4];
		Nullable<bool>[] local_330 = new Nullable<bool>[4];
		Nullable<bool>[] local_328 = new Nullable<bool>[4];
		Nullable<bool>[] local_320 = new Nullable<bool>[4];
		Nullable<bool>[] local_318 = new Nullable<bool>[4];
		Nullable<bool>[] local_310 = new Nullable<bool>[4];
		Nullable<bool>[] local_308 = new Nullable<bool>[4];
		Nullable<bool>[] local_300 = new Nullable<bool>[4];
		Nullable<bool>[] local_2f8 = new Nullable<bool>[4];
		Nullable<bool>[] local_2f0 = new Nullable<bool>[4];
		Nullable<bool>[] local_2e8 = new Nullable<bool>[4];
		Nullable<bool>[] local_2e0 = new Nullable<bool>[4];
		Nullable<bool>[] local_2d8 = new Nullable<bool>[4];
		Nullable<bool>[] local_2d0 = new Nullable<bool>[4];
		Nullable<bool>[] local_2c8 = new Nullable<bool>[4];
		Nullable<bool>[] local_2c0 = new Nullable<bool>[4];
		Nullable<bool>[] local_2b8 = new Nullable<bool>[4];
		Nullable<bool>[] local_2b0 = new Nullable<bool>[4];
		Nullable<bool>[] local_2a8 = new Nullable<bool>[4];
		Nullable<bool>[] local_2a0 = new Nullable<bool>[4];
		Nullable<bool>[] local_298 = new Nullable<bool>[4];
		GisketchTheme local_290;
		Nullable<float> local_288;
		Nullable<float> local_280;
		Nullable<float> local_278;
		Nullable<float> local_270;
		Nullable<float> local_268;
		Nullable<int> local_260;
		Nullable<float> local_258;
		Nullable<float> local_250;
		Nullable<float> local_248;
		Nullable<float> local_240;
		Nullable<float> local_238;
		Nullable<float> local_230;
		Nullable<float> local_228;
		Nullable<float> local_220;
		Nullable<float> local_218;
		Nullable<float> local_210;
		Nullable<float> local_208;
		Nullable<float> local_200;
		Nullable<float> local_1f8;
		Nullable<float> local_1f0;
		Nullable<int> local_1e8;
		Nullable<float> local_1e0;
		Nullable<float> local_1d8;
		Nullable<float> local_1d0;
		Nullable<float> local_1c8;
		Nullable<int> local_1c0;
		Nullable<float> local_1b8;
		Nullable<float> local_1b0;
		Nullable<float> local_1a8;
		Nullable<float> local_1a0;
		Nullable<float> local_198;
		Nullable<float> local_190;
		Nullable<float> local_188;
		Nullable<float> local_180;
		Nullable<float> local_178;
		Nullable<float> local_170;
		Nullable<float> local_168;
		Nullable<float> local_160;
		Nullable<float> local_158;
		Nullable<float> local_150;
		Nullable<float> local_148;
		Nullable<float> local_140;
		Nullable<float> local_138;
		Nullable<float> local_130;
		Nullable<float> local_128;
		Nullable<float> local_120;
		Nullable<float> local_118;
		Nullable<float> local_110;
		Nullable<float> local_108;
		Nullable<float> local_100;
		Nullable<float> local_f8;
		Nullable<float> local_f0;
		Nullable<float> local_e8;
		Nullable<float> local_e0;
		Nullable<float> local_d8;
		Nullable<int> local_d0;
		Nullable<float> local_c8;
		Nullable<float> local_c0;
		Nullable<int> local_b8;
		Nullable<float> local_b0;
		Nullable<float> local_a8;
		Nullable<float> local_a0;
		Nullable<float> local_98;
		Nullable<float> local_90;
		Nullable<float> local_88;
		Nullable<float> local_80;
		Nullable<float> local_78;
		Nullable<float> local_70;
		Nullable<float> local_68;
		Nullable<float> local_60;
		Nullable<float> local_58;
		Nullable<float> local_50;
		Nullable<float> local_48;
		Nullable<float> local_40;
		Nullable<float> local_38;

		pSVar2 = (Dictionary<object, object>)this._styles;
		pGVar5 = new GisketchStyleDefinition();
		if (pGVar5 != null) {
			pGVar5.name = "mainMenuOverlay";
			pGVar5.background = "clear";
			if (pSVar2 != null) {
				pSVar2.set_Item((Il2CppObject *)"mainMenuOverlay", (object)pGVar5);
				color.b = 0.16;
				color.a = 1.0;
				color.r = 0.83;
				color.g = 0.7;
				this.AddRoomIconStyle("roomPasswordIcon", color);
				color_00.b = 0.36;
				color_00.a = 1.0;
				color_00.r = 0.16;
				color_00.g = 0.83;
				this.AddRoomIconStyle("roomAccountIcon", color_00);
				color_01.b = 0.94;
				color_01.a = 1.0;
				color_01.r = 0.16;
				color_01.g = 0.66;
				this.AddRoomIconStyle("roomSandboxIcon", color_01);
				pSVar2 = (Dictionary<object, object>)this._styles;
				pGVar5 = new GisketchStyleDefinition();
				if (pGVar5 != null) {
					pGVar5.name = "gameCreateFavoritesCard";
					pGVar5.background = "primary";
					if (pSVar2 != null) {
						ppSVar1 = &this._styles;
						local_290 = this;
						pSVar2.set_Item((Il2CppObject *)"gameCreateFavoritesCard", (object)pGVar5) ;
						pSVar2 = (Dictionary<object, object>)*ppSVar1;
						if ((typeof(GisketchTheme)._2).cctor_finished_or_no_cctor == 0) {
							il2cpp_codegen_runtime_class_init(typeof(GisketchTheme)) ;
						}
						pGVar5 = GisketchTheme.TextStyle("gameCreateFavoritesTitle", "buttonText", "header", 400, 44.0);
						if (pSVar2 != null) {
							pSVar2.set_Item((Il2CppObject *)"gameCreateFavoritesTitle", (object)pGVar5);
							pSVar2 = (Dictionary<object, object>)*ppSVar1;
							pGVar5 = GisketchTheme.TextStyle("gameCreateChoiceTitle", "text", "header", 400, 44.0);
							if (pSVar2 != null) {
								pSVar2.set_Item((Il2CppObject *)"gameCreateChoiceTitle", (object)pGVar5);
								pSVar2 = (Dictionary<object, object>)*ppSVar1;
								pGVar5 = new GisketchStyleDefinition();
								if (pGVar5 != null) {
									pGVar5.name = "mainMenuOverlayBody";
									pGVar5.background = "clear";
									local_38.hasValue = false;
									local_38._1_3_ = 0;
									local_38.value = 0.0;
									local_38 = new Nullable<float>(0.0);
									pGVar5.padding = local_38;
									local_40.hasValue = false;
									local_40._1_3_ = 0;
									local_40.value = 0.0;
									local_40 = new Nullable<float>(0.0);
									pGVar5.gap = local_40;
									if (pSVar2 != null) {
										pSVar2.set_Item((Il2CppObject *)"mainMenuOverlayBody", (object)pGVar5);
										pSVar2 = (Dictionary<object, object>)*ppSVar1;
										pGVar5 = new GisketchStyleDefinition();
										if (pGVar5 != null) {
											pGVar5.name = "inGamePauseDimOverlay";
											pGVar5.background = "shadow";
											if (pSVar2 != null) {
												pSVar2.set_Item((Il2CppObject *)"inGamePauseDimOverlay", (object)pGVar5);
												pSVar2 = (Dictionary<object, object>)*ppSVar1;
												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
												pGVar5 = new GisketchStyleDefinition();
												if (pGVar5 != null) {
													pGVar5.name = "mainMenuLogoSlot";
													pGVar5.background = "clear";
													local_48.hasValue = false;
													local_48._1_3_ = 0;
													local_48.value = 0.0;
													local_48 = new Nullable<float>(0.0);
													pGVar5.padding = local_48;
													local_50.hasValue = false;
													local_50._1_3_ = 0;
													local_50.value = 0.0;
													local_50 = new Nullable<float>(0.0);
													pGVar5.gap = local_50;
													if (pSVar2 != null) {
														pSVar2.set_Item((Il2CppObject *)"mainMenuLogoSlot", (object)pGVar5);
														pSVar2 = (Dictionary<object, object>)*ppSVar1;
														pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
														pGVar5 = new GisketchStyleDefinition();
														if (pGVar5 != null) {
															pGVar5.name = "mainMenuPanel";
															pGVar6 = il2cpp_codegen_object_new(typeof(GisketchLength)) ;
															pGVar6 = new GisketchLength();
															if (pGVar6 != null) {
																pGVar6.value = 100.0;
																pGVar6.unit = "percent";
																pGVar5.height = pGVar6;
																local_58.hasValue = false;
																local_58._1_3_ = 0;
																local_58.value = 0.0;
																local_58 = new Nullable<float>(0.9064815);
																pGVar5.aspectRatio = local_58;
																local_298[0].hasValue = false;
																local_298[0].value = false;
																local_298 = new Nullable<bool>(true);
																pGVar5.shadow = local_298[0];
																if (pSVar2 != null) {
																	pSVar2.set_Item((Il2CppObject *)"mainMenuPanel", (object)pGVar5);
																	pSVar2 = (Dictionary<object, object>)*ppSVar1;
																	pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																	pGVar5 = new GisketchStyleDefinition();
																	if (pGVar5 != null) {
																		pGVar5.name = "brushSidePanel";
																		pGVar5.background = "surface";
																		local_2a0[0].hasValue = false;
																		local_2a0[0].value = false;
																		local_2a0 = new Nullable<bool>(true);
																		pGVar5.textured = local_2a0[0];
																		local_2a8[0].hasValue = false;
																		local_2a8[0].value = false;
																		local_2a8 = new Nullable<bool>(true);
																		pGVar5.worn = local_2a8[0];
																		local_60.hasValue = false;
																		local_60._1_3_ = 0;
																		local_60.value = 0.0;
																		local_60 = new Nullable<float>(4.0);
																		pGVar5.wornStainScale = local_60;
																		local_2b0[0].hasValue = false;
																		local_2b0[0].value = false;
																		local_2b0 = new Nullable<bool>(true);
																		pGVar5.shadow = local_2b0[0];
																		if (pSVar2 != null ) {
																			pSVar2.set_Item((Il2CppObject *)"brushSidePanel", (object)pGVar5);
																			pSVar2 = (Dictionary<object, object>)*ppSVar1;
																			pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																			pGVar5 = new GisketchStyleDefinition();
																			if (pGVar5 != null) {
																				pGVar5.name = "brushSidePanelShell";
																				pGVar5.background = "clear";
																				pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																				pGVar6 = new GisketchLength();
																				if (pGVar6 != null) {
																					pGVar6.value = 100.0;
																					pGVar6.unit = "percent";
																					pGVar5.height = pGVar6;
																					local_68.hasValue = false;
																					local_68._1_3_ = 0;
																					local_68.value = 0.0;
																					local_68 = new Nullable<float>(0.38333333);
																					pGVar5.aspectRatio = local_68;
																					if (pSVar2 != null) {
																						pSVar2.set_Item((Il2CppObject *)"brushSidePanelShell", (object)pGVar5);
																						pSVar2 = (Dictionary<object, object>)*ppSVar1;
																						pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																						pGVar5 = new GisketchStyleDefinition();
																						if (pGVar5 != (GisketchStyleDefinition)0x0) {
																							pGVar5.name = "brushSidePanelScreenContent";
																							pGVar5.background = "surface";
																							local_2b8[0].hasValue = false;
																							local_2b8[0].value = false;
																							local_2b8 = new Nullable<bool>(true);
																							pGVar5.textured = local_2b8[0];
																							local_2c0[0].hasValue = false;
																							local_2c0[0].value = false;
																							local_2c0 = new Nullable<bool>(true);
																							pGVar5.worn = local_2c0[0];
																							local_70.hasValue = false;
																							local_70._1_3_ = 0;
																							local_70.value = 0.0;
																							local_70 = new Nullable<float>(4.0);
																							pGVar5.wornStainScale = local_70;
																							if (pSVar2 != null) {
																								pSVar2.set_Item((Il2CppObject *)"brushSidePanelScreenContent", (object)pGVar5);
																								pSVar2 = (Dictionary<object, object>)*ppSVar1;
																								pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																								pGVar5 = new GisketchStyleDefinition();
																								if (pGVar5 != null) {
																									pGVar5.name = "brushSidePanelContentFooter";
																									pGVar5.background = "surface";
																									local_2c8[0].hasValue = false;
																									local_2c8[0].value = false;
																									local_2c8 = new Nullable<bool>(true);
																									pGVar5.textured = local_2c8[0];
																									local_2d0[0].hasValue = false;
																									local_2d0[0].value = false;
																									local_2d0 = new Nullable<bool>(true);
																									pGVar5.worn = local_2d0[0];
																									local_78.hasValue = false;
																									local_78._1_3_ = 0;
																									local_78.value = 0.0;
																									local_78 = new Nullable<float>(4.0);
																									pGVar5.wornStainScale = local_78;
																									if (pSVar2 != null) {
																										pSVar2.set_Item((Il2CppObject *)"brushSidePanelContentFooter", (object)pGVar5);
																										pSVar2 = (Dictionary<object, object>)*ppSVar1;
																										pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																										pGVar5 = new GisketchStyleDefinition();
																										if (pGVar5 != null) {
																											pGVar5.name = "brushSidePanelContentFooterTexture";
																											pGVar5.background = "clear";
																											local_2d8[0].hasValue = false;
																											local_2d8[0].value = false;
																											local_2d8 = new Nullable<bool>(true);
																											pGVar5.textured = local_2d8[0];
																											local_2e0[0].hasValue = false;
																											local_2e0[0].value = false;
																											local_2e0 = new Nullable<bool>(true);
																											pGVar5.worn = local_2e0[0];
																											local_80.hasValue = false;
																											local_80._1_3_ = 0;
																											local_80.value = 0.0;
																											local_80 = new Nullable<float>(4.0);
																											pGVar5.wornStainScale = local_80;
																											if (pSVar2 != null) {
																												pSVar2.set_Item((Il2CppObject *)"brushSidePanelContentFooterTexture", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "brushSidePanelContentFooterTopShadow";
																													pGVar5.background = "clear";
																													local_2e8[0].hasValue = false;
																													local_2e8[0].value = false;
																													local_2e8 = new Nullable<bool>(true);
																													pGVar5.shadow = local_2e8[0];
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"brushSidePanelContentFooterTopShadow", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "brushSidePanelScreenScroll";
																													pGVar5.background = "clear";
																													local_88.hasValue = false;
																													local_88._1_3_ = 0;
																													local_88.value = 0.0;
																													local_88 = new Nullable<float>(0.0);
																													pGVar5.padding = local_88;
																													local_90.hasValue = false;
																													local_90._1_3_ = 0;
																													local_90.value = 0.0;
																													local_90 = new Nullable<float>(0.0);
																													pGVar5.gap = local_90;
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"brushSidePanelScreenScroll", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "brushSidePanelOutline";
																													pGVar5.background = "brushSidePanelOutline";
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"brushSidePanelOutline", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "brushSidePanelTexture";
																													pGVar5.background = "clear";
																													local_2f0[0].hasValue = false;
																													local_2f0[0].value = false;
																													local_2f0 = new Nullable<bool>(true);
																													pGVar5.textured = local_2f0[0];
																													local_2f8[0].hasValue = false;
																													local_2f8[0].value = false;
																													local_2f8 = new Nullable<bool>(true);
																													pGVar5.worn = local_2f8[0];
																													local_98.hasValue = false;
																													local_98._1_3_ = 0;
																													local_98.value = 0.0;
																													local_98 = new Nullable<float>(4.0);
																													pGVar5.wornStainScale = local_98;
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"brushSidePanelTexture", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "brushSidePanelHeader";
																													pGVar5.background = "primary";
																													local_a0.hasValue = false;
																													local_a0._1_3_ = 0;
																													local_a0.value = 0.0;
																													local_a0 = new Nullable<float>(0.0);
																													pGVar5.padding = local_a0;
																													local_a8.hasValue = false;
																													local_a8._1_3_ = 0;
																													local_a8.value = 0.0;
																													local_a8 = new Nullable<float>(0.0);
																													pGVar5.gap = local_a8;
																													local_300[0].hasValue = false;
																													local_300[0].value = false;
																													local_300 = new Nullable<bool>(true);
																													pGVar5.textured = local_300[0];
																													local_308[0].hasValue = false;
																													local_308[0].value = false;
																													local_308 = new Nullable<bool>(true);
																													pGVar5.worn = local_308[0];
																													local_b0.hasValue = false;
																													local_b0._1_3_ = 0;
																													local_b0.value = 0.0;
																													local_b0 = new Nullable<float>(4.0);
																													pGVar5.wornStainScale = local_b0;
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"brushSidePanelHeader", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "brushSidePanelHeaderText";
																													pGVar5.background = "clear";
																													pGVar5.textColor = "buttonText";
																													pGVar5.fontFamily = "header";
																													local_b8.hasValue = false;
																													local_b8._1_3_ = 0;
																													local_b8.value = 0;
																													local_b8 = new Nullable<int>(400);
																													pGVar5.fontWeight = local_b8;
																													local_c0.hasValue = false;
																													local_c0._1_3_ = 0;
																													local_c0.value = 0.0;
																													local_c0 = new Nullable<float>(104.0);
																												pGVar5.fontSize = local_c0;
																												pGVar5.textAlignment = "right";
																												local_c8.hasValue = false;
																												local_c8._1_3_ = 0;
																												local_c8.value = 0.0;
																												local_c8 = new Nullable<float>(80.0);
																												pGVar5.paddingX = local_c8;
																												if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"brushSidePanelHeaderText", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "brushSidePanelBrushButton";
																													pGVar5.background = "primary";
																													pGVar5.textColor = "void";
																													pGVar5.fontFamily = "menuText";
																													local_d0.hasValue = false;
																													local_d0._1_3_ = 0;
																													local_d0.value = 0;
																													local_d0 = new Nullable<int>(400);
																													pGVar5.fontWeight = local_d0;
																													local_d8.hasValue = false;
																													local_d8._1_3_ = 0;
																													local_d8.value = 0.0;
																													local_d8 = new Nullable<float>(112.0);
																												pGVar5.fontSize = local_d8;
																												pGVar5.textAlignment = "left";
																												local_e0.hasValue = false;
																												local_e0._1_3_ = 0;
																												local_e0.value = 0.0;
																												local_e0 = new Nullable<float>(104.0);
																												pGVar5.iconSize = local_e0;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar6 = new GisketchLength();
																												if (pGVar6 != null) {
																													pGVar6.value = 236.0;
																													pGVar6.unit = "point";
																													pGVar5.height = pGVar6;
																													local_e8.hasValue = false;
																													local_e8._1_3_ = 0;
																													local_e8.value = 0.0;
																													local_e8 = new Nullable<float>(224.0);
																												pGVar5.paddingX = local_e8;
																												local_f0.hasValue = false;
																												local_f0._1_3_ = 0;
																												local_f0.value = 0.0;
																												local_f0 = new Nullable<float>(36.0);
																												pGVar5.gap = local_f0;
																												local_310[0].hasValue = false;
																												local_310[0].value = false;
																												local_310 = new Nullable<bool>(true);
																												pGVar5.textured = local_310[0];
																												local_318[0].hasValue = false;
																												local_318[0].value = false;
																												local_318 = new Nullable<bool>(true);
																												pGVar5.worn = local_318[0];
																												local_f8.hasValue = false;
																												local_f8._1_3_ = 0;
																												local_f8.value = 0.0;
																												local_f8 = new Nullable<float>(4.0);
																												pGVar5.wornStainScale = local_f8;
																												pGVar5.motion = "slide";
																												if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"brushSidePanelBrushButton", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = GisketchTheme.ButtonStyle("brushSidePanelFooterPrimaryButton", "primary", "header", 400, 26.0, 63.0);
																												if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"brushSidePanelFooterPrimaryButton", (object)pGVar5);
																												if ((Dictionary<object, object>)*ppSVar1 !=null) {
																													pGVar5 = (*ppSVar1).get_Item((Il2CppObject *)"brushSidePanelFooterPrimaryButton");
																												local_100.hasValue = false;
																												local_100._1_3_ = 0;
																												local_100.value = 0.0;
																												local_100 = new Nullable<float>(26.0);
																												if (pGVar5 != null) {
																													pGVar5.iconSize = local_100;
																													if ((Dictionary<object, object>)*ppSVar1 !=null) {
																													pGVar5 = (*ppSVar1).get_Item((Il2CppObject *)"brushSidePanelFooterPrimaryButton");
																												local_108.hasValue = false;
																												local_108._1_3_ = 0;
																												local_108.value = 0.0;
																												local_108 = new Nullable<float>(24.0);
																												if (pGVar5 != null) {
																													pGVar5.paddingX = local_108;
																													if ((Dictionary<object, object>)*ppSVar1 !=null) {
																													pGVar5 = (*ppSVar1).get_Item((Il2CppObject *)"brushSidePanelFooterPrimaryButton");
																												local_110.hasValue = false;
																												local_110._1_3_ = 0;
																												local_110.value = 0.0;
																												local_110 = new Nullable<float>(9.0);
																												if (pGVar5 != null) {
																													pGVar5.gap = local_110;
																													pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profileCard";
																													pGVar5.background = "clear";
																													local_118.hasValue = false;
																													local_118._1_3_ = 0;
																													local_118.value = 0.0;
																													local_118 = new Nullable<float>(0.0);
																													pGVar5.gap = local_118;
																													local_320[0].hasValue = false;
																													local_320[0].value = false;
																													local_320 = new Nullable<bool>(true);
																													pGVar5.shadow = local_320[0];
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profileCard", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profileCardBanner";
																													pGVar5.background = "profileCardBannerBg";
																													local_328[0].hasValue = false;
																													local_328[0].value = false;
																													local_328 = new Nullable<bool>(true);
																													pGVar5.textured = local_328[0];
																													local_330[0].hasValue = false;
																													local_330[0].value = false;
																													local_330 = new Nullable<bool>(true);
																													pGVar5.worn = local_330[0];
																													local_120.hasValue = false;
																													local_120._1_3_ = 0;
																													local_120.value = 0.0;
																													local_120 = new Nullable<float>(3.0);
																													pGVar5.wornStainScale = local_120;
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profileCardBanner", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profileCardBannerImage";
																													pGVar5.background = "clear";
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profileCardBannerImage", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profileCardBody";
																													pGVar5.background = "surfaceSoft";
																													local_338[0].hasValue = false;
																													local_338[0].value = false;
																													local_338 = new Nullable<bool>(true);
																													pGVar5.textured = local_338[0];
																													local_340[0].hasValue = false;
																													local_340[0].value = false;
																													local_340 = new Nullable<bool>(true);
																													pGVar5.worn = local_340[0];
																													local_128.hasValue = false;
																													local_128._1_3_ = 0;
																													local_128.value = 0.0;
																													local_128 = new Nullable<float>(4.0);
																													pGVar5.wornStainScale = local_128;
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profileCardBody", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profileCardAvatarFrame";
																													pGVar5.background = "profileCardAvatarBorder";
																													local_130.hasValue = false;
																													local_130._1_3_ = 0;
																													local_130.value = 0.0;
																													local_130 = new Nullable<float>(8.0);
																													pGVar5.padding = local_130;
																													local_348[0].hasValue = false;
																													local_348[0].value = false;
																													local_348 = new Nullable<bool>(true);
																													pGVar5.textured = local_348[0];
																													local_350[0].hasValue = false;
																													local_350[0].value = false;
																													local_350 = new Nullable<bool>(true);
																													pGVar5.worn = local_350[0];
																													local_138.hasValue = false;
																													local_138._1_3_ = 0;
																													local_138.value = 0.0;
																													local_138 = new Nullable<float>(4.0);
																													pGVar5.wornStainScale = local_138;
																													local_358[0].hasValue = false;
																													local_358[0].value = false;
																													local_358 = new Nullable<bool>(true);
																													pGVar5.shadow = local_358[0];
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profileCardAvatarFrame", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profileCardAvatarBg";
																													pGVar5.background = "profileCardAvatarBg";
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profileCardAvatarBg", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profileCardAvatarImage";
																													pGVar5.background = "clear";
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profileCardAvatarImage", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = GisketchTheme.TextStyle("profileCardName", "text", "header", 400, 42.0);
																												if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profileCardName", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = GisketchTheme.TextStyle("profileCardHandle", "textMuted", "text", 400, 20.0);
																												if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profileCardHandle", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = GisketchTheme.TextStyle("profileCardBodyText", "textMuted", "text", 400, 22.0);
																												if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profileCardBodyText", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = GisketchTheme.TextStyle("profileCardSocialText", "textMuted", "text", 400, 22.0);
																												if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profileCardSocialText", (object)pGVar5);
																												if ((Dictionary<object, object>)*ppSVar1 !=null) {
																													pGVar5 = (*ppSVar1).get_Item((Il2CppObject *)"profileCardSocialText");
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar6 = new GisketchLength();
																												if (pGVar6 != null) {
																													pGVar6.value = 100.0;
																													pGVar6.unit = "percent";
																													if (pGVar5 != null) {
																													pGVar5.width = pGVar6;
																													pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = GisketchTheme.TextStyle("profileInfoStatus", "textMuted", "text", 400, 20.0);
																												if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profileInfoStatus", (object)pGVar5);
																												if ((Dictionary<object, object>)*ppSVar1 !=null) {
																													pGVar5 = (*ppSVar1).get_Item((Il2CppObject *)"profileInfoStatus");
																												if (pGVar5 != null) {
																													pGVar5.textAlignment = "right";
																													pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profileCardSocialIcon";
																													pGVar5.background = "textMuted";
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profileCardSocialIcon", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "creditsCategoryHeader";
																													pGVar5.background = "clear";
																													local_140.hasValue = false;
																													local_140._1_3_ = 0;
																													local_140.value = 0.0;
																													local_140 = new Nullable<float>(0.0);
																													pGVar5.gap = local_140;
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"creditsCategoryHeader", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "creditsCategoryBrush";
																													pGVar5.background = "primary";
																													local_360[0].hasValue = false;
																													local_360[0].value = false;
																													local_360 = new Nullable<bool>(true);
																													pGVar5.textured = local_360[0];
																													local_368[0].hasValue = false;
																													local_368[0].value = false;
																													local_368 = new Nullable<bool>(true);
																													pGVar5.worn = local_368[0];
																													local_148.hasValue = false;
																													local_148._1_3_ = 0;
																													local_148.value = 0.0;
																													local_148 = new Nullable<float>(4.0);
																													pGVar5.wornStainScale = local_148;
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"creditsCategoryBrush", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = GisketchTheme.TextStyle("creditsCategoryHeaderText", "text", "header", 400, 40.0);
																												if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"creditsCategoryHeaderText", (object)pGVar5);
																												if ((Dictionary<object, object>)*ppSVar1 !=null) {
																													pGVar5 = (*ppSVar1).get_Item((Il2CppObject *)"creditsCategoryHeaderText");
																												if (pGVar5 != null) {
																													pGVar5.textAlignment = "left";
																													pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = GisketchTheme.TextStyle("creditsSubcategoryHeader", "text", "menuText", 400, 28.0);
																												if (pSVar2 != null) {
																													method_03 = (MethodInfo *)"creditsSubcategoryHeader";

																												pSVar2.set_Item((Il2CppObject *)"creditsSubcategoryHeader", (object)pGVar5);
																												pGVar4 = local_290;
																												local_290.AddChangelogDefaults();
																												pSVar2 = (Dictionary<object, object>)pGVar4._styles;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "creditsInfoIcon";
																													pGVar5.background = "text";
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar6 = new GisketchLength();
																												if (pGVar6 != null) {
																													pGVar6.value = 18.0;
																													pGVar6.unit = "point";
																													pGVar5.width = pGVar6;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar6 = new GisketchLength();
																												if (pGVar6 != null) {
																													pGVar6.value = 18.0;
																													pGVar6.unit = "point";
																													pGVar5.height = pGVar6;
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"creditsInfoIcon", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "creditsContributorCell";
																													pGVar5.background = "surfaceSoft";
																													local_150.hasValue = false;
																													local_150._1_3_ = 0;
																													local_150.value = 0.0;
																													local_150 = new Nullable<float>(10.0);
																													pGVar5.paddingX = local_150;
																													local_158.hasValue = false;
																													local_158._1_3_ = 0;
																													local_158.value = 0.0;
																													local_158 = new Nullable<float>(8.0);
																													pGVar5.gap = local_158;
																													local_370[0].hasValue = false;
																													local_370[0].value = false;
																													local_370 = new Nullable<bool>(true);
																													pGVar5.textured = local_370[0];
																													local_378[0].hasValue = false;
																													local_378[0].value = false;
																													local_378 = new Nullable<bool>(true);
																													pGVar5.worn = local_378[0];
																													local_160.hasValue = false;
																													local_160._1_3_ = 0;
																													local_160.value = 0.0;
																													local_160 = new Nullable<float>(4.0);
																													pGVar5.wornStainScale = local_160;
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"creditsContributorCell", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profilePreviewCard";
																													pGVar5.background = "clear";
																													local_168.hasValue = false;
																													local_168._1_3_ = 0;
																													local_168.value = 0.0;
																													local_168 = new Nullable<float>(0.0);
																													pGVar5.gap = local_168;
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profilePreviewCard", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profilePreviewDialog";
																													pGVar5.background = "surfaceSoft";
																													local_380[0].hasValue = false;
																													local_380[0].value = false;
																													local_380 = new Nullable<bool>(true);
																													pGVar5.textured = local_380[0];
																													local_388[0].hasValue = false;
																													local_388[0].value = false;
																													local_388 = new Nullable<bool>(true);
																													pGVar5.worn = local_388[0];
																													local_170.hasValue = false;
																													local_170._1_3_ = 0;
																													local_170.value = 0.0;
																													local_170 = new Nullable<float>(4.0);
																													pGVar5.wornStainScale = local_170;
																													local_390[0].hasValue = false;
																													local_390[0].value = false;
																													local_390 = new Nullable<bool>(true);
																													pGVar5.shadow = local_390[0];
																													local_178.hasValue = false;
																													local_178._1_3_ = 0;
																													local_178.value = 0.0;
																													local_178 = new Nullable<float>(0.0);
																													pGVar5.gap = local_178;
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profilePreviewDialog", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profileHoverDialog";
																													pGVar5.background = "surfaceSoft";
																													local_398[0].hasValue = false;
																													local_398[0].value = false;
																													local_398 = new Nullable<bool>(true);
																													pGVar5.textured = local_398[0];
																													local_3a0[0].hasValue = false;
																													local_3a0[0].value = false;
																													local_3a0 = new Nullable<bool>(true);
																													pGVar5.worn = local_3a0[0];
																													local_180.hasValue = false;
																													local_180._1_3_ = 0;
																													local_180.value = 0.0;
																													local_180 = new Nullable<float>(4.0);
																													pGVar5.wornStainScale = local_180;
																													local_3a8[0].hasValue = false;
																													local_3a8[0].value = false;
																													local_3a8 = new Nullable<bool>(true);
																													pGVar5.shadow = local_3a8[0];
																													local_188.hasValue = false;
																													local_188._1_3_ = 0;
																													local_188.value = 0.0;
																													local_188 = new Nullable<float>(0.0);
																													pGVar5.gap = local_188;
																													pGVar5.motion = "balloon";
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profileHoverDialog", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profilePreviewTitleBar";
																													pGVar5.background = "secondary";
																													local_190.hasValue = false;
																													local_190._1_3_ = 0;
																													local_190.value = 0.0;
																													local_190 = new Nullable<float>(16.0);
																													pGVar5.paddingX = local_190;
																													local_198.hasValue = false;
																													local_198._1_3_ = 0;
																													local_198.value = 0.0;
																													local_198 = new Nullable<float>(7.0);
																													pGVar5.paddingY = local_198;
																													local_3b0[0].hasValue = false;
																													local_3b0[0].value = false;
																													local_3b0 = new Nullable<bool>(true);
																													pGVar5.textured = local_3b0[0];
																													local_3b8[0].hasValue = false;
																													local_3b8[0].value = false;
																													local_3b8 = new Nullable<bool>(true);
																													pGVar5.worn = local_3b8[0];
																													local_1a0.hasValue = false;
																													local_1a0._1_3_ = 0;
																													local_1a0.value = 0.0;
																													local_1a0 = new Nullable<float>(1.0);
																													pGVar5.relief = local_1a0;
																													local_3c0[0].hasValue = false;
																													local_3c0[0].value = false;
																													local_3c0 = new Nullable<bool>(true);
																													pGVar5.reliefGradient = local_3c0[0] ;
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profilePreviewTitleBar", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = GisketchTheme.TextStyle("profilePreviewTitle", "buttonText", "header", 400, 23.0);
																												if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profilePreviewTitle", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profilePreviewBannerFrame";
																													pGVar5.background = "profileCardBannerBg";
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profilePreviewBannerFrame", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profilePreviewBanner";
																													pGVar5.background = "profileCardBannerBg";
																													local_3c8[0].hasValue = false;
																													local_3c8[0].value = false;
																													local_3c8 = new Nullable<bool>(true);
																													pGVar5.textured = local_3c8[0];
																													local_3d0[0].hasValue = false;
																													local_3d0[0].value = false;
																													local_3d0 = new Nullable<bool>(true);
																													pGVar5.worn = local_3d0[0];
																													local_1a8.hasValue = false;
																													local_1a8._1_3_ = 0;
																													local_1a8.value = 0.0;
																													local_1a8 = new Nullable<float>(3.0);
																													pGVar5.wornStainScale = local_1a8;
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profilePreviewBanner", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profilePreviewBody";
																													pGVar5.background = "clear";
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profilePreviewBody", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profilePreviewAvatarFrame";
																													pGVar5.background = "profileCardAvatarBorder";
																													local_1b0.hasValue = false;
																													local_1b0._1_3_ = 0;
																													local_1b0.value = 0.0;
																													local_1b0 = new Nullable<float>(6.0);
																													pGVar5.padding = local_1b0;
																													local_3d8[0].hasValue = false;
																													local_3d8[0].value = false;
																													local_3d8 = new Nullable<bool>(true);
																													pGVar5.textured = local_3d8[0];
																													local_3e0[0].hasValue = false;
																													local_3e0[0].value = false;
																													local_3e0 = new Nullable<bool>(true);
																													pGVar5.worn = local_3e0[0];
																													local_1b8.hasValue = false;
																													local_1b8._1_3_ = 0;
																													local_1b8.value = 0.0;
																													local_1b8 = new Nullable<float>(4.0);
																													pGVar5.wornStainScale = local_1b8;
																													local_3e8[0].hasValue = false;
																													local_3e8[0].value = false;
																													local_3e8 = new Nullable<bool>(true);
																													pGVar5.shadow = local_3e8[0];
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profilePreviewAvatarFrame", (object)pGVar5);
																												pSVar2 = (Dictionary<object, object>)*ppSVar1;
																												local_290 = (GisketchTheme)ppSVar1;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profilePreviewAvatar";
																													pGVar5.background = "clear";
																													if (pSVar2 != null) {

																												pSVar2.set_Item((Il2CppObject *)"profilePreviewAvatar", (object)pGVar5);
																												pGVar4 = local_290;
																												pGVar3 = local_290.klass;
																												pGVar5 = GisketchTheme.TextStyle("profilePreviewName", "text", "header", 400, 30.0);
																												if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"profilePreviewName", (object)pGVar5);
																												pGVar3 = pGVar4.klass;
																												pGVar5 = GisketchTheme.TextStyle("profilePreviewHandle", "textMuted", "text", 400, 17.0);
																												if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"profilePreviewHandle", (object)pGVar5);
																												pGVar3 = pGVar4.klass;
																												pGVar5 = GisketchTheme.TextStyle("profilePreviewSelection", "textMuted", "text", 500, 16.0);
																												if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"profilePreviewSelection", (object)pGVar5);
																												pGVar3 = pGVar4.klass;
																												pGVar5 = GisketchTheme.TextStyle("profileHoverBio", "textMuted", "text", 400, 18.0);
																												if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"profileHoverBio", (object)pGVar5);
																												pGVar3 = pGVar4.klass;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "characterTextInput";
																													pGVar5.background = "characterNamePreviewBg";
																													pGVar5.textColor = "buttonText";
																													pGVar5.fontFamily = "text";
																													local_1c0.hasValue = false;
																													local_1c0._1_3_ = 0;
																													local_1c0.value = 0;
																													local_1c0 = new Nullable<int>(400);
																													pGVar5.fontWeight = local_1c0;
																													local_1c8.hasValue = false;
																													local_1c8._1_3_ = 0;
																													local_1c8.value = 0.0;
																													local_1c8 = new Nullable<float>(19.0);
																													pGVar5.fontSize = local_1c8;
																													local_1d0.hasValue = false;
																													local_1d0._1_3_ = 0;
																													local_1d0.value = 0.0;
																													local_1d0 = new Nullable<float>(12.0);
																													pGVar5.padding = local_1d0;
																													pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar6 = new GisketchLength();
																												if (pGVar6 != null) {
																													pGVar6.value = 42.0;
																													pGVar6.unit = "point";
																													pGVar5.height = pGVar6;
																													local_3f0[0].hasValue = false;
																													local_3f0[0].value = false;
																													local_3f0 = new Nullable<bool>(true);
																													pGVar5.textured = local_3f0[0];
																													local_3f8[0].hasValue = false;
																													local_3f8[0].value = false;
																													local_3f8 = new Nullable<bool>(true);
																													pGVar5.worn = local_3f8[0];
																													local_1d8.hasValue = false;
																													local_1d8._1_3_ = 0;
																													local_1d8.value = 0.0;
																													local_1d8 = new Nullable<float>(4.0);
																													pGVar5.wornStainScale = local_1d8;
																													local_1e0.hasValue = false;
																													local_1e0._1_3_ = 0;
																													local_1e0.value = 0.0;
																													local_1e0 = new Nullable<float>(-1.0);
																													pGVar4 = local_290;
																													pGVar5.relief = local_1e0;
																													if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"characterTextInput", (object)pGVar5);
																												pGVar3 = pGVar4.klass;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "characterTextColorInput";
																													pGVar5.background = "characterNamePreviewBg";
																													pGVar5.textColor = "buttonText";
																													pGVar5.fontFamily = "text";
																													local_1e8.hasValue = false;
																													local_1e8._1_3_ = 0;
																													local_1e8.value = 0;
																													local_1e8 = new Nullable<int>(400);
																													pGVar5.fontWeight = local_1e8;
																													local_1f0.hasValue = false;
																													local_1f0._1_3_ = 0;
																													local_1f0.value = 0.0;
																													local_1f0 = new Nullable<float>(36.0);
																													pGVar5.fontSize = local_1f0;
																													local_1f8.hasValue = false;
																													local_1f8._1_3_ = 0;
																													local_1f8.value = 0.0;
																													local_1f8 = new Nullable<float>(18.0);
																													pGVar5.padding = local_1f8;
																													pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar6 = new GisketchLength();
																												if (pGVar6 != null) {
																													pGVar6.value = 112.0;
																													pGVar6.unit = "point";
																													pGVar5.height = pGVar6;
																													local_400[0].hasValue = false;
																													local_400[0].value = false;
																													local_400 = new Nullable<bool>(true);
																													pGVar5.textured = local_400[0];
																													local_408[0].hasValue = false;
																													local_408[0].value = false;
																													local_408 = new Nullable<bool>(true);
																													pGVar5.worn = local_408[0];
																													local_200.hasValue = false;
																													local_200._1_3_ = 0;
																													local_200.value = 0.0;
																													local_200 = new Nullable<float>(4.0);
																													pGVar5.wornStainScale = local_200;
																													local_208.hasValue = false;
																													local_208._1_3_ = 0;
																													local_208.value = 0.0;
																													local_208 = new Nullable<float>(-1.0);
																													pGVar5.relief = local_208;
																													if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"characterTextColorInput", (object)pGVar5);
																												pGVar3 = pGVar4.klass;
																												pGVar5 = GisketchTheme.ButtonStyle("gridPickerItem", "surfaceSoft", "text", 500, 16.0, 144.0);
																												if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"gridPickerItem", (object)pGVar5);
																												if (pGVar4.klass !=null) {
																													pGVar5 = (pGVar4.klass).get_Item((Il2CppObject *)"gridPickerItem");
																												local_210.hasValue = false;
																												local_210._1_3_ = 0;
																												local_210.value = 0.0;
																												local_210 = new Nullable<float>(10.0);
																												if (pGVar5 != null) {
																													pGVar5.padding = local_210;
																													if (pGVar4.klass !=null) {
																														pGVar5 = (pGVar4.klass).get_Item((Il2CppObject *)"gridPickerItem");
																												local_218.hasValue = false;
																												local_218._1_3_ = 0;
																												local_218.value = 0.0;
																												local_218 = new Nullable<float>(7.0);
																												if (pGVar5 != null) {
																													pGVar5.gap = local_218;
																													if (pGVar4.klass !=null) {
																														pGVar5 = (pGVar4.klass).get_Item((Il2CppObject *)"gridPickerItem");
																												if (pGVar5 != null) {
																													pGVar5.textColor = "text";
																													if (pGVar4.klass !=null) {
																														pGVar5 = (pGVar4.klass).get_Item((Il2CppObject *)"gridPickerItem");
																												local_220.hasValue = false;
																												local_220._1_3_ = 0;
																												local_220.value = 0.0;
																												local_220 = new Nullable<float>(0.045);
																												if (pGVar5 != null) {
																													pGVar5.pressDepth = local_220;
																													pGVar3 = pGVar4.klass;
																													pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "gridPickerThumbnail";
																													pGVar5.background = "clear";
																													local_410[0].hasValue = false;
																													local_410[0].value = false;
																													local_410 = new Nullable<bool>(false);
																													pGVar5.textured = local_410[0];
																													local_418[0].hasValue = false;
																													local_418[0].value = false;
																													local_418 = new Nullable<bool>(false);
																													pGVar5.worn = local_418[0];
																													if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"gridPickerThumbnail", (object)pGVar5);
																												pGVar3 = pGVar4.klass;
																												pGVar5 = GisketchTheme.TextStyle("gridPickerLabel", "textMuted", "text", 500, 15.0);
																												if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"gridPickerLabel", (object)pGVar5);
																												if (pGVar4.klass !=null) {
																													pGVar5 = (pGVar4.klass).get_Item((Il2CppObject *)"gridPickerLabel");
																												if (pGVar5 != null) {
																													pGVar5.textAlignment = "center";
																													pGVar3 = pGVar4.klass;
																													pGVar5 = GisketchTheme.ButtonStyle("profileGridItem", "surfaceSoft", "text", 500, 16.0, 144.0);
																												if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"profileGridItem", (object)pGVar5);
																												if (pGVar4.klass !=null) {
																													pGVar5 = (pGVar4.klass).get_Item((Il2CppObject *)"profileGridItem");
																												local_228.hasValue = false;
																												local_228._1_3_ = 0;
																												local_228.value = 0.0;
																												local_228 = new Nullable<float>(10.0);
																												if (pGVar5 != null) {
																													pGVar5.padding = local_228;
																													if (pGVar4.klass !=null) {
																														pGVar5 = (pGVar4.klass).get_Item((Il2CppObject *)"profileGridItem");
																												local_230.hasValue = false;
																												local_230._1_3_ = 0;
																												local_230.value = 0.0;
																												local_230 = new Nullable<float>(7.0);
																												if (pGVar5 != null) {
																													pGVar5.gap = local_230;
																													if (pGVar4.klass !=null) {
																														pGVar5 = (pGVar4.klass).get_Item((Il2CppObject *)"profileGridItem");
																												if (pGVar5 != null) {
																													pGVar5.textColor = "text";
																													if (pGVar4.klass !=null) {
																														pGVar5 = (pGVar4.klass).get_Item((Il2CppObject *)"profileGridItem");
																												local_238.hasValue = false;
																												local_238._1_3_ = 0;
																												local_238.value = 0.0;
																												local_238 = new Nullable<float>(0.045);
																												if (pGVar5 != null) {
																													pGVar5.pressDepth = local_238;
																													pGVar3 = pGVar4.klass;
																													pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profileGridItemThumbnail";
																													pGVar5.background = "engravedBg";
																													local_420[0].hasValue = false;
																													local_420[0].value = false;
																													local_420 = new Nullable<bool>(true);
																													pGVar5.textured = local_420[0];
																													local_428[0].hasValue = false;
																													local_428[0].value = false;
																													local_428 = new Nullable<bool>(true);
																													pGVar5.worn = local_428[0];
																													local_240.hasValue = false;
																													local_240._1_3_ = 0;
																													local_240.value = 0.0;
																													local_240 = new Nullable<float>(3.0);
																													pGVar5.wornStainScale = local_240;
																													local_248.hasValue = false;
																													local_248._1_3_ = 0;
																													local_248.value = 0.0;
																													local_248 = new Nullable<float>(-1.0);
																													pGVar5.relief = local_248;
																													if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"profileGridItemThumbnail", (object)pGVar5);
																												pGVar3 = pGVar4.klass;
																												pGVar5 = GisketchTheme.TextStyle("profileGridItemLabel", "textMuted", "text", 500, 15.0);
																												if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"profileGridItemLabel", (object)pGVar5);
																												if (pGVar4.klass !=null) {
																													pGVar5 = (pGVar4.klass).get_Item((Il2CppObject *)"profileGridItemLabel");
																												if (pGVar5 != null) {
																													pGVar5.textAlignment = "center";
																													pGVar3 = pGVar4.klass;
																													pGVar5 = GisketchTheme.TextStyle("profileEmoteSlotText", "textMuted", "text", 500, 20.0);
																												if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"profileEmoteSlotText", (object)pGVar5);
																												if (pGVar4.klass !=null) {
																													pGVar5 = (pGVar4.klass).get_Item((Il2CppObject *)"profileEmoteSlotText");
																												if (pGVar5 != null) {
																													pGVar5.textAlignment = "center";
																													pGVar3 = pGVar4.klass;
																													pGVar5 = GisketchTheme.TextStyle("profileEmoteWheelTitle", "text", "jek5", 400, 36.0);
																												if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"profileEmoteWheelTitle", (object)pGVar5);
																												if (pGVar4.klass !=null) {
																													pGVar5 = (pGVar4.klass).get_Item((Il2CppObject *)"profileEmoteWheelTitle");
																												if (pGVar5 != null) {
																													pGVar5.textAlignment = "center";
																													pGVar3 = pGVar4.klass;
																													pGVar5 = GisketchTheme.TextStyle("profileEmoteWheelSubtext", "textMuted", "text", 400, 18.0);
																												if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"profileEmoteWheelSubtext", (object)pGVar5);
																												if (pGVar4.klass !=null) {
																													pGVar5 = (pGVar4.klass).get_Item((Il2CppObject *)"profileEmoteWheelSubtext");
																												if (pGVar5 != null) {
																													pGVar5.textAlignment = "center";
																													pGVar3 = pGVar4.klass;
																													pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "profileColorSwatch";
																													pGVar5.background = "surface";
																													local_430[0].hasValue = false;
																													local_430[0].value = false;
																													local_430 = new Nullable<bool>(true);
																													pGVar5.textured = local_430[0];
																													local_438[0].hasValue = false;
																													local_438[0].value = false;
																													local_438 = new Nullable<bool>(true);
																													pGVar5.worn = local_438[0];
																													local_250.hasValue = false;
																													local_250._1_3_ = 0;
																													local_250.value = 0.0;
																													local_250 = new Nullable<float>(2.0);
																													pGVar5.wornStainScale = local_250;
																													local_258.hasValue = false;
																													local_258._1_3_ = 0;
																													local_258.value = 0.0;
																													local_258 = new Nullable<float>(1.0);
																													pGVar5.relief = local_258;
																													local_440[0].hasValue = false;
																													local_440[0].value = false;
																													local_440 = new Nullable<bool>(true);
																													pGVar5.reliefGradient = local_440[0] ;
																													pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar6 = new GisketchLength();
																												if (pGVar6 != null) {
																													pGVar6.value = 42.0;
																													pGVar6.unit = "point";
																													pGVar5.width = pGVar6;
																													pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar6 = new GisketchLength();
																												if (pGVar6 != null) {
																													pGVar6.value = 42.0;
																													pGVar6.unit = "point";
																													pGVar5.height = pGVar6;
																													if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"profileColorSwatch", (object)pGVar5);
																												pGVar3 = pGVar4.klass;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "mainMenuLogo";
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar6 = new GisketchLength();
																												if (pGVar6 != null) {
																													pGVar6.value = 640.0;
																													pGVar6.unit = "point";
																													pGVar5.width = pGVar6;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar6 = new GisketchLength();
																												if (pGVar6 != null) {
																													pGVar6.value = 450.0;
																													pGVar6.unit = "point";
																													pGVar5.height = pGVar6;
																													if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"mainMenuLogo", (object)pGVar5);
																												pGVar3 = pGVar4.klass;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "mainMenuBrushButton";
																													pGVar5.background = "primary";
																													pGVar5.textColor = "void";
																													pGVar5.fontFamily = "menuText";
																													local_260.hasValue = false;
																													local_260._1_3_ = 0;
																													local_260.value = 0;
																													local_260 = new Nullable<int>(400);
																													pGVar5.fontWeight = local_260;
																													local_268.hasValue = false;
																													local_268._1_3_ = 0;
																													local_268.value = 0.0;
																													local_268 = new Nullable<float>(56.0);
																													pGVar5.fontSize = local_268;
																													pGVar5.textAlignment = "left";
																													local_270.hasValue = false;
																													local_270._1_3_ = 0;
																													local_270.value = 0.0;
																													local_270 = new Nullable<float>(52.0);
																													pGVar5.iconSize = local_270;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar6 = new GisketchLength();
																												if (pGVar6 != null) {
																													pGVar6.value = 118.0;
																													pGVar6.unit = "point";
																													pGVar5.height = pGVar6;
																													local_278.hasValue = false;
																													local_278._1_3_ = 0;
																													local_278.value = 0.0;
																													local_278 = new Nullable<float>(112.0);
																												pGVar5.paddingX = local_278;
																												local_280.hasValue = false;
																												local_280._1_3_ = 0;
																												local_280.value = 0.0;
																												local_280 = new Nullable<float>(18.0);
																												pGVar5.gap = local_280;
																												local_448[0].hasValue = false;
																												local_448[0].value = false;
																												local_448 = new Nullable<bool>(true);
																												pGVar5.textured = local_448[0];
																												local_450[0].hasValue = false;
																												local_450[0].value = false;
																												local_450 = new Nullable<bool>(true);
																												pGVar5.worn = local_450[0];
																												local_288.hasValue = false;
																												local_288._1_3_ = 0;
																												local_288.value = 0.0;
																												local_288 = new Nullable<float>(4.0);
																												pGVar5.wornStainScale = local_288;
																												pGVar5.motion = "slide";
																												if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"mainMenuBrushButton", (object)pGVar5);
																												pGVar3 = pGVar4.klass;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "mainMenuTipPanel";
																													pGVar5.background = "clear";
																													if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"mainMenuTipPanel", (object)pGVar5);
																												pGVar3 = pGVar4.klass;
																												pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "mainMenuTipBackground";
																													pGVar5.background = "primary";
																													if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"mainMenuTipBackground", (object)pGVar5);
																												pGVar3 = pGVar4.klass;
																												pGVar5 = GisketchTheme.TextStyle("mainMenuTipText", "buttonText", "jek5", 400, 30.0);
																												if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"mainMenuTipText", (object)pGVar5);
																												if (pGVar4.klass !=null) {
																													pGVar5 = (pGVar4.klass).get_Item((Il2CppObject *)"mainMenuTipText");
																												if (pGVar5 != null) {
																													pGVar5.textAlignment = "left";
																													pGVar3 = pGVar4.klass;
																													pGVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchStyleDefinition));
																												pGVar5 = new GisketchStyleDefinition();
																												if (pGVar5 != null) {
																													pGVar5.name = "mainMenuFooterSpriteButton";
																													pGVar5.background = "clear";
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar6 = new GisketchLength();
																												if (pGVar6 != null) {
																													pGVar6.value = 48.0;
																													pGVar6.unit = "point";
																													pGVar5.width = pGVar6;
																												pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLength));
																												pGVar6 = new GisketchLength();
																												if (pGVar6 != null) {
																													pGVar6.value = 48.0;
																													pGVar6.unit = "point";
																													pGVar5.height = pGVar6;
																													if (pGVar3 != null) {

																												pGVar3.set_Item((Il2CppObject *)"mainMenuFooterSpriteButton", (object)pGVar5);
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

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x5240890", Offset = "0x523F890", VA = "0x5240890")]
	private void ApplyColors(GisketchColorToken[] colors)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$ApplyColors): clean
		uint uVar1;
		GisketchColorToken pGVar2;
		Dictionary<string, Color> __this_00;
		Color value;
		Color color;
		bool bVar3;
		ulong uVar4;
		ulong uVar5;
		Color local_48;

		local_48.r = 0.0;
		local_48.g = 0.0;
		local_48.b = 0.0;
		local_48.a = 0.0;
		if ((colors != null) && (0 < (int)colors.Length)) {
			uVar4 = colors.Length & 0xffffffff;
			uVar5 = 0;
			do {
				if (uVar4 <= uVar5) {
					throw new IndexOutOfRangeException();
				}
				pGVar2 = colors[uVar5];
				if (pGVar2 != null) {
					bVar3 = String.IsNullOrEmpty(pGVar2.name);
					if (!bVar3) {
						bVar3 = String.IsNullOrEmpty(pGVar2.value);
						if (!bVar3) {
							bVar3 = ColorUtility.TryParseHtmlString(pGVar2.value, ref local_48);
							if (bVar3) {
								__this_00 = this._colors;
								if (__this_00 == null) {
									throw new NullReferenceException();
								}
								value.b = local_48.b;
								value.a = local_48.a;
								value.r = local_48.r;
								value.g = local_48.g;
								__this_00.set_Item((object)pGVar2.name, value);
								color.b = local_48.b;
								color.a = local_48.a;
								color.r = local_48.r;
								color.g = local_48.g;
								this.ApplyAlias(pGVar2.name, color);
							}
						}
					}
				}
				uVar5 = uVar5 + 1;
				uVar1 = (uint)colors.Length;
				uVar4 = (ulong)uVar1;
			} while ((long)uVar5 < (long)(int)uVar1);
		}
		return;
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x52409A0", Offset = "0x523F9A0", VA = "0x52409A0")]
	private void ApplyAlias(string token, Color color)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$ApplyAlias): 1 lines keep C-only constructs
		bool bVar1;
		String* ppSVar2;
		Dictionary<string, Color> pSVar3;

		bVar1 = (token == "primary");
		if (bVar1) {
			pSVar3 = this._colors;
			if (pSVar3 != null) {
				ppSVar2 = &"accent";
				goto label_05340bb4;
			}
		}
		else {
			bVar1 = (token == "secondary");
			if (bVar1) {
				pSVar3 = this._colors;
				if (pSVar3 != null) {
					ppSVar2 = &"accent2";
					goto label_05340bb4;
				}
			}
			else {
				bVar1 = (token == "surface");
				if (bVar1) {
					pSVar3 = this._colors;
					if (pSVar3 != null) {
						pSVar3.set_Item((Il2CppObject *)"paper", color);
						pSVar3 = this._colors;
						if (pSVar3 != null) {
							ppSVar2 = &"panel";
							goto label_05340bb4;
						}
					}
				}
				else {
					bVar1 = (token == "surfaceSoft");
					if (!bVar1) {
						bVar1 = (token == "text");
						if (bVar1) {
							pSVar3 = this._colors;
							if (pSVar3 == null) goto label_05340bde;
							ppSVar2 = &"ink";
						}
						else {
							bVar1 = (token == "textMuted");
							if (!bVar1) {
								return;
							}
							pSVar3 = this._colors;
							if (pSVar3 == null) goto label_05340bde;
							ppSVar2 = &"muted";
						}
	label_05340bb4: ;
						pSVar3.set_Item((object)*ppSVar2, color);
						return;
					}
					pSVar3 = this._colors;
					if (pSVar3 != null) {
						ppSVar2 = &"panelSoft";
						goto label_05340bb4;
					}
				}
			}
		}
	label_05340bde: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x5240BF0", Offset = "0x523FBF0", VA = "0x5240BF0")]
	private GisketchThemePalette FindPalette(GisketchThemeDefinition definition)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$FindPalette): 3 lines keep C-only constructs
		uint uVar1;
		GisketchThemePalette[] pGVar2;
		String b;
		GisketchThemePalette pGVar3;
		bool bVar4;
		String* ppSVar5;
		ulong uVar6;
		ulong uVar7;
		GisketchThemePalette pGVar8;

		if (definition == null) {
	label_05340d08: ;
			throw new NullReferenceException();
		}
		pGVar2 = definition.palettes;
		if ((pGVar2 != null) && (pGVar2.Length != 0)) {
			bVar4 = String.IsNullOrEmpty(definition.mode);
			if (bVar4) {
				ppSVar5 = &"light";
			}
			else {
				ppSVar5 = &definition.mode;
			}
			pGVar2 = definition.palettes;
			if (pGVar2 == null) goto label_05340d08;
			if (0 < (int)pGVar2.Length) {
				b = *ppSVar5;
				uVar6 = pGVar2.Length & 0xffffffff;
				uVar7 = 0;
				pGVar8 = null;
				do {
					if (uVar6 <= uVar7) {
						throw new IndexOutOfRangeException();
					}
					pGVar3 = pGVar2[uVar7];
					if ((pGVar3 != null) &&(bVar4 = String.IsNullOrEmpty(pGVar3.name), !bVar4)) {
						bVar4 = String.Equals(pGVar3.name, b, 5);
						if (bVar4) {
							return pGVar3;
						}
						if ((pGVar8 == null) ||(bVar4 = String.Equals(pGVar3.name, "light", 5))) {
							pGVar8 = pGVar3;
						}
					}
					uVar7 = uVar7 + 1;
					uVar1 = (uint)pGVar2.Length;
					uVar6 = (ulong)uVar1;
				} while ((long)uVar7 < (long)(int)uVar1);
				return pGVar8;
			}
		}
		return null;
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x5240D10", Offset = "0x523FD10", VA = "0x5240D10")]
	private static GisketchStyleDefinition MergeStyle(GisketchStyleDefinition baseStyle, GisketchStyleDefinition patch)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$MergeStyle): 41 lines keep C-only constructs
		GisketchLength pGVar1;
		GisketchStyleDefinition pGVar2;
		bool bVar3;
		GisketchStyleDefinition pGVar4;
		Nullable<int> pSVar5;
		GisketchLength pGVar6;
		Nullable<float> pSVar7;
		Nullable<bool> pSVar8;
		String pSVar9;
		Nullable<bool>[] local_48 = new Nullable<bool>[4];
		Nullable<float> local_40;
		Nullable<int> local_38;

		pGVar4 = patch;
		pGVar4 = GisketchTheme.CopyStyle(baseStyle);
		if (patch != null) {
			bVar3 = String.IsNullOrEmpty(patch.name);
			pGVar2 = patch;
			if (bVar3) {
				pGVar2 = pGVar4;
			}
			if (pGVar4 == null) {
	label_053411a4: ;
				throw new NullReferenceException();
			}
			pGVar4.name = pGVar2.name;
			pSVar9 = patch.background;
			if (pSVar9 == null) {
				pSVar9 = pGVar4.background;
			}
			pGVar4.background = pSVar9;
			pSVar9 = patch.textColor;
			if (pSVar9 == null) {
				pSVar9 = pGVar4.textColor;
			}
			pGVar4.textColor = pSVar9;
			pSVar9 = patch.fontFamily;
			if (pSVar9 == null) {
				pSVar9 = pGVar4.fontFamily;
			}
			pGVar4.fontFamily = pSVar9;
			local_38 = patch.fontWeight;
			pSVar5 = &local_38;
			if (local_38.hasValue == false) {
				pSVar5 = &pGVar4.fontWeight;
			}
			pGVar4.fontWeight = *pSVar5;
			local_40 = patch.fontSize;
			pSVar7 = &pGVar4.fontSize;
			if (local_40.hasValue != false) {
				pSVar7 = &local_40;
			}
			pGVar4.fontSize = *pSVar7;
			pSVar9 = patch.textAlignment;
			if (pSVar9 == null) {
				pSVar9 = pGVar4.textAlignment;
			}
			pGVar4.textAlignment = pSVar9;
			local_40 = patch.iconSize;
			pSVar7 = &pGVar4.iconSize;
			if (local_40.hasValue != false) {
				pSVar7 = &local_40;
			}
			pGVar4.iconSize = *pSVar7;
			local_40 = patch.padding;
			pSVar7 = &pGVar4.padding;
			if (local_40.hasValue != false) {
				pSVar7 = &local_40;
			}
			pGVar4.padding = *pSVar7;
			local_40 = patch.paddingX;
			pSVar7 = &pGVar4.paddingX;
			if (local_40.hasValue != false) {
				pSVar7 = &local_40;
			}
			pGVar4.paddingX = *pSVar7;
			local_40 = patch.paddingY;
			pSVar7 = &pGVar4.paddingY;
			if (local_40.hasValue != false) {
				pSVar7 = &local_40;
			}
			pGVar4.paddingY = *pSVar7;
			local_40 = patch.gap;
			pSVar7 = &pGVar4.gap;
			if (local_40.hasValue != false) {
				pSVar7 = &local_40;
			}
			pGVar4.gap = *pSVar7;
			pGVar1 = patch.width;
			if (pGVar1 == null) {
				pGVar6 = pGVar4.width;
			}
			else {
				pGVar6 = new GisketchLength();
				if (pGVar6 == null) goto label_053411a4;
				pGVar6.value = pGVar1.value;
				pGVar6.unit = pGVar1.unit;
			}
			pGVar4.width = pGVar6;
			pGVar1 = patch.height;
			if (pGVar1 == null) {
				pGVar6 = pGVar4.height;
			}
			else {
				pGVar6 = new GisketchLength();
				if (pGVar6 == null) goto label_053411a4;
				pGVar6.value = pGVar1.value;
				pGVar6.unit = pGVar1.unit;
			}
			pGVar4.height = pGVar6;
			local_40 = patch.aspectRatio;
			pSVar7 = &pGVar4.aspectRatio;
			if (local_40.hasValue != false) {
				pSVar7 = &local_40;
			}
			pGVar4.aspectRatio = *pSVar7;
			pSVar9 = patch.motion;
			if (pSVar9 == null) {
				pSVar9 = pGVar4.motion;
			}
			pGVar4.motion = pSVar9;
			local_48[0] = patch.textured;
			pSVar8 = &pGVar4.textured;
			if (local_48[0].hasValue != false) {
				pSVar8 = local_48;
			}
			pGVar4.textured = *pSVar8;
			local_48[0] = patch.worn;
			pSVar8 = &pGVar4.worn;
			if (local_48[0].hasValue != false) {
				pSVar8 = local_48;
			}
			pGVar4.worn = *pSVar8;
			local_40 = patch.wornStainScale;
			pSVar7 = &pGVar4.wornStainScale;
			if (local_40.hasValue != false) {
				pSVar7 = &local_40;
			}
			pGVar4.wornStainScale = *pSVar7;
			local_40 = patch.relief;
			pSVar7 = &pGVar4.relief;
			if (local_40.hasValue != false) {
				pSVar7 = &local_40;
			}
			pGVar4.relief = *pSVar7;
			local_48[0] = patch.reliefGradient;
			pSVar8 = &pGVar4.reliefGradient;
			if (local_48[0].hasValue != false) {
				pSVar8 = local_48;
			}
			pGVar4.reliefGradient = *pSVar8;
			local_40 = patch.pressDepth;
			pSVar7 = &pGVar4.pressDepth;
			if (local_40.hasValue != false) {
				pSVar7 = &local_40;
			}
			pGVar4.pressDepth = *pSVar7;
			local_48[0] = patch.shadow;
			pSVar8 = &pGVar4.shadow;
			if (local_48[0].hasValue != false) {
				pSVar8 = local_48;
			}
			pGVar4.shadow = *pSVar8;
		}
		return pGVar4;
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x52411B0", Offset = "0x52401B0", VA = "0x52411B0")]
	private static GisketchStyleDefinition CopyStyle(GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$CopyStyle): clean
		GisketchLength pGVar1;
		GisketchStyleDefinition __this;
		GisketchLength pGVar2;

		__this = new GisketchStyleDefinition();
		if (style == null) {
			return __this;
		}
		if (__this == null) goto label_0534146f;
		__this.name = style.name;
		__this.background = style.background;
		__this.textColor = style.textColor;
		__this.fontFamily = style.fontFamily;
		__this.fontWeight = style.fontWeight;
		__this.fontSize = style.fontSize;
		__this.textAlignment = style.textAlignment;
		__this.iconSize = style.iconSize;
		__this.padding = style.padding;
		__this.paddingX = style.paddingX;
		__this.paddingY = style.paddingY;
		__this.gap = style.gap;
		pGVar1 = style.width;
		if ((typeof(GisketchTheme)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075428a4 != false) goto label_053412be;
	label_0534131a: ;
			Il2CppMethodInitialized_075428a4 = true;
			if (pGVar1 != null) goto label_053412c3;
	label_05341332: ;
			pGVar2 = null;
		}
		else {
			if (Il2CppMethodInitialized_075428a4 == false) goto label_0534131a;
	label_053412be: ;
			if (pGVar1 == null) goto label_05341332;
	label_053412c3: ;
			pGVar2 = new GisketchLength();
			if (pGVar2 == null) goto label_0534146f;
			pGVar2.value = pGVar1.value;
			pGVar2.unit = pGVar1.unit;
		}
		__this.width = pGVar2;
		pGVar1 = style.height;
		if (pGVar1 == null) {
			pGVar2 = null;
		}
		else {
			pGVar2 = new GisketchLength();
			if (pGVar2 == null) {
	label_0534146f: ;
				throw new NullReferenceException();
			}
			pGVar2.value = pGVar1.value;
			pGVar2.unit = pGVar1.unit;
		}
		__this.height = pGVar2;
		__this.aspectRatio = style.aspectRatio;
		__this.motion = style.motion;
		__this.textured = style.textured;
		__this.worn = style.worn;
		__this.wornStainScale = style.wornStainScale;
		__this.relief = style.relief;
		__this.reliefGradient = style.reliefGradient;
		__this.pressDepth = style.pressDepth;
		__this.shadow = style.shadow;
		return __this;
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x5241480", Offset = "0x5240480", VA = "0x5241480")]
	private static GisketchLength CopyLength(GisketchLength length)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$CopyLength): clean
		GisketchLength __this;

		if (length == null) {
			__this = null;
		}
		else {
			__this = new GisketchLength();
			if (__this == null) {
				throw new NullReferenceException();
			}
			__this.value = length.value;
			__this.unit = length.unit;
		}
		return __this;
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x52404E0", Offset = "0x523F4E0", VA = "0x52404E0")]
	private void AddSettingsDefaults()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$AddSettingsDefaults): clean
		Dictionary<object, object> pSVar1;
		GisketchStyleDefinition pGVar2;

		pSVar1 = (Dictionary<object, object>)this._styles;
		pGVar2 = GisketchTheme.TextStyle("settingsCategoryTitle", "text", "header", 400, 56.0);
		if (pSVar1 != null) {
			pSVar1.set_Item((Il2CppObject *)"settingsCategoryTitle", (object)pGVar2);
			pSVar1 = (Dictionary<object, object>)this._styles;
			pGVar2 = GisketchTheme.TextStyle("settingsSubtabStrip", "text", "header", 400, 30.0);
			if (pSVar1 != null) {
				pSVar1.set_Item((Il2CppObject *)"settingsSubtabStrip", (object)pGVar2);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x5241540", Offset = "0x5240540", VA = "0x5241540")]
	public static GisketchTheme FromJson(string json)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$FromJson): clean
		GisketchTheme pGVar1;

		if ((typeof(GisketchTheme)._2).cctor_finished_or_no_cctor == 0) {
			return pGVar1;
		}
		return pGVar1;
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x52415A0", Offset = "0x52405A0", VA = "0x52415A0")]
	public static GisketchTheme FromDefinition(GisketchThemeDefinition definition)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$FromDefinition): 2 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		GisketchColorToken[] colors;
		GisketchStyleDefinition[] pGVar3;
		Dictionary<object, object> pSVar4;
		String value;
		Dictionary<object, object> __this;
		GisketchMotionToken[] pGVar5;
		GisketchMotionToken value_00;
		bool bVar6;
		GisketchTheme __this_00;
		GisketchThemePalette pGVar7;
		ulong uVar8;
		GisketchStyleDefinition pGVar9;
		GisketchTheme __this_01;
		ulong uVar11;
		GisketchStyleDefinition baseStyle;
		GisketchStyleDefinition local_40;
		GisketchThemeDefinition local_38;

		__this_00 = new GisketchTheme();
		if (__this_00 == null) {
	label_05341851: ;
			throw new NullReferenceException();
		}
		__this_00.AddDefaults();
		if (definition != null) {
			__this_01 = (GisketchTheme)definition.mode;
			bVar6 = String.Equals((String)__this_01, "dark", 5);
			if (bVar6) {
				__this_00._IsDarkMode_k__BackingField = true;
				__this_00._ReliefIntensity_k__BackingField = 0.5;
			}
			colors = definition.colors;
			if (colors != null) {
				__this_01 = __this_00;
				__this_00.ApplyColors(colors);
			}
			pGVar7 = __this_01.FindPalette(definition);
			if (pGVar7 != null) {
				__this_00.ApplyColors(pGVar7.colors);
			}
			pGVar3 = definition.styles;
			local_38 = definition;
			if ((pGVar3 != null) &&(0 < (int)pGVar3.Length)) {
				uVar8 = pGVar3.Length & 0xffffffff;
				uVar11 = 0;
				do {
					if (uVar8 <= uVar11) goto label_0534184c;
					pGVar9 = pGVar3[uVar11];
					if ((pGVar9 != null) &&(bVar6 = String.IsNullOrEmpty(pGVar9.name), !bVar6)) {
						pSVar4 = (Dictionary<object, object>)__this_00._styles;
						value = pGVar9.name;
						local_40 = null;
						bVar6 = String.IsNullOrEmpty(value);
						baseStyle = null;
						if (bVar6) {
	label_0534175a: ;
							uVar2 = (typeof(GisketchTheme)._2).cctor_finished_or_no_cctor;
						}
						else {
							__this = (Dictionary<object, object>)__this_00._styles;
							if (__this == null) goto label_05341851;
							bVar6 = __this.TryGetValue((object)value, (object*)&local_40);
							if (bVar6) {
								baseStyle = local_40;
								goto label_0534175a;
							}
							baseStyle = null;
							uVar2 = (typeof(GisketchTheme)._2).cctor_finished_or_no_cctor;
						}
						if (uVar2 == 0) {
							il2cpp_codegen_runtime_class_init(typeof(GisketchTheme)) ;
						}
						pGVar9 = GisketchTheme.MergeStyle(baseStyle, pGVar9);
						if (pSVar4 == null) goto label_05341851;
						pSVar4.set_Item((object)value, (object)pGVar9) ;
					}
					uVar11 = uVar11 + 1;
					uVar1 = (uint)pGVar3.Length;
					uVar8 = (ulong)uVar1;
				} while ((long)uVar11 < (long)(int)uVar1);
			}
			pGVar5 = local_38.motions;
			if ((pGVar5 != null) && (0 < (int)pGVar5.Length)) {
				uVar8 = pGVar5.Length & 0xffffffff;
				uVar11 = 0;
				do {
					if (uVar8 <= uVar11) {
	label_0534184c: ;
						throw new IndexOutOfRangeException();
					}
					value_00 = pGVar5[uVar11];
					if ((value_00 != null) &&(bVar6 = String.IsNullOrEmpty(value_00.name), !bVar6)) {
						pSVar4 = (Dictionary<object, object>)__this_00._motions;
						if (pSVar4 == null) goto label_05341851;
						pSVar4.set_Item((object)value_00.name, (object)value_00);
					}
					uVar11 = uVar11 + 1;
					uVar1 = (uint)pGVar5.Length;
					uVar8 = (ulong)uVar1;
				} while ((long)uVar11 < (long)(int)uVar1);
			}
		}
		return __this_00;
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x5241A10", Offset = "0x5240A10", VA = "0x5241A10")]
	public GisketchStyleDefinition GetStyle(string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$GetStyle): 1 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		GisketchStyleDefinition pGVar3;
		GisketchStyleDefinition local_18;

		local_18 = null;
		bVar2 = String.IsNullOrEmpty(name);
		if (!bVar2) {
			pSVar1 = (Dictionary<object, object>)this._styles;
			if (pSVar1 == null) goto label_05341abc;
			bVar2 = pSVar1.TryGetValue((object)name, (object*)&local_18);
			if (bVar2) {
				return local_18;
			}
		}
		pSVar1 = (Dictionary<object, object>)this._styles;
		if (pSVar1 != null) {
			pGVar3 = pSVar1.get_Item((Il2CppObject *)"default");
			return pGVar3;
		}
	label_05341abc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x5241AD0", Offset = "0x5240AD0", VA = "0x5241AD0")]
	public bool TryGetStyle(string name, out GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$TryGetStyle): clean
		Dictionary<object, object> __this_00;
		bool bVar1;

		bVar1 = String.IsNullOrEmpty(name);
		if (!bVar1) {
			__this_00 = (Dictionary<object, object>)this._styles;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this_00.TryGetValue((object)name, (object*)style);
			if (bVar1) {
				return true;
			}
		}
		*style = null;
		return false;
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x5241B50", Offset = "0x5240B50", VA = "0x5241B50")]
	public Color GetColor(string token, Color fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$GetColor): 14 lines keep C-only constructs
		Dictionary<string, Color> __this_00;
		Color UVar1;
		bool bVar2;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Color UVar3;
		Color local_48;
		byte[] local_38 = new byte[16];
		byte[] local_28 = new byte[16];

		local_28._8_4_ = in_XMM1_Dc;
		local_28._0_8_ = fallback._8_8_;
		local_28._12_4_ = in_XMM1_Dd;
		local_38._8_4_ = in_XMM0_Dc;
		local_38._0_8_ = fallback._0_8_;
		local_38._12_4_ = in_XMM0_Dd;
		local_48.r = 0.0;
		local_48.g = 0.0;
		local_48.b = 0.0;
		local_48.a = 0.0;
		bVar2 = String.IsNullOrEmpty(token);
		if (bVar2) {
		}
		else {
			__this_00 = this._colors;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar2 = __this_00.TryGetValue((object)token, ref local_48);
			if (bVar2) {
				UVar1.b = local_48.b;
				UVar1.a = local_48.a;
				UVar1.r = local_48.r;
				UVar1.g = local_48.g;
				return (Color)UVar1;
			}
		}
		UVar3.g = (float)local_38._4_4_;
		UVar3.r = (float)local_38._0_4_;
		UVar3.a = (float)local_28._4_4_;
		UVar3.b = (float)local_28._0_4_;
		return (Color)UVar3;
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x5241BF0", Offset = "0x5240BF0", VA = "0x5241BF0")]
	public string GetMotionPreset(string tokenOrPreset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$GetMotionPreset): clean
		Dictionary<object, object> __this_00;
		bool bVar1;
		object local_18;

		local_18 = null;
		bVar1 = String.IsNullOrEmpty(tokenOrPreset);
		if (!bVar1) {
			__this_00 = (Dictionary<object, object>)this._motions;
			if (__this_00 == null) {
	label_05341c66: ;
				throw new NullReferenceException();
			}
			bVar1 = __this_00.TryGetValue((object)tokenOrPreset, ref local_18);
			if (bVar1) {
				if (local_18 == null) goto label_05341c66;
				tokenOrPreset = local_18[1].monitor;
			}
		}
		return tokenOrPreset;
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x5241C70", Offset = "0x5240C70", VA = "0x5241C70")]
	public float GetMotionDuration(string tokenOrPreset, float fallback = 0.16f)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$GetMotionDuration): 2 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		object local_18;

		local_18 = null;
		bVar1 = String.IsNullOrEmpty(tokenOrPreset);
		if (bVar1) {
			return fallback;
		}
		__this_00 = (Dictionary<object, object>)this._motions;
		if (__this_00 != null) {
			bVar1 = __this_00.TryGetValue((object)tokenOrPreset, ref local_18);
			if (!bVar1) {
				return fallback;
			}
			if (local_18 != null) {
				if (*(float)&local_18[2].klass <= 0.0) {
					return fallback;
				}
				return *(float)&local_18[2].klass;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x5241980", Offset = "0x5240980", VA = "0x5241980")]
	private GisketchStyleDefinition StyleOrNull(string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$StyleOrNull): 1 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		GisketchStyleDefinition pGVar2;
		GisketchStyleDefinition pGStack_20;

		pGStack_20 = null;
		bVar1 = String.IsNullOrEmpty(name);
		if (!bVar1) {
			__this_00 = (Dictionary<object, object>)this._styles;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this_00.TryGetValue((object)name, (object*)&pGStack_20);
			if (bVar1) {
			}
			else {
			}
		}
		return pGVar2;
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x5241860", Offset = "0x5240860", VA = "0x5241860")]
	public GisketchTheme()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c (Gisketch.Aottg2UI.Styling.GisketchTheme$$.ctor): 2 lines keep C-only constructs
		Dictionary<string, Color> __this_00;
		Dictionary<string, GisketchStyleDefinition> __this_01;
		Dictionary<string, GisketchMotionToken> __this_02;

		__this_00 = new Dictionary<string, Color>();
		this._colors = __this_00;
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, GisketchStyleDefinition>));
		__this_01 = new Dictionary<object, object>();
		this._styles = __this_01;
		__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, GisketchMotionToken>));
		__this_02 = new Dictionary<object, object>();
		this._motions = __this_02;
		this._ReliefIntensity_k__BackingField = 1.0;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchTheme.c.

	// Gisketch.Aottg2UI.Styling.GisketchTheme$$.cctor: clean
	static GisketchTheme()
	{
		GisketchThemeDefinition __this;
		GisketchTheme pGVar1;

		__this = new GisketchThemeDefinition();
		pGVar1 = GisketchTheme.FromDefinition(__this);
		GisketchTheme.Default = pGVar1;
		return;
	}
}
