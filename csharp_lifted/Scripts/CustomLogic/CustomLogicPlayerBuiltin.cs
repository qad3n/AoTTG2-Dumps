// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicPlayerBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicPlayerBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Photon.Realtime;

namespace CustomLogic;

[Token(Token = "0x20004CA")]
[CompilerGenerated]
internal class CustomLogicPlayerBuiltin : BuiltinClassInstance, ICustomLogicEquals
{
	[Token(Token = "0x20004CB")]
	public static class Factory
	{
		[Token(Token = "0x6002453")]
		[Address(RVA = "0x59391A0", Offset = "0x59381A0", VA = "0x59391A0")]
		public static CustomLogicPlayerBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			object obj;
			Player pPVar1;
			CustomLogicPlayerBuiltin __this;
			String pSVar2;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this_00;
			MethodInfo lastManagedFrame;
			int local_14;

			if (args == null) {
				throw new NullReferenceException();
			}
			if ((int)args.Length != 1) {
				pSVar2 = local_14.ToString();
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPlayerBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar2 = String.Concat(str0, pSVar2, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar2);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			obj = args[0];
			pPVar1 = CustomLogicEvaluator.ConvertTo<Player>(obj);
			__this = new CustomLogicPlayerBuiltin();
			__this.Player = pPVar1;
			return __this;
		}
	}

	[Token(Token = "0x20004CC")]
	public static class Bindings
	{
		[Token(Token = "0x400176E")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002454")]
		[Address(RVA = "0x5939320", Offset = "0x5938320", VA = "0x5939320")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicPlayerBuiltin> pCVar3;
			CLMethodBinding<CustomLogicPlayerBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x7bf69371) {
				if (uVar2 < 0x2329c92d) {
					if (uVar2 < 0xfe07307) {
						if (uVar2 == 0x5ef20f) {
							bVar1 = (name == "Status");
							if (bVar1) {
								pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__Status();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xfe07306) {
							bVar1 = (name == "Name");
							if (bVar1) {
								pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__Name();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x209c92df) {
						bVar1 = (name == "UserID");
						if (bVar1) {
							pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__UserID();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x2267fabd) {
						bVar1 = (name == "ClearKDR");
						if (bVar1) {
							pCVar4 = CustomLogicPlayerBuiltin.Bindings.__CreateMethodBinding__ClearKDR();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x2329c92c) {
						bVar1 = (name == "Team");
						if (bVar1) {
							pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__Team();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x537d6b99) {
					if (uVar2 == 0x33b0223e) {
						bVar1 = (name == "IsAnonymous");
						if (bVar1) {
							pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__IsAnonymous();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x369870e0) {
						bVar1 = (name == "Guild");
						if (bVar1) {
							pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__Guild();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x537d6b98) {
						bVar1 = (name == "CharacterType");
						if (bVar1) {
							pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__CharacterType();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x56e8eb60) {
					bVar1 = (name == "ID");
					if (bVar1) {
						pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__ID();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x72527c0e) {
					bVar1 = (name == "SpawnPoint");
					if (bVar1) {
						pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__SpawnPoint();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x7bf69370) {
					bVar1 = (name == "Connected");
					if (bVar1) {
						pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__Connected();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xdbaad9bb) {
				if (uVar2 < 0xb404b03a) {
					if (uVar2 == 0xb404b039) {
						bVar1 = (name == "SetCustomProperty");
						if (bVar1) {
							pCVar4 = CustomLogicPlayerBuiltin.Bindings.__CreateMethodBinding__SetCustomProperty();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x7fb7f0a9) {
						bVar1 = (name == "Ping");
						if (bVar1) {
							pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__Ping();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xc835e055) {
					bVar1 = (name == "GetCustomProperty");
					if (bVar1) {
						pCVar4 = CustomLogicPlayerBuiltin.Bindings.__CreateMethodBinding__GetCustomProperty();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xcd8e1e97) {
					bVar1 = (name == "SpectateID");
					if (bVar1) {
						pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__SpectateID();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xdbaad9ba) {
					bVar1 = (name == "Deaths");
					if (bVar1) {
						pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__Deaths();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xf30591ff) {
				if (uVar2 == 0xe078d003) {
					bVar1 = (name == "Loadout");
					if (bVar1) {
						pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__Loadout();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xec7340b0) {
					bVar1 = (name == "Character");
					if (bVar1) {
						pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__Character();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xf30591fe) {
					bVar1 = (name == "Kills");
					if (bVar1) {
						pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__Kills();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xf4b21828) {
				bVar1 = (name == "TotalDamage");
				if (bVar1) {
					pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__TotalDamage();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf8eca4b6) {
				bVar1 = (name == "DisplayName");
				if (bVar1) {
					pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__DisplayName();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xffbdd3de) {
				bVar1 = (name == "HighestDamage");
				if (bVar1) {
					pCVar3 = CustomLogicPlayerBuiltin.Bindings.__CreatePropertyBinding__HighestDamage();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPlayerBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002455")]
		[Address(RVA = "0x5939B70", Offset = "0x5938B70", VA = "0x5939B70")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__Character()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Character): 2 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_00;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Character_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002456")]
		[Address(RVA = "0x5939C10", Offset = "0x5938C10", VA = "0x5939C10")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__Connected()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Connected): 2 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_00;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Connected_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002457")]
		[Address(RVA = "0x5939CB0", Offset = "0x5938CB0", VA = "0x5939CB0")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__ID()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__ID): 2 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_00;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__ID_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002458")]
		[Address(RVA = "0x5939D50", Offset = "0x5938D50", VA = "0x5939D50")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__IsAnonymous()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsAnonymous): 2 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_00;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__IsAnonymous_g____getter_5);
			__this_00 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002459")]
		[Address(RVA = "0x5939DF0", Offset = "0x5938DF0", VA = "0x5939DF0")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__UserID()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__UserID): 2 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_00;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__UserID_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600245A")]
		[Address(RVA = "0x5939E90", Offset = "0x5938E90", VA = "0x5939E90")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__Name()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Name): 2 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_00;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_7_0);
			__this_00 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600245B")]
		[Address(RVA = "0x5939F30", Offset = "0x5938F30", VA = "0x5939F30")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__DisplayName()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__DisplayName): 2 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_00;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__DisplayName_g____getter_8);
			__this_00 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600245C")]
		[Address(RVA = "0x5939FD0", Offset = "0x5938FD0", VA = "0x5939FD0")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__Guild()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Guild): 2 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_00;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Guild_g____getter_9_0);
			__this_00 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600245D")]
		[Address(RVA = "0x593A070", Offset = "0x5939070", VA = "0x593A070")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__Team()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Team): 2 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_00;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_10_0);
			__this_00 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600245E")]
		[Address(RVA = "0x593A110", Offset = "0x5939110", VA = "0x593A110")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__Status()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Status): 2 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_00;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Status_g____getter_11_0);
			__this_00 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600245F")]
		[Address(RVA = "0x593A1B0", Offset = "0x59391B0", VA = "0x593A1B0")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__CharacterType()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__CharacterType): 2 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_00;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__CharacterType_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002460")]
		[Address(RVA = "0x593A250", Offset = "0x5939250", VA = "0x593A250")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__Loadout()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Loadout): 2 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_00;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Loadout_g____getter_13_0);
			__this_00 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002461")]
		[Address(RVA = "0x593A2F0", Offset = "0x59392F0", VA = "0x593A2F0")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__Kills()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Kills): 4 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			Action<CustomLogicPlayerBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_01;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Kills_g____getter_14_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicPlayerBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Kills_g____setter_14_1);
			__this_01 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002462")]
		[Address(RVA = "0x593A3D0", Offset = "0x59393D0", VA = "0x593A3D0")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__Deaths()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Deaths): 4 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			Action<CustomLogicPlayerBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_01;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Deaths_g____getter_15_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicPlayerBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Deaths_g____setter_15_1);
			__this_01 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002463")]
		[Address(RVA = "0x593A4B0", Offset = "0x59394B0", VA = "0x593A4B0")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__HighestDamage()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__HighestDamage): 4 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			Action<CustomLogicPlayerBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_01;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__HighestDamage_g____getter);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicPlayerBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__HighestDamage_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002464")]
		[Address(RVA = "0x593A590", Offset = "0x5939590", VA = "0x593A590")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__TotalDamage()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__TotalDamage): 4 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			Action<CustomLogicPlayerBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_01;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__TotalDamage_g____getter_1);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicPlayerBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__TotalDamage_g____setter_1);
			__this_01 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002465")]
		[Address(RVA = "0x593A670", Offset = "0x5939670", VA = "0x593A670")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__Ping()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Ping): 2 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_00;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Ping_g____getter_18_0);
			__this_00 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002466")]
		[Address(RVA = "0x593A710", Offset = "0x5939710", VA = "0x593A710")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__SpectateID()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__SpectateID): 2 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_00;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpectateID_g____getter_19);
			__this_00 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002467")]
		[Address(RVA = "0x593A7B0", Offset = "0x59397B0", VA = "0x593A7B0")]
		public static CLPropertyBinding<CustomLogicPlayerBuiltin> __CreatePropertyBinding__SpawnPoint()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__SpawnPoint): 4 lines keep C-only constructs
			Func<CustomLogicPlayerBuiltin, object> __this;
			Action<CustomLogicPlayerBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicPlayerBuiltin> __this_01;

			__this = new Func<CustomLogicPlayerBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpawnPoint_g____getter_20);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicPlayerBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpawnPoint_g____setter_20);
			__this_01 = new CLPropertyBinding<CustomLogicPlayerBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6002468")]
		[Address(RVA = "0x593A890", Offset = "0x5939890", VA = "0x593A890")]
		public static CLMethodBinding<CustomLogicPlayerBuiltin> __CreateMethodBinding__GetCustomProperty()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreateMethodBinding__GetCustomProperty): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPlayerBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPlayerBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754614f == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicPlayerBuiltin>)) ;
				Il2CppMethodInitialized_0754614f = true;
				uVar1 = (typeof(CustomLogicPlayerBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPlayerBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicPlayerBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicPlayerBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__21_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPlayerBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__21_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPlayerBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPlayerBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicPlayerBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__GetCustomProperty_b__21_0);
				pCVar2 = typeof(CustomLogicPlayerBuiltin.Bindings.c).static_fields;
				pCVar2.__9__21_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicPlayerBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6002469")]
		[Address(RVA = "0x593A9D0", Offset = "0x59399D0", VA = "0x593A9D0")]
		public static CLMethodBinding<CustomLogicPlayerBuiltin> __CreateMethodBinding__SetCustomProperty()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreateMethodBinding__SetCustomProperty): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPlayerBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPlayerBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546150 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicPlayerBuiltin>)) ;
				Il2CppMethodInitialized_07546150 = true;
				uVar1 = (typeof(CustomLogicPlayerBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPlayerBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicPlayerBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicPlayerBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__22_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPlayerBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__22_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPlayerBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPlayerBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicPlayerBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__SetCustomProperty_b__22_0);
				pCVar2 = typeof(CustomLogicPlayerBuiltin.Bindings.c).static_fields;
				pCVar2.__9__22_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicPlayerBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600246A")]
		[Address(RVA = "0x593AB10", Offset = "0x5939B10", VA = "0x593AB10")]
		public static CLMethodBinding<CustomLogicPlayerBuiltin> __CreateMethodBinding__ClearKDR()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreateMethodBinding__ClearKDR): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPlayerBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPlayerBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546151 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicPlayerBuiltin>)) ;
				Il2CppMethodInitialized_07546151 = true;
				uVar1 = (typeof(CustomLogicPlayerBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPlayerBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicPlayerBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicPlayerBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__23_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPlayerBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__23_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPlayerBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPlayerBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicPlayerBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__ClearKDR_b__23_0);
				pCVar2 = typeof(CustomLogicPlayerBuiltin.Bindings.c).static_fields;
				pCVar2.__9__23_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicPlayerBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x400176D")]
	[FieldOffset(Offset = "0x30")]
	public readonly Player Player;

	[Token(Token = "0x17000460")]
	public CustomLogicCharacterBuiltin Character
	{
		[Token(Token = "0x600242F")]
		[Address(RVA = "0x5937A50", Offset = "0x5936A50", VA = "0x5937A50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_Character): clean
			Player player;
			BaseComponentCache pUVar1;
			bool bVar2;
			int viewID;
			PhotonView pPVar3;
			BaseCharacter character;
			CustomLogicCharacterBuiltin pCVar4;

			player = this.Player;
			viewID = PhotonExtensions.GetIntProperty(player, PlayerProperty.CharacterViewId, 0);
			if (0 < viewID) {
				pPVar3 = PhotonView.Find(viewID);
				bVar2 = ((Object)pPVar3 != null);
				if (bVar2) {
					if (pPVar3 == null) {
		label_05a37ba5: ;
						throw new NullReferenceException();
					}
					character = pPVar3.GetComponent<BaseCharacter>();
					bVar2 = ((Object)character == null);
					if (!bVar2) {
						if (character == null) goto label_05a37ba5;
						if (character.Dead == false) {
							pUVar1 = character.Cache;
							if ((pUVar1 == null) ||(pPVar3 = pUVar1.PhotonView, pPVar3 == null)) goto label_05a37ba5;
							if (pPVar3._Owner_k__BackingField == this.Player) {
								return pCVar4;
							}
						}
					}
				}
			}
			return null;
		}
	}

	[Token(Token = "0x17000461")]
	public bool Connected
	{
		[Token(Token = "0x6002430")]
		[Address(RVA = "0x5937BB0", Offset = "0x5936BB0", VA = "0x5937BB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_Connected): clean
			return this.Player != null;
		}
	}

	[Token(Token = "0x17000462")]
	public int ID
	{
		[Token(Token = "0x6002431")]
		[Address(RVA = "0x5937BC0", Offset = "0x5936BC0", VA = "0x5937BC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_ID): clean
			Player pPVar1;

			pPVar1 = this.Player;
			if (pPVar1 == null) {
				throw new NullReferenceException();
			}
			return pPVar1.actorNumber;
		}
	}

	[Token(Token = "0x17000463")]
	public bool IsAnonymous
	{
		[Token(Token = "0x6002432")]
		[Address(RVA = "0x5937BE0", Offset = "0x5936BE0", VA = "0x5937BE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_IsAnonymous): clean
			Player pPVar1;
			String __this_00;
			bool bVar2;

			pPVar1 = this.Player;
			if (pPVar1 == null) {
				throw new NullReferenceException();
			}
			__this_00 = pPVar1._UserId_k__BackingField;
			if (__this_00 == null) {
				return true;
			}
			bVar2 = __this_00.StartsWith("anon_");
			return bVar2;
		}
	}

	[Token(Token = "0x17000464")]
	public string UserID
	{
		[Token(Token = "0x6002433")]
		[Address(RVA = "0x5937C30", Offset = "0x5936C30", VA = "0x5937C30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_UserID): clean
			Player pPVar1;

			pPVar1 = this.Player;
			if (pPVar1 == null) {
				throw new NullReferenceException();
			}
			return pPVar1._UserId_k__BackingField;
		}
	}

	[Token(Token = "0x17000465")]
	public string Name
	{
		[Token(Token = "0x6002434")]
		[Address(RVA = "0x5937C50", Offset = "0x5936C50", VA = "0x5937C50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_Name): clean
			Player player;
			String pSVar1;

			player = this.Player;
			pSVar1 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Name, "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000466")]
	public string DisplayName
	{
		[Token(Token = "0x6002435")]
		[Address(RVA = "0x5937CD0", Offset = "0x5936CD0", VA = "0x5937CD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_DisplayName): clean
			Player player;
			String pSVar1;

			player = this.Player;
			pSVar1 = PhotonExtensions.GetStringProperty(player, PlayerProperty.DisplayName, "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000467")]
	public string Guild
	{
		[Token(Token = "0x6002436")]
		[Address(RVA = "0x5937D50", Offset = "0x5936D50", VA = "0x5937D50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_Guild): clean
			Player player;
			String pSVar1;

			player = this.Player;
			pSVar1 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Guild, "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000468")]
	public string Team
	{
		[Token(Token = "0x6002437")]
		[Address(RVA = "0x5937DD0", Offset = "0x5936DD0", VA = "0x5937DD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_Team): clean
			Player player;
			String pSVar1;

			player = this.Player;
			pSVar1 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Team, "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000469")]
	public string Status
	{
		[Token(Token = "0x6002438")]
		[Address(RVA = "0x5937E50", Offset = "0x5936E50", VA = "0x5937E50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_Status): clean
			Player player;
			String pSVar1;

			player = this.Player;
			pSVar1 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Status, "");
			return pSVar1;
		}
	}

	[Token(Token = "0x1700046A")]
	public string CharacterType
	{
		[Token(Token = "0x6002439")]
		[Address(RVA = "0x5937ED0", Offset = "0x5936ED0", VA = "0x5937ED0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_CharacterType): clean
			Player player;
			String pSVar1;

			player = this.Player;
			pSVar1 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Character, "");
			return pSVar1;
		}
	}

	[Token(Token = "0x1700046B")]
	public string Loadout
	{
		[Token(Token = "0x600243A")]
		[Address(RVA = "0x5937F50", Offset = "0x5936F50", VA = "0x5937F50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_Loadout): clean
			Player player;
			String pSVar1;

			player = this.Player;
			pSVar1 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Loadout, "");
			return pSVar1;
		}
	}

	[Token(Token = "0x1700046C")]
	public int Kills
	{
		[Token(Token = "0x600243B")]
		[Address(RVA = "0x5937FD0", Offset = "0x5936FD0", VA = "0x5937FD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_Kills): clean
			Player player;
			int iVar1;

			player = this.Player;
			iVar1 = PhotonExtensions.GetIntProperty(player, PlayerProperty.Kills, 0);
			return iVar1;
		}
		[Token(Token = "0x600243C")]
		[Address(RVA = "0x5938030", Offset = "0x5937030", VA = "0x5938030")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$set_Kills): clean
			uint uVar1;
			Player pPVar2;
			String key;
			bool bVar3;
			Player pPVar4;
			object value_00;
			byte[] auStack_24 = new byte[4];

			if (Il2CppMethodInitialized_07546129 == false) {
				Il2CppMethodInitialized_07546129 = true;
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				bVar3 = PhotonNetwork.IsMasterClient;
			}
			else {
				bVar3 = PhotonNetwork.IsMasterClient;
			}
			if (!bVar3) {
				pPVar2 = this.Player;
				if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
					pPVar4 = PhotonNetwork.LocalPlayer;
				}
				else {
					pPVar4 = PhotonNetwork.LocalPlayer;
				}
				if (pPVar2 != pPVar4) {
					return;
				}
			}
			pPVar2 = this.Player;
			key = PlayerProperty.Kills;
			value_00 = (object)auStack_24;
			PhotonExtensions.SetCustomProperty(pPVar2, key, value_00);
			return;
		}
	}

	[Token(Token = "0x1700046D")]
	public int Deaths
	{
		[Token(Token = "0x600243D")]
		[Address(RVA = "0x5938140", Offset = "0x5937140", VA = "0x5938140")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_Deaths): clean
			Player player;
			int iVar1;

			player = this.Player;
			iVar1 = PhotonExtensions.GetIntProperty(player, PlayerProperty.Deaths, 0);
			return iVar1;
		}
		[Token(Token = "0x600243E")]
		[Address(RVA = "0x59381A0", Offset = "0x59371A0", VA = "0x59381A0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$set_Deaths): clean
			uint uVar1;
			Player pPVar2;
			String key;
			bool bVar3;
			Player pPVar4;
			object value_00;
			byte[] auStack_24 = new byte[4];

			if (Il2CppMethodInitialized_0754612b == false) {
				Il2CppMethodInitialized_0754612b = true;
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				bVar3 = PhotonNetwork.IsMasterClient;
			}
			else {
				bVar3 = PhotonNetwork.IsMasterClient;
			}
			if (!bVar3) {
				pPVar2 = this.Player;
				if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
					pPVar4 = PhotonNetwork.LocalPlayer;
				}
				else {
					pPVar4 = PhotonNetwork.LocalPlayer;
				}
				if (pPVar2 != pPVar4) {
					return;
				}
			}
			pPVar2 = this.Player;
			key = PlayerProperty.Deaths;
			value_00 = (object)auStack_24;
			PhotonExtensions.SetCustomProperty(pPVar2, key, value_00);
			return;
		}
	}

	[Token(Token = "0x1700046E")]
	public int HighestDamage
	{
		[Token(Token = "0x600243F")]
		[Address(RVA = "0x59382B0", Offset = "0x59372B0", VA = "0x59382B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_HighestDamage): clean
			Player player;
			int iVar1;

			player = this.Player;
			iVar1 = PhotonExtensions.GetIntProperty(player, PlayerProperty.HighestDamage, 0);
			return iVar1;
		}
		[Token(Token = "0x6002440")]
		[Address(RVA = "0x5938310", Offset = "0x5937310", VA = "0x5938310")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$set_HighestDamage): clean
			uint uVar1;
			Player pPVar2;
			String key;
			bool bVar3;
			Player pPVar4;
			object value_00;
			byte[] auStack_24 = new byte[4];

			if (Il2CppMethodInitialized_0754612d == false) {
				Il2CppMethodInitialized_0754612d = true;
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				bVar3 = PhotonNetwork.IsMasterClient;
			}
			else {
				bVar3 = PhotonNetwork.IsMasterClient;
			}
			if (!bVar3) {
				pPVar2 = this.Player;
				if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
					pPVar4 = PhotonNetwork.LocalPlayer;
				}
				else {
					pPVar4 = PhotonNetwork.LocalPlayer;
				}
				if (pPVar2 != pPVar4) {
					return;
				}
			}
			pPVar2 = this.Player;
			key = PlayerProperty.HighestDamage;
			value_00 = (object)auStack_24;
			PhotonExtensions.SetCustomProperty(pPVar2, key, value_00);
			return;
		}
	}

	[Token(Token = "0x1700046F")]
	public int TotalDamage
	{
		[Token(Token = "0x6002441")]
		[Address(RVA = "0x5938420", Offset = "0x5937420", VA = "0x5938420")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_TotalDamage): clean
			Player player;
			int iVar1;

			player = this.Player;
			iVar1 = PhotonExtensions.GetIntProperty(player, PlayerProperty.TotalDamage, 0);
			return iVar1;
		}
		[Token(Token = "0x6002442")]
		[Address(RVA = "0x5938480", Offset = "0x5937480", VA = "0x5938480")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$set_TotalDamage): clean
			uint uVar1;
			Player pPVar2;
			String key;
			bool bVar3;
			Player pPVar4;
			object value_00;
			byte[] auStack_24 = new byte[4];

			if (Il2CppMethodInitialized_0754612f == false) {
				Il2CppMethodInitialized_0754612f = true;
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				bVar3 = PhotonNetwork.IsMasterClient;
			}
			else {
				bVar3 = PhotonNetwork.IsMasterClient;
			}
			if (!bVar3) {
				pPVar2 = this.Player;
				if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
					pPVar4 = PhotonNetwork.LocalPlayer;
				}
				else {
					pPVar4 = PhotonNetwork.LocalPlayer;
				}
				if (pPVar2 != pPVar4) {
					return;
				}
			}
			pPVar2 = this.Player;
			key = PlayerProperty.TotalDamage;
			value_00 = (object)auStack_24;
			PhotonExtensions.SetCustomProperty(pPVar2, key, value_00);
			return;
		}
	}

	[Token(Token = "0x17000470")]
	public int Ping
	{
		[Token(Token = "0x6002443")]
		[Address(RVA = "0x5938590", Offset = "0x5937590", VA = "0x5938590")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_Ping): clean
			Player player;
			int iVar1;

			player = this.Player;
			iVar1 = PhotonExtensions.GetIntProperty(player, PlayerProperty.Ping, 0);
			return iVar1;
		}
	}

	[Token(Token = "0x17000471")]
	public int SpectateID
	{
		[Token(Token = "0x6002444")]
		[Address(RVA = "0x5938600", Offset = "0x5937600", VA = "0x5938600")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_SpectateID): clean
			Player player;
			int iVar1;

			player = this.Player;
			iVar1 = PhotonExtensions.GetIntProperty(player, PlayerProperty.SpectateID, 0);
			return iVar1;
		}
	}

	[Token(Token = "0x17000472")]
	public CustomLogicVector3Builtin SpawnPoint
	{
		[Token(Token = "0x6002445")]
		[Address(RVA = "0x5938670", Offset = "0x5937670", VA = "0x5938670")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_SpawnPoint): clean
			bool bVar1;
			CustomLogicVector3Builtin __this_00;
			Vector3 value;

			bVar1 = PhotonExtensions.HasSpawnPoint(this.Player);
			if (bVar1) {
				value = PhotonExtensions.GetSpawnPoint(this.Player);
				__this_00 = new CustomLogicVector3Builtin(value);
			}
			return __this_00;
		}
		[Token(Token = "0x6002446")]
		[Address(RVA = "0x59386F0", Offset = "0x59376F0", VA = "0x59386F0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$set_SpawnPoint): 3 lines keep C-only constructs
			uint uVar1;
			Player pPVar2;
			bool bVar3;
			Player pPVar4;
			String[] value_00;
			String pSVar5;
			ulong uStack_30;
			float[] afStack_28 = new float[2];

			if (Il2CppMethodInitialized_07546133 == false) {
				Il2CppMethodInitialized_07546133 = true;
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				bVar3 = PhotonNetwork.IsMasterClient;
			}
			else {
				bVar3 = PhotonNetwork.IsMasterClient;
			}
			if (!bVar3) {
				pPVar2 = this.Player;
				if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
					pPVar4 = PhotonNetwork.LocalPlayer;
				}
				else {
					pPVar4 = PhotonNetwork.LocalPlayer;
				}
				if (pPVar2 != pPVar4) {
					return;
				}
			}
			this.CheckPropertyRateLimit("SpawnPoint");
			if (value == null) {
				pPVar2 = this.Player;
				PhotonExtensions.SetCustomProperty(pPVar2, PlayerProperty.SpawnPoint, (Il2CppObject *)"null");
				return;
			}
			afStack_28[0] = value.Value.z;
			uStack_30._0_4_ = value.Value.x;
			uStack_30._4_4_ = value.Value.y;
			value_00 = (String[])new string[3];
			pSVar5 = uStack_30.ToString();
			if (value_00 == null) {
				throw new NullReferenceException();
			}
			if ((int)value_00.Length != 0) {
				value_00[0] = pSVar5;
				pSVar5 = (((long)&uStack_30 + 4)).ToString();
				if ((value_00.Length & 0xfffffffe) != 0) {
					value_00[1] = pSVar5;
					pSVar5 = afStack_28.ToString();
					if (2 < (uint)value_00.Length) {
						value_00[2] = pSVar5;
						pSVar5 = String.Join(",", value_00);
						pPVar2 = this.Player;
						PhotonExtensions.SetCustomProperty(pPVar2, PlayerProperty.SpawnPoint, (object)pSVar5);
						return;
					}
				}
			}
			throw new IndexOutOfRangeException();
		}
	}

	[Token(Token = "0x17000473")]
	public override string ClassName
	{
		[Token(Token = "0x600244F")]
		[Address(RVA = "0x5939140", Offset = "0x5938140", VA = "0x5939140", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_ClassName): clean
			return "Player";
		}
	}

	[Token(Token = "0x17000474")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002450")]
		[Address(RVA = "0x5939170", Offset = "0x5938170", VA = "0x5939170", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000475")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002451")]
		[Address(RVA = "0x5939180", Offset = "0x5938180", VA = "0x5939180", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x17000476")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002452")]
		[Address(RVA = "0x5939190", Offset = "0x5938190", VA = "0x5939190", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x600242E")]
	[Address(RVA = "0x5934900", Offset = "0x5933900", VA = "0x5934900")]
	public CustomLogicPlayerBuiltin(Player player)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$.ctor): clean
		base();
		this.Player = player;
		return;
	}

	[Token(Token = "0x6002447")]
	[Address(RVA = "0x5938C10", Offset = "0x5937C10", VA = "0x5938C10")]
	public object GetCustomProperty(string property)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$GetCustomProperty): clean
		Player player;
		String key;
		object pIVar1;

		player = this.Player;
		key = String.Concat("CL:", property);
		pIVar1 = PhotonExtensions.GetCustomProperty(player, key);
		return pIVar1;
	}

	[Token(Token = "0x6002448")]
	[Address(RVA = "0x5938C70", Offset = "0x5937C70", VA = "0x5938C70")]
	public void SetCustomProperty(string property, object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$SetCustomProperty): 5 lines keep C-only constructs
		Player pPVar1;
		bool bVar2;
		Player pPVar3;
		String pSVar4;
		Il2CppClass pIVar5;
		Exception __this_00;
		MethodInfo lastManagedFrame;

		if (Il2CppMethodInitialized_07546135 == false) {
			Il2CppMethodInitialized_07546135 = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_05a38cdd;
	label_05a38c9e: ;
			bVar2 = PhotonNetwork.IsMasterClient;
			if (bVar2) goto label_05a38d25;
		}
		else {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_05a38c9e;
	label_05a38cdd: ;
			bVar2 = PhotonNetwork.IsMasterClient;
			if (bVar2) goto label_05a38d25;
		}
		pPVar1 = this.Player;
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			pPVar3 = PhotonNetwork.LocalPlayer;
		}
		else {
			pPVar3 = PhotonNetwork.LocalPlayer;
		}
		if (pPVar1 != pPVar3) {
			return;
		}
	label_05a38d25: ;
		if ((value == null) ||((((pIVar5 = value.klass, pIVar5 != g_data_07556740 && (pIVar5 != g_data_07556710)) &&(pIVar5 != g_data_07556758)) && (pIVar5 != g_data_075566f0)))) {
			pIVar5 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_00 = (Exception)il2cpp_codegen_object_new(pIVar5);
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Player.SetCustomProperty only supports float, int, string, or bool values.");
			__this_00 = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_SetCustomProperty);
			throw (object)__this_00;
		}
		pSVar4 = String.Concat("CL:", property);
		this.CheckPropertyRateLimit(pSVar4);
		pPVar1 = this.Player;
		pSVar4 = String.Concat("CL:", property);
		PhotonExtensions.SetCustomProperty(pPVar1, pSVar4, value);
		return;
	}

	[Token(Token = "0x6002449")]
	[Address(RVA = "0x5938DF0", Offset = "0x5937DF0", VA = "0x5938DF0")]
	public void ClearKDR()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$ClearKDR): clean
		uint uVar1;
		Player pPVar2;
		String pSVar3;
		bool bVar4;
		Player pPVar5;
		Dictionary<string, object> __this_00;
		object pIVar6;
		uint local_40;
		uint local_3c;
		uint local_38;
		uint local_34;

		if (Il2CppMethodInitialized_07546136 == false) {
			Il2CppMethodInitialized_07546136 = true;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar4 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar4 = PhotonNetwork.IsMasterClient;
		}
		if (!bVar4) {
			pPVar2 = this.Player;
			if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
				pPVar5 = PhotonNetwork.LocalPlayer;
			}
			else {
				pPVar5 = PhotonNetwork.LocalPlayer;
			}
			if (pPVar2 != pPVar5) {
				return;
			}
		}
		this.CheckPropertyRateLimit("ClearKDR");
		__this_00 = new Dictionary<string, object>();
		pSVar3 = PlayerProperty.Kills;
		local_34 = 0;
		pIVar6 = (object)local_34;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Add((object)pSVar3, pIVar6);
		pSVar3 = PlayerProperty.Deaths;
		local_38 = 0;
		pIVar6 = (object)local_38;
		__this_00.Add((object)pSVar3, pIVar6);
		pSVar3 = PlayerProperty.HighestDamage;
		local_3c = 0;
		pIVar6 = (object)local_3c;
		__this_00.Add((object)pSVar3, pIVar6);
		pSVar3 = PlayerProperty.TotalDamage;
		local_40 = 0;
		pIVar6 = (object)local_40;
		__this_00.Add((object)pSVar3, pIVar6);
		PhotonExtensions.SetCustomProperties(this.Player, __this_00);
		return;
	}

	[Token(Token = "0x600244A")]
	[Address(RVA = "0x5938950", Offset = "0x5937950", VA = "0x5938950")]
	private void CheckPropertyRateLimit(string property)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$CheckPropertyRateLimit): 5 lines keep C-only constructs
		int key;
		Player pPVar1;
		CustomLogicEvaluator pCVar2;
		Dictionary<int, object> __this_00;
		bool bVar3;
		Player pPVar4;
		Dictionary<string, float> __this_01;
		Dictionary<TKey, TValue> __this_02;
		String pSVar5;
		Il2CppClass klass;
		Exception __this_03;
		MethodInfo lastManagedFrame;
		float fVar6;
		float fVar7;

		pPVar1 = this.Player;
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			pPVar4 = PhotonNetwork.LocalPlayer;
		}
		else {
			pPVar4 = PhotonNetwork.LocalPlayer;
		}
		if (pPVar1 == pPVar4) {
			return;
		}
		if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
		}
		pCVar2 = CustomLogicManager.Evaluator;
		if (((pCVar2 != null) &&(pPVar1 = this.Player, pPVar1 != null)) &&(__this_00 = (Dictionary<int, object>)pCVar2.PlayerIdToLastPropertyChanges, __this_00 != null)) {
			bVar3 = __this_00.ContainsKey(pPVar1.actorNumber);
			if (!bVar3) {
				pPVar1 = this.Player;
				if (pPVar1 == null) goto label_05a38ba6;
				key = pPVar1.actorNumber;
				__this_01 = new Dictionary<string, float>();
				__this_00.set_Item(key, (object)__this_01);
			}
			pPVar1 = this.Player;
			if ((pPVar1 != null) &&(__this_02 = (Dictionary<TKey, TValue>)__this_00.get_Item(pPVar1.actorNumber), __this_02 != null)) {
				bVar3 = __this_02.ContainsKey((object)property);
				if (!bVar3) {
					__this_02.set_Item((object)property, 0.0);
				}
				fVar6 = Time.time;
				fVar7 = __this_02.get_Item((object)property);
				if (fVar6 - fVar7 < 1.0) {
					pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Exceeded set property rate limit on non-local client: ");
					pSVar5 = String.Concat(pSVar5, property);
					klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
					__this_03 = (Exception)il2cpp_codegen_object_new(klass);
					__this_03 = new Exception(pSVar5);
					lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_CheckPropertyRateLimit);
					throw (object)__this_03;
				}
				fVar6 = Time.time;
				__this_02.set_Item((object)property, fVar6) ;
				return;
			}
		}
	label_05a38ba6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600244B")]
	[Address(RVA = "0x5939040", Offset = "0x5938040", VA = "0x5939040", Slot = "0")]
	public override bool Equals(object obj)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$Equals): 2 lines keep C-only constructs
		byte bVar1;
		Il2CppClass pIVar2;

		if (obj == null) {
			pIVar2 = null;
		}
		else {
			bVar1 = (typeof(CustomLogicPlayerBuiltin)._2).typeHierarchyDepth;
			if (((obj.klass._2).typeHierarchyDepth < bVar1) ||((obj.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicPlayerBuiltin))) {
				return false;
			}
			pIVar2 = obj[3].klass;
		}
		return (Il2CppClass)this.Player == pIVar2;
	}

	[Token(Token = "0x600244C")]
	[Address(RVA = "0x59390C0", Offset = "0x59380C0", VA = "0x59390C0", Slot = "2")]
	public override int GetHashCode()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$GetHashCode): clean
		Player pPVar1;
		int iVar2;

		pPVar1 = this.Player;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		return iVar2;
	}

	[Token(Token = "0x600244D")]
	[Address(RVA = "0x59390F0", Offset = "0x59380F0", VA = "0x59390F0", Slot = "11")]
	public bool __Eq__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$__Eq__): 2 lines keep C-only constructs
		Il2CppMethodPointer vtableDispatch;
		byte uVar1;

		if (self == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = self.klass.vtable[0].methodPtr;
		uVar1 = (*vtableDispatch)(self,other,self.klass.vtable[0].method,vtableDispatch);
		return (bool)uVar1;
	}

	[Token(Token = "0x600244E")]
	[Address(RVA = "0x5939120", Offset = "0x5938120", VA = "0x5939120", Slot = "12")]
	public int __Hash__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c (CustomLogic.CustomLogicPlayerBuiltin$$__Hash__): clean
		int iVar1;

		return iVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicPlayerBuiltin.c.

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Character");
		__this.Add((Il2CppObject *)"Connected");
		__this.Add((Il2CppObject *)"ID");
		__this.Add((Il2CppObject *)"IsAnonymous");
		__this.Add((Il2CppObject *)"UserID");
		__this.Add((Il2CppObject *)"Name");
		__this.Add((Il2CppObject *)"DisplayName");
		__this.Add((Il2CppObject *)"Guild");
		__this.Add((Il2CppObject *)"Team");
		__this.Add((Il2CppObject *)"Status");
		__this.Add((Il2CppObject *)"CharacterType");
		__this.Add((Il2CppObject *)"Loadout");
		__this.Add((Il2CppObject *)"Kills");
		__this.Add((Il2CppObject *)"Deaths");
		__this.Add((Il2CppObject *)"HighestDamage");
		__this.Add((Il2CppObject *)"TotalDamage");
		__this.Add((Il2CppObject *)"Ping");
		__this.Add((Il2CppObject *)"SpectateID");
		__this.Add((Il2CppObject *)"SpawnPoint");
		__this.Add((Il2CppObject *)"GetCustomProperty");
		__this.Add((Il2CppObject *)"SetCustomProperty");
		__this.Add((Il2CppObject *)"ClearKDR");
		CustomLogicPlayerBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Character>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Character_g____getter_2_0(CustomLogicPlayerBuiltin __i)
	{
		CustomLogicCharacterBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Character;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Connected>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Connected_g____getter_3_0(CustomLogicPlayerBuiltin __i)
	{
		object pIVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__ID>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__ID_g____getter_4_0(CustomLogicPlayerBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Player == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsAnonymous>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__IsAnonymous_g____getter_5_0(CustomLogicPlayerBuiltin __i)
	{
		Player pPVar1;
		String __this;
		object pIVar2;
		byte local_9;

		if (__i != null) {
			pPVar1 = __i.Player;
			if (pPVar1 != null) {
				__this = pPVar1._UserId_k__BackingField;
				if (__this == null) {
				}
				else {
					local_9 = __this.StartsWith("anon_");
				}
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__UserID>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__UserID_g____getter_6_0(CustomLogicPlayerBuiltin __i)
	{
		Player pPVar1;

		if ((__i == null) ||(pPVar1 = __i.Player, pPVar1 == null)) {
			throw new NullReferenceException();
		}
		return (object)pPVar1._UserId_k__BackingField;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Name_g____getter_7_0(CustomLogicPlayerBuiltin __i)
	{
		Player player;
		String pSVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		player = __i.Player;
		pSVar1 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Name, "");
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__DisplayName>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__DisplayName_g____getter_8_0(CustomLogicPlayerBuiltin __i)
	{
		Player player;
		String pSVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		player = __i.Player;
		pSVar1 = PhotonExtensions.GetStringProperty(player, PlayerProperty.DisplayName, "");
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Guild>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__Guild_g____getter_9_0(CustomLogicPlayerBuiltin __i)
	{
		Player player;
		String pSVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		player = __i.Player;
		pSVar1 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Guild, "");
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__Team_g____getter_10_0(CustomLogicPlayerBuiltin __i)
	{
		Player player;
		String pSVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		player = __i.Player;
		pSVar1 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Team, "");
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Status>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__Status_g____getter_11_0(CustomLogicPlayerBuiltin __i)
	{
		Player player;
		String pSVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		player = __i.Player;
		pSVar1 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Status, "");
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__CharacterType>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__CharacterType_g____getter_12_0(CustomLogicPlayerBuiltin __i)
	{
		Player player;
		String pSVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		player = __i.Player;
		pSVar1 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Character, "");
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Loadout>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__Loadout_g____getter_13_0(CustomLogicPlayerBuiltin __i)
	{
		Player player;
		String pSVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		player = __i.Player;
		pSVar1 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Loadout, "");
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Kills>g____getter|14_0: clean
	private static object Bindings____CreatePropertyBinding__Kills_g____getter_14_0(CustomLogicPlayerBuiltin __i)
	{
		Player player;
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		player = __i.Player;
		PhotonExtensions.GetIntProperty(player, PlayerProperty.Kills, 0);
		return pIVar1;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Kills>g____setter|14_1: clean
	private static void Bindings____CreatePropertyBinding__Kills_g____setter_14_1(CustomLogicPlayerBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Kills = value;
		return;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Deaths>g____getter|15_0: clean
	private static object Bindings____CreatePropertyBinding__Deaths_g____getter_15_0(CustomLogicPlayerBuiltin __i)
	{
		Player player;
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		player = __i.Player;
		PhotonExtensions.GetIntProperty(player, PlayerProperty.Deaths, 0);
		return pIVar1;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Deaths>g____setter|15_1: clean
	private static void Bindings____CreatePropertyBinding__Deaths_g____setter_15_1(CustomLogicPlayerBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Deaths = value;
		return;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__HighestDamage>g____getter|16_0: clean
	private static object Bindings____CreatePropertyBinding__HighestDamage_g____getter_16_0(CustomLogicPlayerBuiltin __i)
	{
		Player player;
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		player = __i.Player;
		PhotonExtensions.GetIntProperty(player, PlayerProperty.HighestDamage, 0);
		return pIVar1;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__HighestDamage>g____setter|16_1: clean
	private static void Bindings____CreatePropertyBinding__HighestDamage_g____setter_16_1(CustomLogicPlayerBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.HighestDamage = value;
		return;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__TotalDamage>g____getter|17_0: clean
	private static object Bindings____CreatePropertyBinding__TotalDamage_g____getter_17_0(CustomLogicPlayerBuiltin __i)
	{
		Player player;
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		player = __i.Player;
		PhotonExtensions.GetIntProperty(player, PlayerProperty.TotalDamage, 0);
		return pIVar1;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__TotalDamage>g____setter|17_1: clean
	private static void Bindings____CreatePropertyBinding__TotalDamage_g____setter_17_1(CustomLogicPlayerBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.TotalDamage = value;
		return;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Ping>g____getter|18_0: clean
	private static object Bindings____CreatePropertyBinding__Ping_g____getter_18_0(CustomLogicPlayerBuiltin __i)
	{
		Player player;
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		player = __i.Player;
		PhotonExtensions.GetIntProperty(player, PlayerProperty.Ping, 0);
		return pIVar1;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__SpectateID>g____getter|19_0: clean
	private static object Bindings____CreatePropertyBinding__SpectateID_g____getter_19_0(CustomLogicPlayerBuiltin __i)
	{
		Player player;
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		player = __i.Player;
		PhotonExtensions.GetIntProperty(player, PlayerProperty.SpectateID, 0);
		return pIVar1;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__SpawnPoint>g____getter|20_0: clean
	private static object Bindings____CreatePropertyBinding__SpawnPoint_g____getter_20_0(CustomLogicPlayerBuiltin __i)
	{
		bool bVar1;
		CustomLogicVector3Builtin __this;
		Vector3 value;

		if (__i == null) {
			throw new NullReferenceException();
		}
		__this = null;
		bVar1 = PhotonExtensions.HasSpawnPoint(__i.Player);
		if (bVar1) {
			value = PhotonExtensions.GetSpawnPoint(__i.Player);
			__this = new CustomLogicVector3Builtin(value);
		}
		return (object)__this;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__SpawnPoint>g____setter|20_1: clean
	private static void Bindings____CreatePropertyBinding__SpawnPoint_g____setter_20_1(CustomLogicPlayerBuiltin __i, object __v)
	{
		CustomLogicVector3Builtin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.SpawnPoint = value;
		return;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicPlayerBuiltin.Bindings.c();
		CustomLogicPlayerBuiltin.Bindings.c.__9 =(CustomLogicPlayerBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetCustomProperty>b__21_0: clean
	private object Bindings_c____CreateMethodBinding__GetCustomProperty_b__21_0(CustomLogicPlayerBuiltin __c, Object[] __a)
	{
		String property;
		object pIVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			property = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if (__c != null) {
				pIVar1 = __c.GetCustomProperty(property);
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCustomProperty>b__22_0: clean
	private object Bindings_c____CreateMethodBinding__SetCustomProperty_b__22_0(CustomLogicPlayerBuiltin __c, Object[] __a)
	{
		object obj;
		String property;

		if (__a == null) {
	label_05a3bca3: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			property = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				if (__c != null) {
					__c.SetCustomProperty(property, __a[1]);
					return null;
				}
				goto label_05a3bca3;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearKDR>b__23_0: clean
	private object Bindings_c____CreateMethodBinding__ClearKDR_b__23_0(CustomLogicPlayerBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.ClearKDR();
		return null;
	}
}
