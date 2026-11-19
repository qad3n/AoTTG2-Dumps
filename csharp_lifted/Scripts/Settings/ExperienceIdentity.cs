// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ExperienceIdentity
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ExperienceIdentity.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000AA")]
internal static class ExperienceIdentity
{
	[Token(Token = "0x6000495")]
	[Address(RVA = "0x58D32F0", Offset = "0x58D22F0", VA = "0x58D32F0")]
	public static bool HasScoring(InGameSet settings)
	{
		// Lifted from source/cpp/Settings/ExperienceIdentity.c (Settings.ExperienceIdentity$$HasScoring): clean
		StringSetting pSVar1;
		StringSetting pSVar2;
		StringSetting pSVar3;
		String category;
		String subCategory;
		String name;
		bool bVar4;

		bVar4 = ExperienceIdentity.IsExperience(settings);
		if (bVar4) {
			if ((((settings == null) ||(pSVar1 = settings.ExperienceCategory, pSVar1 == null)) ||(pSVar2 = settings.ExperienceSubcategory, pSVar2 == null)) ||(pSVar3 = settings.ExperienceName, pSVar3 == null)) {
				throw new NullReferenceException();
			}
			category = pSVar1._value;
			subCategory = pSVar2._value;
			name = pSVar3._value;
			bVar4 = BuiltinLevels.HasExperienceScoring(category, subCategory, name);
			return bVar4;
		}
		return false;
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x58D33A0", Offset = "0x58D23A0", VA = "0x58D33A0")]
	public static bool IsExperience(InGameSet settings)
	{
		// Lifted from source/cpp/Settings/ExperienceIdentity.c (Settings.ExperienceIdentity$$IsExperience): clean
		BoolSetting pSVar1;
		StringSetting pSVar2;
		bool bVar3;

		if (settings == null) {
			return false;
		}
		pSVar1 = settings.Sandbox;
		if (pSVar1 != null) {
			if (pSVar1._value != false) {
				return false;
			}
			pSVar2 = settings.ExperienceCategory;
			if (pSVar2 != null) {
				bVar3 = String.IsNullOrWhiteSpace(pSVar2._value);
				if (bVar3) {
					return false;
				}
				pSVar2 = settings.ExperienceSubcategory;
				if (pSVar2 != null) {
					bVar3 = String.IsNullOrWhiteSpace(pSVar2._value);
					if (bVar3) {
						return false;
					}
					pSVar2 = settings.ExperienceName;
					if (pSVar2 != null) {
						bVar3 = String.IsNullOrWhiteSpace(pSVar2._value);
						return !bVar3;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x58D3450", Offset = "0x58D2450", VA = "0x58D3450")]
	public static string GetId(InGameSet settings)
	{
		// Lifted from source/cpp/Settings/ExperienceIdentity.c (Settings.ExperienceIdentity$$GetId): 9 lines keep C-only constructs
		uint uVar1;
		InGameGeneralSettings pSVar2;
		StringSetting pSVar3;
		IntSetting pSVar4;
		Il2CppType handle;
		bool bVar5;
		Type enumType;
		object value;
		String[] value_00;
		String pSVar6;
		ulong uVar7;
		Il2CppClass klass;
		InvalidOperationException __this;
		MethodInfo lastManagedFrame;
		ulong uVar8;
		String* targetAddress;
		Enum local_48;

		bVar5 = ExperienceIdentity.IsExperience(settings);
		if (!bVar5) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (((settings != null) &&(pSVar2 = settings.General, pSVar2 != null)) &&(pSVar3 = pSVar2.MapName, pSVar3 != null)) {
			bVar5 = String.IsNullOrWhiteSpace(pSVar3._value);
			if (bVar5) {
	label_059d387a: ;
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidOperationException));
				__this = (InvalidOperationException)il2cpp_codegen_object_new(klass);
				pSVar6 = il2cpp_codegen_get_runtime_metadata(&"The experience has an invalid map, mode, or difficulty.");
				__this = new InvalidOperationException(pSVar6);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_ExperienceIdentity_GetId);
				throw (object)__this;
			}
			pSVar2 = settings.General;
			if ((pSVar2 != null) &&(pSVar3 = pSVar2.GameMode, pSVar3 != null)) {
				bVar5 = String.IsNullOrWhiteSpace(pSVar3._value);
				handle = TypeRef_Settings_GameDifficulty;
				if (bVar5) goto label_059d387a;
				enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
				pSVar2 = settings.General;
				if ((pSVar2 != null) &&(pSVar4 = pSVar2.Difficulty, pSVar4 != null)) {
					local_48.klass = (Enum)CONCAT44(local_48.klass._4_4_, pSVar4._value);
					value = (object)local_48;
					bVar5 = Enum.IsDefined(enumType, value);
					if (!bVar5) goto label_059d387a;
					value_00 = (String[])new string[7];
					pSVar3 = settings.ExperienceCategory;
					if ((pSVar3 != null) && (value_00 != null)) {
						if ((int)value_00.Length == 0) {
	label_059d3870: ;
							throw new IndexOutOfRangeException();
						}
						targetAddress = value_00.m_Items;
						value_00[0] = pSVar3._value;
						pSVar3 = settings.ExperienceSubcategory;
						if (pSVar3 != null) {
							if ((value_00.Length & 0xfffffffe) == 0) goto label_059d3870;
							value_00[1] = pSVar3._value;
							pSVar3 = settings.ExperienceName;
							if (pSVar3 != null) {
								if ((uint)value_00.Length < 3) goto label_059d3870;
								value_00[2] = pSVar3._value;
								pSVar2 = settings.General;
								if ((pSVar2 != null) &&(pSVar3 = pSVar2.MapName, pSVar3 != null)) {
									if ((value_00.Length & 0xfffffffc) == 0) goto label_059d3870;
									value_00[3] = pSVar3._value;
									pSVar2 = settings.General;
									if ((pSVar2 != null) &&(pSVar3 = pSVar2.GameMode, pSVar3 != null)) {
										if ((uint)value_00.Length < 5) goto label_059d3870;
										value_00[4] = pSVar3._value;
										pSVar3 = settings.ExperienceVariant;
										if (pSVar3 != null) {
											pSVar6 = pSVar3._value;
											if (pSVar6 == null) {
												pSVar6 = (String)**(long*)(g_data_07556758 + 0xb8);
											}
											if ((uint)value_00.Length < 6) goto label_059d3870;
											value_00[5] = pSVar6;
											pSVar2 = settings.General;
											if ((pSVar2 != null) &&(pSVar4 = pSVar2.Difficulty, pSVar4 != null)) {
												local_48.klass = (Enum)typeof(GameDifficulty);
												local_48.monitor = (IntPtr)0xffffffffffffffff;
												pSVar6 = local_48.ToString();
												if (pSVar6 != null) {
													pSVar6 = pSVar6.ToLowerInvariant();
													if (6 < (uint)value_00.Length) {
														value_00[6] = pSVar6;
														if (0 < (int)value_00.Length) {
															uVar7 = value_00.Length & 0xffffffff;
															uVar8 = 0;
															do {
																if (uVar7 <= uVar8) goto label_059d3870;
																pSVar6 = *targetAddress;
																pSVar6 = Uri.EscapeDataString(pSVar6);
																if (pSVar6 == null) goto label_059d3875;
																pSVar6 = pSVar6.Replace("-", "%2D");
																if ((uint)value_00.Length <= uVar8) goto label_059d3870;
																*targetAddress = pSVar6;
																uVar8 = uVar8 + 1;
																uVar1 = (uint)value_00.Length;
																uVar7 = (ulong)uVar1;
																targetAddress = targetAddress + 1;
															} while ((long)uVar8 < (long)(int)uVar1);
														}
														pSVar6 = String.Join("-", value_00);
														return pSVar6;
													}
													goto label_059d3870;
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
	label_059d3875: ;
		throw new NullReferenceException();
	}
}
