// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicInputInteractionEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000539")]
[CompilerGenerated]
internal class CustomLogicInputInteractionEnum : BuiltinClassInstance
{
	[Token(Token = "0x200053A")]
	public static class Factory
	{
		[Token(Token = "0x6002C8E")]
		[Address(RVA = "0x5989F00", Offset = "0x5988F00", VA = "0x5989F00")]
		public static CustomLogicInputInteractionEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicInputInteractionEnum __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputInteractionEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicInputInteractionEnum();
			return __this;
		}
	}

	[Token(Token = "0x200053B")]
	public static class Bindings
	{
		[Token(Token = "0x4001847")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002C8F")]
		[Address(RVA = "0x598A020", Offset = "0x5989020", VA = "0x598A020")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$CreateMemberBinding): 7 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicInputInteractionEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			if (Il2CppMethodInitialized_07546745 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicInputInteractionEnum.Bindings)) ;
				Il2CppMethodInitialized_07546745 = true;
			}
			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x93a28290) {
				if (uVar2 < 0x6b01bab5) {
					if (uVar2 < 0x5f8e9555) {
						if (uVar2 == 0x1e2eb9ef) {
							bVar1 = (name == "Interact");
							if (bVar1) {
								pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__Interact();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x5f8e9554) {
							bVar1 = (name == "Interact3");
							if (bVar1) {
								pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__Interact3();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x608e96e7) {
						bVar1 = (name == "Interact2");
						if (bVar1) {
							pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__Interact2();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x6b01bab4) {
						bVar1 = (name == "EmoteMenu");
						if (bVar1) {
							pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__EmoteMenu();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x8fa27c44) {
					if (uVar2 == 0x8ea27ab0) {
						bVar1 = (name == "QuickSelect4");
						if (bVar1) {
							pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__QuickSelect4();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x8fa27c43) {
						bVar1 = (name == "QuickSelect5");
						if (bVar1) {
							pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__QuickSelect5();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x90a27dd6) {
					bVar1 = (name == "QuickSelect6");
					if (bVar1) {
						pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__QuickSelect6();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x91a27f69) {
					bVar1 = (name == "QuickSelect7");
					if (bVar1) {
						pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__QuickSelect7();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x93a2828f) {
					bVar1 = (name == "QuickSelect1");
					if (bVar1) {
						pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__QuickSelect1();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xa9d7fbaf) {
				if (uVar2 < 0x95a285b6) {
					if (uVar2 == 0x94a28422) {
						bVar1 = (name == "QuickSelect2");
						if (bVar1) {
							pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__QuickSelect2();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x95a285b5) {
						bVar1 = (name == "QuickSelect3");
						if (bVar1) {
							pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__QuickSelect3();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x9aa28d94) {
					bVar1 = (name == "QuickSelect8");
					if (bVar1) {
						pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__QuickSelect8();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xa7d7f888) {
					bVar1 = (name == "Function1");
					if (bVar1) {
						pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__Function1();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xa9d7fbae) {
					bVar1 = (name == "Function3");
					if (bVar1) {
						pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__Function3();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xacd80068) {
				if (uVar2 == 0xaad7fd41) {
					bVar1 = (name == "Function2");
					if (bVar1) {
						pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__Function2();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xacd80067) {
					bVar1 = (name == "Function4");
					if (bVar1) {
						pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__Function4();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xd86dc4f0) {
				bVar1 = (name == "ActionMenu");
				if (bVar1) {
					pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__ActionMenu();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf092cb97) {
				bVar1 = (name == "MenuNext");
				if (bVar1) {
					pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__MenuNext();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf32eba39) {
				bVar1 = (name == "ItemMenu");
				if (bVar1) {
					pCVar3 = CustomLogicInputInteractionEnum.Bindings.__CreatePropertyBinding__ItemMenu();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputInteractionEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002C90")]
		[Address(RVA = "0x598A770", Offset = "0x5989770", VA = "0x598A770")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__Interact()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Interact): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact_g____gett);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C91")]
		[Address(RVA = "0x598A810", Offset = "0x5989810", VA = "0x598A810")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__Interact2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Interact2): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact2_g____get);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C92")]
		[Address(RVA = "0x598A8B0", Offset = "0x59898B0", VA = "0x598A8B0")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__Interact3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Interact3): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact3_g____get);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C93")]
		[Address(RVA = "0x598A950", Offset = "0x5989950", VA = "0x598A950")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__ItemMenu()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__ItemMenu): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__ItemMenu_g____gett);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C94")]
		[Address(RVA = "0x598A9F0", Offset = "0x59899F0", VA = "0x598A9F0")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__ActionMenu()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__ActionMenu): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__ActionMenu_g____ge);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C95")]
		[Address(RVA = "0x598AA90", Offset = "0x5989A90", VA = "0x598AA90")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__EmoteMenu()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__EmoteMenu): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__EmoteMenu_g____get);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C96")]
		[Address(RVA = "0x598AB30", Offset = "0x5989B30", VA = "0x598AB30")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__MenuNext()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__MenuNext): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__MenuNext_g____gett);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C97")]
		[Address(RVA = "0x598ABD0", Offset = "0x5989BD0", VA = "0x598ABD0")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__QuickSelect1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect1): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect1_g);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C98")]
		[Address(RVA = "0x598AC70", Offset = "0x5989C70", VA = "0x598AC70")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__QuickSelect2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect2): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect2_g);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C99")]
		[Address(RVA = "0x598AD10", Offset = "0x5989D10", VA = "0x598AD10")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__QuickSelect3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect3): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect3_g);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C9A")]
		[Address(RVA = "0x598ADB0", Offset = "0x5989DB0", VA = "0x598ADB0")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__QuickSelect4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect4): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect4_g);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C9B")]
		[Address(RVA = "0x598AE50", Offset = "0x5989E50", VA = "0x598AE50")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__QuickSelect5()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect5): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect5_g);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C9C")]
		[Address(RVA = "0x598AEF0", Offset = "0x5989EF0", VA = "0x598AEF0")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__QuickSelect6()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect6): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect6_g);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C9D")]
		[Address(RVA = "0x598AF90", Offset = "0x5989F90", VA = "0x598AF90")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__QuickSelect7()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect7): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect7_g);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C9E")]
		[Address(RVA = "0x598B030", Offset = "0x598A030", VA = "0x598B030")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__QuickSelect8()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect8): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect8_g);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002C9F")]
		[Address(RVA = "0x598B0D0", Offset = "0x598A0D0", VA = "0x598B0D0")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__Function1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function1): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function1_g____get);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CA0")]
		[Address(RVA = "0x598B170", Offset = "0x598A170", VA = "0x598B170")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__Function2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function2): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function2_g____get);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CA1")]
		[Address(RVA = "0x598B210", Offset = "0x598A210", VA = "0x598B210")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__Function3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function3): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function3_g____get);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002CA2")]
		[Address(RVA = "0x598B2B0", Offset = "0x598A2B0", VA = "0x598B2B0")]
		public static CLPropertyBinding<CustomLogicInputInteractionEnum> __CreatePropertyBinding__Function4()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function4): 3 lines keep C-only constructs
			Func<CustomLogicInputInteractionEnum, object> __this;
			CLPropertyBinding<CustomLogicInputInteractionEnum> __this_00;

			__this = new Func<CustomLogicInputInteractionEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function4_g____get);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicInputInteractionEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x4001834")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string InteractValue;

	[Token(Token = "0x4001835")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string Interact2Value;

	[Token(Token = "0x4001836")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string Interact3Value;

	[Token(Token = "0x4001837")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string ItemMenuValue;

	[Token(Token = "0x4001838")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string ActionMenuValue;

	[Token(Token = "0x4001839")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string EmoteMenuValue;

	[Token(Token = "0x400183A")]
	[FieldOffset(Offset = "0x30")]
	private static readonly string MenuNextValue;

	[Token(Token = "0x400183B")]
	[FieldOffset(Offset = "0x38")]
	private static readonly string QuickSelect1Value;

	[Token(Token = "0x400183C")]
	[FieldOffset(Offset = "0x40")]
	private static readonly string QuickSelect2Value;

	[Token(Token = "0x400183D")]
	[FieldOffset(Offset = "0x48")]
	private static readonly string QuickSelect3Value;

	[Token(Token = "0x400183E")]
	[FieldOffset(Offset = "0x50")]
	private static readonly string QuickSelect4Value;

	[Token(Token = "0x400183F")]
	[FieldOffset(Offset = "0x58")]
	private static readonly string QuickSelect5Value;

	[Token(Token = "0x4001840")]
	[FieldOffset(Offset = "0x60")]
	private static readonly string QuickSelect6Value;

	[Token(Token = "0x4001841")]
	[FieldOffset(Offset = "0x68")]
	private static readonly string QuickSelect7Value;

	[Token(Token = "0x4001842")]
	[FieldOffset(Offset = "0x70")]
	private static readonly string QuickSelect8Value;

	[Token(Token = "0x4001843")]
	[FieldOffset(Offset = "0x78")]
	private static readonly string Function1Value;

	[Token(Token = "0x4001844")]
	[FieldOffset(Offset = "0x80")]
	private static readonly string Function2Value;

	[Token(Token = "0x4001845")]
	[FieldOffset(Offset = "0x88")]
	private static readonly string Function3Value;

	[Token(Token = "0x4001846")]
	[FieldOffset(Offset = "0x90")]
	private static readonly string Function4Value;

	[Token(Token = "0x170006E4")]
	public static string Interact
	{
		[Token(Token = "0x6002C76")]
		[Address(RVA = "0x59892B0", Offset = "0x59882B0", VA = "0x59892B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_Interact): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754672f == false) {
				Il2CppMethodInitialized_0754672f = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.InteractValue;
			}
			return *(String*)(typeof(CustomLogicInputInteractionEnum)).static_fields;
		}
	}

	[Token(Token = "0x170006E5")]
	public static string Interact2
	{
		[Token(Token = "0x6002C77")]
		[Address(RVA = "0x5989320", Offset = "0x5988320", VA = "0x5989320")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_Interact2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546730 == false) {
				Il2CppMethodInitialized_07546730 = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.Interact2Value;
			}
			return *(String*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 8);
		}
	}

	[Token(Token = "0x170006E6")]
	public static string Interact3
	{
		[Token(Token = "0x6002C78")]
		[Address(RVA = "0x5989390", Offset = "0x5988390", VA = "0x5989390")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_Interact3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546731 == false) {
				Il2CppMethodInitialized_07546731 = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.Interact3Value;
			}
			return *(String*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x170006E7")]
	public static string ItemMenu
	{
		[Token(Token = "0x6002C79")]
		[Address(RVA = "0x5989400", Offset = "0x5988400", VA = "0x5989400")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_ItemMenu): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546732 == false) {
				Il2CppMethodInitialized_07546732 = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.ItemMenuValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x170006E8")]
	public static string ActionMenu
	{
		[Token(Token = "0x6002C7A")]
		[Address(RVA = "0x5989470", Offset = "0x5988470", VA = "0x5989470")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_ActionMenu): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546733 == false) {
				Il2CppMethodInitialized_07546733 = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.ActionMenuValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x20);
		}
	}

	[Token(Token = "0x170006E9")]
	public static string EmoteMenu
	{
		[Token(Token = "0x6002C7B")]
		[Address(RVA = "0x59894E0", Offset = "0x59884E0", VA = "0x59894E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_EmoteMenu): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546734 == false) {
				Il2CppMethodInitialized_07546734 = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.EmoteMenuValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x28);
		}
	}

	[Token(Token = "0x170006EA")]
	public static string MenuNext
	{
		[Token(Token = "0x6002C7C")]
		[Address(RVA = "0x5989550", Offset = "0x5988550", VA = "0x5989550")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_MenuNext): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546735 == false) {
				Il2CppMethodInitialized_07546735 = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.MenuNextValue;
			}
			return *(String*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x30);
		}
	}

	[Token(Token = "0x170006EB")]
	public static string QuickSelect1
	{
		[Token(Token = "0x6002C7D")]
		[Address(RVA = "0x59895C0", Offset = "0x59885C0", VA = "0x59895C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546736 == false) {
				Il2CppMethodInitialized_07546736 = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.QuickSelect1Value;
			}
			return *(String*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x38);
		}
	}

	[Token(Token = "0x170006EC")]
	public static string QuickSelect2
	{
		[Token(Token = "0x6002C7E")]
		[Address(RVA = "0x5989630", Offset = "0x5988630", VA = "0x5989630")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546737 == false) {
				Il2CppMethodInitialized_07546737 = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.QuickSelect2Value;
			}
			return *(String*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x40);
		}
	}

	[Token(Token = "0x170006ED")]
	public static string QuickSelect3
	{
		[Token(Token = "0x6002C7F")]
		[Address(RVA = "0x59896A0", Offset = "0x59886A0", VA = "0x59896A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546738 == false) {
				Il2CppMethodInitialized_07546738 = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.QuickSelect3Value;
			}
			return *(String*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x48);
		}
	}

	[Token(Token = "0x170006EE")]
	public static string QuickSelect4
	{
		[Token(Token = "0x6002C80")]
		[Address(RVA = "0x5989710", Offset = "0x5988710", VA = "0x5989710")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect4): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546739 == false) {
				Il2CppMethodInitialized_07546739 = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.QuickSelect4Value;
			}
			return *(String*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x50);
		}
	}

	[Token(Token = "0x170006EF")]
	public static string QuickSelect5
	{
		[Token(Token = "0x6002C81")]
		[Address(RVA = "0x5989780", Offset = "0x5988780", VA = "0x5989780")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect5): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754673a == false) {
				Il2CppMethodInitialized_0754673a = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.QuickSelect5Value;
			}
			return *(String*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x58);
		}
	}

	[Token(Token = "0x170006F0")]
	public static string QuickSelect6
	{
		[Token(Token = "0x6002C82")]
		[Address(RVA = "0x59897F0", Offset = "0x59887F0", VA = "0x59897F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect6): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754673b == false) {
				Il2CppMethodInitialized_0754673b = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.QuickSelect6Value;
			}
			return *(String*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x60);
		}
	}

	[Token(Token = "0x170006F1")]
	public static string QuickSelect7
	{
		[Token(Token = "0x6002C83")]
		[Address(RVA = "0x5989860", Offset = "0x5988860", VA = "0x5989860")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect7): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754673c == false) {
				Il2CppMethodInitialized_0754673c = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.QuickSelect7Value;
			}
			return *(String*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x68);
		}
	}

	[Token(Token = "0x170006F2")]
	public static string QuickSelect8
	{
		[Token(Token = "0x6002C84")]
		[Address(RVA = "0x59898D0", Offset = "0x59888D0", VA = "0x59898D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect8): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754673d == false) {
				Il2CppMethodInitialized_0754673d = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.QuickSelect8Value;
			}
			return *(String*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x70);
		}
	}

	[Token(Token = "0x170006F3")]
	public static string Function1
	{
		[Token(Token = "0x6002C85")]
		[Address(RVA = "0x5989940", Offset = "0x5988940", VA = "0x5989940")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_Function1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754673e == false) {
				Il2CppMethodInitialized_0754673e = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.Function1Value;
			}
			return *(String*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x78);
		}
	}

	[Token(Token = "0x170006F4")]
	public static string Function2
	{
		[Token(Token = "0x6002C86")]
		[Address(RVA = "0x59899B0", Offset = "0x59889B0", VA = "0x59899B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_Function2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754673f == false) {
				Il2CppMethodInitialized_0754673f = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.Function2Value;
			}
			return *(String*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x80);
		}
	}

	[Token(Token = "0x170006F5")]
	public static string Function3
	{
		[Token(Token = "0x6002C87")]
		[Address(RVA = "0x5989A20", Offset = "0x5988A20", VA = "0x5989A20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_Function3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546740 == false) {
				Il2CppMethodInitialized_07546740 = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.Function3Value;
			}
			return *(String*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x88);
		}
	}

	[Token(Token = "0x170006F6")]
	public static string Function4
	{
		[Token(Token = "0x6002C88")]
		[Address(RVA = "0x5989A90", Offset = "0x5988A90", VA = "0x5989A90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_Function4): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546741 == false) {
				Il2CppMethodInitialized_07546741 = true;
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicInputInteractionEnum.Function4Value;
			}
			return *(String*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x90);
		}
	}

	[Token(Token = "0x170006F7")]
	public override string ClassName
	{
		[Token(Token = "0x6002C89")]
		[Address(RVA = "0x5989B00", Offset = "0x5988B00", VA = "0x5989B00", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_ClassName): clean
			return "InputInteractionEnum";
		}
	}

	[Token(Token = "0x170006F8")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002C8A")]
		[Address(RVA = "0x5989B30", Offset = "0x5988B30", VA = "0x5989B30", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170006F9")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002C8B")]
		[Address(RVA = "0x5989B40", Offset = "0x5988B40", VA = "0x5989B40", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170006FA")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002C8C")]
		[Address(RVA = "0x5989B50", Offset = "0x5988B50", VA = "0x5989B50", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002C75")]
	[Address(RVA = "0x5989240", Offset = "0x5988240", VA = "0x5989240")]
	public CustomLogicInputInteractionEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c (CustomLogic.CustomLogicInputInteractionEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754672e == false) {
			Il2CppMethodInitialized_0754672e = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicInputInteractionEnum.c.

	// CustomLogic.CustomLogicInputInteractionEnum$$.cctor: clean
	static CustomLogicInputInteractionEnum()
	{
		CustomLogic_CustomLogicInputInteractionEnum_StaticFields pCVar1;

		CustomLogicInputInteractionEnum.InteractValue = "Interaction/Interact";
		pCVar1 = typeof(CustomLogicInputInteractionEnum).static_fields;
		pCVar1.Interact2Value = "Interaction/Interact2";
		pCVar1 = typeof(CustomLogicInputInteractionEnum).static_fields;
		pCVar1.Interact3Value = "Interaction/Interact3";
		pCVar1 = typeof(CustomLogicInputInteractionEnum).static_fields;
		pCVar1.ItemMenuValue = "Interaction/ItemMenu";
		pCVar1 = typeof(CustomLogicInputInteractionEnum).static_fields;
		pCVar1.ActionMenuValue = "Interaction/ActionMenu";
		pCVar1 = typeof(CustomLogicInputInteractionEnum).static_fields;
		pCVar1.EmoteMenuValue = "Interaction/EmoteMenu";
		pCVar1 = typeof(CustomLogicInputInteractionEnum).static_fields;
		pCVar1.MenuNextValue = "Interaction/MenuNext";
		pCVar1 = typeof(CustomLogicInputInteractionEnum).static_fields;
		pCVar1.QuickSelect1Value = "Interaction/QuickSelect1";
		pCVar1 = typeof(CustomLogicInputInteractionEnum).static_fields;
		pCVar1.QuickSelect2Value = "Interaction/QuickSelect2";
		pCVar1 = typeof(CustomLogicInputInteractionEnum).static_fields;
		pCVar1.QuickSelect3Value = "Interaction/QuickSelect3";
		pCVar1 = typeof(CustomLogicInputInteractionEnum).static_fields;
		pCVar1.QuickSelect4Value = "Interaction/QuickSelect4";
		pCVar1 = typeof(CustomLogicInputInteractionEnum).static_fields;
		pCVar1.QuickSelect5Value = "Interaction/QuickSelect5";
		pCVar1 = typeof(CustomLogicInputInteractionEnum).static_fields;
		pCVar1.QuickSelect6Value = "Interaction/QuickSelect6";
		pCVar1 = typeof(CustomLogicInputInteractionEnum).static_fields;
		pCVar1.QuickSelect7Value = "Interaction/QuickSelect7";
		pCVar1 = typeof(CustomLogicInputInteractionEnum).static_fields;
		pCVar1.QuickSelect8Value = "Interaction/QuickSelect8";
		pCVar1 = typeof(CustomLogicInputInteractionEnum).static_fields;
		pCVar1.Function1Value = "Interaction/Function1";
		pCVar1 = typeof(CustomLogicInputInteractionEnum).static_fields;
		pCVar1.Function2Value = "Interaction/Function2";
		pCVar1 = typeof(CustomLogicInputInteractionEnum).static_fields;
		pCVar1.Function3Value = "Interaction/Function3";
		pCVar1 = typeof(CustomLogicInputInteractionEnum).static_fields;
		pCVar1.Function4Value = "Interaction/Function4";
		return;
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$.cctor: 1 lines keep C-only constructs
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		if (Il2CppMethodInitialized_07546759 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicInputInteractionEnum.Bindings)) ;
			Il2CppMethodInitialized_07546759 = true;
		}
		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Interact");
		__this.Add((Il2CppObject *)"Interact2");
		__this.Add((Il2CppObject *)"Interact3");
		__this.Add((Il2CppObject *)"ItemMenu");
		__this.Add((Il2CppObject *)"ActionMenu");
		__this.Add((Il2CppObject *)"EmoteMenu");
		__this.Add((Il2CppObject *)"MenuNext");
		__this.Add((Il2CppObject *)"QuickSelect1");
		__this.Add((Il2CppObject *)"QuickSelect2");
		__this.Add((Il2CppObject *)"QuickSelect3");
		__this.Add((Il2CppObject *)"QuickSelect4");
		__this.Add((Il2CppObject *)"QuickSelect5");
		__this.Add((Il2CppObject *)"QuickSelect6");
		__this.Add((Il2CppObject *)"QuickSelect7");
		__this.Add((Il2CppObject *)"QuickSelect8");
		__this.Add((Il2CppObject *)"Function1");
		__this.Add((Il2CppObject *)"Function2");
		__this.Add((Il2CppObject *)"Function3");
		__this.Add((Il2CppObject *)"Function4");
		CustomLogicInputInteractionEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Interact>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Interact_g____getter_2_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754675a == false) {
			Il2CppMethodInitialized_0754675a = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469cc == false) {
			Il2CppMethodInitialized_075469cc = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.InteractValue;
		}
		return *(object*)(typeof(CustomLogicInputInteractionEnum)).static_fields;
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Interact2>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Interact2_g____getter_3_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754675b == false) {
			Il2CppMethodInitialized_0754675b = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469cd == false) {
			Il2CppMethodInitialized_075469cd = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.Interact2Value ;
		}
		return *(object*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 8);
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Interact3>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Interact3_g____getter_4_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754675c == false) {
			Il2CppMethodInitialized_0754675c = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469ce == false) {
			Il2CppMethodInitialized_075469ce = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.Interact3Value ;
		}
		return *(object*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__ItemMenu>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__ItemMenu_g____getter_5_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754675d == false) {
			Il2CppMethodInitialized_0754675d = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469cf == false) {
			Il2CppMethodInitialized_075469cf = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.ItemMenuValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x18);
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__ActionMenu>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__ActionMenu_g____getter_6_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754675e == false) {
			Il2CppMethodInitialized_0754675e = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469d0 == false) {
			Il2CppMethodInitialized_075469d0 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.ActionMenuValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x20);
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__EmoteMenu>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__EmoteMenu_g____getter_7_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754675f == false) {
			Il2CppMethodInitialized_0754675f = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469d1 == false) {
			Il2CppMethodInitialized_075469d1 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.EmoteMenuValue ;
		}
		return *(object*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x28);
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__MenuNext>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__MenuNext_g____getter_8_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546760 == false) {
			Il2CppMethodInitialized_07546760 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469d2 == false) {
			Il2CppMethodInitialized_075469d2 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.MenuNextValue;
		}
		return *(object*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x30);
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect1>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__QuickSelect1_g____getter_9_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546761 == false) {
			Il2CppMethodInitialized_07546761 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469d3 == false) {
			Il2CppMethodInitialized_075469d3 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.QuickSelect1Value;
		}
		return *(object*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x38);
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect2>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__QuickSelect2_g____getter_10_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546762 == false) {
			Il2CppMethodInitialized_07546762 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469d4 == false) {
			Il2CppMethodInitialized_075469d4 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.QuickSelect2Value;
		}
		return *(object*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x40);
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect3>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__QuickSelect3_g____getter_11_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546763 == false) {
			Il2CppMethodInitialized_07546763 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469d5 == false) {
			Il2CppMethodInitialized_075469d5 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.QuickSelect3Value;
		}
		return *(object*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x48);
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect4>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__QuickSelect4_g____getter_12_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546764 == false) {
			Il2CppMethodInitialized_07546764 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469d6 == false) {
			Il2CppMethodInitialized_075469d6 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.QuickSelect4Value;
		}
		return *(object*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x50);
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect5>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__QuickSelect5_g____getter_13_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546765 == false) {
			Il2CppMethodInitialized_07546765 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469d7 == false) {
			Il2CppMethodInitialized_075469d7 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.QuickSelect5Value;
		}
		return *(object*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x58);
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect6>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__QuickSelect6_g____getter_14_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546766 == false) {
			Il2CppMethodInitialized_07546766 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469d8 == false) {
			Il2CppMethodInitialized_075469d8 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.QuickSelect6Value;
		}
		return *(object*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x60);
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect7>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__QuickSelect7_g____getter_15_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546767 == false) {
			Il2CppMethodInitialized_07546767 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469d9 == false) {
			Il2CppMethodInitialized_075469d9 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.QuickSelect7Value;
		}
		return *(object*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x68);
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect8>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__QuickSelect8_g____getter_16_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546768 == false) {
			Il2CppMethodInitialized_07546768 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469da == false) {
			Il2CppMethodInitialized_075469da = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.QuickSelect8Value;
		}
		return *(object*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x70);
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function1>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__Function1_g____getter_17_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546769 == false) {
			Il2CppMethodInitialized_07546769 = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469db == false) {
			Il2CppMethodInitialized_075469db = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.Function1Value ;
		}
		return *(object*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x78);
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function2>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__Function2_g____getter_18_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754676a == false) {
			Il2CppMethodInitialized_0754676a = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469dc == false) {
			Il2CppMethodInitialized_075469dc = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.Function2Value ;
		}
		return *(object*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x80);
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function3>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__Function3_g____getter_19_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754676b == false) {
			Il2CppMethodInitialized_0754676b = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469dd == false) {
			Il2CppMethodInitialized_075469dd = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.Function3Value ;
		}
		return *(object*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x88);
	}

	// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function4>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__Function4_g____getter_20_0(CustomLogicInputInteractionEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754676c == false) {
			Il2CppMethodInitialized_0754676c = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469de == false) {
			Il2CppMethodInitialized_075469de = true;
			uVar1 = (typeof(CustomLogicInputInteractionEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicInputInteractionEnum))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicInputInteractionEnum.Function4Value ;
		}
		return *(object*)((long)(typeof(CustomLogicInputInteractionEnum)).static_fields + 0x90);
	}
}
