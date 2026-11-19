// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapConverter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapConverter.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapConverter.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x20003EF")]
internal class MapConverter
{
	[Token(Token = "0x400141E")]
	[FieldOffset(Offset = "0x0")]
	private static int _currentId;

	[Token(Token = "0x6001908")]
	[Address(RVA = "0x5879A10", Offset = "0x5878A10", VA = "0x5879A10")]
	public static bool IsLegacy(string map)
	{
		// Lifted from source/cpp/Map/MapConverter.c (Map.MapConverter$$IsLegacy): 1 lines keep C-only constructs
		String __this;
		bool bVar1;
		uint uVar2;
		String[] pSVar3;
		String a;
		uint uVar4;

		if ((map == null) ||(pSVar3 = map.Split(0x3b, 0), pSVar3 == null)) {
	label_05979ae0: ;
			throw new NullReferenceException();
		}
		uVar2 = (uint)pSVar3.Length;
		uVar4 = 0;
		if (0 < (int)uVar2) {
			do {
				if (uVar2 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				__this = pSVar3[(int)uVar4];
				if (__this == null) goto label_05979ae0;
				a = __this.Trim();
				bVar1 = (a == (String)**(ulong*)(g_data_07556758 + 0xb8));
				if (!bVar1) {
					bVar1 = __this.StartsWith("///");
					uVar4 = (uint)!bVar1;
					goto label_05979ad2;
				}
				uVar4 = uVar4 + 1;
				uVar2 = (uint)pSVar3.Length;
			} while ((int)uVar4 < (int)uVar2);
			uVar4 = 0;
		}
	label_05979ad2: ;
		return SUB41(uVar4, 0);
	}

	[Token(Token = "0x6001909")]
	[Address(RVA = "0x5879AF0", Offset = "0x5878AF0", VA = "0x5879AF0")]
	private static MapScriptSceneObject CreateForestFloor()
	{
		// Lifted from source/cpp/Map/MapConverter.c (Map.MapConverter$$CreateForestFloor): clean
		Dictionary<object, object> __this;
		MapScriptSceneObject __this_00;
		MapScriptBasicMaterial __this_01;
		MapScriptBasicMaterial pMVar1;
		Color255 __this_02;
		int iVar2;
		Color color;
		Vector3 scale;
		Vector3 position;

		__this_00 = new MapScriptSceneObject();
		if (__this_00 != null) {
			__this_00.Asset = "Geometry/Cuboid";
			scale.z = 134.286;
			scale.x = 134.286;
			scale.y = 6.407;
			__this_00.SetScale(scale);
			position.z = 5.333;
			position.x = -7.76;
			position.y = -32.03;
			__this_00.SetPosition(position);
			iVar2 = MapConverter._currentId + 1;
			MapConverter._currentId = iVar2;
			__this_00.Id = iVar2;
			__this_01 = new MapScriptBasicMaterial();
			if (__this_01 != null) {
				__this_01.Shader = "Basic";
				__this = (Dictionary<object, object>)BuiltinMapTextures.AllTextures;
				if (__this != null) {
					pMVar1 = __this.get_Item((Il2CppObject *)"Grass1");
					if (pMVar1 != null) {
						__this_01.Texture = pMVar1.Texture;
						__this_01.Tiling = (Vector2)0x4248000042480000;
						color.b = 0.654;
						color.a = 1.0;
						color.r = 0.678;
						color.g = 0.684;
						__this_02 = new Color255(color);
						__this_01.Color = __this_02;
						__this_00.Material = (MapScriptBaseMaterial)__this_01;
						return __this_00;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600190A")]
	[Address(RVA = "0x5879D50", Offset = "0x5878D50", VA = "0x5879D50")]
	private static MapScriptSceneObject CreateLight()
	{
		// Lifted from source/cpp/Map/MapConverter.c (Map.MapConverter$$CreateLight): clean
		Dictionary<object, object> __this;
		MapScriptSceneObject __this_00;
		MapScriptBaseObject pMVar1;
		int iVar2;
		Quaternion rotation;
		Vector3 local_20;

		__this_00 = new MapScriptSceneObject();
		__this = (Dictionary<object, object>)BuiltinMapPrefabs.AllPrefabs;
		if (__this != null) {
			pMVar1 = __this.get_Item((Il2CppObject *)"Daylight");
			if (__this_00 != null) {
				__this_00.Copy((BaseCSVObject)pMVar1);
				local_20.x = 0.8779006;
				local_20.y = 2.1275563;
				local_20.z = 0.02443461;
				rotation = Quaternion.Internal_FromEulerRad(ref local_20);
				__this_00.SetRotation(rotation);
				iVar2 = MapConverter._currentId + 1;
				MapConverter._currentId = iVar2;
				__this_00.Id = iVar2;
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600190B")]
	[Address(RVA = "0x5879E90", Offset = "0x5878E90", VA = "0x5879E90")]
	private static List<MapScriptBaseObject> CreateFengBounds()
	{
		// Lifted from source/cpp/Map/MapConverter.c (Map.MapConverter$$CreateFengBounds): 30 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		MapScriptBaseObject[] pMVar3;
		MethodInfo __this;
		MapScriptSceneObject pMVar4;
		MethodInfo pMVar6;
		Vector3 center;
		Vector3 center_00;
		Vector3 center_01;
		Vector3 center_02;
		Vector3 center_03;
		Vector3 size;
		Vector3 size_00;
		Vector3 size_01;
		Vector3 size_02;
		Vector3 size_03;

		__this = new List<MapScriptBaseObject>();
		center.z = 0.01;
		center.x = -700.0;
		center.y = 745.8;
		size.z = 160.0;
		size.x = 10.0;
		size.y = 160.0;
		pMVar4 = MapConverter.CreateBound(center, size, (Vector3)ZEXT412(0));
		if (__this != null) {
			piVar1 = (int)((long)&__this.name + 4);
			*piVar1 = *piVar1 + 1;
			pMVar3 = ((List<MapScriptBaseObject>)&__this.invoker_method)._items;
			if (pMVar3 != null) {
				uVar2 = *(uint)&__this.name;
				if (uVar2 < (uint)pMVar3.Length) {
					*(uint)&__this.name = uVar2 + 1;
					pMVar6 = (MethodInfo)(pMVar3.m_Items + (int)uVar2);
					pMVar3[(int)uVar2] = (MapScriptBaseObject)pMVar4;
				}
				else {
					__this.AddWithResize((object)pMVar4);
				}
				center_00.z = -700.0;
				center_00.x = 0.0;
				center_00.y = 745.8;
				size_00.z = 10.0;
				size_00.x = 160.0;
				size_00.y = 160.0;
				pMVar4 = MapConverter.CreateBound(center_00, size_00, (Vector3)ZEXT412(0));
				piVar1 = (int)((long)&__this.name + 4);
				*piVar1 = *piVar1 + 1;
				pMVar3 = ((List<MapScriptBaseObject>)&__this.invoker_method). _items;
				if (pMVar3 != null) {
					uVar2 = *(uint)&__this.name;
					if (uVar2 < (uint)pMVar3.Length) {
						*(uint)&__this.name = uVar2 + 1;
						pMVar6 = (MethodInfo)(pMVar3.m_Items + (int)uVar2);
						pMVar3[(int)uVar2] = (MapScriptBaseObject)pMVar4;
					}
					else {
						__this.AddWithResize((object)pMVar4);
					}
					center_01.z = 700.0;
					center_01.x = 0.0;
					center_01.y = 745.8;
					size_01.z = 10.0;
					size_01.x = 160.0;
					size_01.y = 160.0;
					pMVar4 = MapConverter.CreateBound(center_01, size_01, (Vector3)ZEXT412(0));
					piVar1 = (int)((long)&__this.name + 4);
					*piVar1 = *piVar1 + 1;
					pMVar3 = ((List<MapScriptBaseObject>)&__this.invoker_method). _items;
					if (pMVar3 != null) {
						uVar2 = *(uint)&__this.name;
						if (uVar2 < (uint)pMVar3.Length) {
							*(uint)&__this.name = uVar2 + 1;
							pMVar6 = (MethodInfo)(pMVar3.m_Items + (int)uVar2);
							pMVar3[(int)uVar2] = (MapScriptBaseObject)pMVar4;
						}
						else {
							__this.AddWithResize((object)pMVar4);
						}
						center_02.z = 0.01;
						center_02.x = 700.0;
						center_02.y = 745.8;
						size_02.z = 160.0;
						size_02.x = 10.0;
						size_02.y = 160.0;
						pMVar4 = MapConverter.CreateBound(center_02, size_02, (Vector3)ZEXT412(0));
						piVar1 = (int)((long)&__this.name + 4);
						*piVar1 = *piVar1 + 1;
						pMVar3 = ((List<MapScriptBaseObject>)&__this.invoker_method). _items;
						if (pMVar3 != null) {
							uVar2 = *(uint)&__this.name;
							if (uVar2 < (uint)pMVar3.Length) {
								*(uint)&__this.name = uVar2 + 1;
								pMVar6 = (MethodInfo)(pMVar3.m_Items + (int)uVar2);
								pMVar3[(int)uVar2] = (MapScriptBaseObject)pMVar4;
							}
							else {
								__this.AddWithResize((object)pMVar4);
							}
							center_03.z = 17.889;
							center_03.x = -2.23;
							center_03.y = 1253.07;
							size_03.z = 160.0;
							size_03.x = 160.0;
							size_03.y = 10.0;
							pMVar4 = MapConverter.CreateBound(center_03, size_03, (Vector3)ZEXT412(0)) ;
							piVar1 = (int)((long)&__this.name + 4);
							*piVar1 = *piVar1 + 1;
							pMVar3 = ((List<MapScriptBaseObject>)&__this.invoker_method) ._items;
							if (pMVar3 != null) {
								uVar2 = *(uint)&__this.name;
								if (uVar2 < (uint)pMVar3.Length) {
									*(uint)&__this.name = uVar2 + 1;
									pMVar3[(int)uVar2] = (MapScriptBaseObject)pMVar4;
								}
								else {
									__this.AddWithResize((object)pMVar4);
								}
								return (List<MapScriptBaseObject>)__this;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600190C")]
	[Address(RVA = "0x587A180", Offset = "0x5879180", VA = "0x587A180")]
	private static MapScriptSceneObject CreateBound(Vector3 center, Vector3 size, Vector3 rotation)
	{
		// Lifted from source/cpp/Map/MapConverter.c (Map.MapConverter$$CreateBound): clean
		Dictionary<object, object> __this;
		MapScriptSceneObject __this_00;
		MapScriptBaseObject pMVar1;
		int iVar2;

		__this_00 = new MapScriptSceneObject();
		__this = (Dictionary<object, object>)BuiltinMapPrefabs.AllPrefabs;
		if (__this != null) {
			pMVar1 = __this.get_Item((Il2CppObject *)"LegacyBarrier");
			if (__this_00 != null) {
				__this_00.Copy((BaseCSVObject)pMVar1);
				__this_00.SetPosition(center);
				__this_00.SetScale(size);
				__this_00.SetRotation(rotation);
				iVar2 = MapConverter._currentId + 1;
				MapConverter._currentId = iVar2;
				__this_00.Id = iVar2;
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600190D")]
	[Address(RVA = "0x587A2F0", Offset = "0x58792F0", VA = "0x587A2F0")]
	public static MapScript Convert(string map)
	{
		// Lifted from source/cpp/Map/MapConverter.c (Map.MapConverter$$Convert): 81 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		MapScriptObjects pMVar3;
		MapScriptBaseObject[] pMVar4;
		List<MapScriptBaseObject> pSVar5;
		Dictionary<object, object> pSVar6;
		Il2CppClass* ppIVar7;
		Il2CppClass pIVar8;
		int piVar9;
		MapScriptBasicMaterial pMVar10;
		bool bVar12;
		MapScript __this;
		MapScriptSceneObject pMVar13;
		String pSVar14;
		MethodInfo pMVar15;
		Char[] separator;
		String[] pSVar16;
		MapScriptBaseObject pMVar17;
		String pSVar18;
		String* ppSVar19;
		MapScriptBasicMaterial pMVar20;
		Color255 pUVar21;
		object pIVar22;
		List<MapScriptBaseObject> collection;
		int iVar23;
		ulong uVar24;
		uint uVar25;
		ulong uVar26;
		MapScript pMVar27;
		MapScriptBaseMaterial* targetAddress;
		Dictionary<string, MapScriptBaseObject> pSVar28;
		il2cpp_array_size_t piVar29;
		uint uVar30;
		float fVar31;
		float fVar32;
		uint uVar33;
		float fVar34;
		float fVar35;
		uint extraout_XMM0_Db;
		uint uVar36;
		uint extraout_XMM0_Db_00;
		uint uVar37;
		Quaternion rotation;
		Color color;
		Quaternion rotation_00;
		Quaternion rotation_01;
		Quaternion UVar38;
		Color color_00;
		Color color_01;
		Quaternion rotation_02;
		Quaternion rotation_03;
		Color color_02;
		Quaternion rotation_04;
		Color color_03;
		Vector3 position;
		Vector3 scale;
		Vector3 position_00;
		Vector3 scale_00;
		Vector3 position_01;
		Vector3 scale_01;
		Vector3 UVar39;
		Vector3 UVar40;
		Vector3 position_02;
		Vector3 position_03;
		Vector3 position_04;
		Vector3 position_05;
		MapScriptReflectiveMaterial local_b8;
		float local_a8;
		float fStack_a4;
		float local_7c;
		ulong local_78;
		ulong local_68;
		float local_60;
		float local_5c;
		String local_58;
		MapScript local_50;
		String[] local_48;
		Vector3 local_40;

		local_7c = 0.0;
		MapConverter._currentId = 0;
		__this = new MapScript();
		if (__this != null) {
			pMVar3 = __this.Objects;
			if (pMVar3 != null) {
				pMVar15 = (MethodInfo)pMVar3.Objects;
				pMVar13 = MapConverter.CreateForestFloor();
				if (pMVar15 != null) {
					piVar9 = (int)((long)&pMVar15.name + 4);
					*piVar9 = *piVar9 + 1;
					pMVar4 = ((List<MapScriptBaseObject>)&pMVar15.invoker_method). _items;
					if (pMVar4 != null) {
						uVar25 = *(uint)&pMVar15.name;
						if (uVar25 < (uint)pMVar4.Length) {
							*(uint)&pMVar15.name = uVar25 + 1;
							pMVar15 = (MethodInfo)(pMVar4.m_Items + (int)uVar25);
							pMVar4[(int)uVar25] = (MapScriptBaseObject)pMVar13;
						}
						else {
							pMVar15.AddWithResize((object)pMVar13);
						}
						pMVar3 = __this.Objects;
						if (pMVar3 != null) {
							pSVar5 = pMVar3.Objects;
							pMVar13 = MapConverter.CreateLight();
							pMVar15 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
							if (pSVar5 != null) {
								piVar9 = &pSVar5._version;
								*piVar9 = *piVar9 + 1;
								pMVar4 = pSVar5._items;
								if (pMVar4 != null) {
									uVar25 = pSVar5._size;
									if (uVar25 < (uint)pMVar4.Length) {
										pSVar5._size = uVar25 + 1;
										pMVar4[(int)uVar25] = (MapScriptBaseObject)pMVar13;
										uVar2 = (typeof(Regex)._2).cctor_finished_or_no_cctor;
									}
									else {
										pSVar5.AddWithResize((object)pMVar13);
										uVar2 = (typeof(Regex)._2).cctor_finished_or_no_cctor;
									}
									if (uVar2 == 0) {
									}
									pSVar14 = Regex.Replace(map, "\\s+", "");
									if (pSVar14 != null) {
										pSVar14 = pSVar14.Replace("\r\n", "");
										if (pSVar14 != null) {
											pSVar14 = pSVar14.Replace("\n", "");
											if (pSVar14 != null) {
												pMVar15 = (MethodInfo)pSVar14.Replace("\r", "");
												separator = (Char[])new char[1];
												if (separator != null) {
													if ((int)separator.Length == 0) {
	label_0597d07f: ;
														throw new IndexOutOfRangeException();
													}
													separator[0] = 0x3b;
													if (pMVar15 != null) {
														pSVar16 = pMVar15.Split(separator);
														if (pSVar16 != null) {
															uVar25 = (uint)pSVar16.Length;
															uVar30 = 0;
															local_50 = __this;
															if ((int)uVar25 < 1) {
																uVar24 = 0;
															}
															else {
																uVar26 = 0;
																local_48 = pSVar16;
																do {
																	if (uVar25 <= uVar30) goto label_0597d07f;
																	pSVar14 = local_48[(int)uVar30];
																	if (pSVar14 == null) goto label_0597d0d1;
																	pMVar15 = (MethodInfo)pSVar14.Trim();
																	if (pMVar15 == null) goto label_0597d0d1;
																	pSVar16 = pMVar15.Split(0x2c, 0);
																	if (pSVar16 == null) goto label_0597d0d1;
																	if (pSVar16.Length == 0) {
	label_0597a9a0: ;
																		uVar24 = uVar26;
																	}
																	else {
																		if ((int)pSVar16.Length == 0) goto label_0597d07f;
																		pMVar15 = (MethodInfo)pSVar16[0];
																		if (pMVar15 == null) goto label_0597d0d1;
																		bVar12 = pMVar15.StartsWith("//");
																		if (bVar12) goto label_0597a9a0;
																		pMVar15 = (MethodInfo)pSVar14.Trim();
																		bVar12 = ((String)pMVar15 == "");
																		if (bVar12) goto label_0597a9a0;
																		piVar29 = &pSVar16.Length;
																		local_58 = pSVar14;
																		pMVar13 = new MapScriptSceneObject();
																		if ((int)*piVar29 == 0) goto label_0597d07f;
																		if (pSVar16[0] == null) goto label_0597d0d1;
																		bVar12 = (pSVar16[0]).StartsWith("custom");
																		if (bVar12) {
																			if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																			if (pSVar16[1] == null) goto label_0597d0d1;
																			pSVar6 = (Dictionary<object, object>)BuiltinMapPrefabs.AllPrefabsLower;
																			pSVar14 = (pSVar16[1]).ToLower();
																			if (pSVar6 == (Dictionary<object, object>)0x0) goto label_0597d0d1;
																			bVar12 = pSVar6.ContainsKey((object)pSVar14);
																			if (bVar12) {
																				if ((typeof(BuiltinMapPrefabs)._2).cctor_finished_or_no_cctor == 0 ) {
																				}
																				if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																				if (pSVar16[1] == null) goto label_0597d0d1;
																				pSVar6 = (Dictionary<object, object>)BuiltinMapPrefabs.AllPrefabsLower;
																				pSVar14 = (pSVar16[1]).ToLower();
																				if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o * )0x0) goto label_0597d0d1;
																				pMVar17 = pSVar6.get_Item((object)pSVar14);
																				if (pMVar13 == null) goto label_0597d0d1;
																				pMVar13.Copy((BaseCSVObject)pMVar17);
																			}
																			if ((((uint)*piVar29 < 0xd) ||(position.x = Single.Parse(pSVar16[0xc]),(uint)pSVar16.Length < 0xe)) ||(fVar31 = Single.Parse(pSVar16[0xd]) , (uint)pSVar16.Length < 0xf)) goto label_0597d07f;
																			fVar32 = Single.Parse(pSVar16[0xe]);
																			if (pMVar13 == null) goto label_0597d0d1;
																			position.y = fVar31;
																			position.z = fVar32;
																			pMVar13.SetPosition(position);
																			if ((((*piVar29 & 0xfffffff0) == 0) ||(rotation.x = Single.Parse(pSVar16[0xf]),(uint)pSVar16.Length < 0x11)) ||(fVar31 = Single.Parse(pSVar16[0x10]),(uint)pSVar16.Length < 0x12)) goto label_0597d07f;
																			fVar32 = Single.Parse(pSVar16[0x11]);
																			local_78 = (String)CONCAT44(extraout_XMM0_Db, fVar32);
																			if ((uint)pSVar16.Length < 0x13) goto label_0597d07f;
																			fVar32 = Single.Parse(pSVar16[0x12]);
																			rotation.y = fVar31;
																			rotation.w = fVar32;
																			rotation.z = (float)local_78;
																			pMVar13.SetRotation(rotation);
																			if ((((pSVar16.Length & 0xfffffffc) == 0) ||(scale.x = Single.Parse(pSVar16[3]),(uint)pSVar16.Length < 5)) ||(fVar31 = Single.Parse(pSVar16[4]),(uint)pSVar16.Length < 6)) goto label_0597d07f;
																			fVar32 = Single.Parse(pSVar16[5]);
																			scale.y = fVar31;
																			scale.z = fVar32;
																			pMVar13.SetScale(scale);
																			if ((uint)pSVar16.Length < 3) goto label_0597d07f;
																			if (pSVar16[2] == null) goto label_0597d0d1;
																			pSVar14 = (pSVar16[2]).ToLower();
																			local_b8 = (MapScriptReflectiveMaterial)pMVar13.Material ;
																			if (local_b8 == null) goto label_0597d0d1;
																			pUVar21 = local_b8.Color;
																			if (pUVar21 == null) goto label_0597d0d1;
																			fVar31 = (float)pUVar21.A / 255.0;
																			bVar12 = (pSVar14 != "default");
																			local_68 = uVar26;
																			if (bVar12) {
																				if (pSVar14 == null) goto label_0597d0d1;
																				bVar12 = pSVar14.StartsWith("transparent");
																				if (bVar12) {
																					local_b8 = (MapScriptReflectiveMaterial)il2cpp_codegen_object_new((Il2CppClass)typeof(MapScriptBasicMaterial));
																					local_b8 = new MapScriptBasicMaterial() ;
																					if (local_b8 != null) {
																						local_b8.Shader = "Transparent";
																						pSVar18 = pSVar14.Substring(0xb);
																						bVar12 = Single.TryParse(pSVar18, ref local_7c);
																						if (bVar12) {
																							fVar31 = local_7c;
																						}
																						goto label_0597c014;
																					}
																					goto label_0597d0d1;
																				}
																				bVar12 = (pSVar14 == "empty");
																				if (bVar12) {
																					local_b8 = (MapScriptReflectiveMaterial)il2cpp_codegen_object_new((Il2CppClass)typeof(MapScriptBasicMaterial));
																					local_b8 = new MapScriptBasicMaterial() ;
																					if (local_b8 != null) {
																						local_b8.Shader = "Basic";
																						goto label_0597c014;
																					}
																					goto label_0597d0d1;
																				}
																				bVar12 = (pSVar14 == "ice1");
																				if (!bVar12) {
																					bVar12 = (pSVar14 == "barriereditormat");
																					if (bVar12) {
																						local_b8 = (MapScriptReflectiveMaterial)il2cpp_codegen_object_new((Il2CppClass)typeof(MapScriptBasicMaterial));
																						local_b8 = new MapScriptBasicMaterial();
																						if (local_b8 == null) goto label_0597d0d1;
																						local_b8.Shader = "Transparent";
																						uVar33 = 0;
																						uVar36 = 0x3f6ac083;
																						uVar37 = 0x3f800000;
																					}
																					else {
																						bVar12 = (pSVar14 == "regioneditormat") ;
																						if (!bVar12) {
																							bVar12 = (pSVar14 == "bombexplosiontex");
																							if (bVar12) {
																								local_b8 = (MapScriptReflectiveMaterial)il2cpp_codegen_object_new((Il2CppClass)typeof(MapScriptLegacyMaterial));
																								local_b8 = new MapScriptLegacyMaterial();
																								if ((typeof(MapObjectShader)._2). cctor_finished_or_no_cctor == 0) {
																								}
																								if (local_b8 != null) {
																									pSVar18 = MapObjectShader. OldBombExplode;
																									goto label_0597cd54;
																								}
																								goto label_0597d0d1;
																							}
																							bVar12 = (pSVar14 == "cannonregionmat");
																							if (bVar12) {
																								local_b8 = (MapScriptReflectiveMaterial)il2cpp_codegen_object_new((Il2CppClass)typeof(MapScriptLegacyMaterial));
																								local_b8 = new MapScriptLegacyMaterial();
																								if ((typeof(MapObjectShader)._2). cctor_finished_or_no_cctor == 0) {
																								}
																								if (local_b8 != null) {
																									local_b8.Shader = MapObjectShader. CannonRegionMat;
																									pUVar21 = il2cpp_codegen_object_new(typeof(Color255)) ;
																									color_02.b = 0.0;
																									color_02.a = 1.0;
																									color_02.r = 0.0;
																									color_02.g = 1.0;
																									pUVar21 = new Color255(color_02);
																									local_b8.Color = pUVar21;
																									fVar31 = 1.0;
																									goto label_0597c014;
																								}
																								goto label_0597d0d1;
																							}
																							bVar12 = (pSVar14 == "bombtex");
																							if (bVar12) {
																								local_b8 = (MapScriptReflectiveMaterial)il2cpp_codegen_object_new((Il2CppClass)typeof(MapScriptLegacyMaterial));
																								local_b8 = new MapScriptLegacyMaterial();
																								if ((typeof(MapObjectShader)._2). cctor_finished_or_no_cctor == 0) {
																								}
																								if (local_b8 == null) goto label_0597d0d1;
																								pSVar18 = MapObjectShader. BombTexMat;
																							}
																							else {
																								bVar12 = (pSVar14 == "cannonballtrail");
																								if (!bVar12) {
																									local_b8 = (MapScriptReflectiveMaterial)il2cpp_codegen_object_new((Il2CppClass)typeof(MapScriptBasicMaterial));
																									local_b8 = new MapScriptBasicMaterial();
																									if (local_b8 != null) {
																										local_b8.Shader = "Basic";
																										bVar12 = (pSVar14 == "bark");
																										if ((bVar12) ||(bVar12 = (pSVar14 == "grass"))) {
																											pSVar14 = String.Concat(pSVar14, "1");
																											if ((typeof(BuiltinMapTextures)._2). cctor_finished_or_no_cctor == 0) goto label_0597cea2;
	label_0597ced5: ;
																											pSVar6 = (Dictionary<object, object>)BuiltinMapTextures. AllTexturesLower;
																										}
																										else {
																											if ((typeof(BuiltinMapTextures)._2). cctor_finished_or_no_cctor != 0) goto label_0597ced5;
	label_0597cea2: ;
																											il2cpp_codegen_runtime_class_init(typeof(BuiltinMapTextures)) ;
																											pSVar6 = (Dictionary<object, object>)BuiltinMapTextures. AllTexturesLower;
																										}
																										if (pSVar6 == null) goto label_0597d0d1;
																										bVar12 = pSVar6.ContainsKey((object)pSVar14);
																										if (bVar12) {
																											if ((typeof(BuiltinMapTextures)._2). cctor_finished_or_no_cctor == 0) {
																											}
																											pSVar6 = (Dictionary<object, object>)BuiltinMapTextures. AllTexturesLower;
																											if (pSVar6 == null) goto label_0597d0d1;
																											local_78 = pSVar14;
																											pMVar20 = pSVar6.get_Item((object)pSVar14);
																											if (pMVar20 == null) goto label_0597d0d1;
																											pIVar8 = (Il2CppClass)pMVar20.Texture;
																											pIVar22 = il2cpp_codegen_is_inst_class((object)local_b8, (Il2CppClass)typeof(MapScriptBasicMaterial));
																											if (pIVar22 == null) goto label_0597d0d1;
																											pIVar22 = il2cpp_codegen_is_inst_class((object)local_b8, (Il2CppClass)typeof(MapScriptBasicMaterial));
																											pIVar22[2].klass = pIVar8;
																											pIVar22 = il2cpp_codegen_is_inst_class((object)local_b8, (Il2CppClass)typeof(MapScriptBasicMaterial));
																											if ((uint)*piVar29 < 0xb) goto label_0597d07f;
																											local_5c = Single.Parse(pSVar16[10]);
																											pSVar14 = local_78;
																											if ((uint)pSVar16.Length < 0xc) goto label_0597d07f;
																											local_60 = Single.Parse(pSVar16[0xb]);
																											pIVar22 = il2cpp_codegen_is_inst_class((object)local_b8, (Il2CppClass)typeof(MapScriptBasicMaterial));
																											if (pIVar22 == null) goto label_0597d0d1;
																											pIVar22 = il2cpp_codegen_is_inst_class((object)local_b8, (Il2CppClass)typeof(MapScriptBasicMaterial));
																											*(float)&pIVar22[2].monitor = local_5c;
																											*(float)((long)&pIVar22[2].monitor + 4) = local_60;
																										}
																										else {
																											pSVar18 = String.Concat("Unhandled legacy texture: ", local_58);
																											if ((typeof(Debug)._2). cctor_finished_or_no_cctor == 0) {
																											}
																											Debug.Log((object)pSVar18);
																										}
																										uVar25 = (uint)*piVar29;
																										goto joined_r0x0597d079;
																									}
																									goto label_0597d0d1;
																								}
																								local_b8 = (MapScriptReflectiveMaterial)il2cpp_codegen_object_new((Il2CppClass)typeof(MapScriptLegacyMaterial));
																								local_b8 = new MapScriptLegacyMaterial();
																								if ((typeof(MapObjectShader)._2). cctor_finished_or_no_cctor == 0) {
																								}
																								if (local_b8 == null) goto label_0597d0d1;
																								pSVar18 = MapObjectShader.Smoke1Mat ;
																							}
	label_0597cd54: ;
																							local_b8.Shader = pSVar18;
																							color_03.b = 0.5;
																							color_03.a = 0.5;
																							color_03.r = 0.5;
																							color_03.g = 0.5;
																							pUVar21 = new Color255(color_03);
																							local_b8.Color = pUVar21;
																							if ((10 < (uint)*piVar29) &&(fVar31 = Single.Parse(pSVar16[10]), 0xb < (uint)pSVar16.Length)) {
																								fVar32 = Single.Parse(pSVar16[0xb]);
																								*(float)&local_b8.Texture = fVar31;
																								*(float)((long)&local_b8.Texture + 4) = fVar32;
																								fVar31 = 0.5;
																								goto label_0597c014;
																							}
																							goto label_0597d07f;
																						}
																						local_b8 = (MapScriptReflectiveMaterial)il2cpp_codegen_object_new((Il2CppClass)typeof(MapScriptBasicMaterial));
																						local_b8 = new MapScriptBasicMaterial();
																						if (local_b8 == null) goto label_0597d0d1;
																						local_b8.Shader = "Transparent";
																						uVar33 = 0x3f800000;
																						uVar36 = 0;
																						uVar37 = 0;
																					}
																					color_00.g = (float)uVar36;
																					color_00.r = (float)uVar33;
																					color_00.a = 0.325;
																					color_00.b = (float)uVar37;
																					pUVar21 = new Color255(color_00);
																					local_b8.Color = pUVar21;
																					fVar31 = 0.32;
																					goto label_0597c014;
																				}
																				local_b8 = il2cpp_codegen_object_new((Il2CppClass)typeof(MapScriptReflectiveMaterial));
																				local_b8 = new MapScriptReflectiveMaterial();
																				if (local_b8 == null) goto label_0597d0d1;
																				local_b8.Shader = "Reflective";
																				pUVar21 = new Color255(0xb2, 0xe3, 0xff, 0xff);
																				local_b8.Color = pUVar21;
																				pSVar6 = (Dictionary<object, object>)BuiltinMapTextures. AllTexturesLower;
																				if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o * )0x0) goto label_0597d0d1;
																				pMVar20 = pSVar6.get_Item((object)pSVar14);
																				pMVar10 = typeof(MapScriptBasicMaterial);
																				if (pMVar20 == null) goto label_0597d0d1;
																				bVar1 = (typeof(MapScriptBasicMaterial)._2).typeHierarchyDepth;
																				if ((((local_b8.klass._2).typeHierarchyDepth < bVar1) ||(ppIVar7 = (local_b8.klass._2).typeHierarchy, ppIVar7[(ulong)bVar1 - 1] !=typeof(MapScriptBasicMaterial))) ||(local_b8.Texture = pMVar20.Texture, ppIVar7[(ulong)bVar1 - 1] != (Il2CppClass)pMVar10)) {
	label_0597d0d6: ;
																					throw new InvalidCastException();
																				}
																				if ((uint)*piVar29 < 0xb) goto label_0597d07f;
																				fVar32 = Single.Parse(pSVar16[10]);
																				local_78 = (String)CONCAT44(local_78._4_4_, fVar32);
																				if ((uint)pSVar16.Length < 0xc) goto label_0597d07f;
																				fVar32 = Single.Parse(pSVar16[0xb]);
																				bVar1 = (typeof(MapScriptBasicMaterial)._2).typeHierarchyDepth;
																				if (((local_b8.klass._2).typeHierarchyDepth < bVar1) ||((local_b8.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapScriptBasicMaterial))) goto label_0597d0d6;
																				local_b8.Tiling.x = (float)local_78;
																				local_b8.Tiling.y = fVar32;
																				uVar25 = (uint)*piVar29;
																			}
																			else {
	label_0597c014: ;
																				uVar25 = (uint)*piVar29;
																			}
	joined_r0x0597d079: ;
																			if ((uVar25 & 0xfffffffe) == 0) goto label_0597d07f;
																			if (pSVar16[1] == null) goto label_0597d0d1;
																			pSVar18 = (pSVar16[1]).ToLower();
																			if ((uint)*piVar29 < 7) goto label_0597d07f;
																			bVar12 = (pSVar16[6] != "0");
																			if (bVar12) {
																				bVar12 = (pSVar14 != "default");
																				if (!bVar12) {
																					if (pSVar18 == null) goto label_0597d0d1;
																					bVar12 = pSVar18.StartsWith("start");
																					if (((bVar12) ||(bVar12 = pSVar18.StartsWith("kill"))) ||((bVar12 = pSVar18.StartsWith("end"), bVar12 ||(bVar12 = pSVar18.StartsWith("checkpoint"))))) goto label_0597c202;
																				}
																				bVar12 = (pSVar14 == "cannonregionmat");
																				if (bVar12) {
																					if ((uint)*piVar29 < 9) goto label_0597d07f;
																					fVar34 = Single.Parse(pSVar16[8]);
																					fVar32 = 0.0;
																					uVar33 = 0;
																				}
																				else {
																					if ((((*piVar29 & 0xfffffff8) == 0) ||(fVar32 = Single.Parse(pSVar16[7]),(uint)pSVar16.Length < 9)) ||(fVar34 = Single.Parse(pSVar16[8]),(uint)pSVar16.Length < 10)) goto label_0597d07f;
																					fVar35 = Single.Parse(pSVar16[9]);
																					local_78 = (String)CONCAT44(extraout_XMM0_Db_00, fVar35);
																					uVar33 = (float)local_78;
																				}
																				color_01.g = fVar34;
																				color_01.r = fVar32;
																				color_01.a = fVar31;
																				color_01.b = (float)uVar33;
																				pUVar21 = new Color255(color_01);
																				local_b8.Color = pUVar21;
																			}
	label_0597c202: ;
																			targetAddress = &pMVar13.Material;
																			*targetAddress = (MapScriptBaseMaterial)local_b8;
																			uVar26 = local_68;
	label_0597c21b: ;
																			bVar12 = (pMVar13.Asset == "None");
																			if ((!bVar12) ||(bVar12 = (pMVar13.Name == "Unnamed"), !bVar12)) {
																				if (Il2CppMethodInitialized_075459e3 == false) {
																					il2cpp_codegen_initialize_runtime_metadata(&typeof(MapConverter)) ;
																					Il2CppMethodInitialized_075459e3 = true;
																				}
																				iVar23 = MapConverter._currentId + 1;
																				MapConverter._currentId = iVar23;
																				pMVar13.Id = iVar23;
																				pMVar3 = local_50.Objects;
																				if (pMVar3 == null) goto label_0597d0d1;
																				pMVar15 = (MethodInfo)pMVar3.Objects;
																				if (pMVar15 == null) goto label_0597d0d1;
																				piVar9 = (int)((long)&pMVar15.name + 4);
																				*piVar9 = *piVar9 + 1;
																				pMVar4 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields * )&pMVar15.invoker_method)._items;
																				if (pMVar4 == null) goto label_0597d0d1;
																				uVar25 = *(uint)&pMVar15.name;
																				if (uVar25 < (uint)pMVar4.Length) {
																					*(uint)&pMVar15.name = uVar25 + 1;
																					pMVar15 = (MethodInfo)(pMVar4.m_Items + (int)uVar25);
																					pMVar4[(int)uVar25] = (MapScriptBaseObject)pMVar13;
																				}
																				else {
																					pMVar15.AddWithResize((object)pMVar13);
																				}
	label_0597c346: ;
																				uVar24 = uVar26 & 0xffffffff;
																			}
																			else {
																				pMVar15 = (MethodInfo)String.Concat("Unhandled legacy object: ", local_58);
																				Debug.Log((object)pMVar15);
																				uVar24 = uVar26 & 0xffffffff;
																			}
																		}
																		else {
																			if ((int)*piVar29 == 0) goto label_0597d07f;
																			if (pSVar16[0] == null) goto label_0597d0d1;
																			bVar12 = (pSVar16[0]).StartsWith("spawnpoint");
																			if (bVar12) {
																				if (((uint)*piVar29 & 0xfffffffe) != 0) {
																					if (pSVar16[1] == null) goto label_0597d0d1;
																					pSVar14 = (pSVar16[1]).ToLower();
																					bVar12 = (pSVar14 == "titan");
																					if (bVar12) {
																						pSVar28 = BuiltinMapPrefabs.AllPrefabs;
																						if (pSVar28 !=null) {
																							ppSVar19 = &"Titan SpawnPoint";
																							goto label_0597af0d;
																						}
																						goto label_0597d0d1;
																					}
																					if ((*piVar29 & 0xfffffffe) != 0) {
																						if (pSVar16[1] == null) goto label_0597d0d1;
																						pSVar14 = (pSVar16[1]).ToLower();
																						bVar12 = (pSVar14 == "player") ;
																						if (bVar12) {
																							if ((typeof(BuiltinMapPrefabs)._2). cctor_finished_or_no_cctor == 0) {
																							}
																							pSVar6 = (Dictionary<object, object>)BuiltinMapPrefabs. AllPrefabs;
																							if (pSVar6 == null) goto label_0597d0d1;
																							pMVar17 = pSVar6.get_Item((Il2CppObject *)"Human SpawnPoint");
																							if (pMVar13 == null) goto label_0597d0d1;
	label_0597b0b1: ;
																							pMVar13.Copy((BaseCSVObject)pMVar17);
																						}
																						else {
																							if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																							if (pSVar16[1] == null) goto label_0597d0d1;
																							pSVar14 = (pSVar16[1]).ToLower();
																							bVar12 = (pSVar14 == "playerc");
																							if (bVar12) {
																								if ((typeof(BuiltinMapPrefabs)._2). cctor_finished_or_no_cctor == 0) {
																								}
																								pSVar28 = BuiltinMapPrefabs. AllPrefabs;
																								if (pSVar28 !=null) {
																									ppSVar19 = &"Human SpawnPoint (blue)";
	label_0597af0d: ;
																									pMVar17 = pSVar28.get_Item((object)*ppSVar19);
																									if (pMVar13 != null) goto label_0597b0b1;
																								}
																								goto label_0597d0d1;
																							}
																							if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																							if (pSVar16[1] == null) goto label_0597d0d1;
																							pSVar14 = (pSVar16[1]).ToLower();
																							bVar12 = (pSVar14 == "playerm");
																							if (bVar12) {
																								if ((typeof(BuiltinMapPrefabs)._2). cctor_finished_or_no_cctor == 0) {
																								}
																								pSVar28 = BuiltinMapPrefabs. AllPrefabs;
																								if (pSVar28 !=null) {
																									ppSVar19 = &"Human SpawnPoint (red)";
																									goto label_0597af0d;
																								}
																								goto label_0597d0d1;
																							}
																						}
																						if (((2 < (uint)*piVar29) &&(local_a8 = Single.Parse(pSVar16[2]),(pSVar16.Length & 0xfffffffc) != 0)) &&(fStack_a4 = Single.Parse(pSVar16[3]), 4 < (uint)pSVar16.Length)) {
																							fVar31 = Single.Parse(pSVar16[4]);
																							if (pMVar13 != null) {
	label_0597b12d: ;
																								position_00.y = fStack_a4;
																								position_00.x = local_a8;
																								position_00.z = fVar31;
																								pMVar13.SetPosition(position_00);
																								goto label_0597c21b;
																							}
																							goto label_0597d0d1;
																						}
																					}
																				}
																				goto label_0597d07f;
																			}
																			if ((uint)*piVar29 == 0) goto label_0597d07f;
																			if (pSVar16[0] == null) goto label_0597d0d1;
																			bVar12 = (pSVar16[0]).StartsWith("misc");
																			if (bVar12) {
																				if (((uint)*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																				bVar12 = (pSVar16[1] == "barrier");
																				if (bVar12) {
																					pSVar28 = BuiltinMapPrefabs.AllPrefabs;
																					if (pSVar28 !=null) {
																						ppSVar19 = &"LegacyBarrier";
	label_0597afd1: ;
																						pMVar17 = pSVar28.get_Item((object)*ppSVar19);
	joined_r0x0597afe6: ;
																						if (pMVar13 != null) {
																							pMVar13.Copy((BaseCSVObject)pMVar17);
																							uVar25 = (uint)*piVar29;
	joined_r0x0597b347: ;
																							if (((5 < uVar25) &&(UVar39.x = Single.Parse(pSVar16[5]), 6 < (uint)pSVar16.Length)) &&(fVar31 = Single.Parse(pSVar16[6]),(pSVar16.Length & 0xfffffff8) != 0)) {
																								fVar32 = Single.Parse(pSVar16[7]);
																								UVar39.y = fVar31;
																								UVar39.z = fVar32;
																								pMVar13.SetPosition(UVar39);
																								if ((((8 < (uint)pSVar16.Length) &&(UVar38.x = Single.Parse(pSVar16[8]), 9 < (uint)pSVar16.Length)) &&(fVar31 = Single.Parse(pSVar16[9]), 10 < (uint)pSVar16.Length)) &&(fVar32 = Single.Parse(pSVar16[10]), 0xb < (uint)pSVar16.Length)) {
																									fVar34 = Single.Parse(pSVar16[0xb]);
																									UVar38.y = fVar31;
																									UVar38.w = fVar34;
																									UVar38.z = fVar32;
																									pMVar13.SetRotation(UVar38);
																									if (((2 < (uint)pSVar16.Length) &&(fVar31 = Single.Parse(pSVar16[2]),(pSVar16.Length & 0xfffffffc) != 0)) &&(fVar32 = Single.Parse(pSVar16[3]) , 4 < (uint)pSVar16.Length)) {
																										fVar34 = Single.Parse(pSVar16[4]);
	label_0597b484: ;
																										scale_00.y = fVar32;
																										scale_00.x = fVar31;
																										scale_00.z = fVar34;
																										pMVar13.SetScale(scale_00);
																										goto label_0597c21b;
																									}
																								}
																							}
																							goto label_0597d07f;
																						}
																					}
																				}
																				else {
																					if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																					bVar12 = (pSVar16[1] == "barrierEditor");
																					if (bVar12) {
																						local_68 = uVar26;
																						if (pMVar13 != null) {
																							pMVar13.Asset = "Geometry/Cuboid";
																							pMVar20 = il2cpp_codegen_object_new((Il2CppClass)typeof(MapScriptBasicMaterial));
																							pMVar20 = new MapScriptBasicMaterial();
																							if (pMVar20 != null) {
																								pMVar20.Shader = "Transparent";
																								color.b = 1.0;
																								color.a = 0.32;
																								color.r = 0.0;
																								color.g = 0.917;
																								pUVar21 = new Color255(color) ;
																								pMVar20.Color = pUVar21;
																								pMVar13.Material =(MapScriptBaseMaterial)pMVar20;
																								uVar25 = (uint)*piVar29;
																								uVar26 = local_68;
																								goto joined_r0x0597b347;
																							}
																						}
																					}
																					else {
																						if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																						bVar12 = (pSVar16[1] == "racingStart");
																						if (bVar12) {
																							if ((typeof(BuiltinMapPrefabs)._2). cctor_finished_or_no_cctor == 0) {
																							}
																							pSVar28 = BuiltinMapPrefabs. AllPrefabs;
																							if (pSVar28 !=null) {
																								ppSVar19 = &"Racing Start Barrier Cuboid";
																								goto label_0597afd1;
																							}
																						}
																						else {
																							if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																							bVar12 = (pSVar16[1] == "racingEnd");
																							if (!bVar12) {
																								if ((*piVar29 & 0xfffffffe) != 0) {
																									pMVar15 = (MethodInfo)pSVar16[1];
																									bVar12 = ((String)pMVar15 == "region");
																									if (!bVar12) goto label_0597cc69;
																									goto label_0597c346;
																								}
																								goto label_0597d07f;
																							}
																							if ((typeof(BuiltinMapPrefabs)._2). cctor_finished_or_no_cctor == 0) {
																							}
																							pSVar6 = (Dictionary<object, object>)BuiltinMapPrefabs. AllPrefabs;
																							if (pSVar6 != null) {
																								pMVar17 = pSVar6.get_Item((Il2CppObject *)"Racing Finish Region Cuboid");
																								goto joined_r0x0597afe6;
																							}
																						}
																					}
																				}
																				goto label_0597d0d1;
																			}
																			if ((uint)*piVar29 == 0) goto label_0597d07f;
																			if (pSVar16[0] == null) goto label_0597d0d1;
																			bVar12 = (pSVar16[0]).StartsWith("base");
																			if (bVar12) {
																				if (((uint)*piVar29 & 0xfffffffe) != 0) {
																					if (pSVar16[1] != null) {
																						pSVar14 = (pSVar16[1]).ToLower();
																						bVar12 = (pSVar14 == "aot_supply") ;
																						if (bVar12) {
																							if ((typeof(BuiltinMapPrefabs)._2). cctor_finished_or_no_cctor == 0) {
																							}
																							pSVar28 = BuiltinMapPrefabs. AllPrefabs;
																							if (pSVar28 ==null) goto label_0597d0d1;
																							ppSVar19 = &"Supply1";
	label_0597b910: ;
																							pMVar17 = pSVar28.get_Item((object)*ppSVar19);
																							if (pMVar13 == null) goto label_0597d0d1;
																							pMVar13.Copy((BaseCSVObject)pMVar17);
																						}
																						else {
																							if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																							if (pSVar16[1] == null) goto label_0597d0d1;
																							pSVar14 = (pSVar16[1]).ToLower();
																							bVar12 = (pSVar14 == "levelbottom");
																							if (bVar12) {
																								if ((typeof(BuiltinMapPrefabs)._2). cctor_finished_or_no_cctor == 0) {
																								}
																								pSVar28 = BuiltinMapPrefabs. AllPrefabs;
																								if (pSVar28 !=null) {
																									ppSVar19 = &"LevelBottom";
																									goto label_0597b910;
																								}
																								goto label_0597d0d1;
																							}
																						}
																						if ((int)(uint)*piVar29 < 0xf) {
																							if ((((uint)*piVar29 < 3) ||(UVar40.x = Single.Parse(pSVar16[2]),(pSVar16.Length & 0xfffffffc) == 0)) ||(fVar31 = Single.Parse(pSVar16[3]),(uint)pSVar16.Length < 5)) goto label_0597d07f;
																							fVar32 = Single.Parse(pSVar16[4]);
																							if (pMVar13 == null) goto label_0597d0d1;
																							UVar40.y = fVar31;
																							UVar40.z = fVar32;
																							pMVar13.SetPosition(UVar40);
																							if (((((uint)*piVar29 < 6) ||(rotation_01.x = Single.Parse(pSVar16[5]),(uint)pSVar16.Length < 7)) ||(fVar31 = Single.Parse(pSVar16[6]),(pSVar16.Length & 0xfffffff8) == 0)) ||(fVar32 = Single.Parse(pSVar16[7]),(uint)pSVar16.Length < 9)) goto label_0597d07f;
																							fVar34 = Single.Parse(pSVar16[8]);
																							rotation_01.y = fVar31;
																							rotation_01.w = fVar34;
																							rotation_01.z = fVar32;
																							pMVar13.SetRotation(rotation_01);
																						}
																						else {
																							position_01.x = Single.Parse(pSVar16[0xc]) ;
																							if (((uint)pSVar16.Length < 0xe) ||(fVar31 = Single.Parse(pSVar16[0xd]),(uint)pSVar16.Length < 0xf)) goto label_0597d07f;
																							fVar32 = Single.Parse(pSVar16[0xe]);
																							if (pMVar13 == null) goto label_0597d0d1;
																							position_01.y = fVar31;
																							position_01.z = fVar32;
																							pMVar13.SetPosition(position_01);
																							if ((((*piVar29 & 0xfffffff0) == 0) ||(rotation_00.x = Single.Parse(pSVar16[0xf]),(uint)pSVar16.Length < 0x11)) ||((fVar31 = Single.Parse(pSVar16[0x10]) , (uint)pSVar16.Length < 0x12 ||(fVar32 = Single.Parse(pSVar16[0x11]) , (uint)pSVar16.Length < 0x13)))) goto label_0597d07f;
																							fVar34 = Single.Parse(pSVar16[0x12]);
																							rotation_00.y = fVar31;
																							rotation_00.w = fVar34;
																							rotation_00.z = fVar32;
																							pMVar13.SetRotation(rotation_00);
																							if ((((pSVar16.Length & 0xfffffffc) == 0) ||(scale_01.x = Single.Parse(pSVar16[3]),(uint)pSVar16.Length < 5)) ||(fVar31 = Single.Parse(pSVar16[4]),(uint)pSVar16.Length < 6)) goto label_0597d07f;
																							fVar32 = Single.Parse(pSVar16[5]);
																							scale_01.y = fVar31;
																							scale_01.z = fVar32;
																							pMVar13.SetScale(scale_01);
																						}
																						if ((*piVar29 & 0xfffffffe) != 0) {
																							if (pSVar16[1] != null) {
																								pSVar14 = (pSVar16[1]).ToLower();
																								bVar12 = (pSVar14 == "aot_supply");
																								if (!bVar12) goto label_0597c21b;
																								UVar39 = pMVar13.GetPosition();
																								UVar40 = pMVar13.GetRotation();
																								local_40.z = UVar40.z * 0.017453292;
																								local_40.y = UVar40.y * 0.017453292;
																								local_40.x = UVar40.x * 0.017453292;
																								UVar38 = Quaternion.Internal_FromEulerRad(ref local_40);
																								UVar40 = (UVar38 * (Vector3)(typeof(Vector3). static_fields.backVector));
																								local_a8 = UVar39.x;
																								fStack_a4 = UVar39.y;
																								local_a8 = UVar40.x * 0.37 + local_a8;
																								fStack_a4 = UVar40.y * 0.37 + fStack_a4;
																								fVar31 = UVar40.z * 0.37 + UVar39.z;
																								goto label_0597b12d;
																							}
																							goto label_0597d0d1;
																						}
																						goto label_0597d07f;
																					}
																					goto label_0597d0d1;
																				}
																				goto label_0597d07f;
																			}
																			if ((uint)*piVar29 == 0) goto label_0597d07f;
																			if (pSVar16[0] == null) goto label_0597d0d1;
																			bVar12 = (pSVar16[0]).StartsWith("photon");
																			uVar24 = (ulong)(uint)*piVar29;
																			if (bVar12) {
																				if (((uint)*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																				if (pSVar16[1] == null) goto label_0597d0d1;
																				pSVar14 = (pSVar16[1]).ToLower();
																				bVar12 = (pSVar14 == "cannonground");
																				if (bVar12) {
	label_0597b5c1: ;
																					if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																					if (pSVar16[1] == null) goto label_0597d0d1;
																					pSVar14 = (pSVar16[1]).ToLower();
																					bVar12 = (pSVar14 == "cannonground");
																					uVar2 = (typeof(BuiltinMapPrefabs)._2). cctor_finished_or_no_cctor;
																					if (bVar12) {
																						if (uVar2 == 0) {
																						}
																						pSVar28 = BuiltinMapPrefabs.AllPrefabs;
																						if (pSVar28 ==null) goto label_0597d0d1;
																						ppSVar19 = &"Cannon2";
																					}
																					else {
																						if (uVar2 == 0) {
																						}
																						pSVar28 = BuiltinMapPrefabs.AllPrefabs;
																						if (pSVar28 ==null) goto label_0597d0d1;
																						ppSVar19 = &"Cannon3";
																					}
																					pMVar17 = pSVar28.get_Item((object)*ppSVar19);
																					if (pMVar13 == null) goto label_0597d0d1;
																					pMVar13.Copy((BaseCSVObject)pMVar17);
																					if (0xe < (int)(uint)*piVar29) {
																						position_02.x = Single.Parse(pSVar16[0xc]);
																						if ((0xd < (uint)pSVar16.Length) &&(fVar31 = Single.Parse(pSVar16[0xd]), 0xe < (uint)pSVar16.Length)) {
																							fVar32 = Single.Parse(pSVar16[0xe]);
																							position_02.y = fVar31;
																							position_02.z = fVar32;
																							pMVar13.SetPosition(position_02);
																							if ((((pSVar16.Length & 0xfffffff0) != 0) &&((rotation_02.x = Single.Parse(pSVar16[0xf]), 0x10 < (uint)pSVar16.Length &&(fVar31 = Single.Parse(pSVar16[0x10]), 0x11 < (uint)pSVar16.Length)))) && (fVar32 = Single.Parse(pSVar16[0x11]), 0x12 < (uint)pSVar16.Length)) {
																								fVar34 = Single.Parse(pSVar16[0x12]);
																								rotation_02.y = fVar31;
																								rotation_02.w = fVar34;
																								rotation_02.z = fVar32;
																								pMVar13.SetRotation(rotation_02);
																								if ((((pSVar16.Length & 0xfffffffc) != 0) &&(fVar31 = Single.Parse(pSVar16[3]), 4 < (uint)pSVar16.Length)) &&(fVar32 = Single.Parse(pSVar16[4]), 5 < (uint)pSVar16.Length)) {
																									pSVar14 = pSVar16[5];
																									goto label_0597cc51;
																								}
																							}
																						}
																						goto label_0597d07f;
																					}
																					if ((((uint)*piVar29 < 3) ||(position_03.x = Single.Parse(pSVar16[2]),(pSVar16.Length & 0xfffffffc) == 0)) ||(fVar31 = Single.Parse(pSVar16[3]),(uint)pSVar16.Length < 5)) goto label_0597d07f;
																					fVar32 = Single.Parse(pSVar16[4]);
																					position_03.y = fVar31;
																					position_03.z = fVar32;
																					pMVar13.SetPosition(position_03);
																					if ((((uint)pSVar16.Length < 6) ||(fVar31 = Single.Parse(pSVar16[5]),(uint)pSVar16.Length < 7)) ||((fVar32 = Single.Parse(pSVar16[6]),(pSVar16.Length & 0xfffffff8) == 0 ||(fVar34 = Single.Parse(pSVar16[7]),(uint)pSVar16.Length < 9)))) goto label_0597d07f;
																					pSVar14 = pSVar16[8];
																				}
																				else {
																					if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																					if (pSVar16[1] == null) goto label_0597d0d1;
																					pSVar14 = (pSVar16[1]).ToLower();
																					bVar12 = (pSVar14 == "cannonwall");
																					if (bVar12) goto label_0597b5c1;
																					if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																					if ((pSVar16[1] == null) ||(pSVar14 = (pSVar16[1]).ToLower(), pSVar14 == null)) goto label_0597d0d1;
																					bVar12 = pSVar14.StartsWith("spawn");
																					if (!bVar12) goto label_0597cc69;
																					pSVar6 = (Dictionary<object, object>)BuiltinMapPrefabs.AllPrefabs;
																					if ((pSVar6 == null) ||(pMVar17 = pSVar6.get_Item((Il2CppObject *)"Titan SpawnPoint"), pMVar13 == null)) goto label_0597d0d1;
																					pMVar13.Copy((BaseCSVObject)pMVar17);
																					if (((uint)*piVar29 < 5) ||((position_04.x = Single.Parse(pSVar16[4]),(uint)pSVar16.Length < 6 ||(fVar31 = Single.Parse(pSVar16[5]),(uint)pSVar16.Length < 7)))) goto label_0597d07f;
																					fVar32 = Single.Parse(pSVar16[6]);
																					position_04.y = fVar31;
																					position_04.z = fVar32;
																					pMVar13.SetPosition(position_04);
																					if (((pSVar16.Length & 0xfffffff8) == 0) ||(((fVar31 = Single.Parse(pSVar16[7]),(uint)pSVar16.Length < 9 ||(fVar32 = Single.Parse(pSVar16[8]),(uint)pSVar16.Length < 10)) ||(fVar34 = Single.Parse(pSVar16[9]),(uint)pSVar16.Length < 0xb)))) goto label_0597d07f;
																					pSVar14 = pSVar16[10];
																				}
																				fVar35 = Single.Parse(pSVar14);
																				rotation_03.y = fVar32;
																				rotation_03.x = fVar31;
																				rotation_03.w = fVar35;
																				rotation_03.z = fVar34;
																				pMVar13.SetRotation(rotation_03);
																				goto label_0597c21b;
																			}
																			if (uVar24 == 0) goto label_0597d07f;
																			if (pSVar16[0] == null) goto label_0597d0d1;
																			bVar12 = (pSVar16[0]).StartsWith("racing");
																			pSVar14 = "";
																			if (bVar12) {
																				if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																				if (pSVar16[1] == null) goto label_0597d0d1;
																				bVar12 = (pSVar16[1]).StartsWith("start");
																				if (bVar12) {
																					if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																					if ("start" == null) goto label_0597d0d1;
																					pSVar14 = pSVar16[1];
																					ppSVar19 = &"Racing Start Barrier ";
																					pSVar18 = "start";
	label_0597ca0d: ;
																					if (pSVar14 == null) goto label_0597d0d1;
																					pSVar14 = pSVar14.Substring(pSVar18._stringLength);
																					pSVar14 = String.Concat(*ppSVar19, pSVar14);
																				}
																				else {
																					if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																					if (pSVar16[1] == null) goto label_0597d0d1;
																					bVar12 = (pSVar16[1]).StartsWith("end");
																					if (bVar12) {
																						if ((*piVar29 & 0xfffffffe) != 0) {
																							if ("end" != null) {
																								pSVar14 = pSVar16[1];
																								ppSVar19 = &"Racing Finish Region ";
																								pSVar18 = "end";
																								goto label_0597ca0d;
																							}
																							goto label_0597d0d1;
																						}
																						goto label_0597d07f;
																					}
																					if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																					if (pSVar16[1] == null) goto label_0597d0d1;
																					bVar12 = (pSVar16[1]).StartsWith("kill");
																					if (bVar12) {
																						if ((*piVar29 & 0xfffffffe) != 0) {
																							if ("kill" != null) {
																								pSVar14 = pSVar16[1];
																								ppSVar19 = &"Kill Region ";
																								pSVar18 = "kill";
																								goto label_0597ca0d;
																							}
																							goto label_0597d0d1;
																						}
																						goto label_0597d07f;
																					}
																					if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																					if (pSVar16[1] == null) goto label_0597d0d1;
																					bVar12 = (pSVar16[1]).StartsWith("checkpoint");
																					if (bVar12) {
																						if ((*piVar29 & 0xfffffffe) != 0) {
																							if ("checkpoint" != null) {
																								pSVar14 = pSVar16[1];
																								ppSVar19 = &"Racing Checkpoint Region ";
																								pSVar18 = "checkpoint";
																								goto label_0597ca0d;
																							}
																							goto label_0597d0d1;
																						}
																						goto label_0597d07f;
																					}
																				}
																				if (pSVar14 == null) goto label_0597d0d1;
																				if (pSVar14._stringLength < 1) goto label_0597cc69;
																				if ((typeof(BuiltinMapPrefabs)._2).cctor_finished_or_no_cctor == 0 ) {
																				}
																				pSVar6 = (Dictionary<object, object>)BuiltinMapPrefabs.AllPrefabsLower;
																				pSVar18 = pSVar14.ToLower();
																				if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o * )0x0) goto label_0597d0d1;
																				bVar12 = pSVar6.ContainsKey((object)pSVar18);
																				if (!bVar12) goto label_0597cc69;
																				if ((typeof(BuiltinMapPrefabs)._2).cctor_finished_or_no_cctor == 0 ) {
																				}
																				pSVar6 = (Dictionary<object, object>)BuiltinMapPrefabs.AllPrefabsLower;
																				pSVar14 = pSVar14.ToLower();
																				if ((pSVar6 != null) &&(pMVar17 = pSVar6.get_Item((object)pSVar14), pMVar13 != null)) {
																					pMVar13.Copy((BaseCSVObject)pMVar17);
																					if ((5 < (uint)*piVar29) &&((position_05.x = Single.Parse(pSVar16[5]), 6 < (uint)pSVar16.Length &&(fVar31 = Single.Parse(pSVar16[6]),(pSVar16.Length & 0xfffffff8) != 0)))) {
																						fVar32 = Single.Parse(pSVar16[7]) ;
																						position_05.y = fVar31;
																						position_05.z = fVar32;
																						pMVar13.SetPosition(position_05);
																						if ((8 < (uint)pSVar16.Length) &&(((rotation_04.x = Single.Parse(pSVar16[8]), 9 < (uint)pSVar16.Length &&(fVar31 = Single.Parse(pSVar16[9]), 10 < (uint)pSVar16.Length)) &&(fVar32 = Single.Parse(pSVar16[10]), 0xb < (uint)pSVar16.Length)))) {
																							fVar34 = Single.Parse(pSVar16[0xb]);
																							rotation_04.y = fVar31;
																							rotation_04.w = fVar34;
																							rotation_04.z = fVar32;
																							pMVar13.SetRotation(rotation_04);
																							if (((2 < (uint)pSVar16.Length) &&(fVar31 = Single.Parse(pSVar16[2]),(pSVar16.Length & 0xfffffffc) != 0)) &&(fVar32 = Single.Parse(pSVar16[3]), 4 < (uint)pSVar16.Length)) {
																								pSVar14 = pSVar16[4];
	label_0597cc51: ;
																								fVar34 = Single.Parse(pSVar14);
																								goto label_0597b484;
																							}
																						}
																					}
																					goto label_0597d07f;
																				}
																				goto label_0597d0d1;
																			}
																			if ((int)*piVar29 == 0) goto label_0597d07f;
																			if (pSVar16[0] == null) goto label_0597d0d1;
																			bVar12 = (pSVar16[0]).StartsWith("map");
																			if (!bVar12) {
	label_0597cc69: ;
																				if (pMVar13 != null) goto label_0597c21b;
																				goto label_0597d0d1;
																			}
																			if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
																			pMVar15 = (MethodInfo)pSVar16[1];
																			if (pMVar15 == null) goto label_0597d0d1;
																			bVar12 = pMVar15.StartsWith("disablebounds");
																			uVar24 = CONCAT71((int7)(uVar24 >> 8), 1);
																			if (!bVar12) goto label_0597cc69;
																		}
																	}
																	uVar30 = uVar30 + 1;
																	uVar25 = (uint)local_48.Length;
																	uVar26 = uVar24 & 0xffffffff;
																} while ((int)uVar30 < (int)uVar25);
															}
															if ((uVar24 & 1) != 0) {
																return local_50;
															}
															pMVar3 = local_50.Objects;
															if (pMVar3 != null) {
																pSVar5 = pMVar3.Objects;
																collection = MapConverter.CreateFengBounds();
																if (pSVar5 != null) {
																	pSVar5.AddRange((IEnumerable<T>)collection);
																	return pMVar27;
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
	label_0597d0d1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600190E")]
	[Address(RVA = "0x5879D10", Offset = "0x5878D10", VA = "0x5879D10")]
	private static int GetNextId()
	{
		// Lifted from source/cpp/Map/MapConverter.c (Map.MapConverter$$GetNextId): clean
		int iVar1;

		iVar1 = MapConverter._currentId + 1;
		MapConverter._currentId = iVar1;
		return iVar1;
	}

	[Token(Token = "0x600190F")]
	[Address(RVA = "0x587D0E0", Offset = "0x587C0E0", VA = "0x587D0E0")]
	public MapConverter()
	{
		// Lifted from source/cpp/Map/MapConverter.c (Map.MapConverter$$.ctor): clean
		base();
		return;
	}
}
