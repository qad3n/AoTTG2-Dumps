// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicPrefabBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;

namespace CustomLogic;

[Token(Token = "0x20004CE")]
[CompilerGenerated]
internal class CustomLogicPrefabBuiltin : BuiltinClassInstance, ICustomLogicToString
{
	[Token(Token = "0x20004CF")]
	public static class Factory
	{
		[Token(Token = "0x60024AA")]
		[Address(RVA = "0x593C710", Offset = "0x593B710", VA = "0x593C710")]
		public static CustomLogicPrefabBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			object pIVar1;
			bool clearComponents;
			String pSVar2;
			CustomLogicPrefabBuiltin __this;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this_00;
			MethodInfo lastManagedFrame;
			int local_24;

			if (args == null) {
				throw new NullReferenceException();
			}
			if (args.Length == 0) {
				__this = new CustomLogicPrefabBuiltin();
			}
			else {
				if ((int)args.Length != 2) {
					pSVar2 = local_24.ToString();
					str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPrefabBuiltin constructor found that takes ");
					str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
					pSVar2 = String.Concat(str0, pSVar2, str2);
					klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
					__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
					__this_00 = new ArgumentException(pSVar2);
					lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Factory_CreateInstance);
					throw (object)__this_00;
				}
				pIVar1 = args[0];
				pSVar2 = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
				if ((int)args.Length < 2) {
					clearComponents = false;
				}
				else {
					pIVar1 = args[1];
					clearComponents = CustomLogicEvaluator.ConvertTo<bool>(pIVar1) ;
				}
				__this = new CustomLogicPrefabBuiltin(pSVar2, clearComponents);
			}
			return __this;
		}
	}

	[Token(Token = "0x20004D0")]
	public static class Bindings
	{
		[Token(Token = "0x4001775")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60024AB")]
		[Address(RVA = "0x593C8B0", Offset = "0x593B8B0", VA = "0x593C8B0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicPrefabBuiltin> pCVar3;
			CLMethodBinding<CustomLogicPrefabBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x28528e12) {
				if (uVar2 < 0x18a43c5c) {
					if (uVar2 == 0x232777f) {
						bVar1 = (name == "Rotation");
						if (bVar1) {
							if ((typeof(CustomLogicPrefabBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__Rotation();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__Rotation();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xfe07306) {
						bVar1 = (name == "Name");
						if (bVar1) {
							if ((typeof(CustomLogicPrefabBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__Name();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__Name();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x18a43c5b) {
						bVar1 = (name == "Static");
						if (bVar1) {
							if ((typeof(CustomLogicPrefabBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__Static();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__Static();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x1f89134f) {
					bVar1 = (name == "Active");
					if (bVar1) {
						if ((typeof(CustomLogicPrefabBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__Active();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__Active();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x23922d03) {
					bVar1 = (name == "AssetType");
					if (bVar1) {
						if ((typeof(CustomLogicPrefabBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__AssetType();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__AssetType();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x28528e11) {
					bVar1 = (name == "Scale");
					if (bVar1) {
						if ((typeof(CustomLogicPrefabBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__Scale();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__Scale();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x6f79efb7) {
				if (uVar2 == 0x384cf68a) {
					bVar1 = (name == "CollideMode");
					if (bVar1) {
						if ((typeof(CustomLogicPrefabBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__CollideMode();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__CollideMode();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x592a4941) {
					bVar1 = (name == "Visible");
					if (bVar1) {
						if ((typeof(CustomLogicPrefabBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__Visible();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__Visible();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x6f79efb6) {
					bVar1 = (name == "ClearComponents");
					if (bVar1) {
						if ((typeof(CustomLogicPrefabBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicPrefabBuiltin.Bindings.__CreateMethodBinding__ClearComponents();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicPrefabBuiltin.Bindings.__CreateMethodBinding__ClearComponents();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0x94e7d8c2) {
				if (uVar2 == 0x829f123b) {
					bVar1 = (name == "Asset");
					if (bVar1) {
						pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__Asset();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x94e7d8c1) {
					bVar1 = (name == "CollideWith");
					if (bVar1) {
						pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__CollideWith();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xa3dd2697) {
				bVar1 = (name == "PhysicsMaterial");
				if (bVar1) {
					pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__PhysicsMaterial();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xe27f342a) {
				bVar1 = (name == "Position");
				if (bVar1) {
					pCVar3 = CustomLogicPrefabBuiltin.Bindings.__CreatePropertyBinding__Position();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPrefabBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x60024AC")]
		[Address(RVA = "0x593CE70", Offset = "0x593BE70", VA = "0x593CE70")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__AssetType()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__AssetType): 4 lines keep C-only constructs
			Func<CustomLogicPrefabBuiltin, object> __this;
			Action<CustomLogicPrefabBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPrefabBuiltin> __this_01;

			__this = new Func<CustomLogicPrefabBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__AssetType_g____getter_2_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicPrefabBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__AssetType_g____setter_2_1);
			__this_01 = new CLPropertyBinding<CustomLogicPrefabBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60024AD")]
		[Address(RVA = "0x593CF50", Offset = "0x593BF50", VA = "0x593CF50")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Asset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Asset): 4 lines keep C-only constructs
			Func<CustomLogicPrefabBuiltin, object> __this;
			Action<CustomLogicPrefabBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPrefabBuiltin> __this_01;

			__this = new Func<CustomLogicPrefabBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Asset_g____getter_3_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicPrefabBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Asset_g____setter_3_1);
			__this_01 = new CLPropertyBinding<CustomLogicPrefabBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60024AE")]
		[Address(RVA = "0x593D030", Offset = "0x593C030", VA = "0x593D030")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Active()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Active): 4 lines keep C-only constructs
			Func<CustomLogicPrefabBuiltin, object> __this;
			Action<CustomLogicPrefabBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPrefabBuiltin> __this_01;

			__this = new Func<CustomLogicPrefabBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Active_g____getter_4_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicPrefabBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Active_g____setter_4_1);
			__this_01 = new CLPropertyBinding<CustomLogicPrefabBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60024AF")]
		[Address(RVA = "0x593D110", Offset = "0x593C110", VA = "0x593D110")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Static()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Static): 4 lines keep C-only constructs
			Func<CustomLogicPrefabBuiltin, object> __this;
			Action<CustomLogicPrefabBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPrefabBuiltin> __this_01;

			__this = new Func<CustomLogicPrefabBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Static_g____getter_5_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicPrefabBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Static_g____setter_5_1);
			__this_01 = new CLPropertyBinding<CustomLogicPrefabBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60024B0")]
		[Address(RVA = "0x593D1F0", Offset = "0x593C1F0", VA = "0x593D1F0")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Visible()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Visible): 4 lines keep C-only constructs
			Func<CustomLogicPrefabBuiltin, object> __this;
			Action<CustomLogicPrefabBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPrefabBuiltin> __this_01;

			__this = new Func<CustomLogicPrefabBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Visible_g____getter_6_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicPrefabBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Visible_g____setter_6_1);
			__this_01 = new CLPropertyBinding<CustomLogicPrefabBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60024B1")]
		[Address(RVA = "0x593D2D0", Offset = "0x593C2D0", VA = "0x593D2D0")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Name()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Name): 4 lines keep C-only constructs
			Func<CustomLogicPrefabBuiltin, object> __this;
			Action<CustomLogicPrefabBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPrefabBuiltin> __this_01;

			__this = new Func<CustomLogicPrefabBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_7_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicPrefabBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Name_g____setter_7_1);
			__this_01 = new CLPropertyBinding<CustomLogicPrefabBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60024B2")]
		[Address(RVA = "0x593D3B0", Offset = "0x593C3B0", VA = "0x593D3B0")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Position()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Position): 4 lines keep C-only constructs
			Func<CustomLogicPrefabBuiltin, object> __this;
			Action<CustomLogicPrefabBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPrefabBuiltin> __this_01;

			__this = new Func<CustomLogicPrefabBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_8_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicPrefabBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_8_1);
			__this_01 = new CLPropertyBinding<CustomLogicPrefabBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60024B3")]
		[Address(RVA = "0x593D490", Offset = "0x593C490", VA = "0x593D490")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Rotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Rotation): 4 lines keep C-only constructs
			Func<CustomLogicPrefabBuiltin, object> __this;
			Action<CustomLogicPrefabBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPrefabBuiltin> __this_01;

			__this = new Func<CustomLogicPrefabBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_9_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicPrefabBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_9_1);
			__this_01 = new CLPropertyBinding<CustomLogicPrefabBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60024B4")]
		[Address(RVA = "0x593D570", Offset = "0x593C570", VA = "0x593D570")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__Scale()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Scale): 4 lines keep C-only constructs
			Func<CustomLogicPrefabBuiltin, object> __this;
			Action<CustomLogicPrefabBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPrefabBuiltin> __this_01;

			__this = new Func<CustomLogicPrefabBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Scale_g____getter_10_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicPrefabBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Scale_g____setter_10_1);
			__this_01 = new CLPropertyBinding<CustomLogicPrefabBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60024B5")]
		[Address(RVA = "0x593D650", Offset = "0x593C650", VA = "0x593D650")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__CollideMode()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__CollideMode): 4 lines keep C-only constructs
			Func<CustomLogicPrefabBuiltin, object> __this;
			Action<CustomLogicPrefabBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPrefabBuiltin> __this_01;

			__this = new Func<CustomLogicPrefabBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideMode_g____getter_1);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicPrefabBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideMode_g____setter_1);
			__this_01 = new CLPropertyBinding<CustomLogicPrefabBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60024B6")]
		[Address(RVA = "0x593D730", Offset = "0x593C730", VA = "0x593D730")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__CollideWith()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__CollideWith): 4 lines keep C-only constructs
			Func<CustomLogicPrefabBuiltin, object> __this;
			Action<CustomLogicPrefabBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPrefabBuiltin> __this_01;

			__this = new Func<CustomLogicPrefabBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideWith_g____getter_1);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicPrefabBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideWith_g____setter_1);
			__this_01 = new CLPropertyBinding<CustomLogicPrefabBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60024B7")]
		[Address(RVA = "0x593D810", Offset = "0x593C810", VA = "0x593D810")]
		public static CLPropertyBinding<CustomLogicPrefabBuiltin> __CreatePropertyBinding__PhysicsMaterial()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__PhysicsMaterial): 4 lines keep C-only constructs
			Func<CustomLogicPrefabBuiltin, object> __this;
			Action<CustomLogicPrefabBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPrefabBuiltin> __this_01;

			__this = new Func<CustomLogicPrefabBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__PhysicsMaterial_g____gett);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicPrefabBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__PhysicsMaterial_g____sett);
			__this_01 = new CLPropertyBinding<CustomLogicPrefabBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60024B8")]
		[Address(RVA = "0x593D8F0", Offset = "0x593C8F0", VA = "0x593D8F0")]
		public static CLMethodBinding<CustomLogicPrefabBuiltin> __CreateMethodBinding__ClearComponents()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreateMethodBinding__ClearComponents): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPrefabBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPrefabBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546170 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicPrefabBuiltin>)) ;
				Il2CppMethodInitialized_07546170 = true;
				uVar1 = (typeof(CustomLogicPrefabBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPrefabBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicPrefabBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicPrefabBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__14_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPrefabBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__14_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPrefabBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPrefabBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicPrefabBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c___CreateMethodBinding__ClearComponents_b__14_0);
				pCVar2 = typeof(CustomLogicPrefabBuiltin.Bindings.c).static_fields;
				pCVar2.__9__14_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicPrefabBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x4001773")]
	[FieldOffset(Offset = "0x30")]
	public MapScriptSceneObject Value;

	[Token(Token = "0x4001774")]
	[FieldOffset(Offset = "0x38")]
	public bool PersistsOwnership;

	[Token(Token = "0x17000477")]
	public string AssetType
	{
		[Token(Token = "0x600248B")]
		[Address(RVA = "0x593BF10", Offset = "0x593AF10", VA = "0x593BF10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$get_AssetType): clean
			MapScriptSceneObject pMVar1;

			pMVar1 = this.Value;
			if (pMVar1 == null) {
				throw new NullReferenceException();
			}
			return pMVar1.Type;
		}
		[Token(Token = "0x600248C")]
		[Address(RVA = "0x593BF30", Offset = "0x593AF30", VA = "0x593BF30")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$set_AssetType): clean
			MapScriptSceneObject pMVar1;
			String pSVar2;

			pMVar1 = this.Value;
			if (pMVar1 != null) {
				pMVar1.Type = value;
				pMVar1 = this.Value;
				if (pMVar1 != null) {
					pSVar2 = pMVar1.Serialize();
					pMVar1 = this.Value;
					if (pMVar1 != null) {
						pMVar1.Deserialize(pSVar2);
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000478")]
	public string Asset
	{
		[Token(Token = "0x600248D")]
		[Address(RVA = "0x593BFE0", Offset = "0x593AFE0", VA = "0x593BFE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$get_Asset): clean
			MapScriptSceneObject pMVar1;

			pMVar1 = this.Value;
			if (pMVar1 == null) {
				throw new NullReferenceException();
			}
			return pMVar1.Asset;
		}
		[Token(Token = "0x600248E")]
		[Address(RVA = "0x593C000", Offset = "0x593B000", VA = "0x593C000")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$set_Asset): clean
			MapScriptSceneObject pMVar1;
			String pSVar2;

			pMVar1 = this.Value;
			if (pMVar1 != null) {
				pMVar1.Asset = value;
				pMVar1 = this.Value;
				if (pMVar1 != null) {
					pSVar2 = pMVar1.Serialize();
					pMVar1 = this.Value;
					if (pMVar1 != null) {
						pMVar1.Deserialize(pSVar2);
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000479")]
	public bool Active
	{
		[Token(Token = "0x600248F")]
		[Address(RVA = "0x593C060", Offset = "0x593B060", VA = "0x593C060")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$get_Active): clean
			MapScriptSceneObject pMVar1;

			pMVar1 = this.Value;
			if (pMVar1 == null) {
				throw new NullReferenceException();
			}
			return pMVar1.Active;
		}
		[Token(Token = "0x6002490")]
		[Address(RVA = "0x593C080", Offset = "0x593B080", VA = "0x593C080")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$set_Active): clean
			MapScriptSceneObject pMVar1;
			String pSVar2;

			pMVar1 = this.Value;
			if (pMVar1 != null) {
				pMVar1.Active = value;
				pSVar2 = pMVar1.Serialize();
				pMVar1 = this.Value;
				if (pMVar1 != null) {
					pMVar1.Deserialize(pSVar2);
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700047A")]
	public bool Static
	{
		[Token(Token = "0x6002491")]
		[Address(RVA = "0x593C0D0", Offset = "0x593B0D0", VA = "0x593C0D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$get_Static): clean
			MapScriptSceneObject pMVar1;

			pMVar1 = this.Value;
			if (pMVar1 == null) {
				throw new NullReferenceException();
			}
			return pMVar1.Static;
		}
		[Token(Token = "0x6002492")]
		[Address(RVA = "0x593C0F0", Offset = "0x593B0F0", VA = "0x593C0F0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$set_Static): clean
			MapScriptSceneObject pMVar1;
			String pSVar2;

			pMVar1 = this.Value;
			if (pMVar1 != null) {
				pMVar1.Static = value;
				pSVar2 = pMVar1.Serialize();
				pMVar1 = this.Value;
				if (pMVar1 != null) {
					pMVar1.Deserialize(pSVar2);
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700047B")]
	public bool Visible
	{
		[Token(Token = "0x6002493")]
		[Address(RVA = "0x593C140", Offset = "0x593B140", VA = "0x593C140")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$get_Visible): clean
			MapScriptSceneObject pMVar1;

			pMVar1 = this.Value;
			if (pMVar1 == null) {
				throw new NullReferenceException();
			}
			return pMVar1.Visible;
		}
		[Token(Token = "0x6002494")]
		[Address(RVA = "0x593C160", Offset = "0x593B160", VA = "0x593C160")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$set_Visible): clean
			MapScriptSceneObject pMVar1;
			String pSVar2;

			pMVar1 = this.Value;
			if (pMVar1 != null) {
				pMVar1.Visible = value;
				pSVar2 = pMVar1.Serialize();
				pMVar1 = this.Value;
				if (pMVar1 != null) {
					pMVar1.Deserialize(pSVar2);
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700047C")]
	public string Name
	{
		[Token(Token = "0x6002495")]
		[Address(RVA = "0x593C1B0", Offset = "0x593B1B0", VA = "0x593C1B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$get_Name): clean
			MapScriptSceneObject pMVar1;

			pMVar1 = this.Value;
			if (pMVar1 == null) {
				throw new NullReferenceException();
			}
			return pMVar1.Name;
		}
		[Token(Token = "0x6002496")]
		[Address(RVA = "0x593C1D0", Offset = "0x593B1D0", VA = "0x593C1D0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$set_Name): clean
			MapScriptSceneObject pMVar1;
			String pSVar2;

			pMVar1 = this.Value;
			if (pMVar1 != null) {
				pMVar1.Name = value;
				pMVar1 = this.Value;
				if (pMVar1 != null) {
					pSVar2 = pMVar1.Serialize();
					pMVar1 = this.Value;
					if (pMVar1 != null) {
						pMVar1.Deserialize(pSVar2);
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700047D")]
	public CustomLogicVector3Builtin Position
	{
		[Token(Token = "0x6002497")]
		[Address(RVA = "0x593C230", Offset = "0x593B230", VA = "0x593C230")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$get_Position): clean
			MapScriptSceneObject __this_00;
			CustomLogicVector3Builtin __this_01;
			Vector3 value;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			value = __this_00.GetPosition();
			__this_01 = new CustomLogicVector3Builtin(value);
			return __this_01;
		}
		[Token(Token = "0x6002498")]
		[Address(RVA = "0x593C2B0", Offset = "0x593B2B0", VA = "0x593C2B0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$set_Position): clean
			MapScriptSceneObject pMVar1;
			String pSVar2;

			if ((value != null) &&(pMVar1 = this.Value, pMVar1 != null)) {
				pMVar1.SetPosition((Vector3)value.Value);
				pMVar1 = this.Value;
				if (pMVar1 != null) {
					pSVar2 = pMVar1.Serialize();
					pMVar1 = this.Value;
					if (pMVar1 != null) {
						pMVar1.Deserialize(pSVar2);
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700047E")]
	public CustomLogicVector3Builtin Rotation
	{
		[Token(Token = "0x6002499")]
		[Address(RVA = "0x593C320", Offset = "0x593B320", VA = "0x593C320")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$get_Rotation): clean
			MapScriptSceneObject __this_00;
			CustomLogicVector3Builtin __this_01;
			Vector3 value;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			value = __this_00.GetRotation();
			__this_01 = new CustomLogicVector3Builtin(value);
			return __this_01;
		}
		[Token(Token = "0x600249A")]
		[Address(RVA = "0x593C3A0", Offset = "0x593B3A0", VA = "0x593C3A0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$set_Rotation): clean
			MapScriptSceneObject pMVar1;
			String pSVar2;

			if ((value != null) &&(pMVar1 = this.Value, pMVar1 != null)) {
				pMVar1.SetRotation((Vector3)value.Value);
				pMVar1 = this.Value;
				if (pMVar1 != null) {
					pSVar2 = pMVar1.Serialize();
					pMVar1 = this.Value;
					if (pMVar1 != null) {
						pMVar1.Deserialize(pSVar2);
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700047F")]
	public CustomLogicVector3Builtin Scale
	{
		[Token(Token = "0x600249B")]
		[Address(RVA = "0x593C410", Offset = "0x593B410", VA = "0x593C410")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$get_Scale): clean
			MapScriptSceneObject __this_00;
			CustomLogicVector3Builtin __this_01;
			Vector3 value;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			value = __this_00.GetScale();
			__this_01 = new CustomLogicVector3Builtin(value);
			return __this_01;
		}
		[Token(Token = "0x600249C")]
		[Address(RVA = "0x593C490", Offset = "0x593B490", VA = "0x593C490")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$set_Scale): clean
			MapScriptSceneObject pMVar1;
			String pSVar2;

			if ((value != null) &&(pMVar1 = this.Value, pMVar1 != null)) {
				pMVar1.SetScale((Vector3)value.Value);
				pMVar1 = this.Value;
				if (pMVar1 != null) {
					pSVar2 = pMVar1.Serialize();
					pMVar1 = this.Value;
					if (pMVar1 != null) {
						pMVar1.Deserialize(pSVar2);
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000480")]
	public string CollideMode
	{
		[Token(Token = "0x600249D")]
		[Address(RVA = "0x593C500", Offset = "0x593B500", VA = "0x593C500")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$get_CollideMode): clean
			MapScriptSceneObject pMVar1;

			pMVar1 = this.Value;
			if (pMVar1 == null) {
				throw new NullReferenceException();
			}
			return pMVar1.CollideMode;
		}
		[Token(Token = "0x600249E")]
		[Address(RVA = "0x593C520", Offset = "0x593B520", VA = "0x593C520")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$set_CollideMode): clean
			MapScriptSceneObject pMVar1;
			String pSVar2;

			pMVar1 = this.Value;
			if (pMVar1 != null) {
				pMVar1.CollideMode = value;
				pMVar1 = this.Value;
				if (pMVar1 != null) {
					pSVar2 = pMVar1.Serialize();
					pMVar1 = this.Value;
					if (pMVar1 != null) {
						pMVar1.Deserialize(pSVar2);
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000481")]
	public string CollideWith
	{
		[Token(Token = "0x600249F")]
		[Address(RVA = "0x593C580", Offset = "0x593B580", VA = "0x593C580")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$get_CollideWith): clean
			MapScriptSceneObject pMVar1;

			pMVar1 = this.Value;
			if (pMVar1 == null) {
				throw new NullReferenceException();
			}
			return pMVar1.CollideWith;
		}
		[Token(Token = "0x60024A0")]
		[Address(RVA = "0x593C5A0", Offset = "0x593B5A0", VA = "0x593C5A0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$set_CollideWith): clean
			MapScriptSceneObject pMVar1;
			String pSVar2;

			pMVar1 = this.Value;
			if (pMVar1 != null) {
				pMVar1.CollideWith = value;
				pMVar1 = this.Value;
				if (pMVar1 != null) {
					pSVar2 = pMVar1.Serialize();
					pMVar1 = this.Value;
					if (pMVar1 != null) {
						pMVar1.Deserialize(pSVar2);
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000482")]
	public string PhysicsMaterial
	{
		[Token(Token = "0x60024A1")]
		[Address(RVA = "0x593C600", Offset = "0x593B600", VA = "0x593C600")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$get_PhysicsMaterial): clean
			MapScriptSceneObject pMVar1;

			pMVar1 = this.Value;
			if (pMVar1 == null) {
				throw new NullReferenceException();
			}
			return pMVar1.PhysicsMaterial;
		}
		[Token(Token = "0x60024A2")]
		[Address(RVA = "0x593C620", Offset = "0x593B620", VA = "0x593C620")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$set_PhysicsMaterial): clean
			MapScriptSceneObject pMVar1;
			String pSVar2;

			pMVar1 = this.Value;
			if (pMVar1 != null) {
				pMVar1.PhysicsMaterial = value;
				pMVar1 = this.Value;
				if (pMVar1 != null) {
					pSVar2 = pMVar1.Serialize();
					pMVar1 = this.Value;
					if (pMVar1 != null) {
						pMVar1.Deserialize(pSVar2);
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000483")]
	public override string ClassName
	{
		[Token(Token = "0x60024A6")]
		[Address(RVA = "0x593C6B0", Offset = "0x593B6B0", VA = "0x593C6B0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$get_ClassName): clean
			return "Prefab";
		}
	}

	[Token(Token = "0x17000484")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60024A7")]
		[Address(RVA = "0x593C6E0", Offset = "0x593B6E0", VA = "0x593C6E0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$get_IsAbstract): clean
			return false;
		}
	}

	[Token(Token = "0x17000485")]
	public override bool IsStatic
	{
		[Token(Token = "0x60024A8")]
		[Address(RVA = "0x593C6F0", Offset = "0x593B6F0", VA = "0x593C6F0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x17000486")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60024A9")]
		[Address(RVA = "0x593C700", Offset = "0x593B700", VA = "0x593C700", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002489")]
	[Address(RVA = "0x593BCD0", Offset = "0x593ACD0", VA = "0x593BCD0")]
	public CustomLogicPrefabBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$.ctor): clean
		MapScriptSceneObject __this_00;

		base();
		__this_00 = new MapScriptSceneObject();
		this.Value = __this_00;
		return;
	}

	[Token(Token = "0x600248A")]
	[Address(RVA = "0x593BD60", Offset = "0x593AD60", VA = "0x593BD60")]
	public CustomLogicPrefabBuiltin(string prefabCSV, bool clearComponents = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$.ctor): clean
		String[] value;
		MethodInfo method_00;
		MapScriptSceneObject pMVar1;

		base();
		if (prefabCSV != null) {
			value = prefabCSV.Split(10, 0);
			method_00 = (MethodInfo)String.Join("", value);
			pMVar1 = new MapScriptSceneObject();
			this.Value = pMVar1;
			pMVar1 = this.Value;
			if (pMVar1 != null) {
				pMVar1.Deserialize((String)method_00);
				if (clearComponents) {
					this.ClearComponents();
					return;
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60024A3")]
	[Address(RVA = "0x593BE70", Offset = "0x593AE70", VA = "0x593BE70")]
	public void ClearComponents()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$ClearComponents): 2 lines keep C-only constructs
		int piVar1;
		int length;
		List<MapScriptComponent> pSVar2;
		String pSVar3;
		MapScriptSceneObject pMVar4;

		pMVar4 = this.Value;
		if ((pMVar4 != null) &&(pSVar2 = pMVar4.Components, pSVar2 != null)) {
			piVar1 = &pSVar2._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar2._size;
			pSVar2._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar2._items, 0, length);
				pMVar4 = this.Value;
				if (pMVar4 == null) goto label_05a3befd;
			}
			pSVar3 = pMVar4.Serialize();
			pMVar4 = this.Value;
			if (pMVar4 != null) {
				pMVar4.Deserialize(pSVar3);
				return;
			}
		}
	label_05a3befd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60024A4")]
	[Address(RVA = "0x593BF90", Offset = "0x593AF90", VA = "0x593BF90")]
	public void Refresh()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$Refresh): clean
		MapScriptSceneObject pMVar1;
		String pSVar2;

		pMVar1 = this.Value;
		if (pMVar1 != null) {
			pSVar2 = pMVar1.Serialize();
			pMVar1 = this.Value;
			if (pMVar1 != null) {
				pMVar1.Deserialize(pSVar2);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60024A5")]
	[Address(RVA = "0x593C680", Offset = "0x593B680", VA = "0x593C680", Slot = "11")]
	public string __Str__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c (CustomLogic.CustomLogicPrefabBuiltin$$__Str__): clean
		MapScriptSceneObject pMVar1;
		String pSVar2;

		pMVar1 = this.Value;
		if (pMVar1 == null) {
			throw new NullReferenceException();
		}
		return pSVar2;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicPrefabBuiltin.c.

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"PersistsOwnership");
		__this.Add((Il2CppObject *)"AssetType");
		__this.Add((Il2CppObject *)"Asset");
		__this.Add((Il2CppObject *)"Active");
		__this.Add((Il2CppObject *)"Static");
		__this.Add((Il2CppObject *)"Visible");
		__this.Add((Il2CppObject *)"Name");
		__this.Add((Il2CppObject *)"Position");
		__this.Add((Il2CppObject *)"Rotation");
		__this.Add((Il2CppObject *)"Scale");
		__this.Add((Il2CppObject *)"CollideMode");
		__this.Add((Il2CppObject *)"CollideWith");
		__this.Add((Il2CppObject *)"PhysicsMaterial");
		__this.Add((Il2CppObject *)"ClearComponents");
		CustomLogicPrefabBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__AssetType>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__AssetType_g____getter_2_0(CustomLogicPrefabBuiltin __i)
	{
		MapScriptSceneObject pMVar1;

		if ((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return (object)pMVar1.Type;
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__AssetType>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__AssetType_g____setter_2_1(CustomLogicPrefabBuiltin __i, object __v)
	{
		MapScriptSceneObject pMVar1;
		String pSVar2;

		pSVar2 = CustomLogicEvaluator.ConvertTo<string>(__v);
		if ((__i != null) &&(pMVar1 = __i.Value, pMVar1 != null)) {
			pMVar1.Type = pSVar2;
			pMVar1 = __i.Value;
			if (pMVar1 != null) {
				pSVar2 = pMVar1.Serialize();
				pMVar1 = __i.Value;
				if (pMVar1 != null) {
					pMVar1.Deserialize(pSVar2);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Asset>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Asset_g____getter_3_0(CustomLogicPrefabBuiltin __i)
	{
		MapScriptSceneObject pMVar1;

		if ((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return (object)pMVar1.Asset;
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Asset>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__Asset_g____setter_3_1(CustomLogicPrefabBuiltin __i, object __v)
	{
		MapScriptSceneObject pMVar1;
		String pSVar2;

		pSVar2 = CustomLogicEvaluator.ConvertTo<string>(__v);
		if ((__i != null) &&(pMVar1 = __i.Value, pMVar1 != null)) {
			pMVar1.Asset = pSVar2;
			pMVar1 = __i.Value;
			if (pMVar1 != null) {
				pSVar2 = pMVar1.Serialize();
				pMVar1 = __i.Value;
				if (pMVar1 != null) {
					pMVar1.Deserialize(pSVar2);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Active>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Active_g____getter_4_0(CustomLogicPrefabBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i.Value == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Active>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__Active_g____setter_4_1(CustomLogicPrefabBuiltin __i, object __v)
	{
		MapScriptSceneObject pMVar1;
		bool bVar2;
		String pSVar3;

		bVar2 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i != null) &&(pMVar1 = __i.Value, pMVar1 != null)) {
			pMVar1.Active = bVar2;
			pSVar3 = pMVar1.Serialize();
			pMVar1 = __i.Value;
			if (pMVar1 != null) {
				pMVar1.Deserialize(pSVar3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Static>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Static_g____getter_5_0(CustomLogicPrefabBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i.Value == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Static>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__Static_g____setter_5_1(CustomLogicPrefabBuiltin __i, object __v)
	{
		MapScriptSceneObject pMVar1;
		bool bVar2;
		String pSVar3;

		bVar2 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i != null) &&(pMVar1 = __i.Value, pMVar1 != null)) {
			pMVar1.Static = bVar2;
			pSVar3 = pMVar1.Serialize();
			pMVar1 = __i.Value;
			if (pMVar1 != null) {
				pMVar1.Deserialize(pSVar3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Visible>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Visible_g____getter_6_0(CustomLogicPrefabBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i.Value == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Visible>g____setter|6_1: clean
	private static void Bindings____CreatePropertyBinding__Visible_g____setter_6_1(CustomLogicPrefabBuiltin __i, object __v)
	{
		MapScriptSceneObject pMVar1;
		bool bVar2;
		String pSVar3;

		bVar2 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i != null) &&(pMVar1 = __i.Value, pMVar1 != null)) {
			pMVar1.Visible = bVar2;
			pSVar3 = pMVar1.Serialize();
			pMVar1 = __i.Value;
			if (pMVar1 != null) {
				pMVar1.Deserialize(pSVar3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Name_g____getter_7_0(CustomLogicPrefabBuiltin __i)
	{
		MapScriptSceneObject pMVar1;

		if ((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return (object)pMVar1.Name;
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____setter|7_1: clean
	private static void Bindings____CreatePropertyBinding__Name_g____setter_7_1(CustomLogicPrefabBuiltin __i, object __v)
	{
		MapScriptSceneObject pMVar1;
		String pSVar2;

		pSVar2 = CustomLogicEvaluator.ConvertTo<string>(__v);
		if ((__i != null) &&(pMVar1 = __i.Value, pMVar1 != null)) {
			pMVar1.Name = pSVar2;
			pMVar1 = __i.Value;
			if (pMVar1 != null) {
				pSVar2 = pMVar1.Serialize();
				pMVar1 = __i.Value;
				if (pMVar1 != null) {
					pMVar1.Deserialize(pSVar2);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Position_g____getter_8_0(CustomLogicPrefabBuiltin __i)
	{
		MapScriptSceneObject __this;
		CustomLogicVector3Builtin __this_00;
		Vector3 value;

		if (__i != null) {
			__this = __i.Value;
			if (__this != null) {
				value = __this.GetPosition();
				__this_00 = new CustomLogicVector3Builtin(value);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|8_1: clean
	private static void Bindings____CreatePropertyBinding__Position_g____setter_8_1(CustomLogicPrefabBuiltin __i, object __v)
	{
		CustomLogicVector3Builtin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Position = value;
		return;
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__Rotation_g____getter_9_0(CustomLogicPrefabBuiltin __i)
	{
		MapScriptSceneObject __this;
		CustomLogicVector3Builtin __this_00;
		Vector3 value;

		if (__i != null) {
			__this = __i.Value;
			if (__this != null) {
				value = __this.GetRotation();
				__this_00 = new CustomLogicVector3Builtin(value);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|9_1: clean
	private static void Bindings____CreatePropertyBinding__Rotation_g____setter_9_1(CustomLogicPrefabBuiltin __i, object __v)
	{
		CustomLogicVector3Builtin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Rotation = value;
		return;
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__Scale_g____getter_10_0(CustomLogicPrefabBuiltin __i)
	{
		MapScriptSceneObject __this;
		CustomLogicVector3Builtin __this_00;
		Vector3 value;

		if (__i != null) {
			__this = __i.Value;
			if (__this != null) {
				value = __this.GetScale();
				__this_00 = new CustomLogicVector3Builtin(value);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____setter|10_1: clean
	private static void Bindings____CreatePropertyBinding__Scale_g____setter_10_1(CustomLogicPrefabBuiltin __i, object __v)
	{
		CustomLogicVector3Builtin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Scale = value;
		return;
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideMode>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__CollideMode_g____getter_11_0(CustomLogicPrefabBuiltin __i)
	{
		MapScriptSceneObject pMVar1;

		if ((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return (object)pMVar1.CollideMode;
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideMode>g____setter|11_1: clean
	private static void Bindings____CreatePropertyBinding__CollideMode_g____setter_11_1(CustomLogicPrefabBuiltin __i, object __v)
	{
		MapScriptSceneObject pMVar1;
		String pSVar2;

		pSVar2 = CustomLogicEvaluator.ConvertTo<string>(__v);
		if ((__i != null) &&(pMVar1 = __i.Value, pMVar1 != null)) {
			pMVar1.CollideMode = pSVar2;
			pMVar1 = __i.Value;
			if (pMVar1 != null) {
				pSVar2 = pMVar1.Serialize();
				pMVar1 = __i.Value;
				if (pMVar1 != null) {
					pMVar1.Deserialize(pSVar2);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideWith>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__CollideWith_g____getter_12_0(CustomLogicPrefabBuiltin __i)
	{
		MapScriptSceneObject pMVar1;

		if ((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return (object)pMVar1.CollideWith;
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideWith>g____setter|12_1: clean
	private static void Bindings____CreatePropertyBinding__CollideWith_g____setter_12_1(CustomLogicPrefabBuiltin __i, object __v)
	{
		MapScriptSceneObject pMVar1;
		String pSVar2;

		pSVar2 = CustomLogicEvaluator.ConvertTo<string>(__v);
		if ((__i != null) &&(pMVar1 = __i.Value, pMVar1 != null)) {
			pMVar1.CollideWith = pSVar2;
			pMVar1 = __i.Value;
			if (pMVar1 != null) {
				pSVar2 = pMVar1.Serialize();
				pMVar1 = __i.Value;
				if (pMVar1 != null) {
					pMVar1.Deserialize(pSVar2);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__PhysicsMaterial>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__PhysicsMaterial_g____getter_13_0(CustomLogicPrefabBuiltin __i)
	{
		MapScriptSceneObject pMVar1;

		if ((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return (object)pMVar1.PhysicsMaterial;
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__PhysicsMaterial>g____setter|13_1: clean
	private static void Bindings____CreatePropertyBinding__PhysicsMaterial_g____setter_13_1(CustomLogicPrefabBuiltin __i, object __v)
	{
		MapScriptSceneObject pMVar1;
		String pSVar2;

		pSVar2 = CustomLogicEvaluator.ConvertTo<string>(__v);
		if ((__i != null) &&(pMVar1 = __i.Value, pMVar1 != null)) {
			pMVar1.PhysicsMaterial = pSVar2;
			pMVar1 = __i.Value;
			if (pMVar1 != null) {
				pSVar2 = pMVar1.Serialize();
				pMVar1 = __i.Value;
				if (pMVar1 != null) {
					pMVar1.Deserialize(pSVar2);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicPrefabBuiltin.Bindings.c();
		CustomLogicPrefabBuiltin.Bindings.c.__9 =(CustomLogicPrefabBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicPrefabBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearComponents>b__14_0: clean
	private object Bindings_c____CreateMethodBinding__ClearComponents_b__14_0(CustomLogicPrefabBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.ClearComponents();
		return null;
	}
}
