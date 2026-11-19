// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCameraBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCameraBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicCameraBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Cameras;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005A2")]
[CompilerGenerated]
internal class CustomLogicCameraBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005A3")]
	public static class Factory
	{
		[Token(Token = "0x6003393")]
		[Address(RVA = "0x59C6160", Offset = "0x59C5160", VA = "0x59C6160")]
		public static CustomLogicCameraBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCameraBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicCameraBuiltin();
			return (CustomLogicCameraBuiltin)__this;
		}
	}

	[Token(Token = "0x20005A4")]
	public static class Bindings
	{
		[Token(Token = "0x4001899")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003394")]
		[Address(RVA = "0x59C6280", Offset = "0x59C5280", VA = "0x59C6280")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicCameraBuiltin> pCVar3;
			CLMethodBinding<CustomLogicCameraBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x6dd1aa8b) {
				if (uVar2 < 0x42f35941) {
					if (uVar2 < 0x1e9e9f86) {
						if (uVar2 == 0x232777f) {
							bVar1 = (name == "Rotation");
							if (bVar1) {
								pCVar3 = CustomLogicCameraBuiltin.Bindings.__CreatePropertyBinding__Rotation();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1e9e9f85) {
							bVar1 = (name == "Right");
							if (bVar1) {
								pCVar3 = CustomLogicCameraBuiltin.Bindings.__CreatePropertyBinding__Right();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x24a169e7) {
						bVar1 = (name == "SetCameraMode");
						if (bVar1) {
							pCVar4 = CustomLogicCameraBuiltin.Bindings.__CreateMethodBinding__SetCameraMode();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x2e32cf0b) {
						bVar1 = (name == "FollowDistance");
						if (bVar1) {
							pCVar3 = CustomLogicCameraBuiltin.Bindings.__CreatePropertyBinding__FollowDistance();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x42f35940) {
						bVar1 = (name == "Up");
						if (bVar1) {
							pCVar3 = CustomLogicCameraBuiltin.Bindings.__CreatePropertyBinding__Up();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x56e974f5) {
					if (uVar2 == 0x51f457ad) {
						bVar1 = (name == "SetCursorVisible");
						if (bVar1) {
							pCVar4 = CustomLogicCameraBuiltin.Bindings.__CreateMethodBinding__SetCursorVisible();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x56e974f4) {
						bVar1 = (name == "SetVelocity");
						if (bVar1) {
							pCVar4 = CustomLogicCameraBuiltin.Bindings.__CreateMethodBinding__SetVelocity();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 == 0x5853691b) {
					bVar1 = (name == "ResetDistance");
					if (bVar1) {
						pCVar4 = CustomLogicCameraBuiltin.Bindings.__CreateMethodBinding__ResetDistance();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x5e2c4c73) {
					bVar1 = (name == "LookAt");
					if (bVar1) {
						pCVar4 = CustomLogicCameraBuiltin.Bindings.__CreateMethodBinding__LookAt();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x6dd1aa8a) {
					bVar1 = (name == "SetCameraLocked");
					if (bVar1) {
						pCVar4 = CustomLogicCameraBuiltin.Bindings.__CreateMethodBinding__SetCameraLocked();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xd6a213a9) {
				if (uVar2 < 0x8adad751) {
					if (uVar2 == 0x8adad750) {
						bVar1 = (name == "SetPosition");
						if (bVar1) {
							pCVar4 = CustomLogicCameraBuiltin.Bindings.__CreateMethodBinding__SetPosition();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x6fcec725) {
						bVar1 = (name == "SetManual");
						if (bVar1) {
							pCVar4 = CustomLogicCameraBuiltin.Bindings.__CreateMethodBinding__SetManual();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 == 0xba408252) {
					bVar1 = (name == "Velocity");
					if (bVar1) {
						pCVar3 = CustomLogicCameraBuiltin.Bindings.__CreatePropertyBinding__Velocity();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xd11e3ab2) {
					bVar1 = (name == "SetFOV");
					if (bVar1) {
						pCVar4 = CustomLogicCameraBuiltin.Bindings.__CreateMethodBinding__SetFOV();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xd6a213a8) {
					bVar1 = (name == "ResetCameraMode");
					if (bVar1) {
						pCVar4 = CustomLogicCameraBuiltin.Bindings.__CreateMethodBinding__ResetCameraMode();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xe27f342b) {
				if (uVar2 == 0xdc33653d) {
					bVar1 = (name == "SetRotation");
					if (bVar1) {
						pCVar4 = CustomLogicCameraBuiltin.Bindings.__CreateMethodBinding__SetRotation();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xdeef5e95) {
					bVar1 = (name == "CameraMode");
					if (bVar1) {
						pCVar3 = CustomLogicCameraBuiltin.Bindings.__CreatePropertyBinding__CameraMode();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe27f342a) {
					bVar1 = (name == "Position");
					if (bVar1) {
						pCVar3 = CustomLogicCameraBuiltin.Bindings.__CreatePropertyBinding__Position();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xe50883ba) {
				bVar1 = (name == "Forward");
				if (bVar1) {
					pCVar3 = CustomLogicCameraBuiltin.Bindings.__CreatePropertyBinding__Forward();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf3cda0fc) {
				bVar1 = (name == "FOV");
				if (bVar1) {
					pCVar3 = CustomLogicCameraBuiltin.Bindings.__CreatePropertyBinding__FOV();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf1bacbd3) {
				bVar1 = (name == "IsManual");
				if (bVar1) {
					pCVar3 = CustomLogicCameraBuiltin.Bindings.__CreatePropertyBinding__IsManual();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCameraBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003395")]
		[Address(RVA = "0x59C6A80", Offset = "0x59C5A80", VA = "0x59C6A80")]
		public static CLPropertyBinding<CustomLogicCameraBuiltin> __CreatePropertyBinding__IsManual()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__IsManual): 2 lines keep C-only constructs
			Func<CustomLogicCameraBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCameraBuiltin> __this_00;

			__this = new Func<CustomLogicCameraBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__IsManual_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicCameraBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003396")]
		[Address(RVA = "0x59C6B20", Offset = "0x59C5B20", VA = "0x59C6B20")]
		public static CLPropertyBinding<CustomLogicCameraBuiltin> __CreatePropertyBinding__Position()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Position): 2 lines keep C-only constructs
			Func<CustomLogicCameraBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCameraBuiltin> __this_00;

			__this = new Func<CustomLogicCameraBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicCameraBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003397")]
		[Address(RVA = "0x59C6BC0", Offset = "0x59C5BC0", VA = "0x59C6BC0")]
		public static CLPropertyBinding<CustomLogicCameraBuiltin> __CreatePropertyBinding__Rotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Rotation): 2 lines keep C-only constructs
			Func<CustomLogicCameraBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCameraBuiltin> __this_00;

			__this = new Func<CustomLogicCameraBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicCameraBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003398")]
		[Address(RVA = "0x59C6C60", Offset = "0x59C5C60", VA = "0x59C6C60")]
		public static CLPropertyBinding<CustomLogicCameraBuiltin> __CreatePropertyBinding__Velocity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Velocity): 2 lines keep C-only constructs
			Func<CustomLogicCameraBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCameraBuiltin> __this_00;

			__this = new Func<CustomLogicCameraBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Velocity_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicCameraBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003399")]
		[Address(RVA = "0x59C6D00", Offset = "0x59C5D00", VA = "0x59C6D00")]
		public static CLPropertyBinding<CustomLogicCameraBuiltin> __CreatePropertyBinding__FOV()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__FOV): 2 lines keep C-only constructs
			Func<CustomLogicCameraBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCameraBuiltin> __this_00;

			__this = new Func<CustomLogicCameraBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FOV_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicCameraBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600339A")]
		[Address(RVA = "0x59C6DA0", Offset = "0x59C5DA0", VA = "0x59C6DA0")]
		public static CLPropertyBinding<CustomLogicCameraBuiltin> __CreatePropertyBinding__CameraMode()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__CameraMode): 2 lines keep C-only constructs
			Func<CustomLogicCameraBuiltin, object> __this;
			CLPropertyBinding<CustomLogicCameraBuiltin> __this_00;

			__this = new Func<CustomLogicCameraBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__CameraMode_g____getter_7);
			__this_00 = new CLPropertyBinding<CustomLogicCameraBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600339B")]
		[Address(RVA = "0x59C6E40", Offset = "0x59C5E40", VA = "0x59C6E40")]
		public static CLPropertyBinding<CustomLogicCameraBuiltin> __CreatePropertyBinding__Forward()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Forward): 4 lines keep C-only constructs
			Func<CustomLogicCameraBuiltin, object> __this;
			Action<CustomLogicCameraBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCameraBuiltin> __this_01;

			__this = new Func<CustomLogicCameraBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_8_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicCameraBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_8_1);
			__this_01 = new CLPropertyBinding<CustomLogicCameraBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600339C")]
		[Address(RVA = "0x59C6F20", Offset = "0x59C5F20", VA = "0x59C6F20")]
		public static CLPropertyBinding<CustomLogicCameraBuiltin> __CreatePropertyBinding__Right()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Right): 4 lines keep C-only constructs
			Func<CustomLogicCameraBuiltin, object> __this;
			Action<CustomLogicCameraBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCameraBuiltin> __this_01;

			__this = new Func<CustomLogicCameraBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_9_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicCameraBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_9_1);
			__this_01 = new CLPropertyBinding<CustomLogicCameraBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600339D")]
		[Address(RVA = "0x59C7000", Offset = "0x59C6000", VA = "0x59C7000")]
		public static CLPropertyBinding<CustomLogicCameraBuiltin> __CreatePropertyBinding__Up()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Up): 4 lines keep C-only constructs
			Func<CustomLogicCameraBuiltin, object> __this;
			Action<CustomLogicCameraBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCameraBuiltin> __this_01;

			__this = new Func<CustomLogicCameraBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_10_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicCameraBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_10_1);
			__this_01 = new CLPropertyBinding<CustomLogicCameraBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600339E")]
		[Address(RVA = "0x59C70E0", Offset = "0x59C60E0", VA = "0x59C70E0")]
		public static CLPropertyBinding<CustomLogicCameraBuiltin> __CreatePropertyBinding__FollowDistance()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__FollowDistance): 4 lines keep C-only constructs
			Func<CustomLogicCameraBuiltin, object> __this;
			Action<CustomLogicCameraBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicCameraBuiltin> __this_01;

			__this = new Func<CustomLogicCameraBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FollowDistance_g____gette);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicCameraBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FollowDistance_g____sette);
			__this_01 = new CLPropertyBinding<CustomLogicCameraBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600339F")]
		[Address(RVA = "0x59C71C0", Offset = "0x59C61C0", VA = "0x59C71C0")]
		public static CLMethodBinding<CustomLogicCameraBuiltin> __CreateMethodBinding__SetManual()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetManual): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCameraBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCameraBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546c82 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicCameraBuiltin>)) ;
				Il2CppMethodInitialized_07546c82 = true;
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicCameraBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__12_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCameraBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__12_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCameraBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCameraBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetManual_b__12_0);
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				pCVar2.__9__12_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCameraBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60033A0")]
		[Address(RVA = "0x59C7300", Offset = "0x59C6300", VA = "0x59C7300")]
		public static CLMethodBinding<CustomLogicCameraBuiltin> __CreateMethodBinding__SetPosition()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetPosition): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCameraBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCameraBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546c83 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicCameraBuiltin>)) ;
				Il2CppMethodInitialized_07546c83 = true;
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicCameraBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__13_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCameraBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__13_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCameraBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCameraBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetPosition_b__13_0);
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				pCVar2.__9__13_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCameraBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60033A1")]
		[Address(RVA = "0x59C7440", Offset = "0x59C6440", VA = "0x59C7440")]
		public static CLMethodBinding<CustomLogicCameraBuiltin> __CreateMethodBinding__SetRotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetRotation): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCameraBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCameraBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546c84 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicCameraBuiltin>)) ;
				Il2CppMethodInitialized_07546c84 = true;
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicCameraBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__14_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCameraBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__14_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCameraBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCameraBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetRotation_b__14_0);
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				pCVar2.__9__14_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCameraBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60033A2")]
		[Address(RVA = "0x59C7580", Offset = "0x59C6580", VA = "0x59C7580")]
		public static CLMethodBinding<CustomLogicCameraBuiltin> __CreateMethodBinding__SetVelocity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetVelocity): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCameraBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCameraBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546c85 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicCameraBuiltin>)) ;
				Il2CppMethodInitialized_07546c85 = true;
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicCameraBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__15_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCameraBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__15_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCameraBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCameraBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetVelocity_b__15_0);
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				pCVar2.__9__15_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCameraBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60033A3")]
		[Address(RVA = "0x59C76C0", Offset = "0x59C66C0", VA = "0x59C76C0")]
		public static CLMethodBinding<CustomLogicCameraBuiltin> __CreateMethodBinding__LookAt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__LookAt): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCameraBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCameraBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546c86 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicCameraBuiltin>)) ;
				Il2CppMethodInitialized_07546c86 = true;
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicCameraBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__16_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCameraBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__16_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCameraBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCameraBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__16_0);
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				pCVar2.__9__16_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCameraBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60033A4")]
		[Address(RVA = "0x59C7800", Offset = "0x59C6800", VA = "0x59C7800")]
		public static CLMethodBinding<CustomLogicCameraBuiltin> __CreateMethodBinding__SetFOV()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetFOV): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCameraBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCameraBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546c87 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicCameraBuiltin>)) ;
				Il2CppMethodInitialized_07546c87 = true;
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicCameraBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__17_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCameraBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__17_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCameraBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCameraBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetFOV_b__17_0);
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				pCVar2.__9__17_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCameraBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60033A5")]
		[Address(RVA = "0x59C7940", Offset = "0x59C6940", VA = "0x59C7940")]
		public static CLMethodBinding<CustomLogicCameraBuiltin> __CreateMethodBinding__SetCameraMode()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetCameraMode): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCameraBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCameraBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546c88 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicCameraBuiltin>)) ;
				Il2CppMethodInitialized_07546c88 = true;
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicCameraBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__18_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCameraBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__18_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCameraBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCameraBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCameraMode_b__18_0);
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				pCVar2.__9__18_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCameraBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60033A6")]
		[Address(RVA = "0x59C7A80", Offset = "0x59C6A80", VA = "0x59C7A80")]
		public static CLMethodBinding<CustomLogicCameraBuiltin> __CreateMethodBinding__ResetDistance()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__ResetDistance): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCameraBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCameraBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546c89 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicCameraBuiltin>)) ;
				Il2CppMethodInitialized_07546c89 = true;
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicCameraBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__19_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCameraBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__19_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCameraBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCameraBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__ResetDistance_b__19_0);
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				pCVar2.__9__19_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCameraBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60033A7")]
		[Address(RVA = "0x59C7BC0", Offset = "0x59C6BC0", VA = "0x59C7BC0")]
		public static CLMethodBinding<CustomLogicCameraBuiltin> __CreateMethodBinding__ResetCameraMode()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__ResetCameraMode): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCameraBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCameraBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546c8a == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicCameraBuiltin>)) ;
				Il2CppMethodInitialized_07546c8a = true;
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicCameraBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__20_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCameraBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__20_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCameraBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCameraBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__ResetCameraMode_b__20_0);
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				pCVar2.__9__20_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCameraBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60033A8")]
		[Address(RVA = "0x59C7D00", Offset = "0x59C6D00", VA = "0x59C7D00")]
		public static CLMethodBinding<CustomLogicCameraBuiltin> __CreateMethodBinding__SetCameraLocked()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetCameraLocked): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCameraBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCameraBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546c8b == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicCameraBuiltin>)) ;
				Il2CppMethodInitialized_07546c8b = true;
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicCameraBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__21_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCameraBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__21_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCameraBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCameraBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCameraLocked_b__21_0);
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				pCVar2.__9__21_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCameraBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60033A9")]
		[Address(RVA = "0x59C7E40", Offset = "0x59C6E40", VA = "0x59C7E40")]
		public static CLMethodBinding<CustomLogicCameraBuiltin> __CreateMethodBinding__SetCursorVisible()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetCursorVisible): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicCameraBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicCameraBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546c8c == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicCameraBuiltin>)) ;
				Il2CppMethodInitialized_07546c8c = true;
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicCameraBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicCameraBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__22_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicCameraBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__22_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicCameraBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicCameraBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCursorVisible_b__22_0);
				pCVar2 = typeof(CustomLogicCameraBuiltin.Bindings.c).static_fields;
				pCVar2.__9__22_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicCameraBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x17000966")]
	public static InGameCamera CurrentCamera
	{
		[Token(Token = "0x6003375")]
		[Address(RVA = "0x59C49D0", Offset = "0x59C39D0", VA = "0x59C49D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$get_CurrentCamera): 1 lines keep C-only constructs
			byte bVar1;
			InGameCamera pCVar2;

			pCVar2 = (InGameCamera)SceneLoader.CurrentCamera;
			if (pCVar2 != null) {
				bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
				if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
					throw new InvalidCastException();
				}
			}
			return pCVar2;
		}
	}

	[Token(Token = "0x17000967")]
	public static bool IsManual
	{
		[Token(Token = "0x6003376")]
		[Address(RVA = "0x59C4A50", Offset = "0x59C3A50", VA = "0x59C4A50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$get_IsManual): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546c5f == false) {
				Il2CppMethodInitialized_07546c5f = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicManager.ManualCamera;
			}
			return (bool)*(byte)((long)(typeof(CustomLogicManager)).static_fields + 0x49);
		}
	}

	[Token(Token = "0x17000968")]
	public static CustomLogicVector3Builtin Position
	{
		[Token(Token = "0x6003377")]
		[Address(RVA = "0x59C4AC0", Offset = "0x59C3AC0", VA = "0x59C4AC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$get_Position): 1 lines keep C-only constructs
			byte bVar1;
			BaseCamera pCVar2;
			BaseComponentCache pUVar3;
			Transform __this;
			CustomLogicVector3Builtin __this_00;
			Vector3 value;

			pCVar2 = SceneLoader.CurrentCamera;
			if (pCVar2 != null) {
				bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
				if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
					throw new InvalidCastException();
				}
				pUVar3 = pCVar2.Cache;
				if ((pUVar3 != null) &&(__this = pUVar3.Transform, __this != null)) {
					value = __this.position;
					__this_00 = new CustomLogicVector3Builtin(value);
					return __this_00;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000969")]
	public static CustomLogicVector3Builtin Rotation
	{
		[Token(Token = "0x6003378")]
		[Address(RVA = "0x59C4BB0", Offset = "0x59C3BB0", VA = "0x59C4BB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$get_Rotation): 1 lines keep C-only constructs
			byte bVar1;
			BaseCamera pCVar2;
			BaseComponentCache pUVar3;
			Transform __this;
			CustomLogicVector3Builtin __this_00;
			Vector3 UVar4;
			Vector3 euler;
			Quaternion local_18;

			pCVar2 = SceneLoader.CurrentCamera;
			if (pCVar2 != null) {
				bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
				if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
					throw new InvalidCastException();
				}
				pUVar3 = pCVar2.Cache;
				if ((pUVar3 != null) &&(__this = pUVar3.Transform, __this != null)) {
					local_18 = __this.rotation;
					UVar4 = Quaternion.Internal_ToEulerRad(ref local_18);
					euler.x = UVar4.x * 57.29578;
					euler.y = UVar4.y * 57.29578;
					euler.z = UVar4.z * 57.29578;
					UVar4 = Quaternion.Internal_MakePositive(euler);
					__this_00 = new CustomLogicVector3Builtin(UVar4);
					return __this_00;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700096A")]
	public static CustomLogicVector3Builtin Velocity
	{
		[Token(Token = "0x6003379")]
		[Address(RVA = "0x59C4CE0", Offset = "0x59C3CE0", VA = "0x59C4CE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$get_Velocity): clean
			Vector3 value;
			CustomLogicVector3Builtin __this;

			value = (CustomLogicManager.CameraVelocity);
			__this = new CustomLogicVector3Builtin((Vector3)value);
			return __this;
		}
	}

	[Token(Token = "0x1700096B")]
	public static float FOV
	{
		[Token(Token = "0x600337A")]
		[Address(RVA = "0x59C4D80", Offset = "0x59C3D80", VA = "0x59C4D80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$get_FOV): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546c63 == false) {
				Il2CppMethodInitialized_07546c63 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicManager.CameraFOV;
			}
			return *(float)((long)(typeof(CustomLogicManager)).static_fields + 0x4c);
		}
	}

	[Token(Token = "0x1700096C")]
	public static string CameraMode
	{
		[Token(Token = "0x600337B")]
		[Address(RVA = "0x59C4DF0", Offset = "0x59C3DF0", VA = "0x59C4DF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$get_CameraMode): 2 lines keep C-only constructs
			byte bVar1;
			uint uVar2;
			System_Nullable_CameraInputMode__Fields SVar3;
			BaseCamera pCVar4;
			sbyte cVar5;
			String pSVar6;
			Enum local_20;
			int local_10;

			if (Il2CppMethodInitialized_07546c64 == false) {
				Il2CppMethodInitialized_07546c64 = true;
				uVar2 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				SVar3 = (CustomLogicManager.CameraMode);
				cVar5 = SVar3.hasValue;
			}
			else {
				SVar3 = *(System_Nullable_CameraInputMode__Fields)((long)(typeof(CustomLogicManager)).static_fields + 0x78);
				cVar5 = SVar3.hasValue;
			}
			if (cVar5 == false) {
				pCVar4 = SceneLoader.CurrentCamera;
				if (pCVar4 == null) {
					throw new NullReferenceException();
				}
				bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
				if (((pCVar4.klass._2).typeHierarchyDepth < bVar1) ||((pCVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
					throw new InvalidCastException();
				}
				local_10 = *(int)&(*(ulong)((sbyte)pCVar4 + 0x68));
			}
			else {
			}
			local_20.klass = (Enum)typeof(CameraInputMode);
			local_20.monitor = (IntPtr)0xffffffffffffffff;
			return pSVar6;
		}
	}

	[Token(Token = "0x1700096D")]
	public static CustomLogicVector3Builtin Forward
	{
		[Token(Token = "0x600337C")]
		[Address(RVA = "0x59C4F40", Offset = "0x59C3F40", VA = "0x59C4F40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$get_Forward): 1 lines keep C-only constructs
			byte bVar1;
			BaseCamera pCVar2;
			BaseComponentCache pUVar3;
			Transform __this;
			CustomLogicVector3Builtin __this_00;
			Vector3 value;

			pCVar2 = SceneLoader.CurrentCamera;
			if (pCVar2 != null) {
				bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
				if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
					throw new InvalidCastException();
				}
				pUVar3 = pCVar2.Cache;
				if ((pUVar3 != null) &&(__this = pUVar3.Transform, __this != null)) {
					value = __this.forward;
					__this_00 = new CustomLogicVector3Builtin(value);
					return __this_00;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x600337D")]
		[Address(RVA = "0x59C5030", Offset = "0x59C4030", VA = "0x59C5030")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$set_Forward): 2 lines keep C-only constructs
			byte bVar1;
			BaseCamera pCVar2;
			BaseComponentCache pUVar3;
			Transform pUVar4;
			Vector3 UVar6;
			Vector3 euler;
			Quaternion UStack_28;

			pCVar2 = SceneLoader.CurrentCamera;
			if (pCVar2 != null) {
				bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
				if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
		label_05ac5205: ;
					throw new InvalidCastException();
				}
				pUVar3 = pCVar2.Cache;
				if ((pUVar3 != null) &&((value != null &&(pUVar4 = pUVar3.Transform, pUVar4 != null)))) {
					pUVar4.forward = (Vector3)value.Value;
					pCVar2 = SceneLoader.CurrentCamera;
					if (pCVar2 != null) {
						bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
						if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameCamera))) goto label_05ac5205;
						pUVar3 = pCVar2.Cache;
						if ((pUVar3 != null) &&(pUVar4 = pUVar3.Transform, pUVar4 != null)) {
							UStack_28 = pUVar4.rotation;
							UVar6 = Quaternion.Internal_ToEulerRad(ref UStack_28);
							euler.x = UVar6.x * 57.29578;
							euler.y = UVar6.y * 57.29578;
							euler.z = UVar6.z * 57.29578;
							UVar6 = Quaternion.Internal_MakePositive(euler);
							(CustomLogicManager.CameraRotation).x = UVar6.x;
							(CustomLogicManager.CameraRotation).y = UVar6.y;
							(CustomLogicManager.CameraRotation).z = UVar6.z;
							return;
						}
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700096E")]
	public static CustomLogicVector3Builtin Right
	{
		[Token(Token = "0x600337E")]
		[Address(RVA = "0x59C5210", Offset = "0x59C4210", VA = "0x59C5210")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$get_Right): 1 lines keep C-only constructs
			byte bVar1;
			BaseCamera pCVar2;
			BaseComponentCache pUVar3;
			Transform __this;
			CustomLogicVector3Builtin __this_00;
			Vector3 value;

			pCVar2 = SceneLoader.CurrentCamera;
			if (pCVar2 != null) {
				bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
				if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
					throw new InvalidCastException();
				}
				pUVar3 = pCVar2.Cache;
				if ((pUVar3 != null) &&(__this = pUVar3.Transform, __this != null)) {
					value = __this.right;
					__this_00 = new CustomLogicVector3Builtin(value);
					return __this_00;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x600337F")]
		[Address(RVA = "0x59C5300", Offset = "0x59C4300", VA = "0x59C5300")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$set_Right): 2 lines keep C-only constructs
			byte bVar1;
			BaseCamera pCVar2;
			BaseComponentCache pUVar3;
			Transform pUVar4;
			Vector3 UVar6;
			Vector3 euler;
			Quaternion UStack_28;

			pCVar2 = SceneLoader.CurrentCamera;
			if (pCVar2 != null) {
				bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
				if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
		label_05ac54d5: ;
					throw new InvalidCastException();
				}
				pUVar3 = pCVar2.Cache;
				if ((pUVar3 != null) &&((value != null &&(pUVar4 = pUVar3.Transform, pUVar4 != null)))) {
					pUVar4.right = (Vector3)value.Value;
					pCVar2 = SceneLoader.CurrentCamera;
					if (pCVar2 != null) {
						bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
						if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameCamera))) goto label_05ac54d5;
						pUVar3 = pCVar2.Cache;
						if ((pUVar3 != null) &&(pUVar4 = pUVar3.Transform, pUVar4 != null)) {
							UStack_28 = pUVar4.rotation;
							UVar6 = Quaternion.Internal_ToEulerRad(ref UStack_28);
							euler.x = UVar6.x * 57.29578;
							euler.y = UVar6.y * 57.29578;
							euler.z = UVar6.z * 57.29578;
							UVar6 = Quaternion.Internal_MakePositive(euler);
							(CustomLogicManager.CameraRotation).x = UVar6.x;
							(CustomLogicManager.CameraRotation).y = UVar6.y;
							(CustomLogicManager.CameraRotation).z = UVar6.z;
							return;
						}
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700096F")]
	public static CustomLogicVector3Builtin Up
	{
		[Token(Token = "0x6003380")]
		[Address(RVA = "0x59C54E0", Offset = "0x59C44E0", VA = "0x59C54E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$get_Up): 1 lines keep C-only constructs
			byte bVar1;
			BaseCamera pCVar2;
			BaseComponentCache pUVar3;
			Transform __this;
			CustomLogicVector3Builtin __this_00;
			Vector3 value;

			pCVar2 = SceneLoader.CurrentCamera;
			if (pCVar2 != null) {
				bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
				if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
					throw new InvalidCastException();
				}
				pUVar3 = pCVar2.Cache;
				if ((pUVar3 != null) &&(__this = pUVar3.Transform, __this != null)) {
					value = __this.up;
					__this_00 = new CustomLogicVector3Builtin(value);
					return __this_00;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6003381")]
		[Address(RVA = "0x59C55D0", Offset = "0x59C45D0", VA = "0x59C55D0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$set_Up): 2 lines keep C-only constructs
			byte bVar1;
			BaseCamera pCVar2;
			BaseComponentCache pUVar3;
			Transform pUVar4;
			Vector3 UVar6;
			Vector3 euler;
			Quaternion UStack_28;

			pCVar2 = SceneLoader.CurrentCamera;
			if (pCVar2 != null) {
				bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
				if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
		label_05ac57a5: ;
					throw new InvalidCastException();
				}
				pUVar3 = pCVar2.Cache;
				if ((pUVar3 != null) &&((value != null &&(pUVar4 = pUVar3.Transform, pUVar4 != null)))) {
					pUVar4.up = (Vector3)value.Value;
					pCVar2 = SceneLoader.CurrentCamera;
					if (pCVar2 != null) {
						bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
						if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameCamera))) goto label_05ac57a5;
						pUVar3 = pCVar2.Cache;
						if ((pUVar3 != null) &&(pUVar4 = pUVar3.Transform, pUVar4 != null)) {
							UStack_28 = pUVar4.rotation;
							UVar6 = Quaternion.Internal_ToEulerRad(ref UStack_28);
							euler.x = UVar6.x * 57.29578;
							euler.y = UVar6.y * 57.29578;
							euler.z = UVar6.z * 57.29578;
							UVar6 = Quaternion.Internal_MakePositive(euler);
							(CustomLogicManager.CameraRotation).x = UVar6.x;
							(CustomLogicManager.CameraRotation).y = UVar6.y;
							(CustomLogicManager.CameraRotation).z = UVar6.z;
							return;
						}
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000970")]
	public static float FollowDistance
	{
		[Token(Token = "0x6003382")]
		[Address(RVA = "0x59C57B0", Offset = "0x59C47B0", VA = "0x59C57B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$get_FollowDistance): 1 lines keep C-only constructs
			byte bVar1;
			InGameCamera __this;
			float fVar2;

			__this = (InGameCamera)SceneLoader.CurrentCamera;
			if (__this == null) {
				throw new NullReferenceException();
			}
			bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
			if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
				throw new InvalidCastException();
			}
			return fVar2;
		}
		[Token(Token = "0x6003383")]
		[Address(RVA = "0x59C5830", Offset = "0x59C4830", VA = "0x59C5830")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$set_FollowDistance): 1 lines keep C-only constructs
			byte bVar1;
			BaseCamera pCVar2;

			pCVar2 = SceneLoader.CurrentCamera;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
			if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
				throw new InvalidCastException();
			}
			*(float)((long)&(*(ulong)((sbyte)pCVar2 + 0x68)) + 4) = value;
			return;
		}
	}

	[Token(Token = "0x17000971")]
	public override string ClassName
	{
		[Token(Token = "0x600338F")]
		[Address(RVA = "0x59C6100", Offset = "0x59C5100", VA = "0x59C6100", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$get_ClassName): clean
			return "Camera";
		}
	}

	[Token(Token = "0x17000972")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003390")]
		[Address(RVA = "0x59C6130", Offset = "0x59C5130", VA = "0x59C6130", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000973")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003391")]
		[Address(RVA = "0x59C6140", Offset = "0x59C5140", VA = "0x59C6140", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000974")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003392")]
		[Address(RVA = "0x59C6150", Offset = "0x59C5150", VA = "0x59C6150", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003374")]
	[Address(RVA = "0x59C4960", Offset = "0x59C3960", VA = "0x59C4960")]
	public CustomLogicCameraBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546c5d == false) {
			Il2CppMethodInitialized_07546c5d = true;
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

	[Token(Token = "0x6003384")]
	[Address(RVA = "0x59C58C0", Offset = "0x59C48C0", VA = "0x59C58C0")]
	public static void SetManual(bool manual)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$SetManual): clean
		CustomLogicManager.ManualCamera = manual;
		return;
	}

	[Token(Token = "0x6003385")]
	[Address(RVA = "0x59C5910", Offset = "0x59C4910", VA = "0x59C5910")]
	public static void SetPosition(CustomLogicVector3Builtin position)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$SetPosition): 1 lines keep C-only constructs
		byte bVar1;
		float fVar2;
		InGameCamera __this;
		float fVar4;
		float fVar5;

		if (position != null) {
			fVar2 = position.Value.z;
			fVar4 = position.Value.x;
			fVar5 = position.Value.y;
			(CustomLogicManager.CameraPosition).z = fVar2;
			(CustomLogicManager.CameraPosition).x = fVar4;
			(CustomLogicManager.CameraPosition).y = fVar5;
			__this = (InGameCamera)SceneLoader.CurrentCamera;
			if (__this != null) {
				bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
				if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera)) ) {
					throw new InvalidCastException();
				}
				__this.SyncCustomPosition();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003386")]
	[Address(RVA = "0x59C59F0", Offset = "0x59C49F0", VA = "0x59C59F0")]
	public static void SetRotation(CustomLogicVector3Builtin rotation)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$SetRotation): 1 lines keep C-only constructs
		byte bVar1;
		float fVar2;
		InGameCamera __this;
		float fVar4;
		float fVar5;

		if (rotation != null) {
			fVar2 = rotation.Value.z;
			fVar4 = rotation.Value.x;
			fVar5 = rotation.Value.y;
			(CustomLogicManager.CameraRotation).z = fVar2;
			(CustomLogicManager.CameraRotation).x = fVar4;
			(CustomLogicManager.CameraRotation).y = fVar5;
			__this = (InGameCamera)SceneLoader.CurrentCamera;
			if (__this != null) {
				bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
				if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera)) ) {
					throw new InvalidCastException();
				}
				__this.SyncCustomPosition();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003387")]
	[Address(RVA = "0x59C5AD0", Offset = "0x59C4AD0", VA = "0x59C5AD0")]
	public static void SetVelocity(CustomLogicVector3Builtin velocity)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$SetVelocity): clean
		float fVar1;
		float fVar3;
		float fVar4;

		if (velocity == null) {
			throw new NullReferenceException();
		}
		fVar1 = velocity.Value.z;
		fVar3 = velocity.Value.x;
		fVar4 = velocity.Value.y;
		(CustomLogicManager.CameraVelocity).z = fVar1;
		(CustomLogicManager.CameraVelocity).x = fVar3;
		(CustomLogicManager.CameraVelocity).y = fVar4;
		return;
	}

	[Token(Token = "0x6003388")]
	[Address(RVA = "0x59C5B50", Offset = "0x59C4B50", VA = "0x59C5B50")]
	public static void LookAt(CustomLogicVector3Builtin position)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$LookAt): 2 lines keep C-only constructs
		byte bVar1;
		BaseCamera pCVar2;
		BaseComponentCache pUVar3;
		Transform pUVar4;
		Vector3 UVar6;
		Vector3 euler;
		Quaternion local_28;

		pCVar2 = SceneLoader.CurrentCamera;
		if (pCVar2 != null) {
			bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
			if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
	label_05ac5d25: ;
				throw new InvalidCastException();
			}
			pUVar3 = pCVar2.Cache;
			if ((pUVar3 != null) &&((position != null &&(pUVar4 = pUVar3.Transform, pUVar4 != null)))) {
				pUVar4.LookAt((Vector3)position.Value);
				pCVar2 = SceneLoader.CurrentCamera;
				if (pCVar2 != null) {
					bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
					if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameCamera))) goto label_05ac5d25;
					pUVar3 = pCVar2.Cache;
					if ((pUVar3 != null) &&(pUVar4 = pUVar3.Transform, pUVar4 != null)) {
						local_28 = pUVar4.rotation;
						UVar6 = Quaternion.Internal_ToEulerRad(ref local_28);
						euler.x = UVar6.x * 57.29578;
						euler.y = UVar6.y * 57.29578;
						euler.z = UVar6.z * 57.29578;
						UVar6 = Quaternion.Internal_MakePositive(euler);
						(CustomLogicManager.CameraRotation).x = UVar6.x;
						(CustomLogicManager.CameraRotation).y = UVar6.y;
						(CustomLogicManager.CameraRotation).z = UVar6.z;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003389")]
	[Address(RVA = "0x59C5D30", Offset = "0x59C4D30", VA = "0x59C5D30")]
	public static void SetFOV(float fov)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$SetFOV): clean
		CustomLogicManager.CameraFOV = fov;
		return;
	}

	[Token(Token = "0x600338A")]
	[Address(RVA = "0x59C5DA0", Offset = "0x59C4DA0", VA = "0x59C5DA0")]
	public static void SetCameraMode(string mode)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$SetCameraMode): 1 lines keep C-only constructs
		bool bVar1;
		int value;
		System_Nullable_CameraInputMode__Fields local_10;

		bVar1 = (mode == "null");
		if (bVar1) {
			(CustomLogicManager.CameraMode) =(System_Nullable_CameraInputMode__Fields)0x0;
			return;
		}
		value = Enum.Parse<CameraInputMode>(mode);
		local_10.hasValue = false;
		local_10._1_3_ = 0;
		local_10.value = 0;
		local_10 = new Nullable<Int32Enum>(value);
		(CustomLogicManager.CameraMode) = local_10;
		return;
	}

	[Token(Token = "0x600338B")]
	[Address(RVA = "0x59C5EB0", Offset = "0x59C4EB0", VA = "0x59C5EB0")]
	public static void ResetDistance()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$ResetDistance): 1 lines keep C-only constructs
		byte bVar1;
		InGameCamera __this;

		__this = (InGameCamera)SceneLoader.CurrentCamera;
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
		if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
			throw new InvalidCastException();
		}
		__this.ResetDistance();
		return;
	}

	[Token(Token = "0x600338C")]
	[Address(RVA = "0x59C5F30", Offset = "0x59C4F30", VA = "0x59C5F30")]
	public static void ResetCameraMode()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$ResetCameraMode): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameCamera __this;

		if (Il2CppMethodInitialized_07546c72 == false) {
			Il2CppMethodInitialized_07546c72 = true;
			uVar2 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			(CustomLogicManager.CameraMode) =(System_Nullable_CameraInputMode__Fields)0x0;
		}
		else {
			*(ulong)((long)(typeof(CustomLogicManager)).static_fields + 0x78) = 0;
		}
		__this = (InGameCamera)SceneLoader.CurrentCamera;
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
		if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
			throw new InvalidCastException();
		}
		__this.ResetCameraMode();
		return;
	}

	[Token(Token = "0x600338D")]
	[Address(RVA = "0x59C6040", Offset = "0x59C5040", VA = "0x59C6040")]
	public static void SetCameraLocked(bool locked)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$SetCameraLocked): clean
		CustomLogicManager.CameraLocked = locked;
		return;
	}

	[Token(Token = "0x600338E")]
	[Address(RVA = "0x59C60A0", Offset = "0x59C50A0", VA = "0x59C60A0")]
	public static void SetCursorVisible(bool visible)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c (CustomLogic.CustomLogicCameraBuiltin$$SetCursorVisible): clean
		CustomLogicManager.CursorVisible = visible;
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicCameraBuiltin.c.

	// CustomLogic.CustomLogicCameraBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"IsManual");
		__this.Add((Il2CppObject *)"Position");
		__this.Add((Il2CppObject *)"Rotation");
		__this.Add((Il2CppObject *)"Velocity");
		__this.Add((Il2CppObject *)"FOV");
		__this.Add((Il2CppObject *)"CameraMode");
		__this.Add((Il2CppObject *)"Forward");
		__this.Add((Il2CppObject *)"Right");
		__this.Add((Il2CppObject *)"Up");
		__this.Add((Il2CppObject *)"FollowDistance");
		__this.Add((Il2CppObject *)"SetManual");
		__this.Add((Il2CppObject *)"SetPosition");
		__this.Add((Il2CppObject *)"SetRotation");
		__this.Add((Il2CppObject *)"SetVelocity");
		__this.Add((Il2CppObject *)"LookAt");
		__this.Add((Il2CppObject *)"SetFOV");
		__this.Add((Il2CppObject *)"SetCameraMode");
		__this.Add((Il2CppObject *)"ResetDistance");
		__this.Add((Il2CppObject *)"ResetCameraMode");
		__this.Add((Il2CppObject *)"SetCameraLocked");
		__this.Add((Il2CppObject *)"SetCursorVisible");
		CustomLogicCameraBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__IsManual>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__IsManual_g____getter_2_0(CustomLogicCameraBuiltin __i)
	{
		uint uVar1;
		object pIVar2;

		if (Il2CppMethodInitialized_07546cdb == false) {
			Il2CppMethodInitialized_07546cdb = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		return pIVar2;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Position_g____getter_3_0(CustomLogicCameraBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicCameraBuiltin.Position;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Rotation_g____getter_4_0(CustomLogicCameraBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicCameraBuiltin.Rotation;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Velocity_g____getter_5_0(CustomLogicCameraBuiltin __i)
	{
		Vector3 value;
		CustomLogicVector3Builtin __this;

		value = (CustomLogicManager.CameraVelocity);
		__this = new CustomLogicVector3Builtin((Vector3)value);
		return (object)__this;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__FOV>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__FOV_g____getter_6_0(CustomLogicCameraBuiltin __i)
	{
		uint uVar1;
		object pIVar2;

		if (Il2CppMethodInitialized_07546cdc == false) {
			Il2CppMethodInitialized_07546cdc = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		return pIVar2;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__CameraMode>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__CameraMode_g____getter_7_0(CustomLogicCameraBuiltin __i)
	{
		String pSVar1;

		pSVar1 = CustomLogicCameraBuiltin.CameraMode;
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Forward_g____getter_8_0(CustomLogicCameraBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicCameraBuiltin.Forward;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____setter|8_1: clean
	private static void Bindings____CreatePropertyBinding__Forward_g____setter_8_1(CustomLogicCameraBuiltin __i, object __v)
	{
		CustomLogicVector3Builtin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		CustomLogicCameraBuiltin.Forward = value;
		return;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__Right_g____getter_9_0(CustomLogicCameraBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicCameraBuiltin.Right;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____setter|9_1: clean
	private static void Bindings____CreatePropertyBinding__Right_g____setter_9_1(CustomLogicCameraBuiltin __i, object __v)
	{
		CustomLogicVector3Builtin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		CustomLogicCameraBuiltin.Right = value;
		return;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__Up_g____getter_10_0(CustomLogicCameraBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicCameraBuiltin.Up;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____setter|10_1: clean
	private static void Bindings____CreatePropertyBinding__Up_g____setter_10_1(CustomLogicCameraBuiltin __i, object __v)
	{
		CustomLogicVector3Builtin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		CustomLogicCameraBuiltin.Up = value;
		return;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__FollowDistance>g____getter|11_0: 1 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__FollowDistance_g____getter_11_0(CustomLogicCameraBuiltin __i)
	{
		byte bVar1;
		InGameCamera __this;
		object pIVar2;
		byte[] auStack_4 = new byte[4];

		__this = (InGameCamera)SceneLoader.CurrentCamera;
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
		if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
			throw new InvalidCastException();
		}
		__this.GetCameraDistance();
		return pIVar2;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__FollowDistance>g____setter|11_1: 1 lines keep C-only constructs
	private static void Bindings____CreatePropertyBinding__FollowDistance_g____setter_11_1(CustomLogicCameraBuiltin __i, object __v)
	{
		byte bVar1;
		BaseCamera pCVar2;
		float fVar3;

		fVar3 = CustomLogicEvaluator.ConvertTo<float>(__v);
		pCVar2 = SceneLoader.CurrentCamera;
		if (pCVar2 == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
		if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
			throw new InvalidCastException();
		}
		*(float)((long)&(*(ulong)((sbyte)pCVar2 + 0x68)) + 4) = fVar3;
		return;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicCameraBuiltin.Bindings.c();
		CustomLogicCameraBuiltin.Bindings.c.__9 =(CustomLogicCameraBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetManual>b__12_0: clean
	private object Bindings_c____CreateMethodBinding__SetManual_b__12_0(CustomLogicCameraBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object obj;
		bool bVar2;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		bVar2 = CustomLogicEvaluator.ConvertTo<bool>(obj);
		if (Il2CppMethodInitialized_07546e96 == false) {
			Il2CppMethodInitialized_07546e96 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		CustomLogicManager.ManualCamera = bVar2;
		return null;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPosition>b__13_0: clean
	private object Bindings_c____CreateMethodBinding__SetPosition_b__13_0(CustomLogicCameraBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin position;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
		CustomLogicCameraBuiltin.SetPosition(position);
		return null;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetRotation>b__14_0: clean
	private object Bindings_c____CreateMethodBinding__SetRotation_b__14_0(CustomLogicCameraBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin rotation;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		rotation = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
		CustomLogicCameraBuiltin.SetRotation(rotation);
		return null;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetVelocity>b__15_0: clean
	private object Bindings_c____CreateMethodBinding__SetVelocity_b__15_0(CustomLogicCameraBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin velocity;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		velocity = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
		CustomLogicCameraBuiltin.SetVelocity(velocity);
		return null;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__LookAt>b__16_0: clean
	private object Bindings_c____CreateMethodBinding__LookAt_b__16_0(CustomLogicCameraBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin position;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
		CustomLogicCameraBuiltin.LookAt(position);
		return null;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetFOV>b__17_0: clean
	private object Bindings_c____CreateMethodBinding__SetFOV_b__17_0(CustomLogicCameraBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object obj;
		float fVar2;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		fVar2 = CustomLogicEvaluator.ConvertTo<float>(obj);
		if (Il2CppMethodInitialized_07546e97 == false) {
			Il2CppMethodInitialized_07546e97 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		CustomLogicManager.CameraFOV = fVar2;
		return null;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCameraMode>b__18_0: clean
	private object Bindings_c____CreateMethodBinding__SetCameraMode_b__18_0(CustomLogicCameraBuiltin __c, Object[] __a)
	{
		object obj;
		String mode;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		mode = CustomLogicEvaluator.ConvertTo<string>(obj);
		CustomLogicCameraBuiltin.SetCameraMode(mode);
		return null;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetDistance>b__19_0: clean
	private object Bindings_c____CreateMethodBinding__ResetDistance_b__19_0(CustomLogicCameraBuiltin __c, Object[] __a)
	{
		CustomLogicCameraBuiltin.ResetDistance();
		return null;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetCameraMode>b__20_0: clean
	private object Bindings_c____CreateMethodBinding__ResetCameraMode_b__20_0(CustomLogicCameraBuiltin __c, Object[] __a)
	{
		CustomLogicCameraBuiltin.ResetCameraMode();
		return null;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCameraLocked>b__21_0: clean
	private object Bindings_c____CreateMethodBinding__SetCameraLocked_b__21_0(CustomLogicCameraBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object obj;
		bool bVar2;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		bVar2 = CustomLogicEvaluator.ConvertTo<bool>(obj);
		if (Il2CppMethodInitialized_07546e98 == false) {
			Il2CppMethodInitialized_07546e98 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		CustomLogicManager.CameraLocked = bVar2;
		return null;
	}

	// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCursorVisible>b__22_0: clean
	private object Bindings_c____CreateMethodBinding__SetCursorVisible_b__22_0(CustomLogicCameraBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object obj;
		bool bVar2;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		bVar2 = CustomLogicEvaluator.ConvertTo<bool>(obj);
		if (Il2CppMethodInitialized_07546e99 == false) {
			Il2CppMethodInitialized_07546e99 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		CustomLogicManager.CursorVisible = bVar2;
		return null;
	}
}
