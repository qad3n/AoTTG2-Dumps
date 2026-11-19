// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicVector2Builtin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicVector2Builtin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000477")]
[CompilerGenerated]
internal class CustomLogicVector2Builtin : BuiltinClassInstance, ICustomLogicMathOperators, ICustomLogicEquals, ICustomLogicCopyable
{
	[Token(Token = "0x2000478")]
	public static class Factory
	{
		[Token(Token = "0x6001C73")]
		[Address(RVA = "0x58DA820", Offset = "0x58D9820", VA = "0x58DA820")]
		public static CustomLogicVector2Builtin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Factory$$CreateInstance): 6 lines keep C-only constructs
			object pIVar1;
			int iVar2;
			CustomLogicVector2Builtin __this;
			String pSVar3;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this_00;
			MethodInfo lastManagedFrame;
			float fVar4;
			float fVar5;
			int local_1c;

			if (args == null) {
				throw new NullReferenceException();
			}
			if (args.Length == 0) {
				__this = new CustomLogicVector2Builtin();
			}
			else {
				iVar2 = (int)args.Length;
				if (iVar2 == 2) {
					pIVar1 = args[0];
					fVar5 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
					if ((args.Length & 0xfffffffe) == 0) {
						throw new IndexOutOfRangeException();
					}
					fVar4 = CustomLogicEvaluator.ConvertTo<float>(args[1]);
					__this = new CustomLogicVector2Builtin();
					__this._value.x = fVar5;
				}
				else {
					if (iVar2 != 1) {
						local_1c = (int32_t)args.Length;
						pSVar3 = local_1c.ToString();
						str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicVector2Builtin constructor found that takes ");
						str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
						pSVar3 = String.Concat(str0, pSVar3, str2);
						klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
						__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
						__this_00 = new ArgumentException(pSVar3);
						lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector2Builtin_Factory_CreateInstance);
						throw (object)__this_00;
					}
					pIVar1 = args[0];
					fVar4 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
					__this = new CustomLogicVector2Builtin();
					__this._value.x = fVar4;
				}
				__this._value.y = fVar4;
			}
			return __this;
		}
	}

	[Token(Token = "0x2000479")]
	public static class Bindings
	{
		[Token(Token = "0x400161F")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001C74")]
		[Address(RVA = "0x58DAAE0", Offset = "0x58D9AE0", VA = "0x58DAAE0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicVector2Builtin> pCVar3;
			CLPropertyBinding<CustomLogicVector2Builtin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x792a6492) {
				if (uVar2 < 0x2e9445f8) {
					if (uVar2 < 0x1cb1b190) {
						if (uVar2 < 0xdc1f3cd) {
							if (uVar2 == 0xb9c3383) {
								bVar1 = (name == "Zero");
								if (bVar1) {
									pCVar4 = CustomLogicVector2Builtin.Bindings.__CreatePropertyBinding__Zero();
									return (ICLMemberBinding)pCVar4;
								}
							}
							else if (uVar2 == 0xdc1f3cc) {
								bVar1 = (name == "__Add__");
								if (bVar1) {
									pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding____Add__();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x18c37b41) {
							bVar1 = (name == "__Mul__");
							if (bVar1) {
								pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding____Mul__();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1cb1b18f) {
							bVar1 = (name == "One");
							if (bVar1) {
								pCVar4 = CustomLogicVector2Builtin.Bindings.__CreatePropertyBinding__One();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 < 0x21ed379b) {
						if (uVar2 == 0x1e9e9f85) {
							bVar1 = (name == "Right");
							if (bVar1) {
								pCVar4 = CustomLogicVector2Builtin.Bindings.__CreatePropertyBinding__Right();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x21ed379a) {
							bVar1 = (name == "ClampMagnitude");
							if (bVar1) {
								pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding__ClampMagnitude();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x28b19ea3) {
						bVar1 = (name == "Set");
						if (bVar1) {
							pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding__Set();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x2e9445f7) {
						bVar1 = (name == "Min");
						if (bVar1) {
							pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding__Min();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x42f35941) {
					if (uVar2 < 0x39c493b9) {
						if (uVar2 == 0x386d9fc0) {
							bVar1 = (name == "Dot");
							if (bVar1) {
								pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding__Dot();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x39c493b8) {
							bVar1 = (name == "Angle");
							if (bVar1) {
								pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding__Angle();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x3ca7e3b9) {
						bVar1 = (name == "Max");
						if (bVar1) {
							pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding__Max();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x42f35940) {
						bVar1 = (name == "Up");
						if (bVar1) {
							pCVar4 = CustomLogicVector2Builtin.Bindings.__CreatePropertyBinding__Up();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0x4adde30d) {
					if (uVar2 == 0x434cfcb8) {
						bVar1 = (name == "Normalized");
						if (bVar1) {
							pCVar4 = CustomLogicVector2Builtin.Bindings.__CreatePropertyBinding__Normalized();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x4adde30c) {
						bVar1 = (name == "Normalize");
						if (bVar1) {
							pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding__Normalize();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x549f4d10) {
					bVar1 = (name == "__Copy__");
					if (bVar1) {
						pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding____Copy__();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x74ee9015) {
					bVar1 = (name == "SmoothDamp");
					if (bVar1) {
						pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding__SmoothDamp();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x792a6491) {
					bVar1 = (name == "__Hash__");
					if (bVar1) {
						pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding____Hash__();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xc370544b) {
				if (uVar2 < 0x9e956089) {
					if (uVar2 < 0x91efe6d8) {
						if (uVar2 == 0x91efe6d7) {
							bVar1 = (name == "__Eq__");
							if (bVar1) {
								pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding____Eq__();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x7bdb45c1) {
							bVar1 = (name == "SqrMagnitude");
							if (bVar1) {
								pCVar4 = CustomLogicVector2Builtin.Bindings.__CreatePropertyBinding__SqrMagnitude();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x92773890) {
						bVar1 = (name == "Left");
						if (bVar1) {
							pCVar4 = CustomLogicVector2Builtin.Bindings.__CreatePropertyBinding__Left();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x9e956088) {
						bVar1 = (name == "Lerp");
						if (bVar1) {
							pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding__Lerp();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xacfe0069) {
					if (uVar2 == 0xa4995035) {
						bVar1 = (name == "Down");
						if (bVar1) {
							pCVar4 = CustomLogicVector2Builtin.Bindings.__CreatePropertyBinding__Down();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xacfe0068) {
						bVar1 = (name == "MoveTowards");
						if (bVar1) {
							pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding__MoveTowards();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xb127a615) {
					bVar1 = (name == "Magnitude");
					if (bVar1) {
						pCVar4 = CustomLogicVector2Builtin.Bindings.__CreatePropertyBinding__Magnitude();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xc370544a) {
					bVar1 = (name == "Reflect");
					if (bVar1) {
						pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding__Reflect();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xdc0c1c95) {
				if (uVar2 < 0xd6c0fe1b) {
					if (uVar2 == 0xd3d96082) {
						bVar1 = (name == "Distance");
						if (bVar1) {
							pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding__Distance();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xd6c0fe1a) {
						bVar1 = (name == "PositiveInfinity");
						if (bVar1) {
							pCVar4 = CustomLogicVector2Builtin.Bindings.__CreatePropertyBinding__PositiveInfinity();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 == 0xd7cecb55) {
					bVar1 = (name == "__Sub__");
					if (bVar1) {
						pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding____Sub__();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xdc0c1c94) {
					bVar1 = (name == "Y");
					if (bVar1) {
						pCVar4 = CustomLogicVector2Builtin.Bindings.__CreatePropertyBinding__Y();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xdfeb0949) {
				if (uVar2 == 0xdd0c1e27) {
					bVar1 = (name == "X");
					if (bVar1) {
						pCVar4 = CustomLogicVector2Builtin.Bindings.__CreatePropertyBinding__X();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xdfeb0948) {
					bVar1 = (name == "SignedAngle");
					if (bVar1) {
						pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding__SignedAngle();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xe0993ada) {
				bVar1 = (name == "NegativeInfinity");
				if (bVar1) {
					pCVar4 = CustomLogicVector2Builtin.Bindings.__CreatePropertyBinding__NegativeInfinity();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xf4248f7b) {
				bVar1 = (name == "LerpUnclamped");
				if (bVar1) {
					pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding__LerpUnclamped();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xff76b6dc) {
				bVar1 = (name == "__Div__");
				if (bVar1) {
					pCVar3 = CustomLogicVector2Builtin.Bindings.__CreateMethodBinding____Div__();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicVector2Builtin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6001C75")]
		[Address(RVA = "0x58DB7A0", Offset = "0x58DA7A0", VA = "0x58DB7A0")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__X()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__X): 3 lines keep C-only constructs
			Func<CustomLogicVector2Builtin, object> __this;
			Action<CustomLogicVector2Builtin, object> __this_00;
			CLPropertyBinding<CustomLogicVector2Builtin> __this_01;

			__this = new Func<CustomLogicVector2Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__X_g____getter_2_0);
			__this_00 = new Action<CustomLogicVector2Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__X_g____setter_2_1);
			__this_01 = new CLPropertyBinding<CustomLogicVector2Builtin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001C76")]
		[Address(RVA = "0x58DB880", Offset = "0x58DA880", VA = "0x58DB880")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__Y()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Y): 3 lines keep C-only constructs
			Func<CustomLogicVector2Builtin, object> __this;
			Action<CustomLogicVector2Builtin, object> __this_00;
			CLPropertyBinding<CustomLogicVector2Builtin> __this_01;

			__this = new Func<CustomLogicVector2Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Y_g____getter_3_0);
			__this_00 = new Action<CustomLogicVector2Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Y_g____setter_3_1);
			__this_01 = new CLPropertyBinding<CustomLogicVector2Builtin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001C77")]
		[Address(RVA = "0x58DB960", Offset = "0x58DA960", VA = "0x58DB960")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__Normalized()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Normalized): 2 lines keep C-only constructs
			Func<CustomLogicVector2Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector2Builtin> __this_00;

			__this = new Func<CustomLogicVector2Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Normalized_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicVector2Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001C78")]
		[Address(RVA = "0x58DBA00", Offset = "0x58DAA00", VA = "0x58DBA00")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__Magnitude()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Magnitude): 2 lines keep C-only constructs
			Func<CustomLogicVector2Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector2Builtin> __this_00;

			__this = new Func<CustomLogicVector2Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Magnitude_g____getter_5);
			__this_00 = new CLPropertyBinding<CustomLogicVector2Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001C79")]
		[Address(RVA = "0x58DBAA0", Offset = "0x58DAAA0", VA = "0x58DBAA0")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__SqrMagnitude()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__SqrMagnitude): 2 lines keep C-only constructs
			Func<CustomLogicVector2Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector2Builtin> __this_00;

			__this = new Func<CustomLogicVector2Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__SqrMagnitude_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicVector2Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001C7A")]
		[Address(RVA = "0x58DBB40", Offset = "0x58DAB40", VA = "0x58DBB40")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__Zero()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Zero): 2 lines keep C-only constructs
			Func<CustomLogicVector2Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector2Builtin> __this_00;

			__this = new Func<CustomLogicVector2Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Zero_g____getter_7_0);
			__this_00 = new CLPropertyBinding<CustomLogicVector2Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001C7B")]
		[Address(RVA = "0x58DBBE0", Offset = "0x58DABE0", VA = "0x58DBBE0")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__One()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__One): 2 lines keep C-only constructs
			Func<CustomLogicVector2Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector2Builtin> __this_00;

			__this = new Func<CustomLogicVector2Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__One_g____getter_8_0);
			__this_00 = new CLPropertyBinding<CustomLogicVector2Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001C7C")]
		[Address(RVA = "0x58DBC80", Offset = "0x58DAC80", VA = "0x58DBC80")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__Up()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Up): 2 lines keep C-only constructs
			Func<CustomLogicVector2Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector2Builtin> __this_00;

			__this = new Func<CustomLogicVector2Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Up_g____getter_9_0);
			__this_00 = new CLPropertyBinding<CustomLogicVector2Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001C7D")]
		[Address(RVA = "0x58DBD20", Offset = "0x58DAD20", VA = "0x58DBD20")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__Down()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Down): 2 lines keep C-only constructs
			Func<CustomLogicVector2Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector2Builtin> __this_00;

			__this = new Func<CustomLogicVector2Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Down_g____getter_10_0);
			__this_00 = new CLPropertyBinding<CustomLogicVector2Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001C7E")]
		[Address(RVA = "0x58DBDC0", Offset = "0x58DADC0", VA = "0x58DBDC0")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__Left()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Left): 2 lines keep C-only constructs
			Func<CustomLogicVector2Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector2Builtin> __this_00;

			__this = new Func<CustomLogicVector2Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Left_g____getter_11_0);
			__this_00 = new CLPropertyBinding<CustomLogicVector2Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001C7F")]
		[Address(RVA = "0x58DBE60", Offset = "0x58DAE60", VA = "0x58DBE60")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__Right()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Right): 2 lines keep C-only constructs
			Func<CustomLogicVector2Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector2Builtin> __this_00;

			__this = new Func<CustomLogicVector2Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Right_g____getter_12_0);
			__this_00 = new CLPropertyBinding<CustomLogicVector2Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001C80")]
		[Address(RVA = "0x58DBF00", Offset = "0x58DAF00", VA = "0x58DBF00")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__NegativeInfinity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__NegativeInfinity): 2 lines keep C-only constructs
			Func<CustomLogicVector2Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector2Builtin> __this_00;

			__this = new Func<CustomLogicVector2Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__NegativeInfinity_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicVector2Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001C81")]
		[Address(RVA = "0x58DBFA0", Offset = "0x58DAFA0", VA = "0x58DBFA0")]
		public static CLPropertyBinding<CustomLogicVector2Builtin> __CreatePropertyBinding__PositiveInfinity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__PositiveInfinity): 2 lines keep C-only constructs
			Func<CustomLogicVector2Builtin, object> __this;
			CLPropertyBinding<CustomLogicVector2Builtin> __this_00;

			__this = new Func<CustomLogicVector2Builtin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__PositiveInfinity_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicVector2Builtin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001C82")]
		[Address(RVA = "0x58DC040", Offset = "0x58DB040", VA = "0x58DC040")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__Angle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Angle): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545cc7 == false) {
				Il2CppMethodInitialized_07545cc7 = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__15_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__15_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Angle_b__15_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__15_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C83")]
		[Address(RVA = "0x58DC180", Offset = "0x58DB180", VA = "0x58DC180")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__ClampMagnitude()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__ClampMagnitude): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545cc8 == false) {
				Il2CppMethodInitialized_07545cc8 = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__16_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__16_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__ClampMagnitude_b__16_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__16_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C84")]
		[Address(RVA = "0x58DC2C0", Offset = "0x58DB2C0", VA = "0x58DC2C0")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__Distance()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Distance): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545cc9 == false) {
				Il2CppMethodInitialized_07545cc9 = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__17_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__17_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Distance_b__17_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__17_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C85")]
		[Address(RVA = "0x58DC400", Offset = "0x58DB400", VA = "0x58DC400")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__Dot()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Dot): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545cca == false) {
				Il2CppMethodInitialized_07545cca = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__18_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__18_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Dot_b__18_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__18_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C86")]
		[Address(RVA = "0x58DC540", Offset = "0x58DB540", VA = "0x58DC540")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__Lerp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Lerp): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545ccb == false) {
				Il2CppMethodInitialized_07545ccb = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__19_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__19_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Lerp_b__19_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__19_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C87")]
		[Address(RVA = "0x58DC680", Offset = "0x58DB680", VA = "0x58DC680")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__LerpUnclamped()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__LerpUnclamped): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545ccc == false) {
				Il2CppMethodInitialized_07545ccc = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__20_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__20_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__20_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__20_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C88")]
		[Address(RVA = "0x58DC7C0", Offset = "0x58DB7C0", VA = "0x58DC7C0")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__Max()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Max): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545ccd == false) {
				Il2CppMethodInitialized_07545ccd = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__21_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__21_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Max_b__21_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__21_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C89")]
		[Address(RVA = "0x58DC900", Offset = "0x58DB900", VA = "0x58DC900")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__Min()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Min): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545cce == false) {
				Il2CppMethodInitialized_07545cce = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__22_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__22_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Min_b__22_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__22_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C8A")]
		[Address(RVA = "0x58DCA40", Offset = "0x58DBA40", VA = "0x58DCA40")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__MoveTowards()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__MoveTowards): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545ccf == false) {
				Il2CppMethodInitialized_07545ccf = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__23_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__23_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__MoveTowards_b__23_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__23_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C8B")]
		[Address(RVA = "0x58DCB80", Offset = "0x58DBB80", VA = "0x58DCB80")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__Reflect()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Reflect): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545cd0 == false) {
				Il2CppMethodInitialized_07545cd0 = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__24_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__24_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Reflect_b__24_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__24_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C8C")]
		[Address(RVA = "0x58DCCC0", Offset = "0x58DBCC0", VA = "0x58DCCC0")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__SignedAngle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__SignedAngle): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545cd1 == false) {
				Il2CppMethodInitialized_07545cd1 = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__25_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__25_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__SignedAngle_b__25_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__25_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C8D")]
		[Address(RVA = "0x58DCE00", Offset = "0x58DBE00", VA = "0x58DCE00")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__SmoothDamp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__SmoothDamp): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545cd2 == false) {
				Il2CppMethodInitialized_07545cd2 = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__26_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__26_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__SmoothDamp_b__26_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__26_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C8E")]
		[Address(RVA = "0x58DCF40", Offset = "0x58DBF40", VA = "0x58DCF40")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__Set()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Set): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545cd3 == false) {
				Il2CppMethodInitialized_07545cd3 = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__27_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__27_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Set_b__27_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__27_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C8F")]
		[Address(RVA = "0x58DD080", Offset = "0x58DC080", VA = "0x58DD080")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding__Normalize()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Normalize): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545cd4 == false) {
				Il2CppMethodInitialized_07545cd4 = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__28_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__28_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Normalize_b__28_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__28_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C90")]
		[Address(RVA = "0x58DD1C0", Offset = "0x58DC1C0", VA = "0x58DD1C0")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding____Copy__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Copy__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545cd5 == false) {
				Il2CppMethodInitialized_07545cd5 = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__29_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__29_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Copy___b__29_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__29_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C91")]
		[Address(RVA = "0x58DD300", Offset = "0x58DC300", VA = "0x58DD300")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding____Add__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Add__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545cd6 == false) {
				Il2CppMethodInitialized_07545cd6 = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__30_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__30_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Add___b__30_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__30_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C92")]
		[Address(RVA = "0x58DD440", Offset = "0x58DC440", VA = "0x58DD440")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding____Sub__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Sub__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545cd7 == false) {
				Il2CppMethodInitialized_07545cd7 = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__31_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__31_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Sub___b__31_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__31_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C93")]
		[Address(RVA = "0x58DD580", Offset = "0x58DC580", VA = "0x58DD580")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding____Mul__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Mul__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545cd8 == false) {
				Il2CppMethodInitialized_07545cd8 = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__32_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__32_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Mul___b__32_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__32_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C94")]
		[Address(RVA = "0x58DD6C0", Offset = "0x58DC6C0", VA = "0x58DD6C0")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding____Div__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Div__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545cd9 == false) {
				Il2CppMethodInitialized_07545cd9 = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__33_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__33_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Div___b__33_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__33_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C95")]
		[Address(RVA = "0x58DD800", Offset = "0x58DC800", VA = "0x58DD800")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding____Eq__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Eq__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545cda == false) {
				Il2CppMethodInitialized_07545cda = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__34_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__34_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Eq___b__34_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__34_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C96")]
		[Address(RVA = "0x58DD940", Offset = "0x58DC940", VA = "0x58DD940")]
		public static CLMethodBinding<CustomLogicVector2Builtin> __CreateMethodBinding____Hash__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Hash__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicVector2Builtin, @object[], @object> __this;
			CLMethodBinding<CustomLogicVector2Builtin> __this_00;

			if (Il2CppMethodInitialized_07545cdb == false) {
				Il2CppMethodInitialized_07545cdb = true;
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicVector2Builtin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				__this = pCVar2.__9__35_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicVector2Builtin.Bindings.c)).static_fields;
				__this = pCVar2.__9__35_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicVector2Builtin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicVector2Builtin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Hash___b__35_0);
				pCVar2 = typeof(CustomLogicVector2Builtin.Bindings.c).static_fields;
				pCVar2.__9__35_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicVector2Builtin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x400161E")]
	[FieldOffset(Offset = "0x30")]
	private Vector2 _value;

	[Token(Token = "0x17000310")]
	public float X
	{
		[Token(Token = "0x6001C47")]
		[Address(RVA = "0x58D8B30", Offset = "0x58D7B30", VA = "0x58D8B30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$get_X): clean
			return this._value.x;
		}
		[Token(Token = "0x6001C48")]
		[Address(RVA = "0x58D8B40", Offset = "0x58D7B40", VA = "0x58D8B40")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$set_X): clean
			this._value.x = value;
			return;
		}
	}

	[Token(Token = "0x17000311")]
	public float Y
	{
		[Token(Token = "0x6001C49")]
		[Address(RVA = "0x58D8B50", Offset = "0x58D7B50", VA = "0x58D8B50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$get_Y): clean
			return this._value.y;
		}
		[Token(Token = "0x6001C4A")]
		[Address(RVA = "0x58D8B60", Offset = "0x58D7B60", VA = "0x58D8B60")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$set_Y): clean
			this._value.y = value;
			return;
		}
	}

	[Token(Token = "0x17000312")]
	public CustomLogicVector2Builtin Normalized
	{
		[Token(Token = "0x6001C4B")]
		[Address(RVA = "0x58D8B70", Offset = "0x58D7B70", VA = "0x58D8B70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$get_Normalized): clean
			Vector2 UVar1;
			CustomLogicVector2Builtin __this_00;

			UVar1 = (Vector2)(this._value).Normalize();
			__this_00 = new CustomLogicVector2Builtin();
			__this_00._value = UVar1;
			return __this_00;
		}
	}

	[Token(Token = "0x17000313")]
	public float Magnitude
	{
		[Token(Token = "0x6001C4C")]
		[Address(RVA = "0x58D8CA0", Offset = "0x58D7CA0", VA = "0x58D8CA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$get_Magnitude): clean
			Vector2 UVar1;
			float fVar2;
			float fVar3;

			UVar1 = this._value;
			fVar2 = UVar1.x;
			fVar3 = UVar1.y;
			fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
			if (0.0 <= fVar2) {
				return SQRT(fVar2);
			}
			fVar2 = sqrtf(fVar2);
			return fVar2;
		}
	}

	[Token(Token = "0x17000314")]
	public float SqrMagnitude
	{
		[Token(Token = "0x6001C4D")]
		[Address(RVA = "0x58D8D20", Offset = "0x58D7D20", VA = "0x58D8D20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$get_SqrMagnitude): clean
			Vector2 UVar1;
			float fVar2;
			float fVar3;

			UVar1 = this._value;
			fVar2 = UVar1.x;
			fVar3 = UVar1.y;
			return fVar3 * fVar3 + fVar2 * fVar2;
		}
	}

	[Token(Token = "0x17000315")]
	public static CustomLogicVector2Builtin Zero
	{
		[Token(Token = "0x6001C4E")]
		[Address(RVA = "0x58D8D40", Offset = "0x58D7D40", VA = "0x58D8D40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$get_Zero): clean
			Vector2 UVar1;
			CustomLogicVector2Builtin __this;

			UVar1 = (Vector2.zeroVector);
			__this = new CustomLogicVector2Builtin();
			__this._value = UVar1;
			return __this;
		}
	}

	[Token(Token = "0x17000316")]
	public static CustomLogicVector2Builtin One
	{
		[Token(Token = "0x6001C4F")]
		[Address(RVA = "0x58D8E00", Offset = "0x58D7E00", VA = "0x58D8E00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$get_One): clean
			Vector2 UVar1;
			CustomLogicVector2Builtin __this;

			UVar1 = (Vector2.oneVector);
			__this = new CustomLogicVector2Builtin();
			__this._value = UVar1;
			return __this;
		}
	}

	[Token(Token = "0x17000317")]
	public static CustomLogicVector2Builtin Up
	{
		[Token(Token = "0x6001C50")]
		[Address(RVA = "0x58D8EC0", Offset = "0x58D7EC0", VA = "0x58D8EC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$get_Up): clean
			Vector2 UVar1;
			CustomLogicVector2Builtin __this;

			UVar1 = (Vector2.upVector);
			__this = new CustomLogicVector2Builtin();
			__this._value = UVar1;
			return __this;
		}
	}

	[Token(Token = "0x17000318")]
	public static CustomLogicVector2Builtin Down
	{
		[Token(Token = "0x6001C51")]
		[Address(RVA = "0x58D8F80", Offset = "0x58D7F80", VA = "0x58D8F80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$get_Down): clean
			Vector2 UVar1;
			CustomLogicVector2Builtin __this;

			UVar1 = (Vector2.downVector);
			__this = new CustomLogicVector2Builtin();
			__this._value = UVar1;
			return __this;
		}
	}

	[Token(Token = "0x17000319")]
	public static CustomLogicVector2Builtin Left
	{
		[Token(Token = "0x6001C52")]
		[Address(RVA = "0x58D9040", Offset = "0x58D8040", VA = "0x58D9040")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$get_Left): clean
			Vector2 UVar1;
			CustomLogicVector2Builtin __this;

			UVar1 = (Vector2.leftVector);
			__this = new CustomLogicVector2Builtin();
			__this._value = UVar1;
			return __this;
		}
	}

	[Token(Token = "0x1700031A")]
	public static CustomLogicVector2Builtin Right
	{
		[Token(Token = "0x6001C53")]
		[Address(RVA = "0x58D9100", Offset = "0x58D8100", VA = "0x58D9100")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$get_Right): clean
			Vector2 UVar1;
			CustomLogicVector2Builtin __this;

			UVar1 = (Vector2.rightVector);
			__this = new CustomLogicVector2Builtin();
			__this._value = UVar1;
			return __this;
		}
	}

	[Token(Token = "0x1700031B")]
	public static CustomLogicVector2Builtin NegativeInfinity
	{
		[Token(Token = "0x6001C54")]
		[Address(RVA = "0x58D91C0", Offset = "0x58D81C0", VA = "0x58D91C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$get_NegativeInfinity): clean
			Vector2 UVar1;
			CustomLogicVector2Builtin __this;

			UVar1 = (Vector2.negativeInfinityVector);
			__this = new CustomLogicVector2Builtin();
			__this._value = UVar1;
			return __this;
		}
	}

	[Token(Token = "0x1700031C")]
	public static CustomLogicVector2Builtin PositiveInfinity
	{
		[Token(Token = "0x6001C55")]
		[Address(RVA = "0x58D9280", Offset = "0x58D8280", VA = "0x58D9280")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$get_PositiveInfinity): clean
			Vector2 UVar1;
			CustomLogicVector2Builtin __this;

			UVar1 = (Vector2.positiveInfinityVector);
			__this = new CustomLogicVector2Builtin();
			__this._value = UVar1;
			return __this;
		}
	}

	[Token(Token = "0x1700031D")]
	public override string ClassName
	{
		[Token(Token = "0x6001C6F")]
		[Address(RVA = "0x58DA7C0", Offset = "0x58D97C0", VA = "0x58DA7C0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$get_ClassName): clean
			return "Vector2";
		}
	}

	[Token(Token = "0x1700031E")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001C70")]
		[Address(RVA = "0x58DA7F0", Offset = "0x58D97F0", VA = "0x58DA7F0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$get_IsAbstract): clean
			return false;
		}
	}

	[Token(Token = "0x1700031F")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001C71")]
		[Address(RVA = "0x58DA800", Offset = "0x58D9800", VA = "0x58DA800", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000320")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001C72")]
		[Address(RVA = "0x58DA810", Offset = "0x58D9810", VA = "0x58DA810", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001C43")]
	[Address(RVA = "0x58D8980", Offset = "0x58D7980", VA = "0x58D8980")]
	public CustomLogicVector2Builtin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07545cac == false) {
			Il2CppMethodInitialized_07545cac = true;
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

	[Token(Token = "0x6001C44")]
	[Address(RVA = "0x58D89F0", Offset = "0x58D79F0", VA = "0x58D89F0")]
	public CustomLogicVector2Builtin(float xy)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$.ctor): clean
		base();
		this._value.x = xy;
		this._value.y = xy;
		return;
	}

	[Token(Token = "0x6001C45")]
	[Address(RVA = "0x58D8A60", Offset = "0x58D7A60", VA = "0x58D8A60")]
	public CustomLogicVector2Builtin(float x, float y)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$.ctor): clean
		base();
		this._value.x = x;
		this._value.y = y;
		return;
	}

	[Token(Token = "0x6001C46")]
	[Address(RVA = "0x58D8AD0", Offset = "0x58D7AD0", VA = "0x58D8AD0")]
	public CustomLogicVector2Builtin(Vector2 value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$.ctor): clean
		base();
		this._value = value;
		return;
	}

	[Token(Token = "0x6001C56")]
	[Address(RVA = "0x58D9340", Offset = "0x58D8340", VA = "0x58D9340")]
	public static float Angle(CustomLogicVector2Builtin from, CustomLogicVector2Builtin to)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$Angle): clean
		Vector2 UVar1;
		double dVar2;
		Math method_00;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;

		if ((from == null) ||(to == null)) {
			throw new NullReferenceException();
		}
		UVar1 = from._value;
		fVar3 = UVar1.x;
		fVar4 = UVar1.y;
		UVar1 = to._value;
		fVar5 = UVar1.x;
		fVar6 = UVar1.y;
		fVar7 = (fVar6 * fVar6 + fVar5 * fVar5) * (fVar4 * fVar4 + fVar3 * fVar3);
		if (fVar7 < 1e-30) {
			return 0.0;
		}
		method_00 = typeof(Math);
		if (0.0 <= fVar7) {
			fVar7 = SQRT(fVar7);
		}
		else {
			fVar7 = sqrtf(fVar7);
		}
		fVar7 = (fVar4 * fVar6 + fVar3 * fVar5) / fVar7;
		fVar3 = 1.0;
		if (fVar7 <= 1.0) {
			fVar3 = fVar7;
		}
		dVar2 = acos((double)(float)(~-(uint)(-1.0 <= fVar7) & 0xbf800000 | (uint)fVar3 & -(uint)(-1.0 <= fVar7)), (MethodInfo)method_00);
		return (float)dVar2 * 57.29578;
	}

	[Token(Token = "0x6001C57")]
	[Address(RVA = "0x58D9490", Offset = "0x58D8490", VA = "0x58D9490")]
	public static CustomLogicVector2Builtin ClampMagnitude(CustomLogicVector2Builtin vector, float maxLength)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$ClampMagnitude): 12 lines keep C-only constructs
		byte[] auVar1 = new byte[16];
		CustomLogicVector2Builtin __this;
		float fVar2;
		byte[] auVar3 = new byte[16];
		Vector2 local_28;

		if (vector == null) {
			throw new NullReferenceException();
		}
		local_28 = vector._value;
		auVar3._8_8_ = 0;
		auVar3._0_4_ = local_28.x;
		auVar3._4_4_ = local_28.y;
		fVar2 = local_28.y * local_28.y + local_28.x * local_28.x;
		if (fVar2 <= maxLength * maxLength) goto label_059d955b;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			if (fVar2 < 0.0) goto label_059d9536;
	label_059d950c: ;
			fVar2 = SQRT(fVar2);
		}
		else {
			if (0.0 <= fVar2) goto label_059d950c;
	label_059d9536: ;
			fVar2 = sqrtf(fVar2);
		}
		auVar1._4_4_ = fVar2;
		auVar1._0_4_ = fVar2;
		auVar1._8_4_ = fVar2;
		auVar1._12_4_ = fVar2;
		auVar3 = divps(auVar3, auVar1);
		local_28.y = auVar3._4_4_ * maxLength;
		local_28.x = auVar3._0_4_ * maxLength;
	label_059d955b: ;
		__this = new CustomLogicVector2Builtin();
		__this._value = local_28;
		return __this;
	}

	[Token(Token = "0x6001C58")]
	[Address(RVA = "0x58D95E0", Offset = "0x58D85E0", VA = "0x58D95E0")]
	public static float Distance(CustomLogicVector2Builtin a, CustomLogicVector2Builtin b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$Distance): clean
		Vector2 UVar1;
		Vector2 UVar2;
		uint uVar3;
		float fVar4;
		float fVar5;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		UVar1 = a._value;
		UVar2 = b._value;
		if (Il2CppMethodInitialized_0753e72f == false) {
			Il2CppMethodInitialized_0753e72f = true;
			uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		fVar4 = UVar1.x - UVar2.x;
		fVar5 = UVar1.y - UVar2.y;
		fVar4 = fVar5 * fVar5 + fVar4 * fVar4;
		if (fVar4 < 0.0) {
			fVar4 = sqrtf(fVar4);
			return fVar4;
		}
		return SQRT(fVar4);
	}

	[Token(Token = "0x6001C59")]
	[Address(RVA = "0x58D96A0", Offset = "0x58D86A0", VA = "0x58D96A0")]
	public static float Dot(CustomLogicVector2Builtin a, CustomLogicVector2Builtin b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$Dot): clean
		Vector2 UVar1;
		Vector2 UVar2;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		UVar1 = a._value;
		UVar2 = b._value;
		return UVar2.y * UVar1.y + UVar2.x * UVar1.x;
	}

	[Token(Token = "0x6001C5A")]
	[Address(RVA = "0x58D96D0", Offset = "0x58D86D0", VA = "0x58D96D0")]
	public static CustomLogicVector2Builtin Lerp(CustomLogicVector2Builtin a, CustomLogicVector2Builtin b, float t)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$Lerp): clean
		Vector2 UVar1;
		Vector2 UVar2;
		CustomLogicVector2Builtin __this;
		float fVar3;
		float local_28;
		float fStack_24;
		float local_18;
		float fStack_14;

		if (a != null) {
			if (b != null) {
				UVar1 = a._value;
				UVar2 = b._value;
				fVar3 = 1.0;
				if (t <= 1.0) {
					fVar3 = t;
				}
				fVar3 = (float)(-(uint)(0.0 <= t) & (uint)fVar3);
				local_18 = UVar1.x;
				fStack_14 = UVar1.y;
				local_28 = UVar2.x;
				fStack_24 = UVar2.y;
				__this = new CustomLogicVector2Builtin();
				UVar1.y = fVar3 * (fStack_24 - fStack_14) + fStack_14;
				UVar1.x = fVar3 * (local_28 - local_18) + local_18;
				__this._value = UVar1;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001C5B")]
	[Address(RVA = "0x58D97C0", Offset = "0x58D87C0", VA = "0x58D97C0")]
	public static CustomLogicVector2Builtin LerpUnclamped(CustomLogicVector2Builtin a, CustomLogicVector2Builtin b, float t)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$LerpUnclamped): clean
		Vector2 UVar1;
		Vector2 UVar2;
		CustomLogicVector2Builtin __this;
		float local_28;
		float fStack_24;
		float local_18;
		float fStack_14;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		UVar1 = a._value;
		UVar2 = b._value;
		local_18 = UVar1.x;
		fStack_14 = UVar1.y;
		local_28 = UVar2.x;
		fStack_24 = UVar2.y;
		__this = new CustomLogicVector2Builtin();
		UVar1.y = t * (fStack_24 - fStack_14) + fStack_14;
		UVar1.x = t * (local_28 - local_18) + local_18;
		__this._value = UVar1;
		return __this;
	}

	[Token(Token = "0x6001C5C")]
	[Address(RVA = "0x58D9890", Offset = "0x58D8890", VA = "0x58D9890")]
	public static CustomLogicVector2Builtin Max(CustomLogicVector2Builtin a, CustomLogicVector2Builtin b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$Max): 8 lines keep C-only constructs
		Vector2 UVar1;
		CustomLogicVector2Builtin __this;
		byte[] auVar2 = new byte[16];
		byte[] auStack_28 = new byte[16];

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		auStack_28._8_8_ = 0;
		auStack_28._0_8_ = a._value;
		UVar1 = b._value;
		auVar2._8_8_ = 0;
		auVar2._0_8_ = UVar1;
		auVar2 = maxps(auStack_28, auVar2);
		__this = new CustomLogicVector2Builtin();
		auStack_28._0_8_ = auVar2._0_8_;
		__this._value = (Vector2)auStack_28._0_8_;
		return __this;
	}

	[Token(Token = "0x6001C5D")]
	[Address(RVA = "0x58D9950", Offset = "0x58D8950", VA = "0x58D9950")]
	public static CustomLogicVector2Builtin Min(CustomLogicVector2Builtin a, CustomLogicVector2Builtin b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$Min): 8 lines keep C-only constructs
		Vector2 UVar1;
		CustomLogicVector2Builtin __this;
		byte[] auVar2 = new byte[16];
		byte[] local_28 = new byte[16];

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		local_28._8_8_ = 0;
		local_28._0_8_ = a._value;
		UVar1 = b._value;
		auVar2._8_8_ = 0;
		auVar2._0_8_ = UVar1;
		auVar2 = minps(local_28, auVar2);
		__this = new CustomLogicVector2Builtin();
		local_28._0_8_ = auVar2._0_8_;
		__this._value = (Vector2)local_28._0_8_;
		return __this;
	}

	[Token(Token = "0x6001C5E")]
	[Address(RVA = "0x58D9A10", Offset = "0x58D8A10", VA = "0x58D9A10")]
	public static CustomLogicVector2Builtin MoveTowards(CustomLogicVector2Builtin current, CustomLogicVector2Builtin target, float maxDistanceDelta)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$MoveTowards): 13 lines keep C-only constructs
		Vector2 UVar1;
		byte[] auVar2 = new byte[16];
		CustomLogicVector2Builtin __this;
		float fVar3;
		float fVar4;
		float fVar5;
		byte[] auVar6 = new byte[16];
		Vector2 local_48;

		if ((current == null) ||(target == null)) {
			throw new NullReferenceException();
		}
		UVar1 = current._value;
		fVar4 = UVar1.x;
		fVar5 = UVar1.y;
		UVar1 = target._value;
		local_48.x = UVar1.x;
		local_48.y = UVar1.y;
		auVar6._0_4_ = local_48.x - fVar4;
		auVar6._4_4_ = local_48.y - fVar5;
		auVar6._8_8_ = 0;
		fVar3 = auVar6._4_4_ * auVar6._4_4_ + auVar6._0_4_ * auVar6._0_4_;
		if (((fVar3 == 0.0) && (!NAN(fVar3))) ||((0.0 <= maxDistanceDelta && (fVar3 <= maxDistanceDelta * maxDistanceDelta)))) goto label_059d9b2f;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			if (fVar3 < 0.0) goto label_059d9afa;
	label_059d9ac1: ;
			fVar3 = SQRT(fVar3);
		}
		else {
			if (0.0 <= fVar3) goto label_059d9ac1;
	label_059d9afa: ;
			fVar3 = sqrtf(fVar3);
		}
		auVar2._4_4_ = fVar3;
		auVar2._0_4_ = fVar3;
		auVar2._8_4_ = fVar3;
		auVar2._12_4_ = fVar3;
		auVar6 = divps(auVar6, auVar2);
		local_48.x = fVar4 + maxDistanceDelta * auVar6._0_4_;
		local_48.y = fVar5 + maxDistanceDelta * auVar6._4_4_;
	label_059d9b2f: ;
		__this = new CustomLogicVector2Builtin();
		__this._value = local_48;
		return __this;
	}

	[Token(Token = "0x6001C5F")]
	[Address(RVA = "0x58D9BC0", Offset = "0x58D8BC0", VA = "0x58D9BC0")]
	public static CustomLogicVector2Builtin Reflect(CustomLogicVector2Builtin inDirection, CustomLogicVector2Builtin inNormal)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$Reflect): clean
		Vector2 UVar1;
		Vector2 UVar2;
		CustomLogicVector2Builtin __this;
		float fVar3;
		Vector2 local_28;
		float local_18;
		float fStack_14;

		if ((inDirection == null) ||(inNormal == null)) {
			throw new NullReferenceException();
		}
		UVar1 = inDirection._value;
		UVar2 = inNormal._value;
		local_28.x = UVar1.x;
		local_28.y = UVar1.y;
		local_18 = UVar2.x;
		fStack_14 = UVar2.y;
		fVar3 = (local_28.y * fStack_14 + local_28.x * local_18) * -2.0;
		local_28.y = fVar3 * fStack_14 + local_28.y;
		local_28.x = fVar3 * local_18 + local_28.x;
		__this = new CustomLogicVector2Builtin();
		__this._value = local_28;
		return __this;
	}

	[Token(Token = "0x6001C60")]
	[Address(RVA = "0x58D9CA0", Offset = "0x58D8CA0", VA = "0x58D9CA0")]
	public static float SignedAngle(CustomLogicVector2Builtin from, CustomLogicVector2Builtin to)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$SignedAngle): 6 lines keep C-only constructs
		Vector2 UVar1;
		float fVar2;
		float fVar3;
		Math pSVar4;
		uint uVar5;
		double dVar6;
		byte[] auVar7 = new byte[12];
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;

		if ((from == null) ||(to == null)) {
			throw new NullReferenceException();
		}
		fVar2 = from._value.x;
		fVar3 = from._value.y;
		UVar1 = to._value;
		fVar8 = UVar1.x;
		fVar9 = UVar1.y;
		fVar11 = (fVar9 * fVar9 + fVar8 * fVar8) * (fVar3 * fVar3 + fVar2 * fVar2);
		fVar10 = 0.0;
		if (fVar11 < 1e-30) goto label_059d9de6;
		pSVar4 = typeof(Math);
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			if (fVar11 < 0.0) goto label_059d9d77;
	label_059d9d4e: ;
			fVar11 = SQRT(fVar11);
		}
		else {
			if (0.0 <= fVar11) goto label_059d9d4e;
	label_059d9d77: ;
			fVar11 = sqrtf(fVar11);
		}
		fVar11 = (fVar3 * fVar9 + fVar2 * fVar8) / fVar11;
		auVar7 = ZEXT812(0x3f800000);
		if (fVar11 <= auVar7._0_4_) {
			auVar7._4_8_ = auVar7._4_8_;
			auVar7._0_4_ = fVar11;
		}
		dVar6 = acos((double)(float)(~-(uint)(-1.0 <= fVar11) & 0xbf800000 | auVar7._0_4_ & -(uint)(-1.0 <= fVar11)), (MethodInfo)pSVar4);
		fVar10 = (float)dVar6 * 57.29578;
	label_059d9de6: ;
		uVar5 = -(uint)(0.0 <= fVar2 * fVar9 - fVar3 * fVar8);
		return (float)(~uVar5 & (uint)-fVar10 | (uint)fVar10 & uVar5);
	}

	[Token(Token = "0x6001C61")]
	[Address(RVA = "0x58D9E20", Offset = "0x58D8E20", VA = "0x58D9E20")]
	public static CustomLogicVector2Builtin SmoothDamp(CustomLogicVector2Builtin current, CustomLogicVector2Builtin target, CustomLogicVector2Builtin currentVelocity, float smoothTime, float maxSpeed)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$SmoothDamp): clean
		Vector2 UVar1;
		CustomLogicVector2Builtin __this;
		float deltaTime;
		Vector2 local_18;
		Vector2 local_10;

		if ((current != null) &&(target != null)) {
			if (currentVelocity != null) {
				local_10 = current._value;
				local_18 = target._value;
				deltaTime = Time.deltaTime;
				UVar1 = (Vector2)Vector2.SmoothDamp(ref local_10, ref local_18, ref currentVelocity._value, smoothTime, maxSpeed, deltaTime);
				__this = new CustomLogicVector2Builtin();
				__this._value = UVar1;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001C62")]
	[Address(RVA = "0x58D9F20", Offset = "0x58D8F20", VA = "0x58D9F20")]
	public void Set(float x, float y)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$Set): clean
		this._value.x = x;
		this._value.y = y;
		return;
	}

	[Token(Token = "0x6001C63")]
	[Address(RVA = "0x58D9F30", Offset = "0x58D8F30", VA = "0x58D9F30")]
	public void Normalize()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$Normalize): clean
		Vector2 UVar1;
		float fVar2;
		float fVar3;

		UVar1 = this._value;
		fVar2 = UVar1.x;
		fVar3 = UVar1.y;
		fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
		if (fVar2 < 0.0) {
			fVar2 = sqrtf(fVar2);
		}
		else {
			fVar2 = SQRT(fVar2);
		}
		if (fVar2 <= 1e-05) {
			this._value.x = 0.0;
			this._value.y = 0.0;
			return;
		}
		fVar3 = this._value.y;
		this._value.x = this._value.x / fVar2;
		this._value.y = fVar3 / fVar2;
		return;
	}

	[Token(Token = "0x6001C64")]
	[Address(RVA = "0x58D9FF0", Offset = "0x58D8FF0", VA = "0x58D9FF0", Slot = "3")]
	public override string ToString()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$ToString): 1 lines keep C-only constructs
		String pSVar1;

		pSVar1 = (String)il2cpp_runtime_helper_03deba80(&this._value, 0, 0, 0);
		return pSVar1;
	}

	[Token(Token = "0x6001C65")]
	[Address(RVA = "0x58DA000", Offset = "0x58D9000", VA = "0x58DA000", Slot = "19")]
	public virtual object __Copy__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$__Copy__): clean
		Vector2 UVar1;
		CustomLogicVector2Builtin __this_00;

		UVar1 = this._value;
		__this_00 = new CustomLogicVector2Builtin();
		__this_00._value = UVar1;
		return (object)__this_00;
	}

	[Token(Token = "0x6001C66")]
	[Address(RVA = "0x58DA090", Offset = "0x58D9090", VA = "0x58DA090", Slot = "11")]
	public object __Add__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$__Add__): 7 lines keep C-only constructs
		Il2CppClass pIVar1;
		Il2CppClass pIVar2;
		byte bVar3;
		CustomLogicVector2Builtin __this_00;
		String operatorName;
		Exception ex;
		MethodInfo lastManagedFrame;
		Vector2 UStack_38;
		float fStack_28;
		float fStack_24;

		if (self != null) {
			bVar3 = (typeof(CustomLogicVector2Builtin)._2).typeHierarchyDepth;
			if ((((bVar3 <= (self.klass._2).typeHierarchyDepth) && (other != null)) &&((self.klass._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(CustomLogicVector2Builtin))) &&((bVar3 <= (other.klass._2).typeHierarchyDepth &&((other.klass._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(CustomLogicVector2Builtin))))) {
				pIVar1 = self[3].klass;
				pIVar2 = other[3].klass;
				UStack_38.x = SUB84(pIVar1, 0);
				UStack_38.y = (float)((ulong)pIVar1 >> 0x20);
				fStack_28 = SUB84(pIVar2, 0);
				fStack_24 = (float)((ulong)pIVar2 >> 0x20);
				UStack_38.y = UStack_38.y + fStack_24;
				UStack_38.x = UStack_38.x + fStack_28;
				__this_00 = new CustomLogicVector2Builtin();
				__this_00._value = UStack_38;
				return (object)__this_00;
			}
		}
		operatorName = il2cpp_codegen_get_runtime_metadata(&"__Add__");
		ex = CustomLogicUtils.OperatorException(operatorName, self, other);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector2Builtin___Add);
		throw (object)ex;
	}

	[Token(Token = "0x6001C67")]
	[Address(RVA = "0x58DA1D0", Offset = "0x58D91D0", VA = "0x58DA1D0", Slot = "12")]
	public object __Sub__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$__Sub__): 7 lines keep C-only constructs
		Il2CppClass pIVar1;
		Il2CppClass pIVar2;
		byte bVar3;
		CustomLogicVector2Builtin __this_00;
		String operatorName;
		Exception ex;
		MethodInfo lastManagedFrame;
		Vector2 UStack_38;
		float fStack_28;
		float fStack_24;

		if (self != null) {
			bVar3 = (typeof(CustomLogicVector2Builtin)._2).typeHierarchyDepth;
			if ((((bVar3 <= (self.klass._2).typeHierarchyDepth) && (other != null)) &&((self.klass._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(CustomLogicVector2Builtin))) &&((bVar3 <= (other.klass._2).typeHierarchyDepth &&((other.klass._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(CustomLogicVector2Builtin))))) {
				pIVar1 = self[3].klass;
				pIVar2 = other[3].klass;
				UStack_38.x = SUB84(pIVar1, 0);
				UStack_38.y = (float)((ulong)pIVar1 >> 0x20);
				fStack_28 = SUB84(pIVar2, 0);
				fStack_24 = (float)((ulong)pIVar2 >> 0x20);
				UStack_38.y = UStack_38.y - fStack_24;
				UStack_38.x = UStack_38.x - fStack_28;
				__this_00 = new CustomLogicVector2Builtin();
				__this_00._value = UStack_38;
				return (object)__this_00;
			}
		}
		operatorName = il2cpp_codegen_get_runtime_metadata(&"__Sub__");
		ex = CustomLogicUtils.OperatorException(operatorName, self, other);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector2Builtin___Sub);
		throw (object)ex;
	}

	[Token(Token = "0x6001C68")]
	[Address(RVA = "0x58DA310", Offset = "0x58D9310", VA = "0x58DA310", Slot = "13")]
	public object __Mul__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$__Mul__): 12 lines keep C-only constructs
		byte bVar1;
		Il2CppClass pIVar2;
		uint puVar3;
		CustomLogicVector2Builtin __this_00;
		String operatorName;
		Exception ex;
		MethodInfo lastManagedFrame;
		Vector2 UStack_38;
		ulong uStack_28;

		if (self != null) {
			pIVar2 = self.klass;
			bVar1 = (typeof(CustomLogicVector2Builtin)._2).typeHierarchyDepth;
			if (((pIVar2._2).typeHierarchyDepth < bVar1) ||((pIVar2._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicVector2Builtin))) {
				if (pIVar2 == g_data_07556740) {
					puVar3 = il2cpp_vm_Object_Unbox(self);
					if (other != null) {
						bVar1 = (typeof(CustomLogicVector2Builtin)._2).typeHierarchyDepth;
						if ((bVar1 <= (other.klass._2).typeHierarchyDepth) &&((other.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicVector2Builtin))) {
							uStack_28 = other[3].klass;
							UStack_38.y = (float)*puVar3;
							UStack_38.x = (float)*puVar3;
							goto override_prt_59da3d6_19fc4389;
						}
					}
				}
			}
			else if (other != null) {
				pIVar2 = other.klass;
				if (((pIVar2._2).typeHierarchyDepth < bVar1) ||((pIVar2._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicVector2Builtin))) {
					if (pIVar2 != g_data_07556740) goto label_059da4a8;
					puVar3 = il2cpp_vm_Object_Unbox(other);
					uStack_28 = self[3].klass;
					UStack_38.y = (float)*puVar3;
					UStack_38.x = (float)*puVar3;
				}
				else {
					UStack_38 = (Vector2)self[3].klass;
					uStack_28 = other[3].klass;
				}
	override_prt_59da3d6_19fc4389: ;
				UStack_38.y = UStack_38.y * uStack_28._4_4_;
				UStack_38.x = UStack_38.x * (float)uStack_28;
				__this_00 = new CustomLogicVector2Builtin();
				__this_00._value = UStack_38;
				return (object)__this_00;
			}
		}
	label_059da4a8: ;
		operatorName = il2cpp_codegen_get_runtime_metadata(&"__Mul__");
		ex = CustomLogicUtils.OperatorException(operatorName, self, other);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector2Builtin___Mul);
		throw (object)ex;
	}

	[Token(Token = "0x6001C69")]
	[Address(RVA = "0x58DA4E0", Offset = "0x58D94E0", VA = "0x58DA4E0", Slot = "14")]
	public object __Div__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$__Div__): 20 lines keep C-only constructs
		byte bVar1;
		Il2CppClass pIVar2;
		byte[] auVar3 = new byte[16];
		uint puVar4;
		CustomLogicVector2Builtin __this_00;
		String operatorName;
		Exception ex;
		MethodInfo lastManagedFrame;
		byte[] auVar5 = new byte[16];
		Vector2 UStack_38;
		uint uStack_28;
		uint uStack_24;
		uint uStack_1c;

		if (self != null) {
			bVar1 = (typeof(CustomLogicVector2Builtin)._2).typeHierarchyDepth;
			if (((bVar1 <= (self.klass._2).typeHierarchyDepth) && (other != null)) &&((self.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicVector2Builtin))) {
				pIVar2 = other.klass;
				if (((pIVar2._2).typeHierarchyDepth < bVar1) ||((pIVar2._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicVector2Builtin))) {
					if (pIVar2 != g_data_07556740) goto label_059da62e;
					puVar4 = il2cpp_vm_Object_Unbox(other);
					pIVar2 = self[3].klass;
					uStack_28 = *puVar4;
					uStack_24 = uStack_28;
					uStack_1c = uStack_28;
				}
				else {
					pIVar2 = self[3].klass;
					uStack_28 = SUB84(other[3].klass, 0);
					uStack_24 = (undefined4)((ulong)other[3].klass >> 0x20);
					uStack_1c = 0;
				}
				auVar5._8_8_ = 0;
				auVar5._0_8_ = pIVar2;
				auVar3._4_4_ = uStack_24;
				auVar3._0_4_ = uStack_28;
				auVar3._8_4_ = uStack_1c;
				auVar3._12_4_ = uStack_1c;
				auVar5 = divps(auVar5, auVar3);
				__this_00 = new CustomLogicVector2Builtin();
				UStack_38 = auVar5._0_8_;
				__this_00._value = UStack_38;
				return (object)__this_00;
			}
		}
	label_059da62e: ;
		operatorName = il2cpp_codegen_get_runtime_metadata(&"__Div__");
		ex = CustomLogicUtils.OperatorException(operatorName, self, other);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector2Builtin___Div);
		throw (object)ex;
	}

	[Token(Token = "0x6001C6A")]
	[Address(RVA = "0x58DA670", Offset = "0x58D9670", VA = "0x58DA670", Slot = "16")]
	public bool __Eq__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$__Eq__): 5 lines keep C-only constructs
		byte bVar1;
		float fVar2;
		float fVar3;

		if (self != null) {
			bVar1 = (typeof(CustomLogicVector2Builtin)._2).typeHierarchyDepth;
			if (bVar1 <= (self.klass._2).typeHierarchyDepth) {
				if ((self.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicVector2Builtin)) {
					self = null;
				}
				if ((((other != null) && (self != null)) &&(bVar1 <= (other.klass._2).typeHierarchyDepth)) &&((other.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicVector2Builtin))) {
					fVar2 = SUB84(self[3].klass, 0) - SUB84(other[3].klass, 0);
					fVar3 = (float)((ulong)self[3].klass >> 0x20) - (float)((ulong)other[3].klass >> 0x20);
					return fVar3 * fVar3 + fVar2 * fVar2 < 9.9999994e-11;
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6001C6B")]
	[Address(RVA = "0x58DA730", Offset = "0x58D9730", VA = "0x58DA730", Slot = "17")]
	public int __Hash__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$__Hash__): clean
		uint uVar1;
		int iVar2;

		uVar1 = (this._value).GetHashCode();
		iVar2 = (this._value.y).GetHashCode();
		return iVar2 << 2 ^ uVar1;
	}

	[Token(Token = "0x6001C6C")]
	[Address(RVA = "0x58DA760", Offset = "0x58D9760", VA = "0x58DA760", Slot = "15")]
	public object __Mod__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$__Mod__): 4 lines keep C-only constructs
		Il2CppClass klass;
		NotImplementedException __this_00;
		MethodInfo lastManagedFrame;

		klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotImplementedException));
		__this_00 = (NotImplementedException)il2cpp_codegen_object_new(klass);
		__this_00 = new NotImplementedException();
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector2Builtin___Mod);
		throw (object)__this_00;
	}

	[Token(Token = "0x6001C6D")]
	[Address(RVA = "0x58DA7A0", Offset = "0x58D97A0", VA = "0x58DA7A0")]
	public static implicit operator Vector2(CustomLogicVector2Builtin value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$op_Implicit): clean
		if (value == null) {
			throw new NullReferenceException();
		}
		return (Vector2)value._value;
	}

	[Token(Token = "0x6001C6E")]
	[Address(RVA = "0x58D8C10", Offset = "0x58D7C10", VA = "0x58D8C10")]
	public static implicit operator CustomLogicVector2Builtin(Vector2 value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c (CustomLogic.CustomLogicVector2Builtin$$op_Implicit): clean
		CustomLogicVector2Builtin __this;

		__this = new CustomLogicVector2Builtin();
		__this._value = value;
		return __this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicVector2Builtin.c.

	// CustomLogic.CustomLogicVector2Builtin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"X");
		__this.Add((Il2CppObject *)"Y");
		__this.Add((Il2CppObject *)"Normalized");
		__this.Add((Il2CppObject *)"Magnitude");
		__this.Add((Il2CppObject *)"SqrMagnitude");
		__this.Add((Il2CppObject *)"Zero");
		__this.Add((Il2CppObject *)"One");
		__this.Add((Il2CppObject *)"Up");
		__this.Add((Il2CppObject *)"Down");
		__this.Add((Il2CppObject *)"Left");
		__this.Add((Il2CppObject *)"Right");
		__this.Add((Il2CppObject *)"NegativeInfinity");
		__this.Add((Il2CppObject *)"PositiveInfinity");
		__this.Add((Il2CppObject *)"Angle");
		__this.Add((Il2CppObject *)"ClampMagnitude");
		__this.Add((Il2CppObject *)"Distance");
		__this.Add((Il2CppObject *)"Dot");
		__this.Add((Il2CppObject *)"Lerp");
		__this.Add((Il2CppObject *)"LerpUnclamped");
		__this.Add((Il2CppObject *)"Max");
		__this.Add((Il2CppObject *)"Min");
		__this.Add((Il2CppObject *)"MoveTowards");
		__this.Add((Il2CppObject *)"Reflect");
		__this.Add((Il2CppObject *)"SignedAngle");
		__this.Add((Il2CppObject *)"SmoothDamp");
		__this.Add((Il2CppObject *)"Set");
		__this.Add((Il2CppObject *)"Normalize");
		__this.Add((Il2CppObject *)"__Copy__");
		__this.Add((Il2CppObject *)"__Add__");
		__this.Add((Il2CppObject *)"__Sub__");
		__this.Add((Il2CppObject *)"__Mul__");
		__this.Add((Il2CppObject *)"__Div__");
		__this.Add((Il2CppObject *)"__Eq__");
		__this.Add((Il2CppObject *)"__Hash__");
		CustomLogicVector2Builtin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__X>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__X_g____getter_2_0(CustomLogicVector2Builtin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__X>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__X_g____setter_2_1(CustomLogicVector2Builtin __i, object __v)
	{
		float fVar1;

		fVar1 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i._value.x = fVar1;
		return;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Y>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Y_g____getter_3_0(CustomLogicVector2Builtin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Y>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__Y_g____setter_3_1(CustomLogicVector2Builtin __i, object __v)
	{
		float fVar1;

		fVar1 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i._value.y = fVar1;
		return;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Normalized>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Normalized_g____getter_4_0(CustomLogicVector2Builtin __i)
	{
		Vector2 UVar1;
		CustomLogicVector2Builtin __this;

		if (__i == null) {
			throw new NullReferenceException();
		}
		UVar1 = (Vector2)(__i._value).Normalize();
		__this = new CustomLogicVector2Builtin();
		__this._value = UVar1;
		return (object)__this;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Magnitude>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Magnitude_g____getter_5_0(CustomLogicVector2Builtin __i)
	{
		float fVar1;
		float fVar2;
		object pIVar3;
		float fStack_c;

		if (__i == null) {
			throw new NullReferenceException();
		}
		fVar1 = __i._value.x;
		fVar2 = __i._value.y;
		fStack_c = fVar2 * fVar2 + fVar1 * fVar1;
		if (fStack_c < 0.0) {
			fStack_c = sqrtf(fStack_c);
		}
		else {
			fStack_c = SQRT(fStack_c);
		}
		return pIVar3;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__SqrMagnitude>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__SqrMagnitude_g____getter_6_0(CustomLogicVector2Builtin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Zero>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Zero_g____getter_7_0(CustomLogicVector2Builtin __i)
	{
		CustomLogicVector2Builtin pCVar1;

		pCVar1 = CustomLogicVector2Builtin.Zero;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__One>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__One_g____getter_8_0(CustomLogicVector2Builtin __i)
	{
		CustomLogicVector2Builtin pCVar1;

		pCVar1 = CustomLogicVector2Builtin.One;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Up>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__Up_g____getter_9_0(CustomLogicVector2Builtin __i)
	{
		CustomLogicVector2Builtin pCVar1;

		pCVar1 = CustomLogicVector2Builtin.Up;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Down>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__Down_g____getter_10_0(CustomLogicVector2Builtin __i)
	{
		CustomLogicVector2Builtin pCVar1;

		pCVar1 = CustomLogicVector2Builtin.Down;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Left>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__Left_g____getter_11_0(CustomLogicVector2Builtin __i)
	{
		CustomLogicVector2Builtin pCVar1;

		pCVar1 = CustomLogicVector2Builtin.Left;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Right>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__Right_g____getter_12_0(CustomLogicVector2Builtin __i)
	{
		CustomLogicVector2Builtin pCVar1;

		pCVar1 = CustomLogicVector2Builtin.Right;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__NegativeInfinity>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__NegativeInfinity_g____getter_13_0(CustomLogicVector2Builtin __i)
	{
		CustomLogicVector2Builtin pCVar1;

		pCVar1 = CustomLogicVector2Builtin.NegativeInfinity;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__PositiveInfinity>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__PositiveInfinity_g____getter_14_0(CustomLogicVector2Builtin __i)
	{
		CustomLogicVector2Builtin pCVar1;

		pCVar1 = CustomLogicVector2Builtin.PositiveInfinity;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$.cctor: 1 lines keep C-only constructs
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(CustomLogicVector2Builtin.Bindings.c)) ;
		__this = new Object();
		CustomLogicVector2Builtin.Bindings.c.__9 =(CustomLogicVector2Builtin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Angle>b__15_0: 12 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Angle_b__15_0(CustomLogicVector2Builtin __c, Object[] __a)
	{
		Vector2 UVar1;
		Vector2 UVar2;
		double dVar3;
		CustomLogicVector2Builtin pCVar4;
		CustomLogicVector2Builtin pCVar5;
		object pIVar6;
		Math pSVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		uint uVar12;
		uint uVar13;
		float fVar14;
		float fVar15;
		uint uVar16;
		uint uVar17;
		float local_4c;
		Vector2 local_48;
		ulong uStack_40;
		Vector2 local_38;
		ulong uStack_30;
		float local_28;

		if (__a == null) {
	label_059de570: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
	label_059de575: ;
			throw new IndexOutOfRangeException();
		}
		pIVar6 = __a[0];
		pCVar4 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(pIVar6);
		if ((__a.Length & 0xfffffffe) == 0) goto label_059de575;
		pCVar5 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(__a[1]);
		if ((pCVar4 == null) ||(pCVar5 == null)) goto label_059de570;
		UVar1 = pCVar4._value;
		UVar2 = pCVar5._value;
		fVar9 = UVar1.x;
		fVar11 = UVar1.y;
		uVar12 = 0;
		uVar13 = 0;
		fVar14 = UVar2.x;
		fVar15 = UVar2.y;
		uVar16 = 0;
		uVar17 = 0;
		if (Il2CppMethodInitialized_0753e7f8 == false) {
			uStack_30 = 0;
			uStack_40 = 0;
			local_48 = UVar2;
			local_38 = UVar1;
			Il2CppMethodInitialized_0753e7f8 = true;
			fVar9 = local_38.x;
			fVar11 = local_38.y;
			uVar12 = (undefined4)uStack_30;
			uVar13 = uStack_30._4_4_;
			fVar14 = local_48.x;
			fVar15 = local_48.y;
			uVar16 = (undefined4)uStack_40;
			uVar17 = uStack_40._4_4_;
		}
		fVar10 = fVar15 * fVar15 + fVar14 * fVar14;
		fVar8 = fVar10 * (fVar11 * fVar11 + fVar9 * fVar9);
		local_4c = 0.0;
		if (fVar8 < 1e-30) goto label_059de54b;
		pSVar7 = typeof(Math);
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			local_38.y = fVar11;
			local_38.x = fVar9;
			uStack_30 = CONCAT44(uVar13, uVar12);
			local_48.y = fVar15;
			local_48.x = fVar14;
			uStack_40 = CONCAT44(uVar17, uVar16);
			local_28 = fVar8;
			fVar8 = local_28;
			fVar9 = local_38.x;
			fVar11 = local_38.y;
			uVar12 = (undefined4)uStack_30;
			uVar13 = uStack_30._4_4_;
			fVar14 = local_48.x;
			fVar15 = local_48.y;
			uVar16 = (undefined4)uStack_40;
			uVar17 = uStack_40._4_4_;
			if (local_28 < 0.0) goto label_059de4e3;
	label_059de4b2: ;
			fVar8 = SQRT(fVar8);
		}
		else {
			if (0.0 <= fVar8) goto label_059de4b2;
	label_059de4e3: ;
			local_38.y = fVar11;
			local_38.x = fVar9;
			uStack_30 = CONCAT44(uVar13, uVar12);
			local_48.y = fVar15;
			local_48.x = fVar14;
			uStack_40 = CONCAT44(uVar17, uVar16);
			fVar8 = sqrtf(fVar8);
			fVar9 = local_38.x;
			fVar11 = local_38.y;
			fVar14 = local_48.x;
			fVar15 = local_48.y;
		}
		fVar8 = (fVar11 * fVar15 + fVar9 * fVar14) / fVar8;
		fVar9 = 1.0;
		if (fVar8 <= 1.0) {
			fVar9 = fVar8;
		}
		dVar3 = acos((double)(float)(~-(uint)(-1.0 <= fVar8) & 0xbf800000 | (uint)fVar9 & -(uint)(-1.0 <= fVar8)), (MethodInfo)pSVar7);
		local_4c = (float)dVar3 * 57.29578;
	label_059de54b: ;
		pIVar6 = (object)local_4c;
		return pIVar6;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__ClampMagnitude>b__16_0: clean
	private object Bindings_c____CreateMethodBinding__ClampMagnitude_b__16_0(CustomLogicVector2Builtin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector2Builtin pCVar1;
		float maxLength;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				maxLength = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				pCVar1 = CustomLogicVector2Builtin.ClampMagnitude(pCVar1, maxLength);
				return (object)pCVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Distance>b__17_0: 6 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Distance_b__17_0(CustomLogicVector2Builtin __c, Object[] __a)
	{
		Vector2 UVar1;
		Vector2 UVar2;
		uint uVar3;
		CustomLogicVector2Builtin pCVar4;
		CustomLogicVector2Builtin pCVar5;
		object pIVar6;
		float fVar7;
		float fVar8;
		uint uVar9;
		uint uVar10;
		float fVar11;
		float fVar12;
		uint uVar13;
		uint uVar14;
		float fStack_3c;
		Vector2 UStack_38;
		ulong uStack_30;
		Vector2 UStack_28;
		ulong uStack_20;

		if (__a == null) {
	label_059de7a3: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar6 = __a[0];
			pCVar4 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(pIVar6);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar5 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(__a[1]);
				if ((pCVar4 != null) &&(pCVar5 != null)) {
					UVar1 = pCVar4._value;
					fVar11 = UVar1.x;
					fVar12 = UVar1.y;
					uVar13 = 0;
					uVar14 = 0;
					UVar2 = pCVar5._value;
					fVar7 = UVar2.x;
					fVar8 = UVar2.y;
					uVar9 = 0;
					uVar10 = 0;
					if (Il2CppMethodInitialized_0753e72f == false) {
						uStack_20 = 0;
						uStack_30 = 0;
						UStack_38 = UVar2;
						UStack_28 = UVar1;
						Il2CppMethodInitialized_0753e72f = true;
						uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						fVar7 = UStack_38.x;
						fVar8 = UStack_38.y;
						uVar9 = (undefined4)uStack_30;
						uVar10 = uStack_30._4_4_;
						fVar11 = UStack_28.x;
						fVar12 = UStack_28.y;
						uVar13 = (undefined4)uStack_20;
						uVar14 = uStack_20._4_4_;
					}
					else {
						uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar3 == 0) {
						UStack_28.y = fVar12;
						UStack_28.x = fVar11;
						uStack_20 = CONCAT44(uVar14, uVar13);
						UStack_38.y = fVar8;
						UStack_38.x = fVar7;
						uStack_30 = CONCAT44(uVar10, uVar9);
						fVar7 = UStack_38.x;
						fVar8 = UStack_38.y;
						fVar11 = UStack_28.x;
						fVar12 = UStack_28.y;
					}
					fStack_3c = (fVar12 - fVar8) * (fVar12 - fVar8) + (fVar11 - fVar7) * (fVar11 - fVar7);
					if (fStack_3c < 0.0) {
						fStack_3c = sqrtf(fStack_3c);
					}
					else {
						fStack_3c = SQRT(fStack_3c);
					}
					pIVar6 = (object)fStack_3c;
					return pIVar6;
				}
				goto label_059de7a3;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Dot>b__18_0: clean
	private object Bindings_c____CreateMethodBinding__Dot_b__18_0(CustomLogicVector2Builtin __c, Object[] __a)
	{
		Vector2 UVar1;
		Vector2 UVar2;
		CustomLogicVector2Builtin pCVar3;
		CustomLogicVector2Builtin pCVar4;
		object pIVar5;
		float fStack_1c;

		if (__a == null) {
	label_059de885: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar5 = __a[0];
			pCVar3 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(pIVar5);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar4 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(__a[1]);
				if ((pCVar3 != null) &&(pCVar4 != null)) {
					UVar1 = pCVar3._value;
					UVar2 = pCVar4._value;
					fStack_1c = UVar2.y * UVar1.y + UVar2.x * UVar1.x;
					pIVar5 = (object)fStack_1c;
					return pIVar5;
				}
				goto label_059de885;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__19_0: clean
	private object Bindings_c____CreateMethodBinding__Lerp_b__19_0(CustomLogicVector2Builtin __c, Object[] __a)
	{
		Vector2 UVar1;
		Vector2 UVar2;
		object obj;
		CustomLogicVector2Builtin pCVar3;
		CustomLogicVector2Builtin pCVar4;
		float fVar5;
		float fVar6;
		float fStack_38;
		float fStack_34;
		float fStack_28;
		float fStack_24;

		if (__a == null) {
	label_059dea34: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar3 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar4 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					fVar5 = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if (pCVar3 != null) {
						if (pCVar4 != null) {
							UVar1 = pCVar3._value;
							UVar2 = pCVar4._value;
							fVar6 = 1.0;
							if (fVar5 <= 1.0) {
								fVar6 = fVar5;
							}
							fVar6 = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar6);
							fStack_28 = UVar1.x;
							fStack_24 = UVar1.y;
							fStack_38 = UVar2.x;
							fStack_34 = UVar2.y;
							pCVar3 = new CustomLogicVector2Builtin();
							UVar1.y = fVar6 * (fStack_34 - fStack_24) + fStack_24;
							UVar1.x = fVar6 * (fStack_38 - fStack_28) + fStack_28;
							pCVar3._value = UVar1;
							return (object)pCVar3;
						}
					}
					goto label_059dea34;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__LerpUnclamped>b__20_0: clean
	private object Bindings_c____CreateMethodBinding__LerpUnclamped_b__20_0(CustomLogicVector2Builtin __c, Object[] __a)
	{
		Vector2 UVar1;
		Vector2 UVar2;
		object obj;
		CustomLogicVector2Builtin pCVar3;
		CustomLogicVector2Builtin pCVar4;
		float fVar5;
		float fStack_38;
		float fStack_34;
		float fStack_28;
		float fStack_24;

		if (__a == null) {
	label_059debcd: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar3 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar4 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					fVar5 = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if ((pCVar3 != null) &&(pCVar4 != null)) {
						UVar1 = pCVar3._value;
						UVar2 = pCVar4._value;
						fStack_28 = UVar1.x;
						fStack_24 = UVar1.y;
						fStack_38 = UVar2.x;
						fStack_34 = UVar2.y;
						pCVar3 = new CustomLogicVector2Builtin();
						UVar1.y = fVar5 * (fStack_34 - fStack_24) + fStack_24;
						UVar1.x = fVar5 * (fStack_38 - fStack_28) + fStack_28;
						pCVar3._value = UVar1;
						return (object)pCVar3;
					}
					goto label_059debcd;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Max>b__21_0: 8 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Max_b__21_0(CustomLogicVector2Builtin __c, Object[] __a)
	{
		Vector2 UVar1;
		object obj;
		CustomLogicVector2Builtin pCVar2;
		CustomLogicVector2Builtin pCVar3;
		byte[] auVar4 = new byte[16];
		byte[] auStack_38 = new byte[16];

		if (__a == null) {
	label_059ded25: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar3 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(__a[1]);
				if ((pCVar2 != null) &&(pCVar3 != null)) {
					auStack_38._8_8_ = 0;
					auStack_38._0_8_ = pCVar2._value;
					UVar1 = pCVar3._value;
					auVar4._8_8_ = 0;
					auVar4._0_8_ = UVar1;
					auVar4 = maxps(auStack_38, auVar4);
					pCVar2 = new CustomLogicVector2Builtin();
					auStack_38._0_8_ = auVar4._0_8_;
					pCVar2._value = (Vector2)auStack_38._0_8_;
					return (object)pCVar2;
				}
				goto label_059ded25;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Min>b__22_0: 8 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Min_b__22_0(CustomLogicVector2Builtin __c, Object[] __a)
	{
		Vector2 UVar1;
		object obj;
		CustomLogicVector2Builtin pCVar2;
		CustomLogicVector2Builtin pCVar3;
		byte[] auVar4 = new byte[16];
		byte[] auStack_38 = new byte[16];

		if (__a == null) {
	label_059dee75: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar3 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(__a[1]);
				if ((pCVar2 != null) &&(pCVar3 != null)) {
					auStack_38._8_8_ = 0;
					auStack_38._0_8_ = pCVar2._value;
					UVar1 = pCVar3._value;
					auVar4._8_8_ = 0;
					auVar4._0_8_ = UVar1;
					auVar4 = minps(auStack_38, auVar4);
					pCVar2 = new CustomLogicVector2Builtin();
					auStack_38._0_8_ = auVar4._0_8_;
					pCVar2._value = (Vector2)auStack_38._0_8_;
					return (object)pCVar2;
				}
				goto label_059dee75;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__MoveTowards>b__23_0: clean
	private object Bindings_c____CreateMethodBinding__MoveTowards_b__23_0(CustomLogicVector2Builtin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector2Builtin pCVar1;
		CustomLogicVector2Builtin target;
		float maxDistanceDelta;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				target = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					maxDistanceDelta = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					pCVar1 = CustomLogicVector2Builtin.MoveTowards(pCVar1, target, maxDistanceDelta);
					return (object)pCVar1;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Reflect>b__24_0: clean
	private object Bindings_c____CreateMethodBinding__Reflect_b__24_0(CustomLogicVector2Builtin __c, Object[] __a)
	{
		Vector2 UVar1;
		Vector2 UVar2;
		object obj;
		CustomLogicVector2Builtin pCVar3;
		CustomLogicVector2Builtin pCVar4;
		float fVar5;
		Vector2 UStack_38;
		float fStack_28;
		float fStack_24;

		if (__a == null) {
	label_059df0b7: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar3 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar4 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(__a[1]);
				if ((pCVar3 != null) &&(pCVar4 != null)) {
					UVar1 = pCVar3._value;
					UVar2 = pCVar4._value;
					UStack_38.x = UVar1.x;
					UStack_38.y = UVar1.y;
					fStack_28 = UVar2.x;
					fStack_24 = UVar2.y;
					fVar5 = (UStack_38.y * fStack_24 + UStack_38.x * fStack_28) * -2.0;
					UStack_38.y = fVar5 * fStack_24 + UStack_38.y;
					UStack_38.x = fVar5 * fStack_28 + UStack_38.x;
					pCVar3 = new CustomLogicVector2Builtin();
					pCVar3._value = UStack_38;
					return (object)pCVar3;
				}
				goto label_059df0b7;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__SignedAngle>b__25_0: clean
	private object Bindings_c____CreateMethodBinding__SignedAngle_b__25_0(CustomLogicVector2Builtin __c, Object[] __a)
	{
		CustomLogicVector2Builtin from;
		CustomLogicVector2Builtin to;
		object pIVar1;
		float fStack_1c;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			from = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				to = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(__a[1]);
				fStack_1c = CustomLogicVector2Builtin.SignedAngle(from, to);
				pIVar1 = (object)fStack_1c;
				return pIVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__SmoothDamp>b__26_0: clean
	private object Bindings_c____CreateMethodBinding__SmoothDamp_b__26_0(CustomLogicVector2Builtin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector2Builtin pCVar1;
		CustomLogicVector2Builtin target;
		CustomLogicVector2Builtin currentVelocity;
		float smoothTime;
		float maxSpeed;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				target = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					currentVelocity = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(__a[2]);
					if ((__a.Length & 0xfffffffc) != 0) {
						smoothTime = CustomLogicEvaluator.ConvertTo<float>(__a[3]);
						if (4 < (uint)__a.Length) {
							maxSpeed = CustomLogicEvaluator.ConvertTo<float>(__a[4]);
							pCVar1 = CustomLogicVector2Builtin.SmoothDamp(pCVar1, target, currentVelocity, smoothTime, maxSpeed);
							return (object)pCVar1;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Set>b__27_0: clean
	private object Bindings_c____CreateMethodBinding__Set_b__27_0(CustomLogicVector2Builtin __c, Object[] __a)
	{
		object obj;
		float fVar1;
		float fVar2;

		if (__a == null) {
	label_059df371: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			fVar1 = CustomLogicEvaluator.ConvertTo<float>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				fVar2 = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if (__c != null) {
					__c._value.x = fVar1;
					__c._value.y = fVar2;
					return null;
				}
				goto label_059df371;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Normalize>b__28_0: clean
	private object Bindings_c____CreateMethodBinding__Normalize_b__28_0(CustomLogicVector2Builtin __c, Object[] __a)
	{
		Vector2 UVar1;
		float fVar2;
		float fVar3;

		if (__c == null) {
			throw new NullReferenceException();
		}
		UVar1 = __c._value;
		fVar2 = UVar1.x;
		fVar3 = UVar1.y;
		fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
		if (fVar2 < 0.0) {
			fVar2 = sqrtf(fVar2);
		}
		else {
			fVar2 = SQRT(fVar2);
		}
		if (1e-05 < fVar2) {
			fVar3 = __c._value.y;
			__c._value.x = __c._value.x / fVar2;
			fVar3 = fVar3 / fVar2;
		}
		else {
			__c._value.x = 0.0;
			fVar3 = 0.0;
		}
		__c._value.y = fVar3;
		return null;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__29_0: clean
	private object Bindings_c____CreateMethodBinding____Copy___b__29_0(CustomLogicVector2Builtin __c, Object[] __a)
	{
		object pIVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Add__>b__30_0: clean
	private object Bindings_c____CreateMethodBinding____Add___b__30_0(CustomLogicVector2Builtin __c, Object[] __a)
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

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Sub__>b__31_0: clean
	private object Bindings_c____CreateMethodBinding____Sub___b__31_0(CustomLogicVector2Builtin __c, Object[] __a)
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

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Mul__>b__32_0: clean
	private object Bindings_c____CreateMethodBinding____Mul___b__32_0(CustomLogicVector2Builtin __c, Object[] __a)
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

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Div__>b__33_0: clean
	private object Bindings_c____CreateMethodBinding____Div___b__33_0(CustomLogicVector2Builtin __c, Object[] __a)
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

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__34_0: 9 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding____Eq___b__34_0(CustomLogicVector2Builtin __c, Object[] __a)
	{
		byte bVar1;
		int iVar2;
		object pIVar3;
		bool bVar4;
		ulong in_RAX;
		object pIVar5;
		float fVar6;
		float fVar7;
		ulong uStack_18;

		if (__a == null) {
	label_059df623: ;
			throw new NullReferenceException();
		}
		iVar2 = (int)__a.Length;
		if ((iVar2 == 0) || (iVar2 == 1)) {
			throw new IndexOutOfRangeException();
		}
		if (__c == null) goto label_059df623;
		pIVar5 = __a[0];
		pIVar3 = __a[1];
		uStack_18 = in_RAX;
		if (pIVar5 != null) {
			bVar1 = (typeof(CustomLogicVector2Builtin)._2).typeHierarchyDepth;
			if (bVar1 <= (pIVar5.klass._2).typeHierarchyDepth) {
				bVar4 = false;
				if ((pIVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicVector2Builtin)) {
					pIVar5 = null;
				}
				if ((pIVar3 == null) || (pIVar5 == null)) goto label_059df5d6;
				if ((bVar1 <= (pIVar3.klass._2).typeHierarchyDepth) &&((pIVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicVector2Builtin))) {
					fVar6 = SUB84(pIVar5[3].klass, 0) - SUB84(pIVar3[3].klass, 0);
					fVar7 = (float)((ulong)pIVar5[3].klass >> 0x20) - (float)((ulong)pIVar3[3].klass >> 0x20);
					bVar4 = fVar7 * fVar7 + fVar6 * fVar6 < 9.9999994e-11;
					goto label_059df5d6;
				}
			}
		}
		bVar4 = false;
	label_059df5d6: ;
		uStack_18 = CONCAT17(bVar4, (undefined7)uStack_18);
		pIVar5 = (object)(((long)&uStack_18 + 7));
		return pIVar5;
	}

	// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__35_0: clean
	private object Bindings_c____CreateMethodBinding____Hash___b__35_0(CustomLogicVector2Builtin __c, Object[] __a)
	{
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__c == null) {
			throw new NullReferenceException();
		}
		(__c._value).GetHashCode();
		(__c._value.y).GetHashCode();
		return pIVar1;
	}
}
