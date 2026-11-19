// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HaircutEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HaircutEffect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200071B")]
internal class HaircutEffect : MonoBehaviour
{
	[Token(Token = "0x200071C")]
	private sealed class HairMesh
	{
		[Token(Token = "0x4002340")]
		[FieldOffset(Offset = "0x10")]
		public readonly Transform Source;

		[Token(Token = "0x4002341")]
		[FieldOffset(Offset = "0x18")]
		public readonly Mesh Mesh;

		[Token(Token = "0x4002342")]
		[FieldOffset(Offset = "0x20")]
		public readonly Material[] Materials;

		[Token(Token = "0x4002343")]
		[FieldOffset(Offset = "0x28")]
		public readonly int Layer;

		[Token(Token = "0x4002344")]
		[FieldOffset(Offset = "0x30")]
		public readonly List<HairPiece> Pieces;

		[Token(Token = "0x600455C")]
		[Address(RVA = "0x5B46A70", Offset = "0x5B45A70", VA = "0x5B46A70")]
		public HairMesh(Transform source, Mesh mesh, Material[] materials, int layer)
		{
			// Lifted from source/cpp/Characters/HaircutEffect.c (Characters.HaircutEffect.HairMesh$$.ctor): clean
			List<HaircutEffect.HairPiece> __this_00;

			__this_00 = new List<HaircutEffect.HairPiece>(0xc);
			this.Pieces = __this_00;
			base();
			this.Source = source;
			this.Mesh = mesh;
			this.Materials = materials;
			this.Layer = layer;
			return;
		}
	}

	[Token(Token = "0x200071D")]
	private sealed class HairPiece
	{
		[Token(Token = "0x4002345")]
		[FieldOffset(Offset = "0x10")]
		public Vector3 Pivot;

		[Token(Token = "0x4002346")]
		[FieldOffset(Offset = "0x1C")]
		public Vector3 Velocity;

		[Token(Token = "0x4002347")]
		[FieldOffset(Offset = "0x28")]
		public Vector3 AngularVelocity;

		[Token(Token = "0x4002348")]
		[FieldOffset(Offset = "0x34")]
		public Matrix4x4 Matrix;

		[Token(Token = "0x4002349")]
		[FieldOffset(Offset = "0x74")]
		public float Delay;

		[Token(Token = "0x400234A")]
		[FieldOffset(Offset = "0x78")]
		public bool Released;

		[Token(Token = "0x400234B")]
		[FieldOffset(Offset = "0x80")]
		public readonly MaterialPropertyBlock Properties;

		[Token(Token = "0x600455D")]
		[Address(RVA = "0x5B46B40", Offset = "0x5B45B40", VA = "0x5B46B40")]
		public HairPiece()
		{
			// Lifted from source/cpp/Characters/HaircutEffect.c (Characters.HaircutEffect.HairPiece$$.ctor): clean
			MaterialPropertyBlock __this_00;

			__this_00 = new MaterialPropertyBlock();
			this.Properties = __this_00;
			base();
			return;
		}
	}

	[Token(Token = "0x4002334")]
	private const int PieceCount = 12;

	[Token(Token = "0x4002335")]
	private const float CutDuration = 0.35f;

	[Token(Token = "0x4002336")]
	private const float FallDuration = 1.1f;

	[Token(Token = "0x4002337")]
	private const float FadeDuration = 0.25f;

	[Token(Token = "0x4002338")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int PieceId;

	[Token(Token = "0x4002339")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int FadeId;

	[Token(Token = "0x400233A")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int BoundsMinId;

	[Token(Token = "0x400233B")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int BoundsInvSizeId;

	[Token(Token = "0x400233C")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<HairMesh> _meshes;

	[Token(Token = "0x400233D")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<Material> _materials;

	[Token(Token = "0x400233E")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<Mesh> _bakedMeshes;

	[Token(Token = "0x400233F")]
	[FieldOffset(Offset = "0x38")]
	private float _age;

	[Token(Token = "0x6004556")]
	[Address(RVA = "0x5B45CC0", Offset = "0x5B44CC0", VA = "0x5B45CC0")]
	public static void Play(Transform hairSocket, float size)
	{
		// Lifted from source/cpp/Characters/HaircutEffect.c (Characters.HaircutEffect$$Play): clean
		bool bVar1;
		Object x;
		GameObject __this;
		HaircutEffect __this_00;

		x = (Object)BasicTitanComponentCache.LoadShader("Haircut");
		bVar1 = (x == null);
		if (bVar1) {
			return;
		}
		__this = new GameObject("HaircutEffect");
		if (__this != null) {
			__this_00 = __this.AddComponent<HaircutEffect>();
			if (__this_00 != null) {
				if (size <= 0.1) {
					size = 0.1;
				}
				__this_00.Initialize(hairSocket, (Shader)x, size);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004557")]
	[Address(RVA = "0x5B45E00", Offset = "0x5B44E00", VA = "0x5B45E00")]
	private void Initialize(Transform hairSocket, Shader shader, float size)
	{
		// Lifted from source/cpp/Characters/HaircutEffect.c (Characters.HaircutEffect$$Initialize): 48 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		byte bVar3;
		uint uVar4;
		Renderer __this_00;
		List<Mesh> __this_01;
		Mesh[] pUVar5;
		Material pUVar6;
		List<Material> __this_02;
		Material[] pUVar7;
		List<HaircutEffect.HairPiece> __this_03;
		HaircutEffect.HairPiece[] pCVar8;
		List<HaircutEffect.HairMesh> pSVar9;
		HaircutEffect.HairMesh[] pCVar10;
		bool bVar12;
		int iVar13;
		Object[] pSVar14;
		GameObject pUVar15;
		Renderer pUVar16;
		Object pUVar17;
		Material[] materials;
		ulong uVar18;
		Material pUVar19;
		object pIVar20;
		Transform source;
		HaircutEffect.HairMesh __this_04;
		HaircutEffect.HairPiece __this_05;
		MaterialPropertyBlock pUVar21;
		int iVar22;
		uint uVar23;
		ulong uVar24;
		MaterialPropertyBlock* targetAddress;
		uint uVar25;
		Material* targetAddress_00;
		float fVar26;
		uint extraout_XMM0_Db;
		byte[] auVar27 = new byte[16];
		byte[] auVar28 = new byte[16];
		float fVar29;
		Vector4 value;
		Vector4 value_00;
		Vector3 UVar30;
		Material pUStack_150;
		byte[] auStack_148 = new byte[8];
		Dictionary<Material, Material> pSStack_138;
		float fStack_130;
		float fStack_12c;
		float fStack_128;
		MeshFilter pUStack_110;
		Object[] pSStack_108;
		ulong uStack_100;
		Shader pUStack_f8;
		Matrix4x4 UStack_f0;
		Bounds UStack_b0;
		float fStack_98;
		float fStack_88;
		float fStack_84;
		byte[] auStack_78 = new byte[16];
		byte[] auStack_68 = new byte[16];
		float fStack_58;
		ulong uStack_48;

		pUStack_f8 = shader;
		fStack_98 = size;
		pUStack_110 = null;
		pUStack_150 = null;
		pSStack_138 = new Dictionary<Material, Material>();
		if ((hairSocket != null) &&(pSVar14 = hairSocket.GetComponentsInChildren<Renderer>(), pSVar14 != null)) {
			uVar25 = (uint)pSVar14.Length;
			if (0 < (int)uVar25) {
				fStack_88 = fStack_98;
				fStack_84 = fStack_98;
				uVar18 = 0;
				pSStack_108 = pSVar14;
				do {
					if (uVar25 <= (uint)uVar18) {
	label_05c46a54: ;
						throw new IndexOutOfRangeException();
					}
					__this_00 = (Renderer)pSVar14[(int)(uint)uVar18];
					if (__this_00 == null) goto label_05c46a4f;
					bVar12 = __this_00.enabled;
					if (bVar12) {
						pUVar15 = __this_00.gameObject;
						if (pUVar15 == null) goto label_05c46a4f;
						bVar12 = pUVar15.activeInHierarchy;
						if (bVar12) {
							pUVar16 = __this_00.klass;
							bVar2 = (pUVar16._2).typeHierarchyDepth;
							bVar3 = (typeof(SkinnedMeshRenderer)._2).typeHierarchyDepth;
							if ((bVar2 < bVar3) ||((pUVar16._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(SkinnedMeshRenderer))) {
								bVar3 = (typeof(MeshRenderer)._2).typeHierarchyDepth;
								if (bVar3 <= bVar2) {
	label_05c46077: ;
									if (((pUVar16._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(MeshRenderer)) &&(bVar12 = __this_00.TryGetComponent<MeshFilter>((object*)&pUStack_110))) {
										if (pUStack_110 != null) {
											pUVar17 = (Object)pUStack_110.sharedMesh;
											uVar4 = (typeof(Object)._2).cctor_finished_or_no_cctor;
											goto joined_r0x05c461ca;
										}
										goto label_05c46a4f;
									}
								}
	label_05c46200: ;
								pUVar17 = null;
								uVar4 = (typeof(Object)._2).cctor_finished_or_no_cctor;
							}
							else {
								pUVar17 = (Object)__this_00.sharedMesh;
								bVar12 = (pUVar17 != null);
								if (!bVar12) {
									pUVar16 = __this_00.klass;
									bVar3 = (typeof(MeshRenderer)._2).typeHierarchyDepth;
									if (bVar3 <= (pUVar16._2).typeHierarchyDepth) goto label_05c46077;
									goto label_05c46200;
								}
								pUVar17 = new Mesh();
								MiscExtensions.BakeLocalMesh((SkinnedMeshRenderer)__this_00, (Mesh)pUVar17);
								__this_01 = this._bakedMeshes;
								if (__this_01 == null) goto label_05c46a4f;
								piVar1 = &__this_01._version;
								*piVar1 = *piVar1 + 1;
								pUVar5 = __this_01._items;
								if (pUVar5 == null) goto label_05c46a4f;
								uVar25 = __this_01._size;
								if (uVar25 < (uint)pUVar5.Length) {
									__this_01._size = uVar25 + 1;
									pUVar5[(int)uVar25] = (Mesh)pUVar17;
									uVar4 = (typeof(Object)._2).cctor_finished_or_no_cctor;
								}
								else {
									__this_01.AddWithResize((object)pUVar17);
									uVar4 = (typeof(Object)._2).cctor_finished_or_no_cctor;
								}
							}
	joined_r0x05c461ca: ;
							if (uVar4 == 0) {
							}
							bVar12 = (pUVar17 == null);
							if (!bVar12) {
								uStack_100 = uVar18;
								materials = __this_00.sharedMaterials;
								if (materials == null) goto label_05c46a4f;
								targetAddress_00 = materials.m_Items;
								iVar22 = (int)materials.Length;
								uVar18 = materials.Length & 0xffffffff;
								if (pSStack_138 == null) {
									if (0 < iVar22) {
										uVar24 = 0;
										do {
											if (uVar18 <= uVar24) goto label_05c46a54;
											pUVar6 = targetAddress_00[uVar24];
											bVar12 = ((Object)pUVar6 == null);
											if (!bVar12) goto label_05c46a4f;
											uVar24 = uVar24 + 1;
											uVar25 = (uint)materials.Length;
											uVar18 = (ulong)uVar25;
										} while ((long)uVar24 < (long)(int)uVar25);
									}
								}
								else if (0 < iVar22) {
									uVar24 = 0;
									do {
										if (uVar18 <= uVar24) goto label_05c46a54;
										pUVar6 = *targetAddress_00;
										bVar12 = ((Object)pUVar6 == null);
										if (!bVar12) {
											bVar12 = pSStack_138.TryGetValue((object)pUVar6, (object*)&pUStack_150);
											pUVar19 = pUStack_150;
											if (!bVar12) {
												pUVar19 = new Material(pUVar6);
												if (pUVar19 == null) goto label_05c46a4f;
												pUVar19.shader = pUStack_f8;
												pUStack_150 = pUVar19;
												pSStack_138.Add((object)pUVar6, (object)pUVar19);
												__this_02 = this._materials;
												if (__this_02 == null) goto label_05c46a4f;
												piVar1 = &__this_02._version;
												*piVar1 = *piVar1 + 1;
												pUVar7 = __this_02._items;
												if (pUVar7 == null) goto label_05c46a4f;
												uVar25 = __this_02._size;
												if (uVar25 < (uint)pUVar7.Length) {
													__this_02._size = uVar25 + 1;
													pUVar7[(int)uVar25] = pUStack_150;
													pUVar19 = pUStack_150;
												}
												else {
													__this_02.AddWithResize((object)pUStack_150);
													pUVar19 = pUStack_150;
												}
											}
											pUStack_150 = pUVar19;
											if ((pUVar19 != null) &&(pIVar20 = il2cpp_vm_Object_IsInst((object)pUVar19, (((materials.obj).klass)._1).element_class), pIVar20 == null)) {
												pIVar20 = new ArrayTypeMismatchException();
												throw pIVar20;
											}
											if ((uint)materials.Length <= uVar24) goto label_05c46a54;
											*targetAddress_00 = pUVar19;
										}
										uVar24 = uVar24 + 1;
										uVar25 = (uint)materials.Length;
										uVar18 = (ulong)uVar25;
										targetAddress_00 = targetAddress_00 + 1;
									} while ((long)uVar24 < (long)(int)uVar25);
								}
								source = __this_00.transform;
								pUVar15 = __this_00.gameObject;
								if (pUVar15 == null) goto label_05c46a4f;
								iVar13 = pUVar15.layer;
								__this_04 = il2cpp_codegen_object_new(typeof(HaircutEffect.HairMesh)) ;
								__this_04 = new HaircutEffect.HairMesh(source, (Mesh)pUVar17, materials, iVar13);
								if (pUVar17 == null) goto label_05c46a4f;
								uVar25 = 0;
								UStack_f0 = pUVar17.bounds;
								fStack_130 = UStack_f0.m11 + UStack_f0.m11;
								fVar26 = fStack_130;
								if (fStack_130 <= 0.0001) {
									fVar26 = 0.0001;
								}
								fStack_58 = UStack_f0.m01 + UStack_f0.m01;
								auVar27._4_4_ = fStack_58;
								auVar27._0_4_ = UStack_f0.m30 + UStack_f0.m30;
								auVar27._8_8_ = 0;
								auVar27 = maxps(auVar27, _DAT_01005340);
								auStack_68 = divps(_DAT_01005870, auVar27);
								auStack_78 = ZEXT416((uint)(1.0 / fVar26));
								uStack_48 = CONCAT44(fStack_58, UStack_f0.m30 + UStack_f0.m30);
								do {
									while(true) {
										_auStack_148 = ZEXT416((uint)(((float)(uVar25 % 3) + 0.5) / 3.0));
										UStack_f0 = pUVar17.bounds;
										fStack_12c = UStack_f0.m00 - UStack_f0.m30;
										fStack_128 = UStack_f0.m10 - UStack_f0.m01;
										fVar26 = UStack_f0.m20 - UStack_f0.m11;
										fVar29 = ((float)(uVar25 / 6) + 0.5) * 0.5 * fStack_130;
										auVar28._0_4_ = (float)auStack_148._0_4_ * (float)uStack_48 + fStack_12c;
										auVar28._4_4_ = ((float)(uVar25 / 3 & 1) + 0.5) * 0.5 * fStack_58 + fStack_128;
										auVar28._8_4_ = auStack_148._4_4_;
										auVar28._12_4_ = 0;
										pUVar21 = new MaterialPropertyBlock();
										targetAddress = &__this_05.Properties;
										__this_05.Properties = pUVar21;
										__this_05 = new HaircutEffect.HairPiece();
										__this_05.Pivot.x = (float)auStack_148._0_4_;
										__this_05.Pivot.y = (float)auStack_148._4_4_;
										__this_05.Pivot.z = fVar29 + fVar26;
										UStack_f0 = __this_00.localToWorldMatrix;
										__this_05.Matrix.m03 = UStack_f0.m03;
										__this_05.Matrix.m13 = UStack_f0.m13;
										__this_05.Matrix.m23 = UStack_f0.m23;
										__this_05.Matrix.m33 = UStack_f0.m33;
										__this_05.Matrix.m02 = UStack_f0.m02;
										__this_05.Matrix.m12 = UStack_f0.m12;
										__this_05.Matrix.m22 = UStack_f0.m22;
										__this_05.Matrix.m32 = UStack_f0.m32;
										__this_05.Matrix.m01 = UStack_f0.m01;
										__this_05.Matrix.m11 = UStack_f0.m11;
										__this_05.Matrix.m21 = UStack_f0.m21;
										__this_05.Matrix.m31 = UStack_f0.m31;
										__this_05.Matrix.m00 = UStack_f0.m00;
										__this_05.Matrix.m10 = UStack_f0.m10;
										__this_05.Matrix.m20 = UStack_f0.m20;
										__this_05.Matrix.m30 = UStack_f0.m30;
										fVar26 = Random.Range(0.0, 0.35);
										__this_05.Delay = fVar26;
										auStack_148._0_4_ = Random.Range(-0.8, 0.8);
										auStack_148._4_4_ = extraout_XMM0_Db;
										fStack_128 = Random.Range(0.1, 0.5);
										fVar26 = Random.Range(-0.8, 0.8);
										__this_05.Velocity.x = (float)auStack_148._0_4_ * fStack_88;
										__this_05.Velocity.y = fStack_128 * fStack_84;
										__this_05.Velocity.z = fVar26 * fStack_98;
										UVar30 = Random.onUnitSphere;
										fStack_128 = UVar30.z;
										auStack_148 = (byte[])UVar30._0_8_;
										fVar26 = Random.Range(140.0, 320.0);
										__this_05.AngularVelocity.x = fVar26 * (float)auStack_148._0_4_;
										__this_05.AngularVelocity.y = fVar26 * (float)auStack_148._4_4_;
										__this_05.AngularVelocity.z = fStack_128 * fVar26;
										pUVar21 = __this_05.Properties;
										if (pUVar21 == null) goto label_05c46a4f;
										pUVar21.SetFloat(HaircutEffect.PieceId, (float)(int)uVar25);
										pUVar21 = *targetAddress;
										iVar13 = HaircutEffect.BoundsMinId;
										UStack_b0 = pUVar17.bounds;
										if (pUVar21 == null) goto label_05c46a4f;
										value.x = UStack_b0.m_Center.x - UStack_b0.m_Extents.x;
										value.y = UStack_b0.m_Center.y - UStack_b0.m_Extents.y;
										value.z = UStack_b0.m_Center.z - UStack_b0.m_Extents.z;
										value.w = 0.0;
										pUVar21.SetVector(iVar13, value) ;
										if (*targetAddress == null) goto label_05c46a4f;
										value_00.z = (float)auStack_78._0_4_;
										value_00.w = (float)auStack_78._4_4_;
										value_00.x = (float)auStack_68._0_4_;
										value_00.y = (float)auStack_68._4_4_;
										(*targetAddress).SetVector(HaircutEffect.BoundsInvSizeId, value_00);
										if ((__this_04 == null) ||(__this_03 = __this_04.Pieces, __this_03 == null)) goto label_05c46a4f;
										piVar1 = &__this_03._version;
										*piVar1 = *piVar1 + 1;
										pCVar8 = __this_03._items;
										if (pCVar8 == null) goto label_05c46a4f;
										uVar23 = __this_03._size;
										if ((uint)pCVar8.Length <= uVar23) break;
										__this_03._size = uVar23 + 1;
										pCVar8[(int)uVar23] = __this_05;
										uVar25 = uVar25 + 1;
										if (uVar25 == 0xc) goto label_05c46954;
									}
									__this_03.AddWithResize((object)__this_05);
									uVar25 = uVar25 + 1;
								} while (uVar25 != 0xc);
	label_05c46954: ;
								uVar18 = uStack_100;
								pSVar14 = pSStack_108;
								pSVar9 = this._meshes;
								if (pSVar9 == null) goto label_05c46a4f;
								piVar1 = &pSVar9._version;
								*piVar1 = *piVar1 + 1;
								pCVar10 = pSVar9._items;
								if (pCVar10 == null) goto label_05c46a4f;
								uVar25 = pSVar9._size;
								if (uVar25 < (uint)pCVar10.Length) {
									pSVar9._size = uVar25 + 1;
									pCVar10[(int)uVar25] = __this_04;
								}
								else {
									pSVar9.AddWithResize((object)__this_04);
								}
							}
						}
					}
					uVar23 = (int)uVar18 + 1;
					uVar18 = (ulong)uVar23;
					uVar25 = (uint)pSVar14.Length;
				} while ((int)uVar23 < (int)uVar25);
			}
			pSVar9 = this._meshes;
			if (pSVar9 != null) {
				if (pSVar9._size == 0) {
					pUVar17 = (Object)this.gameObject;
					Object.Destroy(pUVar17);
				}
				return;
			}
		}
	label_05c46a4f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004558")]
	[Address(RVA = "0x5B46BB0", Offset = "0x5B45BB0", VA = "0x5B46BB0")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Characters/HaircutEffect.c (Characters.HaircutEffect$$LateUpdate): 130 lines keep C-only constructs
		List<HaircutEffect.HairMesh> __this_00;
		Il2CppClass pIVar1;
		sbyte pcVar3;
		Material material;
		Matrix4x4 matrix;
		object pIVar4;
		object pIVar5;
		bool bVar6;
		int iVar7;
		Object pUVar8;
		ulong uVar9;
		int iVar10;
		Mesh pUVar11;
		float fVar12;
		float fVar13;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		float fVar14;
		float fVar15;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		float fVar16;
		float fVar17;
		float fVar18;
		float fVar19;
		uint uVar20;
		uint uVar21;
		float fVar22;
		float fVar23;
		float fVar24;
		float fVar25;
		float fVar26;
		float fVar27;
		float fVar28;
		float fVar29;
		float fVar30;
		float fVar31;
		float fVar32;
		float fVar33;
		float fVar34;
		float fVar35;
		float fVar36;
		float fVar37;
		float fVar38;
		float fVar39;
		float fVar40;
		float fVar41;
		float fVar42;
		float fVar43;
		Quaternion UVar44;
		Vector3 UVar45;
		ulong uStack_318;
		ulong uStack_310;
		ulong uStack_308;
		ulong uStack_300;
		ulong uStack_2f8;
		ulong uStack_2f0;
		byte[] auStack_2e8 = new byte[8];
		ulong uStack_2e0;
		System_Collections_Generic_List_Enumerator_object__o SStack_298;
		System_Collections_Generic_List_Enumerator_object__o SStack_278;
		byte[] auStack_258 = new byte[8];
		float fStack_250;
		float fStack_24c;
		byte[] auStack_248 = new byte[8];
		float fStack_240;
		float fStack_23c;
		float fStack_238;
		float fStack_234;
		float fStack_230;
		float fStack_22c;
		ulong uStack_228;
		ulong uStack_220;
		byte[] auStack_218 = new byte[16];
		ulong uStack_208;
		byte[] auStack_1f8 = new byte[16];
		ulong uStack_1e8;
		ulong uStack_1e0;
		byte[] auStack_1d8 = new byte[8];
		float fStack_1d0;
		float fStack_1cc;
		byte[] auStack_1c8 = new byte[16];
		byte[] auStack_1b8 = new byte[16];
		ulong uStack_1a8;
		ulong uStack_1a0;
		Vector3 UStack_198;
		Vector3 UStack_188;
		Vector3 UStack_178;
		byte[] auStack_168 = new byte[16];
		ulong uStack_158;
		float fStack_150;
		float fStack_14c;
		byte[] auStack_108 = new byte[64];
		Quaternion UStack_c8;
		System_Collections_Generic_List_Enumerator_T__o[] aSStack_b8 = new System_Collections_Generic_List_Enumerator_T__o[3];
		List<T>[] apSStack_70 = new List<T>[2];
		object pIStack_60;
		ulong uStack_58;
		float fStack_50;
		float fStack_4c;
		ulong uStack_48;
		ulong uStack_40;
		float fStack_38;
		float fStack_34;

		SStack_278._list = null;
		SStack_278._index = 0;
		SStack_278._version = 0;
		SStack_278._current = null;
		SStack_298._list = null;
		SStack_298._index = 0;
		SStack_298._version = 0;
		SStack_298._current = null;
		fVar13 = this._age;
		fVar12 = Time.deltaTime;
		fVar12 = fVar12 + fVar13;
		this._age = fVar12;
		if (1.45 <= fVar12) {
			pUVar8 = (Object)this.gameObject;
			Object.Destroy(pUVar8);
			return;
		}
		__this_00 = this._meshes;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		auStack_108.GetEnumerator((List<object>)__this_00);
		SStack_278._current = (object)auStack_108._16_8_;
		SStack_278._list = (List<T>)auStack_108._0_8_;
		SStack_278._index = auStack_108._8_4_;
		SStack_278._version = auStack_108._12_4_;
		do {
			bVar6 = SStack_278.MoveNext();
			pIVar5 = SStack_278._current;
			if (!bVar6) {
				SStack_278.Dispose();
				return;
			}
			if (SStack_278._current == null) {
				throw new NullReferenceException();
			}
			if (SStack_278._current[3].klass == null) {
				throw new NullReferenceException();
			}
			aSStack_b8.GetEnumerator((List<object>)SStack_278._current[3].klass);
			SStack_298._current = aSStack_b8[0]._current;
			SStack_298._list = aSStack_b8[0]._list;
			SStack_298._index = aSStack_b8[0]._index;
			SStack_298._version = aSStack_b8[0]._version;
			while (true) {
				bVar6 = SStack_298.MoveNext();
				pIVar4 = SStack_298._current;
				if (!(bVar6)) break;
				if (SStack_298._current == null) {
					throw new NullReferenceException();
				}
				fVar12 = this._age - *(float)((long)&SStack_298._current[7].klass + 4);
				fVar13 = 0.0;
				if (0.0 <= fVar12) {
					fVar13 = fVar12;
				}
				if (fVar13 < 1.1) {
					if (*(sbyte)&SStack_298._current[7].monitor == false) {
						pIVar1 = pIVar5[1].klass;
						bVar6 = ((Object)pIVar1 != null);
						if (bVar6) {
							if (pIVar5[1].klass == null) {
								throw new NullReferenceException();
							}
							apSStack_70.get_localToWorldMatrix((Transform)pIVar5[1].klass);
							aSStack_b8[2]._list = (List<T>)uStack_40;
							aSStack_b8[2]._index = (int32_t)fStack_38;
							aSStack_b8[2]._version = (int32_t)fStack_34;
							aSStack_b8[1]._index = (int32_t)fStack_50;
							aSStack_b8[1]._version = (int32_t)fStack_4c;
							aSStack_b8[1]._current = (object)uStack_48;
							aSStack_b8[0]._current = pIStack_60;
							aSStack_b8[1]._list = (List<T>)uStack_58;
							aSStack_b8[0]._list = apSStack_70[0];
							aSStack_b8[0]._8_8_ = apSStack_70[1];
							*(ulong)((long)&pIVar4[6].klass + 4) = uStack_40;
							*(ulong)((long)&pIVar4[6].monitor + 4) = _fStack_38;
							*(ulong)((long)&pIVar4[5].klass + 4) = _fStack_50;
							*(ulong)((long)&pIVar4[5].monitor + 4) = uStack_48;
							*(object*)((long)&pIVar4[4].klass + 4) = pIStack_60;
							*(ulong)((long)&pIVar4[4].monitor + 4) = uStack_58;
							*(List<T>*)((long)&pIVar4[3].klass + 4) = apSStack_70[0];
							*(List<T>*)((long)&pIVar4[3].monitor + 4) = apSStack_70[1];
						}
						*(bool)&pIVar4[7].monitor = *(float)((long)&pIVar4[7].klass + 4) <= this._age;
					}
					fVar17 = SUB84(pIVar4[1].klass, 0);
					fVar19 = (float)((ulong)pIVar4[1].klass >> 0x20);
					fVar12 = *(float)&pIVar4[1].monitor;
					uStack_1e8 = *(ulong)((long)&pIVar4[3].klass + 4);
					uStack_1e0 = 0;
					auStack_1d8 = (byte[])*(ulong)((long)&pIVar4[4].klass + 4);
					uStack_1a8 = *(ulong)((long)&pIVar4[6].klass + 4);
					uStack_1a0 = 0;
					auStack_1b8 = ZEXT416(*(uint)((long)&pIVar4[5].klass + 4));
					auStack_1c8 = ZEXT416(*(uint)&pIVar4[5].monitor);
					auStack_168 = ZEXT416((uint)(*(float)((long)&pIVar4[5].monitor + 4) * fVar12 + *(float)((long)&pIVar4[4].monitor + 4) * fVar19 + *(float)((long)&pIVar4[3].monitor + 4) * fVar17 + *(float)((long)&pIVar4[6].monitor + 4)));
					auStack_1f8._8_8_ = 0;
					auStack_1f8._0_8_ = *(ulong)((long)&pIVar4[1].monitor + 4);
					fVar15 = *(float)((long)&pIVar4[2].klass + 4);
					UVar45 = Physics.gravity;
					_fStack_238 = CONCAT44(fStack_234, UVar45.z);
					auStack_218._8_4_ = extraout_XMM0_Dc;
					auStack_218._0_8_ = UVar45._0_8_;
					auStack_218._12_4_ = extraout_XMM0_Dd;
					uStack_208 = (ulong)(uint)(fVar13 * 0.5);
					uVar20 = 0;
					uVar21 = 0;
					uStack_228 = CONCAT44(fVar13, fVar13);
					uStack_220 = CONCAT44(fVar13, fVar13);
					UStack_198.z = *(float)&pIVar4[3].klass * fVar13 * 0.017453292;
					UStack_198.y = (float)((ulong)pIVar4[2].monitor >> 0x20) * fVar13 * 0.017453292;
					UStack_198.x = SUB84(pIVar4[2].monitor, 0) * fVar13 * 0.017453292;
					UVar44 = Quaternion.Internal_FromEulerRad(ref UStack_198);
					fStack_250 = (float)uVar20;
					auStack_258 = (byte[])UVar44._8_8_;
					fStack_24c = (float)uVar21;
					fStack_240 = (float)extraout_XMM0_Dc_00;
					auStack_248 = (byte[])UVar44._0_8_;
					fStack_23c = (float)extraout_XMM0_Dd_00;
					uStack_1a8._0_4_ =(float)uStack_1a8 + fVar12 * (float)auStack_1b8._0_4_ + fVar19 * (float)auStack_1d8._0_4_ + fVar17 * (float)uStack_1e8;
					uStack_1a8._4_4_ = uStack_1a8._4_4_ +(float)auStack_1c8._0_4_ * fVar12 + fVar19 * (float)auStack_1d8._4_4_ + fVar17 * uStack_1e8._4_4_ ;
					fVar12 = (float)uStack_208 * fVar13;
					uStack_1a0 = CONCAT44(uStack_1a0._4_4_ +(float)auStack_1c8._4_4_ * 0.0 + fVar19 * fStack_1cc + fVar17 * uStack_1e0._4_4_, (float)uStack_1a0 +(float)auStack_1b8._4_4_ * 0.0 + fVar19 * fStack_1d0 + fVar17 * (float)uStack_1e0);
					UStack_188.x = (Vector3.oneVector).x;
					UStack_188.y = (Vector3.oneVector).y;
					UStack_188.z = (Vector3.oneVector).z;
					UStack_178.y = fVar12 * (float)auStack_218._4_4_ + uStack_228._4_4_ * (float)auStack_1f8._4_4_ + uStack_1a8._4_4_;
					UStack_178.x = fVar12 * (float)auStack_218._0_4_ + (float)uStack_228 * (float)auStack_1f8._0_4_ +(float)uStack_1a8;
					UStack_178.z = fVar15 * fVar13 + fStack_238 * fVar12 + (float)auStack_168._0_4_;
					UStack_c8.z = auStack_258._0_4_;
					UStack_c8.w = auStack_258._4_4_;
					UStack_c8.x = (float)auStack_248._0_4_;
					UStack_c8.y = (float)auStack_248._4_4_;
					Matrix4x4.Internal_TRS((Matrix4x4)auStack_108, ref UStack_178, ref UStack_c8, ref UStack_188);
					auStack_258 = (byte[])auStack_108._0_8_;
					uStack_158 = (object)auStack_108._16_8_;
					fStack_150 = (float)auStack_108._24_4_;
					fStack_14c = (float)auStack_108._28_4_;
					auStack_248 = (byte[])auStack_108._32_8_;
					fStack_238 = (float)auStack_108._48_4_;
					fStack_234 = (float)auStack_108._52_4_;
					fStack_230 = (float)auStack_108._56_4_;
					fStack_22c = (float)auStack_108._60_4_;
					uStack_228 = *(ulong)((long)&pIVar4[3].klass + 4);
					auStack_218 = ZEXT416(*(uint)((long)&pIVar4[3].monitor + 4));
					fVar12 = *(float)&pIVar4[4].klass;
					uStack_208 = *(ulong)((long)&pIVar4[4].klass + 4);
					auStack_1f8 = ZEXT416(*(uint)((long)&pIVar4[4].monitor + 4));
					fVar15 = *(float)&pIVar4[5].klass;
					uStack_1e8 = *(ulong)((long)&pIVar4[5].klass + 4);
					uStack_1e0 = 0;
					_auStack_1d8 = ZEXT416(*(uint)((long)&pIVar4[5].monitor + 4));
					fVar17 = *(float)&pIVar4[6].klass;
					auStack_1c8._8_8_ = 0;
					auStack_1c8._0_8_ = *(ulong)((long)&pIVar4[6].klass + 4);
					auStack_1b8 = ZEXT416(*(uint)((long)&pIVar4[6].monitor + 4));
					fVar19 = *(float)&pIVar4[7].klass;
					pIVar1 = pIVar4[8].klass;
					if (pIVar1 == null) {
						throw new NullReferenceException();
					}
					fVar18 = (fVar13 + -0.85) * 4.0;
					fVar13 = 1.0;
					if (fVar18 <= 1.0) {
						fVar13 = fVar18;
					}
					pIVar1.SetFloat(HaircutEffect.FadeId, (float)(-(uint)(0.0 <= fVar18) & (uint)fVar13));
					pUVar11 = pIVar5[1].monitor;
					if (pUVar11 == null) {
	label_05c476b3: ;
						throw new NullReferenceException();
					}
					fVar26 = fStack_238 * 0.0;
					fVar28 = fStack_234 * 0.0;
					fVar30 = fStack_230 * 0.0;
					fVar32 = fStack_22c * 0.0;
					fVar22 = (float)auStack_258._0_4_ * 0.0 + (float)uStack_158 + (float)auStack_248._0_4_ * 0.0 + fVar26;
					fVar23 = uStack_158._4_4_ * 0.0 + (float)auStack_258._4_4_ + (float)auStack_248._4_4_ * 0.0 + fVar28;
					fVar24 = fStack_250 * 0.0 + fStack_150 + fStack_240 * 0.0 + fVar30;
					fVar25 = fStack_14c * 0.0 + fStack_24c + fStack_23c * 0.0 + fVar32;
					fVar13 = (float)auStack_258._0_4_ + (float)uStack_158 * 0.0 + (float)auStack_248._0_4_ * 0.0 + fVar26;
					fVar18 = uStack_158._4_4_ + (float)auStack_258._4_4_ * 0.0 + (float)auStack_248._4_4_ * 0.0 + fVar28;
					fVar14 = fStack_250 + fStack_150 * 0.0 + fStack_240 * 0.0 + fVar30;
					fVar16 = fStack_14c + fStack_24c * 0.0 + fStack_23c * 0.0 + fVar32;
					fVar26 = (float)uStack_158 * 0.0 + (float)auStack_258._0_4_ * 0.0 + (float)auStack_248._0_4_ + fVar26;
					fVar28 = (float)auStack_258._4_4_ * 0.0 + uStack_158._4_4_ * 0.0 + (float)auStack_248._4_4_ + fVar28;
					fVar30 = fStack_150 * 0.0 + fStack_250 * 0.0 + fStack_240 + fVar30;
					fVar32 = fStack_24c * 0.0 + fStack_14c * 0.0 + fStack_23c + fVar32;
					fVar27 = ((-uStack_1a8._4_4_ * (float)uStack_158 - (float)uStack_1a8 * (float)auStack_258._0_4_) -(float)auStack_168._0_4_ * (float)auStack_248._0_4_) + fStack_238;
					fVar29 = ((-uStack_1a8._4_4_ * uStack_158._4_4_ - (float)uStack_1a8 * (float)auStack_258._4_4_) -(float)auStack_168._0_4_ * (float)auStack_248._4_4_) + fStack_234;
					fVar31 = ((-uStack_1a8._4_4_ * fStack_150 - (float)uStack_1a8 * fStack_250) -(float)auStack_168._0_4_ * fStack_240) + fStack_230;
					fVar33 = ((-uStack_1a8._4_4_ * fStack_14c - (float)uStack_1a8 * fStack_24c) -(float)auStack_168._0_4_ * fStack_23c) + fStack_22c;
					auStack_2e8._0_4_ = fVar12 * fVar27 +(float)auStack_218._0_4_ * fVar26 + (float)uStack_228 * fVar13 + uStack_228._4_4_ * fVar22;
					auStack_2e8._4_4_ = fVar12 * fVar29 +(float)auStack_218._0_4_ * fVar28 + uStack_228._4_4_ * fVar18 + (float)uStack_228 * fVar23;
					fVar38 = fVar12 * fVar31 +(float)auStack_218._0_4_ * fVar30 + (float)uStack_228 * fVar14 + uStack_228._4_4_ * fVar24;
					fVar41 = fVar12 * fVar33 +(float)auStack_218._0_4_ * fVar32 + uStack_228._4_4_ * fVar16 + (float)uStack_228 * fVar25;
					uStack_2e0._0_4_ = fVar38;
					uStack_2e0._4_4_ = fVar41;
					fVar34 = fVar15 * fVar27 +(float)auStack_1f8._0_4_ * fVar26 + (float)uStack_208 * fVar13 + uStack_208._4_4_ * fVar22;
					fVar36 = fVar15 * fVar29 +(float)auStack_1f8._0_4_ * fVar28 + uStack_208._4_4_ * fVar18 + (float)uStack_208 * fVar23;
					fVar39 = fVar15 * fVar31 +(float)auStack_1f8._0_4_ * fVar30 + (float)uStack_208 * fVar14 + uStack_208._4_4_ * fVar24;
					fVar42 = fVar15 * fVar33 +(float)auStack_1f8._0_4_ * fVar32 + uStack_208._4_4_ * fVar16 + (float)uStack_208 * fVar25;
					uStack_2f8 = CONCAT44(fVar36, fVar34);
					uStack_2f0._0_4_ = fVar39;
					uStack_2f0._4_4_ = fVar42;
					fVar35 = fVar17 * fVar27 +(float)auStack_1d8._0_4_ * fVar26 + (float)uStack_1e8 * fVar13 + uStack_1e8._4_4_ * fVar22;
					fVar37 = fVar17 * fVar29 +(float)auStack_1d8._0_4_ * fVar28 + uStack_1e8._4_4_ * fVar18 + (float)uStack_1e8 * fVar23;
					fVar40 = fVar17 * fVar31 +(float)auStack_1d8._0_4_ * fVar30 + (float)uStack_1e8 * fVar14 + uStack_1e8._4_4_ * fVar24;
					fVar43 = fVar17 * fVar33 +(float)auStack_1d8._0_4_ * fVar32 + uStack_1e8._4_4_ * fVar16 + (float)uStack_1e8 * fVar25;
					uStack_308 = CONCAT44(fVar37, fVar35);
					uStack_300._0_4_ = fVar40;
					uStack_300._4_4_ = fVar43;
					fVar13 = fVar19 * fVar27 +(float)auStack_1b8._0_4_ * fVar26 +(float)auStack_1c8._0_4_ * fVar13 + (float)auStack_1c8._4_4_ * fVar22;
					fVar12 = fVar19 * fVar29 +(float)auStack_1b8._0_4_ * fVar28 +(float)auStack_1c8._4_4_ * fVar18 + (float)auStack_1c8._0_4_ * fVar23;
					fVar15 = fVar19 * fVar31 +(float)auStack_1b8._0_4_ * fVar30 +(float)auStack_1c8._0_4_ * fVar14 + (float)auStack_1c8._4_4_ * fVar24;
					fVar17 = fVar19 * fVar33 +(float)auStack_1b8._0_4_ * fVar32 +(float)auStack_1c8._4_4_ * fVar16 + (float)auStack_1c8._0_4_ * fVar25;
					uStack_318 = CONCAT44(fVar12, fVar13);
					uStack_310._0_4_ = fVar15;
					uStack_310._4_4_ = fVar17;
					uVar9 = 0;
					while(true) {
						iVar7 = pUVar11.subMeshCount;
						pIVar1 = pIVar5[2].klass;
						if (pIVar1 == null) {
							throw new NullReferenceException();
						}
						pcVar3 = (pIVar1._1).namespaze;
						iVar10 = (int)pcVar3;
						if (iVar7 < iVar10) {
							iVar10 = iVar7;
						}
						if ((long)iVar10 <= (long)uVar9) break;
						if (((ulong)pcVar3 & 0xffffffff) <= uVar9) {
							throw new IndexOutOfRangeException();
						}
						pUVar8 = *(Object*)((long)pIVar1.vtable + uVar9 * 8 + -0x118);
						bVar6 = (pUVar8 != null);
						if (bVar6) {
							pIVar1 = pIVar5[2].klass;
							if (pIVar1 == null) {
								throw new NullReferenceException();
							}
							if (*(uint)&(pIVar1._1).namespaze <= uVar9) {
								throw new IndexOutOfRangeException();
							}
							pUVar11 = pIVar5[1].monitor;
							material = *(Material*)((long)pIVar1.vtable + uVar9 * 8 + -0x118);
							iVar7 = *(int)&pIVar5[2].monitor;
							pIVar1 = pIVar4[8].klass;
							matrix.m01 = fVar34;
							matrix.m00 = (float)auStack_2e8._0_4_;
							matrix.m10 = (float)auStack_2e8._4_4_;
							matrix.m20 = fVar38;
							matrix.m30 = fVar41;
							matrix.m11 = fVar36;
							matrix.m21 = fVar39;
							matrix.m31 = fVar42;
							matrix.m02 = fVar35;
							matrix.m12 = fVar37;
							matrix.m22 = fVar40;
							matrix.m32 = fVar43;
							matrix.m03 = fVar13;
							matrix.m13 = fVar12;
							matrix.m23 = fVar15;
							matrix.m33 = fVar17;
							Graphics.DrawMesh(pUVar11, matrix, material, iVar7, null, (int32_t)uVar9, (MaterialPropertyBlock)pIVar1, 0, true, null, 0);
						}
						uVar9 = uVar9 + 1;
						pUVar11 = pIVar5[1].monitor;
						if (pUVar11 == null) goto label_05c476b3;
					}
				}
			}
			SStack_298.Dispose();
		} while(true);
	}

	[Token(Token = "0x6004559")]
	[Address(RVA = "0x5B47860", Offset = "0x5B46860", VA = "0x5B47860")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Characters/HaircutEffect.c (Characters.HaircutEffect$$OnDestroy): 8 lines keep C-only constructs
		List<Material> __this_00;
		List<Mesh> __this_01;
		object obj;
		Object obj_00;
		bool bVar1;
		byte[] local_80 = new byte[16];
		Object local_70;
		System_Collections_Generic_List_Enumerator_T__o local_68;
		byte[] local_48 = new byte[16];
		Object local_38;

		if (Il2CppMethodInitialized_07547831 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_GetEnumerator) ;
			Il2CppMethodInitialized_07547831 = true;
		}
		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		__this_00 = this._materials;
		if (__this_00 != null) {
			local_80.GetEnumerator((List<object>)__this_00);
			local_38 = local_70;
			local_48._0_8_ = local_80._0_8_;
			local_48._8_8_ = local_80._8_8_;
			local_80._0_8_ = null;
			local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_48;
			while(true) {
				bVar1 = local_48.MoveNext();
				obj_00 = local_38;
				if (!bVar1) break;
				Object.Destroy(obj_00);
			}
			local_48.Dispose();
			__this_01 = this._bakedMeshes;
			if (__this_01 != null) {
				local_68 = __this_01.GetEnumerator();
				local_80._0_8_ = null;
				local_80._8_8_ = &local_68;
				while(true) {
					bVar1 = local_68.MoveNext();
					obj = local_68._current;
					if (!bVar1) break;
					Object.Destroy((Object)obj);
				}
				local_68.Dispose();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600455A")]
	[Address(RVA = "0x5B47B00", Offset = "0x5B46B00", VA = "0x5B47B00")]
	public HaircutEffect()
	{
		// Lifted from source/cpp/Characters/HaircutEffect.c (Characters.HaircutEffect$$.ctor): clean
		List<HaircutEffect.HairMesh> __this_00;
		List<Material> __this_01;
		List<Mesh> __this_02;

		__this_00 = new List<HaircutEffect.HairMesh>();
		this._meshes = __this_00;
		__this_01 = new List<Material>();
		this._materials = __this_01;
		__this_02 = new List<Mesh>();
		this._bakedMeshes = __this_02;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/HaircutEffect.c.

	// Characters.HaircutEffect$$.cctor: clean
	static HaircutEffect()
	{
		int iVar1;

		iVar1 = Shader.PropertyToID("_Piece");
		HaircutEffect.PieceId = iVar1;
		iVar1 = Shader.PropertyToID("_Fade");
		HaircutEffect.FadeId = iVar1;
		iVar1 = Shader.PropertyToID("_BoundsMin");
		HaircutEffect.BoundsMinId = iVar1;
		iVar1 = Shader.PropertyToID("_BoundsInvSize");
		HaircutEffect.BoundsInvSizeId = iVar1;
		return;
	}
}
