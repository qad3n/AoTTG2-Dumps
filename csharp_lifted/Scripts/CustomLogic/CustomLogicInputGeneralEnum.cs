// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicInputGeneralEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000533")]
[CompilerGenerated]
internal class CustomLogicInputGeneralEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000534")]
	public static class Factory
	{
		[Token(Token = "0x6002C01")]
		[Address(RVA = "0x5983370", Offset = "0x5982370", VA = "0x5983370")]
		public static CustomLogicInputGeneralEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicInputGeneralEnum __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputGeneralEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicInputGeneralEnum();
			return __this;
		}
	}

	[Token(Token = "0x2000535")]
	public static class Bindings
	{
		[Token(Token = "0x4001822")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002C02")]
		[Address(RVA = "0x5983490", Offset = "0x5982490", VA = "0x5983490")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicInputGeneralEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x7a15f7a3) {
				if (uVar2 < 0x3010e277) {
					if (uVar2 < 0x10dc95d1) {
						if (uVar2 == 0x7e09cc2) {
							bVar1 = (name == "SkipCutscene");
							if (bVar1) {
								pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__SkipCutscene();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xf7c56a8) {
							bVar1 = (name == "ChangeCharacter");
							if (bVar1) {
								pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__ChangeCharacter();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x10dc95d0) {
							bVar1 = (name == "OpenSearchPalette");
							if (bVar1) {
								pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__OpenSearchPalette();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x1e9e9f86) {
						if (uVar2 == 0x145dfac4) {
							bVar1 = (name == "DebugWindow");
							if (bVar1) {
								pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__DebugWindow();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1e9e9f85) {
							bVar1 = (name == "Right");
							if (bVar1) {
								pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__Right();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x2279d8cb) {
						bVar1 = (name == "Chat");
						if (bVar1) {
							pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__Chat();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x3010e276) {
						bVar1 = (name == "RotateWOWCamera");
						if (bVar1) {
							pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__RotateWOWCamera();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x496ac1c7) {
					if (uVar2 == 0x42f35940) {
						bVar1 = (name == "Up");
						if (bVar1) {
							pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__Up();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x44f9bf2d) {
						bVar1 = (name == "Pause");
						if (bVar1) {
							pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__Pause();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x496ac1c6) {
						bVar1 = (name == "RestartGame");
						if (bVar1) {
							pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__RestartGame();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x51a47144) {
					if (uVar2 == 0x4c33ceaa) {
						bVar1 = (name == "PushToTalk");
						if (bVar1) {
							pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__PushToTalk();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x51a47143) {
						bVar1 = (name == "HideChat");
						if (bVar1) {
							pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__HideChat();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x59d8853d) {
					bVar1 = (name == "ZoomIn");
					if (bVar1) {
						pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__ZoomIn();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x7a15f7a2) {
					bVar1 = (name == "OpenCurrentScreenSearch");
					if (bVar1) {
						pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__OpenCurrentScreenSearch();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x9c35923c) {
				if (uVar2 < 0x86de76b7) {
					if (uVar2 == 0x8134b193) {
						bVar1 = (name == "HideUI");
						if (bVar1) {
							pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__HideUI();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x840193c6) {
						bVar1 = (name == "ZoomOut");
						if (bVar1) {
							pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__ZoomOut();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x86de76b6) {
						bVar1 = (name == "SpectateNextPlayer");
						if (bVar1) {
							pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__SpectateNextPlayer();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x896ac890) {
					if (uVar2 == 0x88ce65f6) {
						bVar1 = (name == "ChangeCamera");
						if (bVar1) {
							pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__ChangeCamera();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x896ac88f) {
						bVar1 = (name == "Autorun");
						if (bVar1) {
							pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__Autorun();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x92773890) {
					bVar1 = (name == "Left");
					if (bVar1) {
						pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__Left();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x9c35923b) {
					bVar1 = (name == "ToggleScoreboard");
					if (bVar1) {
						pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__ToggleScoreboard();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xc2954bc3) {
				if (uVar2 == 0x9cd60e67) {
					bVar1 = (name == "HideCursor");
					if (bVar1) {
						pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__HideCursor();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xa4995035) {
					bVar1 = (name == "Down");
					if (bVar1) {
						pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__Down();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc2954bc2) {
					bVar1 = (name == "Back");
					if (bVar1) {
						pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__Back();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xd31e770f) {
				if (uVar2 == 0xcfea99f1) {
					bVar1 = (name == "ToggleMap");
					if (bVar1) {
						pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__ToggleMap();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xd31e770e) {
					bVar1 = (name == "SpectatePreviousPlayer");
					if (bVar1) {
						pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__SpectatePreviousPlayer();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xe713b670) {
				bVar1 = (name == "Modifier");
				if (bVar1) {
					pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__Modifier();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xe50883ba) {
				bVar1 = (name == "Forward");
				if (bVar1) {
					pCVar3 = CustomLogicInputGeneralEnum.Bindings.__CreatePropertyBinding__Forward();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputGeneralEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002C03")]
		[Address(RVA = "0x5983F20", Offset = "0x5982F20", VA = "0x5983F20")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__Forward()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Forward): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Forward_g____getter_2);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C04")]
		[Address(RVA = "0x5983FC0", Offset = "0x5982FC0", VA = "0x5983FC0")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__Back()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Back): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Back_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C05")]
		[Address(RVA = "0x5984060", Offset = "0x5983060", VA = "0x5984060")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__Left()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Left): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Left_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C06")]
		[Address(RVA = "0x5984100", Offset = "0x5983100", VA = "0x5984100")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__Right()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Right): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Right_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C07")]
		[Address(RVA = "0x59841A0", Offset = "0x59831A0", VA = "0x59841A0")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__Up()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Up): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Up_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C08")]
		[Address(RVA = "0x5984240", Offset = "0x5983240", VA = "0x5984240")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__Down()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Down): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Down_g____getter_7_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C09")]
		[Address(RVA = "0x59842E0", Offset = "0x59832E0", VA = "0x59842E0")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__Modifier()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Modifier): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Modifier_g____getter_8);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C0A")]
		[Address(RVA = "0x5984380", Offset = "0x5983380", VA = "0x5984380")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__Autorun()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Autorun): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Autorun_g____getter_9);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C0B")]
		[Address(RVA = "0x5984420", Offset = "0x5983420", VA = "0x5984420")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__Pause()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Pause): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Pause_g____getter_10_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C0C")]
		[Address(RVA = "0x59844C0", Offset = "0x59834C0", VA = "0x59844C0")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__ChangeCharacter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ChangeCharacter): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ChangeCharacter_g____g);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C0D")]
		[Address(RVA = "0x5984560", Offset = "0x5983560", VA = "0x5984560")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__RestartGame()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__RestartGame): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__RestartGame_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C0E")]
		[Address(RVA = "0x5984600", Offset = "0x5983600", VA = "0x5984600")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__ToggleScoreboard()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ToggleScoreboard): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ToggleScoreboard_g);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C0F")]
		[Address(RVA = "0x59846A0", Offset = "0x59836A0", VA = "0x59846A0")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__ToggleMap()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ToggleMap): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ToggleMap_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C10")]
		[Address(RVA = "0x5984740", Offset = "0x5983740", VA = "0x5984740")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__Chat()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__Chat): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__Chat_g____getter_15_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C11")]
		[Address(RVA = "0x59847E0", Offset = "0x59837E0", VA = "0x59847E0")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__PushToTalk()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__PushToTalk): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__PushToTalk_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C12")]
		[Address(RVA = "0x5984880", Offset = "0x5983880", VA = "0x5984880")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__ChangeCamera()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ChangeCamera): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ChangeCamera_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C13")]
		[Address(RVA = "0x5984920", Offset = "0x5983920", VA = "0x5984920")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__HideCursor()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__HideCursor): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideCursor_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C14")]
		[Address(RVA = "0x59849C0", Offset = "0x59839C0", VA = "0x59849C0")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__SpectatePreviousPlayer()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__SpectatePreviousPlayer): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SpectatePreviousPlayer);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C15")]
		[Address(RVA = "0x5984A60", Offset = "0x5983A60", VA = "0x5984A60")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__SpectateNextPlayer()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__SpectateNextPlayer): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SpectateNextPlayer_g);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C16")]
		[Address(RVA = "0x5984B00", Offset = "0x5983B00", VA = "0x5984B00")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__SkipCutscene()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__SkipCutscene): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__SkipCutscene_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C17")]
		[Address(RVA = "0x5984BA0", Offset = "0x5983BA0", VA = "0x5984BA0")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__HideUI()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__HideUI): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideUI_g____getter_22);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C18")]
		[Address(RVA = "0x5984C40", Offset = "0x5983C40", VA = "0x5984C40")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__DebugWindow()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__DebugWindow): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__DebugWindow_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C19")]
		[Address(RVA = "0x5984CE0", Offset = "0x5983CE0", VA = "0x5984CE0")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__RotateWOWCamera()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__RotateWOWCamera): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__RotateWOWCamera_g____g);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C1A")]
		[Address(RVA = "0x5984D80", Offset = "0x5983D80", VA = "0x5984D80")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__ZoomIn()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ZoomIn): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ZoomIn_g____getter_25);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C1B")]
		[Address(RVA = "0x5984E20", Offset = "0x5983E20", VA = "0x5984E20")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__ZoomOut()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__ZoomOut): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__ZoomOut_g____getter_26);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C1C")]
		[Address(RVA = "0x5984EC0", Offset = "0x5983EC0", VA = "0x5984EC0")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__HideChat()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__HideChat): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__HideChat_g____getter_2);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C1D")]
		[Address(RVA = "0x5984F60", Offset = "0x5983F60", VA = "0x5984F60")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__OpenSearchPalette()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__OpenSearchPalette): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__OpenSearchPalette_g);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C1E")]
		[Address(RVA = "0x5985000", Offset = "0x5984000", VA = "0x5985000")]
		public static CLPropertyBinding<CustomLogicInputGeneralEnum> __CreatePropertyBinding__OpenCurrentScreenSearch()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum.Bindings$$__CreatePropertyBinding__OpenCurrentScreenSearch): 2 lines keep C-only constructs
			Func<CustomLogicInputGeneralEnum, object> __this;
			CLPropertyBinding<CustomLogicInputGeneralEnum> __this_00;

			__this = new Func<CustomLogicInputGeneralEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputGeneralEnum_Bindings___CreatePropertyBinding__OpenCurrentScreenSearc);
			__this_00 = new CLPropertyBinding<CustomLogicInputGeneralEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x4001806")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string RotateWOWCameraValue;

	[Token(Token = "0x4001807")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string ZoomInValue;

	[Token(Token = "0x4001808")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string ZoomOutValue;

	[Token(Token = "0x4001809")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string HideChatValue;

	[Token(Token = "0x400180A")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string OpenSearchPaletteValue;

	[Token(Token = "0x400180B")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string OpenCurrentScreenSearchValue;

	[Token(Token = "0x400180C")]
	[FieldOffset(Offset = "0x30")]
	private static readonly string ForwardValue;

	[Token(Token = "0x400180D")]
	[FieldOffset(Offset = "0x38")]
	private static readonly string BackValue;

	[Token(Token = "0x400180E")]
	[FieldOffset(Offset = "0x40")]
	private static readonly string LeftValue;

	[Token(Token = "0x400180F")]
	[FieldOffset(Offset = "0x48")]
	private static readonly string RightValue;

	[Token(Token = "0x4001810")]
	[FieldOffset(Offset = "0x50")]
	private static readonly string UpValue;

	[Token(Token = "0x4001811")]
	[FieldOffset(Offset = "0x58")]
	private static readonly string DownValue;

	[Token(Token = "0x4001812")]
	[FieldOffset(Offset = "0x60")]
	private static readonly string ModifierValue;

	[Token(Token = "0x4001813")]
	[FieldOffset(Offset = "0x68")]
	private static readonly string AutorunValue;

	[Token(Token = "0x4001814")]
	[FieldOffset(Offset = "0x70")]
	private static readonly string PauseValue;

	[Token(Token = "0x4001815")]
	[FieldOffset(Offset = "0x78")]
	private static readonly string ChangeCharacterValue;

	[Token(Token = "0x4001816")]
	[FieldOffset(Offset = "0x80")]
	private static readonly string RestartGameValue;

	[Token(Token = "0x4001817")]
	[FieldOffset(Offset = "0x88")]
	private static readonly string ToggleScoreboardValue;

	[Token(Token = "0x4001818")]
	[FieldOffset(Offset = "0x90")]
	private static readonly string ToggleMapValue;

	[Token(Token = "0x4001819")]
	[FieldOffset(Offset = "0x98")]
	private static readonly string ChatValue;

	[Token(Token = "0x400181A")]
	[FieldOffset(Offset = "0xA0")]
	private static readonly string PushToTalkValue;

	[Token(Token = "0x400181B")]
	[FieldOffset(Offset = "0xA8")]
	private static readonly string ChangeCameraValue;

	[Token(Token = "0x400181C")]
	[FieldOffset(Offset = "0xB0")]
	private static readonly string HideCursorValue;

	[Token(Token = "0x400181D")]
	[FieldOffset(Offset = "0xB8")]
	private static readonly string SpectatePreviousPlayerValue;

	[Token(Token = "0x400181E")]
	[FieldOffset(Offset = "0xC0")]
	private static readonly string SpectateNextPlayerValue;

	[Token(Token = "0x400181F")]
	[FieldOffset(Offset = "0xC8")]
	private static readonly string SkipCutsceneValue;

	[Token(Token = "0x4001820")]
	[FieldOffset(Offset = "0xD0")]
	private static readonly string HideUIValue;

	[Token(Token = "0x4001821")]
	[FieldOffset(Offset = "0xD8")]
	private static readonly string DebugWindowValue;

	[Token(Token = "0x170006B0")]
	public static string Forward
	{
		[Token(Token = "0x6002BE0")]
		[Address(RVA = "0x5982160", Offset = "0x5981160", VA = "0x5982160")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_Forward): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754669f == false) {
				Il2CppMethodInitialized_0754669f = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.ForwardValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x30);
		}
	}

	[Token(Token = "0x170006B1")]
	public static string Back
	{
		[Token(Token = "0x6002BE1")]
		[Address(RVA = "0x59821D0", Offset = "0x59811D0", VA = "0x59821D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_Back): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466a0 == false) {
				Il2CppMethodInitialized_075466a0 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.BackValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x38);
		}
	}

	[Token(Token = "0x170006B2")]
	public static string Left
	{
		[Token(Token = "0x6002BE2")]
		[Address(RVA = "0x5982240", Offset = "0x5981240", VA = "0x5982240")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_Left): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466a1 == false) {
				Il2CppMethodInitialized_075466a1 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.LeftValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x40);
		}
	}

	[Token(Token = "0x170006B3")]
	public static string Right
	{
		[Token(Token = "0x6002BE3")]
		[Address(RVA = "0x59822B0", Offset = "0x59812B0", VA = "0x59822B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_Right): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466a2 == false) {
				Il2CppMethodInitialized_075466a2 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.RightValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x48);
		}
	}

	[Token(Token = "0x170006B4")]
	public static string Up
	{
		[Token(Token = "0x6002BE4")]
		[Address(RVA = "0x5982320", Offset = "0x5981320", VA = "0x5982320")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_Up): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466a3 == false) {
				Il2CppMethodInitialized_075466a3 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.UpValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x50);
		}
	}

	[Token(Token = "0x170006B5")]
	public static string Down
	{
		[Token(Token = "0x6002BE5")]
		[Address(RVA = "0x5982390", Offset = "0x5981390", VA = "0x5982390")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_Down): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466a4 == false) {
				Il2CppMethodInitialized_075466a4 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.DownValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x58);
		}
	}

	[Token(Token = "0x170006B6")]
	public static string Modifier
	{
		[Token(Token = "0x6002BE6")]
		[Address(RVA = "0x5982400", Offset = "0x5981400", VA = "0x5982400")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_Modifier): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466a5 == false) {
				Il2CppMethodInitialized_075466a5 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.ModifierValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x60);
		}
	}

	[Token(Token = "0x170006B7")]
	public static string Autorun
	{
		[Token(Token = "0x6002BE7")]
		[Address(RVA = "0x5982470", Offset = "0x5981470", VA = "0x5982470")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_Autorun): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466a6 == false) {
				Il2CppMethodInitialized_075466a6 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.AutorunValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x68);
		}
	}

	[Token(Token = "0x170006B8")]
	public static string Pause
	{
		[Token(Token = "0x6002BE8")]
		[Address(RVA = "0x59824E0", Offset = "0x59814E0", VA = "0x59824E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_Pause): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466a7 == false) {
				Il2CppMethodInitialized_075466a7 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.PauseValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x70);
		}
	}

	[Token(Token = "0x170006B9")]
	public static string ChangeCharacter
	{
		[Token(Token = "0x6002BE9")]
		[Address(RVA = "0x5982550", Offset = "0x5981550", VA = "0x5982550")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_ChangeCharacter): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466a8 == false) {
				Il2CppMethodInitialized_075466a8 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.ChangeCharacterValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x78);
		}
	}

	[Token(Token = "0x170006BA")]
	public static string RestartGame
	{
		[Token(Token = "0x6002BEA")]
		[Address(RVA = "0x59825C0", Offset = "0x59815C0", VA = "0x59825C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_RestartGame): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466a9 == false) {
				Il2CppMethodInitialized_075466a9 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.RestartGameValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x80);
		}
	}

	[Token(Token = "0x170006BB")]
	public static string ToggleScoreboard
	{
		[Token(Token = "0x6002BEB")]
		[Address(RVA = "0x5982630", Offset = "0x5981630", VA = "0x5982630")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_ToggleScoreboard): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466aa == false) {
				Il2CppMethodInitialized_075466aa = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.ToggleScoreboardValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x88);
		}
	}

	[Token(Token = "0x170006BC")]
	public static string ToggleMap
	{
		[Token(Token = "0x6002BEC")]
		[Address(RVA = "0x59826A0", Offset = "0x59816A0", VA = "0x59826A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_ToggleMap): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466ab == false) {
				Il2CppMethodInitialized_075466ab = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.ToggleMapValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x90);
		}
	}

	[Token(Token = "0x170006BD")]
	public static string Chat
	{
		[Token(Token = "0x6002BED")]
		[Address(RVA = "0x5982710", Offset = "0x5981710", VA = "0x5982710")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_Chat): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466ac == false) {
				Il2CppMethodInitialized_075466ac = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.ChatValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x98);
		}
	}

	[Token(Token = "0x170006BE")]
	public static string PushToTalk
	{
		[Token(Token = "0x6002BEE")]
		[Address(RVA = "0x5982780", Offset = "0x5981780", VA = "0x5982780")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_PushToTalk): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466ad == false) {
				Il2CppMethodInitialized_075466ad = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.PushToTalkValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0xa0);
		}
	}

	[Token(Token = "0x170006BF")]
	public static string ChangeCamera
	{
		[Token(Token = "0x6002BEF")]
		[Address(RVA = "0x59827F0", Offset = "0x59817F0", VA = "0x59827F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_ChangeCamera): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466ae == false) {
				Il2CppMethodInitialized_075466ae = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.ChangeCameraValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0xa8);
		}
	}

	[Token(Token = "0x170006C0")]
	public static string HideCursor
	{
		[Token(Token = "0x6002BF0")]
		[Address(RVA = "0x5982860", Offset = "0x5981860", VA = "0x5982860")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_HideCursor): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466af == false) {
				Il2CppMethodInitialized_075466af = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.HideCursorValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0xb0);
		}
	}

	[Token(Token = "0x170006C1")]
	public static string SpectatePreviousPlayer
	{
		[Token(Token = "0x6002BF1")]
		[Address(RVA = "0x59828D0", Offset = "0x59818D0", VA = "0x59828D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_SpectatePreviousPlayer): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466b0 == false) {
				Il2CppMethodInitialized_075466b0 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.SpectatePreviousPlayerValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0xb8);
		}
	}

	[Token(Token = "0x170006C2")]
	public static string SpectateNextPlayer
	{
		[Token(Token = "0x6002BF2")]
		[Address(RVA = "0x5982940", Offset = "0x5981940", VA = "0x5982940")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_SpectateNextPlayer): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466b1 == false) {
				Il2CppMethodInitialized_075466b1 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.SpectateNextPlayerValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0xc0);
		}
	}

	[Token(Token = "0x170006C3")]
	public static string SkipCutscene
	{
		[Token(Token = "0x6002BF3")]
		[Address(RVA = "0x59829B0", Offset = "0x59819B0", VA = "0x59829B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_SkipCutscene): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466b2 == false) {
				Il2CppMethodInitialized_075466b2 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.SkipCutsceneValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 200);
		}
	}

	[Token(Token = "0x170006C4")]
	public static string HideUI
	{
		[Token(Token = "0x6002BF4")]
		[Address(RVA = "0x5982A20", Offset = "0x5981A20", VA = "0x5982A20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_HideUI): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466b3 == false) {
				Il2CppMethodInitialized_075466b3 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.HideUIValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0xd0);
		}
	}

	[Token(Token = "0x170006C5")]
	public static string DebugWindow
	{
		[Token(Token = "0x6002BF5")]
		[Address(RVA = "0x5982A90", Offset = "0x5981A90", VA = "0x5982A90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_DebugWindow): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466b4 == false) {
				Il2CppMethodInitialized_075466b4 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.DebugWindowValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0xd8);
		}
	}

	[Token(Token = "0x170006C6")]
	public static string RotateWOWCamera
	{
		[Token(Token = "0x6002BF6")]
		[Address(RVA = "0x5982B00", Offset = "0x5981B00", VA = "0x5982B00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_RotateWOWCamera): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466b5 == false) {
				Il2CppMethodInitialized_075466b5 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.RotateWOWCameraValue;
			}
			return *(String*)(typeof(CustomLogicInputGeneralEnum)).static_fields ;
		}
	}

	[Token(Token = "0x170006C7")]
	public static string ZoomIn
	{
		[Token(Token = "0x6002BF7")]
		[Address(RVA = "0x5982B70", Offset = "0x5981B70", VA = "0x5982B70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_ZoomIn): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466b6 == false) {
				Il2CppMethodInitialized_075466b6 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.ZoomInValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 8);
		}
	}

	[Token(Token = "0x170006C8")]
	public static string ZoomOut
	{
		[Token(Token = "0x6002BF8")]
		[Address(RVA = "0x5982BE0", Offset = "0x5981BE0", VA = "0x5982BE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_ZoomOut): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466b7 == false) {
				Il2CppMethodInitialized_075466b7 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.ZoomOutValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x170006C9")]
	public static string HideChat
	{
		[Token(Token = "0x6002BF9")]
		[Address(RVA = "0x5982C50", Offset = "0x5981C50", VA = "0x5982C50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_HideChat): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466b8 == false) {
				Il2CppMethodInitialized_075466b8 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.HideChatValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x170006CA")]
	public static string OpenSearchPalette
	{
		[Token(Token = "0x6002BFA")]
		[Address(RVA = "0x5982CC0", Offset = "0x5981CC0", VA = "0x5982CC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_OpenSearchPalette): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466b9 == false) {
				Il2CppMethodInitialized_075466b9 = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.OpenSearchPaletteValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x20);
		}
	}

	[Token(Token = "0x170006CB")]
	public static string OpenCurrentScreenSearch
	{
		[Token(Token = "0x6002BFB")]
		[Address(RVA = "0x5982D30", Offset = "0x5981D30", VA = "0x5982D30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_OpenCurrentScreenSearch): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075466ba == false) {
				Il2CppMethodInitialized_075466ba = true;
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputGeneralEnum.OpenCurrentScreenSearchValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x28);
		}
	}

	[Token(Token = "0x170006CC")]
	public override string ClassName
	{
		[Token(Token = "0x6002BFC")]
		[Address(RVA = "0x5982DA0", Offset = "0x5981DA0", VA = "0x5982DA0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_ClassName): clean
			return "InputGeneralEnum";
		}
	}

	[Token(Token = "0x170006CD")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002BFD")]
		[Address(RVA = "0x5982DD0", Offset = "0x5981DD0", VA = "0x5982DD0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170006CE")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002BFE")]
		[Address(RVA = "0x5982DE0", Offset = "0x5981DE0", VA = "0x5982DE0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170006CF")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002BFF")]
		[Address(RVA = "0x5982DF0", Offset = "0x5981DF0", VA = "0x5982DF0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002BDF")]
	[Address(RVA = "0x59820F0", Offset = "0x59810F0", VA = "0x59820F0")]
	public CustomLogicInputGeneralEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c (CustomLogic.CustomLogicInputGeneralEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754669e == false) {
			Il2CppMethodInitialized_0754669e = true;
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

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicInputGeneralEnum.c.

	// CustomLogic.CustomLogicInputGeneralEnum$$.cctor: clean
	static CustomLogicInputGeneralEnum()
	{
		CustomLogic_CustomLogicInputGeneralEnum_StaticFields pCVar1;

		CustomLogicInputGeneralEnum.RotateWOWCameraValue = "General/RotateWOWCamera";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.ZoomInValue = "General/ZoomIn";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.ZoomOutValue = "General/ZoomOut";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.HideChatValue = "General/HideChat";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.OpenSearchPaletteValue = "General/OpenSearchPalette";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.OpenCurrentScreenSearchValue = "General/OpenCurrentScreenSearch";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.ForwardValue = "General/Forward";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.BackValue = "General/Back";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.LeftValue = "General/Left";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.RightValue = "General/Right";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.UpValue = "General/Up";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.DownValue = "General/Down";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.ModifierValue = "General/Modifier";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.AutorunValue = "General/Autorun";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.PauseValue = "General/Pause";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.ChangeCharacterValue = "General/ChangeCharacter";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.RestartGameValue = "General/RestartGame";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.ToggleScoreboardValue = "General/ToggleScoreboard";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.ToggleMapValue = "General/ToggleMap";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.ChatValue = "General/Chat";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.PushToTalkValue = "General/PushToTalk";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.ChangeCameraValue = "General/ChangeCamera";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.HideCursorValue = "General/HideCursor";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.SpectatePreviousPlayerValue = "General/SpectatePreviousPlayer";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.SpectateNextPlayerValue = "General/SpectateNextPlayer";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.SkipCutsceneValue = "General/SkipCutscene";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.HideUIValue = "General/HideUI";
		pCVar1 = typeof(CustomLogicInputGeneralEnum).static_fields;
		pCVar1.DebugWindowValue = "General/DebugWindow";
		return;
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Forward");
		__this.Add((Il2CppObject *)"Back");
		__this.Add((Il2CppObject *)"Left");
		__this.Add((Il2CppObject *)"Right");
		__this.Add((Il2CppObject *)"Up");
		__this.Add((Il2CppObject *)"Down");
		__this.Add((Il2CppObject *)"Modifier");
		__this.Add((Il2CppObject *)"Autorun");
		__this.Add((Il2CppObject *)"Pause");
		__this.Add((Il2CppObject *)"ChangeCharacter");
		__this.Add((Il2CppObject *)"RestartGame");
		__this.Add((Il2CppObject *)"ToggleScoreboard");
		__this.Add((Il2CppObject *)"ToggleMap");
		__this.Add((Il2CppObject *)"Chat");
		__this.Add((Il2CppObject *)"PushToTalk");
		__this.Add((Il2CppObject *)"ChangeCamera");
		__this.Add((Il2CppObject *)"HideCursor");
		__this.Add((Il2CppObject *)"SpectatePreviousPlayer");
		__this.Add((Il2CppObject *)"SpectateNextPlayer");
		__this.Add((Il2CppObject *)"SkipCutscene");
		__this.Add((Il2CppObject *)"HideUI");
		__this.Add((Il2CppObject *)"DebugWindow");
		__this.Add((Il2CppObject *)"RotateWOWCamera");
		__this.Add((Il2CppObject *)"ZoomIn");
		__this.Add((Il2CppObject *)"ZoomOut");
		__this.Add((Il2CppObject *)"HideChat");
		__this.Add((Il2CppObject *)"OpenSearchPalette");
		__this.Add((Il2CppObject *)"OpenCurrentScreenSearch");
		CustomLogicInputGeneralEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Forward>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Forward_g____getter_2_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466dc == false) {
			Il2CppMethodInitialized_075466dc = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469a0 == false) {
			Il2CppMethodInitialized_075469a0 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.ForwardValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x30);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Back>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Back_g____getter_3_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466dd == false) {
			Il2CppMethodInitialized_075466dd = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469a1 == false) {
			Il2CppMethodInitialized_075469a1 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.BackValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x38);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Left>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Left_g____getter_4_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466de == false) {
			Il2CppMethodInitialized_075466de = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469a2 == false) {
			Il2CppMethodInitialized_075469a2 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.LeftValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x40);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Right>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Right_g____getter_5_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466df == false) {
			Il2CppMethodInitialized_075466df = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469a3 == false) {
			Il2CppMethodInitialized_075469a3 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.RightValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x48);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Up>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Up_g____getter_6_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466e0 == false) {
			Il2CppMethodInitialized_075466e0 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469a4 == false) {
			Il2CppMethodInitialized_075469a4 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.UpValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x50);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Down>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Down_g____getter_7_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466e1 == false) {
			Il2CppMethodInitialized_075466e1 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469a5 == false) {
			Il2CppMethodInitialized_075469a5 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.DownValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x58);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Modifier>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Modifier_g____getter_8_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466e2 == false) {
			Il2CppMethodInitialized_075466e2 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469a6 == false) {
			Il2CppMethodInitialized_075469a6 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.ModifierValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x60);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Autorun>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__Autorun_g____getter_9_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466e3 == false) {
			Il2CppMethodInitialized_075466e3 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469a7 == false) {
			Il2CppMethodInitialized_075469a7 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.AutorunValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x68);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Pause>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__Pause_g____getter_10_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466e4 == false) {
			Il2CppMethodInitialized_075466e4 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469a8 == false) {
			Il2CppMethodInitialized_075469a8 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.PauseValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x70);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ChangeCharacter>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__ChangeCharacter_g____getter_11_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466e5 == false) {
			Il2CppMethodInitialized_075466e5 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469a9 == false) {
			Il2CppMethodInitialized_075469a9 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.ChangeCharacterValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x78);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__RestartGame>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__RestartGame_g____getter_12_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466e6 == false) {
			Il2CppMethodInitialized_075466e6 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469aa == false) {
			Il2CppMethodInitialized_075469aa = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.RestartGameValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x80);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ToggleScoreboard>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__ToggleScoreboard_g____getter_13_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466e7 == false) {
			Il2CppMethodInitialized_075466e7 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469ab == false) {
			Il2CppMethodInitialized_075469ab = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.ToggleScoreboardValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x88);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ToggleMap>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__ToggleMap_g____getter_14_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466e8 == false) {
			Il2CppMethodInitialized_075466e8 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469ac == false) {
			Il2CppMethodInitialized_075469ac = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.ToggleMapValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x90);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__Chat>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__Chat_g____getter_15_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466e9 == false) {
			Il2CppMethodInitialized_075466e9 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469ad == false) {
			Il2CppMethodInitialized_075469ad = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.ChatValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x98);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__PushToTalk>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__PushToTalk_g____getter_16_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466ea == false) {
			Il2CppMethodInitialized_075466ea = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469ae == false) {
			Il2CppMethodInitialized_075469ae = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.PushToTalkValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0xa0);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ChangeCamera>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__ChangeCamera_g____getter_17_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466eb == false) {
			Il2CppMethodInitialized_075466eb = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469af == false) {
			Il2CppMethodInitialized_075469af = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.ChangeCameraValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0xa8);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__HideCursor>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__HideCursor_g____getter_18_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466ec == false) {
			Il2CppMethodInitialized_075466ec = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469b0 == false) {
			Il2CppMethodInitialized_075469b0 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.HideCursorValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0xb0);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__SpectatePreviousPlayer>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__SpectatePreviousPlayer_g____getter_19_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466ed == false) {
			Il2CppMethodInitialized_075466ed = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469b1 == false) {
			Il2CppMethodInitialized_075469b1 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.SpectatePreviousPlayerValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0xb8);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__SpectateNextPlayer>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__SpectateNextPlayer_g____getter_20_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466ee == false) {
			Il2CppMethodInitialized_075466ee = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469b2 == false) {
			Il2CppMethodInitialized_075469b2 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.SpectateNextPlayerValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0xc0);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__SkipCutscene>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__SkipCutscene_g____getter_21_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466ef == false) {
			Il2CppMethodInitialized_075466ef = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469b3 == false) {
			Il2CppMethodInitialized_075469b3 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.SkipCutsceneValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 200);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__HideUI>g____getter|22_0: clean
	private static object Bindings____CreatePropertyBinding__HideUI_g____getter_22_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466f0 == false) {
			Il2CppMethodInitialized_075466f0 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469b4 == false) {
			Il2CppMethodInitialized_075469b4 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.HideUIValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0xd0);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__DebugWindow>g____getter|23_0: clean
	private static object Bindings____CreatePropertyBinding__DebugWindow_g____getter_23_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466f1 == false) {
			Il2CppMethodInitialized_075466f1 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469b5 == false) {
			Il2CppMethodInitialized_075469b5 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.DebugWindowValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0xd8);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__RotateWOWCamera>g____getter|24_0: clean
	private static object Bindings____CreatePropertyBinding__RotateWOWCamera_g____getter_24_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466f2 == false) {
			Il2CppMethodInitialized_075466f2 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469b6 == false) {
			Il2CppMethodInitialized_075469b6 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.RotateWOWCameraValue;
		}
		return *(object*)(typeof(CustomLogicInputGeneralEnum)).static_fields;
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ZoomIn>g____getter|25_0: clean
	private static object Bindings____CreatePropertyBinding__ZoomIn_g____getter_25_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466f3 == false) {
			Il2CppMethodInitialized_075466f3 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469b7 == false) {
			Il2CppMethodInitialized_075469b7 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.ZoomInValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 8);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__ZoomOut>g____getter|26_0: clean
	private static object Bindings____CreatePropertyBinding__ZoomOut_g____getter_26_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466f4 == false) {
			Il2CppMethodInitialized_075466f4 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469b8 == false) {
			Il2CppMethodInitialized_075469b8 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.ZoomOutValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__HideChat>g____getter|27_0: clean
	private static object Bindings____CreatePropertyBinding__HideChat_g____getter_27_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466f5 == false) {
			Il2CppMethodInitialized_075466f5 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469b9 == false) {
			Il2CppMethodInitialized_075469b9 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.HideChatValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x18);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__OpenSearchPalette>g____getter|28_0: clean
	private static object Bindings____CreatePropertyBinding__OpenSearchPalette_g____getter_28_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466f6 == false) {
			Il2CppMethodInitialized_075466f6 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469ba == false) {
			Il2CppMethodInitialized_075469ba = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.OpenSearchPaletteValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x20);
	}

	// CustomLogic.CustomLogicInputGeneralEnum.Bindings$$<__CreatePropertyBinding__OpenCurrentScreenSearch>g____getter|29_0: clean
	private static object Bindings____CreatePropertyBinding__OpenCurrentScreenSearch_g____getter_29_0(CustomLogicInputGeneralEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075466f7 == false) {
			Il2CppMethodInitialized_075466f7 = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469bb == false) {
			Il2CppMethodInitialized_075469bb = true;
			uVar1 = (typeof(CustomLogicInputGeneralEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputGeneralEnum))._2).cctor_finished_or_no_cctor ;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputGeneralEnum.OpenCurrentScreenSearchValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputGeneralEnum)).static_fields + 0x28);
	}
}
