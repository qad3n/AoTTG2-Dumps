// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCollisionBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x200048F")]
[CompilerGenerated]
internal class CustomLogicCollisionBuiltin : BuiltinClassInstance, ICustomLogicCopyable, ICustomLogicEquals
{
	[Token(Token = "0x2000490")]
	public static class Factory
	{
		[Token(Token = "0x6001E79")]
		[Address(RVA = "0x58F5E20", Offset = "0x58F4E20", VA = "0x58F5E20")]
		public static CustomLogicCollisionBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCollisionBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x2000491")]
	public static class Bindings
	{
		[Token(Token = "0x4001696")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001E7A")]
		[Address(RVA = "0x58F5EB0", Offset = "0x58F4EB0", VA = "0x58F5EB0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicCollisionBuiltin> pCVar3;
			CLMethodBinding<CustomLogicCollisionBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x454bad02) {
				if (uVar2 < 0x2cfc1e5e) {
					if (uVar2 == 0x2706c88a) {
						bVar1 = (name == "RelativeVelocity");
						if (bVar1) {
							if ((typeof(CustomLogicCollisionBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicCollisionBuiltin.Bindings.__CreatePropertyBinding__RelativeVelocity();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicCollisionBuiltin.Bindings.__CreatePropertyBinding__RelativeVelocity();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x2cfc1e5d) {
						bVar1 = (name == "Collider");
						if (bVar1) {
							if ((typeof(CustomLogicCollisionBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicCollisionBuiltin.Bindings.__CreatePropertyBinding__Collider();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicCollisionBuiltin.Bindings.__CreatePropertyBinding__Collider();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x3e98dfb0) {
					bVar1 = (name == "GetContactNorms");
					if (bVar1) {
						if ((typeof(CustomLogicCollisionBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicCollisionBuiltin.Bindings.__CreateMethodBinding__GetContactNorms();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicCollisionBuiltin.Bindings.__CreateMethodBinding__GetContactNorms();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x454bad01) {
					bVar1 = (name == "GetContactImpulses");
					if (bVar1) {
						if ((typeof(CustomLogicCollisionBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicCollisionBuiltin.Bindings.__CreateMethodBinding__GetContactImpulses();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicCollisionBuiltin.Bindings.__CreateMethodBinding__GetContactImpulses();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0x4fa9d68e) {
				if (uVar2 == 0x4bf628c6) {
					bVar1 = (name == "GetContactSeparations");
					if (bVar1) {
						if ((typeof(CustomLogicCollisionBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicCollisionBuiltin.Bindings.__CreateMethodBinding__GetContactSeparations();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicCollisionBuiltin.Bindings.__CreateMethodBinding__GetContactSeparations();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x4fa9d68d) {
					bVar1 = (name == "GetContactPoint");
					if (bVar1) {
						if ((typeof(CustomLogicCollisionBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicCollisionBuiltin.Bindings.__CreateMethodBinding__GetContactPoint();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicCollisionBuiltin.Bindings.__CreateMethodBinding__GetContactPoint();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 == 0xb7ea1ec2) {
				bVar1 = (name == "ContactCount");
				if (bVar1) {
					if ((typeof(CustomLogicCollisionBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicCollisionBuiltin.Bindings.__CreatePropertyBinding__ContactCount();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicCollisionBuiltin.Bindings.__CreatePropertyBinding__ContactCount();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0x7fde94f4) {
				bVar1 = (name == "Impulse");
				if (bVar1) {
					if ((typeof(CustomLogicCollisionBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicCollisionBuiltin.Bindings.__CreatePropertyBinding__Impulse();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicCollisionBuiltin.Bindings.__CreatePropertyBinding__Impulse();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCollisionBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6001E7B")]
		[Address(RVA = "0x58F62A0", Offset = "0x58F52A0", VA = "0x58F62A0")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__Collider()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__Collider): 2 lines keep C-only constructs
			Func<CustomLogicCollisionBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCollisionBuiltin> __this_00;

			__this = new Func<CustomLogicCollisionBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__Collider_g____getter_2);
			__this_00 = new CLPropertyBinding<CustomLogicCollisionBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001E7C")]
		[Address(RVA = "0x58F6340", Offset = "0x58F5340", VA = "0x58F6340")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__Impulse()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__Impulse): 2 lines keep C-only constructs
			Func<CustomLogicCollisionBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCollisionBuiltin> __this_00;

			__this = new Func<CustomLogicCollisionBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__Impulse_g____getter_3);
			__this_00 = new CLPropertyBinding<CustomLogicCollisionBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001E7D")]
		[Address(RVA = "0x58F63E0", Offset = "0x58F53E0", VA = "0x58F63E0")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__RelativeVelocity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__RelativeVelocity): 2 lines keep C-only constructs
			Func<CustomLogicCollisionBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCollisionBuiltin> __this_00;

			__this = new Func<CustomLogicCollisionBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__RelativeVelocity_g);
			__this_00 = new CLPropertyBinding<CustomLogicCollisionBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001E7E")]
		[Address(RVA = "0x58F6480", Offset = "0x58F5480", VA = "0x58F6480")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__ContactCount()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__ContactCount): 2 lines keep C-only constructs
			Func<CustomLogicCollisionBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCollisionBuiltin> __this_00;

			__this = new Func<CustomLogicCollisionBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__ContactCount_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicCollisionBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001E7F")]
		[Address(RVA = "0x58F6520", Offset = "0x58F5520", VA = "0x58F6520")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactPoint()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactPoint): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCollisionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCollisionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545deb == false) {
				Il2CppMethodInitialized_07545deb = true;
				uVar1 = (typeof(CustomLogicCollisionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCollisionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCollisionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCollisionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCollisionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCollisionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCollisionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactPoint_b__6_0);
				pCVar2 = typeof(CustomLogicCollisionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCollisionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001E80")]
		[Address(RVA = "0x58F6660", Offset = "0x58F5660", VA = "0x58F6660")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactNorms()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactNorms): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCollisionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCollisionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545dec == false) {
				Il2CppMethodInitialized_07545dec = true;
				uVar1 = (typeof(CustomLogicCollisionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCollisionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCollisionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCollisionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCollisionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCollisionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCollisionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactNorms_b__7_0);
				pCVar2 = typeof(CustomLogicCollisionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCollisionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001E81")]
		[Address(RVA = "0x58F67A0", Offset = "0x58F57A0", VA = "0x58F67A0")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactImpulses()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactImpulses): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCollisionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCollisionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545ded == false) {
				Il2CppMethodInitialized_07545ded = true;
				uVar1 = (typeof(CustomLogicCollisionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCollisionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCollisionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCollisionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCollisionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCollisionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCollisionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactImpulses_b);
				pCVar2 = typeof(CustomLogicCollisionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCollisionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001E82")]
		[Address(RVA = "0x58F68E0", Offset = "0x58F58E0", VA = "0x58F68E0")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactSeparations()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactSeparations): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCollisionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCollisionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545dee == false) {
				Il2CppMethodInitialized_07545dee = true;
				uVar1 = (typeof(CustomLogicCollisionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCollisionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCollisionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCollisionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCollisionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCollisionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCollisionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactSeparations);
				pCVar2 = typeof(CustomLogicCollisionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCollisionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x4001695")]
	[FieldOffset(Offset = "0x30")]
	public Collision collision;

	[Token(Token = "0x17000359")]
	public CustomLogicColliderBuiltin Collider
	{
		[Token(Token = "0x6001E6A")]
		[Address(RVA = "0x58F5670", Offset = "0x58F4670", VA = "0x58F5670")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin$$get_Collider): 1 lines keep C-only constructs
			Collision __this_00;
			Object[] parameters;
			Collider obj;
			object pIVar1;
			CustomLogicColliderBuiltin __this_01;

			parameters = (Object[])new object[1];
			__this_00 = this.collision;
			if (__this_00 != null) {
				obj = __this_00.collider;
				if (parameters != null) {
					if (obj != null) {
						pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((parameters.obj).klass)._1).element_class);
						if (pIVar1 == null) {
							pIVar1 = new ArrayTypeMismatchException();
							throw pIVar1;
						}
					}
					if ((int)parameters.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[0] = (object)obj;
					__this_01 = new CustomLogicColliderBuiltin(parameters);
					return __this_01;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700035A")]
	public CustomLogicVector3Builtin Impulse
	{
		[Token(Token = "0x6001E6B")]
		[Address(RVA = "0x58F5750", Offset = "0x58F4750", VA = "0x58F5750")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin$$get_Impulse): clean
			Collision __this_00;
			CustomLogicVector3Builtin __this_01;
			Vector3 UVar1;

			__this_00 = this.collision;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			UVar1 = __this_00.impulse;
			__this_01 = new CustomLogicVector3Builtin();
			__this_01.Value.x = UVar1.x;
			__this_01.Value.y = UVar1.y;
			__this_01.Value.z = UVar1.z;
			return __this_01;
		}
	}

	[Token(Token = "0x1700035B")]
	public CustomLogicVector3Builtin RelativeVelocity
	{
		[Token(Token = "0x6001E6C")]
		[Address(RVA = "0x58F5810", Offset = "0x58F4810", VA = "0x58F5810")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin$$get_RelativeVelocity): clean
			Collision __this_00;
			CustomLogicVector3Builtin __this_01;
			Vector3 UVar1;

			__this_00 = this.collision;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			UVar1 = __this_00.relativeVelocity;
			__this_01 = new CustomLogicVector3Builtin();
			__this_01.Value.x = UVar1.x;
			__this_01.Value.y = UVar1.y;
			__this_01.Value.z = UVar1.z;
			return __this_01;
		}
	}

	[Token(Token = "0x1700035C")]
	public int ContactCount
	{
		[Token(Token = "0x6001E6D")]
		[Address(RVA = "0x58F58D0", Offset = "0x58F48D0", VA = "0x58F58D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin$$get_ContactCount): clean
			Collision __this_00;
			int iVar1;

			__this_00 = this.collision;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
	}

	[Token(Token = "0x1700035D")]
	public override string ClassName
	{
		[Token(Token = "0x6001E75")]
		[Address(RVA = "0x58F5DC0", Offset = "0x58F4DC0", VA = "0x58F5DC0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin$$get_ClassName): clean
			return "Collision";
		}
	}

	[Token(Token = "0x1700035E")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001E76")]
		[Address(RVA = "0x58F5DF0", Offset = "0x58F4DF0", VA = "0x58F5DF0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700035F")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001E77")]
		[Address(RVA = "0x58F5E00", Offset = "0x58F4E00", VA = "0x58F5E00", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x17000360")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001E78")]
		[Address(RVA = "0x58F5E10", Offset = "0x58F4E10", VA = "0x58F5E10", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001E68")]
	[Address(RVA = "0x58F5520", Offset = "0x58F4520", VA = "0x58F5520")]
	public CustomLogicCollisionBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07545ddd == false) {
			Il2CppMethodInitialized_07545ddd = true;
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

	[Token(Token = "0x6001E69")]
	[Address(RVA = "0x58F5590", Offset = "0x58F4590", VA = "0x58F5590")]
	public CustomLogicCollisionBuiltin(object[] parameters)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin$$.ctor): 2 lines keep C-only constructs
		byte bVar1;
		Collision pUVar2;
		Collision pUVar3;

		base();
		pUVar3 = typeof(Collision);
		if (parameters == null) {
			throw new NullReferenceException();
		}
		if ((int)parameters.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pUVar2 = (Collision)parameters[0];
		if (pUVar2 == null) {
			this.collision = null;
	label_059f5652: ;
			return;
		}
		bVar1 = (typeof(Collision)._2).typeHierarchyDepth;
		if ((bVar1 <= (((Il2CppClass)pUVar2.klass)._2).typeHierarchyDepth) &&((((Il2CppClass)pUVar2.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(Collision))) {
			this.collision = pUVar2;
			if ((bVar1 <= (((Il2CppClass)pUVar2.klass)._2).typeHierarchyDepth) &&((((Il2CppClass)pUVar2.klass)._2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass)pUVar3)) goto label_059f5652;
		}
		throw new InvalidCastException();
	}

	[Token(Token = "0x6001E6E")]
	[Address(RVA = "0x58F58F0", Offset = "0x58F48F0", VA = "0x58F58F0")]
	public CustomLogicVector3Builtin GetContactPoint(int index)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin$$GetContactPoint): clean
		Collision __this_00;
		CustomLogicVector3Builtin __this_01;
		Vector3 UVar1;
		ContactPoint UStack_78;
		ContactPoint UStack_40;

		__this_00 = this.collision;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UStack_40 = __this_00.GetContact(index);
		UStack_78.m_Impulse.z = UStack_40.m_Impulse.z;
		UStack_78.m_ThisColliderEntityId.m_Data = UStack_40.m_ThisColliderEntityId.m_Data;
		UStack_78.m_OtherColliderEntityId.m_Data = UStack_40.m_OtherColliderEntityId.m_Data;
		UStack_78.m_Separation = UStack_40.m_Separation;
		UStack_78.m_Normal.y = UStack_40.m_Normal.y;
		UStack_78.m_Normal.z = UStack_40.m_Normal.z;
		UStack_78.m_Impulse.x = UStack_40.m_Impulse.x;
		UStack_78.m_Impulse.y = UStack_40.m_Impulse.y;
		UStack_78.m_Point.x = UStack_40.m_Point.x;
		UStack_78.m_Point.y = UStack_40.m_Point.y;
		UStack_78.m_Point.z = UStack_40.m_Point.z;
		UStack_78.m_Normal.x = UStack_40.m_Normal.x;
		UVar1 = UStack_78.point;
		__this_01 = new CustomLogicVector3Builtin();
		__this_01.Value.x = UVar1.x;
		__this_01.Value.y = UVar1.y;
		__this_01.Value.z = UVar1.z;
		return __this_01;
	}

	[Token(Token = "0x6001E6F")]
	[Address(RVA = "0x58F59E0", Offset = "0x58F49E0", VA = "0x58F59E0")]
	public CustomLogicVector3Builtin GetContactNorms(int index)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin$$GetContactNorms): clean
		Collision __this_00;
		CustomLogicVector3Builtin __this_01;
		Vector3 UVar1;
		ContactPoint UStack_78;
		ContactPoint UStack_40;

		__this_00 = this.collision;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UStack_40 = __this_00.GetContact(index);
		UStack_78.m_Impulse.z = UStack_40.m_Impulse.z;
		UStack_78.m_ThisColliderEntityId.m_Data = UStack_40.m_ThisColliderEntityId.m_Data;
		UStack_78.m_OtherColliderEntityId.m_Data = UStack_40.m_OtherColliderEntityId.m_Data;
		UStack_78.m_Separation = UStack_40.m_Separation;
		UStack_78.m_Normal.y = UStack_40.m_Normal.y;
		UStack_78.m_Normal.z = UStack_40.m_Normal.z;
		UStack_78.m_Impulse.x = UStack_40.m_Impulse.x;
		UStack_78.m_Impulse.y = UStack_40.m_Impulse.y;
		UStack_78.m_Point.x = UStack_40.m_Point.x;
		UStack_78.m_Point.y = UStack_40.m_Point.y;
		UStack_78.m_Point.z = UStack_40.m_Point.z;
		UStack_78.m_Normal.x = UStack_40.m_Normal.x;
		UVar1 = UStack_78.normal;
		__this_01 = new CustomLogicVector3Builtin();
		__this_01.Value.x = UVar1.x;
		__this_01.Value.y = UVar1.y;
		__this_01.Value.z = UVar1.z;
		return __this_01;
	}

	[Token(Token = "0x6001E70")]
	[Address(RVA = "0x58F5AD0", Offset = "0x58F4AD0", VA = "0x58F5AD0")]
	public CustomLogicVector3Builtin GetContactImpulses(int index)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin$$GetContactImpulses): clean
		Collision __this_00;
		CustomLogicVector3Builtin __this_01;
		Vector3 UVar1;
		ContactPoint UStack_78;
		ContactPoint UStack_40;

		__this_00 = this.collision;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UStack_40 = __this_00.GetContact(index);
		UStack_78.m_Impulse.z = UStack_40.m_Impulse.z;
		UStack_78.m_ThisColliderEntityId.m_Data = UStack_40.m_ThisColliderEntityId.m_Data;
		UStack_78.m_OtherColliderEntityId.m_Data = UStack_40.m_OtherColliderEntityId.m_Data;
		UStack_78.m_Separation = UStack_40.m_Separation;
		UStack_78.m_Normal.y = UStack_40.m_Normal.y;
		UStack_78.m_Normal.z = UStack_40.m_Normal.z;
		UStack_78.m_Impulse.x = UStack_40.m_Impulse.x;
		UStack_78.m_Impulse.y = UStack_40.m_Impulse.y;
		UStack_78.m_Point.x = UStack_40.m_Point.x;
		UStack_78.m_Point.y = UStack_40.m_Point.y;
		UStack_78.m_Point.z = UStack_40.m_Point.z;
		UStack_78.m_Normal.x = UStack_40.m_Normal.x;
		UVar1 = UStack_78.impulse;
		__this_01 = new CustomLogicVector3Builtin();
		__this_01.Value.x = UVar1.x;
		__this_01.Value.y = UVar1.y;
		__this_01.Value.z = UVar1.z;
		return __this_01;
	}

	[Token(Token = "0x6001E71")]
	[Address(RVA = "0x58F5BC0", Offset = "0x58F4BC0", VA = "0x58F5BC0")]
	public CustomLogicVector3Builtin GetContactSeparations(int index)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin$$GetContactSeparations): clean
		Collision __this_00;
		CustomLogicVector3Builtin __this_01;
		float fVar1;
		ContactPoint UStack_78;
		ContactPoint UStack_40;

		__this_00 = this.collision;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UStack_40 = __this_00.GetContact(index);
		UStack_78.m_Impulse.z = UStack_40.m_Impulse.z;
		UStack_78.m_ThisColliderEntityId.m_Data = UStack_40.m_ThisColliderEntityId.m_Data;
		UStack_78.m_OtherColliderEntityId.m_Data = UStack_40.m_OtherColliderEntityId.m_Data;
		UStack_78.m_Separation = UStack_40.m_Separation;
		UStack_78.m_Normal.y = UStack_40.m_Normal.y;
		UStack_78.m_Normal.z = UStack_40.m_Normal.z;
		UStack_78.m_Impulse.x = UStack_40.m_Impulse.x;
		UStack_78.m_Impulse.y = UStack_40.m_Impulse.y;
		UStack_78.m_Point.x = UStack_40.m_Point.x;
		UStack_78.m_Point.y = UStack_40.m_Point.y;
		UStack_78.m_Point.z = UStack_40.m_Point.z;
		UStack_78.m_Normal.x = UStack_40.m_Normal.x;
		fVar1 = UStack_78.separation;
		__this_01 = new CustomLogicVector3Builtin();
		__this_01.Value.x = fVar1;
		__this_01.Value.y = fVar1;
		__this_01.Value.z = fVar1;
		return __this_01;
	}

	[Token(Token = "0x6001E72")]
	[Address(RVA = "0x58F5CB0", Offset = "0x58F4CB0", VA = "0x58F5CB0", Slot = "11")]
	public object __Copy__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin$$__Copy__): 1 lines keep C-only constructs
		Collision obj;
		Object[] parameters;
		object pIVar1;
		CustomLogicColliderBuiltin __this_00;

		parameters = (Object[])new object[1];
		if (parameters == null) {
			throw new NullReferenceException();
		}
		obj = this.collision;
		if (obj != null) {
			pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((parameters.obj).klass)._1).element_class);
			if (pIVar1 == null) {
				pIVar1 = new ArrayTypeMismatchException();
				throw pIVar1;
			}
		}
		if ((int)parameters.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		parameters[0] = (object)obj;
		__this_00 = new CustomLogicColliderBuiltin(parameters);
		return (object)__this_00;
	}

	[Token(Token = "0x6001E73")]
	[Address(RVA = "0x58F5D80", Offset = "0x58F4D80", VA = "0x58F5D80", Slot = "12")]
	public bool __Eq__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin$$__Eq__): clean
		return self == other;
	}

	[Token(Token = "0x6001E74")]
	[Address(RVA = "0x58F5D90", Offset = "0x58F4D90", VA = "0x58F5D90", Slot = "13")]
	public int __Hash__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c (CustomLogic.CustomLogicCollisionBuiltin$$__Hash__): 3 lines keep C-only constructs
		Collision pUVar1;
		Il2CppMethodPointer vtableDispatch;
		int iVar2;
		ulong in_RDX;

		pUVar1 = this.collision;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (pUVar1.klass.vtable)._2_GetHashCode.methodPtr;
		iVar2 = (*vtableDispatch)(pUVar1,(pUVar1.klass.vtable)._2_GetHashCode.method,in_RDX,vtableDispatch);
		return iVar2;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c.

	// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Collider");
		__this.Add((Il2CppObject *)"Impulse");
		__this.Add((Il2CppObject *)"RelativeVelocity");
		__this.Add((Il2CppObject *)"ContactCount");
		__this.Add((Il2CppObject *)"GetContactPoint");
		__this.Add((Il2CppObject *)"GetContactNorms");
		__this.Add((Il2CppObject *)"GetContactImpulses");
		__this.Add((Il2CppObject *)"GetContactSeparations");
		CustomLogicCollisionBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__Collider>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Collider_g____getter_2_0(CustomLogicCollisionBuiltin __i)
	{
		CustomLogicColliderBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Collider;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__Impulse>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Impulse_g____getter_3_0(CustomLogicCollisionBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Impulse;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__RelativeVelocity>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__RelativeVelocity_g____getter_4_0(CustomLogicCollisionBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.RelativeVelocity;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__ContactCount>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__ContactCount_g____getter_5_0(CustomLogicCollisionBuiltin __i)
	{
		Collision __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.collision, __this == null)) {
			throw new NullReferenceException();
		}
		__this.contactCount;
		return pIVar1;
	}

	// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicCollisionBuiltin.Bindings.c();
		CustomLogicCollisionBuiltin.Bindings.c.__9 =(CustomLogicCollisionBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactPoint>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__GetContactPoint_b__6_0(CustomLogicCollisionBuiltin __c, Object[] __a)
	{
		object obj;
		int index;
		CustomLogicVector3Builtin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			index = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				pCVar1 = __c.GetContactPoint(index);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactNorms>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__GetContactNorms_b__7_0(CustomLogicCollisionBuiltin __c, Object[] __a)
	{
		object obj;
		int index;
		CustomLogicVector3Builtin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			index = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				pCVar1 = __c.GetContactNorms(index);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactImpulses>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__GetContactImpulses_b__8_0(CustomLogicCollisionBuiltin __c, Object[] __a)
	{
		object obj;
		int index;
		CustomLogicVector3Builtin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			index = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				pCVar1 = __c.GetContactImpulses(index);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactSeparations>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__GetContactSeparations_b__9_0(CustomLogicCollisionBuiltin __c, Object[] __a)
	{
		object obj;
		int index;
		CustomLogicVector3Builtin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			index = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				pCVar1 = __c.GetContactSeparations(index);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}
}
