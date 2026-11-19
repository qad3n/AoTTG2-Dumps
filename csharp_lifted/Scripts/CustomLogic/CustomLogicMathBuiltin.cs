// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicMathBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicMathBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicMathBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000622")]
[CompilerGenerated]
internal class CustomLogicMathBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000623")]
	public static class Factory
	{
		[Token(Token = "0x6003A43")]
		[Address(RVA = "0x5A2DE00", Offset = "0x5A2CE00", VA = "0x5A2DE00")]
		public static CustomLogicMathBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicMathBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicMathBuiltin();
			return (CustomLogicMathBuiltin)__this;
		}
	}

	[Token(Token = "0x2000624")]
	public static class Bindings
	{
		[Token(Token = "0x4001A56")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003A44")]
		[Address(RVA = "0x5A2DF20", Offset = "0x5A2CF20", VA = "0x5A2DF20")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$CreateMemberBinding): 9 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicMathBuiltin> pCVar3;
			CLPropertyBinding<CustomLogicMathBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x8f325c2a) {
				if (uVar2 < 0x44a37324) {
					if (uVar2 < 0x2e9445f8) {
						if (uVar2 < 0x1762fe42) {
							if (uVar2 == 0x6626d4a) {
								bVar1 = (name == "Repeat");
								if (bVar1) {
									pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Repeat();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x1762fe41) {
								bVar1 = (name == "BitwiseNot");
								if (bVar1) {
									pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__BitwiseNot();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x27fffab2) {
							bVar1 = (name == "PI");
							if (bVar1) {
								pCVar4 = CustomLogicMathBuiltin.Bindings.__CreatePropertyBinding__PI();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x2da77deb) {
							bVar1 = (name == "MoveTowardsAngle");
							if (bVar1) {
								pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__MoveTowardsAngle();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x2e9445f7) {
							bVar1 = (name == "Min");
							if (bVar1) {
								pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Min();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x3da28cb3) {
						if (uVar2 == 0x3ca7e3b9) {
							bVar1 = (name == "Max");
							if (bVar1) {
								pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Max();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x3da28cb2) {
							bVar1 = (name == "Rad2DegConstant");
							if (bVar1) {
								pCVar4 = CustomLogicMathBuiltin.Bindings.__CreatePropertyBinding__Rad2DegConstant();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x3f6740bd) {
						bVar1 = (name == "SmoothStep");
						if (bVar1) {
							pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__SmoothStep();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x42bc54ed) {
						bVar1 = (name == "Sin");
						if (bVar1) {
							pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Sin();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x44a37323) {
						bVar1 = (name == "Mod");
						if (bVar1) {
							pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Mod();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x5ea410be) {
					if (uVar2 < 0x4e2d0c53) {
						if (uVar2 == 0x4dea6e5c) {
							bVar1 = (name == "Clamp");
							if (bVar1) {
								pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Clamp();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x4e2d0c52) {
							bVar1 = (name == "Rad2Deg");
							if (bVar1) {
								pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Rad2Deg();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x513efccb) {
						bVar1 = (name == "LerpAngle");
						if (bVar1) {
							pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__LerpAngle();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x5e187a3c) {
						bVar1 = (name == "Cos");
						if (bVar1) {
							pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Cos();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x5ea410bd) {
						bVar1 = (name == "Floor");
						if (bVar1) {
							pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Floor();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x7edc5dc7) {
					if (uVar2 == 0x638c103a) {
						bVar1 = (name == "Deg2Rad");
						if (bVar1) {
							pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Deg2Rad();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x7c627bca) {
						bVar1 = (name == "BitwiseRightShift");
						if (bVar1) {
							pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__BitwiseRightShift();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x7edc5dc6) {
						bVar1 = (name == "Asin");
						if (bVar1) {
							pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Asin();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x86a516df) {
					bVar1 = (name == "Atan");
					if (bVar1) {
						pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Atan();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x8cd299db) {
					bVar1 = (name == "Abs");
					if (bVar1) {
						pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Abs() ;
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x8f325c29) {
					bVar1 = (name == "BitwiseAnd");
					if (bVar1) {
						pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__BitwiseAnd();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xc9773aa4) {
				if (uVar2 < 0xabbd87c6) {
					if (uVar2 < 0x96061d5b) {
						if (uVar2 == 0x8f6340c4) {
							bVar1 = (name == "Sign");
							if (bVar1) {
								pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Sign();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x96061d5a) {
							bVar1 = (name == "InverseLerp");
							if (bVar1) {
								pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__InverseLerp();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x9e956088) {
						bVar1 = (name == "Lerp");
						if (bVar1) {
							pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Lerp();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xa1dd7bf1) {
						bVar1 = (name == "Log");
						if (bVar1) {
							pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Log();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xabbd87c5) {
						bVar1 = (name == "BitwiseXor");
						if (bVar1) {
							pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__BitwiseXor();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xb3919aab) {
					if (uVar2 == 0xacfe0068) {
						bVar1 = (name == "MoveTowards");
						if (bVar1) {
							pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__MoveTowards();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xb184d7bd) {
						bVar1 = (name == "Epsilon");
						if (bVar1) {
							pCVar4 = CustomLogicMathBuiltin.Bindings.__CreatePropertyBinding__Epsilon();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xb3919aaa) {
						bVar1 = (name == "Deg2RadConstant");
						if (bVar1) {
							pCVar4 = CustomLogicMathBuiltin.Bindings.__CreatePropertyBinding__Deg2RadConstant();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 == 0xbc2e2b3f) {
					bVar1 = (name == "Acos");
					if (bVar1) {
						pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Acos();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xbd386b75) {
					bVar1 = (name == "Pow");
					if (bVar1) {
						pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Pow() ;
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc9773aa3) {
					bVar1 = (name == "PingPong");
					if (bVar1) {
						pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__PingPong();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xe3112e29) {
				if (uVar2 < 0xd7ab87c9) {
					if (uVar2 == 0xd6176f0d) {
						bVar1 = (name == "BitwiseOr");
						if (bVar1) {
							pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__BitwiseOr();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xd7ab87c8) {
						bVar1 = (name == "Exp");
						if (bVar1) {
							pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Exp();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xe0993ada) {
					bVar1 = (name == "NegativeInfinity");
					if (bVar1) {
						pCVar4 = CustomLogicMathBuiltin.Bindings.__CreatePropertyBinding__NegativeInfinity();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xe2e31717) {
					bVar1 = (name == "Atan2");
					if (bVar1) {
						pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Atan2();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe3112e28) {
					bVar1 = (name == "Ceil");
					if (bVar1) {
						pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Ceil();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xf4248f7c) {
				if (uVar2 == 0xe740d999) {
					bVar1 = (name == "Infinity");
					if (bVar1) {
						pCVar4 = CustomLogicMathBuiltin.Bindings.__CreatePropertyBinding__Infinity();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xf176e11b) {
					bVar1 = (name == "BitwiseLeftShift");
					if (bVar1) {
						pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__BitwiseLeftShift();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xf4248f7b) {
					bVar1 = (name == "LerpUnclamped");
					if (bVar1) {
						pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__LerpUnclamped();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xf4c753db) {
				bVar1 = (name == "Round");
				if (bVar1) {
					if ((typeof(CustomLogicMathBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings)) ;
					}
					pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Round() ;
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfe1a87ef) {
				bVar1 = (name == "Sqrt");
				if (bVar1) {
					if ((typeof(CustomLogicMathBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings)) ;
					}
					pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Sqrt();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xff835f38) {
				bVar1 = (name == "Tan");
				if (bVar1) {
					if ((typeof(CustomLogicMathBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings)) ;
					}
					pCVar3 = CustomLogicMathBuiltin.Bindings.__CreateMethodBinding__Tan();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicMathBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003A45")]
		[Address(RVA = "0x5A2EEF0", Offset = "0x5A2DEF0", VA = "0x5A2EEF0")]
		public static CLPropertyBinding<CustomLogicMathBuiltin> __CreatePropertyBinding__PI()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__PI): 3 lines keep C-only constructs
			Func<CustomLogicMathBuiltin, object> __this;
			CLPropertyBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471c9 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicMathBuiltin>)) ;
				Il2CppMethodInitialized_075471c9 = true;
			}
			__this = new Func<CustomLogicMathBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__PI_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicMathBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003A46")]
		[Address(RVA = "0x5A2EF90", Offset = "0x5A2DF90", VA = "0x5A2EF90")]
		public static CLPropertyBinding<CustomLogicMathBuiltin> __CreatePropertyBinding__Infinity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__Infinity): 3 lines keep C-only constructs
			Func<CustomLogicMathBuiltin, object> __this;
			CLPropertyBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471ca == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicMathBuiltin>)) ;
				Il2CppMethodInitialized_075471ca = true;
			}
			__this = new Func<CustomLogicMathBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Infinity_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicMathBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003A47")]
		[Address(RVA = "0x5A2F030", Offset = "0x5A2E030", VA = "0x5A2F030")]
		public static CLPropertyBinding<CustomLogicMathBuiltin> __CreatePropertyBinding__NegativeInfinity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__NegativeInfinity): 3 lines keep C-only constructs
			Func<CustomLogicMathBuiltin, object> __this;
			CLPropertyBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471cb == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicMathBuiltin>)) ;
				Il2CppMethodInitialized_075471cb = true;
			}
			__this = new Func<CustomLogicMathBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__NegativeInfinity_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicMathBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003A48")]
		[Address(RVA = "0x5A2F0D0", Offset = "0x5A2E0D0", VA = "0x5A2F0D0")]
		public static CLPropertyBinding<CustomLogicMathBuiltin> __CreatePropertyBinding__Rad2DegConstant()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__Rad2DegConstant): 3 lines keep C-only constructs
			Func<CustomLogicMathBuiltin, object> __this;
			CLPropertyBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471cc == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicMathBuiltin>)) ;
				Il2CppMethodInitialized_075471cc = true;
			}
			__this = new Func<CustomLogicMathBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Rad2DegConstant_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicMathBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003A49")]
		[Address(RVA = "0x5A2F170", Offset = "0x5A2E170", VA = "0x5A2F170")]
		public static CLPropertyBinding<CustomLogicMathBuiltin> __CreatePropertyBinding__Deg2RadConstant()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__Deg2RadConstant): 3 lines keep C-only constructs
			Func<CustomLogicMathBuiltin, object> __this;
			CLPropertyBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471cd == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicMathBuiltin>)) ;
				Il2CppMethodInitialized_075471cd = true;
			}
			__this = new Func<CustomLogicMathBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Deg2RadConstant_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicMathBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003A4A")]
		[Address(RVA = "0x5A2F210", Offset = "0x5A2E210", VA = "0x5A2F210")]
		public static CLPropertyBinding<CustomLogicMathBuiltin> __CreatePropertyBinding__Epsilon()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__Epsilon): 3 lines keep C-only constructs
			Func<CustomLogicMathBuiltin, object> __this;
			CLPropertyBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471ce == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicMathBuiltin>)) ;
				Il2CppMethodInitialized_075471ce = true;
			}
			__this = new Func<CustomLogicMathBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Epsilon_g____getter_7_0);
			__this_00 = new CLPropertyBinding<CustomLogicMathBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003A4B")]
		[Address(RVA = "0x5A2F2B0", Offset = "0x5A2E2B0", VA = "0x5A2F2B0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Clamp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Clamp): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471cf == false) {
				Il2CppMethodInitialized_075471cf = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Clamp_b__8_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A4C")]
		[Address(RVA = "0x5A2F3F0", Offset = "0x5A2E3F0", VA = "0x5A2F3F0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Max()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Max): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471d0 == false) {
				Il2CppMethodInitialized_075471d0 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Max_b__9_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A4D")]
		[Address(RVA = "0x5A2F530", Offset = "0x5A2E530", VA = "0x5A2F530")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Min()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Min): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471d1 == false) {
				Il2CppMethodInitialized_075471d1 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Min_b__10_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A4E")]
		[Address(RVA = "0x5A2F670", Offset = "0x5A2E670", VA = "0x5A2F670")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Pow()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Pow): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471d2 == false) {
				Il2CppMethodInitialized_075471d2 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Pow_b__11_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A4F")]
		[Address(RVA = "0x5A2F7B0", Offset = "0x5A2E7B0", VA = "0x5A2F7B0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Abs()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Abs): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471d3 == false) {
				Il2CppMethodInitialized_075471d3 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__12_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__12_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Abs_b__12_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__12_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A50")]
		[Address(RVA = "0x5A2F8F0", Offset = "0x5A2E8F0", VA = "0x5A2F8F0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Sqrt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Sqrt): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471d4 == false) {
				Il2CppMethodInitialized_075471d4 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__13_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__13_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sqrt_b__13_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__13_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A51")]
		[Address(RVA = "0x5A2FA30", Offset = "0x5A2EA30", VA = "0x5A2FA30")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Repeat()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Repeat): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471d5 == false) {
				Il2CppMethodInitialized_075471d5 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__14_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__14_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Repeat_b__14_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__14_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A52")]
		[Address(RVA = "0x5A2FB70", Offset = "0x5A2EB70", VA = "0x5A2FB70")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Mod()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Mod): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471d6 == false) {
				Il2CppMethodInitialized_075471d6 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__15_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__15_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Mod_b__15_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__15_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A53")]
		[Address(RVA = "0x5A2FCB0", Offset = "0x5A2ECB0", VA = "0x5A2FCB0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Sin()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Sin): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471d7 == false) {
				Il2CppMethodInitialized_075471d7 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__16_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__16_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sin_b__16_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__16_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A54")]
		[Address(RVA = "0x5A2FDF0", Offset = "0x5A2EDF0", VA = "0x5A2FDF0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Cos()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Cos): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471d8 == false) {
				Il2CppMethodInitialized_075471d8 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__17_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__17_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Cos_b__17_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__17_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A55")]
		[Address(RVA = "0x5A2FF30", Offset = "0x5A2EF30", VA = "0x5A2FF30")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Tan()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Tan): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471d9 == false) {
				Il2CppMethodInitialized_075471d9 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__18_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__18_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Tan_b__18_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__18_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A56")]
		[Address(RVA = "0x5A30070", Offset = "0x5A2F070", VA = "0x5A30070")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Asin()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Asin): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471da == false) {
				Il2CppMethodInitialized_075471da = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__19_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__19_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Asin_b__19_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__19_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A57")]
		[Address(RVA = "0x5A301B0", Offset = "0x5A2F1B0", VA = "0x5A301B0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Acos()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Acos): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471db == false) {
				Il2CppMethodInitialized_075471db = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__20_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__20_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Acos_b__20_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__20_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A58")]
		[Address(RVA = "0x5A302F0", Offset = "0x5A2F2F0", VA = "0x5A302F0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Atan()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Atan): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471dc == false) {
				Il2CppMethodInitialized_075471dc = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__21_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__21_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Atan_b__21_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__21_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A59")]
		[Address(RVA = "0x5A30430", Offset = "0x5A2F430", VA = "0x5A30430")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Atan2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Atan2): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471dd == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Atan2_b__22_0) ;
				Il2CppMethodInitialized_075471dd = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__22_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__22_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Atan2_b__22_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__22_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A5A")]
		[Address(RVA = "0x5A30570", Offset = "0x5A2F570", VA = "0x5A30570")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Ceil()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Ceil): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471de == false) {
				Il2CppMethodInitialized_075471de = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__23_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__23_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Ceil_b__23_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__23_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A5B")]
		[Address(RVA = "0x5A306B0", Offset = "0x5A2F6B0", VA = "0x5A306B0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Floor()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Floor): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471df == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Floor_b__24_0) ;
				Il2CppMethodInitialized_075471df = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__24_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__24_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Floor_b__24_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__24_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A5C")]
		[Address(RVA = "0x5A307F0", Offset = "0x5A2F7F0", VA = "0x5A307F0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Round()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Round): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471e0 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Round_b__25_0) ;
				Il2CppMethodInitialized_075471e0 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__25_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__25_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Round_b__25_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__25_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A5D")]
		[Address(RVA = "0x5A30930", Offset = "0x5A2F930", VA = "0x5A30930")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Deg2Rad()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Deg2Rad): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471e1 == false) {
				Il2CppMethodInitialized_075471e1 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__26_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__26_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Deg2Rad_b__26_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__26_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A5E")]
		[Address(RVA = "0x5A30A70", Offset = "0x5A2FA70", VA = "0x5A30A70")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Rad2Deg()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Rad2Deg): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471e2 == false) {
				Il2CppMethodInitialized_075471e2 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__27_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__27_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Rad2Deg_b__27_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__27_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A5F")]
		[Address(RVA = "0x5A30BB0", Offset = "0x5A2FBB0", VA = "0x5A30BB0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Lerp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Lerp): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471e3 == false) {
				Il2CppMethodInitialized_075471e3 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__28_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__28_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__28_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__28_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A60")]
		[Address(RVA = "0x5A30CF0", Offset = "0x5A2FCF0", VA = "0x5A30CF0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__LerpUnclamped()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__LerpUnclamped): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471e4 == false) {
				Il2CppMethodInitialized_075471e4 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__29_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__29_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__29_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__29_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A61")]
		[Address(RVA = "0x5A30E30", Offset = "0x5A2FE30", VA = "0x5A30E30")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Sign()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Sign): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471e5 == false) {
				Il2CppMethodInitialized_075471e5 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__30_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__30_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sign_b__30_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__30_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A62")]
		[Address(RVA = "0x5A30F70", Offset = "0x5A2FF70", VA = "0x5A30F70")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__InverseLerp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__InverseLerp): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471e6 == false) {
				Il2CppMethodInitialized_075471e6 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__31_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__31_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__InverseLerp_b__31_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__31_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A63")]
		[Address(RVA = "0x5A310B0", Offset = "0x5A300B0", VA = "0x5A310B0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__LerpAngle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__LerpAngle): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471e7 == false) {
				Il2CppMethodInitialized_075471e7 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__32_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__32_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__LerpAngle_b__32_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__32_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A64")]
		[Address(RVA = "0x5A311F0", Offset = "0x5A301F0", VA = "0x5A311F0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Log()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Log): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471e8 == false) {
				Il2CppMethodInitialized_075471e8 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__33_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__33_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Log_b__33_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__33_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A65")]
		[Address(RVA = "0x5A31330", Offset = "0x5A30330", VA = "0x5A31330")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__MoveTowards()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__MoveTowards): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471e9 == false) {
				Il2CppMethodInitialized_075471e9 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__34_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__34_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__MoveTowards_b__34_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__34_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A66")]
		[Address(RVA = "0x5A31470", Offset = "0x5A30470", VA = "0x5A31470")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__MoveTowardsAngle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__MoveTowardsAngle): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471ea == false) {
				Il2CppMethodInitialized_075471ea = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__35_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__35_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__MoveTowardsAngle_b__35_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__35_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A67")]
		[Address(RVA = "0x5A315B0", Offset = "0x5A305B0", VA = "0x5A315B0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__PingPong()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__PingPong): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471eb == false) {
				Il2CppMethodInitialized_075471eb = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__36_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__36_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__PingPong_b__36_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__36_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A68")]
		[Address(RVA = "0x5A316F0", Offset = "0x5A306F0", VA = "0x5A316F0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__Exp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Exp): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471ec == false) {
				Il2CppMethodInitialized_075471ec = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__37_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__37_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Exp_b__37_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__37_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A69")]
		[Address(RVA = "0x5A31830", Offset = "0x5A30830", VA = "0x5A31830")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__SmoothStep()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__SmoothStep): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471ed == false) {
				Il2CppMethodInitialized_075471ed = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__38_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__38_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__SmoothStep_b__38_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__38_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A6A")]
		[Address(RVA = "0x5A31970", Offset = "0x5A30970", VA = "0x5A31970")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__BitwiseAnd()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseAnd): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471ee == false) {
				Il2CppMethodInitialized_075471ee = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__39_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__39_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseAnd_b__39_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__39_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A6B")]
		[Address(RVA = "0x5A31AB0", Offset = "0x5A30AB0", VA = "0x5A31AB0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__BitwiseOr()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseOr): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471ef == false) {
				Il2CppMethodInitialized_075471ef = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__40_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__40_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseOr_b__40_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__40_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A6C")]
		[Address(RVA = "0x5A31BF0", Offset = "0x5A30BF0", VA = "0x5A31BF0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__BitwiseXor()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseXor): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471f0 == false) {
				Il2CppMethodInitialized_075471f0 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__41_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__41_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseXor_b__41_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__41_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A6D")]
		[Address(RVA = "0x5A31D30", Offset = "0x5A30D30", VA = "0x5A31D30")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__BitwiseNot()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseNot): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471f1 == false) {
				Il2CppMethodInitialized_075471f1 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__42_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__42_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseNot_b__42_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__42_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A6E")]
		[Address(RVA = "0x5A31E70", Offset = "0x5A30E70", VA = "0x5A31E70")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__BitwiseLeftShift()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseLeftShift): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471f2 == false) {
				Il2CppMethodInitialized_075471f2 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__43_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__43_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseLeftShift_b__43_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__43_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003A6F")]
		[Address(RVA = "0x5A31FB0", Offset = "0x5A30FB0", VA = "0x5A31FB0")]
		public static CLMethodBinding<CustomLogicMathBuiltin> __CreateMethodBinding__BitwiseRightShift()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseRightShift): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMathBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMathBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471f3 == false) {
				Il2CppMethodInitialized_075471f3 = true;
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMathBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__44_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMathBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__44_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMathBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicMathBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMathBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseRightShift_b__44_0);
				pCVar2 = typeof(CustomLogicMathBuiltin.Bindings.c).static_fields;
				pCVar2.__9__44_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMathBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x17000A45")]
	public static float PI
	{
		[Token(Token = "0x6003A14")]
		[Address(RVA = "0x5A2D170", Offset = "0x5A2C170", VA = "0x5A2D170")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$get_PI): clean
			return 3.1415927;
		}
	}

	[Token(Token = "0x17000A46")]
	public static float Infinity
	{
		[Token(Token = "0x6003A15")]
		[Address(RVA = "0x5A2D180", Offset = "0x5A2C180", VA = "0x5A2D180")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$get_Infinity): clean
			return INFINITY;
		}
	}

	[Token(Token = "0x17000A47")]
	public static float NegativeInfinity
	{
		[Token(Token = "0x6003A16")]
		[Address(RVA = "0x5A2D190", Offset = "0x5A2C190", VA = "0x5A2D190")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$get_NegativeInfinity): clean
			return -INFINITY;
		}
	}

	[Token(Token = "0x17000A48")]
	public static float Rad2DegConstant
	{
		[Token(Token = "0x6003A17")]
		[Address(RVA = "0x5A2D1A0", Offset = "0x5A2C1A0", VA = "0x5A2D1A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$get_Rad2DegConstant): clean
			return 57.29578;
		}
	}

	[Token(Token = "0x17000A49")]
	public static float Deg2RadConstant
	{
		[Token(Token = "0x6003A18")]
		[Address(RVA = "0x5A2D1B0", Offset = "0x5A2C1B0", VA = "0x5A2D1B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$get_Deg2RadConstant): clean
			return 0.017453292;
		}
	}

	[Token(Token = "0x17000A4A")]
	public static float Epsilon
	{
		[Token(Token = "0x6003A19")]
		[Address(RVA = "0x5A2D1C0", Offset = "0x5A2C1C0", VA = "0x5A2D1C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$get_Epsilon): clean
			return Mathf.Epsilon;
		}
	}

	[Token(Token = "0x17000A4B")]
	public override string ClassName
	{
		[Token(Token = "0x6003A3F")]
		[Address(RVA = "0x5A2DDA0", Offset = "0x5A2CDA0", VA = "0x5A2DDA0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$get_ClassName): clean
			return "Math";
		}
	}

	[Token(Token = "0x17000A4C")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003A40")]
		[Address(RVA = "0x5A2DDD0", Offset = "0x5A2CDD0", VA = "0x5A2DDD0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000A4D")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003A41")]
		[Address(RVA = "0x5A2DDE0", Offset = "0x5A2CDE0", VA = "0x5A2DDE0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000A4E")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003A42")]
		[Address(RVA = "0x5A2DDF0", Offset = "0x5A2CDF0", VA = "0x5A2DDF0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003A13")]
	[Address(RVA = "0x5A2D100", Offset = "0x5A2C100", VA = "0x5A2D100")]
	public CustomLogicMathBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075471bf == false) {
			Il2CppMethodInitialized_075471bf = true;
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

	[Token(Token = "0x6003A1A")]
	[Address(RVA = "0x5A2D200", Offset = "0x5A2C200", VA = "0x5A2D200")]
	public object Clamp(object value, object min, object max)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Clamp): 14 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		object pIVar3;
		uint puVar4;
		Il2CppClass klass;
		float fVar5;
		uint uStack_50;
		uint uStack_4c;
		float fStack_48;
		float fStack_38;

		if ((value != null) && (value.klass == g_data_07556710)) {
			puVar4 = il2cpp_vm_Object_Unbox(value);
			if ((min != null) && (min.klass == g_data_07556710)) {
				uVar1 = *puVar4;
				puVar4 = il2cpp_vm_Object_Unbox(min);
				if ((max != null) && (max.klass == g_data_07556710)) {
					uVar2 = *puVar4;
					puVar4 = il2cpp_vm_Object_Unbox(max);
					uStack_4c = *puVar4;
					if ((int)uVar1 < (int)*puVar4) {
						uStack_4c = uVar1;
					}
					if ((int)uVar1 < (int)uVar2) {
						uStack_4c = uVar2;
					}
					puVar4 = &uStack_4c;
					klass = g_data_07556710;
					goto label_05b2d2d6;
				}
			}
		}
		fStack_38 = CustomLogicEvaluator.ConvertTo<float>(value);
		fStack_48 = CustomLogicEvaluator.ConvertTo<float>(min);
		fVar5 = CustomLogicEvaluator.ConvertTo<float>(max);
		if (fStack_38 <= fVar5) {
			fVar5 = fStack_38;
		}
		uStack_50 = ~-(uint)(fStack_48 <= fStack_38) & (uint)fStack_48 |(uint)fVar5 & -(uint)(fStack_48 <= fStack_38);
		puVar4 = &uStack_50;
		klass = g_data_07556740;
	label_05b2d2d6: ;
		return pIVar3;
	}

	[Token(Token = "0x6003A1B")]
	[Address(RVA = "0x5A2D350", Offset = "0x5A2C350", VA = "0x5A2D350")]
	public object Max(object a, object b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Max): 11 lines keep C-only constructs
		object pIVar1;
		float pfVar2;
		Il2CppClass klass;
		float fVar3;
		float fVar4;
		float local_20;
		float local_1c;

		if ((a != null) && (a.klass == g_data_07556710)) {
			pfVar2 = il2cpp_vm_Object_Unbox(a);
			if ((b != null) && (b.klass == g_data_07556710)) {
				fVar3 = *pfVar2;
				pfVar2 = il2cpp_vm_Object_Unbox(b);
				local_1c = *pfVar2;
				if ((int)*pfVar2 < (int)fVar3) {
					local_1c = fVar3;
				}
				pfVar2 = &local_1c;
				klass = g_data_07556710;
				goto label_05b2d3f7;
			}
		}
		fVar3 = CustomLogicEvaluator.ConvertTo<float>(a);
		fVar4 = CustomLogicEvaluator.ConvertTo<float>(b);
		local_20 = fVar3;
		if (fVar3 <= fVar4) {
			local_20 = fVar4;
		}
		pfVar2 = &local_20;
		klass = g_data_07556740;
	label_05b2d3f7: ;
		return pIVar1;
	}

	[Token(Token = "0x6003A1C")]
	[Address(RVA = "0x5A2D440", Offset = "0x5A2C440", VA = "0x5A2D440")]
	public object Min(object a, object b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Min): 11 lines keep C-only constructs
		object pIVar1;
		float pfVar2;
		Il2CppClass klass;
		float fVar3;
		float fVar4;
		float local_20;
		float local_1c;

		if ((a != null) && (a.klass == g_data_07556710)) {
			pfVar2 = il2cpp_vm_Object_Unbox(a);
			if ((b != null) && (b.klass == g_data_07556710)) {
				fVar3 = *pfVar2;
				pfVar2 = il2cpp_vm_Object_Unbox(b);
				local_1c = *pfVar2;
				if ((int)fVar3 < (int)*pfVar2) {
					local_1c = fVar3;
				}
				pfVar2 = &local_1c;
				klass = g_data_07556710;
				goto label_05b2d4e7;
			}
		}
		fVar3 = CustomLogicEvaluator.ConvertTo<float>(a);
		fVar4 = CustomLogicEvaluator.ConvertTo<float>(b);
		local_20 = fVar3;
		if (fVar4 <= fVar3) {
			local_20 = fVar4;
		}
		pfVar2 = &local_20;
		klass = g_data_07556740;
	label_05b2d4e7: ;
		return pIVar1;
	}

	[Token(Token = "0x6003A1D")]
	[Address(RVA = "0x5A2D530", Offset = "0x5A2C530", VA = "0x5A2D530")]
	public float Pow(float a, float b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Pow): clean
		float fVar1;

		fVar1 = powf(this, a, b, method);
		return fVar1;
	}

	[Token(Token = "0x6003A1E")]
	[Address(RVA = "0x5A2D540", Offset = "0x5A2C540", VA = "0x5A2D540")]
	public object Abs(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Abs): 12 lines keep C-only constructs
		int iVar1;
		uint uVar2;
		int iVar3;
		ulong in_RAX;
		int piVar4;
		object pIVar5;
		ulong data;
		Il2CppClass klass;
		float fVar6;
		ulong uStack_18;

		uStack_18 = in_RAX;
		if ((value == null) || (value.klass != g_data_07556710)) {
			fVar6 = CustomLogicEvaluator.ConvertTo<float>(value);
			data = &uStack_18;
			uStack_18 = CONCAT44(uStack_18._4_4_, fVar6) & 0xffffffff7fffffff;
			klass = g_data_07556740;
		}
		else {
			piVar4 = il2cpp_vm_Object_Unbox(value);
			iVar1 = *piVar4;
			if (Il2CppMethodInitialized_07541ba3 == false) {
				Il2CppMethodInitialized_07541ba3 = true;
				uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			iVar3 = -iVar1;
			if (iVar3 < 0) {
				iVar3 = iVar1;
			}
			uStack_18 = CONCAT44(iVar3, (undefined4)uStack_18);
			data = (ulong)((long)&uStack_18 + 4);
			klass = g_data_07556710;
		}
		return pIVar5;
	}

	[Token(Token = "0x6003A1F")]
	[Address(RVA = "0x5A2D640", Offset = "0x5A2C640", VA = "0x5A2D640")]
	public float Sqrt(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Sqrt): clean
		float fVar1;

		if (0.0 <= value) {
			return SQRT(value);
		}
		return fVar1;
	}

	[Token(Token = "0x6003A20")]
	[Address(RVA = "0x5A2D660", Offset = "0x5A2C660", VA = "0x5A2D660")]
	public object Repeat(object value, object max)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Repeat): clean
		object pIVar1;
		float fVar2;
		float fVar3;
		uint uStack_3c;
		float fStack_38;
		float fStack_28;

		fStack_38 = MiscExtensions.UnboxToFloat(value);
		fStack_28 = MiscExtensions.UnboxToFloat(max);
		fVar2 = floorf(fStack_38 / fStack_28);
		fVar3 = fStack_38 - fVar2 * fStack_28;
		fVar2 = fStack_28;
		if (fVar3 <= fStack_28) {
			fVar2 = fVar3;
		}
		uStack_3c = -(uint)(0.0 <= fVar3) & (uint)fVar2;
		return pIVar1;
	}

	[Token(Token = "0x6003A21")]
	[Address(RVA = "0x5A2D720", Offset = "0x5A2C720", VA = "0x5A2D720")]
	public int Mod(int a, int b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Mod): clean
		return a % b;
	}

	[Token(Token = "0x6003A22")]
	[Address(RVA = "0x5A2D730", Offset = "0x5A2C730", VA = "0x5A2D730")]
	public float Sin(float angle)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Sin): clean
		float fVar1;

		fVar1 = sinf(angle * 0.017453292);
		return fVar1;
	}

	[Token(Token = "0x6003A23")]
	[Address(RVA = "0x5A2D740", Offset = "0x5A2C740", VA = "0x5A2D740")]
	public float Cos(float angle)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Cos): clean
		float fVar1;

		fVar1 = cosf(angle * 0.017453292);
		return fVar1;
	}

	[Token(Token = "0x6003A24")]
	[Address(RVA = "0x5A2D750", Offset = "0x5A2C750", VA = "0x5A2D750")]
	public float Tan(float angle)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Tan): clean
		float fVar1;

		fVar1 = tanf(angle * 0.017453292);
		return fVar1;
	}

	[Token(Token = "0x6003A25")]
	[Address(RVA = "0x5A2D760", Offset = "0x5A2C760", VA = "0x5A2D760")]
	public float Asin(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Asin): clean
		float fVar1;

		fVar1 = asinf(value);
		return fVar1 * 57.29578;
	}

	[Token(Token = "0x6003A26")]
	[Address(RVA = "0x5A2D770", Offset = "0x5A2C770", VA = "0x5A2D770")]
	public float Acos(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Acos): clean
		float fVar1;

		fVar1 = acosf(value);
		return fVar1 * 57.29578;
	}

	[Token(Token = "0x6003A27")]
	[Address(RVA = "0x5A2D780", Offset = "0x5A2C780", VA = "0x5A2D780")]
	public float Atan(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Atan): clean
		float fVar1;

		fVar1 = atanf(value);
		return fVar1 * 57.29578;
	}

	[Token(Token = "0x6003A28")]
	[Address(RVA = "0x5A2D790", Offset = "0x5A2C790", VA = "0x5A2D790")]
	public float Atan2(float a, float b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Atan2): clean
		float fVar1;

		fVar1 = atan2f(a, b);
		return fVar1 * 57.29578;
	}

	[Token(Token = "0x6003A29")]
	[Address(RVA = "0x5A2D7A0", Offset = "0x5A2C7A0", VA = "0x5A2D7A0")]
	public int Ceil(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Ceil): clean
		uint uVar1;
		float fVar2;

		if (Il2CppMethodInitialized_0753e7f9 == false) {
			Il2CppMethodInitialized_0753e7f9 = true;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			fVar2 = ceilf(value);
			return (int)fVar2;
		}
		fVar2 = ceilf(value);
		return (int)fVar2;
	}

	[Token(Token = "0x6003A2A")]
	[Address(RVA = "0x5A2D820", Offset = "0x5A2C820", VA = "0x5A2D820")]
	public int Floor(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Floor): clean
		uint uVar1;
		float fVar2;

		if (Il2CppMethodInitialized_0753e7f6 == false) {
			Il2CppMethodInitialized_0753e7f6 = true;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			fVar2 = floorf(value);
			return (int)fVar2;
		}
		fVar2 = floorf(value);
		return (int)fVar2;
	}

	[Token(Token = "0x6003A2B")]
	[Address(RVA = "0x5A2D8A0", Offset = "0x5A2C8A0", VA = "0x5A2D8A0")]
	public int Round(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Round): 1 lines keep C-only constructs
		uint uVar1;
		MethodInfo method_00;
		double dVar2;
		double dVar3;
		Il2CppMethodPointer local_8;

		if (Il2CppMethodInitialized_07541320 == false) {
			Il2CppMethodInitialized_07541320 = true;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		dVar2 = (double)value;
		method_00 = (MethodInfo)&local_8;
		dVar3 = modf(dVar2, (double)method_00, method);
		if (0.0 <= value) {
			if ((dVar3 != 0.5) || (NAN(dVar3))) {
				dVar2 = floor(dVar2 + 0.5, method_00);
				return (int)dVar2;
			}
			if (((long)(double)local_8 & 1U) != 0) {
				return (int)((double)local_8 + 1.0);
			}
		}
		else {
			if ((dVar3 != -0.5) || (NAN(dVar3))) {
				dVar2 = ceil(dVar2 + -0.5, method_00);
				return (int)dVar2;
			}
			if (((long)(double)local_8 & 1U) != 0) {
				local_8 = (Il2CppMethodPointer)((double)local_8 + -1.0);
			}
		}
		return (int)(double)local_8;
	}

	[Token(Token = "0x6003A2C")]
	[Address(RVA = "0x5A2D9C0", Offset = "0x5A2C9C0", VA = "0x5A2D9C0")]
	public float Deg2Rad(float angle)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Deg2Rad): clean
		return angle * 0.017453292;
	}

	[Token(Token = "0x6003A2D")]
	[Address(RVA = "0x5A2D9D0", Offset = "0x5A2C9D0", VA = "0x5A2D9D0")]
	public float Rad2Deg(float angle)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Rad2Deg): clean
		return angle * 57.29578;
	}

	[Token(Token = "0x6003A2E")]
	[Address(RVA = "0x5A2D9E0", Offset = "0x5A2C9E0", VA = "0x5A2D9E0")]
	public float Lerp(float a, float b, float t)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Lerp): clean
		float fVar1;

		fVar1 = 1.0;
		if (t <= 1.0) {
			fVar1 = t;
		}
		return a + (float)((uint)fVar1 & -(uint)(0.0 <= t)) * (b - a);
	}

	[Token(Token = "0x6003A2F")]
	[Address(RVA = "0x5A2DA10", Offset = "0x5A2CA10", VA = "0x5A2DA10")]
	public float LerpUnclamped(float a, float b, float t)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$LerpUnclamped): clean
		return a + (b - a) * t;
	}

	[Token(Token = "0x6003A30")]
	[Address(RVA = "0x5A2DA20", Offset = "0x5A2CA20", VA = "0x5A2DA20")]
	public float Sign(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Sign): 1 lines keep C-only constructs
		return *(float)(&g_data_0100ad30 + (ulong)(0.0 <= value) * 4);
	}

	[Token(Token = "0x6003A31")]
	[Address(RVA = "0x5A2DA40", Offset = "0x5A2CA40", VA = "0x5A2DA40")]
	public float InverseLerp(float a, float b, float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$InverseLerp): clean
		float fVar1;
		float fVar2;

		if ((a == b) && (!NAN(a) && !NAN(b))) {
			return 0.0;
		}
		fVar2 = (value - a) / (b - a);
		fVar1 = 1.0;
		if (fVar2 <= 1.0) {
			fVar1 = fVar2;
		}
		return (float)(-(uint)(0.0 <= fVar2) & (uint)fVar1);
	}

	[Token(Token = "0x6003A32")]
	[Address(RVA = "0x5A2DA80", Offset = "0x5A2CA80", VA = "0x5A2DA80")]
	public float LerpAngle(float a, float b, float t)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$LerpAngle): 6 lines keep C-only constructs
		float fVar1;
		float fVar2;
		byte[] auVar3 = new byte[12];

		fVar1 = floorf((b - a) / 360.0);
		fVar1 = fVar1 * -360.0 + (b - a);
		auVar3 = ZEXT812(0x43b40000);
		if (fVar1 <= auVar3._0_4_) {
			auVar3._4_8_ = auVar3._4_8_;
			auVar3._0_4_ = fVar1;
		}
		fVar2 = (float)(-(uint)(0.0 <= fVar1) & auVar3._0_4_);
		fVar1 = 1.0;
		if (t <= 1.0) {
			fVar1 = t;
		}
		return (float)(-(uint)(0.0 <= t) & (uint)fVar1) *(float)(~-(uint)(180.0 < fVar2) & (uint)fVar2 | (uint)(fVar2 + -360.0) & -(uint)(180.0 < fVar2)) + a;
	}

	[Token(Token = "0x6003A33")]
	[Address(RVA = "0x5A2DB20", Offset = "0x5A2CB20", VA = "0x5A2DB20")]
	public float Log(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Log): clean
		float fVar1;

		fVar1 = logf(this, value, method);
		return fVar1;
	}

	[Token(Token = "0x6003A34")]
	[Address(RVA = "0x5A2DB30", Offset = "0x5A2CB30", VA = "0x5A2DB30")]
	public float MoveTowards(float current, float target, float maxDelta)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$MoveTowards): clean
		uint uVar1;
		uint uVar2;

		uVar1 = -(uint)(0.0 <= target - current);
		uVar2 = -(uint)(maxDelta < ABS(target - current));
		return (float)((uint)(current + (float)(~uVar1 & (uint)-maxDelta | uVar1 & (uint)maxDelta)) & uVar2 | ~uVar2 & (uint)target);
	}

	[Token(Token = "0x6003A35")]
	[Address(RVA = "0x5A2DB80", Offset = "0x5A2CB80", VA = "0x5A2DB80")]
	public float MoveTowardsAngle(float current, float target, float maxDelta)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$MoveTowardsAngle): 6 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		float fVar3;
		byte[] auVar4 = new byte[12];
		float fVar5;

		fVar3 = floorf((target - current) / 360.0);
		fVar3 = fVar3 * -360.0 + (target - current);
		auVar4 = ZEXT812(0x43b40000);
		if (fVar3 <= auVar4._0_4_) {
			auVar4._4_8_ = auVar4._4_8_;
			auVar4._0_4_ = fVar3;
		}
		fVar3 = (float)(-(uint)(0.0 <= fVar3) & auVar4._0_4_);
		fVar3 = (float)(~-(uint)(180.0 < fVar3) & (uint)fVar3 | (uint)(fVar3 + -360.0) & -(uint)(180.0 < fVar3));
		if ((-maxDelta < fVar3) && (fVar3 < maxDelta)) {
			return target;
		}
		fVar5 = (fVar3 + current) - current;
		uVar1 = -(uint)(0.0 <= fVar5);
		uVar2 = -(uint)(maxDelta < ABS(fVar5));
		return (float)(uVar2 & (uint)((float)(~uVar1 & (uint)-maxDelta | uVar1 & (uint)maxDelta) + current) | ~uVar2 & (uint)(fVar3 + current));
	}

	[Token(Token = "0x6003A36")]
	[Address(RVA = "0x5A2DC70", Offset = "0x5A2CC70", VA = "0x5A2DC70")]
	public float PingPong(float t, float length)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$PingPong): clean
		float fVar1;
		float fVar2;

		fVar2 = length + length;
		fVar1 = floorf(t / fVar2);
		fVar1 = t - fVar1 * fVar2;
		if (fVar1 <= fVar2) {
			fVar2 = fVar1;
		}
		return length - ABS((float)(-(uint)(0.0 <= fVar1) & (uint)fVar2) - length);
	}

	[Token(Token = "0x6003A37")]
	[Address(RVA = "0x5A2DCD0", Offset = "0x5A2CCD0", VA = "0x5A2DCD0")]
	public float Exp(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$Exp): clean
		float fVar1;

		fVar1 = expf(this, value, method);
		return fVar1;
	}

	[Token(Token = "0x6003A38")]
	[Address(RVA = "0x5A2DCE0", Offset = "0x5A2CCE0", VA = "0x5A2DCE0")]
	public float SmoothStep(float a, float b, float t)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$SmoothStep): clean
		float fVar1;

		fVar1 = 1.0;
		if (t <= 1.0) {
			fVar1 = t;
		}
		fVar1 = (float)(-(uint)(0.0 <= t) & (uint)fVar1);
		fVar1 = fVar1 * 3.0 * fVar1 - (fVar1 + fVar1) * fVar1 * fVar1;
		return a * (1.0 - fVar1) + b * fVar1;
	}

	[Token(Token = "0x6003A39")]
	[Address(RVA = "0x5A2DD40", Offset = "0x5A2CD40", VA = "0x5A2DD40")]
	public int BitwiseAnd(int a, int b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$BitwiseAnd): clean
		return a & b;
	}

	[Token(Token = "0x6003A3A")]
	[Address(RVA = "0x5A2DD50", Offset = "0x5A2CD50", VA = "0x5A2DD50")]
	public int BitwiseOr(int a, int b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$BitwiseOr): clean
		return a | b;
	}

	[Token(Token = "0x6003A3B")]
	[Address(RVA = "0x5A2DD60", Offset = "0x5A2CD60", VA = "0x5A2DD60")]
	public int BitwiseXor(int a, int b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$BitwiseXor): clean
		return a ^ b;
	}

	[Token(Token = "0x6003A3C")]
	[Address(RVA = "0x5A2DD70", Offset = "0x5A2CD70", VA = "0x5A2DD70")]
	public int BitwiseNot(int value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$BitwiseNot): clean
		return ~value;
	}

	[Token(Token = "0x6003A3D")]
	[Address(RVA = "0x5A2DD80", Offset = "0x5A2CD80", VA = "0x5A2DD80")]
	public int BitwiseLeftShift(int value, int shift)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$BitwiseLeftShift): clean
		return value << ((byte)shift & 0x1f);
	}

	[Token(Token = "0x6003A3E")]
	[Address(RVA = "0x5A2DD90", Offset = "0x5A2CD90", VA = "0x5A2DD90")]
	public int BitwiseRightShift(int value, int shift)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c (CustomLogic.CustomLogicMathBuiltin$$BitwiseRightShift): clean
		return value >> ((byte)shift & 0x1f);
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicMathBuiltin.c.

	// CustomLogic.CustomLogicMathBuiltin.Bindings$$.cctor: 1 lines keep C-only constructs
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"PI");
		__this.Add((Il2CppObject *)"Infinity");
		__this.Add((Il2CppObject *)"NegativeInfinity");
		__this.Add((Il2CppObject *)"Rad2DegConstant");
		__this.Add((Il2CppObject *)"Deg2RadConstant");
		__this.Add((Il2CppObject *)"Epsilon");
		__this.Add((Il2CppObject *)"Clamp");
		__this.Add((Il2CppObject *)"Max");
		__this.Add((Il2CppObject *)"Min");
		__this.Add((Il2CppObject *)"Pow");
		__this.Add((Il2CppObject *)"Abs");
		__this.Add((Il2CppObject *)"Sqrt");
		__this.Add((Il2CppObject *)"Repeat");
		__this.Add((Il2CppObject *)"Mod");
		__this.Add((Il2CppObject *)"Sin");
		__this.Add((Il2CppObject *)"Cos");
		__this.Add((Il2CppObject *)"Tan");
		__this.Add((Il2CppObject *)"Asin");
		__this.Add((Il2CppObject *)"Acos");
		__this.Add((Il2CppObject *)"Atan");
		__this.Add((Il2CppObject *)"Atan2");
		__this.Add((Il2CppObject *)"Ceil");
		__this.Add((Il2CppObject *)"Floor");
		__this.Add((Il2CppObject *)"Round");
		__this.Add((Il2CppObject *)"Deg2Rad");
		__this.Add((Il2CppObject *)"Rad2Deg");
		__this.Add((Il2CppObject *)"Lerp");
		__this.Add((Il2CppObject *)"LerpUnclamped");
		__this.Add((Il2CppObject *)"Sign");
		__this.Add((Il2CppObject *)"InverseLerp");
		__this.Add((Il2CppObject *)"LerpAngle");
		__this.Add((Il2CppObject *)"Log");
		__this.Add((Il2CppObject *)"MoveTowards");
		__this.Add((Il2CppObject *)"MoveTowardsAngle");
		__this.Add((Il2CppObject *)"PingPong");
		__this.Add((Il2CppObject *)"Exp");
		__this.Add((Il2CppObject *)"SmoothStep");
		__this.Add((Il2CppObject *)"BitwiseAnd");
		__this.Add((Il2CppObject *)"BitwiseOr");
		__this.Add((Il2CppObject *)"BitwiseXor");
		__this.Add((Il2CppObject *)"BitwiseNot");
		__this.Add((Il2CppObject *)"BitwiseLeftShift");
		__this.Add((Il2CppObject *)"BitwiseRightShift");
		CustomLogicMathBuiltin.Bindings.MemberNames = __this;
		Il2CppCodeGenWriteBarrier(&CustomLogicMathBuiltin.Bindings.MemberNames) ;
		return;
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__PI>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__PI_g____getter_2_0(CustomLogicMathBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__Infinity>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Infinity_g____getter_3_0(CustomLogicMathBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__NegativeInfinity>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__NegativeInfinity_g____getter_4_0(CustomLogicMathBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__Rad2DegConstant>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Rad2DegConstant_g____getter_5_0(CustomLogicMathBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__Deg2RadConstant>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Deg2RadConstant_g____getter_6_0(CustomLogicMathBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__Epsilon>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Epsilon_g____getter_7_0(CustomLogicMathBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicMathBuiltin.Bindings.c();
		CustomLogicMathBuiltin.Bindings.c.__9 =(CustomLogicMathBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clamp>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__Clamp_b__8_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object pIVar2;

		if (__a != null) {
			uVar1 = (uint)__a.Length;
			if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				pIVar2 = this.Clamp(__a[0], __a[1], __a[2]);
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Max>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__Max_b__9_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		int iVar1;
		object pIVar2;

		if (__a != null) {
			iVar1 = (int)__a.Length;
			if ((iVar1 == 0) || (iVar1 == 1)) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				pIVar2 = this.Max(__a[0], __a[1]);
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Min>b__10_0: clean
	private object Bindings_c____CreateMethodBinding__Min_b__10_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		int iVar1;
		object pIVar2;

		if (__a != null) {
			iVar1 = (int)__a.Length;
			if ((iVar1 == 0) || (iVar1 == 1)) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				pIVar2 = this.Min(__a[0], __a[1]);
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Pow>b__11_0: 6 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Pow_b__11_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		ulong in_RAX;
		object pIVar1;
		MethodInfo method_00;
		CustomLogicMathBuiltin __this_00;
		float fVar2;
		ulong uStack_28;

		uStack_28 = in_RAX;
		if (__a == null) {
	label_05b32a0c: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			fVar2 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			uStack_28 = CONCAT44(uStack_28._4_4_, fVar2);
			if ((__a.Length & 0xfffffffe) != 0) {
				__this_00 = (CustomLogicMathBuiltin)__a[1];
				method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
				fVar2 = CustomLogicEvaluator.ConvertTo<float>((object)__this_00);
				if (__c != null) {
					fVar2 = powf(__this_00, (float)uStack_28, fVar2, method_00);
					uStack_28 = CONCAT44(fVar2, (float)uStack_28);
					pIVar1 = (object)(((long)&uStack_28 + 4));
					return pIVar1;
				}
				goto label_05b32a0c;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Abs>b__12_0: clean
	private object Bindings_c____CreateMethodBinding__Abs_b__12_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Sqrt>b__13_0: clean
	private object Bindings_c____CreateMethodBinding__Sqrt_b__13_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		float __x;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			__x = CustomLogicEvaluator.ConvertTo<float>(pIVar1) ;
			if (__c != null) {
				if (__x < 0.0) {
					sqrtf(__x);
				}
				pIVar1 = (object)auStack_14;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Repeat>b__14_0: clean
	private object Bindings_c____CreateMethodBinding__Repeat_b__14_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		int iVar1;
		object obj;
		object pIVar2;
		float fVar3;
		float fVar4;
		uint uStack_3c;
		float fStack_38;
		float fStack_28;

		if (__a != null) {
			iVar1 = (int)__a.Length;
			if ((iVar1 == 0) || (iVar1 == 1)) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				pIVar2 = __a[0];
				obj = __a[1];
				fStack_38 = MiscExtensions.UnboxToFloat(pIVar2);
				fStack_28 = MiscExtensions.UnboxToFloat(obj);
				fVar3 = floorf(fStack_38 / fStack_28);
				fVar4 = fStack_38 - fVar3 * fStack_28;
				fVar3 = fStack_28;
				if (fVar4 <= fStack_28) {
					fVar3 = fVar4;
				}
				uStack_3c = -(uint)(0.0 <= fVar4) & (uint)fVar3;
				pIVar2 = (object)uStack_3c;
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Mod>b__15_0: clean
	private object Bindings_c____CreateMethodBinding__Mod_b__15_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		byte[] auStack_24 = new byte[4];

		if (__a == null) {
	label_05b32ca5: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			CustomLogicEvaluator.ConvertTo<int>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				CustomLogicEvaluator.ConvertTo<int>(__a[1]);
				if (__c != null) {
					pIVar1 = (object)auStack_24;
					return pIVar1;
				}
				goto label_05b32ca5;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Sin>b__16_0: clean
	private object Bindings_c____CreateMethodBinding__Sin_b__16_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		float fVar2;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			fVar2 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if (__c != null) {
				sinf(fVar2 * 0.017453292);
				pIVar1 = (object)auStack_14;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Cos>b__17_0: clean
	private object Bindings_c____CreateMethodBinding__Cos_b__17_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		float fVar2;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			fVar2 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if (__c != null) {
				cosf(fVar2 * 0.017453292);
				pIVar1 = (object)auStack_14;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Tan>b__18_0: clean
	private object Bindings_c____CreateMethodBinding__Tan_b__18_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		float fVar2;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			fVar2 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if (__c != null) {
				tanf(fVar2 * 0.017453292);
				pIVar1 = (object)auStack_14;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Asin>b__19_0: clean
	private object Bindings_c____CreateMethodBinding__Asin_b__19_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		float __x;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			__x = CustomLogicEvaluator.ConvertTo<float>(pIVar1) ;
			if (__c != null) {
				asinf(__x);
				pIVar1 = (object)auStack_14;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Acos>b__20_0: clean
	private object Bindings_c____CreateMethodBinding__Acos_b__20_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		float __x;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			__x = CustomLogicEvaluator.ConvertTo<float>(pIVar1) ;
			if (__c != null) {
				acosf(__x);
				pIVar1 = (object)auStack_14;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Atan>b__21_0: clean
	private object Bindings_c____CreateMethodBinding__Atan_b__21_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		float __x;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			__x = CustomLogicEvaluator.ConvertTo<float>(pIVar1) ;
			if (__c != null) {
				atanf(__x);
				pIVar1 = (object)auStack_14;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Atan2>b__22_0: 5 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Atan2_b__22_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		ulong in_RAX;
		object pIVar1;
		float fVar2;
		ulong uStack_28;

		uStack_28 = in_RAX;
		if (__a == null) {
	label_05b331a4: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			fVar2 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			uStack_28 = CONCAT44(uStack_28._4_4_, fVar2);
			if ((__a.Length & 0xfffffffe) != 0) {
				fVar2 = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if (__c != null) {
					fVar2 = atan2f((float)uStack_28, fVar2);
					uStack_28 = CONCAT44(fVar2 * 57.29578, (float)uStack_28);
					pIVar1 = (object)(((long)&uStack_28 + 4));
					return pIVar1;
				}
				goto label_05b331a4;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Ceil>b__23_0: 7 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Ceil_b__23_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		uint uVar1;
		ulong in_RAX;
		object pIVar2;
		float fVar3;
		ulong uStack_18;

		uStack_18 = in_RAX;
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			fVar3 = CustomLogicEvaluator.ConvertTo<float>(pIVar2);
			if (__c != null) {
				if (Il2CppMethodInitialized_0753e7f9 == false) {
					uStack_18 = CONCAT44(uStack_18._4_4_, fVar3);
					Il2CppMethodInitialized_0753e7f9 = true;
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					fVar3 = (float)uStack_18;
				}
				else {
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
					uStack_18._4_4_ = (undefined4)((ulong)uStack_18 >> 0x20);
					uStack_18 = CONCAT44(uStack_18._4_4_, fVar3);
					fVar3 = (float)uStack_18;
				}
				fVar3 = ceilf(fVar3);
				uStack_18 = CONCAT44((int)fVar3, (float)uStack_18);
				pIVar2 = (object)(((long)&uStack_18 + 4));
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Floor>b__24_0: 7 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Floor_b__24_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		uint uVar1;
		ulong in_RAX;
		object pIVar2;
		float fVar3;
		ulong uStack_18;

		uStack_18 = in_RAX;
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			fVar3 = CustomLogicEvaluator.ConvertTo<float>(pIVar2);
			if (__c != null) {
				if (Il2CppMethodInitialized_0753e7f6 == false) {
					uStack_18 = CONCAT44(uStack_18._4_4_, fVar3);
					Il2CppMethodInitialized_0753e7f6 = true;
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					fVar3 = (float)uStack_18;
				}
				else {
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
					uStack_18._4_4_ = (undefined4)((ulong)uStack_18 >> 0x20);
					uStack_18 = CONCAT44(uStack_18._4_4_, fVar3);
					fVar3 = (float)uStack_18;
				}
				fVar3 = floorf(fVar3);
				uStack_18 = CONCAT44((int)fVar3, (float)uStack_18);
				pIVar2 = (object)(((long)&uStack_18 + 4));
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Round>b__25_0: 2 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Round_b__25_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object pIVar2;
		MethodInfo method_00;
		MethodInfo method_01;
		float fVar3;
		double dVar4;
		int iStack_24;
		double dStack_20;
		Il2CppMethodPointer pIStack_18;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
			fVar3 = CustomLogicEvaluator.ConvertTo<float>(pIVar2);
			if (__c != null) {
				if (Il2CppMethodInitialized_07541320 == false) {
					Il2CppMethodInitialized_07541320 = true;
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				dStack_20 = (double)fVar3;
				method_01 = (MethodInfo)&pIStack_18;
				dVar4 = modf(dStack_20, (double)method_01, method_00);
				if (0.0 <= fVar3) {
					if ((dVar4 != 0.5) || (NAN(dVar4))) {
						pIStack_18 = (Il2CppMethodPointer)floor(dStack_20 + 0.5, method_01);
					}
					else if (((long)(double)pIStack_18 & 1U) != 0) {
						pIStack_18 = (Il2CppMethodPointer)((double)pIStack_18 + 1.0);
					}
				}
				else if ((dVar4 != -0.5) || (NAN(dVar4))) {
					pIStack_18 = (Il2CppMethodPointer)ceil(dStack_20 + -0.5, method_01);
				}
				else if (((long)(double)pIStack_18 & 1U) != 0) {
					pIStack_18 = (Il2CppMethodPointer)((double)pIStack_18 + -1.0);
				}
				iStack_24 = (int)(double)pIStack_18;
				pIVar2 = (object)iStack_24;
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Deg2Rad>b__26_0: clean
	private object Bindings_c____CreateMethodBinding__Deg2Rad_b__26_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if (__c != null) {
				pIVar1 = (object)auStack_14;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Rad2Deg>b__27_0: clean
	private object Bindings_c____CreateMethodBinding__Rad2Deg_b__27_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if (__c != null) {
				pIVar1 = (object)auStack_14;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__28_0: clean
	private object Bindings_c____CreateMethodBinding__Lerp_b__28_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fStack_24;

		if (__a == null) {
	label_05b337f4: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			fVar2 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				fVar3 = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if (2 < (uint)__a.Length) {
					fVar4 = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if (__c != null) {
						fVar5 = 1.0;
						if (fVar4 <= 1.0) {
							fVar5 = fVar4;
						}
						fStack_24 = (fVar3 - fVar2) * (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5) + fVar2;
						pIVar1 = (object)fStack_24;
						return pIVar1;
					}
					goto label_05b337f4;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__LerpUnclamped>b__29_0: clean
	private object Bindings_c____CreateMethodBinding__LerpUnclamped_b__29_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fStack_24;

		if (__a == null) {
	label_05b338f9: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			fVar2 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				fVar3 = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if (2 < (uint)__a.Length) {
					fVar4 = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if (__c != null) {
						fStack_24 = (fVar3 - fVar2) * fVar4 + fVar2;
						pIVar1 = (object)fStack_24;
						return pIVar1;
					}
					goto label_05b338f9;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Sign>b__30_0: clean
	private object Bindings_c____CreateMethodBinding__Sign_b__30_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if (__c != null) {
				pIVar1 = (object)auStack_14;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__InverseLerp>b__31_0: clean
	private object Bindings_c____CreateMethodBinding__InverseLerp_b__31_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		uint uStack_24;

		if (__a == null) {
	label_05b33ae0: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			fVar2 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				fVar3 = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if (2 < (uint)__a.Length) {
					fVar4 = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if (__c != null) {
						if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
							fVar3 = (fVar4 - fVar2) / (fVar3 - fVar2);
							fVar2 = 1.0;
							if (fVar3 <= 1.0) {
								fVar2 = fVar3;
							}
							uStack_24 = -(uint)(0.0 <= fVar3) & (uint)fVar2;
						}
						else {
							uStack_24 = 0;
						}
						pIVar1 = (object)uStack_24;
						return pIVar1;
					}
					goto label_05b33ae0;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__LerpAngle>b__32_0: 6 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__LerpAngle_b__32_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		byte[] auVar5 = new byte[12];
		float fStack_3c;
		float fStack_38;

		if (__a == null) {
	label_05b33c6b: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			fVar2 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				fVar3 = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if (2 < (uint)__a.Length) {
					fStack_38 = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if (__c != null) {
						fVar4 = floorf((fVar3 - fVar2) / 360.0);
						fVar3 = fVar4 * -360.0 + (fVar3 - fVar2);
						auVar5 = ZEXT812(0x43b40000);
						if (fVar3 <= auVar5._0_4_) {
							auVar5._4_8_ = auVar5._4_8_;
							auVar5._0_4_ = fVar3;
						}
						fVar4 = (float)(-(uint)(0.0 <= fVar3) & auVar5._0_4_);
						fVar3 = 1.0;
						if (fStack_38 <= 1.0) {
							fVar3 = fStack_38;
						}
						fStack_3c = (float)(-(uint)(0.0 <= fStack_38) & (uint)fVar3) *(float)(~-(uint)(180.0 < fVar4) & (uint)fVar4 |(uint)(fVar4 + -360.0) & -(uint)(180.0 < fVar4)) + fVar2;
						pIVar1 = (object)fStack_3c;
						return pIVar1;
					}
					goto label_05b33c6b;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Log>b__33_0: 1 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Log_b__33_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		MethodInfo method_00;
		CustomLogicMathBuiltin __this_00;
		float value;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			__this_00 = (CustomLogicMathBuiltin)__a[0];
			method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
			value = CustomLogicEvaluator.ConvertTo<float>((object)__this_00);
			if (__c != null) {
				logf(__this_00, value, method_00);
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveTowards>b__34_0: clean
	private object Bindings_c____CreateMethodBinding__MoveTowards_b__34_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		uint uVar2;
		uint uVar3;
		float fVar4;
		float fVar5;
		uint uStack_3c;
		float fStack_38;

		if (__a == null) {
	label_05b33e54: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			fVar4 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				fStack_38 = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if (2 < (uint)__a.Length) {
					fVar5 = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if (__c != null) {
						uVar2 = -(uint)(0.0 <= fStack_38 - fVar4);
						uVar3 = -(uint)(fVar5 < ABS(fStack_38 - fVar4));
						uStack_3c = ~uVar3 & (uint)fStack_38 |(uint)((float)(~uVar2 & (uint)-fVar5 | uVar2 & (uint)fVar5) + fVar4) & uVar3;
						pIVar1 = (object)uStack_3c;
						return pIVar1;
					}
					goto label_05b33e54;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveTowardsAngle>b__35_0: 16 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__MoveTowardsAngle_b__35_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		uint uVar2;
		uint uVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		byte[] auVar7 = new byte[12];
		uint uStack_4c;
		byte[] auStack_48 = new byte[16];
		float fStack_38;

		if (__a == null) {
	label_05b3401a: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			fVar4 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				auStack_48._0_4_ = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				auStack_48._4_4_ = extraout_XMM0_Db;
				auStack_48._8_4_ = extraout_XMM0_Dc;
				auStack_48._12_4_ = extraout_XMM0_Dd;
				if (2 < (uint)__a.Length) {
					fStack_38 = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if (__c != null) {
						fVar5 = (float)auStack_48._0_4_ - fVar4;
						fVar6 = floorf(fVar5 / 360.0);
						fVar5 = fVar6 * -360.0 + fVar5;
						auVar7 = ZEXT812(0x43b40000);
						if (fVar5 <= auVar7._0_4_) {
							auVar7._4_8_ = auVar7._4_8_;
							auVar7._0_4_ = fVar5;
						}
						fVar6 = (float)(-(uint)(0.0 <= fVar5) & auVar7._0_4_);
						fVar6 = (float)(~-(uint)(180.0 < fVar6) & (uint)fVar6 |(uint)(fVar6 + -360.0) & -(uint)(180.0 < fVar6));
						if ((fVar6 <= -fStack_38) || (fStack_38 <= fVar6)) {
							fVar5 = (fVar4 + fVar6) - fVar4;
							uVar2 = -(uint)(0.0 <= fVar5);
							uVar3 = -(uint)(fStack_38 < ABS(fVar5));
							auStack_48 = ZEXT416(uVar3 & (uint)((float)(~uVar2 & (uint)-fStack_38 | uVar2 & (uint)fStack_38) + fVar4) | ~uVar3 & (uint)(fVar4 + fVar6));
						}
						uStack_4c = auStack_48._0_4_;
						pIVar1 = (object)uStack_4c;
						return pIVar1;
					}
					goto label_05b3401a;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__PingPong>b__36_0: clean
	private object Bindings_c____CreateMethodBinding__PingPong_b__36_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fStack_4c;
		float fStack_48;
		float fStack_38;

		if (__a == null) {
	label_05b3413c: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			fStack_48 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				fVar2 = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if (__c != null) {
					fStack_38 = fVar2 + fVar2;
					fVar3 = floorf(fStack_48 / fStack_38);
					fVar4 = fStack_48 - fVar3 * fStack_38;
					fVar3 = fStack_38;
					if (fVar4 <= fStack_38) {
						fVar3 = fVar4;
					}
					fStack_4c = fVar2 - ABS((float)(-(uint)(0.0 <= fVar4) & (uint)fVar3) - fVar2);
					pIVar1 = (object)fStack_4c;
					return pIVar1;
				}
				goto label_05b3413c;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Exp>b__37_0: 1 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Exp_b__37_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		MethodInfo method_00;
		CustomLogicMathBuiltin __this_00;
		float value;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			__this_00 = (CustomLogicMathBuiltin)__a[0];
			method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
			value = CustomLogicEvaluator.ConvertTo<float>((object)__this_00);
			if (__c != null) {
				expf(__this_00, value, method_00);
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__SmoothStep>b__38_0: clean
	private object Bindings_c____CreateMethodBinding__SmoothStep_b__38_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fStack_24;

		if (__a == null) {
	label_05b34346: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			fVar2 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				fVar3 = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if (2 < (uint)__a.Length) {
					fVar4 = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if (__c != null) {
						fVar5 = 1.0;
						if (fVar4 <= 1.0) {
							fVar5 = fVar4;
						}
						fVar5 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
						fVar4 = fVar5 * 3.0 * fVar5 - (fVar5 + fVar5) * fVar5 * fVar5;
						fStack_24 = fVar2 * (1.0 - fVar4) + fVar3 * fVar4;
						pIVar1 = (object)fStack_24;
						return pIVar1;
					}
					goto label_05b34346;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseAnd>b__39_0: clean
	private object Bindings_c____CreateMethodBinding__BitwiseAnd_b__39_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		byte[] auStack_24 = new byte[4];

		if (__a == null) {
	label_05b34400: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			CustomLogicEvaluator.ConvertTo<int>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				CustomLogicEvaluator.ConvertTo<int>(__a[1]);
				if (__c != null) {
					pIVar1 = (object)auStack_24;
					return pIVar1;
				}
				goto label_05b34400;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseOr>b__40_0: clean
	private object Bindings_c____CreateMethodBinding__BitwiseOr_b__40_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		byte[] auStack_24 = new byte[4];

		if (__a == null) {
	label_05b344c0: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			CustomLogicEvaluator.ConvertTo<int>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				CustomLogicEvaluator.ConvertTo<int>(__a[1]);
				if (__c != null) {
					pIVar1 = (object)auStack_24;
					return pIVar1;
				}
				goto label_05b344c0;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseXor>b__41_0: clean
	private object Bindings_c____CreateMethodBinding__BitwiseXor_b__41_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		byte[] auStack_24 = new byte[4];

		if (__a == null) {
	label_05b34580: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			CustomLogicEvaluator.ConvertTo<int>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				CustomLogicEvaluator.ConvertTo<int>(__a[1]);
				if (__c != null) {
					pIVar1 = (object)auStack_24;
					return pIVar1;
				}
				goto label_05b34580;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseNot>b__42_0: clean
	private object Bindings_c____CreateMethodBinding__BitwiseNot_b__42_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			CustomLogicEvaluator.ConvertTo<int>(pIVar1);
			if (__c != null) {
				pIVar1 = (object)auStack_14;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseLeftShift>b__43_0: clean
	private object Bindings_c____CreateMethodBinding__BitwiseLeftShift_b__43_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		byte[] auStack_24 = new byte[4];

		if (__a == null) {
	label_05b346e2: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			CustomLogicEvaluator.ConvertTo<int>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				CustomLogicEvaluator.ConvertTo<int>(__a[1]);
				if (__c != null) {
					pIVar1 = (object)auStack_24;
					return pIVar1;
				}
				goto label_05b346e2;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseRightShift>b__44_0: clean
	private object Bindings_c____CreateMethodBinding__BitwiseRightShift_b__44_0(CustomLogicMathBuiltin __c, Object[] __a)
	{
		object pIVar1;
		byte[] auStack_24 = new byte[4];

		if (__a == null) {
	label_05b347a2: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			CustomLogicEvaluator.ConvertTo<int>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				CustomLogicEvaluator.ConvertTo<int>(__a[1]);
				if (__c != null) {
					pIVar1 = (object)auStack_24;
					return pIVar1;
				}
				goto label_05b347a2;
			}
		}
		throw new IndexOutOfRangeException();
	}
}
