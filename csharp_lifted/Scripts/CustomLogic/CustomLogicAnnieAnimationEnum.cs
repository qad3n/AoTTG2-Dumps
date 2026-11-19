// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicAnnieAnimationEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004E9")]
[CompilerGenerated]
internal class CustomLogicAnnieAnimationEnum : BuiltinClassInstance
{
	[Token(Token = "0x20004EA")]
	public static class Factory
	{
		[Token(Token = "0x6002752")]
		[Address(RVA = "0x5955D80", Offset = "0x5954D80", VA = "0x5955D80")]
		public static CustomLogicAnnieAnimationEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAnnieAnimationEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicAnnieAnimationEnum();
			return (CustomLogicAnnieAnimationEnum)__this;
		}
	}

	[Token(Token = "0x20004EB")]
	public static class Bindings
	{
		[Token(Token = "0x40017B8")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002753")]
		[Address(RVA = "0x5955EA0", Offset = "0x5954EA0", VA = "0x5955EA0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x5376547a) {
				if (uVar2 < 0x350e21b3) {
					if (uVar2 < 0x12a6a2bb) {
						if (uVar2 < 0xab017f0) {
							if (uVar2 == 0x228de11) {
								bVar1 = (name == "EmoteTaunt");
								if (bVar1) {
									pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__EmoteTaunt();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0xab017ef) {
								bVar1 = (name == "AttackGrabUpLeft");
								if (bVar1) {
									pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabUpLeft();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0xe1ef32d) {
							bVar1 = (name == "Jump");
							if (bVar1) {
								pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__Jump();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x12a6a2ba) {
							bVar1 = (name == "AttackGrabBottomRight");
							if (bVar1) {
								pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabBottomRight();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x2cfd24da) {
						if (uVar2 == 0x22ccd730) {
							bVar1 = (name == "Walk");
							if (bVar1) {
								pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__Walk();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x2cfd24d9) {
							bVar1 = (name == "AttackGrabBottomLeft");
							if (bVar1) {
								pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabBottomLeft();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x324d8372) {
						bVar1 = (name == "EmoteWave");
						if (bVar1) {
							pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__EmoteWave();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x350e21b2) {
						bVar1 = (name == "AttackBrushFrontL");
						if (bVar1) {
							pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackBrushFrontL();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x3d692a72) {
					if (uVar2 < 0x38122e2c) {
						if (uVar2 == 0x371c1522) {
							bVar1 = (name == "AttackStomp");
							if (bVar1) {
								pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackStomp();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x38122e2b) {
							bVar1 = (name == "AttackHead");
							if (bVar1) {
								pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackHead();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x3acb63d7) {
						bVar1 = (name == "AttackBite");
						if (bVar1) {
							pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackBite();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x3d692a71) {
						bVar1 = (name == "Die");
						if (bVar1) {
							pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__Die();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x45516aab) {
					if (uVar2 == 0x44831a08) {
						bVar1 = (name == "AttackComboBlind");
						if (bVar1) {
							pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackComboBlind();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x45516aaa) {
						bVar1 = (name == "SitUp");
						if (bVar1) {
							pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__SitUp();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x45aa17b3) {
					bVar1 = (name == "Idle");
					if (bVar1) {
						pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__Idle();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x470e3e08) {
					bVar1 = (name == "AttackBrushFrontR");
					if (bVar1) {
						pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackBrushFrontR();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x53765479) {
					bVar1 = (name == "AttackCombo");
					if (bVar1) {
						pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackCombo();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x93e6a9c5) {
				if (uVar2 < 0x8006ece1) {
					if (uVar2 < 0x76917343) {
						if (uVar2 == 0x5d992b41) {
							bVar1 = (name == "Stun");
							if (bVar1) {
								pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__Stun();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x76917342) {
							bVar1 = (name == "AttackGrabUp");
							if (bVar1) {
								pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabUp();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x8006ece0) {
						bVar1 = (name == "AttackGrabUpRight");
						if (bVar1) {
							pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabUpRight();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x7b00bc80) {
						bVar1 = (name == "Fall");
						if (bVar1) {
							pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__Fall();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x912e23bf) {
					if (uVar2 == 0x8d57e66a) {
						bVar1 = (name == "Run");
						if (bVar1) {
							pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__Run();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x912e23be) {
						bVar1 = (name == "SitFall");
						if (bVar1) {
							pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__SitFall();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x92d2a9f1) {
					bVar1 = (name == "AttackSwing");
					if (bVar1) {
						pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackSwing();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x93e6a9c4) {
					bVar1 = (name == "AttackBrushBack");
					if (bVar1) {
						pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackBrushBack();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xc8f30ee8) {
				if (uVar2 < 0xc35fd7d4) {
					if (uVar2 == 0xbd457b0a) {
						bVar1 = (name == "AttackGrabMidLeft");
						if (bVar1) {
							pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabMidLeft();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xc35fd7d3) {
						bVar1 = (name == "EmoteSalute");
						if (bVar1) {
							pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__EmoteSalute();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xc6f75897) {
					bVar1 = (name == "EmoteRoar");
					if (bVar1) {
						pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__EmoteRoar();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc8f30ee7) {
					bVar1 = (name == "AttackKick");
					if (bVar1) {
						pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackKick();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xe308a058) {
				if (uVar2 == 0xdecfe799) {
					bVar1 = (name == "AttackBrushHeadR");
					if (bVar1) {
						pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackBrushHeadR();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe308a057) {
					bVar1 = (name == "AttackGrabMidRight");
					if (bVar1) {
						pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackGrabMidRight();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xe6b2342d) {
				bVar1 = (name == "SitIdle");
				if (bVar1) {
					pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__SitIdle();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xee1682bc) {
				bVar1 = (name == "Land");
				if (bVar1) {
					pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__Land();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf8d01087) {
				bVar1 = (name == "AttackBrushHeadL");
				if (bVar1) {
					pCVar3 = CustomLogicAnnieAnimationEnum.Bindings.__CreatePropertyBinding__AttackBrushHeadL();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAnnieAnimationEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002754")]
		[Address(RVA = "0x5956B70", Offset = "0x5955B70", VA = "0x5956B70")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__Idle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Idle): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002755")]
		[Address(RVA = "0x5956C10", Offset = "0x5955C10", VA = "0x5956C10")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__Run()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Run): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002756")]
		[Address(RVA = "0x5956CB0", Offset = "0x5955CB0", VA = "0x5956CB0")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__Walk()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Walk): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002757")]
		[Address(RVA = "0x5956D50", Offset = "0x5955D50", VA = "0x5956D50")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__Jump()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Jump): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002758")]
		[Address(RVA = "0x5956DF0", Offset = "0x5955DF0", VA = "0x5956DF0")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__Fall()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Fall): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002759")]
		[Address(RVA = "0x5956E90", Offset = "0x5955E90", VA = "0x5956E90")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__Land()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Land): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_7_0);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600275A")]
		[Address(RVA = "0x5956F30", Offset = "0x5955F30", VA = "0x5956F30")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__Die()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Die): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600275B")]
		[Address(RVA = "0x5956FD0", Offset = "0x5955FD0", VA = "0x5956FD0")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__Stun()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Stun): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_9_0);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600275C")]
		[Address(RVA = "0x5957070", Offset = "0x5956070", VA = "0x5957070")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__SitFall()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__SitFall): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__SitFall_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600275D")]
		[Address(RVA = "0x5957110", Offset = "0x5956110", VA = "0x5957110")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__SitIdle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__SitIdle): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__SitIdle_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600275E")]
		[Address(RVA = "0x59571B0", Offset = "0x59561B0", VA = "0x59571B0")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__SitUp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__SitUp): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__SitUp_g____getter_12);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600275F")]
		[Address(RVA = "0x5957250", Offset = "0x5956250", VA = "0x5957250")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackCombo()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackCombo): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackCombo_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002760")]
		[Address(RVA = "0x59572F0", Offset = "0x59562F0", VA = "0x59572F0")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackComboBlind()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackComboBlind): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackComboBlind_g);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002761")]
		[Address(RVA = "0x5957390", Offset = "0x5956390", VA = "0x5957390")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackSwing()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSwing): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackSwing_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002762")]
		[Address(RVA = "0x5957430", Offset = "0x5956430", VA = "0x5957430")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackBrushBack()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushBack): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushBack_g);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002763")]
		[Address(RVA = "0x59574D0", Offset = "0x59564D0", VA = "0x59574D0")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackBrushFrontL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushFrontL): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushFrontL_g);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002764")]
		[Address(RVA = "0x5957570", Offset = "0x5956570", VA = "0x5957570")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackBrushFrontR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushFrontR): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushFrontR_g);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002765")]
		[Address(RVA = "0x5957610", Offset = "0x5956610", VA = "0x5957610")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackBrushHeadL()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushHeadL): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushHeadL_g);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002766")]
		[Address(RVA = "0x59576B0", Offset = "0x59566B0", VA = "0x59576B0")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackBrushHeadR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushHeadR): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushHeadR_g);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002767")]
		[Address(RVA = "0x5957750", Offset = "0x5956750", VA = "0x5957750")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackGrabBottomLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabBottomLeft): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBottomLeft);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002768")]
		[Address(RVA = "0x59577F0", Offset = "0x59567F0", VA = "0x59577F0")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackGrabBottomRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabBottomRight): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBottomRigh);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002769")]
		[Address(RVA = "0x5957890", Offset = "0x5956890", VA = "0x5957890")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackGrabMidLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabMidLeft): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabMidLeft_g);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600276A")]
		[Address(RVA = "0x5957930", Offset = "0x5956930", VA = "0x5957930")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackGrabMidRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabMidRight): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabMidRight_g);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600276B")]
		[Address(RVA = "0x59579D0", Offset = "0x59569D0", VA = "0x59579D0")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackGrabUp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabUp): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabUp_g____ge);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600276C")]
		[Address(RVA = "0x5957A70", Offset = "0x5956A70", VA = "0x5957A70")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackGrabUpLeft()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabUpLeft): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabUpLeft_g);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600276D")]
		[Address(RVA = "0x5957B10", Offset = "0x5956B10", VA = "0x5957B10")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackGrabUpRight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabUpRight): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabUpRight_g);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600276E")]
		[Address(RVA = "0x5957BB0", Offset = "0x5956BB0", VA = "0x5957BB0")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackKick()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackKick): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600276F")]
		[Address(RVA = "0x5957C50", Offset = "0x5956C50", VA = "0x5957C50")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackStomp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackStomp): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackStomp_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002770")]
		[Address(RVA = "0x5957CF0", Offset = "0x5956CF0", VA = "0x5957CF0")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackHead()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackHead): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackHead_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002771")]
		[Address(RVA = "0x5957D90", Offset = "0x5956D90", VA = "0x5957D90")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__AttackBite()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBite): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBite_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002772")]
		[Address(RVA = "0x5957E30", Offset = "0x5956E30", VA = "0x5957E30")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__EmoteSalute()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteSalute): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteSalute_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002773")]
		[Address(RVA = "0x5957ED0", Offset = "0x5956ED0", VA = "0x5957ED0")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__EmoteTaunt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteTaunt): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteTaunt_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002774")]
		[Address(RVA = "0x5957F70", Offset = "0x5956F70", VA = "0x5957F70")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__EmoteWave()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteWave): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteWave_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002775")]
		[Address(RVA = "0x5958010", Offset = "0x5957010", VA = "0x5958010")]
		public static CLPropertyBinding<CustomLogicAnnieAnimationEnum> __CreatePropertyBinding__EmoteRoar()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteRoar): 3 lines keep C-only constructs
			Func<CustomLogicAnnieAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicAnnieAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicAnnieAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicAnnieAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000500")]
	public static string Idle
	{
		[Token(Token = "0x600272C")]
		[Address(RVA = "0x59556C0", Offset = "0x59546C0", VA = "0x59556C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_Idle): clean
			return "Armature_FemT|ft_idle";
		}
	}

	[Token(Token = "0x17000501")]
	public static string Run
	{
		[Token(Token = "0x600272D")]
		[Address(RVA = "0x59556F0", Offset = "0x59546F0", VA = "0x59556F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_Run): clean
			return "Armature_FemT|ft_run";
		}
	}

	[Token(Token = "0x17000502")]
	public static string Walk
	{
		[Token(Token = "0x600272E")]
		[Address(RVA = "0x5955720", Offset = "0x5954720", VA = "0x5955720")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_Walk): clean
			return "Armature_FemT|ft_walk";
		}
	}

	[Token(Token = "0x17000503")]
	public static string Jump
	{
		[Token(Token = "0x600272F")]
		[Address(RVA = "0x5955750", Offset = "0x5954750", VA = "0x5955750")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_Jump): clean
			return "Armature_FemT|ft_jump_start";
		}
	}

	[Token(Token = "0x17000504")]
	public static string Fall
	{
		[Token(Token = "0x6002730")]
		[Address(RVA = "0x5955780", Offset = "0x5954780", VA = "0x5955780")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_Fall): clean
			return "Armature_FemT|ft_jump_air";
		}
	}

	[Token(Token = "0x17000505")]
	public static string Land
	{
		[Token(Token = "0x6002731")]
		[Address(RVA = "0x59557B0", Offset = "0x59547B0", VA = "0x59557B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_Land): clean
			return "Armature_FemT|ft_jump_land";
		}
	}

	[Token(Token = "0x17000506")]
	public static string Die
	{
		[Token(Token = "0x6002732")]
		[Address(RVA = "0x59557E0", Offset = "0x59547E0", VA = "0x59557E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_Die): clean
			return "Armature_FemT|ft_die_shifter";
		}
	}

	[Token(Token = "0x17000507")]
	public static string Stun
	{
		[Token(Token = "0x6002733")]
		[Address(RVA = "0x5955810", Offset = "0x5954810", VA = "0x5955810")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_Stun): clean
			return "Armature_FemT|ft_hit_titan";
		}
	}

	[Token(Token = "0x17000508")]
	public static string SitFall
	{
		[Token(Token = "0x6002734")]
		[Address(RVA = "0x5955840", Offset = "0x5954840", VA = "0x5955840")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_SitFall): clean
			return "Armature_FemT|ft_legHurt";
		}
	}

	[Token(Token = "0x17000509")]
	public static string SitIdle
	{
		[Token(Token = "0x6002735")]
		[Address(RVA = "0x5955870", Offset = "0x5954870", VA = "0x5955870")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_SitIdle): clean
			return "Armature_FemT|ft_legHurt_loop";
		}
	}

	[Token(Token = "0x1700050A")]
	public static string SitUp
	{
		[Token(Token = "0x6002736")]
		[Address(RVA = "0x59558A0", Offset = "0x59548A0", VA = "0x59558A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_SitUp): clean
			return "Armature_FemT|ft_legHurt_getup";
		}
	}

	[Token(Token = "0x1700050B")]
	public static string AttackCombo
	{
		[Token(Token = "0x6002737")]
		[Address(RVA = "0x59558D0", Offset = "0x59548D0", VA = "0x59558D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackCombo): clean
			return "Armature_FemT|ft_attack_combo_full";
		}
	}

	[Token(Token = "0x1700050C")]
	public static string AttackComboBlind
	{
		[Token(Token = "0x6002738")]
		[Address(RVA = "0x5955900", Offset = "0x5954900", VA = "0x5955900")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackComboBlind): clean
			return "Armature_FemT|ft_attack_combo_blind_full";
		}
	}

	[Token(Token = "0x1700050D")]
	public static string AttackSwing
	{
		[Token(Token = "0x6002739")]
		[Address(RVA = "0x5955930", Offset = "0x5954930", VA = "0x5955930")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackSwing): clean
			return "Armature_FemT|ft_attack_front";
		}
	}

	[Token(Token = "0x1700050E")]
	public static string AttackBrushBack
	{
		[Token(Token = "0x600273A")]
		[Address(RVA = "0x5955960", Offset = "0x5954960", VA = "0x5955960")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushBack): clean
			return "Armature_FemT|ft_attack_sweep_back";
		}
	}

	[Token(Token = "0x1700050F")]
	public static string AttackBrushFrontL
	{
		[Token(Token = "0x600273B")]
		[Address(RVA = "0x5955990", Offset = "0x5954990", VA = "0x5955990")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushFrontL): clean
			return "Armature_FemT|ft_attack_sweep_front_left";
		}
	}

	[Token(Token = "0x17000510")]
	public static string AttackBrushFrontR
	{
		[Token(Token = "0x600273C")]
		[Address(RVA = "0x59559C0", Offset = "0x59549C0", VA = "0x59559C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushFrontR): clean
			return "Armature_FemT|ft_attack_sweep_front_right";
		}
	}

	[Token(Token = "0x17000511")]
	public static string AttackBrushHeadL
	{
		[Token(Token = "0x600273D")]
		[Address(RVA = "0x59559F0", Offset = "0x59549F0", VA = "0x59559F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushHeadL): clean
			return "Armature_FemT|ft_attack_sweep_head_b_l";
		}
	}

	[Token(Token = "0x17000512")]
	public static string AttackBrushHeadR
	{
		[Token(Token = "0x600273E")]
		[Address(RVA = "0x5955A20", Offset = "0x5954A20", VA = "0x5955A20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushHeadR): clean
			return "Armature_FemT|ft_attack_sweep_head_b_r";
		}
	}

	[Token(Token = "0x17000513")]
	public static string AttackGrabBottomLeft
	{
		[Token(Token = "0x600273F")]
		[Address(RVA = "0x5955A50", Offset = "0x5954A50", VA = "0x5955A50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabBottomLeft): clean
			return "Armature_FemT|ft_attack_grab_bottom_left";
		}
	}

	[Token(Token = "0x17000514")]
	public static string AttackGrabBottomRight
	{
		[Token(Token = "0x6002740")]
		[Address(RVA = "0x5955A80", Offset = "0x5954A80", VA = "0x5955A80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabBottomRight): clean
			return "Armature_FemT|ft_attack_grab_bottom_right";
		}
	}

	[Token(Token = "0x17000515")]
	public static string AttackGrabMidLeft
	{
		[Token(Token = "0x6002741")]
		[Address(RVA = "0x5955AB0", Offset = "0x5954AB0", VA = "0x5955AB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabMidLeft): clean
			return "Armature_FemT|ft_attack_grab_mid_left";
		}
	}

	[Token(Token = "0x17000516")]
	public static string AttackGrabMidRight
	{
		[Token(Token = "0x6002742")]
		[Address(RVA = "0x5955AE0", Offset = "0x5954AE0", VA = "0x5955AE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabMidRight): clean
			return "Armature_FemT|ft_attack_grab_mid_right";
		}
	}

	[Token(Token = "0x17000517")]
	public static string AttackGrabUp
	{
		[Token(Token = "0x6002743")]
		[Address(RVA = "0x5955B10", Offset = "0x5954B10", VA = "0x5955B10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabUp): clean
			return "Armature_FemT|ft_attack_grab_up";
		}
	}

	[Token(Token = "0x17000518")]
	public static string AttackGrabUpLeft
	{
		[Token(Token = "0x6002744")]
		[Address(RVA = "0x5955B40", Offset = "0x5954B40", VA = "0x5955B40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabUpLeft): clean
			return "Armature_FemT|ft_attack_grab_up_left";
		}
	}

	[Token(Token = "0x17000519")]
	public static string AttackGrabUpRight
	{
		[Token(Token = "0x6002745")]
		[Address(RVA = "0x5955B70", Offset = "0x5954B70", VA = "0x5955B70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabUpRight): clean
			return "Armature_FemT|ft_attack_grab_up_right";
		}
	}

	[Token(Token = "0x1700051A")]
	public static string AttackKick
	{
		[Token(Token = "0x6002746")]
		[Address(RVA = "0x5955BA0", Offset = "0x5954BA0", VA = "0x5955BA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackKick): clean
			return "Armature_FemT|ft_attack_sweep";
		}
	}

	[Token(Token = "0x1700051B")]
	public static string AttackStomp
	{
		[Token(Token = "0x6002747")]
		[Address(RVA = "0x5955BD0", Offset = "0x5954BD0", VA = "0x5955BD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackStomp): clean
			return "Armature_FemT|ft_attack_core";
		}
	}

	[Token(Token = "0x1700051C")]
	public static string AttackHead
	{
		[Token(Token = "0x6002748")]
		[Address(RVA = "0x5955C00", Offset = "0x5954C00", VA = "0x5955C00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackHead): clean
			return "Armature_FemT|ft_attack_head";
		}
	}

	[Token(Token = "0x1700051D")]
	public static string AttackBite
	{
		[Token(Token = "0x6002749")]
		[Address(RVA = "0x5955C30", Offset = "0x5954C30", VA = "0x5955C30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBite): clean
			return "Armature_FemT|ft_attack_bite";
		}
	}

	[Token(Token = "0x1700051E")]
	public static string EmoteSalute
	{
		[Token(Token = "0x600274A")]
		[Address(RVA = "0x5955C60", Offset = "0x5954C60", VA = "0x5955C60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_EmoteSalute): clean
			return "Armature_FemT|ft_emote_salute";
		}
	}

	[Token(Token = "0x1700051F")]
	public static string EmoteTaunt
	{
		[Token(Token = "0x600274B")]
		[Address(RVA = "0x5955C90", Offset = "0x5954C90", VA = "0x5955C90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_EmoteTaunt): clean
			return "Armature_FemT|ft_emote_taunt";
		}
	}

	[Token(Token = "0x17000520")]
	public static string EmoteWave
	{
		[Token(Token = "0x600274C")]
		[Address(RVA = "0x5955CC0", Offset = "0x5954CC0", VA = "0x5955CC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_EmoteWave): clean
			return "Armature_FemT|ft_emote_wave";
		}
	}

	[Token(Token = "0x17000521")]
	public static string EmoteRoar
	{
		[Token(Token = "0x600274D")]
		[Address(RVA = "0x5955CF0", Offset = "0x5954CF0", VA = "0x5955CF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_EmoteRoar): clean
			return "Armature_FemT|ft_mad1";
		}
	}

	[Token(Token = "0x17000522")]
	public override string ClassName
	{
		[Token(Token = "0x600274E")]
		[Address(RVA = "0x5955D20", Offset = "0x5954D20", VA = "0x5955D20", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_ClassName): clean
			return "AnnieAnimationEnum";
		}
	}

	[Token(Token = "0x17000523")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600274F")]
		[Address(RVA = "0x5955D50", Offset = "0x5954D50", VA = "0x5955D50", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000524")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002750")]
		[Address(RVA = "0x5955D60", Offset = "0x5954D60", VA = "0x5955D60", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000525")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002751")]
		[Address(RVA = "0x5955D70", Offset = "0x5954D70", VA = "0x5955D70", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x600272B")]
	[Address(RVA = "0x5955650", Offset = "0x5954650", VA = "0x5955650")]
	public CustomLogicAnnieAnimationEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c (CustomLogic.CustomLogicAnnieAnimationEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754628f == false) {
			Il2CppMethodInitialized_0754628f = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicAnnieAnimationEnum.c.

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Idle");
		__this.Add((Il2CppObject *)"Run");
		__this.Add((Il2CppObject *)"Walk");
		__this.Add((Il2CppObject *)"Jump");
		__this.Add((Il2CppObject *)"Fall");
		__this.Add((Il2CppObject *)"Land");
		__this.Add((Il2CppObject *)"Die");
		__this.Add((Il2CppObject *)"Stun");
		__this.Add((Il2CppObject *)"SitFall");
		__this.Add((Il2CppObject *)"SitIdle");
		__this.Add((Il2CppObject *)"SitUp");
		__this.Add((Il2CppObject *)"AttackCombo");
		__this.Add((Il2CppObject *)"AttackComboBlind");
		__this.Add((Il2CppObject *)"AttackSwing");
		__this.Add((Il2CppObject *)"AttackBrushBack");
		__this.Add((Il2CppObject *)"AttackBrushFrontL");
		__this.Add((Il2CppObject *)"AttackBrushFrontR");
		__this.Add((Il2CppObject *)"AttackBrushHeadL");
		__this.Add((Il2CppObject *)"AttackBrushHeadR");
		__this.Add((Il2CppObject *)"AttackGrabBottomLeft");
		__this.Add((Il2CppObject *)"AttackGrabBottomRight");
		__this.Add((Il2CppObject *)"AttackGrabMidLeft");
		__this.Add((Il2CppObject *)"AttackGrabMidRight");
		__this.Add((Il2CppObject *)"AttackGrabUp");
		__this.Add((Il2CppObject *)"AttackGrabUpLeft");
		__this.Add((Il2CppObject *)"AttackGrabUpRight");
		__this.Add((Il2CppObject *)"AttackKick");
		__this.Add((Il2CppObject *)"AttackStomp");
		__this.Add((Il2CppObject *)"AttackHead");
		__this.Add((Il2CppObject *)"AttackBite");
		__this.Add((Il2CppObject *)"EmoteSalute");
		__this.Add((Il2CppObject *)"EmoteTaunt");
		__this.Add((Il2CppObject *)"EmoteWave");
		__this.Add((Il2CppObject *)"EmoteRoar");
		CustomLogicAnnieAnimationEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Idle_g____getter_2_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_idle";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Run_g____getter_3_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_run";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Walk_g____getter_4_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_walk";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Jump_g____getter_5_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_jump_start";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Fall>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Fall_g____getter_6_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_jump_air";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Land_g____getter_7_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_jump_land";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Die>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Die_g____getter_8_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_die_shifter";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__Stun_g____getter_9_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_hit_titan";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__SitFall>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__SitFall_g____getter_10_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_legHurt";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__SitIdle>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__SitIdle_g____getter_11_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_legHurt_loop";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__SitUp>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__SitUp_g____getter_12_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_legHurt_getup";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__AttackCombo_g____getter_13_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_combo_full";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackComboBlind>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__AttackComboBlind_g____getter_14_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_combo_blind_full";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSwing>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__AttackSwing_g____getter_15_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_front";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushBack>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBrushBack_g____getter_16_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_sweep_back";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushFrontL>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBrushFrontL_g____getter_17_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_sweep_front_left";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushFrontR>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBrushFrontR_g____getter_18_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_sweep_front_right";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushHeadL>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBrushHeadL_g____getter_19_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_sweep_head_b_l";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushHeadR>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBrushHeadR_g____getter_20_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_sweep_head_b_r";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBottomLeft>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabBottomLeft_g____getter_21_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_grab_bottom_left";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBottomRight>g____getter|22_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabBottomRight_g____getter_22_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_grab_bottom_right";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabMidLeft>g____getter|23_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabMidLeft_g____getter_23_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_grab_mid_left";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabMidRight>g____getter|24_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabMidRight_g____getter_24_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_grab_mid_right";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabUp>g____getter|25_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabUp_g____getter_25_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_grab_up";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabUpLeft>g____getter|26_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabUpLeft_g____getter_26_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_grab_up_left";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabUpRight>g____getter|27_0: clean
	private static object Bindings____CreatePropertyBinding__AttackGrabUpRight_g____getter_27_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_grab_up_right";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackKick>g____getter|28_0: clean
	private static object Bindings____CreatePropertyBinding__AttackKick_g____getter_28_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_sweep";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|29_0: clean
	private static object Bindings____CreatePropertyBinding__AttackStomp_g____getter_29_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_core";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackHead>g____getter|30_0: clean
	private static object Bindings____CreatePropertyBinding__AttackHead_g____getter_30_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_head";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBite>g____getter|31_0: clean
	private static object Bindings____CreatePropertyBinding__AttackBite_g____getter_31_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_attack_bite";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteSalute>g____getter|32_0: clean
	private static object Bindings____CreatePropertyBinding__EmoteSalute_g____getter_32_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_emote_salute";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteTaunt>g____getter|33_0: clean
	private static object Bindings____CreatePropertyBinding__EmoteTaunt_g____getter_33_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_emote_taunt";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteWave>g____getter|34_0: clean
	private static object Bindings____CreatePropertyBinding__EmoteWave_g____getter_34_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_emote_wave";
	}

	// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteRoar>g____getter|35_0: clean
	private static object Bindings____CreatePropertyBinding__EmoteRoar_g____getter_35_0(CustomLogicAnnieAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature_FemT|ft_mad1";
	}
}
