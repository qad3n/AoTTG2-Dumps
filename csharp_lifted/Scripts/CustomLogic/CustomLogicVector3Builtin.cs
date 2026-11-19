// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicVector3Builtin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicVector3Builtin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicVector3Builtin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x200047B")]
[CompilerGenerated]
internal class CustomLogicVector3Builtin : BuiltinClassInstance, ICustomLogicMathOperators, ICustomLogicEquals, ICustomLogicCopyable
{
	[Token(Token = "0x200047C")]
	public static class Factory
	{
		[Token(Token = "0x6001CFE")]
		[Address(RVA = "0x58E2C40", Offset = "0x58E1C40", VA = "0x58E2C40")]
		public static CustomLogicVector3Builtin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Factory$$CreateInstance): 6 lines keep C-only constructs
			object pIVar1;
			int iVar2;
			CustomLogicVector3Builtin pCVar3;
			String pSVar4;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			float fVar5;
			float fVar6;
			float fVar7;
			int local_1c;

			if (args == null) {
				throw new NullReferenceException();
			}
			if (args.Length == 0) {
				pCVar3 = new CustomLogicVector3Builtin();
				pCVar3.Value.z = 0.0;
				pCVar3.Value.x = 0.0;
				pCVar3.Value.y = 0.0;
			}
			else {
				iVar2 = (int)args.Length;
				if (iVar2 == 3) {
					pIVar1 = args[0];
					fVar6 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
					if (((args.Length & 0xfffffffe) == 0) ||(fVar7 = CustomLogicEvaluator.ConvertTo<float>(args[1]), (uint)args.Length < 3)) goto label_059e2f72;
					fVar5 = CustomLogicEvaluator.ConvertTo<float>(args[2]);
					pCVar3 = new CustomLogicVector3Builtin();
					pCVar3.Value.x = fVar6;
					pCVar3.Value.y = fVar7;
				}
				else {
					if (iVar2 == 2) {
						pIVar1 = args[0];
						fVar6 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
						if ((args.Length & 0xfffffffe) != 0) {
							fVar7 = CustomLogicEvaluator.ConvertTo<float>(args[1]);
							pCVar3 = new CustomLogicVector3Builtin();
							pCVar3.Value.x = fVar6;
							pCVar3.Value.y = fVar7;
							pCVar3.Value.z = 0.0;
							return pCVar3;
						}
		label_059e2f72: ;
						throw new IndexOutOfRangeException();
					}
					if (iVar2 != 1) {
						local_1c = (int32_t)args.Length;
						pSVar4 = local_1c.ToString();
						str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicVector3Builtin constructor found that takes ");
						str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
						pSVar4 = String.Concat(str0, pSVar4, str2);
						klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
						__this = (ArgumentException)il2cpp_codegen_object_new(klass);
						__this = new ArgumentException(pSVar4);
						lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector3Builtin_Factory_CreateInstance);
						throw (object)__this;
					}
					pIVar1 = args[0];
					fVar5 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
					pCVar3 = new CustomLogicVector3Builtin();
					pCVar3.Value.x = fVar5;
					pCVar3.Value.y = fVar5;
				}
				pCVar3.Value.z = fVar5;
			}
			return pCVar3;
		}
	}

	[Token(Token = "0x200047D")]
	public static class Bindings
	{
		[Token(Token = "0x4001637")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001CFF")]
		[Address(RVA = "0x58E3010", Offset = "0x58E2010", VA = "0x58E3010")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicVector3Builtin> pCVar3;
			CLPropertyBinding<CustomLogicVector3Builtin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x7b5fea5f) {
				if (uVar2 < 0x39907618) {
					if (uVar2 < 0x1e9e9f86) {
						if (uVar2 < 0x18c37b42) {
							if (uVar2 == 0xb9c3383) {
								bVar1 = (name == "Zero");
								if (bVar1) {
									pCVar4 = CustomLogicVector3Builtin.Bindings.__CreatePropertyBinding__Zero();
									return (ICLMemberBinding)pCVar4;
								}
							}
							else if (uVar2 == 0xdc1f3cc) {
								bVar1 = (name == "__Add__");
								if (bVar1) {
									pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding____Add__();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x18c37b41) {
								bVar1 = (name == "__Mul__");
								if (bVar1) {
									pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding____Mul__();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x1cb1b18f) {
							bVar1 = (name == "One");
							if (bVar1) {
								pCVar4 = CustomLogicVector3Builtin.Bindings.__CreatePropertyBinding__One();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x1e7a6f6f) {
							bVar1 = (name == "ProjectOnPlane");
							if (bVar1) {
								pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__ProjectOnPlane();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1e9e9f85) {
							bVar1 = (name == "Right");
							if (bVar1) {
								pCVar4 = CustomLogicVector3Builtin.Bindings.__CreatePropertyBinding__Right();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 < 0x28b19ea4) {
						if (uVar2 == 0x21ed379a) {
							bVar1 = (name == "ClampMagnitude");
							if (bVar1) {
								pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__ClampMagnitude();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x28528e11) {
							bVar1 = (name == "Scale");
							if (bVar1) {
								pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__Scale();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x28b19ea3) {
							bVar1 = (name == "Set");
							if (bVar1) {
								pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__Set();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x2e9445f7) {
						bVar1 = (name == "Min");
						if (bVar1) {
							pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__Min();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x386d9fc0) {
						bVar1 = (name == "Dot");
						if (bVar1) {
							pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__Dot();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x39907617) {
						bVar1 = (name == "Slerp");
						if (bVar1) {
							pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__Slerp();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x441a7ddf) {
					if (uVar2 < 0x3ca7e3ba) {
						if (uVar2 == 0x39c493b8) {
							bVar1 = (name == "Angle");
							if (bVar1) {
								pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__Angle();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x3c0ea91a) {
							bVar1 = (name == "RotateTowards");
							if (bVar1) {
								pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__RotateTowards();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x3ca7e3b9) {
							bVar1 = (name == "Max");
							if (bVar1) {
								pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__Max();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x42f35940) {
						bVar1 = (name == "Up");
						if (bVar1) {
							pCVar4 = CustomLogicVector3Builtin.Bindings.__CreatePropertyBinding__Up();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x434cfcb8) {
						bVar1 = (name == "Normalized");
						if (bVar1) {
							pCVar4 = CustomLogicVector3Builtin.Bindings.__CreatePropertyBinding__Normalized();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x441a7dde) {
						bVar1 = (name == "GetRotationDirection");
						if (bVar1) {
							pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__GetRotationDirection();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x6a4c91d7) {
					if (uVar2 == 0x4adde30c) {
						bVar1 = (name == "Normalize");
						if (bVar1) {
							pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__Normalize();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x549f4d10) {
						bVar1 = (name == "__Copy__");
						if (bVar1) {
							pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding____Copy__();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x6a4c91d6) {
						bVar1 = (name == "SlerpUnclamped");
						if (bVar1) {
							pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__SlerpUnclamped();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x74ee9015) {
					bVar1 = (name == "SmoothDamp");
					if (bVar1) {
						pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__SmoothDamp();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x792a6491) {
					bVar1 = (name == "__Hash__");
					if (bVar1) {
						pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding____Hash__();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x7b5fea5e) {
					bVar1 = (name == "Project");
					if (bVar1) {
						pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__Project();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xc370544b) {
				if (uVar2 < 0xa4995036) {
					if (uVar2 < 0x91efe6d8) {
						if (uVar2 == 0x91efe6d7) {
							bVar1 = (name == "__Eq__");
							if (bVar1) {
								pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding____Eq__();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x7bdb45c1) {
							bVar1 = (name == "SqrMagnitude");
							if (bVar1) {
								pCVar4 = CustomLogicVector3Builtin.Bindings.__CreatePropertyBinding__SqrMagnitude();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x7d671990) {
							bVar1 = (name == "Divide");
							if (bVar1) {
								pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__Divide();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x92773890) {
						bVar1 = (name == "Left");
						if (bVar1) {
							pCVar4 = CustomLogicVector3Builtin.Bindings.__CreatePropertyBinding__Left();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x9e956088) {
						bVar1 = (name == "Lerp");
						if (bVar1) {
							pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__Lerp();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xa4995035) {
						bVar1 = (name == "Down");
						if (bVar1) {
							pCVar4 = CustomLogicVector3Builtin.Bindings.__CreatePropertyBinding__Down();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0xb127a616) {
					if (uVar2 == 0xa734d965) {
						bVar1 = (name == "Multiply");
						if (bVar1) {
							pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__Multiply();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xacfe0068) {
						bVar1 = (name == "MoveTowards");
						if (bVar1) {
							pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__MoveTowards();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xb127a615) {
						bVar1 = (name == "Magnitude");
						if (bVar1) {
							pCVar4 = CustomLogicVector3Builtin.Bindings.__CreatePropertyBinding__Magnitude();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 == 0xb663d53b) {
					bVar1 = (name == "Cross");
					if (bVar1) {
						pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__Cross();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc2954bc2) {
					bVar1 = (name == "Back");
					if (bVar1) {
						pCVar4 = CustomLogicVector3Builtin.Bindings.__CreatePropertyBinding__Back();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xc370544a) {
					bVar1 = (name == "Reflect");
					if (bVar1) {
						pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__Reflect();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xdd0c1e28) {
				if (uVar2 < 0xd7cecb56) {
					if (uVar2 == 0xd3d96082) {
						bVar1 = (name == "Distance");
						if (bVar1) {
							pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__Distance();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xd6c0fe1a) {
						bVar1 = (name == "PositiveInfinity");
						if (bVar1) {
							pCVar4 = CustomLogicVector3Builtin.Bindings.__CreatePropertyBinding__PositiveInfinity();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xd7cecb55) {
						bVar1 = (name == "__Sub__");
						if (bVar1) {
							pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding____Sub__();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xd80ed56c) {
					bVar1 = (name == "OrthoNormalize");
					if (bVar1) {
						pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__OrthoNormalize();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xdc0c1c94) {
					bVar1 = (name == "Y");
					if (bVar1) {
						pCVar4 = CustomLogicVector3Builtin.Bindings.__CreatePropertyBinding__Y();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xdd0c1e27) {
					bVar1 = (name == "X");
					if (bVar1) {
						pCVar4 = CustomLogicVector3Builtin.Bindings.__CreatePropertyBinding__X();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xe0993adb) {
				if (uVar2 == 0xdf0c214d) {
					bVar1 = (name == "Z");
					if (bVar1) {
						pCVar4 = CustomLogicVector3Builtin.Bindings.__CreatePropertyBinding__Z();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xdfeb0948) {
					bVar1 = (name == "SignedAngle");
					if (bVar1) {
						pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__SignedAngle();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe0993ada) {
					bVar1 = (name == "NegativeInfinity");
					if (bVar1) {
						pCVar4 = CustomLogicVector3Builtin.Bindings.__CreatePropertyBinding__NegativeInfinity();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 == 0xe50883ba) {
				bVar1 = (name == "Forward");
				if (bVar1) {
					pCVar4 = CustomLogicVector3Builtin.Bindings.__CreatePropertyBinding__Forward();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xf4248f7b) {
				bVar1 = (name == "LerpUnclamped");
				if (bVar1) {
					pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding__LerpUnclamped();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xff76b6dc) {
				bVar1 = (name == "__Div__");
				if (bVar1) {
					pCVar3 = CustomLogicVector3Builtin.Bindings.__CreateMethodBinding____Div__();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicVector3Builtin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6001D00")]
		[Address(RVA = "0x58E41A0", Offset = "0x58E31A0", VA = "0x58E41A0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__X()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__X): 3 lines keep C-only constructs
			Func<CustomLogicVector3Builtin, object> __this;
			Action<CustomLogicVector3Builtin, object> __this_00;
			CLPropertyBinding<CustomLogicVector3Builtin> __this_01;

			__this = new Func<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__X_g____getter_2_0);
			__this_00 = new Action<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__X_g____setter_2_1);
			__this_01 = new CLPropertyBinding<CustomLogicVector3Builtin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001D01")]
		[Address(RVA = "0x58E4280", Offset = "0x58E3280", VA = "0x58E4280")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Y()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Y): 3 lines keep C-only constructs
			Func<CustomLogicVector3Builtin, object> __this;
			Action<CustomLogicVector3Builtin, object> __this_00;
			CLPropertyBinding<CustomLogicVector3Builtin> __this_01;

			__this = new Func<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Y_g____getter_3_0);
			__this_00 = new Action<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Y_g____setter_3_1);
			__this_01 = new CLPropertyBinding<CustomLogicVector3Builtin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001D02")]
		[Address(RVA = "0x58E4360", Offset = "0x58E3360", VA = "0x58E4360")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Z()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Z): 3 lines keep C-only constructs
			Func<CustomLogicVector3Builtin, object> __this;
			Action<CustomLogicVector3Builtin, object> __this_00;
			CLPropertyBinding<CustomLogicVector3Builtin> __this_01;

			__this = new Func<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Z_g____getter_4_0);
			__this_00 = new Action<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Z_g____setter_4_1);
			__this_01 = new CLPropertyBinding<CustomLogicVector3Builtin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001D03")]
		[Address(RVA = "0x58E4440", Offset = "0x58E3440", VA = "0x58E4440")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Normalized()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Normalized): 2 lines keep C-only constructs
			Func<CustomLogicVector3Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector3Builtin> __this_00;

			__this = new Func<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Normalized_g____getter_5);
			__this_00 = new CLPropertyBinding<CustomLogicVector3Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001D04")]
		[Address(RVA = "0x58E44E0", Offset = "0x58E34E0", VA = "0x58E44E0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Magnitude()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Magnitude): 2 lines keep C-only constructs
			Func<CustomLogicVector3Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector3Builtin> __this_00;

			__this = new Func<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Magnitude_g____getter_6);
			__this_00 = new CLPropertyBinding<CustomLogicVector3Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001D05")]
		[Address(RVA = "0x58E4580", Offset = "0x58E3580", VA = "0x58E4580")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__SqrMagnitude()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__SqrMagnitude): 2 lines keep C-only constructs
			Func<CustomLogicVector3Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector3Builtin> __this_00;

			__this = new Func<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__SqrMagnitude_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicVector3Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001D06")]
		[Address(RVA = "0x58E4620", Offset = "0x58E3620", VA = "0x58E4620")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Zero()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Zero): 2 lines keep C-only constructs
			Func<CustomLogicVector3Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector3Builtin> __this_00;

			__this = new Func<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Zero_g____getter_8_0);
			__this_00 = new CLPropertyBinding<CustomLogicVector3Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001D07")]
		[Address(RVA = "0x58E46C0", Offset = "0x58E36C0", VA = "0x58E46C0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__One()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__One): 2 lines keep C-only constructs
			Func<CustomLogicVector3Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector3Builtin> __this_00;

			__this = new Func<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__One_g____getter_9_0);
			__this_00 = new CLPropertyBinding<CustomLogicVector3Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001D08")]
		[Address(RVA = "0x58E4760", Offset = "0x58E3760", VA = "0x58E4760")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Up()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Up): 2 lines keep C-only constructs
			Func<CustomLogicVector3Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector3Builtin> __this_00;

			__this = new Func<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Up_g____getter_10_0);
			__this_00 = new CLPropertyBinding<CustomLogicVector3Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001D09")]
		[Address(RVA = "0x58E4800", Offset = "0x58E3800", VA = "0x58E4800")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Down()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Down): 2 lines keep C-only constructs
			Func<CustomLogicVector3Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector3Builtin> __this_00;

			__this = new Func<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Down_g____getter_11_0);
			__this_00 = new CLPropertyBinding<CustomLogicVector3Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001D0A")]
		[Address(RVA = "0x58E48A0", Offset = "0x58E38A0", VA = "0x58E48A0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Left()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Left): 2 lines keep C-only constructs
			Func<CustomLogicVector3Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector3Builtin> __this_00;

			__this = new Func<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Left_g____getter_12_0);
			__this_00 = new CLPropertyBinding<CustomLogicVector3Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001D0B")]
		[Address(RVA = "0x58E4940", Offset = "0x58E3940", VA = "0x58E4940")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Right()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Right): 2 lines keep C-only constructs
			Func<CustomLogicVector3Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector3Builtin> __this_00;

			__this = new Func<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Right_g____getter_13_0);
			__this_00 = new CLPropertyBinding<CustomLogicVector3Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001D0C")]
		[Address(RVA = "0x58E49E0", Offset = "0x58E39E0", VA = "0x58E49E0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Forward()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Forward): 2 lines keep C-only constructs
			Func<CustomLogicVector3Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector3Builtin> __this_00;

			__this = new Func<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Forward_g____getter_14_0);
			__this_00 = new CLPropertyBinding<CustomLogicVector3Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001D0D")]
		[Address(RVA = "0x58E4A80", Offset = "0x58E3A80", VA = "0x58E4A80")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Back()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Back): 2 lines keep C-only constructs
			Func<CustomLogicVector3Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector3Builtin> __this_00;

			__this = new Func<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Back_g____getter_15_0);
			__this_00 = new CLPropertyBinding<CustomLogicVector3Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001D0E")]
		[Address(RVA = "0x58E4B20", Offset = "0x58E3B20", VA = "0x58E4B20")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__NegativeInfinity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__NegativeInfinity): 2 lines keep C-only constructs
			Func<CustomLogicVector3Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector3Builtin> __this_00;

			__this = new Func<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__NegativeInfinity_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicVector3Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001D0F")]
		[Address(RVA = "0x58E4BC0", Offset = "0x58E3BC0", VA = "0x58E4BC0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__PositiveInfinity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__PositiveInfinity): 2 lines keep C-only constructs
			Func<CustomLogicVector3Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector3Builtin> __this_00;

			__this = new Func<CustomLogicVector3Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__PositiveInfinity_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicVector3Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001D10")]
		[Address(RVA = "0x58E4C60", Offset = "0x58E3C60", VA = "0x58E4C60")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Angle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Angle): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d10 == false) {
				Il2CppMethodInitialized_07545d10 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__18_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__18_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Angle_b__18_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__18_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D11")]
		[Address(RVA = "0x58E4DA0", Offset = "0x58E3DA0", VA = "0x58E4DA0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__ClampMagnitude()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__ClampMagnitude): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d11 == false) {
				Il2CppMethodInitialized_07545d11 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__19_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__19_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__ClampMagnitude_b__19_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__19_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D12")]
		[Address(RVA = "0x58E4EE0", Offset = "0x58E3EE0", VA = "0x58E4EE0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Cross()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Cross): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d12 == false) {
				Il2CppMethodInitialized_07545d12 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__20_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__20_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Cross_b__20_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__20_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D13")]
		[Address(RVA = "0x58E5020", Offset = "0x58E4020", VA = "0x58E5020")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Distance()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Distance): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d13 == false) {
				Il2CppMethodInitialized_07545d13 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__21_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__21_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Distance_b__21_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__21_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D14")]
		[Address(RVA = "0x58E5160", Offset = "0x58E4160", VA = "0x58E5160")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Dot()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Dot): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d14 == false) {
				Il2CppMethodInitialized_07545d14 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__22_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__22_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Dot_b__22_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__22_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D15")]
		[Address(RVA = "0x58E52A0", Offset = "0x58E42A0", VA = "0x58E52A0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Lerp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Lerp): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d15 == false) {
				Il2CppMethodInitialized_07545d15 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__23_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__23_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Lerp_b__23_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__23_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D16")]
		[Address(RVA = "0x58E53E0", Offset = "0x58E43E0", VA = "0x58E53E0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__LerpUnclamped()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__LerpUnclamped): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d16 == false) {
				Il2CppMethodInitialized_07545d16 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__24_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__24_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__24_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__24_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D17")]
		[Address(RVA = "0x58E5520", Offset = "0x58E4520", VA = "0x58E5520")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Max()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Max): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d17 == false) {
				Il2CppMethodInitialized_07545d17 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__25_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__25_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Max_b__25_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__25_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D18")]
		[Address(RVA = "0x58E5660", Offset = "0x58E4660", VA = "0x58E5660")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Min()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Min): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d18 == false) {
				Il2CppMethodInitialized_07545d18 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__26_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__26_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Min_b__26_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__26_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D19")]
		[Address(RVA = "0x58E57A0", Offset = "0x58E47A0", VA = "0x58E57A0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__MoveTowards()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__MoveTowards): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d19 == false) {
				Il2CppMethodInitialized_07545d19 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__27_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__27_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__MoveTowards_b__27_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__27_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D1A")]
		[Address(RVA = "0x58E58E0", Offset = "0x58E48E0", VA = "0x58E58E0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Normalize()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Normalize): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d1a == false) {
				Il2CppMethodInitialized_07545d1a = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__28_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__28_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Normalize_b__28_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__28_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D1B")]
		[Address(RVA = "0x58E5A20", Offset = "0x58E4A20", VA = "0x58E5A20")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__OrthoNormalize()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__OrthoNormalize): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d1b == false) {
				Il2CppMethodInitialized_07545d1b = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__29_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__29_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__OrthoNormalize_b__29_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__29_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D1C")]
		[Address(RVA = "0x58E5B60", Offset = "0x58E4B60", VA = "0x58E5B60")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Project()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Project): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d1c == false) {
				Il2CppMethodInitialized_07545d1c = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__30_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__30_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Project_b__30_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__30_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D1D")]
		[Address(RVA = "0x58E5CA0", Offset = "0x58E4CA0", VA = "0x58E5CA0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__ProjectOnPlane()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__ProjectOnPlane): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d1d == false) {
				Il2CppMethodInitialized_07545d1d = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__31_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__31_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__ProjectOnPlane_b__31_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__31_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D1E")]
		[Address(RVA = "0x58E5DE0", Offset = "0x58E4DE0", VA = "0x58E5DE0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Reflect()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Reflect): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d1e == false) {
				Il2CppMethodInitialized_07545d1e = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__32_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__32_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Reflect_b__32_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__32_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D1F")]
		[Address(RVA = "0x58E5F20", Offset = "0x58E4F20", VA = "0x58E5F20")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__RotateTowards()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__RotateTowards): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d1f == false) {
				Il2CppMethodInitialized_07545d1f = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__33_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__33_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__RotateTowards_b__33_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__33_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D20")]
		[Address(RVA = "0x58E6060", Offset = "0x58E5060", VA = "0x58E6060")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__SignedAngle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__SignedAngle): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d20 == false) {
				Il2CppMethodInitialized_07545d20 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__34_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__34_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__SignedAngle_b__34_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__34_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D21")]
		[Address(RVA = "0x58E61A0", Offset = "0x58E51A0", VA = "0x58E61A0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Slerp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Slerp): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d21 == false) {
				Il2CppMethodInitialized_07545d21 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__35_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__35_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Slerp_b__35_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__35_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D22")]
		[Address(RVA = "0x58E62E0", Offset = "0x58E52E0", VA = "0x58E62E0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__SlerpUnclamped()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__SlerpUnclamped): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d22 == false) {
				Il2CppMethodInitialized_07545d22 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__36_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__36_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__SlerpUnclamped_b__36_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__36_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D23")]
		[Address(RVA = "0x58E6420", Offset = "0x58E5420", VA = "0x58E6420")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__SmoothDamp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__SmoothDamp): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d23 == false) {
				Il2CppMethodInitialized_07545d23 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__37_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__37_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__SmoothDamp_b__37_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__37_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D24")]
		[Address(RVA = "0x58E6560", Offset = "0x58E5560", VA = "0x58E6560")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Set()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Set): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d24 == false) {
				Il2CppMethodInitialized_07545d24 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__38_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__38_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Set_b__38_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__38_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D25")]
		[Address(RVA = "0x58E66A0", Offset = "0x58E56A0", VA = "0x58E66A0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Scale()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Scale): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d25 == false) {
				Il2CppMethodInitialized_07545d25 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__39_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__39_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Scale_b__39_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__39_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D26")]
		[Address(RVA = "0x58E67E0", Offset = "0x58E57E0", VA = "0x58E67E0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Multiply()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Multiply): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d26 == false) {
				Il2CppMethodInitialized_07545d26 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__40_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__40_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Multiply_b__40_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__40_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D27")]
		[Address(RVA = "0x58E6920", Offset = "0x58E5920", VA = "0x58E6920")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Divide()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Divide): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d27 == false) {
				Il2CppMethodInitialized_07545d27 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__41_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__41_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Divide_b__41_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__41_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D28")]
		[Address(RVA = "0x58E6A60", Offset = "0x58E5A60", VA = "0x58E6A60")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__GetRotationDirection()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__GetRotationDirection): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d28 == false) {
				Il2CppMethodInitialized_07545d28 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__42_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__42_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__GetRotationDirection_b);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__42_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D29")]
		[Address(RVA = "0x58E6BA0", Offset = "0x58E5BA0", VA = "0x58E6BA0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Copy__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Copy__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d29 == false) {
				Il2CppMethodInitialized_07545d29 = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__43_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__43_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Copy___b__43_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__43_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D2A")]
		[Address(RVA = "0x58E6CE0", Offset = "0x58E5CE0", VA = "0x58E6CE0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Add__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Add__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d2a == false) {
				Il2CppMethodInitialized_07545d2a = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__44_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__44_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Add___b__44_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__44_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D2B")]
		[Address(RVA = "0x58E6E20", Offset = "0x58E5E20", VA = "0x58E6E20")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Sub__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Sub__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d2b == false) {
				Il2CppMethodInitialized_07545d2b = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__45_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__45_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Sub___b__45_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__45_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D2C")]
		[Address(RVA = "0x58E6F60", Offset = "0x58E5F60", VA = "0x58E6F60")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Mul__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Mul__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d2c == false) {
				Il2CppMethodInitialized_07545d2c = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__46_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__46_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Mul___b__46_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__46_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D2D")]
		[Address(RVA = "0x58E70A0", Offset = "0x58E60A0", VA = "0x58E70A0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Div__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Div__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d2d == false) {
				Il2CppMethodInitialized_07545d2d = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__47_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__47_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Div___b__47_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__47_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D2E")]
		[Address(RVA = "0x58E71E0", Offset = "0x58E61E0", VA = "0x58E71E0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Eq__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Eq__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d2e == false) {
				Il2CppMethodInitialized_07545d2e = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__48_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__48_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Eq___b__48_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__48_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D2F")]
		[Address(RVA = "0x58E7320", Offset = "0x58E6320", VA = "0x58E7320")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Hash__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Hash__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector3Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector3Builtin> __this_00;

			if (Il2CppMethodInitialized_07545d2f == false) {
				Il2CppMethodInitialized_07545d2f = true;
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector3Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__49_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector3Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__49_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector3Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector3Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Hash___b__49_0);
				pCVar2 = typeof(CustomLogicVector3Builtin.Bindings.c).static_fields;
				pCVar2.__9__49_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector3Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x4001636")]
	[FieldOffset(Offset = "0x30")]
	public Vector3 Value;

	[Token(Token = "0x17000321")]
	public float X
	{
		[Token(Token = "0x6001CC3")]
		[Address(RVA = "0x58DF8C0", Offset = "0x58DE8C0", VA = "0x58DF8C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_X): clean
			return this.Value.x;
		}
		[Token(Token = "0x6001CC4")]
		[Address(RVA = "0x58DF8D0", Offset = "0x58DE8D0", VA = "0x58DF8D0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$set_X): clean
			this.Value.x = value;
			return;
		}
	}

	[Token(Token = "0x17000322")]
	public float Y
	{
		[Token(Token = "0x6001CC5")]
		[Address(RVA = "0x58DF8E0", Offset = "0x58DE8E0", VA = "0x58DF8E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_Y): clean
			return this.Value.y;
		}
		[Token(Token = "0x6001CC6")]
		[Address(RVA = "0x58DF8F0", Offset = "0x58DE8F0", VA = "0x58DF8F0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$set_Y): clean
			this.Value.y = value;
			return;
		}
	}

	[Token(Token = "0x17000323")]
	public float Z
	{
		[Token(Token = "0x6001CC7")]
		[Address(RVA = "0x58DF900", Offset = "0x58DE900", VA = "0x58DF900")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_Z): clean
			return this.Value.z;
		}
		[Token(Token = "0x6001CC8")]
		[Address(RVA = "0x58DF910", Offset = "0x58DE910", VA = "0x58DF910")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$set_Z): clean
			this.Value.z = value;
			return;
		}
	}

	[Token(Token = "0x17000324")]
	public CustomLogicVector3Builtin Normalized
	{
		[Token(Token = "0x6001CC9")]
		[Address(RVA = "0x58DF920", Offset = "0x58DE920", VA = "0x58DF920")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_Normalized): 15 lines keep C-only constructs
			uint uVar1;
			uint uVar2;
			uint uVar3;
			uint uVar4;
			CustomLogicVector3Builtin __this_00;
			ulong uVar8;
			float fVar6;
			float fVar7;
			float extraout_XMM0_Db;
			byte[] auVar9 = new byte[16];
			byte[] auVar10 = new byte[16];

			fVar6 = this.Value.x;
			uVar1 = this.Value.y;
			uVar3 = this.Value.z;
			fVar7 = (float)uVar3 * (float)uVar3;
			fVar6 = fVar7 + fVar6 * fVar6 + (float)uVar1 * (float)uVar1;
			if (fVar6 < 0.0) {
				fVar6 = sqrtf(fVar6);
				fVar7 = extraout_XMM0_Db;
			}
			else {
				fVar6 = SQRT(fVar6);
			}
			if (fVar6 <= 1e-05) {
				fVar6 = (Vector3.zeroVector).z;
				uVar8._0_4_ = (Vector3.zeroVector).x;
				uVar8._4_4_ = (Vector3.zeroVector).y;
			}
			else {
				uVar2 = this.Value.x;
				uVar4 = this.Value.y;
				auVar9._4_4_ = uVar4;
				auVar9._0_4_ = uVar2;
				auVar9._8_8_ = 0;
				auVar10._4_4_ = fVar6;
				auVar10._0_4_ = fVar6;
				auVar10._8_4_ = fVar7;
				auVar10._12_4_ = fVar7;
				auVar10 = divps(auVar9, auVar10);
				uVar8 = auVar10._0_8_;
				fVar6 = this.Value.z / fVar6;
			}
			__this_00 = new CustomLogicVector3Builtin();
			__this_00.Value.x = (float)(int)uVar8;
			__this_00.Value.y = (float)(int)((ulong)uVar8 >> 0x20);
			__this_00.Value.z = fVar6;
			return __this_00;
		}
	}

	[Token(Token = "0x17000325")]
	public float Magnitude
	{
		[Token(Token = "0x6001CCA")]
		[Address(RVA = "0x58DFB90", Offset = "0x58DEB90", VA = "0x58DFB90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_Magnitude): clean
			uint uVar1;
			uint uVar2;
			float fVar3;

			fVar3 = this.Value.x;
			uVar1 = this.Value.y;
			uVar2 = this.Value.z;
			fVar3 = (float)uVar2 * (float)uVar2 + fVar3 * fVar3 + (float)uVar1 * (float)uVar1;
			if (0.0 <= fVar3) {
				return SQRT(fVar3);
			}
			fVar3 = sqrtf(fVar3);
			return fVar3;
		}
	}

	[Token(Token = "0x17000326")]
	public float SqrMagnitude
	{
		[Token(Token = "0x6001CCB")]
		[Address(RVA = "0x58DFC20", Offset = "0x58DEC20", VA = "0x58DFC20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_SqrMagnitude): clean
			float fVar1;
			uint uVar2;
			uint uVar3;

			fVar1 = this.Value.x;
			uVar2 = this.Value.y;
			uVar3 = this.Value.z;
			return (float)uVar3 * (float)uVar3 + fVar1 * fVar1 + (float)uVar2 * (float)uVar2;
		}
	}

	[Token(Token = "0x17000327")]
	public static CustomLogicVector3Builtin Zero
	{
		[Token(Token = "0x6001CCC")]
		[Address(RVA = "0x58DFC40", Offset = "0x58DEC40", VA = "0x58DFC40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_Zero): clean
			float fVar1;
			float fVar3;
			float fVar4;
			CustomLogicVector3Builtin __this;

			fVar3 = (Vector3.zeroVector).x;
			fVar4 = (Vector3.zeroVector).y;
			fVar1 = (Vector3.zeroVector).z;
			__this = new CustomLogicVector3Builtin();
			__this.Value.x = fVar3;
			__this.Value.y = fVar4;
			__this.Value.z = fVar1;
			return __this;
		}
	}

	[Token(Token = "0x17000328")]
	public static CustomLogicVector3Builtin One
	{
		[Token(Token = "0x6001CCD")]
		[Address(RVA = "0x58DFD10", Offset = "0x58DED10", VA = "0x58DFD10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_One): clean
			float fVar1;
			float fVar3;
			float fVar4;
			CustomLogicVector3Builtin __this;

			fVar3 = (Vector3.oneVector).x;
			fVar4 = (Vector3.oneVector).y;
			fVar1 = (Vector3.oneVector).z;
			__this = new CustomLogicVector3Builtin();
			__this.Value.x = fVar3;
			__this.Value.y = fVar4;
			__this.Value.z = fVar1;
			return __this;
		}
	}

	[Token(Token = "0x17000329")]
	public static CustomLogicVector3Builtin Up
	{
		[Token(Token = "0x6001CCE")]
		[Address(RVA = "0x58DFDE0", Offset = "0x58DEDE0", VA = "0x58DFDE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_Up): clean
			float fVar1;
			float fVar3;
			float fVar4;
			CustomLogicVector3Builtin __this;

			fVar3 = (Vector3.upVector).x;
			fVar4 = (Vector3.upVector).y;
			fVar1 = (Vector3.upVector).z;
			__this = new CustomLogicVector3Builtin();
			__this.Value.x = fVar3;
			__this.Value.y = fVar4;
			__this.Value.z = fVar1;
			return __this;
		}
	}

	[Token(Token = "0x1700032A")]
	public static CustomLogicVector3Builtin Down
	{
		[Token(Token = "0x6001CCF")]
		[Address(RVA = "0x58DFEB0", Offset = "0x58DEEB0", VA = "0x58DFEB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_Down): clean
			float fVar1;
			float fVar3;
			float fVar4;
			CustomLogicVector3Builtin __this;

			fVar3 = (Vector3.downVector).x;
			fVar4 = (Vector3.downVector).y;
			fVar1 = (Vector3.downVector).z;
			__this = new CustomLogicVector3Builtin();
			__this.Value.x = fVar3;
			__this.Value.y = fVar4;
			__this.Value.z = fVar1;
			return __this;
		}
	}

	[Token(Token = "0x1700032B")]
	public static CustomLogicVector3Builtin Left
	{
		[Token(Token = "0x6001CD0")]
		[Address(RVA = "0x58DFF80", Offset = "0x58DEF80", VA = "0x58DFF80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_Left): clean
			float fVar1;
			float fVar3;
			float fVar4;
			CustomLogicVector3Builtin __this;

			fVar3 = (Vector3.leftVector).x;
			fVar4 = (Vector3.leftVector).y;
			fVar1 = (Vector3.leftVector).z;
			__this = new CustomLogicVector3Builtin();
			__this.Value.x = fVar3;
			__this.Value.y = fVar4;
			__this.Value.z = fVar1;
			return __this;
		}
	}

	[Token(Token = "0x1700032C")]
	public static CustomLogicVector3Builtin Right
	{
		[Token(Token = "0x6001CD1")]
		[Address(RVA = "0x58E0050", Offset = "0x58DF050", VA = "0x58E0050")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_Right): clean
			float fVar1;
			float fVar3;
			float fVar4;
			CustomLogicVector3Builtin __this;

			fVar3 = (Vector3.rightVector).x;
			fVar4 = (Vector3.rightVector).y;
			fVar1 = (Vector3.rightVector).z;
			__this = new CustomLogicVector3Builtin();
			__this.Value.x = fVar3;
			__this.Value.y = fVar4;
			__this.Value.z = fVar1;
			return __this;
		}
	}

	[Token(Token = "0x1700032D")]
	public static CustomLogicVector3Builtin Forward
	{
		[Token(Token = "0x6001CD2")]
		[Address(RVA = "0x58E0120", Offset = "0x58DF120", VA = "0x58E0120")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_Forward): clean
			float fVar1;
			float fVar3;
			float fVar4;
			CustomLogicVector3Builtin __this;

			fVar3 = (Vector3.forwardVector).x;
			fVar4 = (Vector3.forwardVector).y;
			fVar1 = (Vector3.forwardVector).z;
			__this = new CustomLogicVector3Builtin();
			__this.Value.x = fVar3;
			__this.Value.y = fVar4;
			__this.Value.z = fVar1;
			return __this;
		}
	}

	[Token(Token = "0x1700032E")]
	public static CustomLogicVector3Builtin Back
	{
		[Token(Token = "0x6001CD3")]
		[Address(RVA = "0x58E01F0", Offset = "0x58DF1F0", VA = "0x58E01F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_Back): clean
			float fVar1;
			float fVar3;
			float fVar4;
			CustomLogicVector3Builtin __this;

			fVar3 = (Vector3.backVector).x;
			fVar4 = (Vector3.backVector).y;
			fVar1 = (Vector3.backVector).z;
			__this = new CustomLogicVector3Builtin();
			__this.Value.x = fVar3;
			__this.Value.y = fVar4;
			__this.Value.z = fVar1;
			return __this;
		}
	}

	[Token(Token = "0x1700032F")]
	public static CustomLogicVector3Builtin NegativeInfinity
	{
		[Token(Token = "0x6001CD4")]
		[Address(RVA = "0x58E02C0", Offset = "0x58DF2C0", VA = "0x58E02C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_NegativeInfinity): clean
			float fVar1;
			float fVar3;
			float fVar4;
			CustomLogicVector3Builtin __this;

			fVar3 = (Vector3.negativeInfinityVector).x;
			fVar4 = (Vector3.negativeInfinityVector).y;
			fVar1 = (Vector3.negativeInfinityVector).z;
			__this = new CustomLogicVector3Builtin();
			__this.Value.x = fVar3;
			__this.Value.y = fVar4;
			__this.Value.z = fVar1;
			return __this;
		}
	}

	[Token(Token = "0x17000330")]
	public static CustomLogicVector3Builtin PositiveInfinity
	{
		[Token(Token = "0x6001CD5")]
		[Address(RVA = "0x58E0390", Offset = "0x58DF390", VA = "0x58E0390")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_PositiveInfinity): clean
			float fVar1;
			float fVar3;
			float fVar4;
			CustomLogicVector3Builtin __this;

			fVar3 = (Vector3.positiveInfinityVector).x;
			fVar4 = (Vector3.positiveInfinityVector).y;
			fVar1 = (Vector3.positiveInfinityVector).z;
			__this = new CustomLogicVector3Builtin();
			__this.Value.x = fVar3;
			__this.Value.y = fVar4;
			__this.Value.z = fVar1;
			return __this;
		}
	}

	[Token(Token = "0x17000331")]
	public override string ClassName
	{
		[Token(Token = "0x6001CFA")]
		[Address(RVA = "0x58E2BE0", Offset = "0x58E1BE0", VA = "0x58E2BE0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_ClassName): clean
			return "Vector3";
		}
	}

	[Token(Token = "0x17000332")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001CFB")]
		[Address(RVA = "0x58E2C10", Offset = "0x58E1C10", VA = "0x58E2C10", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_IsAbstract): clean
			return false;
		}
	}

	[Token(Token = "0x17000333")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001CFC")]
		[Address(RVA = "0x58E2C20", Offset = "0x58E1C20", VA = "0x58E2C20", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000334")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001CFD")]
		[Address(RVA = "0x58E2C30", Offset = "0x58E1C30", VA = "0x58E2C30", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001CBE")]
	[Address(RVA = "0x58DF680", Offset = "0x58DE680", VA = "0x58DF680")]
	public CustomLogicVector3Builtin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$.ctor): clean
		base();
		this.Value.z = 0.0;
		this.Value.x = 0.0;
		this.Value.y = 0.0;
		return;
	}

	[Token(Token = "0x6001CBF")]
	[Address(RVA = "0x58DF6E0", Offset = "0x58DE6E0", VA = "0x58DF6E0")]
	public CustomLogicVector3Builtin(float xyz)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$.ctor): clean
		base();
		this.Value.x = xyz;
		this.Value.y = xyz;
		this.Value.z = xyz;
		return;
	}

	[Token(Token = "0x6001CC0")]
	[Address(RVA = "0x58DF750", Offset = "0x58DE750", VA = "0x58DF750")]
	public CustomLogicVector3Builtin(float x, float y)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$.ctor): clean
		base();
		this.Value.x = x;
		this.Value.y = y;
		this.Value.z = 0.0;
		return;
	}

	[Token(Token = "0x6001CC1")]
	[Address(RVA = "0x58DF7D0", Offset = "0x58DE7D0", VA = "0x58DF7D0")]
	public CustomLogicVector3Builtin(float x, float y, float z)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$.ctor): clean
		base();
		this.Value.x = x;
		this.Value.y = y;
		this.Value.z = z;
		return;
	}

	[Token(Token = "0x6001CC2")]
	[Address(RVA = "0x58DF850", Offset = "0x58DE850", VA = "0x58DF850")]
	public CustomLogicVector3Builtin(Vector3 value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$.ctor): clean
		base();
		this.Value.x = value.x;
		this.Value.y = value.y;
		this.Value.z = value.z;
		return;
	}

	[Token(Token = "0x6001CD6")]
	[Address(RVA = "0x58E0460", Offset = "0x58DF460", VA = "0x58E0460")]
	public static float Angle(CustomLogicVector3Builtin from, CustomLogicVector3Builtin to)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$Angle): 6 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		double dVar6;
		Il2CppClass klass;
		float fVar7;
		float fVar8;
		float fVar9;

		if ((from == null) ||(to == null)) {
			throw new NullReferenceException();
		}
		uVar2 = from.Value.x;
		uVar4 = from.Value.y;
		fVar8 = from.Value.z;
		uVar3 = to.Value.x;
		uVar5 = to.Value.y;
		fVar1 = to.Value.z;
		fVar7 = fVar8 * fVar8 + (float)uVar4 * (float)uVar4 + (float)uVar2 * (float)uVar2;
		fVar9 = fVar1 * fVar1 + (float)uVar5 * (float)uVar5 + (float)uVar3 * (float)uVar3;
		if (fVar7 * fVar9 < 0.0) {
			fVar7 = sqrtf(fVar7 * fVar9);
			klass = typeof(Math);
		}
		else {
			fVar7 = SQRT(fVar7 * fVar9);
			klass = typeof(Math);
		}
		if (1e-15 <= fVar7) {
			fVar7 = (fVar8 * fVar1 + (float)uVar4 * (float)uVar5 + (float)uVar2 * (float)uVar3) / fVar7;
			fVar8 = 1.0;
			if (fVar7 <= 1.0) {
				fVar8 = fVar7;
			}
			typeof(Math) = (Math)klass;
			dVar6 = acos((double)(float)(~-(uint)(-1.0 <= fVar7) & 0xbf800000 | (uint)fVar8 & -(uint)(-1.0 <= fVar7)), (MethodInfo)klass);
			return (float)dVar6 * 57.29578;
		}
		typeof(Math) = (Math)klass;
		return 0.0;
	}

	[Token(Token = "0x6001CD7")]
	[Address(RVA = "0x58E0630", Offset = "0x58DF630", VA = "0x58E0630")]
	public static CustomLogicVector3Builtin ClampMagnitude(CustomLogicVector3Builtin vector, float maxLength)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$ClampMagnitude): 15 lines keep C-only constructs
		byte[] auVar1 = new byte[16];
		CustomLogicVector3Builtin __this;
		float fVar2;
		byte[] auVar3 = new byte[16];
		float local_30;
		ulong local_18;

		if (vector == null) {
			throw new NullReferenceException();
		}
		local_18._0_4_ = vector.Value.x;
		local_18._4_4_ = vector.Value.y;
		auVar3._8_8_ = 0;
		auVar3._0_8_ = local_18;
		local_30 = vector.Value.z;
		fVar2 = local_30 * local_30 +(float)local_18._4_4_ * (float)local_18._4_4_ +(float)(undefined4)local_18 * (float)(undefined4)local_18;
		if (fVar2 <= maxLength * maxLength) goto label_059e073d;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			if (fVar2 < 0.0) goto label_059e0702;
	label_059e06ce: ;
			fVar2 = SQRT(fVar2);
		}
		else {
			if (0.0 <= fVar2) goto label_059e06ce;
	label_059e0702: ;
			fVar2 = sqrtf(fVar2);
		}
		auVar1._4_4_ = fVar2;
		auVar1._0_4_ = fVar2;
		auVar1._8_4_ = fVar2;
		auVar1._12_4_ = fVar2;
		auVar3 = divps(auVar3, auVar1);
		local_30 = (local_30 / fVar2) * maxLength;
		local_18 = CONCAT44(auVar3._4_4_ * maxLength, auVar3._0_4_ * maxLength);
	label_059e073d: ;
		__this = new CustomLogicVector3Builtin();
		__this.Value.x = (float)(undefined4)local_18;
		__this.Value.y = (float)local_18._4_4_;
		__this.Value.z = local_30;
		return __this;
	}

	[Token(Token = "0x6001CD8")]
	[Address(RVA = "0x58E07D0", Offset = "0x58DF7D0", VA = "0x58E07D0")]
	public static CustomLogicVector3Builtin Cross(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$Cross): clean
		float fVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		CustomLogicVector3Builtin __this;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		uVar3 = a.Value.x;
		uVar5 = a.Value.y;
		uVar4 = b.Value.x;
		uVar6 = b.Value.y;
		fVar1 = a.Value.z;
		fVar2 = b.Value.z;
		__this = new CustomLogicVector3Builtin();
		__this.Value.x = fVar2 * (float)uVar5 - (float)uVar6 * fVar1;
		__this.Value.y = fVar1 * (float)uVar4 - (float)uVar3 * fVar2;
		__this.Value.z = (float)uVar6 * (float)uVar3 - (float)uVar5 * (float)uVar4;
		return __this;
	}

	[Token(Token = "0x6001CD9")]
	[Address(RVA = "0x58E0900", Offset = "0x58DF900", VA = "0x58E0900")]
	public static float Distance(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$Distance): clean
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		float fVar7;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		uVar2 = a.Value.x;
		uVar4 = a.Value.y;
		fVar7 = a.Value.z;
		uVar3 = b.Value.x;
		uVar5 = b.Value.y;
		fVar1 = b.Value.z;
		if (Il2CppMethodInitialized_0753e7b7 == false) {
			Il2CppMethodInitialized_0753e7b7 = true;
			uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar6 == 0) {
		}
		fVar7 = fVar7 - fVar1;
		fVar7 = ((float)uVar4 - (float)uVar5) * ((float)uVar4 - (float)uVar5) +((float)uVar2 - (float)uVar3) * ((float)uVar2 - (float)uVar3) + fVar7 * fVar7;
		if (fVar7 < 0.0) {
			fVar7 = sqrtf(fVar7);
			return fVar7;
		}
		return SQRT(fVar7);
	}

	[Token(Token = "0x6001CDA")]
	[Address(RVA = "0x58E0A10", Offset = "0x58DFA10", VA = "0x58E0A10")]
	public static float Dot(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$Dot): clean
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		uVar1 = a.Value.x;
		uVar3 = a.Value.y;
		uVar2 = b.Value.x;
		uVar4 = b.Value.y;
		return a.Value.z * b.Value.z +(float)uVar4 * (float)uVar3 + (float)uVar2 * (float)uVar1;
	}

	[Token(Token = "0x6001CDB")]
	[Address(RVA = "0x58E0A50", Offset = "0x58DFA50", VA = "0x58E0A50")]
	public static CustomLogicVector3Builtin Lerp(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b, float t)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$Lerp): clean
		float fVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		CustomLogicVector3Builtin __this;
		float fVar7;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		fVar1 = a.Value.z;
		uVar3 = a.Value.x;
		uVar5 = a.Value.y;
		uVar4 = b.Value.x;
		uVar6 = b.Value.y;
		fVar2 = b.Value.z;
		fVar7 = 1.0;
		if (t <= 1.0) {
			fVar7 = t;
		}
		fVar7 = (float)(-(uint)(0.0 <= t) & (uint)fVar7);
		__this = new CustomLogicVector3Builtin();
		__this.Value.x = fVar7 * ((float)uVar4 - (float)uVar3) + (float)uVar3;
		__this.Value.y = fVar7 * ((float)uVar6 - (float)uVar5) + (float)uVar5;
		__this.Value.z = (fVar2 - fVar1) * fVar7 + fVar1;
		return __this;
	}

	[Token(Token = "0x6001CDC")]
	[Address(RVA = "0x58E0B80", Offset = "0x58DFB80", VA = "0x58E0B80")]
	public static CustomLogicVector3Builtin LerpUnclamped(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b, float t)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$LerpUnclamped): clean
		float fVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		CustomLogicVector3Builtin __this;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		fVar1 = a.Value.z;
		uVar3 = a.Value.x;
		uVar5 = a.Value.y;
		uVar4 = b.Value.x;
		uVar6 = b.Value.y;
		fVar2 = b.Value.z;
		__this = new CustomLogicVector3Builtin();
		__this.Value.x = t * ((float)uVar4 - (float)uVar3) + (float)uVar3;
		__this.Value.y = t * ((float)uVar6 - (float)uVar5) + (float)uVar5;
		__this.Value.z = (fVar2 - fVar1) * t + fVar1;
		return __this;
	}

	[Token(Token = "0x6001CDD")]
	[Address(RVA = "0x58E0CA0", Offset = "0x58DFCA0", VA = "0x58E0CA0")]
	public static CustomLogicVector3Builtin Max(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$Max): 12 lines keep C-only constructs
		float fVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		CustomLogicVector3Builtin __this;
		byte[] auVar7 = new byte[16];
		byte[] local_28 = new byte[16];

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		fVar1 = a.Value.z;
		uVar3 = a.Value.x;
		uVar5 = a.Value.y;
		local_28._4_4_ = uVar5;
		local_28._0_4_ = uVar3;
		local_28._8_8_ = 0;
		uVar4 = b.Value.x;
		uVar6 = b.Value.y;
		auVar7._4_4_ = uVar6;
		auVar7._0_4_ = uVar4;
		fVar2 = b.Value.z;
		if (fVar1 <= fVar2) {
			fVar1 = fVar2;
		}
		auVar7._8_8_ = 0;
		auVar7 = maxps(local_28, auVar7);
		__this = new CustomLogicVector3Builtin();
		local_28._0_4_ = auVar7._0_4_;
		local_28._4_4_ = auVar7._4_4_;
		__this.Value.x = (float)local_28._0_4_;
		__this.Value.y = (float)local_28._4_4_;
		__this.Value.z = fVar1;
		return __this;
	}

	[Token(Token = "0x6001CDE")]
	[Address(RVA = "0x58E0D90", Offset = "0x58DFD90", VA = "0x58E0D90")]
	public static CustomLogicVector3Builtin Min(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$Min): 12 lines keep C-only constructs
		float fVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		CustomLogicVector3Builtin __this;
		byte[] auVar7 = new byte[16];
		byte[] auStack_28 = new byte[16];

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		fVar1 = a.Value.z;
		uVar3 = a.Value.x;
		uVar5 = a.Value.y;
		auStack_28._4_4_ = uVar5;
		auStack_28._0_4_ = uVar3;
		auStack_28._8_8_ = 0;
		uVar4 = b.Value.x;
		uVar6 = b.Value.y;
		auVar7._4_4_ = uVar6;
		auVar7._0_4_ = uVar4;
		fVar2 = b.Value.z;
		if (fVar2 <= fVar1) {
			fVar1 = fVar2;
		}
		auVar7._8_8_ = 0;
		auVar7 = minps(auStack_28, auVar7);
		__this = new CustomLogicVector3Builtin();
		auStack_28._0_4_ = auVar7._0_4_;
		auStack_28._4_4_ = auVar7._4_4_;
		__this.Value.x = (float)auStack_28._0_4_;
		__this.Value.y = (float)auStack_28._4_4_;
		__this.Value.z = fVar1;
		return __this;
	}

	[Token(Token = "0x6001CDF")]
	[Address(RVA = "0x58E0E80", Offset = "0x58DFE80", VA = "0x58E0E80")]
	public static CustomLogicVector3Builtin MoveTowards(CustomLogicVector3Builtin current, CustomLogicVector3Builtin target, float maxDistanceDelta)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$MoveTowards): 13 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		float fVar3;
		uint uVar4;
		float fVar5;
		byte[] auVar6 = new byte[16];
		CustomLogicVector3Builtin __this;
		float fVar7;
		byte[] auVar8 = new byte[16];
		float fVar9;
		float fVar10;

		if ((current == null) ||(target == null)) {
			throw new NullReferenceException();
		}
		uVar2 = current.Value.x;
		uVar4 = current.Value.y;
		fVar1 = current.Value.z;
		fVar3 = target.Value.x;
		fVar5 = target.Value.y;
		fVar9 = target.Value.z;
		auVar8._0_4_ = fVar3 - (float)uVar2;
		auVar8._4_4_ = fVar5 - (float)uVar4;
		auVar8._8_8_ = 0;
		fVar10 = fVar9 - fVar1;
		fVar7 = fVar10 * fVar10 + auVar8._4_4_ * auVar8._4_4_ + auVar8._0_4_ * auVar8._0_4_;
		if (((fVar7 == 0.0) && (!NAN(fVar7))) ||((0.0 <= maxDistanceDelta && (fVar7 <= maxDistanceDelta * maxDistanceDelta)))) goto label_059e1027;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			if (fVar7 < 0.0) goto label_059e0fc5;
	label_059e0f6b: ;
			fVar7 = SQRT(fVar7);
		}
		else {
			if (0.0 <= fVar7) goto label_059e0f6b;
	label_059e0fc5: ;
			fVar7 = sqrtf(fVar7);
		}
		auVar6._4_4_ = fVar7;
		auVar6._0_4_ = fVar7;
		auVar6._8_4_ = fVar7;
		auVar6._12_4_ = fVar7;
		auVar8 = divps(auVar8, auVar6);
		fVar3 = (float)uVar2 + maxDistanceDelta * auVar8._0_4_;
		fVar5 = (float)uVar4 + maxDistanceDelta * auVar8._4_4_;
		fVar9 = fVar1 + (fVar10 / fVar7) * maxDistanceDelta;
	label_059e1027: ;
		__this = new CustomLogicVector3Builtin();
		__this.Value.x = fVar3;
		__this.Value.y = fVar5;
		__this.Value.z = fVar9;
		return __this;
	}

	[Token(Token = "0x6001CE0")]
	[Address(RVA = "0x58E10C0", Offset = "0x58E00C0", VA = "0x58E10C0")]
	public static CustomLogicVector3Builtin Normalize(CustomLogicVector3Builtin value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$Normalize): 14 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		byte[] auVar7 = new byte[16];
		CustomLogicVector3Builtin __this;
		float fVar8;
		uint uVar9;
		uint extraout_XMM0_Db;
		float fVar10;
		byte[] auVar11 = new byte[16];
		float fStack_18;
		float fStack_14;

		if (value == null) {
			throw new NullReferenceException();
		}
		uVar1 = value.Value.x;
		uVar3 = value.Value.y;
		auVar11._4_4_ = uVar3;
		auVar11._0_4_ = uVar1;
		fVar10 = value.Value.z;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar5 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
		}
		if (uVar5 == 0) {
		}
		uVar9 = 0;
		fVar8 = fVar10 * fVar10 + (float)uVar3 * (float)uVar3 + (float)uVar1 * (float)uVar1;
		if (fVar8 < 0.0) {
			fVar8 = sqrtf(fVar8);
			uVar9 = extraout_XMM0_Db;
		}
		else {
			fVar8 = SQRT(fVar8);
		}
		if (fVar8 <= 1e-05) {
			fVar10 = (Vector3.zeroVector).z;
			uVar2 = (Vector3.zeroVector).x;
			uVar4 = (Vector3.zeroVector).y;
			fStack_18 = (float)uVar2;
			fStack_14 = (float)uVar4;
		}
		else {
			fVar10 = fVar10 / fVar8;
			auVar11._8_8_ = 0;
			auVar7._4_4_ = fVar8;
			auVar7._0_4_ = fVar8;
			auVar7._8_4_ = uVar9;
			auVar7._12_4_ = uVar9;
			auVar11 = divps(auVar11, auVar7);
			fStack_18 = auVar11._0_4_;
			fStack_14 = auVar11._4_4_;
		}
		__this = new CustomLogicVector3Builtin();
		__this.Value.x = fStack_18;
		__this.Value.y = fStack_14;
		__this.Value.z = fVar10;
		return __this;
	}

	[Token(Token = "0x6001CE1")]
	[Address(RVA = "0x58E12B0", Offset = "0x58E02B0", VA = "0x58E12B0")]
	public static void OrthoNormalize(CustomLogicVector3Builtin normal, CustomLogicVector3Builtin tangent)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$OrthoNormalize): clean
		if ((normal == null) ||(tangent == null)) {
			throw new NullReferenceException();
		}
		Vector3.OrthoNormalize(ref normal.Value, ref tangent.Value);
		return;
	}

	[Token(Token = "0x6001CE2")]
	[Address(RVA = "0x58E12D0", Offset = "0x58E02D0", VA = "0x58E12D0")]
	public static CustomLogicVector3Builtin Project(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$Project): 3 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		CustomLogicVector3Builtin __this;
		float fVar7;
		float fVar8;
		ulong uStack_38;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		uVar2 = a.Value.x;
		uVar4 = a.Value.y;
		fVar1 = a.Value.z;
		uVar3 = b.Value.x;
		uVar5 = b.Value.y;
		fVar8 = b.Value.z;
		fVar7 = fVar8 * fVar8 + (float)uVar5 * (float)uVar5 + (float)uVar3 * (float)uVar3;
		if (Mathf.Epsilon <= fVar7) {
			fVar7 = (fVar1 * fVar8 + (float)uVar4 * (float)uVar5 + (float)uVar2 * (float)uVar3) / fVar7;
			fVar8 = fVar8 * fVar7;
			uStack_38 = CONCAT44(fVar7 * (float)uVar5, fVar7 * (float)uVar3);
		}
		else {
			uStack_38._0_4_ = (Vector3.zeroVector).x;
			uStack_38._4_4_ = (Vector3.zeroVector).y;
			fVar8 = (Vector3.zeroVector).z;
		}
		__this = new CustomLogicVector3Builtin();
		__this.Value.x = (float)(int)uStack_38;
		__this.Value.y = (float)(int)((ulong)uStack_38 >> 0x20);
		__this.Value.z = fVar8;
		return __this;
	}

	[Token(Token = "0x6001CE3")]
	[Address(RVA = "0x58E1490", Offset = "0x58E0490", VA = "0x58E1490")]
	public static CustomLogicVector3Builtin ProjectOnPlane(CustomLogicVector3Builtin vector, CustomLogicVector3Builtin plane)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$ProjectOnPlane): 4 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		CustomLogicVector3Builtin __this;
		float fVar4;
		float fVar5;
		ulong local_28;

		if ((vector == null) ||(plane == null)) {
			throw new NullReferenceException();
		}
		local_28._0_4_ = vector.Value.x;
		local_28._4_4_ = vector.Value.y;
		fVar5 = vector.Value.z;
		uVar2 = plane.Value.x;
		uVar3 = plane.Value.y;
		fVar1 = plane.Value.z;
		fVar4 = fVar1 * fVar1 + (float)uVar3 * (float)uVar3 + (float)uVar2 * (float)uVar2;
		if (Mathf.Epsilon <= fVar4) {
			fVar4 = (fVar5 * fVar1 + (float)local_28._4_4_ * (float)uVar3 + (float)(undefined4)local_28 * (float)uVar2 ) / fVar4;
			local_28 = CONCAT44((float)local_28._4_4_ - fVar4 * (float)uVar3, (float)(undefined4)local_28 - fVar4 * (float)uVar2);
			fVar5 = fVar5 - fVar1 * fVar4;
		}
		__this = new CustomLogicVector3Builtin();
		__this.Value.x = (float)(int)local_28;
		__this.Value.y = (float)(int)((ulong)local_28 >> 0x20);
		__this.Value.z = fVar5;
		return __this;
	}

	[Token(Token = "0x6001CE4")]
	[Address(RVA = "0x58E1620", Offset = "0x58E0620", VA = "0x58E1620")]
	public static CustomLogicVector3Builtin Reflect(CustomLogicVector3Builtin inDirection, CustomLogicVector3Builtin inNormal)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$Reflect): clean
		float fVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		CustomLogicVector3Builtin __this;
		float fVar7;

		if ((inDirection == null) ||(inNormal == null)) {
			throw new NullReferenceException();
		}
		fVar1 = inDirection.Value.z;
		uVar3 = inDirection.Value.x;
		uVar5 = inDirection.Value.y;
		uVar4 = inNormal.Value.x;
		uVar6 = inNormal.Value.y;
		fVar2 = inNormal.Value.z;
		fVar7 = ((float)uVar5 * (float)uVar6 + (float)uVar3 * (float)uVar4 + fVar1 * fVar2) * -2.0;
		__this = new CustomLogicVector3Builtin();
		__this.Value.x = fVar7 * (float)uVar4 + (float)uVar3;
		__this.Value.y = fVar7 * (float)uVar6 + (float)uVar5;
		__this.Value.z = fVar7 * fVar2 + fVar1;
		return __this;
	}

	[Token(Token = "0x6001CE5")]
	[Address(RVA = "0x58E1750", Offset = "0x58E0750", VA = "0x58E1750")]
	public static CustomLogicVector3Builtin RotateTowards(CustomLogicVector3Builtin current, CustomLogicVector3Builtin target, float maxRadiansDelta, float maxMagnitudeDelta)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$RotateTowards): 7 lines keep C-only constructs
		CustomLogicVector3Builtin __this;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Vector3 UVar1;
		Vector3 local_38;
		Vector3 local_28;
		byte[] local_18 = new byte[16];

		if ((current == null) ||(target == null)) {
			throw new NullReferenceException();
		}
		local_28.z = current.Value.z;
		local_28.x = current.Value.x;
		local_28.y = current.Value.y;
		local_38.x = target.Value.x;
		local_38.y = target.Value.y;
		local_38.z = target.Value.z;
		UVar1 = Vector3.Internal_RotateTowards(ref local_28, ref local_38, maxRadiansDelta, maxMagnitudeDelta);
		local_18._8_4_ = extraout_XMM0_Dc;
		local_18._0_8_ = UVar1._0_8_;
		local_18._12_4_ = extraout_XMM0_Dd;
		__this = new CustomLogicVector3Builtin();
		__this.Value.x = (float)local_18._0_4_;
		__this.Value.y = (float)local_18._4_4_;
		__this.Value.z = UVar1.z;
		return __this;
	}

	[Token(Token = "0x6001CE6")]
	[Address(RVA = "0x58E1840", Offset = "0x58E0840", VA = "0x58E1840")]
	public static float SignedAngle(CustomLogicVector3Builtin from, CustomLogicVector3Builtin to, CustomLogicVector3Builtin axis)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$SignedAngle): 7 lines keep C-only constructs
		ulong uVar1;
		ulong uVar2;
		ulong uVar3;
		float fVar4;

		if (((from == null) ||(to == null)) ||(axis == null)) {
			throw new NullReferenceException();
		}
		uVar1._0_4_ = from.Value.x;
		uVar1._4_4_ = from.Value.y;
		uVar2._0_4_ = to.Value.x;
		uVar2._4_4_ = to.Value.y;
		uVar3._0_4_ = axis.Value.x;
		uVar3._4_4_ = axis.Value.y;
		fVar4 = (float)il2cpp_runtime_helper_059fb780(uVar1, from.Value.z, uVar2, to.Value.z, uVar3, axis.Value.z, 0);
		return fVar4;
	}

	[Token(Token = "0x6001CE7")]
	[Address(RVA = "0x58E1880", Offset = "0x58E0880", VA = "0x58E1880")]
	public static CustomLogicVector3Builtin Slerp(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b, float t)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$Slerp): 7 lines keep C-only constructs
		CustomLogicVector3Builtin __this;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Vector3 UVar1;
		Vector3 local_38;
		Vector3 local_28;
		byte[] local_18 = new byte[16];

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		local_28.z = a.Value.z;
		local_28.x = a.Value.x;
		local_28.y = a.Value.y;
		local_38.x = b.Value.x;
		local_38.y = b.Value.y;
		local_38.z = b.Value.z;
		UVar1 = Vector3.Internal_Slerp(ref local_28, ref local_38, t);
		local_18._8_4_ = extraout_XMM0_Dc;
		local_18._0_8_ = UVar1._0_8_;
		local_18._12_4_ = extraout_XMM0_Dd;
		__this = new CustomLogicVector3Builtin();
		__this.Value.x = (float)local_18._0_4_;
		__this.Value.y = (float)local_18._4_4_;
		__this.Value.z = UVar1.z;
		return __this;
	}

	[Token(Token = "0x6001CE8")]
	[Address(RVA = "0x58E1970", Offset = "0x58E0970", VA = "0x58E1970")]
	public static CustomLogicVector3Builtin SlerpUnclamped(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b, float t)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$SlerpUnclamped): 7 lines keep C-only constructs
		CustomLogicVector3Builtin __this;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Vector3 UVar1;
		Vector3 local_38;
		Vector3 local_28;
		byte[] local_18 = new byte[16];

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		local_28.z = a.Value.z;
		local_28.x = a.Value.x;
		local_28.y = a.Value.y;
		local_38.x = b.Value.x;
		local_38.y = b.Value.y;
		local_38.z = b.Value.z;
		UVar1 = Vector3.Internal_SlerpUnclamped(ref local_28, ref local_38, t);
		local_18._8_4_ = extraout_XMM0_Dc;
		local_18._0_8_ = UVar1._0_8_;
		local_18._12_4_ = extraout_XMM0_Dd;
		__this = new CustomLogicVector3Builtin();
		__this.Value.x = (float)local_18._0_4_;
		__this.Value.y = (float)local_18._4_4_;
		__this.Value.z = UVar1.z;
		return __this;
	}

	[Token(Token = "0x6001CE9")]
	[Address(RVA = "0x58E1A60", Offset = "0x58E0A60", VA = "0x58E1A60")]
	public static CustomLogicVector3Builtin SmoothDamp(CustomLogicVector3Builtin current, CustomLogicVector3Builtin target, CustomLogicVector3Builtin currentVelocity, float smoothTime, float maxSpeed)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$SmoothDamp): clean
		CustomLogicVector3Builtin __this;
		float deltaTime;
		Vector3 UVar1;
		Vector3 local_28;
		Vector3 local_18;

		if ((current != null) &&(target != null)) {
			if (currentVelocity != null) {
				local_18.x = current.Value.x;
				local_18.y = current.Value.y;
				local_18.z = current.Value.z;
				local_28.z = target.Value.z;
				local_28.x = target.Value.x;
				local_28.y = target.Value.y;
				deltaTime = Time.deltaTime;
				UVar1 = Vector3.SmoothDamp(ref local_18, ref local_28, ref currentVelocity.Value, smoothTime, maxSpeed, deltaTime);
				__this = new CustomLogicVector3Builtin();
				__this.Value.x = UVar1.x;
				__this.Value.y = UVar1.y;
				__this.Value.z = UVar1.z;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001CEA")]
	[Address(RVA = "0x58E1B90", Offset = "0x58E0B90", VA = "0x58E1B90")]
	public void Set(float x, float y, float z)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$Set): clean
		this.Value.x = x;
		this.Value.y = y;
		this.Value.z = z;
		return;
	}

	[Token(Token = "0x6001CEB")]
	[Address(RVA = "0x58E1BA0", Offset = "0x58E0BA0", VA = "0x58E1BA0")]
	[Obsolete("Use multiply operator instead")]
	public CustomLogicVector3Builtin Scale(object scale)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$Scale): 22 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte bVar3;
		uint uVar4;
		CustomLogicVector3Builtin klass;
		CustomLogicVector3Builtin __this_00;
		int piVar5;
		float pfVar6;
		Il2CppClass pIVar7;
		Exception __this_01;
		String message;
		MethodInfo lastManagedFrame;
		float fVar8;
		float fVar9;
		float fVar10;
		ulong local_48;
		ulong local_38;

		klass = typeof(CustomLogicVector3Builtin);
		if (scale == null) {
	label_059e1d5b: ;
			pIVar7 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_01 = (Exception)il2cpp_codegen_object_new(pIVar7);
			message = il2cpp_codegen_get_runtime_metadata(&"Parameter must be a float or a Vector3.");
			__this_01 = new Exception(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector3Builtin_Scale);
			throw (object)__this_01;
		}
		pIVar7 = scale.klass;
		if (pIVar7 == g_data_07556710) {
			piVar5 = il2cpp_vm_Object_Unbox(scale);
			fVar8 = (float)*piVar5;
			local_48._0_4_ = this.Value.x;
			local_48._4_4_ = this.Value.y;
			local_38 = CONCAT44(fVar8, fVar8);
		}
		else {
			if (pIVar7 != g_data_07556740) {
				bVar3 = (typeof(CustomLogicVector3Builtin)._2).typeHierarchyDepth;
				if (((pIVar7._2).typeHierarchyDepth < bVar3) ||((pIVar7._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(CustomLogicVector3Builtin))) goto label_059e1d5b;
				fVar8 = *(float)&scale[3].monitor;
				uVar1 = this.Value.x;
				uVar2 = this.Value.y;
				fVar9 = (float)uVar1 * SUB84(scale[3].klass, 0);
				fVar10 = (float)uVar2 * (float)((ulong)scale[3].klass >> 0x20);
				local_48 = CONCAT44(fVar10, fVar9);
				this.Value.x = fVar9;
				this.Value.y = fVar10;
				fVar8 = fVar8 * this.Value.z;
				this.Value.z = fVar8;
				__this_00 = il2cpp_codegen_object_new((Il2CppClass)klass);
				uVar4 = (typeof(BuiltinClassInstance)._2).cctor_finished_or_no_cctor;
				goto joined_r0x059e1d4b;
			}
			pfVar6 = il2cpp_vm_Object_Unbox(scale);
			fVar8 = *pfVar6;
			local_38._0_4_ = this.Value.x;
			local_38._4_4_ = this.Value.y;
			local_48 = CONCAT44(fVar8, fVar8);
		}
		fVar8 = fVar8 * this.Value.z;
		local_48 = CONCAT44(local_48._4_4_ * local_38._4_4_, (float)local_48 * (float)local_38);
		uVar4 = (typeof(BuiltinClassInstance)._2).cctor_finished_or_no_cctor;
	joined_r0x059e1d4b: ;
		if (uVar4 == 0) {
		}
		__this_00 = new CustomLogicVector3Builtin();
		__this_00.Value.x = (float)(int)local_48;
		__this_00.Value.y = (float)(int)((ulong)local_48 >> 0x20);
		__this_00.Value.z = fVar8;
		return __this_00;
	}

	[Token(Token = "0x6001CEC")]
	[Address(RVA = "0x58E1DB0", Offset = "0x58E0DB0", VA = "0x58E1DB0")]
	[Obsolete("Use multiply operator instead")]
	public static CustomLogicVector3Builtin Multiply(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$Multiply): clean
		Vector3 b_00;
		Vector3 a_00;
		CustomLogicVector3Builtin __this;
		Vector3 UVar1;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		a_00 = a.Value;
		b_00 = b.Value;
		UVar1 = Util.MultiplyVectors((Vector3)a_00, (Vector3)b_00);
		__this = new CustomLogicVector3Builtin();
		__this.Value.x = UVar1.x;
		__this.Value.y = UVar1.y;
		__this.Value.z = UVar1.z;
		return __this;
	}

	[Token(Token = "0x6001CED")]
	[Address(RVA = "0x58E1EE0", Offset = "0x58E0EE0", VA = "0x58E1EE0")]
	[Obsolete("Use divide operator instead")]
	public static CustomLogicVector3Builtin Divide(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$Divide): clean
		Vector3 b_00;
		Vector3 a_00;
		CustomLogicVector3Builtin __this;
		Vector3 UVar1;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		a_00 = a.Value;
		b_00 = b.Value;
		UVar1 = Util.DivideVectors((Vector3)a_00, (Vector3)b_00);
		__this = new CustomLogicVector3Builtin();
		__this.Value.x = UVar1.x;
		__this.Value.y = UVar1.y;
		__this.Value.z = UVar1.z;
		return __this;
	}

	[Token(Token = "0x6001CEE")]
	[Address(RVA = "0x58E2010", Offset = "0x58E1010", VA = "0x58E2010")]
	public static CustomLogicVector3Builtin GetRotationDirection(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$GetRotationDirection): 7 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		CustomLogicVector3Builtin __this;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Quaternion rotation;
		Vector3 UVar3;
		Vector3 UStack_38;
		byte[] auStack_28 = new byte[16];

		if (a != null) {
			uVar1 = a.Value.x;
			uVar2 = a.Value.y;
			UStack_38.z = a.Value.z * 0.017453292;
			UStack_38.y = (float)uVar2 * 0.017453292;
			UStack_38.x = (float)uVar1 * 0.017453292;
			rotation = Quaternion.Internal_FromEulerRad(ref UStack_38);
			if (b != null) {
				UVar3 = (rotation * (Vector3)b.Value);
				auStack_28._8_4_ = extraout_XMM0_Dc;
				auStack_28._0_8_ = UVar3._0_8_;
				auStack_28._12_4_ = extraout_XMM0_Dd;
				__this = new CustomLogicVector3Builtin();
				__this.Value.x = (float)auStack_28._0_4_;
				__this.Value.y = (float)auStack_28._4_4_;
				__this.Value.z = UVar3.z;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001CEF")]
	[Address(RVA = "0x58E2110", Offset = "0x58E1110", VA = "0x58E2110", Slot = "3")]
	public override string ToString()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$ToString): 1 lines keep C-only constructs
		String pSVar1;

		pSVar1 = (String)il2cpp_runtime_helper_03296cc0(&this.Value, 0, 0, 0);
		return pSVar1;
	}

	[Token(Token = "0x6001CF0")]
	[Address(RVA = "0x58E2120", Offset = "0x58E1120", VA = "0x58E2120", Slot = "18")]
	public object __Copy__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$__Copy__): clean
		float fVar1;
		float fVar2;
		float fVar3;
		CustomLogicVector3Builtin __this_00;

		fVar2 = this.Value.x;
		fVar3 = this.Value.y;
		fVar1 = this.Value.z;
		__this_00 = new CustomLogicVector3Builtin();
		__this_00.Value.x = fVar2;
		__this_00.Value.y = fVar3;
		__this_00.Value.z = fVar1;
		return (object)__this_00;
	}

	[Token(Token = "0x6001CF1")]
	[Address(RVA = "0x58E21D0", Offset = "0x58E11D0", VA = "0x58E21D0", Slot = "11")]
	public object __Add__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$__Add__): 11 lines keep C-only constructs
		float fVar1;
		float fVar2;
		Il2CppClass pIVar3;
		Il2CppClass pIVar4;
		byte bVar5;
		CustomLogicVector3Builtin __this_00;
		String operatorName;
		Exception ex;
		MethodInfo lastManagedFrame;
		ulong uStack_38;
		float fStack_28;
		float fStack_24;

		if (self != null) {
			bVar5 = (typeof(CustomLogicVector3Builtin)._2).typeHierarchyDepth;
			if ((((bVar5 <= (self.klass._2).typeHierarchyDepth) && (other != null)) &&((self.klass._2).typeHierarchy[(ulong)bVar5 - 1] ==typeof(CustomLogicVector3Builtin))) &&((bVar5 <= (other.klass._2).typeHierarchyDepth &&((other.klass._2).typeHierarchy[(ulong)bVar5 - 1] ==typeof(CustomLogicVector3Builtin))))) {
				pIVar3 = self[3].klass;
				fVar1 = *(float)&self[3].monitor;
				pIVar4 = other[3].klass;
				fVar2 = *(float)&other[3].monitor;
				uStack_38._0_4_ = SUB84(pIVar3, 0);
				uStack_38._4_4_ = (float)((ulong)pIVar3 >> 0x20);
				fStack_28 = SUB84(pIVar4, 0);
				fStack_24 = (float)((ulong)pIVar4 >> 0x20);
				__this_00 = new CustomLogicVector3Builtin();
				__this_00.Value.x = (float)uStack_38 + fStack_28;
				__this_00.Value.y = uStack_38._4_4_ + fStack_24;
				__this_00.Value.z = fVar1 + fVar2;
				return (object)__this_00;
			}
		}
		operatorName = il2cpp_codegen_get_runtime_metadata(&"__Add__");
		ex = CustomLogicUtils.OperatorException(operatorName, self, other);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector3Builtin___Add);
		throw (object)ex;
	}

	[Token(Token = "0x6001CF2")]
	[Address(RVA = "0x58E2350", Offset = "0x58E1350", VA = "0x58E2350", Slot = "12")]
	public object __Sub__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$__Sub__): 11 lines keep C-only constructs
		float fVar1;
		float fVar2;
		Il2CppClass pIVar3;
		Il2CppClass pIVar4;
		byte bVar5;
		CustomLogicVector3Builtin __this_00;
		String operatorName;
		Exception ex;
		MethodInfo lastManagedFrame;
		ulong uStack_38;
		float fStack_28;
		float fStack_24;

		if (self != null) {
			bVar5 = (typeof(CustomLogicVector3Builtin)._2).typeHierarchyDepth;
			if ((((bVar5 <= (self.klass._2).typeHierarchyDepth) && (other != null)) &&((self.klass._2).typeHierarchy[(ulong)bVar5 - 1] ==typeof(CustomLogicVector3Builtin))) &&((bVar5 <= (other.klass._2).typeHierarchyDepth &&((other.klass._2).typeHierarchy[(ulong)bVar5 - 1] ==typeof(CustomLogicVector3Builtin))))) {
				pIVar3 = self[3].klass;
				fVar1 = *(float)&self[3].monitor;
				pIVar4 = other[3].klass;
				fVar2 = *(float)&other[3].monitor;
				uStack_38._0_4_ = SUB84(pIVar3, 0);
				uStack_38._4_4_ = (float)((ulong)pIVar3 >> 0x20);
				fStack_28 = SUB84(pIVar4, 0);
				fStack_24 = (float)((ulong)pIVar4 >> 0x20);
				__this_00 = new CustomLogicVector3Builtin();
				__this_00.Value.x = (float)uStack_38 - fStack_28;
				__this_00.Value.y = uStack_38._4_4_ - fStack_24;
				__this_00.Value.z = fVar1 - fVar2;
				return (object)__this_00;
			}
		}
		operatorName = il2cpp_codegen_get_runtime_metadata(&"__Sub__");
		ex = CustomLogicUtils.OperatorException(operatorName, self, other);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector3Builtin___Sub);
		throw (object)ex;
	}

	[Token(Token = "0x6001CF3")]
	[Address(RVA = "0x58E24D0", Offset = "0x58E14D0", VA = "0x58E24D0", Slot = "13")]
	public object __Mul__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$__Mul__): 27 lines keep C-only constructs
		byte bVar1;
		Il2CppClass pIVar2;
		Vector3 b;
		Vector3 a;
		int piVar3;
		float pfVar4;
		CustomLogicVector3Builtin __this_00;
		String operatorName;
		Exception ex;
		MethodInfo lastManagedFrame;
		float fVar5;
		Vector3 UVar6;
		ulong uStack_58;
		ulong uStack_48;

		if (self == null) goto label_059e27ce;
		pIVar2 = self.klass;
		bVar1 = (typeof(CustomLogicVector3Builtin)._2).typeHierarchyDepth;
		if (((pIVar2._2).typeHierarchyDepth < bVar1) ||((pIVar2._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicVector3Builtin))) {
			if (pIVar2 == g_data_07556740) {
				pfVar4 = il2cpp_vm_Object_Unbox(self);
				if (other == null) goto label_059e27ce;
				bVar1 = (typeof(CustomLogicVector3Builtin)._2).typeHierarchyDepth;
				if (((other.klass._2).typeHierarchyDepth < bVar1) ||((other.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicVector3Builtin))) goto label_059e27ce;
				fVar5 = *pfVar4;
				uStack_48 = other[3].klass;
				uStack_58 = (Il2CppClass)CONCAT44(fVar5, fVar5);
			}
			else {
				if ((pIVar2 != g_data_07556710) || (piVar3 = il2cpp_vm_Object_Unbox(self), other == null)) {
	label_059e27ce: ;
					operatorName = il2cpp_codegen_get_runtime_metadata(&"__Mul__");
					ex = CustomLogicUtils.OperatorException(operatorName, self, other);
					lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector3Builtin___Mul);
					throw (object)ex;
				}
				bVar1 = (typeof(CustomLogicVector3Builtin)._2).typeHierarchyDepth;
				if (((other.klass._2).typeHierarchyDepth < bVar1) ||((other.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicVector3Builtin))) goto label_059e27ce;
				uStack_58 = other[3].klass;
				fVar5 = (float)*piVar3;
				uStack_48 = (Il2CppClass)CONCAT44(fVar5, fVar5);
			}
			fVar5 = fVar5 * *(float)&other[3].monitor;
		}
		else {
			if (other == null) goto label_059e27ce;
			pIVar2 = other.klass;
			if (pIVar2 == g_data_07556740) {
				pfVar4 = il2cpp_vm_Object_Unbox(other);
				fVar5 = *pfVar4;
				uStack_48 = self[3].klass;
				uStack_58 = (Il2CppClass)CONCAT44(fVar5, fVar5);
			}
			else {
				if (pIVar2 != g_data_07556710) {
					if (((pIVar2._2).typeHierarchyDepth < bVar1) ||((pIVar2._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicVector3Builtin))) goto label_059e27ce;
					a = *(Vector3)(self + 3);
					b = *(Vector3)(other + 3);
					UVar6 = Util.MultiplyVectors((Vector3)a, (Vector3)b);
					fVar5 = UVar6.z;
					uStack_58 = UVar6._0_8_;
					goto label_059e263f;
				}
				piVar3 = il2cpp_vm_Object_Unbox(other);
				uStack_58 = self[3].klass;
				fVar5 = (float)*piVar3;
				uStack_48 = (Il2CppClass)CONCAT44(fVar5, fVar5);
			}
			fVar5 = fVar5 * *(float)&self[3].monitor;
		}
		uStack_58._4_4_ = (float)((ulong)uStack_58 >> 0x20);
		uStack_48._4_4_ = (float)((ulong)uStack_48 >> 0x20);
		uStack_58 = (Il2CppClass)CONCAT44(uStack_58._4_4_ * uStack_48._4_4_, (float)uStack_58 * (float)uStack_48);
	label_059e263f: ;
		__this_00 = new CustomLogicVector3Builtin();
		__this_00.Value.x = (float)uStack_58;
		__this_00.Value.y = uStack_58._4_4_;
		__this_00.Value.z = fVar5;
		return (object)__this_00;
	}

	[Token(Token = "0x6001CF4")]
	[Address(RVA = "0x58E2810", Offset = "0x58E1810", VA = "0x58E2810", Slot = "14")]
	public object __Div__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$__Div__): 21 lines keep C-only constructs
		float fVar1;
		byte bVar2;
		uint uVar3;
		Il2CppClass pIVar4;
		Vector3 b;
		CustomLogicVector3Builtin __this_00;
		float pfVar5;
		int piVar6;
		String operatorName;
		Exception ex;
		MethodInfo lastManagedFrame;
		byte[] auVar7 = new byte[16];
		float fVar8;
		Vector3 UVar9;
		byte[] auStack_48 = new byte[16];

		if (self == null) {
	label_059e2a4c: ;
			operatorName = il2cpp_codegen_get_runtime_metadata(&"__Div__");
			ex = CustomLogicUtils.OperatorException(operatorName, self, other);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector3Builtin___Div);
			throw (object)ex;
		}
		bVar2 = (typeof(CustomLogicVector3Builtin)._2).typeHierarchyDepth;
		if ((((self.klass._2).typeHierarchyDepth < bVar2) ||((self.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicVector3Builtin))) || (other == null)) goto label_059e2a4c;
		pIVar4 = other.klass;
		if (pIVar4 == g_data_07556740) {
			pfVar5 = il2cpp_vm_Object_Unbox(other);
			fVar8 = *pfVar5;
			auStack_48._0_8_ = self[3].klass;
		}
		else {
			if (pIVar4 != g_data_07556710) {
				if (((pIVar4._2).typeHierarchyDepth < bVar2) ||((pIVar4._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicVector3Builtin))) goto label_059e2a4c;
				UVar9 = *(Vector3)(self + 3);
				b = *(Vector3)(other + 3);
				UVar9 = (Vector3)Util.DivideVectors((Vector3)UVar9, (Vector3)b);
				uVar3 = (typeof(BuiltinClassInstance)._2).cctor_finished_or_no_cctor;
				goto joined_r0x059e2a3c;
			}
			piVar6 = il2cpp_vm_Object_Unbox(other);
			auStack_48._0_8_ = self[3].klass;
			fVar8 = (float)*piVar6;
		}
		auStack_48._8_8_ = 0;
		fVar1 = *(float)&self[3].monitor;
		auVar7._4_4_ = fVar8;
		auVar7._0_4_ = fVar8;
		auVar7._8_4_ = fVar8;
		auVar7._12_4_ = fVar8;
		auVar7 = divps(auStack_48, auVar7);
		UVar9.z = fVar1 / fVar8;
		auStack_48._0_4_ = auVar7._0_4_;
		auStack_48._4_4_ = auVar7._4_4_;
		UVar9.x = (float)auStack_48._0_4_;
		UVar9.y = (float)auStack_48._4_4_;
		uVar3 = (typeof(BuiltinClassInstance)._2).cctor_finished_or_no_cctor;
	joined_r0x059e2a3c: ;
		if (uVar3 == 0) {
		}
		__this_00 = new CustomLogicVector3Builtin();
		__this_00.Value = UVar9;
		return (object)__this_00;
	}

	[Token(Token = "0x6001CF5")]
	[Address(RVA = "0x58E2A90", Offset = "0x58E1A90", VA = "0x58E2A90", Slot = "16")]
	public bool __Eq__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$__Eq__): 4 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte bVar3;
		float fVar4;
		float fVar5;
		float fVar6;

		if (other != null) {
			bVar3 = (typeof(CustomLogicVector3Builtin)._2).typeHierarchyDepth;
			if ((bVar3 <= (other.klass._2).typeHierarchyDepth) &&((other.klass._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(CustomLogicVector3Builtin))) {
				uVar1 = this.Value.x;
				uVar2 = this.Value.y;
				fVar4 = (float)uVar2 - (float)((ulong)other[3].klass >> 0x20);
				fVar5 = this.Value.z - *(float)&other[3].monitor;
				fVar6 = (float)uVar1 - SUB84(other[3].klass, 0);
				return fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5 < 9.9999994e-11;
			}
		}
		return false;
	}

	[Token(Token = "0x6001CF6")]
	[Address(RVA = "0x58E2B40", Offset = "0x58E1B40", VA = "0x58E2B40", Slot = "17")]
	public int __Hash__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$__Hash__): clean
		uint uVar1;
		int iVar2;
		int iVar3;

		uVar1 = (this.Value).GetHashCode();
		iVar2 = (this.Value.y).GetHashCode();
		iVar3 = (this.Value.z).GetHashCode();
		return iVar3 >> 2 ^ iVar2 << 2 ^ uVar1;
	}

	[Token(Token = "0x6001CF7")]
	[Address(RVA = "0x58E2B80", Offset = "0x58E1B80", VA = "0x58E2B80", Slot = "15")]
	public object __Mod__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$__Mod__): 4 lines keep C-only constructs
		Il2CppClass klass;
		NotImplementedException __this_00;
		MethodInfo lastManagedFrame;

		klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotImplementedException));
		__this_00 = (NotImplementedException)il2cpp_codegen_object_new(klass);
		__this_00 = new NotImplementedException();
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector3Builtin___Mod);
		throw (object)__this_00;
	}

	[Token(Token = "0x6001CF8")]
	[Address(RVA = "0x58E2BC0", Offset = "0x58E1BC0", VA = "0x58E2BC0")]
	public static implicit operator Vector3(CustomLogicVector3Builtin v)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$op_Implicit): clean
		if (v == null) {
			throw new NullReferenceException();
		}
		return (Vector3)v.Value;
	}

	[Token(Token = "0x6001CF9")]
	[Address(RVA = "0x58DFAF0", Offset = "0x58DEAF0", VA = "0x58DFAF0")]
	public static implicit operator CustomLogicVector3Builtin(Vector3 v)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c (CustomLogic.CustomLogicVector3Builtin$$op_Implicit): clean
		CustomLogicVector3Builtin __this;

		__this = new CustomLogicVector3Builtin();
		__this.Value.x = v.x;
		__this.Value.y = v.y;
		__this.Value.z = v.z;
		return __this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicVector3Builtin.c.

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"X");
		__this.Add((Il2CppObject *)"Y");
		__this.Add((Il2CppObject *)"Z");
		__this.Add((Il2CppObject *)"Normalized");
		__this.Add((Il2CppObject *)"Magnitude");
		__this.Add((Il2CppObject *)"SqrMagnitude");
		__this.Add((Il2CppObject *)"Zero");
		__this.Add((Il2CppObject *)"One");
		__this.Add((Il2CppObject *)"Up");
		__this.Add((Il2CppObject *)"Down");
		__this.Add((Il2CppObject *)"Left");
		__this.Add((Il2CppObject *)"Right");
		__this.Add((Il2CppObject *)"Forward");
		__this.Add((Il2CppObject *)"Back");
		__this.Add((Il2CppObject *)"NegativeInfinity");
		__this.Add((Il2CppObject *)"PositiveInfinity");
		__this.Add((Il2CppObject *)"Angle");
		__this.Add((Il2CppObject *)"ClampMagnitude");
		__this.Add((Il2CppObject *)"Cross");
		__this.Add((Il2CppObject *)"Distance");
		__this.Add((Il2CppObject *)"Dot");
		__this.Add((Il2CppObject *)"Lerp");
		__this.Add((Il2CppObject *)"LerpUnclamped");
		__this.Add((Il2CppObject *)"Max");
		__this.Add((Il2CppObject *)"Min");
		__this.Add((Il2CppObject *)"MoveTowards");
		__this.Add((Il2CppObject *)"Normalize");
		__this.Add((Il2CppObject *)"OrthoNormalize");
		__this.Add((Il2CppObject *)"Project");
		__this.Add((Il2CppObject *)"ProjectOnPlane");
		__this.Add((Il2CppObject *)"Reflect");
		__this.Add((Il2CppObject *)"RotateTowards");
		__this.Add((Il2CppObject *)"SignedAngle");
		__this.Add((Il2CppObject *)"Slerp");
		__this.Add((Il2CppObject *)"SlerpUnclamped");
		__this.Add((Il2CppObject *)"SmoothDamp");
		__this.Add((Il2CppObject *)"Set");
		__this.Add((Il2CppObject *)"Scale");
		__this.Add((Il2CppObject *)"Multiply");
		__this.Add((Il2CppObject *)"Divide");
		__this.Add((Il2CppObject *)"GetRotationDirection");
		__this.Add((Il2CppObject *)"__Copy__");
		__this.Add((Il2CppObject *)"__Add__");
		__this.Add((Il2CppObject *)"__Sub__");
		__this.Add((Il2CppObject *)"__Mul__");
		__this.Add((Il2CppObject *)"__Div__");
		__this.Add((Il2CppObject *)"__Eq__");
		__this.Add((Il2CppObject *)"__Hash__");
		CustomLogicVector3Builtin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__X>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__X_g____getter_2_0(CustomLogicVector3Builtin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__X>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__X_g____setter_2_1(CustomLogicVector3Builtin __i, object __v)
	{
		float fVar1;

		fVar1 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Value.x = fVar1;
		return;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Y>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Y_g____getter_3_0(CustomLogicVector3Builtin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Y>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__Y_g____setter_3_1(CustomLogicVector3Builtin __i, object __v)
	{
		float fVar1;

		fVar1 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Value.y = fVar1;
		return;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Z>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Z_g____getter_4_0(CustomLogicVector3Builtin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Z>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__Z_g____setter_4_1(CustomLogicVector3Builtin __i, object __v)
	{
		float fVar1;

		fVar1 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Value.z = fVar1;
		return;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Normalized>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Normalized_g____getter_5_0(CustomLogicVector3Builtin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Normalized;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Magnitude>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Magnitude_g____getter_6_0(CustomLogicVector3Builtin __i)
	{
		float fVar1;
		float fVar2;
		float fVar3;
		object pIVar4;
		float fStack_c;

		if (__i == null) {
			throw new NullReferenceException();
		}
		fVar1 = __i.Value.x;
		fVar2 = __i.Value.y;
		fVar3 = __i.Value.z;
		fStack_c = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
		if (fStack_c < 0.0) {
			fStack_c = sqrtf(fStack_c);
		}
		else {
			fStack_c = SQRT(fStack_c);
		}
		return pIVar4;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__SqrMagnitude>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__SqrMagnitude_g____getter_7_0(CustomLogicVector3Builtin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Zero>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Zero_g____getter_8_0(CustomLogicVector3Builtin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicVector3Builtin.Zero;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__One>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__One_g____getter_9_0(CustomLogicVector3Builtin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicVector3Builtin.One;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Up>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__Up_g____getter_10_0(CustomLogicVector3Builtin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicVector3Builtin.Up;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Down>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__Down_g____getter_11_0(CustomLogicVector3Builtin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicVector3Builtin.Down;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Left>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__Left_g____getter_12_0(CustomLogicVector3Builtin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicVector3Builtin.Left;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Right>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__Right_g____getter_13_0(CustomLogicVector3Builtin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicVector3Builtin.Right;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__Forward_g____getter_14_0(CustomLogicVector3Builtin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicVector3Builtin.Forward;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Back>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__Back_g____getter_15_0(CustomLogicVector3Builtin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicVector3Builtin.Back;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__NegativeInfinity>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__NegativeInfinity_g____getter_16_0(CustomLogicVector3Builtin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicVector3Builtin.NegativeInfinity;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__PositiveInfinity>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__PositiveInfinity_g____getter_17_0(CustomLogicVector3Builtin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicVector3Builtin.PositiveInfinity;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$.cctor: 1 lines keep C-only constructs
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(CustomLogicVector3Builtin.Bindings.c)) ;
		__this = new Object();
		CustomLogicVector3Builtin.Bindings.c.__9 =(CustomLogicVector3Builtin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Angle>b__18_0: clean
	private object Bindings_c____CreateMethodBinding__Angle_b__18_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		CustomLogicVector3Builtin from;
		CustomLogicVector3Builtin to;
		object pIVar1;
		float local_1c;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			from = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				to = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				local_1c = CustomLogicVector3Builtin.Angle(from, to);
				pIVar1 = (object)local_1c;
				return pIVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__ClampMagnitude>b__19_0: clean
	private object Bindings_c____CreateMethodBinding__ClampMagnitude_b__19_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin pCVar1;
		float maxLength;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				maxLength = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				pCVar1 = CustomLogicVector3Builtin.ClampMagnitude(pCVar1, maxLength);
				return (object)pCVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Cross>b__20_0: clean
	private object Bindings_c____CreateMethodBinding__Cross_b__20_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		float fVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		object obj;
		CustomLogicVector3Builtin pCVar7;
		CustomLogicVector3Builtin pCVar8;

		if (__a == null) {
	label_059e82d2: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar7 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar8 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if ((pCVar7 != null) &&(pCVar8 != null)) {
					uVar3 = pCVar7.Value.x;
					uVar5 = pCVar7.Value.y;
					uVar4 = pCVar8.Value.x;
					uVar6 = pCVar8.Value.y;
					fVar1 = pCVar7.Value.z;
					fVar2 = pCVar8.Value.z;
					pCVar7 = new CustomLogicVector3Builtin();
					pCVar7.Value.x = fVar2 * (float)uVar5 - (float)uVar6 * fVar1;
					pCVar7.Value.y = fVar1 * (float)uVar4 - (float)uVar3 * fVar2;
					pCVar7.Value.z = (float)uVar6 * (float)uVar3 - (float)uVar5 * (float)uVar4;
					return (object)pCVar7;
				}
				goto label_059e82d2;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Distance>b__21_0: 20 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Distance_b__21_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		float fVar1;
		ulong uVar2;
		ulong uVar3;
		uint uVar4;
		CustomLogicVector3Builtin pCVar5;
		CustomLogicVector3Builtin pCVar6;
		object pIVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		uint uVar11;
		uint uVar12;
		float fVar13;
		float fVar14;
		uint uVar15;
		uint uVar16;
		float fStack_3c;
		ulong uStack_38;
		ulong uStack_30;
		ulong uStack_28;
		ulong uStack_20;

		if (__a == null) {
	label_059e849a: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar7 = __a[0];
			pCVar5 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar7);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar6 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if ((pCVar5 != null) &&(pCVar6 != null)) {
					uVar2._0_4_ = pCVar5.Value.x;
					uVar2._4_4_ = pCVar5.Value.y;
					uVar15 = 0;
					uVar16 = 0;
					fVar8 = pCVar5.Value.z;
					uVar3._0_4_ = pCVar6.Value.x;
					uVar3._4_4_ = pCVar6.Value.y;
					uVar11 = 0;
					uVar12 = 0;
					fVar1 = pCVar6.Value.z;
					if (Il2CppMethodInitialized_0753e7b7 == false) {
						uStack_20 = 0;
						uStack_30 = 0;
						uStack_38 = uVar3;
						uStack_28 = uVar2;
						Il2CppMethodInitialized_0753e7b7 = true;
						uVar4 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						fVar9 = (float)uStack_38;
						fVar10 = uStack_38._4_4_;
						uVar11 = (undefined4)uStack_30;
						uVar12 = uStack_30._4_4_;
						fVar13 = (float)uStack_28;
						fVar14 = uStack_28._4_4_;
						uVar15 = (undefined4)uStack_20;
						uVar16 = uStack_20._4_4_;
					}
					else {
						uVar4 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						fVar9 = (float)(undefined4)uVar3;
						fVar10 = (float)uVar3._4_4_;
						fVar13 = (float)(undefined4)uVar2;
						fVar14 = (float)uVar2._4_4_;
					}
					if (uVar4 == 0) {
						uStack_28 = CONCAT44(fVar14, fVar13);
						uStack_20 = CONCAT44(uVar16, uVar15);
						uStack_38 = CONCAT44(fVar10, fVar9);
						uStack_30 = CONCAT44(uVar12, uVar11);
						fVar9 = (float)uStack_38;
						fVar10 = uStack_38._4_4_;
						fVar13 = (float)uStack_28;
						fVar14 = uStack_28._4_4_;
					}
					fVar8 = fVar8 - fVar1;
					fStack_3c = fVar8 * fVar8 +(fVar14 - fVar10) * (fVar14 - fVar10) + (fVar13 - fVar9) * (fVar13 - fVar9);
					if (fStack_3c < 0.0) {
						fStack_3c = sqrtf(fStack_3c);
					}
					else {
						fStack_3c = SQRT(fStack_3c);
					}
					pIVar7 = (object)fStack_3c;
					return pIVar7;
				}
				goto label_059e849a;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Dot>b__22_0: clean
	private object Bindings_c____CreateMethodBinding__Dot_b__22_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		CustomLogicVector3Builtin pCVar5;
		CustomLogicVector3Builtin pCVar6;
		object pIVar7;
		float fStack_1c;

		if (__a == null) {
	label_059e8594: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar7 = __a[0];
			pCVar5 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar7);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar6 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if ((pCVar5 != null) &&(pCVar6 != null)) {
					uVar1 = pCVar5.Value.x;
					uVar3 = pCVar5.Value.y;
					uVar2 = pCVar6.Value.x;
					uVar4 = pCVar6.Value.y;
					fStack_1c = pCVar5.Value.z * pCVar6.Value.z +(float)uVar4 * (float)uVar3 + (float)uVar2 * (float)uVar1;
					pIVar7 = (object)fStack_1c;
					return pIVar7;
				}
				goto label_059e8594;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__23_0: clean
	private object Bindings_c____CreateMethodBinding__Lerp_b__23_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		float fVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		object obj;
		CustomLogicVector3Builtin pCVar7;
		CustomLogicVector3Builtin pCVar8;
		float fVar9;
		float fVar10;

		if (__a == null) {
	label_059e878c: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar7 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar8 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					fVar9 = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if ((pCVar7 != null) &&(pCVar8 != null)) {
						fVar1 = pCVar7.Value.z;
						uVar3 = pCVar7.Value.x;
						uVar5 = pCVar7.Value.y;
						uVar4 = pCVar8.Value.x;
						uVar6 = pCVar8.Value.y;
						fVar2 = pCVar8.Value.z;
						fVar10 = 1.0;
						if (fVar9 <= 1.0) {
							fVar10 = fVar9;
						}
						fVar10 = (float)(-(uint)(0.0 <= fVar9) & (uint)fVar10);
						pCVar7 = new CustomLogicVector3Builtin();
						pCVar7.Value.x = fVar10 * ((float)uVar4 - (float)uVar3) + (float)uVar3;
						pCVar7.Value.y = fVar10 * ((float)uVar6 - (float)uVar5) + (float)uVar5;
						pCVar7.Value.z = (fVar2 - fVar1) * fVar10 + fVar1;
						return (object)pCVar7;
					}
					goto label_059e878c;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__LerpUnclamped>b__24_0: clean
	private object Bindings_c____CreateMethodBinding__LerpUnclamped_b__24_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		float fVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		object obj;
		CustomLogicVector3Builtin pCVar7;
		CustomLogicVector3Builtin pCVar8;
		float fVar9;

		if (__a == null) {
	label_059e8975: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar7 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar8 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					fVar9 = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if ((pCVar7 != null) &&(pCVar8 != null)) {
						fVar1 = pCVar7.Value.z;
						uVar3 = pCVar7.Value.x;
						uVar5 = pCVar7.Value.y;
						uVar4 = pCVar8.Value.x;
						uVar6 = pCVar8.Value.y;
						fVar2 = pCVar8.Value.z;
						pCVar7 = new CustomLogicVector3Builtin();
						pCVar7.Value.x = fVar9 * ((float)uVar4 - (float)uVar3) + (float)uVar3;
						pCVar7.Value.y = fVar9 * ((float)uVar6 - (float)uVar5) + (float)uVar5;
						pCVar7.Value.z = fVar9 * (fVar2 - fVar1) + fVar1;
						return (object)pCVar7;
					}
					goto label_059e8975;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Max>b__25_0: 12 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Max_b__25_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		float fVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		object obj;
		CustomLogicVector3Builtin pCVar7;
		CustomLogicVector3Builtin pCVar8;
		byte[] auVar9 = new byte[16];
		byte[] auStack_38 = new byte[16];

		if (__a == null) {
	label_059e8afd: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar7 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar8 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if ((pCVar7 != null) &&(pCVar8 != null)) {
					fVar1 = pCVar7.Value.z;
					uVar3 = pCVar7.Value.x;
					uVar5 = pCVar7.Value.y;
					auStack_38._4_4_ = uVar5;
					auStack_38._0_4_ = uVar3;
					auStack_38._8_8_ = 0;
					uVar4 = pCVar8.Value.x;
					uVar6 = pCVar8.Value.y;
					auVar9._4_4_ = uVar6;
					auVar9._0_4_ = uVar4;
					fVar2 = pCVar8.Value.z;
					if (fVar1 <= fVar2) {
						fVar1 = fVar2;
					}
					auVar9._8_8_ = 0;
					auVar9 = maxps(auStack_38, auVar9);
					pCVar7 = new CustomLogicVector3Builtin();
					auStack_38._0_4_ = auVar9._0_4_;
					auStack_38._4_4_ = auVar9._4_4_;
					pCVar7.Value.x = (float)auStack_38._0_4_;
					pCVar7.Value.y = (float)auStack_38._4_4_;
					pCVar7.Value.z = fVar1;
					return (object)pCVar7;
				}
				goto label_059e8afd;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Min>b__26_0: 12 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Min_b__26_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		float fVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		object obj;
		CustomLogicVector3Builtin pCVar7;
		CustomLogicVector3Builtin pCVar8;
		byte[] auVar9 = new byte[16];
		byte[] auStack_38 = new byte[16];

		if (__a == null) {
	label_059e8c8d: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar7 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar8 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if ((pCVar7 != null) &&(pCVar8 != null)) {
					fVar1 = pCVar7.Value.z;
					uVar3 = pCVar7.Value.x;
					uVar5 = pCVar7.Value.y;
					auStack_38._4_4_ = uVar5;
					auStack_38._0_4_ = uVar3;
					auStack_38._8_8_ = 0;
					uVar4 = pCVar8.Value.x;
					uVar6 = pCVar8.Value.y;
					auVar9._4_4_ = uVar6;
					auVar9._0_4_ = uVar4;
					fVar2 = pCVar8.Value.z;
					if (fVar2 <= fVar1) {
						fVar1 = fVar2;
					}
					auVar9._8_8_ = 0;
					auVar9 = minps(auStack_38, auVar9);
					pCVar7 = new CustomLogicVector3Builtin();
					auStack_38._0_4_ = auVar9._0_4_;
					auStack_38._4_4_ = auVar9._4_4_;
					pCVar7.Value.x = (float)auStack_38._0_4_;
					pCVar7.Value.y = (float)auStack_38._4_4_;
					pCVar7.Value.z = fVar1;
					return (object)pCVar7;
				}
				goto label_059e8c8d;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__MoveTowards>b__27_0: clean
	private object Bindings_c____CreateMethodBinding__MoveTowards_b__27_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin pCVar1;
		CustomLogicVector3Builtin target;
		float maxDistanceDelta;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				target = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					maxDistanceDelta = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					pCVar1 = CustomLogicVector3Builtin.MoveTowards(pCVar1, target, maxDistanceDelta);
					return (object)pCVar1;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Normalize>b__28_0: clean
	private object Bindings_c____CreateMethodBinding__Normalize_b__28_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin pCVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
		pCVar1 = CustomLogicVector3Builtin.Normalize(pCVar1);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__OrthoNormalize>b__29_0: clean
	private object Bindings_c____CreateMethodBinding__OrthoNormalize_b__29_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin pCVar1;
		CustomLogicVector3Builtin pCVar2;

		if (__a == null) {
	label_059e8e9a: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if ((pCVar1 != null) &&(pCVar2 != null)) {
					Vector3.OrthoNormalize(ref pCVar1.Value, ref pCVar2.Value) ;
					return null;
				}
				goto label_059e8e9a;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Project>b__30_0: clean
	private object Bindings_c____CreateMethodBinding__Project_b__30_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin pCVar1;
		CustomLogicVector3Builtin b;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				b = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				pCVar1 = CustomLogicVector3Builtin.Project(pCVar1, b);
				return (object)pCVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__ProjectOnPlane>b__31_0: clean
	private object Bindings_c____CreateMethodBinding__ProjectOnPlane_b__31_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin pCVar1;
		CustomLogicVector3Builtin plane;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				plane = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				pCVar1 = CustomLogicVector3Builtin.ProjectOnPlane(pCVar1, plane);
				return (object)pCVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Reflect>b__32_0: clean
	private object Bindings_c____CreateMethodBinding__Reflect_b__32_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		float fVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		object obj;
		CustomLogicVector3Builtin pCVar7;
		CustomLogicVector3Builtin pCVar8;
		float fVar9;

		if (__a == null) {
	label_059e91a3: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar7 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar8 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if ((pCVar7 != null) &&(pCVar8 != null)) {
					fVar1 = pCVar7.Value.z;
					uVar3 = pCVar7.Value.x;
					uVar5 = pCVar7.Value.y;
					uVar4 = pCVar8.Value.x;
					uVar6 = pCVar8.Value.y;
					fVar2 = pCVar8.Value.z;
					fVar9 = ((float)uVar5 * (float)uVar6 + (float)uVar3 * (float)uVar4 + fVar1 * fVar2) * -2.0;
					pCVar7 = new CustomLogicVector3Builtin();
					pCVar7.Value.x = fVar9 * (float)uVar4 + (float)uVar3;
					pCVar7.Value.y = fVar9 * (float)uVar6 + (float)uVar5;
					pCVar7.Value.z = fVar9 * fVar2 + fVar1;
					return (object)pCVar7;
				}
				goto label_059e91a3;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__RotateTowards>b__33_0: clean
	private object Bindings_c____CreateMethodBinding__RotateTowards_b__33_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin pCVar1;
		CustomLogicVector3Builtin target;
		float maxRadiansDelta;
		float maxMagnitudeDelta;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				target = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					maxRadiansDelta = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if ((__a.Length & 0xfffffffc) != 0) {
						maxMagnitudeDelta = CustomLogicEvaluator.ConvertTo<float>(__a[3]);
						pCVar1 = CustomLogicVector3Builtin.RotateTowards(pCVar1, target, maxRadiansDelta, maxMagnitudeDelta);
						return (object)pCVar1;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__SignedAngle>b__34_0: 7 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__SignedAngle_b__34_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		ulong uVar1;
		ulong uVar2;
		ulong uVar3;
		CustomLogicVector3Builtin pCVar4;
		CustomLogicVector3Builtin pCVar5;
		CustomLogicVector3Builtin pCVar6;
		object pIVar7;
		byte[] auStack_24 = new byte[4];

		if (__a == null) {
	label_059e93b7: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar7 = __a[0];
			pCVar4 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar7);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar5 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					pCVar6 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[2]);
					if (((pCVar4 != null) &&(pCVar5 != null)) &&(pCVar6 != null)) {
						uVar1._0_4_ = pCVar4.Value.x;
						uVar1._4_4_ = pCVar4.Value.y;
						uVar2._0_4_ = pCVar5.Value.x;
						uVar2._4_4_ = pCVar5.Value.y;
						uVar3._0_4_ = pCVar6.Value.x;
						uVar3._4_4_ = pCVar6.Value.y;
						il2cpp_runtime_helper_059fb780(uVar1, pCVar4.Value.z, uVar2, pCVar5.Value.z, uVar3, pCVar6.Value.z, 0);
						pIVar7 = (object)auStack_24;
						return pIVar7;
					}
					goto label_059e93b7;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Slerp>b__35_0: clean
	private object Bindings_c____CreateMethodBinding__Slerp_b__35_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin pCVar1;
		CustomLogicVector3Builtin b;
		float t;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				b = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					t = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					pCVar1 = CustomLogicVector3Builtin.Slerp(pCVar1, b, t);
					return (object)pCVar1;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__SlerpUnclamped>b__36_0: clean
	private object Bindings_c____CreateMethodBinding__SlerpUnclamped_b__36_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin pCVar1;
		CustomLogicVector3Builtin b;
		float t;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				b = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					t = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					pCVar1 = CustomLogicVector3Builtin.SlerpUnclamped(pCVar1, b, t);
					return (object)pCVar1;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__SmoothDamp>b__37_0: clean
	private object Bindings_c____CreateMethodBinding__SmoothDamp_b__37_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin pCVar1;
		CustomLogicVector3Builtin target;
		CustomLogicVector3Builtin currentVelocity;
		float smoothTime;
		float maxSpeed;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				target = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					currentVelocity = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[2]);
					if ((__a.Length & 0xfffffffc) != 0) {
						smoothTime = CustomLogicEvaluator.ConvertTo<float>(__a[3]);
						if (4 < (uint)__a.Length) {
							maxSpeed = CustomLogicEvaluator.ConvertTo<float>(__a[4]);
							pCVar1 = CustomLogicVector3Builtin.SmoothDamp(pCVar1, target, currentVelocity, smoothTime, maxSpeed);
							return (object)pCVar1;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Set>b__38_0: clean
	private object Bindings_c____CreateMethodBinding__Set_b__38_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		object obj;
		float fVar1;
		float fVar2;
		float fVar3;

		if (__a == null) {
	label_059e9771: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			fVar1 = CustomLogicEvaluator.ConvertTo<float>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				fVar2 = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if (2 < (uint)__a.Length) {
					fVar3 = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if (__c != null) {
						__c.Value.x = fVar1;
						__c.Value.y = fVar2;
						__c.Value.z = fVar3;
						return null;
					}
					goto label_059e9771;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Scale>b__39_0: clean
	private object Bindings_c____CreateMethodBinding__Scale_b__39_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				pCVar1 = __c.Scale(__a[0]);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Multiply>b__40_0: clean
	private object Bindings_c____CreateMethodBinding__Multiply_b__40_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin pCVar1;
		CustomLogicVector3Builtin b;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				b = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				pCVar1 = CustomLogicVector3Builtin.Multiply(pCVar1, b);
				return (object)pCVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Divide>b__41_0: clean
	private object Bindings_c____CreateMethodBinding__Divide_b__41_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin pCVar1;
		CustomLogicVector3Builtin b;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				b = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				pCVar1 = CustomLogicVector3Builtin.Divide(pCVar1, b);
				return (object)pCVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__GetRotationDirection>b__42_0: 7 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__GetRotationDirection_b__42_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		uint uVar1;
		uint uVar2;
		object obj;
		CustomLogicVector3Builtin pCVar3;
		CustomLogicVector3Builtin pCVar4;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Quaternion rotation;
		Vector3 UVar5;
		Vector3 UStack_38;
		byte[] auStack_28 = new byte[16];

		if (__a == null) {
	label_059e9a71: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar3 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar4 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (pCVar3 != null) {
					uVar1 = pCVar3.Value.x;
					uVar2 = pCVar3.Value.y;
					UStack_38.z = pCVar3.Value.z * 0.017453292;
					UStack_38.y = (float)uVar2 * 0.017453292;
					UStack_38.x = (float)uVar1 * 0.017453292;
					rotation = Quaternion.Internal_FromEulerRad(ref UStack_38);
					if (pCVar4 != null) {
						UVar5 = (rotation * (Vector3)pCVar4.Value);
						auStack_28._8_4_ = extraout_XMM0_Dc;
						auStack_28._0_8_ = UVar5._0_8_;
						auStack_28._12_4_ = extraout_XMM0_Dd;
						pCVar3 = new CustomLogicVector3Builtin();
						pCVar3.Value.x = (float)auStack_28._0_4_;
						pCVar3.Value.y = (float)auStack_28._4_4_;
						pCVar3.Value.z = UVar5.z;
						return (object)pCVar3;
					}
				}
				goto label_059e9a71;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__43_0: clean
	private object Bindings_c____CreateMethodBinding____Copy___b__43_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		float fVar1;
		float fVar2;
		float fVar3;
		CustomLogicVector3Builtin __this_00;

		if (__c == null) {
			throw new NullReferenceException();
		}
		fVar2 = __c.Value.x;
		fVar3 = __c.Value.y;
		fVar1 = __c.Value.z;
		__this_00 = new CustomLogicVector3Builtin();
		__this_00.Value.x = fVar2;
		__this_00.Value.y = fVar3;
		__this_00.Value.z = fVar1;
		return (object)__this_00;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Add__>b__44_0: clean
	private object Bindings_c____CreateMethodBinding____Add___b__44_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		int iVar1;
		object pIVar2;

		if (__a != null) {
			iVar1 = (int)__a.Length;
			if ((iVar1 == 0) || (iVar1 == 1)) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				pIVar2 = this.__Add__(__a[0], __a[1]);
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Sub__>b__45_0: clean
	private object Bindings_c____CreateMethodBinding____Sub___b__45_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		int iVar1;
		object pIVar2;

		if (__a != null) {
			iVar1 = (int)__a.Length;
			if ((iVar1 == 0) || (iVar1 == 1)) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				pIVar2 = this.__Sub__(__a[0], __a[1]);
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Mul__>b__46_0: clean
	private object Bindings_c____CreateMethodBinding____Mul___b__46_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		int iVar1;
		object pIVar2;

		if (__a != null) {
			iVar1 = (int)__a.Length;
			if ((iVar1 == 0) || (iVar1 == 1)) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				pIVar2 = this.__Mul__(__a[0], __a[1]);
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Div__>b__47_0: clean
	private object Bindings_c____CreateMethodBinding____Div___b__47_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		int iVar1;
		object pIVar2;

		if (__a != null) {
			iVar1 = (int)__a.Length;
			if ((iVar1 == 0) || (iVar1 == 1)) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				pIVar2 = this.__Div__(__a[0], __a[1]);
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__48_0: 8 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding____Eq___b__48_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		uint uVar1;
		uint uVar2;
		byte bVar3;
		int iVar4;
		bool bVar5;
		ulong in_RAX;
		object pIVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		ulong uStack_18;

		if (__a == null) {
	label_059e9ce2: ;
			throw new NullReferenceException();
		}
		iVar4 = (int)__a.Length;
		if ((iVar4 == 1) || (iVar4 == 0)) {
			throw new IndexOutOfRangeException();
		}
		if (__c == null) goto label_059e9ce2;
		pIVar6 = __a[1];
		uStack_18 = in_RAX;
		if (pIVar6 != null) {
			bVar3 = (typeof(CustomLogicVector3Builtin)._2).typeHierarchyDepth;
			if ((bVar3 <= (pIVar6.klass._2).typeHierarchyDepth) &&((pIVar6.klass._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(CustomLogicVector3Builtin))) {
				uVar1 = __c.Value.x;
				uVar2 = __c.Value.y;
				fVar7 = (float)uVar2 - (float)((ulong)pIVar6[3].klass >> 0x20);
				fVar8 = __c.Value.z - *(float)&pIVar6[3].monitor;
				fVar9 = (float)uVar1 - SUB84(pIVar6[3].klass, 0);
				bVar5 = fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8 < 9.9999994e-11;
				goto label_059e9c7e;
			}
		}
		bVar5 = false;
	label_059e9c7e: ;
		uStack_18 = CONCAT17(bVar5, (undefined7)uStack_18);
		pIVar6 = (object)(((long)&uStack_18 + 7));
		return pIVar6;
	}

	// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__49_0: clean
	private object Bindings_c____CreateMethodBinding____Hash___b__49_0(CustomLogicVector3Builtin __c, Object[] __a)
	{
		uint uVar1;
		int iVar2;
		int iVar3;
		object pIVar4;
		uint uStack_1c;

		if (__c == null) {
			throw new NullReferenceException();
		}
		uVar1 = (__c.Value).GetHashCode();
		iVar2 = (__c.Value.y).GetHashCode();
		iVar3 = (__c.Value.z).GetHashCode();
		uStack_1c = iVar3 >> 2 ^ iVar2 << 2 ^ uVar1;
		return pIVar4;
	}
}
