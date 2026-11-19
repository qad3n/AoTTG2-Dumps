// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLoadoutEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLoadoutEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200054B")]
[CompilerGenerated]
internal class CustomLogicLoadoutEnum : BuiltinClassInstance
{
	[Token(Token = "0x200054C")]
	public static class Factory
	{
		[Token(Token = "0x6002DBE")]
		[Address(RVA = "0x5995960", Offset = "0x5994960", VA = "0x5995960")]
		public static CustomLogicLoadoutEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicLoadoutEnum __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLoadoutEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicLoadoutEnum();
			return __this;
		}
	}

	[Token(Token = "0x200054D")]
	public static class Bindings
	{
		[Token(Token = "0x4001870")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002DBF")]
		[Address(RVA = "0x5995A80", Offset = "0x5994A80", VA = "0x5995A80")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum.Bindings$$CreateMemberBinding): 9 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicLoadoutEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x7b873af1) {
				if (uVar2 < 0x1ca57969) {
					if (uVar2 == 0x19acadc0) {
						bVar1 = (name == "HumanUnarmed");
						if (bVar1) {
							if ((typeof(CustomLogicLoadoutEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicLoadoutEnum.Bindings.__CreatePropertyBinding__HumanUnarmed();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicLoadoutEnum.Bindings.__CreatePropertyBinding__HumanUnarmed();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x1ca57968) {
						bVar1 = (name == "TitanLarge");
						if (bVar1) {
							if ((typeof(CustomLogicLoadoutEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicLoadoutEnum.Bindings.__CreatePropertyBinding__TitanLarge();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicLoadoutEnum.Bindings.__CreatePropertyBinding__TitanLarge();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x54c554de) {
					bVar1 = (name == "HumanThunderspears");
					if (bVar1) {
						if ((typeof(CustomLogicLoadoutEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicLoadoutEnum.Bindings.__CreatePropertyBinding__HumanThunderspears();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicLoadoutEnum.Bindings.__CreatePropertyBinding__HumanThunderspears();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x7b873af0) {
					bVar1 = (name == "TitanSmall");
					if (bVar1) {
						if ((typeof(CustomLogicLoadoutEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicLoadoutEnum.Bindings.__CreatePropertyBinding__TitanSmall();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicLoadoutEnum.Bindings.__CreatePropertyBinding__TitanSmall();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xb7cd2303) {
				if (uVar2 == 0x927a02b5) {
					bVar1 = (name == "HumanBlades");
					if (bVar1) {
						if ((typeof(CustomLogicLoadoutEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicLoadoutEnum.Bindings.__CreatePropertyBinding__HumanBlades();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicLoadoutEnum.Bindings.__CreatePropertyBinding__HumanBlades();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xb7cd2302) {
					bVar1 = (name == "TitanMedium");
					if (bVar1) {
						if ((typeof(CustomLogicLoadoutEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicLoadoutEnum.Bindings.__CreatePropertyBinding__TitanMedium();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicLoadoutEnum.Bindings.__CreatePropertyBinding__TitanMedium();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xea115bcc) {
				bVar1 = (name == "HumanAPG");
				if (bVar1) {
					if ((typeof(CustomLogicLoadoutEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicLoadoutEnum.Bindings)) ;
						pCVar3 = CustomLogicLoadoutEnum.Bindings.__CreatePropertyBinding__HumanAPG();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicLoadoutEnum.Bindings.__CreatePropertyBinding__HumanAPG();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xea789261) {
				bVar1 = (name == "HumanAHSS");
				if (bVar1) {
					if ((typeof(CustomLogicLoadoutEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicLoadoutEnum.Bindings)) ;
						pCVar3 = CustomLogicLoadoutEnum.Bindings.__CreatePropertyBinding__HumanAHSS();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicLoadoutEnum.Bindings.__CreatePropertyBinding__HumanAHSS();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfacf0a23) {
				bVar1 = (name == "HumanCivilian");
				if (bVar1) {
					if ((typeof(CustomLogicLoadoutEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicLoadoutEnum.Bindings)) ;
						pCVar3 = CustomLogicLoadoutEnum.Bindings.__CreatePropertyBinding__HumanCivilian();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicLoadoutEnum.Bindings.__CreatePropertyBinding__HumanCivilian();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLoadoutEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002DC0")]
		[Address(RVA = "0x5995EE0", Offset = "0x5994EE0", VA = "0x5995EE0")]
		public static CLPropertyBinding<CustomLogicLoadoutEnum> __CreatePropertyBinding__HumanBlades()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanBlades): 3 lines keep C-only constructs
			Func<CustomLogicLoadoutEnum, object> __this;
			CLPropertyBinding<CustomLogicLoadoutEnum> __this_00;

			if (Il2CppMethodInitialized_07546831 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicLoadoutEnum>)) ;
				Il2CppMethodInitialized_07546831 = true;
			}
			__this = new Func<CustomLogicLoadoutEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanBlades_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicLoadoutEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002DC1")]
		[Address(RVA = "0x5995F80", Offset = "0x5994F80", VA = "0x5995F80")]
		public static CLPropertyBinding<CustomLogicLoadoutEnum> __CreatePropertyBinding__HumanAHSS()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanAHSS): 3 lines keep C-only constructs
			Func<CustomLogicLoadoutEnum, object> __this;
			CLPropertyBinding<CustomLogicLoadoutEnum> __this_00;

			if (Il2CppMethodInitialized_07546832 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicLoadoutEnum>)) ;
				Il2CppMethodInitialized_07546832 = true;
			}
			__this = new Func<CustomLogicLoadoutEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanAHSS_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicLoadoutEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002DC2")]
		[Address(RVA = "0x5996020", Offset = "0x5995020", VA = "0x5996020")]
		public static CLPropertyBinding<CustomLogicLoadoutEnum> __CreatePropertyBinding__HumanAPG()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanAPG): 3 lines keep C-only constructs
			Func<CustomLogicLoadoutEnum, object> __this;
			CLPropertyBinding<CustomLogicLoadoutEnum> __this_00;

			if (Il2CppMethodInitialized_07546833 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicLoadoutEnum>)) ;
				Il2CppMethodInitialized_07546833 = true;
			}
			__this = new Func<CustomLogicLoadoutEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanAPG_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicLoadoutEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002DC3")]
		[Address(RVA = "0x59960C0", Offset = "0x59950C0", VA = "0x59960C0")]
		public static CLPropertyBinding<CustomLogicLoadoutEnum> __CreatePropertyBinding__HumanThunderspears()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanThunderspears): 3 lines keep C-only constructs
			Func<CustomLogicLoadoutEnum, object> __this;
			CLPropertyBinding<CustomLogicLoadoutEnum> __this_00;

			if (Il2CppMethodInitialized_07546834 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicLoadoutEnum>)) ;
				Il2CppMethodInitialized_07546834 = true;
			}
			__this = new Func<CustomLogicLoadoutEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanThunderspears_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicLoadoutEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002DC4")]
		[Address(RVA = "0x5996160", Offset = "0x5995160", VA = "0x5996160")]
		public static CLPropertyBinding<CustomLogicLoadoutEnum> __CreatePropertyBinding__HumanUnarmed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanUnarmed): 3 lines keep C-only constructs
			Func<CustomLogicLoadoutEnum, object> __this;
			CLPropertyBinding<CustomLogicLoadoutEnum> __this_00;

			if (Il2CppMethodInitialized_07546835 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicLoadoutEnum>)) ;
				Il2CppMethodInitialized_07546835 = true;
			}
			__this = new Func<CustomLogicLoadoutEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanUnarmed_g____getter_6);
			__this_00 = new CLPropertyBinding<CustomLogicLoadoutEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002DC5")]
		[Address(RVA = "0x5996200", Offset = "0x5995200", VA = "0x5996200")]
		public static CLPropertyBinding<CustomLogicLoadoutEnum> __CreatePropertyBinding__HumanCivilian()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanCivilian): 3 lines keep C-only constructs
			Func<CustomLogicLoadoutEnum, object> __this;
			CLPropertyBinding<CustomLogicLoadoutEnum> __this_00;

			if (Il2CppMethodInitialized_07546836 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicLoadoutEnum>)) ;
				Il2CppMethodInitialized_07546836 = true;
			}
			__this = new Func<CustomLogicLoadoutEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanCivilian_g____getter_7);
			__this_00 = new CLPropertyBinding<CustomLogicLoadoutEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002DC6")]
		[Address(RVA = "0x59962A0", Offset = "0x59952A0", VA = "0x59962A0")]
		public static CLPropertyBinding<CustomLogicLoadoutEnum> __CreatePropertyBinding__TitanSmall()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__TitanSmall): 3 lines keep C-only constructs
			Func<CustomLogicLoadoutEnum, object> __this;
			CLPropertyBinding<CustomLogicLoadoutEnum> __this_00;

			if (Il2CppMethodInitialized_07546837 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicLoadoutEnum>)) ;
				Il2CppMethodInitialized_07546837 = true;
			}
			__this = new Func<CustomLogicLoadoutEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanSmall_g____getter_8_0);
			__this_00 = new CLPropertyBinding<CustomLogicLoadoutEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002DC7")]
		[Address(RVA = "0x5996340", Offset = "0x5995340", VA = "0x5996340")]
		public static CLPropertyBinding<CustomLogicLoadoutEnum> __CreatePropertyBinding__TitanMedium()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__TitanMedium): 3 lines keep C-only constructs
			Func<CustomLogicLoadoutEnum, object> __this;
			CLPropertyBinding<CustomLogicLoadoutEnum> __this_00;

			if (Il2CppMethodInitialized_07546838 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicLoadoutEnum>)) ;
				Il2CppMethodInitialized_07546838 = true;
			}
			__this = new Func<CustomLogicLoadoutEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanMedium_g____getter_9_0);
			__this_00 = new CLPropertyBinding<CustomLogicLoadoutEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002DC8")]
		[Address(RVA = "0x59963E0", Offset = "0x59953E0", VA = "0x59963E0")]
		public static CLPropertyBinding<CustomLogicLoadoutEnum> __CreatePropertyBinding__TitanLarge()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__TitanLarge): 3 lines keep C-only constructs
			Func<CustomLogicLoadoutEnum, object> __this;
			CLPropertyBinding<CustomLogicLoadoutEnum> __this_00;

			if (Il2CppMethodInitialized_07546839 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicLoadoutEnum>)) ;
				Il2CppMethodInitialized_07546839 = true;
			}
			__this = new Func<CustomLogicLoadoutEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanLarge_g____getter_10_0);
			__this_00 = new CLPropertyBinding<CustomLogicLoadoutEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x400186C")]
	[FieldOffset(Offset = "0x0")]
	public static string ShifterAnnie;

	[Token(Token = "0x400186D")]
	[FieldOffset(Offset = "0x8")]
	public static string ShifterEren;

	[Token(Token = "0x400186E")]
	[FieldOffset(Offset = "0x10")]
	public static string ShifterArmored;

	[Token(Token = "0x400186F")]
	[FieldOffset(Offset = "0x18")]
	public static string ShifterWallColossal;

	[Token(Token = "0x17000754")]
	public static string HumanBlades
	{
		[Token(Token = "0x6002DB0")]
		[Address(RVA = "0x59954E0", Offset = "0x59944E0", VA = "0x59954E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum$$get_HumanBlades): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546824 == false) {
				Il2CppMethodInitialized_07546824 = true;
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanLoadout.Blade;
			}
			return *(String*)(typeof(HumanLoadout)).static_fields;
		}
	}

	[Token(Token = "0x17000755")]
	public static string HumanAHSS
	{
		[Token(Token = "0x6002DB1")]
		[Address(RVA = "0x5995550", Offset = "0x5994550", VA = "0x5995550")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum$$get_HumanAHSS): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546825 == false) {
				Il2CppMethodInitialized_07546825 = true;
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanLoadout.AHSS;
			}
			return *(String*)((long)(typeof(HumanLoadout)).static_fields + 8);
		}
	}

	[Token(Token = "0x17000756")]
	public static string HumanAPG
	{
		[Token(Token = "0x6002DB2")]
		[Address(RVA = "0x59955C0", Offset = "0x59945C0", VA = "0x59955C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum$$get_HumanAPG): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546826 == false) {
				Il2CppMethodInitialized_07546826 = true;
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanLoadout.APG;
			}
			return *(String*)((long)(typeof(HumanLoadout)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x17000757")]
	public static string HumanThunderspears
	{
		[Token(Token = "0x6002DB3")]
		[Address(RVA = "0x5995630", Offset = "0x5994630", VA = "0x5995630")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum$$get_HumanThunderspears): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546827 == false) {
				Il2CppMethodInitialized_07546827 = true;
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanLoadout.Thunderspear;
			}
			return *(String*)((long)(typeof(HumanLoadout)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x17000758")]
	public static string HumanUnarmed
	{
		[Token(Token = "0x6002DB4")]
		[Address(RVA = "0x59956A0", Offset = "0x59946A0", VA = "0x59956A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum$$get_HumanUnarmed): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546828 == false) {
				Il2CppMethodInitialized_07546828 = true;
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanLoadout.Unarmed;
			}
			return *(String*)((long)(typeof(HumanLoadout)).static_fields + 0x20);
		}
	}

	[Token(Token = "0x17000759")]
	public static string HumanCivilian
	{
		[Token(Token = "0x6002DB5")]
		[Address(RVA = "0x5995710", Offset = "0x5994710", VA = "0x5995710")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum$$get_HumanCivilian): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546829 == false) {
				Il2CppMethodInitialized_07546829 = true;
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanLoadout.Civilian;
			}
			return *(String*)((long)(typeof(HumanLoadout)).static_fields + 0x28);
		}
	}

	[Token(Token = "0x1700075A")]
	public static string TitanSmall
	{
		[Token(Token = "0x6002DB6")]
		[Address(RVA = "0x5995780", Offset = "0x5994780", VA = "0x5995780")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum$$get_TitanSmall): clean
			return "Small";
		}
	}

	[Token(Token = "0x1700075B")]
	public static string TitanMedium
	{
		[Token(Token = "0x6002DB7")]
		[Address(RVA = "0x59957B0", Offset = "0x59947B0", VA = "0x59957B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum$$get_TitanMedium): clean
			return "Medium";
		}
	}

	[Token(Token = "0x1700075C")]
	public static string TitanLarge
	{
		[Token(Token = "0x6002DB8")]
		[Address(RVA = "0x59957E0", Offset = "0x59947E0", VA = "0x59957E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum$$get_TitanLarge): clean
			return "Large";
		}
	}

	[Token(Token = "0x1700075D")]
	public override string ClassName
	{
		[Token(Token = "0x6002DB9")]
		[Address(RVA = "0x5995810", Offset = "0x5994810", VA = "0x5995810", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum$$get_ClassName): clean
			return "LoadoutEnum";
		}
	}

	[Token(Token = "0x1700075E")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002DBA")]
		[Address(RVA = "0x5995840", Offset = "0x5994840", VA = "0x5995840", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700075F")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002DBB")]
		[Address(RVA = "0x5995850", Offset = "0x5994850", VA = "0x5995850", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000760")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002DBC")]
		[Address(RVA = "0x5995860", Offset = "0x5994860", VA = "0x5995860", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002DAF")]
	[Address(RVA = "0x5995470", Offset = "0x5994470", VA = "0x5995470")]
	public CustomLogicLoadoutEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c (CustomLogic.CustomLogicLoadoutEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546823 == false) {
			Il2CppMethodInitialized_07546823 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicLoadoutEnum.c.

	// CustomLogic.CustomLogicLoadoutEnum$$.cctor: clean
	static CustomLogicLoadoutEnum()
	{
		CustomLogic_CustomLogicLoadoutEnum_StaticFields pCVar1;

		CustomLogicLoadoutEnum.ShifterAnnie = "Annie";
		pCVar1 = typeof(CustomLogicLoadoutEnum).static_fields;
		pCVar1.ShifterEren = "Eren";
		pCVar1 = typeof(CustomLogicLoadoutEnum).static_fields;
		pCVar1.ShifterArmored = "Armored";
		pCVar1 = typeof(CustomLogicLoadoutEnum).static_fields;
		pCVar1.ShifterWallColossal = "WallColossal";
		return;
	}

	// CustomLogic.CustomLogicLoadoutEnum.Bindings$$.cctor: 1 lines keep C-only constructs
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"ShifterAnnie");
		__this.Add((Il2CppObject *)"ShifterEren");
		__this.Add((Il2CppObject *)"ShifterArmored");
		__this.Add((Il2CppObject *)"ShifterWallColossal");
		__this.Add((Il2CppObject *)"HumanBlades");
		__this.Add((Il2CppObject *)"HumanAHSS");
		__this.Add((Il2CppObject *)"HumanAPG");
		__this.Add((Il2CppObject *)"HumanThunderspears");
		__this.Add((Il2CppObject *)"HumanUnarmed");
		__this.Add((Il2CppObject *)"HumanCivilian");
		__this.Add((Il2CppObject *)"TitanSmall");
		__this.Add((Il2CppObject *)"TitanMedium");
		__this.Add((Il2CppObject *)"TitanLarge");
		CustomLogicLoadoutEnum.Bindings.MemberNames = __this;
		Il2CppCodeGenWriteBarrier(&CustomLogicLoadoutEnum.Bindings.MemberNames) ;
		return;
	}

	// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanBlades>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__HumanBlades_g____getter_2_0(CustomLogicLoadoutEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754683b == false) {
			Il2CppMethodInitialized_0754683b = true;
			uVar1 = (typeof(CustomLogicLoadoutEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicLoadoutEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469fe == false) {
			Il2CppMethodInitialized_075469fe = true;
			uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(HumanLoadout))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanLoadout.Blade;
		}
		return *(object*)(typeof(HumanLoadout)).static_fields;
	}

	// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanAHSS>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__HumanAHSS_g____getter_3_0(CustomLogicLoadoutEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754683c == false) {
			Il2CppMethodInitialized_0754683c = true;
			uVar1 = (typeof(CustomLogicLoadoutEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicLoadoutEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075469ff == false) {
			Il2CppMethodInitialized_075469ff = true;
			uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(HumanLoadout))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanLoadout.AHSS;
		}
		return *(object*)((long)(typeof(HumanLoadout)).static_fields + 8);
	}

	// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanAPG>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__HumanAPG_g____getter_4_0(CustomLogicLoadoutEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754683d == false) {
			Il2CppMethodInitialized_0754683d = true;
			uVar1 = (typeof(CustomLogicLoadoutEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicLoadoutEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546a00 == false) {
			Il2CppMethodInitialized_07546a00 = true;
			uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(HumanLoadout))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanLoadout.APG;
		}
		return *(object*)((long)(typeof(HumanLoadout)).static_fields + 0x18);
	}

	// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanThunderspears>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__HumanThunderspears_g____getter_5_0(CustomLogicLoadoutEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754683e == false) {
			Il2CppMethodInitialized_0754683e = true;
			uVar1 = (typeof(CustomLogicLoadoutEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicLoadoutEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546a01 == false) {
			Il2CppMethodInitialized_07546a01 = true;
			uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(HumanLoadout))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanLoadout.Thunderspear;
		}
		return *(object*)((long)(typeof(HumanLoadout)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanUnarmed>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__HumanUnarmed_g____getter_6_0(CustomLogicLoadoutEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754683f == false) {
			Il2CppMethodInitialized_0754683f = true;
			uVar1 = (typeof(CustomLogicLoadoutEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicLoadoutEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546a02 == false) {
			Il2CppMethodInitialized_07546a02 = true;
			uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(HumanLoadout))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanLoadout.Unarmed;
		}
		return *(object*)((long)(typeof(HumanLoadout)).static_fields + 0x20);
	}

	// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanCivilian>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__HumanCivilian_g____getter_7_0(CustomLogicLoadoutEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546840 == false) {
			Il2CppMethodInitialized_07546840 = true;
			uVar1 = (typeof(CustomLogicLoadoutEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicLoadoutEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546a03 == false) {
			Il2CppMethodInitialized_07546a03 = true;
			uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(HumanLoadout))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanLoadout.Civilian;
		}
		return *(object*)((long)(typeof(HumanLoadout)).static_fields + 0x28);
	}

	// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__TitanSmall>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__TitanSmall_g____getter_8_0(CustomLogicLoadoutEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546841 == false) {
			Il2CppMethodInitialized_07546841 = true;
			uVar1 = (typeof(CustomLogicLoadoutEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicLoadoutEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754682a == false) {
			Il2CppMethodInitialized_0754682a = 1;
			return (Il2CppObject *)"Small";
		}
		return (Il2CppObject *)"Small";
	}

	// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__TitanMedium>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__TitanMedium_g____getter_9_0(CustomLogicLoadoutEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546842 == false) {
			Il2CppMethodInitialized_07546842 = true;
			uVar1 = (typeof(CustomLogicLoadoutEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicLoadoutEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754682b == false) {
			Il2CppMethodInitialized_0754682b = 1;
			return (Il2CppObject *)"Medium";
		}
		return (Il2CppObject *)"Medium";
	}

	// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__TitanLarge>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__TitanLarge_g____getter_10_0(CustomLogicLoadoutEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546843 == false) {
			Il2CppMethodInitialized_07546843 = true;
			uVar1 = (typeof(CustomLogicLoadoutEnum)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicLoadoutEnum)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754682c == false) {
			Il2CppMethodInitialized_0754682c = 1;
			return (Il2CppObject *)"Large";
		}
		return (Il2CppObject *)"Large";
	}
}
