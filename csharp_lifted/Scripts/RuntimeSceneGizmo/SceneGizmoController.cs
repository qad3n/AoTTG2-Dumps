// ==================== AoTTG2 cross-reference ====================
// Type: RuntimeSceneGizmo.SceneGizmoController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/RuntimeSceneGizmo/SceneGizmoController.c
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/SceneGizmoController.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace RuntimeSceneGizmo;

[Token(Token = "0x200005B")]
public class SceneGizmoController : MonoBehaviour
{
	[Token(Token = "0x40001EF")]
	private const int GIZMOS_LAYER = 24;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Camera gizmoCamera;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0x28")]
	private Transform gizmoCamParent;

	[Token(Token = "0x40001F2")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private Renderer[] gizmoComponents;

	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private TextMesh[] labels;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0x40")]
	private Transform[] labelsTR;

	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x48")]
	private Transform m_referenceTransform;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0x50")]
	private Vector3 prevForward;

	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x60")]
	private Material gizmoNormalMaterial;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x68")]
	private Material gizmoFadeMaterial;

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x70")]
	private Material gizmoHighlightMaterial;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x78")]
	private int gizmoMaterialFadeProperty;

	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x7C")]
	private GizmoComponent highlightedComponent;

	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x80")]
	private GizmoComponent fadingComponent;

	[Token(Token = "0x40001FD")]
	[FieldOffset(Offset = "0x84")]
	private bool isFadingToZero;

	[Token(Token = "0x40001FE")]
	[FieldOffset(Offset = "0x88")]
	private float fadeT;

	[Token(Token = "0x40001FF")]
	[FieldOffset(Offset = "0x8C")]
	private bool updateTargetTexture;

	[Token(Token = "0x1700007B")]
	public Transform ReferenceTransform
	{
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x576C1E0", Offset = "0x576B1E0", VA = "0x576C1E0")]
		get
		{
			// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoController.c (RuntimeSceneGizmo.SceneGizmoController$$get_ReferenceTransform): clean
			return this.m_referenceTransform;
		}
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x576C1F0", Offset = "0x576B1F0", VA = "0x576C1F0")]
		set
		{
			// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoController.c (RuntimeSceneGizmo.SceneGizmoController$$set_ReferenceTransform): 4 lines keep C-only constructs
			Transform* targetAddress;
			Transform y;
			bool bVar1;
			uint uVar2;
			int iVar3;
			Camera pUVar4;
			Color UVar5;
			Color value_00;

			bVar1 = ((Object)value == null);
			if (bVar1) {
		label_0586c273: ;
				pUVar4 = Camera.main;
				if (pUVar4 == null) goto label_0586c36f;
				value = pUVar4.transform;
			}
			else {
				if (value == null) goto label_0586c36f;
				bVar1 = value.Equals(null);
				if (bVar1) goto label_0586c273;
			}
			y = this.m_referenceTransform;
			bVar1 = ((Object)value != (Object)y);
			if (!bVar1) {
				return;
			}
			targetAddress = &this.m_referenceTransform;
			*targetAddress = value;
			if (*targetAddress != null) {
				pUVar4 = (*targetAddress).GetComponent<Camera>();
				bVar1 = ((Object)pUVar4 != null);
				if (!bVar1) {
					return;
				}
				if (pUVar4 != null) {
					uVar2 = pUVar4.cullingMask;
					pUVar4.cullingMask = uVar2 & 0xfeffffff;
					iVar3 = pUVar4.clearFlags;
					if (iVar3 != 2) {
						return;
					}
					UVar5 = pUVar4.backgroundColor;
					pUVar4 = this.gizmoCamera;
					if (pUVar4 != null) {
						value_00.a = 0.0;
						value_00.r = UVar5.r;
						value_00.g = UVar5.g;
						value_00.b = UVar5.b;
						pUVar4.backgroundColor = value_00;
						return;
					}
				}
			}
		label_0586c36f: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700007C")]
	public RenderTexture TargetTexture
	{
		[Token(Token = "0x60002ED")]
		[Address(RVA = "0x576C380", Offset = "0x576B380", VA = "0x576C380")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoController.c (RuntimeSceneGizmo.SceneGizmoController$$get_TargetTexture): clean
			return this._TargetTexture_k__BackingField;
		}
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x576C390", Offset = "0x576B390", VA = "0x576C390")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoController.c (RuntimeSceneGizmo.SceneGizmoController$$set_TargetTexture): clean
			this._TargetTexture_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x576C3B0", Offset = "0x576B3B0", VA = "0x576C3B0")]
	private void Awake()
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoController.c (RuntimeSceneGizmo.SceneGizmoController$$Awake): 7 lines keep C-only constructs
		Transform[]* targetAddress;
		Material* targetAddress_00;
		Camera pUVar1;
		TextMesh[] pUVar2;
		Component pUVar3;
		int iVar4;
		int iVar5;
		uint uVar6;
		Transform pUVar7;
		Transform[] pUVar8;
		RenderTexture __this_00;
		Material pUVar9;
		Material pUVar10;
		Renderer[] pUVar11;
		GameObject pUVar12;
		object pIVar13;
		int iVar14;
		long lVar15;
		Color value;

		pUVar1 = this.gizmoCamera;
		if ((pUVar1 != null) &&(pUVar7 = pUVar1.transform, pUVar7 != null)) {
			pUVar7 = pUVar7.parent;
			this.gizmoCamParent = pUVar7;
			pUVar2 = this.labels;
			if (pUVar2 != null) {
				pUVar8 = (Transform[])new Transform[(uint32_t)pUVar2.Length];
				targetAddress = &this.labelsTR;
				this.labelsTR = pUVar8;
				iVar4 = Screen.width;
				iVar5 = Screen.height;
				if (iVar5 < iVar4) {
					iVar5 = iVar4;
				}
				uVar6 = iVar5 / 6 - 1;
				uVar6 = (int)uVar6 >> 0x10 | uVar6;
				uVar6 = (int)uVar6 >> 8 | uVar6;
				uVar6 = (int)uVar6 >> 4 | uVar6;
				uVar6 = (int)uVar6 >> 2 | uVar6;
				iVar14 = ((int)uVar6 >> 1 | uVar6) + 1;
				iVar5 = 0x200;
				if (iVar14 < 0x200) {
					iVar5 = iVar14;
				}
				__this_00 = new RenderTexture(iVar5, iVar5, 0x10);
				this._TargetTexture_k__BackingField = __this_00;
				pUVar1 = this.gizmoCamera;
				if (pUVar1 != null) {
					pUVar1.aspect = 1.0;
					pUVar1 = this.gizmoCamera;
					if (pUVar1 != null) {
						pUVar1.targetTexture = this._TargetTexture_k__BackingField;
						pUVar1 = this.gizmoCamera;
						if (pUVar1 != null) {
							pUVar1.cullingMask = 0x1000000;
							pUVar1 = this.gizmoCamera;
							if (pUVar1 != null) {
								pUVar1.eventMask = 0;
								pUVar1 = this.gizmoCamera;
								if (pUVar1 != null) {
									pUVar1.enabled = false;
									pUVar11 = this.gizmoComponents;
									if (pUVar11 != null) {
										if ((int)pUVar11.Length == 0) {
	label_0586c7cc: ;
											throw new IndexOutOfRangeException();
										}
										if (pUVar11[0] != null) {
											pUVar9 = (pUVar11[0]).sharedMaterial;
											this.gizmoNormalMaterial = pUVar9;
											pUVar9 = this.gizmoNormalMaterial;
											pUVar10 = new Material(pUVar9);
											this.gizmoFadeMaterial = pUVar10;
											iVar5 = Shader.PropertyToID("_AlphaVal");
											this.gizmoMaterialFadeProperty = iVar5;
											pUVar9 = this.gizmoNormalMaterial;
											pUVar10 = new Material(pUVar9);
											targetAddress_00 = &this.gizmoHighlightMaterial;
											this.gizmoHighlightMaterial = pUVar10;
											pUVar9 = this.gizmoHighlightMaterial;
											if (pUVar9 != null) {
												pUVar9.EnableKeyword("HIGHLIGHT_ON");
												pUVar9 = *targetAddress_00;
												if (pUVar9 != null) {
													value.b = 0.015686275;
													value.a = 1.0;
													value.r = 1.0;
													value.g = 0.92156863;
													pUVar9.color = value;
													pUVar11 = this.gizmoComponents;
													if (pUVar11 != null) {
														lVar15 = 0;
														while(true) {
															uVar6 = (uint)pUVar11.Length;
															if ((int)uVar6 <= (int)(uint)lVar15) break;
															if (uVar6 <= (uint)lVar15) goto label_0586c7cc;
															if (((Component)pUVar11[lVar15] ==null) ||(pUVar12 = (pUVar11[lVar15]).gameObject, pUVar12 == null)) goto label_0586c7b8;
															pUVar12.layer = 0x18;
															pUVar11 = this.gizmoComponents;
															lVar15 = lVar15 + 1;
															if (pUVar11 == null) goto label_0586c7b8;
														}
														pUVar8 = *targetAddress;
														if (pUVar8 != null) {
															uVar6 = 0;
															lVar15 = 0x20;
															goto label_0586c700;
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
	label_0586c7b8: ;
		throw new NullReferenceException();
	label_0586c700: ;
		if ((int)pUVar8.Length <= (int)uVar6) {
			return;
		}
		pUVar2 = this.labels;
		if (pUVar2 == null) goto label_0586c7b8;
		if ((uint)pUVar2.Length <= uVar6) goto label_0586c7cc;
		pUVar3 = *(Component*)((long)pUVar2.m_Items + lVar15 + -0x20);
		if ((pUVar3 == null) ||(pUVar12 = pUVar3.gameObject, pUVar12 == null)) goto label_0586c7b8;
		pUVar12.layer = 0x18;
		pUVar2 = this.labels;
		if (pUVar2 == null) goto label_0586c7b8;
		if ((uint)pUVar2.Length <= uVar6) goto label_0586c7cc;
		pUVar3 = *(Component*)((long)pUVar2.m_Items + lVar15 + -0x20);
		if (pUVar3 == null) goto label_0586c7b8;
		pUVar8 = this.labelsTR;
		pUVar7 = pUVar3.transform;
		if (pUVar8 == null) goto label_0586c7b8;
		if ((pUVar7 != null) &&(pIVar13 = il2cpp_vm_Object_IsInst((object)pUVar7, (((pUVar8.obj).klass)._1).element_class), pIVar13 == null)) {
			pIVar13 = new ArrayTypeMismatchException();
			throw pIVar13;
		}
		if ((uint)pUVar8.Length <= uVar6) goto label_0586c7cc;
		*(Transform*)((long)pUVar8.m_Items + lVar15 + -0x20) = pUVar7;
		uVar6 = uVar6 + 1;
		pUVar8 = *targetAddress;
		lVar15 = lVar15 + 8;
		if (pUVar8 == null) goto label_0586c7b8;
		goto label_0586c700;
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x576C7E0", Offset = "0x576B7E0", VA = "0x576C7E0")]
	private void OnEnable()
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoController.c (RuntimeSceneGizmo.SceneGizmoController$$OnEnable): clean
		uint uVar1;
		Renderer[] pUVar2;

		uVar1 = this.highlightedComponent;
		if ((long)(int)uVar1 == -1) {
	label_0586c818: ;
			this.SetHiddenComponent(-1);
			this.updateTargetTexture = true;
			return;
		}
		pUVar2 = this.gizmoComponents;
		if (pUVar2 != null) {
			if ((uint)pUVar2.Length <= uVar1) {
				throw new IndexOutOfRangeException();
			}
			if (pUVar2[(int)uVar1] != null) {
				(pUVar2[(int)uVar1]).sharedMaterial = this.gizmoNormalMaterial;
				this.highlightedComponent = -1;
				goto label_0586c818;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x576CA30", Offset = "0x576BA30", VA = "0x576CA30")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoController.c (RuntimeSceneGizmo.SceneGizmoController$$OnDestroy): clean
		RenderTexture pUVar1;
		bool bVar2;

		pUVar1 = this._TargetTexture_k__BackingField;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._TargetTexture_k__BackingField;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.Release();
			pUVar1 = this._TargetTexture_k__BackingField;
			Object.Destroy((Object)pUVar1);
			return;
		}
		return;
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x576CAD0", Offset = "0x576BAD0", VA = "0x576CAD0")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoController.c (RuntimeSceneGizmo.SceneGizmoController$$LateUpdate): 34 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		Transform[] pUVar3;
		Renderer[] pUVar4;
		byte[] auVar5 = new byte[16];
		byte[] auVar6 = new byte[12];
		byte[] auVar7 = new byte[12];
		byte[] auVar8 = new byte[12];
		bool bVar9;
		uint uVar10;
		uint extraout_EAX;
		Camera pUVar11;
		Transform pUVar12;
		GameObject pUVar13;
		MethodInfo in_RCX;
		uint uVar14;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar15;
		float fVar16;
		float fVar17;
		float fVar18;
		float fVar19;
		float fVar22;
		byte[] auVar20 = new byte[16];
		byte[] auVar21 = new byte[16];
		Quaternion value;
		Vector3 UVar23;

		pUVar12 = this.m_referenceTransform;
		bVar9 = ((bool)(Object)pUVar12);
		if (!bVar9) {
			pUVar11 = Camera.main;
			if (pUVar11 == null) goto label_0586d08b;
			pUVar12 = pUVar11.transform;
			this.ReferenceTransform = pUVar12;
			pUVar12 = this.m_referenceTransform;
			bVar9 = ((bool)(Object)pUVar12);
			if (!bVar9) {
				Debug.LogError((Il2CppObject *)"ReferenceTransform mustn't be null!");
				return;
			}
		}
		pUVar12 = this.m_referenceTransform;
		if (pUVar12 == null) goto label_0586d08b;
		UVar23 = pUVar12.forward;
		fVar15 = UVar23.z;
		fVar18 = UVar23.x;
		fVar16 = UVar23.y;
		uVar1 = this.prevForward.x;
		uVar2 = this.prevForward.y;
		fVar17 = this.prevForward.z - fVar15;
		if (9.9999994e-11 <=((float)uVar2 - fVar16) * ((float)uVar2 - fVar16) + ((float)uVar1 - fVar18) * ((float)uVar1 - fVar18) + fVar17 * fVar17) {
			auVar20._0_8_ = UVar23._0_8_ ^ 0x8000000080000000;
			auVar20._8_4_ = extraout_XMM0_Dc ^ 0x80000000;
			auVar20._12_4_ = extraout_XMM0_Dd ^ 0x80000000;
			auVar21._8_4_ = extraout_XMM0_Dc;
			auVar21._0_8_ = UVar23._0_8_;
			auVar21._12_4_ = extraout_XMM0_Dd;
			auVar21 = maxps(auVar20, auVar21);
			fVar19 = auVar21._0_4_;
			fVar22 = auVar21._4_4_;
			fVar17 = -fVar15;
			if (-fVar15 <= fVar15) {
				fVar17 = fVar15;
			}
			if (fVar19 <= fVar22) {
				if (fVar22 <= fVar17) goto label_0586cca3;
				uVar10 = (0.0 < fVar16) + 3;
				fVar18 = fVar15 * 0.0 + fVar18 * 0.0 + fVar16;
			}
			else if (fVar19 <= fVar17) {
	label_0586cca3: ;
				uVar10 = (0.0 < fVar15) + 5;
				fVar18 = fVar16 * 0.0 + fVar18 * 0.0 + fVar15;
			}
			else {
				uVar10 = (0.0 < fVar18) + 1;
				fVar18 = fVar15 * 0.0 + fVar16 * 0.0 + fVar18;
			}
			fVar16 = -fVar18;
			if (-fVar18 <= fVar18) {
				fVar16 = fVar18;
			}
			in_RCX = (MethodInfo)(ulong)(uVar10 & 1);
			uVar10 = (-(uint)((uVar10 & 1) == 0) | 1) + uVar10;
			uVar14 = 0xffffffff;
			if (0.92 <= fVar16) {
				uVar14 = uVar10;
			}
			this.SetHiddenComponent(uVar14);
			pUVar12 = this.m_referenceTransform;
			if (pUVar12 == null) goto label_0586d08b;
			value = pUVar12.rotation;
			pUVar12 = this.gizmoCamParent;
			if (pUVar12 == null) goto label_0586d08b;
			pUVar12.localRotation = value;
			fVar16 = (fVar19 + -0.15) * (float)0x3f266666;
			fVar18 = (fVar22 + -0.15) * (float)0x3f266666;
			auVar5._4_4_ = -(uint)(fVar16 < 0.0);
			auVar5._0_4_ = -(uint)(fVar16 < 0.0);
			auVar5._8_4_ = -(uint)(fVar18 < 0.0);
			auVar5._12_4_ = -(uint)(fVar18 < 0.0);
			uVar10 = movmskpd(extraout_EAX, auVar5);
			if ((uVar10 & 1) == 0) {
				if ((uVar10 & 2) != 0) goto label_0586cd5f;
	label_0586cd77: ;
				pUVar3 = this.labelsTR;
			}
			else {
				fVar16 = 0.0;
				if ((uVar10 & 2) == 0) goto label_0586cd77;
	label_0586cd5f: ;
				fVar18 = 0.0;
				pUVar3 = this.labelsTR;
			}
			if (pUVar3 == null) goto label_0586d08b;
			if ((int)pUVar3.Length == 0) goto label_0586d0a0;
			if (pUVar3[0] == null) goto label_0586d08b;
			auVar6._4_8_ = 0;
			auVar6._0_4_ = fVar16;
			(pUVar3[0]).localPosition = (Vector3)(auVar6 << 0x40);
			pUVar3 = this.labelsTR;
			if (pUVar3 == null) goto label_0586d08b;
			if ((pUVar3.Length & 0xfffffffe) == 0) goto label_0586d0a0;
			if (pUVar3[1] == null) goto label_0586d08b;
			auVar7._4_8_ = 0;
			auVar7._0_4_ = fVar18;
			(pUVar3[1]).localPosition = (Vector3)(auVar7 << 0x40);
			pUVar3 = this.labelsTR;
			if (pUVar3 == null) goto label_0586d08b;
			if ((uint)pUVar3.Length < 3) goto label_0586d0a0;
			if (pUVar3[2] == null) goto label_0586d08b;
			fVar16 = (fVar17 + -0.15) * 0.65;
			fVar18 = 0.0;
			if (0.0 <= fVar16) {
				fVar18 = fVar16;
			}
			auVar8._4_8_ = 0;
			auVar8._0_4_ = fVar18;
			(pUVar3[2]).localPosition = (Vector3)(auVar8 << 0x40);
			pUVar3 = this.labelsTR;
			if (pUVar3 == null) goto label_0586d08b;
			if ((int)pUVar3.Length == 0) goto label_0586d0a0;
			if (pUVar3[0] == null) goto label_0586d08b;
			(pUVar3[0]).rotation = value;
			pUVar3 = this.labelsTR;
			if (pUVar3 == null) goto label_0586d08b;
			if ((pUVar3.Length & 0xfffffffe) == 0) goto label_0586d0a0;
			if (pUVar3[1] == null) goto label_0586d08b;
			(pUVar3[1]).rotation = value;
			pUVar3 = this.labelsTR;
			if (pUVar3 == null) goto label_0586d08b;
			if ((uint)pUVar3.Length < 3) goto label_0586d0a0;
			if (pUVar3[2] == null) goto label_0586d08b;
			(pUVar3[2]).rotation = value;
			this.updateTargetTexture = true;
			this.prevForward.x = UVar23.x;
			this.prevForward.y = UVar23.y;
			this.prevForward.z = fVar15;
		}
		fVar18 = this.fadeT;
		if (1.0 <= fVar18) {
			if (this.updateTargetTexture == false) {
				return;
			}
			pUVar11 = this.gizmoCamera;
		}
		else {
			fVar16 = Time.unscaledDeltaTime;
			fVar18 = fVar18 + fVar16 * 4.0;
			fVar16 = 1.0;
			if (fVar18 <= 1.0) {
				fVar16 = fVar18;
			}
			this.fadeT = fVar16;
			if (this.isFadingToZero != false) {
				fVar16 = 1.0 - fVar16;
			}
			this.SetAlphaOf(this.fadingComponent, fVar16);
			if (1.0 <= this.fadeT) {
				if (this.isFadingToZero == false) {
					this.SetMaterialOf(this.fadingComponent, this.gizmoNormalMaterial);
					this.fadingComponent = -1;
					this.updateTargetTexture = true;
					pUVar11 = this.gizmoCamera;
					goto joined_r0x0586d041;
				}
				pUVar4 = this.gizmoComponents;
				if (pUVar4 == null) goto label_0586d08b;
				uVar10 = this.fadingComponent;
				if ((uint)pUVar4.Length <= uVar10) goto label_0586d0a0;
				if (((Component)pUVar4[(int)uVar10] == null) ||(pUVar13 = (pUVar4[(int)uVar10]).gameObject, pUVar13 == null)) goto label_0586d08b;
				pUVar13.SetActive(false);
				pUVar4 = this.gizmoComponents;
				uVar14 = this.fadingComponent;
				uVar10 = uVar14 + 1;
				if (uVar10 < 2) {
	label_0586cfe0: ;
					uVar10 = uVar14;
				}
				else if ((uVar14 & 1) == 0) {
					uVar14 = uVar14 - 1;
					goto label_0586cfe0;
				}
				if (pUVar4 == null) goto label_0586d08b;
				if ((uint)pUVar4.Length <= uVar10) {
	label_0586d0a0: ;
					throw new IndexOutOfRangeException();
				}
				if (((Component)pUVar4[(int)uVar10] == null) ||(pUVar13 = (pUVar4[(int)uVar10]).gameObject, pUVar13 == null)) goto label_0586d08b;
				pUVar13.SetActive(false);
			}
			this.updateTargetTexture = true;
			pUVar11 = this.gizmoCamera;
		}
	joined_r0x0586d041: ;
		if (pUVar11 != null) {
			pUVar11.Render();
			this.updateTargetTexture = false;
			return;
		}
	label_0586d08b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x576D230", Offset = "0x576C230", VA = "0x576D230")]
	public GizmoComponent Raycast(Vector3 normalizedPosition)
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoController.c (RuntimeSceneGizmo.SceneGizmoController$$Raycast): clean
		uint uVar1;
		Camera pUVar2;
		Ray ray;
		bool bVar3;
		Collider __this_00;
		Transform __this_01;
		Object y;
		Renderer[] pUVar4;
		Object x;
		uint uVar5;
		long lVar6;
		float maxDistance;
		Ray local_80;
		RaycastHit local_68;

		local_68.m_UV.x = 0.0;
		local_68.m_UV.y = 0.0;
		local_68.m_Collider.m_Data = (EntityId)0x0;
		local_68.m_Normal.y = 0.0;
		local_68.m_Normal.z = 0.0;
		local_68.m_FaceID = 0;
		local_68.m_Distance = 0.0;
		local_68.m_Point.x = 0.0;
		local_68.m_Point.y = 0.0;
		local_68.m_Point.z = 0.0;
		local_68.m_Normal.x = 0.0;
		pUVar2 = this.gizmoCamera;
		if (pUVar2 != null) {
			local_80 = pUVar2.ViewportPointToRay(normalizedPosition);
			pUVar2 = this.gizmoCamera;
			if (pUVar2 != null) {
				maxDistance = pUVar2.farClipPlane;
				ray.m_Origin.z = local_80.m_Origin.z;
				ray.m_Direction.x = local_80.m_Direction.x;
				ray.m_Origin.x = local_80.m_Origin.x;
				ray.m_Origin.y = local_80.m_Origin.y;
				ray.m_Direction.y = local_80.m_Direction.y;
				ray.m_Direction.z = local_80.m_Direction.z;
				bVar3 = Physics.Raycast(ray, ref local_68, maxDistance, 0x1000000, 2);
				if (!bVar3) {
					return -1;
				}
				__this_00 = local_68.collider;
				if ((__this_00 != null) &&(__this_01 = __this_00.transform, __this_01 != null)) {
					y = (Object)__this_01.gameObject;
					pUVar4 = this.gizmoComponents;
					if (pUVar4 != null) {
						lVar6 = 0;
						do {
							uVar1 = (uint)pUVar4.Length;
							uVar5 = (uint)lVar6;
							if ((int)uVar1 <= (int)uVar5) {
								return -1;
							}
							if (uVar1 <= uVar5) {
								throw new IndexOutOfRangeException();
							}
							if ((Component)pUVar4[lVar6] == null) break;
							x = (Object)(pUVar4[lVar6]).gameObject;
							bVar3 = (x == y);
							if (bVar3) {
								return uVar5;
							}
							pUVar4 = this.gizmoComponents;
							lVar6 = lVar6 + 1;
						} while (pUVar4 != null);
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x576D3D0", Offset = "0x576C3D0", VA = "0x576D3D0")]
	public void OnPointerHover(Vector3 normalizedPosition)
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoController.c (RuntimeSceneGizmo.SceneGizmoController$$OnPointerHover): clean
		uint uVar1;
		Renderer[] pUVar2;
		uint uVar3;

		uVar3 = this.Raycast(normalizedPosition);
		uVar1 = this.highlightedComponent;
		if (uVar3 == 0xffffffff) {
			if (uVar1 == 0xffffffff) {
				return;
			}
			pUVar2 = this.gizmoComponents;
			if (pUVar2 == null) {
	label_0586d48e: ;
				throw new NullReferenceException();
			}
			if ((uint)pUVar2.Length <= uVar1) {
	label_0586d493: ;
				throw new IndexOutOfRangeException();
			}
			if (pUVar2[(int)uVar1] == null) goto label_0586d48e;
			(pUVar2[(int)uVar1]).sharedMaterial = this.gizmoNormalMaterial;
		}
		else {
			if (uVar3 == uVar1) {
				return;
			}
			if (uVar1 != 0xffffffff) {
				pUVar2 = this.gizmoComponents;
				if (pUVar2 == null) goto label_0586d48e;
				if ((uint)pUVar2.Length <= uVar1) goto label_0586d493;
				if (pUVar2[(int)uVar1] == null) goto label_0586d48e;
				(pUVar2[(int)uVar1]).sharedMaterial = this.gizmoNormalMaterial;
			}
			if (uVar3 != this.fadingComponent) {
				this.highlightedComponent = uVar3;
				pUVar2 = this.gizmoComponents;
				if (pUVar2 == null) goto label_0586d48e;
				if ((uint)pUVar2.Length <= uVar3) goto label_0586d493;
				if (pUVar2[(int)uVar3] == null) goto label_0586d48e;
				(pUVar2[(int)uVar3]).sharedMaterial = this.gizmoHighlightMaterial;
				goto label_0586d480;
			}
		}
		this.highlightedComponent = -1;
	label_0586d480: ;
		this.updateTargetTexture = true;
		return;
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x576C840", Offset = "0x576B840", VA = "0x576C840")]
	private void SetHiddenComponent(GizmoComponent component)
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoController.c (RuntimeSceneGizmo.SceneGizmoController$$SetHiddenComponent): 3 lines keep C-only constructs
		Renderer[] pUVar1;
		GameObject pUVar2;
		uint uVar3;
		MethodInfo in_RCX;
		uint uVar4;

		uVar4 = this.fadingComponent;
		if (component != -1) {
			if (uVar4 == component) {
				return;
			}
			if (uVar4 != 0xffffffff) {
				this.SetMaterialOf(uVar4, this.gizmoNormalMaterial);
				this.SetAlphaOf(this.fadingComponent, 1.0);
				pUVar1 = this.gizmoComponents;
				if (pUVar1 == null) goto label_0586ca21;
				uVar4 = this.fadingComponent;
				if ((uint)pUVar1.Length <= uVar4) goto label_0586ca26;
				if (((Component)pUVar1[(int)uVar4] == null) ||(pUVar2 = (pUVar1[(int)uVar4]).gameObject, pUVar2 == null)) goto label_0586ca21;
				pUVar2.SetActive(true);
				pUVar1 = this.gizmoComponents;
				uVar4 = this.fadingComponent;
				if (uVar4 + 1 < 2) {
	label_0586c8ee: ;
					uVar3 = uVar4;
				}
				else {
					uVar3 = uVar4 + 1;
					if ((uVar4 & 1) == 0) {
						uVar4 = uVar4 - 1;
						goto label_0586c8ee;
					}
				}
				if (pUVar1 == null) goto label_0586ca21;
				if ((uint)pUVar1.Length <= uVar3) goto label_0586ca26;
				in_RCX = (MethodInfo)(long)(int)uVar3;
				if (((Component)pUVar1[(long)in_RCX] == null) ||(pUVar2 = (pUVar1[(long)in_RCX]).gameObject, pUVar2 == null)) goto label_0586ca21;
				pUVar2.SetActive(true);
			}
			this.fadingComponent = component;
			this.SetMaterialOf(component, this.gizmoFadeMaterial);
			this.isFadingToZero = true;
			goto label_0586ca14;
		}
		if (uVar4 == 0xffffffff) {
			return;
		}
		if (this.fadeT < 1.0) {
			return;
		}
		pUVar1 = this.gizmoComponents;
		if (pUVar1 == null) goto label_0586ca21;
		if ((uint)pUVar1.Length <= uVar4) goto label_0586ca26;
		if (((Component)pUVar1[(int)uVar4] == null) ||(pUVar2 = (pUVar1[(int)uVar4]).gameObject, pUVar2 == null)) goto label_0586ca21;
		pUVar2.SetActive(true);
		pUVar1 = this.gizmoComponents;
		uVar4 = this.fadingComponent;
		if (uVar4 + 1 < 2) {
	label_0586c9cf: ;
			uVar3 = uVar4;
		}
		else {
			uVar3 = uVar4 + 1;
			if ((uVar4 & 1) == 0) {
				uVar4 = uVar4 - 1;
				goto label_0586c9cf;
			}
		}
		if (pUVar1 != null) {
			if ((uint)pUVar1.Length <= uVar3) {
	label_0586ca26: ;
				throw new IndexOutOfRangeException();
			}
			if (((Component)pUVar1[(int)uVar3] != null) &&(pUVar2 = (pUVar1[(int)uVar3]).gameObject, pUVar2 != null)) {
				pUVar2.SetActive(true);
				this.isFadingToZero = false;
	label_0586ca14: ;
				this.fadeT = 0.0;
				return;
			}
		}
	label_0586ca21: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x576D0D0", Offset = "0x576C0D0", VA = "0x576D0D0")]
	private void SetAlphaOf(GizmoComponent component, float alpha)
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoController.c (RuntimeSceneGizmo.SceneGizmoController$$SetAlphaOf): clean
		Material __this_00;
		TextMesh[] pUVar1;
		TextMesh __this_01;
		Color value;

		if (component == -1) {
			return;
		}
		__this_00 = this.gizmoFadeMaterial;
		if (__this_00 != null) {
			__this_00.SetFloat(this.gizmoMaterialFadeProperty, alpha);
			if (component - 5U < 2) {
				pUVar1 = this.labels;
				if (pUVar1 == null) goto label_0586d183;
				if ((uint)pUVar1.Length < 3) goto label_0586d188;
				__this_01 = pUVar1[2];
			}
			else {
				if (1 < component - 1U) {
					pUVar1 = this.labels;
					if (pUVar1 == null) goto label_0586d183;
					if ((pUVar1.Length & 0xfffffffe) == 0) goto label_0586d188;
					__this_01 = pUVar1[1];
					if (__this_01 == null) goto label_0586d183;
					goto label_0586d163;
				}
				pUVar1 = this.labels;
				if (pUVar1 == null) goto label_0586d183;
				if ((int)pUVar1.Length == 0) {
	label_0586d188: ;
					throw new IndexOutOfRangeException();
				}
				__this_01 = pUVar1[0];
			}
			if (__this_01 != null) {
	label_0586d163: ;
				value.a = alpha;
				value.b = 1.0;
				value.r = 1.0;
				value.g = 1.0;
				__this_01.color = value;
				return;
			}
		}
	label_0586d183: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x576D190", Offset = "0x576C190", VA = "0x576D190")]
	private void SetMaterialOf(GizmoComponent component, Material material)
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoController.c (RuntimeSceneGizmo.SceneGizmoController$$SetMaterialOf): clean
		Renderer[] pUVar1;
		uint uVar2;
		uint uVar3;

		if (component == -1) {
			return;
		}
		uVar3 = component;
		if (component == 0) {
	label_0586d1ae: ;
			uVar2 = this.highlightedComponent;
			if (uVar2 == component) goto label_0586d1ca;
	label_0586d1b5: ;
			if (uVar3 == uVar2) goto label_0586d1ca;
		}
		else {
			if ((component & 1U) == 0) {
				uVar3 = component - 1;
				goto label_0586d1ae;
			}
			uVar3 = component + 1;
			uVar2 = this.highlightedComponent;
			if (uVar2 != component) goto label_0586d1b5;
	label_0586d1ca: ;
			this.highlightedComponent = -1;
		}
		pUVar1 = this.gizmoComponents;
		if (pUVar1 != null) {
			if ((uint)pUVar1.Length <= (uint)component) {
	label_0586d224: ;
				throw new IndexOutOfRangeException();
			}
			if (pUVar1[component] != null) {
				(pUVar1[component]).sharedMaterial = material;
				pUVar1 = this.gizmoComponents;
				if (pUVar1 != null) {
					if ((uint)pUVar1.Length <= uVar3) goto label_0586d224;
					if (pUVar1[(int)uVar3] != null) {
						(pUVar1[(int)uVar3]).sharedMaterial = material;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x576D0B0", Offset = "0x576C0B0", VA = "0x576D0B0")]
	private GizmoComponent GetOppositeComponent(GizmoComponent component)
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoController.c (RuntimeSceneGizmo.SceneGizmoController$$GetOppositeComponent): clean
		if (1 < component + 1U) {
			if ((component & 1U) != 0) {
				return component + 1U;
			}
			component = component + -1;
		}
		return component;
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x576D4A0", Offset = "0x576C4A0", VA = "0x576D4A0")]
	public SceneGizmoController()
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoController.c (RuntimeSceneGizmo.SceneGizmoController$$.ctor): clean
		this.highlightedComponent = -1;
		this.fadingComponent = -1;
		this.fadeT = 1.0;
		base();
		return;
	}
}
