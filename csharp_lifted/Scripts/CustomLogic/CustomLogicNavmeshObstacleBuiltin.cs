// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicNavmeshObstacleBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.AI;

namespace CustomLogic;

[Token(Token = "0x20004A1")]
[CompilerGenerated]
internal class CustomLogicNavmeshObstacleBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x20004A2")]
	public static class Factory
	{
		[Token(Token = "0x6001F96")]
		[Address(RVA = "0x59011E0", Offset = "0x59001E0", VA = "0x59011E0")]
		public static CustomLogicNavmeshObstacleBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicNavmeshObstacleBuiltin __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicNavmeshObstacleBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicNavmeshObstacleBuiltin(null);
			return __this;
		}
	}

	[Token(Token = "0x20004A3")]
	public static class Bindings
	{
		[Token(Token = "0x40016B7")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001F97")]
		[Address(RVA = "0x59012D0", Offset = "0x59002D0", VA = "0x59012D0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> pCVar3;
			CLMethodBinding<CustomLogicNavmeshObstacleBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x4380ddc7) {
				if (uVar2 < 0x1bd13563) {
					if (uVar2 == 0xfd70833) {
						bVar1 = (name == "ShapeBox");
						if (bVar1) {
							if ((typeof(CustomLogicNavmeshObstacleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreatePropertyBinding__ShapeBox();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreatePropertyBinding__ShapeBox();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x1bd13562) {
						bVar1 = (name == "Height");
						if (bVar1) {
							if ((typeof(CustomLogicNavmeshObstacleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreatePropertyBinding__Height();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreatePropertyBinding__Height();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x28528e11) {
					bVar1 = (name == "Scale");
					if (bVar1) {
						if ((typeof(CustomLogicNavmeshObstacleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreatePropertyBinding__Scale();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreatePropertyBinding__Scale();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x3a8111d3) {
					bVar1 = (name == "Radius");
					if (bVar1) {
						if ((typeof(CustomLogicNavmeshObstacleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreatePropertyBinding__Radius();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreatePropertyBinding__Radius();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x4380ddc6) {
					bVar1 = (name == "Shape");
					if (bVar1) {
						if ((typeof(CustomLogicNavmeshObstacleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreatePropertyBinding__Shape();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreatePropertyBinding__Shape();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x4b9fbea5) {
				if (uVar2 == 0x48479f2b) {
					bVar1 = (name == "Carving");
					if (bVar1) {
						if ((typeof(CustomLogicNavmeshObstacleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreatePropertyBinding__Carving();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreatePropertyBinding__Carving();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x4b9fbea4) {
					bVar1 = (name == "Center");
					if (bVar1) {
						if ((typeof(CustomLogicNavmeshObstacleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreatePropertyBinding__Center();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreatePropertyBinding__Center();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0x83a1c814) {
				bVar1 = (name == "AutoScale");
				if (bVar1) {
					if ((typeof(CustomLogicNavmeshObstacleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar4 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreateMethodBinding__AutoScale();
						return (ICLMemberBinding)pCVar4;
					}
					pCVar4 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreateMethodBinding__AutoScale();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xf50bdc61) {
				bVar1 = (name == "ShapeCapsule");
				if (bVar1) {
					if ((typeof(CustomLogicNavmeshObstacleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreatePropertyBinding__ShapeCapsule();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreatePropertyBinding__ShapeCapsule();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0x7a0c4e3c) {
				bVar1 = (name == "CarveOnlyStationary");
				if (bVar1) {
					if ((typeof(CustomLogicNavmeshObstacleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreatePropertyBinding__CarveOnlyStationary();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicNavmeshObstacleBuiltin.Bindings.__CreatePropertyBinding__CarveOnlyStationary();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicNavmeshObstacleBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6001F98")]
		[Address(RVA = "0x5901790", Offset = "0x5900790", VA = "0x5901790")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__ShapeBox()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__ShapeBox): 4 lines keep C-only constructs
			Func<CustomLogicNavmeshObstacleBuiltin, object> __this;
			CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545e7d == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicNavmeshObstacleBuiltin, object>)) ;
				Il2CppMethodInitialized_07545e7d = true;
			}
			__this = new Func<CustomLogicNavmeshObstacleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__ShapeBox_g____ge);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001F99")]
		[Address(RVA = "0x5901830", Offset = "0x5900830", VA = "0x5901830")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__ShapeCapsule()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__ShapeCapsule): 4 lines keep C-only constructs
			Func<CustomLogicNavmeshObstacleBuiltin, object> __this;
			CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545e7e == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicNavmeshObstacleBuiltin, object>)) ;
				Il2CppMethodInitialized_07545e7e = true;
			}
			__this = new Func<CustomLogicNavmeshObstacleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__ShapeCapsule_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001F9A")]
		[Address(RVA = "0x59018D0", Offset = "0x59008D0", VA = "0x59018D0")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Radius()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Radius): 5 lines keep C-only constructs
			Func<CustomLogicNavmeshObstacleBuiltin, object> __this;
			Action<CustomLogicNavmeshObstacleBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __this_01;

			if (Il2CppMethodInitialized_07545e7f == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicNavmeshObstacleBuiltin, object>)) ;
				Il2CppMethodInitialized_07545e7f = true;
			}
			__this = new Func<CustomLogicNavmeshObstacleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Radius_g____gett);
			__this_00 = new Action<CustomLogicNavmeshObstacleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Radius_g____sett);
			__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin>));
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F9B")]
		[Address(RVA = "0x59019B0", Offset = "0x59009B0", VA = "0x59019B0")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Height()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Height): 5 lines keep C-only constructs
			Func<CustomLogicNavmeshObstacleBuiltin, object> __this;
			Action<CustomLogicNavmeshObstacleBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __this_01;

			if (Il2CppMethodInitialized_07545e80 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicNavmeshObstacleBuiltin, object>)) ;
				Il2CppMethodInitialized_07545e80 = true;
			}
			__this = new Func<CustomLogicNavmeshObstacleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Height_g____gett);
			__this_00 = new Action<CustomLogicNavmeshObstacleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Height_g____sett);
			__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin>));
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F9C")]
		[Address(RVA = "0x5901A90", Offset = "0x5900A90", VA = "0x5901A90")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Scale()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Scale): 5 lines keep C-only constructs
			Func<CustomLogicNavmeshObstacleBuiltin, object> __this;
			Action<CustomLogicNavmeshObstacleBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __this_01;

			if (Il2CppMethodInitialized_07545e81 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicNavmeshObstacleBuiltin, object>)) ;
				Il2CppMethodInitialized_07545e81 = true;
			}
			__this = new Func<CustomLogicNavmeshObstacleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Scale_g____gette);
			__this_00 = new Action<CustomLogicNavmeshObstacleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Scale_g____sette);
			__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin>));
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F9D")]
		[Address(RVA = "0x5901B70", Offset = "0x5900B70", VA = "0x5901B70")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Center()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Center): 5 lines keep C-only constructs
			Func<CustomLogicNavmeshObstacleBuiltin, object> __this;
			Action<CustomLogicNavmeshObstacleBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __this_01;

			if (Il2CppMethodInitialized_07545e82 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicNavmeshObstacleBuiltin, object>)) ;
				Il2CppMethodInitialized_07545e82 = true;
			}
			__this = new Func<CustomLogicNavmeshObstacleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Center_g____gett);
			__this_00 = new Action<CustomLogicNavmeshObstacleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Center_g____sett);
			__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin>));
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F9E")]
		[Address(RVA = "0x5901C50", Offset = "0x5900C50", VA = "0x5901C50")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Carving()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Carving): 5 lines keep C-only constructs
			Func<CustomLogicNavmeshObstacleBuiltin, object> __this;
			Action<CustomLogicNavmeshObstacleBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __this_01;

			if (Il2CppMethodInitialized_07545e83 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicNavmeshObstacleBuiltin, object>)) ;
				Il2CppMethodInitialized_07545e83 = true;
			}
			__this = new Func<CustomLogicNavmeshObstacleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Carving_g____get);
			__this_00 = new Action<CustomLogicNavmeshObstacleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Carving_g____set);
			__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin>));
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F9F")]
		[Address(RVA = "0x5901D30", Offset = "0x5900D30", VA = "0x5901D30")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__CarveOnlyStationary()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__CarveOnlyStationary): 5 lines keep C-only constructs
			Func<CustomLogicNavmeshObstacleBuiltin, object> __this;
			Action<CustomLogicNavmeshObstacleBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __this_01;

			if (Il2CppMethodInitialized_07545e84 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicNavmeshObstacleBuiltin, object>)) ;
				Il2CppMethodInitialized_07545e84 = true;
			}
			__this = new Func<CustomLogicNavmeshObstacleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__CarveOnlyStation);
			__this_00 = new Action<CustomLogicNavmeshObstacleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__CarveOnlyStation_71c0a00);
			__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin>));
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001FA0")]
		[Address(RVA = "0x5901E10", Offset = "0x5900E10", VA = "0x5901E10")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Shape()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Shape): 5 lines keep C-only constructs
			Func<CustomLogicNavmeshObstacleBuiltin, object> __this;
			Action<CustomLogicNavmeshObstacleBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __this_01;

			if (Il2CppMethodInitialized_07545e85 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<CustomLogicNavmeshObstacleBuiltin, object>)) ;
				Il2CppMethodInitialized_07545e85 = true;
			}
			__this = new Func<CustomLogicNavmeshObstacleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Shape_g____gette);
			__this_00 = new Action<CustomLogicNavmeshObstacleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Shape_g____sette);
			__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin>));
			__this_01 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001FA1")]
		[Address(RVA = "0x5901EF0", Offset = "0x5900EF0", VA = "0x5901EF0")]
		public static CLMethodBinding<CustomLogicNavmeshObstacleBuiltin> __CreateMethodBinding__AutoScale()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreateMethodBinding__AutoScale): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicNavmeshObstacleBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicNavmeshObstacleBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545e86 == false) {
				Il2CppMethodInitialized_07545e86 = true;
				uVar1 = (typeof(CustomLogicNavmeshObstacleBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor ;
			}
			else {
				uVar1 = (typeof(CustomLogicNavmeshObstacleBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor ;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicNavmeshObstacleBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicNavmeshObstacleBuiltin.Bindings.c)).static_fields ;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicNavmeshObstacleBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicNavmeshObstacleBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicNavmeshObstacleBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c___CreateMethodBinding__AutoScale_b__11);
				pCVar2 = typeof(CustomLogicNavmeshObstacleBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = il2cpp_codegen_object_new(typeof(CLMethodBinding<CustomLogicNavmeshObstacleBuiltin>));
			__this_00 = new CLMethodBinding<@object>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x40016B4")]
	[FieldOffset(Offset = "0x38")]
	public NavMeshObstacle Value;

	[Token(Token = "0x40016B5")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x40016B6")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x1700039A")]
	public static int ShapeBox
	{
		[Token(Token = "0x6001F80")]
		[Address(RVA = "0x5900470", Offset = "0x58FF470", VA = "0x5900470")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_ShapeBox): clean
			return 1;
		}
	}

	[Token(Token = "0x1700039B")]
	public static int ShapeCapsule
	{
		[Token(Token = "0x6001F81")]
		[Address(RVA = "0x5900480", Offset = "0x58FF480", VA = "0x5900480")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_ShapeCapsule): clean
			return 0;
		}
	}

	[Token(Token = "0x1700039C")]
	public float Radius
	{
		[Token(Token = "0x6001F82")]
		[Address(RVA = "0x5900490", Offset = "0x58FF490", VA = "0x5900490")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Radius): clean
			NavMeshObstacle __this_00;
			float fVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x6001F83")]
		[Address(RVA = "0x59004B0", Offset = "0x58FF4B0", VA = "0x59004B0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Radius): clean
			NavMeshObstacle __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.radius = value;
			return;
		}
	}

	[Token(Token = "0x1700039D")]
	public float Height
	{
		[Token(Token = "0x6001F84")]
		[Address(RVA = "0x59004D0", Offset = "0x58FF4D0", VA = "0x59004D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Height): clean
			NavMeshObstacle __this_00;
			float fVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x6001F85")]
		[Address(RVA = "0x59004F0", Offset = "0x58FF4F0", VA = "0x59004F0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Height): clean
			NavMeshObstacle __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.height = value;
			return;
		}
	}

	[Token(Token = "0x1700039E")]
	public CustomLogicVector3Builtin Scale
	{
		[Token(Token = "0x6001F86")]
		[Address(RVA = "0x5900510", Offset = "0x58FF510", VA = "0x5900510")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Scale): clean
			NavMeshObstacle __this_00;
			CustomLogicVector3Builtin __this_01;
			Vector3 value;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			value = __this_00.size;
			__this_01 = new CustomLogicVector3Builtin(value);
			return __this_01;
		}
		[Token(Token = "0x6001F87")]
		[Address(RVA = "0x5900590", Offset = "0x58FF590", VA = "0x5900590")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Scale): clean
			NavMeshObstacle __this_00;

			if ((value == null) ||(__this_00 = this.Value, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.size = (Vector3)value.Value;
			return;
		}
	}

	[Token(Token = "0x1700039F")]
	public Vector3 Center
	{
		[Token(Token = "0x6001F88")]
		[Address(RVA = "0x59005C0", Offset = "0x58FF5C0", VA = "0x59005C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Center): clean
			NavMeshObstacle __this_00;
			Vector3 UVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			UVar1 = (Vector3)__this_00.center;
			return (Vector3)UVar1;
		}
		[Token(Token = "0x6001F89")]
		[Address(RVA = "0x59005E0", Offset = "0x58FF5E0", VA = "0x59005E0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Center): clean
			NavMeshObstacle __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.center = value;
			return;
		}
	}

	[Token(Token = "0x170003A0")]
	public bool Carving
	{
		[Token(Token = "0x6001F8A")]
		[Address(RVA = "0x5900600", Offset = "0x58FF600", VA = "0x5900600")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Carving): clean
			NavMeshObstacle __this_00;
			bool bVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
		[Token(Token = "0x6001F8B")]
		[Address(RVA = "0x5900620", Offset = "0x58FF620", VA = "0x5900620")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Carving): clean
			NavMeshObstacle __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.carving = value;
			return;
		}
	}

	[Token(Token = "0x170003A1")]
	public bool CarveOnlyStationary
	{
		[Token(Token = "0x6001F8C")]
		[Address(RVA = "0x5900640", Offset = "0x58FF640", VA = "0x5900640")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_CarveOnlyStationary): clean
			NavMeshObstacle __this_00;
			bool bVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
		[Token(Token = "0x6001F8D")]
		[Address(RVA = "0x5900660", Offset = "0x58FF660", VA = "0x5900660")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_CarveOnlyStationary): clean
			NavMeshObstacle __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.carveOnlyStationary = value;
			return;
		}
	}

	[Token(Token = "0x170003A2")]
	public int Shape
	{
		[Token(Token = "0x6001F8E")]
		[Address(RVA = "0x5900680", Offset = "0x58FF680", VA = "0x5900680")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Shape): clean
			NavMeshObstacle __this_00;
			int iVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
		[Token(Token = "0x6001F8F")]
		[Address(RVA = "0x59006A0", Offset = "0x58FF6A0", VA = "0x59006A0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Shape): clean
			NavMeshObstacle __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.shape = value;
			return;
		}
	}

	[Token(Token = "0x170003A3")]
	public override string ClassName
	{
		[Token(Token = "0x6001F92")]
		[Address(RVA = "0x5901180", Offset = "0x5900180", VA = "0x5901180", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_ClassName): clean
			return "NavmeshObstacleBuiltin";
		}
	}

	[Token(Token = "0x170003A4")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001F93")]
		[Address(RVA = "0x59011B0", Offset = "0x59001B0", VA = "0x59011B0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170003A5")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001F94")]
		[Address(RVA = "0x59011C0", Offset = "0x59001C0", VA = "0x59011C0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170003A6")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001F95")]
		[Address(RVA = "0x59011D0", Offset = "0x59001D0", VA = "0x59011D0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001F7E")]
	[Address(RVA = "0x5900380", Offset = "0x58FF380", VA = "0x5900380")]
	public CustomLogicNavmeshObstacleBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$.ctor): clean
		base(null);
		return;
	}

	[Token(Token = "0x6001F7F")]
	[Address(RVA = "0x5900390", Offset = "0x58FF390", VA = "0x5900390")]
	public CustomLogicNavmeshObstacleBuiltin(CustomLogicMapObjectBuiltin owner)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$.ctor): 1 lines keep C-only constructs
		MapObject pMVar1;
		Component pUVar2;
		NavMeshObstacle pUVar3;
		NavMeshObstacle component;

		if ((owner != null) &&(pMVar1 = owner.Value, pMVar1 != null)) {
			component = BuiltinComponentInstance.GetOrAddComponent<NavMeshObstacle>(pMVar1.GameObject);
			base((Component)component);
			this.OwnerMapObject = owner;
			pMVar1 = owner.Value;
			if (pMVar1 != null) {
				this.Owner = pMVar1.GameObject;
				pUVar3 = typeof(NavMeshObstacle);
				pUVar2 = this.Component;
				if (pUVar2 == null) {
					this.Value = null;
				}
				else if (((NavMeshObstacle)pUVar2.klass != typeof(NavMeshObstacle)) || (this.Value = (NavMeshObstacle)pUVar2,(NavMeshObstacle)pUVar2.klass != pUVar3)) {
					throw new InvalidCastException();
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001F90")]
	[Address(RVA = "0x59006C0", Offset = "0x58FF6C0", VA = "0x59006C0")]
	public void AutoScale()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$AutoScale): 88 lines keep C-only constructs
		uint uVar1;
		GameObject __this_00;
		CustomLogicMapObjectBuiltin pCVar2;
		MapObject pMVar3;
		Collider[] pUVar4;
		Collider collider;
		NavMeshObstacle pUVar5;
		byte[] auVar6 = new byte[16];
		byte[] auVar7 = new byte[16];
		byte[] auVar8 = new byte[16];
		byte[] auVar9 = new byte[16];
		Bounds bounds;
		Matrix4x4 matrix;
		bool bVar10;
		CustomLogicNavmeshObstacleBuiltin pCVar11;
		bool bVar12;
		Transform pUVar13;
		ulong uVar14;
		ulong uVar16;
		float fVar17;
		float fVar20;
		byte[] auVar18 = new byte[16];
		float fVar21;
		byte[] auVar19 = new byte[16];
		float fVar22;
		float fVar23;
		float fVar24;
		byte[] auVar25 = new byte[16];
		float fVar26;
		float fVar27;
		float fVar29;
		float fVar30;
		byte[] auVar28 = new byte[16];
		float fVar31;
		float fVar32;
		float fVar33;
		float fVar34;
		Vector3 value;
		Vector3 value_00;
		float local_250;
		float local_24c;
		Bounds local_248;
		ulong local_228;
		ulong uStack_220;
		byte[] local_218 = new byte[12];
		float fStack_20c;
		Matrix4x4 local_208;
		CustomLogicNavmeshObstacleBuiltin local_1c0;
		ulong local_1b8;
		ulong uStack_1b0;
		ulong local_1a8;
		ulong uStack_1a0;
		float local_198;
		float local_188;
		float local_178;
		float local_168;
		float local_158;
		float local_148;
		float local_138;
		float local_128;
		byte[] local_118 = new byte[16];
		byte[] local_108 = new byte[16];
		byte[] local_f8 = new byte[16];
		float local_e8;
		float local_d8;
		float local_c8;
		ulong local_b8;
		ulong uStack_b0;
		ulong local_a8;
		ulong uStack_a0;
		float local_98;
		float local_88;
		float local_78;
		float fStack_74;
		float fStack_70;
		float fStack_6c;
		float local_68;
		float fStack_64;
		float fStack_60;
		float fStack_5c;
		float local_58;
		float fStack_54;
		float fStack_50;
		float fStack_4c;
		float local_48;
		float fStack_44;
		float fStack_40;
		float fStack_3c;

		local_248.m_Center.x = 0.0;
		local_248.m_Center.y = 0.0;
		local_248.m_Center.z = 0.0;
		local_248.m_Extents.x = 0.0;
		local_248.m_Extents.y = 0.0;
		local_248.m_Extents.z = 0.0;
		__this_00 = this.Owner;
		if ((__this_00 != null) &&(pUVar13 = __this_00.transform, pUVar13 != null)) {
			local_208 = pUVar13.worldToLocalMatrix;
			pCVar2 = this.OwnerMapObject;
			if ((pCVar2 != null) &&((pMVar3 = pCVar2.Value, pMVar3 != null &&(pUVar4 = pMVar3.colliderCache, pUVar4 != null)))) {
				local_1c0 = this;
				if ((int)pUVar4.Length < 1) {
					local_218._0_4_ = 0.0;
					local_218._4_4_ = 0.0;
					local_24c = 0.0;
					bVar10 = false;
					local_250 = 0.0;
					local_228 = 0;
					uStack_220 = 0;
				}
				else {
					local_1a8 = CONCAT44(local_208.m10, local_208.m00);
					uStack_1a0 = CONCAT44(local_208.m30, local_208.m20);
					local_a8 = CONCAT44(local_208.m11, local_208.m01);
					uStack_a0 = CONCAT44(local_208.m31, local_208.m21);
					local_1b8 = CONCAT44(local_208.m12, local_208.m02);
					uStack_1b0 = CONCAT44(local_208.m32, local_208.m22);
					local_b8 = CONCAT44(local_208.m13, local_208.m03);
					uStack_b0 = CONCAT44(local_208.m33, local_208.m23);
					uVar14 = pUVar4.Length & 0xffffffff;
					local_250 = 0.0;
					local_218._0_4_ = 0.0;
					local_218._4_4_ = 0.0;
					bVar10 = false;
					local_24c = 0.0;
					uVar16 = 0;
					local_228 = 0;
					uStack_220 = 0;
					do {
						if (uVar14 <= uVar16) {
							throw new IndexOutOfRangeException();
						}
						collider = pUVar4[uVar16];
						bVar12 = CustomLogicNavmeshObstacleBuiltin.TryGetColliderBounds(collider, ref local_248);
						if (bVar12) {
							if ((collider == null) ||(pUVar13 = collider.transform, pUVar13 == null)) goto label_05a00d34;
							local_208 = pUVar13.localToWorldMatrix;
							local_98 = local_208.m01;
							local_88 = local_208.m03;
							fVar17 = local_208.m10;
							fVar22 = local_208.m12;
							fVar24 = local_208.m20;
							fVar20 = local_208.m11;
							fVar21 = local_208.m13;
							fVar27 = local_208.m33;
							fVar29 = local_208.m02;
							fVar30 = local_208.m23;
							fVar31 = local_208.m30;
							fVar32 = local_208.m22;
							fVar33 = local_208.m31;
							fVar34 = local_208.m32;
							fVar23 = local_208.m00;
							fVar26 = local_208.m21;
							if ((typeof(Util)._2).cctor_finished_or_no_cctor == 0) {
								local_c8 = local_208.m30;
								local_d8 = local_208.m31;
								local_e8 = local_208.m32;
								local_f8 = ZEXT416((uint)local_208.m33);
								local_108 = ZEXT416((uint)local_208.m23);
								local_118 = ZEXT416((uint)local_208.m13);
								local_128 = local_208.m22;
								local_138 = local_208.m12;
								local_148 = local_208.m02;
								local_158 = local_208.m21;
								local_168 = local_208.m11;
								local_178 = local_208.m20;
								local_188 = local_208.m10;
								local_198 = local_208.m00;
								fVar17 = local_188;
								fVar22 = local_138;
								fVar24 = local_178;
								fVar20 = local_168;
								fVar21 = (float)local_118._0_4_;
								fVar27 = (float)local_f8._0_4_;
								fVar29 = local_148;
								fVar30 = (float)local_108._0_4_;
								fVar31 = local_c8;
								fVar32 = local_128;
								fVar33 = local_d8;
								fVar34 = local_e8;
								fVar23 = local_198;
								fVar26 = local_158;
							}
							local_78 = fVar31 * (float)local_b8 + fVar24 * (float)local_1b8 + fVar17 * (float)local_a8 + fVar23 * (float)local_1a8;
							fStack_74 = fVar31 * local_b8._4_4_ + fVar24 * local_1b8._4_4_ + fVar17 * local_a8._4_4_ + fVar23 * local_1a8._4_4_;
							fStack_70 = fVar31 * (float)uStack_b0 + fVar24 * (float)uStack_1b0 + fVar17 * (float)uStack_a0 + fVar23 * (float)uStack_1a0;
							fStack_6c = fVar31 * uStack_b0._4_4_ + fVar24 * uStack_1b0._4_4_ + fVar17 * uStack_a0._4_4_ + fVar23 * uStack_1a0._4_4_;
							local_68 = fVar33 * (float)local_b8 + fVar26 * (float)local_1b8 + fVar20 * (float)local_a8 + local_98 * (float)local_1a8;
							fStack_64 = fVar33 * local_b8._4_4_ + fVar26 * local_1b8._4_4_ + fVar20 * local_a8._4_4_ + local_98 * local_1a8._4_4_;
							fStack_60 = fVar33 * (float)uStack_b0 + fVar26 * (float)uStack_1b0 + fVar20 * (float)uStack_a0 + local_98 * (float)uStack_1a0;
							fStack_5c = fVar33 * uStack_b0._4_4_ + fVar26 * uStack_1b0._4_4_ + fVar20 * uStack_a0._4_4_ + local_98 * uStack_1a0._4_4_;
							local_58 = fVar34 * (float)local_b8 + fVar32 * (float)local_1b8 + fVar22 * (float)local_a8 + fVar29 * (float)local_1a8;
							fStack_54 = fVar34 * local_b8._4_4_ + fVar32 * local_1b8._4_4_ + fVar22 * local_a8._4_4_ + fVar29 * local_1a8._4_4_;
							fStack_50 = fVar34 * (float)uStack_b0 + fVar32 * (float)uStack_1b0 + fVar22 * (float)uStack_a0 + fVar29 * (float)uStack_1a0;
							fStack_4c = fVar34 * uStack_b0._4_4_ + fVar32 * uStack_1b0._4_4_ + fVar22 * uStack_a0._4_4_ + fVar29 * uStack_1a0._4_4_;
							local_48 = fVar27 * (float)local_b8 + fVar30 * (float)local_1b8 + fVar21 * (float)local_a8 + local_88 * (float)local_1a8;
							fStack_44 = fVar27 * local_b8._4_4_ + fVar30 * local_1b8._4_4_ + fVar21 * local_a8._4_4_ + local_88 * local_1a8._4_4_;
							fStack_40 = fVar27 * (float)uStack_b0 + fVar30 * (float)uStack_1b0 + fVar21 * (float)uStack_a0 + local_88 * (float)uStack_1a0;
							fStack_3c = fVar27 * uStack_b0._4_4_ + fVar30 * uStack_1b0._4_4_ + fVar21 * uStack_a0._4_4_ + local_88 * uStack_1a0._4_4_;
							matrix.m10 = fStack_74;
							matrix.m00 = local_78;
							matrix.m30 = fStack_6c;
							matrix.m20 = fStack_70;
							matrix.m11 = fStack_64;
							matrix.m01 = local_68;
							matrix.m31 = fStack_5c;
							matrix.m21 = fStack_60;
							matrix.m12 = fStack_54;
							matrix.m02 = local_58;
							matrix.m32 = fStack_4c;
							matrix.m22 = fStack_50;
							bounds.m_Extents.z = local_248.m_Extents.z;
							bounds.m_Extents.y = local_248.m_Extents.y;
							bounds.m_Extents.x = local_248.m_Extents.x;
							bounds.m_Center.z = local_248.m_Center.z;
							bounds.m_Center.x = local_248.m_Center.x;
							bounds.m_Center.y = local_248.m_Center.y;
							matrix.m03 = local_48;
							matrix.m13 = fStack_44;
							matrix.m23 = fStack_40;
							matrix.m33 = fStack_3c;
							local_208 = Util.TransformBounds(bounds, matrix);
							local_248.m_Extents.y = local_208.m01;
							local_248.m_Extents.z = local_208.m11;
							local_248.m_Center.y = local_208.m10;
							local_248.m_Center.x = local_208.m00;
							local_248.m_Center.z = local_208.m20;
							local_248.m_Extents.x = local_208.m30;
							if (bVar10) {
								fVar24 = local_208.m20 - local_208.m11;
								fVar22 = local_208.m20 + local_208.m11;
								auVar18._0_4_ = (float)local_218._0_4_ - (float)local_228;
								auVar18._4_4_ = (float)local_218._4_4_ - local_228._4_4_;
								auVar18._8_4_ = (float)local_218._8_4_ - (float)uStack_220;
								auVar18._12_4_ = fStack_20c - uStack_220._4_4_;
								fVar17 = local_24c - local_250;
								if (fVar24 <= local_24c - local_250) {
									fVar17 = fVar24;
								}
								auVar28._0_4_ = (float)local_218._0_4_ + (float)local_228;
								auVar28._4_4_ = (float)local_218._4_4_ + local_228._4_4_;
								auVar28._8_4_ = (float)local_218._8_4_ + (float)uStack_220;
								auVar28._12_4_ = fStack_20c + uStack_220._4_4_;
								fVar20 = local_250 + local_24c;
								if (local_250 + local_24c <= fVar24) {
									fVar20 = fVar24;
								}
								fVar24 = (fVar20 - fVar17) * 0.5;
								local_24c = (fVar17 + fVar24) - fVar24;
								if (fVar22 <= local_24c) {
									local_24c = fVar22;
								}
								fVar24 = fVar17 + fVar24 + fVar24;
								if (fVar24 <= fVar22) {
									fVar24 = fVar22;
								}
								auVar8._4_4_ = local_208.m10 - local_208.m01;
								auVar8._0_4_ = local_208.m00 - local_208.m30;
								auVar8._8_8_ = 0;
								auVar18 = minps(auVar18, auVar8);
								auVar9._4_4_ = local_208.m10 - local_208.m01;
								auVar9._0_4_ = local_208.m00 - local_208.m30;
								auVar9._8_8_ = 0;
								auVar28 = maxps(auVar28, auVar9);
								fVar27 = (auVar28._0_4_ - auVar18._0_4_) * 0.5;
								fVar29 = (auVar28._4_4_ - auVar18._4_4_) * 0.5;
								fVar30 = (auVar28._8_4_ - auVar18._8_4_) * 0.0;
								fVar31 = (auVar28._12_4_ - auVar18._12_4_) * 0.0;
								fVar17 = auVar18._0_4_ + fVar27;
								fVar22 = auVar18._4_4_ + fVar29;
								fVar20 = auVar18._8_4_ + fVar30;
								fVar21 = auVar18._12_4_ + fVar31;
								auVar25._0_4_ = fVar17 - fVar27;
								auVar25._4_4_ = fVar22 - fVar29;
								auVar25._8_4_ = fVar20 - fVar30;
								auVar25._12_4_ = fVar21 - fVar31;
								auVar6._4_4_ = local_208.m10 + local_208.m01;
								auVar6._0_4_ = local_208.m00 + local_208.m30;
								auVar6._8_8_ = 0;
								auVar28 = minps(auVar25, auVar6);
								auVar19._0_4_ = fVar17 + fVar27;
								auVar19._4_4_ = fVar22 + fVar29;
								auVar19._8_4_ = fVar20 + fVar30;
								auVar19._12_4_ = fVar21 + fVar31;
								auVar7._4_4_ = local_208.m10 + local_208.m01;
								auVar7._0_4_ = local_208.m00 + local_208.m30;
								auVar7._8_8_ = 0;
								auVar18 = maxps(auVar19, auVar7);
								fVar17 = (auVar18._0_4_ - auVar28._0_4_) * 0.5;
								fVar22 = (auVar18._4_4_ - auVar28._4_4_) * 0.5;
								fVar20 = (auVar18._8_4_ - auVar28._8_4_) * 0.0;
								fVar21 = (auVar18._12_4_ - auVar28._12_4_) * 0.0;
								local_250 = (fVar24 - local_24c) * 0.5;
								local_24c = local_24c + local_250;
								local_218._4_4_ = auVar28._4_4_ + fVar22;
								local_218._0_4_ = auVar28._0_4_ + fVar17;
								stack0xfffffffffffffdf0 = CONCAT44(auVar28._12_4_ + fVar21, auVar28._8_4_ + fVar20);
								local_228 = CONCAT44(fVar22, fVar17);
								uStack_220 = CONCAT44(fVar21, fVar20);
							}
							else {
								local_24c = local_208.m20;
								local_228 = CONCAT44(local_208.m01, local_208.m30);
								uStack_220 = 0;
								bVar10 = true;
								local_250 = local_208.m11;
								local_218._0_8_ = local_248.m_Center._0_8_;
							}
						}
						uVar16 = uVar16 + 1;
						uVar1 = (uint)pUVar4.Length;
						uVar14 = (ulong)uVar1;
					} while ((long)uVar16 < (long)(int)uVar1);
				}
				pCVar11 = local_1c0;
				if (!bVar10) {
					return;
				}
				pUVar5 = local_1c0.Value;
				if (pUVar5 != null) {
					pUVar5.shape = 1;
					pUVar5 = pCVar11.Value;
					if (pUVar5 != null) {
						value.z = local_250 + local_250;
						value.x = (float)local_228 + (float)local_228;
						value.y = local_228._4_4_ + local_228._4_4_;
						pUVar5.size = value;
						pUVar5 = pCVar11.Value;
						if (pUVar5 != null) {
							value_00.z = local_24c;
							value_00.x = (float)local_218._0_4_;
							value_00.y = (float)local_218._4_4_;
							pUVar5.center = value_00;
							return;
						}
					}
				}
			}
		}
	label_05a00d34: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001F91")]
	[Address(RVA = "0x5900D40", Offset = "0x58FFD40", VA = "0x5900D40")]
	private static bool TryGetColliderBounds(Collider collider, out Bounds bounds)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c (CustomLogic.CustomLogicNavmeshObstacleBuiltin$$TryGetColliderBounds): 42 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		Collider pUVar3;
		UnityEngine_Vector3_StaticFields pUVar4;
		bool bVar5;
		int iVar6;
		int iVar7;
		Object x;
		Mesh __this;
		Il2CppClass pIVar8;
		IndexOutOfRangeException __this_00;
		String pSVar9;
		float pfVar10;
		float pfVar11;
		MethodInfo* metadataPointer;
		float fVar12;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		Vector3 UVar13;
		float[] local_80 = new float[2];
		ulong local_78;
		float local_5c;
		byte[] local_58 = new byte[16];
		Bounds local_40;
		ulong local_28;

		if (collider == null) {
	label_05a00eb7: ;
			bounds.m_Center.x = 0.0;
			bounds.m_Center.y = 0.0;
			*(ulong)&bounds.m_Center.z = 0;
			bounds.m_Extents.y = 0.0;
			bounds.m_Extents.z = 0.0;
			bVar5 = false;
		}
		else {
			pUVar3 = collider.klass;
			bVar1 = (pUVar3._2).typeHierarchyDepth;
			bVar2 = (typeof(BoxCollider)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pUVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BoxCollider))) {
				bVar2 = (typeof(SphereCollider)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pUVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(SphereCollider))) {
					bVar2 = (typeof(CapsuleCollider)._2).typeHierarchyDepth;
					if ((bVar1 < bVar2) ||((pUVar3._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CapsuleCollider))) {
						bVar2 = (typeof(MeshCollider)._2).typeHierarchyDepth;
						if ((bVar2 <= bVar1) &&((pUVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(MeshCollider) )) {
							x = (Object)collider.sharedMesh;
							bVar5 = (x != null);
							if (bVar5) {
								__this = collider.sharedMesh;
								if (__this == null) {
									throw new NullReferenceException();
								}
								local_40 = __this.bounds;
								bounds.m_Extents.y = local_40.m_Extents.y;
								bounds.m_Extents.z = local_40.m_Extents.z;
								bounds.m_Center.x = local_40.m_Center.x;
								bounds.m_Center.y = local_40.m_Center.y;
								*(ulong)&bounds.m_Center.z = local_40._8_8_;
								goto label_05a010ef;
							}
						}
						goto label_05a00eb7;
					}
					pUVar4 = typeof(Vector3).static_fields;
					local_78._0_4_ = (pUVar4.oneVector).x;
					local_78._4_4_ = (pUVar4.oneVector).y;
					local_58._0_4_ = (pUVar4.oneVector).z;
					fVar12 = collider.radius;
					local_40.m_Center.x = fVar12 * (float)local_78 + fVar12 * (float)local_78;
					local_40.m_Center.y = fVar12 * local_78._4_4_ + fVar12 * local_78._4_4_;
					local_80[0] = (float)local_58._0_4_ * fVar12 + (float)local_58._0_4_ * fVar12;
					iVar6 = collider.direction;
					fVar12 = collider.height;
					local_78 = CONCAT44(local_78._4_4_, fVar12);
					iVar7 = collider.direction;
					pfVar10 = (float)&local_40;
					pfVar11 = pfVar10;
					if (iVar7 != 0) {
						if (iVar7 == 2) {
							pfVar11 = local_80;
						}
						else {
							if (iVar7 != 1) {
								pIVar8 = il2cpp_codegen_get_runtime_metadata(&typeof(IndexOutOfRangeException));
								__this_00 = (IndexOutOfRangeException)il2cpp_codegen_object_new(pIVar8);
								pSVar9 = il2cpp_codegen_get_runtime_metadata(&"Invalid Vector3 index!");
								__this_00 = new IndexOutOfRangeException(pSVar9);
								metadataPointer = &MethodInfo_UnityEngine_Vector3_get_Item;
								goto label_05a0116f;
							}
							pfVar11 = &local_40.m_Center.y;
						}
					}
					fVar12 = (float)local_78;
					if ((float)local_78 <= *pfVar11) {
						fVar12 = *pfVar11;
					}
					if (iVar6 != 0) {
						if (iVar6 == 2) {
							pfVar10 = local_80;
						}
						else {
							if (iVar6 != 1) {
								pIVar8 = il2cpp_codegen_get_runtime_metadata(&typeof(IndexOutOfRangeException));
								__this_00 = (IndexOutOfRangeException)il2cpp_codegen_object_new(pIVar8);
								pSVar9 = il2cpp_codegen_get_runtime_metadata(&"Invalid Vector3 index!");
								__this_00 = new IndexOutOfRangeException(pSVar9);
								metadataPointer = &MethodInfo_UnityEngine_Vector3_set_Item;
	label_05a0116f: ;
								throw (object)__this_00;
							}
							pfVar10 = &local_40.m_Center.y;
						}
					}
					*pfVar10 = fVar12;
					UVar13 = collider.center;
					bounds.m_Center.x = UVar13.x;
					bounds.m_Center.y = UVar13.y;
					bounds.m_Center.z = UVar13.z;
					bounds.m_Extents.x = local_40.m_Center.x * 0.5;
					bounds.m_Extents.y = local_40.m_Center.y * 0.5;
				}
				else {
					UVar13 = collider.center;
					local_58._8_4_ = extraout_XMM0_Dc_00;
					local_58._0_8_ = UVar13._0_8_;
					local_58._12_4_ = extraout_XMM0_Dd_00;
					local_78 = CONCAT44(local_78._4_4_, UVar13.z);
					pUVar4 = typeof(Vector3).static_fields;
					local_28._0_4_ = (pUVar4.oneVector).x;
					local_28._4_4_ = (pUVar4.oneVector).y;
					local_5c = (pUVar4.oneVector).z;
					fVar12 = collider.radius;
					local_80[0] = local_5c * fVar12 + local_5c * fVar12;
					bounds.m_Center.x = (float)local_58._0_4_;
					bounds.m_Center.y = (float)local_58._4_4_;
					bounds.m_Center.z = (float)local_78;
					bounds.m_Extents.x = (fVar12 * (float)local_28 + fVar12 * (float)local_28) * 0.5;
					bounds.m_Extents.y = (fVar12 * local_28._4_4_ + fVar12 * local_28._4_4_) * 0.5;
				}
				bounds.m_Extents.z = local_80[0] * 0.5;
			}
			else {
				UVar13 = collider.center;
				local_58._8_4_ = extraout_XMM0_Dc;
				local_58._0_8_ = UVar13._0_8_;
				local_58._12_4_ = extraout_XMM0_Dd;
				local_78 = CONCAT44(local_78._4_4_, UVar13.z);
				UVar13 = collider.size;
				bounds.m_Center.x = (float)local_58._0_4_;
				bounds.m_Center.y = (float)local_58._4_4_;
				bounds.m_Center.z = (float)local_78;
				bounds.m_Extents.x = UVar13.x * 0.5;
				bounds.m_Extents.y = UVar13.y * 0.5;
				bounds.m_Extents.z = UVar13.z * 0.5;
			}
	label_05a010ef: ;
			bVar5 = true;
		}
		return bVar5;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c.

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"ShapeBox");
		__this.Add((Il2CppObject *)"ShapeCapsule");
		__this.Add((Il2CppObject *)"Radius");
		__this.Add((Il2CppObject *)"Height");
		__this.Add((Il2CppObject *)"Scale");
		__this.Add((Il2CppObject *)"Center");
		__this.Add((Il2CppObject *)"Carving");
		__this.Add((Il2CppObject *)"CarveOnlyStationary");
		__this.Add((Il2CppObject *)"Shape");
		__this.Add((Il2CppObject *)"AutoScale");
		CustomLogicNavmeshObstacleBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__ShapeBox>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__ShapeBox_g____getter_2_0(CustomLogicNavmeshObstacleBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__ShapeCapsule>g____getter|3_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__ShapeCapsule_g____getter_3_0(CustomLogicNavmeshObstacleBuiltin __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Radius>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Radius_g____getter_4_0(CustomLogicNavmeshObstacleBuiltin __i)
	{
		NavMeshObstacle __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.radius;
		return pIVar1;
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Radius>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__Radius_g____setter_4_1(CustomLogicNavmeshObstacleBuiltin __i, object __v)
	{
		NavMeshObstacle __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.radius = value;
		return;
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Height>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Height_g____getter_5_0(CustomLogicNavmeshObstacleBuiltin __i)
	{
		NavMeshObstacle __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.height;
		return pIVar1;
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Height>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__Height_g____setter_5_1(CustomLogicNavmeshObstacleBuiltin __i, object __v)
	{
		NavMeshObstacle __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.height = value;
		return;
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Scale_g____getter_6_0(CustomLogicNavmeshObstacleBuiltin __i)
	{
		NavMeshObstacle __this;
		CustomLogicVector3Builtin __this_00;
		Vector3 value;

		if (__i != null) {
			__this = __i.Value;
			if (__this != null) {
				value = __this.size;
				__this_00 = new CustomLogicVector3Builtin(value);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____setter|6_1: clean
	private static void Bindings____CreatePropertyBinding__Scale_g____setter_6_1(CustomLogicNavmeshObstacleBuiltin __i, object __v)
	{
		NavMeshObstacle __this;
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (((__i == null) ||(pCVar1 == null)) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.size = (Vector3)pCVar1.Value;
		return;
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Center>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Center_g____getter_7_0(CustomLogicNavmeshObstacleBuiltin __i)
	{
		NavMeshObstacle __this;
		object pIVar1;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Center>g____setter|7_1: 1 lines keep C-only constructs
	private static void Bindings____CreatePropertyBinding__Center_g____setter_7_1(CustomLogicNavmeshObstacleBuiltin __i, object __v)
	{
		NavMeshObstacle __this;
		Vector3 value;

		if (Il2CppMethodInitialized_07545e8c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_Vector3) ;
			Il2CppMethodInitialized_07545e8c = true;
		}
		value = CustomLogicEvaluator.ConvertTo<Vector3>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.center = value;
		return;
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Carving>g____getter|8_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Carving_g____getter_8_0(CustomLogicNavmeshObstacleBuiltin __i)
	{
		NavMeshObstacle __this;
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __this.carving;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Carving>g____setter|8_1: clean
	private static void Bindings____CreatePropertyBinding__Carving_g____setter_8_1(CustomLogicNavmeshObstacleBuiltin __i, object __v)
	{
		NavMeshObstacle __this;
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.carving = value;
		return;
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__CarveOnlyStationary>g____getter|9_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__CarveOnlyStationary_g____getter_9_0(CustomLogicNavmeshObstacleBuiltin __i)
	{
		NavMeshObstacle __this;
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __this.carveOnlyStationary;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__CarveOnlyStationary>g____setter|9_1: clean
	private static void Bindings____CreatePropertyBinding__CarveOnlyStationary_g____setter_9_1(CustomLogicNavmeshObstacleBuiltin __i, object __v)
	{
		NavMeshObstacle __this;
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.carveOnlyStationary = value;
		return;
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Shape>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__Shape_g____getter_10_0(CustomLogicNavmeshObstacleBuiltin __i)
	{
		NavMeshObstacle __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.shape;
		return pIVar1;
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Shape>g____setter|10_1: clean
	private static void Bindings____CreatePropertyBinding__Shape_g____setter_10_1(CustomLogicNavmeshObstacleBuiltin __i, object __v)
	{
		NavMeshObstacle __this;
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.shape = value;
		return;
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicNavmeshObstacleBuiltin.Bindings.c();
		CustomLogicNavmeshObstacleBuiltin.Bindings.c.__9 =(CustomLogicNavmeshObstacleBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings.<>c$$<__CreateMethodBinding__AutoScale>b__11_0: clean
	private object Bindings_c____CreateMethodBinding__AutoScale_b__11_0(CustomLogicNavmeshObstacleBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.AutoScale();
		return null;
	}
}
