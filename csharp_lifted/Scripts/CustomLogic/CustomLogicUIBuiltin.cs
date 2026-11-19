// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicUIBuiltin
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicUIBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicUIBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Realtime;
using UI;

namespace CustomLogic;

[Token(Token = "0x200060A")]
[CompilerGenerated]
internal class CustomLogicUIBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x200060B")]
	public static class Factory
	{
		[Token(Token = "0x6003850")]
		[Address(RVA = "0x5A0D6E0", Offset = "0x5A0C6E0", VA = "0x5A0D6E0")]
		public static CustomLogicUIBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicUIBuiltin __this;
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this_00;
			MethodInfo lastManagedFrame;
			int local_14;

			if (args == null) {
				throw new NullReferenceException();
			}
			if (args.Length != 0) {
				pSVar1 = local_14.ToString();
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicUIBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicUIBuiltin();
			return __this;
		}
	}

	[Token(Token = "0x200060C")]
	public static class Bindings
	{
		[Token(Token = "0x40019B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003851")]
		[Address(RVA = "0x5A0D800", Offset = "0x5A0C800", VA = "0x5A0D800")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$CreateMemberBinding): 18 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicUIBuiltin> pCVar3;
			CLMethodBinding<CustomLogicUIBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x70e4ec15) {
				if (uVar2 < 0x4326a2ef) {
					if (uVar2 < 0x2ccf9d28) {
						if (uVar2 < 0x1ee00fa6) {
							if (uVar2 == 0x13ce3a06) {
								bVar1 = (name == "SetLabelBackgroundColor");
								if (bVar1) {
									pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__SetLabelBackgroundColor();
									return (ICLMemberBinding)pCVar4;
								}
							}
							else if (uVar2 == 0x1ee00fa5) {
								bVar1 = (name == "LegacyLabels");
								if (bVar1) {
									pCVar3 = CustomLogicUIBuiltin.Bindings.__CreatePropertyBinding__LegacyLabels();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x23021f22) {
							bVar1 = (name == "SetLabelForTimeAll");
							if (bVar1) {
								pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__SetLabelForTimeAll();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x23322007) {
							bVar1 = (name == "IsPopupActive");
							if (bVar1) {
								pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__IsPopupActive();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x2ccf9d27) {
							bVar1 = (name == "SetChatPanelActive");
							if (bVar1) {
								pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__SetChatPanelActive();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 < 0x324642bf) {
						if (uVar2 == 0x2f841609) {
							bVar1 = (name == "SetFeedPanelActive");
							if (bVar1) {
								pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__SetFeedPanelActive();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x324642be) {
							bVar1 = (name == "AddPopupButton");
							if (bVar1) {
								pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__AddPopupButton();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x33881a91) {
						bVar1 = (name == "Button");
						if (bVar1) {
							pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__Button();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x3868216a) {
						bVar1 = (name == "TextField");
						if (bVar1) {
							pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__TextField();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x4326a2ee) {
						bVar1 = (name == "SetLabelAll");
						if (bVar1) {
							pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__SetLabelAll();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0x5de6f45c) {
					if (uVar2 < 0x4f9b1f06) {
						if (uVar2 == 0x4f65f048) {
							bVar1 = (name == "SetScoreboardHeader");
							if (bVar1) {
								pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__SetScoreboardHeader();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x4f9b1f05) {
							bVar1 = (name == "SliderInt");
							if (bVar1) {
								pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__SliderInt();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x53573f1f) {
						bVar1 = (name == "ProgressBar");
						if (bVar1) {
							pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__ProgressBar();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x590ca79a) {
						bVar1 = (name == "Image");
						if (bVar1) {
							pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__Image();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x5de6f45b) {
						bVar1 = (name == "VisualElement");
						if (bVar1) {
							pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__VisualElement();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0x612ae108) {
					if (uVar2 == 0x60c9e8c4) {
						bVar1 = (name == "ForceHideNames");
						if (bVar1) {
							pCVar3 = CustomLogicUIBuiltin.Bindings.__CreatePropertyBinding__ForceHideNames();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x610a18c5) {
						bVar1 = (name == "SetLabelActive");
						if (bVar1) {
							pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__SetLabelActive();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x612ae107) {
						bVar1 = (name == "SetBottomHUDActive");
						if (bVar1) {
							pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__SetBottomHUDActive();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 == 0x68e6cb10) {
					bVar1 = (name == "Icon");
					if (bVar1) {
						if ((typeof(CustomLogicUIBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							il2cpp_codegen_runtime_class_init(typeof(CustomLogicUIBuiltin.Bindings)) ;
						}
						pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__Icon();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x6cf1ba25) {
					bVar1 = (name == "Toggle");
					if (bVar1) {
						if ((typeof(CustomLogicUIBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							il2cpp_codegen_runtime_class_init(typeof(CustomLogicUIBuiltin.Bindings)) ;
						}
						pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__Toggle();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x70e4ec14) {
					bVar1 = (name == "ClearPopup");
					if (bVar1) {
						if ((typeof(CustomLogicUIBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							il2cpp_codegen_runtime_class_init(typeof(CustomLogicUIBuiltin.Bindings)) ;
						}
						pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__ClearPopup();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xbbd01376) {
				if (uVar2 < 0x9eccf29e) {
					if (uVar2 < 0x8e6a8408) {
						if (uVar2 == 0x8105de5a) {
							bVar1 = (name == "SetKDRPanelActive");
							if (bVar1) {
								pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__SetKDRPanelActive();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x8e6a8407) {
							bVar1 = (name == "SetLabelForTime");
							if (bVar1) {
								pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__SetLabelForTime();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x9a3972f4) {
						bVar1 = (name == "AddPopupLabel");
						if (bVar1) {
							pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__AddPopupLabel();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x9b74c01c) {
						bVar1 = (name == "Slider");
						if (bVar1) {
							pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__Slider();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x9eccf29d) {
						bVar1 = (name == "Label");
						if (bVar1) {
							pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__Label();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0xab9e5c86) {
					if (uVar2 == 0xa76f5664) {
						bVar1 = (name == "ShowChangeCharacterMenu");
						if (bVar1) {
							pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__ShowChangeCharacterMenu();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xab9e5c85) {
						bVar1 = (name == "HidePopup");
						if (bVar1) {
							pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__HidePopup();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 == 0xb3a837ef) {
					bVar1 = (name == "GetThemeColor");
					if (bVar1) {
						if ((typeof(CustomLogicUIBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							il2cpp_codegen_runtime_class_init(typeof(CustomLogicUIBuiltin.Bindings)) ;
						}
						pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__GetThemeColor();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xb6dc3cfc) {
					bVar1 = (name == "GetPopups");
					if (bVar1) {
						if ((typeof(CustomLogicUIBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							il2cpp_codegen_runtime_class_init(typeof(CustomLogicUIBuiltin.Bindings)) ;
						}
						pCVar3 = CustomLogicUIBuiltin.Bindings.__CreatePropertyBinding__GetPopups();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xbbd01375) {
					bVar1 = (name == "ScrollView");
					if (bVar1) {
						if ((typeof(CustomLogicUIBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							il2cpp_codegen_runtime_class_init(typeof(CustomLogicUIBuiltin.Bindings)) ;
						}
						pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__ScrollView();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xd4660d27) {
				if (uVar2 < 0xc1afe526) {
					if (uVar2 == 0xbfe92359) {
						bVar1 = (name == "GetRootVisualElement");
						if (bVar1) {
							pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__GetRootVisualElement();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xc1afe525) {
						bVar1 = (name == "SetLabelBackgroundColorAll");
						if (bVar1) {
							pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__SetLabelBackgroundColorAll();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 == 0xc3967d6b) {
					bVar1 = (name == "SetLabel");
					if (bVar1) {
						if ((typeof(CustomLogicUIBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							il2cpp_codegen_runtime_class_init(typeof(CustomLogicUIBuiltin.Bindings)) ;
						}
						pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__SetLabel();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xccadec40) {
					bVar1 = (name == "SetScoreboardProperty");
					if (bVar1) {
						if ((typeof(CustomLogicUIBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							il2cpp_codegen_runtime_class_init(typeof(CustomLogicUIBuiltin.Bindings)) ;
						}
						pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__SetScoreboardProperty();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xd4660d26) {
					bVar1 = (name == "ShowPopup");
					if (bVar1) {
						if ((typeof(CustomLogicUIBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							il2cpp_codegen_runtime_class_init(typeof(CustomLogicUIBuiltin.Bindings)) ;
						}
						pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__ShowPopup();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xf19b28b8) {
				if (uVar2 == 0xdbe78666) {
					bVar1 = (name == "WrapStyleTag");
					if (bVar1) {
						if ((typeof(CustomLogicUIBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							il2cpp_codegen_runtime_class_init(typeof(CustomLogicUIBuiltin.Bindings)) ;
						}
						pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__WrapStyleTag();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xe4462ef8) {
					bVar1 = (name == "Dropdown");
					if (bVar1) {
						if ((typeof(CustomLogicUIBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							il2cpp_codegen_runtime_class_init(typeof(CustomLogicUIBuiltin.Bindings)) ;
						}
						pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__Dropdown();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xf19b28b7) {
					bVar1 = (name == "AddPopupButtons");
					if (bVar1) {
						if ((typeof(CustomLogicUIBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							il2cpp_codegen_runtime_class_init(typeof(CustomLogicUIBuiltin.Bindings)) ;
						}
						pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__AddPopupButtons();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 == 0xf654e26c) {
				bVar1 = (name == "SetMinimapActive");
				if (bVar1) {
					pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__SetMinimapActive();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xfc401d15) {
				bVar1 = (name == "CreatePopup");
				if (bVar1) {
					pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__CreatePopup();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xfeca8df1) {
				bVar1 = (name == "AddPopupBottomButton");
				if (bVar1) {
					pCVar4 = CustomLogicUIBuiltin.Bindings.__CreateMethodBinding__AddPopupBottomButton();
					return (ICLMemberBinding)pCVar4;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicUIBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003852")]
		[Address(RVA = "0x5A0E780", Offset = "0x5A0D780", VA = "0x5A0E780")]
		public static CLPropertyBinding<CustomLogicUIBuiltin> __CreatePropertyBinding__LegacyLabels()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreatePropertyBinding__LegacyLabels): 3 lines keep C-only constructs
			Func<CustomLogicUIBuiltin, object> __this;
			Action<CustomLogicUIBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicUIBuiltin> __this_01;

			__this = new Func<CustomLogicUIBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__LegacyLabels_g____getter_2_0);
			__this_00 = new Action<CustomLogicUIBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__LegacyLabels_g____setter_2_1);
			__this_01 = new CLPropertyBinding<CustomLogicUIBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6003853")]
		[Address(RVA = "0x5A0E860", Offset = "0x5A0D860", VA = "0x5A0E860")]
		public static CLPropertyBinding<CustomLogicUIBuiltin> __CreatePropertyBinding__ForceHideNames()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreatePropertyBinding__ForceHideNames): 3 lines keep C-only constructs
			Func<CustomLogicUIBuiltin, object> __this;
			Action<CustomLogicUIBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicUIBuiltin> __this_01;

			__this = new Func<CustomLogicUIBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__ForceHideNames_g____getter_3);
			__this_00 = new Action<CustomLogicUIBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__ForceHideNames_g____setter_3);
			__this_01 = new CLPropertyBinding<CustomLogicUIBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6003854")]
		[Address(RVA = "0x5A0E940", Offset = "0x5A0D940", VA = "0x5A0E940")]
		public static CLPropertyBinding<CustomLogicUIBuiltin> __CreatePropertyBinding__GetPopups()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreatePropertyBinding__GetPopups): 2 lines keep C-only constructs
			Func<CustomLogicUIBuiltin, object> __this;
			CLPropertyBinding<CustomLogicUIBuiltin> __this_00;

			__this = new Func<CustomLogicUIBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings___CreatePropertyBinding__GetPopups_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicUIBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003855")]
		[Address(RVA = "0x5A0E9E0", Offset = "0x5A0D9E0", VA = "0x5A0E9E0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__SetLabel()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabel): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547038 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabel_b__5_0) ;
				Il2CppMethodInitialized_07547038 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabel_b__5_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003856")]
		[Address(RVA = "0x5A0EB20", Offset = "0x5A0DB20", VA = "0x5A0EB20")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__SetLabelForTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelForTime): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547039 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547039 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelForTime_b__6_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003857")]
		[Address(RVA = "0x5A0EC60", Offset = "0x5A0DC60", VA = "0x5A0EC60")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__SetLabelAll()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelAll): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754703a == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_0754703a = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelAll_b__7_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003858")]
		[Address(RVA = "0x5A0EDA0", Offset = "0x5A0DDA0", VA = "0x5A0EDA0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__SetLabelForTimeAll()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelForTimeAll): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754703b == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_0754703b = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelForTimeAll_b__8_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003859")]
		[Address(RVA = "0x5A0EEE0", Offset = "0x5A0DEE0", VA = "0x5A0EEE0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__CreatePopup()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__CreatePopup): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754703c == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_0754703c = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__CreatePopup_b__9_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600385A")]
		[Address(RVA = "0x5A0F020", Offset = "0x5A0E020", VA = "0x5A0F020")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__ShowPopup()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ShowPopup): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754703d == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_0754703d = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ShowPopup_b__10_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600385B")]
		[Address(RVA = "0x5A0F160", Offset = "0x5A0E160", VA = "0x5A0F160")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__HidePopup()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__HidePopup): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754703e == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_0754703e = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__HidePopup_b__11_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600385C")]
		[Address(RVA = "0x5A0F2A0", Offset = "0x5A0E2A0", VA = "0x5A0F2A0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__ClearPopup()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ClearPopup): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754703f == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_0754703f = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__12_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__12_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ClearPopup_b__12_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__12_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600385D")]
		[Address(RVA = "0x5A0F3E0", Offset = "0x5A0E3E0", VA = "0x5A0F3E0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__AddPopupLabel()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__AddPopupLabel): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547040 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547040 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__13_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__13_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupLabel_b__13_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__13_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600385E")]
		[Address(RVA = "0x5A0F520", Offset = "0x5A0E520", VA = "0x5A0F520")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__AddPopupButton()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__AddPopupButton): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547041 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547041 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__14_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__14_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupButton_b__14_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__14_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600385F")]
		[Address(RVA = "0x5A0F660", Offset = "0x5A0E660", VA = "0x5A0F660")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__AddPopupBottomButton()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__AddPopupBottomButton): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547042 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547042 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__15_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__15_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupBottomButton_b__15_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__15_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003860")]
		[Address(RVA = "0x5A0F7A0", Offset = "0x5A0E7A0", VA = "0x5A0F7A0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__AddPopupButtons()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__AddPopupButtons): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547043 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547043 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__16_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__16_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__AddPopupButtons_b__16_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__16_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003861")]
		[Address(RVA = "0x5A0F8E0", Offset = "0x5A0E8E0", VA = "0x5A0F8E0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__WrapStyleTag()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__WrapStyleTag): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547044 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547044 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__17_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__17_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__WrapStyleTag_b__17_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__17_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003862")]
		[Address(RVA = "0x5A0FA20", Offset = "0x5A0EA20", VA = "0x5A0FA20")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__ShowChangeCharacterMenu()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ShowChangeCharacterMenu): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547045 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547045 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__18_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__18_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ShowChangeCharacterMenu_b__18);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__18_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003863")]
		[Address(RVA = "0x5A0FB60", Offset = "0x5A0EB60", VA = "0x5A0FB60")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__SetScoreboardHeader()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetScoreboardHeader): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547046 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547046 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__19_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__19_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetScoreboardHeader_b__19_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__19_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003864")]
		[Address(RVA = "0x5A0FCA0", Offset = "0x5A0ECA0", VA = "0x5A0FCA0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__SetScoreboardProperty()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetScoreboardProperty): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547047 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547047 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__20_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__20_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetScoreboardProperty_b__20_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__20_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003865")]
		[Address(RVA = "0x5A0FDE0", Offset = "0x5A0EDE0", VA = "0x5A0FDE0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__GetThemeColor()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__GetThemeColor): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547048 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547048 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__21_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__21_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__GetThemeColor_b__21_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__21_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003866")]
		[Address(RVA = "0x5A0FF20", Offset = "0x5A0EF20", VA = "0x5A0FF20")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__IsPopupActive()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__IsPopupActive): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547049 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547049 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__22_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__22_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__IsPopupActive_b__22_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__22_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003867")]
		[Address(RVA = "0x5A10060", Offset = "0x5A0F060", VA = "0x5A10060")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__SetLabelActive()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelActive): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754704a == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_0754704a = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__23_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__23_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelActive_b__23_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__23_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003868")]
		[Address(RVA = "0x5A101A0", Offset = "0x5A0F1A0", VA = "0x5A101A0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__SetLabelBackgroundColor()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelBackgroundColor): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754704b == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_0754704b = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__24_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__24_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelBackgroundColor_b__24);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__24_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003869")]
		[Address(RVA = "0x5A102E0", Offset = "0x5A0F2E0", VA = "0x5A102E0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__SetLabelBackgroundColorAll()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetLabelBackgroundColorAll): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754704c == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_0754704c = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__25_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__25_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetLabelBackgroundColorAll_b);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__25_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600386A")]
		[Address(RVA = "0x5A10420", Offset = "0x5A0F420", VA = "0x5A10420")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__SetKDRPanelActive()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetKDRPanelActive): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754704d == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_0754704d = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__26_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__26_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetKDRPanelActive_b__26_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__26_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600386B")]
		[Address(RVA = "0x5A10560", Offset = "0x5A0F560", VA = "0x5A10560")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__SetMinimapActive()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetMinimapActive): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754704e == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_0754704e = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__27_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__27_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetMinimapActive_b__27_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__27_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600386C")]
		[Address(RVA = "0x5A106A0", Offset = "0x5A0F6A0", VA = "0x5A106A0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__SetChatPanelActive()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetChatPanelActive): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754704f == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_0754704f = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__28_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__28_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetChatPanelActive_b__28_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__28_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600386D")]
		[Address(RVA = "0x5A107E0", Offset = "0x5A0F7E0", VA = "0x5A107E0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__SetFeedPanelActive()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetFeedPanelActive): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547050 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547050 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__29_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__29_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetFeedPanelActive_b__29_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__29_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600386E")]
		[Address(RVA = "0x5A10920", Offset = "0x5A0F920", VA = "0x5A10920")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__SetBottomHUDActive()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SetBottomHUDActive): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547051 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547051 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__30_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__30_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SetBottomHUDActive_b__30_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__30_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600386F")]
		[Address(RVA = "0x5A10A60", Offset = "0x5A0FA60", VA = "0x5A10A60")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__GetRootVisualElement()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__GetRootVisualElement): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547052 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547052 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__31_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__31_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__GetRootVisualElement_b__31_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__31_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003870")]
		[Address(RVA = "0x5A10BA0", Offset = "0x5A0FBA0", VA = "0x5A10BA0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__VisualElement()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__VisualElement): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547053 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547053 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__32_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__32_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__VisualElement_b__32_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__32_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003871")]
		[Address(RVA = "0x5A10CE0", Offset = "0x5A0FCE0", VA = "0x5A10CE0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__Button()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Button): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547054 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547054 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__33_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__33_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Button_b__33_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__33_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003872")]
		[Address(RVA = "0x5A10E20", Offset = "0x5A0FE20", VA = "0x5A10E20")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__Label()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Label): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547055 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547055 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__34_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__34_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Label_b__34_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__34_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003873")]
		[Address(RVA = "0x5A10F60", Offset = "0x5A0FF60", VA = "0x5A10F60")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__TextField()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__TextField): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547056 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547056 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__35_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__35_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__TextField_b__35_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__35_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003874")]
		[Address(RVA = "0x5A110A0", Offset = "0x5A100A0", VA = "0x5A110A0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__Toggle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Toggle): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547057 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547057 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__36_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__36_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Toggle_b__36_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__36_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003875")]
		[Address(RVA = "0x5A111E0", Offset = "0x5A101E0", VA = "0x5A111E0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__Slider()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Slider): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547058 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547058 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__37_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__37_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Slider_b__37_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__37_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003876")]
		[Address(RVA = "0x5A11320", Offset = "0x5A10320", VA = "0x5A11320")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__SliderInt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__SliderInt): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547059 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_07547059 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__38_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__38_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__SliderInt_b__38_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__38_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003877")]
		[Address(RVA = "0x5A11460", Offset = "0x5A10460", VA = "0x5A11460")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__Dropdown()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Dropdown): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754705a == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_0754705a = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__39_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__39_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Dropdown_b__39_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__39_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003878")]
		[Address(RVA = "0x5A115A0", Offset = "0x5A105A0", VA = "0x5A115A0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__ProgressBar()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ProgressBar): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754705b == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_0754705b = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__40_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__40_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ProgressBar_b__40_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__40_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003879")]
		[Address(RVA = "0x5A116E0", Offset = "0x5A106E0", VA = "0x5A116E0")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__ScrollView()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__ScrollView): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754705c == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_0754705c = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__41_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__41_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__ScrollView_b__41_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__41_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600387A")]
		[Address(RVA = "0x5A11820", Offset = "0x5A10820", VA = "0x5A11820")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__Icon()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Icon): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754705d == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_0754705d = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__42_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__42_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Icon_b__42_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__42_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600387B")]
		[Address(RVA = "0x5A11960", Offset = "0x5A10960", VA = "0x5A11960")]
		public static CLMethodBinding<CustomLogicUIBuiltin> __CreateMethodBinding__Image()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin.Bindings$$__CreateMethodBinding__Image): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicUIBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicUIBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicUIBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754705e == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicUIBuiltin, @object[], @object>)) ;
				Il2CppMethodInitialized_0754705e = true;
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__43_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicUIBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__43_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicUIBuiltin.Bindings.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicUIBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicUIBuiltin_Bindings_c___CreateMethodBinding__Image_b__43_0);
				pCVar2 = typeof(CustomLogicUIBuiltin.Bindings.c).static_fields;
				pCVar2.__9__43_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicUIBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x40019AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, string> LastSetLabels;

	[Token(Token = "0x40019AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly object[] SetLabelRpcArgs;

	[Token(Token = "0x40019AF")]
	private const string SetLabelRpc = "SetLabelRPC";

	[Token(Token = "0x40019B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static bool _forceHideCharacterNames;

	[Token(Token = "0x40019B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11")]
	private static bool _legacyLabels;

	[Token(Token = "0x17000A30")]
	private static InGameMenu Menu
	{
		[Token(Token = "0x600381A")]
		[Address(RVA = "0x5A09B10", Offset = "0x5A08B10", VA = "0x5A09B10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$get_Menu): 1 lines keep C-only constructs
			byte bVar1;
			uint uVar2;
			InGameMenu pUVar3;

			if (Il2CppMethodInitialized_07547000 == false) {
				Il2CppMethodInitialized_07547000 = true;
				uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				pUVar3 = (InGameMenu)UIManager.CurrentMenu;
			}
			else {
				pUVar3 = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
			}
			if (pUVar3 != null) {
				bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
				if (((pUVar3.klass._2).typeHierarchyDepth < bVar1) ||((pUVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
					throw new InvalidCastException();
				}
			}
			return pUVar3;
		}
	}

	[Token(Token = "0x17000A31")]
	public static bool LegacyLabels
	{
		[Token(Token = "0x600381E")]
		[Address(RVA = "0x5A0A210", Offset = "0x5A09210", VA = "0x5A0A210")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$get_LegacyLabels): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07547004 == false) {
				Il2CppMethodInitialized_07547004 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicUIBuiltin._legacyLabels;
			}
			return (bool)*(byte)((long)(typeof(CustomLogicUIBuiltin)).static_fields + 0x11);
		}
		[Token(Token = "0x600381F")]
		[Address(RVA = "0x5A0A0F0", Offset = "0x5A090F0", VA = "0x5A0A0F0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$set_LegacyLabels): 1 lines keep C-only constructs
			byte bVar1;
			InGameMenu __this;
			bool bVar2;

			CustomLogicUIBuiltin._legacyLabels = value;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
				__this = (InGameMenu)UIManager.CurrentMenu;
			}
			else {
				__this = (InGameMenu)UIManager.CurrentMenu;
			}
			if (__this != null) {
				bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
				if ((bVar1 <= (__this.klass._2).typeHierarchyDepth) &&((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(InGameMenu))) {
					if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
					}
					bVar2 = ((Object)__this != null);
					if (bVar2) {
						__this.SetLegacyLabels(value);
						return;
					}
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000A32")]
	public static bool ForceHideNames
	{
		[Token(Token = "0x6003820")]
		[Address(RVA = "0x5A0A280", Offset = "0x5A09280", VA = "0x5A0A280")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$get_ForceHideNames): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07547006 == false) {
				Il2CppMethodInitialized_07547006 = true;
				uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicUIBuiltin._forceHideCharacterNames;
			}
			return (bool)*(byte)((long)(typeof(CustomLogicUIBuiltin)).static_fields + 0x10);
		}
		[Token(Token = "0x6003821")]
		[Address(RVA = "0x5A0A2F0", Offset = "0x5A092F0", VA = "0x5A0A2F0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$set_ForceHideNames): clean
			CustomLogicUIBuiltin._forceHideCharacterNames = value;
			return;
		}
	}

	[Token(Token = "0x17000A33")]
	public static CustomLogicListBuiltin GetPopups
	{
		[Token(Token = "0x6003835")]
		[Address(RVA = "0x5A0BBC0", Offset = "0x5A0ABC0", VA = "0x5A0BBC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$get_GetPopups): 11 lines keep C-only constructs
			int piVar1;
			byte bVar2;
			uint uVar3;
			uint uVar4;
			InGameMenu __this;
			List<object> __this_00;
			Object[] pSVar5;
			MethodInfo pMVar6;
			bool bVar7;
			CustomLogicListBuiltin __this_01;
			List<string> __this_02;
			System_Collections_Generic_List_Enumerator_object__o SStack_58;
			byte[] auStack_38 = new byte[16];
			object pIStack_28;

			__this_01 = new CustomLogicListBuiltin();
			if (Il2CppMethodInitialized_07547000 == false) {
				Il2CppMethodInitialized_07547000 = true;
				uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar3 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
				__this = (InGameMenu)UIManager.CurrentMenu;
			}
			else {
				__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
			}
			if (__this != null) {
				bVar2 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
				if (((__this.klass._2).typeHierarchyDepth < bVar2) ||((__this.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(InGameMenu))) {
					throw new InvalidCastException();
				}
				__this_02 = __this.GetAllCustomPopups();
				if (__this_02 != null) {
					auStack_38.GetEnumerator((List<object>)__this_02);
					SStack_58._current = pIStack_28;
					SStack_58._list = (List<T>)auStack_38._0_8_;
					SStack_58._index = auStack_38._8_4_;
					SStack_58._version = auStack_38._12_4_;
					auStack_38._0_8_ = null;
					auStack_38._8_8_ = &SStack_58;
					if (__this_01 == null) {
						auStack_38._8_8_ = &SStack_58;
						bVar7 = SStack_58.MoveNext();
						if (bVar7) {
							throw new NullReferenceException();
						}
					}
					else {
						while (true) {
							bVar7 = SStack_58.MoveNext();
							pMVar6 = MethodInfo_System_Collections_Generic_List_object_Add;
							if (!(bVar7)) break;
							__this_00 = __this_01.List;
							if (__this_00 == null) {
		label_05b0be1b: ;
								throw new NullReferenceException();
							}
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pSVar5 = __this_00._items;
							if (pSVar5 == null) goto label_05b0be1b;
							uVar4 = __this_00._size;
							if (uVar4 < (uint)pSVar5.Length) {
								__this_00._size = uVar4 + 1;
								pSVar5[(int)uVar4] = SStack_58._current;
							}
							else {
								__this_00.AddWithResize(SStack_58._current);
							}
						}
					}
					SStack_58.Dispose();
					return __this_01;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000A34")]
	public override string ClassName
	{
		[Token(Token = "0x600384B")]
		[Address(RVA = "0x5A0D5A0", Offset = "0x5A0C5A0", VA = "0x5A0D5A0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$get_ClassName): clean
			return "UI";
		}
	}

	[Token(Token = "0x17000A35")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600384C")]
		[Address(RVA = "0x5A0D5D0", Offset = "0x5A0C5D0", VA = "0x5A0D5D0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000A36")]
	public override bool IsStatic
	{
		[Token(Token = "0x600384D")]
		[Address(RVA = "0x5A0D5E0", Offset = "0x5A0C5E0", VA = "0x5A0D5E0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000A37")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600384E")]
		[Address(RVA = "0x5A0D5F0", Offset = "0x5A0C5F0", VA = "0x5A0D5F0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x600381B")]
	[Address(RVA = "0x5A09BC0", Offset = "0x5A08BC0", VA = "0x5A09BC0")]
	public CustomLogicUIBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07547001 == false) {
			Il2CppMethodInitialized_07547001 = true;
			uVar1 = (typeof(BuiltinClassInstance)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BuiltinClassInstance)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			base();
			return;
		}
		base();
		return;
	}

	[Token(Token = "0x600381C")]
	[Address(RVA = "0x5A09C30", Offset = "0x5A08C30", VA = "0x5A09C30")]
	public void OnPlayerJoin(Player player)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$OnPlayerJoin): 10 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		Object[] pSVar2;
		PhotonView __this_00;
		bool bVar3;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_01;
		object pIVar4;
		String obj;
		object pIVar5;
		uint local_6c;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_68;
		byte[] local_48 = new byte[16];
		object local_38;

		local_68._dictionary = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._currentKey = null;
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			bVar3 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar3 = PhotonNetwork.IsMasterClient;
		}
		if (bVar3) {
			if (((typeof(CustomLogicUIBuiltin))._2).cctor_finished_or_no_cctor == 0) {
			}
			pSVar1 = (Dictionary<object, object>)CustomLogicUIBuiltin.LastSetLabels;
			if ((pSVar1 == null) ||(__this_01 = pSVar1.Keys , __this_01 == null)) {
				throw new NullReferenceException();
			}
			local_48.GetEnumerator(__this_01);
			local_68._currentKey = local_38;
			local_68._dictionary = (Dictionary<TKey, TValue>)local_48._0_8_;
			local_68._index = local_48._8_4_;
			local_68._version = local_48._12_4_;
			local_48._0_8_ = null;
			local_48._8_8_ = &local_68;
			while (true) {
				bVar3 = local_68.MoveNext();
				pIVar5 = local_68._currentKey;
				if (!(bVar3)) break;
				pSVar2 = CustomLogicUIBuiltin.SetLabelRpcArgs;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				if ((pIVar5 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar2.obj).klass)._1).element_class), pIVar4 == null)) {
					pIVar5 = new ArrayTypeMismatchException();
					throw pIVar5;
				}
				if ((int)pSVar2.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				pSVar2[0] = pIVar5;
				pSVar1 = (Dictionary<object, object>)CustomLogicUIBuiltin.LastSetLabels;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				pSVar2 = CustomLogicUIBuiltin.SetLabelRpcArgs;
				obj = pSVar1.get_Item(pIVar5);
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				if ((obj != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)obj, (((pSVar2.obj).klass)._1).element_class), pIVar5 == null)) {
					pIVar5 = new ArrayTypeMismatchException();
					throw pIVar5;
				}
				if ((pSVar2.Length & 0xfffffffe) == 0) {
					throw new IndexOutOfRangeException();
				}
				pSVar2[1] = (object)obj;
				pSVar2 = CustomLogicUIBuiltin.SetLabelRpcArgs;
				local_6c = 0;
				pIVar5 = (object)local_6c;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				if ((pIVar5 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar2.obj).klass)._1).element_class), pIVar4 == null)) {
					pIVar5 = new ArrayTypeMismatchException();
					throw pIVar5;
				}
				if ((uint)pSVar2.Length < 3) {
					throw new IndexOutOfRangeException();
				}
				pSVar2[2] = pIVar5;
				__this_00 = RPCManager.PhotonView;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.RPC("SetLabelRPC", player, CustomLogicUIBuiltin.SetLabelRpcArgs);
			}
			local_68.Dispose();
		}
		return;
	}

	[Token(Token = "0x600381D")]
	[Address(RVA = "0x5A0A040", Offset = "0x5A09040", VA = "0x5A0A040")]
	public static void ClearLabels()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$ClearLabels): 3 lines keep C-only constructs
		uint uVar1;
		Dictionary<object, object> __this;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_07547003 == false) {
			Il2CppMethodInitialized_07547003 = true;
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<object, object>)CustomLogicUIBuiltin.LastSetLabels;
			method_00 = MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear;
		}
		else {
			__this = *(Dictionary<object, object>*)(typeof(CustomLogicUIBuiltin)).static_fields;
			method_00 = MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear;
		}
		MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear = method_00;
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Clear();
		CustomLogicUIBuiltin.LegacyLabels = true;
		CustomLogicUIBuiltin._forceHideCharacterNames = false;
		return;
	}

	[Token(Token = "0x6003822")]
	[Address(RVA = "0x5A0A340", Offset = "0x5A09340", VA = "0x5A0A340")]
	public static bool GetForceHideNames()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$GetForceHideNames): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07547008 == false) {
			Il2CppMethodInitialized_07547008 = true;
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return CustomLogicUIBuiltin._forceHideCharacterNames;
		}
		return (bool)*(byte)((long)(typeof(CustomLogicUIBuiltin)).static_fields + 0x10);
	}

	[Token(Token = "0x6003823")]
	[Address(RVA = "0x5A0A3B0", Offset = "0x5A093B0", VA = "0x5A0A3B0")]
	public static void SetLabel(string label, string message)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$SetLabel): clean
		InGameManager.SetLabel(label, message, 0.0);
		return;
	}

	[Token(Token = "0x6003824")]
	[Address(RVA = "0x5A0A410", Offset = "0x5A09410", VA = "0x5A0A410")]
	public static void SetLabelForTime(string label, string message, float time)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$SetLabelForTime): clean
		InGameManager.SetLabel(label, message, time);
		return;
	}

	[Token(Token = "0x6003825")]
	[Address(RVA = "0x5A0A480", Offset = "0x5A09480", VA = "0x5A0A480")]
	public static void SetLabelAll(string label, string message)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$SetLabelAll): 3 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		Object[] pSVar2;
		PhotonView __this;
		bool bVar3;
		String b;
		object pIVar4;
		object pIVar5;
		uint local_2c;

		if (Il2CppMethodInitialized_0754700b == false) {
			Il2CppMethodInitialized_0754700b = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_05b0a4b3;
	label_05b0a539: ;
			bVar3 = PhotonNetwork.IsMasterClient;
		}
		else {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_05b0a539;
	label_05b0a4b3: ;
			bVar3 = PhotonNetwork.IsMasterClient;
		}
		if (!bVar3) {
			return;
		}
		if (((typeof(CustomLogicUIBuiltin))._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar1 = (Dictionary<object, object>)CustomLogicUIBuiltin.LastSetLabels;
		if (pSVar1 == null) goto label_05b0a792;
		bVar3 = pSVar1.ContainsKey((object)label);
		if (bVar3) {
			pSVar1 = (Dictionary<object, object>)CustomLogicUIBuiltin.LastSetLabels;
			if (pSVar1 == null) goto label_05b0a792;
			b = pSVar1.get_Item((object)label);
			bVar3 = (message != b);
			if (bVar3) goto label_05b0a5e3;
		}
		else {
	label_05b0a5e3: ;
			pSVar2 = CustomLogicUIBuiltin.SetLabelRpcArgs;
			if (pSVar2 == null) goto label_05b0a792;
			if ((label != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)label, (((pSVar2.obj).klass)._1).element_class), pIVar4 == null)) {
	label_05b0a79c: ;
				pIVar4 = new ArrayTypeMismatchException();
				throw pIVar4;
			}
			if ((int)pSVar2.Length == 0) {
	label_05b0a797: ;
				throw new IndexOutOfRangeException();
			}
			pSVar2[0] = (object)label;
			pSVar2 = CustomLogicUIBuiltin.SetLabelRpcArgs;
			if (pSVar2 == null) goto label_05b0a792;
			if ((message != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)message, (((pSVar2.obj).klass)._1).element_class), pIVar4 == null)) goto label_05b0a79c;
			if ((pSVar2.Length & 0xfffffffe) == 0) goto label_05b0a797;
			pSVar2[1] = (object)message;
			pSVar2 = CustomLogicUIBuiltin.SetLabelRpcArgs;
			local_2c = 0;
			pIVar4 = (object)local_2c;
			if (pSVar2 == null) goto label_05b0a792;
			if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pSVar2.obj).klass)._1).element_class), pIVar5 == null)) goto label_05b0a79c;
			if ((uint)pSVar2.Length < 3) goto label_05b0a797;
			pSVar2[2] = pIVar4;
			__this = RPCManager.PhotonView;
			if (__this == null) goto label_05b0a792;
			__this.RPC("SetLabelRPC", 0, CustomLogicUIBuiltin.SetLabelRpcArgs);
		}
		pSVar1 = (Dictionary<object, object>)CustomLogicUIBuiltin.LastSetLabels;
		if (pSVar1 != null) {
			pSVar1.set_Item((object)label, (object)message);
			return;
		}
	label_05b0a792: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003826")]
	[Address(RVA = "0x5A0A7B0", Offset = "0x5A097B0", VA = "0x5A0A7B0")]
	public static void SetLabelForTimeAll(string label, string message, float time)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$SetLabelForTimeAll): 3 lines keep C-only constructs
		Object[] pSVar1;
		PhotonView __this;
		bool bVar2;
		object pIVar3;
		object pIVar4;
		byte[] local_24 = new byte[4];

		if (Il2CppMethodInitialized_0754700c == false) {
			Il2CppMethodInitialized_0754700c = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_05b0a7df;
	label_05b0a839: ;
			bVar2 = PhotonNetwork.IsMasterClient;
		}
		else {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_05b0a839;
	label_05b0a7df: ;
			bVar2 = PhotonNetwork.IsMasterClient;
		}
		if (!bVar2) {
			return;
		}
		if (((typeof(CustomLogicUIBuiltin))._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar1 = CustomLogicUIBuiltin.SetLabelRpcArgs;
		if (pSVar1 != null) {
			if ((label != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)label, (((pSVar1.obj).klass)._1).element_class), pIVar3 == null)) {
	label_05b0a9c8: ;
				pIVar3 = new ArrayTypeMismatchException();
				throw pIVar3;
			}
			if ((int)pSVar1.Length == 0) {
	label_05b0a9c3: ;
				throw new IndexOutOfRangeException();
			}
			pSVar1[0] = (object)label;
			pSVar1 = CustomLogicUIBuiltin.SetLabelRpcArgs;
			if (pSVar1 != null) {
				if ((message != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)message, (((pSVar1.obj).klass)._1).element_class), pIVar3 == null)) goto label_05b0a9c8;
				if ((pSVar1.Length & 0xfffffffe) == 0) goto label_05b0a9c3;
				pSVar1[1] = (object)message;
				pSVar1 = CustomLogicUIBuiltin.SetLabelRpcArgs;
				pIVar3 = (object)local_24;
				if (pSVar1 != null) {
					if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((pSVar1.obj).klass)._1).element_class), pIVar4 == null)) goto label_05b0a9c8;
					if ((uint)pSVar1.Length < 3) goto label_05b0a9c3;
					pSVar1[2] = pIVar3;
					__this = RPCManager.PhotonView;
					if (__this != null) {
						__this.RPC("SetLabelRPC", 0, CustomLogicUIBuiltin.SetLabelRpcArgs);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003827")]
	[Address(RVA = "0x5A0A9E0", Offset = "0x5A099E0", VA = "0x5A0A9E0")]
	public static string CreatePopup(string popupName, string title, int width, int height)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$CreatePopup): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;

		if (Il2CppMethodInitialized_0754700d == false) {
			Il2CppMethodInitialized_0754700d = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547000 == false) {
			Il2CppMethodInitialized_07547000 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
		if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
			throw new InvalidCastException();
		}
		__this.CreateCustomPopup(popupName, title, (float)width, (float)height);
		return popupName;
	}

	[Token(Token = "0x6003828")]
	[Address(RVA = "0x5A0AB40", Offset = "0x5A09B40", VA = "0x5A0AB40")]
	public static void ShowPopup(string popupName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$ShowPopup): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;
		CustomPopup pUVar3;

		if (Il2CppMethodInitialized_0754700e == false) {
			Il2CppMethodInitialized_0754700e = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547000 == false) {
			Il2CppMethodInitialized_07547000 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this != null) {
			bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
			if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
				throw new InvalidCastException();
			}
			pUVar3 = __this.GetCustomPopup(popupName);
			if (pUVar3 != null) {
				pUVar3.Show();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003829")]
	[Address(RVA = "0x5A0AC80", Offset = "0x5A09C80", VA = "0x5A0AC80")]
	public static void HidePopup(string popupName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$HidePopup): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;
		CustomPopup pUVar3;

		if (Il2CppMethodInitialized_0754700f == false) {
			Il2CppMethodInitialized_0754700f = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547000 == false) {
			Il2CppMethodInitialized_07547000 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this != null) {
			bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
			if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
				throw new InvalidCastException();
			}
			pUVar3 = __this.GetCustomPopup(popupName);
			if (pUVar3 != null) {
				pUVar3.Hide();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600382A")]
	[Address(RVA = "0x5A0ADC0", Offset = "0x5A09DC0", VA = "0x5A0ADC0")]
	public static void ClearPopup(string popupName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$ClearPopup): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;
		CustomPopup __this_00;

		if (Il2CppMethodInitialized_07547010 == false) {
			Il2CppMethodInitialized_07547010 = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547000 == false) {
			Il2CppMethodInitialized_07547000 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this != null) {
			bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
			if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
				throw new InvalidCastException();
			}
			__this_00 = __this.GetCustomPopup(popupName);
			if (__this_00 != null) {
				__this_00.Clear();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600382B")]
	[Address(RVA = "0x5A0AEF0", Offset = "0x5A09EF0", VA = "0x5A0AEF0")]
	public static void AddPopupLabel(string popupName, string label)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$AddPopupLabel): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;
		CustomPopup __this_00;

		if (Il2CppMethodInitialized_07547011 == false) {
			Il2CppMethodInitialized_07547011 = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547000 == false) {
			Il2CppMethodInitialized_07547000 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this != null) {
			bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
			if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
				throw new InvalidCastException();
			}
			__this_00 = __this.GetCustomPopup(popupName);
			if (__this_00 != null) {
				__this_00.AddLabel(label);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600382C")]
	[Address(RVA = "0x5A0B020", Offset = "0x5A0A020", VA = "0x5A0B020")]
	public static void AddPopupButton(string popupName, string callback, string label)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$AddPopupButton): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;
		CustomPopup __this_00;

		if (Il2CppMethodInitialized_07547012 == false) {
			Il2CppMethodInitialized_07547012 = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547000 == false) {
			Il2CppMethodInitialized_07547000 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this != null) {
			bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
			if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
				throw new InvalidCastException();
			}
			__this_00 = __this.GetCustomPopup(popupName);
			if (__this_00 != null) {
				__this_00.AddButton(callback, label);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600382D")]
	[Address(RVA = "0x5A0B160", Offset = "0x5A0A160", VA = "0x5A0B160")]
	public static void AddPopupBottomButton(string popupName, string callback, string label)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$AddPopupBottomButton): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;
		CustomPopup __this_00;

		if (Il2CppMethodInitialized_07547013 == false) {
			Il2CppMethodInitialized_07547013 = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547000 == false) {
			Il2CppMethodInitialized_07547000 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this != null) {
			bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
			if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
				throw new InvalidCastException();
			}
			__this_00 = __this.GetCustomPopup(popupName);
			if (__this_00 != null) {
				__this_00.AddBottomButton(callback, label);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600382E")]
	[Address(RVA = "0x5A0B2A0", Offset = "0x5A0A2A0", VA = "0x5A0B2A0")]
	public static void AddPopupButtons(string popupName, CustomLogicListBuiltin callbacks, CustomLogicListBuiltin labels)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$AddPopupButtons): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;
		CustomPopup __this_00;

		if (Il2CppMethodInitialized_07547014 == false) {
			Il2CppMethodInitialized_07547014 = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547000 == false) {
			Il2CppMethodInitialized_07547000 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this != null) {
			bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
			if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
				throw new InvalidCastException();
			}
			__this_00 = __this.GetCustomPopup(popupName);
			if (((callbacks != null) &&(labels != null)) && (__this_00 != null)) {
				__this_00.AddButtons(callbacks.List, labels.List);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600382F")]
	[Address(RVA = "0x5A0B3F0", Offset = "0x5A0A3F0", VA = "0x5A0B3F0")]
	public static string WrapStyleTag(string text, string style, [Optional] string arg)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$WrapStyleTag): 1 lines keep C-only constructs
		String[] values;
		String pSVar1;
		String* targetAddress;

		if (arg == null) {
			values = (String[])new string[7];
			if (values == null) goto label_05b0b680;
			if ((int)values.Length != 0) {
				values[0] = "<";
				if ((values.Length & 0xfffffffe) != 0) {
					values[1] = style;
					if (2 < (uint)values.Length) {
						values[2] = ">";
						if ((values.Length & 0xfffffffc) != 0) {
							values[3] = text;
							if (4 < (uint)values.Length) {
								values[4] = "</";
								if (5 < (uint)values.Length) {
									values[5] = style;
									if (6 < (uint)values.Length) {
										targetAddress = values.m_Items + 6;
										values[6] = ">";
	label_05b0b661: ;
										return pSVar1;
									}
								}
							}
						}
					}
				}
			}
		}
		else {
			values = (String[])new string[9];
			if (values == null) {
	label_05b0b680: ;
				throw new NullReferenceException();
			}
			if ((int)values.Length != 0) {
				values[0] = "<";
				if ((values.Length & 0xfffffffe) != 0) {
					values[1] = style;
					if (2 < (uint)values.Length) {
						values[2] = "=";
						if ((values.Length & 0xfffffffc) != 0) {
							values[3] = arg;
							if (4 < (uint)values.Length) {
								values[4] = ">";
								if (5 < (uint)values.Length) {
									values[5] = text;
									if (6 < (uint)values.Length) {
										values[6] = "</";
										if ((values.Length & 0xfffffff8) != 0) {
											values[7] = style;
											if (8 < (uint)values.Length) {
												targetAddress = values.m_Items + 8;
												values[8] = ">";
												goto label_05b0b661;
											}
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

	[Token(Token = "0x6003830")]
	[Address(RVA = "0x5A0B690", Offset = "0x5A0A690", VA = "0x5A0B690")]
	public static void ShowChangeCharacterMenu()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$ShowChangeCharacterMenu): 3 lines keep C-only constructs
		byte bVar1;
		KeybindPopup pUVar2;
		KeybindPopup pUVar3;
		bool bVar4;
		InGameMenu __this;

		__this = (InGameMenu)SceneLoader.CurrentGameManager;
		if (__this == null) goto label_05b0b880;
		bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
		if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) goto label_05b0b888;
		pUVar2 = __this.KeybindPopup;
		bVar4 = ((Object)pUVar2 != null);
		if ((!bVar4) || (pUVar2 = __this.KeybindPopup, pUVar2 == null)) {
			return;
		}
		pUVar3 = pUVar2.klass;
		bVar1 = (typeof(Human)._2).typeHierarchyDepth;
		if ((pUVar3._2).typeHierarchyDepth < bVar1) {
			return;
		}
		if ((pUVar3._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human)) {
			return;
		}
		if ((typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07547000 != false) goto label_05b0b7b9;
	label_05b0b82e: ;
			Il2CppMethodInitialized_07547000 = true;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor != 0) goto label_05b0b7d0;
	label_05b0b864: ;
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			if (Il2CppMethodInitialized_07547000 == false) goto label_05b0b82e;
	label_05b0b7b9: ;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) goto label_05b0b864;
	label_05b0b7d0: ;
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		if (__this != null) {
			bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
			if ((bVar1 <= (__this.klass._2).typeHierarchyDepth) &&((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(InGameMenu))) {
				__this.ShowCharacterChangeMenu();
				return;
			}
	label_05b0b888: ;
			throw new InvalidCastException();
		}
	label_05b0b880: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003831")]
	[Address(RVA = "0x5A0B890", Offset = "0x5A0A890", VA = "0x5A0B890")]
	public static void SetScoreboardHeader(string header)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$SetScoreboardHeader): clean
		uint uVar1;
		CustomLogicEvaluator pCVar2;

		if (Il2CppMethodInitialized_07547017 == false) {
			Il2CppMethodInitialized_07547017 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pCVar2 = CustomLogicManager.Evaluator;
		}
		else {
			pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
		}
		if (pCVar2 == null) {
			throw new NullReferenceException();
		}
		pCVar2.ScoreboardHeader = header;
		return;
	}

	[Token(Token = "0x6003832")]
	[Address(RVA = "0x5A0B920", Offset = "0x5A0A920", VA = "0x5A0B920")]
	public static void SetScoreboardProperty(string property)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$SetScoreboardProperty): clean
		CustomLogicEvaluator pCVar1;
		String pSVar2;

		pCVar1 = CustomLogicManager.Evaluator;
		pSVar2 = String.Concat("CL:", property);
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pCVar1.ScoreboardProperty = pSVar2;
		return;
	}

	[Token(Token = "0x6003833")]
	[Address(RVA = "0x5A0B9B0", Offset = "0x5A0A9B0", VA = "0x5A0B9B0")]
	public static CustomLogicColorBuiltin GetThemeColor(string panel, string category, string item)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$GetThemeColor): clean
		Color255 __this;
		CustomLogicColorBuiltin __this_00;
		Color color;

		color = UIManager.GetThemeColor(panel, category, item, "DefaultPanel");
		__this = new Color255(color);
		__this_00 = new CustomLogicColorBuiltin(__this);
		return __this_00;
	}

	[Token(Token = "0x6003834")]
	[Address(RVA = "0x5A0BA90", Offset = "0x5A0AA90", VA = "0x5A0BA90")]
	public static bool IsPopupActive(string popupName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$IsPopupActive): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;
		CustomPopup pUVar3;

		if (Il2CppMethodInitialized_0754701a == false) {
			Il2CppMethodInitialized_0754701a = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547000 == false) {
			Il2CppMethodInitialized_07547000 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this != null) {
			bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
			if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
				throw new InvalidCastException();
			}
			pUVar3 = __this.GetCustomPopup(popupName);
			if (pUVar3 != null) {
				return pUVar3.IsActive;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003836")]
	[Address(RVA = "0x5A0BE90", Offset = "0x5A0AE90", VA = "0x5A0BE90")]
	public static void SetLabelActive(string label, bool active)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$SetLabelActive): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;

		if (Il2CppMethodInitialized_0754701c == false) {
			Il2CppMethodInitialized_0754701c = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547000 == false) {
			Il2CppMethodInitialized_07547000 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
		if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
			throw new InvalidCastException();
		}
		__this.SetLabelActive(label, active);
		return;
	}

	[Token(Token = "0x6003837")]
	[Address(RVA = "0x5A0BFE0", Offset = "0x5A0AFE0", VA = "0x5A0BFE0")]
	public static void SetLabelBackgroundColor(string label, CustomLogicColorBuiltin color)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$SetLabelBackgroundColor): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;
		Color255 __this_00;
		Color color_00;

		if (Il2CppMethodInitialized_0754701d == false) {
			Il2CppMethodInitialized_0754701d = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547000 == false) {
			Il2CppMethodInitialized_07547000 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this != null) {
			bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
			if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
				throw new InvalidCastException();
			}
		}
		if (((color == null) ||(__this_00 = color.Value, __this_00 == null)) ||(color_00 = __this_00.ToColor(), __this == null)) {
			throw new NullReferenceException();
		}
		__this.SetLabelBackgroundColor(label, color_00);
		return;
	}

	[Token(Token = "0x6003838")]
	[Address(RVA = "0x5A0C120", Offset = "0x5A0B120", VA = "0x5A0C120")]
	public static void SetLabelBackgroundColorAll(CustomLogicColorBuiltin color)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$SetLabelBackgroundColorAll): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;
		Color255 __this_00;
		Color color_00;

		if (Il2CppMethodInitialized_0754701e == false) {
			Il2CppMethodInitialized_0754701e = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547000 == false) {
			Il2CppMethodInitialized_07547000 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this != null) {
			bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
			if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
				throw new InvalidCastException();
			}
		}
		if (((color == null) ||(__this_00 = color.Value, __this_00 == null)) ||(color_00 = __this_00.ToColor(), __this == null)) {
			throw new NullReferenceException();
		}
		__this.SetLabelBackgroundColorAll(color_00);
		return;
	}

	[Token(Token = "0x6003839")]
	[Address(RVA = "0x5A0C260", Offset = "0x5A0B260", VA = "0x5A0C260")]
	public static void SetKDRPanelActive(bool active)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$SetKDRPanelActive): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;

		if (Il2CppMethodInitialized_0754701f == false) {
			Il2CppMethodInitialized_0754701f = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547000 == false) {
			Il2CppMethodInitialized_07547000 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
		if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
			throw new InvalidCastException();
		}
		__this.SetKDRPanelActive(active);
		return;
	}

	[Token(Token = "0x600383A")]
	[Address(RVA = "0x5A0C3A0", Offset = "0x5A0B3A0", VA = "0x5A0C3A0")]
	public static void SetMinimapActive(bool active)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$SetMinimapActive): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;

		if (Il2CppMethodInitialized_07547020 == false) {
			Il2CppMethodInitialized_07547020 = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547000 == false) {
			Il2CppMethodInitialized_07547000 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
		if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
			throw new InvalidCastException();
		}
		__this.SetMinimapActive(active);
		return;
	}

	[Token(Token = "0x600383B")]
	[Address(RVA = "0x5A0C4E0", Offset = "0x5A0B4E0", VA = "0x5A0C4E0")]
	public static void SetChatPanelActive(bool active)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$SetChatPanelActive): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;

		if (Il2CppMethodInitialized_07547021 == false) {
			Il2CppMethodInitialized_07547021 = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547000 == false) {
			Il2CppMethodInitialized_07547000 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
		if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
			throw new InvalidCastException();
		}
		__this.SetChatPanelActive(active);
		return;
	}

	[Token(Token = "0x600383C")]
	[Address(RVA = "0x5A0C620", Offset = "0x5A0B620", VA = "0x5A0C620")]
	public static void SetFeedPanelActive(bool active)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$SetFeedPanelActive): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;

		if (Il2CppMethodInitialized_07547022 == false) {
			Il2CppMethodInitialized_07547022 = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547000 == false) {
			Il2CppMethodInitialized_07547000 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
		if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
			throw new InvalidCastException();
		}
		__this.SetFeedPanelActive(active);
		return;
	}

	[Token(Token = "0x600383D")]
	[Address(RVA = "0x5A0C760", Offset = "0x5A0B760", VA = "0x5A0C760")]
	public static void SetBottomHUDActive(bool active)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$SetBottomHUDActive): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;

		if (Il2CppMethodInitialized_07547023 == false) {
			Il2CppMethodInitialized_07547023 = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547000 == false) {
			Il2CppMethodInitialized_07547000 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
		if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
			throw new InvalidCastException();
		}
		__this.SetBottomHUDActive(active);
		return;
	}

	[Token(Token = "0x600383E")]
	[Address(RVA = "0x5A0C8A0", Offset = "0x5A0B8A0", VA = "0x5A0C8A0")]
	public static CustomLogicVisualElementBuiltin GetRootVisualElement()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$GetRootVisualElement): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;
		VisualElement visualElement;
		CustomLogicVisualElementBuiltin __this_00;

		if (Il2CppMethodInitialized_07547024 == false) {
			Il2CppMethodInitialized_07547024 = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547000 == false) {
			Il2CppMethodInitialized_07547000 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
		if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
			throw new InvalidCastException();
		}
		visualElement = __this.RootVisualElement;
		__this_00 = new CustomLogicVisualElementBuiltin(visualElement);
		return __this_00;
	}

	[Token(Token = "0x600383F")]
	[Address(RVA = "0x5A0CA10", Offset = "0x5A0BA10", VA = "0x5A0CA10")]
	public static CustomLogicVisualElementBuiltin VisualElement()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$VisualElement): clean
		VisualElement __this;
		CustomLogicVisualElementBuiltin __this_00;

		__this = new VisualElement();
		__this_00 = new CustomLogicVisualElementBuiltin(__this);
		return __this_00;
	}

	[Token(Token = "0x6003840")]
	[Address(RVA = "0x5A0CA90", Offset = "0x5A0BA90", VA = "0x5A0CA90")]
	public static CustomLogicButtonBuiltin Button([Optional][DefaultParameterValue("")] string text, [Optional] UserMethod clickEvent)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$Button): clean
		Button __this;
		CustomLogicButtonBuiltin __this_00;

		__this = new Button();
		if (__this != null) {
			__this.set_text(text);
			__this_00 = new CustomLogicButtonBuiltin(__this);
			if (__this_00 != null) {
				__this_00._clickEvent = clickEvent;
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003841")]
	[Address(RVA = "0x5A0CB50", Offset = "0x5A0BB50", VA = "0x5A0CB50")]
	public static CustomLogicLabelBuiltin Label(string text = "")
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$Label): clean
		Label __this;
		CustomLogicLabelBuiltin __this_00;

		__this = new Label();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.set_text(text) ;
		__this_00 = new CustomLogicLabelBuiltin((VisualElement)__this);
		__this_00._label = __this;
		return __this_00;
	}

	[Token(Token = "0x6003842")]
	[Address(RVA = "0x5A0CC00", Offset = "0x5A0BC00", VA = "0x5A0CC00")]
	public static CustomLogicTextFieldBuiltin TextField(string label = "")
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$TextField): clean
		TextField __this;
		CustomLogicTextFieldBuiltin __this_00;

		__this = new TextField(label);
		__this_00 = new CustomLogicTextFieldBuiltin((VisualElement)__this);
		__this_00._textField = __this;
		return __this_00;
	}

	[Token(Token = "0x6003843")]
	[Address(RVA = "0x5A0CC90", Offset = "0x5A0BC90", VA = "0x5A0CC90")]
	public static CustomLogicToggleBuiltin Toggle([Optional][DefaultParameterValue("")] string label, [Optional] UserMethod valueChangedEvent)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$Toggle): clean
		Toggle __this;
		CustomLogicToggleBuiltin __this_00;

		__this = new Toggle(label);
		__this_00 = new CustomLogicToggleBuiltin(__this);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00._valueChangedEvent = valueChangedEvent;
		return __this_00;
	}

	[Token(Token = "0x6003844")]
	[Address(RVA = "0x5A0CD30", Offset = "0x5A0BD30", VA = "0x5A0CD30")]
	public static CustomLogicSliderBuiltin Slider([Optional][DefaultParameterValue(0f)] float lowValue, [Optional][DefaultParameterValue(100f)] float highValue, [Optional][DefaultParameterValue(0f)] float tickInterval, [Optional][DefaultParameterValue("")] string label, [Optional] UserMethod valueChangedEvent)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$Slider): clean
		Slider __this;
		CustomLogicSliderBuiltin __this_00;

		__this = new Slider(label, lowValue, highValue, 0, 0.0);
		if (0.0 < tickInterval) {
			if (__this == null) goto label_05b0ce17;
			__this.set_pageSize();
		}
		__this_00 = new CustomLogicSliderBuiltin(__this);
		if (__this_00 != null) {
			__this_00._valueChangedEvent = valueChangedEvent;
			return __this_00;
		}
	label_05b0ce17: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003845")]
	[Address(RVA = "0x5A0CE20", Offset = "0x5A0BE20", VA = "0x5A0CE20")]
	public static CustomLogicSliderBuiltin SliderInt([Optional][DefaultParameterValue(0)] int lowValue, [Optional][DefaultParameterValue(100)] int highValue, [Optional][DefaultParameterValue(1)] int tickInterval, [Optional][DefaultParameterValue("")] string label, [Optional] UserMethod valueChangedEvent)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$SliderInt): clean
		SliderInt __this;
		CustomLogicSliderBuiltin __this_00;

		__this = new SliderInt(label, lowValue, highValue, 0, 0.0);
		if (1 < tickInterval) {
			if (__this == null) goto label_05b0cef8;
			__this.set_pageSize((float)tickInterval);
		}
		__this_00 = new CustomLogicSliderBuiltin(__this);
		if (__this_00 != null) {
			__this_00._valueChangedEvent = valueChangedEvent;
			return __this_00;
		}
	label_05b0cef8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003846")]
	[Address(RVA = "0x5A0CF00", Offset = "0x5A0BF00", VA = "0x5A0CF00")]
	public static CustomLogicDropdownBuiltin Dropdown(CustomLogicListBuiltin choices, [Optional][DefaultParameterValue(0)] int defaultIndex, [Optional][DefaultParameterValue("")] string label, [Optional] UserMethod valueChangedEvent)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$Dropdown): 9 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<object> __this;
		String[] pSVar3;
		bool bVar5;
		List<string> choices_00;
		String pSVar6;
		DropdownField __this_00;
		CustomLogicDropdownBuiltin __this_01;
		byte[] auStack_68 = new byte[8];
		object pIStack_58;
		byte[] auStack_50 = new byte[16];
		object pIStack_40;
		String pSStack_38;

		auStack_68 = (byte[])0x0;
		pIStack_58 = null;
		choices_00 = new List<string>();
		if ((choices != null) &&(__this = choices.List, __this != null)) {
			pSStack_38 = label;
			auStack_50.GetEnumerator(__this);
			pIStack_58 = pIStack_40;
			auStack_68 = (byte[])auStack_50._0_8_;
			auStack_50._0_8_ = null;
			auStack_50._8_8_ = auStack_68;
			if (choices_00 == null) {
				do {
					bVar5 = auStack_68.MoveNext();
					if (!bVar5) goto label_05b0d11e;
				} while (pIStack_58 == null);
				(*pIStack_58.klass.vtable[3].methodPtr)(pIStack_58,pIStack_58.klass.vtable[3].method);
	label_05b0d119: ;
				throw new NullReferenceException();
			}
			while(true) {
				bVar5 = auStack_68.MoveNext();
				if (!bVar5) break;
				if (pIStack_58 != null) {
					pSVar6 = (String)(*pIStack_58.klass.vtable[3].methodPtr)(pIStack_58,pIStack_58.klass.vtable[3].method);
					piVar1 = &choices_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar3 = choices_00._items;
					if (pSVar3 == null) goto label_05b0d119;
					uVar2 = choices_00._size;
					if (uVar2 < (uint)pSVar3.Length) {
						choices_00._size = uVar2 + 1;
						pSVar3[(int)uVar2] = pSVar6;
					}
					else {
						choices_00.AddWithResize((object)pSVar6);
					}
				}
			}
	label_05b0d11e: ;
			auStack_68.Dispose();
			pSVar6 = "No options";
			if (choices_00 != null) {
				if (choices_00._size == 0) {
					piVar1 = &choices_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar3 = choices_00._items;
					if (pSVar3 == null) goto label_05b0d212;
					if ((int)pSVar3.Length == 0) {
						choices_00.AddWithResize((object)pSVar6);
					}
					else {
						choices_00._size = 1;
						pSVar3[0] = pSVar6;
					}
				}
				__this_00 = new DropdownField(pSStack_38, choices_00, defaultIndex, null, null);
				__this_01 = new CustomLogicDropdownBuiltin(__this_00);
				if (__this_01 != null) {
					__this_01._valueChangedEvent = valueChangedEvent;
					return __this_01;
				}
			}
		}
	label_05b0d212: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003847")]
	[Address(RVA = "0x5A0D280", Offset = "0x5A0C280", VA = "0x5A0D280")]
	public static CustomLogicProgressBarBuiltin ProgressBar([Optional][DefaultParameterValue(0f)] float lowValue, [Optional][DefaultParameterValue(100f)] float highValue, [Optional][DefaultParameterValue("")] string title, [Optional] UserMethod valueChangedEvent)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$ProgressBar): clean
		AbstractProgressBar __this;
		CustomLogicProgressBarBuiltin __this_00;

		__this = new ProgressBar();
		if (__this != null) {
			__this.lowValue = lowValue;
			__this.highValue = highValue;
			__this.title = title;
			__this_00 = new CustomLogicProgressBarBuiltin((ProgressBar)__this);
			if (__this_00 != null) {
				__this_00._valueChangedEvent = valueChangedEvent;
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003848")]
	[Address(RVA = "0x5A0D360", Offset = "0x5A0C360", VA = "0x5A0D360")]
	public static CustomLogicScrollViewBuiltin ScrollView()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$ScrollView): clean
		ScrollView __this;
		CustomLogicScrollViewBuiltin __this_00;

		__this = new ScrollView();
		__this_00 = new CustomLogicScrollViewBuiltin((VisualElement)__this);
		__this_00._scrollView = __this;
		return __this_00;
	}

	[Token(Token = "0x6003849")]
	[Address(RVA = "0x5A0D3F0", Offset = "0x5A0C3F0", VA = "0x5A0D3F0")]
	public static CustomLogicIconBuiltin Icon(string iconPath = "")
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$Icon): clean
		bool bVar1;
		Image __this;
		CustomLogicIconBuiltin __this_00;

		__this = new Image();
		__this_00 = new CustomLogicIconBuiltin((VisualElement)__this);
		__this_00._image = __this;
		__this_00._currentIconPath = (String)**(ulong*)(g_data_07556758 + 0xb8);
		bVar1 = String.IsNullOrEmpty(iconPath);
		if (!bVar1) {
			__this_00.SetIcon(iconPath);
		}
		return __this_00;
	}

	[Token(Token = "0x600384A")]
	[Address(RVA = "0x5A0D4C0", Offset = "0x5A0C4C0", VA = "0x5A0D4C0")]
	public static CustomLogicImageBuiltin Image(string iconPath = "")
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c (CustomLogic.CustomLogicUIBuiltin$$Image): clean
		bool bVar1;
		CustomLogicImageBuiltin __this;

		__this = new CustomLogicImageBuiltin();
		__this._currentImagePath = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this._currentTexture = null;
		bVar1 = String.IsNullOrEmpty(iconPath);
		if (!bVar1) {
			__this.SetImage(iconPath);
		}
		return __this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicUIBuiltin.c.

	// CustomLogic.CustomLogicUIBuiltin$$.cctor: clean
	static CustomLogicUIBuiltin()
	{
		CustomLogic_CustomLogicUIBuiltin_StaticFields pCVar1;
		Dictionary<string, string> __this;
		Object[] pSVar2;

		__this = new Dictionary<string, string>();
		CustomLogicUIBuiltin.LastSetLabels = __this;
		pSVar2 = (Object[])new object[3];
		pCVar1 = typeof(CustomLogicUIBuiltin).static_fields;
		pCVar1.SetLabelRpcArgs = pSVar2;
		pCVar1 = typeof(CustomLogicUIBuiltin).static_fields;
		pCVar1._forceHideCharacterNames = false;
		pCVar1._legacyLabels = true;
		return;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"LegacyLabels");
		__this.Add((Il2CppObject *)"ForceHideNames");
		__this.Add((Il2CppObject *)"GetPopups");
		__this.Add((Il2CppObject *)"SetLabel");
		__this.Add((Il2CppObject *)"SetLabelForTime");
		__this.Add((Il2CppObject *)"SetLabelAll");
		__this.Add((Il2CppObject *)"SetLabelForTimeAll");
		__this.Add((Il2CppObject *)"CreatePopup");
		__this.Add((Il2CppObject *)"ShowPopup");
		__this.Add((Il2CppObject *)"HidePopup");
		__this.Add((Il2CppObject *)"ClearPopup");
		__this.Add((Il2CppObject *)"AddPopupLabel");
		__this.Add((Il2CppObject *)"AddPopupButton");
		__this.Add((Il2CppObject *)"AddPopupBottomButton");
		__this.Add((Il2CppObject *)"AddPopupButtons");
		__this.Add((Il2CppObject *)"WrapStyleTag");
		__this.Add((Il2CppObject *)"ShowChangeCharacterMenu");
		__this.Add((Il2CppObject *)"SetScoreboardHeader");
		__this.Add((Il2CppObject *)"SetScoreboardProperty");
		__this.Add((Il2CppObject *)"GetThemeColor");
		__this.Add((Il2CppObject *)"IsPopupActive");
		__this.Add((Il2CppObject *)"SetLabelActive");
		__this.Add((Il2CppObject *)"SetLabelBackgroundColor");
		__this.Add((Il2CppObject *)"SetLabelBackgroundColorAll");
		__this.Add((Il2CppObject *)"SetKDRPanelActive");
		__this.Add((Il2CppObject *)"SetMinimapActive");
		__this.Add((Il2CppObject *)"SetChatPanelActive");
		__this.Add((Il2CppObject *)"SetFeedPanelActive");
		__this.Add((Il2CppObject *)"SetBottomHUDActive");
		__this.Add((Il2CppObject *)"GetRootVisualElement");
		__this.Add((Il2CppObject *)"VisualElement");
		__this.Add((Il2CppObject *)"Button");
		__this.Add((Il2CppObject *)"Label");
		__this.Add((Il2CppObject *)"TextField");
		__this.Add((Il2CppObject *)"Toggle");
		__this.Add((Il2CppObject *)"Slider");
		__this.Add((Il2CppObject *)"SliderInt");
		__this.Add((Il2CppObject *)"Dropdown");
		__this.Add((Il2CppObject *)"ProgressBar");
		__this.Add((Il2CppObject *)"ScrollView");
		__this.Add((Il2CppObject *)"Icon");
		__this.Add((Il2CppObject *)"Image");
		CustomLogicUIBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings$$<__CreatePropertyBinding__LegacyLabels>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__LegacyLabels_g____getter_2_0(CustomLogicUIBuiltin __i)
	{
		uint uVar1;
		object pIVar2;

		if (Il2CppMethodInitialized_07547060 == false) {
			Il2CppMethodInitialized_07547060 = true;
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754708d == false) {
			Il2CppMethodInitialized_0754708d = true;
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicUIBuiltin))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		return pIVar2;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings$$<__CreatePropertyBinding__LegacyLabels>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__LegacyLabels_g____setter_2_1(CustomLogicUIBuiltin __i, object __v)
	{
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			CustomLogicUIBuiltin.LegacyLabels = value;
			return;
		}
		CustomLogicUIBuiltin.LegacyLabels = value;
		return;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings$$<__CreatePropertyBinding__ForceHideNames>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__ForceHideNames_g____getter_3_0(CustomLogicUIBuiltin __i)
	{
		uint uVar1;
		object pIVar2;

		if (Il2CppMethodInitialized_07547062 == false) {
			Il2CppMethodInitialized_07547062 = true;
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754708e == false) {
			Il2CppMethodInitialized_0754708e = true;
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicUIBuiltin))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		return pIVar2;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings$$<__CreatePropertyBinding__ForceHideNames>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__ForceHideNames_g____setter_3_1(CustomLogicUIBuiltin __i, object __v)
	{
		uint uVar1;
		bool bVar2;

		bVar2 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (Il2CppMethodInitialized_0754708f == false) {
			Il2CppMethodInitialized_0754708f = true;
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicUIBuiltin))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		CustomLogicUIBuiltin._forceHideCharacterNames = bVar2;
		return;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings$$<__CreatePropertyBinding__GetPopups>g____getter|4_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__GetPopups_g____getter_4_0(CustomLogicUIBuiltin __i)
	{
		uint uVar1;
		CustomLogicListBuiltin pCVar2;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07547064 == false) {
			Il2CppMethodInitialized_07547064 = true;
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			klass = typeof(CustomLogicUIBuiltin);
		}
		else {
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			klass = typeof(CustomLogicUIBuiltin);
		}
		typeof(CustomLogicUIBuiltin) = (CustomLogicUIBuiltin)klass;
		if (uVar1 == 0) {
			pCVar2 = CustomLogicUIBuiltin.GetPopups;
			return (object)pCVar2;
		}
		pCVar2 = CustomLogicUIBuiltin.GetPopups;
		return (object)pCVar2;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicUIBuiltin.Bindings.c();
		CustomLogicUIBuiltin.Bindings.c.__9 =(CustomLogicUIBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabel>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__SetLabel_b__5_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object obj;
		String label;
		String message;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			label = CustomLogicEvaluator.ConvertTo<string>(obj) ;
			if ((__a.Length & 0xfffffffe) != 0) {
				message = CustomLogicEvaluator.ConvertTo<string>(__a[1]) ;
				if (Il2CppMethodInitialized_07547009 == false) {
					Il2CppMethodInitialized_07547009 = true;
					uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = ((typeof(InGameManager))._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				InGameManager.SetLabel(label, message, 0.0);
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelForTime>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__SetLabelForTime_b__6_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object obj;
		String label;
		String message;
		float time;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			label = CustomLogicEvaluator.ConvertTo<string>(obj) ;
			if (((__a.Length & 0xfffffffe) != 0) &&(message = CustomLogicEvaluator.ConvertTo<string>(__a[1]), 2 < (uint)__a.Length)) {
				time = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
				if (Il2CppMethodInitialized_0754700a == false) {
					Il2CppMethodInitialized_0754700a = true;
					uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = ((typeof(InGameManager))._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				InGameManager.SetLabel(label, message, time);
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelAll>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__SetLabelAll_b__7_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		String label;
		String message;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			label = CustomLogicEvaluator.ConvertTo<string>(obj) ;
			if ((__a.Length & 0xfffffffe) != 0) {
				message = CustomLogicEvaluator.ConvertTo<string>(__a[1]) ;
				if ((typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor == 0) {
				}
				CustomLogicUIBuiltin.SetLabelAll(label, message);
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelForTimeAll>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__SetLabelForTimeAll_b__8_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		String label;
		String message;
		float time;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			label = CustomLogicEvaluator.ConvertTo<string>(obj) ;
			if ((__a.Length & 0xfffffffe) != 0) {
				message = CustomLogicEvaluator.ConvertTo<string>(__a[1]) ;
				if (2 < (uint)__a.Length) {
					time = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if ((typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor == 0) {
					}
					CustomLogicUIBuiltin.SetLabelForTimeAll(label, message, time);
					return null;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__CreatePopup>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__CreatePopup_b__9_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		int width;
		int height;
		String pSVar1;
		String title;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pSVar1 = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				title = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (2 < (uint)__a.Length) {
					width = CustomLogicEvaluator.ConvertTo<int>(__a[2]);
					if ((__a.Length & 0xfffffffc) != 0) {
						height = CustomLogicEvaluator.ConvertTo<int>(__a[3]) ;
						pSVar1 = CustomLogicUIBuiltin.CreatePopup(pSVar1, title, width, height);
						return (object)pSVar1;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowPopup>b__10_0: clean
	private object Bindings_c____CreateMethodBinding__ShowPopup_b__10_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		String popupName;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		popupName = CustomLogicEvaluator.ConvertTo<string>(obj);
		CustomLogicUIBuiltin.ShowPopup(popupName);
		return null;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__HidePopup>b__11_0: clean
	private object Bindings_c____CreateMethodBinding__HidePopup_b__11_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		String popupName;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		popupName = CustomLogicEvaluator.ConvertTo<string>(obj);
		CustomLogicUIBuiltin.HidePopup(popupName);
		return null;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearPopup>b__12_0: clean
	private object Bindings_c____CreateMethodBinding__ClearPopup_b__12_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		String popupName;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		popupName = CustomLogicEvaluator.ConvertTo<string>(obj);
		CustomLogicUIBuiltin.ClearPopup(popupName);
		return null;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddPopupLabel>b__13_0: clean
	private object Bindings_c____CreateMethodBinding__AddPopupLabel_b__13_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		String popupName;
		String label;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			popupName = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				label = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if ((typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor == 0) {
				}
				CustomLogicUIBuiltin.AddPopupLabel(popupName, label);
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddPopupButton>b__14_0: clean
	private object Bindings_c____CreateMethodBinding__AddPopupButton_b__14_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		String popupName;
		String callback;
		String label;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			popupName = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				callback = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (2 < (uint)__a.Length) {
					label = CustomLogicEvaluator.ConvertTo<string>(__a[2]) ;
					CustomLogicUIBuiltin.AddPopupButton(popupName, callback, label);
					return null;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddPopupBottomButton>b__15_0: clean
	private object Bindings_c____CreateMethodBinding__AddPopupBottomButton_b__15_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		String popupName;
		String callback;
		String label;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			popupName = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				callback = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (2 < (uint)__a.Length) {
					label = CustomLogicEvaluator.ConvertTo<string>(__a[2]) ;
					CustomLogicUIBuiltin.AddPopupBottomButton(popupName, callback, label);
					return null;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddPopupButtons>b__16_0: clean
	private object Bindings_c____CreateMethodBinding__AddPopupButtons_b__16_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		String popupName;
		CustomLogicListBuiltin callbacks;
		CustomLogicListBuiltin labels;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			popupName = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				callbacks = CustomLogicEvaluator.ConvertTo<CustomLogicListBuiltin>(__a[1]);
				if (2 < (uint)__a.Length) {
					labels = CustomLogicEvaluator.ConvertTo<CustomLogicListBuiltin>(__a[2]);
					CustomLogicUIBuiltin.AddPopupButtons(popupName, callbacks, labels);
					return null;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__WrapStyleTag>b__17_0: clean
	private object Bindings_c____CreateMethodBinding__WrapStyleTag_b__17_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object pIVar2;
		String pSVar3;
		String style;
		String arg;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar2 = __a[0];
			pSVar3 = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
			if ((__a.Length & 0xfffffffe) != 0) {
				style = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if ((int)__a.Length < 3) {
					arg = null;
					uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
				}
				else {
					pIVar2 = __a[2];
					arg = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
					uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				pSVar3 = CustomLogicUIBuiltin.WrapStyleTag(pSVar3, style, arg);
				return (object)pSVar3;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowChangeCharacterMenu>b__18_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__ShowChangeCharacterMenu_b__18_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		uint uVar1;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07547073 == false) {
			Il2CppMethodInitialized_07547073 = true;
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			klass = typeof(CustomLogicUIBuiltin);
		}
		else {
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			klass = typeof(CustomLogicUIBuiltin);
		}
		typeof(CustomLogicUIBuiltin) = (CustomLogicUIBuiltin)klass;
		if (uVar1 == 0) {
			CustomLogicUIBuiltin.ShowChangeCharacterMenu();
			return null;
		}
		CustomLogicUIBuiltin.ShowChangeCharacterMenu();
		return null;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetScoreboardHeader>b__19_0: clean
	private object Bindings_c____CreateMethodBinding__SetScoreboardHeader_b__19_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object obj;
		CustomLogicEvaluator pCVar2;
		String pSVar3;

		if (__a == null) goto label_05b132c4;
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		pSVar3 = CustomLogicEvaluator.ConvertTo<string>(obj);
		if ((typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07547017 != false) goto label_05b1323b;
	label_05b13286: ;
			Il2CppMethodInitialized_07547017 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07547017 == false) goto label_05b13286;
	label_05b1323b: ;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pCVar2 = CustomLogicManager.Evaluator;
		}
		else {
			pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
		}
		if (pCVar2 != null) {
			pCVar2.ScoreboardHeader = pSVar3;
			return null;
		}
	label_05b132c4: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetScoreboardProperty>b__20_0: clean
	private object Bindings_c____CreateMethodBinding__SetScoreboardProperty_b__20_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		String property;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		property = CustomLogicEvaluator.ConvertTo<string>(obj);
		CustomLogicUIBuiltin.SetScoreboardProperty(property);
		return null;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetThemeColor>b__21_0: clean
	private object Bindings_c____CreateMethodBinding__GetThemeColor_b__21_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		String panel;
		String category;
		String item;
		CustomLogicColorBuiltin pCVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			panel = CustomLogicEvaluator.ConvertTo<string>(obj) ;
			if ((__a.Length & 0xfffffffe) != 0) {
				category = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (2 < (uint)__a.Length) {
					item = CustomLogicEvaluator.ConvertTo<string>(__a[2]);
					pCVar1 = CustomLogicUIBuiltin.GetThemeColor(panel, category, item);
					return (object)pCVar1;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPopupActive>b__22_0: clean
	private object Bindings_c____CreateMethodBinding__IsPopupActive_b__22_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		String popupName;
		object pIVar1;
		byte local_9;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar1 = __a[0];
		popupName = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
		local_9 = CustomLogicUIBuiltin.IsPopupActive(popupName);
		pIVar1 = (object)local_9;
		return pIVar1;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelActive>b__23_0: clean
	private object Bindings_c____CreateMethodBinding__SetLabelActive_b__23_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		bool active;
		String label;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			label = CustomLogicEvaluator.ConvertTo<string>(obj) ;
			if ((__a.Length & 0xfffffffe) != 0) {
				active = CustomLogicEvaluator.ConvertTo<bool>(__a[1]);
				if ((typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor == 0) {
				}
				CustomLogicUIBuiltin.SetLabelActive(label, active);
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelBackgroundColor>b__24_0: clean
	private object Bindings_c____CreateMethodBinding__SetLabelBackgroundColor_b__24_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		String label;
		CustomLogicColorBuiltin color;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			label = CustomLogicEvaluator.ConvertTo<string>(obj) ;
			if ((__a.Length & 0xfffffffe) != 0) {
				color = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(__a[1]);
				if ((typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor == 0) {
				}
				CustomLogicUIBuiltin.SetLabelBackgroundColor(label, color);
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLabelBackgroundColorAll>b__25_0: clean
	private object Bindings_c____CreateMethodBinding__SetLabelBackgroundColorAll_b__25_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicColorBuiltin color;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		color = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(obj);
		CustomLogicUIBuiltin.SetLabelBackgroundColorAll(color);
		return null;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetKDRPanelActive>b__26_0: clean
	private object Bindings_c____CreateMethodBinding__SetKDRPanelActive_b__26_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		bool active;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		active = CustomLogicEvaluator.ConvertTo<bool>(obj);
		CustomLogicUIBuiltin.SetKDRPanelActive(active);
		return null;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetMinimapActive>b__27_0: clean
	private object Bindings_c____CreateMethodBinding__SetMinimapActive_b__27_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		bool active;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		active = CustomLogicEvaluator.ConvertTo<bool>(obj);
		CustomLogicUIBuiltin.SetMinimapActive(active);
		return null;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetChatPanelActive>b__28_0: clean
	private object Bindings_c____CreateMethodBinding__SetChatPanelActive_b__28_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		bool active;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		active = CustomLogicEvaluator.ConvertTo<bool>(obj);
		CustomLogicUIBuiltin.SetChatPanelActive(active);
		return null;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetFeedPanelActive>b__29_0: clean
	private object Bindings_c____CreateMethodBinding__SetFeedPanelActive_b__29_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		bool active;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		active = CustomLogicEvaluator.ConvertTo<bool>(obj);
		CustomLogicUIBuiltin.SetFeedPanelActive(active);
		return null;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetBottomHUDActive>b__30_0: clean
	private object Bindings_c____CreateMethodBinding__SetBottomHUDActive_b__30_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		object obj;
		bool active;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		active = CustomLogicEvaluator.ConvertTo<bool>(obj);
		CustomLogicUIBuiltin.SetBottomHUDActive(active);
		return null;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetRootVisualElement>b__31_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__GetRootVisualElement_b__31_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		uint uVar1;
		CustomLogicVisualElementBuiltin pCVar2;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07547080 == false) {
			Il2CppMethodInitialized_07547080 = true;
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			klass = typeof(CustomLogicUIBuiltin);
		}
		else {
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			klass = typeof(CustomLogicUIBuiltin);
		}
		typeof(CustomLogicUIBuiltin) = (CustomLogicUIBuiltin)klass;
		if (uVar1 == 0) {
			pCVar2 = CustomLogicUIBuiltin.GetRootVisualElement();
			return (object)pCVar2;
		}
		pCVar2 = CustomLogicUIBuiltin.GetRootVisualElement();
		return (object)pCVar2;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__VisualElement>b__32_0: clean
	private object Bindings_c____CreateMethodBinding__VisualElement_b__32_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		uint uVar1;
		VisualElement __this_00;
		CustomLogicVisualElementBuiltin __this_01;

		if (Il2CppMethodInitialized_07547081 == false) {
			Il2CppMethodInitialized_07547081 = true;
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		__this_00 = new VisualElement();
		__this_01 = new CustomLogicVisualElementBuiltin(__this_00);
		return (object)__this_01;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Button>b__33_0: clean
	private object Bindings_c____CreateMethodBinding__Button_b__33_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object pIVar2;
		String text;
		UserMethod clickEvent;
		CustomLogicButtonBuiltin pCVar3;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if (__a.Length == 0) {
			text = "";
		}
		else {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			text = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
			if (1 < (int)__a.Length) {
				pIVar2 = __a[1];
				clickEvent = CustomLogicEvaluator.ConvertTo<UserMethod>(pIVar2);
				uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05b13d61;
			}
		}
		clickEvent = null;
		uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
	joined_r0x05b13d61: ;
		if (uVar1 == 0) {
		}
		pCVar3 = CustomLogicUIBuiltin.Button(text, clickEvent);
		return (object)pCVar3;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Label>b__34_0: clean
	private object Bindings_c____CreateMethodBinding__Label_b__34_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object obj;
		String text;
		CustomLogicLabelBuiltin pCVar2;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if (__a.Length == 0) {
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			text = "";
		}
		else {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			text = CustomLogicEvaluator.ConvertTo<string>(obj);
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pCVar2 = CustomLogicUIBuiltin.Label(text);
			return (object)pCVar2;
		}
		pCVar2 = CustomLogicUIBuiltin.Label(text);
		return (object)pCVar2;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__TextField>b__35_0: clean
	private object Bindings_c____CreateMethodBinding__TextField_b__35_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object obj;
		String label;
		CustomLogicTextFieldBuiltin pCVar2;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if (__a.Length == 0) {
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			label = "";
		}
		else {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			label = CustomLogicEvaluator.ConvertTo<string>(obj) ;
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pCVar2 = CustomLogicUIBuiltin.TextField(label);
			return (object)pCVar2;
		}
		pCVar2 = CustomLogicUIBuiltin.TextField(label);
		return (object)pCVar2;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Toggle>b__36_0: clean
	private object Bindings_c____CreateMethodBinding__Toggle_b__36_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object pIVar2;
		String label;
		UserMethod valueChangedEvent;
		CustomLogicToggleBuiltin pCVar3;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if (__a.Length == 0) {
			label = "";
		}
		else {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			label = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
			if (1 < (int)__a.Length) {
				pIVar2 = __a[1];
				valueChangedEvent = CustomLogicEvaluator.ConvertTo<UserMethod>(pIVar2);
				uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05b14051;
			}
		}
		valueChangedEvent = null;
		uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
	joined_r0x05b14051: ;
		if (uVar1 == 0) {
		}
		pCVar3 = CustomLogicUIBuiltin.Toggle(label, valueChangedEvent);
		return (object)pCVar3;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Slider>b__37_0: clean
	private object Bindings_c____CreateMethodBinding__Slider_b__37_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object pIVar2;
		CustomLogicSliderBuiltin pCVar3;
		String label;
		UserMethod valueChangedEvent;
		float lowValue;
		float highValue;
		float tickInterval;

		label = "";
		if (__a == null) {
			throw new NullReferenceException();
		}
		tickInterval = 0.0;
		highValue = 100.0;
		if (__a.Length == 0) {
			valueChangedEvent = null;
			lowValue = 0.0;
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			lowValue = CustomLogicEvaluator.ConvertTo<float>(pIVar2);
			if ((int)__a.Length < 2) {
				valueChangedEvent = null;
				tickInterval = 0.0;
				highValue = 100.0;
				uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			}
			else {
				pIVar2 = __a[1];
				highValue = CustomLogicEvaluator.ConvertTo<float>(pIVar2);
				if ((int)__a.Length < 3) {
					valueChangedEvent = null;
					tickInterval = 0.0;
				}
				else {
					pIVar2 = __a[2];
					tickInterval = CustomLogicEvaluator.ConvertTo<float>(pIVar2);
					if ((int)__a.Length < 4) {
						valueChangedEvent = null;
					}
					else {
						pIVar2 = __a[3];
						label = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
						if ((int)__a.Length < 5) {
							valueChangedEvent = null;
						}
						else {
							pIVar2 = __a[4];
							valueChangedEvent = CustomLogicEvaluator.ConvertTo<UserMethod>(pIVar2);
						}
					}
				}
				uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			}
		}
		if (uVar1 == 0) {
		}
		pCVar3 = CustomLogicUIBuiltin.Slider(lowValue, highValue, tickInterval, label, valueChangedEvent);
		return (object)pCVar3;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__SliderInt>b__38_0: clean
	private object Bindings_c____CreateMethodBinding__SliderInt_b__38_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object pIVar2;
		int lowValue;
		int highValue;
		int tickInterval;
		CustomLogicSliderBuiltin pCVar3;
		String label;
		UserMethod valueChangedEvent;

		label = "";
		if (__a == null) {
			throw new NullReferenceException();
		}
		tickInterval = 1;
		highValue = 100;
		if (__a.Length == 0) {
			lowValue = 0;
	label_05b14433: ;
			valueChangedEvent = null;
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			lowValue = CustomLogicEvaluator.ConvertTo<int>(pIVar2);
			if (1 < (int)__a.Length) {
				pIVar2 = __a[1];
				highValue = CustomLogicEvaluator.ConvertTo<int>(pIVar2);
				if (2 < (int)__a.Length) {
					pIVar2 = __a[2];
					tickInterval = CustomLogicEvaluator.ConvertTo<int>(pIVar2);
					if (3 < (int)__a.Length) {
						pIVar2 = __a[3];
						label = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
						if (4 < (int)__a.Length) {
							pIVar2 = __a[4];
							valueChangedEvent = CustomLogicEvaluator.ConvertTo<UserMethod>(pIVar2);
							uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
							goto joined_r0x05b14446;
						}
						goto label_05b14433;
					}
				}
			}
			valueChangedEvent = null;
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
	joined_r0x05b14446: ;
		if (uVar1 == 0) {
		}
		pCVar3 = CustomLogicUIBuiltin.SliderInt(lowValue, highValue, tickInterval, label, valueChangedEvent);
		return (object)pCVar3;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Dropdown>b__39_0: clean
	private object Bindings_c____CreateMethodBinding__Dropdown_b__39_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object pIVar2;
		int defaultIndex;
		CustomLogicListBuiltin choices;
		String label;
		CustomLogicDropdownBuiltin pCVar3;
		UserMethod valueChangedEvent;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar2 = __a[0];
		choices = CustomLogicEvaluator.ConvertTo<CustomLogicListBuiltin>(pIVar2);
		label = "";
		if ((int)__a.Length < 2) {
			defaultIndex = 0;
		}
		else {
			pIVar2 = __a[1];
			defaultIndex = CustomLogicEvaluator.ConvertTo<int>(pIVar2);
			if (2 < (int)__a.Length) {
				pIVar2 = __a[2];
				label = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
				if (3 < (int)__a.Length) {
					pIVar2 = __a[3];
					valueChangedEvent = CustomLogicEvaluator.ConvertTo<UserMethod>(pIVar2);
					uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
					goto joined_r0x05b146a7;
				}
			}
		}
		valueChangedEvent = null;
		uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
	joined_r0x05b146a7: ;
		if (uVar1 == 0) {
		}
		pCVar3 = CustomLogicUIBuiltin.Dropdown(choices, defaultIndex, label, valueChangedEvent);
		return (object)pCVar3;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ProgressBar>b__40_0: clean
	private object Bindings_c____CreateMethodBinding__ProgressBar_b__40_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object pIVar2;
		CustomLogicProgressBarBuiltin pCVar3;
		String title;
		UserMethod valueChangedEvent;
		float lowValue;
		float highValue;

		title = "";
		if (__a == null) {
			throw new NullReferenceException();
		}
		highValue = 100.0;
		if (__a.Length == 0) {
			lowValue = 0.0;
			valueChangedEvent = null;
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			lowValue = CustomLogicEvaluator.ConvertTo<float>(pIVar2);
			if ((int)__a.Length < 2) {
				valueChangedEvent = null;
				highValue = 100.0;
				uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			}
			else {
				pIVar2 = __a[1];
				highValue = CustomLogicEvaluator.ConvertTo<float>(pIVar2);
				if ((int)__a.Length < 3) {
					valueChangedEvent = null;
				}
				else {
					pIVar2 = __a[2];
					title = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
					if ((int)__a.Length < 4) {
						valueChangedEvent = null;
					}
					else {
						pIVar2 = __a[3];
						valueChangedEvent = CustomLogicEvaluator.ConvertTo<UserMethod>(pIVar2);
					}
				}
				uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			}
		}
		if (uVar1 == 0) {
		}
		pCVar3 = CustomLogicUIBuiltin.ProgressBar(lowValue, highValue, title, valueChangedEvent);
		return (object)pCVar3;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__ScrollView>b__41_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__ScrollView_b__41_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		uint uVar1;
		CustomLogicScrollViewBuiltin pCVar2;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_0754708a == false) {
			Il2CppMethodInitialized_0754708a = true;
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			klass = typeof(CustomLogicUIBuiltin);
		}
		else {
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			klass = typeof(CustomLogicUIBuiltin);
		}
		typeof(CustomLogicUIBuiltin) = (CustomLogicUIBuiltin)klass;
		if (uVar1 == 0) {
			pCVar2 = CustomLogicUIBuiltin.ScrollView();
			return (object)pCVar2;
		}
		pCVar2 = CustomLogicUIBuiltin.ScrollView();
		return (object)pCVar2;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Icon>b__42_0: clean
	private object Bindings_c____CreateMethodBinding__Icon_b__42_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object obj;
		String iconPath;
		CustomLogicIconBuiltin pCVar2;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if (__a.Length == 0) {
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			iconPath = "";
		}
		else {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			iconPath = CustomLogicEvaluator.ConvertTo<string>(obj);
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pCVar2 = CustomLogicUIBuiltin.Icon(iconPath);
			return (object)pCVar2;
		}
		pCVar2 = CustomLogicUIBuiltin.Icon(iconPath);
		return (object)pCVar2;
	}

	// CustomLogic.CustomLogicUIBuiltin.Bindings.<>c$$<__CreateMethodBinding__Image>b__43_0: clean
	private object Bindings_c____CreateMethodBinding__Image_b__43_0(CustomLogicUIBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object obj;
		String iconPath;
		CustomLogicImageBuiltin pCVar2;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if (__a.Length == 0) {
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			iconPath = "";
		}
		else {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			iconPath = CustomLogicEvaluator.ConvertTo<string>(obj);
			uVar1 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pCVar2 = CustomLogicUIBuiltin.Image(iconPath);
			return (object)pCVar2;
		}
		pCVar2 = CustomLogicUIBuiltin.Image(iconPath);
		return (object)pCVar2;
	}
}
