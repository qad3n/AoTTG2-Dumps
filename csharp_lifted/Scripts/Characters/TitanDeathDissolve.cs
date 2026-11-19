// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanDeathDissolve
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/TitanDeathDissolve.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Rendering;

namespace Characters;

[Token(Token = "0x200071F")]
internal sealed class TitanDeathDissolve : IDisposable
{
	[Token(Token = "0x2000720")]
	private readonly struct SteamSource
	{
		[Token(Token = "0x400236B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly Mesh Mesh;

		[Token(Token = "0x400236C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly bool Regrowing;

		[Token(Token = "0x400236D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		public readonly float Growth;

		[Token(Token = "0x6004573")]
		[Address(RVA = "0x5B4AB00", Offset = "0x5B49B00", VA = "0x5B4AB00")]
		public SteamSource(Mesh mesh, bool regrowing, float growth)
		{
			// Lifted from source/cpp/Characters/TitanDeathDissolve.c (Characters.TitanDeathDissolve.SteamSource$$.ctor): clean
			this.Mesh = mesh;
			this.Regrowing = regrowing;
			this.Growth = growth;
			return;
		}
	}

	[Token(Token = "0x2000721")]
	private sealed class Part
	{
		[Token(Token = "0x400236E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly Mesh Mesh;

		[Token(Token = "0x400236F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly Material[] Materials;

		[Token(Token = "0x4002370")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly MaterialPropertyBlock Properties;

		[Token(Token = "0x4002371")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly int Layer;

		[Token(Token = "0x4002372")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public readonly ShadowCastingMode Shadows;

		[Token(Token = "0x4002373")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public readonly Matrix4x4 LocalMatrix;

		[Token(Token = "0x4002374")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public readonly float DissolvedProgress;

		[Token(Token = "0x6004574")]
		[Address(RVA = "0x5B4AF10", Offset = "0x5B49F10", VA = "0x5B4AF10")]
		public Part(Mesh mesh, Material[] materials, MaterialPropertyBlock properties, int layer, ShadowCastingMode shadows, float dissolvedProgress, [Optional] Matrix4x4? localMatrix)
		{
			// Lifted from source/cpp/Characters/TitanDeathDissolve.c (Characters.TitanDeathDissolve.Part$$.ctor): 39 lines keep C-only constructs
			ulong uStack_b8;
			ulong uStack_b0;
			ulong uStack_a8;
			ulong uStack_a0;
			ulong uStack_98;
			ulong uStack_90;
			ulong uStack_88;
			ulong uStack_80;

			base();
			this.Mesh = mesh;
			this.Materials = materials;
			this.Properties = properties;
			this.Layer = layer;
			this.Shadows = shadows;
			this.DissolvedProgress = dissolvedProgress;
			if (localMatrix.hasValue == false) {
				uStack_b8._0_4_ = (Matrix4x4.identityMatrix).m00;
				uStack_b8._4_4_ = (Matrix4x4.identityMatrix).m10;
				uStack_b0._0_4_ = (Matrix4x4.identityMatrix).m20;
				uStack_b0._4_4_ = (Matrix4x4.identityMatrix).m30;
				uStack_a8._0_4_ = (Matrix4x4.identityMatrix).m01;
				uStack_a8._4_4_ = (Matrix4x4.identityMatrix).m11;
				uStack_a0._0_4_ = (Matrix4x4.identityMatrix).m21;
				uStack_a0._4_4_ = (Matrix4x4.identityMatrix).m31;
				uStack_98._0_4_ = (Matrix4x4.identityMatrix).m02;
				uStack_98._4_4_ = (Matrix4x4.identityMatrix).m12;
				uStack_90._0_4_ = (Matrix4x4.identityMatrix).m22;
				uStack_90._4_4_ = (Matrix4x4.identityMatrix).m32;
				uStack_88._0_4_ = (Matrix4x4.identityMatrix).m03;
				uStack_88._4_4_ = (Matrix4x4.identityMatrix).m13;
				uStack_80._0_4_ = (Matrix4x4.identityMatrix).m23;
				uStack_80._4_4_ = (Matrix4x4.identityMatrix).m33;
			}
			else {
				uStack_b8 = localMatrix.value._0_8_;
				uStack_b0 = localMatrix.value._8_8_;
				uStack_a8 = localMatrix.value._16_8_;
				uStack_a0 = localMatrix.value._24_8_;
				uStack_98 = localMatrix.value._32_8_;
				uStack_90 = localMatrix.value._40_8_;
				uStack_88 = localMatrix.value._48_8_;
				uStack_80 = localMatrix.value._56_8_;
			}
			this.LocalMatrix.m03 = (float)(undefined4)uStack_88;
			this.LocalMatrix.m13 = (float)uStack_88._4_4_;
			this.LocalMatrix.m23 = (float)uStack_80;
			this.LocalMatrix.m33 = uStack_80._4_4_;
			this.LocalMatrix.m02 = (float)(undefined4)uStack_98;
			this.LocalMatrix.m12 = (float)uStack_98._4_4_;
			this.LocalMatrix.m22 = (float)(undefined4)uStack_90;
			this.LocalMatrix.m32 = (float)uStack_90._4_4_;
			this.LocalMatrix.m01 = (float)(undefined4)uStack_a8;
			this.LocalMatrix.m11 = (float)uStack_a8._4_4_;
			this.LocalMatrix.m21 = (float)(undefined4)uStack_a0;
			this.LocalMatrix.m31 = (float)uStack_a0._4_4_;
			this.LocalMatrix.m00 = (float)(undefined4)uStack_b8;
			this.LocalMatrix.m10 = (float)uStack_b8._4_4_;
			this.LocalMatrix.m20 = (float)(undefined4)uStack_b0;
			this.LocalMatrix.m30 = (float)uStack_b0._4_4_;
			return;
		}
	}

	[Token(Token = "0x4002351")]
	public const float SteamFadeDuration = 1.25f;

	[Token(Token = "0x4002352")]
	public const float SkinDissolvedProgress = 0.85950404f;

	[Token(Token = "0x4002353")]
	public const float TissueDissolvedProgress = 0.9917355f;

	[Token(Token = "0x4002354")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly int Dissolve;

	[Token(Token = "0x4002355")]
	private const float WispRate = 80f;

	[Token(Token = "0x4002356")]
	private const float PlumeRate = 42f;

	[Token(Token = "0x4002357")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly List<Vector3> Vertices;

	[Token(Token = "0x4002358")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly List<Vector3> Normals;

	[Token(Token = "0x4002359")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly List<Vector3> SurfaceVertices;

	[Token(Token = "0x400235A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly List<int> SurfaceTriangles;

	[Token(Token = "0x400235B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly List<int> Triangles;

	[Token(Token = "0x400235C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly List<Vector2> GrowthCoordinates;

	[Token(Token = "0x400235D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static readonly List<Renderer> Renderers;

	[Token(Token = "0x400235E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static readonly List<Material> SourceMaterials;

	[Token(Token = "0x400235F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static readonly List<SteamSource> SteamSources;

	[Token(Token = "0x4002360")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly BaseTitan _titan;

	[Token(Token = "0x4002361")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly List<Part> _parts;

	[Token(Token = "0x4002362")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<Mesh> _meshes;

	[Token(Token = "0x4002363")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<Material> _materials;

	[Token(Token = "0x4002364")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Shader _shader;

	[Token(Token = "0x4002365")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly float _scale;

	[Token(Token = "0x4002366")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly SkinnedMeshRenderer _bodyRenderer;

	[Token(Token = "0x4002367")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly List<ParticleSystem> _steam;

	[Token(Token = "0x4002368")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly bool _hideOnFinish;

	[Token(Token = "0x4002369")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
	private bool _finished;

	[Token(Token = "0x17000C05")]
	public bool CollidersDisabled
	{
		[Token(Token = "0x6004565")]
		[Address(RVA = "0x5B48260", Offset = "0x5B47260", VA = "0x5B48260")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Characters/TitanDeathDissolve.c (Characters.TitanDeathDissolve$$get_CollidersDisabled): clean
			return this._CollidersDisabled_k__BackingField;
		}
		[Token(Token = "0x6004566")]
		[Address(RVA = "0x5B48270", Offset = "0x5B47270", VA = "0x5B48270")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Characters/TitanDeathDissolve.c (Characters.TitanDeathDissolve$$set_CollidersDisabled): clean
			this._CollidersDisabled_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6004567")]
	[Address(RVA = "0x5B48280", Offset = "0x5B47280", VA = "0x5B48280")]
	public TitanDeathDissolve(BaseTitan titan, SkinnedMeshRenderer body, float scale, Func<Renderer, bool> isFlesh)
	{
		// Lifted from source/cpp/Characters/TitanDeathDissolve.c (Characters.TitanDeathDissolve$$.ctor): 248 lines keep C-only constructs
		int piVar1;
		List<Renderer> pSVar2;
		byte bVar3;
		byte bVar4;
		uint uVar5;
		uint uVar6;
		int length;
		List<Renderer> __this_00;
		Object pUVar7;
		UnityEngine_Matrix4x4_StaticFields pUVar8;
		Object pUVar9;
		List<TitanDeathDissolve.SteamSource> pSVar10;
		TitanDeathDissolve.SteamSource[] pCVar11;
		TitanDeathDissolve.Part[] pCVar12;
		Mesh[] pUVar13;
		Matrix4x4 value;
		Matrix4x4 value_00;
		TitanDeathDissolve.SteamSource item;
		TitanDeathDissolve.SteamSource item_00;
		TitanDeathDissolve.SteamSource pCVar14;
		float fVar15;
		float fVar16;
		float fVar17;
		float fVar18;
		float fVar19;
		float fVar20;
		float fVar21;
		float fVar22;
		float fVar23;
		float fVar24;
		float fVar25;
		float fVar26;
		float fVar27;
		bool bVar28;
		sbyte cVar29;
		int iVar30;
		int iVar31;
		List<TitanDeathDissolve.Part> pSVar32;
		List<Mesh> pSVar33;
		List<Material> pSVar34;
		List<ParticleSystem> __this_01;
		Shader pUVar35;
		Object pUVar36;
		MaterialPropertyBlock __this_02;
		Transform __this_03;
		Material[] pUVar37;
		Material pUVar38;
		Material pUVar39;
		object pIVar40;
		String pSVar41;
		GameObject pUVar42;
		TitanDeathDissolve.Part pCVar43;
		Mesh pUVar44;
		Material[] pUVar45;
		Characters_TitanDeathDissolve_StaticFields pCVar46;
		object pIVar47;
		MethodInfo pMVar48;
		MethodInfo extraout_RDX;
		ulong uVar49;
		ulong uVar50;
		long lVar51;
		Material* targetAddress;
		float fVar52;
		float fVar53;
		Object local_340;
		byte[] local_328 = new byte[8];
		float fStack_320;
		float fStack_31c;
		float local_318;
		float fStack_314;
		float fStack_310;
		float fStack_30c;
		float local_308;
		float fStack_304;
		float fStack_300;
		float fStack_2fc;
		float local_2f8;
		float fStack_2f4;
		float fStack_2f0;
		float fStack_2ec;
		float local_2e8;
		ulong local_2d8;
		ulong uStack_2d0;
		byte[] local_2c8 = new byte[16];
		ulong local_2b8;
		ulong uStack_2b0;
		System_Collections_Generic_List_Enumerator_object__o local_2a8;
		SkinnedMeshRenderer* local_290;
		List<TitanDeathDissolve.Part>* local_288;
		long local_280;
		System_Collections_Generic_List_Enumerator_object__o local_278;
		MeshFilter local_270;
		ulong local_268;
		ulong uStack_260;
		ulong local_258;
		ulong uStack_250;
		byte[] local_248 = new byte[8];
		ulong local_238;
		ulong uStack_230;
		ulong local_228;
		ulong uStack_220;
		Transform local_218;
		List<Mesh>* local_210;
		undefined5 uStack_205;
		undefined3 uStack_200;
		undefined5 uStack_1fd;
		undefined3 local_1f8;
		undefined5 uStack_1f5;
		undefined3 uStack_1f0;
		undefined5 uStack_1ed;
		undefined3 local_1e8;
		undefined5 uStack_1e5;
		undefined3 uStack_1e0;
		undefined5 uStack_1dd;
		undefined3 local_1d8;
		undefined5 uStack_1d5;
		undefined3 uStack_1d0;
		uint uStack_1cd;
		float fStack_1c9;
		ulong local_1b8;
		ulong uStack_1b0;
		ulong local_1a8;
		ulong uStack_1a0;
		ulong local_198;
		ulong uStack_190;
		ulong local_188;
		ulong uStack_180;
		ulong local_178;
		ulong uStack_170;
		ulong local_168;
		ulong uStack_160;
		ulong local_158;
		ulong uStack_150;
		ulong local_148;
		undefined7 uStack_140;
		float fStack_139;
		ulong local_128;
		ulong uStack_120;
		ulong local_118;
		ulong uStack_110;
		ulong local_108;
		ulong uStack_100;
		ulong local_f8;
		ulong uStack_f0;
		ulong local_e8;
		ulong uStack_e0;
		ulong local_d8;
		ulong uStack_d0;
		ulong local_c8;
		ulong uStack_c0;
		ulong local_b8;
		ulong uStack_b0;
		ulong local_a8;
		ulong uStack_a0;
		ulong local_98;
		ulong uStack_90;
		byte[] local_88 = new byte[16];
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

		if (Il2CppMethodInitialized_0754783b == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count) ;
			Il2CppMethodInitialized_0754783b = true;
		}
		local_2a8._list = null;
		local_2a8._index = 0;
		local_2a8._version = 0;
		local_2a8._current = null;
		local_270 = null;
		pSVar32 = new List<TitanDeathDissolve.Part>();
		local_288 = &this._parts;
		this._parts = pSVar32;
		pSVar33 = new List<Mesh>();
		local_210 = &this._meshes;
		this._meshes = pSVar33;
		pSVar34 = new List<Material>();
		this._materials = pSVar34;
		__this_01 = new List<ParticleSystem>();
		this._steam = __this_01;
		base();
		this._titan = titan;
		if (titan == null) goto label_05c49ba9;
		bVar28 = titan._GoreEnabled_k__BackingField;
		this._hideOnFinish = (bool)(bVar28 ^ 1);
		if (bVar28 != false) {
			pUVar35 = BasicTitanComponentCache.LoadDissolveShader();
			this._shader = pUVar35;
			pUVar36 = (Object)this._shader;
			bVar28 = (pUVar36 == null);
			if (bVar28) {
				return;
			}
		}
		if (titan.EffectsEnabled == false) {
			if (this._hideOnFinish == false) {
				this.HideRenderers();
				return;
			}
			return;
		}
		local_218 = titan.transform;
		local_290 = &this._bodyRenderer;
		this._bodyRenderer = body;
		if (scale <= 0.001) {
			scale = 0.001;
		}
		this._scale = scale;
		titan.GetComponentsInChildren<Renderer>((List<T>)TitanDeathDissolve.Renderers);
		__this_00 = TitanDeathDissolve.Renderers;
		if (__this_00 == null) goto label_05c49ba9;
		local_328.GetEnumerator((List<object>)__this_00);
		local_2a8._current = (object)CONCAT44(fStack_314, local_318);
		local_2a8._list = (List<T>)CONCAT44(local_328._4_4_, local_328._0_4_);
		local_2a8._version = (int32_t)fStack_31c;
		local_2a8._index = (int32_t)fStack_320;
		local_280 = 0;
		local_278 = &local_2a8;
		if (isFlesh == null) {
			lVar51 = 0;
			while (true) {
				bVar28 = local_2a8.MoveNext();
				pIVar47 = local_2a8._current;
				if (!(bVar28)) break;
				if ((Object)local_2a8._current == null) goto label_05c49bbc;
				bVar28 = local_2a8._current.enabled;
				if (bVar28) {
					pUVar7 = (Object)pIVar47.klass;
					bVar3 = (pUVar7._2).typeHierarchyDepth;
					bVar4 = (typeof(SkinnedMeshRenderer)._2).typeHierarchyDepth;
					if (((bVar4 <= bVar3) &&((pUVar7._2).typeHierarchy[(ulong)bVar4 - 1] ==typeof(SkinnedMeshRenderer))) ||((bVar4 = (typeof(MeshRenderer)._2).typeHierarchyDepth, bVar4 <= bVar3 &&((pUVar7._2).typeHierarchy[(ulong)bVar4 - 1] == typeof(MeshRenderer)) ))) {
						throw new NullReferenceException();
					}
				}
			}
			local_340 = null;
		}
		else {
			local_340 = null;
	label_05c48730: ;
			bVar28 = local_2a8.MoveNext();
			pIVar47 = local_2a8._current;
			if (bVar28) {
				if ((Object)local_2a8._current == null) {
	label_05c49bbc: ;
					throw new NullReferenceException();
				}
				bVar28 = local_2a8._current.enabled;
				if (bVar28) {
					pUVar7 = (Object)pIVar47.klass;
					bVar3 = (pUVar7._2).typeHierarchyDepth;
					bVar4 = (typeof(SkinnedMeshRenderer)._2).typeHierarchyDepth;
					if (((bVar4 <= bVar3) &&((pUVar7._2).typeHierarchy[(ulong)bVar4 - 1] ==typeof(SkinnedMeshRenderer))) ||((bVar4 = (typeof(MeshRenderer)._2).typeHierarchyDepth, bVar4 <= bVar3 &&((pUVar7._2).typeHierarchy[(ulong)bVar4 - 1] == typeof(MeshRenderer)) ))) {
						cVar29 = (*(code)isFlesh.invoke_impl)(isFlesh.method_code,pIVar47,isFlesh.method);
						if (this._hideOnFinish == false) {
							__this_02 = new MaterialPropertyBlock();
							pIVar47.GetPropertyBlock(__this_02);
							pUVar8 = typeof(Matrix4x4).static_fields;
							local_2d8._0_4_ = (pUVar8.identityMatrix).m00;
							local_2d8._4_4_ = (pUVar8.identityMatrix).m10;
							uStack_2d0._0_4_ = (pUVar8.identityMatrix).m20;
							uStack_2d0._4_4_ = (pUVar8.identityMatrix).m30;
							local_228._0_4_ = (pUVar8.identityMatrix).m01;
							local_228._4_4_ = (pUVar8.identityMatrix).m11;
							uStack_220._0_4_ = (pUVar8.identityMatrix).m21;
							uStack_220._4_4_ = (pUVar8.identityMatrix).m31;
							local_238._0_4_ = (pUVar8.identityMatrix).m02;
							local_238._4_4_ = (pUVar8.identityMatrix).m12;
							uStack_230._0_4_ = (pUVar8.identityMatrix).m22;
							uStack_230._4_4_ = (pUVar8.identityMatrix).m32;
							local_248._0_4_ = (pUVar8.identityMatrix).m03;
							local_248._4_4_ = (pUVar8.identityMatrix).m13;
							bVar3 = (typeof(MeshRenderer)._2).typeHierarchyDepth;
							pMVar48 = (MethodInfo)(ulong)bVar3;
							if ((((((Object)pIVar47.klass)._2).typeHierarchyDepth < bVar3) ||((((Object)pIVar47.klass)._2).typeHierarchy[(long)&pMVar48[-1].field_0x57] != typeof(MeshRenderer))) ||(bVar28 = pIVar47.TryGetComponent<MeshFilter>((object*)&local_270), pMVar48 = extraout_RDX, !bVar28)) {
								pUVar36 = (Object)this.Bake((Renderer)pIVar47);
								uVar5 = (typeof(Object)._2).cctor_finished_or_no_cctor;
							}
							else {
								if (local_270 == null) {
									throw new NullReferenceException();
								}
								pUVar36 = (Object)local_270.sharedMesh;
								if (local_218 == null) {
									throw new NullReferenceException();
								}
								local_328.get_worldToLocalMatrix(local_218);
								fVar16 = fStack_2ec;
								fVar15 = fStack_2f0;
								fVar53 = fStack_2f4;
								fVar52 = local_2f8;
								local_268 = (Object)CONCAT44(local_328._4_4_, local_328._0_4_);
								uStack_260 = CONCAT44(fStack_31c, fStack_320);
								local_2b8 = (MaterialPropertyBlock)CONCAT44(fStack_314, local_318);
								uStack_2b0 = CONCAT44(fStack_30c, fStack_310);
								local_258 = CONCAT44(fStack_304, local_308);
								uStack_250 = CONCAT44(fStack_2fc, fStack_300);
								__this_03 = pIVar47.transform;
								if (__this_03 == null) {
									throw new NullReferenceException();
								}
								local_328.get_localToWorldMatrix(__this_03);
								if (__this_02 == null) {
									throw new NullReferenceException();
								}
								local_128 = CONCAT44(local_328._4_4_, local_328._0_4_);
								uStack_120 = CONCAT44(fStack_31c, fStack_320);
								local_118 = CONCAT44(fStack_320, local_328._4_4_);
								uStack_110 = CONCAT44(local_318, fStack_31c);
								local_108 = CONCAT44(fStack_31c, fStack_320);
								uStack_100 = CONCAT44(fStack_314, local_318);
								local_2d8 = CONCAT44(local_318, fStack_31c);
								uStack_2d0 = CONCAT44(fStack_310, fStack_314);
								local_f8 = CONCAT44(fStack_314, local_318);
								uStack_f0 = CONCAT44(fStack_30c, fStack_310);
								local_e8 = CONCAT44(fStack_310, fStack_314);
								uStack_e0 = CONCAT44(local_308, fStack_30c);
								local_d8 = CONCAT44(fStack_30c, fStack_310);
								uStack_d0 = CONCAT44(fStack_304, local_308);
								local_228 = CONCAT44(local_308, fStack_30c);
								uStack_220 = CONCAT44(fStack_300, fStack_304);
								local_c8 = CONCAT44(fStack_304, local_308);
								uStack_c0 = CONCAT44(fStack_2fc, fStack_300);
								local_b8 = CONCAT44(fStack_300, fStack_304);
								uStack_b0 = CONCAT44(local_2f8, fStack_2fc);
								local_a8 = CONCAT44(fStack_2fc, fStack_300);
								uStack_a0 = CONCAT44(fStack_2f4, local_2f8);
								local_238 = CONCAT44(local_2f8, fStack_2fc);
								uStack_230 = CONCAT44(fStack_2f0, fStack_2f4);
								local_98 = CONCAT44(fStack_2f4, local_2f8);
								uStack_90 = CONCAT44(fStack_2ec, fStack_2f0);
								local_88 = ZEXT416((uint)fStack_2f4);
								local_2c8 = ZEXT416((uint)fStack_2f0);
								__this_02.SetFloat("_UseMeshPosition", 1.0);
								local_78 = (float)local_2d8 * fVar52 +(float)local_108 * (float)local_258 +(float)local_118 * (float)local_2b8 + (float)local_128 * (float)local_268;
								fStack_74 = (float)local_2d8 * fVar53 +(float)local_108 * local_258._4_4_ +(float)local_118 * local_2b8._4_4_ + (float)local_128 * local_268._4_4_;
								fStack_70 = (float)local_2d8 * fVar15 +(float)local_108 * (float)uStack_250 +(float)local_118 * (float)uStack_2b0 + (float)local_128 * (float)uStack_260;
								fStack_6c = (float)local_2d8 * fVar16 +(float)local_108 * uStack_250._4_4_ +(float)local_118 * uStack_2b0._4_4_ + (float)local_128 * uStack_260._4_4_;
								local_68 = (float)local_228 * fVar52 +(float)local_d8 * (float)local_258 +(float)local_e8 * (float)local_2b8 + (float)local_f8 * (float)local_268;
								fStack_64 = (float)local_228 * fVar53 +(float)local_d8 * local_258._4_4_ +(float)local_e8 * local_2b8._4_4_ + (float)local_f8 * local_268._4_4_;
								fStack_60 = (float)local_228 * fVar15 +(float)local_d8 * (float)uStack_250 +(float)local_e8 * (float)uStack_2b0 + (float)local_f8 * (float)uStack_260;
								fStack_5c = (float)local_228 * fVar16 +(float)local_d8 * uStack_250._4_4_ +(float)local_e8 * uStack_2b0._4_4_ + (float)local_f8 * uStack_260._4_4_;
								local_58 = (float)local_238 * fVar52 +(float)local_a8 * (float)local_258 +(float)local_b8 * (float)local_2b8 + (float)local_c8 * (float)local_268;
								fStack_54 = (float)local_238 * fVar53 +(float)local_a8 * local_258._4_4_ +(float)local_b8 * local_2b8._4_4_ + (float)local_c8 * local_268._4_4_;
								fStack_50 = (float)local_238 * fVar15 +(float)local_a8 * (float)uStack_250 +(float)local_b8 * (float)uStack_2b0 + (float)local_c8 * (float)uStack_260;
								fStack_4c = (float)local_238 * fVar16 +(float)local_a8 * uStack_250._4_4_ +(float)local_b8 * uStack_2b0._4_4_ + (float)local_c8 * uStack_260._4_4_;
								local_48 = (float)local_248._0_4_ * fVar52 +(float)local_2c8._0_4_ * (float)local_258 +(float)local_88._0_4_ * (float)local_2b8 + (float)local_98 * (float)local_268;
								fStack_44 = (float)local_248._0_4_ * fVar53 +(float)local_2c8._0_4_ * local_258._4_4_ +(float)local_88._0_4_ * local_2b8._4_4_ + (float)local_98 * local_268._4_4_;
								fStack_40 = (float)local_248._0_4_ * fVar15 +(float)local_2c8._0_4_ * (float)uStack_250 +(float)local_88._0_4_ * (float)uStack_2b0 + (float)local_98 * (float)uStack_260;
								fStack_3c = (float)local_248._0_4_ * fVar16 +(float)local_2c8._0_4_ * uStack_250._4_4_ +(float)local_88._0_4_ * uStack_2b0._4_4_ + (float)local_98 * uStack_260._4_4_;
								local_2d8 = CONCAT44(fStack_74, local_78);
								uStack_2d0 = CONCAT44(fStack_6c, fStack_70);
								local_228 = CONCAT44(fStack_64, local_68);
								uStack_220 = CONCAT44(fStack_5c, fStack_60);
								local_238 = CONCAT44(fStack_54, local_58);
								uStack_230 = CONCAT44(fStack_4c, fStack_50);
								local_248._4_4_ = fStack_44;
								local_248._0_4_ = local_48;
								value.m10 = fStack_74;
								value.m00 = local_78;
								value.m30 = fStack_6c;
								value.m20 = fStack_70;
								value.m11 = fStack_64;
								value.m01 = local_68;
								value.m31 = fStack_5c;
								value.m21 = fStack_60;
								value.m12 = fStack_54;
								value.m02 = local_58;
								value.m32 = fStack_4c;
								value.m22 = fStack_50;
								value.m13 = fStack_44;
								value.m03 = local_48;
								value.m33 = fStack_3c;
								value.m23 = fStack_40;
								__this_02.SetMatrix("_MeshToDissolve", value);
								uVar5 = (typeof(Object)._2).cctor_finished_or_no_cctor;
							}
							if (uVar5 == 0) {
							}
							bVar28 = (pUVar36 == null);
							if (!bVar28) {
								pUVar9 = (Object)*local_290;
								bVar28 = ((Object)pIVar47 == pUVar9);
								if (bVar28) {
									local_340 = pUVar36;
								}
								pIVar47.GetSharedMaterials(TitanDeathDissolve.SourceMaterials);
								pSVar34 = TitanDeathDissolve.SourceMaterials;
								if (pSVar34 == null) {
									throw new NullReferenceException();
								}
								pUVar37 = (Material[])new Material[pSVar34._size];
								local_2b8 = __this_02;
								local_268 = pUVar36;
								if (pUVar37 == null) {
									throw new NullReferenceException();
								}
								targetAddress = pUVar37.m_Items;
								local_2c8._0_8_ = targetAddress;
								if (0 < (int)pUVar37.Length) {
									local_258 = CONCAT44(local_258._4_4_, 0x3f800000);
									if (cVar29 == false) {
										local_258 = (ulong)(uint)local_258._4_4_ << 0x20;
									}
									uVar50 = 0;
									do {
										pSVar34 = TitanDeathDissolve.SourceMaterials;
										if (pSVar34 == null) {
											throw new NullReferenceException();
										}
										pUVar38 = pSVar34.get_Item((int32_t)uVar50);
										bVar28 = ((Object)pUVar38 == null);
										if (!bVar28) {
											pUVar39 = this.CreateMaterial(pUVar38, 0.0);
											if ((pUVar39 != null) &&(pIVar40 = il2cpp_vm_Object_IsInst((object)pUVar39, (((pUVar37.obj).klass)._1).element_class), pIVar40 == null)) {
												pIVar47 = new ArrayTypeMismatchException();
												throw pIVar47;
											}
											if ((uint)pUVar37.Length <= uVar50) {
												throw new IndexOutOfRangeException();
											}
											*targetAddress = pUVar39;
											if ((uint)pUVar37.Length <= uVar50) {
												throw new IndexOutOfRangeException();
											}
											if (*targetAddress == null) {
	label_05c49bc1: ;
												throw new NullReferenceException();
											}
											(*targetAddress).SetFloat("_Flesh", (float)local_258);
											if ((uint)pUVar37.Length <= uVar50) {
												throw new IndexOutOfRangeException();
											}
											if (pUVar38 == null) {
												throw new NullReferenceException();
											}
											pUVar39 = *targetAddress;
											pUVar36 = (Object)pUVar38.shader;
											if (pUVar36 == null) {
												throw new NullReferenceException();
											}
											pSVar41 = pUVar36.name;
											bVar28 = (pSVar41 == "AoTTG/TitanWound");
											if (pUVar39 == null) goto label_05c49bc1;
											fVar52 = 1.0;
											if (!bVar28) {
												fVar52 = 0.0;
											}
											pUVar39.SetFloat("_VertexColor", fVar52);
											if ((uint)pUVar37.Length <= uVar50) {
												throw new IndexOutOfRangeException();
											}
											pUVar39 = *targetAddress;
											pUVar36 = (Object)pUVar38.shader;
											if (pUVar36 == null) {
												throw new NullReferenceException();
											}
											pSVar41 = pUVar36.name;
											bVar28 = (pSVar41 == "AoTTG/TitanRegrowth");
											if (pUVar39 == null) goto label_05c49bc1;
											fVar52 = 1.0;
											if (!bVar28) {
												fVar52 = 0.0;
											}
											pUVar39.SetFloat("_Regrowth", fVar52);
										}
										uVar50 = uVar50 + 1;
										targetAddress = targetAddress + 1;
									} while ((long)uVar50 < (long)(int)pUVar37.Length);
								}
								pSVar32 = *local_288;
								pUVar42 = pIVar47.gameObject;
								if (pUVar42 == null) {
									throw new NullReferenceException();
								}
								iVar30 = pUVar42.layer;
								iVar31 = pIVar47.shadowCastingMode;
								local_2f8 = 0.0;
								fStack_2f4 = 0.0;
								fStack_2f0 = 0.0;
								fStack_2ec = 0.0;
								local_308 = 0.0;
								fStack_304 = 0.0;
								fStack_300 = 0.0;
								fStack_2fc = 0.0;
								local_318 = 0.0;
								fStack_314 = 0.0;
								fStack_310 = 0.0;
								fStack_30c = 0.0;
								local_328._0_4_ = 0.0;
								local_328._4_4_ = 0.0;
								fStack_320 = 0.0;
								fStack_31c = 0.0;
								local_2e8 = 0.0;
								uStack_205 = (undefined5)((ulong)local_2d8 >> 0x18);
								uStack_200 = (undefined3)uStack_2d0;
								uStack_1fd = (undefined5)((ulong)uStack_2d0 >> 0x18);
								local_1f8 = (undefined3)local_228;
								uStack_1f5 = (undefined5)((ulong)local_228 >> 0x18);
								uStack_1f0 = (undefined3)uStack_220;
								uStack_1ed = (undefined5)((ulong)uStack_220 >> 0x18);
								local_1e8 = (undefined3)local_238;
								uStack_1e5 = (undefined5)((ulong)local_238 >> 0x18);
								uStack_1e0 = (undefined3)uStack_230;
								uStack_1dd = (undefined5)((ulong)uStack_230 >> 0x18);
								local_1d8 = local_248._0_3_;
								uStack_1d5 = local_248._3_5_;
								uStack_1d0 = local_248._8_3_;
								uStack_1cd = local_248._11_4_;
								fStack_1c9._0_1_ = local_248[0xf];
								value_00.m20 = (float)(undefined4)uStack_2d0;
								value_00.m30 = (float)uStack_2d0._4_4_;
								value_00.m00 = (float)local_2d8;
								value_00.m10 = (float)local_2d8._4_4_;
								value_00.m01 = (float)local_228;
								value_00.m11 = (float)local_228._4_4_;
								value_00.m21 = (float)(undefined4)uStack_220;
								value_00.m31 = (float)uStack_220._4_4_;
								value_00.m02 = (float)local_238;
								value_00.m12 = (float)local_238._4_4_;
								value_00.m22 = (float)(undefined4)uStack_230;
								value_00.m32 = (float)uStack_230._4_4_;
								value_00.m03 = (float)local_248._0_4_;
								value_00.m13 = (float)local_248._4_4_;
								value_00.m23 = (float)local_248._8_4_;
								value_00.m33 = (float)local_248._12_4_;
								local_328 = new Nullable<Matrix4x4>(value_00);
								local_2d8 = CONCAT71(local_2d8._1_7_, local_328[0]);
								local_178 = CONCAT17(fStack_320._0_1_, CONCAT43(local_328._4_4_, local_328._1_3_));
								uStack_170 = CONCAT17(local_318._0_1_, CONCAT43(fStack_31c, fStack_320._1_3_));
								local_168 = CONCAT17(fStack_310._0_1_, CONCAT43(fStack_314, local_318._1_3_));
								uStack_160 = CONCAT17(local_308._0_1_, CONCAT43(fStack_30c, fStack_310._1_3_));
								local_158 = CONCAT17(fStack_300._0_1_, CONCAT43(fStack_304, local_308._1_3_));
								uStack_150 = CONCAT17(local_2f8._0_1_, CONCAT43(fStack_2fc, fStack_300._1_3_));
								local_148 = CONCAT17(fStack_2f0._0_1_, CONCAT43(fStack_2f4, local_2f8._1_3_));
								uStack_140 = CONCAT43(fStack_2ec, fStack_2f0._1_3_);
								fStack_139 = local_2e8;
								if (Il2CppMethodInitialized_07547849 == false) {
									il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Matrix4x4_get_HasValue) ;
									Il2CppMethodInitialized_07547849 = true;
								}
								pCVar43 = new TitanDeathDissolve.Part();
								pCVar43.Mesh = (Mesh)local_268;
								pCVar43.Materials = pUVar37;
								pCVar43.Properties = local_2b8;
								pCVar43.Layer = iVar30;
								pCVar43.Shadows = iVar31;
								pCVar43.DissolvedProgress = 0.85950404;
								local_1d8 = (undefined3)local_148;
								uStack_1d5 = (undefined5)((ulong)local_148 >> 0x18);
								uStack_1d0 = (undefined3)uStack_140;
								uStack_1cd = (undefined4)((uint7)uStack_140 >> 0x18);
								fStack_1c9 = fStack_139;
								local_1e8 = (undefined3)local_158;
								uStack_1e5 = (undefined5)((ulong)local_158 >> 0x18);
								uStack_1e0 = (undefined3)uStack_150;
								uStack_1dd = (undefined5)((ulong)uStack_150 >> 0x18);
								local_1f8 = (undefined3)local_168;
								uStack_1f5 = (undefined5)((ulong)local_168 >> 0x18);
								uStack_1f0 = (undefined3)uStack_160;
								uStack_1ed = (undefined5)((ulong)uStack_160 >> 0x18);
								uStack_205 = (undefined5)((ulong)local_178 >> 0x18);
								uStack_200 = (undefined3)uStack_170;
								uStack_1fd = (undefined5)((ulong)uStack_170 >> 0x18);
								if ((char)local_2d8 == false) {
									pUVar8 = typeof(Matrix4x4).static_fields;
									local_1b8._0_4_ = (pUVar8.identityMatrix).m00;
									local_1b8._4_4_ = (pUVar8.identityMatrix).m10;
									uStack_1b0._0_4_ = (pUVar8.identityMatrix).m20;
									uStack_1b0._4_4_ = (pUVar8.identityMatrix).m30;
									local_1a8._0_4_ = (pUVar8.identityMatrix).m01;
									local_1a8._4_4_ = (pUVar8.identityMatrix).m11;
									uStack_1a0._0_4_ = (pUVar8.identityMatrix).m21;
									uStack_1a0._4_4_ = (pUVar8.identityMatrix).m31;
									local_198._0_4_ = (pUVar8.identityMatrix).m02;
									local_198._4_4_ = (pUVar8.identityMatrix).m12;
									uStack_190._0_4_ = (pUVar8.identityMatrix).m22;
									uStack_190._4_4_ = (pUVar8.identityMatrix).m32;
									local_188._0_4_ = (pUVar8.identityMatrix).m03;
									local_188._4_4_ = (pUVar8.identityMatrix).m13;
									uStack_180._0_4_ = (pUVar8.identityMatrix).m23;
									uStack_180._4_4_ = (pUVar8.identityMatrix).m33;
								}
								else {
									local_1b8 = CONCAT35(uStack_200, uStack_205);
									uStack_1b0 = CONCAT35(local_1f8, uStack_1fd);
									local_1a8 = CONCAT35(uStack_1f0, uStack_1f5);
									uStack_1a0 = CONCAT35(local_1e8, uStack_1ed);
									local_198 = CONCAT35(uStack_1e0, uStack_1e5);
									uStack_190 = CONCAT35(local_1d8, uStack_1dd);
									local_188 = CONCAT35(uStack_1d0, uStack_1d5);
									uStack_180 = CONCAT44(fStack_139, uStack_1cd);
								}
								pCVar43.LocalMatrix.m03 = (float)(undefined4)local_188;
								pCVar43.LocalMatrix.m13 = (float)local_188._4_4_;
								pCVar43.LocalMatrix.m23 = (float)(undefined4)uStack_180;
								pCVar43.LocalMatrix.m33 = (float)uStack_180._4_4_;
								pCVar43.LocalMatrix.m02 = (float)(undefined4)local_198;
								pCVar43.LocalMatrix.m12 = (float)local_198._4_4_;
								pCVar43.LocalMatrix.m22 = (float)(undefined4)uStack_190;
								pCVar43.LocalMatrix.m32 = (float)uStack_190._4_4_;
								pCVar43.LocalMatrix.m01 = (float)(undefined4)local_1a8;
								pCVar43.LocalMatrix.m11 = (float)local_1a8._4_4_;
								pCVar43.LocalMatrix.m21 = (float)(undefined4)uStack_1a0;
								pCVar43.LocalMatrix.m31 = (float)uStack_1a0._4_4_;
								pCVar43.LocalMatrix.m00 = (float)(undefined4)local_1b8;
								pCVar43.LocalMatrix.m10 = (float)local_1b8._4_4_;
								pCVar43.LocalMatrix.m20 = (float)(undefined4)uStack_1b0;
								pMVar48 = MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_Part_Add;
								pCVar43.LocalMatrix.m30 = (float)uStack_1b0._4_4_;
								if (pSVar32 != null) {
									piVar1 = &pSVar32._version;
									*piVar1 = *piVar1 + 1;
									pCVar12 = pSVar32._items;
									if (pCVar12 != null) {
										uVar6 = pSVar32._size;
										if (uVar6 < (uint)pCVar12.Length) {
											pSVar32._size = uVar6 + 1;
											pCVar12[(int)uVar6] = pCVar43;
										}
										else {
											pSVar32.AddWithResize((object)pCVar43);
										}
										pUVar36 = local_268;
										if (cVar29 != false) {
											if (pUVar37.Length != 0) {
												if ((int)pUVar37.Length == 0) {
													throw new IndexOutOfRangeException();
												}
												pUVar9 = *(Object*)local_2c8._0_8_;
												pCVar43 = null;
												bVar28 = (pUVar9 != null);
												if (bVar28) {
													if ((int)pUVar37.Length == 0) {
														throw new IndexOutOfRangeException();
													}
													if (*(Material*)local_2c8._0_8_ == null) {
														throw new NullReferenceException();
													}
													pSVar10 = TitanDeathDissolve.SteamSources;
													fVar52 = (*(Material*)local_2c8._0_8_).GetFloat("_Regrowth");
													if (local_2b8 == null) {
														throw new NullReferenceException();
													}
													fVar53 = local_2b8.GetFloat("_Growth");
													local_2d8 = CONCAT44(local_2d8._4_4_, fVar53);
													fStack_320 = 0.0;
													fStack_31c = 0.0;
													local_328._0_4_ = SUB84(pUVar36, 0);
													local_328._4_4_ = SUB84((ulong)pUVar36 >> 0x20, 0);
													pMVar48 = MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_SteamSource_Add;
													fStack_320 = (float)CONCAT31(fStack_320._1_3_, 0.5 < fVar52);
													fStack_31c = (float)local_2d8;
													if (pSVar10 ==null) {
	label_05c49ceb: ;
														throw new NullReferenceException();
													}
													pCVar43 = (TitanDeathDissolve.Part)CONCAT44(local_328._4_4_, local_328._0_4_);
													item_00._8_4_ = fStack_320;
													item_00.Mesh = (Mesh)pCVar43;
													item_00.Growth = (float)local_2d8;
													piVar1 = &pSVar10._version;
													*piVar1 = *piVar1 + 1;
													pCVar11 = pSVar10._items;
													if (pCVar11 == null) goto label_05c49ceb;
													uVar6 = pSVar10._size;
													if (uVar6 < (uint)pCVar11.Length) {
														pSVar10._size = uVar6 + 1;
														pCVar11[(int)uVar6].Mesh =(Mesh)CONCAT44(local_328._4_4_, local_328._0_4_);
														pCVar14 = pCVar11.m_Items + (int)uVar6;
														pCVar14.Regrowing = 0.5 < fVar52;
														*(undefined3)&pCVar14.field_0x9 = fStack_320._1_3_;
														pCVar14.Growth = (float)local_2d8;
														pCVar43 = null;
													}
													else {
														pSVar10.AddWithResize(item_00);
													}
												}
											}
											fVar52 = this._scale;
											if ((typeof(TitanDeathDissolve)._2).cctor_finished_or_no_cctor == 0) {
												il2cpp_codegen_runtime_class_init(typeof(TitanDeathDissolve)) ;
											}
											pUVar44 = TitanDeathDissolve.CreateTissueMesh((Mesh)pUVar36, fVar52);
											pMVar48 = MethodInfo_System_Collections_Generic_List_Mesh_Add;
											pSVar33 = *local_210;
											if (pSVar33 == null) {
	label_05c49ccd: ;
												throw new NullReferenceException();
											}
											piVar1 = &pSVar33._version;
											*piVar1 = *piVar1 + 1;
											pUVar13 = pSVar33._items;
											if (pUVar13 == null) goto label_05c49ccd;
											uVar6 = pSVar33._size;
											if (uVar6 < (uint)pUVar13.Length) {
												pSVar33._size = uVar6 + 1;
												pUVar13[(int)uVar6] = pUVar44;
											}
											else {
												pSVar33.AddWithResize((object)pUVar44);
											}
											pUVar45 = (Material[])new Material[(uint32_t)pUVar37.Length];
											if (0 < (int)pUVar37.Length) {
												uVar50 = pUVar37.Length & 0xffffffff;
												lVar51 = 0x20;
												uVar49 = 0;
												do {
													if (uVar50 <= uVar49) {
														throw new IndexOutOfRangeException();
													}
													pUVar36 = *(Object*)((long)pUVar37.m_Items + lVar51 + -0x20);
													bVar28 = (pUVar36 != null);
													if (bVar28) {
														if ((uint)pUVar37.Length <= uVar49) {
															throw new IndexOutOfRangeException();
														}
														pUVar38 = this.CreateMaterial(*(Material*)((long)pUVar37.m_Items + lVar51 + -0x20), 1.0);
														if (pUVar45 == null) {
															throw new NullReferenceException();
														}
														if ((pUVar38 != null) &&(pIVar40 = il2cpp_vm_Object_IsInst((object)pUVar38, (((pUVar45.obj).klass)._1).element_class), pIVar40 == null)) {
															pIVar47 = new ArrayTypeMismatchException();
															throw pIVar47;
														}
														if ((uint)pUVar45.Length <= uVar49) {
															throw new IndexOutOfRangeException();
														}
														*(Material*)((long)pUVar45.m_Items + lVar51 + -0x20) = pUVar38;
													}
													uVar49 = uVar49 + 1;
													uVar6 = (uint)pUVar37.Length;
													uVar50 = (ulong)uVar6;
													lVar51 = lVar51 + 8;
												} while ((long)uVar49 < (long)(int)uVar6);
											}
											pSVar32 = *local_288;
											pUVar42 = pIVar47.gameObject;
											if (pUVar42 == null) {
												throw new NullReferenceException();
											}
											iVar30 = pUVar42.layer;
											iVar31 = pIVar47.shadowCastingMode;
											local_2d8 = CONCAT44(local_2d8._4_4_, iVar31);
											pCVar43 = new TitanDeathDissolve.Part();
											pCVar43.Mesh = pUVar44;
											pCVar43.Materials = pUVar45;
											pCVar43.Properties = local_2b8;
											pCVar43.Layer = iVar30;
											pCVar43.Shadows = (int32_t)(float)local_2d8;
											pCVar43.DissolvedProgress = 0.9917355;
											pUVar8 = typeof(Matrix4x4).static_fields;
											fVar24 = (pUVar8.identityMatrix).m00;
											fVar25 = (pUVar8.identityMatrix).m10;
											fVar26 = (pUVar8.identityMatrix).m20;
											fVar27 = (pUVar8.identityMatrix).m30;
											fVar20 = (pUVar8.identityMatrix).m01;
											fVar21 = (pUVar8.identityMatrix).m11;
											fVar22 = (pUVar8.identityMatrix).m21;
											fVar23 = (pUVar8.identityMatrix).m31;
											fVar16 = (pUVar8.identityMatrix).m02;
											fVar17 = (pUVar8.identityMatrix).m12;
											fVar18 = (pUVar8.identityMatrix).m22;
											fVar19 = (pUVar8.identityMatrix).m32;
											fVar52 = (pUVar8.identityMatrix).m13;
											fVar53 = (pUVar8.identityMatrix).m23;
											fVar15 = (pUVar8.identityMatrix).m33;
											pCVar43.LocalMatrix.m03 = (pUVar8.identityMatrix).m03;
											pCVar43.LocalMatrix.m13 = fVar52;
											pCVar43.LocalMatrix.m23 = fVar53;
											pCVar43.LocalMatrix.m33 = fVar15;
											pCVar43.LocalMatrix.m02 = fVar16;
											pCVar43.LocalMatrix.m12 = fVar17;
											pCVar43.LocalMatrix.m22 = fVar18;
											pCVar43.LocalMatrix.m32 = fVar19;
											pCVar43.LocalMatrix.m01 = fVar20;
											pCVar43.LocalMatrix.m11 = fVar21;
											pCVar43.LocalMatrix.m21 = fVar22;
											pCVar43.LocalMatrix.m31 = fVar23;
											pCVar43.LocalMatrix.m00 = fVar24;
											pCVar43.LocalMatrix.m10 = fVar25;
											pCVar43.LocalMatrix.m20 = fVar26;
											pMVar48 = MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_Part_Add;
											pCVar43.LocalMatrix.m30 = fVar27;
											if (pSVar32 == null) {
	label_05c49caf: ;
												throw new NullReferenceException();
											}
											piVar1 = &pSVar32._version;
											*piVar1 = *piVar1 + 1;
											pCVar12 = pSVar32._items;
											if (pCVar12 == null) goto label_05c49caf;
											uVar6 = pSVar32._size;
											if (uVar6 < (uint)pCVar12.Length) {
												pSVar32._size = uVar6 + 1;
												pCVar12[(int)uVar6] = pCVar43;
											}
											else {
												pSVar32.AddWithResize((object)pCVar43);
											}
										}
										pIVar47.enabled = false ;
										goto label_05c48730;
									}
								}
								throw new NullReferenceException();
							}
							goto label_05c48730;
						}
						if (cVar29 == false) {
							pUVar36 = null;
							uVar5 = (typeof(Object)._2).cctor_finished_or_no_cctor;
						}
						else {
							pUVar36 = (Object)this.Bake((Renderer)pIVar47);
							uVar5 = (typeof(Object)._2).cctor_finished_or_no_cctor;
						}
						if (uVar5 == 0) {
						}
						bVar28 = (pUVar36 == null);
						if (!bVar28) {
							pUVar9 = (Object)*local_290;
							bVar28 = ((Object)pIVar47 == pUVar9) ;
							if (bVar28) {
								local_340 = pUVar36;
							}
							pSVar10 = TitanDeathDissolve.SteamSources;
							fStack_320 = 0.0;
							fStack_31c = 0.0;
							local_328._0_4_ = SUB84(pUVar36, 0);
							local_328._4_4_ = SUB84((ulong)pUVar36 >> 0x20, 0);
							pMVar48 = MethodInfo_System_Collections_Generic_List_TitanDeathDissolve_SteamSource_Add;
							fStack_320 = (float)((uint)fStack_320 & 0xffffff00);
							fStack_31c = 0.0;
							if (pSVar10 != null) {
								uVar50 = (ulong)(uint)fStack_320;
								item.Mesh._4_4_ = local_328._4_4_;
								item.Mesh._0_4_ = local_328._0_4_;
								item._8_4_ = fStack_320;
								item.Growth = 0.0;
								piVar1 = &pSVar10._version;
								*piVar1 = *piVar1 + 1;
								pCVar11 = pSVar10._items;
								if (pCVar11 != null) {
									uVar6 = pSVar10._size;
									if (uVar6 < (uint)pCVar11.Length) {
										pSVar10._size = uVar6 + 1;
										pCVar11[(int)uVar6].Mesh =(Mesh)CONCAT44(local_328._4_4_, local_328._0_4_);
										pCVar14 = pCVar11.m_Items + (int)uVar6;
										pCVar14.Regrowing = (bool)(char)uVar50;
										*(int3)&pCVar14.field_0x9 = (int3)(uVar50 >> 8);
										pCVar14.Growth = (float)(int)(uVar50 >> 0x20);
									}
									else {
										pSVar10.AddWithResize(item);
									}
									goto label_05c48730;
								}
							}
							throw new NullReferenceException();
						}
					}
				}
				goto label_05c48730;
			}
			lVar51 = local_280;
		}
		local_278.Dispose();
		if (lVar51 != 0) {
			throw;
		}
		pCVar46 = typeof(TitanDeathDissolve).static_fields;
		pMVar48 = (MethodInfo)pCVar46.Renderers;
		if (pMVar48 == null) goto label_05c49ba9;
		piVar1 = (int)((long)&pMVar48.name + 4);
		*piVar1 = *piVar1 + 1;
		iVar30 = *(int)&pMVar48.name;
		*(int)&pMVar48.name = 0;
		if (0 < iVar30) {
			pSVar2 = (List<Renderer>)&pMVar48.invoker_method;
			pMVar48 = null;
			Array.Clear((Array)pSVar2._items, 0, iVar30);
			pCVar46 = typeof(TitanDeathDissolve).static_fields;
		}
		pSVar34 = pCVar46.SourceMaterials;
		if (pSVar34 == null) goto label_05c49ba9;
		piVar1 = &pSVar34._version;
		*piVar1 = *piVar1 + 1;
		length = pSVar34._size;
		pSVar34._size = 0;
		if (0 < length) {
			pMVar48 = null;
			Array.Clear((Array)pSVar34._items, 0, length);
		}
		bVar28 = (local_340 != null);
		if (bVar28) {
			pUVar44 = this.CreateSteamSurface();
			this.CreateSteam(pUVar44, false);
			this.CreateSteam(pUVar44, true);
			if ((typeof(TitanDeathDissolve)._2).cctor_finished_or_no_cctor != 0) goto label_05c49b0e;
	label_05c49b8d: ;
			pSVar10 = TitanDeathDissolve.SteamSources;
		}
		else {
			if ((typeof(TitanDeathDissolve)._2).cctor_finished_or_no_cctor == 0) goto label_05c49b8d;
	label_05c49b0e: ;
			pSVar10 = TitanDeathDissolve.SteamSources;
		}
		if (pSVar10 != null) {
			piVar1 = &pSVar10._version;
			*piVar1 = *piVar1 + 1;
			iVar30 = pSVar10._size;
			pSVar10._size = 0;
			if (0 < iVar30) {
				Array.Clear((Array)pSVar10._items, 0, iVar30);
			}
			return;
		}
	label_05c49ba9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004568")]
	[Address(RVA = "0x5B4B0D0", Offset = "0x5B4A0D0", VA = "0x5B4B0D0")]
	public static Mesh CreateTissueMesh(Mesh source, float scale)
	{
		// Lifted from source/cpp/Characters/TitanDeathDissolve.c (Characters.TitanDeathDissolve$$CreateTissueMesh): clean
		uint uVar1;
		List<Vector3> __this;
		Object __this_00;
		List<Vector3> pSVar2;
		int index;
		float fVar3;
		float fVar4;
		Vector3 UVar5;
		Vector3 UVar6;
		Vector3 value;
		float local_68;
		float local_58;
		float fStack_54;

		__this_00 = (Object)Object.Instantiate<Mesh>((object)source);
		if (__this_00 != null) {
			index = 0;
			__this_00.name = "Dissolving tissue";
			if (scale <= 0.001) {
				scale = 0.001;
			}
			__this_00.GetVertices(TitanDeathDissolve.Vertices);
			__this_00.GetNormals(TitanDeathDissolve.Normals);
			uVar1 = (typeof(TitanDeathDissolve)._2).cctor_finished_or_no_cctor;
			while(true) {
				if (uVar1 == 0) {
				}
				pSVar2 = TitanDeathDissolve.Vertices;
				if (pSVar2 == null) break;
				uVar1 = (typeof(TitanDeathDissolve)._2).cctor_finished_or_no_cctor;
				if (pSVar2._size <= index) {
					if (uVar1 == 0) {
						pSVar2 = TitanDeathDissolve.Vertices;
					}
					__this_00.SetVertices(pSVar2);
					__this_00.RecalculateBounds();
					return (Mesh)__this_00;
				}
				if (uVar1 == 0) {
					pSVar2 = TitanDeathDissolve.Vertices;
					if (pSVar2 == null) break;
				}
				UVar5 = pSVar2.get_Item(index);
				pSVar2 = TitanDeathDissolve.Normals;
				if (pSVar2 == null) break;
				__this = TitanDeathDissolve.Vertices;
				UVar6 = pSVar2.get_Item(index);
				local_68 = UVar5.x;
				fVar3 = Mathf.PerlinNoise((local_68 * 8.0) / scale, ((UVar5.y + UVar5.z) * 8.0) / scale);
				if (__this == null) break;
				fVar4 = 1.0;
				if (fVar3 <= 1.0) {
					fVar4 = fVar3;
				}
				fVar3 = (float)(~-(uint)(0.0 <= fVar3) & 0x3b83126f |(uint)(fVar4 * 0.004 + 0.004) & -(uint)(0.0 <= fVar3)) * scale;
				value.z = UVar5.z - UVar6.z * fVar3;
				local_58 = UVar6.x;
				fStack_54 = UVar6.y;
				value.x = local_68 - local_58 * fVar3;
				value.y = UVar5.y - fStack_54 * fVar3;
				__this.set_Item(index, value);
				index = index + 1;
				uVar1 = (typeof(TitanDeathDissolve)._2).cctor_finished_or_no_cctor;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004569")]
	[Address(RVA = "0x5B4A120", Offset = "0x5B49120", VA = "0x5B4A120")]
	private Mesh Bake(Renderer renderer)
	{
		// Lifted from source/cpp/Characters/TitanDeathDissolve.c (Characters.TitanDeathDissolve$$Bake): 88 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		byte bVar4;
		uint uVar5;
		uint uVar6;
		BaseTitan __this_00;
		List<Mesh> __this_01;
		Mesh[] pUVar7;
		byte[] auVar8 = new byte[16];
		uint uVar10;
		uint uVar11;
		uint uVar12;
		uint uVar13;
		ulong __this_02;
		bool bVar14;
		int iVar15;
		Object pUVar16;
		Mesh original;
		List<Material> pSVar17;
		String pSVar18;
		Transform pUVar19;
		UnityEngine_Vector3_StaticFields pUVar20;
		List<Vector3> pSVar21;
		float fVar22;
		float extraout_XMM0_Db;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		byte[] auVar23 = new byte[16];
		float fVar24;
		Vector3 value;
		Vector3 UVar25;
		byte[] local_1b8 = new byte[64];
		MeshFilter local_178;
		float local_16c;
		byte[] local_168 = new byte[8];
		ulong uStack_160;
		Matrix4x4 local_158;
		byte[] local_118 = new byte[40];
		TitanDeathDissolve local_f0;
		ulong local_e8;
		ulong uStack_e0;
		ulong local_d8;
		ulong uStack_d0;
		byte[] local_c8 = new byte[32];
		byte[] local_a8 = new byte[16];
		Matrix4x4 local_70;

		if (Il2CppMethodInitialized_0754783d == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count) ;
			Il2CppMethodInitialized_0754783d = true;
		}
		local_158.m03 = 0.0;
		local_158.m13 = 0.0;
		local_158.m23 = 0.0;
		local_158.m33 = 0.0;
		local_158.m02 = 0.0;
		local_158.m12 = 0.0;
		local_158.m22 = 0.0;
		local_158.m32 = 0.0;
		local_158.m01 = 0.0;
		local_158.m11 = 0.0;
		local_158.m21 = 0.0;
		local_158.m31 = 0.0;
		local_158.m00 = 0.0;
		local_158.m10 = 0.0;
		local_158.m20 = 0.0;
		local_158.m30 = 0.0;
		local_178 = null;
		if (renderer == null) goto label_05c4aaf9;
		bVar4 = (typeof(SkinnedMeshRenderer)._2).typeHierarchyDepth;
		if (((renderer.klass._2).typeHierarchyDepth < bVar4) ||((renderer.klass._2).typeHierarchy[(ulong)bVar4 - 1] !=typeof(SkinnedMeshRenderer))) {
	label_05c4a2de: ;
			bVar14 = renderer.TryGetComponent<MeshFilter>((object*)&local_178);
			if (!bVar14) {
				return null;
			}
			if (local_178 == null) goto label_05c4aaf9;
			pUVar16 = (Object)local_178.sharedMesh;
			bVar14 = (pUVar16 != null);
			if (!bVar14) {
				return null;
			}
			if (local_178 == null) goto label_05c4aaf9;
			original = local_178.sharedMesh;
			pUVar16 = (Object)Object.Instantiate<Mesh>((object)original);
			uVar5 = (typeof(TitanDeathDissolve)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar16 = (Object)renderer.sharedMesh;
			bVar14 = (pUVar16 != null);
			if (!bVar14) goto label_05c4a2de;
			pUVar16 = new Mesh();
			MiscExtensions.BakeLocalMesh((SkinnedMeshRenderer)renderer, (Mesh)pUVar16);
			uVar5 = (typeof(TitanDeathDissolve)._2).cctor_finished_or_no_cctor;
		}
		if (uVar5 == 0) {
		}
		renderer.GetSharedMaterials(TitanDeathDissolve.SourceMaterials);
		pSVar17 = TitanDeathDissolve.SourceMaterials;
		if (pSVar17 == null) goto label_05c4aaf9;
		if (0 < pSVar17._size) {
			if (pUVar16 == null) goto label_05c4aaf9;
			iVar15 = pUVar16.subMeshCount;
			pSVar17 = TitanDeathDissolve.SourceMaterials;
			if (pSVar17 == null) goto label_05c4aaf9;
			if (pSVar17._size < iVar15) {
				if ((typeof(TitanDeathDissolve)._2).cctor_finished_or_no_cctor == 0) {
					pSVar17 = TitanDeathDissolve.SourceMaterials;
					if (pSVar17 == null) goto label_05c4aaf9;
				}
				pUVar16.subMeshCount = pSVar17._size;
			}
		}
		pSVar18 = renderer.name;
		pSVar18 = String.Concat("Dissolving ", pSVar18);
		if (pUVar16 != null) {
			pUVar16.name = pSVar18;
			__this_00 = this._titan;
			if ((__this_00 != null) &&(pUVar19 = __this_00.transform , pUVar19 != null)) {
				local_1b8.get_worldToLocalMatrix(pUVar19);
				uVar13 = local_1b8._60_4_;
				uVar12 = local_1b8._56_4_;
				uVar11 = local_1b8._52_4_;
				uVar10 = local_1b8._48_4_;
				local_118._8_4_ = local_1b8._8_4_;
				local_118._12_4_ = local_1b8._12_4_;
				local_118._0_8_ = local_1b8._0_8_;
				local_118._16_8_ = CONCAT44(local_1b8._20_4_, local_1b8._16_4_);
				local_118._24_4_ = local_1b8._24_4_;
				local_118._28_4_ = local_1b8._28_4_;
				local_168._4_4_ = local_1b8._36_4_;
				local_168._0_4_ = local_1b8._32_4_;
				uStack_160._4_4_ = (float)local_1b8._44_4_;
				uStack_160._0_4_ = (float)local_1b8._40_4_;
				pUVar19 = renderer.transform;
				if (pUVar19 != null) {
					iVar15 = 0;
					local_1b8.get_localToWorldMatrix(pUVar19);
					local_158.m10 =(float)local_1b8._12_4_ * (float)uVar11 +(float)local_1b8._8_4_ * (float)local_168._4_4_ +(float)local_1b8._4_4_ * (float)local_118._20_4_ +(float)local_1b8._0_4_ * (float)local_118._4_4_;
					local_158.m00 =(float)local_1b8._12_4_ * (float)uVar10 +(float)local_1b8._8_4_ * (float)local_168._0_4_ +(float)local_1b8._4_4_ * (float)local_118._16_4_ +(float)local_1b8._0_4_ * (float)local_118._0_4_;
					local_158.m30 =(float)local_1b8._12_4_ * (float)uVar13 +(float)local_1b8._8_4_ * uStack_160._4_4_ +(float)local_1b8._4_4_ * (float)local_118._28_4_ +(float)local_1b8._0_4_ * (float)local_118._12_4_;
					local_158.m20 =(float)local_1b8._12_4_ * (float)uVar12 +(float)local_1b8._8_4_ * (float)uStack_160 +(float)local_1b8._4_4_ * (float)local_118._24_4_ +(float)local_1b8._0_4_ * (float)local_118._8_4_;
					local_158.m11 =(float)local_1b8._28_4_ * (float)uVar11 +(float)local_1b8._24_4_ * (float)local_168._4_4_ +(float)local_1b8._20_4_ * (float)local_118._20_4_ +(float)local_1b8._16_4_ * (float)local_118._4_4_;
					local_158.m01 =(float)local_1b8._28_4_ * (float)uVar10 +(float)local_1b8._24_4_ * (float)local_168._0_4_ +(float)local_1b8._20_4_ * (float)local_118._16_4_ +(float)local_1b8._16_4_ * (float)local_118._0_4_;
					local_158.m31 =(float)local_1b8._28_4_ * (float)uVar13 +(float)local_1b8._24_4_ * uStack_160._4_4_ +(float)local_1b8._20_4_ * (float)local_118._28_4_ +(float)local_1b8._16_4_ * (float)local_118._12_4_;
					local_158.m21 =(float)local_1b8._28_4_ * (float)uVar12 +(float)local_1b8._24_4_ * (float)uStack_160 +(float)local_1b8._20_4_ * (float)local_118._24_4_ +(float)local_1b8._16_4_ * (float)local_118._8_4_;
					local_158.m12 =(float)local_1b8._44_4_ * (float)uVar11 +(float)local_1b8._40_4_ * (float)local_168._4_4_ +(float)local_1b8._36_4_ * (float)local_118._20_4_ +(float)local_1b8._32_4_ * (float)local_118._4_4_;
					local_158.m02 =(float)local_1b8._44_4_ * (float)uVar10 +(float)local_1b8._40_4_ * (float)local_168._0_4_ +(float)local_1b8._36_4_ * (float)local_118._16_4_ +(float)local_1b8._32_4_ * (float)local_118._0_4_;
					local_158.m32 =(float)local_1b8._44_4_ * (float)uVar13 +(float)local_1b8._40_4_ * uStack_160._4_4_ +(float)local_1b8._36_4_ * (float)local_118._28_4_ +(float)local_1b8._32_4_ * (float)local_118._12_4_;
					local_158.m22 =(float)local_1b8._44_4_ * (float)uVar12 +(float)local_1b8._40_4_ * (float)uStack_160 +(float)local_1b8._36_4_ * (float)local_118._24_4_ +(float)local_1b8._32_4_ * (float)local_118._8_4_;
					local_158.m13 =(float)local_1b8._60_4_ * (float)uVar11 +(float)local_1b8._56_4_ * (float)local_168._4_4_ +(float)local_1b8._52_4_ * (float)local_118._20_4_ +(float)local_1b8._48_4_ * (float)local_118._4_4_;
					local_158.m03 =(float)local_1b8._60_4_ * (float)uVar10 +(float)local_1b8._56_4_ * (float)local_168._0_4_ +(float)local_1b8._52_4_ * (float)local_118._16_4_ +(float)local_1b8._48_4_ * (float)local_118._0_4_;
					local_158.m33 =(float)local_1b8._60_4_ * (float)uVar13 +(float)local_1b8._56_4_ * uStack_160._4_4_ +(float)local_1b8._52_4_ * (float)local_118._28_4_ +(float)local_1b8._48_4_ * (float)local_118._12_4_;
					local_158.m23 =(float)local_1b8._60_4_ * (float)uVar12 +(float)local_1b8._56_4_ * (float)uStack_160 +(float)local_1b8._52_4_ * (float)local_118._24_4_ +(float)local_1b8._48_4_ * (float)local_118._8_4_;
					local_70 = Matrix4x4.Internal_Inverse(ref local_158);
					local_a8._0_4_ = local_70.m01;
					local_a8._4_4_ = local_70.m11;
					local_a8._8_4_ = local_70.m21;
					local_a8._12_4_ = local_70.m31;
					local_c8._16_4_ = local_70.m00;
					local_c8._20_4_ = local_70.m10;
					local_c8._24_4_ = local_70.m20;
					local_c8._28_4_ = local_70.m30;
					Matrix4x4.Internal_Transpose((Matrix4x4)local_1b8, (Matrix4x4)(local_c8 + 0x10));
					local_118._16_4_ = local_1b8._8_4_;
					local_118._0_4_ = local_1b8._24_4_;
					local_c8._0_8_ = local_1b8._0_8_;
					local_c8._8_8_ = 0;
					local_d8 = CONCAT44(local_1b8._20_4_, local_1b8._16_4_);
					uStack_d0 = 0;
					local_e8 = CONCAT44(local_1b8._36_4_, local_1b8._32_4_);
					uStack_e0 = 0;
					local_16c = (float)local_1b8._40_4_;
					local_f0 = this;
					pUVar16.GetVertices(TitanDeathDissolve.Vertices);
					local_118._32_8_ = pUVar16;
					pUVar16.GetNormals(TitanDeathDissolve.Normals);
					while(true) {
						pSVar21 = TitanDeathDissolve.Vertices;
						if (pSVar21 == null) goto label_05c4aaf9;
						uVar5 = (typeof(TitanDeathDissolve)._2).cctor_finished_or_no_cctor;
						if (pSVar21._size <= iVar15) break;
						if (uVar5 == 0) {
							pSVar21 = TitanDeathDissolve.Vertices;
							if (pSVar21 == null) goto label_05c4aaf9;
						}
						UVar25 = pSVar21.get_Item(iVar15);
						UVar25.z = UVar25.z;
						fVar24 = UVar25.x;
						fVar22 = UVar25.y;
						UVar25.x = fVar24 * local_158.m00 + local_158.m01 * fVar22 + UVar25.z * local_158.m02 + local_158.m03;
						UVar25.y = fVar24 * local_158.m10 + local_158.m11 * fVar22 + UVar25.z * local_158.m12 + local_158.m13;
						UVar25.z = UVar25.z * local_158.m22 + local_158.m21 * fVar22 + local_158.m20 * fVar24 + local_158.m23;
						pSVar21.set_Item(iVar15, UVar25);
						pSVar21 = TitanDeathDissolve.Normals;
						if (pSVar21 == null) goto label_05c4aaf9;
						UVar25 = pSVar21.get_Item(iVar15);
						fVar24 = UVar25.z;
						uStack_160._0_4_ = (float)extraout_XMM0_Dc;
						local_168 = (byte[])UVar25._0_8_;
						uStack_160._4_4_ = (float)extraout_XMM0_Dd;
						if (Il2CppMethodInitialized_0753e72d == false) {
							Il2CppMethodInitialized_0753e72d = true;
							local_1b8._0_4_ = 0.0;
							local_1b8._4_4_ = 0.0;
							if (g_data_0753e729 == false) goto label_05c4a9dd;
	label_05c4a8bc: ;
							local_1b8._0_4_ = 0.0;
							local_1b8._4_4_ = 0.0;
							uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						else {
							local_1b8._0_4_ = 0.0;
							local_1b8._4_4_ = 0.0;
							if (g_data_0753e729 != false) goto label_05c4a8bc;
	label_05c4a9dd: ;
							local_1b8._0_4_ = 0.0;
							local_1b8._4_4_ = 0.0;
							g_data_0753e729 = true;
							uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						if (uVar5 == 0) {
						}
						auVar23._0_4_ = fVar24 * (float)local_e8 +(float)local_d8 * (float)local_168._4_4_ + (float)local_168._0_4_ * (float)local_c8._0_4_;
						auVar23._4_4_ = fVar24 * local_e8._4_4_ + local_d8._4_4_ * (float)local_168._4_4_ + (float)local_168._0_4_ * (float)local_c8._4_4_;
						auVar23._8_4_ = fVar24 * (float)uStack_e0 +(float)uStack_d0 * (float)local_168._4_4_ + (float)local_168._0_4_ * (float)local_c8._8_4_;
						auVar23._12_4_ = fVar24 * uStack_e0._4_4_ + uStack_d0._4_4_ * (float)local_168._4_4_ + (float)local_168._0_4_ * (float)local_c8._12_4_;
						fVar24 = (float)local_168._4_4_ * (float)local_118._0_4_ +(float)local_118._16_4_ * (float)local_168._0_4_ + local_16c * fVar24;
						fVar22 = fVar24 * fVar24 + auVar23._4_4_ * auVar23._4_4_ + auVar23._0_4_ * auVar23._0_4_;
						if (fVar22 < 0.0) {
							local_168._0_4_ = fVar24;
							uStack_160._0_4_ = (float)local_168._4_4_;
							uStack_160._4_4_ = (float)local_168._4_4_;
							fVar22 = sqrtf(fVar22);
							UVar25.z = extraout_XMM0_Db;
							fVar24 = (float)local_168._0_4_;
							if (1e-05 < fVar22) goto label_05c4a750;
	label_05c4a994: ;
							pUVar20 = typeof(Vector3).static_fields;
							fVar24 = (pUVar20.zeroVector).z;
						}
						else {
							fVar22 = SQRT(fVar22);
							UVar25.z = (float)local_168._4_4_;
							if (fVar22 <= 1e-05) goto label_05c4a994;
	label_05c4a750: ;
							fVar24 = fVar24 / fVar22;
							auVar8._4_4_ = fVar22;
							auVar8._0_4_ = fVar22;
							auVar8._8_4_ = UVar25.z;
							auVar8._12_4_ = UVar25.z;
							auVar23 = divps(auVar23, auVar8);
							local_1b8._0_4_ = auVar23._0_4_;
							local_1b8._4_4_ = auVar23._4_4_;
							pUVar20 = (UnityEngine_Vector3_StaticFields)local_1b8;
						}
						uVar2 = (pUVar20.zeroVector).x;
						uVar3 = (pUVar20.zeroVector).y;
						value.y = (float)uVar3;
						value.x = (float)uVar2;
						value.z = fVar24;
						pSVar21.set_Item(iVar15, value);
						iVar15 = iVar15 + 1;
					}
					if (uVar5 == 0) {
						pSVar21 = TitanDeathDissolve.Vertices;
					}
					__this_02 = local_118._32_8_;
					local_118._32_8_.SetVertices(pSVar21);
					__this_02.SetNormals(TitanDeathDissolve.Normals);
					__this_02.SetUVs(3, TitanDeathDissolve.Vertices);
					__this_02.RecalculateBounds();
					__this_01 = local_f0._meshes;
					if (__this_01 != null) {
						piVar1 = &__this_01._version;
						*piVar1 = *piVar1 + 1;
						pUVar7 = __this_01._items;
						if (pUVar7 != null) {
							uVar6 = __this_01._size;
							if (uVar6 < (uint)pUVar7.Length) {
								__this_01._size = uVar6 + 1;
								pUVar7[(int)uVar6] = (Mesh)__this_02;
								return (Mesh)(Object)__this_02;
							}
							__this_01.AddWithResize((object)__this_02);
							return (Mesh)(Object)__this_02;
						}
					}
				}
			}
		}
	label_05c4aaf9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600456A")]
	[Address(RVA = "0x5B4AB30", Offset = "0x5B49B30", VA = "0x5B4AB30")]
	private Material CreateMaterial(Material source, float layer)
	{
		// Lifted from source/cpp/Characters/TitanDeathDissolve.c (Characters.TitanDeathDissolve$$CreateMaterial): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Shader shader;
		BaseTitan pCVar3;
		BaseComponentCache pUVar4;
		PhotonView pPVar5;
		List<Material> __this_00;
		Material[] pUVar6;
		bool bVar8;
		Material __this_01;
		String pSVar9;
		Texture value;
		Vector2 UVar10;
		Color value_00;
		float local_34;

		bVar8 = ((Object)source == null);
		if (bVar8) {
			shader = this._shader;
			__this_01 = new Material(shader);
		}
		else {
			__this_01 = new Material(source);
			if (__this_01 == null) goto label_05c4aefd;
			__this_01.shader = this._shader;
		}
		pSVar9 = local_34.ToString();
		pSVar9 = String.Concat("Titan dissolve ", pSVar9);
		if (__this_01 != null) {
			__this_01.name = pSVar9;
			__this_01.renderQueue = (int)layer + 2000;
			__this_01.SetFloat("_Layer", layer);
			__this_01.SetFloat("_DissolveScale", 12.0 / this._scale);
			pCVar3 = this._titan;
			if (((pCVar3 != null) &&(pUVar4 = pCVar3.Cache, pUVar4 != null)) &&(pPVar5 = pUVar4.PhotonView, pPVar5 != null)) {
				__this_01.SetFloat("_DissolveSeed", (float)(pPVar5.viewIdField % 0x3e5) * 0.17);
				bVar8 = ((Object)source != null);
				if (bVar8) {
					if (source == null) goto label_05c4aefd;
					bVar8 = source.HasProperty("_BaseMap");
					if (!bVar8) {
						bVar8 = source.HasProperty("_MainTex");
						if (bVar8) {
							value = source.GetTexture("_MainTex");
							__this_01.SetTexture("_BaseMap", value);
							UVar10 = source.GetTextureScale("_MainTex");
							__this_01.SetTextureScale("_BaseMap", UVar10);
							UVar10 = source.GetTextureOffset("_MainTex");
							__this_01.SetTextureOffset("_BaseMap", UVar10);
						}
					}
				}
				bVar8 = ((Object)source != null);
				if (bVar8) {
					if (source == null) goto label_05c4aefd;
					bVar8 = source.HasProperty("_BaseColor");
					if (!bVar8) {
						bVar8 = source.HasProperty("_Color");
						if (bVar8) {
							value_00 = source.GetColor("_Color");
							__this_01.SetColor("_BaseColor", value_00);
						}
					}
				}
				__this_00 = this._materials;
				if (__this_00 != null) {
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pUVar6 = __this_00._items;
					if (pUVar6 != null) {
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pUVar6.Length) {
							__this_00._size = uVar2 + 1;
							pUVar6[(int)uVar2] = __this_01;
						}
						else {
							__this_00.AddWithResize((object)__this_01);
						}
						return __this_01;
					}
				}
			}
		}
	label_05c4aefd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600456B")]
	[Address(RVA = "0x5B4B3D0", Offset = "0x5B4A3D0", VA = "0x5B4B3D0")]
	private Mesh CreateSteamSurface()
	{
		// Lifted from source/cpp/Characters/TitanDeathDissolve.c (Characters.TitanDeathDissolve$$CreateSteamSurface): 16 lines keep C-only constructs
		int index;
		int piVar1;
		int iVar2;
		uint uVar3;
		uint uVar4;
		List<Vector3> pSVar5;
		List<int> pSVar6;
		Int32[] pSVar7;
		List<Vector2> pSVar8;
		List<Mesh> __this_00;
		Mesh[] pUVar9;
		Vector2 UVar10;
		object __this_01;
		ulong uVar12;
		Mesh __this_02;
		bool bVar13;
		float fVar14;
		int iVar15;
		Object __this_03;
		List<int> pSVar16;
		int submesh;
		Characters_TitanDeathDissolve_StaticFields pCVar17;
		int index_00;
		System_Collections_Generic_List_Enumerator_T__o local_88;
		ulong uStack_70;
		TitanDeathDissolve local_60;
		Mesh local_58;
		System_Collections_Generic_List_Enumerator_T__o local_50;
		ulong uStack_38;

		local_60 = this;
		if (Il2CppMethodInitialized_0754783f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Enumerator_TitanDeathDissolve_SteamSource_MoveNext) ;
			Il2CppMethodInitialized_0754783f = true;
		}
		local_88._current = null;
		uStack_70 = 0;
		local_88._list = null;
		local_88._index = 0;
		local_88._version = 0;
		if ((typeof(TitanDeathDissolve)._2).cctor_finished_or_no_cctor == 0) {
			pCVar17 = typeof(TitanDeathDissolve).static_fields;
			pSVar5 = pCVar17.SurfaceVertices;
		}
		else {
			pCVar17 = typeof(TitanDeathDissolve).static_fields;
			pSVar5 = pCVar17.SurfaceVertices;
		}
		if (pSVar5 != null) {
			piVar1 = &pSVar5._version;
			*piVar1 = *piVar1 + 1;
			pSVar5._size = 0;
			pSVar16 = pCVar17.SurfaceTriangles;
			if (pSVar16 != null) {
				piVar1 = &pSVar16._version;
				*piVar1 = *piVar1 + 1;
				pSVar16._size = 0;
				if (pCVar17.SteamSources != null) {
					local_50 = (pCVar17.SteamSources).GetEnumerator();
					local_88._current = local_50._current;
					uStack_70 = uStack_38;
					local_88._list = local_50._list;
					local_88._index = local_50._index;
					local_88._version = local_50._version;
					while (true) {
						bVar13 = local_88.MoveNext();
						uVar12 = uStack_70;
						__this_01 = local_88._current;
						if (!(bVar13)) break;
						pSVar5 = TitanDeathDissolve.SurfaceVertices;
						if (pSVar5 == null) {
							throw new NullReferenceException();
						}
						if ((Mesh)__this_01 == null) {
							throw new NullReferenceException();
						}
						iVar2 = pSVar5._size;
						__this_01.GetVertices(TitanDeathDissolve.Vertices);
						pSVar5 = TitanDeathDissolve.SurfaceVertices;
						if (pSVar5 == null) {
							throw new NullReferenceException();
						}
						pSVar5.AddRange((IEnumerable<T>)TitanDeathDissolve.Vertices);
						if ((uVar12 & 1) != 0) {
							__this_01.GetUVs(1, TitanDeathDissolve.GrowthCoordinates);
						}
						fVar14 = (float)(uVar12 >> 0x20);
						local_58 = (Mesh)__this_01;
						for (submesh = 0; ; submesh = submesh + 1) {
							__this_02 = local_58;
							iVar15 = local_58.subMeshCount;
							if (!(submesh < iVar15)) break;
							__this_02.GetTriangles(TitanDeathDissolve.Triangles, submesh);
							index_00 = 2;
							while(true) {
								pCVar17 = typeof(TitanDeathDissolve).static_fields;
								pSVar16 = pCVar17.Triangles;
								if (pSVar16 == null) {
									throw new NullReferenceException();
								}
								index = index_00 + -2;
								if (pSVar16._size <= index) break;
								if ((uVar12 & 1) == 0) {
									uVar3 = (typeof(TitanDeathDissolve)._2).cctor_finished_or_no_cctor;
	joined_r0x05c4b8d2: ;
									if (uVar3 == 0) {
									}
									pSVar16 = TitanDeathDissolve.Triangles;
									if (pSVar16 == null) {
										throw new NullReferenceException();
									}
									pSVar6 = TitanDeathDissolve.SurfaceTriangles;
									iVar15 = pSVar16.get_Item(index);
									if (pSVar6 == null) {
	label_05c4ba19: ;
										throw new NullReferenceException();
									}
									piVar1 = &pSVar6._version;
									*piVar1 = *piVar1 + 1;
									pSVar7 = pSVar6._items;
									if (pSVar7 == null) goto label_05c4ba19;
									uVar4 = pSVar6._size;
									if (uVar4 < (uint)pSVar7.Length) {
										pSVar6._size = uVar4 + 1;
										pSVar7[(int)uVar4] = iVar15 + iVar2;
									}
									else {
										pSVar6.AddWithResize(iVar15 + iVar2);
									}
									pSVar16 = TitanDeathDissolve.Triangles;
									if (pSVar16 == null) {
										throw new NullReferenceException();
									}
									pSVar6 = TitanDeathDissolve.SurfaceTriangles;
									iVar15 = pSVar16.get_Item(index_00 + -1);
									if (pSVar6 == null) {
	label_05c4ba1e: ;
										throw new NullReferenceException();
									}
									piVar1 = &pSVar6._version;
									*piVar1 = *piVar1 + 1;
									pSVar7 = pSVar6._items;
									if (pSVar7 == null) goto label_05c4ba1e;
									uVar4 = pSVar6._size;
									if (uVar4 < (uint)pSVar7.Length) {
										pSVar6._size = uVar4 + 1;
										pSVar7[(int)uVar4] = iVar15 + iVar2;
									}
									else {
										pSVar6.AddWithResize(iVar15 + iVar2);
									}
									pSVar16 = TitanDeathDissolve.Triangles;
									if (pSVar16 == null) {
										throw new NullReferenceException();
									}
									pSVar6 = TitanDeathDissolve.SurfaceTriangles;
									iVar15 = pSVar16.get_Item(index_00);
									if (pSVar6 == null) {
	label_05c4ba23: ;
										throw new NullReferenceException();
									}
									piVar1 = &pSVar6._version;
									*piVar1 = *piVar1 + 1;
									pSVar7 = pSVar6._items;
									if (pSVar7 == null) goto label_05c4ba23;
									uVar4 = pSVar6._size;
									if (uVar4 < (uint)pSVar7.Length) {
										pSVar6._size = uVar4 + 1;
										pSVar7[(int)uVar4] = iVar15 + iVar2;
									}
									else {
										pSVar6.AddWithResize(iVar15 + iVar2);
									}
								}
								else {
									if ((typeof(TitanDeathDissolve)._2).cctor_finished_or_no_cctor == 0) {
										pCVar17 = typeof(TitanDeathDissolve).static_fields;
										pSVar16 = pCVar17.Triangles;
										if (pSVar16 == null) {
											throw new NullReferenceException();
										}
									}
									pSVar8 = pCVar17.GrowthCoordinates;
									iVar15 = pSVar16.get_Item(index);
									if (pSVar8 == null) {
										throw new NullReferenceException();
									}
									UVar10 = pSVar8.get_Item(iVar15);
									if (UVar10.x <= fVar14) {
										pSVar16 = TitanDeathDissolve.Triangles;
										if (pSVar16 == null) {
											throw new NullReferenceException();
										}
										pSVar8 = TitanDeathDissolve.GrowthCoordinates;
										iVar15 = pSVar16.get_Item(index_00 + -1);
										if (pSVar8 == null) {
											throw new NullReferenceException();
										}
										UVar10 = pSVar8.get_Item(iVar15);
										if (UVar10.x <= fVar14) {
											if ((typeof(TitanDeathDissolve)._2).cctor_finished_or_no_cctor == 0) {
												il2cpp_codegen_runtime_class_init(typeof(TitanDeathDissolve)) ;
											}
											pSVar16 = TitanDeathDissolve.Triangles;
											if (pSVar16 == null) {
												throw new NullReferenceException();
											}
											pSVar8 = TitanDeathDissolve.GrowthCoordinates;
											iVar15 = pSVar16.get_Item(index_00);
											if (pSVar8 == null) {
												throw new NullReferenceException();
											}
											UVar10 = pSVar8.get_Item(iVar15);
											if (UVar10.x <= fVar14) {
												uVar3 = (typeof(TitanDeathDissolve)._2).cctor_finished_or_no_cctor;
												goto joined_r0x05c4b8d2;
											}
										}
									}
								}
								index_00 = index_00 + 3;
							}
						}
					}
					local_88.Dispose();
					__this_03 = new Mesh();
					if (__this_03 != null) {
						__this_03.name = "Titan steam surface";
						__this_03.indexFormat = 1;
						__this_03.SetVertices(TitanDeathDissolve.SurfaceVertices) ;
						__this_03.SetTriangles(TitanDeathDissolve.SurfaceTriangles, 0);
						__this_03.RecalculateNormals();
						__this_03.RecalculateBounds();
						__this_00 = local_60._meshes;
						if (__this_00 != null) {
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pUVar9 = __this_00._items;
							if (pUVar9 != null) {
								uVar4 = __this_00._size;
								if (uVar4 < (uint)pUVar9.Length) {
									__this_00._size = uVar4 + 1;
									pUVar9[(int)uVar4] = (Mesh)__this_03;
								}
								else {
									__this_00.AddWithResize((object)__this_03);
								}
								return (Mesh)__this_03;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600456C")]
	[Address(RVA = "0x5B4BC50", Offset = "0x5B4AC50", VA = "0x5B4BC50")]
	private void CreateSteam(Mesh surface, bool plume)
	{
		// Lifted from source/cpp/Characters/TitanDeathDissolve.c (Characters.TitanDeathDissolve$$CreateSteam): 7 lines keep C-only constructs
		int piVar1;
		float fVar2;
		uint uVar3;
		BaseTitan pCVar4;
		List<ParticleSystem> __this_00;
		ParticleSystem[] pUVar5;
		GameObject original;
		Transform pUVar6;
		Object __this_01;
		String* ppSVar7;
		ParticleSystem particles;
		float rate;
		Vector3 UVar9;

		if (Il2CppMethodInitialized_07547840 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_ParticleSystem_Add) ;
			Il2CppMethodInitialized_07547840 = true;
		}
		original = BasicTitanComponentCache.LoadParticle("ArmSmokeParticle");
		pCVar4 = this._titan;
		if (pCVar4 != null) {
			pUVar6 = pCVar4.transform;
			__this_01 = (Object)Object.Instantiate<GameObject>((object)original, pUVar6) ;
			if (__this_01 != null) {
				if (plume) {
					ppSVar7 = &"Dissolve steam plumes";
				}
				else {
					ppSVar7 = &"Dissolve steam wisps";
				}
				__this_01.name = *ppSVar7;
				pUVar6 = __this_01.transform;
				if (pUVar6 != null) {
					pUVar6.localPosition = (Vector3)(Vector3.zeroVector);
					pUVar6 = __this_01.transform;
					if (pUVar6 != null) {
						pUVar6.localRotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
						pUVar6 = __this_01.transform;
						if (pUVar6 != null) {
							pUVar6.localScale = (Vector3)(Vector3.oneVector);
							particles = __this_01.GetComponent<ParticleSystem>();
							pCVar4 = this._titan;
							if (pCVar4 != null) {
								fVar2 = this._scale;
								pUVar6 = pCVar4.transform;
								if (pUVar6 != null) {
									UVar9 = pUVar6.lossyScale;
									if (plume) {
										rate = 42.0;
									}
									else {
										rate = 80.0;
									}
									TitanSteamEffect.Configure(particles, fVar2 * ABS(UVar9.y), plume, rate);
									TitanSteamEffect.SetSurface(particles, surface);
									__this_00 = this._steam;
									if (__this_00 != null) {
										piVar1 = &__this_00._version;
										*piVar1 = *piVar1 + 1;
										pUVar5 = __this_00._items;
										if (pUVar5 != null) {
											uVar3 = __this_00._size;
											if (uVar3 < (uint)pUVar5.Length) {
												__this_00._size = uVar3 + 1;
												pUVar5[(int)uVar3] = particles;
											}
											else {
												__this_00.AddWithResize((object)particles);
											}
											if (particles != null) {
												particles.Play(false);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x600456D")]
	[Address(RVA = "0x5B3EB00", Offset = "0x5B3DB00", VA = "0x5B3EB00")]
	public void Finish()
	{
		// Lifted from source/cpp/Characters/TitanDeathDissolve.c (Characters.TitanDeathDissolve$$Finish): 2 lines keep C-only constructs
		List<ParticleSystem> __this_00;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o local_38;
		byte local_18;

		local_38._list = null;
		local_38._index = 0;
		local_38._version = 0;
		local_38._current = null;
		if (this._finished != false) {
			return;
		}
		this._finished = true;
		this.DisableColliders();
		if (this._hideOnFinish != false) {
			this.HideRenderers();
		}
		__this_00 = this._steam;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_38 = __this_00.GetEnumerator();
		local_18 = (byte)&local_38;
		while(true) {
			bVar1 = local_38.MoveNext();
			if (!bVar1) {
				local_38.Dispose();
				return;
			}
			if ((ParticleSystem)local_38._current == null) break;
			local_38._current.Stop(true, 1);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600456E")]
	[Address(RVA = "0x5B4C200", Offset = "0x5B4B200", VA = "0x5B4C200")]
	public void Update(float progress)
	{
		// Lifted from source/cpp/Characters/TitanDeathDissolve.c (Characters.TitanDeathDissolve$$Update): 71 lines keep C-only constructs
		List<ParticleSystem> pSVar1;
		BaseTitan pCVar2;
		List<TitanDeathDissolve.Part> __this_00;
		MaterialPropertyBlock pUVar3;
		ParticleSystem pUVar4;
		sbyte pcVar5;
		Object x;
		Renderer pUVar6;
		Material material;
		Matrix4x4 matrix;
		IntPtr iVar7;
		ParticleSystem pUVar8;
		ulong uVar9;
		bool bVar10;
		uint uVar11;
		int iVar12;
		ParticleSystem y;
		Transform __this_01;
		ulong uVar13;
		int iVar14;
		Mesh __this_02;
		float fVar16;
		byte[] auVar17 = new byte[12];
		uint in_XMM0_Db;
		float fVar15;
		byte[] auVar19 = new byte[16];
		byte[] auVar18 = new byte[16];
		byte[] auVar20 = new byte[16];
		float fVar21;
		float fVar22;
		int iStack_264;
		ParticleSystem.EmissionModule UStack_260;
		byte[] auStack_258 = new byte[8];
		ParticleSystem pUStack_248;
		byte[] auStack_238 = new byte[16];
		ParticleSystem pUStack_228;
		float fStack_220;
		float fStack_21c;
		float fStack_218;
		float fStack_214;
		float fStack_210;
		float fStack_20c;
		float fStack_208;
		float fStack_204;
		float fStack_200;
		float fStack_1fc;
		float fStack_1f8;
		uint uStack_1f4;
		Mesh pUStack_1e8;
		byte[] auStack_1d8 = new byte[8];
		ulong uStack_1d0;
		ParticleSystem pUStack_1c8;
		float fStack_1b8;
		float fStack_1b4;
		float fStack_1b0;
		float fStack_1ac;
		float fStack_1a8;
		float fStack_1a4;
		float fStack_1a0;
		float fStack_19c;
		ulong uStack_198;
		float fStack_190;
		float fStack_18c;
		ulong uStack_188;
		ulong uStack_180;
		byte[] auStack_178 = new byte[16];
		byte[] auStack_168 = new byte[16];
		byte[] auStack_158 = new byte[16];
		byte[] auStack_148 = new byte[16];
		byte[] auStack_138 = new byte[16];
		byte[] auStack_128 = new byte[16];
		byte[] auStack_118 = new byte[16];
		byte[] auStack_108 = new byte[16];
		byte[] auStack_f8 = new byte[16];
		byte[] auStack_e8 = new byte[16];
		byte[] auStack_d8 = new byte[16];
		byte[] auStack_c8 = new byte[16];
		byte[] auStack_b8 = new byte[16];
		byte[] auStack_a8 = new byte[16];
		byte[] auStack_98 = new byte[16];
		byte[] auStack_88 = new byte[16];
		float fStack_78;
		float fStack_74;
		float fStack_70;
		float fStack_6c;
		float fStack_68;
		float fStack_64;
		float fStack_60;
		float fStack_5c;
		float fStack_58;
		float fStack_54;
		float fStack_50;
		float fStack_4c;
		float fStack_48;
		float fStack_44;
		float fStack_40;
		float fStack_3c;

		fStack_1f8 = progress;
		uStack_1f4 = in_XMM0_Db;
		auStack_258 = (byte[])0x0;
		pUStack_248 = null;
		UStack_260.m_ParticleSystem =(ParticleSystem.EmissionModule)null;
		auStack_1d8 = (byte[])0x0;
		uStack_1d0._0_4_ = 0;
		uStack_1d0._4_4_ = 0;
		pUStack_1c8 = null;
		if (1.0 <= fStack_1f8) {
			this.Finish();
		}
		if (this._finished != false) {
			return;
		}
		auVar18._0_4_ = fStack_1f8 + -0.7;
		auVar19._0_12_ = ZEXT812(0);
		auVar19._12_4_ = uStack_1f4;
		auVar18._8_8_ = auVar19._8_8_;
		auVar18._4_4_ = fStack_1f8;
		auVar20 = divps(auVar18, _DAT_01009620);
		fVar15 = auVar20._0_4_;
		fVar22 = auVar20._4_4_;
		auVar20._4_4_ = -(uint)(1.0 < fVar15);
		auVar20._0_4_ = -(uint)(1.0 < fVar15);
		auVar20._8_4_ = -(uint)(1.0 < fVar22);
		auVar20._12_4_ = -(uint)(1.0 < fVar22);
		uVar11 = movmskpd((int)this, auVar20);
		fVar21 = fVar22;
		if ((uVar11 & 2) != 0) {
			fVar21 = 1.0;
		}
		if ((uVar11 & 1) == 0) {
			pSVar1 = this._steam;
			fVar16 = fVar15;
		}
		else {
			pSVar1 = this._steam;
			fVar16 = 1.0;
		}
		if (pSVar1 != null) {
			fVar21 = (float)(-(uint)(0.0 <= fVar22) & (uint)fVar21);
			fVar22 = fVar21 * 3.0 * fVar21 - (fVar21 + fVar21) * fVar21 * fVar21;
			fVar16 = (float)(-(uint)(0.0 <= fVar15) & (uint)fVar16);
			fVar21 = fVar16 * 3.0 * fVar16 - (fVar16 + fVar16) * fVar16 * fVar16;
			fVar21 = (1.0 - fVar21) * 0.0 + fVar21;
			auVar17 = ZEXT812(0x3f800000);
			if (fVar21 <= auVar17._0_4_) {
				auVar17._4_8_ = auVar17._4_8_;
				auVar17._0_4_ = fVar21;
			}
			pUStack_1e8 = (Mesh)(ulong)(uint)((float)(~-(uint)(0.0 <= fVar21) & 0x3f800000 |(uint)(auVar17._0_4_ * -0.65 + 1.0) & -(uint)(0.0 <= fVar21)) *((1.0 - fVar22) * 0.0 + fVar22));
			auStack_238.GetEnumerator((List<object>)pSVar1);
			pUStack_248 = pUStack_228;
			auStack_258 = (byte[])auStack_238._0_8_;
			auStack_238._0_8_ = null;
			auStack_238._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_258;
			while (true) {
				bVar10 = auStack_258.MoveNext();
				pUVar8 = pUStack_248;
				if (!(bVar10)) break;
				if (pUStack_248 == null) {
					throw new NullReferenceException();
				}
				UStack_260 = pUStack_248.emission;
				pCVar2 = this._titan;
				if (pCVar2 == null) {
					throw new NullReferenceException();
				}
				if (pCVar2.EffectsEnabled == false) {
					bVar10 = false;
				}
				else {
					bVar10 = pCVar2.IsVisible != false && 0.0 < pUStack_1e8._0_4_;
				}
				UStack_260.enabled = bVar10;
				pSVar1 = this._steam;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				y = pSVar1.get_Item(0) ;
				bVar10 = ((Object)pUVar8 == (Object)y);
				fVar21 = 80.0;
				if (!bVar10) {
					fVar21 = 42.0;
				}
				UStack_260.rateOverTimeMultiplier = fVar21 * pUStack_1e8._0_4_;
			}
			auStack_258.Dispose();
			pCVar2 = this._titan;
			if (pCVar2 != null) {
				if (pCVar2.IsVisible == false) {
					return;
				}
				__this_01 = pCVar2.transform;
				if (__this_01 != null) {
					auStack_238.get_localToWorldMatrix(__this_01);
					__this_00 = this._parts;
					if (__this_00 != null) {
						uStack_188 = (List<T>)auStack_238._0_8_;
						uStack_180 = (System_Collections_Generic_List_Enumerator_object__o)auStack_238._8_8_;
						uStack_198 = pUStack_228;
						fStack_190 = fStack_220;
						fStack_18c = fStack_21c;
						fStack_1a8 = fStack_218;
						fStack_1a4 = fStack_214;
						fStack_1a0 = fStack_210;
						fStack_19c = fStack_20c;
						fStack_1b8 = fStack_208;
						fStack_1b4 = fStack_204;
						fStack_1b0 = fStack_200;
						fStack_1ac = fStack_1fc;
						auStack_238.GetEnumerator((List<object>)__this_00);
						pUStack_1c8 = pUStack_228;
						auStack_1d8 = (byte[])auStack_238._0_8_;
						uStack_1d0 = (System_Collections_Generic_List_Enumerator_object__o)auStack_238._8_8_;
						auStack_238._0_8_ = null;
						auStack_238._8_8_ = auStack_1d8;
						while(true) {
							do {
								bVar10 = auStack_1d8.MoveNext();
								pUVar8 = pUStack_1c8;
								uVar9 = auStack_238._0_8_;
								if (!bVar10) {
									auStack_238._8_8_.Dispose();
									if ((List<T>)uVar9 !=null) {
										throw;
									}
									return;
								}
								if (pUStack_1c8 == null) {
									throw new NullReferenceException();
								}
							} while (*(float)&(*(ulong)((sbyte)pUStack_1c8 + 0x70)) <= fStack_1f8 && fStack_1f8 != *(float)&(*(ulong)((sbyte)pUStack_1c8 + 0x70)));
							pUVar3 = (*(ulong)((sbyte)pUStack_1c8 + 0x20));
							if (pUVar3 == null) {
								throw new NullReferenceException();
							}
							pUVar3.SetFloat(TitanDeathDissolve.Dissolve, fStack_1f8);
							__this_02 = (Mesh)pUVar8.m_CachedPtr;
							if (__this_02 == null) break;
							uVar13 = 0;
							while(true) {
								iVar12 = __this_02.subMeshCount;
								pUVar4 = (*(ulong)((sbyte)pUVar8 + 0x18));
								if (pUVar4 == null) {
									throw new NullReferenceException();
								}
								pcVar5 = (pUVar4._1).namespaze;
								iVar14 = (int)pcVar5;
								if (iVar12 < iVar14) {
									iVar14 = iVar12;
								}
								if ((long)iVar14 <= (long)uVar13) break;
								if (((ulong)pcVar5 & 0xffffffff) <= uVar13) {
									throw new IndexOutOfRangeException();
								}
								x = (&(pUVar4._1).byval_arg.data)[uVar13];
								bVar10 = (x != null);
								if (bVar10) {
									pUVar4 = (*(ulong)((sbyte)pUVar8 + 0x18));
									if (pUVar4 == null) {
										throw new NullReferenceException();
									}
									if (*(uint)&(pUVar4._1).namespaze <= uVar13) {
										throw new IndexOutOfRangeException();
									}
									pUVar6 = (Renderer)this._bodyRenderer;
									if (pUVar6 == null) {
										throw new NullReferenceException();
									}
									pUStack_1e8 = (Mesh)pUVar8.m_CachedPtr;
									auStack_178 = ZEXT416(*(uint)&(*(ulong)((sbyte)pUVar8 + 0x30)));
									auStack_168 = ZEXT416(*(uint)((long)&(*(ulong)((sbyte)pUVar8 + 0x30)) + 4));
									auStack_158 = ZEXT416(*(uint)&(*(ulong)((sbyte)pUVar8 + 0x38)));
									auStack_88 = ZEXT416(*(uint)((long)&(*(ulong)((sbyte)pUVar8 + 0x38)) + 4));
									auStack_148 = ZEXT416((uint)(*(ulong)((sbyte)pUVar8 + 0x40)));
									auStack_138 = ZEXT416(*(uint)((long)&(*(ulong)((sbyte)pUVar8 + 0x40)) + 4));
									auStack_128 = ZEXT416(*(uint)&(*(ulong)((sbyte)pUVar8 + 0x48)));
									auStack_98 = ZEXT416(*(uint)((long)&(*(ulong)((sbyte)pUVar8 + 0x48)) + 4));
									auStack_118 = ZEXT416(*(uint)&(*(ulong)((sbyte)pUVar8 + 0x50)));
									auStack_108 = ZEXT416(*(uint)((long)&(*(ulong)((sbyte)pUVar8 + 0x50)) + 4));
									auStack_f8 = ZEXT416((uint)(*(ulong)((sbyte)pUVar8 + 0x58)));
									auStack_a8 = ZEXT416(*(uint)((long)&(*(ulong)((sbyte)pUVar8 + 0x58)) + 4));
									auStack_e8 = ZEXT416(*(uint)&(*(ulong)((sbyte)pUVar8 + 0x60)));
									auStack_d8 = ZEXT416(*(uint)((long)&(*(ulong)((sbyte)pUVar8 + 0x60)) + 4));
									auStack_c8 = ZEXT416(*(uint)&(*(ulong)((sbyte)pUVar8 + 0x68)));
									auStack_b8 = ZEXT416(*(uint)((long)&(*(ulong)((sbyte)pUVar8 + 0x68)) + 4));
									material = (&(pUVar4._1).byval_arg.data)[uVar13];
									iVar7 = (*(ulong)((sbyte)pUVar8 + 0x28));
									pUVar3 = (*(ulong)((sbyte)pUVar8 + 0x20));
									iVar12 = pUVar6.shadowCastingMode;
									if (iVar12 == 0) {
										iStack_264 = 0;
										pUVar6 = (Renderer)this._bodyRenderer;
									}
									else {
										iStack_264 = *(int)((long)&(*(ulong)((sbyte)pUVar8 + 0x28)) + 4);
										pUVar6 = (Renderer)this._bodyRenderer;
									}
									if (pUVar6 == null) {
										throw new NullReferenceException();
									}
									bVar10 = pUVar6.receiveShadows;
									fStack_78 = (float)auStack_88._0_4_ * fStack_1b8 +(float)auStack_158._0_4_ * fStack_1a8 +(float)auStack_168._0_4_ * (float)uStack_198 +(float)auStack_178._0_4_ * (float)uStack_188;
									fStack_74 = (float)auStack_88._0_4_ * fStack_1b4 +(float)auStack_158._0_4_ * fStack_1a4 +(float)auStack_168._0_4_ * uStack_198._4_4_ +(float)auStack_178._0_4_ * uStack_188._4_4_;
									fStack_70 = (float)auStack_88._0_4_ * fStack_1b0 +(float)auStack_158._0_4_ * fStack_1a0 +(float)auStack_168._0_4_ * fStack_190 +(float)auStack_178._0_4_ * (float)uStack_180;
									fStack_6c = (float)auStack_88._0_4_ * fStack_1ac +(float)auStack_158._0_4_ * fStack_19c +(float)auStack_168._0_4_ * fStack_18c +(float)auStack_178._0_4_ * uStack_180._4_4_;
									fStack_68 = (float)auStack_98._0_4_ * fStack_1b8 +(float)auStack_128._0_4_ * fStack_1a8 +(float)auStack_138._0_4_ * (float)uStack_198 +(float)auStack_148._0_4_ * (float)uStack_188;
									fStack_64 = (float)auStack_98._0_4_ * fStack_1b4 +(float)auStack_128._0_4_ * fStack_1a4 +(float)auStack_138._0_4_ * uStack_198._4_4_ +(float)auStack_148._0_4_ * uStack_188._4_4_;
									fStack_60 = (float)auStack_98._0_4_ * fStack_1b0 +(float)auStack_128._0_4_ * fStack_1a0 +(float)auStack_138._0_4_ * fStack_190 +(float)auStack_148._0_4_ * (float)uStack_180;
									fStack_5c = (float)auStack_98._0_4_ * fStack_1ac +(float)auStack_128._0_4_ * fStack_19c +(float)auStack_138._0_4_ * fStack_18c +(float)auStack_148._0_4_ * uStack_180._4_4_;
									fStack_58 = (float)auStack_a8._0_4_ * fStack_1b8 +(float)auStack_f8._0_4_ * fStack_1a8 +(float)auStack_108._0_4_ * (float)uStack_198 +(float)auStack_118._0_4_ * (float)uStack_188;
									fStack_54 = (float)auStack_a8._0_4_ * fStack_1b4 +(float)auStack_f8._0_4_ * fStack_1a4 +(float)auStack_108._0_4_ * uStack_198._4_4_ +(float)auStack_118._0_4_ * uStack_188._4_4_;
									fStack_50 = (float)auStack_a8._0_4_ * fStack_1b0 +(float)auStack_f8._0_4_ * fStack_1a0 +(float)auStack_108._0_4_ * fStack_190 +(float)auStack_118._0_4_ * (float)uStack_180;
									fStack_4c = (float)auStack_a8._0_4_ * fStack_1ac +(float)auStack_f8._0_4_ * fStack_19c +(float)auStack_108._0_4_ * fStack_18c +(float)auStack_118._0_4_ * uStack_180._4_4_;
									fStack_48 = (float)auStack_b8._0_4_ * fStack_1b8 +(float)auStack_c8._0_4_ * fStack_1a8 +(float)auStack_d8._0_4_ * (float)uStack_198 +(float)auStack_e8._0_4_ * (float)uStack_188;
									fStack_44 = (float)auStack_b8._0_4_ * fStack_1b4 +(float)auStack_c8._0_4_ * fStack_1a4 +(float)auStack_d8._0_4_ * uStack_198._4_4_ +(float)auStack_e8._0_4_ * uStack_188._4_4_;
									fStack_40 = (float)auStack_b8._0_4_ * fStack_1b0 +(float)auStack_c8._0_4_ * fStack_1a0 +(float)auStack_d8._0_4_ * fStack_190 + (float)auStack_e8._0_4_ * (float)uStack_180 ;
									fStack_3c = (float)auStack_b8._0_4_ * fStack_1ac +(float)auStack_c8._0_4_ * fStack_19c +(float)auStack_d8._0_4_ * fStack_18c + (float)auStack_e8._0_4_ * uStack_180._4_4_;
									matrix.m10 = fStack_74;
									matrix.m00 = fStack_78;
									matrix.m30 = fStack_6c;
									matrix.m20 = fStack_70;
									matrix.m11 = fStack_64;
									matrix.m01 = fStack_68;
									matrix.m21 = fStack_60;
									matrix.m31 = fStack_5c;
									matrix.m12 = fStack_54;
									matrix.m02 = fStack_58;
									matrix.m32 = fStack_4c;
									matrix.m22 = fStack_50;
									matrix.m13 = fStack_44;
									matrix.m03 = fStack_48;
									matrix.m33 = fStack_3c;
									matrix.m23 = fStack_40;
									Graphics.DrawMesh(pUStack_1e8, matrix, material, (int32_t)iVar7, null, (int32_t)uVar13, pUVar3, iStack_264, bVar10);
								}
								uVar13 = uVar13 + 1;
								__this_02 = (Mesh)pUVar8.m_CachedPtr;
								if (__this_02 == null) goto label_05c4cb48;
							}
						}
	label_05c4cb48: ;
						throw new NullReferenceException();
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600456F")]
	[Address(RVA = "0x5B49EA0", Offset = "0x5B48EA0", VA = "0x5B49EA0")]
	private void HideRenderers()
	{
		// Lifted from source/cpp/Characters/TitanDeathDissolve.c (Characters.TitanDeathDissolve$$HideRenderers): 5 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		byte bVar3;
		int length;
		BaseTitan __this_00;
		List<Renderer> pSVar4;
		Renderer pUVar5;
		bool bVar6;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_38;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		__this_00 = this._titan;
		if (__this_00 != null) {
			__this_00.GetComponentsInChildren<Renderer>((List<T>)TitanDeathDissolve.Renderers);
			pSVar4 = TitanDeathDissolve.Renderers;
			if (pSVar4 != null) {
				local_58 = pSVar4.GetEnumerator();
				local_38 = (byte)&local_58;
				while (bVar6 = local_58.MoveNext()) {
					if ((Renderer)local_58._current != null) {
						pUVar5 = (Renderer)(local_58._current).klass;
						bVar2 = (pUVar5._2).typeHierarchyDepth;
						bVar3 = (typeof(SkinnedMeshRenderer)._2).typeHierarchyDepth;
						if (((bVar3 <= bVar2) &&((pUVar5._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(SkinnedMeshRenderer))) ||((bVar3 = (typeof(MeshRenderer)._2).typeHierarchyDepth, bVar3 <= bVar2 &&((pUVar5._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(MeshRenderer))))) {
							local_58._current.enabled = false;
						}
					}
				}
				local_58.Dispose() ;
				pSVar4 = TitanDeathDissolve.Renderers;
				if (pSVar4 != null) {
					piVar1 = &pSVar4._version;
					*piVar1 = *piVar1 + 1;
					length = pSVar4._size;
					pSVar4._size = 0;
					if (0 < length) {
						Array.Clear((Array)pSVar4._items, 0, length);
					}
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004570")]
	[Address(RVA = "0x5B4BFC0", Offset = "0x5B4AFC0", VA = "0x5B4BFC0")]
	private void DisableColliders()
	{
		// Lifted from source/cpp/Characters/TitanDeathDissolve.c (Characters.TitanDeathDissolve$$DisableColliders): 1 lines keep C-only constructs
		BaseTitan pCVar1;
		BaseMovementSync pCVar2;
		TitanColliderToggler __this_00;
		Rigidbody pUVar3;
		bool bVar4;
		uint uVar5;
		Object[] pSVar6;
		uint uVar7;
		Rigidbody local_20;

		local_20 = null;
		if (this._CollidersDisabled_k__BackingField != false) {
			return;
		}
		this._CollidersDisabled_k__BackingField = true;
		pCVar1 = this._titan;
		if (pCVar1 == null) goto label_05c4c1ee;
		bVar4 = pCVar1.TryGetComponent<Rigidbody>((object*)&local_20);
		if (bVar4) {
			if (local_20 == null) goto label_05c4c1ee;
			bVar4 = local_20.isKinematic;
			pUVar3 = local_20;
			if (!bVar4) {
				if (pUVar3 == null) goto label_05c4c1ee;
				pUVar3.linearVelocity = (Vector3)(Vector3.zeroVector);
				pUVar3 = local_20;
				if (pUVar3 == null) goto label_05c4c1ee;
				pUVar3.angularVelocity = (Vector3)(Vector3.zeroVector);
			}
			if (local_20 == null) goto label_05c4c1ee;
			local_20.isKinematic = true;
		}
		pCVar1 = this._titan;
		if (pCVar1 != null) {
			pCVar2 = pCVar1.MovementSync;
			bVar4 = ((Object)pCVar2 != null);
			pCVar1 = this._titan;
			if (bVar4) {
				if ((pCVar1 == null) ||(pCVar2 = pCVar1.MovementSync, pCVar2 == null)) goto label_05c4c1ee;
				pCVar2.Disabled = true;
			}
			else if (pCVar1 == null) goto label_05c4c1ee;
			__this_00 = pCVar1.TitanColliderToggler;
			if (__this_00 != null) {
				__this_00.enabled = false;
				pCVar1 = this._titan;
				if ((pCVar1 != null) &&(pSVar6 = pCVar1.GetComponentsInChildren<Collider>(true), pSVar6 != null)) {
					uVar5 = (uint)pSVar6.Length;
					if ((int)uVar5 < 1) {
						return;
					}
					uVar7 = 0;
					while(true) {
						if (uVar5 <= uVar7) {
							throw new IndexOutOfRangeException();
						}
						if ((Collider)pSVar6[(int)uVar7] == null) break;
						(pSVar6[(int)uVar7]).enabled = false;
						uVar7 = uVar7 + 1;
						uVar5 = (uint)pSVar6.Length;
						if ((int)uVar5 <= (int)uVar7) {
							return;
						}
					}
				}
			}
		}
	label_05c4c1ee: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004571")]
	[Address(RVA = "0x5B4CC60", Offset = "0x5B4BC60", VA = "0x5B4CC60", Slot = "4")]
	public void Dispose()
	{
		// Lifted from source/cpp/Characters/TitanDeathDissolve.c (Characters.TitanDeathDissolve$$Dispose): 18 lines keep C-only constructs
		int piVar1;
		int iVar2;
		List<ParticleSystem> pSVar3;
		List<Mesh> pSVar4;
		List<Material> pSVar5;
		List<TitanDeathDissolve.Part> pSVar6;
		object obj;
		bool bVar7;
		Object pUVar8;
		byte[] local_a0 = new byte[16];
		Object local_90;
		byte[] local_88 = new byte[8];
		Object local_78;
		byte[] local_68 = new byte[8];
		Object local_58;
		System_Collections_Generic_List_Enumerator_T__o local_48;

		if (Il2CppMethodInitialized_07547845 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_GetEnumerator) ;
			Il2CppMethodInitialized_07547845 = true;
		}
		local_68 = (byte[])0x0;
		local_58 = null;
		local_88 = (byte[])0x0;
		local_78 = null;
		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		pSVar3 = this._steam;
		if (pSVar3 != null) {
			local_a0.GetEnumerator((List<object>)pSVar3);
			local_58 = local_90;
			local_68 = (byte[])local_a0._0_8_;
			local_a0._0_8_ = null;
			local_a0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
			while(true) {
				bVar7 = local_68.MoveNext();
				pUVar8 = local_58;
				if (!bVar7) break;
				bVar7 = (pUVar8 == null);
				if (!bVar7) {
					if (pUVar8 == null) {
						throw new NullReferenceException();
					}
					pUVar8 = (Object)pUVar8.gameObject;
					Object.Destroy(pUVar8);
				}
			}
			local_68.Dispose();
			pSVar3 = this._steam;
			if (pSVar3 != null) {
				piVar1 = &pSVar3._version;
				*piVar1 = *piVar1 + 1;
				iVar2 = pSVar3._size;
				pSVar3._size = 0;
				if (0 < iVar2) {
					Array.Clear((Array)pSVar3._items, 0, iVar2);
				}
				pSVar4 = this._meshes;
				if (pSVar4 != null) {
					local_a0.GetEnumerator((List<object>)pSVar4);
					local_78 = local_90;
					local_88 = (byte[])local_a0._0_8_;
					local_a0._0_8_ = null;
					local_a0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_88;
					while(true) {
						bVar7 = local_88.MoveNext();
						pUVar8 = local_78;
						if (!bVar7) break;
						Object.Destroy(pUVar8);
					}
					local_88.Dispose();
					pSVar5 = this._materials;
					if (pSVar5 != null) {
						local_48 = pSVar5.GetEnumerator();
						local_a0._0_8_ = null;
						local_a0._8_8_ = &local_48;
						while(true) {
							bVar7 = local_48.MoveNext();
							obj = local_48._current;
							if (!bVar7) break;
							Object.Destroy((Object)obj);
						}
						local_48.Dispose();
						pSVar6 = this._parts;
						if (pSVar6 != null) {
							piVar1 = &pSVar6._version;
							*piVar1 = *piVar1 + 1;
							iVar2 = pSVar6._size;
							pSVar6._size = 0;
							if (0 < iVar2) {
								Array.Clear((Array)pSVar6._items, 0, iVar2);
							}
							pSVar4 = this._meshes;
							if (pSVar4 != null) {
								piVar1 = &pSVar4._version;
								*piVar1 = *piVar1 + 1;
								iVar2 = pSVar4._size;
								pSVar4._size = 0;
								if (0 < iVar2) {
									Array.Clear((Array)pSVar4._items, 0, iVar2);
								}
								pSVar5 = this._materials;
								if (pSVar5 != null) {
									piVar1 = &pSVar5._version;
									*piVar1 = *piVar1 + 1;
									iVar2 = pSVar5._size;
									pSVar5._size = 0;
									if (0 < iVar2) {
										Array.Clear((Array)pSVar5._items, 0, iVar2);
									}
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/TitanDeathDissolve.c.

	// Characters.TitanDeathDissolve$$.cctor: 1 lines keep C-only constructs
	static TitanDeathDissolve()
	{
		Characters_TitanDeathDissolve_StaticFields pCVar1;
		int iVar2;
		List<Vector3> pSVar3;
		List<int> pSVar4;
		List<Vector2> __this;
		List<Renderer> __this_00;
		List<Material> __this_01;
		List<TitanDeathDissolve.SteamSource> __this_02;

		iVar2 = Shader.PropertyToID("_Dissolve");
		TitanDeathDissolve.Dissolve = iVar2;
		pSVar3 = new List<Vector3>();
		pCVar1 = typeof(TitanDeathDissolve).static_fields;
		pCVar1.Vertices = pSVar3;
		pSVar3 = new List<Vector3>();
		pCVar1 = typeof(TitanDeathDissolve).static_fields;
		pCVar1.Normals = pSVar3;
		pSVar3 = new List<Vector3>();
		pCVar1 = typeof(TitanDeathDissolve).static_fields;
		pCVar1.SurfaceVertices = pSVar3;
		pSVar4 = new List<int>();
		pCVar1 = typeof(TitanDeathDissolve).static_fields;
		pCVar1.SurfaceTriangles = pSVar4;
		pSVar4 = new List<int>();
		pCVar1 = typeof(TitanDeathDissolve).static_fields;
		pCVar1.Triangles = pSVar4;
		__this = new List<Vector2>();
		pCVar1 = typeof(TitanDeathDissolve).static_fields;
		pCVar1.GrowthCoordinates = __this;
		__this_00 = new List<Renderer>();
		pCVar1 = typeof(TitanDeathDissolve).static_fields;
		pCVar1.Renderers = __this_00;
		__this_01 = new List<Material>();
		pCVar1 = typeof(TitanDeathDissolve).static_fields;
		pCVar1.SourceMaterials = __this_01;
		__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<TitanDeathDissolve.SteamSource>));
		__this_02 = new List<TitanDeathDissolve.SteamSource>();
		pCVar1 = typeof(TitanDeathDissolve).static_fields;
		pCVar1.SteamSources = __this_02;
		return;
	}
}
