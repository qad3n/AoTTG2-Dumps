// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicTransformBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicTransformBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicTransformBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20004DB")]
[CompilerGenerated]
internal class CustomLogicTransformBuiltin : BuiltinClassInstance, ICustomLogicEquals
{
	[Token(Token = "0x20004DC")]
	public static class Factory
	{
		[Token(Token = "0x600262F")]
		[Address(RVA = "0x594B1F0", Offset = "0x594A1F0", VA = "0x594B1F0")]
		public static CustomLogicTransformBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTransformBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x20004DD")]
	public static class Bindings
	{
		[Token(Token = "0x4001799")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002630")]
		[Address(RVA = "0x594B280", Offset = "0x594A280", VA = "0x594B280")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicTransformBuiltin> pCVar3;
			CLMethodBinding<CustomLogicTransformBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x7bb199a5) {
				if (uVar2 < 0x41e389fe) {
					if (uVar2 < 0x1e9e9f86) {
						if (uVar2 < 0x3134bcf) {
							if (uVar2 == 0x232777f) {
								bVar1 = (name == "Rotation");
								if (bVar1) {
									pCVar3 = CustomLogicTransformBuiltin.Bindings.__CreatePropertyBinding__Rotation();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x3134bce) {
								bVar1 = (name == "LocalRotation");
								if (bVar1) {
									pCVar3 = CustomLogicTransformBuiltin.Bindings.__CreatePropertyBinding__LocalRotation();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0xfe07306) {
							bVar1 = (name == "Name");
							if (bVar1) {
								pCVar3 = CustomLogicTransformBuiltin.Bindings.__CreatePropertyBinding__Name();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1e9e9f85) {
							bVar1 = (name == "Right");
							if (bVar1) {
								pCVar3 = CustomLogicTransformBuiltin.Bindings.__CreatePropertyBinding__Right();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x28528e12) {
						if (uVar2 == 0x23315ddd) {
							bVar1 = (name == "IsPlayingAnimation");
							if (bVar1) {
								pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding__IsPlayingAnimation();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x28528e11) {
							bVar1 = (name == "Scale");
							if (bVar1) {
								pCVar3 = CustomLogicTransformBuiltin.Bindings.__CreatePropertyBinding__Scale();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x2ba6c2e2) {
						bVar1 = (name == "PlaySound");
						if (bVar1) {
							pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding__PlaySound();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x2fe74447) {
						bVar1 = (name == "QuaternionRotation");
						if (bVar1) {
							pCVar3 = CustomLogicTransformBuiltin.Bindings.__CreatePropertyBinding__QuaternionRotation();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x41e389fd) {
						bVar1 = (name == "Animation");
						if (bVar1) {
							pCVar3 = CustomLogicTransformBuiltin.Bindings.__CreatePropertyBinding__Animation();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x56fd69a4) {
					if (uVar2 < 0x492a3cd0) {
						if (uVar2 == 0x42f35940) {
							bVar1 = (name == "Up");
							if (bVar1) {
								pCVar3 = CustomLogicTransformBuiltin.Bindings.__CreatePropertyBinding__Up();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x492a3ccf) {
							bVar1 = (name == "GetAnimationLength");
							if (bVar1) {
								pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding__GetAnimationLength();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x4bb7478d) {
						bVar1 = (name == "SetActive");
						if (bVar1) {
							pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding__SetActive();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x51dceaf8) {
						bVar1 = (name == "GetColliders");
						if (bVar1) {
							pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding__GetColliders();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x56fd69a3) {
						bVar1 = (name == "TransformPoint");
						if (bVar1) {
							pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding__TransformPoint();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0x6a01cd57) {
					if (uVar2 == 0x5e2c4c73) {
						bVar1 = (name == "LookAt");
						if (bVar1) {
							pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding__LookAt();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x6a01cd56) {
						bVar1 = (name == "QuaternionLocalRotation");
						if (bVar1) {
							pCVar3 = CustomLogicTransformBuiltin.Bindings.__CreatePropertyBinding__QuaternionLocalRotation();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x70ec2621) {
					bVar1 = (name == "InverseTransformPoint");
					if (bVar1) {
						pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding__InverseTransformPoint();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x792a6491) {
					bVar1 = (name == "__Hash__");
					if (bVar1) {
						pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding____Hash__();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x7bb199a4) {
					bVar1 = (name == "AudioSource");
					if (bVar1) {
						pCVar3 = CustomLogicTransformBuiltin.Bindings.__CreatePropertyBinding__AudioSource();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xc28a9c8f) {
				if (uVar2 < 0xa18f595a) {
					if (uVar2 < 0x91efe6d8) {
						if (uVar2 == 0x91efe6d7) {
							bVar1 = (name == "__Eq__");
							if (bVar1) {
								pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding____Eq__();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x7ea95d1e) {
							bVar1 = (name == "GetTransforms");
							if (bVar1) {
								pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding__GetTransforms();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x958d00f4) {
						bVar1 = (name == "TransformDirection");
						if (bVar1) {
							pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding__TransformDirection();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xa18f5959) {
						bVar1 = (name == "GetTransform");
						if (bVar1) {
							pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding__GetTransform();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0xafdc1b97) {
					if (uVar2 == 0xaf82143b) {
						bVar1 = (name == "LocalPosition");
						if (bVar1) {
							pCVar3 = CustomLogicTransformBuiltin.Bindings.__CreatePropertyBinding__LocalPosition();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xafdc1b96) {
						bVar1 = (name == "Layer");
						if (bVar1) {
							pCVar3 = CustomLogicTransformBuiltin.Bindings.__CreatePropertyBinding__Layer();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xbfb982ba) {
					bVar1 = (name == "InverseTransformDirection");
					if (bVar1) {
						pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding__InverseTransformDirection();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xc156ee1d) {
					bVar1 = (name == "Parent");
					if (bVar1) {
						pCVar3 = CustomLogicTransformBuiltin.Bindings.__CreatePropertyBinding__Parent();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc28a9c8e) {
					bVar1 = (name == "MapObject");
					if (bVar1) {
						pCVar3 = CustomLogicTransformBuiltin.Bindings.__CreatePropertyBinding__MapObject();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xe27f342b) {
				if (uVar2 < 0xcb7df475) {
					if (uVar2 == 0xc7933b34) {
						bVar1 = (name == "Animator");
						if (bVar1) {
							pCVar3 = CustomLogicTransformBuiltin.Bindings.__CreatePropertyBinding__Animator();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xcb7df474) {
						bVar1 = (name == "StopSound");
						if (bVar1) {
							pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding__StopSound();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 == 0xd64c477b) {
					bVar1 = (name == "PlayAnimation");
					if (bVar1) {
						pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding__PlayAnimation();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xdabf4cff) {
					bVar1 = (name == "ToggleParticle");
					if (bVar1) {
						pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding__ToggleParticle();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xe27f342a) {
					bVar1 = (name == "Position");
					if (bVar1) {
						pCVar3 = CustomLogicTransformBuiltin.Bindings.__CreatePropertyBinding__Position();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xe50883bb) {
				if (uVar2 == 0xe34226bf) {
					bVar1 = (name == "RotateAround");
					if (bVar1) {
						pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding__RotateAround();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xe50883ba) {
					bVar1 = (name == "Forward");
					if (bVar1) {
						pCVar3 = CustomLogicTransformBuiltin.Bindings.__CreatePropertyBinding__Forward();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xec0a0a2a) {
				bVar1 = (name == "Rotate");
				if (bVar1) {
					pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding__Rotate();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xec7340b0) {
				bVar1 = (name == "Character");
				if (bVar1) {
					pCVar3 = CustomLogicTransformBuiltin.Bindings.__CreatePropertyBinding__Character();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf73c4ea6) {
				bVar1 = (name == "SetRenderersEnabled");
				if (bVar1) {
					pCVar4 = CustomLogicTransformBuiltin.Bindings.__CreateMethodBinding__SetRenderersEnabled();
					return (ICLMemberBinding)pCVar4;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTransformBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002631")]
		[Address(RVA = "0x594C0A0", Offset = "0x594B0A0", VA = "0x594C0A0")]
		public static CLPropertyBinding<CustomLogicTransformBuiltin> __CreatePropertyBinding__Position()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Position): 3 lines keep C-only constructs
			Func<CustomLogicTransformBuiltin, object> __this;
			Action<CustomLogicTransformBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTransformBuiltin> __this_01;

			__this = new Func<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_2);
			__this_00 = new Action<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_2);
			__this_01 = new CLPropertyBinding<CustomLogicTransformBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002632")]
		[Address(RVA = "0x594C180", Offset = "0x594B180", VA = "0x594C180")]
		public static CLPropertyBinding<CustomLogicTransformBuiltin> __CreatePropertyBinding__LocalPosition()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__LocalPosition): 3 lines keep C-only constructs
			Func<CustomLogicTransformBuiltin, object> __this;
			Action<CustomLogicTransformBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTransformBuiltin> __this_01;

			__this = new Func<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____get);
			__this_00 = new Action<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____set);
			__this_01 = new CLPropertyBinding<CustomLogicTransformBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002633")]
		[Address(RVA = "0x594C260", Offset = "0x594B260", VA = "0x594C260")]
		public static CLPropertyBinding<CustomLogicTransformBuiltin> __CreatePropertyBinding__Rotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Rotation): 3 lines keep C-only constructs
			Func<CustomLogicTransformBuiltin, object> __this;
			Action<CustomLogicTransformBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTransformBuiltin> __this_01;

			__this = new Func<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_4);
			__this_00 = new Action<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_4);
			__this_01 = new CLPropertyBinding<CustomLogicTransformBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002634")]
		[Address(RVA = "0x594C340", Offset = "0x594B340", VA = "0x594C340")]
		public static CLPropertyBinding<CustomLogicTransformBuiltin> __CreatePropertyBinding__LocalRotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__LocalRotation): 3 lines keep C-only constructs
			Func<CustomLogicTransformBuiltin, object> __this;
			Action<CustomLogicTransformBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTransformBuiltin> __this_01;

			__this = new Func<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____get);
			__this_00 = new Action<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____set);
			__this_01 = new CLPropertyBinding<CustomLogicTransformBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002635")]
		[Address(RVA = "0x594C420", Offset = "0x594B420", VA = "0x594C420")]
		public static CLPropertyBinding<CustomLogicTransformBuiltin> __CreatePropertyBinding__QuaternionRotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__QuaternionRotation): 3 lines keep C-only constructs
			Func<CustomLogicTransformBuiltin, object> __this;
			Action<CustomLogicTransformBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTransformBuiltin> __this_01;

			__this = new Func<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g);
			__this_00 = new Action<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_71c22b0);
			__this_01 = new CLPropertyBinding<CustomLogicTransformBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002636")]
		[Address(RVA = "0x594C500", Offset = "0x594B500", VA = "0x594C500")]
		public static CLPropertyBinding<CustomLogicTransformBuiltin> __CreatePropertyBinding__QuaternionLocalRotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__QuaternionLocalRotation): 3 lines keep C-only constructs
			Func<CustomLogicTransformBuiltin, object> __this;
			Action<CustomLogicTransformBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTransformBuiltin> __this_01;

			__this = new Func<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio);
			__this_00 = new Action<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio_71c22a0);
			__this_01 = new CLPropertyBinding<CustomLogicTransformBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002637")]
		[Address(RVA = "0x594C5E0", Offset = "0x594B5E0", VA = "0x594C5E0")]
		public static CLPropertyBinding<CustomLogicTransformBuiltin> __CreatePropertyBinding__Scale()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Scale): 3 lines keep C-only constructs
			Func<CustomLogicTransformBuiltin, object> __this;
			Action<CustomLogicTransformBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTransformBuiltin> __this_01;

			__this = new Func<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Scale_g____getter_8_0);
			__this_00 = new Action<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Scale_g____setter_8_1);
			__this_01 = new CLPropertyBinding<CustomLogicTransformBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002638")]
		[Address(RVA = "0x594C6C0", Offset = "0x594B6C0", VA = "0x594C6C0")]
		public static CLPropertyBinding<CustomLogicTransformBuiltin> __CreatePropertyBinding__Forward()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Forward): 3 lines keep C-only constructs
			Func<CustomLogicTransformBuiltin, object> __this;
			Action<CustomLogicTransformBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTransformBuiltin> __this_01;

			__this = new Func<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_9);
			__this_00 = new Action<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_9);
			__this_01 = new CLPropertyBinding<CustomLogicTransformBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002639")]
		[Address(RVA = "0x594C7A0", Offset = "0x594B7A0", VA = "0x594C7A0")]
		public static CLPropertyBinding<CustomLogicTransformBuiltin> __CreatePropertyBinding__Up()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Up): 3 lines keep C-only constructs
			Func<CustomLogicTransformBuiltin, object> __this;
			Action<CustomLogicTransformBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTransformBuiltin> __this_01;

			__this = new Func<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_10_0);
			__this_00 = new Action<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_10_1);
			__this_01 = new CLPropertyBinding<CustomLogicTransformBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600263A")]
		[Address(RVA = "0x594C880", Offset = "0x594B880", VA = "0x594C880")]
		public static CLPropertyBinding<CustomLogicTransformBuiltin> __CreatePropertyBinding__Right()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Right): 3 lines keep C-only constructs
			Func<CustomLogicTransformBuiltin, object> __this;
			Action<CustomLogicTransformBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTransformBuiltin> __this_01;

			__this = new Func<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_11_0);
			__this_00 = new Action<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_11_1);
			__this_01 = new CLPropertyBinding<CustomLogicTransformBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600263B")]
		[Address(RVA = "0x594C960", Offset = "0x594B960", VA = "0x594C960")]
		public static CLPropertyBinding<CustomLogicTransformBuiltin> __CreatePropertyBinding__Parent()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Parent): 3 lines keep C-only constructs
			Func<CustomLogicTransformBuiltin, object> __this;
			Action<CustomLogicTransformBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTransformBuiltin> __this_01;

			__this = new Func<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Parent_g____getter_12);
			__this_00 = new Action<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Parent_g____setter_12);
			__this_01 = new CLPropertyBinding<CustomLogicTransformBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600263C")]
		[Address(RVA = "0x594CA40", Offset = "0x594BA40", VA = "0x594CA40")]
		public static CLPropertyBinding<CustomLogicTransformBuiltin> __CreatePropertyBinding__Name()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Name): 2 lines keep C-only constructs
			Func<CustomLogicTransformBuiltin, object> __this;
			CLPropertyBinding<CustomLogicTransformBuiltin> __this_00;

			__this = new Func<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_13_0);
			__this_00 = new CLPropertyBinding<CustomLogicTransformBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600263D")]
		[Address(RVA = "0x594CAE0", Offset = "0x594BAE0", VA = "0x594CAE0")]
		public static CLPropertyBinding<CustomLogicTransformBuiltin> __CreatePropertyBinding__Layer()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Layer): 3 lines keep C-only constructs
			Func<CustomLogicTransformBuiltin, object> __this;
			Action<CustomLogicTransformBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTransformBuiltin> __this_01;

			__this = new Func<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Layer_g____getter_14_0);
			__this_00 = new Action<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Layer_g____setter_14_1);
			__this_01 = new CLPropertyBinding<CustomLogicTransformBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600263E")]
		[Address(RVA = "0x594CBC0", Offset = "0x594BBC0", VA = "0x594CBC0")]
		public static CLPropertyBinding<CustomLogicTransformBuiltin> __CreatePropertyBinding__Character()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Character): 2 lines keep C-only constructs
			Func<CustomLogicTransformBuiltin, object> __this;
			CLPropertyBinding<CustomLogicTransformBuiltin> __this_00;

			__this = new Func<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Character_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTransformBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600263F")]
		[Address(RVA = "0x594CC60", Offset = "0x594BC60", VA = "0x594CC60")]
		public static CLPropertyBinding<CustomLogicTransformBuiltin> __CreatePropertyBinding__MapObject()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__MapObject): 2 lines keep C-only constructs
			Func<CustomLogicTransformBuiltin, object> __this;
			CLPropertyBinding<CustomLogicTransformBuiltin> __this_00;

			__this = new Func<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__MapObject_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTransformBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002640")]
		[Address(RVA = "0x594CD00", Offset = "0x594BD00", VA = "0x594CD00")]
		public static CLPropertyBinding<CustomLogicTransformBuiltin> __CreatePropertyBinding__Animation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Animation): 2 lines keep C-only constructs
			Func<CustomLogicTransformBuiltin, object> __this;
			CLPropertyBinding<CustomLogicTransformBuiltin> __this_00;

			__this = new Func<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Animation_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTransformBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002641")]
		[Address(RVA = "0x594CDA0", Offset = "0x594BDA0", VA = "0x594CDA0")]
		public static CLPropertyBinding<CustomLogicTransformBuiltin> __CreatePropertyBinding__Animator()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Animator): 2 lines keep C-only constructs
			Func<CustomLogicTransformBuiltin, object> __this;
			CLPropertyBinding<CustomLogicTransformBuiltin> __this_00;

			__this = new Func<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Animator_g____getter_1);
			__this_00 = new CLPropertyBinding<CustomLogicTransformBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002642")]
		[Address(RVA = "0x594CE40", Offset = "0x594BE40", VA = "0x594CE40")]
		public static CLPropertyBinding<CustomLogicTransformBuiltin> __CreatePropertyBinding__AudioSource()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__AudioSource): 2 lines keep C-only constructs
			Func<CustomLogicTransformBuiltin, object> __this;
			CLPropertyBinding<CustomLogicTransformBuiltin> __this_00;

			__this = new Func<CustomLogicTransformBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__AudioSource_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicTransformBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002643")]
		[Address(RVA = "0x594CEE0", Offset = "0x594BEE0", VA = "0x594CEE0")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding__GetTransform()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__GetTransform): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754621c == false) {
				Il2CppMethodInitialized_0754621c = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__20_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__20_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetTransform_b__20_0);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__20_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002644")]
		[Address(RVA = "0x594D020", Offset = "0x594C020", VA = "0x594D020")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding__GetTransforms()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__GetTransforms): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754621d == false) {
				Il2CppMethodInitialized_0754621d = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__21_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__21_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetTransforms_b__21_0);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__21_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002645")]
		[Address(RVA = "0x594D160", Offset = "0x594C160", VA = "0x594D160")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding__IsPlayingAnimation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__IsPlayingAnimation): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754621e == false) {
				Il2CppMethodInitialized_0754621e = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__22_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__22_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__IsPlayingAnimation_b);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__22_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002646")]
		[Address(RVA = "0x594D2A0", Offset = "0x594C2A0", VA = "0x594D2A0")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding__PlayAnimation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__PlayAnimation): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754621f == false) {
				Il2CppMethodInitialized_0754621f = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__23_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__23_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__23_0);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__23_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002647")]
		[Address(RVA = "0x594D3E0", Offset = "0x594C3E0", VA = "0x594D3E0")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding__GetAnimationLength()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__GetAnimationLength): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546220 == false) {
				Il2CppMethodInitialized_07546220 = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__24_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__24_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__24_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002648")]
		[Address(RVA = "0x594D520", Offset = "0x594C520", VA = "0x594D520")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding__PlaySound()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__PlaySound): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546221 == false) {
				Il2CppMethodInitialized_07546221 = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__25_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__25_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__PlaySound_b__25_0);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__25_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002649")]
		[Address(RVA = "0x594D660", Offset = "0x594C660", VA = "0x594D660")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding__StopSound()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__StopSound): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546222 == false) {
				Il2CppMethodInitialized_07546222 = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__26_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__26_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__StopSound_b__26_0);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__26_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600264A")]
		[Address(RVA = "0x594D7A0", Offset = "0x594C7A0", VA = "0x594D7A0")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding__ToggleParticle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__ToggleParticle): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546223 == false) {
				Il2CppMethodInitialized_07546223 = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__27_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__27_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__ToggleParticle_b__27_0);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__27_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600264B")]
		[Address(RVA = "0x594D8E0", Offset = "0x594C8E0", VA = "0x594D8E0")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding__InverseTransformDirection()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__InverseTransformDirection): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546224 == false) {
				Il2CppMethodInitialized_07546224 = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__28_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__28_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__InverseTransformDirect);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__28_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600264C")]
		[Address(RVA = "0x594DA20", Offset = "0x594CA20", VA = "0x594DA20")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding__InverseTransformPoint()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__InverseTransformPoint): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546225 == false) {
				Il2CppMethodInitialized_07546225 = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__29_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__29_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__InverseTransformPoint);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__29_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600264D")]
		[Address(RVA = "0x594DB60", Offset = "0x594CB60", VA = "0x594DB60")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding__TransformDirection()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__TransformDirection): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546226 == false) {
				Il2CppMethodInitialized_07546226 = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__30_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__30_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__TransformDirection_b);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__30_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600264E")]
		[Address(RVA = "0x594DCA0", Offset = "0x594CCA0", VA = "0x594DCA0")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding__TransformPoint()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__TransformPoint): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546227 == false) {
				Il2CppMethodInitialized_07546227 = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__31_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__31_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__TransformPoint_b__31_0);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__31_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600264F")]
		[Address(RVA = "0x594DDE0", Offset = "0x594CDE0", VA = "0x594DDE0")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding__Rotate()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__Rotate): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546228 == false) {
				Il2CppMethodInitialized_07546228 = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__32_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__32_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__Rotate_b__32_0);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__32_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002650")]
		[Address(RVA = "0x594DF20", Offset = "0x594CF20", VA = "0x594DF20")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding__RotateAround()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__RotateAround): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546229 == false) {
				Il2CppMethodInitialized_07546229 = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__33_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__33_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__RotateAround_b__33_0);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__33_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002651")]
		[Address(RVA = "0x594E060", Offset = "0x594D060", VA = "0x594E060")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding__LookAt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__LookAt): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754622a == false) {
				Il2CppMethodInitialized_0754622a = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__34_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__34_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__34_0);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__34_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002652")]
		[Address(RVA = "0x594E1A0", Offset = "0x594D1A0", VA = "0x594E1A0")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding__SetRenderersEnabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__SetRenderersEnabled): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754622b == false) {
				Il2CppMethodInitialized_0754622b = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__35_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__35_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__SetRenderersEnabled_b);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__35_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002653")]
		[Address(RVA = "0x594E2E0", Offset = "0x594D2E0", VA = "0x594E2E0")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding__GetColliders()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__GetColliders): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754622c == false) {
				Il2CppMethodInitialized_0754622c = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__36_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__36_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetColliders_b__36_0);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__36_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002654")]
		[Address(RVA = "0x594E420", Offset = "0x594D420", VA = "0x594E420")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding__SetActive()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__SetActive): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754622d == false) {
				Il2CppMethodInitialized_0754622d = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__37_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__37_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__SetActive_b__37_0);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__37_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002655")]
		[Address(RVA = "0x594E560", Offset = "0x594D560", VA = "0x594E560")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding____Eq__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding____Eq__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754622e == false) {
				Il2CppMethodInitialized_0754622e = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__38_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__38_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding____Eq___b__38_0);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__38_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002656")]
		[Address(RVA = "0x594E6A0", Offset = "0x594D6A0", VA = "0x594E6A0")]
		public static CLMethodBinding<CustomLogicTransformBuiltin> __CreateMethodBinding____Hash__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding____Hash__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTransformBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTransformBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754622f == false) {
				Il2CppMethodInitialized_0754622f = true;
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTransformBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__39_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTransformBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__39_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTransformBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTransformBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding____Hash___b__39_0);
				pCVar2 = typeof(CustomLogicTransformBuiltin.Bindings.c).static_fields;
				pCVar2.__9__39_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTransformBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x400178F")]
	[FieldOffset(Offset = "0x30")]
	public readonly Transform Value;

	[Token(Token = "0x4001790")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 _internalRotation;

	[Token(Token = "0x4001791")]
	[FieldOffset(Offset = "0x44")]
	private Vector3 _internalLocalRotation;

	[Token(Token = "0x4001792")]
	[FieldOffset(Offset = "0x50")]
	private bool _needSetRotation;

	[Token(Token = "0x4001793")]
	[FieldOffset(Offset = "0x51")]
	private bool _needSetLocalRotation;

	[Token(Token = "0x4001794")]
	[FieldOffset(Offset = "0x58")]
	private string _currentAnimation;

	[Token(Token = "0x4001795")]
	[FieldOffset(Offset = "0x60")]
	private readonly CustomLogicAnimationBuiltin _animation;

	[Token(Token = "0x4001796")]
	[FieldOffset(Offset = "0x68")]
	private readonly CustomLogicAnimatorBuiltin _animator;

	[Token(Token = "0x4001797")]
	[FieldOffset(Offset = "0x70")]
	private readonly CustomLogicAudioSourceBuiltin _audioSource;

	[Token(Token = "0x4001798")]
	[FieldOffset(Offset = "0x78")]
	private readonly ParticleSystem _particleSystem;

	[Token(Token = "0x170004C0")]
	public CustomLogicVector3Builtin Position
	{
		[Token(Token = "0x60025F7")]
		[Address(RVA = "0x5949B80", Offset = "0x5948B80", VA = "0x5949B80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_Position): clean
			Transform __this_00;
			CustomLogicVector3Builtin pCVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pCVar1;
		}
		[Token(Token = "0x60025F8")]
		[Address(RVA = "0x5949BA0", Offset = "0x5948BA0", VA = "0x5949BA0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$set_Position): clean
			Transform __this_00;

			if ((value == null) ||(__this_00 = this.Value, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.position = (Vector3)value.Value;
			return;
		}
	}

	[Token(Token = "0x170004C1")]
	public CustomLogicVector3Builtin LocalPosition
	{
		[Token(Token = "0x60025F9")]
		[Address(RVA = "0x5949BD0", Offset = "0x5948BD0", VA = "0x5949BD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_LocalPosition): clean
			Transform __this_00;
			CustomLogicVector3Builtin pCVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pCVar1;
		}
		[Token(Token = "0x60025FA")]
		[Address(RVA = "0x5949BF0", Offset = "0x5948BF0", VA = "0x5949BF0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$set_LocalPosition): clean
			Transform __this_00;

			if ((value == null) ||(__this_00 = this.Value, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.localPosition = (Vector3)value.Value;
			return;
		}
	}

	[Token(Token = "0x170004C2")]
	public CustomLogicVector3Builtin Rotation
	{
		[Token(Token = "0x60025FB")]
		[Address(RVA = "0x5949C20", Offset = "0x5948C20", VA = "0x5949C20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_Rotation): 1 lines keep C-only constructs
			float fVar1;
			float fVar2;
			Transform __this_00;
			CustomLogicVector3Builtin pCVar3;
			Vector3 UVar4;
			Vector3 euler;
			Quaternion local_18;

			local_18 = (Quaternion)ZEXT816(0);
			if (this._needSetRotation == false) {
				fVar1 = this._internalRotation.x;
				fVar2 = this._internalRotation.y;
				euler.z = this._internalRotation.z;
			}
			else {
				__this_00 = this.Value;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				local_18 = __this_00.rotation;
				UVar4 = Quaternion.Internal_ToEulerRad(ref local_18);
				euler.x = UVar4.x * 57.29578;
				euler.y = UVar4.y * 57.29578;
				euler.z = UVar4.z * 57.29578;
				UVar4 = Quaternion.Internal_MakePositive(euler);
				euler.z = UVar4.z;
				fVar1 = UVar4.x;
				fVar2 = UVar4.y;
				this._internalRotation.x = UVar4.x;
				this._internalRotation.y = UVar4.y;
				this._internalRotation.z = euler.z;
				this._needSetRotation = false;
			}
			UVar4.y = fVar2;
			UVar4.x = fVar1;
			UVar4.z = euler.z;
			return pCVar3;
		}
		[Token(Token = "0x60025FC")]
		[Address(RVA = "0x5949CA0", Offset = "0x5948CA0", VA = "0x5949CA0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$set_Rotation): clean
			uint uVar1;
			uint uVar2;
			float fVar3;
			Transform __this_00;
			float fVar4;
			Quaternion value_00;
			Vector3 local_18;

			if (value != null) {
				fVar3 = value.Value.z;
				fVar4 = value.Value.y;
				this._internalRotation.x = value.Value.x;
				this._internalRotation.y = fVar4;
				this._internalRotation.z = fVar3;
				this._needSetRotation = false;
				__this_00 = this.Value;
				uVar1 = this._internalRotation.x;
				uVar2 = this._internalRotation.y;
				local_18.x = (float)uVar1 * 0.017453292;
				local_18.y = (float)uVar2 * 0.017453292;
				local_18.z = this._internalRotation.z * 0.017453292;
				value_00 = Quaternion.Internal_FromEulerRad(ref local_18);
				if (__this_00 != null) {
					__this_00.rotation = value_00;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170004C3")]
	public CustomLogicVector3Builtin LocalRotation
	{
		[Token(Token = "0x60025FD")]
		[Address(RVA = "0x5949D10", Offset = "0x5948D10", VA = "0x5949D10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_LocalRotation): 1 lines keep C-only constructs
			float fVar1;
			float fVar2;
			Transform __this_00;
			CustomLogicVector3Builtin pCVar3;
			Vector3 UVar4;
			Vector3 euler;
			Quaternion local_18;

			local_18 = (Quaternion)ZEXT816(0);
			if (this._needSetLocalRotation == false) {
				fVar1 = this._internalLocalRotation.x;
				fVar2 = this._internalLocalRotation.y;
				euler.z = this._internalLocalRotation.z;
			}
			else {
				__this_00 = this.Value;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				local_18 = __this_00.localRotation;
				UVar4 = Quaternion.Internal_ToEulerRad(ref local_18);
				euler.x = UVar4.x * 57.29578;
				euler.y = UVar4.y * 57.29578;
				euler.z = UVar4.z * 57.29578;
				UVar4 = Quaternion.Internal_MakePositive(euler);
				euler.z = UVar4.z;
				fVar1 = UVar4.x;
				fVar2 = UVar4.y;
				this._internalLocalRotation.x = UVar4.x;
				this._internalLocalRotation.y = UVar4.y;
				this._internalLocalRotation.z = euler.z;
				this._needSetLocalRotation = false;
			}
			UVar4.y = fVar2;
			UVar4.x = fVar1;
			UVar4.z = euler.z;
			return pCVar3;
		}
		[Token(Token = "0x60025FE")]
		[Address(RVA = "0x5949D90", Offset = "0x5948D90", VA = "0x5949D90")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$set_LocalRotation): clean
			uint uVar1;
			uint uVar2;
			float fVar3;
			Transform __this_00;
			float fVar4;
			Quaternion value_00;
			Vector3 local_18;

			if (value != null) {
				fVar3 = value.Value.z;
				fVar4 = value.Value.y;
				this._internalLocalRotation.x = value.Value.x;
				this._internalLocalRotation.y = fVar4;
				this._internalLocalRotation.z = fVar3;
				this._needSetLocalRotation = false;
				__this_00 = this.Value;
				uVar1 = this._internalLocalRotation.x;
				uVar2 = this._internalLocalRotation.y;
				local_18.x = (float)uVar1 * 0.017453292;
				local_18.y = (float)uVar2 * 0.017453292;
				local_18.z = this._internalLocalRotation.z * 0.017453292;
				value_00 = Quaternion.Internal_FromEulerRad(ref local_18);
				if (__this_00 != null) {
					__this_00.localRotation = value_00;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170004C4")]
	public CustomLogicQuaternionBuiltin QuaternionRotation
	{
		[Token(Token = "0x60025FF")]
		[Address(RVA = "0x5949E00", Offset = "0x5948E00", VA = "0x5949E00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_QuaternionRotation): clean
			Transform __this_00;
			CustomLogicQuaternionBuiltin pCVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pCVar1;
		}
		[Token(Token = "0x6002600")]
		[Address(RVA = "0x5949E20", Offset = "0x5948E20", VA = "0x5949E20")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$set_QuaternionRotation): clean
			Transform __this_00;

			this._needSetRotation = true;
			this._needSetLocalRotation = true;
			if ((value == null) ||(__this_00 = this.Value, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.rotation = (Quaternion)value.Value;
			return;
		}
	}

	[Token(Token = "0x170004C5")]
	public CustomLogicQuaternionBuiltin QuaternionLocalRotation
	{
		[Token(Token = "0x6002601")]
		[Address(RVA = "0x5949E50", Offset = "0x5948E50", VA = "0x5949E50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_QuaternionLocalRotation): clean
			Transform __this_00;
			CustomLogicQuaternionBuiltin pCVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pCVar1;
		}
		[Token(Token = "0x6002602")]
		[Address(RVA = "0x5949E70", Offset = "0x5948E70", VA = "0x5949E70")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$set_QuaternionLocalRotation): clean
			Transform __this_00;

			this._needSetRotation = true;
			this._needSetLocalRotation = true;
			if ((value == null) ||(__this_00 = this.Value, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.localRotation = (Quaternion)value.Value;
			return;
		}
	}

	[Token(Token = "0x170004C6")]
	public CustomLogicVector3Builtin Scale
	{
		[Token(Token = "0x6002603")]
		[Address(RVA = "0x5949EA0", Offset = "0x5948EA0", VA = "0x5949EA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_Scale): clean
			Transform __this_00;
			CustomLogicVector3Builtin pCVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pCVar1;
		}
		[Token(Token = "0x6002604")]
		[Address(RVA = "0x5949EC0", Offset = "0x5948EC0", VA = "0x5949EC0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$set_Scale): clean
			Transform __this_00;

			if ((value == null) ||(__this_00 = this.Value, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.localScale = (Vector3)value.Value;
			return;
		}
	}

	[Token(Token = "0x170004C7")]
	public CustomLogicVector3Builtin Forward
	{
		[Token(Token = "0x6002605")]
		[Address(RVA = "0x5949EF0", Offset = "0x5948EF0", VA = "0x5949EF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_Forward): clean
			Transform __this_00;
			CustomLogicVector3Builtin pCVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pCVar1;
		}
		[Token(Token = "0x6002606")]
		[Address(RVA = "0x5949F10", Offset = "0x5948F10", VA = "0x5949F10")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$set_Forward): clean
			Transform __this_00;

			if ((value == null) ||(__this_00 = this.Value, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.forward = (Vector3)value.Value;
			return;
		}
	}

	[Token(Token = "0x170004C8")]
	public CustomLogicVector3Builtin Up
	{
		[Token(Token = "0x6002607")]
		[Address(RVA = "0x5949F40", Offset = "0x5948F40", VA = "0x5949F40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_Up): clean
			Transform __this_00;
			CustomLogicVector3Builtin pCVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pCVar1;
		}
		[Token(Token = "0x6002608")]
		[Address(RVA = "0x5949F60", Offset = "0x5948F60", VA = "0x5949F60")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$set_Up): clean
			Transform __this_00;

			if ((value == null) ||(__this_00 = this.Value, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.up = (Vector3)value.Value;
			return;
		}
	}

	[Token(Token = "0x170004C9")]
	public CustomLogicVector3Builtin Right
	{
		[Token(Token = "0x6002609")]
		[Address(RVA = "0x5949F90", Offset = "0x5948F90", VA = "0x5949F90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_Right): clean
			Transform __this_00;
			CustomLogicVector3Builtin pCVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pCVar1;
		}
		[Token(Token = "0x600260A")]
		[Address(RVA = "0x5949FB0", Offset = "0x5948FB0", VA = "0x5949FB0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$set_Right): clean
			Transform __this_00;

			if ((value == null) ||(__this_00 = this.Value, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.right = (Vector3)value.Value;
			return;
		}
	}

	[Token(Token = "0x170004CA")]
	public CustomLogicTransformBuiltin Parent
	{
		[Token(Token = "0x600260B")]
		[Address(RVA = "0x5949FE0", Offset = "0x5948FE0", VA = "0x5949FE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_Parent): clean
			bool bVar1;
			Transform pUVar2;
			CustomLogicTransformBuiltin __this_00;

			pUVar2 = this.Value;
			if (pUVar2 == null) {
		label_05a4a086: ;
				throw new NullReferenceException();
			}
			pUVar2 = pUVar2.parent;
			bVar1 = ((Object)pUVar2 != null);
			if (bVar1) {
				pUVar2 = this.Value;
				if (pUVar2 == null) goto label_05a4a086;
				pUVar2 = pUVar2.parent;
				__this_00 = new CustomLogicTransformBuiltin(pUVar2);
			}
			return __this_00;
		}
		[Token(Token = "0x600260C")]
		[Address(RVA = "0x594A090", Offset = "0x5949090", VA = "0x594A090")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$set_Parent): clean
			Transform __this_00;
			Transform p;

			__this_00 = this.Value;
			if (value == null) {
				if (__this_00 == null) goto label_05a4a0be;
				p = null;
			}
			else {
				if (__this_00 == null) {
		label_05a4a0be: ;
					throw new NullReferenceException();
				}
				p = value.Value;
			}
			__this_00.SetParent(p);
			this._needSetRotation = true;
			this._needSetLocalRotation = true;
			return;
		}
	}

	[Token(Token = "0x170004CB")]
	public string Name
	{
		[Token(Token = "0x600260D")]
		[Address(RVA = "0x594A0D0", Offset = "0x59490D0", VA = "0x594A0D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_Name): clean
			Transform __this_00;
			String pSVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pSVar1;
		}
	}

	[Token(Token = "0x170004CC")]
	public int Layer
	{
		[Token(Token = "0x600260E")]
		[Address(RVA = "0x594A0F0", Offset = "0x59490F0", VA = "0x594A0F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_Layer): clean
			Transform __this_00;
			int iVar1;
			GameObject __this_01;

			__this_00 = this.Value;
			if (__this_00 != null) {
				__this_01 = __this_00.gameObject;
				if (__this_01 != null) {
					return iVar1;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x600260F")]
		[Address(RVA = "0x594A120", Offset = "0x5949120", VA = "0x594A120")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$set_Layer): clean
			Transform __this_00;
			GameObject __this_01;

			__this_00 = this.Value;
			if (__this_00 != null) {
				__this_01 = __this_00.gameObject;
				if (__this_01 != null) {
					__this_01.layer = value;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170004CD")]
	public CustomLogicCharacterBuiltin Character
	{
		[Token(Token = "0x6002610")]
		[Address(RVA = "0x594A150", Offset = "0x5949150", VA = "0x594A150")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_Character): clean
			Transform pUVar1;
			bool bVar2;
			BaseCharacter character;
			CustomLogicCharacterBuiltin pCVar3;

			pUVar1 = this.Value;
			bVar2 = ((Object)pUVar1 != null);
			if (bVar2) {
				pUVar1 = this.Value;
				if (pUVar1 == null) {
					throw new NullReferenceException();
				}
				character = pUVar1.GetComponent<BaseCharacter>();
				return pCVar3;
			}
			return null;
		}
	}

	[Token(Token = "0x170004CE")]
	public CustomLogicMapObjectBuiltin MapObject
	{
		[Token(Token = "0x6002611")]
		[Address(RVA = "0x594A210", Offset = "0x5949210", VA = "0x594A210")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_MapObject): 1 lines keep C-only constructs
			Transform pUVar1;
			Dictionary<object, object> __this_00;
			CustomLogicEvaluator __this_01;
			bool bVar2;
			GameObject key;
			CustomLogicMapObjectBuiltin pCVar3;
			MapObject pMStack_20;

			pMStack_20 = null;
			pUVar1 = this.Value;
			bVar2 = ((Object)pUVar1 != null);
			if (!bVar2) {
				return null;
			}
			pUVar1 = this.Value;
			if (pUVar1 != null) {
				__this_00 = (Dictionary<object, object>)MapLoader.GoToMapObject;
				key = pUVar1.gameObject;
				if (__this_00 != null) {
					bVar2 = __this_00.TryGetValue((object)key, (object*)&pMStack_20);
					if (bVar2) {
						if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
							__this_01 = CustomLogicManager.Evaluator;
						}
						else {
							__this_01 = CustomLogicManager.Evaluator;
						}
						if (__this_01 != null) {
							return pCVar3;
						}
					}
					return null;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170004CF")]
	public CustomLogicAnimationBuiltin Animation
	{
		[Token(Token = "0x6002612")]
		[Address(RVA = "0x594A360", Offset = "0x5949360", VA = "0x594A360")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_Animation): clean
			return this._animation;
		}
	}

	[Token(Token = "0x170004D0")]
	public CustomLogicAnimatorBuiltin Animator
	{
		[Token(Token = "0x6002613")]
		[Address(RVA = "0x594A370", Offset = "0x5949370", VA = "0x594A370")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_Animator): clean
			return this._animator;
		}
	}

	[Token(Token = "0x170004D1")]
	public CustomLogicAudioSourceBuiltin AudioSource
	{
		[Token(Token = "0x6002614")]
		[Address(RVA = "0x594A380", Offset = "0x5949380", VA = "0x594A380")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_AudioSource): clean
			return this._audioSource;
		}
	}

	[Token(Token = "0x170004D2")]
	public override string ClassName
	{
		[Token(Token = "0x600262B")]
		[Address(RVA = "0x594B190", Offset = "0x594A190", VA = "0x594B190", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_ClassName): clean
			return "Transform";
		}
	}

	[Token(Token = "0x170004D3")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600262C")]
		[Address(RVA = "0x594B1C0", Offset = "0x594A1C0", VA = "0x594B1C0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170004D4")]
	public override bool IsStatic
	{
		[Token(Token = "0x600262D")]
		[Address(RVA = "0x594B1D0", Offset = "0x594A1D0", VA = "0x594B1D0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x170004D5")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600262E")]
		[Address(RVA = "0x594B1E0", Offset = "0x594A1E0", VA = "0x594B1E0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60025F6")]
	[Address(RVA = "0x5949960", Offset = "0x5948960", VA = "0x5949960")]
	public CustomLogicTransformBuiltin(Transform transform)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$.ctor): 10 lines keep C-only constructs
		Transform* targetAddress;
		Transform pUVar1;
		Animator animator;
		Animation animation;
		AudioSource audioSource;
		bool bVar2;
		ParticleSystem pUVar3;
		CustomLogicAudioSourceBuiltin __this_00;
		CustomLogicAnimationBuiltin __this_01;
		CustomLogicAnimatorBuiltin __this_02;
		CustomLogicAnimatorBuiltin* targetAddress_00;
		Animator local_38;
		Animation local_30;
		AudioSource local_28;

		local_28 = null;
		local_30 = null;
		local_38 = null;
		this._needSetRotation = true;
		this._needSetLocalRotation = true;
		base();
		targetAddress = &this.Value;
		this.Value = transform;
		pUVar1 = this.Value;
		if (pUVar1 != null) {
			pUVar3 = pUVar1.GetComponent<ParticleSystem>();
			this._particleSystem = pUVar3;
			pUVar1 = this.Value;
			if (pUVar1 != null) {
				bVar2 = pUVar1.TryGetComponent<AudioSource>((object*)&local_28);
				audioSource = local_28;
				if (bVar2) {
					__this_00 = new CustomLogicAudioSourceBuiltin((BuiltinClassInstance)this, audioSource);
					this._audioSource = __this_00;
				}
				if (*targetAddress != null) {
					bVar2 = (*targetAddress).TryGetComponent<Animation>((object*)&local_30);
					animation = local_30;
					if (bVar2) {
						__this_01 = new CustomLogicAnimationBuiltin((BuiltinClassInstance)this, animation);
						this._animation = __this_01;
						targetAddress_00 = (CustomLogicAnimatorBuiltin*)&this._animation;
					}
					else {
						if (*targetAddress == null) goto label_05a49b76;
						bVar2 = (*targetAddress).TryGetComponent<Animator>((object*)&local_38);
						animator = local_38;
						if (!bVar2) {
							return;
						}
						__this_02 = new CustomLogicAnimatorBuiltin((BuiltinClassInstance)this, animator);
						this._animator = __this_02;
						targetAddress_00 = &this._animator;
					}
					return;
				}
			}
		}
	label_05a49b76: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002615")]
	[Address(RVA = "0x594A390", Offset = "0x5949390", VA = "0x594A390")]
	public CustomLogicTransformBuiltin GetTransform(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$GetTransform): clean
		bool bVar1;
		Transform pUVar2;
		CustomLogicTransformBuiltin __this_00;

		pUVar2 = this.Value;
		if (pUVar2 == null) {
			throw new NullReferenceException();
		}
		pUVar2 = pUVar2.Find(name);
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			__this_00 = new CustomLogicTransformBuiltin(pUVar2);
		}
		return __this_00;
	}

	[Token(Token = "0x6002616")]
	[Address(RVA = "0x594A430", Offset = "0x5949430", VA = "0x594A430")]
	public CustomLogicListBuiltin GetTransforms()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$GetTransforms): 11 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		Il2CppClass pIVar4;
		Il2CppRuntimeInterfaceOffsetPair pIVar5;
		List<object> __this_00;
		Object[] pSVar6;
		sbyte cVar8;
		CustomLogicListBuiltin __this_01;
		object pIVar9;
		VirtualInvokeData pVVar10;
		Transform pUVar11;
		CustomLogicTransformBuiltin __this_02;
		ulong uVar12;
		long lVar13;
		object pIStack_58;
		object pIStack_50;
		byte puStack_40;
		object* ppIStack_38;

		pIStack_50 = null;
		__this_01 = new CustomLogicListBuiltin();
		pUVar11 = this.Value;
		if (pUVar11 == null) {
			throw new NullReferenceException();
		}
		pIVar9 = (object)pUVar11.GetEnumerator();
		puStack_40 = (byte)&pIStack_58;
		ppIStack_38 = &pIStack_50;
		do {
			pIStack_58 = pIVar9;
			if (pIVar9 == null) {
				throw new NullReferenceException();
			}
			pIVar4 = pIVar9.klass;
			uVar12 = (ulong)(pIVar4._2).interface_offsets_count;
			cVar8 = pIVar9.Dispose();
			pIVar9 = pIStack_58;
			if (cVar8 == false) {
				pIVar9 = (pIStack_58 as IDisposable);
				if (pIVar9 == null) {
					return __this_01;
				}
				pIVar4 = pIVar9.klass;
				uVar12 = (ulong)(pIVar4._2).interface_offsets_count;
				pIStack_50 = pIVar9;
				if (uVar12 == 0) goto label_05a4a73f;
				pIVar5 = (pIVar4._1).interfaceOffsets;
				lVar13 = 0;
				break;
			}
			if (pIStack_58 == null) {
				throw new NullReferenceException();
			}
			pIVar4 = pIStack_58.klass;
			uVar12 = (ulong)(pIVar4._2).interface_offsets_count;
			pUVar11 = (Transform)pIVar9.Dispose();
			if (pUVar11 != null) {
				bVar2 = (typeof(Transform)._2).typeHierarchyDepth;
				if (((pUVar11.klass._2).typeHierarchyDepth < bVar2) ||((pUVar11.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(Transform))) {
					throw new InvalidCastException();
				}
			}
			if (__this_01 == null) {
				throw new NullReferenceException();
			}
			__this_00 = __this_01.List;
			__this_02 = new CustomLogicTransformBuiltin(pUVar11);
			if (__this_00 == null) {
	label_05a4a77d: ;
				throw new NullReferenceException();
			}
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar6 = __this_00._items;
			if (pSVar6 == null) goto label_05a4a77d;
			uVar3 = __this_00._size;
			if (uVar3 < (uint)pSVar6.Length) {
				__this_00._size = uVar3 + 1;
				pSVar6[(int)uVar3] = (object)__this_02;
				pIVar9 = pIStack_58;
			}
			else {
				__this_00.AddWithResize((object)__this_02);
				pIVar9 = pIStack_58;
			}
		} while(true);
		while (true) {
			lVar13 = lVar13 + 0x10;
			if (!(uVar12 * 0x10 != lVar13)) break;
			if (*(IDisposable*)((long)&pIVar5.interfaceType + lVar13) == typeof(IDisposable)) {
				pVVar10 = pIVar4.vtable + *(int)((long)&pIVar5.offset + lVar13);
				goto label_05a4a75d;
			}
		}
	label_05a4a73f: ;
	label_05a4a75d: ;
		pIVar9.Dispose();
		return __this_01;
	}

	[Token(Token = "0x6002617")]
	[Address(RVA = "0x594A800", Offset = "0x5949800", VA = "0x594A800")]
	public bool IsPlayingAnimation(string anim)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$IsPlayingAnimation): clean
		CustomLogicAnimationBuiltin __this_00;
		bool bVar1;
		String b;

		__this_00 = this._animation;
		if (__this_00 != null) {
			return bVar1;
		}
		if (this._animator == null) {
			return false;
		}
		if (anim == null) {
			throw new NullReferenceException();
		}
		b = anim.Replace(0x2e, 0x5f);
		bVar1 = (this._currentAnimation == b);
		return bVar1;
	}

	[Token(Token = "0x6002618")]
	[Address(RVA = "0x594A850", Offset = "0x5949850", VA = "0x594A850")]
	public void PlayAnimation(string anim, float fade = 0.1f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$PlayAnimation): 2 lines keep C-only constructs
		CustomLogicAnimationBuiltin pCVar1;
		CustomLogicAnimatorBuiltin pCVar2;
		Animator __this_00;
		bool bVar3;
		String b;
		String* targetAddress;

		pCVar1 = this._animation;
		if (pCVar1 == null) {
			if (this._animator != null) {
				if (anim != null) {
					b = anim.Replace(0x2e, 0x5f);
					bVar3 = (this._currentAnimation != b);
					if (!bVar3) {
						return;
					}
					pCVar2 = this._animator;
					if ((pCVar2 != null) &&(__this_00 = pCVar2.Value, __this_00 != null)) {
						targetAddress = &this._currentAnimation;
						__this_00.CrossFade(b, fade);
						*targetAddress = b;
						return;
					}
				}
				goto label_05a4a919;
			}
		}
		else {
			bVar3 = pCVar1.IsPlaying(anim);
			if (!bVar3) {
				pCVar1 = this._animation;
				if (pCVar1 != null) {
					pCVar1.PlayAnimation(anim, fade, 0);
					return;
				}
	label_05a4a919: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6002619")]
	[Address(RVA = "0x594A920", Offset = "0x5949920", VA = "0x594A920")]
	public float GetAnimationLength(string anim)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$GetAnimationLength): clean
		CustomLogicAnimationBuiltin __this_00;
		CustomLogicAnimatorBuiltin __this_01;
		String anim_00;
		float fVar1;

		__this_00 = this._animation;
		if (__this_00 != null) {
			return fVar1;
		}
		__this_01 = this._animator;
		if (__this_01 == null) {
			return -1.0;
		}
		if (anim == null) {
			throw new NullReferenceException();
		}
		anim_00 = anim.Replace(0x2e, 0x5f);
		return fVar1;
	}

	[Token(Token = "0x600261A")]
	[Address(RVA = "0x594A980", Offset = "0x5949980", VA = "0x594A980")]
	public void PlaySound()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$PlaySound): clean
		CustomLogicAudioSourceBuiltin pCVar1;
		bool bVar2;

		pCVar1 = this._audioSource;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsPlaying;
			if (!bVar2) {
				pCVar1 = this._audioSource;
				if (pCVar1 == null) {
					throw new NullReferenceException();
				}
				pCVar1.Play();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600261B")]
	[Address(RVA = "0x594A9B0", Offset = "0x59499B0", VA = "0x594A9B0")]
	public void StopSound()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$StopSound): clean
		CustomLogicAudioSourceBuiltin pCVar1;
		bool bVar2;

		pCVar1 = this._audioSource;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsPlaying;
			if (bVar2) {
				pCVar1 = this._audioSource;
				if (pCVar1 == null) {
					throw new NullReferenceException();
				}
				pCVar1.Stop();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600261C")]
	[Address(RVA = "0x594A9E0", Offset = "0x59499E0", VA = "0x594A9E0")]
	public void ToggleParticle(bool enabled)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$ToggleParticle): clean
		ParticleSystem pUVar1;
		bool bVar2;
		ParticleSystem.EmissionModule local_18;

		pUVar1 = this._particleSystem;
		if (pUVar1 != null) {
			bVar2 = pUVar1.isPlaying;
			if (!bVar2) {
				pUVar1 = this._particleSystem;
				if (pUVar1 == null) goto label_05a4aa35;
				pUVar1.Play();
			}
			pUVar1 = this._particleSystem;
			if (pUVar1 != null) {
				local_18 = pUVar1.emission;
				local_18.enabled = enabled;
				return;
			}
		}
	label_05a4aa35: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600261D")]
	[Address(RVA = "0x594AA40", Offset = "0x5949A40", VA = "0x594AA40")]
	public CustomLogicVector3Builtin InverseTransformDirection(CustomLogicVector3Builtin direction)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$InverseTransformDirection): clean
		Transform __this_00;
		CustomLogicVector3Builtin pCVar1;

		if ((direction == null) ||(__this_00 = this.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		return pCVar1;
	}

	[Token(Token = "0x600261E")]
	[Address(RVA = "0x594AA70", Offset = "0x5949A70", VA = "0x594AA70")]
	public CustomLogicVector3Builtin InverseTransformPoint(CustomLogicVector3Builtin point)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$InverseTransformPoint): clean
		Transform __this_00;
		CustomLogicVector3Builtin pCVar1;

		if ((point == null) ||(__this_00 = this.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		return pCVar1;
	}

	[Token(Token = "0x600261F")]
	[Address(RVA = "0x594AAA0", Offset = "0x5949AA0", VA = "0x594AAA0")]
	public CustomLogicVector3Builtin TransformDirection(CustomLogicVector3Builtin direction)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$TransformDirection): clean
		Transform __this_00;
		CustomLogicVector3Builtin pCVar1;

		if ((direction == null) ||(__this_00 = this.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		return pCVar1;
	}

	[Token(Token = "0x6002620")]
	[Address(RVA = "0x594AAD0", Offset = "0x5949AD0", VA = "0x594AAD0")]
	public CustomLogicVector3Builtin TransformPoint(CustomLogicVector3Builtin point)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$TransformPoint): clean
		Transform __this_00;
		CustomLogicVector3Builtin pCVar1;

		if ((point == null) ||(__this_00 = this.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		return pCVar1;
	}

	[Token(Token = "0x6002621")]
	[Address(RVA = "0x594AB00", Offset = "0x5949B00", VA = "0x594AB00")]
	public void Rotate(CustomLogicVector3Builtin rotation)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$Rotate): clean
		Transform __this_00;

		if ((rotation == null) ||(__this_00 = this.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Rotate((Vector3)rotation.Value);
		this._needSetRotation = true;
		this._needSetLocalRotation = true;
		return;
	}

	[Token(Token = "0x6002622")]
	[Address(RVA = "0x594AB30", Offset = "0x5949B30", VA = "0x594AB30")]
	public void RotateAround(CustomLogicVector3Builtin point, CustomLogicVector3Builtin axis, float angle)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$RotateAround): clean
		Transform __this_00;

		this._needSetRotation = true;
		this._needSetLocalRotation = true;
		if (((point == null) ||(axis == null)) ||(__this_00 = this.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.RotateAround((Vector3)point.Value, (Vector3)axis.Value, angle);
		return;
	}

	[Token(Token = "0x6002623")]
	[Address(RVA = "0x594AB70", Offset = "0x5949B70", VA = "0x594AB70")]
	public void LookAt(CustomLogicVector3Builtin target)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$LookAt): clean
		Transform __this_00;

		this._needSetRotation = true;
		this._needSetLocalRotation = true;
		if ((target == null) ||(__this_00 = this.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.LookAt((Vector3)target.Value);
		return;
	}

	[Token(Token = "0x6002624")]
	[Address(RVA = "0x594ABA0", Offset = "0x5949BA0", VA = "0x594ABA0")]
	public void SetRenderersEnabled(bool enabled)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$SetRenderersEnabled): clean
		Transform __this_00;
		uint uVar1;
		Object[] pSVar2;
		uint uVar3;

		__this_00 = this.Value;
		if (__this_00 != null) {
			pSVar2 = __this_00.GetComponentsInChildren<Renderer>();
			if (pSVar2 != null) {
				uVar1 = (uint)pSVar2.Length;
				if (0 < (int)uVar1) {
					uVar3 = 0;
					do {
						if (uVar1 <= uVar3) {
							throw new IndexOutOfRangeException();
						}
						if ((Renderer)pSVar2[(int)uVar3] == null) goto label_05a4ac2e;
						(pSVar2[(int)uVar3]).enabled = enabled;
						uVar3 = uVar3 + 1;
						uVar1 = (uint)pSVar2.Length;
					} while ((int)uVar3 < (int)uVar1);
				}
				return;
			}
		}
	label_05a4ac2e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002625")]
	[Address(RVA = "0x594AC40", Offset = "0x5949C40", VA = "0x594AC40")]
	public CustomLogicListBuiltin GetColliders(bool recursive = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$GetColliders): 6 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Transform __this_00;
		List<object> pSVar3;
		int iVar5;
		CustomLogicListBuiltin __this_01;
		GameObject pUVar6;
		Object[] pSVar7;
		ulong uVar8;
		Object[] pSVar9;
		object pIVar10;
		CustomLogicColliderBuiltin pCVar11;
		object pIVar12;
		ulong uVar13;

		__this_01 = new CustomLogicListBuiltin();
		__this_00 = this.Value;
		if (recursive) {
			if (((__this_00 == null) ||(pUVar6 = __this_00.gameObject, pUVar6 == null)) ||(pSVar7 = pUVar6.GetComponentsInChildren<Collider>(), pSVar7 == null)) goto label_05a4afbf;
			iVar5 = (int)pSVar7.Length;
			if (__this_01 != null) {
				if (iVar5 < 1) {
					return __this_01;
				}
				uVar8 = pSVar7.Length & 0xffffffff;
				uVar13 = 0;
				while (uVar13 < uVar8) {
					pIVar12 = pSVar7[uVar13];
					pSVar3 = __this_01.List;
					pSVar9 = (Object[])new object[1];
					if (pSVar9 == null) goto label_05a4afbf;
					if ((pIVar12 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst(pIVar12, (((pSVar9.obj).klass)._1).element_class), pIVar10 == null)) {
	label_05a4afc9: ;
						pIVar12 = new ArrayTypeMismatchException();
						throw pIVar12;
					}
					if ((int)pSVar9.Length == 0) break;
					pSVar9[0] = pIVar12;
					pCVar11 = new CustomLogicColliderBuiltin(pSVar9);
					if (pSVar3 == null) goto label_05a4afbf;
					piVar1 = &pSVar3._version;
					*piVar1 = *piVar1 + 1;
					pSVar9 = pSVar3._items;
					if (pSVar9 == null) goto label_05a4afbf;
					uVar2 = pSVar3._size;
					if (uVar2 < (uint)pSVar9.Length) {
						pSVar3._size = uVar2 + 1;
						pSVar9[(int)uVar2] = (object)pCVar11;
					}
					else {
						pSVar3.AddWithResize((object)pCVar11);
					}
					uVar13 = uVar13 + 1;
					uVar2 = (uint)pSVar7.Length;
					uVar8 = (ulong)uVar2;
					if ((long)(int)uVar2 <= (long)uVar13) {
						return __this_01;
					}
				}
	label_05a4afc4: ;
				throw new IndexOutOfRangeException();
			}
		}
		else {
			if (((__this_00 == null) ||(pUVar6 = __this_00.gameObject, pUVar6 == null)) ||(pSVar7 = pUVar6.GetComponents<Collider>(), pSVar7 == null)) goto label_05a4afbf;
			iVar5 = (int)pSVar7.Length;
			if (__this_01 != null) {
				if (iVar5 < 1) {
					return __this_01;
				}
				uVar8 = pSVar7.Length & 0xffffffff;
				uVar13 = 0;
				while (uVar13 < uVar8) {
					pIVar12 = pSVar7[uVar13];
					pSVar3 = __this_01.List;
					pSVar9 = (Object[])new object[1];
					if (pSVar9 == null) goto label_05a4afbf;
					if ((pIVar12 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst(pIVar12, (((pSVar9.obj).klass)._1).element_class), pIVar10 == null)) goto label_05a4afc9;
					if ((int)pSVar9.Length == 0) break;
					pSVar9[0] = pIVar12;
					pCVar11 = new CustomLogicColliderBuiltin(pSVar9);
					if (pSVar3 == null) goto label_05a4afbf;
					piVar1 = &pSVar3._version;
					*piVar1 = *piVar1 + 1;
					pSVar9 = pSVar3._items;
					if (pSVar9 == null) goto label_05a4afbf;
					uVar2 = pSVar3._size;
					if (uVar2 < (uint)pSVar9.Length) {
						pSVar3._size = uVar2 + 1;
						pSVar9[(int)uVar2] = (object)pCVar11;
					}
					else {
						pSVar3.AddWithResize((object)pCVar11);
					}
					uVar13 = uVar13 + 1;
					uVar2 = (uint)pSVar7.Length;
					uVar8 = (ulong)uVar2;
					if ((long)(int)uVar2 <= (long)uVar13) {
						return __this_01;
					}
				}
				goto label_05a4afc4;
			}
		}
		if (iVar5 < 1) {
			return __this_01;
		}
	label_05a4afbf: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002626")]
	[Address(RVA = "0x594AFE0", Offset = "0x5949FE0", VA = "0x594AFE0")]
	public void SetActive(bool active)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$SetActive): clean
		Transform __this_00;
		GameObject __this_01;

		__this_00 = this.Value;
		if (__this_00 != null) {
			__this_01 = __this_00.gameObject;
			if (__this_01 != null) {
				__this_01.SetActive(active);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002627")]
	[Address(RVA = "0x593F200", Offset = "0x593E200", VA = "0x593F200")]
	public static implicit operator CustomLogicTransformBuiltin(Transform value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$op_Implicit): clean
		CustomLogicTransformBuiltin __this;

		__this = new CustomLogicTransformBuiltin(value);
		return __this;
	}

	[Token(Token = "0x6002628")]
	[Address(RVA = "0x594B010", Offset = "0x594A010", VA = "0x594B010")]
	public static implicit operator Transform(CustomLogicTransformBuiltin value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$op_Implicit): clean
		if (value == null) {
			throw new NullReferenceException();
		}
		return value.Value;
	}

	[Token(Token = "0x6002629")]
	[Address(RVA = "0x594B030", Offset = "0x594A030", VA = "0x594B030", Slot = "11")]
	public bool __Eq__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$__Eq__): 3 lines keep C-only constructs
		byte bVar1;
		Il2CppClass x;
		Il2CppClass y;
		bool bVar2;

		if (self == null) {
			if (other == null) {
				return true;
			}
		}
		else {
			bVar1 = (typeof(CustomLogicTransformBuiltin)._2).typeHierarchyDepth;
			if ((((bVar1 <= (self.klass._2).typeHierarchyDepth) && (other != null)) &&((self.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicTransformBuiltin))) &&((bVar1 <= (other.klass._2).typeHierarchyDepth &&((other.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicTransformBuiltin))))) {
				x = self[3].klass;
				y = other[3].klass;
				bVar2 = ((Object)x == (Object)y);
				return bVar2;
			}
		}
		return false;
	}

	[Token(Token = "0x600262A")]
	[Address(RVA = "0x594B100", Offset = "0x594A100", VA = "0x594B100", Slot = "12")]
	public int __Hash__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c (CustomLogic.CustomLogicTransformBuiltin$$__Hash__): clean
		Transform pUVar1;
		bool bVar2;
		int iVar3;

		pUVar1 = this.Value;
		bVar2 = ((Object)pUVar1 == null);
		if (bVar2) {
			return 0;
		}
		pUVar1 = this.Value;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		return iVar3;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicTransformBuiltin.c.

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Position");
		__this.Add((Il2CppObject *)"LocalPosition");
		__this.Add((Il2CppObject *)"Rotation");
		__this.Add((Il2CppObject *)"LocalRotation");
		__this.Add((Il2CppObject *)"QuaternionRotation");
		__this.Add((Il2CppObject *)"QuaternionLocalRotation");
		__this.Add((Il2CppObject *)"Scale");
		__this.Add((Il2CppObject *)"Forward");
		__this.Add((Il2CppObject *)"Up");
		__this.Add((Il2CppObject *)"Right");
		__this.Add((Il2CppObject *)"Parent");
		__this.Add((Il2CppObject *)"Name");
		__this.Add((Il2CppObject *)"Layer");
		__this.Add((Il2CppObject *)"Character");
		__this.Add((Il2CppObject *)"MapObject");
		__this.Add((Il2CppObject *)"Animation");
		__this.Add((Il2CppObject *)"Animator");
		__this.Add((Il2CppObject *)"AudioSource");
		__this.Add((Il2CppObject *)"GetTransform");
		__this.Add((Il2CppObject *)"GetTransforms");
		__this.Add((Il2CppObject *)"IsPlayingAnimation");
		__this.Add((Il2CppObject *)"PlayAnimation");
		__this.Add((Il2CppObject *)"GetAnimationLength");
		__this.Add((Il2CppObject *)"PlaySound");
		__this.Add((Il2CppObject *)"StopSound");
		__this.Add((Il2CppObject *)"ToggleParticle");
		__this.Add((Il2CppObject *)"InverseTransformDirection");
		__this.Add((Il2CppObject *)"InverseTransformPoint");
		__this.Add((Il2CppObject *)"TransformDirection");
		__this.Add((Il2CppObject *)"TransformPoint");
		__this.Add((Il2CppObject *)"Rotate");
		__this.Add((Il2CppObject *)"RotateAround");
		__this.Add((Il2CppObject *)"LookAt");
		__this.Add((Il2CppObject *)"SetRenderersEnabled");
		__this.Add((Il2CppObject *)"GetColliders");
		__this.Add((Il2CppObject *)"SetActive");
		__this.Add((Il2CppObject *)"__Eq__");
		__this.Add((Il2CppObject *)"__Hash__");
		CustomLogicTransformBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Position_g____getter_2_0(CustomLogicTransformBuiltin __i)
	{
		Transform __this;
		CustomLogicVector3Builtin pCVar1;
		Vector3 v;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		v = __this.position;
		pCVar1 = ((CustomLogicVector3Builtin)v);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__Position_g____setter_2_1(CustomLogicTransformBuiltin __i, object __v)
	{
		Transform __this;
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (((__i == null) ||(pCVar1 == null)) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.position = (Vector3)pCVar1.Value;
		return;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__LocalPosition>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__LocalPosition_g____getter_3_0(CustomLogicTransformBuiltin __i)
	{
		Transform __this;
		CustomLogicVector3Builtin pCVar1;
		Vector3 v;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		v = __this.localPosition;
		pCVar1 = ((CustomLogicVector3Builtin)v);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__LocalPosition>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__LocalPosition_g____setter_3_1(CustomLogicTransformBuiltin __i, object __v)
	{
		Transform __this;
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (((__i == null) ||(pCVar1 == null)) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.localPosition = (Vector3)pCVar1.Value;
		return;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|4_0: 1 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Rotation_g____getter_4_0(CustomLogicTransformBuiltin __i)
	{
		float fVar1;
		float fVar2;
		Transform __this;
		CustomLogicVector3Builtin pCVar3;
		Vector3 UVar4;
		Vector3 euler;
		Quaternion local_18;

		if (__i == null) {
	label_05a4ef77: ;
			throw new NullReferenceException();
		}
		local_18 = (Quaternion)ZEXT816(0);
		if (__i._needSetRotation == false) {
			fVar1 = __i._internalRotation.x;
			fVar2 = __i._internalRotation.y;
			euler.z = __i._internalRotation.z;
		}
		else {
			__this = __i.Value;
			if (__this == null) goto label_05a4ef77;
			local_18 = __this.rotation;
			UVar4 = Quaternion.Internal_ToEulerRad(ref local_18);
			euler.x = UVar4.x * 57.29578;
			euler.y = UVar4.y * 57.29578;
			euler.z = UVar4.z * 57.29578;
			UVar4 = Quaternion.Internal_MakePositive(euler);
			euler.z = UVar4.z;
			fVar1 = UVar4.x;
			fVar2 = UVar4.y;
			__i._internalRotation.x = UVar4.x;
			__i._internalRotation.y = UVar4.y;
			__i._internalRotation.z = euler.z;
			__i._needSetRotation = false;
		}
		UVar4.y = fVar2;
		UVar4.x = fVar1;
		UVar4.z = euler.z;
		pCVar3 = ((CustomLogicVector3Builtin)UVar4);
		return (object)pCVar3;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__Rotation_g____setter_4_1(CustomLogicTransformBuiltin __i, object __v)
	{
		uint uVar1;
		uint uVar2;
		float fVar3;
		Transform __this;
		float fVar4;
		CustomLogicVector3Builtin pCVar5;
		Quaternion value;
		Vector3 UStack_20;

		pCVar5 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if ((__i != null) &&(pCVar5 != null)) {
			fVar3 = pCVar5.Value.z;
			fVar4 = pCVar5.Value.y;
			__i._internalRotation.x = pCVar5.Value.x;
			__i._internalRotation.y = fVar4;
			__i._internalRotation.z = fVar3;
			__i._needSetRotation = false;
			__this = __i.Value;
			uVar1 = __i._internalRotation.x;
			uVar2 = __i._internalRotation.y;
			UStack_20.x = (float)uVar1 * 0.017453292;
			UStack_20.y = (float)uVar2 * 0.017453292;
			UStack_20.z = __i._internalRotation.z * 0.017453292;
			value = Quaternion.Internal_FromEulerRad(ref UStack_20);
			if (__this != null) {
				__this.rotation = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__LocalRotation>g____getter|5_0: 1 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__LocalRotation_g____getter_5_0(CustomLogicTransformBuiltin __i)
	{
		float fVar1;
		float fVar2;
		Transform __this;
		CustomLogicVector3Builtin pCVar3;
		Vector3 UVar4;
		Vector3 euler;
		Quaternion local_18;

		if (__i == null) {
	label_05a4f0c7: ;
			throw new NullReferenceException();
		}
		local_18 = (Quaternion)ZEXT816(0);
		if (__i._needSetLocalRotation == false) {
			fVar1 = __i._internalLocalRotation.x;
			fVar2 = __i._internalLocalRotation.y;
			euler.z = __i._internalLocalRotation.z;
		}
		else {
			__this = __i.Value;
			if (__this == null) goto label_05a4f0c7;
			local_18 = __this.localRotation;
			UVar4 = Quaternion.Internal_ToEulerRad(ref local_18);
			euler.x = UVar4.x * 57.29578;
			euler.y = UVar4.y * 57.29578;
			euler.z = UVar4.z * 57.29578;
			UVar4 = Quaternion.Internal_MakePositive(euler);
			euler.z = UVar4.z;
			fVar1 = UVar4.x;
			fVar2 = UVar4.y;
			__i._internalLocalRotation.x = UVar4.x;
			__i._internalLocalRotation.y = UVar4.y;
			__i._internalLocalRotation.z = euler.z;
			__i._needSetLocalRotation = false;
		}
		UVar4.y = fVar2;
		UVar4.x = fVar1;
		UVar4.z = euler.z;
		pCVar3 = ((CustomLogicVector3Builtin)UVar4);
		return (object)pCVar3;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__LocalRotation>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__LocalRotation_g____setter_5_1(CustomLogicTransformBuiltin __i, object __v)
	{
		uint uVar1;
		uint uVar2;
		float fVar3;
		Transform __this;
		float fVar4;
		CustomLogicVector3Builtin pCVar5;
		Quaternion value;
		Vector3 UStack_20;

		pCVar5 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if ((__i != null) &&(pCVar5 != null)) {
			fVar3 = pCVar5.Value.z;
			fVar4 = pCVar5.Value.y;
			__i._internalLocalRotation.x = pCVar5.Value.x;
			__i._internalLocalRotation.y = fVar4;
			__i._internalLocalRotation.z = fVar3;
			__i._needSetLocalRotation = false;
			__this = __i.Value;
			uVar1 = __i._internalLocalRotation.x;
			uVar2 = __i._internalLocalRotation.y;
			UStack_20.x = (float)uVar1 * 0.017453292;
			UStack_20.y = (float)uVar2 * 0.017453292;
			UStack_20.z = __i._internalLocalRotation.z * 0.017453292;
			value = Quaternion.Internal_FromEulerRad(ref UStack_20);
			if (__this != null) {
				__this.localRotation = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__QuaternionRotation_g____getter_6_0(CustomLogicTransformBuiltin __i)
	{
		Transform __this;
		CustomLogicQuaternionBuiltin pCVar1;
		Quaternion q;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		q = __this.rotation;
		pCVar1 = ((CustomLogicQuaternionBuiltin)q);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____setter|6_1: clean
	private static void Bindings____CreatePropertyBinding__QuaternionRotation_g____setter_6_1(CustomLogicTransformBuiltin __i, object __v)
	{
		Transform __this;
		CustomLogicQuaternionBuiltin pCVar1;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__v);
		if (((__i == null) ||(__i._needSetRotation = true, __i._needSetLocalRotation = true, pCVar1 == null)) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.rotation = (Quaternion)pCVar1.Value;
		return;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionLocalRotation>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__QuaternionLocalRotation_g____getter_7_0(CustomLogicTransformBuiltin __i)
	{
		Transform __this;
		CustomLogicQuaternionBuiltin pCVar1;
		Quaternion q;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		q = __this.localRotation;
		pCVar1 = ((CustomLogicQuaternionBuiltin)q);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionLocalRotation>g____setter|7_1: clean
	private static void Bindings____CreatePropertyBinding__QuaternionLocalRotation_g____setter_7_1(CustomLogicTransformBuiltin __i, object __v)
	{
		Transform __this;
		CustomLogicQuaternionBuiltin pCVar1;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__v);
		if (((__i == null) ||(__i._needSetRotation = true, __i._needSetLocalRotation = true, pCVar1 == null)) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.localRotation = (Quaternion)pCVar1.Value;
		return;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Scale_g____getter_8_0(CustomLogicTransformBuiltin __i)
	{
		Transform __this;
		CustomLogicVector3Builtin pCVar1;
		Vector3 v;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		v = __this.localScale;
		pCVar1 = ((CustomLogicVector3Builtin)v);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____setter|8_1: clean
	private static void Bindings____CreatePropertyBinding__Scale_g____setter_8_1(CustomLogicTransformBuiltin __i, object __v)
	{
		Transform __this;
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (((__i == null) ||(pCVar1 == null)) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.localScale = (Vector3)pCVar1.Value;
		return;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__Forward_g____getter_9_0(CustomLogicTransformBuiltin __i)
	{
		Transform __this;
		CustomLogicVector3Builtin pCVar1;
		Vector3 v;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		v = __this.forward;
		pCVar1 = ((CustomLogicVector3Builtin)v);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____setter|9_1: clean
	private static void Bindings____CreatePropertyBinding__Forward_g____setter_9_1(CustomLogicTransformBuiltin __i, object __v)
	{
		Transform __this;
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (((__i == null) ||(pCVar1 == null)) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.forward = (Vector3)pCVar1.Value;
		return;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__Up_g____getter_10_0(CustomLogicTransformBuiltin __i)
	{
		Transform __this;
		CustomLogicVector3Builtin pCVar1;
		Vector3 v;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		v = __this.up;
		pCVar1 = ((CustomLogicVector3Builtin)v);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____setter|10_1: clean
	private static void Bindings____CreatePropertyBinding__Up_g____setter_10_1(CustomLogicTransformBuiltin __i, object __v)
	{
		Transform __this;
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (((__i == null) ||(pCVar1 == null)) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.up = (Vector3)pCVar1.Value ;
		return;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__Right_g____getter_11_0(CustomLogicTransformBuiltin __i)
	{
		Transform __this;
		CustomLogicVector3Builtin pCVar1;
		Vector3 v;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		v = __this.right;
		pCVar1 = ((CustomLogicVector3Builtin)v);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____setter|11_1: clean
	private static void Bindings____CreatePropertyBinding__Right_g____setter_11_1(CustomLogicTransformBuiltin __i, object __v)
	{
		Transform __this;
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (((__i == null) ||(pCVar1 == null)) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.right = (Vector3)pCVar1.Value;
		return;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Parent>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__Parent_g____getter_12_0(CustomLogicTransformBuiltin __i)
	{
		CustomLogicTransformBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Parent;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Parent>g____setter|12_1: clean
	private static void Bindings____CreatePropertyBinding__Parent_g____setter_12_1(CustomLogicTransformBuiltin __i, object __v)
	{
		Transform __this;
		CustomLogicTransformBuiltin pCVar1;
		Transform p;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicTransformBuiltin>(__v);
		if (__i == null) {
	label_05a4f6e1: ;
			throw new NullReferenceException();
		}
		__this = __i.Value;
		if (pCVar1 == null) {
			if (__this == null) goto label_05a4f6e1;
			p = null;
		}
		else {
			if (__this == null) goto label_05a4f6e1;
			p = pCVar1.Value;
		}
		__this.SetParent(p);
		__i._needSetRotation = true;
		__i._needSetLocalRotation = true;
		return;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__Name_g____getter_13_0(CustomLogicTransformBuiltin __i)
	{
		Transform __this;
		String pSVar1;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		pSVar1 = __this.name;
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Layer>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__Layer_g____getter_14_0(CustomLogicTransformBuiltin __i)
	{
		Transform __this;
		GameObject __this_00;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i != null) &&(__this = __i.Value, __this != null)) {
			__this_00 = __this.gameObject;
			if (__this_00 != null) {
				__this_00.layer;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Layer>g____setter|14_1: clean
	private static void Bindings____CreatePropertyBinding__Layer_g____setter_14_1(CustomLogicTransformBuiltin __i, object __v)
	{
		Transform __this;
		int value;
		GameObject __this_00;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if ((__i != null) &&(__this = __i.Value, __this != null)) {
			__this_00 = __this.gameObject;
			if (__this_00 != null) {
				__this_00.layer = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Character>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__Character_g____getter_15_0(CustomLogicTransformBuiltin __i)
	{
		CustomLogicCharacterBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Character;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__MapObject>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__MapObject_g____getter_16_0(CustomLogicTransformBuiltin __i)
	{
		CustomLogicMapObjectBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.MapObject;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Animation>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__Animation_g____getter_17_0(CustomLogicTransformBuiltin __i)
	{
		if (__i == null) {
			throw new NullReferenceException();
		}
		return (object)__i._animation;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Animator>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__Animator_g____getter_18_0(CustomLogicTransformBuiltin __i)
	{
		if (__i == null) {
			throw new NullReferenceException();
		}
		return (object)__i._animator;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__AudioSource>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__AudioSource_g____getter_19_0(CustomLogicTransformBuiltin __i)
	{
		if (__i == null) {
			throw new NullReferenceException();
		}
		return (object)__i._audioSource;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicTransformBuiltin.Bindings.c();
		CustomLogicTransformBuiltin.Bindings.c.__9 =(CustomLogicTransformBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransform>b__20_0: clean
	private object Bindings_c____CreateMethodBinding__GetTransform_b__20_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		object obj;
		String name;
		CustomLogicTransformBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c != null) {
				pCVar1 = __c.GetTransform(name);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransforms>b__21_0: clean
	private object Bindings_c____CreateMethodBinding__GetTransforms_b__21_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		CustomLogicListBuiltin pCVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __c.GetTransforms();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlayingAnimation>b__22_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__IsPlayingAnimation_b__22_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		CustomLogicAnimationBuiltin __this_00;
		bool bVar1;
		ulong in_RAX;
		String pSVar2;
		object pIVar3;
		ulong uStack_18;

		uStack_18 = in_RAX;
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar3 = __a[0];
			pSVar2 = CustomLogicEvaluator.ConvertTo<string>(pIVar3);
			if (__c != null) {
				__this_00 = __c._animation;
				if (__this_00 == null) {
					if (__c._animator == null) {
						bVar1 = false;
					}
					else {
						if (pSVar2 == null) goto label_05a4fa80;
						pSVar2 = pSVar2.Replace(0x2e, 0x5f);
						bVar1 = (__c._currentAnimation == pSVar2);
					}
				}
				else {
					bVar1 = __this_00.IsPlaying(pSVar2);
				}
				uStack_18 = CONCAT17(bVar1, (undefined7)uStack_18);
				pIVar3 = (object)(((long)&uStack_18 + 7));
				return pIVar3;
			}
		}
	label_05a4fa80: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimation>b__23_0: clean
	private object Bindings_c____CreateMethodBinding__PlayAnimation_b__23_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		object pIVar1;
		String anim;
		float fade;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			anim = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((int)__a.Length < 2) {
				fade = 0.1;
			}
			else {
				pIVar1 = __a[1];
				fade = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			}
			if (__c != null) {
				__c.PlayAnimation(anim, fade);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationLength>b__24_0: clean
	private object Bindings_c____CreateMethodBinding__GetAnimationLength_b__24_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		CustomLogicAnimationBuiltin __this_00;
		CustomLogicAnimatorBuiltin __this_01;
		String pSVar1;
		object pIVar2;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			pSVar1 = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
			if (__c != null) {
				__this_00 = __c._animation;
				if (__this_00 == null) {
					__this_01 = __c._animator;
					if (__this_01 != null) {
						if (pSVar1 == null) goto label_05a4fc69;
						pSVar1 = pSVar1.Replace(0x2e, 0x5f);
						__this_01.GetAnimationLength(pSVar1);
					}
				}
				else {
					__this_00.GetAnimationLength(pSVar1);
				}
				pIVar2 = (object)auStack_14;
				return pIVar2;
			}
		}
	label_05a4fc69: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlaySound>b__25_0: clean
	private object Bindings_c____CreateMethodBinding__PlaySound_b__25_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		CustomLogicAudioSourceBuiltin pCVar1;
		bool bVar2;

		if (__c == null) {
	label_05a4fcb1: ;
			throw new NullReferenceException();
		}
		pCVar1 = __c._audioSource;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsPlaying;
			if (!bVar2) {
				pCVar1 = __c._audioSource;
				if (pCVar1 == null) goto label_05a4fcb1;
				pCVar1.Play();
			}
		}
		return null;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__StopSound>b__26_0: clean
	private object Bindings_c____CreateMethodBinding__StopSound_b__26_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		CustomLogicAudioSourceBuiltin pCVar1;
		bool bVar2;

		if (__c == null) {
	label_05a4fcf1: ;
			throw new NullReferenceException();
		}
		pCVar1 = __c._audioSource;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsPlaying;
			if (bVar2) {
				pCVar1 = __c._audioSource;
				if (pCVar1 == null) goto label_05a4fcf1;
				pCVar1.Stop();
			}
		}
		return null;
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToggleParticle>b__27_0: clean
	private object Bindings_c____CreateMethodBinding__ToggleParticle_b__27_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		object obj;
		bool enabled;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			enabled = CustomLogicEvaluator.ConvertTo<bool>(obj) ;
			if (__c != null) {
				__c.ToggleParticle(enabled);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__InverseTransformDirection>b__28_0: clean
	private object Bindings_c____CreateMethodBinding__InverseTransformDirection_b__28_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		object obj;
		Transform __this_00;
		CustomLogicVector3Builtin pCVar1;
		Vector3 v;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if (((__c != null) &&(pCVar1 != null)) &&(__this_00 = __c.Value, __this_00 != null)) {
				v = __this_00.InverseTransformDirection((Vector3)pCVar1.Value);
				pCVar1 = ((CustomLogicVector3Builtin)v);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__InverseTransformPoint>b__29_0: clean
	private object Bindings_c____CreateMethodBinding__InverseTransformPoint_b__29_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		object obj;
		Transform __this_00;
		CustomLogicVector3Builtin pCVar1;
		Vector3 v;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if (((__c != null) &&(pCVar1 != null)) &&(__this_00 = __c.Value, __this_00 != null)) {
				v = __this_00.InverseTransformPoint((Vector3)pCVar1.Value);
				pCVar1 = ((CustomLogicVector3Builtin)v);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransformDirection>b__30_0: clean
	private object Bindings_c____CreateMethodBinding__TransformDirection_b__30_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		object obj;
		Transform __this_00;
		CustomLogicVector3Builtin pCVar1;
		Vector3 v;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if (((__c != null) &&(pCVar1 != null)) &&(__this_00 = __c.Value, __this_00 != null)) {
				v = __this_00.TransformDirection((Vector3)pCVar1.Value);
				pCVar1 = ((CustomLogicVector3Builtin)v);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransformPoint>b__31_0: clean
	private object Bindings_c____CreateMethodBinding__TransformPoint_b__31_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		object obj;
		Transform __this_00;
		CustomLogicVector3Builtin pCVar1;
		Vector3 v;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if (((__c != null) &&(pCVar1 != null)) &&(__this_00 = __c.Value, __this_00 != null)) {
				v = __this_00.TransformPoint((Vector3)pCVar1.Value);
				pCVar1 = ((CustomLogicVector3Builtin)v);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__Rotate>b__32_0: clean
	private object Bindings_c____CreateMethodBinding__Rotate_b__32_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		object obj;
		Transform __this_00;
		CustomLogicVector3Builtin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if (((__c != null) &&(pCVar1 != null)) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_00.Rotate((Vector3)pCVar1.Value);
				__c._needSetRotation = true;
				__c._needSetLocalRotation = true;
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__RotateAround>b__33_0: clean
	private object Bindings_c____CreateMethodBinding__RotateAround_b__33_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		object obj;
		Transform __this_00;
		CustomLogicVector3Builtin pCVar1;
		CustomLogicVector3Builtin pCVar2;
		float angle;

		if (__a == null) {
	label_05a5020e: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					angle = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if ((((__c != null) &&(__c._needSetRotation = true, __c._needSetLocalRotation = true, pCVar1 != null)) &&(pCVar2 != null)) &&(__this_00 = __c.Value, __this_00 != null)) {
						__this_00.RotateAround((Vector3)pCVar1.Value, (Vector3)pCVar2.Value, angle);
						return null;
					}
					goto label_05a5020e;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__LookAt>b__34_0: clean
	private object Bindings_c____CreateMethodBinding__LookAt_b__34_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		object obj;
		Transform __this_00;
		CustomLogicVector3Builtin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if (((__c != null) &&(__c._needSetRotation = true, __c._needSetLocalRotation = true, pCVar1 != null)) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_00.LookAt((Vector3)pCVar1.Value);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetRenderersEnabled>b__35_0: clean
	private object Bindings_c____CreateMethodBinding__SetRenderersEnabled_b__35_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		object obj;
		bool enabled;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			enabled = CustomLogicEvaluator.ConvertTo<bool>(obj) ;
			if (__c != null) {
				__c.SetRenderersEnabled(enabled);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetColliders>b__36_0: clean
	private object Bindings_c____CreateMethodBinding__GetColliders_b__36_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		object obj;
		bool recursive;
		CustomLogicListBuiltin pCVar1;

		if (__a != null) {
			if (__a.Length == 0) {
				recursive = false;
			}
			else {
				if ((int)__a.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				obj = __a[0];
				recursive = CustomLogicEvaluator.ConvertTo<bool>(obj);
			}
			if (__c != null) {
				pCVar1 = __c.GetColliders(recursive);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetActive>b__37_0: clean
	private object Bindings_c____CreateMethodBinding__SetActive_b__37_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		object obj;
		Transform __this_00;
		bool value;
		GameObject __this_01;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<bool>(obj);
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_01 = __this_00.gameObject;
				if (__this_01 != null) {
					__this_01.SetActive(value);
					return null;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__38_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding____Eq___b__38_0(CustomLogicTransformBuiltin __c, Object[] __a)
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

	// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__39_0: clean
	private object Bindings_c____CreateMethodBinding____Hash___b__39_0(CustomLogicTransformBuiltin __c, Object[] __a)
	{
		Transform pUVar1;
		bool bVar2;
		object pIVar4;

		if (__c == null) {
	label_05a5059d: ;
			throw new NullReferenceException();
		}
		pUVar1 = __c.Value;
		bVar2 = ((Object)pUVar1 == null);
		if (!bVar2) {
			pUVar1 = __c.Value;
			if (pUVar1 == null) goto label_05a5059d;
		}
		return pIVar4;
	}
}
