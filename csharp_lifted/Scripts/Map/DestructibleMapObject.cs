// ==================== AoTTG2 cross-reference ====================
// Type: Map.DestructibleMapObject
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/DestructibleMapObject.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Rendering;

namespace Map;

[Token(Token = "0x20003EC")]
internal sealed class DestructibleMapObject
{
	[Token(Token = "0x4001409")]
	private const MeshUpdateFlags SliceUpdateFlags = MeshUpdateFlags.DontValidateIndices | MeshUpdateFlags.DontRecalculateBounds;

	[Token(Token = "0x400140A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] ProtectedAssetPrefixes;

	[Token(Token = "0x400140B")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] ProtectedNames;

	[Token(Token = "0x400140C")]
	[FieldOffset(Offset = "0x10")]
	private static readonly HashSet<string> DecorativeComponents;

	[Token(Token = "0x400140D")]
	[FieldOffset(Offset = "0x18")]
	private static int[] _degenerateIndices;

	[Token(Token = "0x400140E")]
	[FieldOffset(Offset = "0x10")]
	public readonly int Id;

	[Token(Token = "0x400140F")]
	[FieldOffset(Offset = "0x18")]
	public readonly Transform Root;

	[Token(Token = "0x4001410")]
	[FieldOffset(Offset = "0x20")]
	public readonly Bounds Bounds;

	[Token(Token = "0x4001411")]
	[FieldOffset(Offset = "0x38")]
	public readonly float Size;

	[Token(Token = "0x4001412")]
	[FieldOffset(Offset = "0x40")]
	public readonly MeshFilter[] Filters;

	[Token(Token = "0x4001413")]
	[FieldOffset(Offset = "0x48")]
	public readonly Collider[] Colliders;

	[Token(Token = "0x4001414")]
	[FieldOffset(Offset = "0x50")]
	private readonly BatchSlice[] _slices;

	[Token(Token = "0x4001415")]
	[FieldOffset(Offset = "0x58")]
	private readonly bool _hideOnly;

	[Token(Token = "0x60018F9")]
	[Address(RVA = "0x5877D40", Offset = "0x5876D40", VA = "0x5877D40")]
	private DestructibleMapObject(MapObject mapObject, Bounds bounds, float size, List<MeshFilter> filters, List<BatchSlice> slices, bool hideOnly)
	{
		// Lifted from source/cpp/Map/DestructibleMapObject.c (Map.DestructibleMapObject$$.ctor): 5 lines keep C-only constructs
		MapScriptBaseObject pMVar1;
		GameObject __this_00;
		Bounds pUVar2;
		Transform pUVar3;
		MeshFilter[] pUVar4;
		BatchSlice[] pMVar5;

		if (Il2CppMethodInitialized_075459d1 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BatchSlice_ToArray) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MeshFilter_ToArray) ;
			Il2CppMethodInitialized_075459d1 = true;
		}
		base();
		this._hideOnly = hideOnly;
		if ((mapObject != null) &&(pMVar1 = mapObject.ScriptObject, pMVar1 != null)) {
			this.Id = pMVar1.Id;
			__this_00 = mapObject.GameObject;
			if (__this_00 != null) {
				pUVar3 = __this_00.transform;
				this.Root = pUVar3;
				pUVar2 = &this.Bounds;
				pUVar2.m_Extents.y = bounds.m_Extents.y;
				pUVar2.m_Extents.z = bounds.m_Extents.z;
				pUVar2 = &this.Bounds;
				pUVar2.m_Center.x = bounds.m_Center.x;
				pUVar2.m_Center.y = bounds.m_Center.y;
				*(ulong)&this.Bounds.m_Center.z = bounds._8_8_;
				this.Size = size;
				if (filters != null) {
					pUVar4 = (MeshFilter[])filters.ToArray();
					this.Filters = pUVar4;
					this.Colliders = mapObject.colliderCache;
					if (slices != null) {
						pMVar5 = slices.ToArray();
						this._slices = pMVar5;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60018FA")]
	[Address(RVA = "0x5877E70", Offset = "0x5876E70", VA = "0x5877E70")]
	public static DestructibleMapObject Create(MapObject mapObject, Dictionary<Renderer, BatchSlice> batchSlices, float maxSize)
	{
		// Lifted from source/cpp/Map/DestructibleMapObject.c (Map.DestructibleMapObject$$Create): 18 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		MapScriptSceneObject script;
		String pSVar3;
		Dictionary<object, object> __this;
		Collider[] colliders;
		List<MapScriptComponent> pSVar4;
		GameObject __this_00;
		MeshFilter pUVar5;
		Bounds bounds;
		Bounds bounds_00;
		Matrix4x4 matrix;
		bool bVar6;
		bool bVar7;
		uint uVar8;
		Object pUVar9;
		Light x;
		Object[] pSVar10;
		Transform pUVar11;
		MapObject pMVar12;
		Mesh __this_01;
		DestructibleMapObject __this_02;
		MethodInfo pMVar13;
		uint uVar14;
		long lVar15;
		float fVar16;
		float size;
		Vector3 size_00;
		Renderer local_128;
		List<BatchSlice> local_120;
		List<MeshFilter> local_118;
		float local_10c;
		ulong local_108;
		float fStack_100;
		float fStack_fc;
		float fStack_f8;
		float fStack_f4;
		ulong local_e8;
		float fStack_e0;
		float fStack_dc;
		ulong local_d8;
		BatchSlice local_c8;
		ulong local_b8;
		float fStack_b0;
		float fStack_ac;
		ulong local_a8;
		Bounds local_a0;
		Bounds local_88;
		Matrix4x4 local_70;

		local_10c = maxSize;
		if (Il2CppMethodInitialized_075459d2 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_MeshRenderer) ;
			Il2CppMethodInitialized_075459d2 = true;
		}
		local_128 = null;
		local_c8.Mesh = null;
		local_c8.Start = 0;
		local_c8.Count = 0;
		local_e8 = 0;
		fStack_e0 = 0.0;
		fStack_dc = 0.0;
		local_d8._0_4_ = 0.0;
		local_d8._4_4_ = 0.0;
		if (mapObject == null) goto label_0597882c;
		script = (MapScriptSceneObject)mapObject.ScriptObject;
		if (script != null) {
			bVar1 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
			if ((((bVar1 <= (script.klass._2).typeHierarchyDepth) &&((script.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(MapScriptSceneObject))) && (mapObject.RuntimeCreated == false)) && ((script.Active != false && (script.Visible != false)))) {
				pSVar3 = script.CollideMode;
				pMVar13 = (MethodInfo)MapObjectCollideMode.Physical;
				bVar6 = (pSVar3 != (String)pMVar13);
				if (bVar6) {
					return null;
				}
				bVar6 = DestructibleMapObject.HasOnlyDecorativeComponents(script);
				if (bVar6) {
					__this = (Dictionary<object, object>)MapLoader.MapObjectToTags;
					if (__this == null) {
	label_0597882c: ;
						throw new NullReferenceException();
					}
					bVar6 = __this.ContainsKey((object)mapObject);
					if (!bVar6) {
						pSVar3 = script.Asset;
						pMVar13 = (MethodInfo)script.Name;
						if ((typeof(DestructibleMapObject)._2).cctor_finished_or_no_cctor == 0) {
						}
						bVar6 = DestructibleMapObject.IsAllowedAsset(pSVar3, (String)pMVar13);
						if (bVar6) {
							colliders = mapObject.colliderCache;
							bVar6 = DestructibleMapObject.HasSolidCollider(colliders);
							if (bVar6) {
								pSVar4 = script.Components;
								if (pSVar4 != null) {
									iVar2 = pSVar4._size;
									if ((iVar2 < 1) && (script.Networked != false)) {
										return null;
									}
									__this_00 = mapObject.GameObject;
									if (__this_00 != null) {
										pUVar9 = (Object)__this_00.GetComponentInChildren<Terrain>(true);
										bVar6 = (pUVar9 != null);
										if (bVar6) {
											return null;
										}
										pUVar9 = (Object)__this_00.GetComponentInChildren<Animator>(true);
										bVar6 = (pUVar9 != null);
										if (bVar6) {
											return null;
										}
										if (iVar2 < 1) {
											pUVar9 = (Object)__this_00.GetComponentInChildren<Rigidbody>(true);
											bVar6 = (pUVar9 != null);
											if (bVar6) {
												return null;
											}
										}
										pUVar9 = (Object)__this_00.GetComponentInChildren<SkinnedMeshRenderer>(true);
										bVar6 = (pUVar9 != null);
										if (bVar6) {
											return null;
										}
										x = __this_00.GetComponentInChildren<Light>(true);
										bVar6 = ((Object)x != null);
										if (bVar6) {
											return null;
										}
										local_118 = new List<MeshFilter>() ;
										local_120 = new List<BatchSlice>() ;
										local_108 = 0;
										fStack_100 = 0.0;
										fStack_fc = 0.0;
										fStack_f8 = 0.0;
										fStack_f4 = 0.0;
										pSVar10 = __this_00.GetComponentsInChildren<MeshFilter>();
										if (pSVar10 != null) {
											uVar8 = (uint)pSVar10.Length;
											if (batchSlices == null) {
												if ((int)uVar8 < 1) {
													return null;
												}
												lVar15 = 0;
												while ((uint)lVar15 < uVar8) {
													pUVar5 = (MeshFilter)pSVar10[lVar15];
													if (pUVar5 == null) goto label_0597882c;
													pUVar9 = (Object)pUVar5.sharedMesh;
													bVar6 = (pUVar9 == null);
													if ((!bVar6) &&(bVar6 = pUVar5.TryGetComponent<MeshRenderer>((object*)&local_128))) {
														pMVar13 = null;
														pUVar11 = pUVar5.transform;
														pMVar12 = MapLoader.FindObjectFromTransform(pUVar11);
														if (pMVar12 == mapObject) goto label_0597882c;
													}
													uVar8 = (uint)pSVar10.Length;
													lVar15 = lVar15 + 1;
													if ((int)uVar8 <= (int)lVar15) {
														return null;
													}
												}
	label_05978831: ;
												throw new IndexOutOfRangeException();
											}
											uVar14 = 0;
											if ((int)uVar8 < 1) {
												bVar6 = false;
											}
											else {
												bVar6 = false;
												do {
													if (uVar8 <= uVar14) goto label_05978831;
													pUVar5 = (MeshFilter)pSVar10[(int)uVar14];
													if (pUVar5 == null) goto label_0597882c;
													pUVar9 = (Object)pUVar5.sharedMesh;
													bVar7 = (pUVar9 == null);
													if ((!bVar7) &&(bVar7 = pUVar5.TryGetComponent<MeshRenderer>((object*)&local_128))) {
														pMVar13 = null;
														pUVar11 = pUVar5.transform;
														pMVar12 = MapLoader.FindObjectFromTransform(pUVar11);
														if (pMVar12 == mapObject) {
															bVar7 = batchSlices.TryGetValue((object)local_128, ref local_c8);
															if (bVar7) {
																if (local_120 == null) goto label_0597882c;
																il2cpp_runtime_helper_02fd3f90(local_120, local_c8.Mesh, local_c8._8_8_, MethodInfo_System_Collections_Generic_List_BatchSlice_Add);
															}
															else {
																if (local_128 == null) goto label_0597882c;
																bVar7 = local_128.enabled;
																if (!bVar7) goto label_05978494;
															}
															__this_01 = pUVar5.sharedMesh;
															if (__this_01 == null) goto label_0597882c;
															local_88 = __this_01.bounds;
															pUVar11 = pUVar5.transform;
															if (pUVar11 == null) goto label_0597882c;
															local_70 = pUVar11.localToWorldMatrix;
															bounds.m_Center.z = local_88.m_Center.z;
															bounds.m_Center.x = local_88.m_Center.x;
															bounds.m_Center.y = local_88.m_Center.y;
															bounds.m_Extents.x = local_88.m_Extents.x;
															bounds.m_Extents.y = local_88.m_Extents.y;
															bounds.m_Extents.z = local_88.m_Extents.z;
															matrix.m20 = local_70.m20;
															matrix.m30 = local_70.m30;
															matrix.m00 = local_70.m00;
															matrix.m10 = local_70.m10;
															matrix.m01 = local_70.m01;
															matrix.m11 = local_70.m11;
															matrix.m21 = local_70.m21;
															matrix.m31 = local_70.m31;
															matrix.m02 = local_70.m02;
															matrix.m12 = local_70.m12;
															matrix.m22 = local_70.m22;
															matrix.m32 = local_70.m32;
															matrix.m03 = local_70.m03;
															matrix.m13 = local_70.m13;
															matrix.m23 = local_70.m23;
															matrix.m33 = local_70.m33;
															local_a0 = Util.TransformBounds(bounds, matrix);
															local_d8._0_4_ = local_a0.m_Extents.y;
															local_d8._4_4_ = local_a0.m_Extents.z;
															local_e8 = CONCAT44(local_a0.m_Center.y, local_a0.m_Center.x);
															fStack_e0 = local_a0.m_Center.z;
															fStack_dc = local_a0.m_Extents.x;
															if (local_118 == null) goto label_0597882c;
															il2cpp_runtime_helper_02fd3ff0(local_118, pUVar5, MethodInfo_System_Collections_Generic_List_MeshFilter_Add);
															if (bVar6) {
																il2cpp_runtime_helper_0599acf0(&local_108);
															}
															else {
																fStack_f8 = (float)local_d8;
																fStack_f4 = SUB84(local_d8, 4);
																local_108 = local_e8;
																fStack_100 = fStack_e0;
																fStack_fc = fStack_dc;
															}
															bVar6 = true;
														}
													}
	label_05978494: ;
													uVar14 = uVar14 + 1;
													uVar8 = (uint)pSVar10.Length;
												} while ((int)uVar14 < (int)uVar8);
											}
											if (!bVar6) {
												return null;
											}
											size_00.x = fStack_fc + fStack_fc;
											size_00.y = fStack_f8 + fStack_f8;
											fVar16 = fStack_f4 + fStack_f4;
											size_00.z = fVar16;
											bVar6 = DestructibleMapObject.IsAllowedShape(size_00);
											if (!bVar6) {
												return null;
											}
											fVar16 = fStack_f8 + fStack_f8;
											if (fStack_f8 + fStack_f8 <= fStack_f4 + fStack_f4) {
												fVar16 = fStack_f4 + fStack_f4;
											}
											size = fStack_fc + fStack_fc;
											if (fStack_fc + fStack_fc <= fVar16) {
												size = fVar16;
											}
											if (local_10c < size) {
												return null;
											}
											local_a8 = CONCAT44(fStack_f4, fStack_f8);
											fStack_b0 = fStack_100;
											fStack_ac = fStack_fc;
											local_b8 = local_108;
											bVar6 = script.Networked;
											bounds_00.m_Center.z = fStack_b0;
											bounds_00.m_Center.x = (float)(undefined4)local_b8;
											bounds_00.m_Center.y = (float)local_b8._4_4_;
											bounds_00.m_Extents.x = fStack_ac;
											bounds_00.m_Extents.y = (float)(undefined4)local_a8;
											bounds_00.m_Extents.z = (float)local_a8._4_4_;
											__this_02 = new DestructibleMapObject(mapObject, bounds_00, size, local_118, local_120, bVar6);
											return __this_02;
										}
									}
								}
								goto label_0597882c;
							}
						}
					}
				}
			}
		}
		return null;
	}

	[Token(Token = "0x60018FB")]
	[Address(RVA = "0x5878F80", Offset = "0x5877F80", VA = "0x5878F80")]
	public void Destroy()
	{
		// Lifted from source/cpp/Map/DestructibleMapObject.c (Map.DestructibleMapObject$$Destroy): 2 lines keep C-only constructs
		uint uVar1;
		Transform pUVar2;
		BatchSlice[] pMVar3;
		Mesh pUVar4;
		ulong uVar5;
		bool bVar6;
		GameObject __this_00;
		ulong uVar7;
		ulong uVar9;
		int piVar10;
		BatchSlice slice;

		pUVar2 = this.Root;
		bVar6 = ((Object)pUVar2 == null);
		if (!bVar6) {
			if (this._hideOnly == false) {
				pUVar2 = this.Root;
				if ((pUVar2 == null) ||(__this_00 = pUVar2.gameObject, __this_00 == null)) goto label_059790a5;
				__this_00.SetActive(false);
				pMVar3 = this._slices;
			}
			else {
				this.Hide();
				pMVar3 = this._slices;
			}
			if (pMVar3 == null) {
	label_059790a5: ;
				throw new NullReferenceException();
			}
			if (0 < (int)pMVar3.Length) {
				uVar7 = pMVar3.Length & 0xffffffff;
				piVar10 = &pMVar3[0].Start;
				uVar9 = 0;
				do {
					if (uVar7 <= uVar9) {
						throw new IndexOutOfRangeException();
					}
					pUVar4 = ((BatchSlice)(piVar10 + -2)).Mesh;
					uVar5 = *(ulong)piVar10;
					if ((typeof(DestructibleMapObject)._2).cctor_finished_or_no_cctor == 0) {
					}
					slice._8_8_ = uVar5;
					slice.Mesh = pUVar4;
					DestructibleMapObject.HideSlice(slice);
					uVar9 = uVar9 + 1;
					uVar1 = (uint)pMVar3.Length;
					uVar7 = (ulong)uVar1;
					piVar10 = piVar10 + 4;
				} while ((long)uVar9 < (long)(int)uVar1);
			}
		}
		return;
	}

	[Token(Token = "0x60018FC")]
	[Address(RVA = "0x58790B0", Offset = "0x58780B0", VA = "0x58790B0")]
	private void Hide()
	{
		// Lifted from source/cpp/Map/DestructibleMapObject.c (Map.DestructibleMapObject$$Hide): clean
		Transform pUVar1;
		uint uVar2;
		Object[] pSVar3;
		uint uVar4;

		pUVar1 = this.Root;
		if (pUVar1 != null) {
			pSVar3 = pUVar1.GetComponentsInChildren<Renderer>();
			if (pSVar3 != null) {
				uVar2 = (uint)pSVar3.Length;
				if (0 < (int)uVar2) {
					uVar4 = 0;
					do {
						if (uVar2 <= uVar4) goto label_05979202;
						if ((Renderer)pSVar3[(int)uVar4] == null) goto label_059791fd;
						(pSVar3[(int)uVar4]).enabled = false;
						uVar4 = uVar4 + 1;
						uVar2 = (uint)pSVar3.Length;
					} while ((int)uVar4 < (int)uVar2);
				}
				pUVar1 = this.Root;
				if (pUVar1 != null) {
					pSVar3 = pUVar1.GetComponentsInChildren<Collider>();
					if (pSVar3 != null) {
						uVar2 = (uint)pSVar3.Length;
						if (0 < (int)uVar2) {
							uVar4 = 0;
							do {
								if (uVar2 <= uVar4) goto label_05979202;
								if ((Collider)pSVar3[(int)uVar4] == null) goto label_059791fd;
								(pSVar3[(int)uVar4]).enabled = false;
								uVar4 = uVar4 + 1;
								uVar2 = (uint)pSVar3.Length;
							} while ((int)uVar4 < (int)uVar2);
						}
						pUVar1 = this.Root;
						if (pUVar1 != null) {
							pSVar3 = pUVar1.GetComponentsInChildren<Rigidbody>();
							if (pSVar3 != null) {
								uVar2 = (uint)pSVar3.Length;
								if (0 < (int)uVar2) {
									uVar4 = 0;
									do {
										if (uVar2 <= uVar4) {
	label_05979202: ;
											throw new IndexOutOfRangeException();
										}
										if ((Rigidbody)pSVar3[(int)uVar4] == null ) goto label_059791fd;
										(pSVar3[(int)uVar4]).isKinematic = true;
										uVar4 = uVar4 + 1;
										uVar2 = (uint)pSVar3.Length;
									} while ((int)uVar4 < (int)uVar2);
								}
								return;
							}
						}
					}
				}
			}
		}
	label_059791fd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60018FD")]
	[Address(RVA = "0x5879390", Offset = "0x5878390", VA = "0x5879390")]
	public bool Contains(Transform transform)
	{
		// Lifted from source/cpp/Map/DestructibleMapObject.c (Map.DestructibleMapObject$$Contains): clean
		bool bVar1;

		bVar1 = ((Object)transform != null);
		if (bVar1) {
			if (transform == null) {
				throw new NullReferenceException();
			}
			bVar1 = transform.IsChildOf(this.Root);
			return bVar1;
		}
		return false;
	}

	[Token(Token = "0x60018FE")]
	[Address(RVA = "0x5879210", Offset = "0x5878210", VA = "0x5879210")]
	private static void HideSlice(BatchSlice slice)
	{
		// Lifted from source/cpp/Map/DestructibleMapObject.c (Map.DestructibleMapObject$$HideSlice): clean
		uint uVar1;
		bool bVar3;
		Int32[] pSVar4;
		uint length;
		Object x;

		x = (Object)slice.Mesh;
		bVar3 = (x == null);
		if ((bVar3) || (length = slice.Count, (int)length < 1)) {
			return;
		}
		pSVar4 = DestructibleMapObject._degenerateIndices;
		if (pSVar4 != null) {
			if ((int)pSVar4.Length < (int)length) {
				pSVar4 = (Int32[])new int[length];
				DestructibleMapObject._degenerateIndices = pSVar4;
				uVar1 = (typeof(DestructibleMapObject)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(DestructibleMapObject)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			if (x != null) {
				x.SetIndexBufferData<int>(*(Int32[]*)((long)(typeof(DestructibleMapObject)).static_fields + 0x18), 0, slice.Start, length, 9);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60018FF")]
	[Address(RVA = "0x5878A10", Offset = "0x5877A10", VA = "0x5878A10")]
	private static bool IsAllowedAsset(string asset, string name)
	{
		// Lifted from source/cpp/Map/DestructibleMapObject.c (Map.DestructibleMapObject$$IsAllowedAsset): clean
		String[] pSVar1;
		bool bVar2;
		uint uVar3;
		ulong uVar4;
		String pSVar5;
		Char[] pSVar6;
		String[] pSVar7;
		int iVar8;
		ulong uVar9;
		uint uVar10;

		bVar2 = String.IsNullOrEmpty(asset);
		if ((bVar2) || (bVar2 = (asset == "None"))) {
			return false;
		}
		pSVar7 = DestructibleMapObject.ProtectedAssetPrefixes;
		if (pSVar7 != null) {
			iVar8 = (int)pSVar7.Length;
			if (asset == null) {
				if (0 < iVar8) goto label_05978cc1;
			}
			else if (0 < iVar8) {
				uVar4 = pSVar7.Length & 0xffffffff;
				uVar9 = 0;
				do {
					if (uVar4 <= uVar9) goto label_05978cbc;
					bVar2 = asset.StartsWith(pSVar7[uVar9], 5);
					if (bVar2) {
						return false;
					}
					uVar9 = uVar9 + 1;
					uVar3 = (uint)pSVar7.Length;
					uVar4 = (ulong)uVar3;
				} while ((long)uVar9 < (long)(int)uVar3);
			}
			pSVar5 = String.Concat(asset, "/", name);
			pSVar6 = (Char[])new char[4];
			RuntimeHelpers.InitializeArray((Array)pSVar6, FieldRva_PrivateImplementationDetails_E0F413881BCD21EC94E61EDD65B3D46651F8ADE885120BFB3127C2DC4C02078A);
			if ((pSVar5 != null) &&(pSVar7 = pSVar5.Split(pSVar6), pSVar7 != null)) {
				uVar3 = (uint)pSVar7.Length;
				if ((int)uVar3 < 1) {
					return true;
				}
				uVar10 = 0;
				do {
					if (uVar3 <= uVar10) {
	label_05978cbc: ;
						throw new IndexOutOfRangeException();
					}
					pSVar5 = pSVar7[(int)uVar10];
					pSVar6 = (Char[])new char[10];
					RuntimeHelpers.InitializeArray((Array)pSVar6, FieldRva_PrivateImplementationDetails_76B351CF70EE5EC7F1B83F392A5ECF88567129B80AC8399061D9BA3F1DB3DDD1);
					if (pSVar5 == null) break;
					pSVar5 = pSVar5.TrimEnd(pSVar6);
					pSVar1 = DestructibleMapObject.ProtectedNames;
					if (pSVar1 == null) break;
					iVar8 = (int)pSVar1.Length;
					uVar4 = pSVar1.Length & 0xffffffff;
					if (pSVar5 == null) {
						if (0 < iVar8) {
							if (uVar4 == 0) goto label_05978cbc;
							break;
						}
					}
					else if (0 < iVar8) {
						uVar9 = 0;
						do {
							if (uVar4 <= uVar9) goto label_05978cbc;
							bVar2 = String.Equals(pSVar5, pSVar1[uVar9], 5);
							if (bVar2) {
								return false;
							}
							uVar9 = uVar9 + 1;
							uVar3 = (uint)pSVar1.Length;
							uVar4 = (ulong)uVar3;
						} while ((long)uVar9 < (long)(int)uVar3);
					}
					uVar10 = uVar10 + 1;
					uVar3 = (uint)pSVar7.Length;
					if ((int)uVar3 <= (int)uVar10) {
						return true;
					}
				} while(true);
			}
		}
	label_05978cc1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001900")]
	[Address(RVA = "0x5878840", Offset = "0x5877840", VA = "0x5878840")]
	private static bool HasOnlyDecorativeComponents(MapScriptSceneObject script)
	{
		// Lifted from source/cpp/Map/DestructibleMapObject.c (Map.DestructibleMapObject$$HasOnlyDecorativeComponents): 4 lines keep C-only constructs
		List<MapScriptComponent> __this;
		HashSet<object> __this_00;
		object pIVar1;
		bool bVar2;
		int iVar3;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_38;

		if (Il2CppMethodInitialized_075459d8 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_075459d8 = true;
		}
		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		if ((script == null) ||(__this = script.Components, __this == null)) {
			throw new NullReferenceException();
		}
		local_58 = __this.GetEnumerator();
		local_38 = (byte)&local_58;
		do {
			bVar2 = local_58.MoveNext();
			pIVar1 = local_58._current;
			if (!bVar2) {
				iVar3 = 5;
				goto label_0597896c;
			}
			if (pIVar1 == null) {
				throw new NullReferenceException();
			}
			__this_00 = (HashSet<object>)DestructibleMapObject.DecorativeComponents;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar2 = __this_00.Contains((object)pIVar1[1].klass);
		} while (bVar2);
		iVar3 = 4;
	label_0597896c: ;
		local_58.Dispose();
		return iVar3 != 4;
	}

	[Token(Token = "0x6001901")]
	[Address(RVA = "0x5878CD0", Offset = "0x5877CD0", VA = "0x5878CD0")]
	private static bool HasSolidCollider(Collider[] colliders)
	{
		// Lifted from source/cpp/Map/DestructibleMapObject.c (Map.DestructibleMapObject$$HasSolidCollider): clean
		uint uVar1;
		Object x;
		bool bVar2;
		ulong uVar3;
		ulong uVar4;

		if (colliders == null) {
	label_05978d95: ;
			throw new NullReferenceException();
		}
		if (0 < (int)colliders.Length) {
			uVar3 = colliders.Length & 0xffffffff;
			uVar4 = 0;
			do {
				if (uVar3 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				x = (Object)colliders[uVar4];
				bVar2 = (x != null);
				if (bVar2) {
					if (x == null) goto label_05978d95;
					bVar2 = x.enabled;
					if ((bVar2) &&(bVar2 = x.isTrigger, !bVar2 )) {
						return true;
					}
				}
				uVar4 = uVar4 + 1;
				uVar1 = (uint)colliders.Length;
				uVar3 = (ulong)uVar1;
			} while ((long)uVar4 < (long)(int)uVar1);
		}
		return false;
	}

	[Token(Token = "0x6001902")]
	[Address(RVA = "0x5878F00", Offset = "0x5877F00", VA = "0x5878F00")]
	private static bool IsAllowedShape(Vector3 size)
	{
		// Lifted from source/cpp/Map/DestructibleMapObject.c (Map.DestructibleMapObject$$IsAllowedShape): clean
		float fVar1;
		float fVar2;
		float fVar3;

		fVar3 = size.z;
		fVar1 = size.x;
		fVar2 = size.y;
		if (((((~(uint)fVar1 & 0x7f800000) != 0) && ((~(uint)fVar2 & 0x7f800000) != 0)) &&((~(uint)fVar3 & 0x7f800000) != 0)) && (0.0001 <= fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)) {
			if (fVar3 <= fVar1) {
				fVar1 = fVar3;
			}
			return fVar1 < 8.0 || fVar1 * 0.15 < fVar2;
		}
		return false;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/DestructibleMapObject.c.

	// Map.DestructibleMapObject$$.cctor: 1 lines keep C-only constructs
	static DestructibleMapObject()
	{
		Map_DestructibleMapObject_StaticFields pMVar1;
		String[] pSVar2;
		HashSet<string> __this;
		Int32[] pSVar3;

		pSVar2 = (String[])new string[5];
		if (pSVar2 == null) {
	label_05979834: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar2.Length != 0) {
			pSVar2[0] = "Terrain/";
			if ((pSVar2.Length & 0xfffffffe) != 0) {
				pSVar2[1] = "Background/";
				if (2 < (uint)pSVar2.Length) {
					pSVar2[2] = "FX/";
					if ((pSVar2.Length & 0xfffffffc) != 0) {
						pSVar2[3] = "Interact/";
						if (4 < (uint)pSVar2.Length) {
							pSVar2[4] = "Geometry/NavMesh";
							DestructibleMapObject.ProtectedAssetPrefixes = pSVar2;
							pSVar2 = (String[])new string[6];
							if (pSVar2 == null) goto label_05979834;
							if ((int)pSVar2.Length != 0) {
								pSVar2[0] = "Ground";
								if ((pSVar2.Length & 0xfffffffe) != 0) {
									pSVar2[1] = "Terrain";
									if (2 < (uint)pSVar2.Length) {
										pSVar2[2] = "Landscape";
										if ((pSVar2.Length & 0xfffffffc) != 0) {
											pSVar2[3] = "Floor";
											if (4 < (uint)pSVar2.Length) {
												pSVar2[4] = "Road";
												if (5 < (uint)pSVar2.Length) {
													pSVar2[5] = "Bridge";
													pMVar1 = typeof(DestructibleMapObject).static_fields;
													pMVar1.ProtectedNames = pSVar2;
													__this = il2cpp_codegen_object_new(typeof(HashSet<string>)) ;
													__this = new HashSet<object>();
													if (__this != null) {
														__this.Add((Il2CppObject *)"Bell");
														__this.Add((Il2CppObject *)"MovePingPong");
														__this.Add((Il2CppObject *)"SignalRotator");
														__this.Add((Il2CppObject *)"SignalMover");
														__this.Add((Il2CppObject *)"SignalArcMover");
														__this.Add((Il2CppObject *)"EyeTracker");
														pMVar1 = typeof(DestructibleMapObject).static_fields;
														pMVar1.DecorativeComponents = __this;
														pSVar3 = (Int32[])new int[0];
														pMVar1 = typeof(DestructibleMapObject).static_fields;
														pMVar1._degenerateIndices = pSVar3;
														return;
													}
													goto label_05979834;
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
		throw new IndexOutOfRangeException();
	}
}
