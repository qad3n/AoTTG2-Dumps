// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicRigidbodyBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20004A9")]
[CompilerGenerated]
internal class CustomLogicRigidbodyBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x20004AA")]
	public static class Factory
	{
		[Token(Token = "0x6002018")]
		[Address(RVA = "0x5904FC0", Offset = "0x5903FC0", VA = "0x5904FC0")]
		public static CustomLogicRigidbodyBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicRigidbodyBuiltin __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicRigidbodyBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this._isGravityEnabled = true;
			__this = new CustomLogicRigidbodyBuiltin(null);
			return __this;
		}
	}

	[Token(Token = "0x20004AB")]
	public static class Bindings
	{
		[Token(Token = "0x40016C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002019")]
		[Address(RVA = "0x59050B0", Offset = "0x59040B0", VA = "0x59050B0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> pCVar3;
			CLMethodBinding<CustomLogicRigidbodyBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x7c2c901f) {
				if (uVar2 < 0x296dba08) {
					if (uVar2 < 0x52d43e6) {
						if (uVar2 == 0x232777f) {
							bVar1 = (name == "Rotation");
							if (bVar1) {
								pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__Rotation();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x3e7cf43) {
							bVar1 = (name == "DetectCollisions");
							if (bVar1) {
								pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__DetectCollisions();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x52d43e5) {
							bVar1 = (name == "Gravity");
							if (bVar1) {
								pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__Gravity();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 < 0x1d76f31c) {
						if (uVar2 == 0x1203e3e7) {
							bVar1 = (name == "FreezeAllPositions");
							if (bVar1) {
								pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__FreezeAllPositions();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1d76f31b) {
							bVar1 = (name == "FreezeZPosition");
							if (bVar1) {
								pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__FreezeZPosition();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x27ecd5e6) {
						bVar1 = (name == "FreezeYPosition");
						if (bVar1) {
							pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__FreezeYPosition();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x296dba07) {
						bVar1 = (name == "AddForce");
						if (bVar1) {
							pCVar4 = CustomLogicRigidbodyBuiltin.Bindings.__CreateMethodBinding__AddForce();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0x56356722) {
					if (uVar2 < 0x465862f2) {
						if (uVar2 == 0x3d3a1210) {
							bVar1 = (name == "Interpolate");
							if (bVar1) {
								pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__Interpolate();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x465862f1) {
							bVar1 = (name == "Mass");
							if (bVar1) {
								pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__Mass();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x46697e49) {
						bVar1 = (name == "FreezeXPosition");
						if (bVar1) {
							pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__FreezeXPosition();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x56356721) {
						bVar1 = (name == "CenterOfMass");
						if (bVar1) {
							pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__CenterOfMass();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x71a328af) {
					if (uVar2 == 0x6c6bed72) {
						bVar1 = (name == "UseGravity");
						if (bVar1) {
							pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__UseGravity();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x71a328ae) {
						bVar1 = (name == "FreezeZRotation");
						if (bVar1) {
							pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__FreezeZRotation();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x72ce1443) {
					bVar1 = (name == "FreezeYRotation");
					if (bVar1) {
						pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__FreezeYRotation();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x7c2c901e) {
					bVar1 = (name == "AngularVelocity");
					if (bVar1) {
						pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__AngularVelocity();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xa2d06ea8) {
				if (uVar2 < 0x847c6253) {
					if (uVar2 < 0x835a3f57) {
						if (uVar2 == 0x835a3f56) {
							bVar1 = (name == "IsKinematic");
							if (bVar1) {
								pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__IsKinematic();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x7f2c2a34) {
							bVar1 = (name == "Move");
							if (bVar1) {
								pCVar4 = CustomLogicRigidbodyBuiltin.Bindings.__CreateMethodBinding__Move();
								return (ICLMemberBinding)pCVar4;
							}
						}
					}
					else if (uVar2 == 0x845e0946) {
						bVar1 = (name == "AddExplosionForce");
						if (bVar1) {
							pCVar4 = CustomLogicRigidbodyBuiltin.Bindings.__CreateMethodBinding__AddExplosionForce();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x847c6252) {
						bVar1 = (name == "MoveRotation");
						if (bVar1) {
							pCVar4 = CustomLogicRigidbodyBuiltin.Bindings.__CreateMethodBinding__MoveRotation();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0x85284035) {
					if (uVar2 == 0x84e08377) {
						bVar1 = (name == "SweepTest");
						if (bVar1) {
							pCVar4 = CustomLogicRigidbodyBuiltin.Bindings.__CreateMethodBinding__SweepTest();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x85284034) {
						bVar1 = (name == "PublishTransform");
						if (bVar1) {
							pCVar4 = CustomLogicRigidbodyBuiltin.Bindings.__CreateMethodBinding__PublishTransform();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 == 0x9b22be74) {
					bVar1 = (name == "Owner");
					if (bVar1) {
						pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__Owner();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xa2d06ea7) {
					bVar1 = (name == "MovePosition");
					if (bVar1) {
						pCVar4 = CustomLogicRigidbodyBuiltin.Bindings.__CreateMethodBinding__MovePosition();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xd9849708) {
				if (uVar2 < 0xc7889b05) {
					if (uVar2 == 0xba408252) {
						bVar1 = (name == "Velocity");
						if (bVar1) {
							pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__Velocity();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xc7889b04) {
						bVar1 = (name == "ResetCenterOfMass");
						if (bVar1) {
							pCVar4 = CustomLogicRigidbodyBuiltin.Bindings.__CreateMethodBinding__ResetCenterOfMass();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 == 0xd3196eb5) {
					bVar1 = (name == "CollisionDetectionMode");
					if (bVar1) {
						pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__CollisionDetectionMode();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xd9849707) {
					bVar1 = (name == "AngularDrag");
					if (bVar1) {
						pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__AngularDrag();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xdb354279) {
				if (uVar2 == 0xdaf45b72) {
					bVar1 = (name == "AddTorque");
					if (bVar1) {
						pCVar4 = CustomLogicRigidbodyBuiltin.Bindings.__CreateMethodBinding__AddTorque();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xdb354278) {
					bVar1 = (name == "FreezeAllRotations");
					if (bVar1) {
						pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__FreezeAllRotations();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xe27f342a) {
				bVar1 = (name == "Position");
				if (bVar1) {
					pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__Position();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf4450734) {
				bVar1 = (name == "FreezeXRotation");
				if (bVar1) {
					pCVar3 = CustomLogicRigidbodyBuiltin.Bindings.__CreatePropertyBinding__FreezeXRotation();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicRigidbodyBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x600201A")]
		[Address(RVA = "0x5905C60", Offset = "0x5904C60", VA = "0x5905C60")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__Owner()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Owner): 2 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_00;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Owner_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600201B")]
		[Address(RVA = "0x5905D00", Offset = "0x5904D00", VA = "0x5905D00")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__Position()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Position): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_3);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_3);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600201C")]
		[Address(RVA = "0x5905DE0", Offset = "0x5904DE0", VA = "0x5905DE0")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__Rotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Rotation): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_4);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_4);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600201D")]
		[Address(RVA = "0x5905EC0", Offset = "0x5904EC0", VA = "0x5905EC0")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__Velocity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Velocity): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Velocity_g____getter_5);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Velocity_g____setter_5);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600201E")]
		[Address(RVA = "0x5905FA0", Offset = "0x5904FA0", VA = "0x5905FA0")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__AngularVelocity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__AngularVelocity): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularVelocity_g____g);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularVelocity_g____s);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600201F")]
		[Address(RVA = "0x5906080", Offset = "0x5905080", VA = "0x5906080")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__AngularDrag()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__AngularDrag): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularDrag_g____gette);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularDrag_g____sette);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002020")]
		[Address(RVA = "0x5906160", Offset = "0x5905160", VA = "0x5906160")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__Mass()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Mass): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Mass_g____getter_8_0);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Mass_g____setter_8_1);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002021")]
		[Address(RVA = "0x5906240", Offset = "0x5905240", VA = "0x5906240")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__UseGravity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__UseGravity): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__UseGravity_g____getter);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__UseGravity_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002022")]
		[Address(RVA = "0x5906320", Offset = "0x5905320", VA = "0x5906320")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__Gravity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Gravity): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Gravity_g____getter_10);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Gravity_g____setter_10);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002023")]
		[Address(RVA = "0x5906400", Offset = "0x5905400", VA = "0x5906400")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__FreezeXPosition()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeXPosition): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXPosition_g____g);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXPosition_g____s);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002024")]
		[Address(RVA = "0x59064E0", Offset = "0x59054E0", VA = "0x59064E0")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__FreezeYPosition()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeYPosition): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYPosition_g____g);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYPosition_g____s);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002025")]
		[Address(RVA = "0x59065C0", Offset = "0x59055C0", VA = "0x59065C0")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__FreezeZPosition()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeZPosition): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZPosition_g____g);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZPosition_g____s);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002026")]
		[Address(RVA = "0x59066A0", Offset = "0x59056A0", VA = "0x59066A0")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__FreezeXRotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeXRotation): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXRotation_g____g);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXRotation_g____s);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002027")]
		[Address(RVA = "0x5906780", Offset = "0x5905780", VA = "0x5906780")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__FreezeYRotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeYRotation): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYRotation_g____g);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYRotation_g____s);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002028")]
		[Address(RVA = "0x5906860", Offset = "0x5905860", VA = "0x5906860")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__FreezeZRotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeZRotation): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZRotation_g____g);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZRotation_g____s);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002029")]
		[Address(RVA = "0x5906940", Offset = "0x5905940", VA = "0x5906940")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__FreezeAllRotations()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeAllRotations): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllRotations_g);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllRotations_g_71c13d8);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600202A")]
		[Address(RVA = "0x5906A20", Offset = "0x5905A20", VA = "0x5906A20")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__FreezeAllPositions()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeAllPositions): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllPositions_g);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllPositions_g_71c13c8);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600202B")]
		[Address(RVA = "0x5906B00", Offset = "0x5905B00", VA = "0x5906B00")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__IsKinematic()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__IsKinematic): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__IsKinematic_g____gette);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__IsKinematic_g____sette);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600202C")]
		[Address(RVA = "0x5906BE0", Offset = "0x5905BE0", VA = "0x5906BE0")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__Interpolate()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Interpolate): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Interpolate_g____gette);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Interpolate_g____sette);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600202D")]
		[Address(RVA = "0x5906CC0", Offset = "0x5905CC0", VA = "0x5906CC0")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__CenterOfMass()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__CenterOfMass): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CenterOfMass_g____gett);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CenterOfMass_g____sett);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600202E")]
		[Address(RVA = "0x5906DA0", Offset = "0x5905DA0", VA = "0x5906DA0")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__CollisionDetectionMode()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__CollisionDetectionMode): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CollisionDetectionMode);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CollisionDetectionMode_71c13a8);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600202F")]
		[Address(RVA = "0x5906E80", Offset = "0x5905E80", VA = "0x5906E80")]
		public static CLPropertyBinding<CustomLogicRigidbodyBuiltin> __CreatePropertyBinding__DetectCollisions()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__DetectCollisions): 3 lines keep C-only constructs
			Func<CustomLogicRigidbodyBuiltin, object> __this;
			Action<CustomLogicRigidbodyBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicRigidbodyBuiltin> __this_01;

			__this = new Func<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__DetectCollisions_g);
			__this_00 = new Action<CustomLogicRigidbodyBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__DetectCollisions_g_71c13b8);
			__this_01 = new CLPropertyBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002030")]
		[Address(RVA = "0x5906F60", Offset = "0x5905F60", VA = "0x5906F60")]
		public static CLMethodBinding<CustomLogicRigidbodyBuiltin> __CreateMethodBinding__AddForce()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__AddForce): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRigidbodyBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRigidbodyBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545ec7 == false) {
				Il2CppMethodInitialized_07545ec7 = true;
				uVar1 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__24_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__24_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRigidbodyBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRigidbodyBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__AddForce_b__24_0);
				pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				pCVar2.__9__24_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002031")]
		[Address(RVA = "0x59070A0", Offset = "0x59060A0", VA = "0x59070A0")]
		public static CLMethodBinding<CustomLogicRigidbodyBuiltin> __CreateMethodBinding__AddTorque()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__AddTorque): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRigidbodyBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRigidbodyBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545ec8 == false) {
				Il2CppMethodInitialized_07545ec8 = true;
				uVar1 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__25_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__25_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRigidbodyBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRigidbodyBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__AddTorque_b__25_0);
				pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				pCVar2.__9__25_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002032")]
		[Address(RVA = "0x59071E0", Offset = "0x59061E0", VA = "0x59071E0")]
		public static CLMethodBinding<CustomLogicRigidbodyBuiltin> __CreateMethodBinding__AddExplosionForce()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__AddExplosionForce): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRigidbodyBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRigidbodyBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545ec9 == false) {
				Il2CppMethodInitialized_07545ec9 = true;
				uVar1 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__26_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__26_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRigidbodyBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRigidbodyBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__AddExplosionForce_b__2);
				pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				pCVar2.__9__26_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002033")]
		[Address(RVA = "0x5907320", Offset = "0x5906320", VA = "0x5907320")]
		public static CLMethodBinding<CustomLogicRigidbodyBuiltin> __CreateMethodBinding__Move()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__Move): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRigidbodyBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRigidbodyBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545eca == false) {
				Il2CppMethodInitialized_07545eca = true;
				uVar1 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__27_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__27_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRigidbodyBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRigidbodyBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__Move_b__27_0);
				pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				pCVar2.__9__27_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002034")]
		[Address(RVA = "0x5907460", Offset = "0x5906460", VA = "0x5907460")]
		public static CLMethodBinding<CustomLogicRigidbodyBuiltin> __CreateMethodBinding__MovePosition()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__MovePosition): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRigidbodyBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRigidbodyBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545ecb == false) {
				Il2CppMethodInitialized_07545ecb = true;
				uVar1 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__28_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__28_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRigidbodyBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRigidbodyBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__MovePosition_b__28_0);
				pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				pCVar2.__9__28_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002035")]
		[Address(RVA = "0x59075A0", Offset = "0x59065A0", VA = "0x59075A0")]
		public static CLMethodBinding<CustomLogicRigidbodyBuiltin> __CreateMethodBinding__MoveRotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__MoveRotation): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRigidbodyBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRigidbodyBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545ecc == false) {
				Il2CppMethodInitialized_07545ecc = true;
				uVar1 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__29_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__29_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRigidbodyBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRigidbodyBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__MoveRotation_b__29_0);
				pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				pCVar2.__9__29_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002036")]
		[Address(RVA = "0x59076E0", Offset = "0x59066E0", VA = "0x59076E0")]
		public static CLMethodBinding<CustomLogicRigidbodyBuiltin> __CreateMethodBinding__ResetCenterOfMass()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__ResetCenterOfMass): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRigidbodyBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRigidbodyBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545ecd == false) {
				Il2CppMethodInitialized_07545ecd = true;
				uVar1 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__30_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__30_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRigidbodyBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRigidbodyBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__ResetCenterOfMass_b__3);
				pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				pCVar2.__9__30_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002037")]
		[Address(RVA = "0x5907820", Offset = "0x5906820", VA = "0x5907820")]
		public static CLMethodBinding<CustomLogicRigidbodyBuiltin> __CreateMethodBinding__PublishTransform()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__PublishTransform): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRigidbodyBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRigidbodyBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545ece == false) {
				Il2CppMethodInitialized_07545ece = true;
				uVar1 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__31_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__31_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRigidbodyBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRigidbodyBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__PublishTransform_b__31);
				pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				pCVar2.__9__31_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002038")]
		[Address(RVA = "0x5907960", Offset = "0x5906960", VA = "0x5907960")]
		public static CLMethodBinding<CustomLogicRigidbodyBuiltin> __CreateMethodBinding__SweepTest()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__SweepTest): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRigidbodyBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRigidbodyBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545ecf == false) {
				Il2CppMethodInitialized_07545ecf = true;
				uVar1 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__32_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRigidbodyBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__32_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRigidbodyBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRigidbodyBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__SweepTest_b__32_0);
				pCVar2 = typeof(CustomLogicRigidbodyBuiltin.Bindings.c).static_fields;
				pCVar2.__9__32_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRigidbodyBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x40016C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public Rigidbody Value;

	[Token(Token = "0x40016C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public ConstantForce CustomGravity;

	[Token(Token = "0x40016C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public BuiltinClassInstance OwnerBuiltin;

	[Token(Token = "0x40016C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public GameObject AttachedGameObject;

	[Token(Token = "0x40016C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool _isGravityEnabled;

	[Token(Token = "0x40016C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private Vector3? _gravity;

	[Token(Token = "0x170003B0")]
	public BuiltinClassInstance Owner
	{
		[Token(Token = "0x6001FE0")]
		[Address(RVA = "0x5904240", Offset = "0x5903240", VA = "0x5904240")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_Owner): clean
			return this.OwnerBuiltin;
		}
	}

	[Token(Token = "0x170003B1")]
	public CustomLogicVector3Builtin Position
	{
		[Token(Token = "0x6001FE1")]
		[Address(RVA = "0x5904250", Offset = "0x5903250", VA = "0x5904250")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_Position): clean
			Rigidbody __this_00;
			CustomLogicVector3Builtin __this_01;
			Vector3 value;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			value = __this_00.position;
			__this_01 = new CustomLogicVector3Builtin(value);
			return __this_01;
		}
		[Token(Token = "0x6001FE2")]
		[Address(RVA = "0x59042D0", Offset = "0x59032D0", VA = "0x59042D0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_Position): clean
			Rigidbody __this_00;

			if ((value == null) ||(__this_00 = this.Value, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.position = (Vector3)value.Value;
			return;
		}
	}

	[Token(Token = "0x170003B2")]
	public CustomLogicQuaternionBuiltin Rotation
	{
		[Token(Token = "0x6001FE3")]
		[Address(RVA = "0x5904300", Offset = "0x5903300", VA = "0x5904300")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_Rotation): clean
			Rigidbody __this_00;
			CustomLogicQuaternionBuiltin __this_01;
			Quaternion value;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			value = __this_00.rotation;
			__this_01 = new CustomLogicQuaternionBuiltin(value);
			return __this_01;
		}
		[Token(Token = "0x6001FE4")]
		[Address(RVA = "0x5904370", Offset = "0x5903370", VA = "0x5904370")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_Rotation): clean
			Rigidbody __this_00;

			if ((value == null) ||(__this_00 = this.Value, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.rotation = (Quaternion)value.Value;
			return;
		}
	}

	[Token(Token = "0x170003B3")]
	public CustomLogicVector3Builtin Velocity
	{
		[Token(Token = "0x6001FE5")]
		[Address(RVA = "0x59043A0", Offset = "0x59033A0", VA = "0x59043A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_Velocity): clean
			Rigidbody __this_00;
			CustomLogicVector3Builtin __this_01;
			Vector3 value;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			value = __this_00.linearVelocity;
			__this_01 = new CustomLogicVector3Builtin(value);
			return __this_01;
		}
		[Token(Token = "0x6001FE6")]
		[Address(RVA = "0x5904420", Offset = "0x5903420", VA = "0x5904420")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_Velocity): clean
			Rigidbody __this_00;

			if ((value == null) ||(__this_00 = this.Value, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.linearVelocity = (Vector3)value.Value;
			return;
		}
	}

	[Token(Token = "0x170003B4")]
	public CustomLogicVector3Builtin AngularVelocity
	{
		[Token(Token = "0x6001FE7")]
		[Address(RVA = "0x5904450", Offset = "0x5903450", VA = "0x5904450")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_AngularVelocity): clean
			Rigidbody __this_00;
			CustomLogicVector3Builtin __this_01;
			Vector3 value;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			value = __this_00.angularVelocity;
			__this_01 = new CustomLogicVector3Builtin(value);
			return __this_01;
		}
		[Token(Token = "0x6001FE8")]
		[Address(RVA = "0x59044D0", Offset = "0x59034D0", VA = "0x59044D0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_AngularVelocity): clean
			Rigidbody __this_00;

			if ((value == null) ||(__this_00 = this.Value, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.angularVelocity = (Vector3)value.Value;
			return;
		}
	}

	[Token(Token = "0x170003B5")]
	public float AngularDrag
	{
		[Token(Token = "0x6001FE9")]
		[Address(RVA = "0x5904500", Offset = "0x5903500", VA = "0x5904500")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_AngularDrag): clean
			Rigidbody __this_00;
			float fVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x6001FEA")]
		[Address(RVA = "0x5904520", Offset = "0x5903520", VA = "0x5904520")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_AngularDrag): clean
			Rigidbody __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.angularDamping = value;
			return;
		}
	}

	[Token(Token = "0x170003B6")]
	public float Mass
	{
		[Token(Token = "0x6001FEB")]
		[Address(RVA = "0x5904540", Offset = "0x5903540", VA = "0x5904540")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_Mass): clean
			Rigidbody __this_00;
			float fVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x6001FEC")]
		[Address(RVA = "0x5904560", Offset = "0x5903560", VA = "0x5904560")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_Mass): clean
			Rigidbody __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.mass = value;
			return;
		}
	}

	[Token(Token = "0x170003B7")]
	public bool UseGravity
	{
		[Token(Token = "0x6001FED")]
		[Address(RVA = "0x5904580", Offset = "0x5903580", VA = "0x5904580")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_UseGravity): clean
			return this._isGravityEnabled;
		}
		[Token(Token = "0x6001FEE")]
		[Address(RVA = "0x5903FA0", Offset = "0x5902FA0", VA = "0x5903FA0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_UseGravity): clean
			Object x;
			Rigidbody __this_00;
			Behaviour __this_01;
			bool bVar1;

			this._isGravityEnabled = value;
			x = (Object)this.CustomGravity;
			bVar1 = (x != null);
			__this_00 = this.Value;
			if (bVar1) {
				if (__this_00 != null) {
					__this_00.useGravity = false;
					__this_01 = (Behaviour)this.CustomGravity;
					if (__this_01 != null) {
						__this_01.enabled = value;
						return;
					}
				}
			}
			else if (__this_00 != null) {
				__this_00.useGravity = value;
				return;
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003B8")]
	public CustomLogicVector3Builtin? Gravity
	{
		[Token(Token = "0x6001FEF")]
		[Address(RVA = "0x5904590", Offset = "0x5903590", VA = "0x5904590")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_Gravity): clean
			CustomLogicVector3Builtin pCVar1;

			if (this._gravity.hasValue == false) {
				return null;
			}
			return pCVar1;
		}
		[Token(Token = "0x6001FF0")]
		[Address(RVA = "0x5903D90", Offset = "0x5902D90", VA = "0x5903D90")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_Gravity): 15 lines keep C-only constructs
			ConstantForce* ppUVar1;
			Object pUVar2;
			Component __this_00;
			Rigidbody pUVar3;
			System_Nullable_Vector3__o pSVar4;
			bool bVar5;
			GameObject __this_01;
			ConstantForce pUVar6;
			System_Nullable_Vector3__Fields local_48;
			System_Nullable_Vector3__Fields local_38;

			if (value == null) {
				local_38.hasValue = false;
				local_38._1_3_ = 0;
				local_38.value.x = 0.0;
				local_38.value.y = 0.0;
				local_38.value.z = 0.0;
				if (this != null) {
					this._gravity.hasValue = false;
					*(undefined3)&this._gravity.field_0x1 = 0;
					this._gravity.value.x = 0.0;
					pSVar4 = &this._gravity;
					pSVar4.value.y = 0.0;
					pSVar4.value.z = 0.0;
					pUVar2 = (Object)this.CustomGravity;
					bVar5 = (pUVar2 != null);
					if (bVar5) {
						ppUVar1 = &this.CustomGravity;
						if ((Behaviour)*ppUVar1 == null) goto label_05a03f9a;
						(*ppUVar1).enabled = false;
						pUVar2 = (Object)*ppUVar1;
						Object.Destroy(pUVar2);
						*ppUVar1 = null;
					}
					pUVar3 = this.Value;
					if (pUVar3 != null) {
						pUVar3.useGravity = this._isGravityEnabled;
						return;
					}
				}
			}
			else {
				local_48.hasValue = false;
				local_48._1_3_ = 0;
				local_48.value.x = 0.0;
				local_48.value.y = 0.0;
				local_48.value.z = 0.0;
				local_48 = new Nullable<Vector3>((Vector3)value.Value);
				local_38.hasValue = local_48.hasValue;
				local_38._1_3_ = local_48._1_3_;
				local_38.value.x = local_48.value.x;
				local_38.value.y = local_48.value.y;
				local_38.value.z = local_48.value.z;
				if (this != null) {
					this._gravity.hasValue = local_48.hasValue;
					*(undefined3)&this._gravity.field_0x1 = local_48._1_3_;
					this._gravity.value.x = local_48.value.x;
					pSVar4 = &this._gravity;
					pSVar4.value.y = local_48.value.y;
					pSVar4.value.z = local_48.value.z;
					pUVar2 = (Object)this.CustomGravity;
					ppUVar1 = &this.CustomGravity;
					bVar5 = (pUVar2 == null);
					if (bVar5) {
						__this_00 = (Component)this.Value;
						if ((__this_00 == null) ||(__this_01 = __this_00.gameObject, __this_01 == null)) goto label_05a03f9a;
						pUVar6 = __this_01.AddComponent<ConstantForce>();
						this.CustomGravity = pUVar6;
						pUVar3 = this.Value;
						if (pUVar3 == null) goto label_05a03f9a;
						pUVar3.useGravity = false;
					}
					if (*ppUVar1 != null) {
						(*ppUVar1).force = (Vector3)value.Value;
						if ((Behaviour)*ppUVar1 != null) {
							(*ppUVar1).enabled = this._isGravityEnabled ;
							return;
						}
					}
				}
			}
		label_05a03f9a: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003B9")]
	public bool FreezeXPosition
	{
		[Token(Token = "0x6001FF1")]
		[Address(RVA = "0x59045E0", Offset = "0x59035E0", VA = "0x59045E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeXPosition): 1 lines keep C-only constructs
			Rigidbody __this_00;
			uint uVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			uVar1 = __this_00.constraints;
			return SUB41((uVar1 & 2) >> 1, 0);
		}
		[Token(Token = "0x6001FF2")]
		[Address(RVA = "0x5904600", Offset = "0x5903600", VA = "0x5904600")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeXPosition): 2 lines keep C-only constructs
			Rigidbody __this_00;
			uint uVar1;
			undefined7 in_register_00000031;

			__this_00 = this.Value;
			if ((int)CONCAT71(in_register_00000031, value) == 0) {
				if (__this_00 != null) {
					uVar1 = __this_00.constraints;
					__this_00.constraints = uVar1 & 0xfffffffd;
					return;
				}
			}
			else if (__this_00 != null) {
				uVar1 = __this_00.constraints;
				__this_00.constraints = uVar1 | 2;
				return;
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003BA")]
	public bool FreezeYPosition
	{
		[Token(Token = "0x6001FF3")]
		[Address(RVA = "0x5904650", Offset = "0x5903650", VA = "0x5904650")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeYPosition): 1 lines keep C-only constructs
			Rigidbody __this_00;
			uint uVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			uVar1 = __this_00.constraints;
			return SUB41((uVar1 & 4) >> 2, 0);
		}
		[Token(Token = "0x6001FF4")]
		[Address(RVA = "0x5904670", Offset = "0x5903670", VA = "0x5904670")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeYPosition): 2 lines keep C-only constructs
			Rigidbody __this_00;
			uint uVar1;
			undefined7 in_register_00000031;

			__this_00 = this.Value;
			if ((int)CONCAT71(in_register_00000031, value) == 0) {
				if (__this_00 != null) {
					uVar1 = __this_00.constraints;
					__this_00.constraints = uVar1 & 0xfffffffb;
					return;
				}
			}
			else if (__this_00 != null) {
				uVar1 = __this_00.constraints;
				__this_00.constraints = uVar1 | 4;
				return;
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003BB")]
	public bool FreezeZPosition
	{
		[Token(Token = "0x6001FF5")]
		[Address(RVA = "0x59046C0", Offset = "0x59036C0", VA = "0x59046C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeZPosition): 1 lines keep C-only constructs
			Rigidbody __this_00;
			uint uVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			uVar1 = __this_00.constraints;
			return SUB41((uVar1 & 8) >> 3, 0);
		}
		[Token(Token = "0x6001FF6")]
		[Address(RVA = "0x59046E0", Offset = "0x59036E0", VA = "0x59046E0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeZPosition): 2 lines keep C-only constructs
			Rigidbody __this_00;
			uint uVar1;
			undefined7 in_register_00000031;

			__this_00 = this.Value;
			if ((int)CONCAT71(in_register_00000031, value) == 0) {
				if (__this_00 != null) {
					uVar1 = __this_00.constraints;
					__this_00.constraints = uVar1 & 0xfffffff7;
					return;
				}
			}
			else if (__this_00 != null) {
				uVar1 = __this_00.constraints;
				__this_00.constraints = uVar1 | 8;
				return;
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003BC")]
	public bool FreezeXRotation
	{
		[Token(Token = "0x6001FF7")]
		[Address(RVA = "0x5904730", Offset = "0x5903730", VA = "0x5904730")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeXRotation): 1 lines keep C-only constructs
			Rigidbody __this_00;
			uint uVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			uVar1 = __this_00.constraints;
			return SUB41((uVar1 & 0x10) >> 4, 0);
		}
		[Token(Token = "0x6001FF8")]
		[Address(RVA = "0x59040E0", Offset = "0x59030E0", VA = "0x59040E0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeXRotation): 2 lines keep C-only constructs
			Rigidbody __this_00;
			uint uVar1;
			undefined7 in_register_00000031;

			__this_00 = this.Value;
			if ((int)CONCAT71(in_register_00000031, value) == 0) {
				if (__this_00 != null) {
					uVar1 = __this_00.constraints;
					__this_00.constraints = uVar1 & 0xffffffef;
					return;
				}
			}
			else if (__this_00 != null) {
				uVar1 = __this_00.constraints;
				__this_00.constraints = uVar1 | 0x10;
				return;
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003BD")]
	public bool FreezeYRotation
	{
		[Token(Token = "0x6001FF9")]
		[Address(RVA = "0x5904750", Offset = "0x5903750", VA = "0x5904750")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeYRotation): 1 lines keep C-only constructs
			Rigidbody __this_00;
			uint uVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			uVar1 = __this_00.constraints;
			return SUB41((uVar1 & 0x20) >> 5, 0);
		}
		[Token(Token = "0x6001FFA")]
		[Address(RVA = "0x5904090", Offset = "0x5903090", VA = "0x5904090")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeYRotation): 2 lines keep C-only constructs
			Rigidbody __this_00;
			uint uVar1;
			undefined7 in_register_00000031;

			__this_00 = this.Value;
			if ((int)CONCAT71(in_register_00000031, value) == 0) {
				if (__this_00 != null) {
					uVar1 = __this_00.constraints;
					__this_00.constraints = uVar1 & 0xffffffdf;
					return;
				}
			}
			else if (__this_00 != null) {
				uVar1 = __this_00.constraints;
				__this_00.constraints = uVar1 | 0x20;
				return;
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003BE")]
	public bool FreezeZRotation
	{
		[Token(Token = "0x6001FFB")]
		[Address(RVA = "0x5904770", Offset = "0x5903770", VA = "0x5904770")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeZRotation): 1 lines keep C-only constructs
			Rigidbody __this_00;
			uint uVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			uVar1 = __this_00.constraints;
			return SUB41((uVar1 & 0x40) >> 6, 0);
		}
		[Token(Token = "0x6001FFC")]
		[Address(RVA = "0x5904040", Offset = "0x5903040", VA = "0x5904040")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeZRotation): 2 lines keep C-only constructs
			Rigidbody __this_00;
			uint uVar1;
			undefined7 in_register_00000031;

			__this_00 = this.Value;
			if ((int)CONCAT71(in_register_00000031, value) == 0) {
				if (__this_00 != null) {
					uVar1 = __this_00.constraints;
					__this_00.constraints = uVar1 & 0xffffffbf;
					return;
				}
			}
			else if (__this_00 != null) {
				uVar1 = __this_00.constraints;
				__this_00.constraints = uVar1 | 0x40;
				return;
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003BF")]
	public bool FreezeAllRotations
	{
		[Token(Token = "0x6001FFD")]
		[Address(RVA = "0x5904790", Offset = "0x5903790", VA = "0x5904790")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeAllRotations): clean
			Rigidbody __this_00;
			uint uVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			uVar1 = __this_00.constraints;
			return (~uVar1 & 0x70) == 0;
		}
		[Token(Token = "0x6001FFE")]
		[Address(RVA = "0x59047B0", Offset = "0x59037B0", VA = "0x59047B0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeAllRotations): 2 lines keep C-only constructs
			Rigidbody __this_00;
			uint uVar1;
			undefined7 in_register_00000031;

			__this_00 = this.Value;
			if ((int)CONCAT71(in_register_00000031, value) == 0) {
				if (__this_00 != null) {
					uVar1 = __this_00.constraints;
					__this_00.constraints = uVar1 & 0xffffff8f;
					return;
				}
			}
			else if (__this_00 != null) {
				uVar1 = __this_00.constraints;
				__this_00.constraints = uVar1 | 0x70;
				return;
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003C0")]
	public bool FreezeAllPositions
	{
		[Token(Token = "0x6001FFF")]
		[Address(RVA = "0x5904800", Offset = "0x5903800", VA = "0x5904800")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeAllPositions): clean
			Rigidbody __this_00;
			uint uVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			uVar1 = __this_00.constraints;
			return (~uVar1 & 0xe) == 0;
		}
		[Token(Token = "0x6002000")]
		[Address(RVA = "0x5904820", Offset = "0x5903820", VA = "0x5904820")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeAllPositions): 2 lines keep C-only constructs
			Rigidbody __this_00;
			uint uVar1;
			undefined7 in_register_00000031;

			__this_00 = this.Value;
			if ((int)CONCAT71(in_register_00000031, value) == 0) {
				if (__this_00 != null) {
					uVar1 = __this_00.constraints;
					__this_00.constraints = uVar1 & 0xfffffff1;
					return;
				}
			}
			else if (__this_00 != null) {
				uVar1 = __this_00.constraints;
				__this_00.constraints = uVar1 | 0xe;
				return;
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170003C1")]
	public bool IsKinematic
	{
		[Token(Token = "0x6002001")]
		[Address(RVA = "0x5904870", Offset = "0x5903870", VA = "0x5904870")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_IsKinematic): clean
			Rigidbody __this_00;
			bool bVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
		[Token(Token = "0x6002002")]
		[Address(RVA = "0x5904890", Offset = "0x5903890", VA = "0x5904890")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_IsKinematic): clean
			Rigidbody __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.isKinematic = value;
			return;
		}
	}

	[Token(Token = "0x170003C2")]
	public bool Interpolate
	{
		[Token(Token = "0x6002003")]
		[Address(RVA = "0x59048B0", Offset = "0x59038B0", VA = "0x59048B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_Interpolate): clean
			Rigidbody __this_00;
			int iVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			iVar1 = __this_00.interpolation;
			return iVar1 != 0;
		}
		[Token(Token = "0x6002004")]
		[Address(RVA = "0x5904130", Offset = "0x5903130", VA = "0x5904130")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_Interpolate): clean
			Rigidbody __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.interpolation = (uint)value;
			return;
		}
	}

	[Token(Token = "0x170003C3")]
	public CustomLogicVector3Builtin CenterOfMass
	{
		[Token(Token = "0x6002005")]
		[Address(RVA = "0x59048D0", Offset = "0x59038D0", VA = "0x59048D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_CenterOfMass): clean
			Rigidbody __this_00;
			CustomLogicVector3Builtin pCVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pCVar1;
		}
		[Token(Token = "0x6002006")]
		[Address(RVA = "0x59048F0", Offset = "0x59038F0", VA = "0x59048F0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_CenterOfMass): clean
			Rigidbody __this_00;

			if ((value == null) ||(__this_00 = this.Value, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.centerOfMass = (Vector3)value.Value;
			return;
		}
	}

	[Token(Token = "0x170003C4")]
	public int CollisionDetectionMode
	{
		[Token(Token = "0x6002007")]
		[Address(RVA = "0x5904920", Offset = "0x5903920", VA = "0x5904920")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_CollisionDetectionMode): clean
			Rigidbody __this_00;
			int iVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
		[Token(Token = "0x6002008")]
		[Address(RVA = "0x5904940", Offset = "0x5903940", VA = "0x5904940")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_CollisionDetectionMode): 5 lines keep C-only constructs
			Rigidbody __this_00;
			Il2CppType handle;
			bool bVar1;
			Type enumType;
			object pIVar2;
			String pSVar3;
			Il2CppClass klass;
			ArgumentException __this_01;
			MethodInfo lastManagedFrame;
			int iStack_30;
			int iStack_2c;

			handle = TypeRef_UnityEngine_CollisionDetectionMode;
			enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			iStack_2c = value;
			pIVar2 = (object)iStack_2c;
			bVar1 = Enum.IsDefined(enumType, pIVar2);
			if (bVar1) {
				__this_00 = this.Value;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.collisionDetectionMode = value;
				return;
			}
			iStack_30 = value;
			pIVar2 = (object)iStack_30;
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Invalid collision detection mode: {0}");
			pSVar3 = String.Format(pSVar3, pIVar2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_01 = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this_01 = new ArgumentException(pSVar3);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_set_CollisionDetectionMode);
			throw (object)__this_01;
		}
	}

	[Token(Token = "0x170003C5")]
	public bool DetectCollisions
	{
		[Token(Token = "0x6002009")]
		[Address(RVA = "0x5904A80", Offset = "0x5903A80", VA = "0x5904A80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_DetectCollisions): clean
			Rigidbody __this_00;
			bool bVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
		[Token(Token = "0x600200A")]
		[Address(RVA = "0x5904AA0", Offset = "0x5903AA0", VA = "0x5904AA0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$set_DetectCollisions): clean
			Rigidbody __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.detectCollisions = value;
			return;
		}
	}

	[Token(Token = "0x170003C6")]
	public override string ClassName
	{
		[Token(Token = "0x6002014")]
		[Address(RVA = "0x5904F60", Offset = "0x5903F60", VA = "0x5904F60", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_ClassName): clean
			return "RigidbodyBuiltin";
		}
	}

	[Token(Token = "0x170003C7")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002015")]
		[Address(RVA = "0x5904F90", Offset = "0x5903F90", VA = "0x5904F90", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170003C8")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002016")]
		[Address(RVA = "0x5904FA0", Offset = "0x5903FA0", VA = "0x5904FA0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170003C9")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002017")]
		[Address(RVA = "0x5904FB0", Offset = "0x5903FB0", VA = "0x5904FB0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001FDD")]
	[Address(RVA = "0x5903B00", Offset = "0x5902B00", VA = "0x5903B00")]
	public CustomLogicRigidbodyBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$.ctor): clean
		this._isGravityEnabled = true;
		base(null);
		return;
	}

	[Token(Token = "0x6001FDE")]
	[Address(RVA = "0x5903B10", Offset = "0x5902B10", VA = "0x5903B10")]
	public CustomLogicRigidbodyBuiltin(CustomLogicMapObjectBuiltin owner, [Optional][DefaultParameterValue(1f)] float mass, [Optional] Vector3? gravity, bool freezeRotation = false, bool interpolate = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$.ctor): 10 lines keep C-only constructs
		byte bVar1;
		MapObject pMVar2;
		Component pUVar3;
		Rigidbody pUVar4;
		uint uVar5;
		Rigidbody pUVar6;
		CustomLogicVector3Builtin value;
		Rigidbody* targetAddress;

		this._isGravityEnabled = true;
		if ((owner != null) &&(pMVar2 = owner.Value, pMVar2 != null)) {
			pUVar6 = BuiltinComponentInstance.GetOrAddComponent<Rigidbody>(pMVar2.GameObject);
			base((Component)pUVar6);
			this.OwnerBuiltin = (BuiltinClassInstance)owner;
			pMVar2 = owner.Value;
			if (pMVar2 != null) {
				this.AttachedGameObject = pMVar2.GameObject;
				pUVar4 = typeof(Rigidbody);
				pUVar3 = this.Component;
				if (pUVar3 == null) {
					this.Value = null;
				}
				else {
					bVar1 = (typeof(Rigidbody)._2).typeHierarchyDepth;
					if (((pUVar3.klass._2).typeHierarchyDepth < bVar1) ||((pUVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Rigidbody))) {
	label_05a03d83: ;
						throw new InvalidCastException();
					}
					this.Value = (Rigidbody)pUVar3;
					if (((pUVar3.klass._2).typeHierarchyDepth < bVar1) ||((pUVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass)pUVar4)) goto label_05a03d83;
				}
				targetAddress = &this.Value;
				if (gravity.hasValue == false) {
					value = null;
				}
				else {
					value = ((CustomLogicVector3Builtin)gravity.value);
				}
				this.Gravity = value;
				this.UseGravity = true;
				pUVar6 = this.Value;
				if (freezeRotation) {
					if (pUVar6 == null) goto label_05a03d7e;
					uVar5 = pUVar6.constraints;
					pUVar6.constraints = uVar5 | 0x40;
					pUVar6 = *targetAddress;
					if (pUVar6 == null) goto label_05a03d7e;
					uVar5 = pUVar6.constraints;
					pUVar6.constraints = uVar5 | 0x20;
					pUVar6 = *targetAddress;
					if (pUVar6 == null) goto label_05a03d7e;
					uVar5 = pUVar6.constraints;
					uVar5 = uVar5 | 0x10;
				}
				else {
					if (pUVar6 == null) goto label_05a03d7e;
					uVar5 = pUVar6.constraints;
					pUVar6.constraints = uVar5 & 0xffffffbf;
					pUVar6 = *targetAddress;
					if (pUVar6 == null) goto label_05a03d7e;
					uVar5 = pUVar6.constraints;
					pUVar6.constraints = uVar5 & 0xffffffdf;
					pUVar6 = *targetAddress;
					if (pUVar6 == null) goto label_05a03d7e;
					uVar5 = pUVar6.constraints;
					uVar5 = uVar5 & 0xffffffef;
				}
				pUVar6.constraints = uVar5;
				if (*targetAddress != null) {
					(*targetAddress).interpolation = (uint)interpolate;
					return;
				}
			}
		}
	label_05a03d7e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001FDF")]
	[Address(RVA = "0x5904150", Offset = "0x5903150", VA = "0x5904150")]
	public CustomLogicRigidbodyBuiltin(BuiltinClassInstance owner, Rigidbody rb)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$.ctor): 2 lines keep C-only constructs
		byte bVar1;
		Component pUVar2;
		Rigidbody pUVar3;
		GameObject pUVar4;

		this._isGravityEnabled = true;
		base((Component)rb) ;
		this.OwnerBuiltin = owner;
		if (rb == null) {
			throw new NullReferenceException();
		}
		pUVar4 = rb.gameObject;
		this.AttachedGameObject = pUVar4;
		pUVar3 = typeof(Rigidbody);
		pUVar2 = this.Component;
		if (pUVar2 == null) {
			this.Value = null;
	label_05a04221: ;
			return;
		}
		bVar1 = (typeof(Rigidbody)._2).typeHierarchyDepth;
		if ((bVar1 <= (pUVar2.klass._2).typeHierarchyDepth) &&((pUVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Rigidbody))) {
			this.Value = (Rigidbody)pUVar2;
			if ((bVar1 <= (pUVar2.klass._2).typeHierarchyDepth) &&((pUVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass)pUVar3)) goto label_05a04221;
		}
		throw new InvalidCastException();
	}

	[Token(Token = "0x600200B")]
	[Address(RVA = "0x5904AC0", Offset = "0x5903AC0", VA = "0x5904AC0")]
	public void AddForce(CustomLogicVector3Builtin force, int forceMode, [Optional] CustomLogicVector3Builtin? atPoint)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$AddForce): clean
		Rigidbody __this_00;

		__this_00 = this.Value;
		if (atPoint == null) {
			if ((force != null) &&(__this_00 != null)) {
				__this_00.AddForce((Vector3)force.Value, forceMode);
				return;
			}
		}
		else if ((force != null) &&(__this_00 != null)) {
			__this_00.AddForceAtPosition((Vector3)force.Value, (Vector3)atPoint.Value, forceMode);
			return;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600200C")]
	[Address(RVA = "0x5904B20", Offset = "0x5903B20", VA = "0x5904B20")]
	public void AddTorque(CustomLogicVector3Builtin torque, int forceMode)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$AddTorque): clean
		Rigidbody __this_00;

		if ((torque == null) ||(__this_00 = this.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.AddTorque((Vector3)torque.Value, forceMode);
		return;
	}

	[Token(Token = "0x600200D")]
	[Address(RVA = "0x5904B50", Offset = "0x5903B50", VA = "0x5904B50")]
	public void AddExplosionForce(float explosionForce, CustomLogicVector3Builtin explosionPosition, float explosionRadius, float upwardsModifier = 0f, int forceMode = 5)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$AddExplosionForce): clean
		Rigidbody __this_00;

		if ((explosionPosition == null) ||(__this_00 = this.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.AddExplosionForce(explosionForce, (Vector3)explosionPosition.Value, explosionRadius, upwardsModifier, forceMode);
		return;
	}

	[Token(Token = "0x600200E")]
	[Address(RVA = "0x5904B80", Offset = "0x5903B80", VA = "0x5904B80")]
	public void Move(CustomLogicVector3Builtin position, CustomLogicQuaternionBuiltin rotation)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$Move): clean
		Rigidbody __this_00;

		if (((position == null) ||(rotation == null)) ||(__this_00 = this.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Move((Vector3)position.Value, (Quaternion)rotation.Value);
		return;
	}

	[Token(Token = "0x600200F")]
	[Address(RVA = "0x5904BC0", Offset = "0x5903BC0", VA = "0x5904BC0")]
	public void MovePosition(CustomLogicVector3Builtin position)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$MovePosition): clean
		Rigidbody __this_00;

		if ((position == null) ||(__this_00 = this.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.MovePosition((Vector3)position.Value);
		return;
	}

	[Token(Token = "0x6002010")]
	[Address(RVA = "0x5904BF0", Offset = "0x5903BF0", VA = "0x5904BF0")]
	public void MoveRotation(CustomLogicQuaternionBuiltin rotation)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$MoveRotation): clean
		Rigidbody __this_00;

		if ((rotation == null) ||(__this_00 = this.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.MoveRotation((Quaternion)rotation.Value);
		return;
	}

	[Token(Token = "0x6002011")]
	[Address(RVA = "0x5904C20", Offset = "0x5903C20", VA = "0x5904C20")]
	public void ResetCenterOfMass()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$ResetCenterOfMass): clean
		Rigidbody __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.ResetCenterOfMass();
		return;
	}

	[Token(Token = "0x6002012")]
	[Address(RVA = "0x5904C40", Offset = "0x5903C40", VA = "0x5904C40")]
	public void PublishTransform()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$PublishTransform): clean
		Rigidbody __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.PublishTransform();
		return;
	}

	[Token(Token = "0x6002013")]
	[Address(RVA = "0x5904C60", Offset = "0x5903C60", VA = "0x5904C60")]
	public object SweepTest(CustomLogicVector3Builtin direction, float distance)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c (CustomLogic.CustomLogicRigidbodyBuiltin$$SweepTest): 4 lines keep C-only constructs
		byte bVar1;
		Rigidbody __this_00;
		bool bVar2;
		Collider pUVar3;
		BuiltinClassInstance pCVar4;
		CustomLogicLineCastHitResultBuiltin __this_01;
		CustomLogicVector3Builtin pCVar5;
		Object[] parameters;
		object pIVar6;
		CustomLogicColliderBuiltin __this_02;
		BuiltinClassInstance pCVar7;
		float fVar8;
		Vector3 UVar9;
		RaycastHit local_58;

		local_58.m_UV.x = 0.0;
		local_58.m_UV.y = 0.0;
		local_58.m_Collider.m_Data = (EntityId)0x0;
		local_58.m_Normal.y = 0.0;
		local_58.m_Normal.z = 0.0;
		local_58.m_FaceID = 0;
		local_58.m_Distance = 0.0;
		local_58.m_Point.x = 0.0;
		local_58.m_Point.y = 0.0;
		local_58.m_Point.z = 0.0;
		local_58.m_Normal.x = 0.0;
		if ((direction == null) ||(__this_00 = this.Value, __this_00 == null)) {
	label_05a04f42: ;
			throw new NullReferenceException();
		}
		bVar2 = __this_00.SweepTest((Vector3)direction.Value, ref local_58, distance);
		if (bVar2) {
			pUVar3 = local_58.collider;
			pCVar4 = CustomLogicCollisionHandler.GetBuiltin(pUVar3);
			if (pCVar4 != null) {
				__this_01 = new CustomLogicLineCastHitResultBuiltin();
				bVar1 = (typeof(CustomLogicCharacterBuiltin)._2).typeHierarchyDepth;
				pCVar7 = null;
				if ((bVar1 <= (pCVar4.klass._2).typeHierarchyDepth) &&(pCVar7 = null,(pCVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicCharacterBuiltin))) {
					pCVar7 = pCVar4;
				}
				if (__this_01 != null) {
					bVar2 = false;
					__this_01.IsCharacter = pCVar7 != null;
					bVar1 = (typeof(CustomLogicMapObjectBuiltin)._2).typeHierarchyDepth;
					if (bVar1 <= (pCVar4.klass._2).typeHierarchyDepth) {
						bVar2 = (pCVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicMapObjectBuiltin);
					}
					__this_01._IsMapObject_k__BackingField = bVar2;
					UVar9 = local_58.point;
					pCVar5 = new CustomLogicVector3Builtin(UVar9);
					__this_01._Point_k__BackingField = pCVar5;
					UVar9 = local_58.normal;
					pCVar5 = new CustomLogicVector3Builtin(UVar9);
					__this_01._Normal_k__BackingField = pCVar5;
					fVar8 = local_58.distance;
					__this_01._Distance_k__BackingField = fVar8;
					__this_01._Collider_k__BackingField = pCVar4;
					parameters = (Object[])new object[1];
					pUVar3 = local_58.collider;
					if (parameters != null) {
						if ((pUVar3 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)pUVar3, (((parameters.obj).klass)._1).element_class), pIVar6 == null)) {
							pIVar6 = new ArrayTypeMismatchException();
							throw pIVar6;
						}
						if ((int)parameters.Length == 0) {
							throw new IndexOutOfRangeException();
						}
						parameters[0] = (object)pUVar3;
						__this_02 = new CustomLogicColliderBuiltin(parameters);
						__this_01._ColliderInfo_k__BackingField = __this_02;
						return (object)__this_01;
					}
				}
				goto label_05a04f42;
			}
		}
		return null;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicRigidbodyBuiltin.c.

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Owner");
		__this.Add((Il2CppObject *)"Position");
		__this.Add((Il2CppObject *)"Rotation");
		__this.Add((Il2CppObject *)"Velocity");
		__this.Add((Il2CppObject *)"AngularVelocity");
		__this.Add((Il2CppObject *)"AngularDrag");
		__this.Add((Il2CppObject *)"Mass");
		__this.Add((Il2CppObject *)"UseGravity");
		__this.Add((Il2CppObject *)"Gravity");
		__this.Add((Il2CppObject *)"FreezeXPosition");
		__this.Add((Il2CppObject *)"FreezeYPosition");
		__this.Add((Il2CppObject *)"FreezeZPosition");
		__this.Add((Il2CppObject *)"FreezeXRotation");
		__this.Add((Il2CppObject *)"FreezeYRotation");
		__this.Add((Il2CppObject *)"FreezeZRotation");
		__this.Add((Il2CppObject *)"FreezeAllRotations");
		__this.Add((Il2CppObject *)"FreezeAllPositions");
		__this.Add((Il2CppObject *)"IsKinematic");
		__this.Add((Il2CppObject *)"Interpolate");
		__this.Add((Il2CppObject *)"CenterOfMass");
		__this.Add((Il2CppObject *)"CollisionDetectionMode");
		__this.Add((Il2CppObject *)"DetectCollisions");
		__this.Add((Il2CppObject *)"AddForce");
		__this.Add((Il2CppObject *)"AddTorque");
		__this.Add((Il2CppObject *)"AddExplosionForce");
		__this.Add((Il2CppObject *)"Move");
		__this.Add((Il2CppObject *)"MovePosition");
		__this.Add((Il2CppObject *)"MoveRotation");
		__this.Add((Il2CppObject *)"ResetCenterOfMass");
		__this.Add((Il2CppObject *)"PublishTransform");
		__this.Add((Il2CppObject *)"SweepTest");
		CustomLogicRigidbodyBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Owner>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Owner_g____getter_2_0(CustomLogicRigidbodyBuiltin __i)
	{
		if (__i == null) {
			throw new NullReferenceException();
		}
		return (object)__i.OwnerBuiltin;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Position_g____getter_3_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		CustomLogicVector3Builtin __this_00;
		Vector3 value;

		if (__i != null) {
			__this = __i.Value;
			if (__this != null) {
				value = __this.position;
				__this_00 = new CustomLogicVector3Builtin(value);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__Position_g____setter_3_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		Rigidbody __this;
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (((__i == null) ||(pCVar1 == null)) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.position = (Vector3)pCVar1.Value;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Rotation_g____getter_4_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		CustomLogicQuaternionBuiltin __this_00;
		Quaternion value;

		if (__i != null) {
			__this = __i.Value;
			if (__this != null) {
				value = __this.rotation;
				__this_00 = new CustomLogicQuaternionBuiltin(value);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__Rotation_g____setter_4_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		Rigidbody __this;
		CustomLogicQuaternionBuiltin pCVar1;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__v);
		if (((__i == null) ||(pCVar1 == null)) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.rotation = (Quaternion)pCVar1.Value;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Velocity_g____getter_5_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		CustomLogicVector3Builtin __this_00;
		Vector3 value;

		if (__i != null) {
			__this = __i.Value;
			if (__this != null) {
				value = __this.linearVelocity;
				__this_00 = new CustomLogicVector3Builtin(value);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__Velocity_g____setter_5_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		Rigidbody __this;
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (((__i == null) ||(pCVar1 == null)) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.linearVelocity = (Vector3)pCVar1.Value;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__AngularVelocity>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__AngularVelocity_g____getter_6_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		CustomLogicVector3Builtin __this_00;
		Vector3 value;

		if (__i != null) {
			__this = __i.Value;
			if (__this != null) {
				value = __this.angularVelocity;
				__this_00 = new CustomLogicVector3Builtin(value);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__AngularVelocity>g____setter|6_1: clean
	private static void Bindings____CreatePropertyBinding__AngularVelocity_g____setter_6_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		Rigidbody __this;
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (((__i == null) ||(pCVar1 == null)) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.angularVelocity = (Vector3)pCVar1.Value;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__AngularDrag>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__AngularDrag_g____getter_7_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.angularDamping;
		return pIVar1;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__AngularDrag>g____setter|7_1: clean
	private static void Bindings____CreatePropertyBinding__AngularDrag_g____setter_7_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		Rigidbody __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.angularDamping = value;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Mass>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Mass_g____getter_8_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.mass;
		return pIVar1;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Mass>g____setter|8_1: clean
	private static void Bindings____CreatePropertyBinding__Mass_g____setter_8_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		Rigidbody __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.mass = value;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__UseGravity>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__UseGravity_g____getter_9_0(CustomLogicRigidbodyBuiltin __i)
	{
		object pIVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__UseGravity>g____setter|9_1: clean
	private static void Bindings____CreatePropertyBinding__UseGravity_g____setter_9_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.UseGravity = value;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Gravity>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__Gravity_g____getter_10_0(CustomLogicRigidbodyBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		if (__i._gravity.hasValue == false) {
			return null;
		}
		pCVar1 = ((CustomLogicVector3Builtin)(Vector3)__i._gravity.value);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Gravity>g____setter|10_1: clean
	private static void Bindings____CreatePropertyBinding__Gravity_g____setter_10_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		CustomLogicVector3Builtin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Gravity = value;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeXPosition>g____getter|11_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__FreezeXPosition_g____getter_11_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		int iVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		iVar1 = __this.constraints;
		uStack_8 = CONCAT17((byte)iVar1 >> 1, (undefined7)uStack_8) & 0x1ffffffffffffff;
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeXPosition>g____setter|11_1: clean
	private static void Bindings____CreatePropertyBinding__FreezeXPosition_g____setter_11_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		Rigidbody __this;
		bool bVar1;
		uint uVar2;

		bVar1 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
	label_05a087a4: ;
			throw new NullReferenceException();
		}
		__this = __i.Value;
		if (bVar1) {
			if (__this == null) goto label_05a087a4;
			uVar2 = __this.constraints;
			uVar2 = uVar2 | 2;
		}
		else {
			if (__this == null) goto label_05a087a4;
			uVar2 = __this.constraints;
			uVar2 = uVar2 & 0xfffffffd;
		}
		__this.constraints = uVar2;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeYPosition>g____getter|12_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__FreezeYPosition_g____getter_12_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		int iVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		iVar1 = __this.constraints;
		uStack_8 = CONCAT17((byte)iVar1 >> 2, (undefined7)uStack_8) & 0x1ffffffffffffff;
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeYPosition>g____setter|12_1: clean
	private static void Bindings____CreatePropertyBinding__FreezeYPosition_g____setter_12_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		Rigidbody __this;
		bool bVar1;
		uint uVar2;

		bVar1 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
	label_05a08894: ;
			throw new NullReferenceException();
		}
		__this = __i.Value;
		if (bVar1) {
			if (__this == null) goto label_05a08894;
			uVar2 = __this.constraints;
			uVar2 = uVar2 | 4;
		}
		else {
			if (__this == null) goto label_05a08894;
			uVar2 = __this.constraints;
			uVar2 = uVar2 & 0xfffffffb;
		}
		__this.constraints = uVar2;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeZPosition>g____getter|13_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__FreezeZPosition_g____getter_13_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		int iVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		iVar1 = __this.constraints;
		uStack_8 = CONCAT17((byte)iVar1 >> 3, (undefined7)uStack_8) & 0x1ffffffffffffff;
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeZPosition>g____setter|13_1: clean
	private static void Bindings____CreatePropertyBinding__FreezeZPosition_g____setter_13_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		Rigidbody __this;
		bool bVar1;
		uint uVar2;

		bVar1 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
	label_05a08984: ;
			throw new NullReferenceException();
		}
		__this = __i.Value;
		if (bVar1) {
			if (__this == null) goto label_05a08984;
			uVar2 = __this.constraints;
			uVar2 = uVar2 | 8;
		}
		else {
			if (__this == null) goto label_05a08984;
			uVar2 = __this.constraints;
			uVar2 = uVar2 & 0xfffffff7;
		}
		__this.constraints = uVar2;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeXRotation>g____getter|14_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__FreezeXRotation_g____getter_14_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		int iVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		iVar1 = __this.constraints;
		uStack_8 = CONCAT17((byte)iVar1 >> 4, (undefined7)uStack_8) & 0x1ffffffffffffff;
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeXRotation>g____setter|14_1: clean
	private static void Bindings____CreatePropertyBinding__FreezeXRotation_g____setter_14_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		Rigidbody __this;
		bool bVar1;
		uint uVar2;

		bVar1 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
	label_05a08a74: ;
			throw new NullReferenceException();
		}
		__this = __i.Value;
		if (bVar1) {
			if (__this == null) goto label_05a08a74;
			uVar2 = __this.constraints;
			uVar2 = uVar2 | 0x10;
		}
		else {
			if (__this == null) goto label_05a08a74;
			uVar2 = __this.constraints;
			uVar2 = uVar2 & 0xffffffef;
		}
		__this.constraints = uVar2;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeYRotation>g____getter|15_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__FreezeYRotation_g____getter_15_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		int iVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		iVar1 = __this.constraints;
		uStack_8 = CONCAT17((byte)iVar1 >> 5, (undefined7)uStack_8) & 0x1ffffffffffffff;
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeYRotation>g____setter|15_1: clean
	private static void Bindings____CreatePropertyBinding__FreezeYRotation_g____setter_15_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		Rigidbody __this;
		bool bVar1;
		uint uVar2;

		bVar1 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
	label_05a08b64: ;
			throw new NullReferenceException();
		}
		__this = __i.Value;
		if (bVar1) {
			if (__this == null) goto label_05a08b64;
			uVar2 = __this.constraints;
			uVar2 = uVar2 | 0x20;
		}
		else {
			if (__this == null) goto label_05a08b64;
			uVar2 = __this.constraints;
			uVar2 = uVar2 & 0xffffffdf;
		}
		__this.constraints = uVar2;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeZRotation>g____getter|16_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__FreezeZRotation_g____getter_16_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		int iVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		iVar1 = __this.constraints;
		uStack_8 = CONCAT17((byte)iVar1 >> 6, (undefined7)uStack_8) & 0x1ffffffffffffff;
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeZRotation>g____setter|16_1: clean
	private static void Bindings____CreatePropertyBinding__FreezeZRotation_g____setter_16_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		Rigidbody __this;
		bool bVar1;
		uint uVar2;

		bVar1 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
	label_05a08c54: ;
			throw new NullReferenceException();
		}
		__this = __i.Value;
		if (bVar1) {
			if (__this == null) goto label_05a08c54;
			uVar2 = __this.constraints;
			uVar2 = uVar2 | 0x40;
		}
		else {
			if (__this == null) goto label_05a08c54;
			uVar2 = __this.constraints;
			uVar2 = uVar2 & 0xffffffbf;
		}
		__this.constraints = uVar2;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeAllRotations>g____getter|17_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__FreezeAllRotations_g____getter_17_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		uint uVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		uVar1 = __this.constraints;
		uStack_8 = CONCAT17((~uVar1 & 0x70) == 0, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeAllRotations>g____setter|17_1: clean
	private static void Bindings____CreatePropertyBinding__FreezeAllRotations_g____setter_17_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		Rigidbody __this;
		bool bVar1;
		uint uVar2;

		bVar1 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
	label_05a08d44: ;
			throw new NullReferenceException();
		}
		__this = __i.Value;
		if (bVar1) {
			if (__this == null) goto label_05a08d44;
			uVar2 = __this.constraints;
			uVar2 = uVar2 | 0x70;
		}
		else {
			if (__this == null) goto label_05a08d44;
			uVar2 = __this.constraints;
			uVar2 = uVar2 & 0xffffff8f;
		}
		__this.constraints = uVar2;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeAllPositions>g____getter|18_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__FreezeAllPositions_g____getter_18_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		uint uVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		uVar1 = __this.constraints;
		uStack_8 = CONCAT17((~uVar1 & 0xe) == 0, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeAllPositions>g____setter|18_1: clean
	private static void Bindings____CreatePropertyBinding__FreezeAllPositions_g____setter_18_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		Rigidbody __this;
		bool bVar1;
		uint uVar2;

		bVar1 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
	label_05a08e34: ;
			throw new NullReferenceException();
		}
		__this = __i.Value;
		if (bVar1) {
			if (__this == null) goto label_05a08e34;
			uVar2 = __this.constraints;
			uVar2 = uVar2 | 0xe;
		}
		else {
			if (__this == null) goto label_05a08e34;
			uVar2 = __this.constraints;
			uVar2 = uVar2 & 0xfffffff1;
		}
		__this.constraints = uVar2;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__IsKinematic>g____getter|19_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsKinematic_g____getter_19_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __this.isKinematic;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__IsKinematic>g____setter|19_1: clean
	private static void Bindings____CreatePropertyBinding__IsKinematic_g____setter_19_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		Rigidbody __this;
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.isKinematic = value;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Interpolate>g____getter|20_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Interpolate_g____getter_20_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		int iVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		iVar1 = __this.interpolation;
		uStack_8 = CONCAT17(iVar1 != 0, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Interpolate>g____setter|20_1: clean
	private static void Bindings____CreatePropertyBinding__Interpolate_g____setter_20_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		Rigidbody __this;
		bool bVar1;

		bVar1 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.interpolation = (uint)bVar1;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__CenterOfMass>g____getter|21_0: clean
	private static object Bindings____CreatePropertyBinding__CenterOfMass_g____getter_21_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		CustomLogicVector3Builtin pCVar1;
		Vector3 v;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		v = __this.centerOfMass;
		pCVar1 = ((CustomLogicVector3Builtin)v);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__CenterOfMass>g____setter|21_1: clean
	private static void Bindings____CreatePropertyBinding__CenterOfMass_g____setter_21_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		Rigidbody __this;
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (((__i == null) ||(pCVar1 == null)) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.centerOfMass = (Vector3)pCVar1.Value;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__CollisionDetectionMode>g____getter|22_0: clean
	private static object Bindings____CreatePropertyBinding__CollisionDetectionMode_g____getter_22_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.collisionDetectionMode;
		return pIVar1;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__CollisionDetectionMode>g____setter|22_1: clean
	private static void Bindings____CreatePropertyBinding__CollisionDetectionMode_g____setter_22_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.CollisionDetectionMode = value;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__DetectCollisions>g____getter|23_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__DetectCollisions_g____getter_23_0(CustomLogicRigidbodyBuiltin __i)
	{
		Rigidbody __this;
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __this.detectCollisions;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__DetectCollisions>g____setter|23_1: clean
	private static void Bindings____CreatePropertyBinding__DetectCollisions_g____setter_23_1(CustomLogicRigidbodyBuiltin __i, object __v)
	{
		Rigidbody __this;
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.detectCollisions = value;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicRigidbodyBuiltin.Bindings.c();
		CustomLogicRigidbodyBuiltin.Bindings.c.__9 =(CustomLogicRigidbodyBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddForce>b__24_0: clean
	private object Bindings_c____CreateMethodBinding__AddForce_b__24_0(CustomLogicRigidbodyBuiltin __c, Object[] __a)
	{
		object pIVar1;
		int forceMode;
		CustomLogicVector3Builtin force;
		CustomLogicVector3Builtin atPoint;

		if (__a == null) {
	label_05a0937b: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			force = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar1) ;
			if ((__a.Length & 0xfffffffe) != 0) {
				forceMode = CustomLogicEvaluator.ConvertTo<int>(__a[1]);
				if ((int)__a.Length < 3) {
					atPoint = null;
				}
				else {
					pIVar1 = __a[2];
					atPoint = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar1);
				}
				if (__c != null) {
					__c.AddForce(force, forceMode, atPoint);
					return null;
				}
				goto label_05a0937b;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddTorque>b__25_0: clean
	private object Bindings_c____CreateMethodBinding__AddTorque_b__25_0(CustomLogicRigidbodyBuiltin __c, Object[] __a)
	{
		object obj;
		Rigidbody __this_00;
		int mode;
		CustomLogicVector3Builtin pCVar1;

		if (__a == null) {
	label_05a0945f: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				mode = CustomLogicEvaluator.ConvertTo<int>(__a[1]);
				if (((__c != null) &&(pCVar1 != null)) &&(__this_00 = __c.Value, __this_00 != null)) {
					__this_00.AddTorque((Vector3)pCVar1.Value, mode);
					return null;
				}
				goto label_05a0945f;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddExplosionForce>b__26_0: clean
	private object Bindings_c____CreateMethodBinding__AddExplosionForce_b__26_0(CustomLogicRigidbodyBuiltin __c, Object[] __a)
	{
		object pIVar1;
		Rigidbody __this_00;
		int mode;
		CustomLogicVector3Builtin pCVar2;
		float explosionForce;
		float explosionRadius;
		float upwardsModifier;

		if (__a == null) {
	label_05a0961e: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			explosionForce = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			if (((__a.Length & 0xfffffffe) != 0) &&(pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]), 2 < (uint)__a.Length)) {
				explosionRadius = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
				mode = 5;
				upwardsModifier = 0.0;
				if (3 < (int)__a.Length) {
					pIVar1 = __a[3];
					upwardsModifier = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
					if (4 < (int)__a.Length) {
						pIVar1 = __a[4];
						mode = CustomLogicEvaluator.ConvertTo<int>(pIVar1);
					}
				}
				if (((__c != null) &&(pCVar2 != null)) &&(__this_00 = __c.Value, __this_00 != null)) {
					__this_00.AddExplosionForce(explosionForce, (Vector3)pCVar2.Value, explosionRadius, upwardsModifier, mode);
					return null;
				}
				goto label_05a0961e;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__Move>b__27_0: clean
	private object Bindings_c____CreateMethodBinding__Move_b__27_0(CustomLogicRigidbodyBuiltin __c, Object[] __a)
	{
		object obj;
		Rigidbody __this_00;
		CustomLogicVector3Builtin pCVar1;
		CustomLogicQuaternionBuiltin pCVar2;

		if (__a == null) {
	label_05a0970c: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__a[1]);
				if ((((__c != null) &&(pCVar1 != null)) &&(pCVar2 != null)) &&(__this_00 = __c.Value, __this_00 != null)) {
					__this_00.Move((Vector3)pCVar1.Value, (Quaternion)pCVar2.Value);
					return null;
				}
				goto label_05a0970c;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__MovePosition>b__28_0: clean
	private object Bindings_c____CreateMethodBinding__MovePosition_b__28_0(CustomLogicRigidbodyBuiltin __c, Object[] __a)
	{
		object obj;
		Rigidbody __this_00;
		CustomLogicVector3Builtin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if (((__c != null) &&(pCVar1 != null)) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_00.MovePosition((Vector3)pCVar1.Value);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveRotation>b__29_0: clean
	private object Bindings_c____CreateMethodBinding__MoveRotation_b__29_0(CustomLogicRigidbodyBuiltin __c, Object[] __a)
	{
		object obj;
		Rigidbody __this_00;
		CustomLogicQuaternionBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(obj);
			if (((__c != null) &&(pCVar1 != null)) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_00.MoveRotation((Quaternion)pCVar1.Value);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetCenterOfMass>b__30_0: clean
	private object Bindings_c____CreateMethodBinding__ResetCenterOfMass_b__30_0(CustomLogicRigidbodyBuiltin __c, Object[] __a)
	{
		Rigidbody __this_00;

		if ((__c == null) ||(__this_00 = __c.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.ResetCenterOfMass();
		return null;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__PublishTransform>b__31_0: clean
	private object Bindings_c____CreateMethodBinding__PublishTransform_b__31_0(CustomLogicRigidbodyBuiltin __c, Object[] __a)
	{
		Rigidbody __this_00;

		if ((__c == null) ||(__this_00 = __c.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.PublishTransform();
		return null;
	}

	// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__SweepTest>b__32_0: clean
	private object Bindings_c____CreateMethodBinding__SweepTest_b__32_0(CustomLogicRigidbodyBuiltin __c, Object[] __a)
	{
		CustomLogicVector3Builtin direction;
		object pIVar1;
		float distance;

		if (__a == null) {
	label_05a0996c: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			direction = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				distance = CustomLogicEvaluator.ConvertTo<float>(__a[1]) ;
				if (__c != null) {
					pIVar1 = __c.SweepTest(direction, distance);
					return pIVar1;
				}
				goto label_05a0996c;
			}
		}
		throw new IndexOutOfRangeException();
	}
}
