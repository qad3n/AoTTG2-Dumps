// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000211")]
internal sealed class AottgGameCreateCardPreview : MonoBehaviour
{
	[Token(Token = "0x2000212")]
	private readonly struct StarRest
	{
		[Token(Token = "0x4000B05")]
		[FieldOffset(Offset = "0x0")]
		public readonly RectTransform Rect;

		[Token(Token = "0x4000B06")]
		[FieldOffset(Offset = "0x8")]
		public readonly Vector2 Position;

		[Token(Token = "0x4000B07")]
		[FieldOffset(Offset = "0x10")]
		public readonly Quaternion Rotation;

		[Token(Token = "0x6000C63")]
		[Address(RVA = "0x5D87EE0", Offset = "0x5D86EE0", VA = "0x5D87EE0")]
		public StarRest(RectTransform rect)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c (Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview.StarRest$$.ctor): clean
			Vector2 UVar1;
			Quaternion UVar2;

			this.Rect = rect;
			if (rect == null) {
				throw new NullReferenceException();
			}
			UVar1 = (Vector2)rect.anchoredPosition;
			this.Position = UVar1;
			UVar2 = (Quaternion)rect.localRotation;
			this.Rotation = UVar2;
			return;
		}
	}

	[Token(Token = "0x2000213")]
	private readonly struct GearRest
	{
		[Token(Token = "0x4000B08")]
		[FieldOffset(Offset = "0x0")]
		public readonly RectTransform Rect;

		[Token(Token = "0x4000B09")]
		[FieldOffset(Offset = "0x8")]
		public readonly Vector2 Position;

		[Token(Token = "0x4000B0A")]
		[FieldOffset(Offset = "0x10")]
		public readonly Quaternion Rotation;

		[Token(Token = "0x6000C64")]
		[Address(RVA = "0x5D87F30", Offset = "0x5D86F30", VA = "0x5D87F30")]
		public GearRest(RectTransform rect)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c (Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview.GearRest$$.ctor): clean
			Vector2 UVar1;
			Quaternion UVar2;

			this.Rect = rect;
			if (rect == null) {
				throw new NullReferenceException();
			}
			UVar1 = (Vector2)rect.anchoredPosition;
			this.Position = UVar1;
			UVar2 = (Quaternion)rect.localRotation;
			this.Rotation = UVar2;
			return;
		}
	}

	[Token(Token = "0x4000AF4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<string> ReportedFallbacks;

	[Token(Token = "0x4000AF5")]
	[FieldOffset(Offset = "0x20")]
	private AottgGameCreatePreviewPlane[] _planes;

	[Token(Token = "0x4000AF6")]
	[FieldOffset(Offset = "0x28")]
	private StarRest[] _stars;

	[Token(Token = "0x4000AF7")]
	[FieldOffset(Offset = "0x30")]
	private GearRest[] _gears;

	[Token(Token = "0x4000AF8")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _rect;

	[Token(Token = "0x4000AF9")]
	[FieldOffset(Offset = "0x40")]
	private Canvas _canvas;

	[Token(Token = "0x4000AFA")]
	[FieldOffset(Offset = "0x48")]
	private Material _material;

	[Token(Token = "0x4000AFB")]
	[FieldOffset(Offset = "0x50")]
	private Image _fallback;

	[Token(Token = "0x4000AFC")]
	[FieldOffset(Offset = "0x58")]
	private Material _fallbackMaterial;

	[Token(Token = "0x4000AFD")]
	[FieldOffset(Offset = "0x60")]
	private Camera _eventCamera;

	[Token(Token = "0x4000AFE")]
	[FieldOffset(Offset = "0x68")]
	private Vector2 _pointerPosition;

	[Token(Token = "0x4000AFF")]
	[FieldOffset(Offset = "0x70")]
	private Vector2 _tilt;

	[Token(Token = "0x4000B00")]
	[FieldOffset(Offset = "0x78")]
	private int _pointerId;

	[Token(Token = "0x4000B01")]
	[FieldOffset(Offset = "0x7C")]
	private bool _hovered;

	[Token(Token = "0x4000B02")]
	[FieldOffset(Offset = "0x80")]
	private float _starStrength;

	[Token(Token = "0x4000B03")]
	[FieldOffset(Offset = "0x84")]
	private float _gearStrength;

	[Token(Token = "0x4000B04")]
	[FieldOffset(Offset = "0x88")]
	private float _phase;

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x5D877C0", Offset = "0x5D867C0", VA = "0x5D877C0")]
	public void Setup(Image fallback, bool favorites, bool sandbox)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c (Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$Setup): 22 lines keep C-only constructs
		int piVar1;
		Object x;
		AottgGameCreateCardPreview.StarRest item;
		AottgGameCreateCardPreview.GearRest item_00;
		AottgGameCreateCardPreview.StarRest pGVar2;
		AottgGameCreateCardPreview.GearRest pGVar3;
		RectTransform pUVar4;
		bool bVar5;
		uint uVar6;
		RectTransform pUVar7;
		List<AottgGameCreateCardPreview.StarRest> __this_00;
		Object[] pSVar8;
		String pSVar9;
		List<AottgGameCreateCardPreview.GearRest> __this_01;
		AottgGameCreateCardPreview.StarRest[] pGVar10;
		AottgGameCreateCardPreview.GearRest[] pGVar11;
		long lVar13;
		Graphic pUVar14;
		AottgGameCreateCardPreview.StarRest[]* targetAddress;
		uint uVar15;
		RectTransform local_80;
		Vector2 UStack_78;
		Quaternion UStack_70;
		AottgGameCreateCardPreview local_60;
		ulong local_48;
		ulong uStack_40;

		pUVar7 = (RectTransform)this.transform;
		pUVar4 = typeof(RectTransform);
		if (pUVar7 == null) {
			this._rect = null;
			if (!favorites) goto label_05e87abb;
	label_05e878e8: ;
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<AottgGameCreateCardPreview.StarRest>));
			__this_00 = new List<AottgGameCreateCardPreview.StarRest>();
			pSVar8 = this.GetComponentsInChildren<Image>(true);
			if (pSVar8 == null) {
	label_05e87ea6: ;
				throw new NullReferenceException();
			}
			if (__this_00 == null) {
				uVar6 = (uint)pSVar8.Length;
				local_60 = this;
				if ((int)uVar6 < 1) goto label_05e87ea6;
				lVar13 = 0;
				do {
					if (uVar6 <= (uint)lVar13) goto label_05e87e6c;
					pUVar14 = (Graphic)pSVar8[lVar13];
					if (pUVar14 == null) goto label_05e87ea6;
					pSVar9 = pUVar14.name;
					if (pSVar9 == null) goto label_05e87ea6;
					bVar5 = pSVar9.StartsWith("game-create-root-favorites-star-");
					if (bVar5) goto label_05e87e71;
					uVar6 = (uint)pSVar8.Length;
					lVar13 = lVar13 + 1;
				} while ((int)lVar13 < (int)uVar6);
			}
			else {
				uVar6 = (uint)pSVar8.Length;
				local_60 = this;
				if (0 < (int)uVar6) {
					uVar15 = 0;
					do {
						if (uVar6 <= uVar15) {
	label_05e87e6c: ;
							throw new IndexOutOfRangeException();
						}
						pUVar14 = (Graphic)pSVar8[(int)uVar15];
						if (pUVar14 == null) goto label_05e87ea6;
						pSVar9 = pUVar14.name;
						if (pSVar9 == null) goto label_05e87ea6;
						bVar5 = pSVar9.StartsWith("game-create-root-favorites-star-");
						if (bVar5) {
							pUVar7 = pUVar14.rectTransform;
							UStack_78.x = 0.0;
							UStack_78.y = 0.0;
							UStack_70 = (Quaternion)ZEXT816(0);
							local_80 = pUVar7;
							if (pUVar7 == null) goto label_05e87ea6;
							UStack_78 = (Vector2)pUVar7.anchoredPosition;
							UStack_70 = pUVar7.localRotation;
							local_48._0_4_ = UStack_70.x;
							local_48._4_4_ = UStack_70.y;
							uStack_40._0_4_ = UStack_70.z;
							uStack_40._4_4_ = UStack_70.w;
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pGVar10 = __this_00._items;
							if (pGVar10 == null) goto label_05e87ea6;
							uVar6 = __this_00._size;
							if (uVar6 < (uint)pGVar10.Length) {
								__this_00._size = uVar6 + 1;
								pGVar2 = &pGVar10[(int)uVar6];
								(pGVar2.Rotation).x = UStack_70.x;
								(pGVar2.Rotation).y = UStack_70.y;
								(pGVar2.Rotation).z = UStack_70.z;
								(pGVar2.Rotation).w = UStack_70.w;
								pGVar10[(int)uVar6].Rect = local_80;
								pGVar10[(int)uVar6].Position = UStack_78;
							}
							else {
								item.Position = UStack_78;
								item.Rect = local_80;
								item.Rotation.x = UStack_70.x;
								item.Rotation.y = UStack_70.y;
								item.Rotation.z = UStack_70.z;
								item.Rotation.w = UStack_70.w;
								__this_00.AddWithResize(item);
							}
						}
						uVar15 = uVar15 + 1;
						uVar6 = (uint)pSVar8.Length;
					} while ((int)uVar15 < (int)uVar6);
				}
			}
			if (__this_00 == null) goto label_05e87ea6;
			pGVar10 = __this_00.ToArray();
			targetAddress = &local_60._stars;
			local_60._stars = pGVar10;
		}
		else {
			if ((pUVar7.klass != typeof(RectTransform)) ||(this._rect = pUVar7, pUVar7.klass != pUVar4)) {
				throw new InvalidCastException();
			}
			if (favorites) goto label_05e878e8;
	label_05e87abb: ;
			if (!sandbox) {
				bVar5 = ((Object)fallback != null);
				if (bVar5) {
					if (fallback == null) goto label_05e87ea6;
					x = (Object)fallback.m_Sprite;
					bVar5 = (x != null);
					if (bVar5) {
						this.BuildLayers(fallback);
						goto label_05e87e51;
					}
				}
				pSVar9 = this.name;
				if ((typeof(AottgGameCreateCardPreview)._2).cctor_finished_or_no_cctor == 0) {
				}
				AottgGameCreateCardPreview.ReportFallback(pSVar9, "The category reference sprite is missing.");
				goto label_05e87e51;
			}
			__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<AottgGameCreateCardPreview.GearRest>));
			__this_01 = new List<AottgGameCreateCardPreview.GearRest>();
			pSVar8 = this.GetComponentsInChildren<Image>(true);
			if (pSVar8 == null) goto label_05e87ea6;
			if (__this_01 == null) {
				uVar6 = (uint)pSVar8.Length;
				local_60 = this;
				if ((int)uVar6 < 1) goto label_05e87ea6;
				lVar13 = 0;
				do {
					if (uVar6 <= (uint)lVar13) goto label_05e87e6c;
					pUVar14 = (Graphic)pSVar8[lVar13];
					if (pUVar14 == null) goto label_05e87ea6;
					pSVar9 = pUVar14.name;
					if (pSVar9 == null) goto label_05e87ea6;
					bVar5 = pSVar9.StartsWith("game-create-root-favorites-star-sandbox-");
					if (bVar5) goto label_05e87e71;
					uVar6 = (uint)pSVar8.Length;
					lVar13 = lVar13 + 1;
				} while ((int)lVar13 < (int)uVar6);
			}
			else {
				uVar6 = (uint)pSVar8.Length;
				local_60 = this;
				if (0 < (int)uVar6) {
					uVar15 = 0;
					do {
						if (uVar6 <= uVar15) goto label_05e87e6c;
						pUVar14 = (Graphic)pSVar8[(int)uVar15];
						if (pUVar14 == null) goto label_05e87ea6;
						pSVar9 = pUVar14.name;
						if (pSVar9 == null) goto label_05e87ea6;
						bVar5 = pSVar9.StartsWith("game-create-root-favorites-star-sandbox-");
						if (bVar5) {
							pUVar7 = pUVar14.rectTransform;
							UStack_78.x = 0.0;
							UStack_78.y = 0.0;
							UStack_70 = (Quaternion)ZEXT816(0);
							local_80 = pUVar7;
							if (pUVar7 == null) goto label_05e87ea6;
							UStack_78 = (Vector2)pUVar7.anchoredPosition;
							UStack_70 = pUVar7.localRotation;
							local_48._0_4_ = UStack_70.x;
							local_48._4_4_ = UStack_70.y;
							uStack_40._0_4_ = UStack_70.z;
							uStack_40._4_4_ = UStack_70.w;
							piVar1 = &__this_01._version;
							*piVar1 = *piVar1 + 1;
							pGVar11 = __this_01._items;
							if (pGVar11 == null) goto label_05e87ea6;
							uVar6 = __this_01._size;
							if (uVar6 < (uint)pGVar11.Length) {
								__this_01._size = uVar6 + 1;
								pGVar3 = &pGVar11[(int)uVar6];
								(pGVar3.Rotation).x = UStack_70.x;
								(pGVar3.Rotation).y = UStack_70.y;
								(pGVar3.Rotation).z = UStack_70.z;
								(pGVar3.Rotation).w = UStack_70.w;
								pGVar11[(int)uVar6].Rect = local_80;
								pGVar11[(int)uVar6].Position = UStack_78;
							}
							else {
								item_00.Position = UStack_78;
								item_00.Rect = local_80;
								item_00.Rotation.x = UStack_70.x;
								item_00.Rotation.y = UStack_70.y;
								item_00.Rotation.z = UStack_70.z;
								item_00.Rotation.w = UStack_70.w;
								__this_01.AddWithResize(item_00);
							}
						}
						uVar15 = uVar15 + 1;
						uVar6 = (uint)pSVar8.Length;
					} while ((int)uVar15 < (int)uVar6);
				}
			}
			if (__this_01 == null) goto label_05e87ea6;
			pGVar11 = __this_01.ToArray();
			targetAddress =(AottgGameCreateCardPreview.StarRest[]*)&local_60._gears;
			local_60._gears = pGVar11;
		}
		this = local_60;
	label_05e87e51: ;
		this.enabled = false;
		return;
	label_05e87e71: ;
		pUVar7 = pUVar14.rectTransform;
		UStack_78.x = 0.0;
		UStack_78.y = 0.0;
		UStack_70 = (Quaternion)ZEXT816(0);
		local_80 = pUVar7;
		if (pUVar7 != null) {
			UStack_78 = (Vector2)pUVar7.anchoredPosition;
			UStack_70 = pUVar7.localRotation;
			throw new NullReferenceException();
		}
		goto label_05e87ea6;
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x5D87F80", Offset = "0x5D86F80", VA = "0x5D87F80")]
	private void BuildLayers(Image fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c (Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$BuildLayers): 71 lines keep C-only constructs
		IntPtr targetAddress;
		Material* targetAddress_00;
		Il2CppType pIVar1;
		AottgGameCreateCardPreview pGVar2;
		bool bVar3;
		bool bVar4;
		int iVar5;
		String pSVar6;
		object pIVar7;
		String pSVar8;
		Il2CppClass pIVar9;
		Sprite pUVar10;
		Object pUVar11;
		MethodInfo pMVar12;
		Material pUVar13;
		AottgGameCreatePreviewPlane[] pGVar14;
		AottgGameCreatePreviewPlane pGVar15;
		Type[] pSVar16;
		Type pSVar17;
		object pIVar18;
		GameObject pUVar19;
		Transform pUVar20;
		LayoutElement pUVar21;
		RectTransform rect;
		Image pUVar22;
		uint uVar23;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		MethodInfo extraout_RDX_04;
		MethodInfo extraout_RDX_05;
		MethodInfo extraout_RDX_06;
		MethodInfo extraout_RDX_07;
		long lVar24;
		object targetAddress_01;
		MethodInfo method_00;
		AottgGameCreatePreviewPlane[]* targetAddress_02;
		uint in_XMM1_Dc;
		uint uVar25;
		uint in_XMM1_Dd;
		uint uVar26;
		float fVar27;
		float fVar28;
		Rect UVar29;
		uint local_64;
		Image local_60;
		byte[] local_58 = new byte[24];
		AottgGameCreateCardPreview local_40;
		MethodInfo local_38;

		if (Il2CppMethodInitialized_07548866 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&"Depth layers are missing or have mismatched dimensions; using the original image.");
			il2cpp_codegen_initialize_runtime_metadata(&"The category perspective shader is unavailable; using the static original image.");
			Il2CppMethodInitialized_07548866 = true;
		}
		local_64 = 0;
		if (fallback == null) goto label_05e88a88;
		pUVar11 = (Object)fallback.m_Sprite;
		local_60 = fallback;
		if (pUVar11 == null) goto label_05e88a88;
		pSVar6 = pUVar11.name;
		pSVar6 = String.Concat("Data/ExperiencePreview/Layers/", pSVar6, "/") ;
		pIVar7 = new Sprite[3];
		pSVar8 = String.Concat(pSVar6, "Background");
		pIVar9 = (Il2CppClass)Resources.Load<Sprite>(pSVar8);
		if (pIVar7 == null) goto label_05e88a88;
		local_40 = this;
		if (*(int)&pIVar7[1].monitor == 0) goto label_05e88a8d;
		pIVar18 = pIVar7 + 2;
		pIVar7[2].klass = pIVar9;
		pSVar8 = String.Concat(pSVar6, "Midground");
		pUVar10 = Resources.Load<Sprite>(pSVar8);
		if (((ulong)pIVar7[1].monitor & 0xfffffffe) == 0) goto label_05e88a8d;
		targetAddress = &pIVar7[2].monitor;
		pIVar7[2].monitor = pUVar10;
		pSVar8 = String.Concat(pSVar6, "Foreground");
		pIVar9 = (Il2CppClass)Resources.Load<Sprite>(pSVar8);
		if (*(uint)&pIVar7[1].monitor < 3) goto label_05e88a8d;
		targetAddress_01 = pIVar7 + 3;
		pIVar7[3].klass = pIVar9;
		if (*(int)&pIVar7[1].monitor == 0) goto label_05e88a8d;
		pIVar9 = pIVar18.klass;
		bVar3 = ((Object)pIVar9 != null);
		pMVar12 = extraout_RDX;
		if (bVar3) {
			if (((ulong)pIVar7[1].monitor & 0xfffffffe) == 0) goto label_05e88a8d;
			pUVar11 = *targetAddress;
			bVar3 = (pUVar11 != null);
			pMVar12 = extraout_RDX_00;
			if (!bVar3) goto label_05e883cd;
			if (*(uint)&pIVar7[1].monitor < 3) goto label_05e88a8d;
			pIVar9 = targetAddress_01.klass;
			bVar3 = ((Object)pIVar9 != null);
			pMVar12 = extraout_RDX_01;
			if (!bVar3) goto label_05e883cd;
			if (*(int)&pIVar7[1].monitor == 0) goto label_05e88a8d;
			if (pIVar18.klass == null) goto label_05e88a88;
			UVar29 = (pIVar18.klass).rect;
			local_58._8_4_ = in_XMM1_Dc;
			local_58._0_8_ = UVar29._8_8_;
			local_58._12_4_ = in_XMM1_Dd;
			if (((ulong)pIVar7[1].monitor & 0xfffffffe) == 0) goto label_05e88a8d;
			if (*targetAddress == null) goto label_05e88a88;
			UVar29 = (*targetAddress).rect;
			fVar27 = (float)local_58._0_4_ - UVar29.m_Width;
			fVar28 = (float)local_58._4_4_ - UVar29.m_Height;
			uVar25 = 0;
			uVar26 = 0;
			pMVar12 = extraout_RDX_02;
			if (9.9999994e-11 <= fVar28 * fVar28 + fVar27 * fVar27) goto label_05e883cd;
			if (*(int)&pIVar7[1].monitor == 0) goto label_05e88a8d;
			if (pIVar18.klass == null) goto label_05e88a88;
			UVar29 = (pIVar18.klass).rect;
			local_58._8_4_ = uVar25;
			local_58._0_8_ = UVar29._8_8_;
			local_58._12_4_ = uVar26;
			if (*(uint)&pIVar7[1].monitor < 3) goto label_05e88a8d;
			if (targetAddress_01.klass == null) goto label_05e88a88;
			bVar3 = false;
			UVar29 = (targetAddress_01.klass).rect;
			fVar27 = (float)local_58._0_4_ - UVar29.m_Width;
			fVar28 = (float)local_58._4_4_ - UVar29.m_Height;
			pMVar12 = extraout_RDX_03;
			if (9.9999994e-11 <= fVar28 * fVar28 + fVar27 * fVar27) goto label_05e883cd;
		}
		else {
	label_05e883cd: ;
			if ((typeof(AottgGameCreateCardPreview)._2).cctor_finished_or_no_cctor == 0) {
				pMVar12 = extraout_RDX_04;
			}
			AottgGameCreateCardPreview.ReportFallback(pSVar6, "Depth layers are missing or have mismatched dimensions; using the original image.");
			bVar3 = true;
		}
		pUVar11 = (Object)Resources.Load<Shader>("Shaders/PreviewPerspective");
		bVar4 = (pUVar11 == null);
		pGVar2 = local_40;
		pMVar12 = extraout_RDX_05;
		if (!bVar4) {
			if (pUVar11 != null) {
				bVar4 = pUVar11.isSupported;
				pMVar12 = extraout_RDX_06;
				if (!bVar4) goto label_05e88579;
				pMVar12 = new Material((Shader)pUVar11);
				targetAddress_00 = &pGVar2._material;
				pGVar2._material = (Material)pMVar12;
				local_58._0_8_ = targetAddress_00;
				pGVar2.EnsureCanvas();
				pUVar22 = local_60;
				if (bVar3) {
					pGVar2._fallback = local_60;
					pUVar13 = pUVar22.get_material();
					pGVar2._fallbackMaterial = pUVar13;
					pUVar22.set_material(pGVar2._material);
					pMVar12 = (MethodInfo)0x1;
					pGVar14 = (AottgGameCreatePreviewPlane[])new AottgGameCreatePreviewPlane[1];
					pGVar15 = AottgGameCreateCardPreview.AddPlane(pUVar22, 0.0);
					if (pGVar14 != null) {
						if ((int)pGVar14.Length != 0) {
							pGVar14[0] = pGVar15;
							pGVar2._planes = pGVar14;
							return;
						}
						goto label_05e88a8d;
					}
				}
				else {
					pSVar6 = pGVar2.name;
					pSVar6 = String.Concat(pSVar6, "-depth");
					pSVar16 = (Type[])new Type[2];
					pIVar1 = TypeRef_UnityEngine_RectTransform;
					pSVar17 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar1);
					if (pSVar16 != null) {
						if ((pSVar17 != null) &&(pIVar18 = il2cpp_vm_Object_IsInst((object)pSVar17, (((pSVar16.obj).klass)._1).element_class), pIVar18 == null)) {
	label_05e88a92: ;
							pIVar7 = new ArrayTypeMismatchException();
							throw pIVar7;
						}
						if ((int)pSVar16.Length != 0) {
							pSVar16[0] = pSVar17;
							pSVar17 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
							if ((pSVar17 != null) &&(pIVar18 = il2cpp_vm_Object_IsInst((object)pSVar17, (((pSVar16.obj).klass)._1).element_class), pIVar18 == null)) goto label_05e88a92;
							if ((pSVar16.Length & 0xfffffffe) != 0) {
								pSVar16[1] = pSVar17;
								pUVar19 = new GameObject(pSVar6, pSVar16);
								if (pUVar19 != null) {
									pMVar12 = (MethodInfo)pUVar19.transform;
									pGVar2 = local_40;
									if (pMVar12 == null) {
										local_40.transform;
										throw new NullReferenceException();
									}
									if ((RectTransform)pMVar12.methodPointer != typeof(RectTransform)) {
										throw new InvalidCastException();
									}
									pUVar20 = local_40.transform;
									pMVar12.SetParent(pUVar20, false);
									pUVar20 = local_60.transform;
									if (pUVar20 != null) {
										iVar5 = pUVar20.GetSiblingIndex();
										method_00 = (MethodInfo)(ulong)(iVar5 + 1U);
										pMVar12.SetSiblingIndex(iVar5 + 1U);
										if ((typeof(AottgGameCreateCardPreview)._2). cctor_finished_or_no_cctor == 0) {
										}
										local_38 = pMVar12;
										AottgGameCreateCardPreview.Stretch((RectTransform)pMVar12);
										pUVar21 = pUVar19.GetComponent<LayoutElement>();
										if (pUVar21 != null) {
											pUVar21.set_ignoreLayout(true);
											pGVar14 = (AottgGameCreatePreviewPlane[])new AottgGameCreatePreviewPlane[*(uint)&pIVar7[1].monitor];
											pGVar2._planes = pGVar14;
											targetAddress_02 = &pGVar2._planes;
											local_64 = 0;
											uVar23 = *(uint)&pIVar7[1].monitor;
											if (0 < (int)uVar23) {
												do {
													if (uVar23 <= local_64) goto label_05e88a8d;
													if ((&pIVar7[2].klass)[(int)local_64] == null) goto label_05e88a88;
													pSVar6 = ((&pIVar7[2].klass)[(int)local_64]).name;
													pSVar8 = local_64.ToString();
													pSVar6 = String.Concat(pSVar6, "-depth-", pSVar8);
													pSVar16 = (Type[])new Type[2];
													pIVar1 = TypeRef_UnityEngine_RectTransform;
													pSVar17 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar1);
													if (pSVar16 == null) goto label_05e88a88;
													if ((pSVar17 != null) &&(pIVar18 = il2cpp_vm_Object_IsInst((object)pSVar17, (((pSVar16.obj).klass)._1).element_class), pIVar18 == null)) goto label_05e88a92;
													if ((int)pSVar16.Length == 0) goto label_05e88a8d;
													pSVar16[0] = pSVar17;
													pSVar17 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
													if ((pSVar17 != null) &&(pIVar18 = il2cpp_vm_Object_IsInst((object)pSVar17, (((pSVar16.obj).klass)._1).element_class), pIVar18 == null)) goto label_05e88a92;
													if ((pSVar16.Length & 0xfffffffe) == 0) goto label_05e88a8d;
													pSVar16[1] = pSVar17;
													pUVar19 = new GameObject(pSVar6, pSVar16);
													if ((pUVar19 == null) ||(rect = (RectTransform)pUVar19.transform, rect == null)) goto label_05e88a88;
													if (rect.klass != typeof(RectTransform)) {
														throw new InvalidCastException();
													}
													pMVar12 = local_38;
													rect.SetParent((Transform)local_38, false);
													if ((typeof(AottgGameCreateCardPreview)._2). cctor_finished_or_no_cctor == 0) {
													}
													AottgGameCreateCardPreview.Stretch(rect);
													pUVar22 = pUVar19.GetComponent<Image>();
													if (*(uint)&pIVar7[1].monitor <= local_64) goto label_05e88a8d;
													if (pUVar22 == null) goto label_05e88a88;
													pUVar22.sprite = (Sprite)(&pIVar7[2].klass)[(int)local_64];
													pUVar22.preserveAspect = true;
													pUVar22.set_material(*(Material*)local_58._0_8_);
													pMVar12 = null;
													pUVar22.set_raycastTarget(false);
													uVar23 = local_64;
													pGVar14 = *targetAddress_02;
													lVar24 = (long)(int)local_64;
													pGVar15 = AottgGameCreateCardPreview.AddPlane(pUVar22, (float)(int)local_64 * 0.5);
													if (pGVar14 == null) goto label_05e88a88;
													if ((uint)pGVar14.Length <= uVar23) goto label_05e88a8d;
													pGVar14[lVar24] = pGVar15;
													local_64 = local_64 + 1;
													uVar23 = *(uint)&pIVar7[1].monitor;
												} while ((int)local_64 < (int)uVar23);
											}
											local_60.enabled = false;
											return;
										}
									}
								}
								goto label_05e88a88;
							}
						}
	label_05e88a8d: ;
						throw new IndexOutOfRangeException();
					}
				}
			}
	label_05e88a88: ;
			throw new NullReferenceException();
		}
	label_05e88579: ;
		if ((typeof(AottgGameCreateCardPreview)._2).cctor_finished_or_no_cctor == 0) {
			pMVar12 = extraout_RDX_07;
		}
		AottgGameCreateCardPreview.ReportFallback("PreviewPerspective", "The category perspective shader is unavailable; using the static original image.");
		return;
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x5D88D40", Offset = "0x5D87D40", VA = "0x5D88D40")]
	private static void Stretch(RectTransform rect)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c (Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$Stretch): clean
		if (rect == null) {
			throw new NullReferenceException();
		}
		rect.anchorMin = (Vector2)(Vector2.zeroVector);
		rect.anchorMax = (Vector2)(Vector2.oneVector);
		rect.pivot = (Vector2)0x3f0000003f000000;
		rect.sizeDelta = (Vector2)(Vector2.zeroVector);
		rect.anchoredPosition = (Vector2)(Vector2.zeroVector);
		return;
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x5D88CA0", Offset = "0x5D87CA0", VA = "0x5D88CA0")]
	private static AottgGameCreatePreviewPlane AddPlane(Image image, float depth)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c (Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$AddPlane): clean
		GameObject __this;
		AottgGameCreatePreviewPlane __this_00;
		Graphic pUVar1;

		if (image != null) {
			__this = image.gameObject;
			if (__this != null) {
				__this_00 = __this.AddComponent<AottgGameCreatePreviewPlane>();
				if (__this_00 != null) {
					__this_00._depth = depth;
					pUVar1 = __this_00.graphic;
					if (pUVar1 != null) {
						pUVar1.SetVerticesDirty();
						return __this_00;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x5D88BB0", Offset = "0x5D87BB0", VA = "0x5D88BB0")]
	private void EnsureCanvas()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c (Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$EnsureCanvas): 4 lines keep C-only constructs
		Canvas* targetAddress;
		bool bVar1;
		uint uVar2;
		Canvas pUVar3;

		pUVar3 = this._canvas;
		targetAddress = &this._canvas;
		bVar1 = ((Object)pUVar3 == null);
		if (bVar1) {
			pUVar3 = this.GetComponentInParent<Canvas>();
			this._canvas = pUVar3;
		}
		pUVar3 = *targetAddress;
		bVar1 = ((Object)pUVar3 != null);
		if (bVar1) {
			pUVar3 = *targetAddress;
			if (pUVar3 == null) {
				throw new NullReferenceException();
			}
			uVar2 = pUVar3.additionalShaderChannels;
			pUVar3.additionalShaderChannels = uVar2 | 1;
			return;
		}
		return;
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x5D88E80", Offset = "0x5D87E80", VA = "0x5D88E80")]
	public void SetPointer(bool hovered, PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c (Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$SetPointer): clean
		Vector2 UVar1;
		Vector2 UVar2;
		sbyte cVar3;
		bool bVar4;
		Camera pUVar5;
		GameObject __this_00;
		float fVar6;
		float fVar7;

		this._hovered = hovered;
		if (eventData != null) {
			this._pointerPosition = eventData._position_k__BackingField;
			this._pointerId = eventData._pointerId_k__BackingField;
			pUVar5 = eventData.enterEventCamera;
			this._eventCamera = pUVar5;
		}
		__this_00 = this.gameObject;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar4 = __this_00.activeInHierarchy;
		if (bVar4) {
			if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
				cVar3 = GisketchMotion.Enabled;
			}
			else {
				cVar3 = GisketchMotion.Enabled;
			}
			if (cVar3 != false) {
				if (hovered) {
					this.EnsureCanvas();
					bVar4 = true;
				}
				else {
					UVar1 = this._tilt;
					UVar2 = (Vector2.zeroVector);
					fVar6 = UVar1.x - UVar2.x;
					fVar7 = UVar1.y - UVar2.y;
					bVar4 = true;
					if ((fVar7 * fVar7 + fVar6 * fVar6 < 9.9999994e-11) && (this._starStrength <= 0.0)) {
						bVar4 = 0.0 < this._gearStrength;
					}
				}
				goto label_05e88f57;
			}
		}
		this.ResetMotion();
		bVar4 = false;
	label_05e88f57: ;
		this.enabled = bVar4;
		return;
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x5D89000", Offset = "0x5D88000", VA = "0x5D89000")]
	public void MovePointer(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c (Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$MovePointer): clean
		Camera pUVar1;

		if (eventData == null) {
			throw new NullReferenceException();
		}
		this._pointerPosition = eventData._position_k__BackingField;
		this._pointerId = eventData._pointerId_k__BackingField;
		pUVar1 = eventData.enterEventCamera;
		this._eventCamera = pUVar1;
		return;
	}

	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x5D89370", Offset = "0x5D88370", VA = "0x5D89370")]
	private void Update()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c (Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$Update): 36 lines keep C-only constructs
		float pfVar1;
		Vector2 UVar2;
		sbyte cVar3;
		RectTransform pUVar4;
		AottgGameCreatePreviewPlane[] pGVar5;
		AottgGameCreatePreviewPlane __this_00;
		AottgGameCreateCardPreview.StarRest[] pGVar6;
		AottgGameCreateCardPreview.GearRest[] pGVar7;
		bool bVar8;
		il2cpp_array_size_t iVar9;
		Graphic pUVar10;
		uint uVar11;
		uint uVar12;
		float fVar13;
		float fVar14;
		byte[] auVar17 = new byte[12];
		byte[] auVar18 = new byte[12];
		Vector2 UVar16;
		float fVar15;
		float fVar20;
		byte[] auVar19 = new byte[16];
		float fVar21;
		byte[] auVar22 = new byte[16];
		Rect UVar23;
		Rect UVar24;
		Vector3 UVar25;
		float local_78;
		float fStack_74;
		Vector2 local_68;
		Vector2 local_50;
		ulong local_48;
		float fStack_40;
		float fStack_3c;
		ulong local_38;

		local_50.x = 0.0;
		local_50.y = 0.0;
		if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
			cVar3 = GisketchMotion.Enabled;
		}
		else {
			cVar3 = GisketchMotion.Enabled;
		}
		if (cVar3 == false) {
			this.enabled = false;
			return;
		}
		local_68 = (Vector2.zeroVector);
		if (this._hovered != false) {
			if ((this._pointerId < 0) &&(bVar8 = Input.mousePresent)) {
				UVar25 = Input.mousePosition;
				this._pointerPosition = UVar25._0_8_;
			}
			pUVar4 = this._rect;
			method = (MethodInfo)this._eventCamera;
			UVar16 = this._pointerPosition;
			bVar8 = RectTransformUtility.ScreenPointToLocalPointInRectangle(pUVar4, (Vector2)UVar16, (Camera)method, ref local_50);
			if (bVar8) {
				pUVar4 = this._rect;
				if (pUVar4 == null) goto label_05e898ad;
				method = null;
				UVar23 = pUVar4.rect;
				if (0.0 < UVar23.m_Width) {
					pUVar4 = this._rect;
					if (pUVar4 == null) goto label_05e898ad;
					method = null;
					UVar23 = pUVar4.rect;
					fVar13 = UVar23.m_Height;
					UVar16 = local_50;
					if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
						UVar16 = local_50;
					}
					local_50 = UVar16;
					if (0.0 < fVar13) {
						pUVar4 = this._rect;
						if (pUVar4 == null) goto label_05e898ad;
						fVar15 = fVar13;
						UVar23 = pUVar4.rect;
						local_38 = UVar23._8_8_;
						pUVar4 = this._rect;
						if (pUVar4 == null) goto label_05e898ad;
						UVar24 = pUVar4.rect;
						local_48 = UVar24._8_8_;
						pUVar4 = this._rect;
						fStack_40 = fVar13;
						fStack_3c = fVar15;
						if (pUVar4 == null) goto label_05e898ad;
						local_78 = UVar23.m_XMin;
						fStack_74 = UVar23.m_YMin;
						local_68.x = UVar16.x;
						local_68.y = UVar16.y;
						fVar13 = local_68.y - (local_38._4_4_ * 0.5 + fStack_74);
						local_68.x = local_68.x - ((float)local_38 * 0.5 + local_78);
						method = null;
						UVar23 = pUVar4.rect;
						auVar22._0_4_ = local_68.x + local_68.x;
						auVar22._4_4_ = fVar13 + fVar13;
						auVar22._8_4_ = local_68.y + local_68.y;
						auVar22._12_4_ = local_68.y + local_68.y;
						auVar19._4_4_ = UVar23.m_Height;
						auVar19._0_4_ = (undefined4)local_48;
						auVar19._8_4_ = fStack_40;
						auVar19._12_4_ = fStack_3c;
						auVar22 = divps(auVar22, auVar19);
						auVar19 = minps(_DAT_01005870, auVar22);
						uVar11 = -(uint)(-1.0 <= auVar22._0_4_);
						uVar12 = -(uint)(-1.0 <= auVar22._4_4_);
						local_68.y = (float)(~uVar12 & 0xbf800000 | auVar19._4_4_ & uVar12);
						local_68.x = (float)(~uVar11 & 0xbf800000 | auVar19._0_4_ & uVar11);
					}
				}
			}
		}
		fVar13 = Time.unscaledDeltaTime;
		auVar17 = ZEXT812(0x3c23d70a);
		fVar15 = GisketchMotion.DurationScale;
		if (auVar17._0_4_ <= fVar15) {
			auVar17._4_8_ = auVar17._4_8_;
			auVar17._0_4_ = fVar15;
		}
		fVar13 = expf((CustomLogicMathBuiltin)typeof(GisketchMotion), fVar13 / (auVar17._0_4_ * -0.09), method);
		auVar18 = ZEXT812(0x3f800000);
		fVar13 = auVar18._0_4_ - fVar13;
		UVar16 = this._tilt;
		fVar15 = UVar16.x;
		fVar20 = UVar16.y;
		if (fVar13 <= auVar18._0_4_) {
			auVar18._4_8_ = auVar18._4_8_;
			auVar18._0_4_ = fVar13;
		}
		fVar13 = (float)(-(uint)(0.0 <= fVar13) & auVar18._0_4_);
		UVar16.x = fVar13 * (local_68.x - fVar15) + fVar15;
		UVar16.y = fVar13 * (local_68.y - fVar20) + fVar20;
		this._tilt = UVar16;
		pGVar5 = this._planes;
		if (pGVar5 != null) {
			iVar9 = pGVar5.Length;
			if (0 < (int)iVar9) {
				uVar11 = 0;
				do {
					if ((uint)iVar9 <= uVar11) {
						throw new IndexOutOfRangeException();
					}
					__this_00 = pGVar5[(int)uVar11];
					if (__this_00 == null) goto label_05e898ad;
					UVar16 = this._tilt;
					UVar2 = __this_00._tilt;
					fVar15 = UVar2.x - UVar16.x;
					fVar20 = UVar2.y - UVar16.y;
					if (9.9999994e-11 <= fVar20 * fVar20 + fVar15 * fVar15) {
						__this_00._tilt = UVar16;
						pUVar10 = __this_00.graphic;
						if (pUVar10 == null) goto label_05e898ad;
						method = (pUVar10.klass.vtable)._28_SetVerticesDirty.method;
						pUVar10.SetVerticesDirty();
						iVar9 = pGVar5.Length;
					}
					uVar11 = uVar11 + 1;
				} while ((int)uVar11 < (int)iVar9);
			}
			pGVar6 = this._stars;
			if (pGVar6 != null) {
				if (pGVar6.Length != 0) {
					fVar15 = this._phase;
					fVar20 = Time.unscaledDeltaTime;
					this._phase = fVar20 + fVar15;
					fVar15 = this._starStrength;
					fVar20 = 0.0;
					if (this._hovered != false) {
						fVar20 = 1.0;
					}
					this._starStrength = (fVar20 - fVar15) * fVar13 + fVar15;
					this.AnimateStars();
				}
				pGVar7 = this._gears;
				if (pGVar7 != null) {
					if (pGVar7.Length != 0) {
						fVar15 = this._phase;
						fVar14 = Time.unscaledDeltaTime;
						fVar20 = this._gearStrength;
						fVar21 = 0.0;
						if (this._hovered != false) {
							fVar21 = 1.0;
						}
						this._gearStrength = fVar13 * (fVar21 - fVar20) + fVar20;
						this._phase = fVar14 + fVar15;
						this.AnimateGears();
					}
					if ((((this._hovered == false) &&(UVar16 = this._tilt, fVar13 = UVar16.x, fVar15 = UVar16.y, fVar15 * fVar15 + fVar13 * fVar13 < 1e-06)) &&(pfVar1 = &this._starStrength, *pfVar1 <= 0.001 && *pfVar1 != 0.001)) &&(pfVar1 = &this._gearStrength, *pfVar1 <= 0.001 && *pfVar1 != 0.001)) {
						this.enabled = false;
					}
					return;
				}
			}
		}
	label_05e898ad: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x5D89920", Offset = "0x5D88920", VA = "0x5D89920")]
	private void AnimateStars()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c (Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$AnimateStars): 9 lines keep C-only constructs
		uint uVar1;
		Vector2 UVar2;
		RectTransform __this_00;
		Vector2 value;
		AottgGameCreateCardPreview.StarRest[] pGVar3;
		uint uVar4;
		long lVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		Quaternion UVar9;
		Vector3 local_88;
		byte[] local_78 = new byte[16];
		float local_68;
		ulong local_58;
		ulong local_48;
		ulong local_38;

		pGVar3 = this._stars;
		if (pGVar3 != null) {
			uVar4 = 0;
			lVar5 = 0x38;
			do {
				uVar1 = (uint)pGVar3.Length;
				if ((int)uVar1 <= (int)uVar4) {
					return;
				}
				if (uVar1 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				__this_00 = *(RectTransform*)((long)pGVar3.m_Items + lVar5 + -0x38);
				local_58 = *(ulong)((long)pGVar3.m_Items + lVar5 + -0x30);
				local_38 = *(ulong)((long)pGVar3.m_Items + lVar5 + -0x28);
				local_78 = ZEXT416((uint)(float)(int)uVar4);
				fVar7 = (float)(int)uVar4 * 0.65 + this._phase;
				local_48 = *(ulong)((long)&(((AottgGameCreateCardPreview.StarRest[])(pGVar3.m_Items + -1)).obj).klass + lVar5);
				local_68 = sinf(fVar7 * 1.3);
				fVar7 = cosf(fVar7 * 0.9);
				if (__this_00 == null) break;
				UVar9.y = 9.0;
				if (uVar4 < 4) {
					UVar9.y = (float)local_78._0_4_ + 2.0;
				}
				UVar2 = this._tilt;
				fVar6 = this._starStrength;
				value.y = local_58._4_4_ + fVar6 * (((float)local_78._0_4_ + 3.0) * UVar2.y + fVar7 * UVar9.y);
				value.x =(float)local_58 + fVar6 * (((float)local_78._0_4_ + 3.0) * UVar2.x + local_68 * UVar9.y);
				__this_00.anchoredPosition = value;
				fVar7 = this._phase;
				if (uVar4 < 4) {
					fVar7 = sinf(fVar7 * 1.3);
					fVar7 = fVar7 * 8.0;
				}
				else if ((uVar4 & 1) == 0) {
					fVar7 = fVar7 * 35.0;
				}
				else {
					fVar7 = fVar7 * -28.0;
				}
				local_88.x = 0.0;
				local_88.y = 0.0;
				local_88.z = fVar7 * this._starStrength * 0.017453292;
				UVar9 = Quaternion.Internal_FromEulerRad(ref local_88);
				fVar7 = UVar9.x;
				UVar9.y = UVar9.y;
				fVar6 = UVar9.z;
				fVar8 = UVar9.w;
				UVar9.z =((float)local_48 * fVar8 + local_48._4_4_ * fVar6 + UVar9.y * (float)local_38) - fVar7 * local_38._4_4_;
				UVar9.w =((fVar8 * local_48._4_4_ - (float)local_38 * fVar7) - local_38._4_4_ * UVar9.y) -(float)local_48 * fVar6;
				UVar9.y =(local_48._4_4_ * UVar9.y + local_38._4_4_ * fVar8 + (float)local_48 * fVar7) - fVar6 * (float)local_38;
				UVar9.x =(local_48._4_4_ * fVar7 + (float)local_38 * fVar8 + local_38._4_4_ * fVar6) - UVar9.y * (float)local_48;
				__this_00.localRotation = UVar9;
				uVar4 = uVar4 + 1;
				pGVar3 = this._stars;
				lVar5 = lVar5 + 0x20;
			} while (pGVar3 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x5D89BB0", Offset = "0x5D88BB0", VA = "0x5D89BB0")]
	private void AnimateGears()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c (Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$AnimateGears): 5 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		ulong uVar3;
		RectTransform __this_00;
		AottgGameCreateCardPreview.GearRest[] pGVar4;
		long lVar5;
		uint uVar6;
		float fVar7;
		Vector2 value;
		float fVar8;
		Quaternion UVar9;
		Vector3 local_58;
		ulong local_48;
		ulong local_38;

		pGVar4 = this._gears;
		if (pGVar4 != null) {
			uVar6 = 0;
			lVar5 = 0x38;
			do {
				uVar2 = (uint)pGVar4.Length;
				if ((int)uVar2 <= (int)uVar6) {
					return;
				}
				if (uVar2 <= uVar6) {
					throw new IndexOutOfRangeException();
				}
				__this_00 = *(RectTransform*)((long)pGVar4.m_Items + lVar5 + -0x38);
				if (__this_00 == null) break;
				fVar8 = (float)(int)uVar6 + 2.0;
				fVar7 = ((float)(int)uVar6 * 6.0 + 28.0) * this._phase;
				if ((uVar6 & 1) != 0) {
					fVar7 = -fVar7;
				}
				UVar9.z = this._gearStrength;
				UVar9.w = this._tilt.x;
				fVar1 = this._tilt.y;
				uVar3 = *(ulong)((long)pGVar4.m_Items + lVar5 + -0x30);
				value.x = (float)uVar3 + UVar9.z * UVar9.w * fVar8;
				value.y = (float)((ulong)uVar3 >> 0x20) + UVar9.z * fVar8 * fVar1 * 0.5;
				local_38 = *(ulong)((long)pGVar4.m_Items + lVar5 + -0x28);
				local_48 = *(ulong)((long)&(((AottgGameCreateCardPreview.GearRest[])(pGVar4.m_Items + -1)).obj).klass + lVar5);
				__this_00.anchoredPosition = value;
				local_58.x = 0.0;
				local_58.y = 0.0;
				local_58.z = (fVar1 * -8.0 + UVar9.w * 24.0 + fVar7) * UVar9.z * 0.017453292;
				UVar9 = Quaternion.Internal_FromEulerRad(ref local_58);
				UVar9.z = UVar9.z;
				UVar9.w = UVar9.w;
				fVar7 = UVar9.x;
				fVar8 = UVar9.y;
				UVar9.z =((float)local_48 * UVar9.w + local_48._4_4_ * UVar9.z + fVar8 * (float)local_38) - fVar7 * local_38._4_4_;
				UVar9.y =(local_48._4_4_ * fVar8 + local_38._4_4_ * UVar9.w + (float)local_48 * fVar7) - UVar9.z * (float)local_38;
				UVar9.x =(local_48._4_4_ * fVar7 + (float)local_38 * UVar9.w + local_38._4_4_ * UVar9.z) - fVar8 * (float)local_48;
				UVar9.w =((UVar9.w * local_48._4_4_ - (float)local_38 * fVar7) - local_38._4_4_ * fVar8) -(float)local_48 * UVar9.z;
				__this_00.localRotation = UVar9;
				uVar6 = uVar6 + 1;
				pGVar4 = this._gears;
				lVar5 = lVar5 + 0x20;
			} while (pGVar4 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x5D89050", Offset = "0x5D88050", VA = "0x5D89050")]
	private void ResetMotion()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c (Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$ResetMotion): 4 lines keep C-only constructs
		Vector2 UVar1;
		Vector2 UVar2;
		ulong uVar3;
		uint uVar4;
		AottgGameCreatePreviewPlane[] pGVar5;
		AottgGameCreatePreviewPlane __this_00;
		AottgGameCreateCardPreview.StarRest[] pGVar6;
		RectTransform pUVar7;
		AottgGameCreateCardPreview.GearRest[] pGVar8;
		bool bVar9;
		ulong uVar10;
		Graphic pUVar11;
		ulong uVar12;
		float pfVar13;
		float fVar14;
		float fVar15;
		Quaternion value;
		Quaternion value_00;

		this._tilt = (Vector2.zeroVector);
		this._starStrength = 0.0;
		this._gearStrength = 0.0;
		this._phase = 0.0;
		pGVar5 = this._planes;
		if (pGVar5 != null) {
			if (0 < (int)pGVar5.Length) {
				uVar10 = pGVar5.Length & 0xffffffff;
				uVar12 = 0;
				do {
					if (uVar10 <= uVar12) goto label_05e8935c;
					__this_00 = pGVar5[uVar12];
					bVar9 = ((Object)__this_00 != null);
					if (bVar9) {
						if (__this_00 == null) goto label_05e89348;
						UVar1 = (Vector2.zeroVector);
						UVar2 = __this_00._tilt;
						fVar14 = UVar2.x - UVar1.x;
						fVar15 = UVar2.y - UVar1.y;
						if (9.9999994e-11 <= fVar15 * fVar15 + fVar14 * fVar14) {
							__this_00._tilt = UVar1;
							pUVar11 = __this_00.graphic;
							if (pUVar11 == null) goto label_05e89348;
							pUVar11.SetVerticesDirty();
						}
					}
					uVar12 = uVar12 + 1;
					uVar4 = (uint)pGVar5.Length;
					uVar10 = (ulong)uVar4;
				} while ((long)uVar12 < (long)(int)uVar4);
			}
			pGVar6 = this._stars;
			if (pGVar6 != null) {
				if (0 < (int)pGVar6.Length) {
					uVar10 = pGVar6.Length & 0xffffffff;
					pfVar13 = &pGVar6[0].Rotation.z;
					uVar12 = 0;
					do {
						if (uVar10 <= uVar12) goto label_05e8935c;
						pUVar7 = *(RectTransform*)(pfVar13 + -6);
						UVar1 = *(Vector2)(pfVar13 + -4);
						uVar3 = *(ulong)pfVar13;
						bVar9 = ((Object)pUVar7 == null);
						if (!bVar9) {
							if (pUVar7 == null) goto label_05e89348;
							pUVar7.anchoredPosition = (Vector2)UVar1;
							value._8_8_ = uVar3;
							value.x = ((Quaternion)(pfVar13 + -2)).x;
							value.y = ((Quaternion)(pfVar13 + -2)).y;
							pUVar7.localRotation = value;
						}
						uVar12 = uVar12 + 1;
						uVar4 = (uint)pGVar6.Length;
						uVar10 = (ulong)uVar4;
						pfVar13 = pfVar13 + 8;
					} while ((long)uVar12 < (long)(int)uVar4);
				}
				pGVar8 = this._gears;
				if (pGVar8 != null) {
					if (0 < (int)pGVar8.Length) {
						uVar10 = pGVar8.Length & 0xffffffff;
						pfVar13 = &pGVar8[0].Rotation.z;
						uVar12 = 0;
						do {
							if (uVar10 <= uVar12) {
	label_05e8935c: ;
								throw new IndexOutOfRangeException();
							}
							pUVar7 = *(RectTransform*)(pfVar13 + -6);
							UVar1 = *(Vector2)(pfVar13 + -4);
							uVar3 = *(ulong)pfVar13;
							bVar9 = ((Object)pUVar7 == null);
							if (!bVar9) {
								if (pUVar7 == null) goto label_05e89348;
								pUVar7.anchoredPosition = (Vector2)UVar1;
								value_00._8_8_ = uVar3;
								value_00.x = ((Quaternion)(pfVar13 + -2)).x;
								value_00.y = ((Quaternion)(pfVar13 + -2)).y;
								pUVar7.localRotation = value_00;
							}
							uVar12 = uVar12 + 1;
							uVar4 = (uint)pGVar8.Length;
							uVar10 = (ulong)uVar4;
							pfVar13 = pfVar13 + 8;
						} while ((long)uVar12 < (long)(int)uVar4);
					}
					return;
				}
			}
		}
	label_05e89348: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x5D89DC0", Offset = "0x5D88DC0", VA = "0x5D89DC0")]
	private void OnDisable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c (Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$OnDisable): clean
		this._hovered = false;
		this.ResetMotion();
		return;
	}

	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x5D89DD0", Offset = "0x5D88DD0", VA = "0x5D89DD0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c (Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$OnDestroy): clean
		uint uVar1;
		Image pUVar2;
		Material pUVar3;
		bool bVar4;

		pUVar2 = this._fallback;
		bVar4 = ((Object)pUVar2 != null);
		if (bVar4) {
			pUVar2 = this._fallback;
			if (pUVar2 == null) {
				throw new NullReferenceException();
			}
			pUVar2.set_material(this._fallbackMaterial);
		}
		pUVar3 = this._material;
		bVar4 = ((Object)pUVar3 == null);
		if (bVar4) {
			return;
		}
		bVar4 = Application.isPlaying;
		pUVar3 = this._material;
		uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		if (bVar4) {
			if (uVar1 == 0) {
			}
			Object.Destroy((Object)pUVar3);
			return;
		}
		if (uVar1 == 0) {
		}
		Object.DestroyImmediate((Object)pUVar3);
		return;
	}

	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x5D88AC0", Offset = "0x5D87AC0", VA = "0x5D88AC0")]
	private static void ReportFallback(string key, string message)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c (Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$ReportFallback): clean
		uint uVar1;
		HashSet<object> __this;
		bool bVar2;

		if (Il2CppMethodInitialized_0754886d == false) {
			Il2CppMethodInitialized_0754886d = true;
			uVar1 = (typeof(AottgGameCreateCardPreview)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateCardPreview)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (HashSet<object>)AottgGameCreateCardPreview.ReportedFallbacks;
		}
		else {
			__this = *(HashSet<object>*)(typeof(AottgGameCreateCardPreview)).static_fields;
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar2 = __this.Add((object)key);
		if (!bVar2) {
			return;
		}
		Debug.LogWarning((object)message);
		return;
	}

	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x5D89EE0", Offset = "0x5D88EE0", VA = "0x5D89EE0")]
	public AottgGameCreateCardPreview()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c (Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$.ctor): 24 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		MethodInfo pMVar3;
		Il2CppClass pIVar4;

		pMVar3 = MethodInfo_System_Array_Empty_AottgGameCreatePreviewPlane;
		if ((MethodInfo_System_Array_Empty_AottgGameCreatePreviewPlane.field7_0x38).methodMetadataHandle ==null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AottgGameCreatePreviewPlane);
			pIVar4 = *(Il2CppClass*)((long)(pMVar3.field7_0x38).methodMetadataHandle + 0x10);
			bVar1 = (pIVar4._2).bitflags1;
		}
		else {
			pIVar4 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_AottgGameCreatePreviewPlane.field7_0x38). methodMetadataHandle + 0x10);
			bVar1 = (pIVar4._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
			uVar2 = (pIVar4._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = *(uint)((long)pIVar4 + 0xe4);
		}
		if (uVar2 == 0) {
			pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar4._2).bitflags1;
		}
		else {
			pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar4._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
		}
		this._planes = *(AottgGameCreatePreviewPlane[]*)pIVar4.static_fields;
		pMVar3 = MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_StarRest;
		if ((MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_StarRest.field7_0x38).methodMetadataHandle ==null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_StarRest);
			pIVar4 = *(Il2CppClass*)((long)(pMVar3.field7_0x38).methodMetadataHandle + 0x10);
			bVar1 = (pIVar4._2).bitflags1;
		}
		else {
			pIVar4 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_StarRest.field7_0x38). methodMetadataHandle + 0x10);
			bVar1 = (pIVar4._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
			uVar2 = (pIVar4._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = *(uint)((long)pIVar4 + 0xe4);
		}
		if (uVar2 == 0) {
			pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar4._2).bitflags1;
		}
		else {
			pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar4._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
		}
		this._stars = *(AottgGameCreateCardPreview.StarRest[]*)pIVar4.static_fields;
		pMVar3 = MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_GearRest;
		if ((MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_GearRest.field7_0x38).methodMetadataHandle ==null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_GearRest);
			pIVar4 = *(Il2CppClass*)((long)(pMVar3.field7_0x38).methodMetadataHandle + 0x10);
			bVar1 = (pIVar4._2).bitflags1;
		}
		else {
			pIVar4 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_GearRest.field7_0x38). methodMetadataHandle + 0x10);
			bVar1 = (pIVar4._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
			uVar2 = (pIVar4._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (pIVar4._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar4._2).bitflags1;
		}
		else {
			pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar4._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
		}
		this._gears = *(AottgGameCreateCardPreview.GearRest[]*)pIVar4.static_fields;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCardPreview.c.

	// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$.cctor: clean
	static AottgGameCreateCardPreview()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		AottgGameCreateCardPreview.ReportedFallbacks = __this;
		return;
	}
}
