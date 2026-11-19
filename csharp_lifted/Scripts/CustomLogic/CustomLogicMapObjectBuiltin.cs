// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicMapObjectBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicMapObjectBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20004BE")]
[CompilerGenerated]
internal class CustomLogicMapObjectBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20004BF")]
	public static class Factory
	{
		[Token(Token = "0x600236B")]
		[Address(RVA = "0x592C650", Offset = "0x592B650", VA = "0x592C650")]
		public static CustomLogicMapObjectBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicMapObjectBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x20004C0")]
	public static class Bindings
	{
		[Token(Token = "0x4001734")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600236C")]
		[Address(RVA = "0x592C6E0", Offset = "0x592B6E0", VA = "0x592C6E0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicMapObjectBuiltin> pCVar3;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x56e8eb61) {
				if (uVar2 < 0x27a969bc) {
					if (uVar2 < 0x1be9479d) {
						if (uVar2 < 0x65b2735) {
							if (uVar2 == 0x232777f) {
								bVar1 = (name == "Rotation");
								if (bVar1) {
									pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__Rotation();
									return (ICLMemberBinding)pCVar4;
								}
							}
							else if (uVar2 == 0x3134bce) {
								bVar1 = (name == "LocalRotation");
								if (bVar1) {
									pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__LocalRotation();
									return (ICLMemberBinding)pCVar4;
								}
							}
							else if (uVar2 == 0x65b2734) {
								bVar1 = (name == "GetBoundsMax");
								if (bVar1) {
									pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__GetBoundsMax();
									return (ICLMemberBinding)pCVar3;
								}
							}
						}
						else if (uVar2 < 0x18a43c5c) {
							if (uVar2 == 0xfe07306) {
								bVar1 = (name == "Name");
								if (bVar1) {
									pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__Name();
									return (ICLMemberBinding)pCVar4;
								}
							}
							else if (uVar2 == 0x18a43c5b) {
								bVar1 = (name == "Static");
								if (bVar1) {
									pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__Static();
									return (ICLMemberBinding)pCVar4;
								}
							}
						}
						else if (uVar2 == 0x1b288681) {
							bVar1 = (name == "HasTag");
							if (bVar1) {
								pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__HasTag();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1be9479c) {
							bVar1 = (name == "HasRenderer");
							if (bVar1) {
								pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__HasRenderer();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 < 0x20810131) {
						if (uVar2 == 0x1e9e9f85) {
							bVar1 = (name == "Right");
							if (bVar1) {
								pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__Right();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x1f89134f) {
							bVar1 = (name == "Active");
							if (bVar1) {
								pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__Active();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x20810130) {
							bVar1 = (name == "SetCollideMode");
							if (bVar1) {
								pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__SetCollideMode();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x23cef8ba) {
						if (uVar2 == 0x22cef726) {
							bVar1 = (name == "TextureTilingY");
							if (bVar1) {
								pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__TextureTilingY();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x23cef8b9) {
							bVar1 = (name == "TextureTilingX");
							if (bVar1) {
								pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__TextureTilingX();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x25ea1867) {
						bVar1 = (name == "GetChild");
						if (bVar1) {
							pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__GetChild();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x27a969bb) {
						bVar1 = (name == "SetComponentEnabled");
						if (bVar1) {
							pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__SetComponentEnabled();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x342cdb7a) {
					if (uVar2 < 0x2ac20558) {
						if (uVar2 == 0x28528e11) {
							bVar1 = (name == "Scale");
							if (bVar1) {
								pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__Scale();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x2862c297) {
							bVar1 = (name == "RemoveBuiltinComponent");
							if (bVar1) {
								pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__RemoveBuiltinComponent();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x2ac20557) {
							bVar1 = (name == "AddRigidbody");
							if (bVar1) {
								pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__AddRigidbody();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x2fe74448) {
						if (uVar2 == 0x2ace984c) {
							bVar1 = (name == "SetComponentsEnabled");
							if (bVar1) {
								pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__SetComponentsEnabled();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x2fe74447) {
							bVar1 = (name == "QuaternionRotation");
							if (bVar1) {
								pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__QuaternionRotation();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x30f356f2) {
						bVar1 = (name == "GetComponent");
						if (bVar1) {
							pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__GetComponent();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x342cdb79) {
						bVar1 = (name == "SetColorAll");
						if (bVar1) {
							pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__SetColorAll();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x448260ec) {
					if (uVar2 == 0x42f35940) {
						bVar1 = (name == "Up");
						if (bVar1) {
							pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__Up();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x43c043a7) {
						bVar1 = (name == "GetCorners");
						if (bVar1) {
							pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__GetCorners();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x448260eb) {
						bVar1 = (name == "ConvertToCSV");
						if (bVar1) {
							pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__ConvertToCSV();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x51826a21) {
					if (uVar2 == 0x4614013f) {
						bVar1 = (name == "SetCollideWith");
						if (bVar1) {
							pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__SetCollideWith();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x51826a20) {
						bVar1 = (name == "AddBoxTarget");
						if (bVar1) {
							pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__AddBoxTarget();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x53e18937) {
					bVar1 = (name == "GetBoundsCenter");
					if (bVar1) {
						pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__GetBoundsCenter();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x56e8eb60) {
					bVar1 = (name == "ID");
					if (bVar1) {
						pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__ID();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xad82abbc) {
				if (uVar2 < 0x83c140bc) {
					if (uVar2 < 0x67cfeb84) {
						if (uVar2 == 0x5eabd17f) {
							bVar1 = (name == "InBounds");
							if (bVar1) {
								pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__InBounds();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x61e48c35) {
							bVar1 = (name == "GetBuiltinComponent");
							if (bVar1) {
								pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__GetBuiltinComponent();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x67cfeb83) {
							bVar1 = (name == "GetUnityComponent");
							if (bVar1) {
								pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__GetUnityComponent();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x755b5308) {
						if (uVar2 == 0x6a01cd56) {
							bVar1 = (name == "QuaternionLocalRotation");
							if (bVar1) {
								pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__QuaternionLocalRotation();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x755b5307) {
							bVar1 = (name == "GetBoundsExtents");
							if (bVar1) {
								pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__GetBoundsExtents();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x83c140bb) {
						bVar1 = (name == "GetBoundsSize");
						if (bVar1) {
							pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__GetBoundsSize();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x770e2958) {
						bVar1 = (name == "RemoveComponent");
						if (bVar1) {
							pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__RemoveComponent();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x917c21f1) {
					if (uVar2 == 0x8d7dfb42) {
						bVar1 = (name == "TextureOffsetY");
						if (bVar1) {
							pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__TextureOffsetY();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x8e7dfcd5) {
						bVar1 = (name == "TextureOffsetX");
						if (bVar1) {
							pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__TextureOffsetX();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x917c21f0) {
						bVar1 = (name == "GetBoundsAverageCenter");
						if (bVar1) {
							pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__GetBoundsAverageCenter();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xa18f595a) {
					if (uVar2 == 0x9f4e7c78) {
						bVar1 = (name == "NetworkView");
						if (bVar1) {
							pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__NetworkView();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xa18f5959) {
						bVar1 = (name == "GetTransform");
						if (bVar1) {
							pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__GetTransform();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xa3370cc8) {
					bVar1 = (name == "Rigidbody");
					if (bVar1) {
						pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__Rigidbody();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xad82abbb) {
					bVar1 = (name == "Transform");
					if (bVar1) {
						pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__Transform();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xd82af811) {
				if (uVar2 < 0xb6997fba) {
					if (uVar2 == 0xaf82143b) {
						bVar1 = (name == "LocalPosition");
						if (bVar1) {
							pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__LocalPosition();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xafdc1b96) {
						bVar1 = (name == "Layer");
						if (bVar1) {
							pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__Layer();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xb6997fb9) {
						bVar1 = (name == "AddSphereCollider");
						if (bVar1) {
							pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__AddSphereCollider();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0xbbdcd0a7) {
					if (uVar2 == 0xbbaa27dc) {
						bVar1 = (name == "AddSphereTarget");
						if (bVar1) {
							pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__AddSphereTarget();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xbbdcd0a6) {
						bVar1 = (name == "AddBuiltinComponent");
						if (bVar1) {
							pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__AddBuiltinComponent();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xc156ee1d) {
					bVar1 = (name == "Parent");
					if (bVar1) {
						pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__Parent();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xd82af810) {
					bVar1 = (name == "GetChildren");
					if (bVar1) {
						pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__GetChildren();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xe50883bb) {
				if (uVar2 < 0xd948e168) {
					if (uVar2 == 0xd8f3e233) {
						bVar1 = (name == "AddComponent");
						if (bVar1) {
							pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__AddComponent();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xd948e167) {
						bVar1 = (name == "ActiveInHierarchy");
						if (bVar1) {
							pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__ActiveInHierarchy();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 == 0xe27f342a) {
					bVar1 = (name == "Position");
					if (bVar1) {
						pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__Position();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xe50883ba) {
					bVar1 = (name == "Forward");
					if (bVar1) {
						pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__Forward();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xe9952416) {
				if (uVar2 == 0xe5b43cf8) {
					bVar1 = (name == "Color");
					if (bVar1) {
						pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__Color();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xe9952415) {
					bVar1 = (name == "AddBoxCollider");
					if (bVar1) {
						pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__AddBoxCollider();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xf445f026) {
				bVar1 = (name == "GetBoundsMin");
				if (bVar1) {
					pCVar3 = CustomLogicMapObjectBuiltin.Bindings.__CreateMethodBinding__GetBoundsMin();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf8835433) {
				bVar1 = (name == "Tag");
				if (bVar1) {
					pCVar4 = CustomLogicMapObjectBuiltin.Bindings.__CreatePropertyBinding__Tag();
					return (ICLMemberBinding)pCVar4;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicMapObjectBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x600236D")]
		[Address(RVA = "0x592DBE0", Offset = "0x592CBE0", VA = "0x592DBE0")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__Static()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Static): 2 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_00;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Static_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600236E")]
		[Address(RVA = "0x592DC80", Offset = "0x592CC80", VA = "0x592DC80")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__Position()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Position): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_3);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_3);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600236F")]
		[Address(RVA = "0x592DD60", Offset = "0x592CD60", VA = "0x592DD60")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__LocalPosition()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__LocalPosition): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____get);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____set);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002370")]
		[Address(RVA = "0x592DE40", Offset = "0x592CE40", VA = "0x592DE40")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__Rotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Rotation): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_5);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_5);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002371")]
		[Address(RVA = "0x592DF20", Offset = "0x592CF20", VA = "0x592DF20")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__LocalRotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__LocalRotation): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____get);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____set);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002372")]
		[Address(RVA = "0x592E000", Offset = "0x592D000", VA = "0x592E000")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__QuaternionRotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__QuaternionRotation): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_71c08c0);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002373")]
		[Address(RVA = "0x592E0E0", Offset = "0x592D0E0", VA = "0x592E0E0")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__QuaternionLocalRotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__QuaternionLocalRotation): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio_71c08b0);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002374")]
		[Address(RVA = "0x592E1C0", Offset = "0x592D1C0", VA = "0x592E1C0")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__Forward()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Forward): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_9);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_9);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002375")]
		[Address(RVA = "0x592E2A0", Offset = "0x592D2A0", VA = "0x592E2A0")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__Up()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Up): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_10_0);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_10_1);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002376")]
		[Address(RVA = "0x592E380", Offset = "0x592D380", VA = "0x592E380")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__Right()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Right): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_11_0);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_11_1);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002377")]
		[Address(RVA = "0x592E460", Offset = "0x592D460", VA = "0x592E460")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__Scale()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Scale): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Scale_g____getter_12_0);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Scale_g____setter_12_1);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002378")]
		[Address(RVA = "0x592E540", Offset = "0x592D540", VA = "0x592E540")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__Name()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Name): 2 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_00;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_13_0);
			__this_00 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002379")]
		[Address(RVA = "0x592E5E0", Offset = "0x592D5E0", VA = "0x592E5E0")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__Parent()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Parent): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Parent_g____getter_14);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Parent_g____setter_14);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600237A")]
		[Address(RVA = "0x592E6C0", Offset = "0x592D6C0", VA = "0x592E6C0")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__Active()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Active): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Active_g____getter_15);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Active_g____setter_15);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600237B")]
		[Address(RVA = "0x592E7A0", Offset = "0x592D7A0", VA = "0x592E7A0")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__ActiveInHierarchy()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__ActiveInHierarchy): 2 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_00;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__ActiveInHierarchy_g);
			__this_00 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600237C")]
		[Address(RVA = "0x592E840", Offset = "0x592D840", VA = "0x592E840")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__Transform()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Transform): 2 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_00;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600237D")]
		[Address(RVA = "0x592E8E0", Offset = "0x592D8E0", VA = "0x592E8E0")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__HasRenderer()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__HasRenderer): 2 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_00;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__HasRenderer_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600237E")]
		[Address(RVA = "0x592E980", Offset = "0x592D980", VA = "0x592E980")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__Color()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Color): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Color_g____getter_19_0);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Color_g____setter_19_1);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600237F")]
		[Address(RVA = "0x592EA60", Offset = "0x592DA60", VA = "0x592EA60")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__TextureTilingX()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__TextureTilingX): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingX_g____ge);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingX_g____se);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002380")]
		[Address(RVA = "0x592EB40", Offset = "0x592DB40", VA = "0x592EB40")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__TextureTilingY()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__TextureTilingY): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingY_g____ge);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingY_g____se);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002381")]
		[Address(RVA = "0x592EC20", Offset = "0x592DC20", VA = "0x592EC20")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__TextureOffsetX()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__TextureOffsetX): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetX_g____ge);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetX_g____se);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002382")]
		[Address(RVA = "0x592ED00", Offset = "0x592DD00", VA = "0x592ED00")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__TextureOffsetY()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__TextureOffsetY): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetY_g____ge);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetY_g____se);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002383")]
		[Address(RVA = "0x592EDE0", Offset = "0x592DDE0", VA = "0x592EDE0")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__ID()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__ID): 2 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_00;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__ID_g____getter_24_0);
			__this_00 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002384")]
		[Address(RVA = "0x592EE80", Offset = "0x592DE80", VA = "0x592EE80")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__Tag()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Tag): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Tag_g____getter_25_0);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Tag_g____setter_25_1);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002385")]
		[Address(RVA = "0x592EF60", Offset = "0x592DF60", VA = "0x592EF60")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__Layer()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Layer): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Layer_g____getter_26_0);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Layer_g____setter_26_1);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002386")]
		[Address(RVA = "0x592F040", Offset = "0x592E040", VA = "0x592F040")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__Rigidbody()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Rigidbody): 2 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_00;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Rigidbody_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002387")]
		[Address(RVA = "0x592F0E0", Offset = "0x592E0E0", VA = "0x592F0E0")]
		public static CLPropertyBinding<CustomLogicMapObjectBuiltin> __CreatePropertyBinding__NetworkView()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__NetworkView): 3 lines keep C-only constructs
			Func<CustomLogicMapObjectBuiltin, object> __this;
			Action<CustomLogicMapObjectBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicMapObjectBuiltin> __this_01;

			__this = new Func<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__NetworkView_g____gette);
			__this_00 = new Action<CustomLogicMapObjectBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__NetworkView_g____sette);
			__this_01 = new CLPropertyBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002388")]
		[Address(RVA = "0x592F1C0", Offset = "0x592E1C0", VA = "0x592F1C0")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__AddComponent()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddComponent): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460af == false) {
				Il2CppMethodInitialized_075460af = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__29_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__29_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddComponent_b__29_0);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__29_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002389")]
		[Address(RVA = "0x592F300", Offset = "0x592E300", VA = "0x592F300")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__RemoveComponent()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__RemoveComponent): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460b0 == false) {
				Il2CppMethodInitialized_075460b0 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__30_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__30_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__RemoveComponent_b__30);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__30_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600238A")]
		[Address(RVA = "0x592F440", Offset = "0x592E440", VA = "0x592F440")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__GetComponent()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetComponent): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460b1 == false) {
				Il2CppMethodInitialized_075460b1 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__31_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__31_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetComponent_b__31_0);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__31_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600238B")]
		[Address(RVA = "0x592F580", Offset = "0x592E580", VA = "0x592F580")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__GetUnityComponent()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetUnityComponent): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460b2 == false) {
				Il2CppMethodInitialized_075460b2 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__32_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__32_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetUnityComponent_b__3);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__32_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600238C")]
		[Address(RVA = "0x592F6C0", Offset = "0x592E6C0", VA = "0x592F6C0")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__SetComponentEnabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetComponentEnabled): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460b3 == false) {
				Il2CppMethodInitialized_075460b3 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__33_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__33_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetComponentEnabled_b);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__33_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600238D")]
		[Address(RVA = "0x592F800", Offset = "0x592E800", VA = "0x592F800")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__SetComponentsEnabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetComponentsEnabled): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460b4 == false) {
				Il2CppMethodInitialized_075460b4 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__34_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__34_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetComponentsEnabled_b);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__34_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600238E")]
		[Address(RVA = "0x592F940", Offset = "0x592E940", VA = "0x592F940")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__AddSphereCollider()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddSphereCollider): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460b5 == false) {
				Il2CppMethodInitialized_075460b5 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__35_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__35_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddSphereCollider_b__3);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__35_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600238F")]
		[Address(RVA = "0x592FA80", Offset = "0x592EA80", VA = "0x592FA80")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__AddBoxCollider()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddBoxCollider): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460b6 == false) {
				Il2CppMethodInitialized_075460b6 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__36_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__36_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddBoxCollider_b__36_0);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__36_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002390")]
		[Address(RVA = "0x592FBC0", Offset = "0x592EBC0", VA = "0x592FBC0")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__SetCollideWith()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetCollideWith): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460b7 == false) {
				Il2CppMethodInitialized_075460b7 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__37_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__37_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetCollideWith_b__37_0);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__37_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002391")]
		[Address(RVA = "0x592FD00", Offset = "0x592ED00", VA = "0x592FD00")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__SetCollideMode()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetCollideMode): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460b8 == false) {
				Il2CppMethodInitialized_075460b8 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__38_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__38_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetCollideMode_b__38_0);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__38_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002392")]
		[Address(RVA = "0x592FE40", Offset = "0x592EE40", VA = "0x592FE40")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__AddSphereTarget()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddSphereTarget): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460b9 == false) {
				Il2CppMethodInitialized_075460b9 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__39_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__39_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddSphereTarget_b__39);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__39_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002393")]
		[Address(RVA = "0x592FF80", Offset = "0x592EF80", VA = "0x592FF80")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__AddBoxTarget()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddBoxTarget): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460ba == false) {
				Il2CppMethodInitialized_075460ba = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__40_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__40_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddBoxTarget_b__40_0);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__40_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002394")]
		[Address(RVA = "0x59300C0", Offset = "0x592F0C0", VA = "0x59300C0")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__GetChild()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetChild): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460bb == false) {
				Il2CppMethodInitialized_075460bb = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__41_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__41_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetChild_b__41_0);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__41_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002395")]
		[Address(RVA = "0x5930200", Offset = "0x592F200", VA = "0x5930200")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__GetChildren()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetChildren): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460bc == false) {
				Il2CppMethodInitialized_075460bc = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__42_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__42_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetChildren_b__42_0);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__42_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002396")]
		[Address(RVA = "0x5930340", Offset = "0x592F340", VA = "0x5930340")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__GetTransform()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetTransform): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460bd == false) {
				Il2CppMethodInitialized_075460bd = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__43_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__43_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetTransform_b__43_0);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__43_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002397")]
		[Address(RVA = "0x5930480", Offset = "0x592F480", VA = "0x5930480")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__SetColorAll()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetColorAll): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460be == false) {
				Il2CppMethodInitialized_075460be = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__44_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__44_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetColorAll_b__44_0);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__44_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002398")]
		[Address(RVA = "0x59305C0", Offset = "0x592F5C0", VA = "0x59305C0")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__InBounds()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__InBounds): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460bf == false) {
				Il2CppMethodInitialized_075460bf = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__45_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__45_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__InBounds_b__45_0);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__45_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002399")]
		[Address(RVA = "0x5930700", Offset = "0x592F700", VA = "0x5930700")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__GetBoundsAverageCenter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsAverageCenter): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460c0 == false) {
				Il2CppMethodInitialized_075460c0 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__46_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__46_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsAverageCenter);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__46_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600239A")]
		[Address(RVA = "0x5930840", Offset = "0x592F840", VA = "0x5930840")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__GetBoundsCenter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsCenter): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460c1 == false) {
				Il2CppMethodInitialized_075460c1 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__47_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__47_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsCenter_b__47);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__47_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600239B")]
		[Address(RVA = "0x5930980", Offset = "0x592F980", VA = "0x5930980")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__GetBoundsSize()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsSize): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460c2 == false) {
				Il2CppMethodInitialized_075460c2 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__48_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__48_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsSize_b__48_0);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__48_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600239C")]
		[Address(RVA = "0x5930AC0", Offset = "0x592FAC0", VA = "0x5930AC0")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__GetBoundsMin()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsMin): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460c3 == false) {
				Il2CppMethodInitialized_075460c3 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__49_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__49_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsMin_b__49_0);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__49_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600239D")]
		[Address(RVA = "0x5930C00", Offset = "0x592FC00", VA = "0x5930C00")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__GetBoundsMax()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsMax): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460c4 == false) {
				Il2CppMethodInitialized_075460c4 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__50_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__50_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsMax_b__50_0);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__50_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600239E")]
		[Address(RVA = "0x5930D40", Offset = "0x592FD40", VA = "0x5930D40")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__GetBoundsExtents()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsExtents): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460c5 == false) {
				Il2CppMethodInitialized_075460c5 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__51_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__51_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsExtents_b__51);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__51_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600239F")]
		[Address(RVA = "0x5930E80", Offset = "0x592FE80", VA = "0x5930E80")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__GetCorners()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetCorners): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460c6 == false) {
				Il2CppMethodInitialized_075460c6 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__52_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__52_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetCorners_b__52_0);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__52_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60023A0")]
		[Address(RVA = "0x5930FC0", Offset = "0x592FFC0", VA = "0x5930FC0")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__HasTag()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__HasTag): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460c7 == false) {
				Il2CppMethodInitialized_075460c7 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__53_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__53_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__HasTag_b__53_0);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__53_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60023A1")]
		[Address(RVA = "0x5931100", Offset = "0x5930100", VA = "0x5931100")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__AddBuiltinComponent()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddBuiltinComponent): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460c8 == false) {
				Il2CppMethodInitialized_075460c8 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__54_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__54_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddBuiltinComponent_b);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__54_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60023A2")]
		[Address(RVA = "0x5931240", Offset = "0x5930240", VA = "0x5931240")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__AddRigidbody()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddRigidbody): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460c9 == false) {
				Il2CppMethodInitialized_075460c9 = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__55_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__55_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddRigidbody_b__55_0);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__55_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60023A3")]
		[Address(RVA = "0x5931380", Offset = "0x5930380", VA = "0x5931380")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__GetBuiltinComponent()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBuiltinComponent): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460ca == false) {
				Il2CppMethodInitialized_075460ca = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__56_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__56_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBuiltinComponent_b);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__56_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60023A4")]
		[Address(RVA = "0x59314C0", Offset = "0x59304C0", VA = "0x59314C0")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__RemoveBuiltinComponent()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__RemoveBuiltinComponent): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460cb == false) {
				Il2CppMethodInitialized_075460cb = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__57_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__57_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__RemoveBuiltinComponent);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__57_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60023A5")]
		[Address(RVA = "0x5931600", Offset = "0x5930600", VA = "0x5931600")]
		public static CLMethodBinding<CustomLogicMapObjectBuiltin> __CreateMethodBinding__ConvertToCSV()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__ConvertToCSV): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapObjectBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapObjectBuiltin> __this_00;

			if (Il2CppMethodInitialized_075460cc == false) {
				Il2CppMethodInitialized_075460cc = true;
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__58_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapObjectBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__58_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapObjectBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapObjectBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__ConvertToCSV_b__58_0);
				pCVar2 = typeof(CustomLogicMapObjectBuiltin.Bindings.c).static_fields;
				pCVar2.__9__58_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapObjectBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x400172C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public MapObject Value;

	[Token(Token = "0x400172D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private CustomLogicRigidbodyBuiltin _rigidBody;

	[Token(Token = "0x400172E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Vector3 _internalRotation;

	[Token(Token = "0x400172F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private Vector3 _internalLocalRotation;

	[Token(Token = "0x4001730")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool _needSetRotation;

	[Token(Token = "0x4001731")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
	private bool _needSetLocalRotation;

	[Token(Token = "0x4001732")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private Dictionary<string, BuiltinComponentInstance> _builtinCache;

	[Token(Token = "0x1700043B")]
	public bool Static
	{
		[Token(Token = "0x6002315")]
		[Address(RVA = "0x59268F0", Offset = "0x59258F0", VA = "0x59268F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_Static): clean
			MapObject pMVar1;
			MapScriptBaseObject pMVar2;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(pMVar2 = pMVar1.ScriptObject, pMVar2 == null)) {
				throw new NullReferenceException();
			}
			return pMVar2.Static;
		}
	}

	[Token(Token = "0x1700043C")]
	public CustomLogicVector3Builtin Position
	{
		[Token(Token = "0x6002316")]
		[Address(RVA = "0x5926910", Offset = "0x5925910", VA = "0x5926910")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_Position): clean
			MapObject pMVar1;
			GameObject __this_00;
			Transform __this_01;
			CustomLogicVector3Builtin __this_02;
			Vector3 value;

			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(__this_00 = pMVar1.GameObject, __this_00 != null)) {
				__this_01 = __this_00.transform;
				if (__this_01 != null) {
					value = __this_01.position;
					__this_02 = new CustomLogicVector3Builtin(value);
					return __this_02;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6002317")]
		[Address(RVA = "0x59269A0", Offset = "0x59259A0", VA = "0x59269A0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_Position): clean
			MapObject pMVar1;
			GameObject __this_00;
			Transform __this_01;

			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(__this_00 = pMVar1.GameObject, __this_00 != null)) {
				__this_01 = __this_00.transform;
				if ((value != null) &&(__this_01 != null)) {
					__this_01.position = (Vector3)value.Value;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700043D")]
	public CustomLogicVector3Builtin LocalPosition
	{
		[Token(Token = "0x6002318")]
		[Address(RVA = "0x59269F0", Offset = "0x59259F0", VA = "0x59269F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_LocalPosition): clean
			MapObject pMVar1;
			GameObject __this_00;
			Transform __this_01;
			CustomLogicVector3Builtin __this_02;
			Vector3 value;

			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(__this_00 = pMVar1.GameObject, __this_00 != null)) {
				__this_01 = __this_00.transform;
				if (__this_01 != null) {
					value = __this_01.localPosition;
					__this_02 = new CustomLogicVector3Builtin(value);
					return __this_02;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6002319")]
		[Address(RVA = "0x5926A80", Offset = "0x5925A80", VA = "0x5926A80")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_LocalPosition): clean
			MapObject pMVar1;
			GameObject __this_00;
			Transform __this_01;

			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(__this_00 = pMVar1.GameObject, __this_00 != null)) {
				__this_01 = __this_00.transform;
				if ((value != null) &&(__this_01 != null)) {
					__this_01.localPosition = (Vector3)value.Value;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700043E")]
	public CustomLogicVector3Builtin Rotation
	{
		[Token(Token = "0x600231A")]
		[Address(RVA = "0x5926AD0", Offset = "0x5925AD0", VA = "0x5926AD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_Rotation): 6 lines keep C-only constructs
			MapObject pMVar1;
			GameObject __this_00;
			Transform __this_01;
			CustomLogicVector3Builtin __this_02;
			Vector3 UVar2;
			Vector3 euler;
			float local_2c;
			ulong local_28;
			Quaternion local_18;

			local_18 = (Quaternion)ZEXT816(0);
			if (this._needSetRotation == false) {
				local_28._0_4_ = this._internalRotation.x;
				local_28._4_4_ = this._internalRotation.y;
				local_2c = this._internalRotation.z;
		label_05a26b8f: ;
				UVar2.z = local_2c;
				UVar2.x = (float)(undefined4)local_28;
				UVar2.y = (float)local_28._4_4_;
				__this_02 = new CustomLogicVector3Builtin(UVar2);
				return __this_02;
			}
			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(__this_00 = pMVar1.GameObject, __this_00 != null)) {
				__this_01 = __this_00.transform;
				if (__this_01 != null) {
					local_18 = __this_01.rotation;
					UVar2 = Quaternion.Internal_ToEulerRad(ref local_18);
					euler.x = UVar2.x * 57.29578;
					euler.y = UVar2.y * 57.29578;
					euler.z = UVar2.z * 57.29578;
					UVar2 = Quaternion.Internal_MakePositive(euler);
					local_2c = UVar2.z;
					local_28 = UVar2._0_8_;
					this._internalRotation.x = UVar2.x;
					this._internalRotation.y = UVar2.y;
					this._internalRotation.z = local_2c;
					this._needSetRotation = false;
					goto label_05a26b8f;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x600231B")]
		[Address(RVA = "0x5926BD0", Offset = "0x5925BD0", VA = "0x5926BD0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_Rotation): clean
			uint uVar1;
			uint uVar2;
			MapObject pMVar3;
			GameObject __this_00;
			float fVar4;
			float fVar5;
			Transform __this_01;
			Quaternion value_00;
			Vector3 UStack_20;

			if (value != null) {
				fVar4 = value.Value.x;
				fVar5 = value.Value.y;
				this._internalRotation.z = value.Value.z;
				this._internalRotation.x = fVar4;
				this._internalRotation.y = fVar5;
				this._needSetRotation = false;
				pMVar3 = this.Value;
				if ((pMVar3 != null) &&(__this_00 = pMVar3.GameObject, __this_00 != null)) {
					__this_01 = __this_00.transform;
					uVar1 = this._internalRotation.x;
					uVar2 = this._internalRotation.y;
					UStack_20.x = (float)uVar1 * 0.017453292;
					UStack_20.y = (float)uVar2 * 0.017453292;
					UStack_20.z = this._internalRotation.z * 0.017453292;
					value_00 = Quaternion.Internal_FromEulerRad(ref UStack_20);
					if (__this_01 != null) {
						__this_01.rotation = value_00;
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700043F")]
	public CustomLogicVector3Builtin LocalRotation
	{
		[Token(Token = "0x600231C")]
		[Address(RVA = "0x5926C60", Offset = "0x5925C60", VA = "0x5926C60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_LocalRotation): 6 lines keep C-only constructs
			MapObject pMVar1;
			GameObject __this_00;
			Transform __this_01;
			CustomLogicVector3Builtin __this_02;
			Vector3 UVar2;
			Vector3 euler;
			float local_2c;
			ulong local_28;
			Quaternion local_18;

			local_18 = (Quaternion)ZEXT816(0);
			if (this._needSetLocalRotation == false) {
				local_28._0_4_ = this._internalLocalRotation.x;
				local_28._4_4_ = this._internalLocalRotation.y;
				local_2c = this._internalLocalRotation.z;
		label_05a26d1f: ;
				UVar2.z = local_2c;
				UVar2.x = (float)(undefined4)local_28;
				UVar2.y = (float)local_28._4_4_;
				__this_02 = new CustomLogicVector3Builtin(UVar2);
				return __this_02;
			}
			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(__this_00 = pMVar1.GameObject, __this_00 != null)) {
				__this_01 = __this_00.transform;
				if (__this_01 != null) {
					local_18 = __this_01.localRotation;
					UVar2 = Quaternion.Internal_ToEulerRad(ref local_18);
					euler.x = UVar2.x * 57.29578;
					euler.y = UVar2.y * 57.29578;
					euler.z = UVar2.z * 57.29578;
					UVar2 = Quaternion.Internal_MakePositive(euler);
					local_2c = UVar2.z;
					local_28 = UVar2._0_8_;
					this._internalLocalRotation.x = UVar2.x;
					this._internalLocalRotation.y = UVar2.y;
					this._internalLocalRotation.z = local_2c;
					this._needSetLocalRotation = false;
					goto label_05a26d1f;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x600231D")]
		[Address(RVA = "0x5926D60", Offset = "0x5925D60", VA = "0x5926D60")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_LocalRotation): clean
			uint uVar1;
			uint uVar2;
			MapObject pMVar3;
			GameObject __this_00;
			float fVar4;
			float fVar5;
			Transform __this_01;
			Quaternion value_00;
			Vector3 UStack_20;

			if (value != null) {
				fVar4 = value.Value.x;
				fVar5 = value.Value.y;
				this._internalLocalRotation.z = value.Value.z;
				this._internalLocalRotation.x = fVar4;
				this._internalLocalRotation.y = fVar5;
				this._needSetLocalRotation = false;
				pMVar3 = this.Value;
				if ((pMVar3 != null) &&(__this_00 = pMVar3.GameObject, __this_00 != null)) {
					__this_01 = __this_00.transform;
					uVar1 = this._internalLocalRotation.x;
					uVar2 = this._internalLocalRotation.y;
					UStack_20.x = (float)uVar1 * 0.017453292;
					UStack_20.y = (float)uVar2 * 0.017453292;
					UStack_20.z = this._internalLocalRotation.z * 0.017453292;
					value_00 = Quaternion.Internal_FromEulerRad(ref UStack_20);
					if (__this_01 != null) {
						__this_01.localRotation = value_00;
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000440")]
	public CustomLogicQuaternionBuiltin QuaternionRotation
	{
		[Token(Token = "0x600231E")]
		[Address(RVA = "0x5926DF0", Offset = "0x5925DF0", VA = "0x5926DF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_QuaternionRotation): clean
			MapObject pMVar1;
			GameObject __this_00;
			Transform __this_01;
			CustomLogicQuaternionBuiltin __this_02;
			Quaternion value;

			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(__this_00 = pMVar1.GameObject, __this_00 != null)) {
				__this_01 = __this_00.transform;
				if (__this_01 != null) {
					value = __this_01.rotation;
					__this_02 = new CustomLogicQuaternionBuiltin(value);
					return __this_02;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x600231F")]
		[Address(RVA = "0x5926E80", Offset = "0x5925E80", VA = "0x5926E80")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_QuaternionRotation): clean
			MapObject pMVar1;
			GameObject __this_00;
			Transform __this_01;

			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(__this_00 = pMVar1.GameObject, __this_00 != null)) {
				__this_01 = __this_00.transform;
				if ((value != null) &&(__this_01 != null)) {
					__this_01.rotation = (Quaternion)value.Value;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000441")]
	public CustomLogicQuaternionBuiltin QuaternionLocalRotation
	{
		[Token(Token = "0x6002320")]
		[Address(RVA = "0x5926ED0", Offset = "0x5925ED0", VA = "0x5926ED0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_QuaternionLocalRotation): clean
			MapObject pMVar1;
			GameObject __this_00;
			Transform __this_01;
			CustomLogicQuaternionBuiltin __this_02;
			Quaternion value;

			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(__this_00 = pMVar1.GameObject, __this_00 != null)) {
				__this_01 = __this_00.transform;
				if (__this_01 != null) {
					value = __this_01.localRotation;
					__this_02 = new CustomLogicQuaternionBuiltin(value);
					return __this_02;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6002321")]
		[Address(RVA = "0x5926F60", Offset = "0x5925F60", VA = "0x5926F60")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_QuaternionLocalRotation): clean
			MapObject pMVar1;
			GameObject __this_00;
			Transform __this_01;

			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(__this_00 = pMVar1.GameObject, __this_00 != null)) {
				__this_01 = __this_00.transform;
				if ((value != null) &&(__this_01 != null)) {
					__this_01.localRotation = (Quaternion)value.Value;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000442")]
	public CustomLogicVector3Builtin Forward
	{
		[Token(Token = "0x6002322")]
		[Address(RVA = "0x5926FB0", Offset = "0x5925FB0", VA = "0x5926FB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_Forward): 25 lines keep C-only constructs
			uint uVar1;
			uint uVar2;
			uint uVar3;
			MapObject pMVar4;
			GameObject __this_00;
			Transform __this_01;
			UnityEngine_Vector3_StaticFields pUVar5;
			CustomLogicVector3Builtin __this_02;
			float fVar6;
			uint extraout_XMM0_Db;
			uint in_XMM1_Db;
			byte[] auVar7 = new byte[16];
			Vector3 UVar8;
			float local_24;
			byte[] local_20 = new byte[12];
			float fStack_14;

			pMVar4 = this.Value;
			if (((pMVar4 == null) ||(__this_00 = pMVar4.GameObject, __this_00 == null)) ||(__this_01 = __this_00.transform, __this_01 == null)) {
				throw new NullReferenceException();
			}
			UVar8 = __this_01.forward;
			local_24 = UVar8.z;
			if (Il2CppMethodInitialized_0753e72d == false) {
				in_XMM1_Db = 0;
				Il2CppMethodInitialized_0753e72d = true;
				local_20._0_4_ = 0.0;
				local_20._4_4_ = 0.0;
			}
			else {
				local_20._0_4_ = 0.0;
				local_20._4_4_ = 0.0;
			}
			if (g_data_0753e729 == false) {
				local_20._0_4_ = 0.0;
				local_20._4_4_ = 0.0;
				in_XMM1_Db = 0;
				g_data_0753e729 = true;
				uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				local_20._0_4_ = 0.0;
				local_20._4_4_ = 0.0;
				uVar3 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
				in_XMM1_Db = 0;
			}
			fVar6 = local_24 * local_24 + fStack_14 * fStack_14 + (float)local_20._8_4_ * (float)local_20._8_4_;
			if (fVar6 < 0.0) {
				fVar6 = sqrtf(fVar6);
				in_XMM1_Db = extraout_XMM0_Db;
			}
			else {
				fVar6 = SQRT(fVar6);
			}
			if (1e-05 < fVar6) {
				local_24 = local_24 / fVar6;
				auVar7._4_4_ = fVar6;
				auVar7._0_4_ = fVar6;
				auVar7._8_4_ = in_XMM1_Db;
				auVar7._12_4_ = in_XMM1_Db;
				auVar7 = divps(unique0x1000021a, auVar7);
				local_20._0_4_ = auVar7._0_4_;
				local_20._4_4_ = auVar7._4_4_;
				pUVar5 = (UnityEngine_Vector3_StaticFields)local_20;
			}
			else {
				pUVar5 = typeof(Vector3).static_fields;
				local_24 = (pUVar5.zeroVector).z;
			}
			uVar1 = (pUVar5.zeroVector).x;
			uVar2 = (pUVar5.zeroVector).y;
			fStack_14 = (float)uVar2;
			local_20._8_4_ = uVar1;
			UVar8.z = local_24;
			UVar8.x = (float)local_20._8_4_;
			UVar8.y = fStack_14;
			__this_02 = new CustomLogicVector3Builtin(UVar8);
			return __this_02;
		}
		[Token(Token = "0x6002323")]
		[Address(RVA = "0x5927180", Offset = "0x5926180", VA = "0x5927180")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_Forward): clean
			MapObject pMVar1;
			GameObject __this_00;
			Transform __this_01;

			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(__this_00 = pMVar1.GameObject, __this_00 != null)) {
				__this_01 = __this_00.transform;
				if ((value != null) &&(__this_01 != null)) {
					__this_01.forward = (Vector3)value.Value;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000443")]
	public CustomLogicVector3Builtin Up
	{
		[Token(Token = "0x6002324")]
		[Address(RVA = "0x59271D0", Offset = "0x59261D0", VA = "0x59271D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_Up): 25 lines keep C-only constructs
			uint uVar1;
			uint uVar2;
			uint uVar3;
			MapObject pMVar4;
			GameObject __this_00;
			Transform __this_01;
			UnityEngine_Vector3_StaticFields pUVar5;
			CustomLogicVector3Builtin __this_02;
			float fVar6;
			uint extraout_XMM0_Db;
			uint in_XMM1_Db;
			byte[] auVar7 = new byte[16];
			Vector3 UVar8;
			float local_24;
			byte[] local_20 = new byte[12];
			float fStack_14;

			pMVar4 = this.Value;
			if (((pMVar4 == null) ||(__this_00 = pMVar4.GameObject, __this_00 == null)) ||(__this_01 = __this_00.transform, __this_01 == null)) {
				throw new NullReferenceException();
			}
			UVar8 = __this_01.up;
			local_24 = UVar8.z;
			if (Il2CppMethodInitialized_0753e72d == false) {
				in_XMM1_Db = 0;
				Il2CppMethodInitialized_0753e72d = true;
				local_20._0_4_ = 0.0;
				local_20._4_4_ = 0.0;
			}
			else {
				local_20._0_4_ = 0.0;
				local_20._4_4_ = 0.0;
			}
			if (g_data_0753e729 == false) {
				local_20._0_4_ = 0.0;
				local_20._4_4_ = 0.0;
				in_XMM1_Db = 0;
				g_data_0753e729 = true;
				uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				local_20._0_4_ = 0.0;
				local_20._4_4_ = 0.0;
				uVar3 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
				in_XMM1_Db = 0;
			}
			fVar6 = local_24 * local_24 + fStack_14 * fStack_14 + (float)local_20._8_4_ * (float)local_20._8_4_;
			if (fVar6 < 0.0) {
				fVar6 = sqrtf(fVar6);
				in_XMM1_Db = extraout_XMM0_Db;
			}
			else {
				fVar6 = SQRT(fVar6);
			}
			if (1e-05 < fVar6) {
				local_24 = local_24 / fVar6;
				auVar7._4_4_ = fVar6;
				auVar7._0_4_ = fVar6;
				auVar7._8_4_ = in_XMM1_Db;
				auVar7._12_4_ = in_XMM1_Db;
				auVar7 = divps(unique0x1000021a, auVar7);
				local_20._0_4_ = auVar7._0_4_;
				local_20._4_4_ = auVar7._4_4_;
				pUVar5 = (UnityEngine_Vector3_StaticFields)local_20;
			}
			else {
				pUVar5 = typeof(Vector3).static_fields;
				local_24 = (pUVar5.zeroVector).z;
			}
			uVar1 = (pUVar5.zeroVector).x;
			uVar2 = (pUVar5.zeroVector).y;
			fStack_14 = (float)uVar2;
			local_20._8_4_ = uVar1;
			UVar8.z = local_24;
			UVar8.x = (float)local_20._8_4_;
			UVar8.y = fStack_14;
			__this_02 = new CustomLogicVector3Builtin(UVar8);
			return __this_02;
		}
		[Token(Token = "0x6002325")]
		[Address(RVA = "0x59273A0", Offset = "0x59263A0", VA = "0x59273A0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_Up): clean
			MapObject pMVar1;
			GameObject __this_00;
			Transform __this_01;

			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(__this_00 = pMVar1.GameObject, __this_00 != null)) {
				__this_01 = __this_00.transform;
				if ((value != null) &&(__this_01 != null)) {
					__this_01.up = (Vector3)value.Value;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000444")]
	public CustomLogicVector3Builtin Right
	{
		[Token(Token = "0x6002326")]
		[Address(RVA = "0x59273F0", Offset = "0x59263F0", VA = "0x59273F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_Right): 25 lines keep C-only constructs
			uint uVar1;
			uint uVar2;
			uint uVar3;
			MapObject pMVar4;
			GameObject __this_00;
			Transform __this_01;
			UnityEngine_Vector3_StaticFields pUVar5;
			CustomLogicVector3Builtin __this_02;
			float fVar6;
			uint extraout_XMM0_Db;
			uint in_XMM1_Db;
			byte[] auVar7 = new byte[16];
			Vector3 UVar8;
			float local_24;
			byte[] local_20 = new byte[12];
			float fStack_14;

			pMVar4 = this.Value;
			if (((pMVar4 == null) ||(__this_00 = pMVar4.GameObject, __this_00 == null)) ||(__this_01 = __this_00.transform, __this_01 == null)) {
				throw new NullReferenceException();
			}
			UVar8 = __this_01.right;
			local_24 = UVar8.z;
			if (Il2CppMethodInitialized_0753e72d == false) {
				in_XMM1_Db = 0;
				Il2CppMethodInitialized_0753e72d = true;
				local_20._0_4_ = 0.0;
				local_20._4_4_ = 0.0;
			}
			else {
				local_20._0_4_ = 0.0;
				local_20._4_4_ = 0.0;
			}
			if (g_data_0753e729 == false) {
				local_20._0_4_ = 0.0;
				local_20._4_4_ = 0.0;
				in_XMM1_Db = 0;
				g_data_0753e729 = true;
				uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				local_20._0_4_ = 0.0;
				local_20._4_4_ = 0.0;
				uVar3 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
				in_XMM1_Db = 0;
			}
			fVar6 = local_24 * local_24 + fStack_14 * fStack_14 + (float)local_20._8_4_ * (float)local_20._8_4_;
			if (fVar6 < 0.0) {
				fVar6 = sqrtf(fVar6);
				in_XMM1_Db = extraout_XMM0_Db;
			}
			else {
				fVar6 = SQRT(fVar6);
			}
			if (1e-05 < fVar6) {
				local_24 = local_24 / fVar6;
				auVar7._4_4_ = fVar6;
				auVar7._0_4_ = fVar6;
				auVar7._8_4_ = in_XMM1_Db;
				auVar7._12_4_ = in_XMM1_Db;
				auVar7 = divps(unique0x1000021a, auVar7);
				local_20._0_4_ = auVar7._0_4_;
				local_20._4_4_ = auVar7._4_4_;
				pUVar5 = (UnityEngine_Vector3_StaticFields)local_20;
			}
			else {
				pUVar5 = typeof(Vector3).static_fields;
				local_24 = (pUVar5.zeroVector).z;
			}
			uVar1 = (pUVar5.zeroVector).x;
			uVar2 = (pUVar5.zeroVector).y;
			fStack_14 = (float)uVar2;
			local_20._8_4_ = uVar1;
			UVar8.z = local_24;
			UVar8.x = (float)local_20._8_4_;
			UVar8.y = fStack_14;
			__this_02 = new CustomLogicVector3Builtin(UVar8);
			return __this_02;
		}
		[Token(Token = "0x6002327")]
		[Address(RVA = "0x59275C0", Offset = "0x59265C0", VA = "0x59275C0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_Right): clean
			MapObject pMVar1;
			GameObject __this_00;
			Transform __this_01;

			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(__this_00 = pMVar1.GameObject, __this_00 != null)) {
				__this_01 = __this_00.transform;
				if ((value != null) &&(__this_01 != null)) {
					__this_01.right = (Vector3)value.Value;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000445")]
	public CustomLogicVector3Builtin Scale
	{
		[Token(Token = "0x6002328")]
		[Address(RVA = "0x5927610", Offset = "0x5926610", VA = "0x5927610")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_Scale): 13 lines keep C-only constructs
			uint uVar1;
			uint uVar2;
			MapObject pMVar3;
			GameObject __this_00;
			byte[] auVar4 = new byte[16];
			Transform __this_01;
			CustomLogicVector3Builtin __this_02;
			ulong extraout_XMM0_Qb;
			byte[] auVar5 = new byte[16];
			Vector3 UVar6;
			ulong local_18;

			pMVar3 = this.Value;
			if ((pMVar3 != null) &&(__this_00 = pMVar3.GameObject, __this_00 != null)) {
				__this_01 = __this_00.transform;
				if (__this_01 != null) {
					UVar6 = __this_01.localScale;
					auVar5._0_8_ = UVar6._0_8_;
					auVar5._8_8_ = extraout_XMM0_Qb;
					pMVar3 = this.Value;
					if (pMVar3 != null) {
						uVar1 = pMVar3.BaseScale.x;
						uVar2 = pMVar3.BaseScale.y;
						auVar4._4_4_ = uVar2;
						auVar4._0_4_ = uVar1;
						auVar4._8_8_ = 0;
						auVar5 = divps(auVar5, auVar4);
						UVar6.z = UVar6.z / pMVar3.BaseScale.z;
						local_18._0_4_ = auVar5._0_4_;
						local_18._4_4_ = auVar5._4_4_;
						UVar6.x = (float)(undefined4)local_18;
						UVar6.y = (float)local_18._4_4_;
						__this_02 = new CustomLogicVector3Builtin(UVar6);
						return __this_02;
					}
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6002329")]
		[Address(RVA = "0x59276C0", Offset = "0x59266C0", VA = "0x59276C0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_Scale): clean
			float fVar1;
			float fVar2;
			uint uVar3;
			uint uVar4;
			uint uVar5;
			uint uVar6;
			MapObject pMVar7;
			GameObject __this_00;
			Transform __this_01;
			Vector3 value_00;

			if (((value != null) &&(pMVar7 = this.Value, pMVar7 != null)) &&(__this_00 = pMVar7.GameObject, __this_00 != null)) {
				uVar3 = value.Value.x;
				uVar5 = value.Value.y;
				fVar1 = value.Value.z;
				fVar2 = pMVar7.BaseScale.z;
				uVar4 = pMVar7.BaseScale.x;
				uVar6 = pMVar7.BaseScale.y;
				__this_01 = __this_00.transform;
				if (__this_01 != null) {
					value_00.x = (float)uVar3 * (float)uVar4;
					value_00.y = (float)uVar5 * (float)uVar6;
					value_00.z = fVar1 * fVar2;
					__this_01.localScale = value_00;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000446")]
	public string Name
	{
		[Token(Token = "0x600232A")]
		[Address(RVA = "0x5927740", Offset = "0x5926740", VA = "0x5927740")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_Name): clean
			MapObject pMVar1;
			MapScriptBaseObject pMVar2;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(pMVar2 = pMVar1.ScriptObject, pMVar2 == null)) {
				throw new NullReferenceException();
			}
			return pMVar2.Name;
		}
	}

	[Token(Token = "0x17000447")]
	public object Parent
	{
		[Token(Token = "0x600232B")]
		[Address(RVA = "0x5927760", Offset = "0x5926760", VA = "0x5927760")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_Parent): clean
			int key;
			CustomLogicEvaluator __this_00;
			Dictionary<int, object> __this_01;
			MapObject pMVar1;
			CustomLogicMapObjectBuiltin pCVar2;

			pMVar1 = this.Value;
			if (pMVar1 != null) {
				key = pMVar1.Parent;
				if (key < 1) {
					return null;
				}
				__this_00 = CustomLogicManager.Evaluator;
				__this_01 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (__this_01 != null) {
					pMVar1 = __this_01.get_Item(key);
					if (__this_00 != null) {
						pCVar2 = __this_00.GetOrCreateMapObjectBuiltin(pMVar1);
						return (object)pCVar2;
					}
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x600232C")]
		[Address(RVA = "0x5927840", Offset = "0x5926840", VA = "0x5927840")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_Parent): 4 lines keep C-only constructs
			byte bVar1;
			byte bVar2;
			GameObject __this_00;
			Transform __this_01;
			Il2CppClass pIVar3;
			MapObject pMVar4;

			if (value == null) {
				pMVar4 = this.Value;
				pIVar3 = null;
			}
			else {
				pIVar3 = value.klass;
				bVar1 = (pIVar3._2).typeHierarchyDepth;
				bVar2 = (typeof(CustomLogicMapObjectBuiltin)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pIVar3._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicMapObjectBuiltin))) {
					bVar2 = (typeof(CustomLogicTransformBuiltin)._2).typeHierarchyDepth;
					if ((bVar2 <= bVar1) &&((pIVar3._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicTransformBuiltin))) {
						pMVar4 = this.Value;
						MapLoader.SetParent(pMVar4, null);
						bVar1 = (typeof(CustomLogicTransformBuiltin)._2).typeHierarchyDepth;
						if (((value.klass._2).typeHierarchyDepth < bVar1) ||((value.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicTransformBuiltin))) {
							throw new InvalidCastException();
						}
						pMVar4 = this.Value;
						if (((pMVar4 == null) ||(__this_00 = pMVar4.GameObject, __this_00 == null)) ||(__this_01 = __this_00.transform, __this_01 == null)) {
							throw new NullReferenceException();
						}
						__this_01.SetParent((Transform)value[3].klass);
					}
					goto label_05a279c0;
				}
				pMVar4 = this.Value;
				pIVar3 = value[3].klass;
			}
			MapLoader.SetParent(pMVar4, (MapObject)pIVar3);
		label_05a279c0: ;
			this._needSetLocalRotation = true;
			return;
		}
	}

	[Token(Token = "0x17000448")]
	public bool Active
	{
		[Token(Token = "0x600232D")]
		[Address(RVA = "0x59279E0", Offset = "0x59269E0", VA = "0x59279E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_Active): clean
			MapObject pMVar1;
			GameObject __this_00;
			bool bVar2;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.GameObject, __this_00 == null)) {
				throw new NullReferenceException();
			}
			return bVar2;
		}
		[Token(Token = "0x600232E")]
		[Address(RVA = "0x5927A00", Offset = "0x5926A00", VA = "0x5927A00")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_Active): clean
			MapObject pMVar1;
			GameObject __this_00;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.GameObject, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.SetActive(value);
			return;
		}
	}

	[Token(Token = "0x17000449")]
	public bool ActiveInHierarchy
	{
		[Token(Token = "0x600232F")]
		[Address(RVA = "0x5927A30", Offset = "0x5926A30", VA = "0x5927A30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_ActiveInHierarchy): clean
			MapObject pMVar1;
			GameObject __this_00;
			bool bVar2;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.GameObject, __this_00 == null)) {
				throw new NullReferenceException();
			}
			return bVar2;
		}
	}

	[Token(Token = "0x1700044A")]
	public CustomLogicTransformBuiltin Transform
	{
		[Token(Token = "0x6002330")]
		[Address(RVA = "0x5927A50", Offset = "0x5926A50", VA = "0x5927A50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_Transform): clean
			MapObject pMVar1;
			GameObject __this_00;
			Transform transform;
			CustomLogicTransformBuiltin __this_01;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.GameObject, __this_00 == null)) {
				throw new NullReferenceException();
			}
			transform = __this_00.transform;
			__this_01 = new CustomLogicTransformBuiltin(transform);
			return __this_01;
		}
	}

	[Token(Token = "0x1700044B")]
	public bool HasRenderer
	{
		[Token(Token = "0x6002331")]
		[Address(RVA = "0x5927AC0", Offset = "0x5926AC0", VA = "0x5927AC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_HasRenderer): clean
			MapObject pMVar1;
			Renderer[] pUVar2;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(pUVar2 = pMVar1.renderCache, pUVar2 == null)) {
				throw new NullReferenceException();
			}
			return (int)pUVar2.Length != 0;
		}
	}

	[Token(Token = "0x1700044C")]
	public CustomLogicColorBuiltin Color
	{
		[Token(Token = "0x6002332")]
		[Address(RVA = "0x5927AF0", Offset = "0x5926AF0", VA = "0x5927AF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_Color): clean
			MapObject pMVar1;
			Renderer[] pUVar2;
			Material __this_00;
			Color255 __this_01;
			CustomLogicColorBuiltin __this_02;
			Color color;

			this.AssertRendererGet();
			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(pUVar2 = pMVar1.renderCache, pUVar2 != null)) {
				if ((int)pUVar2.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				if (pUVar2[0] != null) {
					__this_00 = (pUVar2[0]).material;
					if (__this_00 != null) {
						color = __this_00.color;
						__this_01 = new Color255(color);
						__this_02 = new CustomLogicColorBuiltin(__this_01);
						return __this_02;
					}
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6002333")]
		[Address(RVA = "0x5927C40", Offset = "0x5926C40", VA = "0x5927C40")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_Color): clean
			Color255 __this_00;
			MapObject pMVar1;
			Renderer[] pUVar2;
			Material __this_01;
			Color value_00;

			this.AssertRendererSet();
			if ((value != null) &&(__this_00 = value.Value, __this_00 != null)) {
				value_00 = __this_00.ToColor();
				pMVar1 = this.Value;
				if ((pMVar1 != null) &&(pUVar2 = pMVar1.renderCache, pUVar2 != null)) {
					if ((int)pUVar2.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					if (pUVar2[0] != null) {
						__this_01 = (pUVar2[0]).material;
						if (__this_01 != null) {
							__this_01.color = value_00;
							return;
						}
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700044D")]
	public float TextureTilingX
	{
		[Token(Token = "0x6002334")]
		[Address(RVA = "0x5927D70", Offset = "0x5926D70", VA = "0x5927D70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_TextureTilingX): clean
			MapObject pMVar1;
			Renderer[] pUVar2;
			Material __this_00;
			Vector2 UVar3;

			this.AssertRendererGet();
			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(pUVar2 = pMVar1.renderCache, pUVar2 != null)) {
				if ((int)pUVar2.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				if (pUVar2[0] != null) {
					__this_00 = (pUVar2[0]).material;
					if (__this_00 != null) {
						UVar3 = __this_00.mainTextureScale;
						return UVar3.x;
					}
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6002335")]
		[Address(RVA = "0x5927DC0", Offset = "0x5926DC0", VA = "0x5927DC0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_TextureTilingX): clean
			MapObject pMVar1;
			Renderer[] pUVar2;
			Vector2 UVar3;
			Material pUVar4;
			float fStack_24;

			this.AssertRendererSet();
			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(pUVar2 = pMVar1.renderCache, pUVar2 != null)) {
				if ((int)pUVar2.Length == 0) {
		label_05a27e5e: ;
					throw new IndexOutOfRangeException();
				}
				if (pUVar2[0] != null) {
					pUVar4 = (pUVar2[0]).material;
					if (pUVar4 != null) {
						UVar3 = pUVar4.mainTextureScale;
						pMVar1 = this.Value;
						if ((pMVar1 != null) &&(pUVar2 = pMVar1.renderCache, pUVar2 != null)) {
							if ((int)pUVar2.Length == 0) goto label_05a27e5e;
							if (pUVar2[0] != null) {
								pUVar4 = (pUVar2[0]).material;
								if (pUVar4 != null) {
									fStack_24 = UVar3.y;
									UVar3.y = fStack_24;
									UVar3.x = value;
									pUVar4.mainTextureScale = UVar3;
									return;
								}
							}
						}
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700044E")]
	public float TextureTilingY
	{
		[Token(Token = "0x6002336")]
		[Address(RVA = "0x5927E70", Offset = "0x5926E70", VA = "0x5927E70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_TextureTilingY): clean
			MapObject pMVar1;
			Renderer[] pUVar2;
			Material __this_00;
			Vector2 UVar3;

			this.AssertRendererGet();
			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(pUVar2 = pMVar1.renderCache, pUVar2 != null)) {
				if ((int)pUVar2.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				if (pUVar2[0] != null) {
					__this_00 = (pUVar2[0]).material;
					if (__this_00 != null) {
						UVar3 = __this_00.mainTextureScale;
						return UVar3.y;
					}
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6002337")]
		[Address(RVA = "0x5927EC0", Offset = "0x5926EC0", VA = "0x5927EC0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_TextureTilingY): clean
			MapObject pMVar1;
			Renderer[] pUVar2;
			Vector2 UVar3;
			Material pUVar4;
			float fStack_28;

			this.AssertRendererSet();
			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(pUVar2 = pMVar1.renderCache, pUVar2 != null)) {
				if ((int)pUVar2.Length == 0) {
		label_05a27f5e: ;
					throw new IndexOutOfRangeException();
				}
				if (pUVar2[0] != null) {
					pUVar4 = (pUVar2[0]).material;
					if (pUVar4 != null) {
						UVar3 = pUVar4.mainTextureScale;
						pMVar1 = this.Value;
						if ((pMVar1 != null) &&(pUVar2 = pMVar1.renderCache, pUVar2 != null)) {
							if ((int)pUVar2.Length == 0) goto label_05a27f5e;
							if (pUVar2[0] != null) {
								pUVar4 = (pUVar2[0]).material;
								if (pUVar4 != null) {
									fStack_28 = UVar3.x;
									UVar3.y = value;
									UVar3.x = fStack_28;
									pUVar4.mainTextureScale = UVar3;
									return;
								}
							}
						}
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700044F")]
	public float TextureOffsetX
	{
		[Token(Token = "0x6002338")]
		[Address(RVA = "0x5927F70", Offset = "0x5926F70", VA = "0x5927F70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_TextureOffsetX): clean
			MapObject pMVar1;
			Renderer[] pUVar2;
			Material __this_00;
			Vector2 UVar3;

			this.AssertRendererGet();
			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(pUVar2 = pMVar1.renderCache, pUVar2 != null)) {
				if ((int)pUVar2.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				if (pUVar2[0] != null) {
					__this_00 = (pUVar2[0]).material;
					if (__this_00 != null) {
						UVar3 = __this_00.mainTextureOffset;
						return UVar3.x;
					}
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6002339")]
		[Address(RVA = "0x5927FC0", Offset = "0x5926FC0", VA = "0x5927FC0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_TextureOffsetX): clean
			MapObject pMVar1;
			Renderer[] pUVar2;
			Vector2 UVar3;
			Material pUVar4;
			float fStack_24;

			this.AssertRendererSet();
			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(pUVar2 = pMVar1.renderCache, pUVar2 != null)) {
				if ((int)pUVar2.Length == 0) {
		label_05a2805e: ;
					throw new IndexOutOfRangeException();
				}
				if (pUVar2[0] != null) {
					pUVar4 = (pUVar2[0]).material;
					if (pUVar4 != null) {
						UVar3 = pUVar4.mainTextureOffset;
						pMVar1 = this.Value;
						if ((pMVar1 != null) &&(pUVar2 = pMVar1.renderCache, pUVar2 != null)) {
							if ((int)pUVar2.Length == 0) goto label_05a2805e;
							if (pUVar2[0] != null) {
								pUVar4 = (pUVar2[0]).material;
								if (pUVar4 != null) {
									fStack_24 = UVar3.y;
									UVar3.y = fStack_24;
									UVar3.x = value;
									pUVar4.mainTextureOffset = UVar3;
									return;
								}
							}
						}
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000450")]
	public float TextureOffsetY
	{
		[Token(Token = "0x600233A")]
		[Address(RVA = "0x5928070", Offset = "0x5927070", VA = "0x5928070")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_TextureOffsetY): clean
			MapObject pMVar1;
			Renderer[] pUVar2;
			Material __this_00;
			Vector2 UVar3;

			this.AssertRendererGet();
			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(pUVar2 = pMVar1.renderCache, pUVar2 != null)) {
				if ((int)pUVar2.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				if (pUVar2[0] != null) {
					__this_00 = (pUVar2[0]).material;
					if (__this_00 != null) {
						UVar3 = __this_00.mainTextureOffset;
						return UVar3.y;
					}
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x600233B")]
		[Address(RVA = "0x59280C0", Offset = "0x59270C0", VA = "0x59280C0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_TextureOffsetY): clean
			MapObject pMVar1;
			Renderer[] pUVar2;
			Vector2 UVar3;
			Material pUVar4;
			float fStack_28;

			this.AssertRendererSet();
			pMVar1 = this.Value;
			if ((pMVar1 != null) &&(pUVar2 = pMVar1.renderCache, pUVar2 != null)) {
				if ((int)pUVar2.Length == 0) {
		label_05a2815e: ;
					throw new IndexOutOfRangeException();
				}
				if (pUVar2[0] != null) {
					pUVar4 = (pUVar2[0]).material;
					if (pUVar4 != null) {
						UVar3 = pUVar4.mainTextureOffset;
						pMVar1 = this.Value;
						if ((pMVar1 != null) &&(pUVar2 = pMVar1.renderCache, pUVar2 != null)) {
							if ((int)pUVar2.Length == 0) goto label_05a2815e;
							if (pUVar2[0] != null) {
								pUVar4 = (pUVar2[0]).material;
								if (pUVar4 != null) {
									fStack_28 = UVar3.x;
									UVar3.y = value;
									UVar3.x = fStack_28;
									pUVar4.mainTextureOffset = UVar3;
									return;
								}
							}
						}
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000451")]
	public int ID
	{
		[Token(Token = "0x600233C")]
		[Address(RVA = "0x5928170", Offset = "0x5927170", VA = "0x5928170")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_ID): clean
			MapObject pMVar1;
			MapScriptBaseObject pMVar2;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(pMVar2 = pMVar1.ScriptObject, pMVar2 == null)) {
				throw new NullReferenceException();
			}
			return pMVar2.Id;
		}
	}

	[Token(Token = "0x17000452")]
	public string Tag
	{
		[Token(Token = "0x600233D")]
		[Address(RVA = "0x5928190", Offset = "0x5927190", VA = "0x5928190")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_Tag): clean
			MapObject pMVar1;
			GameObject __this_00;
			String pSVar2;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.GameObject, __this_00 == null)) {
				throw new NullReferenceException();
			}
			return pSVar2;
		}
		[Token(Token = "0x600233E")]
		[Address(RVA = "0x59281B0", Offset = "0x59271B0", VA = "0x59281B0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_Tag): clean
			MapObject obj;

			obj = this.Value;
			MapLoader.RegisterTag(value, obj);
			return;
		}
	}

	[Token(Token = "0x17000453")]
	public int Layer
	{
		[Token(Token = "0x600233F")]
		[Address(RVA = "0x5928210", Offset = "0x5927210", VA = "0x5928210")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_Layer): clean
			MapObject pMVar1;
			GameObject __this_00;
			int iVar2;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.GameObject, __this_00 == null)) {
				throw new NullReferenceException();
			}
			return iVar2;
		}
		[Token(Token = "0x6002340")]
		[Address(RVA = "0x5928230", Offset = "0x5927230", VA = "0x5928230")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_Layer): clean
			MapObject pMVar1;
			GameObject __this_00;

			pMVar1 = this.Value;
			if ((pMVar1 == null) ||(__this_00 = pMVar1.GameObject, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.layer = value;
			return;
		}
	}

	[Token(Token = "0x17000454")]
	public CustomLogicRigidbodyBuiltin Rigidbody
	{
		[Token(Token = "0x600235F")]
		[Address(RVA = "0x592C4C0", Offset = "0x592B4C0", VA = "0x592C4C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_Rigidbody): clean
			return this._rigidBody;
		}
	}

	[Token(Token = "0x17000455")]
	public CustomLogicNetworkViewBuiltin NetworkView
	{
		[Token(Token = "0x6002360")]
		[Address(RVA = "0x592C4D0", Offset = "0x592B4D0", VA = "0x592C4D0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_NetworkView): clean
			return this._NetworkView_k__BackingField;
		}
		[Token(Token = "0x6002361")]
		[Address(RVA = "0x592C4E0", Offset = "0x592B4E0", VA = "0x592C4E0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$set_NetworkView): clean
			this._NetworkView_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000456")]
	public override string ClassName
	{
		[Token(Token = "0x6002367")]
		[Address(RVA = "0x592C5F0", Offset = "0x592B5F0", VA = "0x592C5F0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_ClassName): clean
			return "MapObject";
		}
	}

	[Token(Token = "0x17000457")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002368")]
		[Address(RVA = "0x592C620", Offset = "0x592B620", VA = "0x592C620", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000458")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002369")]
		[Address(RVA = "0x592C630", Offset = "0x592B630", VA = "0x592C630", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x17000459")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600236A")]
		[Address(RVA = "0x592C640", Offset = "0x592B640", VA = "0x592C640", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002314")]
	[Address(RVA = "0x5926830", Offset = "0x5925830", VA = "0x5926830")]
	public CustomLogicMapObjectBuiltin(MapObject obj)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$.ctor): 1 lines keep C-only constructs
		Dictionary<string, BuiltinComponentInstance> __this_00;

		this._needSetRotation = true;
		this._needSetLocalRotation = true;
		base();
		this.Value = obj;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, BuiltinComponentInstance>));
		__this_00 = new Dictionary<object, object>();
		this._builtinCache = __this_00;
		return;
	}

	[Token(Token = "0x6002341")]
	[Address(RVA = "0x5928250", Offset = "0x5927250", VA = "0x5928250")]
	public CustomLogicComponentInstance AddComponent(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$AddComponent): clean
		uint uVar1;
		CustomLogicEvaluator __this_00;
		CustomLogicComponentInstance pCVar2;

		if (Il2CppMethodInitialized_07546076 == false) {
			Il2CppMethodInitialized_07546076 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = CustomLogicManager.Evaluator;
		}
		else {
			__this_00 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pCVar2 = __this_00.AddMapObjectComponent(this.Value, name);
		return pCVar2;
	}

	[Token(Token = "0x6002342")]
	[Address(RVA = "0x59282E0", Offset = "0x59272E0", VA = "0x59282E0")]
	public void RemoveComponent(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$RemoveComponent): clean
		uint uVar1;
		MapObject __this_00;
		CustomLogicEvaluator __this_01;
		CustomLogicComponentInstance instance;

		if (Il2CppMethodInitialized_07546077 == false) {
			Il2CppMethodInitialized_07546077 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = this.Value;
		}
		else {
			__this_00 = this.Value;
		}
		if (__this_00 != null) {
			__this_01 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			instance = __this_00.FindComponentInstance(name);
			if (__this_01 != null) {
				__this_01.RemoveComponent(instance);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002343")]
	[Address(RVA = "0x5928380", Offset = "0x5927380", VA = "0x5928380")]
	public CustomLogicComponentInstance GetComponent(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$GetComponent): clean
		MapObject __this_00;
		CustomLogicComponentInstance pCVar1;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return pCVar1;
	}

	[Token(Token = "0x6002344")]
	[Address(RVA = "0x59283A0", Offset = "0x59273A0", VA = "0x59283A0")]
	public BuiltinComponentInstance GetUnityComponent(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$GetUnityComponent): clean
		BuiltinComponentInstance pCVar1;

		pCVar1 = CustomLogicUnityComponentManager.GetUnityComponentByNameWithMapObjectOwner(this, name);
		return pCVar1;
	}

	[Token(Token = "0x6002345")]
	[Address(RVA = "0x5928400", Offset = "0x5927400", VA = "0x5928400")]
	public void SetComponentEnabled(string name, bool enabled)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$SetComponentEnabled): 13 lines keep C-only constructs
		MapObject pMVar1;
		Dictionary<object, object> __this_00;
		MapScriptBaseObject p;
		bool bVar2;
		CustomLogicComponentInstance pCVar3;
		Il2CppClass pIVar4;
		String[] values;
		object pIVar5;
		String message;
		Exception __this_01;
		MethodInfo lastManagedFrame;
		BuiltinComponentInstance local_28;

		local_28 = null;
		pMVar1 = this.Value;
		if (pMVar1 != null) {
			pCVar3 = pMVar1.FindComponentInstance(name);
			if (pCVar3 != null) {
				pCVar3.set_Enabled(enabled);
				return;
			}
			__this_00 = (Dictionary<object, object>)this._builtinCache;
			if (__this_00 != null) {
				bVar2 = __this_00.TryGetValue((object)name, (object*)&local_28);
				if (!bVar2) {
					pIVar4 = il2cpp_codegen_get_runtime_metadata(&typeof(string[]));
					values = (String[])new pIVar4[5];
					pIVar5 = il2cpp_codegen_get_runtime_metadata(&"Component '");
					il2cpp_codegen_array_set_ref((Array)values, 0, pIVar5);
					il2cpp_codegen_array_set_ref((Array)values, 1, (object)name);
					pIVar5 = il2cpp_codegen_get_runtime_metadata(&"' not found on MapObject '");
					il2cpp_codegen_array_set_ref((Array)values, 2, pIVar5);
					pMVar1 = this.Value;
					p = pMVar1.ScriptObject;
					il2cpp_codegen_array_set_ref((Array)values, 3, (object)p.Name);
					pIVar5 = il2cpp_codegen_get_runtime_metadata(&"'.");
					il2cpp_codegen_array_set_ref((Array)values, 4, pIVar5);
					message = String.Concat(values);
					pIVar4 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
					__this_01 = (Exception)il2cpp_codegen_object_new(pIVar4);
					__this_01 = new Exception(message);
					lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_SetComponentEnabled);
					throw (object)__this_01;
				}
				if (local_28 != null) {
					local_28.Enabled = enabled;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002346")]
	[Address(RVA = "0x59285B0", Offset = "0x59275B0", VA = "0x59285B0")]
	public void SetComponentsEnabled(bool enabled)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$SetComponentsEnabled): 8 lines keep C-only constructs
		MapObject pMVar1;
		List<CustomLogicComponentInstance> __this_00;
		Dictionary<object, object> __this_01;
		bool bVar2;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_02;
		byte[] local_70 = new byte[16];
		object local_60;
		byte[] local_58 = new byte[8];
		object local_48;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_38;

		local_58 = (byte[])0x0;
		local_48 = null;
		local_38._dictionary = null;
		local_38._index = 0;
		local_38._version = 0;
		local_38._currentValue = null;
		pMVar1 = this.Value;
		if ((pMVar1 != null) &&(__this_00 = pMVar1.ComponentInstances, __this_00 != null)) {
			local_70.GetEnumerator((List<object>)__this_00);
			local_48 = local_60;
			local_58 = (byte[])local_70._0_8_;
			local_70._0_8_ = null;
			local_70._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_58;
			while(true) {
				bVar2 = local_58.MoveNext();
				if (!bVar2) break;
				if (local_48 == null) {
					throw new NullReferenceException();
				}
				(*local_48.klass.vtable[5].methodPtr)(local_48,(ulong)enabled,local_48.klass.vtable[5].method);
			}
			local_58.Dispose();
			__this_01 = (Dictionary<object, object>)this._builtinCache;
			if (__this_01 != null) {
				__this_02 = __this_01.Values;
				if (__this_02 != null) {
					local_38 = __this_02.GetEnumerator();
					local_70._0_8_ = null;
					local_70._8_8_ = &local_38;
					while(true) {
						bVar2 = local_38.MoveNext();
						if (!bVar2) {
							local_38.Dispose();
							return;
						}
						if ((BuiltinComponentInstance)local_38._currentValue ==null) break;
						local_38._currentValue.Enabled = enabled;
					}
					throw new NullReferenceException();
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002347")]
	[Address(RVA = "0x5928860", Offset = "0x5927860", VA = "0x5928860")]
	public void AddSphereCollider(string collideMode, string collideWith, CustomLogicVector3Builtin center, float radius)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$AddSphereCollider): 22 lines keep C-only constructs
		float fVar1;
		ulong uVar2;
		ulong uVar3;
		MapObject pMVar4;
		GameObject __this_00;
		List<CustomLogicComponentInstance> __this_01;
		object classInstance;
		bool bVar5;
		CustomLogicVector3Builtin pCVar6;
		GameObject __this_02;
		Transform pUVar7;
		Transform p;
		SphereCollider c;
		CustomLogicCollisionHandler __this_03;
		float fVar8;
		Vector3 UVar9;
		Vector3 v;
		Vector3 b;
		System_Collections_Generic_List_Enumerator_object__o local_98;
		ulong local_78;
		byte[] local_60 = new byte[16];
		CustomLogicComponentInstance local_50;
		ulong local_48;

		if (Il2CppMethodInitialized_0754607b == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider) ;
			Il2CppMethodInitialized_0754607b = true;
		}
		local_98._list = null;
		local_98._index = 0;
		local_98._version = 0;
		local_98._current = null;
		pMVar4 = this.Value;
		if ((pMVar4 != null) && (center != null)) {
			uVar2._0_4_ = pMVar4.BaseScale.x;
			uVar2._4_4_ = pMVar4.BaseScale.y;
			fVar8 = pMVar4.BaseScale.z;
			uVar3._0_4_ = center.Value.x;
			uVar3._4_4_ = center.Value.y;
			fVar1 = center.Value.z;
			local_78 = uVar2;
			if ((typeof(Util)._2).cctor_finished_or_no_cctor == 0) {
				local_48 = uVar3;
				uVar3._0_4_ = (undefined4)local_48;
				uVar3._4_4_ = local_48._4_4_;
				uVar2._0_4_ = (float)local_78;
				uVar2._4_4_ = local_78._4_4_;
			}
			UVar9.y = (float)uVar3._4_4_;
			UVar9.x = (float)(undefined4)uVar3;
			UVar9.z = fVar1;
			b.y = (float)uVar2._4_4_;
			b.x = (float)(undefined4)uVar2;
			b.z = fVar8;
			UVar9 = Util.DivideVectors(UVar9, b);
			pCVar6 = ((CustomLogicVector3Builtin)UVar9);
			v.z = fVar8;
			v.x = (float)local_78;
			v.y = (float)local_78._4_4_;
			fVar8 = MiscExtensions.MaxComponent(v);
			local_78 = CONCAT44(local_78._4_4_, fVar8);
			__this_02 = new GameObject();
			if (__this_02 != null) {
				pUVar7 = __this_02.transform;
				pMVar4 = this.Value;
				if ((pMVar4 != null) &&(__this_00 = pMVar4.GameObject, __this_00 != null)) {
					p = __this_00.transform;
					if (pUVar7 != null) {
						pUVar7.SetParent(p);
						pUVar7 = __this_02.transform;
						if (pUVar7 != null) {
							pUVar7.localPosition = (Vector3)(Vector3.zeroVector);
							pUVar7 = __this_02.transform;
							if (pUVar7 != null) {
								pUVar7.localRotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
								pUVar7 = __this_02.transform;
								if (pUVar7 != null) {
									pUVar7.localScale = (Vector3)(Vector3.oneVector);
									c = __this_02.AddComponent<SphereCollider>();
									MapLoader.SetCollider((Collider)c, collideMode, collideWith);
									if (c != null) {
										c.radius = radius / (float)local_78;
										if (pCVar6 != null) {
											c.center = (Vector3)pCVar6.Value;
											__this_03 = __this_02.AddComponent<CustomLogicCollisionHandler>();
											pMVar4 = this.Value;
											if ((pMVar4 != null) &&(__this_01 = pMVar4.ComponentInstances, __this_01 != null)) {
												local_60.GetEnumerator((List<object>)__this_01);
												local_98._current = (object)local_50;
												local_98._list = (List<T>)local_60._0_8_;
												local_98._index = local_60._8_4_;
												local_98._version = local_60._12_4_;
												local_60._0_8_ = null;
												local_60._8_8_ = &local_98;
												if (__this_03 == null) {
													while(true) {
														bVar5 = local_98.MoveNext();
														if (!bVar5) break;
														if ((CustomLogicComponentInstance)local_98._current ==null) goto label_05a28ccd;
														bVar5 = local_98._current.UsesCollider();
														if (bVar5) {
															throw new NullReferenceException();
														}
													}
												}
												else {
													while(true) {
														bVar5 = local_98.MoveNext();
														classInstance = local_98._current;
														if (!bVar5) break;
														if ((CustomLogicComponentInstance)local_98._current ==null) {
	label_05a28ccd: ;
															throw new NullReferenceException();
														}
														bVar5 = local_98._current.UsesCollider();
														if (bVar5) {
															__this_03.RegisterInstance((CustomLogicComponentInstance)classInstance);
														}
													}
												}
												local_98.Dispose();
												return;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002348")]
	[Address(RVA = "0x5928D40", Offset = "0x5927D40", VA = "0x5928D40")]
	public void AddBoxCollider(string collideMode, string collideWith, [Optional] CustomLogicVector3Builtin center, [Optional] CustomLogicVector3Builtin size)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$AddBoxCollider): 124 lines keep C-only constructs
		Vector3 pUVar1;
		uint uVar2;
		List<T> pSVar3;
		uint uVar4;
		uint uVar5;
		MapObject pMVar6;
		Renderer[] pUVar7;
		Object x;
		GameObject __this_00;
		List<CustomLogicComponentInstance> __this_01;
		byte[] auVar9 = new byte[16];
		byte[] auVar10 = new byte[16];
		Vector3 b;
		Vector3 UVar11;
		Vector3 UVar12;
		Vector3 UVar13;
		Vector3 UVar14;
		Vector3 UVar15;
		Vector3 UVar16;
		Vector3 b_00;
		object classInstance;
		bool bVar17;
		bool bVar18;
		ulong uVar19;
		GameObject pUVar20;
		Transform pUVar21;
		Transform p;
		BoxCollider c;
		CustomLogicCollisionHandler __this_02;
		ulong uVar22;
		float fVar23;
		float fVar26;
		ulong extraout_XMM0_Qb;
		byte[] auVar24 = new byte[16];
		float fVar27;
		byte[] auVar25 = new byte[16];
		ulong extraout_XMM0_Qb_00;
		ulong extraout_XMM0_Qb_01;
		float fVar28;
		float fVar29;
		byte[] auVar30 = new byte[16];
		byte[] auVar31 = new byte[16];
		float fVar32;
		float fVar33;
		float fVar34;
		float fVar37;
		float fVar38;
		byte[] auVar35 = new byte[16];
		byte[] auVar36 = new byte[16];
		float fVar39;
		Vector3 a;
		Vector3 UVar40;
		Vector3 a_00;
		Vector3 value;
		Vector3 UVar41;
		Vector3 value_00;
		float local_100;
		float local_fc;
		byte[] local_f8 = new byte[8];
		float fStack_f0;
		float fStack_ec;
		byte[] local_e0 = new byte[12];
		float fStack_d4;
		float fStack_d0;
		float fStack_cc;
		ulong local_c8;
		ulong uStack_c0;
		String local_b8;
		float local_ac;
		System_Collections_Generic_List_Enumerator_object__o local_a8;
		CustomLogicMapObjectBuiltin local_88;
		String local_70;
		ulong local_68;
		ulong local_58;
		ulong uStack_50;
		ulong local_48;
		ulong uStack_40;

		UVar40.z = local_ac;
		UVar40.x = (float)local_48;
		UVar40.y = local_48._4_4_;
		local_a8._list = null;
		local_a8._index = 0;
		local_a8._version = 0;
		local_a8._current = null;
		pMVar6 = this.Value;
		if (pMVar6 == null) goto label_05a29585;
		if ((center == null) ||(size == null)) {
			UVar41.z = local_ac;
			UVar41.x = (float)local_48;
			UVar41.y = local_48._4_4_;
			UVar40.z = local_ac;
			UVar40.x = (float)local_48;
			UVar40.y = local_48._4_4_;
			pMVar6 = this.Value;
			if ((pMVar6 == null) ||(pUVar7 = pMVar6.renderCache, UVar40 = UVar41, pUVar7 == null)) goto label_05a29585;
			local_c8 = *(List<T>*)&(Vector3.zeroVector);
			uStack_c0 = 0;
			local_fc = (Vector3.zeroVector).z;
			uVar2 = (Vector3.zeroVector).x;
			uVar4 = (Vector3.zeroVector).y;
			local_f8._4_4_ = (float)uVar4 * 0.5;
			local_f8._0_4_ = (float)uVar2 * 0.5;
			local_100 = (Vector3.zeroVector).z * 0.5;
			local_b8 = collideWith;
			local_88 = this;
			local_70 = collideMode;
			if (0 < (int)pUVar7.Length) {
				uVar19 = pUVar7.Length & 0xffffffff;
				bVar18 = false;
				uVar22 = 0;
				do {
					if (uVar19 <= uVar22) {
						throw new IndexOutOfRangeException();
					}
					x = (Object)pUVar7[uVar22];
					bVar17 = (x != null);
					UVar40.z = local_ac;
					UVar40.x = (float)local_48;
					UVar40.y = local_48._4_4_;
					UVar13.z = local_ac;
					UVar13.x = (float)local_48;
					UVar13.y = local_48._4_4_;
					if (bVar17) {
						if (bVar18) {
							UVar40 = UVar13;
							if (x == null) goto label_05a29585;
							local_e0.get_bounds((Renderer)x);
							fVar28 = (float)local_e0._8_4_ - fStack_cc;
							fVar29 = (float)local_e0._8_4_ + fStack_cc;
							auVar24._0_4_ = (float)local_c8 - (float)local_f8._0_4_;
							auVar24._4_4_ = local_c8._4_4_ - (float)local_f8._4_4_;
							auVar24._8_4_ = (float)uStack_c0 - fStack_f0;
							auVar24._12_4_ = uStack_c0._4_4_ - fStack_ec;
							fVar23 = local_fc - local_100;
							if (fVar28 <= local_fc - local_100) {
								fVar23 = fVar28;
							}
							fVar26 = local_fc + local_100;
							if (local_fc + local_100 <= fVar28) {
								fVar26 = fVar28;
							}
							fVar28 = (fVar26 - fVar23) * 0.5;
							local_fc = (fVar23 + fVar28) - fVar28;
							if (fVar29 <= local_fc) {
								local_fc = fVar29;
							}
							fVar28 = fVar23 + fVar28 + fVar28;
							if (fVar28 <= fVar29) {
								fVar28 = fVar29;
							}
							fVar32 = local_e0._0_4_ + fStack_d4;
							fVar33 = local_e0._4_4_ + fStack_d0;
							auVar35._0_4_ = (float)local_f8._0_4_ + (float)local_c8;
							auVar35._4_4_ = (float)local_f8._4_4_ + local_c8._4_4_;
							auVar35._8_4_ = fStack_f0 + (float)uStack_c0;
							auVar35._12_4_ = fStack_ec + uStack_c0._4_4_;
							auVar30._0_4_ = local_e0._0_4_ - fStack_d4;
							auVar30._4_4_ = local_e0._4_4_ - fStack_d0;
							auVar30._8_8_ = 0;
							auVar24 = minps(auVar24, auVar30);
							auVar36 = maxps(auVar35, auVar30);
							fVar34 = (auVar36._0_4_ - auVar24._0_4_) * 0.5;
							fVar37 = (auVar36._4_4_ - auVar24._4_4_) * 0.5;
							fVar38 = (auVar36._8_4_ - auVar24._8_4_) * 0.0;
							fVar39 = (auVar36._12_4_ - auVar24._12_4_) * 0.0;
							fVar23 = auVar24._0_4_ + fVar34;
							fVar29 = auVar24._4_4_ + fVar37;
							fVar26 = auVar24._8_4_ + fVar38;
							fVar27 = auVar24._12_4_ + fVar39;
							auVar31._0_4_ = fVar23 - fVar34;
							auVar31._4_4_ = fVar29 - fVar37;
							auVar31._8_4_ = fVar26 - fVar38;
							auVar31._12_4_ = fVar27 - fVar39;
							auVar36._4_4_ = fVar33;
							auVar36._0_4_ = fVar32;
							auVar36._8_8_ = 0;
							auVar36 = minps(auVar31, auVar36);
							auVar25._0_4_ = fVar23 + fVar34;
							auVar25._4_4_ = fVar29 + fVar37;
							auVar25._8_4_ = fVar26 + fVar38;
							auVar25._12_4_ = fVar27 + fVar39;
							auVar10._4_4_ = fVar33;
							auVar10._0_4_ = fVar32;
							auVar10._8_8_ = 0;
							auVar24 = maxps(auVar25, auVar10);
							local_f8._0_4_ = (auVar24._0_4_ - auVar36._0_4_) * 0.5;
							local_f8._4_4_ = (auVar24._4_4_ - auVar36._4_4_) * 0.5;
							fStack_f0 = (auVar24._8_4_ - auVar36._8_4_) * 0.0;
							fStack_ec = (auVar24._12_4_ - auVar36._12_4_) * 0.0;
							local_100 = (fVar28 - local_fc) * 0.5;
							local_c8 = (List<T>)CONCAT44(auVar36._4_4_ + (float)local_f8._4_4_, auVar36._0_4_ + (float)local_f8._0_4_);
							uStack_c0 = CONCAT44(auVar36._12_4_ + fStack_ec, auVar36._8_4_ + fStack_f0);
							local_fc = local_fc + local_100;
						}
						else {
							if (x == null) goto label_05a29585;
							local_e0.get_bounds((Renderer)x);
							local_e0.get_bounds((Renderer)x);
							local_c8 = (List<T>)local_e0._0_8_;
							uStack_c0 = 0;
							local_fc = (float)local_e0._8_4_;
							local_f8._4_4_ = fStack_d0;
							local_f8._0_4_ = fStack_d4;
							local_100 = fStack_cc;
							bVar18 = true;
						}
					}
					uVar22 = uVar22 + 1;
					uVar5 = (uint)pUVar7.Length;
					uVar19 = (ulong)uVar5;
				} while ((long)uVar22 < (long)(int)uVar5);
			}
			collideMode = local_70;
			this = local_88;
			collideWith = local_b8;
			UVar14.z = local_ac;
			UVar14.x = (float)local_48;
			UVar14.y = local_48._4_4_;
			UVar40.z = local_ac;
			UVar40.x = (float)local_48;
			UVar40.y = local_48._4_4_;
			pMVar6 = local_88.Value;
			if (pMVar6 == null) goto label_05a29585;
			pUVar20 = pMVar6.GameObject;
			UVar40 = UVar14;
			if (pUVar20 == null) goto label_05a29585;
			pUVar21 = pUVar20.transform;
			UVar40.z = local_ac;
			UVar40.x = (float)local_48;
			UVar40.y = local_48._4_4_;
			if (pUVar21 == null) goto label_05a29585;
			UVar41 = pUVar21.position;
			UVar40.z = local_ac;
			UVar40.x = (float)local_48;
			UVar40.y = local_48._4_4_;
			local_ac = UVar41.z;
			local_48 = UVar41._0_8_;
			pMVar6 = this.Value;
			if (pMVar6 == null) goto label_05a29585;
			pUVar20 = pMVar6.GameObject;
			UVar40 = UVar41;
			if (pUVar20 == null) goto label_05a29585;
			uStack_40 = extraout_XMM0_Qb_00;
			pUVar21 = pUVar20.transform;
			UVar40.z = local_ac;
			UVar40.x = (float)local_48;
			UVar40.y = local_48._4_4_;
			if (pUVar21 == null) goto label_05a29585;
			UVar41 = pUVar21.localScale;
			UVar15.z = local_ac;
			UVar15.x = (float)local_48;
			UVar15.y = local_48._4_4_;
			UVar40.z = local_ac;
			UVar40.x = (float)local_48;
			UVar40.y = local_48._4_4_;
			pMVar6 = this.Value;
			if (pMVar6 == null) goto label_05a29585;
			pUVar20 = pMVar6.GameObject;
			local_58 = UVar41._0_8_;
			UVar40 = UVar15;
			if (pUVar20 == null) goto label_05a29585;
			uStack_50 = extraout_XMM0_Qb_01;
			pUVar21 = pUVar20.transform;
			UVar40.z = local_ac;
			UVar40.x = (float)local_48;
			UVar40.y = local_48._4_4_;
			if (pUVar21 == null) goto label_05a29585;
			UVar41 = pUVar21.localScale;
			UVar16.z = local_ac;
			UVar16.x = (float)local_48;
			UVar16.y = local_48._4_4_;
			UVar40.z = local_ac;
			UVar40.x = (float)local_48;
			UVar40.y = local_48._4_4_;
			pMVar6 = this.Value;
			if (pMVar6 == null) goto label_05a29585;
			pUVar20 = pMVar6.GameObject;
			local_68 = UVar41._0_8_;
			UVar40 = UVar16;
			if (pUVar20 == null) goto label_05a29585;
			pUVar21 = pUVar20.transform;
			UVar40.z = local_ac;
			UVar40.x = (float)local_48;
			UVar40.y = local_48._4_4_;
			if (pUVar21 == null) goto label_05a29585;
			local_c8 = (List<T>)CONCAT44(local_c8._4_4_ - local_48._4_4_, (float)local_c8 - (float)local_48);
			uStack_c0 = CONCAT44(uStack_c0._4_4_ - uStack_40._4_4_, (float)uStack_c0 - (float)uStack_40);
			local_fc = local_fc - local_ac;
			local_f8._4_4_ = (float)local_f8._4_4_ + (float)local_f8._4_4_;
			local_f8._0_4_ = (float)local_f8._0_4_ + (float)local_f8._0_4_;
			fStack_f0 = fStack_f0 + fStack_f0;
			fStack_ec = fStack_ec + fStack_ec;
			UVar40 = pUVar21.localScale;
			auVar9._4_4_ = local_68._4_4_;
			auVar9._0_4_ = (undefined4)local_58;
			auVar9._8_4_ = (undefined4)uStack_50;
			auVar9._12_4_ = uStack_50._4_4_;
			auVar24 = divps(_local_f8, auVar9);
			value.z = (local_100 + local_100) / UVar40.z;
			value.x = (float)auVar24._0_4_;
			value.y = (float)auVar24._4_4_;
		}
		else {
			pUVar1 = &pMVar6.BaseScale;
			b_00 = pUVar1.fields;
			b = pUVar1.fields;
			pSVar3 = *(List<T>*)&center.Value;
			fVar23 = center.Value.z;
			local_88 = *(CustomLogicMapObjectBuiltin*)&size.Value;
			local_b8 = (String)CONCAT44(local_b8._4_4_, size.Value.z);
			fVar28 = SUB84(pSVar3, 0);
			fVar29 = (float)((ulong)pSVar3 >> 0x20);
			if ((typeof(Util)._2).cctor_finished_or_no_cctor == 0) {
				uStack_c0 = 0;
				local_c8 = pSVar3;
				fVar28 = (float)local_c8;
				fVar29 = local_c8._4_4_;
			}
			a.y = fVar29;
			a.x = fVar28;
			a.z = fVar23;
			UVar40 = Util.DivideVectors(a, (Vector3)b_00);
			local_fc = UVar40.z;
			local_c8 = UVar40._0_8_;
			a_00.z = local_b8._0_4_;
			a_00._0_8_ = local_88;
			uStack_c0 = extraout_XMM0_Qb;
			value = Util.DivideVectors(a_00, (Vector3)b);
		}
		pUVar20 = new GameObject();
		UVar40.z = local_ac;
		UVar40.x = (float)local_48;
		UVar40.y = local_48._4_4_;
		if (pUVar20 != null) {
			pUVar21 = pUVar20.transform;
			UVar11.z = local_ac;
			UVar11.x = (float)local_48;
			UVar11.y = local_48._4_4_;
			UVar40.z = local_ac;
			UVar40.x = (float)local_48;
			UVar40.y = local_48._4_4_;
			pMVar6 = this.Value;
			if ((pMVar6 != null) &&(__this_00 = pMVar6.GameObject, UVar40 = UVar11, __this_00 != null)) {
				p = __this_00.transform;
				UVar40.z = local_ac;
				UVar40.x = (float)local_48;
				UVar40.y = local_48._4_4_;
				if (pUVar21 != null) {
					pUVar21.SetParent(p);
					pUVar21 = pUVar20.transform;
					UVar40.z = local_ac;
					UVar40.x = (float)local_48;
					UVar40.y = local_48._4_4_;
					if (pUVar21 != null) {
						pUVar21.localPosition = (Vector3)(Vector3.zeroVector);
						pUVar21 = pUVar20.transform;
						UVar40.z = local_ac;
						UVar40.x = (float)local_48;
						UVar40.y = local_48._4_4_;
						if (pUVar21 != null) {
							pUVar21.localRotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
							pUVar21 = pUVar20.transform;
							UVar40.z = local_ac;
							UVar40.x = (float)local_48;
							UVar40.y = local_48._4_4_;
							if (pUVar21 != null) {
								pUVar21.localScale = (Vector3)(Vector3.oneVector);
								c = pUVar20.AddComponent<BoxCollider>();
								MapLoader.SetCollider((Collider)c, collideMode, collideWith);
								UVar40.z = local_ac;
								UVar40.x = (float)local_48;
								UVar40.y = local_48._4_4_;
								if (c != null) {
									c.size = value;
									value_00.z = local_fc;
									value_00._0_8_ = local_c8;
									c.center = value_00;
									__this_02 = pUVar20.AddComponent<CustomLogicCollisionHandler>();
									UVar12.z = local_ac;
									UVar12.x = (float)local_48;
									UVar12.y = local_48._4_4_;
									UVar40.z = local_ac;
									UVar40.x = (float)local_48;
									UVar40.y = local_48._4_4_;
									pMVar6 = this.Value;
									if ((pMVar6 != null) &&(__this_01 = pMVar6.ComponentInstances, UVar40 = UVar12, __this_01 != null)) {
										local_e0.GetEnumerator((List<object>)__this_01);
										local_a8._current = (object)CONCAT44(fStack_cc, fStack_d0);
										local_a8._list = (List<T>)local_e0._0_8_;
										local_e0._0_8_ = null;
										unique0x00009c00 = &local_a8;
										if (__this_02 == null) {
											while(true) {
												bVar18 = local_a8.MoveNext();
												if (!bVar18) break;
												if ((CustomLogicComponentInstance)local_a8._current ==null) goto label_05a29580;
												bVar18 = local_a8._current.UsesCollider();
												if (bVar18) {
													throw new NullReferenceException();
												}
											}
										}
										else {
											while(true) {
												bVar18 = local_a8.MoveNext();
												classInstance = local_a8._current;
												if (!bVar18) break;
												if ((CustomLogicComponentInstance)local_a8._current ==null) {
	label_05a29580: ;
													throw new NullReferenceException();
												}
												bVar18 = local_a8._current.UsesCollider();
												if (bVar18) {
													__this_02.RegisterInstance((CustomLogicComponentInstance)classInstance);
												}
											}
										}
										local_a8.Dispose();
										return;
									}
								}
							}
						}
					}
				}
			}
		}
	label_05a29585: ;
		local_ac = UVar40.z;
		local_48 = UVar40._0_8_;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002349")]
	[Address(RVA = "0x5929600", Offset = "0x5928600", VA = "0x5929600")]
	public void SetCollideWith(string collideWith)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$SetCollideWith): 2 lines keep C-only constructs
		uint uVar1;
		MapObject pMVar2;
		GameObject pUVar3;
		Collider __this_00;
		String collideMode;
		bool bVar4;
		uint uVar5;
		Object[] pSVar6;
		Map_MapObjectCollideMode_StaticFields pMVar7;
		Collider[] pUVar8;
		uint uVar9;

		pMVar2 = this.Value;
		if ((pMVar2 != null) &&(pUVar3 = pMVar2.GameObject, pUVar3 != null)) {
			pSVar6 = pUVar3.GetComponentsInChildren<Collider>();
			if (pSVar6 != null) {
				uVar5 = (uint)pSVar6.Length;
				if (0 < (int)uVar5) {
					uVar9 = 0;
					do {
						if (uVar5 <= uVar9) {
							throw new IndexOutOfRangeException();
						}
						__this_00 = (Collider)pSVar6[(int)uVar9];
						if (__this_00 == null) goto label_05a297cd;
						bVar4 = __this_00.enabled;
						if (bVar4) {
							bVar4 = __this_00.isTrigger;
							uVar1 = (typeof(MapObjectCollideMode)._2).cctor_finished_or_no_cctor;
							if (bVar4) {
								if (uVar1 == 0) {
								}
								pMVar7 = (Map_MapObjectCollideMode_StaticFields)&MapObjectCollideMode.Region;
							}
							else {
								if (uVar1 == 0) {
								}
								pMVar7 = typeof(MapObjectCollideMode).static_fields;
							}
						}
						else {
							pMVar7 = (Map_MapObjectCollideMode_StaticFields)&MapObjectCollideMode.None;
						}
						collideMode = pMVar7.Physical;
						MapLoader.SetCollider(__this_00, collideMode, collideWith);
						uVar9 = uVar9 + 1;
						uVar5 = (uint)pSVar6.Length;
					} while ((int)uVar9 < (int)uVar5);
				}
				pMVar2 = this.Value;
				if ((pMVar2 != null) &&(pUVar3 = pMVar2.GameObject, pUVar3 != null)) {
					pUVar8 = (Collider[])pUVar3.GetComponentsInChildren<Collider>();
					pMVar2.colliderCache = pUVar8;
					return;
				}
			}
		}
	label_05a297cd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600234A")]
	[Address(RVA = "0x59297E0", Offset = "0x59287E0", VA = "0x59297E0")]
	public void SetCollideMode(string collideMode)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$SetCollideMode): clean
		uint uVar1;
		MapObject pMVar2;
		GameObject pUVar3;
		Collider c;
		Object[] pSVar4;
		ulong uVar5;
		String collideWith;
		Collider[] pUVar6;
		ulong uVar7;

		pMVar2 = this.Value;
		if ((pMVar2 != null) &&(pUVar3 = pMVar2.GameObject, pUVar3 != null)) {
			pSVar4 = pUVar3.GetComponentsInChildren<Collider>();
			if (pSVar4 != null) {
				if (0 < (int)pSVar4.Length) {
					uVar5 = pSVar4.Length & 0xffffffff;
					uVar7 = 0;
					do {
						if (uVar5 <= uVar7) {
							throw new IndexOutOfRangeException();
						}
						c = (Collider)pSVar4[uVar7];
						collideWith = MapLoader.GetColliderCollideWith(c);
						MapLoader.SetCollider(c, collideMode, collideWith);
						uVar7 = uVar7 + 1;
						uVar1 = (uint)pSVar4.Length;
						uVar5 = (ulong)uVar1;
					} while ((long)uVar7 < (long)(int)uVar1);
				}
				pMVar2 = this.Value;
				if ((pMVar2 != null) &&(pUVar3 = pMVar2.GameObject, pUVar3 != null)) {
					pUVar6 = (Collider[])pUVar3.GetComponentsInChildren<Collider>();
					pMVar2.colliderCache = pUVar6;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600234B")]
	[Address(RVA = "0x5929910", Offset = "0x5928910", VA = "0x5929910")]
	public CustomLogicMapTargetableBuiltin AddSphereTarget(string team, CustomLogicVector3Builtin center, float radius)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$AddSphereTarget): 27 lines keep C-only constructs
		int piVar1;
		float fVar2;
		uint uVar3;
		uint uVar5;
		String pSVar4;
		uint uVar6;
		MapObject pMVar7;
		GameObject __this_00;
		List<CustomLogicComponentInstance> __this_01;
		List<MapTargetable> __this_02;
		MapTargetable[] pMVar8;
		String collideMode;
		CustomLogicComponentInstance classInstance;
		bool bVar10;
		CustomLogicVector3Builtin pCVar11;
		GameObject __this_03;
		Transform pUVar12;
		Transform p;
		SphereCollider c;
		CustomLogicCollisionHandler __this_04;
		MapTargetable __this_05;
		CustomLogicMapTargetableBuiltin __this_06;
		uint uVar13;
		float fVar14;
		uint uVar15;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Vector3 UVar16;
		Vector3 v;
		Vector3 center_00;
		Vector3 b;
		byte[] auStack_98 = new byte[8];
		CustomLogicComponentInstance pCStack_88;
		byte[] auStack_78 = new byte[16];
		byte[] auStack_60 = new byte[16];
		CustomLogicComponentInstance pCStack_50;
		ulong uStack_48;
		String pSStack_38;

		if (Il2CppMethodInitialized_0754607f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider) ;
			Il2CppMethodInitialized_0754607f = true;
		}
		collideMode = "Region";
		auStack_98 = (byte[])0x0;
		pCStack_88 = null;
		pMVar7 = this.Value;
		if ((pMVar7 != null) && (center != null)) {
			pSStack_38 = "Hitboxes";
			uVar3 = pMVar7.BaseScale.x;
			uVar5 = pMVar7.BaseScale.y;
			auStack_78._4_4_ = uVar5;
			auStack_78._0_4_ = uVar3;
			fVar14 = pMVar7.BaseScale.z;
			pSVar4 = *(String*)&center.Value;
			fVar2 = center.Value.z;
			auStack_78._8_8_ = 0;
			uVar13 = (int)pSVar4;
			uVar15 = (int)((ulong)pSVar4 >> 0x20);
			if ((typeof(Util)._2).cctor_finished_or_no_cctor == 0) {
				uStack_48 = pSVar4;
				uVar13 = (undefined4)uStack_48;
				uVar15 = uStack_48._4_4_;
				uVar3 = auStack_78._0_4_;
				uVar5 = auStack_78._4_4_;
			}
			UVar16.y = (float)uVar15;
			UVar16.x = (float)uVar13;
			UVar16.z = fVar2;
			b.y = (float)uVar5;
			b.x = (float)uVar3;
			b.z = fVar14;
			UVar16 = Util.DivideVectors(UVar16, b);
			pCVar11 = ((CustomLogicVector3Builtin)UVar16);
			v.z = fVar14;
			v.x = (float)auStack_78._0_4_;
			v.y = (float)auStack_78._4_4_;
			fVar14 = MiscExtensions.MaxComponent(v);
			auStack_78._0_4_ = fVar14;
			__this_03 = new GameObject();
			if (__this_03 != null) {
				pUVar12 = __this_03.transform;
				pMVar7 = this.Value;
				if ((pMVar7 != null) &&(__this_00 = pMVar7.GameObject, __this_00 != null)) {
					p = __this_00.transform;
					if (pUVar12 != null) {
						pUVar12.SetParent(p);
						pUVar12 = __this_03.transform;
						if (pUVar12 != null) {
							pUVar12.localPosition = (Vector3)(Vector3.zeroVector);
							pUVar12 = __this_03.transform;
							if (pUVar12 != null) {
								pUVar12.localRotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
								pUVar12 = __this_03.transform;
								uStack_48 = team;
								if (pUVar12 != null) {
									pUVar12.localScale = (Vector3)(Vector3.oneVector);
									c = __this_03.AddComponent<SphereCollider>();
									MapLoader.SetCollider((Collider)c, collideMode, pSStack_38);
									if (c != null) {
										c.radius = radius / (float)auStack_78._0_4_ ;
										if (pCVar11 != null) {
											c.center = (Vector3)pCVar11.Value;
											__this_04 = __this_03.AddComponent<CustomLogicCollisionHandler>();
											pMVar7 = this.Value;
											if ((pMVar7 != null) &&(__this_01 = pMVar7.ComponentInstances, __this_01 != null)) {
												auStack_60.GetEnumerator((List<object>)__this_01);
												pCStack_88 = pCStack_50;
												auStack_98 = (byte[])auStack_60._0_8_;
												auStack_60._0_8_ = null;
												auStack_60._8_8_ = auStack_98;
												if (__this_04 == null) {
													while(true) {
														bVar10 = auStack_98.MoveNext();
														if (!bVar10) break;
														if (pCStack_88 == null) goto label_05a29ed7;
														bVar10 = pCStack_88.UsesCollider();
														if (bVar10) {
															throw new NullReferenceException();
														}
													}
												}
												else {
													while(true) {
														bVar10 = auStack_98.MoveNext();
														classInstance = pCStack_88;
														if (!bVar10) break;
														if (pCStack_88 == null) {
	label_05a29ed7: ;
															throw new NullReferenceException();
														}
														bVar10 = pCStack_88.UsesCollider();
														if (bVar10) {
															__this_04.RegisterInstance(classInstance);
														}
													}
												}
												auStack_98.Dispose();
												pUVar12 = __this_03.transform;
												UVar16 = c.center;
												center_00.z = UVar16.z;
												auStack_78._8_4_ = extraout_XMM0_Dc;
												auStack_78._0_8_ = UVar16._0_8_;
												auStack_78._12_4_ = extraout_XMM0_Dd;
												center_00.x = (float)auStack_78._0_4_;
												center_00.y = (float)auStack_78._4_4_;
												__this_05 = new MapTargetable(pUVar12, center_00, uStack_48);
												__this_02 = MapLoader.MapTargetables;
												if (__this_02 != null) {
													piVar1 = &__this_02._version;
													*piVar1 = *piVar1 + 1;
													pMVar8 = __this_02._items;
													if (pMVar8 != null) {
														uVar6 = __this_02._size;
														if (uVar6 < (uint)pMVar8.Length) {
															__this_02._size = uVar6 + 1;
															pMVar8[(int)uVar6] = __this_05;
														}
														else {
															__this_02.AddWithResize((object)__this_05);
														}
														__this_06 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicMapTargetableBuiltin));
														__this_06 = new CustomLogicMapTargetableBuiltin(__this_03, __this_05);
														return __this_06;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600234C")]
	[Address(RVA = "0x5929F50", Offset = "0x5928F50", VA = "0x5929F50")]
	public CustomLogicMapTargetableBuiltin AddBoxTarget(string team, CustomLogicVector3Builtin center, CustomLogicVector3Builtin size)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$AddBoxTarget): 24 lines keep C-only constructs
		int piVar1;
		float fVar2;
		float fVar3;
		String pSVar4;
		uint uVar5;
		MapObject pMVar6;
		GameObject __this_00;
		List<object> __this_01;
		List<MapTargetable> __this_02;
		MapTargetable[] pMVar7;
		String pSVar9;
		CustomLogicComponentInstance classInstance;
		bool bVar10;
		CustomLogicVector3Builtin pCVar11;
		CustomLogicVector3Builtin pCVar12;
		GameObject __this_03;
		Transform pUVar13;
		Transform p;
		BoxCollider c;
		CustomLogicCollisionHandler __this_04;
		MapTargetable __this_05;
		CustomLogicMapTargetableBuiltin __this_06;
		uint uVar14;
		uint uVar15;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		uint uVar16;
		Vector3 UVar17;
		Vector3 center_00;
		Vector3 b;
		Vector3 b_00;
		byte[] local_a8 = new byte[8];
		CustomLogicComponentInstance local_98;
		ulong local_88;
		byte[] local_78 = new byte[16];
		byte[] local_60 = new byte[16];
		CustomLogicComponentInstance local_50;
		ulong local_48;
		String local_38;

		pSVar9 = "Region";
		local_a8 = (byte[])0x0;
		local_98 = null;
		pMVar6 = this.Value;
		if ((pMVar6 != null) && (center != null)) {
			local_78._0_8_ = this;
			local_38 = "Hitboxes";
			local_88 = *(String*)&pMVar6.BaseScale;
			fVar2 = pMVar6.BaseScale.z;
			pSVar4 = *(String*)&center.Value;
			fVar3 = center.Value.z;
			uVar14 = (int)pSVar4;
			uVar15 = (int)((ulong)pSVar4 >> 0x20);
			uVar16 = (int)((ulong)local_88 >> 0x20);
			if ((typeof(Util)._2).cctor_finished_or_no_cctor == 0) {
				local_48 = pSVar4;
				uVar14 = (undefined4)local_48;
				uVar15 = local_48._4_4_;
				uVar16 = local_88._4_4_;
			}
			UVar17.y = (float)uVar15;
			UVar17.x = (float)uVar14;
			UVar17.z = fVar3;
			b.y = (float)uVar16;
			b.x = (float)(undefined4)local_88;
			b.z = fVar2;
			UVar17 = Util.DivideVectors(UVar17, b);
			pCVar11 = ((CustomLogicVector3Builtin)UVar17);
			if (size != null) {
				local_48 = pSVar9;
				b_00.z = fVar2;
				b_00._0_8_ = local_88;
				UVar17 = Util.DivideVectors((Vector3)size.Value, b_00);
				pCVar12 = ((CustomLogicVector3Builtin)UVar17);
				__this_03 = new GameObject();
				if (__this_03 != null) {
					pUVar13 = __this_03.transform;
					if ((*(long)(local_78._0_8_ + 0x30) != 0) &&(__this_00 = *(GameObject*)(*(long)(local_78._0_8_ + 0x30) + 0x18), __this_00 != null)) {
						p = __this_00.transform;
						if (pUVar13 != null) {
							pUVar13.SetParent(p);
							pUVar13 = __this_03.transform;
							if (pUVar13 != null) {
								pUVar13.localPosition = (Vector3)(Vector3.zeroVector);
								pUVar13 = __this_03.transform;
								if (pUVar13 != null) {
									pUVar13.localRotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
									pUVar13 = __this_03.transform;
									local_88 = team;
									if (pUVar13 != null) {
										pUVar13.localScale = (Vector3)(Vector3.oneVector);
										c = __this_03.AddComponent<BoxCollider>();
										MapLoader.SetCollider((Collider)c, local_48, local_38);
										if ((pCVar12 != null) &&(c != null)) {
											c.size = (Vector3)pCVar12.Value;
											if (pCVar11 != null) {
												c.center = (Vector3)pCVar11.Value;
												__this_04 = __this_03.AddComponent<CustomLogicCollisionHandler>();
												if ((*(long)(local_78._0_8_ + 0x30) != 0) &&(__this_01 = *(List<object>*)(*(long)(local_78._0_8_ + 0x30) + 0x38), __this_01 != null)) {
													local_60.GetEnumerator(__this_01);
													local_98 = local_50;
													local_a8 = (byte[])local_60._0_8_;
													local_60._0_8_ = null;
													local_60._8_8_ = local_a8;
													if (__this_04 == null) {
														while(true) {
															bVar10 = local_a8.MoveNext();
															if (!bVar10) break;
															if (local_98 == null) goto label_05a2a52c;
															bVar10 = local_98.UsesCollider();
															if (bVar10) {
																throw new NullReferenceException();
															}
														}
													}
													else {
														while(true) {
															bVar10 = local_a8.MoveNext();
															classInstance = local_98;
															if (!bVar10) break;
															if (local_98 == null) {
	label_05a2a52c: ;
																throw new NullReferenceException();
															}
															bVar10 = local_98.UsesCollider();
															if (bVar10) {
																__this_04.RegisterInstance(classInstance);
															}
														}
													}
													local_a8.Dispose();
													pUVar13 = __this_03.transform;
													UVar17 = c.center;
													center_00.z = UVar17.z;
													local_78._8_4_ = extraout_XMM0_Dc;
													local_78._0_8_ = UVar17._0_8_;
													local_78._12_4_ = extraout_XMM0_Dd;
													center_00.x = (float)local_78._0_4_;
													center_00.y = (float)local_78._4_4_;
													__this_05 = new MapTargetable(pUVar13, center_00, local_88);
													__this_02 = MapLoader.MapTargetables;
													if (__this_02 != null) {
														piVar1 = &__this_02._version;
														*piVar1 = *piVar1 + 1;
														pMVar7 = __this_02._items;
														if (pMVar7 != null) {
															uVar5 = __this_02._size;
															if (uVar5 < (uint)pMVar7.Length) {
																__this_02._size = uVar5 + 1;
																pMVar7[(int)uVar5] = __this_05;
															}
															else {
																__this_02.AddWithResize((object)__this_05);
															}
															__this_06 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicMapTargetableBuiltin));
															__this_06 = new CustomLogicMapTargetableBuiltin(__this_03, __this_05);
															return __this_06;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600234D")]
	[Address(RVA = "0x592A5B0", Offset = "0x59295B0", VA = "0x592A5B0")]
	public CustomLogicMapObjectBuiltin GetChild(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$GetChild): 6 lines keep C-only constructs
		MapScriptBaseObject pMVar1;
		Dictionary<int, object> pSVar2;
		CustomLogicEvaluator __this_00;
		int key;
		bool bVar3;
		HashSet<int> __this_01;
		MapObject pMVar4;
		CustomLogicMapObjectBuiltin pCVar5;
		int iVar6;
		System_Collections_Generic_HashSet_Enumerator_T__o local_68;
		byte[] local_48 = new byte[16];
		object local_38;

		local_68._set = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		pMVar4 = this.Value;
		if (((pMVar4 != null) &&(pMVar1 = pMVar4.ScriptObject, pMVar1 != null)) &&(pSVar2 = (Dictionary<int, object>)MapLoader.IdToChildren, pSVar2 != null)) {
			bVar3 = pSVar2.ContainsKey(pMVar1.Id);
			if (!bVar3) {
				return null;
			}
			pMVar4 = this.Value;
			if (((pMVar4 != null) &&(pMVar1 = pMVar4.ScriptObject, pMVar1 != null)) &&((pSVar2 = (Dictionary<int, object>)MapLoader.IdToChildren, pSVar2 != null &&(__this_01 = (HashSet<int>)pSVar2.get_Item(pMVar1.Id), __this_01 != null)))) {
				local_48.GetEnumerator(__this_01);
				local_68._current = local_38;
				local_68._set = (HashSet<T>)local_48._0_8_;
				local_68._index = local_48._8_4_;
				local_68._version = local_48._12_4_;
				local_48._0_8_ = null;
				local_48._8_8_ = &local_68;
				do {
					do {
						bVar3 = local_68.MoveNext();
						if (!bVar3) {
							iVar6 = 2;
							goto label_05a2a86e;
						}
						key = (int32_t)local_68._current;
						pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar2 == null) {
							throw new NullReferenceException();
						}
						bVar3 = pSVar2.ContainsKey(key);
					} while (!bVar3);
					pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar2 == null) {
						throw new NullReferenceException();
					}
					pMVar4 = pSVar2.get_Item(key);
					if (pMVar4 == null) {
						throw new NullReferenceException();
					}
					pMVar1 = pMVar4.ScriptObject;
					if (pMVar1 == null) {
						throw new NullReferenceException();
					}
					bVar3 = (pMVar1.Name == name);
				} while (!bVar3);
				__this_00 = CustomLogicManager.Evaluator;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				iVar6 = 5;
	label_05a2a86e: ;
				local_68.Dispose();
				if (iVar6 == 5) {
					return pCVar5;
				}
				return null;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600234E")]
	[Address(RVA = "0x592A940", Offset = "0x5929940", VA = "0x592A940")]
	public CustomLogicListBuiltin GetChildren()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$GetChildren): 8 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		MapScriptBaseObject pMVar3;
		Dictionary<int, object> pSVar4;
		List<object> __this_00;
		CustomLogicEvaluator __this_01;
		Object[] pSVar5;
		int iVar7;
		bool bVar8;
		CustomLogicListBuiltin __this_02;
		HashSet<int> __this_03;
		MapObject pMVar9;
		CustomLogicMapObjectBuiltin item;
		System_Collections_Generic_HashSet_Enumerator_T__o local_68;
		byte[] local_48 = new byte[16];
		object local_38;

		local_68._set = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		__this_02 = new CustomLogicListBuiltin();
		pMVar9 = this.Value;
		if (((pMVar9 != null) &&(pMVar3 = pMVar9.ScriptObject, pMVar3 != null)) &&(pSVar4 = (Dictionary<int, object>)MapLoader.IdToChildren, pSVar4 != null)) {
			bVar8 = pSVar4.ContainsKey(pMVar3.Id);
			if (!bVar8) {
				return __this_02;
			}
			pMVar9 = this.Value;
			if (((pMVar9 != null) &&(pMVar3 = pMVar9.ScriptObject, pMVar3 != null)) &&((pSVar4 = (Dictionary<int, object>)MapLoader.IdToChildren, pSVar4 != null &&(__this_03 = (HashSet<int>)pSVar4.get_Item(pMVar3.Id), __this_03 != null)))) {
				local_48.GetEnumerator(__this_03);
				local_68._current = local_38;
				local_68._set = (HashSet<T>)local_48._0_8_;
				local_68._index = local_48._8_4_;
				local_68._version = local_48._12_4_;
				local_48._0_8_ = null;
				local_48._8_8_ = &local_68;
				if (__this_02 == null) {
					do {
						bVar8 = local_68.MoveNext();
						if (!bVar8) goto label_05a2ad20;
						iVar7 = (int32_t)local_68._current;
						pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar4 == null) goto label_05a2ad48;
						bVar8 = pSVar4.ContainsKey(iVar7);
					} while (!bVar8);
					pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar4 != null) {
						pSVar4.get_Item(iVar7);
						throw new NullReferenceException();
					}
	label_05a2ad1b: ;
					throw new NullReferenceException();
				}
				do {
					do {
						bVar8 = local_68.MoveNext();
						if (!bVar8) {
	label_05a2ad20: ;
							local_68.Dispose();
							return __this_02;
						}
						iVar7 = (int32_t)local_68._current;
						pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar4 == null) {
	label_05a2ad48: ;
							throw new NullReferenceException();
						}
						bVar8 = pSVar4.ContainsKey(iVar7);
					} while (!bVar8);
					pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar4 == null) goto label_05a2ad1b;
					pMVar9 = pSVar4.get_Item(iVar7);
					__this_00 = __this_02.List;
					__this_01 = CustomLogicManager.Evaluator;
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
					item = __this_01.GetOrCreateMapObjectBuiltin(pMVar9);
					if (__this_00 == null) {
	label_05a2ad4d: ;
						throw new NullReferenceException();
					}
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar5 = __this_00._items;
					if (pSVar5 == null) goto label_05a2ad4d;
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pSVar5.Length) {
						__this_00._size = uVar2 + 1;
						pSVar5[(int)uVar2] = (object)item;
					}
					else {
						__this_00.AddWithResize((object)item);
					}
				} while(true);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600234F")]
	[Address(RVA = "0x592AE00", Offset = "0x5929E00", VA = "0x592AE00")]
	public CustomLogicTransformBuiltin GetTransform(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$GetTransform): 1 lines keep C-only constructs
		MapObject pMVar1;
		GameObject __this_00;
		bool bVar2;
		Transform pUVar3;
		CustomLogicTransformBuiltin __this_01;

		pMVar1 = this.Value;
		if ((pMVar1 != null) &&(__this_00 = pMVar1.GameObject, __this_00 != null)) {
			pUVar3 = __this_00.transform;
			if (pUVar3 != null) {
				pUVar3 = pUVar3.Find(name);
				bVar2 = ((Object)pUVar3 != null);
				if (bVar2) {
					__this_01 = il2cpp_codegen_object_new(typeof(CustomLogicTransformBuiltin)) ;
					__this_01 = new CustomLogicTransformBuiltin(pUVar3);
				}
				return __this_01;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002350")]
	[Address(RVA = "0x592AEC0", Offset = "0x5929EC0", VA = "0x592AEC0")]
	public void SetColorAll(CustomLogicColorBuiltin color)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$SetColorAll): 5 lines keep C-only constructs
		MapObject pMVar1;
		MapScriptBaseObject pMVar2;
		Renderer[] pUVar3;
		Color255 __this_00;
		uint uVar4;
		Material __this_01;
		Il2CppClass klass;
		Exception __this_02;
		String message;
		MethodInfo lastManagedFrame;
		uint uVar5;
		Color value;

		pMVar1 = this.Value;
		if ((pMVar1 != null) &&(pMVar2 = pMVar1.ScriptObject, pMVar2 != null)) {
			if (pMVar2.Static != false) {
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this_02 = (Exception)il2cpp_codegen_object_new(klass);
				message = il2cpp_codegen_get_runtime_metadata(&"SetColorAll cannot be called on a static MapObject.");
				__this_02 = new Exception(message);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_SetColorAll);
				throw (object)__this_02;
			}
			pUVar3 = pMVar1.renderCache;
			if (pUVar3 != null) {
				uVar4 = (uint)pUVar3.Length;
				if (color == null) {
					if (0 < (int)uVar4) {
						if (pUVar3[0] != null) {
							(pUVar3[0]).material;
							throw new NullReferenceException();
						}
						goto label_05a2afc3;
					}
				}
				else if (0 < (int)uVar4) {
					uVar5 = 0;
					do {
						if (uVar4 <= uVar5) {
							throw new IndexOutOfRangeException();
						}
						if (pUVar3[(int)uVar5] == null) goto label_05a2afc3;
						__this_01 = (pUVar3[(int)uVar5]).material;
						__this_00 = color.Value;
						if ((__this_00 == null) ||(value = __this_00.ToColor(), __this_01 == null)) goto label_05a2afc3;
						__this_01.color = value;
						uVar5 = uVar5 + 1;
						uVar4 = (uint)pUVar3.Length;
					} while ((int)uVar5 < (int)uVar4);
				}
				return;
			}
		}
	label_05a2afc3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002351")]
	[Address(RVA = "0x592AFE0", Offset = "0x5929FE0", VA = "0x592AFE0")]
	public bool InBounds(CustomLogicVector3Builtin position)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$InBounds): 1 lines keep C-only constructs
		MapObject pMVar1;
		Collider[] pUVar2;
		bool bVar3;
		uint uVar4;
		uint uVar5;
		Bounds local_80;
		Bounds local_68;
		Vector3[] local_48 = new Vector3[2];

		local_68.m_Center.x = 0.0;
		local_68.m_Center.y = 0.0;
		local_68.m_Center.z = 0.0;
		local_68.m_Extents.x = 0.0;
		local_68.m_Extents.y = 0.0;
		local_68.m_Extents.z = 0.0;
		pMVar1 = this.Value;
		if ((pMVar1 == null) ||(pUVar2 = pMVar1.colliderCache, pUVar2 == null)) {
	label_05a2b0da: ;
			throw new NullReferenceException();
		}
		uVar4 = (uint)pUVar2.Length;
		if (position == null) {
			if (0 < (int)uVar4) {
				if (pUVar2[0] != null) {
					local_80 = (pUVar2[0]).bounds;
					throw new NullReferenceException();
				}
				goto label_05a2b0da;
			}
		}
		else {
			uVar5 = 0;
			if (0 < (int)uVar4) {
				while(true) {
					if (uVar4 <= uVar5) {
						throw new IndexOutOfRangeException();
					}
					if (pUVar2[(int)uVar5] == null) break;
					local_80 = (pUVar2[(int)uVar5]).bounds;
					local_48[1].y = local_80.m_Extents.y;
					local_48[1].z = local_80.m_Extents.z;
					local_68.m_Extents.x = local_80.m_Extents.x;
					local_68.m_Center.z = local_80.m_Center.z;
					local_48[0].x = local_80.m_Center.x;
					local_48[0].y = local_80.m_Center.y;
					local_68.m_Center.x = local_80.m_Center.x;
					local_68.m_Center.y = local_80.m_Center.y;
					local_68.m_Extents.y = local_80.m_Extents.y;
					local_68.m_Extents.z = local_80.m_Extents.z;
					local_80.m_Center.x = position.Value.x;
					local_80.m_Center.y = position.Value.y;
					local_80.m_Center.z = position.Value.z;
					local_48._8_8_ = local_68._8_8_;
					bVar3 = local_68.Internal_Contains(ref local_80);
					if (bVar3) {
						return true;
					}
					uVar5 = uVar5 + 1;
					uVar4 = (uint)pUVar2.Length;
					if ((int)uVar4 <= (int)uVar5) {
						return false;
					}
				}
				goto label_05a2b0da;
			}
		}
		return false;
	}

	[Token(Token = "0x6002352")]
	[Address(RVA = "0x592B0F0", Offset = "0x592A0F0", VA = "0x592B0F0")]
	public CustomLogicVector3Builtin GetBoundsAverageCenter()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsAverageCenter): 21 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		MapObject pMVar3;
		Collider[] pUVar4;
		GameObject __this_00;
		byte[] auVar6 = new byte[16];
		uint uVar7;
		Transform __this_01;
		CustomLogicVector3Builtin __this_02;
		uint uVar8;
		uint uVar9;
		float fVar10;
		byte[] auVar11 = new byte[16];
		Vector3 UVar12;
		float fStack_5c;
		ulong uStack_58;
		float fStack_50;
		float fStack_4c;
		Bounds UStack_40;

		if (Il2CppMethodInitialized_07546084 == false) {
			Il2CppMethodInitialized_07546084 = true;
			if (Il2CppMethodInitialized_0753e4b6 == false) goto label_05a2b13b;
	label_05a2b111: ;
			pMVar3 = this.Value;
		}
		else {
			if (Il2CppMethodInitialized_0753e4b6 != false) goto label_05a2b111;
	label_05a2b13b: ;
			Il2CppMethodInitialized_0753e4b6 = true;
			pMVar3 = this.Value;
		}
		if ((pMVar3 != null) &&(pUVar4 = pMVar3.colliderCache, pUVar4 != null)) {
			uVar7 = (uint)pUVar4.Length;
			if (0 < (int)uVar7) {
				uVar1 = (Vector3.zeroVector).x;
				uVar2 = (Vector3.zeroVector).y;
				auVar11._4_4_ = (float)uVar2;
				auVar11._0_4_ = (float)uVar1;
				auVar11._8_8_ = 0;
				fStack_5c = (Vector3.zeroVector).z;
				uVar9 = 0xffffffff;
				do {
					uVar8 = uVar9;
					uVar9 = uVar8 + 1;
					if (uVar7 <= uVar9) {
						throw new IndexOutOfRangeException();
					}
					if (pUVar4[(int)uVar9] == null) goto label_05a2b290;
					UStack_40 = (pUVar4[(int)uVar9]).bounds;
					uStack_58._0_4_ = auVar11._0_4_;
					uStack_58._4_4_ = auVar11._4_4_;
					fStack_50 = auVar11._8_4_;
					fStack_4c = auVar11._12_4_;
					auVar11._0_4_ = (float)uStack_58 + UStack_40.m_Center.x;
					auVar11._4_4_ = uStack_58._4_4_ + UStack_40.m_Center.y;
					auVar11._8_4_ = fStack_50 + 0.0;
					auVar11._12_4_ = fStack_4c + 0.0;
					fStack_5c = fStack_5c + UStack_40.m_Center.z;
					uVar7 = (uint)pUVar4.Length;
				} while ((int)(uVar8 + 2) < (int)uVar7);
				if (uVar9 < 0x7fffffff) {
					fVar10 = (float)(int)(uVar8 + 2);
					fStack_5c = fStack_5c / fVar10;
					auVar6._4_4_ = fVar10;
					auVar6._0_4_ = fVar10;
					auVar6._8_4_ = fVar10;
					auVar6._12_4_ = fVar10;
					auVar11 = divps(auVar11, auVar6);
					uStack_58 = auVar11._0_8_;
					goto label_05a2b259;
				}
			}
			pMVar3 = this.Value;
			if (((pMVar3 != null) &&(__this_00 = pMVar3.GameObject, __this_00 != null)) &&(__this_01 = __this_00.transform, __this_01 != null)) {
				UVar12 = __this_01.position;
				fStack_5c = UVar12.z;
				uStack_58 = UVar12._0_8_;
	label_05a2b259: ;
				UVar12.z = fStack_5c;
				UVar12.x = (float)uStack_58;
				UVar12.y = uStack_58._4_4_;
				__this_02 = new CustomLogicVector3Builtin(UVar12);
				return __this_02;
			}
		}
	label_05a2b290: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002353")]
	[Address(RVA = "0x592B2A0", Offset = "0x592A2A0", VA = "0x592B2A0")]
	public CustomLogicVector3Builtin GetBoundsCenter()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsCenter): clean
		MapObject pMVar1;
		Collider[] pUVar2;
		CustomLogicVector3Builtin __this_00;
		Vector3 value;
		Bounds local_20;

		pMVar1 = this.Value;
		if ((pMVar1 != null) &&(pUVar2 = pMVar1.colliderCache, pUVar2 != null)) {
			if (pUVar2.Length == 0) {
				return null;
			}
			if ((int)pUVar2.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (pUVar2[0] != null) {
				local_20 = (pUVar2[0]).bounds;
				value.z = local_20.m_Center.z;
				value.x = local_20.m_Center.x;
				value.y = local_20.m_Center.y;
				__this_00 = new CustomLogicVector3Builtin(value);
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002354")]
	[Address(RVA = "0x592B360", Offset = "0x592A360", VA = "0x592B360")]
	public CustomLogicVector3Builtin GetBoundsSize()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsSize): clean
		MapObject pMVar1;
		Collider[] pUVar2;
		CustomLogicVector3Builtin __this_00;
		Vector3 value;
		Bounds local_20;

		pMVar1 = this.Value;
		if ((pMVar1 != null) &&(pUVar2 = pMVar1.colliderCache, pUVar2 != null)) {
			if (pUVar2.Length == 0) {
				return null;
			}
			if ((int)pUVar2.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (pUVar2[0] != null) {
				local_20 = (pUVar2[0]).bounds;
				value.y = local_20.m_Extents.y + local_20.m_Extents.y;
				value.x = local_20.m_Extents.x + local_20.m_Extents.x;
				value.z = local_20.m_Extents.z + local_20.m_Extents.z;
				__this_00 = new CustomLogicVector3Builtin(value);
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002355")]
	[Address(RVA = "0x592B420", Offset = "0x592A420", VA = "0x592B420")]
	public CustomLogicVector3Builtin GetBoundsMin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsMin): 3 lines keep C-only constructs
		MapObject pMVar1;
		Collider[] pUVar2;
		CustomLogicVector3Builtin __this_00;
		Vector3 value;
		Bounds UStack_30;
		ulong uStack_18;

		pMVar1 = this.Value;
		if ((pMVar1 != null) &&(pUVar2 = pMVar1.colliderCache, pUVar2 != null)) {
			if (pUVar2.Length == 0) {
				return null;
			}
			if ((int)pUVar2.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (pUVar2[0] != null) {
				UStack_30 = (pUVar2[0]).bounds;
				uStack_18 = CONCAT44(UStack_30.m_Center.y - UStack_30.m_Extents.y, UStack_30.m_Center.x - UStack_30.m_Extents.x);
				value.z = UStack_30.m_Center.z - UStack_30.m_Extents.z;
				value.x = (float)(undefined4)uStack_18;
				value.y = (float)uStack_18._4_4_;
				__this_00 = new CustomLogicVector3Builtin(value);
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002356")]
	[Address(RVA = "0x592B4F0", Offset = "0x592A4F0", VA = "0x592B4F0")]
	public CustomLogicVector3Builtin GetBoundsMax()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsMax): 3 lines keep C-only constructs
		MapObject pMVar1;
		Collider[] pUVar2;
		CustomLogicVector3Builtin __this_00;
		Vector3 value;
		Bounds local_30;
		ulong local_18;

		pMVar1 = this.Value;
		if ((pMVar1 != null) &&(pUVar2 = pMVar1.colliderCache, pUVar2 != null)) {
			if (pUVar2.Length == 0) {
				return null;
			}
			if ((int)pUVar2.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (pUVar2[0] != null) {
				local_30 = (pUVar2[0]).bounds;
				local_18 = CONCAT44(local_30.m_Extents.y + local_30.m_Center.y, local_30.m_Extents.x + local_30.m_Center.x);
				value.z = local_30.m_Center.z + local_30.m_Extents.z;
				value.x = (float)(undefined4)local_18;
				value.y = (float)local_18._4_4_;
				__this_00 = new CustomLogicVector3Builtin(value);
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002357")]
	[Address(RVA = "0x592B5C0", Offset = "0x592A5C0", VA = "0x592B5C0")]
	public CustomLogicVector3Builtin GetBoundsExtents()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsExtents): clean
		MapObject pMVar1;
		Collider[] pUVar2;
		CustomLogicVector3Builtin __this_00;
		Vector3 value;
		Bounds local_20;

		pMVar1 = this.Value;
		if ((pMVar1 != null) &&(pUVar2 = pMVar1.colliderCache, pUVar2 != null)) {
			if (pUVar2.Length == 0) {
				return null;
			}
			if ((int)pUVar2.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (pUVar2[0] != null) {
				local_20 = (pUVar2[0]).bounds;
				value.z = local_20.m_Extents.z;
				value.x = local_20.m_Extents.x;
				value.y = local_20.m_Extents.y;
				__this_00 = new CustomLogicVector3Builtin(value);
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002358")]
	[Address(RVA = "0x592B680", Offset = "0x592A680", VA = "0x592B680")]
	public CustomLogicListBuiltin GetCorners()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$GetCorners): 42 lines keep C-only constructs
		BoxCollider* targetAddress;
		CustomLogicListBuiltin* targetAddress_00;
		int piVar1;
		byte bVar2;
		uint uVar3;
		MapObject pMVar4;
		Collider[] pUVar5;
		Collider __this_00;
		List<@object> __this_01;
		object @object;
		BoxCollider __this_02;
		BoxCollider pUVar6;
		CustomLogicMapObjectBuiltin.c__DisplayClass100_0 __this_03;
		object source;
		CustomLogicListBuiltin pCVar7;
		CustomLogic_CustomLogicMapObjectBuiltin___c_StaticFields pCVar8;
		Func<T, TResult> __this_04;
		System_Collections_Generic_IEnumerable_TResult__o collection;
		List<Vector3> __this_05;
		List<int> pSVar9;
		Action<T> action;
		Int32[] pSVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		Vector3 UVar15;
		Bounds UStack_70;
		byte[] auStack_58 = new byte[16];
		byte[] auStack_48 = new byte[16];

		__this_03 = il2cpp_codegen_object_new(typeof(CustomLogicMapObjectBuiltin.c__DisplayClass100_0)) ;
		__this_03 = new Object();
		pUVar6 = typeof(BoxCollider);
		pMVar4 = this.Value;
		if ((pMVar4 != null) &&(pUVar5 = pMVar4.colliderCache, pUVar5 != null)) {
			if (pUVar5.Length == 0) {
				return null;
			}
			if ((int)pUVar5.Length == 0) {
	label_05a2bc51: ;
				throw new IndexOutOfRangeException();
			}
			__this_00 = pUVar5[0];
			if (__this_00 != null) {
				bVar2 = (typeof(BoxCollider)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar2) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(BoxCollider))) {
					UStack_70 = __this_00.bounds;
					auStack_48 = ZEXT416((uint)UStack_70.m_Center.x);
					auStack_58 = ZEXT416((uint)UStack_70.m_Center.y);
					source = new Vector3[8];
					if (source != null) {
						uVar3 = *(uint)&source[1].monitor;
						if (uVar3 != 0) {
							fVar14 = (float)auStack_48._0_4_ - UStack_70.m_Extents.x;
							fVar13 = (float)auStack_58._0_4_ - UStack_70.m_Extents.y;
							fVar12 = UStack_70.m_Center.z - UStack_70.m_Extents.z;
							source[2].klass = (Il2CppClass)CONCAT44(fVar13, fVar14);
							*(float)&source[2].monitor = fVar12;
							if (uVar3 != 1) {
								UStack_70.m_Center.z = UStack_70.m_Center.z + UStack_70.m_Extents.z;
								*(ulong)((long)&source[2].monitor + 4) = CONCAT44(fVar13, fVar14);
								*(float)((long)&source[3].klass + 4) = UStack_70.m_Center.z;
								if (2 < uVar3) {
									UStack_70.m_Extents.y =(float)auStack_58._0_4_ + UStack_70.m_Extents.y;
									source[3].monitor = (IntPtr)CONCAT44(UStack_70.m_Extents.y, fVar14);
									*(float)&source[4].klass = fVar12;
									if (uVar3 != 3) {
										*(ulong)((long)&source[4].klass + 4) = CONCAT44(UStack_70.m_Extents.y, fVar14);
										*(float)((long)&source[4].monitor + 4) = UStack_70.m_Center.z;
										if (4 < uVar3) {
											UStack_70.m_Extents.x =(float)auStack_48._0_4_ + UStack_70.m_Extents.x;
											source[5].klass = (Il2CppClass)CONCAT44(fVar13, UStack_70.m_Extents.x);
											*(float)&source[5].monitor = fVar12;
											if (uVar3 != 5) {
												*(ulong)((long)&source[5].monitor + 4) = CONCAT44(fVar13, UStack_70.m_Extents.x);
												*(float)((long)&source[6].klass + 4) = UStack_70.m_Center.z;
												if (6 < uVar3) {
													source[6].monitor =(IntPtr)CONCAT44(UStack_70.m_Extents.y, UStack_70.m_Extents.x);
													*(float)&source[7].klass = fVar12;
													if (uVar3 != 7) {
														*(ulong)((long)&source[7].klass + 4) = CONCAT44(UStack_70.m_Extents.y, UStack_70.m_Extents.x);
														*(float)((long)&source[7].monitor + 4) = UStack_70.m_Center.z;
														pCVar7 = new CustomLogicListBuiltin();
														if (pCVar7 != null) {
															__this_01 = pCVar7.List;
															if ((typeof(CustomLogicMapObjectBuiltin.c)._2). cctor_finished_or_no_cctor == 0) {
																pCVar8 = typeof(CustomLogicMapObjectBuiltin.c).static_fields;
																__this_04 = (Func<T, TResult>)pCVar8.__9__100_1;
															}
															else {
																pCVar8 = typeof(CustomLogicMapObjectBuiltin.c).static_fields;
																__this_04 = (Func<T, TResult>)pCVar8.__9__100_1;
															}
															if (__this_04 == null) {
																if (((typeof(CustomLogicMapObjectBuiltin.c))._2). cctor_finished_or_no_cctor == 0) {
																	pCVar8 = typeof(CustomLogicMapObjectBuiltin.c).static_fields;
																}
																@object = (object)pCVar8.__9;
																__this_04 = (Func<T, TResult>)il2cpp_codegen_object_new((Il2CppClass)typeof(Func<Vector3, CustomLogicVector3Builtin>));
																__this_04 = new Func<Vector3, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_c_GetCorners_b__100_1);
																pCVar8 = typeof(CustomLogicMapObjectBuiltin.c).static_fields;
																pCVar8.__9__100_1 =(Func<Vector3, CustomLogicVector3Builtin>)__this_04;
															}
															collection = Enumerable.Select<Vector3, CustomLogicVector3Builtin>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_04);
															if (__this_01 != null) {
																__this_01.AddRange((IEnumerable<T>)collection);
																return pCVar7;
															}
														}
														goto label_05a2bc4c;
													}
												}
											}
										}
									}
								}
							}
						}
						goto label_05a2bc51;
					}
				}
				else if (__this_03 != null) {
					__this_03.boxCollider = (BoxCollider)__this_00;
					if (((__this_00.klass._2).typeHierarchyDepth < bVar2) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass)pUVar6)) {
						throw new InvalidCastException();
					}
					targetAddress = &__this_03.boxCollider;
					__this_02 = *targetAddress;
					if (__this_02 != null) {
						UVar15 = __this_02.size;
						__this_03.size.x = UVar15.x;
						__this_03.size.y = UVar15.y;
						__this_03.size.z = UVar15.z;
						pCVar7 = new CustomLogicListBuiltin();
						targetAddress_00 = &__this_03.result;
						__this_03.result = pCVar7;
						__this_05 = new List<Vector3>();
						pSVar9 = new List<int>();
						if (pSVar9 != null) {
							piVar1 = &pSVar9._version;
							*piVar1 = *piVar1 + 1;
							pSVar11 = pSVar9._items;
							if (pSVar11 != null) {
								uVar3 = pSVar9._size;
								if (uVar3 < (uint)pSVar11.Length) {
									pSVar9._size = uVar3 + 1;
									pSVar11[(int)uVar3] = -1;
									piVar1 = &pSVar9._version;
									*piVar1 = *piVar1 + 1;
								}
								else {
									pSVar9.AddWithResize(-1);
									pSVar11 = pSVar9._items;
									piVar1 = &pSVar9._version;
									*piVar1 = *piVar1 + 1;
									if (pSVar11 == null) goto label_05a2bc4c;
								}
								uVar3 = pSVar9._size;
								if (uVar3 < (uint)pSVar11.Length) {
									pSVar9._size = uVar3 + 1;
									pSVar11[(int)uVar3] = 1;
								}
								else {
									pSVar9.AddWithResize(1);
								}
								__this_03.signs = pSVar9;
								pSVar9 = __this_03.signs;
								action = new Action<int>((object)__this_03, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_0_GetCorners_b__0);
								if (pSVar9 != null) {
									pSVar9.ForEach(action);
									return *targetAddress_00;
								}
							}
						}
					}
				}
			}
		}
	label_05a2bc4c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6002359")]
	[Address(RVA = "0x592BC80", Offset = "0x592AC80", VA = "0x592BC80")]
	public bool HasTag(string tag)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$HasTag): clean
		MapObject obj;
		bool bVar1;

		obj = this.Value;
		bVar1 = MapLoader.HasTag(obj, tag);
		return bVar1;
	}

	[Token(Token = "0x600235A")]
	[Address(RVA = "0x592BCE0", Offset = "0x592ACE0", VA = "0x592BCE0")]
	public object AddBuiltinComponent(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$AddBuiltinComponent): 12 lines keep C-only constructs
		CustomLogicRigidbodyBuiltin* targetAddress;
		Dictionary<object, object> pSVar1;
		MapObject pMVar2;
		MapScriptBaseObject pMVar3;
		bool bVar4;
		CustomLogicLodBuiltin __this_00;
		BuiltinComponentInstance pCVar5;
		CustomLogicRigidbodyBuiltin __this_01;
		String str2;
		MethodInfo lastManagedFrame;
		Il2CppClass pIVar6;
		Exception __this_02;
		String pSVar7;
		int type;
		Dictionary<string, BuiltinComponentInstance> pSVar8;

		pSVar1 = (Dictionary<object, object>)this._builtinCache;
		if (pSVar1 == null) goto label_05a2bf88;
		bVar4 = pSVar1.ContainsKey((object)name);
		if (bVar4) {
			pSVar7 = il2cpp_codegen_get_runtime_metadata(&"MapObject already has a ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" component.");
			pSVar7 = String.Concat(pSVar7, name, str2);
	label_05a2c07c: ;
			pIVar6 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_02 = (Exception)il2cpp_codegen_object_new(pIVar6);
	label_05a2c09c: ;
			__this_02 = new Exception(pSVar7);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_AddBuiltinComponent);
			throw (object)__this_02;
		}
		bVar4 = (name == "DayLight");
		if (bVar4) {
			pSVar8 = this._builtinCache;
			type = 1;
	label_05a2be89: ;
			__this_00 = new CustomLogicLodBuiltin(this, type);
		}
		else {
			bVar4 = (name == "PointLight");
			if (bVar4) {
				pSVar8 = this._builtinCache;
				type = 2;
				goto label_05a2be89;
			}
			bVar4 = (name == "SpotLight");
			if (bVar4) {
				pSVar8 = this._builtinCache;
				type = 0;
				goto label_05a2be89;
			}
			bVar4 = (name == "Rigidbody");
			if (bVar4) {
				pMVar2 = this.Value;
				if ((pMVar2 == null) ||(pMVar3 = pMVar2.ScriptObject, pMVar3 == null)) goto label_05a2bf88;
				if (pMVar3.Static != false) {
					pIVar6 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
					__this_02 = (Exception)il2cpp_codegen_object_new(pIVar6);
					pSVar7 = il2cpp_codegen_get_runtime_metadata(&"AddRigidbody cannot be called on a static MapObject.");
					goto label_05a2c09c;
				}
				__this_01 = new CustomLogicRigidbodyBuiltin(this, 1.0, (System_Nullable_Vector3__o)ZEXT416(0), false, false);
				targetAddress = &this._rigidBody;
				this._rigidBody = __this_01;
				pSVar1 = (Dictionary<object, object>)this._builtinCache;
				if (pSVar1 == null) goto label_05a2bf88;
				pSVar1.set_Item((object)name, (object)*targetAddress);
				pSVar8 = this._builtinCache;
				if (pSVar8 == null) goto label_05a2bf88;
				goto label_05a2bebe;
			}
			bVar4 = (name == "CustomPhysicsMaterial");
			if (bVar4) {
				pSVar8 = this._builtinCache;
				__this_00 = new CustomLogicLodBuiltin(this);
			}
			else {
				bVar4 = (name == "NavMeshObstacle");
				if (bVar4) {
					pSVar8 = this._builtinCache;
					__this_00 = new CustomLogicLodBuiltin(this);
				}
				else {
					bVar4 = (name == "Lod");
					if (!bVar4) {
						pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Unknown builtin component: ");
						pSVar7 = String.Concat(pSVar7, name);
						goto label_05a2c07c;
					}
					pSVar8 = this._builtinCache;
					__this_00 = new CustomLogicLodBuiltin(this);
				}
			}
		}
		if (pSVar8 != null) {
			pSVar8.set_Item((object)name, (object)__this_00);
			pSVar8 = this._builtinCache;
			if (pSVar8 != null) {
	label_05a2bebe: ;
				pCVar5 = pSVar8.get_Item((object)name);
				return (object)pCVar5;
			}
		}
	label_05a2bf88: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600235B")]
	[Address(RVA = "0x592C110", Offset = "0x592B110", VA = "0x592C110")]
	public CustomLogicRigidbodyBuiltin AddRigidbody()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$AddRigidbody): 10 lines keep C-only constructs
		CustomLogicRigidbodyBuiltin* targetAddress;
		MapObject pMVar1;
		MapScriptBaseObject pMVar2;
		Dictionary<object, object> pSVar3;
		bool bVar4;
		CustomLogicRigidbodyBuiltin __this_00;
		Il2CppClass pIVar5;
		Exception __this_01;
		String message;
		MethodInfo lastManagedFrame;
		String* metadataPointer;

		pMVar1 = this.Value;
		if ((pMVar1 != null) &&(pMVar2 = pMVar1.ScriptObject, pMVar2 != null)) {
			if (pMVar2.Static != false) {
				pIVar5 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this_01 = (Exception)il2cpp_codegen_object_new(pIVar5);
				metadataPointer = &"AddRigidbody cannot be called on a static MapObject.";
	label_05a2c264: ;
				message = il2cpp_codegen_get_runtime_metadata(metadataPointer);
				__this_01 = new Exception(message);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_AddRigidbody);
				throw (object)__this_01;
			}
			pSVar3 = (Dictionary<object, object>)this._builtinCache;
			if (pSVar3 != null) {
				bVar4 = pSVar3.ContainsKey((Il2CppObject *)"Rigidbody");
				if (bVar4) {
					pIVar5 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
					__this_01 = (Exception)il2cpp_codegen_object_new(pIVar5);
					metadataPointer = &"MapObject already has a Rigidbody component.";
					goto label_05a2c264;
				}
				__this_00 = new CustomLogicRigidbodyBuiltin(this, 1.0, (System_Nullable_Vector3__o)ZEXT416(0), false, false);
				targetAddress = &this._rigidBody;
				this._rigidBody = __this_00;
				pSVar3 = (Dictionary<object, object>)this._builtinCache;
				if (pSVar3 != null) {
					pSVar3.set_Item((Il2CppObject *)"Rigidbody", (object)*targetAddress);
					return *targetAddress;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600235C")]
	[Address(RVA = "0x592C290", Offset = "0x592B290", VA = "0x592C290")]
	public object GetBuiltinComponent(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$GetBuiltinComponent): clean
		Dictionary<object, object> pSVar1;
		bool bVar2;
		BuiltinComponentInstance pCVar3;

		pSVar1 = (Dictionary<object, object>)this._builtinCache;
		if (pSVar1 != null) {
			bVar2 = pSVar1.ContainsKey((object)name);
			if (!bVar2) {
				return null;
			}
			pSVar1 = (Dictionary<object, object>)this._builtinCache;
			if (pSVar1 != null) {
				pCVar3 = pSVar1.get_Item((object)name);
				return (object)pCVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600235D")]
	[Address(RVA = "0x592C320", Offset = "0x592B320", VA = "0x592C320")]
	public void RemoveBuiltinComponent(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$RemoveBuiltinComponent): 6 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		BuiltinComponentInstance __this_00;
		String pSVar3;
		String str2;
		Il2CppClass klass;
		Exception __this_01;
		MethodInfo lastManagedFrame;

		pSVar1 = (Dictionary<object, object>)this._builtinCache;
		if (pSVar1 != null) {
			bVar2 = pSVar1.ContainsKey((object)name);
			if (!bVar2) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"MapObject does not have a ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" component.");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this_01 = (Exception)il2cpp_codegen_object_new(klass);
				__this_01 = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_RemoveBuiltinComponent);
				throw (object)__this_01;
			}
			pSVar1 = (Dictionary<object, object>)this._builtinCache;
			if (pSVar1 != null) {
				__this_00 = pSVar1.get_Item((object)name);
				if (__this_00 != null) {
					__this_00.Unload();
					pSVar1 = (Dictionary<object, object>)this._builtinCache;
					if (pSVar1 != null) {
						pSVar1.Remove((object)name);
						bVar2 = (name == "Rigidbody");
						if (bVar2) {
							this._rigidBody = null;
							return;
						}
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600235E")]
	[Address(RVA = "0x592C490", Offset = "0x592B490", VA = "0x592C490")]
	public string ConvertToCSV()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$ConvertToCSV): clean
		MapObject pMVar1;
		MapScriptBaseObject pMVar2;
		String pSVar3;

		pMVar1 = this.Value;
		if ((pMVar1 == null) ||(pMVar2 = pMVar1.ScriptObject, pMVar2 == null)) {
			throw new NullReferenceException();
		}
		return pSVar3;
	}

	[Token(Token = "0x6002362")]
	[Address(RVA = "0x5927BD0", Offset = "0x5926BD0", VA = "0x5927BD0")]
	private void AssertRendererGet()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$AssertRendererGet): 5 lines keep C-only constructs
		MapObject pMVar1;
		Renderer[] pUVar2;
		Il2CppClass klass;
		Exception __this_00;
		String message;
		MethodInfo lastManagedFrame;

		pMVar1 = this.Value;
		if ((pMVar1 == null) ||(pUVar2 = pMVar1.renderCache, pUVar2 == null)) {
			throw new NullReferenceException();
		}
		if (pUVar2.Length == 0) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_00 = (Exception)il2cpp_codegen_object_new(klass);
			message = il2cpp_codegen_get_runtime_metadata(&"MapObject has no renderer.");
			__this_00 = new Exception(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_AssertRendererGet);
			throw (object)__this_00;
		}
		return;
	}

	[Token(Token = "0x6002363")]
	[Address(RVA = "0x5927CD0", Offset = "0x5926CD0", VA = "0x5927CD0")]
	private void AssertRendererSet()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$AssertRendererSet): 7 lines keep C-only constructs
		MapObject pMVar1;
		MapScriptBaseObject pMVar2;
		Renderer[] pUVar3;
		Il2CppClass pIVar4;
		Exception __this_00;
		String message;
		MethodInfo lastManagedFrame;
		String* metadataPointer;

		pMVar1 = this.Value;
		if ((pMVar1 == null) ||(pMVar2 = pMVar1.ScriptObject, pMVar2 == null)) {
	label_05a27cfb: ;
			throw new NullReferenceException();
		}
		if (pMVar2.Static == false) {
			pUVar3 = pMVar1.renderCache;
			if (pUVar3 == null) goto label_05a27cfb;
			if (pUVar3.Length != 0) {
				return;
			}
			pIVar4 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_00 = (Exception)il2cpp_codegen_object_new(pIVar4);
			metadataPointer = &"MapObject has no renderer.";
		}
		else {
			pIVar4 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_00 = (Exception)il2cpp_codegen_object_new(pIVar4);
			metadataPointer = &"Property cannot be set on a static MapObject.";
		}
		message = il2cpp_codegen_get_runtime_metadata(metadataPointer);
		__this_00 = new Exception(message);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_AssertRendererSet);
		throw (object)__this_00;
	}

	[Token(Token = "0x6002364")]
	[Address(RVA = "0x592C4F0", Offset = "0x592B4F0", VA = "0x592C4F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$Equals): 2 lines keep C-only constructs
		byte bVar1;
		Il2CppClass pIVar2;

		if (obj == null) {
			pIVar2 = null;
		}
		else {
			bVar1 = (typeof(CustomLogicMapObjectBuiltin)._2).typeHierarchyDepth;
			if (((obj.klass._2).typeHierarchyDepth < bVar1) ||((obj.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicMapObjectBuiltin))) {
				return false;
			}
			pIVar2 = obj[3].klass;
		}
		return (Il2CppClass)this.Value == pIVar2;
	}

	[Token(Token = "0x6002365")]
	[Address(RVA = "0x592C570", Offset = "0x592B570", VA = "0x592C570", Slot = "2")]
	public override int GetHashCode()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$GetHashCode): clean
		MapObject pMVar1;
		MapScriptBaseObject pMVar2;

		pMVar1 = this.Value;
		if ((pMVar1 == null) ||(pMVar2 = pMVar1.ScriptObject, pMVar2 == null)) {
			throw new NullReferenceException();
		}
		return pMVar2.Id;
	}

	[Token(Token = "0x6002366")]
	[Address(RVA = "0x592C590", Offset = "0x592B590", VA = "0x592C590", Slot = "3")]
	public override string ToString()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c (CustomLogic.CustomLogicMapObjectBuiltin$$ToString): clean
		MapObject pMVar1;
		Object __this_00;
		String pSVar2;

		pMVar1 = this.Value;
		if ((pMVar1 == null) ||(__this_00 = (Object)pMVar1.GameObject, __this_00 == null)) {
			throw new NullReferenceException();
		}
		pSVar2 = __this_00.name;
		pSVar2 = String.Concat(pSVar2, " (MapObject)");
		return pSVar2;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicMapObjectBuiltin.c.

	// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass100_0$$.ctor: clean
	private void c__DisplayClass100_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Static");
		__this.Add((Il2CppObject *)"Position");
		__this.Add((Il2CppObject *)"LocalPosition");
		__this.Add((Il2CppObject *)"Rotation");
		__this.Add((Il2CppObject *)"LocalRotation");
		__this.Add((Il2CppObject *)"QuaternionRotation");
		__this.Add((Il2CppObject *)"QuaternionLocalRotation");
		__this.Add((Il2CppObject *)"Forward");
		__this.Add((Il2CppObject *)"Up");
		__this.Add((Il2CppObject *)"Right");
		__this.Add((Il2CppObject *)"Scale");
		__this.Add((Il2CppObject *)"Name");
		__this.Add((Il2CppObject *)"Parent");
		__this.Add((Il2CppObject *)"Active");
		__this.Add((Il2CppObject *)"ActiveInHierarchy");
		__this.Add((Il2CppObject *)"Transform");
		__this.Add((Il2CppObject *)"HasRenderer");
		__this.Add((Il2CppObject *)"Color");
		__this.Add((Il2CppObject *)"TextureTilingX");
		__this.Add((Il2CppObject *)"TextureTilingY");
		__this.Add((Il2CppObject *)"TextureOffsetX");
		__this.Add((Il2CppObject *)"TextureOffsetY");
		__this.Add((Il2CppObject *)"ID");
		__this.Add((Il2CppObject *)"Tag");
		__this.Add((Il2CppObject *)"Layer");
		__this.Add((Il2CppObject *)"Rigidbody");
		__this.Add((Il2CppObject *)"NetworkView");
		__this.Add((Il2CppObject *)"AddComponent");
		__this.Add((Il2CppObject *)"RemoveComponent");
		__this.Add((Il2CppObject *)"GetComponent");
		__this.Add((Il2CppObject *)"GetUnityComponent");
		__this.Add((Il2CppObject *)"SetComponentEnabled");
		__this.Add((Il2CppObject *)"SetComponentsEnabled");
		__this.Add((Il2CppObject *)"AddSphereCollider");
		__this.Add((Il2CppObject *)"AddBoxCollider");
		__this.Add((Il2CppObject *)"SetCollideWith");
		__this.Add((Il2CppObject *)"SetCollideMode");
		__this.Add((Il2CppObject *)"AddSphereTarget");
		__this.Add((Il2CppObject *)"AddBoxTarget");
		__this.Add((Il2CppObject *)"GetChild");
		__this.Add((Il2CppObject *)"GetChildren");
		__this.Add((Il2CppObject *)"GetTransform");
		__this.Add((Il2CppObject *)"SetColorAll");
		__this.Add((Il2CppObject *)"InBounds");
		__this.Add((Il2CppObject *)"GetBoundsAverageCenter");
		__this.Add((Il2CppObject *)"GetBoundsCenter");
		__this.Add((Il2CppObject *)"GetBoundsSize");
		__this.Add((Il2CppObject *)"GetBoundsMin");
		__this.Add((Il2CppObject *)"GetBoundsMax");
		__this.Add((Il2CppObject *)"GetBoundsExtents");
		__this.Add((Il2CppObject *)"GetCorners");
		__this.Add((Il2CppObject *)"HasTag");
		__this.Add((Il2CppObject *)"AddBuiltinComponent");
		__this.Add((Il2CppObject *)"AddRigidbody");
		__this.Add((Il2CppObject *)"GetBuiltinComponent");
		__this.Add((Il2CppObject *)"RemoveBuiltinComponent");
		__this.Add((Il2CppObject *)"ConvertToCSV");
		CustomLogicMapObjectBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Static>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Static_g____getter_2_0(CustomLogicMapObjectBuiltin __i)
	{
		MapObject pMVar1;
		object pIVar2;

		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(pMVar1.ScriptObject == null)) {
			throw new NullReferenceException();
		}
		return pIVar2;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Position_g____getter_3_0(CustomLogicMapObjectBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Position;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__Position_g____setter_3_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		MapObject pMVar1;
		GameObject __this;
		CustomLogicVector3Builtin pCVar2;
		Transform __this_00;

		pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (((__i != null) &&(pMVar1 = __i.Value, pMVar1 != null)) &&(__this = pMVar1.GameObject, __this != null)) {
			__this_00 = __this.transform;
			if ((pCVar2 != null) &&(__this_00 != null)) {
				__this_00.position = (Vector3)pCVar2.Value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__LocalPosition>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__LocalPosition_g____getter_4_0(CustomLogicMapObjectBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.LocalPosition;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__LocalPosition>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__LocalPosition_g____setter_4_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		MapObject pMVar1;
		GameObject __this;
		CustomLogicVector3Builtin pCVar2;
		Transform __this_00;

		pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (((__i != null) &&(pMVar1 = __i.Value, pMVar1 != null)) &&(__this = pMVar1.GameObject, __this != null)) {
			__this_00 = __this.transform;
			if ((pCVar2 != null) &&(__this_00 != null)) {
				__this_00.localPosition = (Vector3)pCVar2.Value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Rotation_g____getter_5_0(CustomLogicMapObjectBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Rotation;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__Rotation_g____setter_5_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		uint uVar1;
		uint uVar2;
		MapObject pMVar3;
		GameObject __this;
		float fVar4;
		float fVar5;
		CustomLogicVector3Builtin pCVar6;
		Transform __this_00;
		Quaternion value;
		Vector3 UStack_20;

		pCVar6 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if ((__i != null) &&(pCVar6 != null)) {
			fVar4 = pCVar6.Value.x;
			fVar5 = pCVar6.Value.y;
			__i._internalRotation.z = pCVar6.Value.z;
			__i._internalRotation.x = fVar4;
			__i._internalRotation.y = fVar5;
			__i._needSetRotation = false;
			pMVar3 = __i.Value;
			if ((pMVar3 != null) &&(__this = pMVar3.GameObject, __this != null)) {
				__this_00 = __this.transform;
				uVar1 = __i._internalRotation.x;
				uVar2 = __i._internalRotation.y;
				UStack_20.x = (float)uVar1 * 0.017453292;
				UStack_20.y = (float)uVar2 * 0.017453292;
				UStack_20.z = __i._internalRotation.z * 0.017453292;
				value = Quaternion.Internal_FromEulerRad(ref UStack_20);
				if (__this_00 != null) {
					__this_00.rotation = value;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__LocalRotation>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__LocalRotation_g____getter_6_0(CustomLogicMapObjectBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.LocalRotation;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__LocalRotation>g____setter|6_1: clean
	private static void Bindings____CreatePropertyBinding__LocalRotation_g____setter_6_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		uint uVar1;
		uint uVar2;
		MapObject pMVar3;
		GameObject __this;
		float fVar4;
		float fVar5;
		CustomLogicVector3Builtin pCVar6;
		Transform __this_00;
		Quaternion value;
		Vector3 UStack_20;

		pCVar6 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if ((__i != null) &&(pCVar6 != null)) {
			fVar4 = pCVar6.Value.x;
			fVar5 = pCVar6.Value.y;
			__i._internalLocalRotation.z = pCVar6.Value.z;
			__i._internalLocalRotation.x = fVar4;
			__i._internalLocalRotation.y = fVar5;
			__i._needSetLocalRotation = false;
			pMVar3 = __i.Value;
			if ((pMVar3 != null) &&(__this = pMVar3.GameObject, __this != null)) {
				__this_00 = __this.transform;
				uVar1 = __i._internalLocalRotation.x;
				uVar2 = __i._internalLocalRotation.y;
				UStack_20.x = (float)uVar1 * 0.017453292;
				UStack_20.y = (float)uVar2 * 0.017453292;
				UStack_20.z = __i._internalLocalRotation.z * 0.017453292;
				value = Quaternion.Internal_FromEulerRad(ref UStack_20);
				if (__this_00 != null) {
					__this_00.localRotation = value;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__QuaternionRotation_g____getter_7_0(CustomLogicMapObjectBuiltin __i)
	{
		CustomLogicQuaternionBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.QuaternionRotation;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____setter|7_1: clean
	private static void Bindings____CreatePropertyBinding__QuaternionRotation_g____setter_7_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		MapObject pMVar1;
		GameObject __this;
		CustomLogicQuaternionBuiltin pCVar2;
		Transform __this_00;

		pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__v);
		if (((__i != null) &&(pMVar1 = __i.Value, pMVar1 != null)) &&(__this = pMVar1.GameObject, __this != null)) {
			__this_00 = __this.transform;
			if ((pCVar2 != null) &&(__this_00 != null)) {
				__this_00.rotation = (Quaternion)pCVar2.Value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionLocalRotation>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__QuaternionLocalRotation_g____getter_8_0(CustomLogicMapObjectBuiltin __i)
	{
		CustomLogicQuaternionBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.QuaternionLocalRotation;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionLocalRotation>g____setter|8_1: clean
	private static void Bindings____CreatePropertyBinding__QuaternionLocalRotation_g____setter_8_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		MapObject pMVar1;
		GameObject __this;
		CustomLogicQuaternionBuiltin pCVar2;
		Transform __this_00;

		pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__v);
		if (((__i != null) &&(pMVar1 = __i.Value, pMVar1 != null)) &&(__this = pMVar1.GameObject, __this != null)) {
			__this_00 = __this.transform;
			if ((pCVar2 != null) &&(__this_00 != null)) {
				__this_00.localRotation = (Quaternion)pCVar2.Value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__Forward_g____getter_9_0(CustomLogicMapObjectBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Forward;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____setter|9_1: clean
	private static void Bindings____CreatePropertyBinding__Forward_g____setter_9_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		MapObject pMVar1;
		GameObject __this;
		CustomLogicVector3Builtin pCVar2;
		Transform __this_00;

		pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (((__i != null) &&(pMVar1 = __i.Value, pMVar1 != null)) &&(__this = pMVar1.GameObject, __this != null)) {
			__this_00 = __this.transform;
			if ((pCVar2 != null) &&(__this_00 != null)) {
				__this_00.forward = (Vector3)pCVar2.Value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__Up_g____getter_10_0(CustomLogicMapObjectBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Up;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____setter|10_1: clean
	private static void Bindings____CreatePropertyBinding__Up_g____setter_10_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		MapObject pMVar1;
		GameObject __this;
		CustomLogicVector3Builtin pCVar2;
		Transform __this_00;

		pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (((__i != null) &&(pMVar1 = __i.Value, pMVar1 != null)) &&(__this = pMVar1.GameObject, __this != null)) {
			__this_00 = __this.transform;
			if ((pCVar2 != null) &&(__this_00 != null)) {
				__this_00.up = (Vector3)pCVar2.Value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__Right_g____getter_11_0(CustomLogicMapObjectBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Right;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____setter|11_1: clean
	private static void Bindings____CreatePropertyBinding__Right_g____setter_11_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		MapObject pMVar1;
		GameObject __this;
		CustomLogicVector3Builtin pCVar2;
		Transform __this_00;

		pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (((__i != null) &&(pMVar1 = __i.Value, pMVar1 != null)) &&(__this = pMVar1.GameObject, __this != null)) {
			__this_00 = __this.transform;
			if ((pCVar2 != null) &&(__this_00 != null)) {
				__this_00.right = (Vector3)pCVar2.Value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____getter|12_0: 14 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Scale_g____getter_12_0(CustomLogicMapObjectBuiltin __i)
	{
		uint uVar1;
		uint uVar2;
		MapObject pMVar3;
		GameObject __this;
		byte[] auVar4 = new byte[16];
		Transform __this_00;
		CustomLogicVector3Builtin __this_01;
		ulong extraout_XMM0_Qb;
		byte[] auVar5 = new byte[16];
		Vector3 UVar6;
		ulong local_18;

		if (__i != null) {
			pMVar3 = __i.Value;
			if ((pMVar3 != null) &&(__this = pMVar3.GameObject, __this != null)) {
				__this_00 = __this.transform;
				if (__this_00 != null) {
					UVar6 = __this_00.localScale;
					auVar5._0_8_ = UVar6._0_8_;
					auVar5._8_8_ = extraout_XMM0_Qb;
					pMVar3 = __i.Value;
					if (pMVar3 != null) {
						uVar1 = pMVar3.BaseScale.x;
						uVar2 = pMVar3.BaseScale.y;
						auVar4._4_4_ = uVar2;
						auVar4._0_4_ = uVar1;
						auVar4._8_8_ = 0;
						auVar5 = divps(auVar5, auVar4);
						UVar6.z = UVar6.z / pMVar3.BaseScale.z;
						__this_01 = il2cpp_codegen_object_new(typeof(CustomLogicVector3Builtin)) ;
						local_18._0_4_ = auVar5._0_4_;
						local_18._4_4_ = auVar5._4_4_;
						UVar6.x = (float)(undefined4)local_18;
						UVar6.y = (float)local_18._4_4_;
						__this_01 = new CustomLogicVector3Builtin(UVar6);
						return (object)__this_01;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____setter|12_1: clean
	private static void Bindings____CreatePropertyBinding__Scale_g____setter_12_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		CustomLogicVector3Builtin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Scale = value;
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__Name_g____getter_13_0(CustomLogicMapObjectBuiltin __i)
	{
		MapObject pMVar1;
		MapScriptBaseObject pMVar2;

		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(pMVar2 = pMVar1.ScriptObject, pMVar2 == null)) {
			throw new NullReferenceException();
		}
		return (object)pMVar2.Name;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Parent>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__Parent_g____getter_14_0(CustomLogicMapObjectBuiltin __i)
	{
		object pIVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Parent>g____setter|14_1: clean
	private static void Bindings____CreatePropertyBinding__Parent_g____setter_14_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		object value;

		value = CustomLogicEvaluator.ConvertTo<object>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Parent = value;
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Active>g____getter|15_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Active_g____getter_15_0(CustomLogicMapObjectBuiltin __i)
	{
		MapObject pMVar1;
		GameObject __this;
		bool bVar2;
		ulong in_RAX;
		object pIVar3;
		ulong uStack_8;

		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(__this = pMVar1.GameObject, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar2 = __this.activeSelf;
		uStack_8 = CONCAT17(bVar2, (undefined7)uStack_8);
		pIVar3 = (object)(((long)&uStack_8 + 7));
		return pIVar3;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Active>g____setter|15_1: clean
	private static void Bindings____CreatePropertyBinding__Active_g____setter_15_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		MapObject pMVar1;
		GameObject __this;
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(__this = pMVar1.GameObject, __this == null)) {
			throw new NullReferenceException();
		}
		__this.SetActive(value);
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__ActiveInHierarchy>g____getter|16_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__ActiveInHierarchy_g____getter_16_0(CustomLogicMapObjectBuiltin __i)
	{
		MapObject pMVar1;
		GameObject __this;
		bool bVar2;
		ulong in_RAX;
		object pIVar3;
		ulong uStack_8;

		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(__this = pMVar1.GameObject, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar2 = __this.activeInHierarchy;
		uStack_8 = CONCAT17(bVar2, (undefined7)uStack_8);
		pIVar3 = (object)(((long)&uStack_8 + 7));
		return pIVar3;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Transform>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__Transform_g____getter_17_0(CustomLogicMapObjectBuiltin __i)
	{
		MapObject pMVar1;
		GameObject __this;
		Transform transform;
		CustomLogicTransformBuiltin __this_00;

		if (__i != null) {
			pMVar1 = __i.Value;
			if ((pMVar1 != null) &&(__this = pMVar1.GameObject, __this != null)) {
				transform = __this.transform;
				__this_00 = new CustomLogicTransformBuiltin(transform);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__HasRenderer>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__HasRenderer_g____getter_18_0(CustomLogicMapObjectBuiltin __i)
	{
		MapObject pMVar1;
		object pIVar2;

		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(pMVar1.renderCache == null)) {
			throw new NullReferenceException();
		}
		return pIVar2;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Color>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__Color_g____getter_19_0(CustomLogicMapObjectBuiltin __i)
	{
		CustomLogicColorBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Color;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Color>g____setter|19_1: clean
	private static void Bindings____CreatePropertyBinding__Color_g____setter_19_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		CustomLogicColorBuiltin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Color = value;
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureTilingX>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__TextureTilingX_g____getter_20_0(CustomLogicMapObjectBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.TextureTilingX;
		return pIVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureTilingX>g____setter|20_1: clean
	private static void Bindings____CreatePropertyBinding__TextureTilingX_g____setter_20_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.TextureTilingX = value;
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureTilingY>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__TextureTilingY_g____getter_21_0(CustomLogicMapObjectBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.TextureTilingY;
		return pIVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureTilingY>g____setter|21_1: clean
	private static void Bindings____CreatePropertyBinding__TextureTilingY_g____setter_21_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.TextureTilingY = value;
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureOffsetX>g____getter|22_0: clean
	private static object Bindings____CreatePropertyBinding__TextureOffsetX_g____getter_22_0(CustomLogicMapObjectBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.TextureOffsetX;
		return pIVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureOffsetX>g____setter|22_1: clean
	private static void Bindings____CreatePropertyBinding__TextureOffsetX_g____setter_22_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.TextureOffsetX = value;
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureOffsetY>g____getter|23_0: clean
	private static object Bindings____CreatePropertyBinding__TextureOffsetY_g____getter_23_0(CustomLogicMapObjectBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.TextureOffsetY;
		return pIVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureOffsetY>g____setter|23_1: clean
	private static void Bindings____CreatePropertyBinding__TextureOffsetY_g____setter_23_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.TextureOffsetY = value;
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__ID>g____getter|24_0: clean
	private static object Bindings____CreatePropertyBinding__ID_g____getter_24_0(CustomLogicMapObjectBuiltin __i)
	{
		MapObject pMVar1;
		object pIVar2;
		byte[] auStack_4 = new byte[4];

		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(pMVar1.ScriptObject == null)) {
			throw new NullReferenceException();
		}
		return pIVar2;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Tag>g____getter|25_0: clean
	private static object Bindings____CreatePropertyBinding__Tag_g____getter_25_0(CustomLogicMapObjectBuiltin __i)
	{
		MapObject pMVar1;
		GameObject __this;
		String pSVar2;

		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(__this = pMVar1.GameObject, __this == null)) {
			throw new NullReferenceException();
		}
		pSVar2 = __this.tag;
		return (object)pSVar2;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Tag>g____setter|25_1: clean
	private static void Bindings____CreatePropertyBinding__Tag_g____setter_25_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		MapObject obj;
		String tag;

		tag = CustomLogicEvaluator.ConvertTo<string>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		obj = __i.Value;
		MapLoader.RegisterTag(tag, obj);
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Layer>g____getter|26_0: clean
	private static object Bindings____CreatePropertyBinding__Layer_g____getter_26_0(CustomLogicMapObjectBuiltin __i)
	{
		MapObject pMVar1;
		GameObject __this;
		object pIVar2;
		byte[] auStack_4 = new byte[4];

		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(__this = pMVar1.GameObject, __this == null)) {
			throw new NullReferenceException();
		}
		__this.layer;
		return pIVar2;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Layer>g____setter|26_1: clean
	private static void Bindings____CreatePropertyBinding__Layer_g____setter_26_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		MapObject pMVar1;
		GameObject __this;
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (((__i == null) ||(pMVar1 = __i.Value, pMVar1 == null)) ||(__this = pMVar1.GameObject, __this == null)) {
			throw new NullReferenceException();
		}
		__this.layer = value;
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Rigidbody>g____getter|27_0: clean
	private static object Bindings____CreatePropertyBinding__Rigidbody_g____getter_27_0(CustomLogicMapObjectBuiltin __i)
	{
		if (__i == null) {
			throw new NullReferenceException();
		}
		return (object)__i._rigidBody;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__NetworkView>g____getter|28_0: clean
	private static object Bindings____CreatePropertyBinding__NetworkView_g____getter_28_0(CustomLogicMapObjectBuiltin __i)
	{
		if (__i == null) {
			throw new NullReferenceException();
		}
		return (object)__i._NetworkView_k__BackingField;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__NetworkView>g____setter|28_1: clean
	private static void Bindings____CreatePropertyBinding__NetworkView_g____setter_28_1(CustomLogicMapObjectBuiltin __i, object __v)
	{
		CustomLogicNetworkViewBuiltin pCVar1;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicNetworkViewBuiltin>(__v) ;
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i._NetworkView_k__BackingField = pCVar1;
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicMapObjectBuiltin.Bindings.c();
		CustomLogicMapObjectBuiltin.Bindings.c.__9 =(CustomLogicMapObjectBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddComponent>b__29_0: clean
	private object Bindings_c____CreateMethodBinding__AddComponent_b__29_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object obj;
		CustomLogicEvaluator __this_00;
		String componentName;
		CustomLogicComponentInstance pCVar2;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			componentName = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c != null) {
				if (Il2CppMethodInitialized_07546076 == false) {
					Il2CppMethodInitialized_07546076 = true;
					uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
					__this_00 = CustomLogicManager.Evaluator;
				}
				else {
					__this_00 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
				}
				if (__this_00 != null) {
					pCVar2 = __this_00.AddMapObjectComponent(__c.Value, componentName);
					return (object)pCVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveComponent>b__30_0: clean
	private object Bindings_c____CreateMethodBinding__RemoveComponent_b__30_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		object obj;
		String name;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c != null) {
				__c.RemoveComponent(name);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetComponent>b__31_0: clean
	private object Bindings_c____CreateMethodBinding__GetComponent_b__31_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		object obj;
		MapObject __this_00;
		String name;
		CustomLogicComponentInstance pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				pCVar1 = __this_00.FindComponentInstance(name);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetUnityComponent>b__32_0: clean
	private object Bindings_c____CreateMethodBinding__GetUnityComponent_b__32_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		object obj;
		String name;
		BuiltinComponentInstance pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c != null) {
				pCVar1 = CustomLogicUnityComponentManager.GetUnityComponentByNameWithMapObjectOwner(__c, name);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetComponentEnabled>b__33_0: clean
	private object Bindings_c____CreateMethodBinding__SetComponentEnabled_b__33_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		object obj;
		bool enabled;
		String name;

		if (__a == null) {
	label_05a334e2: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				enabled = CustomLogicEvaluator.ConvertTo<bool>(__a[1]);
				if (__c != null) {
					__c.SetComponentEnabled(name, enabled);
					return null;
				}
				goto label_05a334e2;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetComponentsEnabled>b__34_0: clean
	private object Bindings_c____CreateMethodBinding__SetComponentsEnabled_b__34_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
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
				__c.SetComponentsEnabled(enabled);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddSphereCollider>b__35_0: clean
	private object Bindings_c____CreateMethodBinding__AddSphereCollider_b__35_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		object obj;
		String collideMode;
		String collideWith;
		CustomLogicVector3Builtin center;
		float radius;

		if (__a == null) {
	label_05a3368c: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			collideMode = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				collideWith = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (2 < (uint)__a.Length) {
					center = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[2]);
					if ((__a.Length & 0xfffffffc) != 0) {
						radius = CustomLogicEvaluator.ConvertTo<float>(__a[3]);
						if (__c != null) {
							__c.AddSphereCollider(collideMode, collideWith, center, radius);
							return null;
						}
						goto label_05a3368c;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddBoxCollider>b__36_0: clean
	private object Bindings_c____CreateMethodBinding__AddBoxCollider_b__36_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		object pIVar1;
		String collideMode;
		String collideWith;
		CustomLogicVector3Builtin center;
		CustomLogicVector3Builtin size;

		if (__a == null) {
	label_05a337e4: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			collideMode = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				collideWith = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if ((int)__a.Length < 3) {
					center = null;
					size = null;
				}
				else {
					pIVar1 = __a[2];
					center = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar1);
					if ((int)__a.Length < 4) {
						size = null;
					}
					else {
						pIVar1 = __a[3];
						size = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar1);
					}
				}
				if (__c != null) {
					__c.AddBoxCollider(collideMode, collideWith, center, size) ;
					return null;
				}
				goto label_05a337e4;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCollideWith>b__37_0: clean
	private object Bindings_c____CreateMethodBinding__SetCollideWith_b__37_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		object obj;
		String collideWith;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			collideWith = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c != null) {
				__c.SetCollideWith(collideWith);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCollideMode>b__38_0: clean
	private object Bindings_c____CreateMethodBinding__SetCollideMode_b__38_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		object obj;
		String collideMode;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			collideMode = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c != null) {
				__c.SetCollideMode(collideMode);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddSphereTarget>b__39_0: clean
	private object Bindings_c____CreateMethodBinding__AddSphereTarget_b__39_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		object obj;
		String team;
		CustomLogicVector3Builtin center;
		CustomLogicMapTargetableBuiltin pCVar1;
		float radius;

		if (__a == null) {
	label_05a339fd: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			team = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				center = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					radius = CustomLogicEvaluator.ConvertTo<float>(__a[2]) ;
					if (__c != null) {
						pCVar1 = __c.AddSphereTarget(team, center, radius);
						return (object)pCVar1;
					}
					goto label_05a339fd;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddBoxTarget>b__40_0: clean
	private object Bindings_c____CreateMethodBinding__AddBoxTarget_b__40_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		object obj;
		String team;
		CustomLogicVector3Builtin center;
		CustomLogicVector3Builtin size;
		CustomLogicMapTargetableBuiltin pCVar1;

		if (__a == null) {
	label_05a33aee: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			team = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				center = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					size = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[2]);
					if (__c != null) {
						pCVar1 = __c.AddBoxTarget(team, center, size);
						return (object)pCVar1;
					}
					goto label_05a33aee;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetChild>b__41_0: clean
	private object Bindings_c____CreateMethodBinding__GetChild_b__41_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		object obj;
		String name;
		CustomLogicMapObjectBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c != null) {
				pCVar1 = __c.GetChild(name);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetChildren>b__42_0: clean
	private object Bindings_c____CreateMethodBinding__GetChildren_b__42_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		CustomLogicListBuiltin pCVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __c.GetChildren();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransform>b__43_0: clean
	private object Bindings_c____CreateMethodBinding__GetTransform_b__43_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
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

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetColorAll>b__44_0: clean
	private object Bindings_c____CreateMethodBinding__SetColorAll_b__44_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicColorBuiltin color;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			color = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(obj);
			if (__c != null) {
				__c.SetColorAll(color);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__InBounds>b__45_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__InBounds_b__45_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		bool bVar1;
		ulong in_RAX;
		CustomLogicVector3Builtin position;
		object pIVar2;
		ulong uStack_18;

		uStack_18 = in_RAX;
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar2);
			if (__c != null) {
				bVar1 = __c.InBounds(position);
				uStack_18 = CONCAT17(bVar1, (undefined7)uStack_18);
				pIVar2 = (object)(((long)&uStack_18 + 7));
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsAverageCenter>b__46_0: clean
	private object Bindings_c____CreateMethodBinding__GetBoundsAverageCenter_b__46_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __c.GetBoundsAverageCenter();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsCenter>b__47_0: clean
	private object Bindings_c____CreateMethodBinding__GetBoundsCenter_b__47_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __c.GetBoundsCenter();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsSize>b__48_0: clean
	private object Bindings_c____CreateMethodBinding__GetBoundsSize_b__48_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __c.GetBoundsSize();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsMin>b__49_0: clean
	private object Bindings_c____CreateMethodBinding__GetBoundsMin_b__49_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __c.GetBoundsMin();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsMax>b__50_0: clean
	private object Bindings_c____CreateMethodBinding__GetBoundsMax_b__50_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __c.GetBoundsMax();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsExtents>b__51_0: clean
	private object Bindings_c____CreateMethodBinding__GetBoundsExtents_b__51_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __c.GetBoundsExtents();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetCorners>b__52_0: clean
	private object Bindings_c____CreateMethodBinding__GetCorners_b__52_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		CustomLogicListBuiltin pCVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __c.GetCorners();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__HasTag>b__53_0: clean
	private object Bindings_c____CreateMethodBinding__HasTag_b__53_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		MapObject obj;
		String tag;
		object pIVar1;
		byte uStack_19;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			tag = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if (__c != null) {
				obj = __c.Value;
				uStack_19 = MapLoader.HasTag(obj, tag);
				pIVar1 = (object)uStack_19;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddBuiltinComponent>b__54_0: clean
	private object Bindings_c____CreateMethodBinding__AddBuiltinComponent_b__54_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		String name;
		object pIVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if (__c != null) {
				pIVar1 = __c.AddBuiltinComponent(name);
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddRigidbody>b__55_0: clean
	private object Bindings_c____CreateMethodBinding__AddRigidbody_b__55_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		CustomLogicRigidbodyBuiltin pCVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __c.AddRigidbody();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBuiltinComponent>b__56_0: 1 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__GetBuiltinComponent_b__56_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		object obj;
		Dictionary<object, object> pSVar1;
		bool bVar2;
		String key;
		BuiltinComponentInstance pCVar3;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			key = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c != null) {
				if (Il2CppMethodInitialized_0754608e == false) {
					il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Item) ;
					Il2CppMethodInitialized_0754608e = true;
				}
				pSVar1 = (Dictionary<object, object>)__c._builtinCache;
				if (pSVar1 != null) {
					bVar2 = pSVar1.ContainsKey((object)key);
					if (!bVar2) {
						return null;
					}
					pSVar1 = (Dictionary<object, object>)__c._builtinCache;
					if (pSVar1 != null) {
						pCVar3 = pSVar1.get_Item((object)key);
						return (object)pCVar3;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveBuiltinComponent>b__57_0: clean
	private object Bindings_c____CreateMethodBinding__RemoveBuiltinComponent_b__57_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		object obj;
		String name;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c != null) {
				__c.RemoveBuiltinComponent(name);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__ConvertToCSV>b__58_0: clean
	private object Bindings_c____CreateMethodBinding__ConvertToCSV_b__58_0(CustomLogicMapObjectBuiltin __c, Object[] __a)
	{
		MapObject pMVar1;
		MapScriptBaseObject pMVar2;
		String pSVar3;

		if (((__c == null) ||(pMVar1 = __c.Value, pMVar1 == null)) ||(pMVar2 = pMVar1.ScriptObject, pMVar2 == null)) {
			throw new NullReferenceException();
		}
		pSVar3 = pMVar2.Serialize();
		return (object)pSVar3;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new CustomLogicMapObjectBuiltin.c();
		CustomLogicMapObjectBuiltin.c.__9 =(CustomLogicMapObjectBuiltin.c)__this;
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.<>c$$<GetCorners>b__100_1: clean
	private CustomLogicVector3Builtin c__GetCorners_b__100_1(Vector3 v)
	{
		CustomLogicVector3Builtin __this_00;

		__this_00 = new CustomLogicVector3Builtin(v);
		return __this_00;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass100_0$$<GetCorners>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass100_0__GetCorners_b__0(int signX)
	{
		List<int> __this_00;
		CustomLogicMapObjectBuiltin.c__DisplayClass100_1 __this_01;
		Action<T> action;

		__this_01 = il2cpp_codegen_object_new(typeof(CustomLogicMapObjectBuiltin.c__DisplayClass100_1)) ;
		__this_01 = new Object();
		if (__this_01 != null) {
			__this_01.CS___8__locals1 = this;
			__this_01.signX = signX;
			__this_00 = this.signs;
			action = new Action<int>((object)__this_01, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_1_GetCorners_b__2);
			if (__this_00 != null) {
				__this_00.ForEach(action);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass100_1$$.ctor: clean
	private void c__DisplayClass100_1__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass100_1$$<GetCorners>b__2: 2 lines keep C-only constructs
	private void c__DisplayClass100_1__GetCorners_b__2(int signY)
	{
		CustomLogicMapObjectBuiltin.c__DisplayClass100_0 pCVar1;
		List<int> __this_00;
		CustomLogicMapObjectBuiltin.c__DisplayClass100_2 __this_01;
		Action<T> action;

		__this_01 = il2cpp_codegen_object_new(typeof(CustomLogicMapObjectBuiltin.c__DisplayClass100_2)) ;
		__this_01 = new Object();
		if (__this_01 != null) {
			__this_01.CS___8__locals2 = this;
			__this_01.signY = signY;
			pCVar1 = this.CS___8__locals1;
			if (pCVar1 != null) {
				__this_00 = pCVar1.signs;
				action = new Action<int>((object)__this_01, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_2_GetCorners_b__3);
				if (__this_00 != null) {
					__this_00.ForEach(action);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass100_2$$.ctor: clean
	private void c__DisplayClass100_2__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass100_2$$<GetCorners>b__3: 2 lines keep C-only constructs
	private void c__DisplayClass100_2__GetCorners_b__3(int signZ)
	{
		int piVar1;
		int iVar2;
		int iVar3;
		float fVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		CustomLogicMapObjectBuiltin.c__DisplayClass100_1 pCVar8;
		CustomLogicMapObjectBuiltin.c__DisplayClass100_0 pCVar9;
		CustomLogicListBuiltin pCVar10;
		Component __this_00;
		List<object> __this_01;
		BoxCollider __this_02;
		Object[] pSVar11;
		Transform __this_03;
		CustomLogicVector3Builtin __this_04;
		Vector3 UVar13;
		Vector3 position;

		pCVar8 = this.CS___8__locals2;
		if ((((pCVar8 != null) &&(pCVar9 = pCVar8.CS___8__locals1, pCVar9 != null)) &&(pCVar10 = pCVar9.result, pCVar10 != null)) &&(__this_00 = (Component)pCVar9.boxCollider, __this_00 != null)) {
			uVar5 = pCVar9.size.x;
			uVar6 = pCVar9.size.y;
			iVar2 = this.signY;
			iVar3 = pCVar8.signX;
			fVar4 = pCVar9.size.z;
			__this_01 = pCVar10.List;
			__this_03 = __this_00.transform;
			pCVar8 = this.CS___8__locals2;
			if (((pCVar8 != null) &&(pCVar9 = pCVar8.CS___8__locals1, pCVar9 != null)) &&(__this_02 = pCVar9.boxCollider, __this_02 != null)) {
				UVar13 = __this_02.center;
				if (__this_03 != null) {
					position.y = (float)uVar6 * (float)iVar2 * 0.5 + UVar13.y;
					position.x = (float)uVar5 * (float)iVar3 * 0.5 + UVar13.x;
					position.z = (float)signZ * fVar4 * 0.5 + UVar13.z;
					UVar13 = __this_03.TransformPoint(position);
					__this_04 = new CustomLogicVector3Builtin(UVar13);
					if (__this_01 != null) {
						piVar1 = &__this_01._version;
						*piVar1 = *piVar1 + 1;
						pSVar11 = __this_01._items;
						if (pSVar11 != null) {
							uVar7 = __this_01._size;
							if (uVar7 < (uint)pSVar11.Length) {
								__this_01._size = uVar7 + 1;
								pSVar11[(int)uVar7] = (object)__this_04;
								return;
							}
							__this_01.AddWithResize((object)__this_04);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
