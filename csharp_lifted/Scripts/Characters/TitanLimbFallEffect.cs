// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanLimbFallEffect
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/TitanLimbFallEffect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000723")]
internal sealed class TitanLimbFallEffect : MonoBehaviour
{
	[Token(Token = "0x2000724")]
	private sealed class Attachment : IDisposable
	{
		[Token(Token = "0x40023AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly Mesh Mesh;

		[Token(Token = "0x40023AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly Matrix4x4 Matrix;

		[Token(Token = "0x40023AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public readonly List<Material> Materials;

		[Token(Token = "0x40023AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public readonly MaterialPropertyBlock Properties;

		[Token(Token = "0x40023B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private readonly bool _ownsMesh;

		[Token(Token = "0x600458B")]
		[Address(RVA = "0x5B51630", Offset = "0x5B50630", VA = "0x5B51630")]
		public Attachment(Mesh mesh, Matrix4x4 matrix, bool ownsMesh)
		{
			// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect.Attachment$$.ctor): clean
			List<Material> __this_00;
			MaterialPropertyBlock __this_01;

			__this_00 = new List<Material>();
			this.Materials = __this_00;
			__this_01 = new MaterialPropertyBlock();
			this.Properties = __this_01;
			base();
			this.Mesh = mesh;
			this.Matrix.m03 = matrix.m03;
			this.Matrix.m13 = matrix.m13;
			this.Matrix.m23 = matrix.m23;
			this.Matrix.m33 = matrix.m33;
			this.Matrix.m02 = matrix.m02;
			this.Matrix.m12 = matrix.m12;
			this.Matrix.m22 = matrix.m22;
			this.Matrix.m32 = matrix.m32;
			this.Matrix.m01 = matrix.m01;
			this.Matrix.m11 = matrix.m11;
			this.Matrix.m21 = matrix.m21;
			this.Matrix.m31 = matrix.m31;
			this.Matrix.m00 = matrix.m00;
			this.Matrix.m10 = matrix.m10;
			this.Matrix.m20 = matrix.m20;
			this.Matrix.m30 = matrix.m30;
			this._ownsMesh = ownsMesh;
			return;
		}

		[Token(Token = "0x600458C")]
		[Address(RVA = "0x5B53390", Offset = "0x5B52390", VA = "0x5B53390", Slot = "4")]
		public void Dispose()
		{
			// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect.Attachment$$Dispose): 2 lines keep C-only constructs
			Object obj;
			List<Material> __this_00;
			object obj_00;
			bool bVar1;
			System_Collections_Generic_List_Enumerator_T__o local_48;
			byte local_28;

			local_48._list = null;
			local_48._index = 0;
			local_48._version = 0;
			local_48._current = null;
			if (this._ownsMesh != false) {
				obj = (Object)this.Mesh;
				Object.Destroy(obj);
			}
			__this_00 = this.Materials;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			local_48 = __this_00.GetEnumerator();
			local_28 = (byte)&local_48;
			while(true) {
				bVar1 = local_48.MoveNext();
				obj_00 = local_48._current;
				if (!bVar1) break;
				Object.Destroy((Object)obj_00);
			}
			local_48.Dispose();
			return;
		}
	}

	[Token(Token = "0x400237A")]
	private const int MaxPieces = 24;

	[Token(Token = "0x400237B")]
	private const float DissolveDelay = 5f;

	[Token(Token = "0x400237C")]
	private const float DissolveDuration = 3f;

	[Token(Token = "0x400237D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Vector3 Gravity;

	[Token(Token = "0x400237E")]
	private const float SettleDuration = 0.25f;

	[Token(Token = "0x400237F")]
	private const float SteamLifetime = 1.3f;

	[Token(Token = "0x4002380")]
	private const float MinOutwardSpeed = 10f;

	[Token(Token = "0x4002381")]
	private const float MaxOutwardSpeed = 16f;

	[Token(Token = "0x4002382")]
	private const float MaxSidewaysSpeed = 1.5f;

	[Token(Token = "0x4002383")]
	private const float MaxUpwardSpeed = 6f;

	[Token(Token = "0x4002384")]
	private const float GroundLaunchDistance = 2f;

	[Token(Token = "0x4002385")]
	private const float MinGroundUpwardSpeed = 8f;

	[Token(Token = "0x4002386")]
	private const float MaxGroundUpwardSpeed = 10f;

	[Token(Token = "0x4002387")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	internal static readonly int GroundMask;

	[Token(Token = "0x4002388")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly List<TitanLimbFallEffect> Pool;

	[Token(Token = "0x4002389")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly int Dissolve;

	[Token(Token = "0x400238A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Shader _shader;

	[Token(Token = "0x400238B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<Material> _materials;

	[Token(Token = "0x400238C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<Material> _growthMaterials;

	[Token(Token = "0x400238D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly List<Material> _tissueMaterials;

	[Token(Token = "0x400238E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly List<Material> _sourceMaterials;

	[Token(Token = "0x400238F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly List<Vector3> _vertices;

	[Token(Token = "0x4002390")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly List<Vector3> _supportVertices;

	[Token(Token = "0x4002391")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly List<Vector2> _growthCoordinates;

	[Token(Token = "0x4002392")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly List<int> _indices;

	[Token(Token = "0x4002393")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly List<Attachment> _attachments;

	[Token(Token = "0x4002394")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private MaterialPropertyBlock _properties;

	[Token(Token = "0x4002395")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private MaterialPropertyBlock _growthProperties;

	[Token(Token = "0x4002396")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Mesh _mesh;

	[Token(Token = "0x4002397")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Mesh _growthMesh;

	[Token(Token = "0x4002398")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Mesh _tissueMesh;

	[Token(Token = "0x4002399")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private ParticleSystem _steam;

	[Token(Token = "0x400239A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private ParticleSystem _blood;

	[Token(Token = "0x400239B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private float _dissolveDelay;

	[Token(Token = "0x400239C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA4")]
	private Matrix4x4 _meshOffset;

	[Token(Token = "0x400239D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE4")]
	private Vector3 _origin;

	[Token(Token = "0x400239E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Vector3 _velocity;

	[Token(Token = "0x400239F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xFC")]
	private Vector3 _angularVelocity;

	[Token(Token = "0x40023A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private Vector3 _restNormal;

	[Token(Token = "0x40023A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x114")]
	private Vector3 _groundPoint;

	[Token(Token = "0x40023A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private Vector3 _groundNormal;

	[Token(Token = "0x40023A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x12C")]
	private Quaternion _landingRotation;

	[Token(Token = "0x40023A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x13C")]
	private Quaternion _restRotation;

	[Token(Token = "0x40023A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14C")]
	private float _radius;

	[Token(Token = "0x40023A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private float _groundAge;

	[Token(Token = "0x40023A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x154")]
	private float _age;

	[Token(Token = "0x40023A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private int _layer;

	[Token(Token = "0x40023A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x15C")]
	private bool _hasGrowth;

	[Token(Token = "0x40023AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x15D")]
	private bool _receiveShadows;

	[Token(Token = "0x40023AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x15E")]
	private bool _landed;

	[Token(Token = "0x6004575")]
	[Address(RVA = "0x5B4D460", Offset = "0x5B4C460", VA = "0x5B4D460")]
	public static void PlayHead(SkinnedMeshRenderer source, Transform head, Vector3 velocity, ParticleSystem neckBlood, float dissolveDelay)
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$PlayHead): clean
		bool bVar1;
		Mesh limb;
		TitanLimbFallEffect __this;

		if (source == null) {
	label_05c4d581: ;
			throw new NullReferenceException();
		}
		limb = source.sharedMesh;
		__this = TitanLimbFallEffect.Play(source, limb, null, null, 0.0, velocity, head);
		bVar1 = ((Object)__this == null);
		if (!bVar1) {
			if (__this == null) goto label_05c4d581;
			__this._dissolveDelay = dissolveDelay;
			bVar1 = ((Object)neckBlood != null);
			if (bVar1) {
				__this.PlayBlood(neckBlood, head);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004576")]
	[Address(RVA = "0x5B4D590", Offset = "0x5B4C590", VA = "0x5B4D590")]
	public static TitanLimbFallEffect Play(SkinnedMeshRenderer source, Mesh limb, Material wound, Mesh growth, float progress, Vector3 velocity, [Optional] Transform attachments)
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$Play): 3 lines keep C-only constructs
		List<TitanLimbFallEffect> pSVar2;
		object @object;
		bool bVar3;
		GameObject pUVar4;
		Shader pUVar5;
		Characters_TitanLimbFallEffect___c_StaticFields pCVar6;
		Predicate<T> match;
		TitanLimbFallEffect __this;
		Object pUVar7;
		MaterialPropertyBlock pUVar8;

		if (source != null) {
			bVar3 = source.enabled;
			if (!bVar3) {
				return null;
			}
			pUVar4 = source.gameObject;
			if (pUVar4 != null) {
				__this = null;
				bVar3 = pUVar4.activeInHierarchy;
				if (bVar3) {
					bVar3 = ((Object)limb == null);
					if (bVar3) {
						return null;
					}
					pUVar7 = (Object)TitanLimbFallEffect._shader;
					bVar3 = (pUVar7 == null);
					if (bVar3) {
						pUVar5 = BasicTitanComponentCache.LoadDissolveShader();
						TitanLimbFallEffect._shader = pUVar5;
					}
					pUVar7 = (Object)TitanLimbFallEffect._shader;
					bVar3 = (pUVar7 == null);
					if (bVar3) {
						return null;
					}
					pSVar2 = TitanLimbFallEffect.Pool;
					if ((typeof(TitanLimbFallEffect.c)._2).cctor_finished_or_no_cctor == 0) {
						pCVar6 = typeof(TitanLimbFallEffect.c).static_fields;
						match = (Predicate<T>)pCVar6.__9__51_0;
					}
					else {
						pCVar6 = typeof(TitanLimbFallEffect.c).static_fields;
						match = (Predicate<T>)pCVar6.__9__51_0;
					}
					if (match == null) {
						if (((typeof(TitanLimbFallEffect.c))._2).cctor_finished_or_no_cctor == 0 ) {
							pCVar6 = typeof(TitanLimbFallEffect.c).static_fields;
						}
						@object = (object)pCVar6.__9;
						match = new Predicate<TitanLimbFallEffect>(@object, (intptr_t)MethodInfo_Characters_TitanLimbFallEffect_c_Play_b__51_0);
						pCVar6 = typeof(TitanLimbFallEffect.c).static_fields;
						pCVar6.__9__51_0 = (Predicate<TitanLimbFallEffect>)match;
					}
					if (pSVar2 == null) goto label_05c4dae9;
					__this = pSVar2.Find(match);
					bVar3 = ((Object)__this == null);
					if (bVar3) {
						pSVar2 = TitanLimbFallEffect.Pool;
						if (pSVar2 == null) goto label_05c4dae9;
						if (0x17 < pSVar2._size) {
							return null;
						}
						pUVar4 = new GameObject("Falling titan limb");
						if (pUVar4 == null) goto label_05c4dae9;
						__this = pUVar4.AddComponent<TitanLimbFallEffect>();
						pUVar7 = (Object)il2cpp_codegen_object_new(typeof(Mesh)) ;
						pUVar7 = new Mesh();
						if ((pUVar7 == null) ||(pUVar7.name = "Falling titan limb", __this == null)) goto label_05c4dae9;
						__this._mesh = (Mesh)pUVar7;
						pUVar8 = new MaterialPropertyBlock();
						__this._properties = pUVar8;
						pUVar8 = new MaterialPropertyBlock();
						__this._growthProperties = pUVar8;
						pSVar2 = TitanLimbFallEffect.Pool;
						if (pSVar2 == null) goto label_05c4dae9;
						il2cpp_runtime_helper_02fd97e0(pSVar2, __this, MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Add);
					}
					else if (__this == null) goto label_05c4dae9;
					__this.Initialize(source, limb, wound, growth, progress, velocity, attachments);
					pUVar4 = __this.gameObject;
					if (pUVar4 == null) goto label_05c4dae9;
					pUVar4.SetActive(true);
				}
				return __this;
			}
		}
	label_05c4dae9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004577")]
	[Address(RVA = "0x5B4DAF0", Offset = "0x5B4CAF0", VA = "0x5B4DAF0")]
	private void PlayBlood(ParticleSystem neckBlood, Transform head)
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$PlayBlood): 52 lines keep C-only constructs
		ParticleSystem* targetAddress;
		bool bVar2;
		GameObject pUVar3;
		Transform pUVar4;
		ParticleSystem pUVar5;
		Transform pUVar6;
		float fVar7;
		float fVar8;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		float fVar9;
		float in_XMM1_Db;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		Quaternion UVar14;
		Vector3 UVar15;
		Vector3 UStack_98;
		float fStack_8c;
		byte[] auStack_88 = new byte[8];
		float fStack_80;
		float fStack_7c;
		byte[] auStack_78 = new byte[8];
		float fStack_70;
		float fStack_6c;
		Vector3 UStack_68;
		byte[] auStack_58 = new byte[16];
		float fStack_48;

		if (Il2CppMethodInitialized_0754784c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem) ;
			Il2CppMethodInitialized_0754784c = true;
		}
		pUVar5 = this._blood;
		targetAddress = &this._blood;
		bVar2 = ((Object)pUVar5 == null);
		if (bVar2) {
			if (neckBlood == null) goto label_05c4deb4;
			pUVar3 = neckBlood.gameObject;
			pUVar4 = this.transform;
			pUVar3 = Object.Instantiate<GameObject>((object)pUVar3, pUVar4);
			if (pUVar3 == null) goto label_05c4deb4;
			pUVar5 = pUVar3.GetComponent<ParticleSystem>();
			*targetAddress = pUVar5;
		}
		if (head != null) {
			UVar15 = head.position;
			fStack_80 = (float)extraout_XMM0_Dc;
			auStack_88 = (byte[])UVar15._0_8_;
			fStack_7c = (float)extraout_XMM0_Dd;
			auStack_78._4_4_ = in_XMM1_Db;
			auStack_78._0_4_ = UVar15.z;
			pUVar4 = this.transform;
			if (pUVar4 != null) {
				UVar15 = pUVar4.position;
				if (*targetAddress != null) {
					fStack_48 = (float)auStack_88._4_4_ - UVar15.y;
					fStack_70 = (float)auStack_78._4_4_ - in_XMM1_Db;
					auStack_78._4_4_ = (float)auStack_88._0_4_ - UVar15.x;
					auStack_78._0_4_ = (float)auStack_78._0_4_ - UVar15.z;
					fStack_6c = (float)auStack_88._4_4_ - UVar15.y;
					auStack_88._4_4_ = fStack_48;
					auStack_88._0_4_ = (float)auStack_88._0_4_ - UVar15.x;
					fStack_80 = fStack_80 - extraout_XMM0_Dc_00;
					fStack_7c = fStack_7c - extraout_XMM0_Dd_00;
					pUVar4 = (*targetAddress).transform;
					UVar15 = head.position;
					fStack_8c = UVar15.z;
					auStack_58._8_4_ = extraout_XMM0_Dc_01;
					auStack_58._0_8_ = UVar15._0_8_;
					auStack_58._12_4_ = extraout_XMM0_Dd_01;
					fVar7 = (float)auStack_78._4_4_ * (float)auStack_78._4_4_;
					if (fVar7 + fStack_48 * fStack_48 + (float)auStack_78._0_4_ * (float)auStack_78._0_4_ <= 0.0001) {
						if (neckBlood == null) goto label_05c4deb4;
						fVar13 = fVar7;
						pUVar6 = neckBlood.transform;
						if (pUVar6 == null) goto label_05c4deb4;
						UVar14 = pUVar6.rotation;
						fStack_80 = (float)extraout_XMM0_Dc_02;
						auStack_88 = (byte[])UVar14._0_8_;
						fStack_7c = (float)extraout_XMM0_Dd_02;
						auStack_78 = (byte[])UVar14._8_8_;
						UStack_98.x = 3.1415927;
						UStack_98.y = 0.0;
						UStack_98.z = 0.0;
						UVar14 = Quaternion.Internal_FromEulerRad(ref UStack_98);
						fVar9 = UVar14.z;
						fVar10 = UVar14.w;
						fVar13 = UVar14.x;
						fVar8 = UVar14.y;
						fVar7 = (fVar10 * (float)auStack_88._0_4_ + (float)auStack_78._4_4_ * fVar13 +(float)auStack_88._4_4_ * fVar9) - (float)auStack_78._0_4_ * fVar8;
						fVar11 = ((float)auStack_88._4_4_ * fVar10 + fVar8 * (float)auStack_78._4_4_ + fVar13 * (float)auStack_78._0_4_) - fVar9 * (float)auStack_88._0_4_;
						fVar12 = ((float)auStack_78._4_4_ * fVar9 + fVar10 * (float)auStack_78._0_4_ + fVar8 * (float)auStack_88._0_4_) - fVar13 * (float)auStack_88._4_4_;
						fVar13 = ((fVar10 * (float)auStack_78._4_4_ - fVar13 * (float)auStack_88._0_4_) - fVar8 * (float)auStack_88._4_4_) - fVar9 * (float)auStack_78._0_4_;
					}
					else {
						UStack_98.y = (float)auStack_88._4_4_;
						UStack_98.x = (float)auStack_78._4_4_;
						UStack_98.z = (float)auStack_78._0_4_;
						UStack_68.x = (Vector3.upVector).x;
						UStack_68.y = (Vector3.upVector).y;
						UStack_68.z = (Vector3.upVector).z;
						UVar14 = Quaternion.Internal_LookRotation(ref UStack_98, ref UStack_68);
						fVar12 = UVar14.z;
						fVar13 = UVar14.w;
						fVar7 = UVar14.x;
						fVar11 = UVar14.y;
					}
					if (pUVar4 != null) {
						UVar14.y = fVar11;
						UVar14.x = fVar7;
						UVar14.w = fVar13;
						UVar14.z = fVar12;
						UVar15.z = fStack_8c;
						UVar15.x = (float)auStack_58._0_4_;
						UVar15.y = (float)auStack_58._4_4_;
						pUVar4.SetPositionAndRotation(UVar15, UVar14);
						if (*targetAddress != null) {
							pUVar4 = (*targetAddress).transform;
							if (neckBlood != null) {
								pUVar6 = neckBlood.transform;
								if (pUVar6 != null) {
									UVar15 = pUVar6.lossyScale;
									if (pUVar4 != null) {
										pUVar4.localScale = UVar15;
										if (*targetAddress != null) {
											(*targetAddress).Clear(true);
											if (*targetAddress != null) {
												(*targetAddress).Play(true);
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
	label_05c4deb4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004578")]
	[Address(RVA = "0x5B4DEC0", Offset = "0x5B4CEC0", VA = "0x5B4DEC0")]
	private void Initialize(SkinnedMeshRenderer source, Mesh limb, Material wound, Mesh growth, float progress, Vector3 velocity, Transform attachments)
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$Initialize): 140 lines keep C-only constructs
		int piVar1;
		Vector3 pUVar2;
		Mesh* targetAddress;
		uint uVar3;
		float fVar4;
		uint uVar5;
		float fVar6;
		uint uVar7;
		float fVar8;
		uint uVar9;
		float fVar10;
		int iVar11;
		uint uVar12;
		uint uVar13;
		ParticleSystem pUVar14;
		List<Vector3> pSVar15;
		List<Material> pSVar16;
		Material[] pUVar17;
		List<Material> pSVar18;
		MaterialPropertyBlock pUVar19;
		byte[] auVar20 = new byte[16];
		uint uVar21;
		uint uVar22;
		uint uVar23;
		object __this_00;
		ulong uVar24;
		bool bVar25;
		int iVar26;
		Transform pUVar27;
		GameObject __this_01;
		Object pUVar28;
		Mesh pUVar29;
		UnityEngine_Vector3_StaticFields pUVar30;
		MethodInfo method_00;
		MethodInfo pMVar31;
		int count;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		int index;
		float fVar33;
		float fVar34;
		float fVar35;
		float fVar36;
		float fVar37;
		uint extraout_XMM0_Db;
		float extraout_XMM0_Db_00;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dc_01;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float extraout_XMM0_Dd_01;
		float fVar38;
		float fVar39;
		float fVar40;
		float fVar41;
		byte[] auVar42 = new byte[16];
		float fVar43;
		Vector3 UVar44;
		float local_18c;
		float local_188;
		float fStack_184;
		ulong local_158;
		float local_148;
		float fStack_144;
		float local_138;
		float fStack_134;
		byte[] local_108 = new byte[12];
		float fStack_fc;
		float local_f8;
		float fStack_f4;
		float local_f0;
		ulong local_e8;
		float local_e0;
		float local_dc;
		ulong local_d8;
		float local_d0;
		float local_cc;
		ulong local_c8;
		Vector3 UStack_c0;
		Transform local_b0;
		byte[] local_a8 = new byte[16];
		byte[] local_98 = new byte[8];
		float fStack_90;
		float fStack_8c;
		byte[] local_88 = new byte[16];
		byte[] local_78 = new byte[8];
		System_Collections_Generic_List_Enumerator_T__o local_68;
		byte[] local_48 = new byte[16];

		local_18c = velocity.z;
		local_b0 = attachments;
		if (Il2CppMethodInitialized_0754784d == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count) ;
			Il2CppMethodInitialized_0754784d = true;
		}
		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		method_00 = (MethodInfo)this._mesh;
		this.Bake(source, limb, (Mesh)method_00);
		if ((source == null) ||(pUVar27 = source.transform, pUVar27 == null)) goto label_05c4f4a2;
		local_108.get_localToWorldMatrix(pUVar27);
		fVar39 = fStack_f4;
		fVar34 = local_f8;
		pUVar29 = this._mesh;
		if (pUVar29 == null) goto label_05c4f4a2;
		uVar23 = local_108._8_4_;
		local_48 = ZEXT416((uint)fStack_fc);
		_local_98 = ZEXT416((uint)local_dc);
		local_c8 = local_108._0_8_;
		UStack_c0.x = 0.0;
		UStack_c0.y = 0.0;
		local_88._8_8_ = 0;
		local_88._0_8_ = local_d8;
		local_a8 = ZEXT416((uint)local_cc);
		local_108.get_bounds(pUVar29);
		fVar36 = local_108._0_4_;
		fVar8 = local_108._4_4_;
		fVar37 = local_e0 * (float)local_108._8_4_ + local_f0 * fVar8 + (float)uVar23 * fVar36 + local_d0;
		fVar6 = local_c8._4_4_ * 0.0 + (float)local_c8 * 0.0;
		local_148 = (float)local_e8;
		fStack_144 = SUB84(local_e8, 4);
		fVar4 = (float)uVar23 * 0.0;
		this._origin.z = fVar37;
		fVar33 = (float)local_108._8_4_ * local_148 + fVar8 * fVar34 + fVar36 * (float)local_c8 +(float)local_88._0_4_;
		fVar36 = (float)local_108._8_4_ * fStack_144 + fVar8 * fVar39 + fVar36 * local_c8._4_4_ +(float)local_88._4_4_;
		fVar8 = local_f0 * 0.0;
		this._origin.x = fVar33;
		this._origin.y = fVar36;
		this._meshOffset.m00 =(fVar4 + local_c8._4_4_ * 0.0 + (float)local_c8) - (float)local_48._0_4_ * fVar33;
		this._meshOffset.m10 =(fVar4 + (float)local_c8 * 0.0 + local_c8._4_4_) - (float)local_48._0_4_ * fVar36;
		this._meshOffset.m20 = ((float)uVar23 + fVar6) - (float)local_48._0_4_ * fVar37;
		this._meshOffset.m30 = fVar6 + fVar4 + (float)local_48._0_4_;
		fVar6 = fVar39 * 0.0 + fVar34 * 0.0;
		fVar4 = local_e0 * 0.0;
		this._meshOffset.m01 = (fVar8 + fVar39 * 0.0 + fVar34) - (float)local_78._0_4_ * fVar33;
		this._meshOffset.m11 = (fVar8 + fVar34 * 0.0 + fVar39) - (float)local_78._0_4_ * fVar36;
		this._meshOffset.m21 = (local_f0 + fVar6) - (float)local_78._0_4_ * fVar37;
		this._meshOffset.m31 = fVar6 + fVar8 + (float)local_78._0_4_;
		fVar8 = fStack_144 * 0.0 + local_148 * 0.0;
		this._meshOffset.m02 =(fVar4 + fStack_144 * 0.0 + local_148) - (float)local_98._0_4_ * fVar33;
		this._meshOffset.m12 =(fVar4 + local_148 * 0.0 + fStack_144) - (float)local_98._0_4_ * fVar36;
		this._meshOffset.m22 = (local_e0 + fVar8) - (float)local_98._0_4_ * fVar37;
		this._meshOffset.m32 = fVar8 + fVar4 + (float)local_98._0_4_;
		fVar4 = (float)local_88._4_4_ * 0.0 + (float)local_88._0_4_ * 0.0;
		fVar8 = local_d0 * 0.0;
		this._meshOffset.m03 =(fVar8 + (float)local_88._4_4_ * 0.0 + (float)local_88._0_4_) - (float)local_a8._0_4_ * fVar33;
		this._meshOffset.m13 =(fVar8 + (float)local_88._0_4_ * 0.0 + (float)local_88._4_4_) - (float)local_a8._0_4_ * fVar36;
		this._meshOffset.m23 = (local_d0 + fVar4) - fVar37 * (float)local_a8._0_4_;
		this._meshOffset.m33 = fVar4 + fVar8 + (float)local_a8._0_4_;
		pUVar27 = this.transform;
		uVar3 = this._origin.x;
		uVar7 = this._origin.y;
		UVar44.y = (float)uVar7;
		UVar44.x = (float)uVar3;
		fVar33 = this._origin.z;
		if (Il2CppMethodInitialized_0753e72b == false) {
			local_a8._0_4_ = fVar33;
			Il2CppMethodInitialized_0753e72b = true;
			fVar33 = (float)local_a8._0_4_;
		}
		if (pUVar27 == null) goto label_05c4f4a2;
		UVar44.z = fVar33;
		pUVar27.SetPositionAndRotation(UVar44, (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields);
		pUVar29 = this._mesh;
		if (pUVar29 == null) goto label_05c4f4a2;
		local_108.get_bounds(pUVar29);
		fVar37 = fStack_fc + fStack_fc;
		fVar36 = local_f8 + local_f8;
		fVar8 = fStack_f4 + fStack_f4;
		fVar4 = (float)local_c8 * fVar37;
		fVar33 = local_c8._4_4_ * fVar37;
		fVar4 = fVar34 * fVar36 + fVar4 + local_148 * fVar8;
		fVar39 = fVar39 * fVar36 + fVar33 + fStack_144 * fVar8;
		fVar34 = local_f0 * fVar36 + (float)uVar23 * fVar37 + local_e0 * fVar8;
		fVar34 = fVar34 * fVar34 + fVar39 * fVar39 + fVar4 * fVar4;
		if (fVar34 < 0.0) {
			fVar34 = sqrtf(fVar34);
		}
		else {
			fVar34 = SQRT(fVar34);
		}
		local_a8._0_4_ = fVar34;
		bVar25 = ((Object)local_b0 != null);
		if (bVar25) {
			pUVar29 = this._mesh;
			if (pUVar29 == null) goto label_05c4f4a2;
		}
		else {
			if (limb == null) goto label_05c4f4a2;
			pUVar29 = limb;
		}
		local_108.get_bounds(pUVar29);
		fVar33 = fStack_f4;
		fVar39 = local_f8;
		fVar34 = fStack_fc;
		fVar39 = fVar39 + fVar39;
		fVar34 = fVar34 + fVar34;
		fVar33 = fVar33 + fVar33;
		fVar34 = fVar33 * fVar33 + fVar39 * fVar39 + fVar34 * fVar34;
		if (fVar34 < 0.0) {
			fVar34 = sqrtf(fVar34);
		}
		else {
			fVar34 = SQRT(fVar34);
		}
		pUVar27 = source.rootBone;
		bVar25 = ((Object)pUVar27 != null);
		if (bVar25) {
			pUVar27 = source.rootBone;
		}
		else {
			pUVar27 = source.transform;
		}
		if (pUVar27 == null) goto label_05c4f4a2;
		UVar44 = pUVar27.position;
		pUVar2 = &this._origin;
		uVar21 = pUVar2.x;
		uVar22 = pUVar2.y;
		fVar39 = this._origin.z;
		fVar33 = pUVar2.x;
		fVar36 = this._origin.y;
		if (Il2CppMethodInitialized_0753e72c == false) {
			Il2CppMethodInitialized_0753e72c = true;
			fVar33 = (float)uVar21;
			fVar36 = (float)uVar22;
		}
		auVar42 = _local_98;
		pUVar30 = typeof(Vector3).static_fields;
		fVar4 = (pUVar30.upVector).x;
		fVar8 = (pUVar30.upVector).y;
		local_98._4_4_ = fVar8;
		local_98._0_4_ = fVar4;
		fVar37 = (pUVar30.upVector).z;
		fVar6 = 0.0;
		fVar10 = 0.0;
		if (Il2CppMethodInitialized_07545e2d == false) {
			local_c8 = CONCAT44(local_c8._4_4_, fVar37);
			Il2CppMethodInitialized_07545e2d = true;
			fVar37 = (float)local_c8;
			fVar4 = (float)local_98._0_4_;
			fVar8 = (float)local_98._4_4_;
			fVar6 = fStack_90;
			fVar10 = fStack_8c;
			auVar42 = _local_98;
		}
		_local_98 = auVar42;
		auVar42._0_4_ = fVar33 - UVar44.x;
		auVar42._4_4_ = fVar36 - UVar44.y;
		auVar42._8_4_ = 0.0 - extraout_XMM0_Dc;
		auVar42._12_4_ = 0.0 - extraout_XMM0_Dd;
		fVar39 = fVar39 - UVar44.z;
		fVar33 = fVar37 * fVar37 + fVar8 * fVar8 + fVar4 * fVar4;
		if (Mathf.Epsilon <= fVar33) {
			fVar33 = (fVar39 * fVar37 + auVar42._4_4_ * fVar8 + auVar42._0_4_ * fVar4) / fVar33;
			auVar42._0_4_ = auVar42._0_4_ - fVar33 * fVar4;
			auVar42._4_4_ = auVar42._4_4_ - fVar33 * fVar8;
			auVar42._8_4_ = auVar42._8_4_ - fVar33 * fVar6;
			auVar42._12_4_ = auVar42._12_4_ - fVar33 * fVar10;
			fVar39 = fVar39 - fVar37 * fVar33;
		}
		local_158._0_4_ = velocity.x;
		local_158._4_4_ = velocity.y;
		fVar37 = auVar42._4_4_ * auVar42._4_4_;
		fVar36 = fVar39 * fVar39;
		fVar33 = 0.0;
		if (fVar37 + auVar42._0_4_ * auVar42._0_4_ + fVar36 < 0.0001) {
			pUVar27 = source.transform;
			if (pUVar27 == null) goto label_05c4f4a2;
			UVar44 = pUVar27.right;
			fVar39 = UVar44.z;
			auVar42._0_8_ = UVar44._0_8_;
			auVar42._8_4_ = extraout_XMM0_Dc_00;
			auVar42._12_4_ = extraout_XMM0_Dd_00;
			pUVar30 = typeof(Vector3).static_fields;
			uVar5 = (pUVar30.upVector).x;
			uVar9 = (pUVar30.upVector).y;
			fVar33 = (pUVar30.upVector).z;
			fVar36 = fVar33 * fVar33 + (float)uVar9 * (float)uVar9 + (float)uVar5 * (float)uVar5;
			if (Mathf.Epsilon <= fVar36) {
				fVar36 = (fVar39 * fVar33 + UVar44.y * (float)uVar9 + UVar44.x * (float)uVar5) / fVar36;
				auVar42._0_4_ = UVar44.x - fVar36 * (float)uVar5;
				auVar42._4_4_ = UVar44.y - fVar36 * (float)uVar9;
				auVar42._8_4_ = extraout_XMM0_Dc_00 - fVar36 * 0.0;
				auVar42._12_4_ = extraout_XMM0_Dd_00 - fVar36 * 0.0;
				fVar39 = fVar39 - fVar33 * fVar36;
			}
			fVar36 = fVar39 * fVar39;
			fVar33 = fVar37;
		}
		fVar37 = auVar42._4_4_ * auVar42._4_4_;
		fVar36 = fVar37 + auVar42._0_4_ * auVar42._0_4_ + fVar36;
		if (0.0001 <= fVar36) {
			if (Il2CppMethodInitialized_0753e72d == false) {
				Il2CppMethodInitialized_0753e72d = true;
				local_108._0_4_ = 0.0;
				local_108._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) goto label_05c4f3cf;
	label_05c4ee5b: ;
				local_108._0_8_ = 0;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05c4ee72;
	label_05c4f414: ;
				if (fVar36 < 0.0) goto label_05c4f440;
	label_05c4ee7e: ;
				fVar36 = SQRT(fVar36);
				if (fVar36 <= 1e-05) goto label_05c4ee8f;
	label_05c4f468: ;
				fVar39 = fVar39 / fVar36;
				auVar20._4_4_ = fVar36;
				auVar20._0_4_ = fVar36;
				auVar20._8_4_ = fVar37;
				auVar20._12_4_ = fVar37;
				auVar42 = divps(auVar42, auVar20);
				local_108._0_8_ = auVar42._0_8_;
				pUVar30 = (UnityEngine_Vector3_StaticFields)local_108;
			}
			else {
				local_108._0_4_ = 0.0;
				local_108._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 != false) goto label_05c4ee5b;
	label_05c4f3cf: ;
				local_108._0_8_ = 0;
				Il2CppMethodInitialized_0753e729 = true;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05c4f414;
	label_05c4ee72: ;
				if (0.0 <= fVar36) goto label_05c4ee7e;
	label_05c4f440: ;
				fVar36 = sqrtf(fVar36);
				fVar37 = extraout_XMM0_Db_00;
				if (1e-05 < fVar36) goto label_05c4f468;
	label_05c4ee8f: ;
				pUVar30 = typeof(Vector3).static_fields;
				fVar39 = (pUVar30.zeroVector).z;
				fVar33 = 0.0;
			}
			uVar24._0_4_ = (pUVar30.zeroVector).x;
			uVar24._4_4_ = (pUVar30.zeroVector).y;
			fVar36 = (float)(undefined4)uVar24;
			fVar37 = (float)uVar24._4_4_;
		}
		else {
			pUVar30 = typeof(Vector3).static_fields;
			uVar24._0_4_ = (pUVar30.rightVector).x;
			uVar24._4_4_ = (pUVar30.rightVector).y;
			fVar39 = (pUVar30.rightVector).z;
			fVar33 = 0.0;
			fVar36 = (float)(undefined4)uVar24;
			fVar37 = (float)uVar24._4_4_;
		}
		local_138 = (float)uVar24;
		fStack_134 = (float)((ulong)uVar24 >> 0x20);
		if (Il2CppMethodInitialized_0753e72c == false) {
			Il2CppMethodInitialized_0753e72c = true;
			fVar36 = local_138;
			fVar37 = fStack_134;
		}
		auVar42 = _local_98;
		pUVar30 = typeof(Vector3).static_fields;
		fVar6 = (pUVar30.upVector).x;
		fVar10 = (pUVar30.upVector).y;
		local_98._4_4_ = fVar10;
		local_98._0_4_ = fVar6;
		fVar4 = (pUVar30.upVector).z;
		fVar38 = fVar10 * fVar39;
		fVar35 = fVar37 * fVar6;
		fVar8 = fVar39 * fVar6;
		fVar40 = fVar4 * fVar37;
		fVar43 = fVar10 * fVar36;
		fVar41 = fVar4;
		if (Il2CppMethodInitialized_07545e2d == false) {
			local_c8 = (ulong)(uint)fVar4;
			UStack_c0.x = 0.0;
			UStack_c0.y = 0.0;
			local_78._4_4_ = fVar10;
			local_78._0_4_ = fVar10 * fVar36;
			local_88._4_4_ = fVar4 * fVar37;
			local_88._0_4_ = fVar39 * fVar6;
			local_88._8_4_ = fVar33 * 0.0;
			local_88._12_4_ = 0;
			Il2CppMethodInitialized_07545e2d = true;
			fVar6 = (float)local_98._0_4_;
			fVar10 = (float)local_98._4_4_;
			fVar8 = (float)local_88._0_4_;
			fVar40 = (float)local_88._4_4_;
			fVar43 = (float)local_78._0_4_;
			fVar41 = (float)local_c8;
			auVar42 = _local_98;
		}
		_local_98 = auVar42;
		fVar33 = fVar41 * fVar41 + fVar10 * fVar10 + fVar6 * fVar6;
		uVar24 = velocity._0_8_;
		if (Mathf.Epsilon <= fVar33) {
			fVar33 = (fVar41 * local_18c + fVar10 * local_158._4_4_ + fVar6 * (float)local_158) / fVar33;
			local_158 = CONCAT44(local_158._4_4_ - fVar33 * fVar10, (float)local_158 - fVar33 * fVar6);
			local_18c = local_18c - fVar41 * fVar33;
			uVar24 = local_158;
		}
		local_158 = uVar24;
		fVar33 = Random.Range(10.0, 16.0);
		local_c8 = CONCAT44(extraout_XMM0_Db, fVar33);
		UStack_c0.y = extraout_XMM0_Dd_01;
		UStack_c0.x = extraout_XMM0_Dc_01;
		fVar37 = Random.Range(-1.5, 1.5);
		this._velocity.x =(fVar38 - fVar40) * fVar37 + local_138 * (float)local_c8 + (float)local_158;
		this._velocity.y =(fVar36 * fVar4 - fVar8) * fVar37 + fStack_134 * (float)local_c8 + local_158._4_4_;
		this._velocity.z = (fVar35 - fVar43) * fVar37 + fVar39 * fVar33 + local_18c;
		UVar44 = Random.onUnitSphere;
		fVar39 = Random.Range(45.0, 90.0);
		local_188 = UVar44.x;
		fStack_184 = UVar44.y;
		this._angularVelocity.x = fVar39 * local_188;
		this._angularVelocity.y = fVar39 * fStack_184;
		this._angularVelocity.z = UVar44.z * fVar39;
		__this_01 = source.gameObject;
		if (__this_01 != null) {
			iVar26 = __this_01.layer;
			this._layer = iVar26;
			bVar25 = source.receiveShadows;
			this._receiveShadows = bVar25;
			this._age = 0.0;
			this._dissolveDelay = 5.0;
			pUVar14 = this._blood;
			bVar25 = ((Object)pUVar14 != null);
			pMVar31 = extraout_RDX;
			if (bVar25) {
				pUVar14 = this._blood;
				if (pUVar14 == null) goto label_05c4f4a2;
				method_00 = null;
				pUVar14.Stop(true, 0);
				pMVar31 = extraout_RDX_00;
			}
			this._landed = false;
			this._radius = 0.0;
			this._groundAge = 0.0;
			pSVar15 = this._supportVertices;
			if (pSVar15 != null) {
				piVar1 = &pSVar15._version;
				*piVar1 = *piVar1 + 1;
				pSVar15._size = 0;
				this.AddSupportVertices(this._mesh, -1.0);
				source.GetSharedMaterials(this._sourceMaterials);
				if (limb != null) {
					iVar26 = limb.subMeshCount;
					bVar25 = ((Object)wound != null);
					pSVar16 = this._sourceMaterials;
					if (pSVar16 != null) {
						index = iVar26 - (uint)bVar25;
						iVar11 = pSVar16._size;
						count = iVar11 - index;
						if (count != 0 && index <= iVar11) {
							method_00 = MethodInfo_System_Collections_Generic_List_Material_RemoveRange;
							pSVar16.RemoveRange(index, count);
						}
						bVar25 = ((Object)wound != null);
						pMVar31 = MethodInfo_System_Collections_Generic_List_Material_Add;
						if (bVar25) {
							pSVar16 = this._sourceMaterials;
							if (pSVar16 == null) goto label_05c4f4a2;
							piVar1 = &pSVar16._version;
							*piVar1 = *piVar1 + 1;
							pUVar17 = pSVar16._items;
							if (pUVar17 == null) goto label_05c4f4a2;
							uVar12 = pSVar16._size;
							if (uVar12 < (uint)pUVar17.Length) {
								method_00 = (MethodInfo)(ulong)(uVar12 + 1);
								pSVar16._size = uVar12 + 1;
								pUVar17[(int)uVar12] = wound;
							}
							else {
								pSVar16.AddWithResize((object)wound);
								method_00 = pMVar31;
							}
						}
						pSVar16 = this._materials;
						pSVar18 = this._sourceMaterials;
						TitanLimbFallEffect.CopyMaterials(pSVar16, pSVar18, false, fVar34);
						source.GetPropertyBlock(this._properties);
						pUVar19 = this._properties;
						if (pUVar19 != null) {
							pUVar19.SetFloat(TitanLimbFallEffect.Dissolve, 0.0);
							bVar25 = ((Object)growth != null);
							this._hasGrowth = bVar25;
							if (bVar25) {
								pUVar28 = (Object)this._growthMesh;
								bVar25 = (pUVar28 == null);
								if (bVar25) {
									pUVar28 = new Mesh();
									if (pUVar28 == null) goto label_05c4f4a2;
									targetAddress = &this._growthMesh;
									pUVar28.name = "Falling regrown hand";
									*targetAddress = (Mesh)pUVar28;
								}
								method_00 = (MethodInfo)this._growthMesh;
								this.Bake(source, growth, (Mesh)method_00);
								this.AddSupportVertices(this._growthMesh, progress);
								pSVar16 = this._sourceMaterials;
								if (pSVar16 == null) goto label_05c4f4a2;
								pSVar16.RemoveAt(pSVar16._size + -1);
								pSVar16 = this._growthMaterials;
								pSVar18 = this._sourceMaterials;
								local_108.get_bounds(limb);
								fVar39 = fStack_fc;
								fVar39 = fVar39 + fVar39;
								fVar39 = (fStack_f4 + fStack_f4) * (fStack_f4 + fStack_f4) +(local_f8 + local_f8) * (local_f8 + local_f8) + fVar39 * fVar39;
								if (fVar39 < 0.0) {
									fVar39 = sqrtf(fVar39);
									uVar13 = (typeof(TitanLimbFallEffect)._2).cctor_finished_or_no_cctor;
								}
								else {
									fVar39 = SQRT(fVar39);
									uVar13 = (typeof(TitanLimbFallEffect)._2).cctor_finished_or_no_cctor;
								}
								if (uVar13 == 0) {
								}
								TitanLimbFallEffect.CopyMaterials(pSVar16, pSVar18, true, fVar39);
								source.GetPropertyBlock(this._growthProperties);
								pUVar19 = this._growthProperties;
								if (pUVar19 == null) goto label_05c4f4a2;
								pUVar19.SetFloat("_Growth", progress);
								pUVar19 = this._growthProperties;
								if (pUVar19 == null) goto label_05c4f4a2;
								pUVar19.SetFloat(TitanLimbFallEffect.Dissolve, 0.0);
							}
							pSVar16 = this._sourceMaterials;
							if (pSVar16 != null) {
								piVar1 = &pSVar16._version;
								*piVar1 = *piVar1 + 1;
								iVar11 = pSVar16._size;
								pSVar16._size = 0;
								if (0 < iVar11) {
									method_00 = null;
									Array.Clear((Array)pSVar16._items, 0, iVar11);
								}
								bVar25 = ((Object)local_b0 != null);
								if (bVar25) {
									pUVar29 = this._mesh;
									pUVar29 = TitanDeathDissolve.CreateTissueMesh(pUVar29, fVar34);
									this._tissueMesh = pUVar29;
									pSVar16 = this._materials;
									pSVar18 = this._tissueMaterials;
									TitanLimbFallEffect.CopyMaterials(pSVar18, pSVar16, false, fVar34);
									pSVar16 = this._tissueMaterials;
									if (pSVar16 == null) goto label_05c4f4a2;
									local_68 = pSVar16.GetEnumerator();
									local_108._0_8_ = 0;
									unique0x100037c2 = &local_68;
									while (true) {
										bVar25 = local_68.MoveNext();
										__this_00 = local_68._current;
										if (!(bVar25)) break;
										if ((Material)local_68._current == null) {
											throw new NullReferenceException();
										}
										local_68._current.SetFloat("_Layer", 1.0);
										__this_00.renderQueue = 0x7d1;
									}
									local_68.Dispose();
									this.AddAttachments(source, local_b0, fVar34);
								}
								UVar44 = this.GetRestNormal();
								this._restNormal.x = UVar44.x;
								this._restNormal.y = UVar44.y;
								this._restNormal.z = UVar44.z;
								fVar34 = this.GetUpwardSpeed();
								this._velocity.y = fVar34;
								this.PrepareSteam(source, (float)local_a8._0_4_);
								return;
							}
						}
					}
				}
			}
		}
	label_05c4f4a2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004579")]
	[Address(RVA = "0x5B50030", Offset = "0x5B4F030", VA = "0x5B50030")]
	private void AddAttachments(SkinnedMeshRenderer source, Transform root, float size)
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$AddAttachments): 50 lines keep C-only constructs
		Matrix4x4 pUVar1;
		int piVar2;
		byte bVar3;
		byte bVar4;
		uint uVar5;
		uint uVar6;
		int length;
		Object x;
		List<Material> pSVar7;
		List<Material> sources;
		MaterialPropertyBlock pUVar8;
		List<TitanLimbFallEffect.Attachment> __this_00;
		TitanLimbFallEffect.Attachment[] pCVar9;
		Matrix4x4 matrix;
		bool bVar10;
		Object[] pSVar11;
		ulong uVar12;
		GameObject __this_01;
		Object pUVar13;
		Object pUVar14;
		Transform pUVar15;
		TitanLimbFallEffect.Attachment __this_02;
		MethodInfo pMVar16;
		ulong uVar17;
		bool local_280;
		byte[] local_268 = new byte[12];
		float fStack_25c;
		float local_258;
		float fStack_254;
		float fStack_250;
		float fStack_24c;
		float local_248;
		float fStack_244;
		float fStack_240;
		float fStack_23c;
		float local_238;
		float fStack_234;
		float fStack_230;
		float fStack_22c;
		Object local_228;
		MeshFilter local_220;
		byte[] local_218 = new byte[8];
		Material local_208;
		Object local_200;
		ulong local_1f8;
		ulong local_1e8;
		ulong uStack_1e0;
		System_Collections_Generic_List_Enumerator_object__o local_1d8;
		ulong local_1c8;
		float local_1b8;
		float local_1a8;
		float local_198;
		float local_188;
		float local_178;
		float local_168;
		float local_158;
		float local_148;
		float local_138;
		byte[] local_128 = new byte[16];
		byte[] local_118 = new byte[16];
		byte[] local_108 = new byte[16];
		ulong local_f8;
		ulong uStack_f0;
		float local_e8;
		float fStack_e4;
		float fStack_e0;
		float fStack_dc;
		float local_d8;
		float fStack_d4;
		float fStack_d0;
		float fStack_cc;
		float local_c8;
		float fStack_c4;
		float fStack_c0;
		float fStack_bc;
		ulong local_b8;
		ulong uStack_b0;
		ulong local_a8;
		ulong uStack_a0;
		ulong local_98;
		ulong uStack_90;
		ulong local_88;
		ulong uStack_80;
		float local_78;
		float fStack_74;
		float fStack_70;
		float fStack_6c;
		float local_68;
		float fStack_64;
		float fStack_60;
		float fStack_5c;
		float local_58;
		float fStack_54;
		float fStack_50;
		float fStack_4c;
		float local_48;
		float fStack_44;
		float fStack_40;
		float fStack_3c;

		local_220 = null;
		local_218 = (byte[])0x0;
		local_208 = null;
		if (root != null) {
			pSVar11 = root.GetComponentsInChildren<Renderer>();
			if (pSVar11 != null) {
				if (0 < (int)pSVar11.Length) {
					uVar12 = pSVar11.Length & 0xffffffff;
					uVar17 = 0;
					local_228 = (Object)source;
					do {
						if (uVar12 <= uVar17) {
							throw new IndexOutOfRangeException();
						}
						x = (Object)pSVar11[uVar17];
						bVar10 = (x == (Object)source);
						if (!bVar10) {
							if (x == null) goto label_05c509c0;
							bVar10 = x.enabled;
							if (bVar10) {
								__this_01 = x.gameObject;
								if (__this_01 == null) goto label_05c509c0;
								bVar10 = __this_01.activeInHierarchy;
								if (bVar10) {
									pUVar14 = x.klass;
									bVar3 = (pUVar14._2).typeHierarchyDepth;
									pMVar16 = (MethodInfo)(ulong)bVar3;
									bVar4 = (typeof(SkinnedMeshRenderer)._2).typeHierarchyDepth;
									if ((bVar3 < bVar4) ||((pUVar14._2).typeHierarchy[(ulong)bVar4 - 1] !=typeof(SkinnedMeshRenderer))) {
	label_05c50347: ;
										bVar3 = (typeof(MeshRenderer)._2).typeHierarchyDepth;
										if (((byte)pMVar16 < bVar3) ||((pUVar14._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(MeshRenderer))) {
	label_05c503b9: ;
											pUVar13 = null;
											uVar5 = (typeof(Object)._2).cctor_finished_or_no_cctor;
										}
										else {
											bVar10 = x.TryGetComponent<MeshFilter>((object*)&local_220);
											if (!bVar10) goto label_05c503b9;
											if (local_220 == null) goto label_05c509c0;
											pUVar13 = (Object)local_220.sharedMesh;
											uVar5 = (typeof(Object)._2).cctor_finished_or_no_cctor;
										}
										bVar10 = false;
										local_280 = false;
									}
									else {
										pUVar13 = (Object)x.sharedMesh;
										bVar10 = (pUVar13 != null);
										if (!bVar10) {
											pUVar14 = x.klass;
											pMVar16 = (MethodInfo)(ulong)(pUVar14._2).typeHierarchyDepth;
											goto label_05c50347;
										}
										pUVar13 = new Mesh();
										if (pUVar13 == null) goto label_05c509c0;
										pUVar13.name = "Detached head attachment";
										MiscExtensions.BakeLocalMesh((SkinnedMeshRenderer)x, (Mesh)pUVar13);
										bVar10 = true;
										local_280 = true;
										uVar5 = (typeof(Object)._2).cctor_finished_or_no_cctor;
									}
									if (uVar5 == 0) {
										local_280 = bVar10;
									}
									bVar10 = (pUVar13 == null);
									if (!bVar10) {
										if ((Object)source == null) goto label_05c509c0;
										pUVar15 = source.transform;
										if (pUVar15 == null) goto label_05c509c0;
										local_200 = pUVar13;
										local_268.get_worldToLocalMatrix(pUVar15);
										local_f8 = CONCAT44(local_268._4_4_, local_268._0_4_);
										uStack_f0 = stack0xfffffffffffffda0;
										local_e8 = local_258;
										fStack_e4 = fStack_254;
										fStack_e0 = fStack_250;
										fStack_dc = fStack_24c;
										local_d8 = local_248;
										fStack_d4 = fStack_244;
										fStack_d0 = fStack_240;
										fStack_cc = fStack_23c;
										local_c8 = local_238;
										fStack_c4 = fStack_234;
										fStack_c0 = fStack_230;
										fStack_bc = fStack_22c;
										pUVar15 = x.transform;
										if (pUVar15 == null) goto label_05c509c0;
										local_268.get_localToWorldMatrix(pUVar15);
										local_1f8 = CONCAT44(local_268._4_4_, local_268._0_4_);
										local_1e8 = CONCAT44(local_268._8_4_, local_268._4_4_);
										uStack_1e0 = CONCAT44(local_258, fStack_25c);
										local_1d8 = stack0xfffffffffffffda0;
										local_1c8 = CONCAT44(local_258, fStack_25c);
										local_1b8 = local_258;
										local_1a8 = fStack_254;
										local_198 = fStack_250;
										local_188 = fStack_24c;
										local_178 = local_248;
										local_168 = fStack_244;
										local_158 = fStack_240;
										local_148 = fStack_23c;
										local_138 = local_238;
										local_128 = ZEXT416((uint)fStack_234);
										local_118 = ZEXT416((uint)fStack_230);
										local_108 = ZEXT416((uint)fStack_22c);
										local_78 = (float)local_1c8 * local_c8 + local_1d8._0_4_ * local_d8 +(float)local_1e8 * local_e8 + (float)local_1f8 * (float)local_f8;
										fStack_74 = (float)local_1c8 * fStack_c4 + local_1d8._0_4_ * fStack_d4 +(float)local_1e8 * fStack_e4 + (float)local_1f8 * local_f8._4_4_;
										fStack_70 = (float)local_1c8 * fStack_c0 + local_1d8._0_4_ * fStack_d0 +(float)local_1e8 * fStack_e0 + (float)local_1f8 * (float)uStack_f0;
										fStack_6c = (float)local_1c8 * fStack_bc + local_1d8._0_4_ * fStack_cc +(float)local_1e8 * fStack_dc + (float)local_1f8 * uStack_f0._4_4_;
										local_68 = local_188 * local_c8 + local_198 * local_d8 + local_1a8 * local_e8 + local_1b8 * (float)local_f8;
										fStack_64 = local_188 * fStack_c4 + local_198 * fStack_d4 + local_1a8 * fStack_e4 + local_1b8 * local_f8._4_4_;
										fStack_60 = local_188 * fStack_c0 + local_198 * fStack_d0 + local_1a8 * fStack_e0 + local_1b8 * (float)uStack_f0;
										fStack_5c = local_188 * fStack_bc + local_198 * fStack_cc + local_1a8 * fStack_dc + local_1b8 * uStack_f0._4_4_;
										local_58 = local_148 * local_c8 + local_158 * local_d8 + local_168 * local_e8 + local_178 * (float)local_f8;
										fStack_54 = local_148 * fStack_c4 + local_158 * fStack_d4 + local_168 * fStack_e4 + local_178 * local_f8._4_4_;
										fStack_50 = local_148 * fStack_c0 + local_158 * fStack_d0 + local_168 * fStack_e0 + local_178 * (float)uStack_f0;
										fStack_4c = local_148 * fStack_bc + local_158 * fStack_cc + local_168 * fStack_dc + local_178 * uStack_f0._4_4_;
										local_48 = (float)local_108._0_4_ * local_c8 +(float)local_118._0_4_ * local_d8 +(float)local_128._0_4_ * local_e8 + local_138 * (float)local_f8;
										fStack_44 = (float)local_108._0_4_ * fStack_c4 +(float)local_118._0_4_ * fStack_d4 +(float)local_128._0_4_ * fStack_e4 + local_138 * local_f8._4_4_;
										fStack_40 = (float)local_108._0_4_ * fStack_c0 +(float)local_118._0_4_ * fStack_d0 +(float)local_128._0_4_ * fStack_e0 + local_138 * (float)uStack_f0;
										fStack_3c = (float)local_108._0_4_ * fStack_bc +(float)local_118._0_4_ * fStack_cc +(float)local_128._0_4_ * fStack_dc + local_138 * uStack_f0._4_4_;
										matrix.m10 = fStack_74;
										matrix.m00 = local_78;
										matrix.m30 = fStack_6c;
										matrix.m20 = fStack_70;
										matrix.m11 = fStack_64;
										matrix.m01 = local_68;
										matrix.m31 = fStack_5c;
										matrix.m21 = fStack_60;
										matrix.m12 = fStack_54;
										matrix.m02 = local_58;
										matrix.m32 = fStack_4c;
										matrix.m22 = fStack_50;
										matrix.m13 = fStack_44;
										matrix.m03 = local_48;
										matrix.m33 = fStack_3c;
										matrix.m23 = fStack_40;
										__this_02 = new TitanLimbFallEffect.Attachment((Mesh)local_200, matrix, local_280);
										x.GetSharedMaterials(this._sourceMaterials);
										if (__this_02 == null) goto label_05c509c0;
										pSVar7 = __this_02.Materials;
										sources = this._sourceMaterials;
										TitanLimbFallEffect.CopyMaterials(pSVar7, sources, false, size);
										pSVar7 = __this_02.Materials;
										if (pSVar7 == null) goto label_05c509c0;
										local_268.GetEnumerator((List<object>)pSVar7);
										local_208 = (Material)CONCAT44(fStack_254, local_258);
										local_218 = (byte[])CONCAT44(local_268._4_4_, local_268._0_4_);
										local_268._0_4_ = 0.0;
										local_268._4_4_ = 0.0;
										while(true) {
											bVar10 = local_218.MoveNext();
											if (!bVar10) break;
											if (local_208 == null) {
												throw new NullReferenceException();
											}
											local_208.SetFloat("_Flesh", 0.0);
										}
										local_218.Dispose();
										x.GetPropertyBlock(__this_02.Properties);
										pUVar8 = __this_02.Properties;
										if (pUVar8 == null) goto label_05c509c0;
										pUVar8.SetFloat("_UseMeshPosition", 1.0);
										pUVar8 = __this_02.Properties;
										if (pUVar8 == null) goto label_05c509c0;
										pUVar1 = &__this_02.Matrix;
										local_b8._0_4_ = pUVar1.m00;
										local_b8._4_4_ = pUVar1.m10;
										uStack_b0._0_4_ = __this_02.Matrix.m20;
										uStack_b0._4_4_ = __this_02.Matrix.m30;
										local_a8._0_4_ = __this_02.Matrix.m01;
										local_a8._4_4_ = __this_02.Matrix.m11;
										uStack_a0._0_4_ = __this_02.Matrix.m21;
										uStack_a0._4_4_ = __this_02.Matrix.m31;
										local_98._0_4_ = __this_02.Matrix.m02;
										local_98._4_4_ = __this_02.Matrix.m12;
										uStack_90._0_4_ = __this_02.Matrix.m22;
										uStack_90._4_4_ = __this_02.Matrix.m32;
										local_88._0_4_ = __this_02.Matrix.m03;
										local_88._4_4_ = __this_02.Matrix.m13;
										uStack_80._0_4_ = __this_02.Matrix.m23;
										uStack_80._4_4_ = __this_02.Matrix.m33;
										pUVar8.SetMatrix("_MeshToDissolve", (Matrix4x4)pUVar1.fields);
										pMVar16 = MethodInfo_System_Collections_Generic_List_TitanLimbFallEffect_Attachment_Add;
										__this_00 = this._attachments;
										if (__this_00 == null) goto label_05c509c0;
										piVar2 = &__this_00._version;
										*piVar2 = *piVar2 + 1;
										pCVar9 = __this_00._items;
										if (pCVar9 == null) goto label_05c509c0;
										uVar6 = __this_00._size;
										if (uVar6 < (uint)pCVar9.Length) {
											__this_00._size = uVar6 + 1;
											pCVar9[(int)uVar6] = __this_02;
										}
										else {
											__this_00.AddWithResize((object)__this_02);
										}
										source = (SkinnedMeshRenderer)local_228;
									}
								}
							}
						}
						uVar17 = uVar17 + 1;
						uVar6 = (uint)pSVar11.Length;
						uVar12 = (ulong)uVar6;
					} while ((long)uVar17 < (long)(int)uVar6);
				}
				pSVar7 = this._sourceMaterials;
				if (pSVar7 != null) {
					piVar2 = &pSVar7._version;
					*piVar2 = *piVar2 + 1;
					length = pSVar7._size;
					pSVar7._size = 0;
					if (0 < length) {
						Array.Clear((Array)pSVar7._items, 0, length);
					}
					return;
				}
			}
		}
	label_05c509c0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600457A")]
	[Address(RVA = "0x5B51020", Offset = "0x5B50020", VA = "0x5B51020")]
	private float GetUpwardSpeed()
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$GetUpwardSpeed): clean
		float fVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		int layerMask;
		Quaternion rotation;
		Vector3 direction;
		bool bVar9;
		UnityEngine_Vector3_StaticFields pUVar10;
		float fVar11;
		float fVar12;
		Vector3 UVar13;
		Vector3 UVar14;
		Vector3 normal;
		RaycastHit local_48;

		local_48.m_UV.x = 0.0;
		local_48.m_UV.y = 0.0;
		local_48.m_Collider.m_Data = (EntityId)0x0;
		local_48.m_Normal.y = 0.0;
		local_48.m_Normal.z = 0.0;
		local_48.m_FaceID = 0;
		local_48.m_Distance = 0.0;
		local_48.m_Point.x = 0.0;
		local_48.m_Point.y = 0.0;
		local_48.m_Point.z = 0.0;
		local_48.m_Normal.x = 0.0;
		fVar12 = this._radius + 0.05;
		uVar3 = this._origin.x;
		uVar6 = this._origin.y;
		fVar11 = this._origin.z;
		pUVar10 = typeof(Vector3).static_fields;
		uVar4 = (pUVar10.upVector).x;
		uVar7 = (pUVar10.upVector).y;
		fVar1 = (pUVar10.upVector).z;
		if (Il2CppMethodInitialized_075450a5 == false) {
			Il2CppMethodInitialized_075450a5 = true;
			pUVar10 = typeof(Vector3).static_fields;
		}
		direction = (pUVar10.downVector);
		fVar2 = this._radius;
		UVar13.x = (float)uVar3 + fVar12 * (float)uVar4;
		UVar13.y = (float)uVar6 + fVar12 * (float)uVar7;
		UVar13.z = fVar11 + fVar1 * fVar12;
		layerMask = TitanLimbFallEffect.GroundMask;
		bVar9 = Physics.Raycast(UVar13, (Vector3)direction, ref local_48, fVar12 + fVar2 + 2.0, layerMask, 1);
		fVar11 = 0.0;
		if (bVar9) {
			UVar13 = local_48.normal;
			fVar11 = 0.0;
			if (0.2 < UVar13.y) {
				uVar5 = this._origin.x;
				uVar8 = this._origin.y;
				fVar11 = this._origin.z;
				UVar13 = local_48.point;
				UVar14 = local_48.normal;
				rotation = *(Quaternion)typeof(Quaternion).static_fields;
				normal = local_48.normal;
				fVar12 = this.GetSupportHeight((Quaternion)rotation, normal);
				fVar12 = ((UVar14.z * (fVar11 - UVar13.z) + UVar14.y * ((float)uVar8 - UVar13.y) + UVar14.x * ((float)uVar5 - UVar13.x)) - fVar12) * -0.5 + 1.0;
				fVar11 = 1.0;
				if (fVar12 <= 1.0) {
					fVar11 = fVar12;
				}
				fVar11 = (float)(-(uint)(0.0 <= fVar12) & (uint)fVar11);
			}
		}
		fVar12 = 0.0;
		if (0.0 <= fVar11) {
			fVar12 = fVar11;
		}
		fVar11 = Random.Range(fVar11 * 8.0, fVar12 * 4.0 + 6.0);
		return fVar11;
	}

	[Token(Token = "0x600457B")]
	[Address(RVA = "0x5B4F640", Offset = "0x5B4E640", VA = "0x5B4F640")]
	private void AddSupportVertices(Mesh mesh, float growth = -1f)
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$AddSupportVertices): 8 lines keep C-only constructs
		List<Vector3> pSVar1;
		List<int> __this_00;
		List<Vector2> __this_01;
		Vector2 UVar2;
		object pIVar3;
		bool bVar4;
		int iVar5;
		ulong uVar6;
		MethodInfo pMVar7;
		uint uVar8;
		Vector3 UVar9;
		byte[] local_a0 = new byte[16];
		object local_90;
		byte[] local_88 = new byte[8];
		object local_78;
		Mesh local_68;
		ulong local_60;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		float fStack_40;

		local_58._current = null;
		fStack_40 = 0.0;
		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_88 = (byte[])0x0;
		local_78 = null;
		if (mesh == null) {
	label_05c4f934: ;
			throw new NullReferenceException();
		}
		mesh.GetVertices(this._vertices);
		if (0.0 <= growth) {
			mesh.GetUVs(1, this._growthCoordinates);
			iVar5 = mesh.subMeshCount;
			uVar6 = 0;
			if (0 < iVar5) {
				local_68 = mesh;
				do {
					local_60 = uVar6;
					mesh.GetTriangles(this._indices, (int32_t)uVar6);
					__this_00 = this._indices;
					if (__this_00 == null) goto label_05c4f934;
					local_a0.GetEnumerator(__this_00);
					local_78 = local_90;
					local_88 = (byte[])local_a0._0_8_;
					local_a0._0_8_ = null;
					local_a0._8_8_ = (System_Collections_Generic_List_Enumerator_int__o)local_88;
					while (true) {
						bVar4 = local_88.MoveNext();
						pIVar3 = local_78;
						if (!(bVar4)) break;
						__this_01 = this._growthCoordinates;
						if (__this_01 == null) {
							throw new NullReferenceException();
						}
						iVar5 = (int32_t)local_78;
						UVar2 = __this_01.get_Item((int32_t)local_78);
						if (UVar2.x <= growth) {
							pSVar1 = this._vertices;
							if (pSVar1 == null) {
								throw new NullReferenceException();
							}
							pMVar7 = (MethodInfo)((ulong)pIVar3 & 0xffffffff);
							UVar9 = pSVar1.get_Item(iVar5);
							this.AddSupportVertex(UVar9);
						}
					}
					local_88.Dispose();
					mesh = local_68;
					uVar8 = (int)local_60 + 1;
					uVar6 = (ulong)uVar8;
					iVar5 = local_68.subMeshCount;
				} while ((int)uVar8 < iVar5);
			}
		}
		else {
			pSVar1 = this._vertices;
			if (pSVar1 == null) goto label_05c4f934;
			local_58 = pSVar1.GetEnumerator();
			local_a0._0_8_ = null;
			local_a0._8_8_ = &local_58;
			while (true) {
				pMVar7 = MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext;
				bVar4 = local_58.MoveNext();
				if (!(bVar4)) break;
				UVar9.z = fStack_40;
				UVar9._0_8_ = local_58._current;
				this.AddSupportVertex(UVar9);
			}
			local_58.Dispose();
		}
		return;
	}

	[Token(Token = "0x600457C")]
	[Address(RVA = "0x5B518F0", Offset = "0x5B508F0", VA = "0x5B518F0")]
	private void AddSupportVertex(Vector3 vertex)
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$AddSupportVertex): 2 lines keep C-only constructs
		int piVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		uint uVar8;
		List<Vector3> __this_00;
		Vector3[] pUVar9;
		float fVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		Vector3 item;

		fVar12 = vertex.z;
		fVar11 = vertex.x;
		fVar14 = vertex.y;
		__this_00 = this._supportVertices;
		if (__this_00 != null) {
			fVar16 = this._meshOffset.m12 * fVar12 +this._meshOffset.m11 * fVar14 +this._meshOffset.m10 * fVar11 + this._meshOffset.m13;
			fVar2 = this._meshOffset.m01;
			fVar3 = this._meshOffset.m20;
			fVar4 = this._meshOffset.m21;
			fVar5 = this._meshOffset.m00;
			fVar6 = this._meshOffset.m22;
			fVar7 = this._meshOffset.m02;
			fVar15 = this._meshOffset.m23;
			fVar13 = this._meshOffset.m03;
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pUVar9 = __this_00._items;
			if (pUVar9 != null) {
				fVar13 = fVar13 + fVar12 * fVar7 + fVar5 * fVar11 + fVar14 * fVar2;
				fVar15 = fVar15 + fVar12 * fVar6 + fVar4 * fVar14 + fVar11 * fVar3;
				uVar8 = __this_00._size;
				if (uVar8 < (uint)pUVar9.Length) {
					__this_00._size = uVar8 + 1;
					pUVar9[(int)uVar8].x = fVar13;
					pUVar9[(int)uVar8].y = fVar16;
					pUVar9[(int)uVar8].z = fVar15;
					fVar11 = this._radius;
				}
				else {
					item.y = fVar16;
					item.x = fVar13;
					item.z = fVar15;
					__this_00.AddWithResize(item);
					fVar11 = this._radius;
				}
				fVar14 = fVar15 * fVar15 + fVar16 * fVar16 + fVar13 * fVar13;
				if (fVar14 < 0.0) {
					fVar14 = sqrtf(fVar14);
				}
				else {
					fVar14 = SQRT(fVar14);
				}
				if (fVar11 <= fVar14) {
					fVar11 = fVar14;
				}
				this._radius = fVar11;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600457D")]
	[Address(RVA = "0x5B509F0", Offset = "0x5B4F9F0", VA = "0x5B509F0")]
	private Vector3 GetRestNormal()
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$GetRestNormal): 103 lines keep C-only constructs
		ulong uVar1;
		uint uVar2;
		List<Vector3> __this_00;
		byte[] auVar3 = new byte[16];
		byte[] auVar4 = new byte[16];
		Vector3 pUVar5;
		UnityEngine_Vector3_StaticFields pUVar6;
		Vector3 pUVar7;
		int iVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float extraout_XMM0_Db;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float fVar13;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float fVar14;
		float fVar15;
		uint in_XMM1_Db;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		float fVar16;
		byte[] auVar17 = new byte[16];
		byte[] auVar18 = new byte[16];
		byte[] auVar19 = new byte[16];
		float fVar20;
		float fVar21;
		float fVar22;
		float fVar23;
		float fVar24;
		Vector3 UVar25;
		Vector3 UVar26;
		Vector3 UVar27;
		float local_c8;
		float fStack_c4;
		byte[] local_b8 = new byte[8];
		float fStack_b0;
		float fStack_ac;
		byte[] local_78 = new byte[8];
		Vector3 local_50;
		float fStack_44;
		ulong uStack_40;
		byte[] local_38 = new byte[8];
		ulong uStack_30;
		float local_28;
		float fStack_24;
		float fStack_20;
		float fStack_1c;

		__this_00 = this._supportVertices;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		if (1 < __this_00._size) {
			UVar25 = __this_00.get_Item(0);
			UVar25 = this.GetFarthestVertex(UVar25);
			UVar26 = this.GetFarthestVertex(UVar25);
			local_c8 = UVar25.x;
			fStack_c4 = UVar25.y;
			auVar19._0_4_ = UVar26.x - local_c8;
			auVar19._4_4_ = UVar26.y - fStack_c4;
			auVar19._8_4_ = extraout_XMM0_Dc_00 - extraout_XMM0_Dc;
			auVar19._12_4_ = extraout_XMM0_Dd_00 - extraout_XMM0_Dd;
			fVar15 = UVar26.z - UVar25.z;
			fVar20 = fVar15 * fVar15 + auVar19._4_4_ * auVar19._4_4_ + auVar19._0_4_ * auVar19._0_4_;
			if (1e-06 <= fVar20) {
				if (Il2CppMethodInitialized_0753e729 == false) {
					in_XMM1_Db = 0;
					in_XMM1_Dc = 0;
					in_XMM1_Dd = 0;
					Il2CppMethodInitialized_0753e729 = true;
					uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
					in_XMM1_Db = 0;
					in_XMM1_Dc = 0;
					in_XMM1_Dd = 0;
				}
				if (fVar20 < 0.0) {
					fVar20 = sqrtf(fVar20);
					in_XMM1_Db = 0;
					in_XMM1_Dc = 0;
					in_XMM1_Dd = 0;
				}
				else {
					fVar20 = SQRT(fVar20);
				}
				fVar16 = 0.0;
				fVar11 = 0.0;
				fVar10 = 0.0;
				fVar9 = 0.0;
				if (1e-05 < fVar20) {
					auVar4._4_4_ = fVar20;
					auVar4._0_4_ = fVar20;
					auVar4._8_4_ = fVar20;
					auVar4._12_4_ = fVar20;
					auVar19 = divps(auVar19, auVar4);
					fVar9 = auVar19._0_4_;
					fVar10 = auVar19._4_4_;
					fVar11 = auVar19._8_4_;
					fVar16 = auVar19._12_4_;
					local_b8._4_4_ = in_XMM1_Db;
					local_b8._0_4_ = fVar15 / fVar20;
					fStack_b0 = (float)in_XMM1_Dc;
					fStack_ac = (float)in_XMM1_Dd;
				}
				if (0.9 <= ABS(fVar10)) {
					pUVar7 = &Vector3.rightVector;
					pUVar5 = &Vector3.rightVector;
				}
				else {
					pUVar7 = &Vector3.upVector;
					pUVar5 = &Vector3.upVector;
				}
				fVar15 = pUVar7.x;
				uVar1._0_4_ = pUVar7.y;
				fVar20 = pUVar5.z;
				uVar1._4_4_ = (float)uVar1;
				fVar12 = fVar9;
				fVar13 = 0.0;
				fVar14 = 0.0;
				fVar21 = fVar20;
				fVar22 = (float)local_b8._0_4_;
				fVar23 = 0.0;
				fVar24 = (float)local_b8._4_4_;
				if (Il2CppMethodInitialized_0753e72d == false) {
					local_38._4_4_ = local_b8._0_4_;
					local_38._0_4_ = fVar20;
					uStack_30 = (ulong)(uint)local_b8._4_4_ << 0x20;
					fStack_44 = fVar9;
					local_50.z = (float)uVar1;
					uStack_40._0_4_ = 0.0;
					uStack_40._4_4_ = 0.0;
					Il2CppMethodInitialized_0753e72d = true;
					uVar1._4_4_ = local_50.z;
					fVar12 = fStack_44;
					fVar13 = (float)uStack_40;
					fVar14 = uStack_40._4_4_;
					fVar21 = (float)local_38._0_4_;
					fVar22 = (float)local_38._4_4_;
					fVar23 = (float)uStack_30;
					fVar24 = uStack_30._4_4_;
				}
				local_50.x = 0.0;
				local_50.y = 0.0;
				auVar18._0_4_ = fVar10 * fVar21 - (float)local_b8._0_4_ * uVar1._4_4_;
				auVar18._4_4_ = fVar15 * fVar22 - fVar20 * fVar12;
				auVar18._8_4_ = fVar11 * fVar23 - (float)local_b8._4_4_ * fVar13;
				auVar18._12_4_ = fVar16 * fVar24 - fVar14 * 0.0;
				fVar20 = (float)uVar1 * fVar9 - fVar15 * fVar10;
				fVar15 = fVar20 * fVar20 + auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_;
				if (fVar15 < 0.0) {
					fVar15 = sqrtf(fVar15);
					uVar1._0_4_ = extraout_XMM0_Db;
					if (1e-05 < fVar15) goto label_05c50dae;
	label_05c50d68: ;
					pUVar6 = typeof(Vector3).static_fields;
					fVar20 = (pUVar6.zeroVector).z;
				}
				else {
					fVar15 = SQRT(fVar15);
					if (fVar15 <= 1e-05) goto label_05c50d68;
	label_05c50dae: ;
					fVar20 = fVar20 / fVar15;
					auVar3._4_4_ = fVar15;
					auVar3._0_4_ = fVar15;
					auVar3._8_4_ = (float)uVar1;
					auVar3._12_4_ = (float)uVar1;
					auVar19 = divps(auVar18, auVar3);
					local_50.x = auVar19._0_4_;
					local_50.y = auVar19._4_4_;
					pUVar6 = (UnityEngine_Vector3_StaticFields)&local_50;
				}
				uVar1._0_4_ = (pUVar6.zeroVector).x;
				uVar1._4_4_ = (pUVar6.zeroVector).y;
				fStack_24 = (float)local_b8._0_4_ * (float)uVar1 - fVar9 * fVar20;
				local_28 = fVar20 * fVar10 - uVar1._4_4_ * (float)local_b8._0_4_;
				fStack_20 = fStack_b0 * 0.0 - fVar11 * (float)local_b8._0_4_;
				fStack_1c = fStack_ac * 0.0 - fVar16 * (float)local_b8._0_4_;
				fStack_44 = uVar1._4_4_;
				local_50.z = uVar1._4_4_ * fVar9 - fVar10 * (float)uVar1;
				uStack_40._4_4_ = uVar1._4_4_;
				uStack_40._0_4_ = uVar1._4_4_;
				iVar8 = 0;
				uStack_30._0_4_ = 0.0;
				uStack_30._4_4_ = 0.0;
				fVar9 = 3.4028235e+38;
				fVar15 = fVar20;
				local_38 = (byte[])uVar1;
				do {
					local_78._4_4_ = uVar1._4_4_;
					local_78._0_4_ = (float)uVar1;
					fVar10 = (float)iVar8 * 3.1415927 * 0.03125;
					fVar11 = cosf(fVar10);
					fVar10 = sinf(fVar10);
					fVar16 = fVar10 * local_28 + fVar11 * (float)local_38._0_4_;
					uVar1._0_4_ = fVar10 * fStack_24 + fVar11 * (float)local_38._4_4_;
					auVar17._0_8_ = (byte[])CONCAT44((float)uVar1, fVar16);
					auVar17._8_4_ = fVar10 * fStack_20 + fVar11 * (float)uStack_30;
					auVar17._12_4_ = fVar10 * fStack_1c + fVar11 * uStack_30._4_4_;
					UVar25.z = local_50.z * fVar10 + fVar20 * fVar11;
					UVar25.x = fVar16;
					UVar25.y = (float)uVar1;
					fVar10 = this.GetSupportHeight((UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields, UVar25);
					UVar26._0_8_ = (ulong)auVar17._0_8_ ^ 0x8000000080000000;
					UVar26.z = -UVar25.z;
					fVar11 = this.GetSupportHeight((UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields, UVar26);
					fVar10 = fVar10 + fVar11;
					fVar11 = fVar10;
					auVar19 = auVar17;
					if (fVar9 <= fVar10) {
						fVar11 = fVar9;
						auVar17._0_8_ = local_78;
						auVar19 = _local_78;
					}
					fVar15 = (float)(~-(uint)(fVar10 < fVar9) & (uint)fVar15 |(uint)UVar25.z & -(uint)(fVar10 < fVar9));
					iVar8 = iVar8 + 1;
					uVar1._0_4_ = auVar19._0_4_;
					uVar1._4_4_ = auVar19._4_4_;
					fVar9 = fVar11;
				} while (iVar8 != 0x20);
				goto label_05c50ad1;
			}
		}
		pUVar6 = typeof(Vector3).static_fields;
		auVar17._0_4_ = (pUVar6.upVector).x;
		auVar17._4_4_ = (pUVar6.upVector).y;
		fVar15 = (pUVar6.upVector).z;
	label_05c50ad1: ;
		UVar27.z = fVar15;
		UVar27.x = (float)SUB84(auVar17._0_8_, 0);
		UVar27.y = (float)(int)((ulong)auVar17._0_8_ >> 0x20);
		return (Vector3)UVar27;
	}

	[Token(Token = "0x600457E")]
	[Address(RVA = "0x5B51B20", Offset = "0x5B50B20", VA = "0x5B51B20")]
	private Vector3 GetFarthestVertex(Vector3 origin)
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$GetFarthestVertex): 11 lines keep C-only constructs
		List<Vector3> __this_00;
		float fVar1;
		bool bVar2;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		float fVar3;
		float fVar4;
		Vector3 UVar5;
		float local_8c;
		System_Collections_Generic_List_Enumerator_T__o local_68;
		ulong uStack_50;
		object local_48;
		byte[] local_38 = new byte[16];
		float local_28;
		float fStack_24;

		local_38._8_4_ = in_XMM0_Dc;
		local_38._0_8_ = origin._0_8_;
		local_38._12_4_ = in_XMM0_Dd;
		local_68._current = null;
		uStack_50 = 0;
		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		__this_00 = this._supportVertices;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_68 = __this_00.GetEnumerator();
		fStack_24 = (float)local_38._0_4_;
		local_8c = 0.0;
		local_48 = local_38._0_8_;
		local_28 = origin.z;
		fVar1 = origin.z;
		while(true) {
			bVar2 = local_68.MoveNext();
			if (!bVar2) break;
			fVar3 = (float)((ulong)local_68._current >> 0x20) - (float)local_38._4_4_;
			fVar4 = SUB84(local_68._current, 0) - fStack_24;
			fVar3 = fVar3 * fVar3 + fVar4 * fVar4 + ((float)uStack_50 - local_28) * ((float)uStack_50 - local_28);
			if (local_8c < fVar3) {
				local_48 = local_68._current;
				local_8c = fVar3;
				fVar1 = (float)uStack_50;
			}
		}
		local_68.Dispose();
		UVar5.z = fVar1;
		UVar5._0_8_ = local_48;
		return (Vector3)UVar5;
	}

	[Token(Token = "0x600457F")]
	[Address(RVA = "0x5B4F520", Offset = "0x5B4E520", VA = "0x5B4F520")]
	private void Bake(SkinnedMeshRenderer source, Mesh mesh, Mesh destination)
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$Bake): 3 lines keep C-only constructs
		SkinnedMeshRenderer local_48;
		Mesh local_40;
		byte local_30;
		Mesh* local_28;

		local_48 = source;
		if (source != null) {
			local_40 = source.sharedMesh;
			local_30 = (byte)&local_48;
			local_28 = &local_40;
			source.sharedMesh = mesh;
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			local_48.BakeMesh(destination, true);
			if ((local_48 != null) &&(local_48.sharedMesh = local_40, destination != null)) {
				destination.GetVertices(this._vertices);
				destination.SetUVs(3, this._vertices);
				destination.RecalculateBounds();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004580")]
	[Address(RVA = "0x5B4F9B0", Offset = "0x5B4E9B0", VA = "0x5B4F9B0")]
	private static void CopyMaterials(List<Material> materials, List<Material> sources, bool growth, float size)
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$CopyMaterials): 8 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Shader shader;
		Material[] pUVar3;
		bool bVar5;
		int iVar6;
		Material pUVar7;
		Material __this;
		Object __this_00;
		String pSVar8;
		Texture value;
		String* ppSVar9;
		int index;
		int iVar10;
		String pSVar11;
		float value_00;
		Vector2 value_01;
		Vector2 value_02;
		Color value_03;
		float local_40;

		if (Il2CppMethodInitialized_07547854 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count) ;
			Il2CppMethodInitialized_07547854 = true;
		}
		if ((materials == null) ||(sources == null)) {
	label_05c5001f: ;
			throw new NullReferenceException();
		}
		iVar10 = materials._size;
		iVar6 = sources._size;
		if (iVar10 < iVar6) {
			do {
				shader = TitanLimbFallEffect._shader;
				pUVar7 = new Material(shader);
				piVar1 = &materials._version;
				*piVar1 = *piVar1 + 1;
				pUVar3 = materials._items;
				if (pUVar3 == null) goto label_05c5001f;
				uVar2 = materials._size;
				if (uVar2 < (uint)pUVar3.Length) {
					materials._size = uVar2 + 1;
					pUVar3[(int)uVar2] = pUVar7;
				}
				else {
					materials.AddWithResize((object)pUVar7);
				}
				iVar10 = materials._size;
				iVar6 = sources._size;
			} while (iVar10 < iVar6);
		}
		if (iVar6 < iVar10) {
			do {
				pUVar7 = materials.get_Item(iVar10 + -1);
				Object.Destroy((Object)pUVar7);
				materials.RemoveAt(materials._size + -1);
				iVar10 = materials._size;
				iVar6 = sources._size;
			} while (iVar6 < iVar10);
		}
		if (0 < iVar6) {
			if (size <= 0.001) {
				size = 0.001;
			}
			local_40 = 1.0;
			if (!growth) {
				local_40 = 0.0;
			}
			index = 0;
			do {
				while(true) {
					pUVar7 = sources.get_Item(index);
					__this = materials.get_Item(index);
					bVar5 = ((Object)pUVar7 == null);
					if (!bVar5) break;
					if (__this == null) goto label_05c5001f;
					__this.SetColor("_BaseColor", (Color)ZEXT816(0));
					__this.SetFloat("_Flesh", 0.0);
					index = index + 1;
					if (sources._size <= index) {
						return;
					}
				}
				if (__this == null) goto label_05c5001f;
				__this.CopyPropertiesFromMaterial(pUVar7);
				__this.shader = TitanLimbFallEffect._shader;
				__this.renderQueue = 2000;
				__this.SetFloat("_Layer", 0.0);
				__this.SetFloat("_Flesh", 1.0);
				if ((pUVar7 == null) ||(__this_00 = (Object)pUVar7.shader, __this_00 == null)) goto label_05c5001f;
				pSVar8 = __this_00.name;
				bVar5 = (pSVar8 == "AoTTG/TitanWound");
				value_00 = 1.0;
				if (!bVar5) {
					value_00 = 0.0;
				}
				__this.SetFloat("_VertexColor", value_00);
				__this.SetFloat("_Regrowth", local_40);
				__this.SetFloat("_DissolveScale", 8.0 / size);
				bVar5 = pUVar7.HasProperty("_BaseMap");
				ppSVar9 = &"_BaseMap";
				if (bVar5) {
	label_05c4feaf: ;
					pSVar11 = "_BaseMap";
					pSVar8 = *ppSVar9;
					if (pSVar8 == null) goto label_05c4ff20;
					value = pUVar7.GetTexture(pSVar8);
					__this.SetTexture(pSVar11, value);
					pSVar11 = "_BaseMap";
					value_01 = pUVar7.GetTextureScale(pSVar8);
					__this.SetTextureScale(pSVar11, value_01);
					pSVar11 = "_BaseMap";
					value_02 = (Vector2)pUVar7.GetTextureOffset(pSVar8);
				}
				else {
					bVar5 = pUVar7.HasProperty("_MainTex");
					ppSVar9 = &"_MainTex";
					if (bVar5) goto label_05c4feaf;
	label_05c4ff20: ;
					__this.SetTexture("_BaseMap", null);
					pSVar8 = "_BaseMap";
					__this.SetTextureScale(pSVar8, (Vector2)(Vector2.oneVector));
					pSVar11 = "_BaseMap";
					value_02 = (Vector2.zeroVector);
				}
				__this.SetTextureOffset(pSVar11, (Vector2)value_02) ;
				bVar5 = pUVar7.HasProperty("_BaseColor");
				ppSVar9 = &"_BaseColor";
				if (bVar5) {
	label_05c4ffeb: ;
					pSVar8 = "_BaseColor";
					if (*ppSVar9 == null) goto label_05c4fc80;
					value_03 = pUVar7.GetColor(*ppSVar9);
				}
				else {
					bVar5 = pUVar7.HasProperty("_Color");
					ppSVar9 = &"_Color";
					if (bVar5) goto label_05c4ffeb;
	label_05c4fc80: ;
					value_03.b = 1.0;
					value_03.a = 1.0;
					value_03.r = 1.0;
					value_03.g = 1.0;
					pSVar8 = "_BaseColor";
				}
				__this.SetColor(pSVar8, value_03);
				index = index + 1;
			} while (index < sources._size);
		}
		return;
	}

	[Token(Token = "0x6004581")]
	[Address(RVA = "0x5B513A0", Offset = "0x5B503A0", VA = "0x5B513A0")]
	private void PrepareSteam(SkinnedMeshRenderer source, float size)
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$PrepareSteam): 17 lines keep C-only constructs
		ParticleSystem* targetAddress;
		bool bVar1;
		GameObject pUVar2;
		Transform pUVar3;
		ParticleSystem pUVar4;
		Transform pUVar5;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Quaternion rotation;
		Vector3 UVar6;
		ParticleSystem.EmissionModule local_50;
		byte[] local_48 = new byte[16];

		local_48._0_4_ = size;
		if (Il2CppMethodInitialized_07547855 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem) ;
			Il2CppMethodInitialized_07547855 = true;
		}
		local_50.m_ParticleSystem =(ParticleSystem.EmissionModule)null;
		pUVar4 = this._steam;
		targetAddress = &this._steam;
		bVar1 = ((Object)pUVar4 == null);
		if (bVar1) {
			pUVar2 = BasicTitanComponentCache.LoadParticle("ArmSmokeParticle");
			pUVar3 = this.transform;
			pUVar2 = Object.Instantiate<GameObject>((object)pUVar2, pUVar3);
			if (pUVar2 == null) goto label_05c51623;
			pUVar4 = pUVar2.GetComponent<ParticleSystem>();
			*targetAddress = pUVar4;
		}
		pUVar4 = *targetAddress;
		TitanSteamEffect.Configure(pUVar4, (float)local_48._0_4_ + (float)local_48._0_4_, false, 42.0);
		if (*targetAddress != null) {
			pUVar3 = (*targetAddress).transform ;
			if (source != null) {
				pUVar5 = source.transform;
				if (pUVar5 != null) {
					UVar6 = pUVar5.position;
					local_48._8_4_ = extraout_XMM0_Dc;
					local_48._0_8_ = UVar6._0_8_;
					local_48._12_4_ = extraout_XMM0_Dd;
					pUVar5 = source.transform;
					if (pUVar5 != null) {
						rotation = pUVar5.rotation;
						if (pUVar3 != null) {
							UVar6.x = (float)local_48._0_4_;
							UVar6.y = (float)local_48._4_4_;
							pUVar3.SetPositionAndRotation(UVar6, rotation);
							if (*targetAddress != null) {
								pUVar3 = (*targetAddress).transform;
								pUVar5 = source.transform;
								if (pUVar5 != null) {
									UVar6 = pUVar5.lossyScale;
									if (pUVar3 != null) {
										pUVar3.localScale = UVar6;
										TitanSteamEffect.SetSurface(this._steam, this._mesh);
										pUVar4 = this._steam;
										if (pUVar4 != null) {
											local_50 = pUVar4.emission;
											local_50.enabled = false;
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
	label_05c51623: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004582")]
	[Address(RVA = "0x5B51CC0", Offset = "0x5B50CC0", VA = "0x5B51CC0")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$LateUpdate): 46 lines keep C-only constructs
		float fVar1;
		float fVar2;
		ParticleSystem pUVar3;
		Object x;
		List<TitanLimbFallEffect.Attachment> __this_00;
		Matrix4x4 matrix;
		Matrix4x4 matrix_00;
		Matrix4x4 matrix_01;
		Matrix4x4 matrix_02;
		ulong uVar4;
		bool bVar5;
		Transform __this_01;
		GameObject __this_02;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		float fVar17;
		float fVar18;
		float fVar19;
		float fVar20;
		ParticleSystem.EmissionModule local_1b0;
		float local_1a8;
		float fStack_1a4;
		float fStack_1a0;
		float fStack_19c;
		float local_198;
		float fStack_194;
		float fStack_190;
		float fStack_18c;
		byte[] local_188 = new byte[12];
		float fStack_17c;
		float local_178;
		float fStack_174;
		float fStack_170;
		float fStack_16c;
		float local_168;
		float fStack_164;
		float fStack_160;
		float fStack_15c;
		float local_158;
		float fStack_154;
		float fStack_150;
		float fStack_14c;
		System_Collections_Generic_List_Enumerator_T__o local_148;
		float local_128;
		float fStack_124;
		float fStack_120;
		float fStack_11c;
		float local_118;
		float fStack_114;
		float fStack_110;
		float fStack_10c;
		float local_108;
		float fStack_104;
		float fStack_100;
		float fStack_fc;
		float local_f8;
		float fStack_f4;
		float fStack_f0;
		float fStack_ec;
		ulong local_e8;
		ulong uStack_e0;
		ulong local_d8;
		ulong uStack_d0;
		ulong local_c8;
		ulong uStack_c0;
		ulong local_b8;
		ulong uStack_b0;
		ulong local_88;
		ulong uStack_80;
		ulong local_78;
		ulong uStack_70;
		ulong local_48;
		ulong uStack_40;
		ulong local_38;
		ulong uStack_30;

		if (Il2CppMethodInitialized_07547856 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_MoveNext) ;
			Il2CppMethodInitialized_07547856 = true;
		}
		local_148._list = null;
		local_148._index = 0;
		local_148._version = 0;
		local_148._current = null;
		fVar6 = Time.deltaTime;
		this.UpdateMotion(fVar6);
		pUVar3 = this._blood;
		bVar5 = ((Object)pUVar3 != null);
		if ((bVar5) && (this._dissolveDelay <= this._age)) {
			pUVar3 = this._blood;
			if (pUVar3 == null) goto label_05c52516;
			bVar5 = pUVar3.isEmitting;
			if (bVar5) {
				pUVar3 = this._blood;
				if (pUVar3 == null) goto label_05c52516;
				pUVar3.Stop(true, 1);
			}
		}
		fVar6 = this._age - this._dissolveDelay;
		if (4.3 <= fVar6) {
			pUVar3 = this._steam;
			if (pUVar3 != null) {
				pUVar3.Stop(true, 0);
				__this_02 = this.gameObject;
				if (__this_02 != null) {
					__this_02.SetActive(false);
					return;
				}
			}
		}
		else {
			pUVar3 = this._steam;
			if (pUVar3 != null) {
				local_1b0 = pUVar3.emission;
				local_1b0.enabled = (bool)(-(0.0 < fVar6 && fVar6 < 3.0) & 1);
				bVar5 = local_1b0.enabled;
				if (bVar5) {
					pUVar3 = this._steam;
					if (pUVar3 == null) goto label_05c52516;
					bVar5 = pUVar3.isPlaying;
					if (!bVar5) {
						pUVar3 = this._steam;
						if (pUVar3 == null) goto label_05c52516;
						pUVar3.Play(false);
					}
				}
				if (fVar6 < 3.0) {
					__this_01 = this.transform;
					if (__this_01 == null) goto label_05c52516;
					fVar6 = fVar6 / 3.0;
					fVar13 = 1.0;
					if (fVar6 <= 1.0) {
						fVar13 = fVar6;
					}
					fVar13 = (float)(-(uint)(0.0 <= fVar6) & (uint)fVar13);
					local_188.get_localToWorldMatrix(__this_01);
					fVar6 = this._meshOffset.m01;
					fVar16 = this._meshOffset.m00;
					fVar8 = this._meshOffset.m11;
					fVar10 = this._meshOffset.m10;
					fVar1 = this._meshOffset.m21;
					fVar2 = this._meshOffset.m20;
					fVar19 = this._meshOffset.m31;
					fVar20 = this._meshOffset.m30;
					local_1a8 = fVar20 * local_158 + fVar2 * local_168 + fVar10 * local_178 + fVar16 * (float)local_188._0_4_;
					fStack_1a4 = fVar19 * fStack_154 + fVar1 * fStack_164 + fVar8 * fStack_174 + fVar6 * (float)local_188._4_4_;
					fStack_1a0 = fVar20 * fStack_150 + fVar2 * fStack_160 + fVar10 * fStack_170 + fVar16 * (float)local_188._8_4_;
					fStack_19c = fVar19 * fStack_14c + fVar1 * fStack_15c + fVar8 * fStack_16c + fVar6 * fStack_17c;
					local_198 = fVar19 * local_158 + fVar1 * local_168 + fVar8 * local_178 + fVar6 * (float)local_188._0_4_;
					fStack_194 = fVar20 * fStack_154 + fVar2 * fStack_164 + fVar10 * fStack_174 + fVar16 * (float)local_188._4_4_;
					fStack_190 = fVar19 * fStack_150 + fVar1 * fStack_160 + fVar8 * fStack_170 + fVar6 * (float)local_188._8_4_;
					fStack_18c = fVar20 * fStack_14c + fVar2 * fStack_15c + fVar10 * fStack_16c + fVar16 * fStack_17c;
					fVar6 = this._meshOffset.m02;
					fVar16 = this._meshOffset.m12;
					fVar8 = this._meshOffset.m22;
					fVar10 = this._meshOffset.m32;
					fVar1 = this._meshOffset.m03;
					fVar2 = this._meshOffset.m13;
					fVar19 = this._meshOffset.m23;
					fVar20 = this._meshOffset.m33;
					x = (Object)this._tissueMesh;
					fVar14 = fVar8 * local_168 + fVar16 * local_178 + fVar6 * (float)local_188._0_4_ + fVar10 * local_158;
					fVar15 = fVar8 * fStack_164 + fVar16 * fStack_174 + fVar6 * (float)local_188._4_4_ + fVar10 * fStack_154;
					fVar17 = fVar8 * fStack_160 + fVar16 * fStack_170 + fVar6 * (float)local_188._8_4_ + fVar10 * fStack_150;
					fVar18 = fVar8 * fStack_15c + fVar16 * fStack_16c + fVar6 * fStack_17c + fVar10 * fStack_14c;
					fVar7 = fVar19 * local_168 + fVar2 * local_178 + fVar1 * (float)local_188._0_4_ + fVar20 * local_158;
					fVar9 = fVar19 * fStack_164 + fVar2 * fStack_174 + fVar1 * (float)local_188._4_4_ + fVar20 * fStack_154;
					fVar11 = fVar19 * fStack_160 + fVar2 * fStack_170 + fVar1 * (float)local_188._8_4_ + fVar20 * fStack_150;
					fVar12 = fVar19 * fStack_15c + fVar2 * fStack_16c + fVar1 * fStack_17c + fVar20 * fStack_14c;
					bVar5 = (x != null);
					fVar20 = fStack_18c;
					fVar19 = fStack_190;
					fVar2 = fStack_194;
					fVar1 = local_198;
					fVar10 = fStack_19c;
					fVar8 = fStack_1a0;
					fVar16 = fStack_1a4;
					fVar6 = local_1a8;
					if (bVar5) {
						local_48 = CONCAT44(fVar15, fVar14);
						uStack_40 = CONCAT44(fVar18, fVar17);
						local_38 = CONCAT44(fVar9, fVar7);
						uStack_30 = CONCAT44(fVar12, fVar11);
						matrix.m10 = fStack_194;
						matrix.m00 = local_1a8;
						matrix.m30 = fStack_18c;
						matrix.m20 = fStack_1a0;
						matrix.m11 = fStack_1a4;
						matrix.m01 = local_198;
						matrix.m31 = fStack_19c;
						matrix.m21 = fStack_190;
						matrix.m02 = fVar14;
						matrix.m12 = fVar15;
						matrix.m22 = fVar17;
						matrix.m32 = fVar18;
						matrix.m03 = fVar7;
						matrix.m13 = fVar9;
						matrix.m23 = fVar11;
						matrix.m33 = fVar12;
						this.Draw(this._tissueMesh, this._tissueMaterials, this._properties, matrix, fVar13);
					}
					if (fVar13 <= 0.85950404) {
						local_88 = CONCAT44(fVar15, fVar14);
						uStack_80 = CONCAT44(fVar18, fVar17);
						local_78 = CONCAT44(fVar9, fVar7);
						uStack_70 = CONCAT44(fVar12, fVar11);
						matrix_00.m10 = fVar2;
						matrix_00.m00 = fVar6;
						matrix_00.m30 = fVar20;
						matrix_00.m20 = fVar8;
						matrix_00.m11 = fVar16;
						matrix_00.m01 = fVar1;
						matrix_00.m31 = fVar10;
						matrix_00.m21 = fVar19;
						matrix_00.m02 = fVar14;
						matrix_00.m12 = fVar15;
						matrix_00.m22 = fVar17;
						matrix_00.m32 = fVar18;
						matrix_00.m03 = fVar7;
						matrix_00.m13 = fVar9;
						matrix_00.m23 = fVar11;
						matrix_00.m33 = fVar12;
						this.Draw(this._mesh, this._materials, this._properties, matrix_00, fVar13);
						if (this._hasGrowth != false) {
							local_e8 = CONCAT44(fVar2, fVar6);
							uStack_e0 = CONCAT44(fVar20, fVar8);
							local_d8 = CONCAT44(fVar16, fVar1);
							uStack_d0 = CONCAT44(fVar10, fVar19);
							local_c8 = CONCAT44(fVar15, fVar14);
							uStack_c0 = CONCAT44(fVar18, fVar17);
							local_b8 = CONCAT44(fVar9, fVar7);
							uStack_b0 = CONCAT44(fVar12, fVar11);
							matrix_01.m20 = fVar8;
							matrix_01.m30 = fVar20;
							matrix_01.m00 = fVar6;
							matrix_01.m10 = fVar2;
							matrix_01.m01 = fVar1;
							matrix_01.m11 = fVar16;
							matrix_01.m21 = fVar19;
							matrix_01.m31 = fVar10;
							matrix_01.m02 = fVar14;
							matrix_01.m12 = fVar15;
							matrix_01.m22 = fVar17;
							matrix_01.m32 = fVar18;
							matrix_01.m03 = fVar7;
							matrix_01.m13 = fVar9;
							matrix_01.m23 = fVar11;
							matrix_01.m33 = fVar12;
							this.Draw(this._growthMesh, this._growthMaterials, this._growthProperties, matrix_01, fVar13);
						}
						__this_00 = this._attachments;
						if (__this_00 == null) goto label_05c52516;
						local_148 = __this_00.GetEnumerator();
						local_188._0_8_ = 0;
						unique0x1000234d = &local_148;
						while(true) {
							bVar5 = local_148.MoveNext();
							uVar4 = local_188._0_8_;
							if (!bVar5) break;
							if (local_148._current == null) {
								throw new NullReferenceException();
							}
							fVar8 = SUB84(local_148._current[1].monitor, 0);
							fVar10 = (float)((ulong)local_148._current[1].monitor >> 0x20);
							fVar6 = *(float)&local_148._current[2].klass;
							fVar16 = *(float)((long)&local_148._current[2].klass + 4);
							local_128 = fVar16 * fVar7 + fVar6 * fVar14 + fVar8 * local_1a8 + fVar10 * local_198;
							fStack_124 = fVar16 * fVar9 + fVar6 * fVar15 + fVar10 * fStack_1a4 + fVar8 * fStack_194;
							fStack_120 = fVar16 * fVar11 + fVar6 * fVar17 + fVar8 * fStack_1a0 + fVar10 * fStack_190;
							fStack_11c = fVar16 * fVar12 + fVar6 * fVar18 + fVar10 * fStack_19c + fVar8 * fStack_18c;
							fVar6 = *(float)&local_148._current[3].klass;
							fVar16 = *(float)((long)&local_148._current[3].klass + 4);
							fVar8 = *(float)&local_148._current[4].klass;
							fVar10 = *(float)((long)&local_148._current[4].klass + 4);
							fVar1 = *(float)&local_148._current[5].klass;
							fVar2 = *(float)((long)&local_148._current[5].klass + 4);
							fVar19 = SUB84(local_148._current[2].monitor, 0);
							fVar20 = (float)((ulong)local_148._current[2].monitor >> 0x20);
							local_118 = fVar16 * fVar7 + fVar6 * fVar14 + fVar19 * local_1a8 + fVar20 * local_198;
							fStack_114 = fVar16 * fVar9 + fVar6 * fVar15 + fVar20 * fStack_1a4 + fVar19 * fStack_194;
							fStack_110 = fVar16 * fVar11 + fVar6 * fVar17 + fVar19 * fStack_1a0 + fVar20 * fStack_190;
							fStack_10c = fVar16 * fVar12 + fVar6 * fVar18 + fVar20 * fStack_19c + fVar19 * fStack_18c;
							fVar6 = SUB84(local_148._current[3].monitor, 0);
							fVar16 = (float)((ulong)local_148._current[3].monitor >> 0x20);
							local_108 = fVar10 * fVar7 + fVar8 * fVar14 + fVar6 * local_1a8 + fVar16 * local_198;
							fStack_104 = fVar10 * fVar9 + fVar8 * fVar15 + fVar16 * fStack_1a4 + fVar6 * fStack_194;
							fStack_100 = fVar10 * fVar11 + fVar8 * fVar17 + fVar6 * fStack_1a0 + fVar16 * fStack_190;
							fStack_fc = fVar10 * fVar12 + fVar8 * fVar18 + fVar16 * fStack_19c + fVar6 * fStack_18c;
							fVar6 = SUB84(local_148._current[4].monitor, 0);
							fVar16 = (float)((ulong)local_148._current[4].monitor >> 0x20);
							local_f8 = fVar2 * fVar7 + fVar1 * fVar14 + fVar6 * local_1a8 + fVar16 * local_198;
							fStack_f4 = fVar2 * fVar9 + fVar1 * fVar15 + fVar16 * fStack_1a4 + fVar6 * fStack_194;
							fStack_f0 = fVar2 * fVar11 + fVar1 * fVar17 + fVar6 * fStack_1a0 + fVar16 * fStack_190;
							fStack_ec = fVar2 * fVar12 + fVar1 * fVar18 + fVar16 * fStack_19c + fVar6 * fStack_18c;
							matrix_02.m10 = fStack_124;
							matrix_02.m00 = local_128;
							matrix_02.m30 = fStack_11c;
							matrix_02.m20 = fStack_120;
							matrix_02.m11 = fStack_114;
							matrix_02.m01 = local_118;
							matrix_02.m31 = fStack_10c;
							matrix_02.m21 = fStack_110;
							matrix_02.m12 = fStack_104;
							matrix_02.m02 = local_108;
							matrix_02.m32 = fStack_fc;
							matrix_02.m22 = fStack_100;
							matrix_02.m13 = fStack_f4;
							matrix_02.m03 = local_f8;
							matrix_02.m33 = fStack_ec;
							matrix_02.m23 = fStack_f0;
							this.Draw((Mesh)local_148._current[1].klass, local_148._current[5].monitor, (MaterialPropertyBlock)local_148._current[6].klass, matrix_02, fVar13);
						}
						stack0xfffffffffffffe80.Dispose();
						if (uVar4 != 0) {
							throw;
						}
					}
				}
				return;
			}
		}
	label_05c52516: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004583")]
	[Address(RVA = "0x5B52570", Offset = "0x5B51570", VA = "0x5B52570")]
	private void UpdateMotion(float deltaTime)
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$UpdateMotion): 92 lines keep C-only constructs
		Vector3 pUVar1;
		float fVar2;
		float fVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		float fVar9;
		uint uVar12;
		uint uVar13;
		ulong uVar10;
		uint uVar14;
		uint uVar15;
		uint uVar16;
		float fVar17;
		ulong uVar11;
		int layerMask;
		Quaternion UVar19;
		bool bVar20;
		Transform pUVar21;
		UnityEngine_Vector3_StaticFields pUVar22;
		uint uVar24;
		float fVar25;
		float fVar26;
		float fVar27;
		float fVar28;
		float fVar29;
		float fVar30;
		float fVar31;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float fVar32;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float fVar33;
		byte[] auVar34 = new byte[16];
		uint uVar35;
		uint uVar36;
		float fVar37;
		float fVar38;
		float fVar39;
		float fVar40;
		float fVar41;
		float fVar42;
		float fVar43;
		float fVar44;
		float fVar45;
		Quaternion UVar46;
		Quaternion UVar47;
		Quaternion rotation;
		Vector3 UVar48;
		Vector3 UVar49;
		Vector3 UVar50;
		float local_138;
		float fStack_134;
		ulong local_128;
		float local_f8;
		ulong local_e8;
		ulong local_d8;
		float fStack_d0;
		float fStack_cc;
		Quaternion local_b8;
		byte[] local_a8 = new byte[8];
		float fStack_a0;
		float fStack_9c;
		Quaternion local_98;
		ulong local_88;
		ulong uStack_80;
		float local_78;
		float fStack_74;
		float fStack_70;
		float fStack_6c;
		ulong local_68;
		ulong uStack_60;
		byte[] local_58 = new byte[8];
		float fStack_50;
		float fStack_4c;
		RaycastHit local_48;

		local_48.m_UV.x = 0.0;
		local_48.m_UV.y = 0.0;
		local_48.m_Collider.m_Data = (EntityId)0x0;
		local_48.m_Normal.y = 0.0;
		local_48.m_Normal.z = 0.0;
		local_48.m_FaceID = 0;
		local_48.m_Distance = 0.0;
		local_48.m_Point.x = 0.0;
		local_48.m_Point.y = 0.0;
		local_48.m_Point.z = 0.0;
		local_48.m_Normal.x = 0.0;
		fVar26 = 0.0;
		this._age = this._age + deltaTime;
		if (this._landed == false) {
			pUVar21 = this.transform;
			if (pUVar21 == null) goto label_05c52ea1;
			UVar48 = pUVar21.position;
			uVar10._0_4_ = this._velocity.x;
			uVar10._4_4_ = this._velocity.y;
			fVar25 = this._velocity.z;
			local_88 = uVar10;
			if ((typeof(TitanLimbFallEffect)._2).cctor_finished_or_no_cctor == 0) {
				uVar6 = this._velocity.x;
				uVar14 = this._velocity.y;
				fVar25 = this._velocity.z;
				uVar10._0_4_ = (float)uVar6;
				uVar10._4_4_ = (float)uVar14;
			}
			uVar7 = (TitanLimbFallEffect.Gravity).x;
			uVar15 = (TitanLimbFallEffect.Gravity).y;
			fVar37 = (TitanLimbFallEffect.Gravity).z;
			_local_a8 = ZEXT416((uint)fVar37);
			this._velocity.x = (float)uVar7 * deltaTime + (float)uVar10;
			this._velocity.y = (float)uVar15 * deltaTime + uVar10._4_4_;
			this._velocity.z = fVar37 * deltaTime + fVar25;
			uVar8 = this._angularVelocity.x;
			uVar16 = this._angularVelocity.y;
			local_b8.z = this._angularVelocity.z * deltaTime * 0.017453292;
			auVar34 = ZEXT416((uint)local_b8.z);
			local_b8.y = (float)uVar16 * deltaTime * 0.017453292;
			local_b8.x = (float)uVar8 * deltaTime * 0.017453292;
			UVar46 = Quaternion.Internal_FromEulerRad(ref local_b8);
			pUVar21 = this.transform;
			if (pUVar21 == null) goto label_05c52ea1;
			local_138 = UVar48.x;
			fStack_134 = UVar48.y;
			uVar10._0_4_ = deltaTime * 0.5 * deltaTime;
			fVar30 = (float)uVar15 * (float)uVar10 + local_88._4_4_ * deltaTime + fStack_134;
			fVar25 = (float)uVar10 * (float)local_a8._0_4_ + UVar48.z + (float)local_58._0_4_ * deltaTime;
			fVar27 = (float)uVar10 * (float)uVar7 + local_138 + (float)local_88 * deltaTime;
			fVar26 = (float)uVar10 * (float)local_a8._4_4_ + fVar26 + (float)local_58._4_4_ * deltaTime;
			uVar10._0_4_ = (float)uVar10 * (float)uVar15 + fStack_134 + local_88._4_4_ * deltaTime;
			fVar37 = fVar27;
			fVar29 = (float)uVar10;
			UVar47 = pUVar21.rotation;
			fVar9 = UVar47.x;
			fVar17 = UVar47.y;
			local_e8._0_4_ = UVar46.x;
			local_e8._4_4_ = UVar46.y;
			local_d8._0_4_ = UVar46.z;
			local_d8._4_4_ = UVar46.w;
			fStack_d0 = auVar34._8_4_;
			fStack_cc = auVar34._12_4_;
			fVar32 = UVar47.z;
			fVar33 = UVar47.w;
			local_138 = (fVar17 * (float)local_e8 + fVar33 * (float)local_d8 + local_d8._4_4_ * fVar32) - local_e8._4_4_ * fVar9;
			local_128._0_4_ =(fVar32 * local_e8._4_4_ + fVar9 * local_d8._4_4_ + (float)local_e8 * fVar33) -(float)local_d8 * fVar17;
			uVar10._4_4_ = ((fVar33 * local_d8._4_4_ - fVar9 * (float)local_e8) - fVar17 * local_e8._4_4_) - fVar32 * (float)local_d8;
			local_128._4_4_ =(fVar9 * (float)local_d8 + fVar33 * local_e8._4_4_ + fVar17 * local_d8._4_4_) - fVar32 * (float)local_e8;
			local_88 = CONCAT44((float)local_128, local_138);
			uStack_80 = CONCAT44((extraout_XMM0_Dd_00 * extraout_XMM0_Dd + fVar29 * fStack_cc + fStack_cc * fVar29) - extraout_XMM0_Dd * extraout_XMM0_Dd_00, (extraout_XMM0_Dc_00 * extraout_XMM0_Dc + fVar37 * fStack_d0 + fStack_d0 * fVar37) - extraout_XMM0_Dc * extraout_XMM0_Dc_00);
			local_58._4_4_ = local_128._4_4_;
			local_58._0_4_ = uVar10._4_4_;
			fStack_50 = ((fVar37 * local_d8._4_4_ - extraout_XMM0_Dc_00 * extraout_XMM0_Dc) - extraout_XMM0_Dc_00 * extraout_XMM0_Dc) - fVar32 * local_d8._4_4_;
			fStack_4c = ((fVar29 * local_d8._4_4_ - extraout_XMM0_Dd_00 * extraout_XMM0_Dd) - extraout_XMM0_Dd_00 * extraout_XMM0_Dd) - fVar32 * local_e8._4_4_;
			if (this._velocity.y <= 0.0) {
				fStack_134 = fStack_134 - fVar30;
				if (fStack_134 <= 0.0) {
					fStack_134 = 0.0;
				}
				fVar37 = fStack_134 + this._radius + 0.05;
				auVar34 = _local_a8;
				pUVar22 = typeof(Vector3).static_fields;
				fVar9 = (pUVar22.upVector).x;
				fVar17 = (pUVar22.upVector).y;
				local_a8._4_4_ = fVar17;
				local_a8._0_4_ = fVar9;
				fVar29 = (pUVar22.upVector).z;
				fVar32 = 0.0;
				fVar33 = 0.0;
				fVar38 = fVar37;
				fVar40 = fVar37;
				fVar42 = fVar37;
				fVar44 = fVar37;
				if (Il2CppMethodInitialized_075450a5 == false) {
					local_78 = fVar37;
					fStack_74 = fVar37;
					fStack_70 = fVar37;
					fStack_6c = fVar37;
					Il2CppMethodInitialized_075450a5 = true;
					pUVar22 = typeof(Vector3).static_fields;
					fVar9 = (float)local_a8._0_4_;
					fVar17 = (float)local_a8._4_4_;
					fVar32 = fStack_a0;
					fVar33 = fStack_9c;
					fVar38 = local_78;
					fVar40 = fStack_74;
					fVar42 = fStack_70;
					fVar44 = fStack_6c;
					auVar34 = _local_a8;
				}
				_local_a8 = auVar34;
				uVar11._0_4_ = (pUVar22.downVector).x;
				uVar11._4_4_ = (pUVar22.downVector).y;
				fVar2 = (pUVar22.downVector).z;
				fVar3 = this._radius;
				fVar28 = fVar27;
				fVar31 = fVar30;
				uVar35 = 0;
				uVar36 = 0;
				fVar39 = fVar38 * fVar9;
				fVar41 = fVar40 * fVar17;
				fVar43 = fVar42 * fVar32;
				fVar45 = fVar44 * fVar33;
				if ((typeof(TitanLimbFallEffect)._2).cctor_finished_or_no_cctor == 0) {
					local_a8._4_4_ = fVar30;
					local_a8._0_4_ = fVar27;
					fStack_a0 = fVar26;
					fStack_9c = (float)uVar10;
					uStack_60 = 0;
					local_78 = fVar38 * fVar9;
					fStack_74 = fVar40 * fVar17;
					fStack_70 = fVar42 * fVar32;
					fStack_6c = fVar44 * fVar33;
					local_68 = uVar11;
					fVar28 = (float)local_a8._0_4_;
					fVar31 = (float)local_a8._4_4_;
					fVar26 = fStack_a0;
					uVar10._0_4_ = fStack_9c;
					uVar11._0_4_ = (undefined4)local_68;
					uVar11._4_4_ = local_68._4_4_;
					uVar35 = (undefined4)uStack_60;
					uVar36 = uStack_60._4_4_;
					fVar39 = local_78;
					fVar41 = fStack_74;
					fVar43 = fStack_70;
					fVar45 = fStack_6c;
				}
				UVar48.z = fVar29 * fVar37 + fVar25;
				layerMask = TitanLimbFallEffect.GroundMask;
				fVar29 = fVar28 + fVar39;
				fVar9 = fVar31 + fVar41;
				if ((typeof(Physics)._2).cctor_finished_or_no_cctor == 0) {
					local_a8._4_4_ = fVar31 + fVar41;
					local_a8._0_4_ = fVar28 + fVar39;
					fStack_a0 = fVar26 + fVar43;
					fStack_9c = (float)uVar10 + fVar45;
					local_68 = CONCAT44(uVar11._4_4_, (undefined4)uVar11);
					uStack_60 = CONCAT44(uVar36, uVar35);
					fVar29 = (float)local_a8._0_4_;
					fVar9 = (float)local_a8._4_4_;
					uVar11._0_4_ = (undefined4)local_68;
					uVar11._4_4_ = local_68._4_4_;
				}
				UVar48.y = fVar9;
				UVar48.x = fVar29;
				UVar49.y = (float)uVar11._4_4_;
				UVar49.x = (float)(undefined4)uVar11;
				UVar49.z = fVar2;
				bVar20 = Physics.Raycast(UVar48, UVar49, ref local_48, fVar37 + fVar3, layerMask, 1);
				if ((bVar20) &&(UVar48 = local_48.normal, 0.2 < UVar48.y)) {
					UVar48 = local_48.point;
					UVar49 = local_48.normal;
					local_f8 = UVar48.x;
					UVar50 = local_48.normal;
					UVar46.z = local_138;
					UVar46.w = uVar10._4_4_;
					UVar46.x = (float)local_128;
					UVar46.y = local_128._4_4_;
					fVar26 = this.GetSupportHeight(UVar46, UVar50);
					if ((fVar27 - local_f8) * UVar49.x + UVar49.y * (fVar30 - UVar48.y) +(fVar25 - UVar48.z) * UVar49.z <= fVar26 + 0.02) {
						fVar26 = (float)local_88;
						fVar25 = local_88._4_4_;
						this._landed = true;
						UVar48 = local_48.point;
						this._groundPoint.x = UVar48.x;
						this._groundPoint.y = UVar48.y;
						this._groundPoint.z = UVar48.z;
						UVar48 = local_48.normal;
						this._groundNormal.x = UVar48.x;
						this._groundNormal.y = UVar48.y;
						this._groundNormal.z = UVar48.z;
						UVar19.z = local_138;
						UVar19.x = (float)local_128;
						UVar19.y = local_128._4_4_;
						UVar19.w = uVar10._4_4_;
						this._landingRotation = UVar19;
						UVar47.z = local_138;
						UVar47.w = uVar10._4_4_;
						UVar47.x = (float)local_128;
						UVar47.y = local_128._4_4_;
						UVar48 = (UVar47 * (Vector3)this._restNormal);
						uVar10._0_4_ = UVar48.z;
						UVar49 = local_48.normal;
						local_128._0_4_ = UVar48.x;
						local_128._4_4_ = UVar48.y;
						uVar10._4_4_ = UVar49.z * (float)uVar10 + UVar49.y * local_128._4_4_ + UVar49.x * (float)local_128;
						local_128 = UVar48._0_8_;
						if (uVar10._4_4_ < 0.0) {
							local_128 = UVar48._0_8_ ^ 0x8000000080000000;
						}
						uVar24 = -(uint)(uVar10._4_4_ < 0.0);
						UVar48 = local_48.normal;
						local_b8.x = (float)local_128;
						local_b8.y = local_128._4_4_;
						local_b8.z = (float)(~uVar24 & (uint)(float)uVar10 | (uint)-(float)uVar10 & uVar24);
						local_98._0_8_ = UVar48._0_8_;
						local_98.z = UVar48.z;
						UVar46 = Quaternion.Internal_FromToRotation(ref local_b8, ref local_98);
						uVar10._0_4_ = UVar46.x;
						uVar10._4_4_ = UVar46.y;
						fVar37 = UVar46.z;
						fVar29 = UVar46.w;
						local_98.x = ((float)local_88 * uVar10._4_4_ + local_88._4_4_ * fVar29 + (float)uVar10 * (float)local_58._0_4_) - fVar37 * (float)local_58._4_4_;
						local_98.y = (local_88._4_4_ * fVar37 + uVar10._4_4_ * (float)local_58._0_4_ + fVar29 * (float)local_58._4_4_) -(float)local_88 * (float)uVar10;
						local_98.z = ((float)local_58._0_4_ * fVar37 + fVar29 * (float)local_88 +(float)local_58._4_4_ * (float)uVar10) - fVar25 * uVar10._4_4_;
						local_98.w = (((float)local_58._0_4_ * fVar29 - (float)uVar10 * local_88._4_4_) -(float)local_58._4_4_ * uVar10._4_4_) - fVar26 * fVar37;
						this._restRotation.x = local_98.x;
						this._restRotation.y = local_98.y;
						this._restRotation.z = local_98.z;
						this._restRotation.w = local_98.w;
						local_b8.x = this._landingRotation.x;
						local_b8.y = this._landingRotation.y;
						local_b8.z = this._landingRotation.z;
						local_b8.w = this._landingRotation.w;
						fVar25 = this._groundAge * 4.0;
						fVar26 = 1.0;
						if (fVar25 <= 1.0) {
							fVar26 = fVar25;
						}
						fVar26 = (float)(-(uint)(0.0 <= fVar25) & (uint)fVar26);
						goto label_05c5264e;
					}
				}
			}
			pUVar21 = this.transform;
			if (pUVar21 == null) goto label_05c52ea1;
		}
		else {
			fVar26 = this._groundAge;
			fVar25 = deltaTime + fVar26;
			this._groundAge = fVar25;
			if (0.25 <= fVar26) {
				return;
			}
			local_b8.x = this._landingRotation.x;
			local_b8.y = this._landingRotation.y;
			local_b8.z = this._landingRotation.z;
			local_b8.w = this._landingRotation.w;
			fVar25 = fVar25 * 4.0;
			local_98.x = this._restRotation.x;
			local_98.y = this._restRotation.y;
			local_98.z = this._restRotation.z;
			local_98.w = this._restRotation.w;
			fVar26 = 1.0;
			if (fVar25 <= 1.0) {
				fVar26 = fVar25;
			}
			fVar26 = (float)(-(uint)(0.0 <= fVar25) & (uint)fVar26);
	label_05c5264e: ;
			UVar46 = Quaternion.Internal_Slerp(ref local_b8, ref local_98, fVar26);
			pUVar21 = this.transform;
			uVar4 = this._groundPoint.x;
			uVar12 = this._groundPoint.y;
			fVar25 = this._groundPoint.z;
			pUVar1 = &this._groundNormal;
			uVar5 = pUVar1.x;
			uVar13 = pUVar1.y;
			fVar26 = this._groundNormal.z;
			uVar10._0_4_ = this.GetSupportHeight(UVar46, (Vector3)pUVar1.fields);
			if (pUVar21 == null) {
	label_05c52ea1: ;
				throw new NullReferenceException();
			}
			uVar10._0_4_ = (float)uVar10 + 0.02;
			fVar25 = fVar25 + fVar26 * (float)uVar10;
			fVar27 = (float)uVar4 + (float)uVar5 * (float)uVar10;
			fVar30 = (float)uVar12 + (float)uVar13 * (float)uVar10;
			local_128._0_4_ = UVar46.x;
			local_128._4_4_ = UVar46.y;
			local_138 = UVar46.z;
			fStack_134 = UVar46.w;
			uVar10._4_4_ = fStack_134;
		}
		rotation.y = local_128._4_4_;
		rotation.x = (float)local_128;
		rotation.w = uVar10._4_4_;
		rotation.z = local_138;
		UVar50.y = fVar30;
		UVar50.x = fVar27;
		UVar50.z = fVar25;
		pUVar21.SetPositionAndRotation(UVar50, rotation);
		return;
	}

	[Token(Token = "0x6004584")]
	[Address(RVA = "0x5B51730", Offset = "0x5B50730", VA = "0x5B51730")]
	private float GetSupportHeight(Quaternion rotation, Vector3 normal)
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$GetSupportHeight): 34 lines keep C-only constructs
		List<Vector3> __this_00;
		bool bVar1;
		float fVar2;
		uint in_XMM0_Dc;
		uint extraout_XMM0_Dc;
		uint in_XMM0_Dd;
		uint extraout_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		uint in_XMM2_Dc;
		uint in_XMM2_Dd;
		Quaternion rotation_00;
		Vector3 UVar3;
		float local_88;
		byte[] local_78 = new byte[12];
		byte[] local_68 = new byte[16];
		byte[] local_58 = new byte[16];
		System_Collections_Generic_List_Enumerator_T__o local_48;
		ulong uStack_30;
		byte[] local_28 = new byte[24];

		UVar3.z = normal.z;
		local_58._8_4_ = in_XMM2_Dc;
		local_58._0_8_ = normal._0_8_;
		local_58._12_4_ = in_XMM2_Dd;
		local_78._0_4_ = rotation.x;
		local_78._4_4_ = rotation.y;
		local_78._8_4_ = rotation.z;
		if (g_data_07547858 == false) {
			local_68._8_4_ = in_XMM1_Dc;
			local_68._0_8_ = rotation._8_8_;
			local_68._12_4_ = in_XMM1_Dd;
			local_28._8_4_ = in_XMM0_Dc;
			local_28._0_8_ = rotation._0_8_;
			local_28._12_4_ = in_XMM0_Dd;
			g_data_07547858 = true;
			local_78._0_4_ = local_28._0_4_;
			local_78._4_4_ = local_28._4_4_;
			local_78._8_4_ = local_68._0_4_;
		}
		local_48._current = null;
		uStack_30 = 0;
		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		rotation_00 = Quaternion.Internal_Inverse((Quaternion)local_78);
		UVar3.x = (float)local_58._0_4_;
		UVar3.y = (float)local_58._4_4_;
		UVar3 = (rotation_00 * UVar3);
		local_58._8_4_ = extraout_XMM0_Dc;
		local_58._0_8_ = UVar3._0_8_;
		local_58._12_4_ = extraout_XMM0_Dd;
		local_68._0_4_ = UVar3.z;
		__this_00 = this._supportVertices;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_48 = __this_00.GetEnumerator();
		local_78._0_4_ = 0.0;
		local_78._4_4_ = 0.0;
		local_88 = 3.4028235e+38;
		unique0x100004c7 = &local_48;
		while (bVar1 = local_48.MoveNext()) {
			fVar2 = (float)uStack_30 * (float)local_68._0_4_ +(float)((ulong)local_48._current >> 0x20) * (float)local_58._4_4_ + SUB84(local_48._current, 0) * (float)local_58._0_4_;
			if (fVar2 <= local_88) {
				local_88 = fVar2;
			}
		}
		local_48.Dispose();
		return -local_88;
	}

	[Token(Token = "0x6004585")]
	[Address(RVA = "0x5B53090", Offset = "0x5B52090", VA = "0x5B53090")]
	private void SetGroundPose()
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$SetGroundPose): 1 lines keep C-only constructs
		Vector3 pUVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		Transform __this_00;
		float fVar6;
		float fVar7;
		float fVar8;
		Quaternion rotation;
		Vector3 position;
		Quaternion UStack_30;
		Quaternion UStack_20;

		UStack_20.x = this._landingRotation.x;
		UStack_20.y = this._landingRotation.y;
		UStack_20.z = this._landingRotation.z;
		UStack_20.w = this._landingRotation.w;
		fVar6 = this._groundAge * 4.0;
		UStack_30.x = this._restRotation.x;
		UStack_30.y = this._restRotation.y;
		UStack_30.z = this._restRotation.z;
		UStack_30.w = this._restRotation.w;
		fVar8 = 1.0;
		if (fVar6 <= 1.0) {
			fVar8 = fVar6;
		}
		rotation = Quaternion.Internal_Slerp(ref UStack_20, ref UStack_30, (float)(-(uint)(0.0 <= fVar6) & (uint)fVar8));
		__this_00 = this.transform;
		uVar2 = this._groundPoint.x;
		uVar4 = this._groundPoint.y;
		fVar8 = this._groundPoint.z;
		pUVar1 = &this._groundNormal;
		uVar3 = pUVar1.x;
		uVar5 = pUVar1.y;
		fVar6 = this._groundNormal.z;
		fVar7 = this.GetSupportHeight(rotation, (Vector3)pUVar1.fields);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar7 = fVar7 + 0.02;
		position.z = fVar8 + fVar6 * fVar7;
		position.x = (float)uVar2 + (float)uVar3 * fVar7;
		position.y = (float)uVar4 + (float)uVar5 * fVar7;
		__this_00.SetPositionAndRotation(position, rotation);
		return;
	}

	[Token(Token = "0x6004586")]
	[Address(RVA = "0x5B52EB0", Offset = "0x5B51EB0", VA = "0x5B52EB0")]
	private void Draw(Mesh mesh, List<Material> materials, MaterialPropertyBlock properties, Matrix4x4 matrix, float dissolve)
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$Draw): 1 lines keep C-only constructs
		bool receiveShadows;
		uint uVar1;
		int iVar2;
		int iVar3;
		int iVar4;
		Material material;

		if (Il2CppMethodInitialized_07547859 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count) ;
			Il2CppMethodInitialized_07547859 = true;
			uVar1 = (typeof(TitanLimbFallEffect)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanLimbFallEffect)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (((properties == null) ||(properties.SetFloat(*(int)((long)(typeof(TitanLimbFallEffect)).static_fields + 0x18), dissolve), mesh == null)) ||(iVar3 = mesh.subMeshCount, materials == null)) {
			throw new NullReferenceException();
		}
		iVar2 = materials._size;
		if (iVar3 < iVar2) {
			iVar2 = iVar3;
		}
		if (0 < iVar2) {
			iVar3 = 0;
			do {
				material = materials.get_Item(iVar3);
				iVar4 = this._layer;
				receiveShadows = this._receiveShadows;
				Graphics.DrawMesh(mesh, matrix, material, iVar4, null, iVar3, properties, 0, receiveShadows);
				iVar3 = iVar3 + 1;
				iVar4 = mesh.subMeshCount;
				iVar2 = materials._size;
				if (iVar4 < iVar2) {
					iVar2 = iVar4;
				}
			} while (iVar3 < iVar2);
		}
		return;
	}

	[Token(Token = "0x6004587")]
	[Address(RVA = "0x5B531A0", Offset = "0x5B521A0", VA = "0x5B531A0")]
	private void OnDisable()
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$OnDisable): 7 lines keep C-only constructs
		int piVar1;
		Mesh* targetAddress;
		int length;
		Object pUVar2;
		List<TitanLimbFallEffect.Attachment> pSVar3;
		bool bVar4;
		System_Collections_Generic_List_Enumerator_T__o SStack_48;
		byte puStack_28;

		if (Il2CppMethodInitialized_0754785a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Enumerator_TitanLimbFallEffect_Attachment_MoveNext) ;
			Il2CppMethodInitialized_0754785a = true;
		}
		SStack_48._list = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		pUVar2 = (Object)this._tissueMesh;
		bVar4 = (pUVar2 != null);
		if (bVar4) {
			targetAddress = &this._tissueMesh;
			pUVar2 = (Object)*targetAddress;
			Object.Destroy(pUVar2);
			*targetAddress = null;
		}
		pSVar3 = this._attachments;
		if (pSVar3 != null) {
			SStack_48 = pSVar3.GetEnumerator();
			puStack_28 = (byte)&SStack_48;
			while(true) {
				bVar4 = SStack_48.MoveNext();
				if (!bVar4) break;
				if ((TitanLimbFallEffect.Attachment)SStack_48._current ==null) {
					throw new NullReferenceException();
				}
				SStack_48._current.Dispose();
			}
			SStack_48.Dispose();
			pSVar3 = this._attachments;
			if (pSVar3 != null) {
				piVar1 = &pSVar3._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar3._size;
				pSVar3._size = 0;
				if (0 < length) {
					Array.Clear((Array)pSVar3._items, 0, length);
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004588")]
	[Address(RVA = "0x5B53520", Offset = "0x5B52520", VA = "0x5B53520")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$OnDestroy): 9 lines keep C-only constructs
		List<TitanLimbFallEffect> __this_00;
		Object pUVar1;
		List<Material> pSVar2;
		bool bVar3;
		byte[] auStack_60 = new byte[16];
		Object pUStack_50;
		byte[] auStack_48 = new byte[8];
		Object pUStack_38;

		auStack_48 = (byte[])0x0;
		pUStack_38 = null;
		__this_00 = TitanLimbFallEffect.Pool;
		if (__this_00 != null) {
			__this_00.Remove((object)this);
			pUVar1 = (Object)this._mesh;
			bVar3 = (pUVar1 != null);
			if (bVar3) {
				pUVar1 = (Object)this._mesh;
				Object.Destroy(pUVar1);
			}
			pUVar1 = (Object)this._growthMesh;
			bVar3 = (pUVar1 != null);
			if (bVar3) {
				pUVar1 = (Object)this._growthMesh;
				Object.Destroy(pUVar1);
			}
			pSVar2 = this._materials;
			if (pSVar2 != null) {
				auStack_60.GetEnumerator((List<object>)pSVar2);
				pUStack_38 = pUStack_50;
				auStack_48 = (byte[])auStack_60._0_8_;
				auStack_60._0_8_ = null;
				auStack_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_48;
				while(true) {
					bVar3 = auStack_48.MoveNext();
					pUVar1 = pUStack_38;
					if (!bVar3) break;
					Object.Destroy(pUVar1);
				}
				auStack_48.Dispose() ;
				pSVar2 = this._growthMaterials;
				if (pSVar2 != null) {
					auStack_60.GetEnumerator((List<object>)pSVar2);
					pUStack_38 = pUStack_50;
					auStack_48 = (byte[])auStack_60._0_8_;
					auStack_60._0_8_ = null;
					auStack_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_48;
					while(true) {
						bVar3 = auStack_48.MoveNext();
						pUVar1 = pUStack_38;
						if (!bVar3) break;
						Object.Destroy(pUVar1);
					}
					auStack_48.Dispose();
					pSVar2 = this._tissueMaterials;
					if (pSVar2 != null) {
						auStack_60.GetEnumerator((List<object>)pSVar2);
						pUStack_38 = pUStack_50;
						auStack_48 = (byte[])auStack_60._0_8_;
						auStack_60._0_8_ = null;
						auStack_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_48;
						while(true) {
							bVar3 = auStack_48.MoveNext();
							pUVar1 = pUStack_38;
							if (!bVar3) break;
							Object.Destroy(pUVar1);
						}
						auStack_48.Dispose();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004589")]
	[Address(RVA = "0x5B53960", Offset = "0x5B52960", VA = "0x5B53960")]
	public TitanLimbFallEffect()
	{
		// Lifted from source/cpp/Characters/TitanLimbFallEffect.c (Characters.TitanLimbFallEffect$$.ctor): 1 lines keep C-only constructs
		List<Material> pSVar1;
		List<Vector3> pSVar2;
		List<Vector2> __this_00;
		List<int> __this_01;
		List<TitanLimbFallEffect.Attachment> __this_02;

		pSVar1 = new List<Material>();
		this._materials = pSVar1;
		pSVar1 = new List<Material>();
		this._growthMaterials = pSVar1;
		pSVar1 = new List<Material>();
		this._tissueMaterials = pSVar1;
		pSVar1 = new List<Material>();
		this._sourceMaterials = pSVar1;
		pSVar2 = new List<Vector3>();
		this._vertices = pSVar2;
		pSVar2 = new List<Vector3>();
		this._supportVertices = pSVar2;
		__this_00 = new List<Vector2>();
		this._growthCoordinates = __this_00;
		__this_01 = new List<int>();
		this._indices = __this_01;
		__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<TitanLimbFallEffect.Attachment>));
		__this_02 = new List<object>();
		this._attachments = __this_02;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/TitanLimbFallEffect.c.

	// Characters.TitanLimbFallEffect$$.cctor: clean
	static TitanLimbFallEffect()
	{
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		Characters_TitanLimbFallEffect_StaticFields pCVar6;
		LayerMask mask;
		int iVar8;
		Int32[] layers;
		List<TitanLimbFallEffect> __this;

		uVar2 = (Vector3.downVector).x;
		uVar3 = (Vector3.downVector).y;
		fVar1 = (Vector3.downVector).z;
		pCVar6 = typeof(TitanLimbFallEffect).static_fields;
		(pCVar6.Gravity).x = (float)uVar2 * 22.5;
		(pCVar6.Gravity).y = (float)uVar3 * 22.5;
		(pCVar6.Gravity).z = fVar1 * 22.5;
		layers = (Int32[])new int[4];
		if (layers == null) {
			throw new NullReferenceException();
		}
		uVar4 = (uint)layers.Length;
		if (uVar4 != 0) {
			layers[0] = PhysicsLayer.MapObjectAll;
			if (((uVar4 != 1) && (layers[1] = PhysicsLayer.MapObjectEntities, 2 < uVar4)) &&(layers[2] = PhysicsLayer.MapObjectCharacters, uVar4 != 3)) {
				layers[3] = PhysicsLayer.MapObjectTitans;
				mask = PhysicsLayer.GetMask(layers);
				iVar8 = ((LayerMask)mask);
				TitanLimbFallEffect.GroundMask = iVar8;
				__this = new List<TitanLimbFallEffect>();
				pCVar6 = typeof(TitanLimbFallEffect).static_fields;
				pCVar6.Pool = __this;
				iVar8 = Shader.PropertyToID("_Dissolve");
				TitanLimbFallEffect.Dissolve = iVar8;
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// Characters.TitanLimbFallEffect.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(TitanLimbFallEffect.c)) ;
		__this = new Object();
		TitanLimbFallEffect.c.__9 =(TitanLimbFallEffect.c)__this;
		return;
	}

	// Characters.TitanLimbFallEffect.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Characters.TitanLimbFallEffect.<>c$$<Play>b__51_0: clean
	private bool c__Play_b__51_0(TitanLimbFallEffect piece)
	{
		bool bVar1;
		GameObject __this_00;

		if (piece != null) {
			__this_00 = piece.gameObject;
			if (__this_00 != null) {
				bVar1 = __this_00.activeSelf;
				return !bVar1;
			}
		}
		throw new NullReferenceException();
	}
}
