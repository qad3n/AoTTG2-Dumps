// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.MapEditorSceneGrid
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameManagers/MapEditorSceneGrid.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x200039C")]
internal class MapEditorSceneGrid : MonoBehaviour
{
	[Token(Token = "0x400125A")]
	private const int HalfLines = 50;

	[Token(Token = "0x400125B")]
	[FieldOffset(Offset = "0x20")]
	private readonly Mesh[] _meshes;

	[Token(Token = "0x400125C")]
	[FieldOffset(Offset = "0x28")]
	private readonly GameObject[] _planes;

	[Token(Token = "0x400125D")]
	[FieldOffset(Offset = "0x30")]
	private readonly Material[] _materials;

	[Token(Token = "0x400125E")]
	[FieldOffset(Offset = "0x38")]
	private readonly bool[] _enabledAxes;

	[Token(Token = "0x400125F")]
	[FieldOffset(Offset = "0x40")]
	private readonly float[] _lastSpacing;

	[Token(Token = "0x4001260")]
	[FieldOffset(Offset = "0x48")]
	private readonly Vector2[] _lastCenters;

	[Token(Token = "0x6001735")]
	[Address(RVA = "0x58554B0", Offset = "0x58544B0", VA = "0x58554B0")]
	private void Awake()
	{
		// Lifted from source/cpp/GameManagers/MapEditorSceneGrid.c (GameManagers.MapEditorSceneGrid$$Awake): clean
		Color color;
		Color color_00;
		Color color_01;

		color.b = 0.5;
		color.a = 0.5;
		color.r = 0.5;
		color.g = 0.5;
		this.CreatePlane(0, color);
		color_00.b = 0.5;
		color_00.a = 0.5;
		color_00.r = 0.5;
		color_00.g = 0.5;
		this.CreatePlane(1, color_00);
		color_01.b = 0.5;
		color_01.a = 0.5;
		color_01.r = 0.5;
		color_01.g = 0.5;
		this.CreatePlane(2, color_01);
		return;
	}

	[Token(Token = "0x6001736")]
	[Address(RVA = "0x5853960", Offset = "0x5852960", VA = "0x5853960")]
	public void SetAxes(HashSet<int> axes)
	{
		// Lifted from source/cpp/GameManagers/MapEditorSceneGrid.c (GameManagers.MapEditorSceneGrid$$SetAxes): clean
		Boolean[] pSVar1;
		GameObject[] pUVar2;
		bool bVar3;
		GameObject __this_00;

		pSVar1 = this._enabledAxes;
		if (axes == null) {
			if (pSVar1 != null) {
				if ((int)pSVar1.Length == 0) goto label_05953bcf;
				pSVar1[0] = false;
				pUVar2 = this._planes;
				if (pUVar2 != null) {
					if ((int)pUVar2.Length == 0) goto label_05953bcf;
					if (pUVar2[0] != null) {
						(pUVar2[0]).SetActive(false);
						pSVar1 = this._enabledAxes;
						if (pSVar1 != null) {
							if ((pSVar1.Length & 0xfffffffe) == 0) goto label_05953bcf;
							pSVar1[1] = false;
							pUVar2 = this._planes;
							if (pUVar2 != null) {
								if ((pUVar2.Length & 0xfffffffe) == 0) goto label_05953bcf;
								if (pUVar2[1] != null) {
									(pUVar2[1]).SetActive(false);
									pSVar1 = this._enabledAxes;
									if (pSVar1 != null) {
										if ((uint)pSVar1.Length < 3) goto label_05953bcf;
										pSVar1[2] = false;
										pUVar2 = this._planes;
										if (pUVar2 != null) {
											if ((uint)pUVar2.Length < 3) goto label_05953bcf;
											__this_00 = pUVar2[2];
											if (__this_00 != null) {
												bVar3 = false;
	label_05953bab: ;
												__this_00.SetActive(bVar3);
												this.RefreshIfNeeded(true);
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
		else {
			bVar3 = axes.Contains(0);
			if (pSVar1 != null) {
				if ((int)pSVar1.Length == 0) {
	label_05953bcf: ;
					throw new IndexOutOfRangeException();
				}
				pSVar1[0] = bVar3;
				pUVar2 = this._planes;
				if (pUVar2 != null) {
					if ((int)pUVar2.Length == 0) goto label_05953bcf;
					pSVar1 = this._enabledAxes;
					if (pSVar1 != null) {
						if ((int)pSVar1.Length == 0) goto label_05953bcf;
						if (pUVar2[0] != null) {
							(pUVar2[0]).SetActive(pSVar1[0]);
							pSVar1 = this._enabledAxes;
							bVar3 = axes.Contains(1);
							if (pSVar1 != null) {
								if ((pSVar1.Length & 0xfffffffe) == 0) goto label_05953bcf;
								pSVar1[1] = bVar3;
								pUVar2 = this._planes;
								if (pUVar2 != null) {
									if ((pUVar2.Length & 0xfffffffe) == 0) goto label_05953bcf;
									pSVar1 = this._enabledAxes;
									if (pSVar1 != null) {
										if ((pSVar1.Length & 0xfffffffe) == 0) goto label_05953bcf;
										if (pUVar2[1] != null) {
											(pUVar2[1]).SetActive(pSVar1[1]) ;
											pSVar1 = this._enabledAxes;
											bVar3 = axes.Contains(2);
											if (pSVar1 != null) {
												if ((uint)pSVar1.Length < 3) goto label_05953bcf;
												pSVar1[2] = bVar3;
												pUVar2 = this._planes;
												if (pUVar2 != null) {
													if ((uint)pUVar2.Length < 3) goto label_05953bcf;
													pSVar1 = this._enabledAxes;
													if (pSVar1 != null) {
														if ((uint)pSVar1.Length < 3) goto label_05953bcf;
														__this_00 = pUVar2[2];
														if (__this_00 != null) {
															bVar3 = pSVar1[2];
															goto label_05953bab;
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

	[Token(Token = "0x6001737")]
	[Address(RVA = "0x5855E40", Offset = "0x5854E40", VA = "0x5855E40")]
	private void Update()
	{
		// Lifted from source/cpp/GameManagers/MapEditorSceneGrid.c (GameManagers.MapEditorSceneGrid$$Update): clean


		this.RefreshIfNeeded(false);
		return;
	}

	[Token(Token = "0x6001738")]
	[Address(RVA = "0x5855930", Offset = "0x5854930", VA = "0x5855930")]
	private void RefreshIfNeeded(bool force)
	{
		// Lifted from source/cpp/GameManagers/MapEditorSceneGrid.c (GameManagers.MapEditorSceneGrid$$RefreshIfNeeded): 25 lines keep C-only constructs
		Boolean[] pSVar1;
		object @object;
		BaseCamera pCVar2;
		Camera x;
		MapEditorSettings pSVar3;
		FloatSetting pSVar4;
		CustomLogicMathBuiltin __this_00;
		Single[] pSVar5;
		Vector2[] pUVar6;
		Mesh[] pUVar7;
		byte[] auVar8 = new byte[16];
		Vector2 UVar9;
		bool bVar10;
		GameManagers_MapEditorSceneGrid___c_StaticFields pGVar11;
		Func<bool, bool> __this_01;
		Transform __this_02;
		MethodInfo pMVar12;
		MethodInfo pMVar13;
		CustomLogicMathBuiltin __this_03;
		float fVar14;
		float fVar15;
		float fVar16;
		float fVar17;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar18;
		Vector2 center;
		float fVar20;
		byte[] auVar19 = new byte[16];
		float fVar21;
		byte[] auVar22 = new byte[16];
		byte[] auVar23 = new byte[16];
		float fVar24;
		Vector3 UVar25;
		float fStack_b8;
		float fStack_98;
		float fStack_44;

		pSVar1 = this._enabledAxes;
		if ((typeof(MapEditorSceneGrid.c)._2).cctor_finished_or_no_cctor == 0) {
			pGVar11 = typeof(MapEditorSceneGrid.c).static_fields;
			__this_01 = pGVar11.__9__10_0;
		}
		else {
			pGVar11 = typeof(MapEditorSceneGrid.c).static_fields;
			__this_01 = pGVar11.__9__10_0;
		}
		if (__this_01 == null) {
			if (((typeof(MapEditorSceneGrid.c))._2).cctor_finished_or_no_cctor == 0) {
				pGVar11 = typeof(MapEditorSceneGrid.c).static_fields;
			}
			@object = (object)pGVar11.__9;
			__this_01 = new Func<bool, bool>(@object, (intptr_t)MethodInfo_GameManagers_MapEditorSceneGrid_c_RefreshIfNeeded_b__10_0);
			pGVar11 = typeof(MapEditorSceneGrid.c).static_fields;
			pGVar11.__9__10_0 = __this_01;
		}
		bVar10 = Enumerable.Any<bool>((System_Collections_Generic_IEnumerable_TSource__o)pSVar1, (System_Func_TSource__bool__o)__this_01);
		if (bVar10) {
			pCVar2 = SceneLoader.CurrentCamera;
			bVar10 = ((Object)pCVar2 == null);
			if (!bVar10) {
				pCVar2 = SceneLoader.CurrentCamera;
				if (pCVar2 != null) {
					x = pCVar2.Camera;
					bVar10 = ((Object)x == null);
					if (bVar10) {
						return;
					}
					pSVar3 = SettingsManager.MapEditorSettings;
					if ((((pSVar3 != null) &&(pSVar4 = pSVar3.SnapMove, pSVar4 != null)) &&(pCVar2 = SceneLoader.CurrentCamera, pCVar2 != null)) &&(__this_00 = (CustomLogicMathBuiltin)pCVar2.Camera, __this_00 != null)) {
						fVar15 = pSVar4._value;
						fVar14 = 0.01;
						if (0.01 <= fVar15) {
							fVar14 = fVar15;
						}
						__this_02 = __this_00.transform;
						if (__this_02 != null) {
							pMVar13 = null;
							UVar25 = __this_02.position;
							auVar8._8_4_ = extraout_XMM0_Dc;
							auVar8._0_8_ = UVar25._0_8_;
							auVar8._12_4_ = extraout_XMM0_Dd;
							auVar19._0_8_ = UVar25._4_8_;
							auVar19._8_4_ = extraout_XMM0_Dc;
							auVar19._12_4_ = extraout_XMM0_Dd;
							while (true) {
								pSVar1 = this._enabledAxes;
								if (!(pSVar1 != null)) break;
								if ((MethodInfo)(ulong)(uint)pSVar1.Length <= pMVar13) goto label_05955e27;
								if (pSVar1[(long)pMVar13] != false) {
									fVar15 = UVar25.y;
									if (pMVar13 != (MethodInfo)0x1) {
										fVar15 = UVar25.z;
									}
									fStack_98 = UVar25.x;
									if (pMVar13 != null) {
										fStack_98 = fVar15;
									}
									fStack_b8 = ABS(fStack_98);
									pMVar12 = null;
									__this_03 = __this_00;
									bVar10 = __this_00.orthographic;
									if (bVar10) {
										pMVar12 = null;
										__this_03 = __this_00;
										fVar15 = __this_00.orthographicSize;
										if (fStack_b8 <= fVar15) {
											fStack_b8 = fVar15;
										}
									}
									fVar15 = fVar14;
									if (fVar14 <= fStack_b8 / 20.0) {
										fVar15 = fStack_b8 / 20.0;
									}
									fVar15 = log10f(fVar15 / fVar14);
									fVar16 = ceilf(fVar15);
									fVar15 = 0.0;
									if (0.0 <= fVar16) {
										fVar15 = fVar16;
									}
									fVar15 = powf(__this_03, 10.0, fVar15, pMVar12);
									fVar15 = fVar15 * fVar14;
									auVar22._0_4_ = (int)((uint)(pMVar13 == null) << 0x1f) >> 0x1f;
									auVar22._4_4_ = (int)((uint)(pMVar13 < (MethodInfo)0x2) << 0x1f) >> 0x1f;
									auVar22._8_8_ = 0;
									auVar23._4_4_ = fVar15;
									auVar23._0_4_ = fVar15;
									auVar23._8_4_ = fVar15;
									auVar23._12_4_ = fVar15;
									auVar23 = divps(~auVar22 & auVar8 | auVar19 & auVar22, auVar23);
									fVar16 = floorf(auVar23._0_4_);
									fStack_44 = auVar23._4_4_;
									fVar17 = floorf(fStack_44);
									fVar16 = fVar16 * fVar15;
									fVar17 = fVar17 * fVar15;
									if (!force) {
										pSVar5 = this._lastSpacing;
										if (pSVar5 == null) break;
										if ((MethodInfo)(ulong)(uint)pSVar5.Length <= pMVar13) goto label_05955e27;
										fVar18 = pSVar5[(long)pMVar13];
										fVar24 = ABS(fVar18);
										fVar20 = ABS(fVar15);
										if (ABS(fVar15) <= fVar24) {
											fVar20 = fVar24;
										}
										fVar21 = Mathf.Epsilon * 8.0;
										fVar24 = fVar20 * 1e-06;
										if (fVar20 * 1e-06 <= fVar21) {
											fVar24 = fVar21;
										}
										if (ABS(fVar18 - fVar15) < fVar24) {
											pUVar6 = this._lastCenters;
											if (pUVar6 == null) break;
											if ((MethodInfo)(ulong)(uint)pUVar6.Length <= pMVar13) goto label_05955e27;
											fVar18 = fVar16 - pUVar6[(long)pMVar13].x;
											fVar20 = fVar17 - pUVar6[(long)pMVar13].y;
											if (fVar20 * fVar20 + fVar18 * fVar18 < 9.9999994e-11) goto label_05955bc4;
										}
									}
									pSVar5 = this._lastSpacing;
									if (pSVar5 == null) break;
									if ((MethodInfo)(ulong)(uint)pSVar5.Length <= pMVar13) {
	label_05955e27: ;
										throw new IndexOutOfRangeException();
									}
									pSVar5[(long)pMVar13] = fVar15;
									pUVar6 = this._lastCenters;
									if (pUVar6 == null) break;
									if ((MethodInfo)(ulong)(uint)pUVar6.Length <= pMVar13) goto label_05955e27;
									UVar9.y = fVar17;
									UVar9.x = fVar16;
									pUVar6[(long)pMVar13] = UVar9;
									pUVar7 = this._meshes;
									if (pUVar7 == null) break;
									pMVar12 = (MethodInfo)(ulong)(uint)pUVar7.Length;
									if (pMVar12 <= pMVar13) goto label_05955e27;
									center.y = fVar17;
									center.x = fVar16;
									MapEditorSceneGrid.BuildPlane(pUVar7[(long)pMVar13], (int32_t)pMVar13, 0x32, fVar15, center);
								}
	label_05955bc4: ;
								pMVar13 = (MethodInfo)((long)&pMVar13.methodPointer + 1);
								if (pMVar13 == (MethodInfo)0x3) {
									return;
								}
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6001739")]
	[Address(RVA = "0x5855E50", Offset = "0x5854E50", VA = "0x5855E50")]
	private static float GetAdaptiveSpacing(float snap, float cameraDistance)
	{
		// Lifted from source/cpp/GameManagers/MapEditorSceneGrid.c (GameManagers.MapEditorSceneGrid$$GetAdaptiveSpacing): 2 lines keep C-only constructs
		MethodInfo in_RSI;
		float fVar1;
		float fVar2;

		fVar1 = snap;
		if (snap <= cameraDistance / 20.0) {
			fVar1 = cameraDistance / 20.0;
		}
		fVar1 = log10f(fVar1 / snap);
		fVar2 = ceilf(fVar1);
		fVar1 = 0.0;
		if (0.0 <= fVar2) {
			fVar1 = fVar2;
		}
		fVar1 = powf((CustomLogicMathBuiltin)method, 10.0, fVar1, in_RSI);
		return fVar1 * snap;
	}

	[Token(Token = "0x600173A")]
	[Address(RVA = "0x5855500", Offset = "0x5854500", VA = "0x5855500")]
	private void CreatePlane(int axis, Color color)
	{
		// Lifted from source/cpp/GameManagers/MapEditorSceneGrid.c (GameManagers.MapEditorSceneGrid$$CreatePlane): 3 lines keep C-only constructs
		Mesh[] pUVar1;
		Material[] pUVar2;
		GameObject[] pUVar3;
		bool bVar4;
		String* ppSVar5;
		Object __this_00;
		Transform __this_01;
		Transform parent;
		MeshFilter __this_02;
		MeshRenderer __this_03;
		Object pUVar6;
		String pSVar7;
		Material __this_04;
		object pIVar8;

		if (axis == 1) {
			ppSVar5 = &"GridY";
		}
		else {
			ppSVar5 = &"GridZ";
			if (axis == 0) {
				ppSVar5 = &"GridX";
			}
		}
		pSVar7 = *ppSVar5;
		__this_00 = new GameObject(pSVar7);
		if (__this_00 != null) {
			__this_01 = __this_00.transform ;
			parent = this.transform;
			if (__this_01 != null) {
				__this_01.SetParent(parent, false);
				__this_02 = __this_00.AddComponent<MeshFilter>();
				__this_03 = __this_00.AddComponent<MeshRenderer>();
				if (__this_03 != null) {
					__this_03.shadowCastingMode = 0;
					__this_03.receiveShadows = false;
					pUVar6 = new Mesh();
					pSVar7 = __this_00.name;
					pSVar7 = String.Concat(pSVar7, "Mesh");
					if (pUVar6 != null) {
						pUVar6.name = pSVar7;
						pUVar6.MarkDynamic();
						if (__this_02 != null) {
							__this_02.sharedMesh = (Mesh)pUVar6;
							pUVar1 = this._meshes;
							if (pUVar1 != null) {
								if ((uint)pUVar1.Length <= (uint)axis) goto label_05955912;
								pUVar1[axis] = (Mesh)pUVar6;
								pUVar6 = (Object)Shader.Find("Hidden/Internal-Colored");
								bVar4 = (pUVar6 == null);
								if (bVar4) {
									pUVar6 = (Object)Shader.Find("Sprites/Default");
								}
								__this_04 = new Material((Shader)pUVar6);
								if (__this_04 != null) {
									__this_04.color = color;
									__this_04.renderQueue = 3000;
									__this_04.SetInt("_SrcBlend", 5);
									__this_04.SetInt("_DstBlend", 10);
									__this_04.SetInt("_Cull", 0);
									__this_04.SetInt("_ZWrite", 0);
									__this_04.SetInt("_ZTest", 4);
									__this_03.sharedMaterial = __this_04;
									pUVar2 = this._materials;
									if (pUVar2 != null) {
										pIVar8 = il2cpp_vm_Object_IsInst((object)__this_04, (((pUVar2.obj).klass)._1).element_class);
										if (pIVar8 == null) {
											pIVar8 = new ArrayTypeMismatchException();
											throw pIVar8;
										}
										if ((uint)axis < (uint)pUVar2.Length) {
											pUVar2[axis] = __this_04;
											pUVar3 = this._planes;
											if (pUVar3 == null) goto label_0595590d;
											if ((uint)axis < (uint)pUVar3.Length) {
												pUVar3[axis] = (GameObject)__this_00;
												__this_00.SetActive(false);
												return;
											}
										}
	label_05955912: ;
										throw new IndexOutOfRangeException();
									}
								}
							}
						}
					}
				}
			}
		}
	label_0595590d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600173B")]
	[Address(RVA = "0x5855E90", Offset = "0x5854E90", VA = "0x5855E90")]
	private static void BuildPlane(Mesh mesh, int axis, int halfLines, float spacing, Vector2 center)
	{
		// Lifted from source/cpp/GameManagers/MapEditorSceneGrid.c (GameManagers.MapEditorSceneGrid$$BuildPlane): 50 lines keep C-only constructs
		int piVar1;
		ulong uVar2;
		Vector3[] pUVar3;
		byte[] auVar4 = new byte[12];
		byte[] auVar5 = new byte[12];
		byte[] auVar6 = new byte[12];
		byte[] auVar7 = new byte[12];
		uint uVar9;
		List<Vector3> __this;
		Int32[] indices;
		ulong uVar10;
		int iVar11;
		ulong uVar12;
		float fVar13;
		int iVar14;
		float fVar17;
		int iVar15;
		int iVar16;
		float fVar18;
		float fVar19;
		Vector3 item;
		Vector3 item_00;
		Vector3 item_01;
		Vector3 item_02;
		Vector3 item_03;
		Vector3 item_04;
		Vector3 item_05;
		Vector3 item_06;
		Vector3 item_07;
		long local_98;
		long local_78;
		float local_48;
		float fStack_44;

		__this = new List<Vector3>(halfLines * 8 + 4);
		iVar11 = -halfLines;
		if (halfLines < iVar11) {
			if (__this == null) goto label_059566e4;
		}
		else {
			fVar19 = (float)halfLines * spacing;
			local_48 = center.x;
			fStack_44 = center.y;
			fVar18 = fVar19 + fStack_44;
			item.z = fStack_44 - fVar19;
			fVar17 = local_48 - fVar19;
			fVar19 = fVar19 + local_48;
			if (axis == 1) {
				if (__this == null) goto label_059566e4;
				do {
					while(true) {
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pUVar3 = __this._items;
						if (pUVar3 == null) goto label_059566e4;
						fVar13 = local_48 + (float)iVar11 * spacing;
						uVar9 = __this._size;
						if (uVar9 < (uint)pUVar3.Length) {
							__this._size = uVar9 + 1;
							pUVar3[(int)uVar9].x = fVar13;
							pUVar3[(int)uVar9].y = (float)(int)(CONCAT44(0.0, fVar13) >> 0x20);
							pUVar3[(int)uVar9].z = item.z;
						}
						else {
							item_00.z = item.z;
							item_00.x = fVar13;
							item_00.y = 0.0;
							__this.AddWithResize(item_00);
						}
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pUVar3 = __this._items;
						if (pUVar3 == null) goto label_059566e4;
						uVar9 = __this._size;
						if (uVar9 < (uint)pUVar3.Length) {
							__this._size = uVar9 + 1;
							pUVar3[(int)uVar9].x = fVar13;
							pUVar3[(int)uVar9].y = (float)(int)(CONCAT44(0.0, fVar13) >> 0x20);
							pUVar3[(int)uVar9].z = fVar18;
						}
						else {
							item_01.z = fVar18;
							item_01.x = fVar13;
							item_01.y = 0.0;
							__this.AddWithResize(item_01);
						}
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pUVar3 = __this._items;
						if (pUVar3 == null) goto label_059566e4;
						item_02.z = (float)iVar11 * spacing + fStack_44;
						uVar9 = __this._size;
						if (uVar9 < (uint)pUVar3.Length) {
							__this._size = uVar9 + 1;
							pUVar3[(int)uVar9].x = fVar17;
							pUVar3[(int)uVar9].y = (float)(int)(CONCAT44(0.0, fVar17) >> 0x20);
							pUVar3[(int)uVar9].z = item_02.z;
						}
						else {
							item_02.x = fVar17;
							item_02.y = 0.0;
							__this.AddWithResize(item_02);
						}
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pUVar3 = __this._items;
						if (pUVar3 == null) goto label_059566e4;
						uVar9 = __this._size;
						if (uVar9 < (uint)pUVar3.Length) break;
						item_03.z = item_02.z;
						item_03.x = fVar19;
						item_03.y = 0.0;
						__this.AddWithResize(item_03);
						iVar11 = iVar11 + 1;
						if (halfLines < iVar11) goto label_05955f3e;
					}
					__this._size = uVar9 + 1;
					pUVar3[(int)uVar9].x = fVar19;
					pUVar3[(int)uVar9].y = 0.0;
					pUVar3[(int)uVar9].z = item_02.z;
					iVar11 = iVar11 + 1;
				} while (iVar11 <= halfLines);
			}
			else if (axis == 0) {
				if (__this == null) goto label_059566e4;
				local_98 = (ulong)(uint)fVar17 << 0x20;
				local_78 = (ulong)(uint)fVar19 << 0x20;
				do {
					while(true) {
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pUVar3 = __this._items;
						if (pUVar3 == null) goto label_059566e4;
						fVar13 = local_48 + (float)iVar11 * spacing;
						uVar9 = __this._size;
						if (uVar9 < (uint)pUVar3.Length) {
							__this._size = uVar9 + 1;
							pUVar3[(int)uVar9].x = (float)(int)((ulong)(uint)fVar13 << 0x20);
							pUVar3[(int)uVar9].y = (float)(int)(((ulong)(uint)fVar13 << 0x20) >> 0x20);
							pUVar3[(int)uVar9].z = item.z;
						}
						else {
							auVar4._4_8_ = 0;
							auVar4._0_4_ = fVar13;
							item._0_8_ = SUB128(auVar4 << 0x20, 0);
							__this.AddWithResize(item);
						}
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pUVar3 = __this._items;
						if (pUVar3 == null) goto label_059566e4;
						uVar9 = __this._size;
						if (uVar9 < (uint)pUVar3.Length) {
							__this._size = uVar9 + 1;
							pUVar3[(int)uVar9].x = (float)(int)((ulong)(uint)fVar13 << 0x20);
							pUVar3[(int)uVar9].y = (float)(int)(((ulong)(uint)fVar13 << 0x20) >> 0x20);
							pUVar3[(int)uVar9].z = fVar18;
						}
						else {
							auVar7._4_4_ = fVar18;
							auVar7._0_4_ = fVar13;
							auVar7._8_4_ = 0;
							__this.AddWithResize((Vector3)(auVar7 << 0x20));
						}
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pUVar3 = __this._items;
						if (pUVar3 == null) goto label_059566e4;
						fVar13 = (float)iVar11 * spacing + fStack_44;
						uVar9 = __this._size;
						if (uVar9 < (uint)pUVar3.Length) {
							__this._size = uVar9 + 1;
							pUVar3[(int)uVar9].x = (float)(undefined4)local_98;
							pUVar3[(int)uVar9].y = (float)local_98._4_4_;
							pUVar3[(int)uVar9].z = fVar13;
						}
						else {
							auVar5._4_4_ = fVar13;
							auVar5._0_4_ = fVar17;
							auVar5._8_4_ = 0;
							__this.AddWithResize((Vector3)(auVar5 << 0x20));
						}
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pUVar3 = __this._items;
						if (pUVar3 == null) goto label_059566e4;
						uVar9 = __this._size;
						if (uVar9 < (uint)pUVar3.Length) break;
						auVar6._4_4_ = fVar13;
						auVar6._0_4_ = fVar19;
						auVar6._8_4_ = 0;
						__this.AddWithResize((Vector3)(auVar6 << 0x20));
						iVar11 = iVar11 + 1;
						if (halfLines < iVar11) goto label_05955f3e;
					}
					__this._size = uVar9 + 1;
					pUVar3[(int)uVar9].x = (float)(undefined4)local_78;
					pUVar3[(int)uVar9].y = (float)local_78._4_4_;
					pUVar3[(int)uVar9].z = fVar13;
					iVar11 = iVar11 + 1;
				} while (iVar11 <= halfLines);
			}
			else {
				if (__this == null) goto label_059566e4;
				do {
					while(true) {
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pUVar3 = __this._items;
						if (pUVar3 == null) goto label_059566e4;
						fVar13 = local_48 + (float)iVar11 * spacing;
						item_05.y = item.z;
						item_05.x = fVar13;
						uVar9 = __this._size;
						if (uVar9 < (uint)pUVar3.Length) {
							__this._size = uVar9 + 1;
							pUVar3[(int)uVar9].x = fVar13;
							pUVar3[(int)uVar9].y = item.z;
							pUVar3[(int)uVar9].z = 0.0;
						}
						else {
							item_05.z = 0.0;
							__this.AddWithResize(item_05);
						}
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pUVar3 = __this._items;
						if (pUVar3 == null) goto label_059566e4;
						item_06.y = fVar18;
						item_06.x = fVar13;
						uVar9 = __this._size;
						if (uVar9 < (uint)pUVar3.Length) {
							__this._size = uVar9 + 1;
							pUVar3[(int)uVar9].x = fVar13;
							pUVar3[(int)uVar9].y = fVar18;
							pUVar3[(int)uVar9].z = 0.0;
						}
						else {
							item_06.z = 0.0;
							__this.AddWithResize(item_06);
						}
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pUVar3 = __this._items;
						if (pUVar3 == null) goto label_059566e4;
						fVar13 = (float)iVar11 * spacing + fStack_44;
						item_07.y = fVar13;
						item_07.x = fVar17;
						uVar9 = __this._size;
						if (uVar9 < (uint)pUVar3.Length) {
							__this._size = uVar9 + 1;
							pUVar3[(int)uVar9].x = fVar17;
							pUVar3[(int)uVar9].y = fVar13;
							pUVar3[(int)uVar9].z = 0.0;
						}
						else {
							item_07.z = 0.0;
							__this.AddWithResize(item_07);
						}
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pUVar3 = __this._items;
						if (pUVar3 == null) goto label_059566e4;
						uVar9 = __this._size;
						if ((uint)pUVar3.Length <= uVar9) break;
						__this._size = uVar9 + 1;
						pUVar3[(int)uVar9].x = fVar19;
						pUVar3[(int)uVar9].y = fVar13;
						pUVar3[(int)uVar9].z = 0.0;
						iVar11 = iVar11 + 1;
						if (halfLines < iVar11) goto label_05955f3e;
					}
					item_04.z = 0.0;
					item_04.x = fVar19;
					item_04.y = fVar13;
					__this.AddWithResize(item_04);
					iVar11 = iVar11 + 1;
				} while (iVar11 <= halfLines);
			}
		}
	label_05955f3e: ;
		indices = (Int32[])new int[__this._size];
		if (indices == null) goto label_059566e4;
		uVar2 = indices.Length;
		uVar9 = (uint)uVar2;
		if (0 < (int)uVar9) {
			if (uVar9 < 8) {
				uVar10 = 0;
			}
			else {
				uVar10 = (ulong)(uVar9 & 0xfffffff8);
				iVar11 = 0;
				iVar14 = 1;
				iVar15 = 2;
				iVar16 = 3;
				uVar12 = 0;
				do {
					piVar1 = indices.m_Items + uVar12;
					*piVar1 = iVar11;
					piVar1[1] = iVar14;
					piVar1[2] = iVar15;
					piVar1[3] = iVar16;
					piVar1 = indices.m_Items + uVar12 + 4;
					*piVar1 = iVar11 + 4;
					piVar1[1] = iVar14 + 4;
					piVar1[2] = iVar15 + 4;
					piVar1[3] = iVar16 + 4;
					uVar12 = uVar12 + 8;
					iVar11 = iVar11 + 8;
					iVar14 = iVar14 + 8;
					iVar15 = iVar15 + 8;
					iVar16 = iVar16 + 8;
				} while (uVar10 != uVar12);
				if ((uVar2 & 7) == 0) goto label_0595626d;
			}
			do {
				indices[uVar10] = (int32_t)uVar10;
				uVar10 = uVar10 + 1;
			} while ((uVar2 & 0xffffffff) != uVar10);
		}
	label_0595626d: ;
		if (mesh != null) {
			mesh.Clear();
			mesh.SetVertices(__this);
			mesh.SetIndices(indices, 3, 0);
			mesh.RecalculateBounds();
			return;
		}
	label_059566e4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600173C")]
	[Address(RVA = "0x58566F0", Offset = "0x58556F0", VA = "0x58566F0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/GameManagers/MapEditorSceneGrid.c (GameManagers.MapEditorSceneGrid$$OnDestroy): clean
		Mesh[] pUVar1;
		Object pUVar2;
		Material[] pUVar3;
		Material pUVar4;
		bool bVar5;

		pUVar1 = this._meshes;
		if (pUVar1 == null) {
	label_059569ce: ;
			throw new NullReferenceException();
		}
		if ((int)pUVar1.Length != 0) {
			pUVar2 = (Object)pUVar1[0];
			bVar5 = (pUVar2 != null);
			if (bVar5) {
				pUVar1 = this._meshes;
				if (pUVar1 == null) goto label_059569ce;
				if ((int)pUVar1.Length == 0) goto label_059569d3;
				pUVar2 = (Object)pUVar1[0];
				Object.Destroy(pUVar2);
			}
			pUVar3 = this._materials;
			if (pUVar3 == null) goto label_059569ce;
			if ((int)pUVar3.Length != 0) {
				pUVar4 = pUVar3[0];
				bVar5 = ((Object)pUVar4 != null);
				if (bVar5) {
					pUVar3 = this._materials;
					if (pUVar3 == null) goto label_059569ce;
					if ((int)pUVar3.Length == 0) goto label_059569d3;
					pUVar4 = pUVar3[0];
					Object.Destroy((Object)pUVar4);
				}
				pUVar1 = this._meshes;
				if (pUVar1 == null) goto label_059569ce;
				if ((pUVar1.Length & 0xfffffffe) != 0) {
					pUVar2 = (Object)pUVar1[1];
					bVar5 = (pUVar2 != null);
					if (bVar5) {
						pUVar1 = this._meshes;
						if (pUVar1 == null) goto label_059569ce;
						if ((pUVar1.Length & 0xfffffffe) == 0) goto label_059569d3;
						pUVar2 = (Object)pUVar1[1];
						Object.Destroy(pUVar2);
					}
					pUVar3 = this._materials;
					if (pUVar3 == null) goto label_059569ce;
					if ((pUVar3.Length & 0xfffffffe) != 0) {
						pUVar4 = pUVar3[1];
						bVar5 = ((Object)pUVar4 != null);
						if (bVar5) {
							pUVar3 = this._materials;
							if (pUVar3 == null) goto label_059569ce;
							if ((pUVar3.Length & 0xfffffffe) == 0) goto label_059569d3;
							pUVar4 = pUVar3[1];
							Object.Destroy((Object)pUVar4);
						}
						pUVar1 = this._meshes;
						if (pUVar1 == null) goto label_059569ce;
						if (2 < (uint)pUVar1.Length) {
							pUVar2 = (Object)pUVar1[2];
							bVar5 = (pUVar2 != null);
							if (bVar5) {
								pUVar1 = this._meshes;
								if (pUVar1 == null) goto label_059569ce;
								if ((uint)pUVar1.Length < 3) goto label_059569d3;
								pUVar2 = (Object)pUVar1[2];
								Object.Destroy(pUVar2);
							}
							pUVar3 = this._materials;
							if (pUVar3 == null) goto label_059569ce;
							if (2 < (uint)pUVar3.Length) {
								pUVar4 = pUVar3[2];
								bVar5 = ((Object)pUVar4 != null) ;
								if (!bVar5) {
									return;
								}
								pUVar3 = this._materials;
								if (pUVar3 == null) goto label_059569ce;
								if (2 < (uint)pUVar3.Length) {
									pUVar4 = pUVar3[2];
									Object.Destroy((Object)pUVar4);
									return;
								}
							}
						}
					}
				}
			}
		}
	label_059569d3: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600173D")]
	[Address(RVA = "0x58569E0", Offset = "0x58559E0", VA = "0x58569E0")]
	public MapEditorSceneGrid()
	{
		// Lifted from source/cpp/GameManagers/MapEditorSceneGrid.c (GameManagers.MapEditorSceneGrid$$.ctor): clean
		Mesh[] pUVar1;
		GameObject[] pUVar2;
		Material[] pUVar3;
		Boolean[] pSVar4;
		Single[] array;
		Vector2[] pUVar5;

		pUVar1 = (Mesh[])new Mesh[3];
		this._meshes = pUVar1;
		pUVar2 = (GameObject[])new GameObject[3];
		this._planes = pUVar2;
		pUVar3 = (Material[])new Material[3];
		this._materials = pUVar3;
		pSVar4 = (Boolean[])new bool[3];
		this._enabledAxes = pSVar4;
		array = (Single[])new float[3];
		RuntimeHelpers.InitializeArray((Array)array, FieldRva_PrivateImplementationDetails_F48AF7DD3F3ADB7DCC618687A0A2A61B8DF98065CA0C180875E8AE65A88E28E4);
		this._lastSpacing = array;
		pUVar5 = (Vector2[])new Vector2[3];
		this._lastCenters = pUVar5;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/GameManagers/MapEditorSceneGrid.c.

	// GameManagers.MapEditorSceneGrid.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new MapEditorSceneGrid.c();
		MapEditorSceneGrid.c.__9 =(MapEditorSceneGrid.c)__this;
		return;
	}

	// GameManagers.MapEditorSceneGrid.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// GameManagers.MapEditorSceneGrid.<>c$$<RefreshIfNeeded>b__10_0: clean
	private bool c__RefreshIfNeeded_b__10_0(bool enabled)
	{
		return enabled;
	}
}
