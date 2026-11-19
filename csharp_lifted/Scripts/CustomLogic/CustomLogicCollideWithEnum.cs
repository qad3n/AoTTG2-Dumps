// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCollideWithEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCollideWithEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004F9")]
[CompilerGenerated]
internal class CustomLogicCollideWithEnum : BuiltinClassInstance
{
	[Token(Token = "0x20004FA")]
	public static class Factory
	{
		[Token(Token = "0x60027EC")]
		[Address(RVA = "0x595B610", Offset = "0x595A610", VA = "0x595B610")]
		public static CustomLogicCollideWithEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
			BuiltinClassInstance __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCollideWithEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicCollideWithEnum();
			return (CustomLogicCollideWithEnum)__this;
		}
	}

	[Token(Token = "0x20004FB")]
	public static class Bindings
	{
		[Token(Token = "0x40017C4")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60027ED")]
		[Address(RVA = "0x595B730", Offset = "0x595A730", VA = "0x595B730")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicCollideWithEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x3d352248) {
				if (uVar2 < 0x1838400b) {
					if (uVar2 == 0xfadbf6b) {
						bVar1 = (name == "Projectiles");
						if (bVar1) {
							if ((typeof(CustomLogicCollideWithEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicCollideWithEnum.Bindings.__CreatePropertyBinding__Projectiles();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicCollideWithEnum.Bindings.__CreatePropertyBinding__Projectiles();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x1838400a) {
						bVar1 = (name == "Entities");
						if (bVar1) {
							if ((typeof(CustomLogicCollideWithEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicCollideWithEnum.Bindings.__CreatePropertyBinding__Entities();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicCollideWithEnum.Bindings.__CreatePropertyBinding__Entities();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x2787757f) {
					bVar1 = (name == "Hitboxes");
					if (bVar1) {
						if ((typeof(CustomLogicCollideWithEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicCollideWithEnum.Bindings.__CreatePropertyBinding__Hitboxes();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicCollideWithEnum.Bindings.__CreatePropertyBinding__Hitboxes();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x3d352247) {
					bVar1 = (name == "MapObjects");
					if (bVar1) {
						if ((typeof(CustomLogicCollideWithEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicCollideWithEnum.Bindings.__CreatePropertyBinding__MapObjects();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicCollideWithEnum.Bindings.__CreatePropertyBinding__MapObjects();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x75afe365) {
				if (uVar2 == 0x5c14003e) {
					bVar1 = (name == "Titans");
					if (bVar1) {
						if ((typeof(CustomLogicCollideWithEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicCollideWithEnum.Bindings.__CreatePropertyBinding__Titans();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicCollideWithEnum.Bindings.__CreatePropertyBinding__Titans();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x75afe364) {
					bVar1 = (name == "All");
					if (bVar1) {
						if ((typeof(CustomLogicCollideWithEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicCollideWithEnum.Bindings.__CreatePropertyBinding__All();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicCollideWithEnum.Bindings.__CreatePropertyBinding__All();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0x930b044b) {
				bVar1 = (name == "Humans");
				if (bVar1) {
					if ((typeof(CustomLogicCollideWithEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicCollideWithEnum.Bindings.__CreatePropertyBinding__Humans();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicCollideWithEnum.Bindings.__CreatePropertyBinding__Humans();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xaa3084c4) {
				bVar1 = (name == "MapEditor");
				if (bVar1) {
					if ((typeof(CustomLogicCollideWithEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicCollideWithEnum.Bindings.__CreatePropertyBinding__MapEditor();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicCollideWithEnum.Bindings.__CreatePropertyBinding__MapEditor();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfc6ef2f9) {
				bVar1 = (name == "Characters");
				if (bVar1) {
					if ((typeof(CustomLogicCollideWithEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicCollideWithEnum.Bindings.__CreatePropertyBinding__Characters();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicCollideWithEnum.Bindings.__CreatePropertyBinding__Characters();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCollideWithEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x60027EE")]
		[Address(RVA = "0x595BB90", Offset = "0x595AB90", VA = "0x595BB90")]
		public static CLPropertyBinding<CustomLogicCollideWithEnum> __CreatePropertyBinding__All()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__All): 2 lines keep C-only constructs
			Func<CustomLogicCollideWithEnum, object> __this;
			CLPropertyBinding<CustomLogicCollideWithEnum> __this_00;

			__this = new Func<CustomLogicCollideWithEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__All_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicCollideWithEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60027EF")]
		[Address(RVA = "0x595BC30", Offset = "0x595AC30", VA = "0x595BC30")]
		public static CLPropertyBinding<CustomLogicCollideWithEnum> __CreatePropertyBinding__MapObjects()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__MapObjects): 2 lines keep C-only constructs
			Func<CustomLogicCollideWithEnum, object> __this;
			CLPropertyBinding<CustomLogicCollideWithEnum> __this_00;

			__this = new Func<CustomLogicCollideWithEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__MapObjects_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicCollideWithEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60027F0")]
		[Address(RVA = "0x595BCD0", Offset = "0x595ACD0", VA = "0x595BCD0")]
		public static CLPropertyBinding<CustomLogicCollideWithEnum> __CreatePropertyBinding__Characters()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Characters): 2 lines keep C-only constructs
			Func<CustomLogicCollideWithEnum, object> __this;
			CLPropertyBinding<CustomLogicCollideWithEnum> __this_00;

			__this = new Func<CustomLogicCollideWithEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Characters_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicCollideWithEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60027F1")]
		[Address(RVA = "0x595BD70", Offset = "0x595AD70", VA = "0x595BD70")]
		public static CLPropertyBinding<CustomLogicCollideWithEnum> __CreatePropertyBinding__Titans()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Titans): 2 lines keep C-only constructs
			Func<CustomLogicCollideWithEnum, object> __this;
			CLPropertyBinding<CustomLogicCollideWithEnum> __this_00;

			__this = new Func<CustomLogicCollideWithEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Titans_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicCollideWithEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60027F2")]
		[Address(RVA = "0x595BE10", Offset = "0x595AE10", VA = "0x595BE10")]
		public static CLPropertyBinding<CustomLogicCollideWithEnum> __CreatePropertyBinding__Humans()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Humans): 2 lines keep C-only constructs
			Func<CustomLogicCollideWithEnum, object> __this;
			CLPropertyBinding<CustomLogicCollideWithEnum> __this_00;

			__this = new Func<CustomLogicCollideWithEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Humans_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicCollideWithEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60027F3")]
		[Address(RVA = "0x595BEB0", Offset = "0x595AEB0", VA = "0x595BEB0")]
		public static CLPropertyBinding<CustomLogicCollideWithEnum> __CreatePropertyBinding__Projectiles()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Projectiles): 2 lines keep C-only constructs
			Func<CustomLogicCollideWithEnum, object> __this;
			CLPropertyBinding<CustomLogicCollideWithEnum> __this_00;

			__this = new Func<CustomLogicCollideWithEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Projectiles_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicCollideWithEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60027F4")]
		[Address(RVA = "0x595BF50", Offset = "0x595AF50", VA = "0x595BF50")]
		public static CLPropertyBinding<CustomLogicCollideWithEnum> __CreatePropertyBinding__Entities()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Entities): 2 lines keep C-only constructs
			Func<CustomLogicCollideWithEnum, object> __this;
			CLPropertyBinding<CustomLogicCollideWithEnum> __this_00;

			__this = new Func<CustomLogicCollideWithEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Entities_g____getter_8);
			__this_00 = new CLPropertyBinding<CustomLogicCollideWithEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60027F5")]
		[Address(RVA = "0x595BFF0", Offset = "0x595AFF0", VA = "0x595BFF0")]
		public static CLPropertyBinding<CustomLogicCollideWithEnum> __CreatePropertyBinding__Hitboxes()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Hitboxes): 2 lines keep C-only constructs
			Func<CustomLogicCollideWithEnum, object> __this;
			CLPropertyBinding<CustomLogicCollideWithEnum> __this_00;

			__this = new Func<CustomLogicCollideWithEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Hitboxes_g____getter_9);
			__this_00 = new CLPropertyBinding<CustomLogicCollideWithEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60027F6")]
		[Address(RVA = "0x595C090", Offset = "0x595B090", VA = "0x595C090")]
		public static CLPropertyBinding<CustomLogicCollideWithEnum> __CreatePropertyBinding__MapEditor()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__MapEditor): 2 lines keep C-only constructs
			Func<CustomLogicCollideWithEnum, object> __this;
			CLPropertyBinding<CustomLogicCollideWithEnum> __this_00;

			__this = new Func<CustomLogicCollideWithEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__MapEditor_g____getter_1);
			__this_00 = new CLPropertyBinding<CustomLogicCollideWithEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000542")]
	public static string All
	{
		[Token(Token = "0x60027DF")]
		[Address(RVA = "0x595B1C0", Offset = "0x595A1C0", VA = "0x595B1C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum$$get_All): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546308 == false) {
				Il2CppMethodInitialized_07546308 = true;
				uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return MapObjectCollideWith.All;
			}
			return *(String*)(typeof(MapObjectCollideWith)).static_fields;
		}
	}

	[Token(Token = "0x17000543")]
	public static string MapObjects
	{
		[Token(Token = "0x60027E0")]
		[Address(RVA = "0x595B230", Offset = "0x595A230", VA = "0x595B230")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum$$get_MapObjects): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546309 == false) {
				Il2CppMethodInitialized_07546309 = true;
				uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return MapObjectCollideWith.MapObjects;
			}
			return *(String*)((long)(typeof(MapObjectCollideWith)).static_fields + 8);
		}
	}

	[Token(Token = "0x17000544")]
	public static string Characters
	{
		[Token(Token = "0x60027E1")]
		[Address(RVA = "0x595B2A0", Offset = "0x595A2A0", VA = "0x595B2A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum$$get_Characters): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754630a == false) {
				Il2CppMethodInitialized_0754630a = true;
				uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return MapObjectCollideWith.Characters;
			}
			return *(String*)((long)(typeof(MapObjectCollideWith)).static_fields + 0x10) ;
		}
	}

	[Token(Token = "0x17000545")]
	public static string Titans
	{
		[Token(Token = "0x60027E2")]
		[Address(RVA = "0x595B310", Offset = "0x595A310", VA = "0x595B310")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum$$get_Titans): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754630b == false) {
				Il2CppMethodInitialized_0754630b = true;
				uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return MapObjectCollideWith.Titans;
			}
			return *(String*)((long)(typeof(MapObjectCollideWith)).static_fields + 0x18) ;
		}
	}

	[Token(Token = "0x17000546")]
	public static string Humans
	{
		[Token(Token = "0x60027E3")]
		[Address(RVA = "0x595B380", Offset = "0x595A380", VA = "0x595B380")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum$$get_Humans): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754630c == false) {
				Il2CppMethodInitialized_0754630c = true;
				uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return MapObjectCollideWith.Humans;
			}
			return *(String*)((long)(typeof(MapObjectCollideWith)).static_fields + 0x20) ;
		}
	}

	[Token(Token = "0x17000547")]
	public static string Projectiles
	{
		[Token(Token = "0x60027E4")]
		[Address(RVA = "0x595B3F0", Offset = "0x595A3F0", VA = "0x595B3F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum$$get_Projectiles): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754630d == false) {
				Il2CppMethodInitialized_0754630d = true;
				uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return MapObjectCollideWith.Projectiles;
			}
			return *(String*)((long)(typeof(MapObjectCollideWith)).static_fields + 0x28) ;
		}
	}

	[Token(Token = "0x17000548")]
	public static string Entities
	{
		[Token(Token = "0x60027E5")]
		[Address(RVA = "0x595B460", Offset = "0x595A460", VA = "0x595B460")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum$$get_Entities): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754630e == false) {
				Il2CppMethodInitialized_0754630e = true;
				uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return MapObjectCollideWith.Entities;
			}
			return *(String*)((long)(typeof(MapObjectCollideWith)).static_fields + 0x30) ;
		}
	}

	[Token(Token = "0x17000549")]
	public static string Hitboxes
	{
		[Token(Token = "0x60027E6")]
		[Address(RVA = "0x595B4D0", Offset = "0x595A4D0", VA = "0x595B4D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum$$get_Hitboxes): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754630f == false) {
				Il2CppMethodInitialized_0754630f = true;
				uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return MapObjectCollideWith.Hitboxes;
			}
			return *(String*)((long)(typeof(MapObjectCollideWith)).static_fields + 0x38) ;
		}
	}

	[Token(Token = "0x1700054A")]
	public static string MapEditor
	{
		[Token(Token = "0x60027E7")]
		[Address(RVA = "0x595B540", Offset = "0x595A540", VA = "0x595B540")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum$$get_MapEditor): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546310 == false) {
				Il2CppMethodInitialized_07546310 = true;
				uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return MapObjectCollideWith.MapEditor;
			}
			return *(String*)((long)(typeof(MapObjectCollideWith)).static_fields + 0x40) ;
		}
	}

	[Token(Token = "0x1700054B")]
	public override string ClassName
	{
		[Token(Token = "0x60027E8")]
		[Address(RVA = "0x595B5B0", Offset = "0x595A5B0", VA = "0x595B5B0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum$$get_ClassName): clean
			return "CollideWithEnum";
		}
	}

	[Token(Token = "0x1700054C")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60027E9")]
		[Address(RVA = "0x595B5E0", Offset = "0x595A5E0", VA = "0x595B5E0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700054D")]
	public override bool IsStatic
	{
		[Token(Token = "0x60027EA")]
		[Address(RVA = "0x595B5F0", Offset = "0x595A5F0", VA = "0x595B5F0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700054E")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60027EB")]
		[Address(RVA = "0x595B600", Offset = "0x595A600", VA = "0x595B600", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60027DE")]
	[Address(RVA = "0x595B150", Offset = "0x595A150", VA = "0x595B150")]
	public CustomLogicCollideWithEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c (CustomLogic.CustomLogicCollideWithEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546307 == false) {
			Il2CppMethodInitialized_07546307 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicCollideWithEnum.c.

	// CustomLogic.CustomLogicCollideWithEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"All");
		__this.Add((Il2CppObject *)"MapObjects");
		__this.Add((Il2CppObject *)"Characters");
		__this.Add((Il2CppObject *)"Titans");
		__this.Add((Il2CppObject *)"Humans");
		__this.Add((Il2CppObject *)"Projectiles");
		__this.Add((Il2CppObject *)"Entities");
		__this.Add((Il2CppObject *)"Hitboxes");
		__this.Add((Il2CppObject *)"MapEditor");
		CustomLogicCollideWithEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__All>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__All_g____getter_2_0(CustomLogicCollideWithEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546580 == false) {
			Il2CppMethodInitialized_07546580 = true;
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)MapObjectCollideWith.All;
		}
		return *(object*)(typeof(MapObjectCollideWith)).static_fields;
	}

	// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__MapObjects>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__MapObjects_g____getter_3_0(CustomLogicCollideWithEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546581 == false) {
			Il2CppMethodInitialized_07546581 = true;
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)MapObjectCollideWith.MapObjects;
		}
		return *(object*)((long)(typeof(MapObjectCollideWith)).static_fields + 8);
	}

	// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Characters>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Characters_g____getter_4_0(CustomLogicCollideWithEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546582 == false) {
			Il2CppMethodInitialized_07546582 = true;
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)MapObjectCollideWith.Characters;
		}
		return *(object*)((long)(typeof(MapObjectCollideWith)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Titans>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Titans_g____getter_5_0(CustomLogicCollideWithEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546583 == false) {
			Il2CppMethodInitialized_07546583 = true;
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)MapObjectCollideWith.Titans;
		}
		return *(object*)((long)(typeof(MapObjectCollideWith)).static_fields + 0x18);
	}

	// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Humans>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Humans_g____getter_6_0(CustomLogicCollideWithEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546584 == false) {
			Il2CppMethodInitialized_07546584 = true;
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)MapObjectCollideWith.Humans;
		}
		return *(object*)((long)(typeof(MapObjectCollideWith)).static_fields + 0x20);
	}

	// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Projectiles>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Projectiles_g____getter_7_0(CustomLogicCollideWithEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546585 == false) {
			Il2CppMethodInitialized_07546585 = true;
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)MapObjectCollideWith.Projectiles;
		}
		return *(object*)((long)(typeof(MapObjectCollideWith)).static_fields + 0x28);
	}

	// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Entities>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Entities_g____getter_8_0(CustomLogicCollideWithEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546586 == false) {
			Il2CppMethodInitialized_07546586 = true;
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)MapObjectCollideWith.Entities;
		}
		return *(object*)((long)(typeof(MapObjectCollideWith)).static_fields + 0x30);
	}

	// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Hitboxes>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__Hitboxes_g____getter_9_0(CustomLogicCollideWithEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546587 == false) {
			Il2CppMethodInitialized_07546587 = true;
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)MapObjectCollideWith.Hitboxes;
		}
		return *(object*)((long)(typeof(MapObjectCollideWith)).static_fields + 0x38);
	}

	// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__MapEditor>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__MapEditor_g____getter_10_0(CustomLogicCollideWithEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546588 == false) {
			Il2CppMethodInitialized_07546588 = true;
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)MapObjectCollideWith.MapEditor;
		}
		return *(object*)((long)(typeof(MapObjectCollideWith)).static_fields + 0x40);
	}
}
