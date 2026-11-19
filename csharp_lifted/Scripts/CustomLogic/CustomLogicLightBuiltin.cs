// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLightBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLightBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000493")]
[CompilerGenerated]
internal class CustomLogicLightBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x2000494")]
	public static class Factory
	{
		[Token(Token = "0x6001EAC")]
		[Address(RVA = "0x58F7600", Offset = "0x58F6600", VA = "0x58F7600")]
		public static CustomLogicLightBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicLightBuiltin __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLightBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLightBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicLightBuiltin(null);
			return __this;
		}
	}

	[Token(Token = "0x2000495")]
	public static class Bindings
	{
		[Token(Token = "0x40016A0")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001EAD")]
		[Address(RVA = "0x58F76F0", Offset = "0x58F66F0", VA = "0x58F76F0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicLightBuiltin> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x67b0f90a) {
				if (uVar2 < 0x3cf8f4e5) {
					if (uVar2 == 0x6bb3b2f) {
						bVar1 = (name == "LightTypeSpot");
						if (bVar1) {
							if ((typeof(CustomLogicLightBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicLightBuiltin.Bindings.__CreatePropertyBinding__LightTypeSpot();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicLightBuiltin.Bindings.__CreatePropertyBinding__LightTypeSpot();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x2d3acfd4) {
						bVar1 = (name == "TypeOfLight");
						if (bVar1) {
							if ((typeof(CustomLogicLightBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicLightBuiltin.Bindings.__CreatePropertyBinding__TypeOfLight();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicLightBuiltin.Bindings.__CreatePropertyBinding__TypeOfLight();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x3cf8f4e4) {
						bVar1 = (name == "ShadowStrength");
						if (bVar1) {
							if ((typeof(CustomLogicLightBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicLightBuiltin.Bindings.__CreatePropertyBinding__ShadowStrength();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicLightBuiltin.Bindings.__CreatePropertyBinding__ShadowStrength();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x48a10dd9) {
					if (uVar2 == 0x44ba848f) {
						bVar1 = (name == "ShadowTypeNone");
						if (bVar1) {
							pCVar3 = CustomLogicLightBuiltin.Bindings.__CreatePropertyBinding__ShadowTypeNone();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x48a10dd8) {
						bVar1 = (name == "ShadowTypeHard");
						if (bVar1) {
							pCVar3 = CustomLogicLightBuiltin.Bindings.__CreatePropertyBinding__ShadowTypeHard();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x53b4f9aa) {
					bVar1 = (name == "Intensity");
					if (bVar1) {
						pCVar3 = CustomLogicLightBuiltin.Bindings.__CreatePropertyBinding__Intensity();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x67b0f909) {
					bVar1 = (name == "WeatherControlled");
					if (bVar1) {
						pCVar3 = CustomLogicLightBuiltin.Bindings.__CreatePropertyBinding__WeatherControlled();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xd9e6934e) {
				if (uVar2 < 0xa8d979d0) {
					if (uVar2 == 0xa311e772) {
						bVar1 = (name == "Range");
						if (bVar1) {
							pCVar3 = CustomLogicLightBuiltin.Bindings.__CreatePropertyBinding__Range();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xa8d979cf) {
						bVar1 = (name == "LightTypePoint");
						if (bVar1) {
							pCVar3 = CustomLogicLightBuiltin.Bindings.__CreatePropertyBinding__LightTypePoint();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xab6315a1) {
					bVar1 = (name == "ShadowTypeSoft");
					if (bVar1) {
						pCVar3 = CustomLogicLightBuiltin.Bindings.__CreatePropertyBinding__ShadowTypeSoft();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xd9e6934d) {
					bVar1 = (name == "LightTypeDirectional");
					if (bVar1) {
						pCVar3 = CustomLogicLightBuiltin.Bindings.__CreatePropertyBinding__LightTypeDirectional();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xe5b43cf9) {
				if (uVar2 == 0xe2c2c340) {
					bVar1 = (name == "SpotAngle");
					if (bVar1) {
						pCVar3 = CustomLogicLightBuiltin.Bindings.__CreatePropertyBinding__SpotAngle();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe5b43cf8) {
					bVar1 = (name == "Color");
					if (bVar1) {
						pCVar3 = CustomLogicLightBuiltin.Bindings.__CreatePropertyBinding__Color();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xf6a210e9) {
				bVar1 = (name == "ShadowType");
				if (bVar1) {
					pCVar3 = CustomLogicLightBuiltin.Bindings.__CreatePropertyBinding__ShadowType();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf950f202) {
				bVar1 = (name == "BounceIntensity");
				if (bVar1) {
					pCVar3 = CustomLogicLightBuiltin.Bindings.__CreatePropertyBinding__BounceIntensity();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLightBuiltin not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6001EAE")]
		[Address(RVA = "0x58F7D10", Offset = "0x58F6D10", VA = "0x58F7D10")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__LightTypeDirectional()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__LightTypeDirectional): 2 lines keep C-only constructs
			Func<CustomLogicLightBuiltin, object> __this;
			CLPropertyBinding<CustomLogicLightBuiltin> __this_00;

			__this = new Func<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypeDirectional_g);
			__this_00 = new CLPropertyBinding<CustomLogicLightBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001EAF")]
		[Address(RVA = "0x58F7DB0", Offset = "0x58F6DB0", VA = "0x58F7DB0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__LightTypePoint()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__LightTypePoint): 2 lines keep C-only constructs
			Func<CustomLogicLightBuiltin, object> __this;
			CLPropertyBinding<CustomLogicLightBuiltin> __this_00;

			__this = new Func<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypePoint_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicLightBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001EB0")]
		[Address(RVA = "0x58F7E50", Offset = "0x58F6E50", VA = "0x58F7E50")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__LightTypeSpot()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__LightTypeSpot): 2 lines keep C-only constructs
			Func<CustomLogicLightBuiltin, object> __this;
			CLPropertyBinding<CustomLogicLightBuiltin> __this_00;

			__this = new Func<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypeSpot_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicLightBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001EB1")]
		[Address(RVA = "0x58F7EF0", Offset = "0x58F6EF0", VA = "0x58F7EF0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowTypeNone()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowTypeNone): 2 lines keep C-only constructs
			Func<CustomLogicLightBuiltin, object> __this;
			CLPropertyBinding<CustomLogicLightBuiltin> __this_00;

			__this = new Func<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeNone_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicLightBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001EB2")]
		[Address(RVA = "0x58F7F90", Offset = "0x58F6F90", VA = "0x58F7F90")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowTypeHard()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowTypeHard): 2 lines keep C-only constructs
			Func<CustomLogicLightBuiltin, object> __this;
			CLPropertyBinding<CustomLogicLightBuiltin> __this_00;

			__this = new Func<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeHard_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicLightBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001EB3")]
		[Address(RVA = "0x58F8030", Offset = "0x58F7030", VA = "0x58F8030")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowTypeSoft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowTypeSoft): 2 lines keep C-only constructs
			Func<CustomLogicLightBuiltin, object> __this;
			CLPropertyBinding<CustomLogicLightBuiltin> __this_00;

			__this = new Func<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeSoft_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicLightBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001EB4")]
		[Address(RVA = "0x58F80D0", Offset = "0x58F70D0", VA = "0x58F80D0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__TypeOfLight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__TypeOfLight): 3 lines keep C-only constructs
			Func<CustomLogicLightBuiltin, object> __this;
			Action<CustomLogicLightBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLightBuiltin> __this_01;

			__this = new Func<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__TypeOfLight_g____getter_8);
			__this_00 = new Action<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__TypeOfLight_g____setter_8);
			__this_01 = new CLPropertyBinding<CustomLogicLightBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001EB5")]
		[Address(RVA = "0x58F81B0", Offset = "0x58F71B0", VA = "0x58F81B0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__Range()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__Range): 3 lines keep C-only constructs
			Func<CustomLogicLightBuiltin, object> __this;
			Action<CustomLogicLightBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLightBuiltin> __this_01;

			__this = new Func<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Range_g____getter_9_0);
			__this_00 = new Action<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Range_g____setter_9_1);
			__this_01 = new CLPropertyBinding<CustomLogicLightBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001EB6")]
		[Address(RVA = "0x58F8290", Offset = "0x58F7290", VA = "0x58F8290")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__SpotAngle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__SpotAngle): 3 lines keep C-only constructs
			Func<CustomLogicLightBuiltin, object> __this;
			Action<CustomLogicLightBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLightBuiltin> __this_01;

			__this = new Func<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__SpotAngle_g____getter_10_0);
			__this_00 = new Action<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__SpotAngle_g____setter_10_1);
			__this_01 = new CLPropertyBinding<CustomLogicLightBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001EB7")]
		[Address(RVA = "0x58F8370", Offset = "0x58F7370", VA = "0x58F8370")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__Color()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__Color): 3 lines keep C-only constructs
			Func<CustomLogicLightBuiltin, object> __this;
			Action<CustomLogicLightBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLightBuiltin> __this_01;

			__this = new Func<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Color_g____getter_11_0);
			__this_00 = new Action<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Color_g____setter_11_1);
			__this_01 = new CLPropertyBinding<CustomLogicLightBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001EB8")]
		[Address(RVA = "0x58F8450", Offset = "0x58F7450", VA = "0x58F8450")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__Intensity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__Intensity): 3 lines keep C-only constructs
			Func<CustomLogicLightBuiltin, object> __this;
			Action<CustomLogicLightBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLightBuiltin> __this_01;

			__this = new Func<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Intensity_g____getter_12_0);
			__this_00 = new Action<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Intensity_g____setter_12_1);
			__this_01 = new CLPropertyBinding<CustomLogicLightBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001EB9")]
		[Address(RVA = "0x58F8530", Offset = "0x58F7530", VA = "0x58F8530")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__BounceIntensity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__BounceIntensity): 3 lines keep C-only constructs
			Func<CustomLogicLightBuiltin, object> __this;
			Action<CustomLogicLightBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLightBuiltin> __this_01;

			__this = new Func<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__BounceIntensity_g____gette);
			__this_00 = new Action<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__BounceIntensity_g____sette);
			__this_01 = new CLPropertyBinding<CustomLogicLightBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001EBA")]
		[Address(RVA = "0x58F8610", Offset = "0x58F7610", VA = "0x58F8610")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowType()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowType): 3 lines keep C-only constructs
			Func<CustomLogicLightBuiltin, object> __this;
			Action<CustomLogicLightBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLightBuiltin> __this_01;

			__this = new Func<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowType_g____getter_14);
			__this_00 = new Action<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowType_g____setter_14);
			__this_01 = new CLPropertyBinding<CustomLogicLightBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001EBB")]
		[Address(RVA = "0x58F86F0", Offset = "0x58F76F0", VA = "0x58F86F0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowStrength()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowStrength): 3 lines keep C-only constructs
			Func<CustomLogicLightBuiltin, object> __this;
			Action<CustomLogicLightBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLightBuiltin> __this_01;

			__this = new Func<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowStrength_g____getter);
			__this_00 = new Action<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowStrength_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicLightBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001EBC")]
		[Address(RVA = "0x58F87D0", Offset = "0x58F77D0", VA = "0x58F87D0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__WeatherControlled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__WeatherControlled): 3 lines keep C-only constructs
			Func<CustomLogicLightBuiltin, object> __this;
			Action<CustomLogicLightBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLightBuiltin> __this_01;

			__this = new Func<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__WeatherControlled_g____get);
			__this_00 = new Action<CustomLogicLightBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__WeatherControlled_g____set);
			__this_01 = new CLPropertyBinding<CustomLogicLightBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}
	}

	[Token(Token = "0x400169C")]
	[FieldOffset(Offset = "0x38")]
	public MapLight Value;

	[Token(Token = "0x400169D")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x400169E")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x400169F")]
	[FieldOffset(Offset = "0x50")]
	private bool _weatherControlled;

	[Token(Token = "0x17000361")]
	public static int LightTypeDirectional
	{
		[Token(Token = "0x6001E90")]
		[Address(RVA = "0x58F7130", Offset = "0x58F6130", VA = "0x58F7130")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_LightTypeDirectional): clean
			return 1;
		}
	}

	[Token(Token = "0x17000362")]
	public static int LightTypePoint
	{
		[Token(Token = "0x6001E91")]
		[Address(RVA = "0x58F7140", Offset = "0x58F6140", VA = "0x58F7140")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_LightTypePoint): clean
			return 2;
		}
	}

	[Token(Token = "0x17000363")]
	public static int LightTypeSpot
	{
		[Token(Token = "0x6001E92")]
		[Address(RVA = "0x58F7150", Offset = "0x58F6150", VA = "0x58F7150")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_LightTypeSpot): clean
			return 0;
		}
	}

	[Token(Token = "0x17000364")]
	public static int ShadowTypeNone
	{
		[Token(Token = "0x6001E93")]
		[Address(RVA = "0x58F7160", Offset = "0x58F6160", VA = "0x58F7160")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_ShadowTypeNone): clean
			return 0;
		}
	}

	[Token(Token = "0x17000365")]
	public static int ShadowTypeHard
	{
		[Token(Token = "0x6001E94")]
		[Address(RVA = "0x58F7170", Offset = "0x58F6170", VA = "0x58F7170")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_ShadowTypeHard): clean
			return 1;
		}
	}

	[Token(Token = "0x17000366")]
	public static int ShadowTypeSoft
	{
		[Token(Token = "0x6001E95")]
		[Address(RVA = "0x58F7180", Offset = "0x58F6180", VA = "0x58F7180")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_ShadowTypeSoft): clean
			return 2;
		}
	}

	[Token(Token = "0x17000367")]
	public int TypeOfLight
	{
		[Token(Token = "0x6001E96")]
		[Address(RVA = "0x58F7190", Offset = "0x58F6190", VA = "0x58F7190")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_TypeOfLight): clean
			MapLight pMVar1;
			Light __this_00;
			int iVar2;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.Light, __this_00 == null)) {
				throw new NullReferenceException();
			}
			return iVar2;
		}
		[Token(Token = "0x6001E97")]
		[Address(RVA = "0x58F71B0", Offset = "0x58F61B0", VA = "0x58F71B0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$set_TypeOfLight): clean
			MapLight pMVar1;
			Light __this_00;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.Light, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.type = value;
			return;
		}
	}

	[Token(Token = "0x17000368")]
	public float Range
	{
		[Token(Token = "0x6001E98")]
		[Address(RVA = "0x58F71D0", Offset = "0x58F61D0", VA = "0x58F71D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_Range): clean
			MapLight pMVar1;
			Light __this_00;
			float fVar2;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.Light, __this_00 == null)) {
				throw new NullReferenceException();
			}
			return fVar2;
		}
		[Token(Token = "0x6001E99")]
		[Address(RVA = "0x58F71F0", Offset = "0x58F61F0", VA = "0x58F71F0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$set_Range): clean
			MapLight pMVar1;
			Light __this_00;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.Light, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.range = value;
			return;
		}
	}

	[Token(Token = "0x17000369")]
	public float SpotAngle
	{
		[Token(Token = "0x6001E9A")]
		[Address(RVA = "0x58F7210", Offset = "0x58F6210", VA = "0x58F7210")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_SpotAngle): clean
			MapLight pMVar1;
			Light __this_00;
			float fVar2;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.Light, __this_00 == null)) {
				throw new NullReferenceException();
			}
			return fVar2;
		}
		[Token(Token = "0x6001E9B")]
		[Address(RVA = "0x58F7230", Offset = "0x58F6230", VA = "0x58F7230")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$set_SpotAngle): clean
			MapLight pMVar1;
			Light __this_00;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.Light, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.spotAngle = value;
			return;
		}
	}

	[Token(Token = "0x1700036A")]
	public CustomLogicColorBuiltin Color
	{
		[Token(Token = "0x6001E9C")]
		[Address(RVA = "0x58F7250", Offset = "0x58F6250", VA = "0x58F7250")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_Color): clean
			MapLight pMVar1;
			Light __this_00;
			CustomLogicColorBuiltin __this_01;
			Color color;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.Light, __this_00 == null)) {
				throw new NullReferenceException();
			}
			color = __this_00.color;
			__this_01 = new CustomLogicColorBuiltin(color);
			return __this_01;
		}
		[Token(Token = "0x6001E9D")]
		[Address(RVA = "0x58F72D0", Offset = "0x58F62D0", VA = "0x58F72D0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$set_Color): clean
			MapLight pMVar1;
			Color255 __this_00;
			Light __this_01;
			Color value_00;

			pMVar1 = this.Value;
			if (((pMVar1 != null) && (value != null)) &&(__this_00 = value.Value, __this_00 != null)) {
				__this_01 = pMVar1.Light;
				value_00 = __this_00.ToColor();
				if (__this_01 != null) {
					__this_01.color = value_00;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700036B")]
	public float Intensity
	{
		[Token(Token = "0x6001E9E")]
		[Address(RVA = "0x58F7310", Offset = "0x58F6310", VA = "0x58F7310")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_Intensity): clean
			MapLight pMVar1;

			pMVar1 = this.Value;
			if (pMVar1 == null) {
				throw new NullReferenceException();
			}
			return pMVar1.MaxIntensity;
		}
		[Token(Token = "0x6001E9F")]
		[Address(RVA = "0x58F7330", Offset = "0x58F6330", VA = "0x58F7330")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$set_Intensity): clean
			MapLight pMVar1;

			pMVar1 = this.Value;
			if (pMVar1 == null) {
				throw new NullReferenceException();
			}
			pMVar1.MaxIntensity = value;
			return;
		}
	}

	[Token(Token = "0x1700036C")]
	public float BounceIntensity
	{
		[Token(Token = "0x6001EA0")]
		[Address(RVA = "0x58F7350", Offset = "0x58F6350", VA = "0x58F7350")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_BounceIntensity): clean
			MapLight pMVar1;
			Light __this_00;
			float fVar2;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.Light, __this_00 == null)) {
				throw new NullReferenceException();
			}
			return fVar2;
		}
		[Token(Token = "0x6001EA1")]
		[Address(RVA = "0x58F7370", Offset = "0x58F6370", VA = "0x58F7370")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$set_BounceIntensity): clean
			MapLight pMVar1;
			Light __this_00;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.Light, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.bounceIntensity = value;
			return;
		}
	}

	[Token(Token = "0x1700036D")]
	public int ShadowType
	{
		[Token(Token = "0x6001EA2")]
		[Address(RVA = "0x58F7390", Offset = "0x58F6390", VA = "0x58F7390")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_ShadowType): clean
			MapLight pMVar1;
			Light __this_00;
			int iVar2;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.Light, __this_00 == null)) {
				throw new NullReferenceException();
			}
			return iVar2;
		}
		[Token(Token = "0x6001EA3")]
		[Address(RVA = "0x58F73B0", Offset = "0x58F63B0", VA = "0x58F73B0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$set_ShadowType): clean
			MapLight pMVar1;
			Light __this_00;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.Light, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.shadows = value;
			return;
		}
	}

	[Token(Token = "0x1700036E")]
	public float ShadowStrength
	{
		[Token(Token = "0x6001EA4")]
		[Address(RVA = "0x58F73D0", Offset = "0x58F63D0", VA = "0x58F73D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_ShadowStrength): clean
			MapLight pMVar1;
			Light __this_00;
			float fVar2;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.Light, __this_00 == null)) {
				throw new NullReferenceException();
			}
			return fVar2;
		}
		[Token(Token = "0x6001EA5")]
		[Address(RVA = "0x58F73F0", Offset = "0x58F63F0", VA = "0x58F73F0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$set_ShadowStrength): clean
			MapLight pMVar1;
			Light __this_00;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.Light, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.shadowStrength = value;
			return;
		}
	}

	[Token(Token = "0x1700036F")]
	public bool WeatherControlled
	{
		[Token(Token = "0x6001EA6")]
		[Address(RVA = "0x58F7410", Offset = "0x58F6410", VA = "0x58F7410")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_WeatherControlled): clean
			return this._weatherControlled;
		}
		[Token(Token = "0x6001EA7")]
		[Address(RVA = "0x58F7420", Offset = "0x58F6420", VA = "0x58F7420")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$set_WeatherControlled): 2 lines keep C-only constructs
			int piVar1;
			uint uVar2;
			uint uVar3;
			MapLight pMVar4;
			List<Light> pSVar5;
			Light item;
			Light[] pUVar6;
			bool bVar8;

			this._weatherControlled = value;
			uVar2 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
			if (value) {
				if (uVar2 == 0) {
				}
				pMVar4 = this.Value;
				if ((pMVar4 != null) &&(pSVar5 = MapLoader.Daylight, pSVar5 != null)) {
					bVar8 = pSVar5.Contains((object)pMVar4.Light);
					if (bVar8) {
						return;
					}
					pMVar4 = this.Value;
					if ((pMVar4 != null) &&(pSVar5 = MapLoader.Daylight, pSVar5 != null)) {
						item = pMVar4.Light;
						piVar1 = &pSVar5._version;
						*piVar1 = *piVar1 + 1;
						pUVar6 = pSVar5._items;
						if (pUVar6 != null) {
							uVar3 = pSVar5._size;
							if (uVar3 < (uint)pUVar6.Length) {
								pSVar5._size = uVar3 + 1;
								pUVar6[(int)uVar3] = item;
								return;
							}
							pSVar5.AddWithResize((object)item);
							return;
						}
					}
				}
			}
			else {
				if (uVar2 == 0) {
				}
				pMVar4 = this.Value;
				if ((pMVar4 != null) &&(pSVar5 = MapLoader.Daylight, pSVar5 != null)) {
					pSVar5.Remove((object)pMVar4.Light);
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000370")]
	public override string ClassName
	{
		[Token(Token = "0x6001EA8")]
		[Address(RVA = "0x58F75A0", Offset = "0x58F65A0", VA = "0x58F75A0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_ClassName): clean
			return "LightBuiltin";
		}
	}

	[Token(Token = "0x17000371")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001EA9")]
		[Address(RVA = "0x58F75D0", Offset = "0x58F65D0", VA = "0x58F75D0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000372")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001EAA")]
		[Address(RVA = "0x58F75E0", Offset = "0x58F65E0", VA = "0x58F75E0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000373")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001EAB")]
		[Address(RVA = "0x58F75F0", Offset = "0x58F65F0", VA = "0x58F75F0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001E8E")]
	[Address(RVA = "0x58F6F10", Offset = "0x58F5F10", VA = "0x58F6F10")]
	public CustomLogicLightBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$.ctor): clean
		base(null);
		return;
	}

	[Token(Token = "0x6001E8F")]
	[Address(RVA = "0x58F6F20", Offset = "0x58F5F20", VA = "0x58F6F20")]
	public CustomLogicLightBuiltin(CustomLogicMapObjectBuiltin owner, LightType type)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c (CustomLogic.CustomLogicLightBuiltin$$.ctor): 8 lines keep C-only constructs
		MapLight* targetAddress;
		MapObject pMVar1;
		Light pUVar2;
		MapLight pMVar3;

		if ((owner != null) &&(pMVar1 = owner.Value, pMVar1 != null)) {
			pUVar2 = BuiltinComponentInstance.GetOrAddComponent<Light>(pMVar1.GameObject);
			base((Component)pUVar2);
			this.OwnerMapObject = owner;
			pMVar1 = owner.Value;
			if (pMVar1 != null) {
				this.Owner = pMVar1.GameObject;
				pUVar2 = (Light)this.Component;
				if ((pUVar2 != null) && (pUVar2.klass != typeof(Light))) {
					throw new InvalidCastException();
				}
				pMVar3 = MapLoader.RegisterMapLight(pUVar2, type == 1);
				targetAddress = &this.Value;
				this.Value = pMVar3;
				pMVar3 = this.Value;
				if (pMVar3 != null) {
					pMVar3.MaxIntensity = 1.0;
					pUVar2 = pMVar3.Light;
					if (pUVar2 != null) {
						pUVar2.type = type;
						pMVar3 = *targetAddress;
						if (type == 1) {
							if ((pMVar3 != null) &&(pUVar2 = pMVar3.Light, pUVar2 != null)) {
								pUVar2.shadows = 2;
								if ((*targetAddress != null) &&(pUVar2 = ((*targetAddress).fields).Light, pUVar2 != null)) {
									pUVar2.shadowStrength = 0.8;
									if ((*targetAddress != null) &&(pUVar2 = ((*targetAddress).fields).Light, pUVar2 != null)) {
										pUVar2.shadowBias = 0.2;
										return;
									}
								}
							}
						}
						else if ((pMVar3 != null) &&(pUVar2 = pMVar3.Light, pUVar2 != null)) {
							pUVar2.shadows = 0;
							if ((*targetAddress != null) &&(pUVar2 = ((*targetAddress).fields).Light, pUVar2 != null)) {
								pUVar2.renderMode = 1;
								if ((*targetAddress != null) &&(pUVar2 = ((*targetAddress).fields).Light, pUVar2 != null)) {
									pUVar2.bounceIntensity = 0.0;
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicLightBuiltin.c.

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"LightTypeDirectional");
		__this.Add((Il2CppObject *)"LightTypePoint");
		__this.Add((Il2CppObject *)"LightTypeSpot");
		__this.Add((Il2CppObject *)"ShadowTypeNone");
		__this.Add((Il2CppObject *)"ShadowTypeHard");
		__this.Add((Il2CppObject *)"ShadowTypeSoft");
		__this.Add((Il2CppObject *)"TypeOfLight");
		__this.Add((Il2CppObject *)"Range");
		__this.Add((Il2CppObject *)"SpotAngle");
		__this.Add((Il2CppObject *)"Color");
		__this.Add((Il2CppObject *)"Intensity");
		__this.Add((Il2CppObject *)"BounceIntensity");
		__this.Add((Il2CppObject *)"ShadowType");
		__this.Add((Il2CppObject *)"ShadowStrength");
		__this.Add((Il2CppObject *)"WeatherControlled");
		CustomLogicLightBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__LightTypeDirectional>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__LightTypeDirectional_g____getter_2_0(CustomLogicLightBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__LightTypePoint>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__LightTypePoint_g____getter_3_0(CustomLogicLightBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__LightTypeSpot>g____getter|4_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__LightTypeSpot_g____getter_4_0(CustomLogicLightBuiltin __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowTypeNone>g____getter|5_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__ShadowTypeNone_g____getter_5_0(CustomLogicLightBuiltin __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowTypeHard>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__ShadowTypeHard_g____getter_6_0(CustomLogicLightBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowTypeSoft>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__ShadowTypeSoft_g____getter_7_0(CustomLogicLightBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__TypeOfLight>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__TypeOfLight_g____getter_8_0(CustomLogicLightBuiltin __i)
	{
		MapLight pMVar1;
		Light __this;
		object pIVar2;
		byte[] auStack_4 = new byte[4];

		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(__this = pMVar1.Light, __this == null)) {
			throw new NullReferenceException();
		}
		__this.type;
		return pIVar2;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__TypeOfLight>g____setter|8_1: clean
	private static void Bindings____CreatePropertyBinding__TypeOfLight_g____setter_8_1(CustomLogicLightBuiltin __i, object __v)
	{
		MapLight pMVar1;
		Light __this;
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(__this = pMVar1.Light, __this == null)) {
			throw new NullReferenceException();
		}
		__this.type = value;
		return;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Range>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__Range_g____getter_9_0(CustomLogicLightBuiltin __i)
	{
		MapLight pMVar1;
		Light __this;
		object pIVar2;
		byte[] auStack_4 = new byte[4];

		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(__this = pMVar1.Light, __this == null)) {
			throw new NullReferenceException();
		}
		__this.range;
		return pIVar2;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Range>g____setter|9_1: clean
	private static void Bindings____CreatePropertyBinding__Range_g____setter_9_1(CustomLogicLightBuiltin __i, object __v)
	{
		MapLight pMVar1;
		Light __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(__this = pMVar1.Light, __this == null)) {
			throw new NullReferenceException();
		}
		__this.range = value;
		return;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__SpotAngle>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__SpotAngle_g____getter_10_0(CustomLogicLightBuiltin __i)
	{
		MapLight pMVar1;
		Light __this;
		object pIVar2;
		byte[] auStack_4 = new byte[4];

		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(__this = pMVar1.Light, __this == null)) {
			throw new NullReferenceException();
		}
		__this.spotAngle;
		return pIVar2;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__SpotAngle>g____setter|10_1: clean
	private static void Bindings____CreatePropertyBinding__SpotAngle_g____setter_10_1(CustomLogicLightBuiltin __i, object __v)
	{
		MapLight pMVar1;
		Light __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(__this = pMVar1.Light, __this == null)) {
			throw new NullReferenceException();
		}
		__this.spotAngle = value;
		return;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Color>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__Color_g____getter_11_0(CustomLogicLightBuiltin __i)
	{
		MapLight pMVar1;
		Light __this;
		CustomLogicColorBuiltin __this_00;
		Color color;

		if (__i != null) {
			pMVar1 = __i.Value;
			if ((pMVar1 != null) &&(__this = pMVar1.Light, __this != null)) {
				color = __this.color;
				__this_00 = new CustomLogicColorBuiltin(color);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Color>g____setter|11_1: clean
	private static void Bindings____CreatePropertyBinding__Color_g____setter_11_1(CustomLogicLightBuiltin __i, object __v)
	{
		MapLight pMVar1;
		Color255 __this;
		Light __this_00;
		CustomLogicColorBuiltin pCVar2;
		Color value;

		pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(__v);
		if ((((__i != null) &&(pMVar1 = __i.Value, pMVar1 != null)) &&(pCVar2 != null)) &&(__this = pCVar2.Value, __this != null)) {
			__this_00 = pMVar1.Light;
			value = __this.ToColor();
			if (__this_00 != null) {
				__this_00.color = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Intensity>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__Intensity_g____getter_12_0(CustomLogicLightBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) || (__i.Value == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Intensity>g____setter|12_1: clean
	private static void Bindings____CreatePropertyBinding__Intensity_g____setter_12_1(CustomLogicLightBuiltin __i, object __v)
	{
		MapLight pMVar1;
		float fVar2;

		fVar2 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		pMVar1.MaxIntensity = fVar2;
		return;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__BounceIntensity>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__BounceIntensity_g____getter_13_0(CustomLogicLightBuiltin __i)
	{
		MapLight pMVar1;
		Light __this;
		object pIVar2;
		byte[] auStack_4 = new byte[4];

		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(__this = pMVar1.Light, __this == null)) {
			throw new NullReferenceException();
		}
		__this.bounceIntensity;
		return pIVar2;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__BounceIntensity>g____setter|13_1: clean
	private static void Bindings____CreatePropertyBinding__BounceIntensity_g____setter_13_1(CustomLogicLightBuiltin __i, object __v)
	{
		MapLight pMVar1;
		Light __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(__this = pMVar1.Light, __this == null)) {
			throw new NullReferenceException();
		}
		__this.bounceIntensity = value;
		return;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowType>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__ShadowType_g____getter_14_0(CustomLogicLightBuiltin __i)
	{
		MapLight pMVar1;
		Light __this;
		object pIVar2;
		byte[] auStack_4 = new byte[4];

		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(__this = pMVar1.Light, __this == null)) {
			throw new NullReferenceException();
		}
		__this.shadows;
		return pIVar2;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowType>g____setter|14_1: clean
	private static void Bindings____CreatePropertyBinding__ShadowType_g____setter_14_1(CustomLogicLightBuiltin __i, object __v)
	{
		MapLight pMVar1;
		Light __this;
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(__this = pMVar1.Light, __this == null)) {
			throw new NullReferenceException();
		}
		__this.shadows = value;
		return;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowStrength>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__ShadowStrength_g____getter_15_0(CustomLogicLightBuiltin __i)
	{
		MapLight pMVar1;
		Light __this;
		object pIVar2;
		byte[] auStack_4 = new byte[4];

		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(__this = pMVar1.Light, __this == null)) {
			throw new NullReferenceException();
		}
		__this.shadowStrength;
		return pIVar2;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowStrength>g____setter|15_1: clean
	private static void Bindings____CreatePropertyBinding__ShadowStrength_g____setter_15_1(CustomLogicLightBuiltin __i, object __v)
	{
		MapLight pMVar1;
		Light __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(__this = pMVar1.Light, __this == null)) {
			throw new NullReferenceException();
		}
		__this.shadowStrength = value;
		return;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__WeatherControlled>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__WeatherControlled_g____getter_16_0(CustomLogicLightBuiltin __i)
	{
		object pIVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__WeatherControlled>g____setter|16_1: clean
	private static void Bindings____CreatePropertyBinding__WeatherControlled_g____setter_16_1(CustomLogicLightBuiltin __i, object __v)
	{
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.WeatherControlled = value;
		return;
	}
}
