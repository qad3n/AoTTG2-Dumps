// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLineCastHitResultBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicLineCastHitResultBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200045E")]
[CompilerGenerated]
internal class CustomLogicLineCastHitResultBuiltin : BuiltinClassInstance, ICustomLogicCopyable, ICustomLogicEquals
{
	[Token(Token = "0x200045F")]
	public static class Factory
	{
		[Token(Token = "0x6001B40")]
		[Address(RVA = "0x58AFB70", Offset = "0x58AEB70", VA = "0x58AFB70")]
		public static CustomLogicLineCastHitResultBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLineCastHitResultBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x2000460")]
	public static class Bindings
	{
		[Token(Token = "0x40015DB")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001B41")]
		[Address(RVA = "0x58AFC00", Offset = "0x58AEC00", VA = "0x58AFC00")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicLineCastHitResultBuiltin> pCVar3;
			CLMethodBinding<CustomLogicLineCastHitResultBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x624ce79f) {
				if (uVar2 < 0x32b1316e) {
					if (uVar2 == 0x2cfc1e5d) {
						bVar1 = (name == "Collider");
						if (bVar1) {
							if ((typeof(CustomLogicLineCastHitResultBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreatePropertyBinding__Collider();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreatePropertyBinding__Collider() ;
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x32b1316d) {
						bVar1 = (name == "ColliderInfo");
						if (bVar1) {
							if ((typeof(CustomLogicLineCastHitResultBuiltin.Bindings)._2). cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreatePropertyBinding__ColliderInfo();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreatePropertyBinding__ColliderInfo() ;
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x549f4d10) {
					bVar1 = (name == "__Copy__");
					if (bVar1) {
						if ((typeof(CustomLogicLineCastHitResultBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreateMethodBinding____Copy__();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreateMethodBinding____Copy__();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x58de2772) {
					bVar1 = (name == "Normal");
					if (bVar1) {
						if ((typeof(CustomLogicLineCastHitResultBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreatePropertyBinding__Normal();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreatePropertyBinding__Normal();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x624ce79e) {
					bVar1 = (name == "IsMapObject");
					if (bVar1) {
						if ((typeof(CustomLogicLineCastHitResultBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreatePropertyBinding__IsMapObject();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreatePropertyBinding__IsMapObject();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x91efe6d8) {
				if (uVar2 == 0x91efe6d7) {
					bVar1 = (name == "__Eq__");
					if (bVar1) {
						if ((typeof(CustomLogicLineCastHitResultBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreateMethodBinding____Eq__();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreateMethodBinding____Eq__();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x792a6491) {
					bVar1 = (name == "__Hash__");
					if (bVar1) {
						if ((typeof(CustomLogicLineCastHitResultBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreateMethodBinding____Hash__();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreateMethodBinding____Hash__();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 == 0xd3d96082) {
				bVar1 = (name == "Distance");
				if (bVar1) {
					if ((typeof(CustomLogicLineCastHitResultBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreatePropertyBinding__Distance();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreatePropertyBinding__Distance();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xeaa8ef31) {
				bVar1 = (name == "Point");
				if (bVar1) {
					if ((typeof(CustomLogicLineCastHitResultBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreatePropertyBinding__Point();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreatePropertyBinding__Point();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf5ca12e0) {
				bVar1 = (name == "IsCharacter");
				if (bVar1) {
					if ((typeof(CustomLogicLineCastHitResultBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreatePropertyBinding__IsCharacter();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicLineCastHitResultBuiltin.Bindings.__CreatePropertyBinding__IsCharacter();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLineCastHitResultBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6001B42")]
		[Address(RVA = "0x58B00C0", Offset = "0x58AF0C0", VA = "0x58B00C0")]
		public static CLPropertyBinding<CustomLogicLineCastHitResultBuiltin> __CreatePropertyBinding__IsCharacter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__IsCharacter): 3 lines keep C-only constructs
			Func<CustomLogicLineCastHitResultBuiltin, object> __this;
			CLPropertyBinding<CustomLogicLineCastHitResultBuiltin> __this_00;

			__this = new Func<CustomLogicLineCastHitResultBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__IsCharacter_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicLineCastHitResultBuiltin>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001B43")]
		[Address(RVA = "0x58B0160", Offset = "0x58AF160", VA = "0x58B0160")]
		public static CLPropertyBinding<CustomLogicLineCastHitResultBuiltin> __CreatePropertyBinding__IsMapObject()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__IsMapObject): 3 lines keep C-only constructs
			Func<CustomLogicLineCastHitResultBuiltin, object> __this;
			CLPropertyBinding<CustomLogicLineCastHitResultBuiltin> __this_00;

			__this = new Func<CustomLogicLineCastHitResultBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__IsMapObject_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicLineCastHitResultBuiltin>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001B44")]
		[Address(RVA = "0x58B0200", Offset = "0x58AF200", VA = "0x58B0200")]
		public static CLPropertyBinding<CustomLogicLineCastHitResultBuiltin> __CreatePropertyBinding__Distance()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Distance): 3 lines keep C-only constructs
			Func<CustomLogicLineCastHitResultBuiltin, object> __this;
			CLPropertyBinding<CustomLogicLineCastHitResultBuiltin> __this_00;

			__this = new Func<CustomLogicLineCastHitResultBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Distance_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicLineCastHitResultBuiltin>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001B45")]
		[Address(RVA = "0x58B02A0", Offset = "0x58AF2A0", VA = "0x58B02A0")]
		public static CLPropertyBinding<CustomLogicLineCastHitResultBuiltin> __CreatePropertyBinding__Point()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Point): 3 lines keep C-only constructs
			Func<CustomLogicLineCastHitResultBuiltin, object> __this;
			CLPropertyBinding<CustomLogicLineCastHitResultBuiltin> __this_00;

			__this = new Func<CustomLogicLineCastHitResultBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Point_g____get);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicLineCastHitResultBuiltin>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001B46")]
		[Address(RVA = "0x58B0340", Offset = "0x58AF340", VA = "0x58B0340")]
		public static CLPropertyBinding<CustomLogicLineCastHitResultBuiltin> __CreatePropertyBinding__Normal()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Normal): 3 lines keep C-only constructs
			Func<CustomLogicLineCastHitResultBuiltin, object> __this;
			CLPropertyBinding<CustomLogicLineCastHitResultBuiltin> __this_00;

			__this = new Func<CustomLogicLineCastHitResultBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Normal_g____ge);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicLineCastHitResultBuiltin>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001B47")]
		[Address(RVA = "0x58B03E0", Offset = "0x58AF3E0", VA = "0x58B03E0")]
		public static CLPropertyBinding<CustomLogicLineCastHitResultBuiltin> __CreatePropertyBinding__Collider()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Collider): 3 lines keep C-only constructs
			Func<CustomLogicLineCastHitResultBuiltin, object> __this;
			CLPropertyBinding<CustomLogicLineCastHitResultBuiltin> __this_00;

			__this = new Func<CustomLogicLineCastHitResultBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Collider_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicLineCastHitResultBuiltin>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001B48")]
		[Address(RVA = "0x58B0480", Offset = "0x58AF480", VA = "0x58B0480")]
		public static CLPropertyBinding<CustomLogicLineCastHitResultBuiltin> __CreatePropertyBinding__ColliderInfo()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__ColliderInfo): 3 lines keep C-only constructs
			Func<CustomLogicLineCastHitResultBuiltin, object> __this;
			CLPropertyBinding<CustomLogicLineCastHitResultBuiltin> __this_00;

			__this = new Func<CustomLogicLineCastHitResultBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__ColliderInfo_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicLineCastHitResultBuiltin>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001B49")]
		[Address(RVA = "0x58B0520", Offset = "0x58AF520", VA = "0x58B0520")]
		public static CLMethodBinding<CustomLogicLineCastHitResultBuiltin> __CreateMethodBinding____Copy__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreateMethodBinding____Copy__): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicLineCastHitResultBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicLineCastHitResultBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b2c == false) {
				Il2CppMethodInitialized_07545b2c = true;
				uVar1 = (typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c)._2). cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c)._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c)). static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicLineCastHitResultBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c___CreateMethodBinding____Copy___b__9);
				pCVar2 = typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLMethodBinding<CustomLogicLineCastHitResultBuiltin>));
			__this_00 = new CLMethodBinding<@object>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B4A")]
		[Address(RVA = "0x58B0660", Offset = "0x58AF660", VA = "0x58B0660")]
		public static CLMethodBinding<CustomLogicLineCastHitResultBuiltin> __CreateMethodBinding____Eq__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreateMethodBinding____Eq__): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicLineCastHitResultBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicLineCastHitResultBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b2d == false) {
				Il2CppMethodInitialized_07545b2d = true;
				uVar1 = (typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c)._2). cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c)._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c)). static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicLineCastHitResultBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c___CreateMethodBinding____Eq___b__10_0);
				pCVar2 = typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLMethodBinding<CustomLogicLineCastHitResultBuiltin>));
			__this_00 = new CLMethodBinding<@object>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B4B")]
		[Address(RVA = "0x58B07A0", Offset = "0x58AF7A0", VA = "0x58B07A0")]
		public static CLMethodBinding<CustomLogicLineCastHitResultBuiltin> __CreateMethodBinding____Hash__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreateMethodBinding____Hash__): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicLineCastHitResultBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicLineCastHitResultBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b2e == false) {
				Il2CppMethodInitialized_07545b2e = true;
				uVar1 = (typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c)._2). cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c)._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c)). static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<CustomLogicLineCastHitResultBuiltin, @object[], @object>));
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c___CreateMethodBinding____Hash___b__11);
				pCVar2 = typeof(CustomLogicLineCastHitResultBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLMethodBinding<CustomLogicLineCastHitResultBuiltin>));
			__this_00 = new CLMethodBinding<@object>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x170002ED")]
	public bool IsCharacter
	{
		[Token(Token = "0x6001B29")]
		[Address(RVA = "0x58AF510", Offset = "0x58AE510", VA = "0x58AF510")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsCharacter): 2 lines keep C-only constructs
			Dictionary<object, object> __this_00;
			bool bVar1;
			sbyte pcVar2;
			object local_10;

			local_10 = null;
			__this_00 = (Dictionary<object, object>)this.Variables;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this_00.TryGetValue((Il2CppObject *)"IsCharacter", ref local_10);
			if (((bVar1) && (local_10 != null)) && (local_10.klass == g_data_075566f0)) {
				pcVar2 = il2cpp_vm_Object_Unbox(local_10);
				return *pcVar2 != false;
			}
			return false;
		}
		[Token(Token = "0x6001B2A")]
		[Address(RVA = "0x58AF5B0", Offset = "0x58AE5B0", VA = "0x58AF5B0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_IsCharacter): 4 lines keep C-only constructs
			Dictionary<object, object> __this_00;
			ulong in_RAX;
			object value_00;
			ulong uStack_18;

			uStack_18 = in_RAX;
			__this_00 = (Dictionary<object, object>)this.Variables;
			uStack_18 = CONCAT17(value, (undefined7)uStack_18);
			value_00 = (object)(((long)&uStack_18 + 7));
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.set_Item((Il2CppObject *)"IsCharacter", value_00);
			return;
		}
	}

	[Token(Token = "0x170002EE")]
	public bool IsMapObject
	{
		[Token(Token = "0x6001B2B")]
		[Address(RVA = "0x58AF630", Offset = "0x58AE630", VA = "0x58AF630")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsMapObject): clean
			return this._IsMapObject_k__BackingField;
		}
		[Token(Token = "0x6001B2C")]
		[Address(RVA = "0x58AF640", Offset = "0x58AE640", VA = "0x58AF640")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_IsMapObject): clean
			this._IsMapObject_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002EF")]
	public float Distance
	{
		[Token(Token = "0x6001B2D")]
		[Address(RVA = "0x58AF650", Offset = "0x58AE650", VA = "0x58AF650")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Distance): clean
			return this._Distance_k__BackingField;
		}
		[Token(Token = "0x6001B2E")]
		[Address(RVA = "0x58AF660", Offset = "0x58AE660", VA = "0x58AF660")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Distance): clean
			this._Distance_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002F0")]
	public CustomLogicVector3Builtin Point
	{
		[Token(Token = "0x6001B2F")]
		[Address(RVA = "0x58AF670", Offset = "0x58AE670", VA = "0x58AF670")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Point): clean
			return this._Point_k__BackingField;
		}
		[Token(Token = "0x6001B30")]
		[Address(RVA = "0x58AF680", Offset = "0x58AE680", VA = "0x58AF680")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Point): clean
			this._Point_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002F1")]
	public CustomLogicVector3Builtin Normal
	{
		[Token(Token = "0x6001B31")]
		[Address(RVA = "0x58AF690", Offset = "0x58AE690", VA = "0x58AF690")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Normal): clean
			return this._Normal_k__BackingField;
		}
		[Token(Token = "0x6001B32")]
		[Address(RVA = "0x58AF6A0", Offset = "0x58AE6A0", VA = "0x58AF6A0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Normal): clean
			this._Normal_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002F2")]
	public BuiltinClassInstance Collider
	{
		[Token(Token = "0x6001B33")]
		[Address(RVA = "0x58AF6B0", Offset = "0x58AE6B0", VA = "0x58AF6B0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Collider): clean
			return this._Collider_k__BackingField;
		}
		[Token(Token = "0x6001B34")]
		[Address(RVA = "0x58AF6C0", Offset = "0x58AE6C0", VA = "0x58AF6C0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Collider): clean
			this._Collider_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002F3")]
	public CustomLogicColliderBuiltin ColliderInfo
	{
		[Token(Token = "0x6001B35")]
		[Address(RVA = "0x58AF6D0", Offset = "0x58AE6D0", VA = "0x58AF6D0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_ColliderInfo): clean
			return this._ColliderInfo_k__BackingField;
		}
		[Token(Token = "0x6001B36")]
		[Address(RVA = "0x58AF6E0", Offset = "0x58AE6E0", VA = "0x58AF6E0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_ColliderInfo): clean
			this._ColliderInfo_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002F4")]
	public override string ClassName
	{
		[Token(Token = "0x6001B3B")]
		[Address(RVA = "0x58AFB10", Offset = "0x58AEB10", VA = "0x58AFB10", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_ClassName): clean
			return "LineCastHitResult";
		}
	}

	[Token(Token = "0x170002F5")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001B3C")]
		[Address(RVA = "0x58AFB40", Offset = "0x58AEB40", VA = "0x58AFB40", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170002F6")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001B3D")]
		[Address(RVA = "0x58AFB50", Offset = "0x58AEB50", VA = "0x58AFB50", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x170002F7")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001B3E")]
		[Address(RVA = "0x58AFB60", Offset = "0x58AEB60", VA = "0x58AFB60", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001B37")]
	[Address(RVA = "0x58AF6F0", Offset = "0x58AE6F0", VA = "0x58AF6F0")]
	public BuiltinClassInstance Copy()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$Copy): 5 lines keep C-only constructs
		byte bVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		CustomLogicLineCastHitResultBuiltin __this_00;
		object value;
		CustomLogicVector3Builtin pCVar4;
		byte puVar5;
		byte uVar6;
		byte local_31;
		object local_30;

		__this_00 = new CustomLogicLineCastHitResultBuiltin();
		local_30 = null;
		pSVar2 = (Dictionary<object, object>)this.Variables;
		if (pSVar2 != null) {
			bVar3 = pSVar2.TryGetValue((Il2CppObject *)"IsCharacter", ref local_30);
			if (((bVar3) && (local_30 != null)) && (local_30.klass == g_data_075566f0)) {
				puVar5 = il2cpp_vm_Object_Unbox(local_30);
				uVar6 = *puVar5;
			}
			else {
				uVar6 = 0;
			}
			if (__this_00 == null) goto label_059af96b;
			pSVar2 = (Dictionary<object, object>)__this_00.Variables;
			local_31 = uVar6;
			value = (object)local_31;
			if (pSVar2 == null) goto label_059af96b;
			pSVar2.set_Item((Il2CppObject *)"IsCharacter", value);
			__this_00._IsMapObject_k__BackingField = this._IsMapObject_k__BackingField;
			pCVar4 = this._Point_k__BackingField;
			if (pCVar4 == null) goto label_059af96b;
			pCVar4 = (CustomLogicVector3Builtin)pCVar4.__Copy__();
			if (pCVar4 != null) {
				bVar1 = (typeof(CustomLogicVector3Builtin)._2).typeHierarchyDepth;
				if (((pCVar4.klass._2).typeHierarchyDepth < bVar1) ||((pCVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicVector3Builtin))) goto label_059af970;
			}
			__this_00._Point_k__BackingField = pCVar4;
			pCVar4 = this._Normal_k__BackingField;
			if (pCVar4 != null) {
				pCVar4 = (CustomLogicVector3Builtin)pCVar4.__Copy__();
				if (pCVar4 != null) {
					bVar1 = (typeof(CustomLogicVector3Builtin)._2).typeHierarchyDepth;
					if (((pCVar4.klass._2).typeHierarchyDepth < bVar1) ||((pCVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicVector3Builtin))) {
	label_059af970: ;
						throw new InvalidCastException();
					}
				}
				__this_00._Normal_k__BackingField = pCVar4;
				__this_00._Distance_k__BackingField = this._Distance_k__BackingField;
				__this_00._Collider_k__BackingField = this._Collider_k__BackingField;
				__this_00._ColliderInfo_k__BackingField = this._ColliderInfo_k__BackingField;
				return (object)__this_00;
			}
		}
	label_059af96b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001B38")]
	[Address(RVA = "0x58AF9F0", Offset = "0x58AE9F0", VA = "0x58AF9F0", Slot = "11")]
	public object __Copy__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$__Copy__): clean
		object pIVar1;

		return pIVar1;
	}

	[Token(Token = "0x6001B39")]
	[Address(RVA = "0x58AFA00", Offset = "0x58AEA00", VA = "0x58AFA00", Slot = "12")]
	public bool __Eq__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$__Eq__): 5 lines keep C-only constructs
		byte bVar1;
		CustomLogicVector3Builtin __this_00;
		Il2CppClass __this_01;
		bool bVar2;
		object pIVar3;

		if (self != null) {
			bVar1 = (typeof(CustomLogicLineCastHitResultBuiltin)._2).typeHierarchyDepth;
			if (bVar1 <= (self.klass._2).typeHierarchyDepth) {
				pIVar3 = null;
				if ((self.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicLineCastHitResultBuiltin)) {
					pIVar3 = self;
				}
				if ((((other != null) && (pIVar3 != null)) &&(bVar1 <= (other.klass._2).typeHierarchyDepth)) &&((other.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicLineCastHitResultBuiltin))) {
					__this_00 = pIVar3[3].monitor;
					if (__this_00 != null) {
						bVar2 = __this_00.__Eq__((object)__this_00, other[3].monitor);
						if (!bVar2) {
							return false;
						}
						__this_01 = pIVar3[4].klass;
						if (__this_01 != null) {
							bVar2 = __this_01.__Eq__((object)__this_01, (object)other[4].klass);
							return bVar2;
						}
					}
					throw new NullReferenceException();
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6001B3A")]
	[Address(RVA = "0x58AFAD0", Offset = "0x58AEAD0", VA = "0x58AFAD0", Slot = "13")]
	public int __Hash__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$__Hash__): clean
		CustomLogicVector3Builtin pCVar1;
		uint uVar2;
		uint uVar3;

		pCVar1 = this._Point_k__BackingField;
		if (pCVar1 != null) {
			uVar2 = pCVar1.__Hash__();
			pCVar1 = this._Normal_k__BackingField;
			if (pCVar1 != null) {
				uVar3 = pCVar1.__Hash__();
				return uVar3 ^ uVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001B3F")]
	[Address(RVA = "0x58AF980", Offset = "0x58AE980", VA = "0x58AF980")]
	public CustomLogicLineCastHitResultBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c (CustomLogic.CustomLogicLineCastHitResultBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07545b23 == false) {
			Il2CppMethodInitialized_07545b23 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicLineCastHitResultBuiltin.c.

	// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"IsCharacter");
		__this.Add((Il2CppObject *)"IsMapObject");
		__this.Add((Il2CppObject *)"Distance");
		__this.Add((Il2CppObject *)"Point");
		__this.Add((Il2CppObject *)"Normal");
		__this.Add((Il2CppObject *)"Collider");
		__this.Add((Il2CppObject *)"ColliderInfo");
		__this.Add((Il2CppObject *)"__Copy__");
		__this.Add((Il2CppObject *)"__Eq__");
		__this.Add((Il2CppObject *)"__Hash__");
		CustomLogicLineCastHitResultBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__IsCharacter>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsCharacter_g____getter_2_0(CustomLogicLineCastHitResultBuiltin __i)
	{
		Dictionary<object, object> __this;
		bool bVar1;
		object pIVar2;
		byte puVar3;
		byte local_11;
		object local_10;

		if (__i != null) {
			local_10 = null;
			__this = (Dictionary<object, object>)__i.Variables;
			if (__this != null) {
				bVar1 = __this.TryGetValue((Il2CppObject *)"IsCharacter", ref local_10);
				if (((bVar1) && (local_10 != null)) && (local_10.klass == g_data_075566f0)) {
					puVar3 = il2cpp_vm_Object_Unbox(local_10);
					local_11 = *puVar3;
				}
				else {
				}
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__IsMapObject>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__IsMapObject_g____getter_3_0(CustomLogicLineCastHitResultBuiltin __i)
	{
		object pIVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Distance>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Distance_g____getter_4_0(CustomLogicLineCastHitResultBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Point>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Point_g____getter_5_0(CustomLogicLineCastHitResultBuiltin __i)
	{
		if (__i == null) {
			throw new NullReferenceException();
		}
		return (object)__i._Point_k__BackingField;
	}

	// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Normal>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Normal_g____getter_6_0(CustomLogicLineCastHitResultBuiltin __i)
	{
		if (__i == null) {
			throw new NullReferenceException();
		}
		return (object)__i._Normal_k__BackingField;
	}

	// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Collider>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Collider_g____getter_7_0(CustomLogicLineCastHitResultBuiltin __i)
	{
		if (__i == null) {
			throw new NullReferenceException();
		}
		return (object)__i._Collider_k__BackingField;
	}

	// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__ColliderInfo>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__ColliderInfo_g____getter_8_0(CustomLogicLineCastHitResultBuiltin __i)
	{
		if (__i == null) {
			throw new NullReferenceException();
		}
		return (object)__i._ColliderInfo_k__BackingField;
	}

	// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicLineCastHitResultBuiltin.Bindings.c();
		CustomLogicLineCastHitResultBuiltin.Bindings.c.__9 =(CustomLogicLineCastHitResultBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__9_0: clean
	private object Bindings_c____CreateMethodBinding____Copy___b__9_0(CustomLogicLineCastHitResultBuiltin __c, Object[] __a)
	{
		object pIVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__10_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding____Eq___b__10_0(CustomLogicLineCastHitResultBuiltin __c, Object[] __a)
	{
		int iVar1;
		bool bVar2;
		ulong in_RAX;
		object pIVar3;
		ulong uStack_8;

		if (__a != null) {
			iVar1 = (int)__a.Length;
			if ((iVar1 == 0) || (iVar1 == 1)) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				uStack_8 = in_RAX;
				bVar2 = this.__Eq__(__a[0], __a[1]);
				uStack_8 = CONCAT17(bVar2, (undefined7)uStack_8);
				pIVar3 = (object)(((long)&uStack_8 + 7));
				return pIVar3;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__11_0: clean
	private object Bindings_c____CreateMethodBinding____Hash___b__11_0(CustomLogicLineCastHitResultBuiltin __c, Object[] __a)
	{
		CustomLogicVector3Builtin pCVar1;
		object pIVar2;
		byte[] auStack_14 = new byte[4];

		if ((__c != null) &&(pCVar1 = __c._Point_k__BackingField, pCVar1 != null) ) {
			pCVar1.__Hash__();
			pCVar1 = __c._Normal_k__BackingField;
			if (pCVar1 != null) {
				pCVar1.__Hash__();
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}
}
