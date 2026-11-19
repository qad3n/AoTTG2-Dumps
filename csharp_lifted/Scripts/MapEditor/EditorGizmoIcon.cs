// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.EditorGizmoIcon
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/EditorGizmoIcon.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200014B")]
public class EditorGizmoIcon : MonoBehaviour
{
	[Token(Token = "0x4000784")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _iconObject;

	[Token(Token = "0x4000785")]
	[FieldOffset(Offset = "0x28")]
	private GameObject _colliderObject;

	[Token(Token = "0x4000786")]
	[FieldOffset(Offset = "0x30")]
	private SphereCollider _collider;

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x5B92460", Offset = "0x5B91460", VA = "0x5B92460")]
	public void Setup()
	{
		// Lifted from source/cpp/MapEditor/EditorGizmoIcon.c (MapEditor.EditorGizmoIcon$$Setup): 46 lines keep C-only constructs
		GameObject* ppUVar1;
		SphereCollider* targetAddress;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		String path;
		bool bVar8;
		GameObject pUVar9;
		Object pUVar10;
		Transform pUVar11;
		Shader shader;
		Material pUVar12;
		Transform pUVar13;
		SphereCollider pUVar14;
		UnityEngine_Vector3_StaticFields extraout_RAX;
		UnityEngine_Vector3_StaticFields pUVar15;
		ulong extraout_XMM0_Qb;
		byte[] auVar16 = new byte[16];
		byte[] auVar17 = new byte[16];
		int iVar18;
		int iVar19;
		Color value;
		Vector3 UVar20;
		Vector3 value_00;
		Bounds local_48;

		if (Il2CppMethodInitialized_075479e2 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_SphereCollider) ;
			Il2CppMethodInitialized_075479e2 = true;
		}
		path = ResourcePaths.Map;
		pUVar9 = ResourceManager.InstantiateAsset<GameObject>(path, "Gizmos/MissingRenderer", false, false);
		ppUVar1 = &this._iconObject;
		this._iconObject = pUVar9;
		pUVar10 = (Object)this._iconObject;
		bVar8 = (pUVar10 == null);
		if (bVar8) {
			Debug.LogWarning((Il2CppObject *)"EditorGizmoIcon: Could not load Gizmos/MissingRenderer prefab - creating fallback");
			pUVar9 = GameObject.CreatePrimitive(0);
			*ppUVar1 = pUVar9;
			if (*ppUVar1 == null) goto label_05c92acf;
			pUVar10 = (Object)(*ppUVar1).GetComponent<SphereCollider>();
			Object.DestroyImmediate(pUVar10);
			if (*ppUVar1 == null) goto label_05c92acf;
			pUVar11 = (*ppUVar1).transform;
			if (pUVar11 == null) goto label_05c92acf;
			pUVar15 = typeof(Vector3).static_fields;
			UVar20.z = (pUVar15.oneVector).z * 0.3;
			uVar2 = (pUVar15.oneVector).x;
			uVar5 = (pUVar15.oneVector).y;
			UVar20.x = (float)uVar2 * 0.3;
			UVar20.y = (float)uVar5 * 0.3;
			pUVar11.localScale = UVar20;
			if (*ppUVar1 == null) goto label_05c92acf;
			pUVar10 = (Object)(*ppUVar1).GetComponent<Renderer>();
			bVar8 = (pUVar10 != null);
			if (bVar8) {
				shader = Shader.Find("Unlit/Color");
				pUVar12 = new Material(shader);
				if (pUVar10 == null) goto label_05c92acf;
				pUVar10.material = pUVar12;
				pUVar12 = pUVar10.material;
				if (pUVar12 == null) goto label_05c92acf;
				value.b = 0.0;
				value.a = 0.7;
				value.r = 1.0;
				value.g = 1.0;
				pUVar12.color = value;
			}
		}
		if (*ppUVar1 != null) {
			pUVar11 = (*ppUVar1).transform;
			pUVar13 = this.transform;
			if (pUVar11 != null) {
				pUVar11.SetParent(pUVar13);
				if (*ppUVar1 != null) {
					pUVar11 = (*ppUVar1).transform;
					if (pUVar11 != null) {
						pUVar11.localPosition = (Vector3)(Vector3.zeroVector);
						if (*ppUVar1 != null) {
							pUVar11 = (*ppUVar1).transform;
							if (pUVar11 != null) {
								pUVar11.localScale = (Vector3)(Vector3.oneVector);
								pUVar9 = new GameObject("EditorSelectionCollider");
								ppUVar1 = &this._colliderObject;
								this._colliderObject = pUVar9;
								pUVar9 = this._colliderObject;
								if (pUVar9 != null) {
									pUVar11 = pUVar9.transform;
									pUVar13 = this.transform;
									if (pUVar11 != null) {
										pUVar11.SetParent(pUVar13, false);
										pUVar9 = *ppUVar1;
										if (pUVar9 != null) {
											pUVar9.layer = PhysicsLayer.MapEditorObject;
											if (*ppUVar1 != null) {
												pUVar14 = (*ppUVar1).AddComponent<SphereCollider>();
												targetAddress = &this._collider;
												this._collider = pUVar14;
												pUVar9 = this._iconObject;
												if (pUVar9 != null) {
													pUVar10 = (Object)pUVar9.GetComponentInChildren<Renderer>();
													bVar8 = (pUVar10 != null);
													if (bVar8) {
														pUVar11 = this.transform;
														if (pUVar10 == null) goto label_05c92acf;
														local_48 = pUVar10.bounds;
														if (pUVar11 == null) goto label_05c92acf;
														UVar20 = pUVar11.InverseTransformPoint(local_48.m_Center);
														UVar20.z = UVar20.z;
														auVar16._0_8_ = UVar20._0_8_;
														auVar16._8_8_ = extraout_XMM0_Qb;
														pUVar15 = extraout_RAX;
													}
													else {
														pUVar15 = typeof(Vector3).static_fields;
														uVar3 = (pUVar15.zeroVector).x;
														uVar6 = (pUVar15.zeroVector).y;
														auVar16._4_4_ = uVar6;
														auVar16._0_4_ = uVar3;
														auVar16._8_8_ = 0;
														UVar20.z = (pUVar15.zeroVector).z;
													}
													pUVar14 = *targetAddress;
													iVar18 = -(uint)(SUB164(auVar16 & _DAT_01008860, 0) == (int)g_data_01008860);
													iVar19 = -(uint)(SUB164(auVar16 & _DAT_01008860, 4) == g_data_01008860._4_4_);
													auVar17._4_4_ = iVar18;
													auVar17._0_4_ = iVar18;
													auVar17._8_4_ = iVar19;
													auVar17._12_4_ = iVar19;
													iVar18 = movmskpd((int)pUVar15, auVar17);
													if ((iVar18 != 0) || ((~(uint)UVar20.z & 0x7f800000) == 0)) {
														pUVar15 = typeof(Vector3).static_fields;
														uVar4 = (pUVar15.zeroVector).x;
														uVar7 = (pUVar15.zeroVector).y;
														auVar16._4_4_ = uVar7;
														auVar16._0_4_ = uVar4;
														auVar16._8_8_ = 0;
														UVar20.z = (pUVar15.zeroVector).z;
													}
													if (pUVar14 != null) {
														value_00._0_8_ = auVar16._0_8_;
														value_00.z = UVar20.z;
														pUVar14.center = value_00;
														if (*targetAddress != null) {
															(*targetAddress).radius = 1.0;
															pUVar9 = this.gameObject;
															if (pUVar9 != null) {
																pUVar9.layer = PhysicsLayer.MapEditorObject;
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
					}
				}
			}
		}
	label_05c92acf: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x5B92B10", Offset = "0x5B91B10", VA = "0x5B92B10")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/MapEditor/EditorGizmoIcon.c (MapEditor.EditorGizmoIcon$$LateUpdate): clean
		Object x;
		BaseCamera pCVar1;
		GameObject pUVar2;
		BaseComponentCache pUVar3;
		bool bVar4;
		Transform pUVar5;

		x = (Object)this._iconObject;
		bVar4 = (x != null);
		if (bVar4) {
			pCVar1 = SceneLoader.CurrentCamera;
			bVar4 = ((Object)pCVar1 != null);
			if (bVar4) {
				pUVar2 = this._iconObject;
				if (pUVar2 != null) {
					pUVar5 = pUVar2.transform;
					pCVar1 = SceneLoader.CurrentCamera;
					if (((pCVar1 != null) &&(pUVar3 = pCVar1.Cache, pUVar3 != null)) &&(pUVar5 != null)) {
						pUVar5.LookAt(pUVar3.Transform);
						pUVar2 = this._iconObject;
						if (pUVar2 != null) {
							pUVar5 = pUVar2.transform;
							if (pUVar5 != null) {
								pUVar5.Rotate(0.0, 180.0, 0.0);
								return;
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x5B92C40", Offset = "0x5B91C40", VA = "0x5B92C40")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/MapEditor/EditorGizmoIcon.c (MapEditor.EditorGizmoIcon$$OnDestroy): clean
		Object pUVar1;
		bool bVar2;

		pUVar1 = (Object)this._colliderObject;
		bVar2 = (pUVar1 != null);
		if (bVar2) {
			pUVar1 = (Object)this._colliderObject;
			Object.Destroy(pUVar1);
		}
		pUVar1 = (Object)this._iconObject;
		bVar2 = (pUVar1 != null);
		if (bVar2) {
			pUVar1 = (Object)this._iconObject;
			Object.Destroy(pUVar1);
			return;
		}
		return;
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x5B92AE0", Offset = "0x5B91AE0", VA = "0x5B92AE0")]
	private static bool IsFinite(Vector3 value)
	{
		// Lifted from source/cpp/MapEditor/EditorGizmoIcon.c (MapEditor.EditorGizmoIcon$$IsFinite): 12 lines keep C-only constructs
		uint in_EAX;
		ulong in_XMM0_Qb;
		byte[] auVar1 = new byte[16];
		int iVar3;
		byte[] auVar2 = new byte[16];

		auVar1._0_8_ = value._0_8_;
		auVar1._8_8_ = in_XMM0_Qb;
		auVar2._0_4_ = -(uint)(SUB164(auVar1 & _DAT_01008860, 0) == (int)g_data_01008860);
		iVar3 = -(uint)(SUB164(auVar1 & _DAT_01008860, 4) == g_data_01008860._4_4_);
		auVar2._4_4_ = auVar2._0_4_;
		auVar2._8_4_ = iVar3;
		auVar2._12_4_ = iVar3;
		iVar3 = movmskpd(in_EAX, auVar2);
		if (iVar3 == 0) {
			return (~(uint)value.z & 0x7f800000) != 0;
		}
		return false;
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x5B92D00", Offset = "0x5B91D00", VA = "0x5B92D00")]
	private static bool IsFinite(float value)
	{
		// Lifted from source/cpp/MapEditor/EditorGizmoIcon.c (MapEditor.EditorGizmoIcon$$IsFinite): clean
		return (~(uint)value & 0x7f800000) != 0;
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x5B92D10", Offset = "0x5B91D10", VA = "0x5B92D10")]
	public EditorGizmoIcon()
	{
		// Lifted from source/cpp/MapEditor/EditorGizmoIcon.c (MapEditor.EditorGizmoIcon$$.ctor): clean
		base();
		return;
	}
}
