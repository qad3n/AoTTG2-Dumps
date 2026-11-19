// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCharacterBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicCharacterBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Characters;
using Controllers;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004B1")]
[CompilerGenerated]
internal abstract class CustomLogicCharacterBuiltin : BuiltinClassInstance, ICustomLogicEquals
{
	[Token(Token = "0x20004B2")]
	public static class Factory
	{
		[Token(Token = "0x600210C")]
		[Address(RVA = "0x590E260", Offset = "0x590D260", VA = "0x590E260")]
		public static CustomLogicCharacterBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCharacterBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x20004B3")]
	public static class Bindings
	{
		[Token(Token = "0x40016DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600210D")]
		[Address(RVA = "0x590E2F0", Offset = "0x590D2F0", VA = "0x590E2F0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicCharacterBuiltin> pCVar3;
			CLPropertyBinding<CustomLogicCharacterBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x5ad5e046) {
				if (uVar2 < 0x26d90d15) {
					if (uVar2 < 0x19f47650) {
						if (uVar2 < 0x864c5e6) {
							if (uVar2 == 0x1a14484) {
								bVar1 = (name == "AIEnabled");
								if (bVar1) {
									pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__AIEnabled();
									return (ICLMemberBinding)pCVar4;
								}
							}
							else if (uVar2 == 0x232777f) {
								bVar1 = (name == "Rotation");
								if (bVar1) {
									pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__Rotation();
									return (ICLMemberBinding)pCVar4;
								}
							}
							else if (uVar2 == 0x864c5e5) {
								bVar1 = (name == "RemoveOutline");
								if (bVar1) {
									pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__RemoveOutline();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 < 0x137f7d64) {
							if (uVar2 == 0xfe07306) {
								bVar1 = (name == "Name");
								if (bVar1) {
									pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__Name();
									return (ICLMemberBinding)pCVar4;
								}
							}
							else if (uVar2 == 0x137f7d63) {
								bVar1 = (name == "Emote");
								if (bVar1) {
									pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__Emote();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x15676746) {
							bVar1 = (name == "GetKilled");
							if (bVar1) {
								pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__GetKilled();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x19f4764f) {
							bVar1 = (name == "IsAI");
							if (bVar1) {
								pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__IsAI();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 < 0x1deca497) {
						if (uVar2 < 0x1c21234c) {
							if (uVar2 == 0x1ae30f5a) {
								bVar1 = (name == "GetAnimationSpeed");
								if (bVar1) {
									pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__GetAnimationSpeed();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x1c21234b) {
								bVar1 = (name == "GetAnimationNormalizedTime");
								if (bVar1) {
									pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__GetAnimationNormalizedTime();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x1c70fc20) {
							bVar1 = (name == "Player");
							if (bVar1) {
								pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__Player();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x1deca496) {
							bVar1 = (name == "State");
							if (bVar1) {
								pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__State();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 < 0x2329c92d) {
						if (uVar2 == 0x1e9e9f85) {
							bVar1 = (name == "Right");
							if (bVar1) {
								pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__Right();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x2329c92c) {
							bVar1 = (name == "Team");
							if (bVar1) {
								pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__Team();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x23315ddd) {
						bVar1 = (name == "IsPlayingAnimation");
						if (bVar1) {
							pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__IsPlayingAnimation();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x26d90d14) {
						bVar1 = (name == "IsPlayingSound");
						if (bVar1) {
							pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__IsPlayingSound();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x492a3cd0) {
					if (uVar2 < 0x369870e1) {
						if (uVar2 < 0x2ba6c2e3) {
							if (uVar2 == 0x296dba07) {
								bVar1 = (name == "AddForce");
								if (bVar1) {
									pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__AddForce();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x2ba6c2e2) {
								bVar1 = (name == "PlaySound");
								if (bVar1) {
									pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__PlaySound();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 == 0x2fe74447) {
							bVar1 = (name == "QuaternionRotation");
							if (bVar1) {
								pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__QuaternionRotation();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x369870e0) {
							bVar1 = (name == "Guild");
							if (bVar1) {
								pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__Guild();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 < 0x45aa17b4) {
						if (uVar2 == 0x42f35940) {
							bVar1 = (name == "Up");
							if (bVar1) {
								pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__Up();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x45aa17b3) {
							bVar1 = (name == "Idle");
							if (bVar1) {
								pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__Idle();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x47bfe69f) {
						bVar1 = (name == "Grounded");
						if (bVar1) {
							pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__Grounded();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x492a3ccf) {
						bVar1 = (name == "GetAnimationLength");
						if (bVar1) {
							pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__GetAnimationLength();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x54cb8f07) {
					if (uVar2 < 0x53189420) {
						if (uVar2 == 0x50d99a86) {
							bVar1 = (name == "SetTarget");
							if (bVar1) {
								pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__SetTarget();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x5318941f) {
							bVar1 = (name == "DetectRange");
							if (bVar1) {
								pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__DetectRange();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x54531f32) {
						bVar1 = (name == "FadeSound");
						if (bVar1) {
							pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__FadeSound();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x54cb8f06) {
						bVar1 = (name == "IsMine");
						if (bVar1) {
							pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__IsMine();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0x59397013) {
					if (uVar2 == 0x55aebb4e) {
						bVar1 = (name == "PlayAnimationAt");
						if (bVar1) {
							pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__PlayAnimationAt();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x59397012) {
						bVar1 = (name == "ForceAnimation");
						if (bVar1) {
							pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__ForceAnimation();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x59701b9b) {
					bVar1 = (name == "MaxHealth");
					if (bVar1) {
						pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__MaxHealth();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x5ad5e045) {
					bVar1 = (name == "ViewID");
					if (bVar1) {
						pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__ViewID();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0x9dba7b5a) {
				if (uVar2 < 0x7b5a42d9) {
					if (uVar2 < 0x6ca8ed49) {
						if (uVar2 < 0x65c8db58) {
							if (uVar2 == 0x5e2c4c73) {
								bVar1 = (name == "LookAt");
								if (bVar1) {
									pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__LookAt();
									return (ICLMemberBinding)pCVar3;
								}
							}
							else if (uVar2 == 0x65c8db57) {
								bVar1 = (name == "IsMainCharacter");
								if (bVar1) {
									pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__IsMainCharacter();
									return (ICLMemberBinding)pCVar4;
								}
							}
						}
						else if (uVar2 == 0x6913a183) {
							bVar1 = (name == "ClearTarget");
							if (bVar1) {
								pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__ClearTarget();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x6ca8ed48) {
							bVar1 = (name == "IsWalking");
							if (bVar1) {
								pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__IsWalking();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 < 0x708f5d7c) {
						if (uVar2 == 0x6cb57a76) {
							bVar1 = (name == "GetDamaged");
							if (bVar1) {
								pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__GetDamaged();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x708f5d7b) {
							bVar1 = (name == "CustomDamage");
							if (bVar1) {
								pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__CustomDamage();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x792a6491) {
						bVar1 = (name == "__Hash__");
						if (bVar1) {
							pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding____Hash__();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x7b5a42d8) {
						bVar1 = (name == "CurrentAnimation");
						if (bVar1) {
							pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__CurrentAnimation();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0x8c83015c) {
					if (uVar2 < 0x89bbe0e1) {
						if (uVar2 == 0x89bbe0e0) {
							bVar1 = (name == "MoveToTarget");
							if (bVar1) {
								pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__MoveToTarget();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x7dc09c40) {
							bVar1 = (name == "CustomDamageEnabled");
							if (bVar1) {
								pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__CustomDamageEnabled();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x8b6f3716) {
						bVar1 = (name == "IsAlive");
						if (bVar1) {
							pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__IsAlive();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x8c83015b) {
						bVar1 = (name == "HasTargetDirection");
						if (bVar1) {
							pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__HasTargetDirection();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0x91efe6d8) {
					if (uVar2 == 0x91a036e2) {
						bVar1 = (name == "AddOutline");
						if (bVar1) {
							pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__AddOutline();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x91efe6d7) {
						bVar1 = (name == "__Eq__");
						if (bVar1) {
							pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding____Eq__();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x986145af) {
					bVar1 = (name == "Health");
					if (bVar1) {
						pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__Health();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x9dba7b59) {
					bVar1 = (name == "TargetDirection");
					if (bVar1) {
						pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__TargetDirection();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xe27f342b) {
				if (uVar2 < 0xbba2a3f1) {
					if (uVar2 < 0xad82abbc) {
						if (uVar2 == 0xa3370cc8) {
							bVar1 = (name == "Rigidbody");
							if (bVar1) {
								pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__Rigidbody();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0xad82abbb) {
							bVar1 = (name == "Transform");
							if (bVar1) {
								pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__Transform();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0xba408252) {
						bVar1 = (name == "Velocity");
						if (bVar1) {
							pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__Velocity();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xbba2a3f0) {
						bVar1 = (name == "Reveal");
						if (bVar1) {
							pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__Reveal();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xcb7df475) {
					if (uVar2 == 0xc3605c1b) {
						bVar1 = (name == "CurrentTarget");
						if (bVar1) {
							pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__CurrentTarget();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xcb7df474) {
						bVar1 = (name == "StopSound");
						if (bVar1) {
							pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__StopSound();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xd64c477b) {
					bVar1 = (name == "PlayAnimation");
					if (bVar1) {
						pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__PlayAnimation();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe27f342a) {
					bVar1 = (name == "Position");
					if (bVar1) {
						pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__Position();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xe8005d3a) {
				if (uVar2 < 0xe5b11b67) {
					if (uVar2 == 0xe50883ba) {
						bVar1 = (name == "Forward");
						if (bVar1) {
							pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__Forward();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xe5b11b66) {
						bVar1 = (name == "SetAnimationSpeed");
						if (bVar1) {
							pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__SetAnimationSpeed();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xe694889a) {
					bVar1 = (name == "GetTarget");
					if (bVar1) {
						pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__GetTarget();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe8005d39) {
					bVar1 = (name == "GetNearestEnemy");
					if (bVar1) {
						pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__GetNearestEnemy();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xf3ae8779) {
				if (uVar2 == 0xe9a6b9e8) {
					bVar1 = (name == "UsePathfinding");
					if (bVar1) {
						pCVar4 = CustomLogicCharacterBuiltin.Bindings.__CreatePropertyBinding__UsePathfinding();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xf3ae8778) {
					bVar1 = (name == "SetDisplayName");
					if (bVar1) {
						pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__SetDisplayName();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xf90f6b5d) {
				bVar1 = (name == "MoveTo");
				if (bVar1) {
					pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__MoveTo();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfb1ebd66) {
				bVar1 = (name == "TargetNearestEnemy");
				if (bVar1) {
					pCVar3 = CustomLogicCharacterBuiltin.Bindings.__CreateMethodBinding__TargetNearestEnemy();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCharacterBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x600210E")]
		[Address(RVA = "0x590FA30", Offset = "0x590EA30", VA = "0x590FA30")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__CurrentTarget()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__CurrentTarget): 2 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_00;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CurrentTarget_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600210F")]
		[Address(RVA = "0x590FAD0", Offset = "0x590EAD0", VA = "0x590FAD0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__DetectRange()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__DetectRange): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__DetectRange_g____gette);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__DetectRange_g____sette);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002110")]
		[Address(RVA = "0x590FBB0", Offset = "0x590EBB0", VA = "0x590FBB0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__State()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__State): 2 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_00;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__State_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002111")]
		[Address(RVA = "0x590FC50", Offset = "0x590EC50", VA = "0x590FC50")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsWalking()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsWalking): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsWalking_g____getter);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsWalking_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002112")]
		[Address(RVA = "0x590FD30", Offset = "0x590ED30", VA = "0x590FD30")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__AIEnabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__AIEnabled): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__AIEnabled_g____getter);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__AIEnabled_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002113")]
		[Address(RVA = "0x590FE10", Offset = "0x590EE10", VA = "0x590FE10")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__UsePathfinding()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__UsePathfinding): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__UsePathfinding_g____ge);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__UsePathfinding_g____se);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002114")]
		[Address(RVA = "0x590FEF0", Offset = "0x590EEF0", VA = "0x590FEF0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Name()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Name): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_8_0);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Name_g____setter_8_1);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002115")]
		[Address(RVA = "0x590FFD0", Offset = "0x590EFD0", VA = "0x590FFD0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Guild()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Guild): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Guild_g____getter_9_0);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Guild_g____setter_9_1);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002116")]
		[Address(RVA = "0x59100B0", Offset = "0x590F0B0", VA = "0x59100B0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Player()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Player): 2 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_00;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Player_g____getter_10);
			__this_00 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002117")]
		[Address(RVA = "0x5910150", Offset = "0x590F150", VA = "0x5910150")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsAI()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsAI): 2 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_00;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsAI_g____getter_11_0);
			__this_00 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002118")]
		[Address(RVA = "0x59101F0", Offset = "0x590F1F0", VA = "0x59101F0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsAlive()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsAlive): 2 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_00;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsAlive_g____getter_12);
			__this_00 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002119")]
		[Address(RVA = "0x5910290", Offset = "0x590F290", VA = "0x5910290")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__ViewID()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__ViewID): 2 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_00;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__ViewID_g____getter_13);
			__this_00 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600211A")]
		[Address(RVA = "0x5910330", Offset = "0x590F330", VA = "0x5910330")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsMine()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsMine): 2 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_00;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsMine_g____getter_14);
			__this_00 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600211B")]
		[Address(RVA = "0x59103D0", Offset = "0x590F3D0", VA = "0x59103D0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsMainCharacter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsMainCharacter): 2 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_00;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsMainCharacter_g____g);
			__this_00 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600211C")]
		[Address(RVA = "0x5910470", Offset = "0x590F470", VA = "0x5910470")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Transform()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Transform): 2 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_00;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600211D")]
		[Address(RVA = "0x5910510", Offset = "0x590F510", VA = "0x5910510")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Position()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Position): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_1);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_1);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600211E")]
		[Address(RVA = "0x59105F0", Offset = "0x590F5F0", VA = "0x59105F0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Rotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Rotation): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_1);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_1);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600211F")]
		[Address(RVA = "0x59106D0", Offset = "0x590F6D0", VA = "0x59106D0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__QuaternionRotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__QuaternionRotation): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_71bedb0);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002120")]
		[Address(RVA = "0x59107B0", Offset = "0x590F7B0", VA = "0x59107B0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Velocity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Velocity): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Velocity_g____getter_2);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Velocity_g____setter_2);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002121")]
		[Address(RVA = "0x5910890", Offset = "0x590F890", VA = "0x5910890")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Forward()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Forward): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_21);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_21);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002122")]
		[Address(RVA = "0x5910970", Offset = "0x590F970", VA = "0x5910970")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Right()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Right): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_22_0);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_22_1);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002123")]
		[Address(RVA = "0x5910A50", Offset = "0x590FA50", VA = "0x5910A50")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Up()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Up): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_23_0);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_23_1);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002124")]
		[Address(RVA = "0x5910B30", Offset = "0x590FB30", VA = "0x5910B30")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__HasTargetDirection()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__HasTargetDirection): 2 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_00;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__HasTargetDirection_g);
			__this_00 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002125")]
		[Address(RVA = "0x5910BD0", Offset = "0x590FBD0", VA = "0x5910BD0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__TargetDirection()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__TargetDirection): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__TargetDirection_g____g);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__TargetDirection_g____s);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002126")]
		[Address(RVA = "0x5910CB0", Offset = "0x590FCB0", VA = "0x5910CB0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Team()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Team): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_26_0);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Team_g____setter_26_1);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002127")]
		[Address(RVA = "0x5910D90", Offset = "0x590FD90", VA = "0x5910D90")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Health()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Health): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Health_g____getter_27);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Health_g____setter_27);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002128")]
		[Address(RVA = "0x5910E70", Offset = "0x590FE70", VA = "0x5910E70")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__MaxHealth()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__MaxHealth): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__MaxHealth_g____getter);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__MaxHealth_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002129")]
		[Address(RVA = "0x5910F50", Offset = "0x590FF50", VA = "0x5910F50")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__CustomDamageEnabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__CustomDamageEnabled): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamageEnabled_g);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamageEnabled_g_71bece8);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600212A")]
		[Address(RVA = "0x5911030", Offset = "0x5910030", VA = "0x5911030")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__CustomDamage()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__CustomDamage): 3 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			Action<CustomLogicCharacterBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_01;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamage_g____gett);
			__this_00 = new Action<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamage_g____sett);
			__this_01 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600212B")]
		[Address(RVA = "0x5911110", Offset = "0x5910110", VA = "0x5911110")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__CurrentAnimation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__CurrentAnimation): 2 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_00;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CurrentAnimation_g);
			__this_00 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600212C")]
		[Address(RVA = "0x59111B0", Offset = "0x59101B0", VA = "0x59111B0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Grounded()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Grounded): 2 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_00;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Grounded_g____getter_3);
			__this_00 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600212D")]
		[Address(RVA = "0x5911250", Offset = "0x5910250", VA = "0x5911250")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Rigidbody()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Rigidbody): 2 lines keep C-only constructs
			Func<CustomLogicCharacterBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCharacterBuiltin> __this_00;

			__this = new Func<CustomLogicCharacterBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rigidbody_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicCharacterBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600212E")]
		[Address(RVA = "0x59112F0", Offset = "0x59102F0", VA = "0x59112F0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetTarget()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetTarget): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f46 == false) {
				Il2CppMethodInitialized_07545f46 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__34_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__34_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetTarget_b__34_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__34_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600212F")]
		[Address(RVA = "0x5911430", Offset = "0x5910430", VA = "0x5911430")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__SetTarget()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__SetTarget): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f47 == false) {
				Il2CppMethodInitialized_07545f47 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__35_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__35_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__SetTarget_b__35_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__35_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002130")]
		[Address(RVA = "0x5911570", Offset = "0x5910570", VA = "0x5911570")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__ClearTarget()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__ClearTarget): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f48 == false) {
				Il2CppMethodInitialized_07545f48 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__36_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__36_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__ClearTarget_b__36_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__36_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002131")]
		[Address(RVA = "0x59116B0", Offset = "0x59106B0", VA = "0x59116B0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetNearestEnemy()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetNearestEnemy): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f49 == false) {
				Il2CppMethodInitialized_07545f49 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__37_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__37_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetNearestEnemy_b__37);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__37_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002132")]
		[Address(RVA = "0x59117F0", Offset = "0x59107F0", VA = "0x59117F0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__TargetNearestEnemy()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__TargetNearestEnemy): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f4a == false) {
				Il2CppMethodInitialized_07545f4a = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__38_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__38_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__TargetNearestEnemy_b);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__38_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002133")]
		[Address(RVA = "0x5911930", Offset = "0x5910930", VA = "0x5911930")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__MoveTo()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__MoveTo): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f4b == false) {
				Il2CppMethodInitialized_07545f4b = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__39_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__39_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__MoveTo_b__39_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__39_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002134")]
		[Address(RVA = "0x5911A70", Offset = "0x5910A70", VA = "0x5911A70")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__MoveToTarget()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__MoveToTarget): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f4c == false) {
				Il2CppMethodInitialized_07545f4c = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__40_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__40_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__MoveToTarget_b__40_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__40_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002135")]
		[Address(RVA = "0x5911BB0", Offset = "0x5910BB0", VA = "0x5911BB0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__Idle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__Idle): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f4d == false) {
				Il2CppMethodInitialized_07545f4d = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__41_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__41_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__Idle_b__41_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__41_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002136")]
		[Address(RVA = "0x5911CF0", Offset = "0x5910CF0", VA = "0x5911CF0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__SetDisplayName()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__SetDisplayName): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f4e == false) {
				Il2CppMethodInitialized_07545f4e = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__42_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__42_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__SetDisplayName_b__42_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__42_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002137")]
		[Address(RVA = "0x5911E30", Offset = "0x5910E30", VA = "0x5911E30")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetKilled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetKilled): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f4f == false) {
				Il2CppMethodInitialized_07545f4f = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__43_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__43_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetKilled_b__43_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__43_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002138")]
		[Address(RVA = "0x5911F70", Offset = "0x5910F70", VA = "0x5911F70")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetDamaged()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetDamaged): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f50 == false) {
				Il2CppMethodInitialized_07545f50 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__44_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__44_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetDamaged_b__44_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__44_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002139")]
		[Address(RVA = "0x59120B0", Offset = "0x59110B0", VA = "0x59120B0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__Emote()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__Emote): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f51 == false) {
				Il2CppMethodInitialized_07545f51 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__45_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__45_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__Emote_b__45_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__45_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600213A")]
		[Address(RVA = "0x59121F0", Offset = "0x59111F0", VA = "0x59121F0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__PlayAnimation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__PlayAnimation): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f52 == false) {
				Il2CppMethodInitialized_07545f52 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__46_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__46_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__46_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__46_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600213B")]
		[Address(RVA = "0x5912330", Offset = "0x5911330", VA = "0x5912330")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__PlayAnimationAt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__PlayAnimationAt): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f53 == false) {
				Il2CppMethodInitialized_07545f53 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__47_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__47_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__47);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__47_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600213C")]
		[Address(RVA = "0x5912470", Offset = "0x5911470", VA = "0x5912470")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetAnimationSpeed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetAnimationSpeed): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f54 == false) {
				Il2CppMethodInitialized_07545f54 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__48_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__48_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetAnimationSpeed_b__4);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__48_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600213D")]
		[Address(RVA = "0x59125B0", Offset = "0x59115B0", VA = "0x59125B0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__SetAnimationSpeed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__SetAnimationSpeed): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f55 == false) {
				Il2CppMethodInitialized_07545f55 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__49_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__49_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__SetAnimationSpeed_b__4);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__49_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600213E")]
		[Address(RVA = "0x59126F0", Offset = "0x59116F0", VA = "0x59126F0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__IsPlayingAnimation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__IsPlayingAnimation): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f56 == false) {
				Il2CppMethodInitialized_07545f56 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__50_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__50_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__IsPlayingAnimation_b);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__50_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600213F")]
		[Address(RVA = "0x5912830", Offset = "0x5911830", VA = "0x5912830")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetAnimationNormalizedTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetAnimationNormalizedTime): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f57 == false) {
				Il2CppMethodInitialized_07545f57 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__51_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__51_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalized);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__51_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002140")]
		[Address(RVA = "0x5912970", Offset = "0x5911970", VA = "0x5912970")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__ForceAnimation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__ForceAnimation): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f58 == false) {
				Il2CppMethodInitialized_07545f58 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__52_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__52_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__ForceAnimation_b__52_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__52_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002141")]
		[Address(RVA = "0x5912AB0", Offset = "0x5911AB0", VA = "0x5912AB0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetAnimationLength()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetAnimationLength): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f59 == false) {
				Il2CppMethodInitialized_07545f59 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__53_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__53_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__53_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002142")]
		[Address(RVA = "0x5912BF0", Offset = "0x5911BF0", VA = "0x5912BF0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__IsPlayingSound()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__IsPlayingSound): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f5a == false) {
				Il2CppMethodInitialized_07545f5a = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__54_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__54_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__IsPlayingSound_b__54_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__54_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002143")]
		[Address(RVA = "0x5912D30", Offset = "0x5911D30", VA = "0x5912D30")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__PlaySound()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__PlaySound): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f5b == false) {
				Il2CppMethodInitialized_07545f5b = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__55_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__55_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__PlaySound_b__55_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__55_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002144")]
		[Address(RVA = "0x5912E70", Offset = "0x5911E70", VA = "0x5912E70")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__StopSound()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__StopSound): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f5c == false) {
				Il2CppMethodInitialized_07545f5c = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__56_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__56_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__StopSound_b__56_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__56_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002145")]
		[Address(RVA = "0x5912FB0", Offset = "0x5911FB0", VA = "0x5912FB0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__FadeSound()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__FadeSound): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f5d == false) {
				Il2CppMethodInitialized_07545f5d = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__57_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__57_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__FadeSound_b__57_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__57_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002146")]
		[Address(RVA = "0x59130F0", Offset = "0x59120F0", VA = "0x59130F0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__LookAt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__LookAt): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f5e == false) {
				Il2CppMethodInitialized_07545f5e = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__58_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__58_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__58_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__58_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002147")]
		[Address(RVA = "0x5913230", Offset = "0x5912230", VA = "0x5913230")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__AddForce()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__AddForce): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f5f == false) {
				Il2CppMethodInitialized_07545f5f = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__59_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__59_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__AddForce_b__59_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__59_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002148")]
		[Address(RVA = "0x5913370", Offset = "0x5912370", VA = "0x5913370")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__Reveal()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__Reveal): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f60 == false) {
				Il2CppMethodInitialized_07545f60 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__60_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__60_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__Reveal_b__60_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__60_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002149")]
		[Address(RVA = "0x59134B0", Offset = "0x59124B0", VA = "0x59134B0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__AddOutline()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__AddOutline): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f61 == false) {
				Il2CppMethodInitialized_07545f61 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__61_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__61_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__AddOutline_b__61_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__61_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600214A")]
		[Address(RVA = "0x59135F0", Offset = "0x59125F0", VA = "0x59135F0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__RemoveOutline()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__RemoveOutline): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f62 == false) {
				Il2CppMethodInitialized_07545f62 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__62_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__62_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__RemoveOutline_b__62_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__62_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600214B")]
		[Address(RVA = "0x5913730", Offset = "0x5912730", VA = "0x5913730")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding____Eq__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding____Eq__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f63 == false) {
				Il2CppMethodInitialized_07545f63 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__63_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__63_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding____Eq___b__63_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__63_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600214C")]
		[Address(RVA = "0x5913870", Offset = "0x5912870", VA = "0x5913870")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding____Hash__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding____Hash__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCharacterBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCharacterBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545f64 == false) {
				Il2CppMethodInitialized_07545f64 = true;
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__64_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCharacterBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__64_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCharacterBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCharacterBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding____Hash___b__64_0);
				pCVar2 = typeof(CustomLogicCharacterBuiltin.Bindings.c).static_fields;
				pCVar2.__9__64_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCharacterBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x40016DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public readonly BaseCharacter Character;

	[Token(Token = "0x170003D8")]
	private BaseAIController AIController
	{
		[Token(Token = "0x60020B0")]
		[Address(RVA = "0x590B9C0", Offset = "0x590A9C0", VA = "0x590B9C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_AIController): clean
			BaseCharacter pCVar1;
			bool bVar2;
			BaseAIController pCVar3;

			pCVar1 = this.Character;
			bVar2 = ((Object)pCVar1 != null);
			if (bVar2) {
				pCVar1 = this.Character;
				if (pCVar1 == null) {
		label_05a0ba70: ;
					throw new NullReferenceException();
				}
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = this.Character;
					if (pCVar1 == null) goto label_05a0ba70;
					if ((pCVar1.Dead == false) && (pCVar1.AI != false)) {
						pCVar3 = pCVar1.GetComponent<BaseAIController>();
						return pCVar3;
					}
				}
			}
			return null;
		}
	}

	[Token(Token = "0x170003D9")]
	public object CurrentTarget
	{
		[Token(Token = "0x60020B1")]
		[Address(RVA = "0x590BA80", Offset = "0x590AA80", VA = "0x590BA80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_CurrentTarget): clean
			BaseAIController __this_00;
			object pIVar1;

			__this_00 = this.AIController;
			if (__this_00 == null) {
				pIVar1 = CustomLogicCharacterBuiltin.WrapTarget(null);
				return pIVar1;
			}
			return pIVar1;
		}
	}

	[Token(Token = "0x170003DA")]
	public float DetectRange
	{
		[Token(Token = "0x60020B2")]
		[Address(RVA = "0x590BAE0", Offset = "0x590AAE0", VA = "0x590BAE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_DetectRange): clean
			BaseAIController pCVar1;

			pCVar1 = this.AIController;
			if (pCVar1 == null) {
				return 0.0;
			}
			return pCVar1.DetectRange;
		}
		[Token(Token = "0x60020B3")]
		[Address(RVA = "0x590BB00", Offset = "0x590AB00", VA = "0x590BB00")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_DetectRange): clean
			BaseAIController __this_00;

			__this_00 = this.AIController;
			if (__this_00 == null) {
				return;
			}
			__this_00.SetDetectRange(value);
			return;
		}
	}

	[Token(Token = "0x170003DB")]
	public string State
	{
		[Token(Token = "0x60020B4")]
		[Address(RVA = "0x590BB30", Offset = "0x590AB30", VA = "0x590BB30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_State): 11 lines keep C-only constructs
			byte bVar1;
			byte bVar2;
			BaseCharacter pCVar3;
			BaseCharacter pCVar4;
			String pSVar5;
			Enum local_20;
			uint local_10;

			pCVar3 = this.Character;
			if (pCVar3 == null) {
		label_05a0bc0f: ;
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			pCVar4 = pCVar3.klass;
			bVar1 = (pCVar4._2).typeHierarchyDepth;
			bVar2 = (typeof(Human)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(Human))) {
				bVar2 = (typeof(BaseTitan)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BaseTitan))) {
					bVar2 = (typeof(Horse)._2).typeHierarchyDepth;
					if ((bVar1 < bVar2) ||((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(Horse))) goto label_05a0bc0f;
					local_20.klass = (Enum)typeof(HorseState);
					local_10._0_1_ = (*(byte)((sbyte)pCVar3 + 0x128));
					local_10._1_1_ = (*(byte)((sbyte)pCVar3 + 0x129));
					local_10._2_1_ = (*(byte)((sbyte)pCVar3 + 0x12a));
					local_10._3_1_ = pCVar3[1].field_0x1b;
				}
				else {
					local_20.klass = (Enum)typeof(TitanState);
					local_10 = *(uint)&(*(ulong)((sbyte)pCVar3 + 0x100));
				}
			}
			else {
				local_10._0_1_ = (*(byte)((sbyte)pCVar3 + 0x178));
				local_10._1_1_ = (*(byte)((sbyte)pCVar3 + 0x179));
				local_10._2_2_ = *(ushort)&pCVar3[1].field_0x6a;
				local_20.klass = (Enum)typeof(HumanState);
			}
			local_20.monitor = (IntPtr)0xffffffffffffffff;
			return pSVar5;
		}
	}

	[Token(Token = "0x170003DC")]
	public bool IsWalking
	{
		[Token(Token = "0x60020B5")]
		[Address(RVA = "0x590BCB0", Offset = "0x590ACB0", VA = "0x590BCB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_IsWalking): 1 lines keep C-only constructs
			byte bVar1;
			BaseCharacter pCVar2;
			bool bVar3;
			BaseAIController __this_00;

			pCVar2 = this.Character;
			if (pCVar2 != null) {
				bVar1 = (typeof(Human)._2).typeHierarchyDepth;
				method = (MethodInfo)(ulong)bVar1;
				if ((bVar1 <= (pCVar2.klass._2).typeHierarchyDepth) &&((pCVar2.klass._2).typeHierarchy[(long)&method[-1].field_0x57] ==typeof(Human))) {
					return *(sbyte)((long)&(*(ulong)((sbyte)pCVar2 + 0x238)) + 4) != false;
				}
			}
			__this_00 = this.AIController;
			if (__this_00 == null) {
				return false;
			}
			return bVar3;
		}
		[Token(Token = "0x60020B6")]
		[Address(RVA = "0x590BD30", Offset = "0x590AD30", VA = "0x590BD30")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_IsWalking): 2 lines keep C-only constructs
			bool bVar1;
			BaseAIController __this_00;
			undefined7 in_register_00000031;
			MethodInfo method_00;

			method_00 = (MethodInfo)CONCAT71(in_register_00000031, value);
			__this_00 = this.AIController;
			bVar1 = ((Object)__this_00 != null);
			if (bVar1) {
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.IsWalking = value;
				return;
			}
			return;
		}
	}

	[Token(Token = "0x170003DD")]
	public bool AIEnabled
	{
		[Token(Token = "0x60020B7")]
		[Address(RVA = "0x590BDB0", Offset = "0x590ADB0", VA = "0x590BDB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_AIEnabled): clean
			BaseAIController pCVar1;

			pCVar1 = this.AIController;
			if (pCVar1 == null) {
				return false;
			}
			return pCVar1._aiEnabled != false;
		}
		[Token(Token = "0x60020B8")]
		[Address(RVA = "0x590BDD0", Offset = "0x590ADD0", VA = "0x590BDD0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_AIEnabled): 2 lines keep C-only constructs
			bool bVar1;
			BaseAIController __this_00;
			undefined7 in_register_00000031;
			MethodInfo method_00;

			method_00 = (MethodInfo)CONCAT71(in_register_00000031, value);
			__this_00 = this.AIController;
			bVar1 = ((Object)__this_00 != null);
			if (bVar1) {
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.AIEnabled = value;
				return;
			}
			return;
		}
	}

	[Token(Token = "0x170003DE")]
	public bool UsePathfinding
	{
		[Token(Token = "0x60020B9")]
		[Address(RVA = "0x590BE50", Offset = "0x590AE50", VA = "0x590BE50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_UsePathfinding): clean
			BaseAIController pCVar1;

			pCVar1 = this.AIController;
			if (pCVar1 == null) {
				return false;
			}
			return pCVar1._usePathfinding != false;
		}
		[Token(Token = "0x60020BA")]
		[Address(RVA = "0x590BE70", Offset = "0x590AE70", VA = "0x590BE70")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_UsePathfinding): 2 lines keep C-only constructs
			bool bVar1;
			BaseAIController __this_00;
			undefined7 in_register_00000031;
			MethodInfo method_00;

			method_00 = (MethodInfo)CONCAT71(in_register_00000031, value);
			__this_00 = this.AIController;
			bVar1 = ((Object)__this_00 != null);
			if (bVar1) {
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.UsePathfinding = value;
				return;
			}
			return;
		}
	}

	[Token(Token = "0x170003DF")]
	public string Name
	{
		[Token(Token = "0x60020C6")]
		[Address(RVA = "0x590C660", Offset = "0x590B660", VA = "0x590C660")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_Name): clean
			BaseCharacter pCVar1;

			pCVar1 = this.Character;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.RichTextName;
		}
		[Token(Token = "0x60020C7")]
		[Address(RVA = "0x590C680", Offset = "0x590B680", VA = "0x590C680")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_Name): clean
			BaseCharacter __this_00;

			__this_00 = this.Character;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.Name = value;
			return;
		}
	}

	[Token(Token = "0x170003E0")]
	public string Guild
	{
		[Token(Token = "0x60020C9")]
		[Address(RVA = "0x590C710", Offset = "0x590B710", VA = "0x590C710")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_Guild): clean
			BaseCharacter pCVar1;

			pCVar1 = this.Character;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.Guild;
		}
		[Token(Token = "0x60020CA")]
		[Address(RVA = "0x590C730", Offset = "0x590B730", VA = "0x590C730")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_Guild): clean
			BaseCharacter pCVar1;

			pCVar1 = this.Character;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			pCVar1.Guild = value;
			return;
		}
	}

	[Token(Token = "0x170003E1")]
	public CustomLogicPlayerBuiltin Player
	{
		[Token(Token = "0x60020CB")]
		[Address(RVA = "0x590C750", Offset = "0x590B750", VA = "0x590C750")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_Player): clean
			BaseCharacter pCVar1;
			BaseComponentCache pUVar2;
			PhotonView pPVar3;
			Player player;
			CustomLogicPlayerBuiltin __this_00;

			pCVar1 = this.Character;
			if (((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) ||(pPVar3 = pUVar2.PhotonView, pPVar3 == null)) {
				throw new NullReferenceException();
			}
			player = pPVar3._Owner_k__BackingField;
			__this_00 = new CustomLogicPlayerBuiltin(player);
			return __this_00;
		}
	}

	[Token(Token = "0x170003E2")]
	public bool IsAI
	{
		[Token(Token = "0x60020CC")]
		[Address(RVA = "0x590C7D0", Offset = "0x590B7D0", VA = "0x590C7D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_IsAI): clean
			BaseCharacter pCVar1;

			pCVar1 = this.Character;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.AI;
		}
	}

	[Token(Token = "0x170003E3")]
	public bool IsAlive
	{
		[Token(Token = "0x60020CD")]
		[Address(RVA = "0x590C7F0", Offset = "0x590B7F0", VA = "0x590C7F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_IsAlive): clean
			BaseCharacter pCVar1;
			bool bVar2;
			bool bVar3;

			pCVar1 = this.Character;
			bVar2 = ((Object)pCVar1 != null);
			if (bVar2) {
				pCVar1 = this.Character;
				if (pCVar1 == null) {
					throw new NullReferenceException();
				}
				bVar3 = pCVar1.Dead == false;
			}
			return bVar3;
		}
	}

	[Token(Token = "0x170003E4")]
	public int ViewID
	{
		[Token(Token = "0x60020CE")]
		[Address(RVA = "0x590C860", Offset = "0x590B860", VA = "0x590C860")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_ViewID): clean
			BaseCharacter pCVar1;
			BaseComponentCache pUVar2;
			PhotonView pPVar3;

			pCVar1 = this.Character;
			if (((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) ||(pPVar3 = pUVar2.PhotonView, pPVar3 == null)) {
				throw new NullReferenceException();
			}
			return pPVar3.viewIdField;
		}
	}

	[Token(Token = "0x170003E5")]
	public bool IsMine
	{
		[Token(Token = "0x60020CF")]
		[Address(RVA = "0x590C890", Offset = "0x590B890", VA = "0x590C890")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_IsMine): clean
			BaseCharacter pCVar1;
			bool bVar2;

			pCVar1 = this.Character;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return bVar2;
		}
	}

	[Token(Token = "0x170003E6")]
	public bool IsMainCharacter
	{
		[Token(Token = "0x60020D0")]
		[Address(RVA = "0x590C8C0", Offset = "0x590B8C0", VA = "0x590C8C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_IsMainCharacter): clean
			BaseCharacter __this_00;
			bool bVar1;

			__this_00 = this.Character;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
	}

	[Token(Token = "0x170003E7")]
	public CustomLogicTransformBuiltin Transform
	{
		[Token(Token = "0x60020D1")]
		[Address(RVA = "0x590C8E0", Offset = "0x590B8E0", VA = "0x590C8E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_Transform): clean
			BaseCharacter pCVar1;
			BaseComponentCache pUVar2;
			Transform transform;
			CustomLogicTransformBuiltin __this_00;

			pCVar1 = this.Character;
			if ((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) {
				throw new NullReferenceException();
			}
			transform = pUVar2.Transform;
			__this_00 = new CustomLogicTransformBuiltin(transform);
			return __this_00;
		}
	}

	[Token(Token = "0x170003E8")]
	public virtual CustomLogicVector3Builtin Position
	{
		[Token(Token = "0x60020D2")]
		[Address(RVA = "0x590C950", Offset = "0x590B950", VA = "0x590C950", Slot = "13")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_Position): clean
			BaseCharacter pCVar1;
			BaseComponentCache pUVar2;
			Transform __this_00;
			CustomLogicVector3Builtin __this_01;
			Vector3 value;

			pCVar1 = this.Character;
			if (((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) ||(__this_00 = pUVar2.Transform, __this_00 == null)) {
				throw new NullReferenceException();
			}
			value = __this_00.position;
			__this_01 = new CustomLogicVector3Builtin(value);
			return __this_01;
		}
		[Token(Token = "0x60020D3")]
		[Address(RVA = "0x590C9E0", Offset = "0x590B9E0", VA = "0x590C9E0", Slot = "14")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_Position): clean
			BaseCharacter pCVar1;
			BaseComponentCache pUVar2;
			Transform __this_00;
			Rigidbody __this_01;
			bool bVar3;

			pCVar1 = this.Character;
			if (pCVar1 != null) {
				bVar3 = pCVar1.IsMine();
				if (!bVar3) {
					return;
				}
				pCVar1 = this.Character;
				if ((((pCVar1 != null) &&(pUVar2 = pCVar1.Cache, pUVar2 != null)) &&(value != null)) &&(__this_00 = pUVar2.Transform, __this_00 != null)) {
					__this_00.position = (Vector3)value.Value;
					pCVar1 = this.Character;
					if (((pCVar1 != null) &&(pUVar2 = pCVar1.Cache, pUVar2 != null)) &&(__this_01 = pUVar2.Rigidbody, __this_01 != null)) {
						__this_01.position = (Vector3)value.Value;
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003E9")]
	public CustomLogicVector3Builtin Rotation
	{
		[Token(Token = "0x60020D4")]
		[Address(RVA = "0x590CA90", Offset = "0x590BA90", VA = "0x590CA90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_Rotation): clean
			BaseCharacter pCVar1;
			BaseComponentCache pUVar2;
			Transform __this_00;
			CustomLogicVector3Builtin __this_01;
			Vector3 UVar3;
			Vector3 euler;
			Quaternion local_18;

			pCVar1 = this.Character;
			if (((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) ||(__this_00 = pUVar2.Transform, __this_00 == null)) {
				throw new NullReferenceException();
			}
			local_18 = __this_00.rotation;
			UVar3 = Quaternion.Internal_ToEulerRad(ref local_18);
			euler.x = UVar3.x * 57.29578;
			euler.y = UVar3.y * 57.29578;
			euler.z = UVar3.z * 57.29578;
			UVar3 = Quaternion.Internal_MakePositive(euler);
			__this_01 = new CustomLogicVector3Builtin(UVar3);
			return __this_01;
		}
		[Token(Token = "0x60020D5")]
		[Address(RVA = "0x590CB50", Offset = "0x590BB50", VA = "0x590CB50")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_Rotation): clean
			uint uVar1;
			uint uVar2;
			BaseCharacter pCVar3;
			BaseComponentCache pUVar4;
			Transform __this_00;
			bool bVar5;
			Quaternion value_00;
			Vector3 UStack_28;

			pCVar3 = this.Character;
			if (pCVar3 != null) {
				bVar5 = pCVar3.IsMine();
				if (!bVar5) {
					return;
				}
				pCVar3 = this.Character;
				if (((pCVar3 != null) &&(pUVar4 = pCVar3.Cache, pUVar4 != null)) &&(value != null)) {
					__this_00 = pUVar4.Transform;
					uVar1 = value.Value.x;
					uVar2 = value.Value.y;
					UStack_28.x = (float)uVar1 * 0.017453292;
					UStack_28.y = (float)uVar2 * 0.017453292;
					UStack_28.z = value.Value.z * 0.017453292;
					value_00 = Quaternion.Internal_FromEulerRad(ref UStack_28);
					if (__this_00 != null) {
						__this_00.rotation = value_00;
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003EA")]
	public CustomLogicQuaternionBuiltin QuaternionRotation
	{
		[Token(Token = "0x60020D6")]
		[Address(RVA = "0x590CBF0", Offset = "0x590BBF0", VA = "0x590CBF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_QuaternionRotation): clean
			BaseCharacter pCVar1;
			BaseComponentCache pUVar2;
			Transform __this_00;
			CustomLogicQuaternionBuiltin __this_01;
			Quaternion value;

			pCVar1 = this.Character;
			if (((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) ||(__this_00 = pUVar2.Transform, __this_00 == null)) {
				throw new NullReferenceException();
			}
			value = __this_00.rotation;
			__this_01 = new CustomLogicQuaternionBuiltin(value);
			return __this_01;
		}
		[Token(Token = "0x60020D7")]
		[Address(RVA = "0x590CC80", Offset = "0x590BC80", VA = "0x590CC80")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_QuaternionRotation): clean
			BaseCharacter pCVar1;
			BaseComponentCache pUVar2;
			Transform __this_00;
			bool bVar3;

			pCVar1 = this.Character;
			if (pCVar1 != null) {
				bVar3 = pCVar1.IsMine();
				if (!bVar3) {
					return;
				}
				pCVar1 = this.Character;
				if ((((pCVar1 != null) &&(pUVar2 = pCVar1.Cache, pUVar2 != null)) &&(value != null)) &&(__this_00 = pUVar2.Transform, __this_00 != null)) {
					__this_00.rotation = (Quaternion)value.Value;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003EB")]
	public CustomLogicVector3Builtin Velocity
	{
		[Token(Token = "0x60020D8")]
		[Address(RVA = "0x590CD00", Offset = "0x590BD00", VA = "0x590CD00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_Velocity): clean
			BaseCharacter __this_00;
			CustomLogicVector3Builtin __this_01;
			Vector3 value;

			__this_00 = this.Character;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			value = __this_00.GetVelocity();
			__this_01 = new CustomLogicVector3Builtin(value);
			return __this_01;
		}
		[Token(Token = "0x60020D9")]
		[Address(RVA = "0x590CD80", Offset = "0x590BD80", VA = "0x590CD80")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_Velocity): clean
			BaseCharacter pCVar1;
			BaseComponentCache pUVar2;
			Rigidbody __this_00;
			bool bVar3;

			pCVar1 = this.Character;
			if (pCVar1 != null) {
				bVar3 = pCVar1.IsMine();
				if (!bVar3) {
					return;
				}
				pCVar1 = this.Character;
				if (pCVar1 != null) {
					pCVar1.SetKinematic(false, 1.0);
					pCVar1 = this.Character;
					if ((((pCVar1 != null) &&(pUVar2 = pCVar1.Cache, pUVar2 != null)) &&(value != null)) &&(__this_00 = pUVar2.Rigidbody, __this_00 != null)) {
						__this_00.linearVelocity = (Vector3)value.Value;
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003EC")]
	public CustomLogicVector3Builtin Forward
	{
		[Token(Token = "0x60020DA")]
		[Address(RVA = "0x590CE10", Offset = "0x590BE10", VA = "0x590CE10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_Forward): clean
			BaseCharacter pCVar1;
			BaseComponentCache pUVar2;
			Transform __this_00;
			CustomLogicVector3Builtin __this_01;
			Vector3 value;

			pCVar1 = this.Character;
			if (((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) ||(__this_00 = pUVar2.Transform, __this_00 == null)) {
				throw new NullReferenceException();
			}
			value = __this_00.forward;
			__this_01 = new CustomLogicVector3Builtin(value);
			return __this_01;
		}
		[Token(Token = "0x60020DB")]
		[Address(RVA = "0x590CEA0", Offset = "0x590BEA0", VA = "0x590CEA0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_Forward): clean
			BaseCharacter pCVar1;
			BaseComponentCache pUVar2;
			Transform __this_00;
			bool bVar3;

			pCVar1 = this.Character;
			if (pCVar1 != null) {
				bVar3 = pCVar1.IsMine();
				if (!bVar3) {
					return;
				}
				pCVar1 = this.Character;
				if ((((pCVar1 != null) &&(pUVar2 = pCVar1.Cache, pUVar2 != null)) &&(value != null)) &&(__this_00 = pUVar2.Transform, __this_00 != null)) {
					__this_00.forward = (Vector3)value.Value;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003ED")]
	public CustomLogicVector3Builtin Right
	{
		[Token(Token = "0x60020DC")]
		[Address(RVA = "0x590CF20", Offset = "0x590BF20", VA = "0x590CF20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_Right): clean
			BaseCharacter pCVar1;
			BaseComponentCache pUVar2;
			Transform __this_00;
			CustomLogicVector3Builtin __this_01;
			Vector3 value;

			pCVar1 = this.Character;
			if (((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) ||(__this_00 = pUVar2.Transform, __this_00 == null)) {
				throw new NullReferenceException();
			}
			value = __this_00.right;
			__this_01 = new CustomLogicVector3Builtin(value);
			return __this_01;
		}
		[Token(Token = "0x60020DD")]
		[Address(RVA = "0x590CFB0", Offset = "0x590BFB0", VA = "0x590CFB0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_Right): clean
			BaseCharacter pCVar1;
			BaseComponentCache pUVar2;
			Transform __this_00;
			bool bVar3;

			pCVar1 = this.Character;
			if (pCVar1 != null) {
				bVar3 = pCVar1.IsMine();
				if (!bVar3) {
					return;
				}
				pCVar1 = this.Character;
				if ((((pCVar1 != null) &&(pUVar2 = pCVar1.Cache, pUVar2 != null)) &&(value != null)) &&(__this_00 = pUVar2.Transform, __this_00 != null)) {
					__this_00.right = (Vector3)value.Value;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003EE")]
	public CustomLogicVector3Builtin Up
	{
		[Token(Token = "0x60020DE")]
		[Address(RVA = "0x590D030", Offset = "0x590C030", VA = "0x590D030")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_Up): clean
			BaseCharacter pCVar1;
			BaseComponentCache pUVar2;
			Transform __this_00;
			CustomLogicVector3Builtin __this_01;
			Vector3 value;

			pCVar1 = this.Character;
			if (((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) ||(__this_00 = pUVar2.Transform, __this_00 == null)) {
				throw new NullReferenceException();
			}
			value = __this_00.up;
			__this_01 = new CustomLogicVector3Builtin(value);
			return __this_01;
		}
		[Token(Token = "0x60020DF")]
		[Address(RVA = "0x590D0C0", Offset = "0x590C0C0", VA = "0x590D0C0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_Up): clean
			BaseCharacter pCVar1;
			BaseComponentCache pUVar2;
			Transform __this_00;
			bool bVar3;

			pCVar1 = this.Character;
			if (pCVar1 != null) {
				bVar3 = pCVar1.IsMine();
				if (!bVar3) {
					return;
				}
				pCVar1 = this.Character;
				if ((((pCVar1 != null) &&(pUVar2 = pCVar1.Cache, pUVar2 != null)) &&(value != null)) &&(__this_00 = pUVar2.Transform, __this_00 != null)) {
					__this_00.up = (Vector3)value.Value;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003EF")]
	public bool HasTargetDirection
	{
		[Token(Token = "0x60020E0")]
		[Address(RVA = "0x590D140", Offset = "0x590C140", VA = "0x590D140")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_HasTargetDirection): clean
			BaseCharacter pCVar1;

			pCVar1 = this.Character;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.HasDirection;
		}
	}

	[Token(Token = "0x170003F0")]
	public CustomLogicVector3Builtin TargetDirection
	{
		[Token(Token = "0x60020E1")]
		[Address(RVA = "0x590D160", Offset = "0x590C160", VA = "0x590D160")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_TargetDirection): clean
			BaseCharacter pCVar1;
			CustomLogicVector3Builtin __this_00;
			Vector3 value;

			pCVar1 = this.Character;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			value = pCVar1.GetTargetDirection();
			__this_00 = new CustomLogicVector3Builtin(value);
			return __this_00;
		}
		[Token(Token = "0x60020E2")]
		[Address(RVA = "0x590D1E0", Offset = "0x590C1E0", VA = "0x590D1E0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_TargetDirection): 1 lines keep C-only constructs
			BaseCharacter pCVar1;
			Vector3 UVar3;
			Vector3 euler;
			Quaternion local_28;
			Vector3 local_18;

			if (value != null) {
				pCVar1 = this.Character;
				local_28._0_12_ = value.Value;
				local_18.x = (Vector3.upVector).x;
				local_18.y = (Vector3.upVector).y;
				local_18.z = (Vector3.upVector).z;
				local_28 = Quaternion.Internal_LookRotation(ref local_28, ref local_18);
				UVar3 = Quaternion.Internal_ToEulerRad(ref local_28);
				euler.x = UVar3.x * 57.29578;
				euler.y = UVar3.y * 57.29578;
				euler.z = UVar3.z * 57.29578;
				UVar3 = Quaternion.Internal_MakePositive(euler);
				if (pCVar1 != null) {
					pCVar1.TargetAngle = UVar3.y;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003F1")]
	public string Team
	{
		[Token(Token = "0x60020E3")]
		[Address(RVA = "0x590D2A0", Offset = "0x590C2A0", VA = "0x590D2A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_Team): clean
			BaseCharacter pCVar1;

			pCVar1 = this.Character;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.Team;
		}
		[Token(Token = "0x60020E4")]
		[Address(RVA = "0x590D2C0", Offset = "0x590C2C0", VA = "0x590D2C0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_Team): clean
			BaseCharacter pCVar1;
			bool bVar2;

			pCVar1 = this.Character;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (!bVar2) {
					return;
				}
				pCVar1 = this.Character;
				if (pCVar1 != null) {
					pCVar1.SetTeam(value);
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003F2")]
	public float Health
	{
		[Token(Token = "0x60020E5")]
		[Address(RVA = "0x590D310", Offset = "0x590C310", VA = "0x590D310")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_Health): clean
			BaseCharacter pCVar1;

			pCVar1 = this.Character;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return (float)pCVar1.CurrentHealth;
		}
		[Token(Token = "0x60020E6")]
		[Address(RVA = "0x590D330", Offset = "0x590C330", VA = "0x590D330")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_Health): clean
			BaseCharacter pCVar1;
			bool bVar2;

			pCVar1 = this.Character;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (!bVar2) {
					return;
				}
				pCVar1 = this.Character;
				if (pCVar1 != null) {
					pCVar1.SetCurrentHealth((int)value);
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003F3")]
	public float MaxHealth
	{
		[Token(Token = "0x60020E7")]
		[Address(RVA = "0x590D390", Offset = "0x590C390", VA = "0x590D390")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_MaxHealth): clean
			BaseCharacter pCVar1;

			pCVar1 = this.Character;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return (float)pCVar1.MaxHealth;
		}
		[Token(Token = "0x60020E8")]
		[Address(RVA = "0x590D3B0", Offset = "0x590C3B0", VA = "0x590D3B0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_MaxHealth): clean
			BaseCharacter pCVar1;
			bool bVar2;

			pCVar1 = this.Character;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (!bVar2) {
					return;
				}
				pCVar1 = this.Character;
				if (pCVar1 != null) {
					pCVar1.SetMaxHealth((int)value);
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003F4")]
	public bool CustomDamageEnabled
	{
		[Token(Token = "0x60020E9")]
		[Address(RVA = "0x590D410", Offset = "0x590C410", VA = "0x590D410")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_CustomDamageEnabled): clean
			BaseCharacter pCVar1;

			pCVar1 = this.Character;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.CustomDamageEnabled;
		}
		[Token(Token = "0x60020EA")]
		[Address(RVA = "0x590D430", Offset = "0x590C430", VA = "0x590D430")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_CustomDamageEnabled): clean
			BaseCharacter pCVar1;
			bool bVar2;

			pCVar1 = this.Character;
			if (pCVar1 == null) {
		label_05a0d469: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Character;
				if (pCVar1 == null) goto label_05a0d469;
				pCVar1.CustomDamageEnabled = value;
			}
			return;
		}
	}

	[Token(Token = "0x170003F5")]
	public int CustomDamage
	{
		[Token(Token = "0x60020EB")]
		[Address(RVA = "0x590D470", Offset = "0x590C470", VA = "0x590D470")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_CustomDamage): clean
			BaseCharacter pCVar1;

			pCVar1 = this.Character;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.CustomDamage;
		}
		[Token(Token = "0x60020EC")]
		[Address(RVA = "0x590D490", Offset = "0x590C490", VA = "0x590D490")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$set_CustomDamage): clean
			BaseCharacter pCVar1;
			bool bVar2;

			pCVar1 = this.Character;
			if (pCVar1 == null) {
		label_05a0d4c8: ;
				throw new NullReferenceException();
			}
			bVar2 = pCVar1.IsMine();
			if (bVar2) {
				pCVar1 = this.Character;
				if (pCVar1 == null) goto label_05a0d4c8;
				pCVar1.CustomDamage = value;
			}
			return;
		}
	}

	[Token(Token = "0x170003F6")]
	public string CurrentAnimation
	{
		[Token(Token = "0x60020ED")]
		[Address(RVA = "0x590D4D0", Offset = "0x590C4D0", VA = "0x590D4D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_CurrentAnimation): clean
			BaseCharacter __this_00;
			String pSVar1;

			__this_00 = this.Character;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pSVar1;
		}
	}

	[Token(Token = "0x170003F7")]
	public bool Grounded
	{
		[Token(Token = "0x60020EE")]
		[Address(RVA = "0x590D4F0", Offset = "0x590C4F0", VA = "0x590D4F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_Grounded): clean
			BaseCharacter pCVar1;

			pCVar1 = this.Character;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			return pCVar1.Grounded;
		}
	}

	[Token(Token = "0x170003F8")]
	public CustomLogicRigidbodyBuiltin Rigidbody
	{
		[Token(Token = "0x60020EF")]
		[Address(RVA = "0x590D510", Offset = "0x590C510", VA = "0x590D510")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_Rigidbody): clean
			BaseCharacter pCVar1;
			BaseComponentCache pUVar2;
			Rigidbody rb;
			CustomLogicRigidbodyBuiltin __this_00;

			pCVar1 = this.Character;
			if ((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) {
				throw new NullReferenceException();
			}
			rb = pUVar2.Rigidbody;
			__this_00 = new CustomLogicRigidbodyBuiltin((BuiltinClassInstance)this, rb);
			return __this_00;
		}
	}

	[Token(Token = "0x170003F9")]
	public override string ClassName
	{
		[Token(Token = "0x6002108")]
		[Address(RVA = "0x590E200", Offset = "0x590D200", VA = "0x590E200", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_ClassName): clean
			return "Character";
		}
	}

	[Token(Token = "0x170003FA")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002109")]
		[Address(RVA = "0x590E230", Offset = "0x590D230", VA = "0x590E230", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170003FB")]
	public override bool IsStatic
	{
		[Token(Token = "0x600210A")]
		[Address(RVA = "0x590E240", Offset = "0x590D240", VA = "0x590E240", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x170003FC")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600210B")]
		[Address(RVA = "0x590E250", Offset = "0x590D250", VA = "0x590E250", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60020BB")]
	[Address(RVA = "0x590BAB0", Offset = "0x590AAB0", VA = "0x590BAB0")]
	public object GetTarget()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$GetTarget): clean
		BaseAIController __this_00;
		object pIVar1;

		__this_00 = this.AIController;
		if (__this_00 == null) {
			pIVar1 = CustomLogicCharacterBuiltin.WrapTarget(null);
			return pIVar1;
		}
		return pIVar1;
	}

	[Token(Token = "0x60020BC")]
	[Address(RVA = "0x590C050", Offset = "0x590B050", VA = "0x590C050")]
	public void SetTarget(object target, float focusDuration = 0f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$SetTarget): clean
		bool bVar1;
		BaseTitanAIController __this_00;
		ITargetable enemy;

		__this_00 = (BaseTitanAIController)this.AIController;
		bVar1 = ((Object)__this_00 != null);
		if (bVar1) {
			enemy = CustomLogicCharacterBuiltin.UnwrapTarget(target);
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.SetTarget(enemy, focusDuration);
			return;
		}
		return;
	}

	[Token(Token = "0x60020BD")]
	[Address(RVA = "0x590C1D0", Offset = "0x590B1D0", VA = "0x590C1D0")]
	public void ClearTarget()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$ClearTarget): clean
		BaseAIController __this_00;

		__this_00 = this.AIController;
		if (__this_00 == null) {
			return;
		}
		__this_00.ClearTarget();
		return;
	}

	[Token(Token = "0x60020BE")]
	[Address(RVA = "0x590C1F0", Offset = "0x590B1F0", VA = "0x590C1F0")]
	public object GetNearestEnemy()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$GetNearestEnemy): clean
		BaseAIController __this_00;
		object pIVar1;

		__this_00 = this.AIController;
		if (__this_00 == null) {
			pIVar1 = CustomLogicCharacterBuiltin.WrapTarget(null);
			return pIVar1;
		}
		return pIVar1;
	}

	[Token(Token = "0x60020BF")]
	[Address(RVA = "0x590C220", Offset = "0x590B220", VA = "0x590C220")]
	public void TargetNearestEnemy(float focusDuration = 0f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$TargetNearestEnemy): clean
		BaseAIController __this_00;

		__this_00 = this.AIController;
		if (__this_00 == null) {
			return;
		}
		__this_00.TargetNearestEnemy(focusDuration);
		return;
	}

	[Token(Token = "0x60020C0")]
	[Address(RVA = "0x590C250", Offset = "0x590B250", VA = "0x590C250")]
	public void MoveTo(CustomLogicVector3Builtin position, float range, bool ignoreEnemies = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$MoveTo): 1 lines keep C-only constructs
		byte bVar1;
		Horse __this_00;
		bool bVar2;
		BaseAIController __this_01;

		__this_00 = (Horse)this.Character;
		if (__this_00 != null) {
			bVar1 = (typeof(Horse)._2).typeHierarchyDepth;
			if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Horse))) {
				if (position != null) {
					__this_00.MoveTo((Vector3)position.Value, range);
					return;
				}
				goto label_05a0c352;
			}
		}
		__this_01 = this.AIController;
		bVar2 = ((Object)__this_01 != null);
		if (!bVar2) {
			return;
		}
		if ((position != null) &&(__this_01 != null)) {
			__this_01.MoveTo((Vector3)position.Value, range, ignoreEnemies);
			return;
		}
	label_05a0c352: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60020C1")]
	[Address(RVA = "0x590C360", Offset = "0x590B360", VA = "0x590C360")]
	public void MoveToTarget(object target, float range, bool ignoreEnemies = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$MoveToTarget): 3 lines keep C-only constructs
		byte bVar1;
		Horse __this_00;
		bool bVar2;
		BaseAIController __this_01;
		ITargetable target_00;
		Il2CppClass target_01;

		__this_00 = (Horse)this.Character;
		if (__this_00 == null) {
	label_05a0c3de: ;
			__this_01 = this.AIController;
			bVar2 = ((Object)__this_01 != null);
			if (bVar2) {
				target_00 = CustomLogicCharacterBuiltin.UnwrapTarget(target);
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				__this_01.MoveToTarget(target_00, range, ignoreEnemies);
				return;
			}
			return;
		}
		bVar1 = (typeof(Horse)._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Horse))) goto label_05a0c3de;
		if (target != null) {
			bVar1 = (typeof(CustomLogicCharacterBuiltin)._2).typeHierarchyDepth;
			if ((bVar1 <= (target.klass._2).typeHierarchyDepth) &&((target.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicCharacterBuiltin))) {
				target_01 = target[3].klass;
				goto label_05a0c477;
			}
		}
		target_01 = null;
	label_05a0c477: ;
		__this_00.ComeTo((BaseCharacter)target_01, range);
		return;
	}

	[Token(Token = "0x60020C2")]
	[Address(RVA = "0x590C4A0", Offset = "0x590B4A0", VA = "0x590C4A0")]
	public void Idle(float time = -1f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$Idle): 3 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		Horse __this_00;
		Horse pCVar3;
		BaseAIController __this_01;

		__this_00 = (Horse)this.Character;
		if (__this_00 == null) {
			if ((time != -1.0) || (NAN(time))) goto label_05a0c559;
		}
		else {
			pCVar3 = __this_00.klass;
			bVar1 = (pCVar3._2).typeHierarchyDepth;
			bVar2 = (typeof(Horse)._2).typeHierarchyDepth;
			method = (MethodInfo)(ulong)bVar2;
			if ((bVar2 <= bVar1) &&((pCVar3._2).typeHierarchy[(long)&method[-1].field_0x57] == typeof(Horse))) {
				__this_00.Stay();
				return;
			}
			if ((time != -1.0) || (NAN(time))) goto label_05a0c559;
			bVar2 = (typeof(Human)._2).typeHierarchyDepth;
			method = (MethodInfo)(ulong)bVar2;
			if ((bVar2 <= bVar1) &&((pCVar3._2).typeHierarchy[(long)&method[-1].field_0x57] == typeof(Human))) {
				time = 0.0;
				goto label_05a0c559;
			}
		}
		time = INFINITY;
	label_05a0c559: ;
		__this_01 = this.AIController;
		if (__this_01 == null) {
			return;
		}
		__this_01.IdleFor(time);
		return;
	}

	[Token(Token = "0x60020C3")]
	[Address(RVA = "0x590C0F0", Offset = "0x590B0F0", VA = "0x590C0F0")]
	protected static ITargetable UnwrapTarget(object target)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$UnwrapTarget): 6 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		Il2CppClass pIVar3;
		ArgumentException __this;
		String message;
		MethodInfo lastManagedFrame;

		if (target == null) {
			return null;
		}
		pIVar3 = target.klass;
		bVar1 = (pIVar3._2).typeHierarchyDepth;
		bVar2 = (typeof(CustomLogicCharacterBuiltin)._2).typeHierarchyDepth;
		if ((bVar2 <= bVar1) &&((pIVar3._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicCharacterBuiltin))) {
			return (ITargetable)target[3].klass;
		}
		bVar2 = (typeof(CustomLogicMapTargetableBuiltin)._2).typeHierarchyDepth;
		if ((bVar1 < bVar2) ||((pIVar3._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicMapTargetableBuiltin))) {
			pIVar3 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(pIVar3);
			message = il2cpp_codegen_get_runtime_metadata(&"Target must be a Character, MapTargetable, or null.");
			__this = new ArgumentException(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_UnwrapTarget) ;
			throw (object)__this;
		}
		return target[3].monitor;
	}

	[Token(Token = "0x60020C4")]
	[Address(RVA = "0x590BEF0", Offset = "0x590AEF0", VA = "0x590BEF0")]
	private static object WrapTarget(ITargetable target)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$WrapTarget): 1 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		ITargetable pCVar3;
		CustomLogicCharacterBuiltin pCVar4;
		GameObject pUVar5;
		CustomLogicMapTargetableBuiltin __this;

		if (target != null) {
			pCVar3 = target.klass;
			bVar1 = (pCVar3._2).typeHierarchyDepth;
			bVar2 = (typeof(MapTargetable)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(MapTargetable))) {
				pUVar5 = target.GameObject;
				__this = new CustomLogicMapTargetableBuiltin();
				__this._GameObject_k__BackingField = pUVar5;
				__this._Value_k__BackingField = (MapTargetable)target;
				return (object)__this;
			}
			bVar2 = (typeof(BaseCharacter)._2).typeHierarchyDepth;
			if (bVar2 <= bVar1) {
				if ((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BaseCharacter)) {
					return null;
				}
				pCVar4 = CustomLogicEvaluator.GetCharacterBuiltin((BaseCharacter)target);
				return (object)pCVar4;
			}
		}
		return null;
	}

	[Token(Token = "0x60020C5")]
	[Address(RVA = "0x590C5A0", Offset = "0x590B5A0", VA = "0x590C5A0")]
	protected CustomLogicCharacterBuiltin(BaseCharacter character)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$.ctor): 4 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		ulong in_RAX;
		object value;
		ulong uStack_18;

		uStack_18 = in_RAX;
		base();
		this.Character = character;
		__this_00 = (Dictionary<object, object>)this.Variables;
		uStack_18 = CONCAT17(1, (undefined7)uStack_18);
		value = (object)(((long)&uStack_18 + 7));
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.set_Item((Il2CppObject *)"IsCharacter", value);
		return;
	}

	[Token(Token = "0x60020C8")]
	[Address(RVA = "0x590C6A0", Offset = "0x590B6A0", VA = "0x590C6A0")]
	public void SetDisplayName(string name, bool showTag = true)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$SetDisplayName): clean
		BaseCharacter pCVar1;
		bool bVar2;

		pCVar1 = this.Character;
		if (name == null) {
			name = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (pCVar1 != null) {
			pCVar1.Name = name;
			pCVar1 = this.Character;
			if (pCVar1 != null) {
				if (pCVar1.AI != false) {
					if (showTag) {
						bVar2 = String.IsNullOrWhiteSpace(pCVar1.VisibleName);
						bVar2 = !bVar2;
					}
					else {
						bVar2 = false;
					}
					pCVar1.HasExplicitNameTag = bVar2;
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60020F0")]
	[Address(RVA = "0x590D580", Offset = "0x590C580", VA = "0x590D580")]
	public void GetKilled(string killer)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$GetKilled): clean
		BaseCharacter pCVar1;

		pCVar1 = this.Character;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pCVar1.GetKilled(killer);
		return;
	}

	[Token(Token = "0x60020F1")]
	[Address(RVA = "0x590D5B0", Offset = "0x590C5B0", VA = "0x590D5B0")]
	public void GetDamaged(string killer, int damage)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$GetDamaged): clean
		BaseCharacter pCVar1;

		pCVar1 = this.Character;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pCVar1.GetDamaged(killer, damage);
		return;
	}

	[Token(Token = "0x60020F2")]
	[Address(RVA = "0x590D5E0", Offset = "0x590C5E0", VA = "0x590D5E0")]
	public void Emote(string emote)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$Emote): clean
		BaseCharacter pCVar1;
		bool bVar2;

		pCVar1 = this.Character;
		if (pCVar1 == null) {
	label_05a0d63b: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = this.Character;
			if (pCVar1 == null) goto label_05a0d63b;
			if (pCVar1.Dead == false) {
				pCVar1.Emote(emote);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60020F3")]
	[Address(RVA = "0x590D640", Offset = "0x590C640", VA = "0x590D640")]
	public void PlayAnimation(string animation, float fade = 0.1f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$PlayAnimation): clean
		BaseCharacter pCVar1;
		bool bVar2;

		pCVar1 = this.Character;
		if (pCVar1 == null) {
	label_05a0d69e: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = this.Character;
			if (pCVar1 == null) goto label_05a0d69e;
			if (pCVar1.Dead == false) {
				pCVar1.CrossFadeIfNotPlaying(animation, fade, 0.0);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60020F4")]
	[Address(RVA = "0x590D6B0", Offset = "0x590C6B0", VA = "0x590D6B0")]
	public void PlayAnimationAt(string animation, float t, float fade = 0.1f, bool force = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$PlayAnimationAt): clean
		BaseCharacter pCVar1;
		bool bVar2;

		pCVar1 = this.Character;
		if (pCVar1 == null) {
	label_05a0d73f: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = this.Character;
			if (pCVar1 == null) goto label_05a0d73f;
			if (pCVar1.Dead == false) {
				if (force) {
					pCVar1.CrossFade(animation, fade, t);
					return;
				}
				pCVar1.CrossFadeIfNotPlaying(animation, fade, t);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60020F5")]
	[Address(RVA = "0x590D750", Offset = "0x590C750", VA = "0x590D750")]
	public float GetAnimationSpeed(string animation)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$GetAnimationSpeed): clean
		BaseCharacter pCVar1;
		bool bVar2;
		float fVar3;

		pCVar1 = this.Character;
		if (pCVar1 == null) {
	label_05a0d7a7: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = this.Character;
			if (pCVar1 == null) goto label_05a0d7a7;
			if (pCVar1.Dead == false) {
				return fVar3;
			}
		}
		return 1.0;
	}

	[Token(Token = "0x60020F6")]
	[Address(RVA = "0x590D7B0", Offset = "0x590C7B0", VA = "0x590D7B0")]
	public void SetAnimationSpeed(string animation, float speed, bool synced = true)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$SetAnimationSpeed): clean
		BaseCharacter pCVar1;
		bool bVar2;

		pCVar1 = this.Character;
		if (pCVar1 == null) {
	label_05a0d82d: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = this.Character;
			if (pCVar1 == null) goto label_05a0d82d;
			if (pCVar1.Dead == false) {
				if (synced) {
					pCVar1.SetAnimationSpeed(animation, speed);
					return;
				}
				pCVar1.SetAnimationSpeedNonRPC(animation, speed);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60020F7")]
	[Address(RVA = "0x590D840", Offset = "0x590C840", VA = "0x590D840")]
	public bool IsPlayingAnimation(string animation)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$IsPlayingAnimation): clean
		BaseCharacter pCVar1;
		AnimationHandler __this_00;
		bool bVar2;

		pCVar1 = this.Character;
		if ((pCVar1 == null) ||(__this_00 = pCVar1.Animation, __this_00 == null)) {
			throw new NullReferenceException();
		}
		return bVar2;
	}

	[Token(Token = "0x60020F8")]
	[Address(RVA = "0x590D870", Offset = "0x590C870", VA = "0x590D870")]
	public float GetAnimationNormalizedTime(string animation)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$GetAnimationNormalizedTime): clean
		BaseCharacter pCVar1;
		AnimationHandler pCVar2;
		bool bVar3;
		float fVar4;

		pCVar1 = this.Character;
		if ((pCVar1 != null) &&(pCVar2 = pCVar1.Animation, pCVar2 != null)) {
			bVar3 = pCVar2.IsPlaying(animation);
			if (!bVar3) {
				return 1.0;
			}
			pCVar1 = this.Character;
			if ((pCVar1 != null) &&(pCVar2 = pCVar1.Animation, pCVar2 != null)) {
				return fVar4;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60020F9")]
	[Address(RVA = "0x590D8C0", Offset = "0x590C8C0", VA = "0x590D8C0")]
	public void ForceAnimation(string animation, float fade = 0.1f)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$ForceAnimation): clean
		BaseCharacter pCVar1;
		bool bVar2;

		pCVar1 = this.Character;
		if (pCVar1 == null) {
	label_05a0d927: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = this.Character;
			if (pCVar1 == null) goto label_05a0d927;
			if (pCVar1.Dead == false) {
				pCVar1.ForceAnimation(animation, fade);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60020FA")]
	[Address(RVA = "0x590D930", Offset = "0x590C930", VA = "0x590D930")]
	public float GetAnimationLength(string animation)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$GetAnimationLength): clean
		BaseCharacter pCVar1;
		AnimationHandler __this_00;
		float fVar2;

		pCVar1 = this.Character;
		if ((pCVar1 == null) ||(__this_00 = pCVar1.Animation, __this_00 == null)) {
			throw new NullReferenceException();
		}
		return fVar2;
	}

	[Token(Token = "0x60020FB")]
	[Address(RVA = "0x590D960", Offset = "0x590C960", VA = "0x590D960")]
	public bool IsPlayingSound(string sound)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$IsPlayingSound): clean
		BaseCharacter __this_00;
		bool bVar1;

		__this_00 = this.Character;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	[Token(Token = "0x60020FC")]
	[Address(RVA = "0x590D980", Offset = "0x590C980", VA = "0x590D980")]
	public void PlaySound(string sound, bool local = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$PlaySound): 1 lines keep C-only constructs
		BaseCharacter pCVar1;
		PhotonMessageInfo PVar2;
		bool bVar3;
		PhotonMessageInfo local_38;

		pCVar1 = this.Character;
		if (pCVar1 != null) {
			if ((pCVar1.Dead != false) ||(bVar3 = pCVar1.IsPlayingSound(sound))) {
				return;
			}
			pCVar1 = this.Character;
			if (local) {
				local_38 = Util.CreateLocalPhotonInfo();
				if (pCVar1 != null) {
					PVar2.Sender = local_38.Sender;
					PVar2.timeInt = local_38.timeInt;
					PVar2._4_4_ = local_38._4_4_;
					PVar2.photonView = local_38.photonView;
					pCVar1.PlaySoundRPC(sound, PVar2);
					return;
				}
			}
			else if (pCVar1 != null) {
				bVar3 = pCVar1.IsMine();
				if (!bVar3) {
					return;
				}
				pCVar1 = this.Character;
				if (pCVar1 != null) {
					pCVar1.PlaySound(sound);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60020FD")]
	[Address(RVA = "0x590DA80", Offset = "0x590CA80", VA = "0x590DA80")]
	public void StopSound(string sound)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$StopSound): clean
		BaseCharacter pCVar1;
		bool bVar2;

		pCVar1 = this.Character;
		if (pCVar1 == null) {
	label_05a0dae6: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = this.Character;
			if (pCVar1 == null) goto label_05a0dae6;
			if (pCVar1.Dead == false) {
				bVar2 = pCVar1.IsPlayingSound(sound);
				if (bVar2) {
					pCVar1 = this.Character;
					if (pCVar1 != null) {
						pCVar1.StopSound(sound);
						return;
					}
					goto label_05a0dae6;
				}
			}
		}
		return;
	}

	[Token(Token = "0x60020FE")]
	[Address(RVA = "0x590DAF0", Offset = "0x590CAF0", VA = "0x590DAF0")]
	public void FadeSound(string sound, float volume, float time)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$FadeSound): clean
		BaseCharacter pCVar1;
		bool bVar2;

		pCVar1 = this.Character;
		if (pCVar1 == null) {
	label_05a0db55: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = this.Character;
			if (pCVar1 == null) goto label_05a0db55;
			if (pCVar1.Dead == false) {
				pCVar1.FadeSound(sound, volume, time);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60020FF")]
	[Address(RVA = "0x590DB60", Offset = "0x590CB60", VA = "0x590DB60")]
	public void LookAt(CustomLogicVector3Builtin position)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$LookAt): clean
		BaseCharacter pCVar1;
		BaseComponentCache pUVar2;
		Transform __this_00;
		bool bVar3;

		pCVar1 = this.Character;
		if (pCVar1 != null) {
			bVar3 = pCVar1.IsMine();
			if (!bVar3) {
				return;
			}
			pCVar1 = this.Character;
			if (pCVar1 != null) {
				if (pCVar1.Dead != false) {
					return;
				}
				pUVar2 = pCVar1.Cache;
				if (((pUVar2 != null) &&(position != null)) &&(__this_00 = pUVar2.Transform, __this_00 != null)) {
					__this_00.LookAt((Vector3)position.Value);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002100")]
	[Address(RVA = "0x590DBE0", Offset = "0x590CBE0", VA = "0x590DBE0")]
	public void AddForce(CustomLogicVector3Builtin force, object mode)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$AddForce): 15 lines keep C-only constructs
		BaseCharacter pCVar1;
		BaseComponentCache pUVar2;
		Il2CppType handle;
		bool bVar3;
		int piVar4;
		Type enumType;
		object value;
		String pSVar5;
		Il2CppClass klass;
		ArgumentException __this_00;
		MethodInfo lastManagedFrame;
		int mode_00;
		Rigidbody __this_01;
		String* metadataPointer;
		ulong uVar6;
		float fVar7;
		Vector3 force_00;
		int local_3c;
		int local_38;
		int local_34;

		local_3c = 0;
		pCVar1 = this.Character;
		if (pCVar1 == null) {
	label_05a0ddcb: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (!bVar3) {
			return;
		}
		pCVar1 = this.Character;
		if (pCVar1 == null) goto label_05a0ddcb;
		pCVar1.SetKinematic(false, 1.0);
		if (mode == null) {
	label_05a0ddd0: ;
			metadataPointer = &"Invalid force mode: {0}";
		}
		else {
			if (mode.klass != g_data_07556710) {
				if (mode.klass == g_data_07556758) {
					bVar3 = Enum.TryParse<ForceMode>((String)mode, ref local_3c);
					if (bVar3) {
						pCVar1 = this.Character;
						if (((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) ||((force == null ||(__this_01 = pUVar2.Rigidbody, __this_01 == null)))) goto label_05a0ddcb;
						fVar7 = force.Value.z;
						uVar6._0_4_ = force.Value.x;
						uVar6._4_4_ = force.Value.y;
						mode_00 = local_3c;
						goto label_05a0ddb5;
					}
					pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown force mode: ");
					pSVar5 = String.Concat(pSVar5, (String)mode);
					goto label_05a0de23;
				}
				goto label_05a0ddd0;
			}
			piVar4 = il2cpp_vm_Object_Unbox(mode);
			handle = TypeRef_UnityEngine_ForceMode;
			mode_00 = *piVar4;
			enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			local_34 = mode_00;
			value = (object)local_34;
			bVar3 = Enum.IsDefined(enumType, value);
			if (bVar3) {
				pCVar1 = this.Character;
				if ((((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) ||(force == null)) ||(__this_01 = pUVar2.Rigidbody, __this_01 == null)) goto label_05a0ddcb;
				fVar7 = force.Value.z;
				uVar6._0_4_ = force.Value.x;
				uVar6._4_4_ = force.Value.y;
	label_05a0ddb5: ;
				force_00.z = fVar7;
				force_00.x = (float)(int)uVar6;
				force_00.y = (float)(int)((ulong)uVar6 >> 0x20);
				__this_01.AddForce(force_00, mode_00);
				return;
			}
			local_38 = mode_00;
			mode = (object)local_38;
			metadataPointer = &"Unknown force mode: {0}";
		}
		pSVar5 = il2cpp_codegen_get_runtime_metadata(metadataPointer);
		pSVar5 = String.Format(pSVar5, mode);
	label_05a0de23: ;
		klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
		__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
		__this_00 = new ArgumentException(pSVar5);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_AddForce);
		throw (object)__this_00;
	}

	[Token(Token = "0x6002101")]
	[Address(RVA = "0x590DE70", Offset = "0x590CE70", VA = "0x590DE70")]
	public void Reveal(float delay)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$Reveal): clean
		BaseCharacter __this_00;

		__this_00 = this.Character;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Reveal(0.0, delay);
		return;
	}

	[Token(Token = "0x6002102")]
	[Address(RVA = "0x590DE90", Offset = "0x590CE90", VA = "0x590DE90")]
	public void AddOutline([Optional] CustomLogicColorBuiltin color, string mode = "OutlineAll")
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$AddOutline): 21 lines keep C-only constructs
		uint uVar1;
		Color255 __this_00;
		BaseCharacter __this_01;
		bool bVar2;
		String pSVar3;
		Il2CppClass klass;
		ArgumentException __this_02;
		MethodInfo lastManagedFrame;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Color UVar4;
		int local_3c;
		byte[] local_38 = new byte[16];
		byte[] local_28 = new byte[16];

		local_3c = 0;
		if (color == null) {
			local_28 = ZEXT816(0x3f8000003f800000);
			local_38 = ZEXT816(0x3f8000003f800000);
			uVar1 = (g_data_07556760._2).cctor_finished_or_no_cctor;
		}
		else {
			__this_00 = color.Value;
			if (__this_00 == null) goto label_05a0df72;
			UVar4 = __this_00.ToColor();
			local_28._8_4_ = extraout_XMM0_Dc;
			local_28._0_8_ = UVar4._0_8_;
			local_28._12_4_ = extraout_XMM0_Dd;
			local_38._8_4_ = in_XMM1_Dc;
			local_38._0_8_ = UVar4._8_8_;
			local_38._12_4_ = in_XMM1_Dd;
			uVar1 = (g_data_07556760._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = Enum.TryParse<Outline.Mode>(mode, ref local_3c);
		if (!bVar2) {
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown outline mode: ");
			pSVar3 = String.Concat(pSVar3, mode);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_02 = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this_02 = new ArgumentException(pSVar3);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_AddOutline);
			throw (object)__this_02;
		}
		__this_01 = this.Character;
		if (__this_01 != null) {
			UVar4.b = (float)local_38._0_4_;
			UVar4.a = (float)local_38._4_4_;
			UVar4.r = (float)local_28._0_4_;
			UVar4.g = (float)local_28._4_4_;
			__this_01.AddOutlineWithColor(UVar4, local_3c);
			return;
		}
	label_05a0df72: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002103")]
	[Address(RVA = "0x590DFD0", Offset = "0x590CFD0", VA = "0x590DFD0")]
	public void RemoveOutline()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$RemoveOutline): clean
		BaseCharacter __this_00;

		__this_00 = this.Character;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.RemoveOutline();
		return;
	}

	[Token(Token = "0x6002104")]
	[Address(RVA = "0x590DFF0", Offset = "0x590CFF0", VA = "0x590DFF0", Slot = "0")]
	public override bool Equals(object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$Equals): clean
		bool bVar1;

		bVar1 = this.__Eq__((object)this, other);
		return bVar1;
	}

	[Token(Token = "0x6002105")]
	[Address(RVA = "0x590E000", Offset = "0x590D000", VA = "0x590E000", Slot = "11")]
	public bool __Eq__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$__Eq__): 5 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		object pIVar3;
		bool bVar4;
		Il2CppClass x;
		Il2CppClass x_00;

		if (other == null) {
	label_05a0e057: ;
			pIVar3 = null;
		}
		else {
			bVar1 = (typeof(CustomLogicCharacterBuiltin)._2).typeHierarchyDepth;
			if ((other.klass._2).typeHierarchyDepth < bVar1) goto label_05a0e057;
			pIVar3 = null;
			if ((other.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicCharacterBuiltin)) {
				pIVar3 = other;
			}
		}
		if (self != null) {
			bVar1 = (typeof(CustomLogicCharacterBuiltin)._2).typeHierarchyDepth;
			if ((bVar1 <= (self.klass._2).typeHierarchyDepth) &&((self.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicCharacterBuiltin))) {
				x_00 = self[3].klass;
				goto joined_r0x05a0e180;
			}
		}
		x_00 = null;
	joined_r0x05a0e180: ;
		if (pIVar3 == null) {
			x = null;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			x = pIVar3[3].klass;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar4 = ((Object)x_00 == null);
		if (bVar4) {
			bVar4 = ((Object)x == null);
			if (bVar4) {
				return true;
			}
		}
		bVar4 = ((Object)x_00 == null);
		if (!bVar4) {
			bVar4 = ((Object)x == null);
			if (!bVar4) {
				bVar4 = ((Object)x_00 == (Object)x);
				return bVar4;
			}
		}
		return false;
	}

	[Token(Token = "0x6002106")]
	[Address(RVA = "0x590E1B0", Offset = "0x590D1B0", VA = "0x590E1B0", Slot = "12")]
	public int __Hash__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$__Hash__): clean
		int iVar1;

		return iVar1;
	}

	[Token(Token = "0x6002107")]
	[Address(RVA = "0x590E1D0", Offset = "0x590D1D0", VA = "0x590E1D0", Slot = "2")]
	public override int GetHashCode()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c (CustomLogic.CustomLogicCharacterBuiltin$$GetHashCode): clean
		BaseCharacter pCVar1;
		int iVar2;

		pCVar1 = this.Character;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		return iVar2;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicCharacterBuiltin.c.

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"CurrentTarget");
		__this.Add((Il2CppObject *)"DetectRange");
		__this.Add((Il2CppObject *)"State");
		__this.Add((Il2CppObject *)"IsWalking");
		__this.Add((Il2CppObject *)"AIEnabled");
		__this.Add((Il2CppObject *)"UsePathfinding");
		__this.Add((Il2CppObject *)"Name");
		__this.Add((Il2CppObject *)"Guild");
		__this.Add((Il2CppObject *)"Player");
		__this.Add((Il2CppObject *)"IsAI");
		__this.Add((Il2CppObject *)"IsAlive");
		__this.Add((Il2CppObject *)"ViewID");
		__this.Add((Il2CppObject *)"IsMine");
		__this.Add((Il2CppObject *)"IsMainCharacter");
		__this.Add((Il2CppObject *)"Transform");
		__this.Add((Il2CppObject *)"Position");
		__this.Add((Il2CppObject *)"Rotation");
		__this.Add((Il2CppObject *)"QuaternionRotation");
		__this.Add((Il2CppObject *)"Velocity");
		__this.Add((Il2CppObject *)"Forward");
		__this.Add((Il2CppObject *)"Right");
		__this.Add((Il2CppObject *)"Up");
		__this.Add((Il2CppObject *)"HasTargetDirection");
		__this.Add((Il2CppObject *)"TargetDirection");
		__this.Add((Il2CppObject *)"Team");
		__this.Add((Il2CppObject *)"Health");
		__this.Add((Il2CppObject *)"MaxHealth");
		__this.Add((Il2CppObject *)"CustomDamageEnabled");
		__this.Add((Il2CppObject *)"CustomDamage");
		__this.Add((Il2CppObject *)"CurrentAnimation");
		__this.Add((Il2CppObject *)"Grounded");
		__this.Add((Il2CppObject *)"Rigidbody");
		__this.Add((Il2CppObject *)"GetTarget");
		__this.Add((Il2CppObject *)"SetTarget");
		__this.Add((Il2CppObject *)"ClearTarget");
		__this.Add((Il2CppObject *)"GetNearestEnemy");
		__this.Add((Il2CppObject *)"TargetNearestEnemy");
		__this.Add((Il2CppObject *)"MoveTo");
		__this.Add((Il2CppObject *)"MoveToTarget");
		__this.Add((Il2CppObject *)"Idle");
		__this.Add((Il2CppObject *)"SetDisplayName");
		__this.Add((Il2CppObject *)"GetKilled");
		__this.Add((Il2CppObject *)"GetDamaged");
		__this.Add((Il2CppObject *)"Emote");
		__this.Add((Il2CppObject *)"PlayAnimation");
		__this.Add((Il2CppObject *)"PlayAnimationAt");
		__this.Add((Il2CppObject *)"GetAnimationSpeed");
		__this.Add((Il2CppObject *)"SetAnimationSpeed");
		__this.Add((Il2CppObject *)"IsPlayingAnimation");
		__this.Add((Il2CppObject *)"GetAnimationNormalizedTime");
		__this.Add((Il2CppObject *)"ForceAnimation");
		__this.Add((Il2CppObject *)"GetAnimationLength");
		__this.Add((Il2CppObject *)"IsPlayingSound");
		__this.Add((Il2CppObject *)"PlaySound");
		__this.Add((Il2CppObject *)"StopSound");
		__this.Add((Il2CppObject *)"FadeSound");
		__this.Add((Il2CppObject *)"LookAt");
		__this.Add((Il2CppObject *)"AddForce");
		__this.Add((Il2CppObject *)"Reveal");
		__this.Add((Il2CppObject *)"AddOutline");
		__this.Add((Il2CppObject *)"RemoveOutline");
		__this.Add((Il2CppObject *)"__Eq__");
		__this.Add((Il2CppObject *)"__Hash__");
		CustomLogicCharacterBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CurrentTarget>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__CurrentTarget_g____getter_2_0(CustomLogicCharacterBuiltin __i)
	{
		BaseAIController __this;
		object pIVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		__this = __i.AIController;
		if (__this == null) {
			pIVar1 = CustomLogicCharacterBuiltin.WrapTarget(null);
			return pIVar1;
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__DetectRange>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__DetectRange_g____getter_3_0(CustomLogicCharacterBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.AIController;
		return pIVar1;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__DetectRange>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__DetectRange_g____setter_3_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		BaseAIController __this;
		float range;

		range = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__this = __i.AIController;
		if (__this == null) {
			return;
		}
		__this.SetDetectRange(range);
		return;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__State>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__State_g____getter_4_0(CustomLogicCharacterBuiltin __i)
	{
		String pSVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pSVar1 = __i.State;
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsWalking>g____getter|5_0: 1 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsWalking_g____getter_5_0(CustomLogicCharacterBuiltin __i)
	{
		byte bVar1;
		BaseCharacter pCVar2;
		BaseAIController __this;
		object pIVar3;
		byte uStack_9;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar2 = __i.Character;
		if (pCVar2 != null) {
			bVar1 = (typeof(Human)._2).typeHierarchyDepth;
			method = (MethodInfo)(ulong)bVar1;
			if ((bVar1 <= (pCVar2.klass._2).typeHierarchyDepth) &&((pCVar2.klass._2).typeHierarchy[(long)&method[-1].field_0x57] ==typeof(Human))) {
				uStack_9 = *(sbyte)((long)&(*(ulong)((sbyte)pCVar2 + 0x238)) + 4) != false;
				goto label_05a14428;
			}
		}
		__this = __i.AIController;
		if (__this == null) {
		}
		else {
		}
	label_05a14428: ;
		return pIVar3;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsWalking>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__IsWalking_g____setter_5_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		bool value;
		bool bVar1;
		BaseAIController __this;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i != null) {
			__this = __i.AIController;
			bVar1 = ((Object)__this != null);
			if (!bVar1) {
				return;
			}
			if (__this != null) {
				__this.IsWalking = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__AIEnabled>g____getter|6_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__AIEnabled_g____getter_6_0(CustomLogicCharacterBuiltin __i)
	{
		byte uVar1;
		ulong in_RAX;
		BaseAIController pCVar2;
		object pIVar3;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		pCVar2 = __i.AIController;
		if (pCVar2 == null) {
			uVar1 = 0;
		}
		else {
			uVar1 = pCVar2._aiEnabled;
		}
		uStack_8 = CONCAT17(uVar1, (undefined7)uStack_8);
		pIVar3 = (object)(((long)&uStack_8 + 7));
		return pIVar3;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__AIEnabled>g____setter|6_1: clean
	private static void Bindings____CreatePropertyBinding__AIEnabled_g____setter_6_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		bool value;
		bool bVar1;
		BaseAIController __this;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i != null) {
			__this = __i.AIController;
			bVar1 = ((Object)__this != null);
			if (!bVar1) {
				return;
			}
			if (__this != null) {
				__this.AIEnabled = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__UsePathfinding>g____getter|7_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__UsePathfinding_g____getter_7_0(CustomLogicCharacterBuiltin __i)
	{
		byte uVar1;
		ulong in_RAX;
		BaseAIController pCVar2;
		object pIVar3;
		ulong uStack_8;

		if (__i == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		pCVar2 = __i.AIController;
		if (pCVar2 == null) {
			uVar1 = 0;
		}
		else {
			uVar1 = pCVar2._usePathfinding;
		}
		uStack_8 = CONCAT17(uVar1, (undefined7)uStack_8);
		pIVar3 = (object)(((long)&uStack_8 + 7));
		return pIVar3;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__UsePathfinding>g____setter|7_1: clean
	private static void Bindings____CreatePropertyBinding__UsePathfinding_g____setter_7_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		bool value;
		bool bVar1;
		BaseAIController __this;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i != null) {
			__this = __i.AIController;
			bVar1 = ((Object)__this != null);
			if (!bVar1) {
				return;
			}
			if (__this != null) {
				__this.UsePathfinding = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Name_g____getter_8_0(CustomLogicCharacterBuiltin __i)
	{
		BaseCharacter pCVar1;

		if ((__i == null) ||(pCVar1 = __i.Character, pCVar1 == null)) {
			throw new NullReferenceException();
		}
		return (object)pCVar1.RichTextName;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____setter|8_1: clean
	private static void Bindings____CreatePropertyBinding__Name_g____setter_8_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		BaseCharacter __this;
		String value;

		value = CustomLogicEvaluator.ConvertTo<string>(__v);
		if ((__i == null) ||(__this = __i.Character, __this == null)) {
			throw new NullReferenceException();
		}
		__this.Name = value;
		return;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Guild>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__Guild_g____getter_9_0(CustomLogicCharacterBuiltin __i)
	{
		BaseCharacter pCVar1;

		if ((__i == null) ||(pCVar1 = __i.Character, pCVar1 == null)) {
			throw new NullReferenceException();
		}
		return (object)pCVar1.Guild;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Guild>g____setter|9_1: clean
	private static void Bindings____CreatePropertyBinding__Guild_g____setter_9_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		BaseCharacter pCVar1;
		String pSVar2;

		pSVar2 = CustomLogicEvaluator.ConvertTo<string>(__v);
		if ((__i == null) ||(pCVar1 = __i.Character, pCVar1 == null)) {
			throw new NullReferenceException();
		}
		pCVar1.Guild = pSVar2;
		return;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Player>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__Player_g____getter_10_0(CustomLogicCharacterBuiltin __i)
	{
		BaseCharacter pCVar1;
		BaseComponentCache pUVar2;
		PhotonView pPVar3;
		Player player;
		CustomLogicPlayerBuiltin __this;

		if (__i != null) {
			pCVar1 = __i.Character;
			if (((pCVar1 != null) &&(pUVar2 = pCVar1.Cache, pUVar2 != null)) &&(pPVar3 = pUVar2.PhotonView, pPVar3 != null)) {
				player = pPVar3._Owner_k__BackingField;
				__this = new CustomLogicPlayerBuiltin(player);
				return (object)__this;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsAI>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__IsAI_g____getter_11_0(CustomLogicCharacterBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i.Character == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsAlive>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__IsAlive_g____getter_12_0(CustomLogicCharacterBuiltin __i)
	{
		BaseCharacter pCVar1;
		bool bVar2;
		object pIVar3;
		byte bVar4;

		if (__i == null) {
	label_05a14a12: ;
			throw new NullReferenceException();
		}
		pCVar1 = __i.Character;
		bVar2 = ((Object)pCVar1 != null);
		if (bVar2) {
			pCVar1 = __i.Character;
			if (pCVar1 == null) goto label_05a14a12;
			bVar4 = pCVar1.Dead ^ 1;
		}
		return pIVar3;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__ViewID>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__ViewID_g____getter_13_0(CustomLogicCharacterBuiltin __i)
	{
		BaseCharacter pCVar1;
		BaseComponentCache pUVar2;
		object pIVar3;
		byte[] auStack_4 = new byte[4];

		if ((((__i == null) ||(pCVar1 = __i.Character, pCVar1 == null)) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) ||(pUVar2.PhotonView == null)) {
			throw new NullReferenceException();
		}
		return pIVar3;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsMine>g____getter|14_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsMine_g____getter_14_0(CustomLogicCharacterBuiltin __i)
	{
		BaseCharacter pCVar1;
		bool bVar2;
		ulong in_RAX;
		object pIVar3;
		ulong uStack_8;

		if ((__i == null) ||(pCVar1 = __i.Character, pCVar1 == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar2 = pCVar1.IsMine();
		uStack_8 = CONCAT17(bVar2, (undefined7)uStack_8);
		pIVar3 = (object)(((long)&uStack_8 + 7));
		return pIVar3;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsMainCharacter>g____getter|15_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsMainCharacter_g____getter_15_0(CustomLogicCharacterBuiltin __i)
	{
		BaseCharacter __this;
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Character, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __this.IsMainCharacter();
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Transform>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__Transform_g____getter_16_0(CustomLogicCharacterBuiltin __i)
	{
		BaseCharacter pCVar1;
		BaseComponentCache pUVar2;
		Transform transform;
		CustomLogicTransformBuiltin __this;

		if (__i != null) {
			pCVar1 = __i.Character;
			if ((pCVar1 != null) &&(pUVar2 = pCVar1.Cache, pUVar2 != null)) {
				transform = pUVar2.Transform;
				__this = new CustomLogicTransformBuiltin(transform);
				return (object)__this;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__Position_g____getter_17_0(CustomLogicCharacterBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.get_Position();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|17_1: clean
	private static void Bindings____CreatePropertyBinding__Position_g____setter_17_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.set_Position(pCVar1);
		return;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__Rotation_g____getter_18_0(CustomLogicCharacterBuiltin __i)
	{
		BaseCharacter pCVar1;
		BaseComponentCache pUVar2;
		Transform __this;
		CustomLogicVector3Builtin __this_00;
		Vector3 UVar3;
		Vector3 euler;
		Quaternion local_18;

		if (__i != null) {
			pCVar1 = __i.Character;
			if (((pCVar1 != null) &&(pUVar2 = pCVar1.Cache, pUVar2 != null)) &&(__this = pUVar2.Transform, __this != null)) {
				local_18 = __this.rotation;
				UVar3 = Quaternion.Internal_ToEulerRad(ref local_18);
				euler.x = UVar3.x * 57.29578;
				euler.y = UVar3.y * 57.29578;
				euler.z = UVar3.z * 57.29578;
				UVar3 = Quaternion.Internal_MakePositive(euler);
				__this_00 = new CustomLogicVector3Builtin(UVar3);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|18_1: clean
	private static void Bindings____CreatePropertyBinding__Rotation_g____setter_18_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		uint uVar1;
		uint uVar2;
		BaseCharacter pCVar3;
		BaseComponentCache pUVar4;
		Transform __this;
		bool bVar5;
		CustomLogicVector3Builtin pCVar6;
		Quaternion value;
		Vector3 UStack_20;

		pCVar6 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if ((__i != null) &&(pCVar3 = __i.Character, pCVar3 != null)) {
			bVar5 = pCVar3.IsMine();
			if (!bVar5) {
				return;
			}
			pCVar3 = __i.Character;
			if (((pCVar3 != null) &&(pUVar4 = pCVar3.Cache, pUVar4 != null)) &&(pCVar6 != null)) {
				__this = pUVar4.Transform;
				uVar1 = pCVar6.Value.x;
				uVar2 = pCVar6.Value.y;
				UStack_20.x = (float)uVar1 * 0.017453292;
				UStack_20.y = (float)uVar2 * 0.017453292;
				UStack_20.z = pCVar6.Value.z * 0.017453292;
				value = Quaternion.Internal_FromEulerRad(ref UStack_20);
				if (__this != null) {
					__this.rotation = value;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__QuaternionRotation_g____getter_19_0(CustomLogicCharacterBuiltin __i)
	{
		CustomLogicQuaternionBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.QuaternionRotation;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____setter|19_1: clean
	private static void Bindings____CreatePropertyBinding__QuaternionRotation_g____setter_19_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		CustomLogicQuaternionBuiltin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.QuaternionRotation = value;
		return;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__Velocity_g____getter_20_0(CustomLogicCharacterBuiltin __i)
	{
		BaseCharacter __this;
		CustomLogicVector3Builtin __this_00;
		Vector3 value;

		if (__i != null) {
			__this = __i.Character;
			if (__this != null) {
				value = __this.GetVelocity();
				__this_00 = new CustomLogicVector3Builtin(value);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____setter|20_1: clean
	private static void Bindings____CreatePropertyBinding__Velocity_g____setter_20_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		CustomLogicVector3Builtin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Velocity = value;
		return;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__Forward_g____getter_21_0(CustomLogicCharacterBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Forward;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____setter|21_1: clean
	private static void Bindings____CreatePropertyBinding__Forward_g____setter_21_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		CustomLogicVector3Builtin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Forward = value;
		return;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____getter|22_0: clean
	private static object Bindings____CreatePropertyBinding__Right_g____getter_22_0(CustomLogicCharacterBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Right;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____setter|22_1: clean
	private static void Bindings____CreatePropertyBinding__Right_g____setter_22_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		CustomLogicVector3Builtin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Right = value;
		return;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____getter|23_0: clean
	private static object Bindings____CreatePropertyBinding__Up_g____getter_23_0(CustomLogicCharacterBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Up;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____setter|23_1: clean
	private static void Bindings____CreatePropertyBinding__Up_g____setter_23_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		CustomLogicVector3Builtin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Up = value;
		return;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__HasTargetDirection>g____getter|24_0: clean
	private static object Bindings____CreatePropertyBinding__HasTargetDirection_g____getter_24_0(CustomLogicCharacterBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i.Character == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__TargetDirection>g____getter|25_0: clean
	private static object Bindings____CreatePropertyBinding__TargetDirection_g____getter_25_0(CustomLogicCharacterBuiltin __i)
	{
		BaseCharacter pCVar1;
		CustomLogicVector3Builtin __this;
		Vector3 value;

		if (__i != null) {
			pCVar1 = __i.Character;
			if (pCVar1 != null) {
				value = pCVar1.GetTargetDirection();
				__this = new CustomLogicVector3Builtin(value);
				return (object)__this;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__TargetDirection>g____setter|25_1: 1 lines keep C-only constructs
	private static void Bindings____CreatePropertyBinding__TargetDirection_g____setter_25_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		BaseCharacter pCVar1;
		CustomLogicVector3Builtin pCVar3;
		Vector3 UVar4;
		Vector3 euler;
		Quaternion UStack_30;
		Vector3 UStack_20;

		pCVar3 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if ((__i != null) &&(pCVar3 != null)) {
			pCVar1 = __i.Character;
			UStack_30._0_12_ = pCVar3.Value;
			UStack_20.x = (Vector3.upVector).x;
			UStack_20.y = (Vector3.upVector).y;
			UStack_20.z = (Vector3.upVector).z;
			UStack_30 = Quaternion.Internal_LookRotation(ref UStack_30, ref UStack_20);
			UVar4 = Quaternion.Internal_ToEulerRad(ref UStack_30);
			euler.x = UVar4.x * 57.29578;
			euler.y = UVar4.y * 57.29578;
			euler.z = UVar4.z * 57.29578;
			UVar4 = Quaternion.Internal_MakePositive(euler);
			if (pCVar1 != null) {
				pCVar1.TargetAngle = UVar4.y;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____getter|26_0: clean
	private static object Bindings____CreatePropertyBinding__Team_g____getter_26_0(CustomLogicCharacterBuiltin __i)
	{
		BaseCharacter pCVar1;

		if ((__i == null) ||(pCVar1 = __i.Character, pCVar1 == null)) {
			throw new NullReferenceException();
		}
		return (object)pCVar1.Team;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____setter|26_1: clean
	private static void Bindings____CreatePropertyBinding__Team_g____setter_26_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		BaseCharacter pCVar1;
		bool bVar2;
		String team;

		team = CustomLogicEvaluator.ConvertTo<string>(__v);
		if ((__i != null) &&(pCVar1 = __i.Character, pCVar1 != null)) {
			bVar2 = pCVar1.IsMine();
			if (!bVar2) {
				return;
			}
			pCVar1 = __i.Character;
			if (pCVar1 != null) {
				pCVar1.SetTeam(team);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Health>g____getter|27_0: clean
	private static object Bindings____CreatePropertyBinding__Health_g____getter_27_0(CustomLogicCharacterBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Character == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Health>g____setter|27_1: clean
	private static void Bindings____CreatePropertyBinding__Health_g____setter_27_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		BaseCharacter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Character;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (!bVar2) {
					return;
				}
				pCVar1 = __i.Character;
				if (pCVar1 != null) {
					pCVar1.SetCurrentHealth((int)fVar3);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__MaxHealth>g____getter|28_0: clean
	private static object Bindings____CreatePropertyBinding__MaxHealth_g____getter_28_0(CustomLogicCharacterBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Character == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__MaxHealth>g____setter|28_1: clean
	private static void Bindings____CreatePropertyBinding__MaxHealth_g____setter_28_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		BaseCharacter pCVar1;
		bool bVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			pCVar1 = __i.Character;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsMine();
				if (!bVar2) {
					return;
				}
				pCVar1 = __i.Character;
				if (pCVar1 != null) {
					pCVar1.SetMaxHealth((int)fVar3);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CustomDamageEnabled>g____getter|29_0: clean
	private static object Bindings____CreatePropertyBinding__CustomDamageEnabled_g____getter_29_0(CustomLogicCharacterBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i.Character == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CustomDamageEnabled>g____setter|29_1: clean
	private static void Bindings____CreatePropertyBinding__CustomDamageEnabled_g____setter_29_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		BaseCharacter pCVar1;
		bool bVar2;
		bool bVar3;

		bVar2 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(pCVar1 = __i.Character, pCVar1 == null)) {
	label_05a15692: ;
			throw new NullReferenceException();
		}
		bVar3 = pCVar1.IsMine();
		if (bVar3) {
			pCVar1 = __i.Character;
			if (pCVar1 == null) goto label_05a15692;
			pCVar1.CustomDamageEnabled = bVar2;
		}
		return;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CustomDamage>g____getter|30_0: clean
	private static object Bindings____CreatePropertyBinding__CustomDamage_g____getter_30_0(CustomLogicCharacterBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Character == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CustomDamage>g____setter|30_1: clean
	private static void Bindings____CreatePropertyBinding__CustomDamage_g____setter_30_1(CustomLogicCharacterBuiltin __i, object __v)
	{
		BaseCharacter pCVar1;
		bool bVar2;
		int iVar3;

		iVar3 = CustomLogicEvaluator.ConvertTo<int>(__v);
		if ((__i == null) ||(pCVar1 = __i.Character, pCVar1 == null)) {
	label_05a15771: ;
			throw new NullReferenceException();
		}
		bVar2 = pCVar1.IsMine();
		if (bVar2) {
			pCVar1 = __i.Character;
			if (pCVar1 == null) goto label_05a15771;
			pCVar1.CustomDamage = iVar3;
		}
		return;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAnimation>g____getter|31_0: clean
	private static object Bindings____CreatePropertyBinding__CurrentAnimation_g____getter_31_0(CustomLogicCharacterBuiltin __i)
	{
		BaseCharacter __this;
		String pSVar1;

		if ((__i == null) ||(__this = __i.Character, __this == null)) {
			throw new NullReferenceException();
		}
		pSVar1 = __this.GetCurrentAnimation();
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Grounded>g____getter|32_0: clean
	private static object Bindings____CreatePropertyBinding__Grounded_g____getter_32_0(CustomLogicCharacterBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i.Character == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Rigidbody>g____getter|33_0: clean
	private static object Bindings____CreatePropertyBinding__Rigidbody_g____getter_33_0(CustomLogicCharacterBuiltin __i)
	{
		BaseCharacter pCVar1;
		BaseComponentCache pUVar2;
		Rigidbody rb;
		CustomLogicRigidbodyBuiltin __this;

		if (__i != null) {
			pCVar1 = __i.Character;
			if ((pCVar1 != null) &&(pUVar2 = pCVar1.Cache, pUVar2 != null)) {
				rb = pUVar2.Rigidbody;
				__this = new CustomLogicRigidbodyBuiltin((BuiltinClassInstance)__i, rb);
				return (object)__this;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicCharacterBuiltin.Bindings.c();
		CustomLogicCharacterBuiltin.Bindings.c.__9 =(CustomLogicCharacterBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTarget>b__34_0: clean
	private object Bindings_c____CreateMethodBinding__GetTarget_b__34_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		BaseAIController __this_00;
		object pIVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		__this_00 = __c.AIController;
		if (__this_00 == null) {
			pIVar1 = CustomLogicCharacterBuiltin.WrapTarget(null);
			return pIVar1;
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTarget>b__35_0: clean
	private object Bindings_c____CreateMethodBinding__SetTarget_b__35_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		int iVar1;
		object target;
		object obj;
		float focusDuration;

		if (__a != null) {
			iVar1 = (int)__a.Length;
			if (iVar1 == 0) {
				throw new IndexOutOfRangeException();
			}
			target = __a[0];
			focusDuration = 0.0;
			if (1 < iVar1) {
				obj = __a[1];
				focusDuration = CustomLogicEvaluator.ConvertTo<float>(obj);
			}
			if (__c != null) {
				__c.SetTarget(target, focusDuration);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearTarget>b__36_0: clean
	private object Bindings_c____CreateMethodBinding__ClearTarget_b__36_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		BaseAIController __this_00;

		if (__c == null) {
			throw new NullReferenceException();
		}
		__this_00 = __c.AIController;
		if (__this_00 != null) {
			__this_00.ClearTarget();
		}
		return null;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetNearestEnemy>b__37_0: clean
	private object Bindings_c____CreateMethodBinding__GetNearestEnemy_b__37_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		BaseAIController __this_00;
		object pIVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		__this_00 = __c.AIController;
		if (__this_00 == null) {
			pIVar1 = CustomLogicCharacterBuiltin.WrapTarget(null);
			return pIVar1;
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__TargetNearestEnemy>b__38_0: clean
	private object Bindings_c____CreateMethodBinding__TargetNearestEnemy_b__38_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object obj;
		BaseAIController __this_00;
		float fStack_14;

		if (__a != null) {
			if (__a.Length == 0) {
				fStack_14 = 0.0;
			}
			else {
				if ((int)__a.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				obj = __a[0];
				fStack_14 = CustomLogicEvaluator.ConvertTo<float>(obj);
			}
			if (__c != null) {
				__this_00 = __c.AIController;
				if (__this_00 != null) {
					__this_00.TargetNearestEnemy(fStack_14);
				}
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveTo>b__39_0: clean
	private object Bindings_c____CreateMethodBinding__MoveTo_b__39_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool ignoreEnemies;
		CustomLogicVector3Builtin position;
		float range;

		if (__a == null) {
	label_05a15bee: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				range = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if ((int)__a.Length < 3) {
					ignoreEnemies = false;
				}
				else {
					pIVar1 = __a[2];
					ignoreEnemies = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
				}
				if (__c != null) {
					__c.MoveTo(position, range, ignoreEnemies);
					return null;
				}
				goto label_05a15bee;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveToTarget>b__40_0: clean
	private object Bindings_c____CreateMethodBinding__MoveToTarget_b__40_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		int iVar1;
		object target;
		object pIVar2;
		bool ignoreEnemies;
		float range;

		if (__a != null) {
			iVar1 = (int)__a.Length;
			if ((iVar1 == 0) || (iVar1 == 1)) {
				throw new IndexOutOfRangeException();
			}
			target = __a[0];
			pIVar2 = __a[1];
			range = CustomLogicEvaluator.ConvertTo<float>(pIVar2);
			if ((int)__a.Length < 3) {
				ignoreEnemies = false;
			}
			else {
				pIVar2 = __a[2];
				ignoreEnemies = CustomLogicEvaluator.ConvertTo<bool>(pIVar2) ;
			}
			if (__c != null) {
				__c.MoveToTarget(target, range, ignoreEnemies);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Idle>b__41_0: clean
	private object Bindings_c____CreateMethodBinding__Idle_b__41_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object obj;
		float time;

		if (__a != null) {
			if (__a.Length == 0) {
				time = -1.0;
			}
			else {
				if ((int)__a.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				obj = __a[0];
				time = CustomLogicEvaluator.ConvertTo<float>(obj) ;
			}
			if (__c != null) {
				__c.Idle(time);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetDisplayName>b__42_0: clean
	private object Bindings_c____CreateMethodBinding__SetDisplayName_b__42_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object pIVar1;
		BaseCharacter pCVar2;
		bool bVar3;
		String value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			value = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			bVar3 = true;
			if (1 < (int)__a.Length) {
				pIVar1 = __a[1];
				bVar3 = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.Character;
				if (value == null) {
					value = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				if (pCVar2 != null) {
					pCVar2.Name = value;
					pCVar2 = __c.Character;
					if (pCVar2 != null) {
						if (pCVar2.AI != false) {
							if (bVar3 == false) {
								bVar3 = false;
							}
							else {
								bVar3 = String.IsNullOrWhiteSpace(pCVar2.VisibleName);
								bVar3 = !bVar3;
							}
							pCVar2.HasExplicitNameTag = bVar3;
						}
						return null;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKilled>b__43_0: clean
	private object Bindings_c____CreateMethodBinding__GetKilled_b__43_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object obj;
		BaseCharacter pCVar1;
		String pSVar2;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pSVar2 = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__c != null) &&(pCVar1 = __c.Character, pCVar1 != null)) {
				pCVar1.GetKilled(pSVar2);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetDamaged>b__44_0: clean
	private object Bindings_c____CreateMethodBinding__GetDamaged_b__44_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object obj;
		BaseCharacter pCVar1;
		int iVar2;
		String pSVar3;

		if (__a == null) {
	label_05a16042: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pSVar3 = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				iVar2 = CustomLogicEvaluator.ConvertTo<int>(__a[1]);
				if ((__c != null) &&(pCVar1 = __c.Character, pCVar1 != null)) {
					pCVar1.GetDamaged(pSVar3, iVar2);
					return null;
				}
				goto label_05a16042;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Emote>b__45_0: clean
	private object Bindings_c____CreateMethodBinding__Emote_b__45_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object obj;
		BaseCharacter pCVar1;
		bool bVar2;
		String pSVar3;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pSVar3 = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__c != null) &&(pCVar1 = __c.Character, pCVar1 != null)) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __c.Character;
					if (pCVar1 == null) goto label_05a16113;
					if (pCVar1.Dead == false) {
						pCVar1.Emote(pSVar3);
					}
				}
				return null;
			}
		}
	label_05a16113: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimation>b__46_0: clean
	private object Bindings_c____CreateMethodBinding__PlayAnimation_b__46_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object pIVar1;
		BaseCharacter pCVar2;
		bool bVar3;
		String animation;
		float fadeTime;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			animation = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((int)__a.Length < 2) {
				fadeTime = 0.1;
			}
			else {
				pIVar1 = __a[1];
				fadeTime = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			}
			if (__c != null) {
				pCVar2 = __c.Character;
				if (pCVar2 != null) {
					bVar3 = pCVar2.IsMine();
					if (bVar3) {
						pCVar2 = __c.Character;
						if (pCVar2 == null) goto label_05a16237;
						if (pCVar2.Dead == false) {
							pCVar2.CrossFadeIfNotPlaying(animation, fadeTime, 0.0);
						}
					}
					return null;
				}
			}
		}
	label_05a16237: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimationAt>b__47_0: clean
	private object Bindings_c____CreateMethodBinding__PlayAnimationAt_b__47_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object pIVar1;
		BaseCharacter pCVar2;
		bool bVar3;
		bool bVar4;
		String animation;
		float startTime;
		float fStack_38;

		if (__a == null) goto label_05a163ee;
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			animation = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				startTime = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if ((int)__a.Length < 3) {
					fStack_38 = 0.1;
					bVar3 = false;
				}
				else {
					pIVar1 = __a[2];
					fStack_38 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
					if ((int)__a.Length < 4) {
						bVar3 = false;
					}
					else {
						pIVar1 = __a[3];
						bVar3 = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
					}
				}
				if ((__c == null) ||(pCVar2 = __c.Character, pCVar2 == null)) {
	label_05a163ee: ;
					throw new NullReferenceException();
				}
				bVar4 = pCVar2.IsMine();
				if (bVar4) {
					pCVar2 = __c.Character;
					if (pCVar2 == null) goto label_05a163ee;
					if (pCVar2.Dead == false) {
						if (bVar3 == false) {
							pCVar2.CrossFadeIfNotPlaying(animation, fStack_38, startTime);
						}
						else {
							pCVar2.CrossFade(animation, fStack_38, startTime);
						}
					}
				}
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationSpeed>b__48_0: clean
	private object Bindings_c____CreateMethodBinding__GetAnimationSpeed_b__48_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		BaseCharacter pCVar1;
		bool bVar2;
		String animation;
		object pIVar3;
		float fStack_1c;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar3 = __a[0];
			animation = CustomLogicEvaluator.ConvertTo<string>(pIVar3);
			if ((__c != null) &&(pCVar1 = __c.Character, pCVar1 != null)) {
				bVar2 = pCVar1.IsMine();
				fStack_1c = 1.0;
				if (bVar2) {
					pCVar1 = __c.Character;
					if (pCVar1 == null) goto label_05a164e3;
					if (pCVar1.Dead == false) {
						fStack_1c = pCVar1.GetAnimationSpeed(animation);
					}
				}
				pIVar3 = (object)fStack_1c;
				return pIVar3;
			}
		}
	label_05a164e3: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetAnimationSpeed>b__49_0: clean
	private object Bindings_c____CreateMethodBinding__SetAnimationSpeed_b__49_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object pIVar1;
		BaseCharacter pCVar2;
		bool bVar3;
		bool bVar4;
		String animation;
		float speed;

		if (__a == null) goto label_05a16644;
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			animation = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				speed = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				bVar3 = true;
				if (2 < (int)__a.Length) {
					pIVar1 = __a[2];
					bVar3 = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
				}
				if ((__c == null) ||(pCVar2 = __c.Character, pCVar2 == null)) {
	label_05a16644: ;
					throw new NullReferenceException();
				}
				bVar4 = pCVar2.IsMine();
				if (bVar4) {
					pCVar2 = __c.Character;
					if (pCVar2 == null) goto label_05a16644;
					if (pCVar2.Dead == false) {
						if (bVar3 == false) {
							pCVar2.SetAnimationSpeedNonRPC(animation, speed);
						}
						else {
							pCVar2.SetAnimationSpeed(animation, speed);
						}
					}
				}
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlayingAnimation>b__50_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__IsPlayingAnimation_b__50_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		BaseCharacter pCVar1;
		AnimationHandler __this_00;
		bool bVar2;
		ulong in_RAX;
		String name;
		object pIVar3;
		ulong uStack_18;

		uStack_18 = in_RAX;
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar3 = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(pIVar3);
			if (((__c != null) &&(pCVar1 = __c.Character, pCVar1 != null)) &&(__this_00 = pCVar1.Animation, __this_00 != null)) {
				bVar2 = __this_00.IsPlaying(name);
				uStack_18 = CONCAT17(bVar2, (undefined7)uStack_18);
				pIVar3 = (object)(((long)&uStack_18 + 7));
				return pIVar3;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationNormalizedTime>b__51_0: clean
	private object Bindings_c____CreateMethodBinding__GetAnimationNormalizedTime_b__51_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		BaseCharacter pCVar1;
		AnimationHandler pCVar2;
		bool bVar3;
		String name;
		object pIVar4;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar4 = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(pIVar4);
			if (((__c != null) &&(pCVar1 = __c.Character, pCVar1 != null)) &&(pCVar2 = pCVar1.Animation, pCVar2 != null)) {
				bVar3 = pCVar2.IsPlaying(name);
				if (bVar3) {
					pCVar1 = __c.Character;
					if ((pCVar1 == null) ||(pCVar2 = pCVar1.Animation, pCVar2 == null)) goto label_05a167f4;
					pCVar2.GetCurrentNormalizedTime();
				}
				pIVar4 = (object)auStack_14;
				return pIVar4;
			}
		}
	label_05a167f4: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__ForceAnimation>b__52_0: clean
	private object Bindings_c____CreateMethodBinding__ForceAnimation_b__52_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object pIVar1;
		BaseCharacter pCVar2;
		bool bVar3;
		String pSVar4;
		float fVar5;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			pSVar4 = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((int)__a.Length < 2) {
				fVar5 = 0.1;
			}
			else {
				pIVar1 = __a[1];
				fVar5 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			}
			if ((__c != null) &&(pCVar2 = __c.Character, pCVar2 != null)) {
				bVar3 = pCVar2.IsMine();
				if (bVar3) {
					pCVar2 = __c.Character;
					if (pCVar2 == null) goto label_05a1691d;
					if (pCVar2.Dead == false) {
						pCVar2.ForceAnimation(pSVar4, fVar5);
					}
				}
				return null;
			}
		}
	label_05a1691d: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationLength>b__53_0: clean
	private object Bindings_c____CreateMethodBinding__GetAnimationLength_b__53_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		BaseCharacter pCVar1;
		AnimationHandler __this_00;
		String name;
		object pIVar2;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
			if (((__c != null) &&(pCVar1 = __c.Character, pCVar1 != null)) &&(__this_00 = pCVar1.Animation, __this_00 != null)) {
				__this_00.GetLength(name);
				pIVar2 = (object)auStack_14;
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlayingSound>b__54_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__IsPlayingSound_b__54_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		BaseCharacter __this_00;
		bool bVar1;
		ulong in_RAX;
		String sound;
		object pIVar2;
		ulong uStack_18;

		uStack_18 = in_RAX;
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			sound = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
			if ((__c != null) &&(__this_00 = __c.Character, __this_00 != null)) {
				bVar1 = __this_00.IsPlayingSound(sound);
				uStack_18 = CONCAT17(bVar1, (undefined7)uStack_18);
				pIVar2 = (object)(((long)&uStack_18 + 7));
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlaySound>b__55_0: clean
	private object Bindings_c____CreateMethodBinding__PlaySound_b__55_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool local;
		String sound;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			sound = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((int)__a.Length < 2) {
				local = false;
			}
			else {
				pIVar1 = __a[1];
				local = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
			}
			if (__c != null) {
				__c.PlaySound(sound, local);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__StopSound>b__56_0: clean
	private object Bindings_c____CreateMethodBinding__StopSound_b__56_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object obj;
		BaseCharacter pCVar1;
		bool bVar2;
		String sound;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			sound = CustomLogicEvaluator.ConvertTo<string>(obj) ;
			if ((__c != null) &&(pCVar1 = __c.Character, pCVar1 != null)) {
				bVar2 = pCVar1.IsMine();
				if (bVar2) {
					pCVar1 = __c.Character;
					if (pCVar1 == null) goto label_05a16c61;
					if (pCVar1.Dead == false) {
						bVar2 = pCVar1.IsPlayingSound(sound);
						if (bVar2) {
							pCVar1 = __c.Character;
							if (pCVar1 == null) goto label_05a16c61;
							pCVar1.StopSound(sound);
						}
					}
				}
				return null;
			}
		}
	label_05a16c61: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__FadeSound>b__57_0: clean
	private object Bindings_c____CreateMethodBinding__FadeSound_b__57_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object obj;
		BaseCharacter pCVar1;
		bool bVar2;
		String sound;
		float volume;
		float time;

		if (__a == null) goto label_05a16d89;
		if ((int)__a.Length != 0) {
			obj = __a[0];
			sound = CustomLogicEvaluator.ConvertTo<string>(obj) ;
			if ((__a.Length & 0xfffffffe) != 0) {
				volume = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if (2 < (uint)__a.Length) {
					time = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if (__c != null) {
						pCVar1 = __c.Character;
						if (pCVar1 != null) {
							bVar2 = pCVar1.IsMine();
							if (bVar2) {
								pCVar1 = __c.Character;
								if (pCVar1 == null) goto label_05a16d89;
								if (pCVar1.Dead == false) {
									pCVar1.FadeSound(sound, volume, time);
								}
							}
							return null;
						}
					}
	label_05a16d89: ;
					throw new NullReferenceException();
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__LookAt>b__58_0: clean
	private object Bindings_c____CreateMethodBinding__LookAt_b__58_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin position;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj) ;
			if (__c != null) {
				__c.LookAt(position);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddForce>b__59_0: clean
	private object Bindings_c____CreateMethodBinding__AddForce_b__59_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin force;

		if (__a == null) {
	label_05a16ec1: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			force = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				if (__c != null) {
					__c.AddForce(force, __a[1]);
					return null;
				}
				goto label_05a16ec1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Reveal>b__60_0: clean
	private object Bindings_c____CreateMethodBinding__Reveal_b__60_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object obj;
		BaseCharacter __this_00;
		float activeTime;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			activeTime = CustomLogicEvaluator.ConvertTo<float>(obj);
			if ((__c != null) &&(__this_00 = __c.Character, __this_00 != null)) {
				__this_00.Reveal(0.0, activeTime);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddOutline>b__61_0: clean
	private object Bindings_c____CreateMethodBinding__AddOutline_b__61_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object pIVar1;
		CustomLogicColorBuiltin color;
		String mode;

		mode = "OutlineAll";
		if (__a != null) {
			if (__a.Length == 0) {
				color = null;
			}
			else {
				if ((int)__a.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				pIVar1 = __a[0];
				color = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(pIVar1) ;
				if (1 < (int)__a.Length) {
					pIVar1 = __a[1];
					mode = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
				}
			}
			if (__c != null) {
				__c.AddOutline(color, mode);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveOutline>b__62_0: clean
	private object Bindings_c____CreateMethodBinding__RemoveOutline_b__62_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		BaseCharacter __this_00;

		if ((__c == null) ||(__this_00 = __c.Character, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.RemoveOutline();
		return null;
	}

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__63_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding____Eq___b__63_0(CustomLogicCharacterBuiltin __c, Object[] __a)
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

	// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__64_0: clean
	private object Bindings_c____CreateMethodBinding____Hash___b__64_0(CustomLogicCharacterBuiltin __c, Object[] __a)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.GetHashCode();
		return pIVar1;
	}
}
