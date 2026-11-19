// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScript
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Map/MapScript.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScript.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Settings;

namespace Map;

[Token(Token = "0x2000412")]
public class MapScript
{
	[Token(Token = "0x40014FD")]
	[FieldOffset(Offset = "0x10")]
	protected string HeaderPrefix;

	[Token(Token = "0x40014FE")]
	[FieldOffset(Offset = "0x18")]
	protected char Delimiter;

	[Token(Token = "0x40014FF")]
	[FieldOffset(Offset = "0x20")]
	public MapScriptOptions Options;

	[Token(Token = "0x4001500")]
	[FieldOffset(Offset = "0x28")]
	public MapScriptCustomAssets CustomAssets;

	[Token(Token = "0x4001501")]
	[FieldOffset(Offset = "0x30")]
	public MapScriptObjects Objects;

	[Token(Token = "0x4001502")]
	[FieldOffset(Offset = "0x38")]
	internal WeatherSet Weather;

	[Token(Token = "0x4001503")]
	[FieldOffset(Offset = "0x40")]
	public string Logic;

	[Token(Token = "0x4001504")]
	[FieldOffset(Offset = "0x48")]
	public string MapHash;

	[Token(Token = "0x4001505")]
	[FieldOffset(Offset = "0x50")]
	public int LogicStart;

	[Token(Token = "0x4001508")]
	[FieldOffset(Offset = "0x68")]
	public readonly List<string> Errors;

	[Token(Token = "0x170002B3")]
	public MapVersionConversionResult LastUpgradeResult
	{
		[Token(Token = "0x60019EB")]
		[Address(RVA = "0x58A1D60", Offset = "0x58A0D60", VA = "0x58A1D60")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Map/MapScript.c (Map.MapScript$$get_LastUpgradeResult): clean
			return this._LastUpgradeResult_k__BackingField;
		}
		[Token(Token = "0x60019EC")]
		[Address(RVA = "0x58A1D70", Offset = "0x58A0D70", VA = "0x58A1D70")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Map/MapScript.c (Map.MapScript$$set_LastUpgradeResult): clean
			this._LastUpgradeResult_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002B4")]
	public string OriginalCSV
	{
		[Token(Token = "0x60019ED")]
		[Address(RVA = "0x58A1D80", Offset = "0x58A0D80", VA = "0x58A1D80")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Map/MapScript.c (Map.MapScript$$get_OriginalCSV): clean
			return this._OriginalCSV_k__BackingField;
		}
		[Token(Token = "0x60019EE")]
		[Address(RVA = "0x58A1D90", Offset = "0x58A0D90", VA = "0x58A1D90")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Map/MapScript.c (Map.MapScript$$set_OriginalCSV): clean
			this._OriginalCSV_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x60019EF")]
	[Address(RVA = "0x58A0DB0", Offset = "0x589FDB0", VA = "0x58A0DB0")]
	public static MapScript CreateDefault()
	{
		// Lifted from source/cpp/Map/MapScript.c (Map.MapScript$$CreateDefault): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<object, object> pSVar3;
		MapScriptObjects pMVar4;
		List<MapScriptBaseObject> pSVar5;
		MapScriptBaseObject[] pMVar6;
		MapScript __this;
		MapScriptSceneObject __this_00;
		MapScriptBasicMaterial __this_01;
		MapScriptBasicMaterial pMVar7;
		Color255 __this_02;
		MapScriptSceneObject __this_03;
		MapScriptBaseObject pMVar8;
		MethodInfo pMVar9;
		Color color;
		Vector3 UVar10;
		Vector3 euler;
		Quaternion local_38;

		__this = new MapScript();
		__this_00 = new MapScriptSceneObject();
		pMVar9 = (MethodInfo *)"Geometry/Cuboid";
		if (__this_00 != null) {
			__this_00.Asset = "Geometry/Cuboid";
			__this_00.ScaleX = 100.0;
			__this_00.ScaleY = 5.0;
			__this_00.ScaleZ = 100.0;
			__this_00.PositionX = 0.0;
			__this_00.PositionY = -25.0;
			__this_00.PositionZ = 0.0;
			__this_00.Id = 0;
			__this_01 = new MapScriptBasicMaterial();
			if (__this_01 != null) {
				__this_01.Shader = "Basic";
				pSVar3 = (Dictionary<object, object>)BuiltinMapTextures.AllTextures;
				if (pSVar3 != null) {
					pMVar7 = pSVar3.get_Item((Il2CppObject *)"Grass6");
					if (pMVar7 != null) {
						__this_01.Texture = pMVar7.Texture;
						__this_01.Tiling = (Vector2)0x41c8000041c80000;
						color.b = 1.0;
						color.a = 1.0;
						color.r = 1.0;
						color.g = 1.0;
						__this_02 = new Color255(color);
						__this_01.Color = __this_02;
						__this_00.Material = (MapScriptBaseMaterial)__this_01;
						if (((__this != null) &&(pMVar4 = __this.Objects, pMVar4 != null)) &&(pSVar5 = pMVar4.Objects, pSVar5 != null)) {
							piVar1 = &pSVar5._version;
							*piVar1 = *piVar1 + 1;
							pMVar6 = pSVar5._items;
							if (pMVar6 != null) {
								uVar2 = pSVar5._size;
								if (uVar2 < (uint)pMVar6.Length) {
									pSVar5._size = uVar2 + 1;
									pMVar6[(int)uVar2] = (MapScriptBaseObject)__this_00;
								}
								else {
									pSVar5.AddWithResize((object)__this_00);
								}
								__this_03 = new MapScriptSceneObject();
								pSVar3 = (Dictionary<object, object>)BuiltinMapPrefabs.AllPrefabs;
								if (pSVar3 != null) {
									pMVar8 = pSVar3.get_Item((Il2CppObject *)"Daylight");
									if (__this_03 != null) {
										__this_03.Copy((BaseCSVObject)pMVar8);
										__this_03.PositionX = 0.0;
										__this_03.PositionY = 20.0;
										__this_03.PositionZ = 0.0;
										local_38.x = -0.2;
										local_38.y = -0.8;
										local_38.z = 0.4;
										local_38.w = -0.4;
										UVar10 = Quaternion.Internal_ToEulerRad(ref local_38);
										euler.x = UVar10.x * 57.29578;
										euler.y = UVar10.y * 57.29578;
										euler.z = UVar10.z * 57.29578;
										UVar10 = Quaternion.Internal_MakePositive(euler);
										__this_03.RotationX = UVar10.x;
										__this_03.RotationY = UVar10.y;
										__this_03.RotationZ = UVar10.z;
										__this_03.Id = 1;
										pMVar4 = __this.Objects;
										if ((pMVar4 != null) &&(pSVar5 = pMVar4.Objects, pSVar5 != null)) {
											piVar1 = &pSVar5._version;
											*piVar1 = *piVar1 + 1;
											pMVar6 = pSVar5._items;
											if (pMVar6 != null) {
												uVar2 = pSVar5._size;
												if (uVar2 < (uint)pMVar6.Length) {
													pSVar5._size = uVar2 + 1;
													pMVar6[(int)uVar2] = (MapScriptBaseObject)__this_03;
												}
												else {
													pSVar5.AddWithResize((object)__this_03);
												}
												return __this;
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

	[Token(Token = "0x60019F0")]
	[Address(RVA = "0x58A2030", Offset = "0x58A1030", VA = "0x58A2030", Slot = "4")]
	public virtual string Serialize()
	{
		// Lifted from source/cpp/Map/MapScript.c (Map.MapScript$$Serialize): 20 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		MapScriptOptions pMVar4;
		MapScriptCustomAssets pMVar5;
		MapScriptObjects pMVar6;
		WeatherSet pSVar7;
		List<string> __this_00;
		String pSVar9;
		String[] pSVar10;

		__this_00 = new List<string>();
		pSVar9 = String.Concat(this.HeaderPrefix, "Options");
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar10 = __this_00._items;
			if (pSVar10 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pSVar10.Length) {
					__this_00._size = uVar2 + 1;
					pSVar10[(int)uVar2] = pSVar9;
				}
				else {
					__this_00.AddWithResize((object)pSVar9);
				}
				pMVar4 = this.Options;
				if (pMVar4 != null) {
					pSVar9 = pMVar4.Serialize();
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar10 = __this_00._items;
					if (pSVar10 != null) {
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pSVar10.Length) {
							__this_00._size = uVar2 + 1;
							pSVar10[(int)uVar2] = pSVar9;
						}
						else {
							__this_00.AddWithResize((object)pSVar9);
						}
						pSVar9 = String.Concat(this.HeaderPrefix, "CustomAssets");
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar10 = __this_00._items;
						if (pSVar10 != null) {
							uVar2 = __this_00._size;
							if (uVar2 < (uint)pSVar10.Length) {
								__this_00._size = uVar2 + 1;
								pSVar10[(int)uVar2] = pSVar9;
							}
							else {
								__this_00.AddWithResize((object)pSVar9);
							}
							pMVar5 = this.CustomAssets;
							if (pMVar5 != null) {
								pSVar9 = pMVar5.Serialize();
								piVar1 = &__this_00._version;
								*piVar1 = *piVar1 + 1;
								pSVar10 = __this_00._items;
								if (pSVar10 != null) {
									uVar2 = __this_00._size;
									if (uVar2 < (uint)pSVar10.Length) {
										__this_00._size = uVar2 + 1;
										pSVar10[(int)uVar2] = pSVar9;
									}
									else {
										__this_00.AddWithResize((object)pSVar9);
									}
									pSVar9 = String.Concat(this.HeaderPrefix, "Objects");
									piVar1 = &__this_00._version;
									*piVar1 = *piVar1 + 1;
									pSVar10 = __this_00._items;
									if (pSVar10 != null) {
										uVar2 = __this_00._size;
										if (uVar2 < (uint)pSVar10.Length) {
											__this_00._size = uVar2 + 1;
											pSVar10[(int)uVar2] = pSVar9;
										}
										else {
											__this_00.AddWithResize((object)pSVar9);
										}
										pMVar6 = this.Objects;
										if (pMVar6 != null) {
											pSVar9 = pMVar6.Serialize();
											piVar1 = &__this_00._version;
											*piVar1 = *piVar1 + 1;
											pSVar10 = __this_00._items;
											if (pSVar10 != null) {
												uVar2 = __this_00._size;
												if (uVar2 < (uint)pSVar10.Length) {
													__this_00._size = uVar2 + 1;
													pSVar10[(int)uVar2] = pSVar9;
												}
												else {
													__this_00.AddWithResize((object)pSVar9);
												}
												pSVar9 = String.Concat(this.HeaderPrefix, "Logic");
												piVar1 = &__this_00._version;
												*piVar1 = *piVar1 + 1;
												pSVar10 = __this_00._items;
												if (pSVar10 != null) {
													uVar2 = __this_00._size;
													if (uVar2 < (uint)pSVar10.Length) {
														__this_00._size = uVar2 + 1;
														pSVar10[(int)uVar2] = pSVar9;
													}
													else {
														__this_00.AddWithResize((object)pSVar9);
													}
													pSVar9 = this.Logic;
													piVar1 = &__this_00._version;
													*piVar1 = *piVar1 + 1;
													pSVar10 = __this_00._items;
													if (pSVar10 != null) {
														uVar2 = __this_00._size;
														if (uVar2 < (uint)pSVar10.Length) {
															__this_00._size = uVar2 + 1;
															pSVar10[(int)uVar2] = pSVar9;
														}
														else {
															__this_00.AddWithResize((object)pSVar9);
														}
														pSVar9 = String.Concat(this.HeaderPrefix, "Weather");
														piVar1 = &__this_00._version;
														*piVar1 = *piVar1 + 1;
														pSVar10 = __this_00._items;
														if (pSVar10 != null) {
															uVar2 = __this_00._size;
															if (uVar2 < (uint)pSVar10.Length) {
																__this_00._size = uVar2 + 1;
																pSVar10[(int)uVar2] = pSVar9;
															}
															else {
																__this_00.AddWithResize((object)pSVar9);
															}
															pSVar7 = this.Weather;
															if (pSVar7 != null) {
																pSVar9 = pSVar7.SerializeToJsonString();
																piVar1 = &__this_00._version;
																*piVar1 = *piVar1 + 1;
																pSVar10 = __this_00._items;
																if (pSVar10 != null) {
																	uVar2 = __this_00._size;
																	if (uVar2 < (uint)pSVar10.Length) {
																		__this_00._size = uVar2 + 1;
																		pSVar10[(int)uVar2] = pSVar9;
																		uVar3 = (g_data_07556750._2).cctor_finished_or_no_cctor;
																	}
																	else {
																		__this_00.AddWithResize((object)pSVar9);
																		uVar3 = (g_data_07556750._2).cctor_finished_or_no_cctor;
																	}
																	if (uVar3 == 0) {
																	}
																	pSVar9 = Char.ToString(ref this.Delimiter);
																	pSVar10 = (String[])__this_00.ToArray();
																	pSVar9 = String.Join(pSVar9, pSVar10);
																	return pSVar9;
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
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60019F1")]
	[Address(RVA = "0x58A2570", Offset = "0x58A1570", VA = "0x58A2570")]
	private string CreateHeader(string name)
	{
		// Lifted from source/cpp/Map/MapScript.c (Map.MapScript$$CreateHeader): clean
		String pSVar1;

		pSVar1 = String.Concat(this.HeaderPrefix, name);
		return pSVar1;
	}

	[Token(Token = "0x60019F2")]
	[Address(RVA = "0x58A2580", Offset = "0x58A1580", VA = "0x58A2580", Slot = "5")]
	public virtual void Deserialize(string csv, bool skipErrors = false)
	{
		// Lifted from source/cpp/Map/MapScript.c (Map.MapScript$$Deserialize): 23 lines keep C-only constructs
		int piVar1;
		int iVar2;
		int iVar3;
		String[] pSVar4;
		MethodInfo pMVar5;
		bool bVar6;
		uint uVar7;
		MapScript.c__DisplayClass21_0 __this_00;
		String pSVar8;
		String[] pSVar9;
		List<string> pSVar10;
		String pSVar11;
		Char[] trimChars;
		Action __this_01;
		uint uVar12;
		String* ppSVar13;
		MethodInfo* ppMVar14;
		String pSStack_48;

		if (Il2CppMethodInitialized_07545a8c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapScript_c__DisplayClass21_0_Deserialize_b__0) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapScript_c__DisplayClass21_0_Deserialize_b__1) ;
			Il2CppMethodInitialized_07545a8c = true;
		}
		__this_00 = new MapScript.c__DisplayClass21_0();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			ppSVar13 = &__this_00.csv;
			__this_00.csv = csv;
			pSVar10 = this.Errors;
			if (pSVar10 != null) {
				piVar1 = &pSVar10._version;
				*piVar1 = *piVar1 + 1;
				iVar2 = pSVar10._size;
				pSVar10._size = 0;
				if (0 < iVar2) {
					Array.Clear((Array)pSVar10._items, 0, iVar2);
				}
				this._LastUpgradeResult_k__BackingField = null;
				this._OriginalCSV_k__BackingField = *ppSVar13;
				pSVar8 = *ppSVar13;
				pSVar8 = Util.CreateMD5(pSVar8);
				this.MapHash = pSVar8;
				bVar6 = MapConverter.IsLegacy(*ppSVar13);
				if (bVar6) {
					ppSVar13 = &"Legacy";
					ppMVar14 = &MethodInfo_Map_MapScript_c__DisplayClass21_0_Deserialize_b__0;
	label_059a2a5f: ;
					__this_01 = new Action((object)__this_00, (intptr_t)*ppMVar14);
					this.RunSection(*ppSVar13, __this_01, skipErrors);
					return;
				}
				if (*ppSVar13 != null) {
					pSVar9 = (*ppSVar13).Split(this.Delimiter, 0);
					pSVar10 = new List<string>();
					if (pSVar9 != null) {
						pSStack_48 = "";
						uVar7 = (uint)pSVar9.Length;
						if (0 < (int)uVar7) {
							uVar12 = 0;
							do {
								if (uVar7 <= uVar12) goto label_059a2aa5;
								if ((pSVar9[(int)uVar12] == null) ||(pSVar8 = (pSVar9[(int)uVar12]).Trim(), pSVar8 == null)) goto label_059a2aa0;
								bVar6 = pSVar8.StartsWith(this.HeaderPrefix);
								if (bVar6) {
									pSVar11 = this.HeaderPrefix;
									if (pSVar11 == null) goto label_059a2aa0;
									pSVar11 = pSVar8.Substring(pSVar11._stringLength);
									bVar6 = (pSVar11 == "Logic");
									if (bVar6) {
										this.LogicStart = uVar12 + 1;
									}
									this.DeserializeSection(pSStack_48, pSVar10, skipErrors);
									pSVar11 = this.HeaderPrefix;
									if ((pSVar11 == null) ||(pSStack_48 = pSVar8.Substring(pSVar11._stringLength), pSVar10 == null)) goto label_059a2aa0;
									piVar1 = &pSVar10._version;
									*piVar1 = *piVar1 + 1;
									iVar2 = pSVar10._size;
									pSVar10._size = 0;
									if (0 < iVar2) {
										Array.Clear((Array)pSVar10._items, 0, iVar2);
									}
								}
								else {
									bVar6 = (pSStack_48 == "Logic");
									pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
									if (bVar6) {
										if ((uint)pSVar9.Length <= uVar12) {
	label_059a2aa5: ;
											throw new IndexOutOfRangeException();
										}
										pSVar8 = pSVar9[(int)uVar12];
										trimChars = (Char[])new char[2];
										if (trimChars == null) goto label_059a2aa0;
										iVar3 = (int)trimChars.Length;
										if ((iVar3 == 0) || (trimChars[0] = 0xd, iVar3 == 1)) goto label_059a2aa5;
										trimChars[1] = 10;
										if ((pSVar8 == null) ||(pSVar8 = pSVar8.Trim(trimChars), pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add, pSVar10 == null)) goto label_059a2aa0;
										piVar1 = &pSVar10._version;
										*piVar1 = *piVar1 + 1;
										pSVar4 = pSVar10._items;
										if (pSVar4 == null) goto label_059a2aa0;
										uVar7 = pSVar10._size;
										if (uVar7 < (uint)pSVar4.Length) {
											pSVar10._size = uVar7 + 1;
											pSVar4[(int)uVar7] = pSVar8;
										}
										else {
											pSVar10.AddWithResize((object)pSVar8);
										}
									}
									else {
										if (pSVar10 == null) goto label_059a2aa0;
										piVar1 = &pSVar10._version;
										*piVar1 = *piVar1 + 1;
										pSVar4 = pSVar10._items;
										if (pSVar4 == null) goto label_059a2aa0;
										uVar7 = pSVar10._size;
										if (uVar7 < (uint)pSVar4.Length) {
											pSVar10._size = uVar7 + 1;
											pSVar4[(int)uVar7] = pSVar8;
										}
										else {
											pSVar10.AddWithResize((object)pSVar8);
										}
									}
								}
								uVar12 = uVar12 + 1;
								uVar7 = (uint)pSVar9.Length;
							} while ((int)uVar12 < (int)uVar7);
						}
						this.DeserializeSection(pSStack_48, pSVar10, skipErrors);
						ppSVar13 = &"Version";
						ppMVar14 = &MethodInfo_Map_MapScript_c__DisplayClass21_0_Deserialize_b__1;
						goto label_059a2a5f;
					}
				}
			}
		}
	label_059a2aa0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60019F3")]
	[Address(RVA = "0x58A2C80", Offset = "0x58A1C80", VA = "0x58A2C80")]
	private void DeserializeSection(string currentSection, List<string> currentSectionItems, bool skipErrors)
	{
		// Lifted from source/cpp/Map/MapScript.c (Map.MapScript$$DeserializeSection): 1 lines keep C-only constructs
		MapScript.c__DisplayClass22_0 __this_00;
		String pSVar1;
		String[] value;
		Action __this_01;

		__this_00 = new MapScript.c__DisplayClass22_0();
		if (__this_00 != null) {
			__this_00.currentSection = currentSection;
			__this_00.__4__this = this;
			__this_00.skipErrors = skipErrors;
			pSVar1 = Char.ToString(ref this.Delimiter);
			if (currentSectionItems != null) {
				value = (String[])currentSectionItems.ToArray();
				pSVar1 = String.Join(pSVar1, value);
				__this_00.currentSectionCSV = pSVar1;
				pSVar1 = __this_00.currentSection;
				__this_01 = new Action((object)__this_00, (intptr_t)MethodInfo_Map_MapScript_c__DisplayClass22_0_DeserializeSection_b__0);
				this.RunSection(pSVar1, __this_01, __this_00.skipErrors);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60019F4")]
	[Address(RVA = "0x58A2AC0", Offset = "0x58A1AC0", VA = "0x58A2AC0")]
	private void RunSection(string section, Action action, bool skipErrors)
	{
		// Lifted from source/cpp/Map/MapScript.c (Map.MapScript$$RunSection): 2 lines keep C-only constructs
		undefined3 in_register_00000009;

		if (action == null) {
			throw new NullReferenceException();
		}
		(*(code)action.invoke_impl)(action.method_code,action.method,action, CONCAT31(in_register_00000009, skipErrors));
		return;
	}

	[Token(Token = "0x60019F5")]
	[Address(RVA = "0x58A0530", Offset = "0x589F530", VA = "0x58A0530")]
	public MapScript()
	{
		// Lifted from source/cpp/Map/MapScript.c (Map.MapScript$$.ctor): clean
		MapScriptOptions __this_00;
		MapScriptCustomAssets __this_01;
		List<string> pSVar1;
		MapScriptObjects __this_02;
		List<MapScriptBaseObject> __this_03;
		WeatherSet __this_04;

		this.HeaderPrefix = "/// ";
		this.Delimiter = 10;
		__this_00.EditorVersion = "1.1";
		__this_00.Description = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_00 = new MapScriptOptions();
		this.Options = __this_00;
		pSVar1 = new List<string>();
		__this_01.CustomAssets = pSVar1;
		__this_01 = new MapScriptCustomAssets();
		this.CustomAssets = __this_01;
		__this_03 = new List<MapScriptBaseObject>();
		__this_02.Objects = __this_03;
		__this_02 = new MapScriptObjects();
		this.Objects = __this_02;
		__this_04 = new WeatherSet();
		this.Weather = __this_04;
		this.Logic = (String)**(ulong*)(g_data_07556758 + 0xb8);
		this.MapHash = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar1 = new List<string>();
		this.Errors = pSVar1;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/MapScript.c.

	// Map.MapScript.<>c__DisplayClass21_0$$.ctor: clean
	private void c__DisplayClass21_0__ctor()
	{
		base();
		return;
	}

	// Map.MapScript.<>c__DisplayClass22_0$$.ctor: clean
	private void c__DisplayClass22_0__ctor()
	{
		base();
		return;
	}

	// Map.MapScript.<>c__DisplayClass21_0$$<Deserialize>b__0: clean
	private void c__DisplayClass21_0__Deserialize_b__0()
	{
		MapScript pMVar1;
		MapScript pMVar2;

		pMVar1 = this.__4__this;
		pMVar2 = MapConverter.Convert(this.csv);
		if ((pMVar2 == null) || (pMVar1 == null)) {
			throw new NullReferenceException();
		}
		pMVar1.Objects = pMVar2.Objects;
		return;
	}

	// Map.MapScript.<>c__DisplayClass21_0$$<Deserialize>b__1: clean
	private void c__DisplayClass21_0__Deserialize_b__1()
	{
		MapScript mapScript;
		MapVersionConversionResult pMVar1;

		mapScript = this.__4__this;
		pMVar1 = MapVersionConverter.UpgradeToCurrent(mapScript);
		if (mapScript == null) {
			throw new NullReferenceException();
		}
		mapScript._LastUpgradeResult_k__BackingField = pMVar1;
		return;
	}

	// Map.MapScript.<>c__DisplayClass22_0$$<DeserializeSection>b__0: clean
	private void c__DisplayClass22_0__DeserializeSection_b__0()
	{
		MapScript pMVar1;
		MapScriptOptions pMVar2;
		MapScriptObjects __this_00;
		WeatherSet pSVar3;
		BoolSetting __this_01;
		bool bVar4;

		bVar4 = (this.currentSection == "Options");
		if (bVar4) {
			pMVar1 = this.__4__this;
			if (pMVar1 == null) goto label_059a36ec;
			pMVar2 = pMVar1.Options;
		}
		else {
			bVar4 = (this.currentSection == "CustomAssets");
			if (bVar4) {
				pMVar1 = this.__4__this;
				if (pMVar1 == null) goto label_059a36ec;
				pMVar2 = (MapScriptOptions)pMVar1.CustomAssets;
			}
			else {
				bVar4 = (this.currentSection == "Objects");
				if (!bVar4) {
					bVar4 = (this.currentSection == "Logic");
					if (bVar4) {
						pMVar1 = this.__4__this;
						if (pMVar1 != null) {
							pMVar1.Logic = this.currentSectionCSV;
							return;
						}
					}
					else {
						bVar4 = (this.currentSection == "Weather");
						if (!bVar4) {
							return;
						}
						pMVar1 = this.__4__this;
						if ((pMVar1 != null) &&(pSVar3 = pMVar1.Weather, pSVar3 != null)) {
							pSVar3.DeserializeFromJsonString(this.currentSectionCSV);
							pMVar1 = this.__4__this;
							if ((pMVar1 != null) &&((pSVar3 = pMVar1.Weather, pSVar3 != null &&(__this_01 = pSVar3.Preset, __this_01 != null)))) {
								__this_01.Value = false;
								return;
							}
						}
					}
					goto label_059a36ec;
				}
				pMVar1 = this.__4__this;
				if (this.skipErrors != false) {
					if ((pMVar1 != null) &&(__this_00 = pMVar1.Objects, __this_00 != null)) {
						__this_00.DeserializeSkippingErrors(this.currentSectionCSV, pMVar1.Errors);
						return;
					}
					goto label_059a36ec;
				}
				if (pMVar1 == null) goto label_059a36ec;
				pMVar2 = (MapScriptOptions)pMVar1.Objects;
			}
		}
		if (pMVar2 != null) {
			pMVar2.Deserialize(this.currentSectionCSV);
			return;
		}
	label_059a36ec: ;
		throw new NullReferenceException();
	}
}
