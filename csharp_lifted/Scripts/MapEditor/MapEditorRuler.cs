// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.MapEditorRuler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/MapEditorRuler.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UI;
using UnityEngine;
using Utility;

namespace MapEditor;

[Token(Token = "0x2000155")]
public class MapEditorRuler
{
	[Token(Token = "0x40007CB")]
	private const float HandleScreenRadius = 18f;

	[Token(Token = "0x40007CC")]
	private const float CloseShapeScreenRadius = 22f;

	[Token(Token = "0x40007CD")]
	private const float VertexSnapScreenRadius = 30f;

	[Token(Token = "0x40007CE")]
	private const float VertexSnapDepthTiebreakPixels = 6f;

	[Token(Token = "0x40007CF")]
	private const float MinLabelScale = 0.15f;

	[Token(Token = "0x40007D0")]
	private const float MaxLabelScale = 25f;

	[Token(Token = "0x40007D1")]
	private const float CardinalAngleStep = 45f;

	[Token(Token = "0x40007D2")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<RulerMeasurement> _measurements;

	[Token(Token = "0x40007D3")]
	[FieldOffset(Offset = "0x18")]
	private GameObject _root;

	[Token(Token = "0x40007D4")]
	[FieldOffset(Offset = "0x20")]
	private MapEditorMenu _menu;

	[Token(Token = "0x40007D5")]
	[FieldOffset(Offset = "0x28")]
	private RulerMeasurement _pending;

	[Token(Token = "0x40007D6")]
	[FieldOffset(Offset = "0x30")]
	private RulerMeasurement _dragging;

	[Token(Token = "0x40007D7")]
	[FieldOffset(Offset = "0x38")]
	private bool _dragOrigin;

	[Token(Token = "0x40007D8")]
	[FieldOffset(Offset = "0x3C")]
	private Vector3? _chainRoot;

	[Token(Token = "0x40007D9")]
	[FieldOffset(Offset = "0x4C")]
	private bool _awaitingFirstPoint;

	[Token(Token = "0x40007DA")]
	[FieldOffset(Offset = "0x4D")]
	private bool _creatingMeasurement;

	[Token(Token = "0x40007DB")]
	[FieldOffset(Offset = "0x0")]
	private static Shader _visualShader;

	[Token(Token = "0x170000D6")]
	public IReadOnlyList<RulerMeasurement> Measurements
	{
		[Token(Token = "0x60006F6")]
		[Address(RVA = "0x5CB6B70", Offset = "0x5CB5B70", VA = "0x5CB6B70")]
		get
		{
			// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$get_Measurements): clean
			return (IReadOnlyList<RulerMeasurement>)this._measurements;
		}
	}

	[Token(Token = "0x170000D7")]
	public bool Active
	{
		[Token(Token = "0x60006F7")]
		[Address(RVA = "0x5CB6B80", Offset = "0x5CB5B80", VA = "0x5CB6B80")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$get_Active): clean
			return this._Active_k__BackingField;
		}
		[Token(Token = "0x60006F8")]
		[Address(RVA = "0x5CB6B90", Offset = "0x5CB5B90", VA = "0x5CB6B90")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$set_Active): clean
			this._Active_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170000D8")]
	public bool IsCreatingMeasurement
	{
		[Token(Token = "0x60006F9")]
		[Address(RVA = "0x5CB6BA0", Offset = "0x5CB5BA0", VA = "0x5CB6BA0")]
		get
		{
			// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$get_IsCreatingMeasurement): clean
			return this._creatingMeasurement;
		}
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x5CB6BB0", Offset = "0x5CB5BB0", VA = "0x5CB6BB0")]
	internal void SetActive(bool active, MapEditorMenu menu)
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$SetActive): clean
		GameObject __this_00;

		this._menu = menu;
		this._Active_k__BackingField = active;
		this.EnsureRoot();
		__this_00 = this._root;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetActive(active);
		if (active) {
			return;
		}
		this.CancelInteraction();
		return;
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x5CB6EF0", Offset = "0x5CB5EF0", VA = "0x5CB6EF0")]
	public void CreateNewMeasurement()
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$CreateNewMeasurement): clean
		bool bVar1;
		MapEditorMenu __this_00;

		bVar1 = this._creatingMeasurement;
		this.CancelInteraction();
		if (bVar1 == false) {
			this._awaitingFirstPoint = true;
			this._creatingMeasurement = true;
			__this_00 = this._menu;
		}
		else {
			__this_00 = this._menu;
		}
		if (__this_00 == null) {
			return;
		}
		__this_00.SyncRulerPanel();
		return;
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x5CB6F30", Offset = "0x5CB5F30", VA = "0x5CB6F30")]
	public void ChainFrom(int index)
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$ChainFrom): 7 lines keep C-only constructs
		Vector3 pUVar1;
		List<RulerMeasurement> pSVar2;
		System_Nullable_Vector3__o pSVar3;
		RulerMeasurement pMVar4;
		uint in_register_00000034;
		MethodInfo method_02;
		Vector3 value;
		System_Nullable_Vector3__Fields local_28;

		method_02 = (MethodInfo)CONCAT44(in_register_00000034, index);
		if (index < 0) {
			return;
		}
		pSVar2 = this._measurements;
		if (pSVar2 != null) {
			if (pSVar2._size <= index) {
				return;
			}
			this.CancelInteraction();
			pSVar2 = this._measurements;
			if (pSVar2 != null) {
				pMVar4 = pSVar2.get_Item(index);
				value = this.FindChainRoot(pMVar4);
				local_28.hasValue = false;
				local_28._1_3_ = 0;
				local_28.value.x = 0.0;
				local_28.value.y = 0.0;
				local_28.value.z = 0.0;
				local_28 = new Nullable<Vector3>(value);
				this._chainRoot.hasValue = local_28.hasValue;
				*(undefined3)&this._chainRoot.field_0x1 = local_28._1_3_;
				this._chainRoot.value.x = local_28.value.x;
				pSVar3 = &this._chainRoot;
				pSVar3.value.y = local_28.value.y;
				pSVar3.value.z = local_28.value.z;
				if (pMVar4 != null) {
					pUVar1 = &pMVar4.End;
					pMVar4 = this.AddMeasurement((Vector3)pUVar1.fields, (Vector3)pUVar1.fields, pMVar4.Color);
					this._pending = pMVar4;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x5CB74E0", Offset = "0x5CB64E0", VA = "0x5CB74E0")]
	public void Delete(int index)
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$Delete): clean
		List<RulerMeasurement> pSVar1;
		Object pUVar2;
		bool bVar3;
		RulerMeasurement item;

		if (-1 < index) {
			pSVar1 = this._measurements;
			if (pSVar1 == null) {
	label_05db75e9: ;
				throw new NullReferenceException();
			}
			if (index < pSVar1._size) {
				item = pSVar1.get_Item(index);
				if ((this._pending == item) || (this._dragging == item)) {
					this.CancelInteraction();
				}
				pSVar1 = this._measurements;
				if (pSVar1 == null) goto label_05db75e9;
				bVar3 = pSVar1.Remove((object)item);
				if (bVar3) {
					if (item == null) goto label_05db75e9;
					pUVar2 = (Object)item.Root;
					bVar3 = (pUVar2 != null);
					if (bVar3) {
						pUVar2 = (Object)item.Root;
						Object.Destroy(pUVar2);
						return;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x5CB75F0", Offset = "0x5CB65F0", VA = "0x5CB75F0")]
	public void SetOrigin(int index, Vector3 origin)
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$SetOrigin): clean
		List<RulerMeasurement> __this_00;
		RulerMeasurement pMVar1;
		MapEditorRuler __this_01;

		if (index < 0) {
			return;
		}
		__this_00 = this._measurements;
		if (__this_00 != null) {
			if (__this_00._size <= index) {
				return;
			}
			pMVar1 = __this_00.get_Item(index);
			if (pMVar1 != null) {
				pMVar1.Origin.x = origin.x;
				pMVar1.Origin.y = origin.y;
				pMVar1.Origin.z = origin.z;
				__this_01 = (MapEditorRuler)this._measurements;
				if (__this_01 != null) {
					pMVar1 = __this_01.get_Item(index);
					__this_01.RefreshVisual(pMVar1);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x5CB7A90", Offset = "0x5CB6A90", VA = "0x5CB7A90")]
	public void SetLength(int index, float length)
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$SetLength): 47 lines keep C-only constructs
		uint uVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		float fVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		List<RulerMeasurement> __this_00;
		RulerMeasurement measurement;
		UnityEngine_Vector3_StaticFields pUVar10;
		Il2CppClass klass;
		float fVar12;
		float extraout_XMM0_Db;
		float fVar13;
		float fVar14;
		byte[] auVar15 = new byte[16];
		byte[] auStack_60 = new byte[24];
		byte[] auStack_48 = new byte[12];
		float fStack_3c;
		byte[] auStack_38 = new byte[16];
		float fStack_28;
		float fStack_24;
		ulong uStack_20;

		if (index < 0) {
			return;
		}
		__this_00 = this._measurements;
		if (__this_00 != null) {
			if (__this_00._size <= index) {
				return;
			}
			measurement = __this_00.get_Item(index);
			if (measurement != null) {
				uVar1 = measurement.End.x;
				uVar5 = measurement.End.y;
				fVar2 = measurement.Origin.x;
				fVar6 = measurement.Origin.y;
				fVar13 = measurement.Origin.z;
				auStack_60._12_4_ = (float)uVar5 - fVar6;
				auStack_38 = ZEXT416((uint)fVar13);
				fStack_28 = fVar2;
				fStack_24 = fVar6;
				uStack_20._0_4_ = 0.0;
				uStack_20._4_4_ = 0.0;
				fVar13 = measurement.End.z - fVar13;
				fVar14 = (float)uVar1 - fVar2;
				if (0.0001 <= fVar14 * fVar14 + auStack_60._12_4_ * auStack_60._12_4_ + fVar13 * fVar13) {
					auStack_60._8_4_ = fVar14;
					auStack_60._16_4_ = fVar14;
					auStack_60._20_4_ = fVar14;
					auStack_48._4_4_ = fVar14;
					auStack_48._0_4_ = fVar13;
					auStack_48._8_4_ = 0;
					fStack_3c = (float)uVar5 - fVar6;
				}
				else {
					if (Il2CppMethodInitialized_07544d56 == false) {
						Il2CppMethodInitialized_07544d56 = true;
						fStack_28 = measurement.Origin.x;
						fStack_24 = measurement.Origin.y;
						uStack_20._0_4_ = 0.0;
						uStack_20._4_4_ = 0.0;
						auStack_38 = ZEXT416((uint)measurement.Origin.z);
					}
					pUVar10 = typeof(Vector3).static_fields;
					uVar3 = (pUVar10.rightVector).x;
					uVar7 = (pUVar10.rightVector).y;
					auStack_60._12_4_ = (float)uVar7;
					auStack_60._8_4_ = uVar3;
					auStack_60._16_8_ = 0;
					fVar13 = (pUVar10.rightVector).z;
					fVar14 = 0.0;
				}
				uStack_20._0_4_ = 0.0;
				uStack_20._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e72d == false) {
					uStack_20._0_4_ = 0.0;
					uStack_20._4_4_ = 0.0;
					Il2CppMethodInitialized_0753e72d = true;
					fVar13 = (float)auStack_48._0_4_;
					fVar14 = (float)auStack_48._4_4_;
				}
				auStack_60._0_4_ = 0.0;
				auStack_60._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) {
					Il2CppMethodInitialized_0753e729 = true;
					uVar9 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					fVar13 = (float)auStack_48._0_4_;
					fVar14 = (float)auStack_48._4_4_;
					klass = typeof(Math);
				}
				else {
					uVar9 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					klass = typeof(Math);
				}
				typeof(Math) = (Math)klass;
				if (uVar9 == 0) {
					fVar13 = (float)auStack_48._0_4_;
					fVar14 = (float)auStack_48._4_4_;
				}
				fVar12 = fVar13 * fVar13 + auStack_60._12_4_ * auStack_60._12_4_ + auStack_60._8_4_ * auStack_60._8_4_;
				if (fVar12 < 0.0) {
					fVar12 = sqrtf(fVar12);
					fVar14 = extraout_XMM0_Db;
					fVar13 = (float)auStack_48._0_4_;
				}
				else {
					fVar12 = SQRT(fVar12);
				}
				if (1e-05 < fVar12) {
					fVar13 = fVar13 / fVar12;
					auVar15._4_4_ = fVar12;
					auVar15._0_4_ = fVar12;
					auVar15._8_4_ = fVar14;
					auVar15._12_4_ = fVar14;
					auVar15 = divps((byte[])auStack_60._8_16_, auVar15);
					auStack_60._0_4_ = auVar15._0_4_;
					auStack_60._4_4_ = auVar15._4_4_;
					pUVar10 = (UnityEngine_Vector3_StaticFields)auStack_60;
				}
				else {
					pUVar10 = typeof(Vector3).static_fields;
					fVar13 = (pUVar10.zeroVector).z;
				}
				uVar4 = (pUVar10.zeroVector).x;
				uVar8 = (pUVar10.zeroVector).y;
				fVar14 = 0.0;
				if (0.0 <= length) {
					fVar14 = length;
				}
				measurement.End.x = fStack_28 + fVar14 * (float)uVar4;
				measurement.End.y = fStack_24 + fVar14 * (float)uVar8;
				measurement.End.z = (float)auStack_38._0_4_ + fVar13 * fVar14;
				klass.RefreshVisual(measurement);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x5CB7D30", Offset = "0x5CB6D30", VA = "0x5CB7D30")]
	public void SetColor(int index, Color255 color)
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$SetColor): clean
		int r;
		int g;
		int b;
		int a;
		List<RulerMeasurement> __this_00;
		RulerMeasurement pMVar1;
		Color255 __this_01;
		MapEditorRuler __this_02;

		if (index < 0) {
			return;
		}
		__this_00 = this._measurements;
		if (__this_00 != null) {
			if (__this_00._size <= index) {
				return;
			}
			pMVar1 = __this_00.get_Item(index);
			if (color != null) {
				r = color.R;
				g = color.G;
				b = color.B;
				a = color.A;
				__this_01 = new Color255(r, g, b, a);
				if (pMVar1 != null) {
					pMVar1.Color = __this_01;
					__this_02 = (MapEditorRuler)this._measurements;
					if (__this_02 != null) {
						pMVar1 = __this_02.get_Item(index);
						__this_02.RefreshVisual(pMVar1);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x5CB7E50", Offset = "0x5CB6E50", VA = "0x5CB7E50")]
	public void Update()
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$Update): 23 lines keep C-only constructs
		RulerMeasurement* ppMVar1;
		BaseCamera pCVar2;
		Camera x;
		MapEditorMenu pUVar3;
		Vector3 point;
		Vector3 point_00;
		Vector3 point_01;
		System_Nullable_Vector3__o pSVar4;
		float fVar5;
		bool bVar6;
		Color255 __this_00;
		RulerMeasurement pMVar7;
		MethodInfo pMVar9;
		MapEditorRuler __this_01;
		Vector3 UVar10;
		Vector3 value;
		Vector3 end;
		Vector3 local_78;
		Vector3 local_68;
		Vector3 local_58;
		byte[] local_48 = new byte[16];
		System_Nullable_Vector3__Fields local_38;

		local_68.z = 0.0;
		local_68.x = 0.0;
		local_68.y = 0.0;
		local_58.z = 0.0;
		local_58.x = 0.0;
		local_58.y = 0.0;
		local_78.z = 0.0;
		local_78.x = 0.0;
		local_78.y = 0.0;
		if (this._Active_k__BackingField == false) {
			return;
		}
		pCVar2 = SceneLoader.CurrentCamera;
		bVar6 = ((Object)pCVar2 == null);
		if (bVar6) {
			return;
		}
		pCVar2 = SceneLoader.CurrentCamera;
		if (pCVar2 != null) {
			x = pCVar2.Camera;
			pMVar9 = null;
			bVar6 = ((Object)x == null);
			if (bVar6) {
				return;
			}
			this.UpdateVisualScale();
			pUVar3 = this._menu;
			bVar6 = ((Object)pUVar3 == null);
			if (bVar6) {
				return;
			}
			pUVar3 = this._menu;
			if (pUVar3 != null) {
				bVar6 = pUVar3.IsPopupActive();
				if (bVar6) {
					return;
				}
				pUVar3 = this._menu;
				if (pUVar3 != null) {
					if (pUVar3.IsMouseUI != false) {
						return;
					}
					pCVar2 = SceneLoader.CurrentCamera;
					if (pCVar2 != null) {
						pMVar9 = (MethodInfo)pCVar2.Camera;
						ppMVar1 = &this._pending;
						if (this._pending == null) {
							if ((this._awaitingFirstPoint != false) &&(bVar6 = Input.GetMouseButtonDown(0))) {
								bVar6 = MapEditorRuler.TryGetPlacementPoint((Camera)pMVar9, ref local_58);
								fVar5 = local_58.z;
								if (!bVar6) {
									return;
								}
								local_48._0_4_ = local_58.x;
								local_48._4_4_ = local_58.y;
								local_48._8_8_ = 0;
								__this_00 = new Color255(0xff, 0xd2, 0x28, 0xff);
								UVar10.z = fVar5;
								UVar10.x = (float)local_48._0_4_;
								UVar10.y = (float)local_48._4_4_;
								end.z = fVar5;
								end.x = (float)local_48._0_4_;
								end.y = (float)local_48._4_4_;
								pMVar7 = this.AddMeasurement(UVar10, end, __this_00);
								this._pending = pMVar7;
								local_38.hasValue = false;
								local_38._1_3_ = 0;
								local_38.value.x = 0.0;
								local_38.value.y = 0.0;
								local_38.value.z = 0.0;
								value.z = fVar5;
								value.x = (float)local_48._0_4_;
								value.y = (float)local_48._4_4_;
								local_38 = new Nullable<Vector3>(value);
								this._chainRoot.hasValue = local_38.hasValue;
								*(undefined3)&this._chainRoot.field_0x1 = local_38._1_3_;
								this._chainRoot.value.x = local_38.value.x;
								pSVar4 = &this._chainRoot;
								pSVar4.value.y = local_38.value.y;
								pSVar4.value.z = local_38.value.z;
								this._awaitingFirstPoint = false;
								pUVar3 = this._menu;
								if (pUVar3 != null) {
									pUVar3.SyncRulerPanel();
									return;
								}
								goto label_05db8295;
							}
							if (this._dragging == null) {
								bVar6 = Input.GetMouseButtonDown(0);
								if (bVar6) {
									this.TryBeginHandleDrag((Camera)pMVar9);
									return;
								}
								return;
							}
							ppMVar1 = &this._dragging;
							bVar6 = Input.GetMouseButton(0);
							if ((bVar6) &&(bVar6 = MapEditorRuler.TryGetPlacementPoint((Camera)pMVar9, ref local_78))) {
								pMVar7 = this._dragging;
								if (this._dragOrigin == false) {
									if (pMVar7 == null) goto label_05db8295;
									point_00.z = local_78.z;
									point_00.x = local_78.x;
									point_00.y = local_78.y;
									UVar10 = MapEditorRuler.ApplyPlacementConstraints((Vector3)pMVar7.Origin, point_00);
									pMVar7.End.x = UVar10.x;
									pMVar7.End.y = UVar10.y;
									pMVar7.End.z = UVar10.z;
								}
								else {
									if (pMVar7 == null) goto label_05db8295;
									point.z = local_78.z;
									point.x = local_78.x;
									point.y = local_78.y;
									UVar10 = MapEditorRuler.ApplyPlacementConstraints((Vector3)pMVar7.End, point);
									pMVar7.Origin.x = UVar10.x;
									pMVar7.Origin.y = UVar10.y;
									pMVar7.Origin.z = UVar10.z;
								}
								pMVar9.RefreshVisual(*ppMVar1);
							}
							bVar6 = Input.GetMouseButtonUp(0);
							if (!bVar6) {
								return;
							}
							this._dragging = null;
						}
						else {
							bVar6 = MapEditorRuler.TryGetPlacementPoint((Camera)pMVar9, ref local_68);
							if (bVar6) {
								if (*ppMVar1 == null) goto label_05db8295;
								point_01.z = local_68.z;
								point_01.x = local_68.x;
								point_01.y = local_68.y;
								UVar10 = MapEditorRuler.ApplyPlacementConstraints((Vector3)((*ppMVar1).fields).Origin, point_01);
								local_68.z = UVar10.z;
								local_68._0_8_ = UVar10._0_8_;
								pMVar7 = this._pending;
								__this_01 = this;
								UVar10 = this.SnapToChainRoot((Camera)pMVar9, UVar10);
								if (pMVar7 == null) goto label_05db8295;
								pMVar7.End.x = UVar10.x;
								pMVar7.End.y = UVar10.y;
								pMVar7.End.z = UVar10.z;
								__this_01.RefreshVisual(*ppMVar1);
							}
							bVar6 = Input.GetMouseButtonDown(0);
							if (!bVar6) {
								return;
							}
							this._pending = null;
							this._chainRoot.hasValue = false;
							*(undefined3)&this._chainRoot.field_0x1 = 0;
							this._chainRoot.value.x = 0.0;
							pSVar4 = &this._chainRoot;
							pSVar4.value.y = 0.0;
							pSVar4.value.z = 0.0;
							this._creatingMeasurement = false;
						}
						pUVar3 = this._menu;
						if (pUVar3 != null) {
							pUVar3.SyncRulerPanel();
							return;
						}
					}
				}
			}
		}
	label_05db8295: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x5CB72F0", Offset = "0x5CB62F0", VA = "0x5CB72F0")]
	private RulerMeasurement AddMeasurement(Vector3 origin, Vector3 end, Color255 color)
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$AddMeasurement): 4 lines keep C-only constructs
		int piVar1;
		int r;
		int g;
		int b;
		int a;
		uint uVar2;
		List<RulerMeasurement> __this_00;
		RulerMeasurement[] pMVar3;
		RulerMeasurement measurement;
		Color255 pUVar4;
		Color255* targetAddress;

		this.EnsureRoot();
		pUVar4 = new Color255(0xff, 0xd2, 0x28, 0xff);
		targetAddress = &measurement.Color;
		measurement.Color = pUVar4;
		measurement = new RulerMeasurement();
		measurement.Origin.x = origin.x;
		measurement.Origin.y = origin.y;
		measurement.Origin.z = origin.z;
		measurement.End.x = end.x;
		measurement.End.y = end.y;
		measurement.End.z = end.z;
		if (color != null) {
			r = color.R;
			g = color.G;
			b = color.B;
			a = color.A;
			pUVar4 = new Color255(r, g, b, a);
			measurement.Color = pUVar4;
			this.CreateVisual(measurement);
			__this_00 = this._measurements;
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pMVar3 = __this_00._items;
				if (pMVar3 != null) {
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pMVar3.Length) {
						__this_00._size = uVar2 + 1;
						pMVar3[(int)uVar2] = measurement;
					}
					else {
						__this_00.AddWithResize((object)measurement);
					}
					return measurement;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x5CB9340", Offset = "0x5CB8340", VA = "0x5CB9340")]
	private void CreateVisual(RulerMeasurement measurement)
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$CreateVisual): 20 lines keep C-only constructs
		GameObject* targetAddress;
		LineRenderer* targetAddress_00;
		TextMesh* targetAddress_01;
		Renderer __this_00;
		GameObject pUVar1;
		Transform pUVar2;
		Transform pUVar3;
		LineRenderer pUVar4;
		Shader shader;
		Material __this_01;
		TextMesh pUVar5;
		MethodInfo method_01;
		MapEditorRuler __this_02;

		pUVar1 = new GameObject("RulerMeasurement");
		if (measurement != null) {
			targetAddress = &measurement.Root;
			measurement.Root = pUVar1;
			pUVar1 = measurement.Root;
			if (pUVar1 != null) {
				pUVar2 = pUVar1.transform;
				pUVar1 = this._root;
				if (pUVar1 != null) {
					pUVar3 = pUVar1.transform;
					if (pUVar2 != null) {
						pUVar2.SetParent(pUVar3, false);
						if (*targetAddress != null) {
							pUVar4 = (*targetAddress).AddComponent<LineRenderer>();
							targetAddress_00 = &measurement.Line;
							measurement.Line = pUVar4;
							pUVar4 = measurement.Line;
							if (pUVar4 != null) {
								pUVar4.useWorldSpace = true;
								if (*targetAddress_00 != null) {
									(*targetAddress_00).positionCount = 2;
									if (*targetAddress_00 != null) {
										(*targetAddress_00).widthMultiplier = 0.12;
										method_01 = (MethodInfo)*targetAddress_00;
										if (method_01 != null) {
											method_01.numCapVertices = 4;
											__this_00 = (Renderer)*targetAddress_00;
											shader = MapEditorRuler.GetVisualShader();
											__this_01 = new Material(shader);
											if (__this_00 != null) {
												__this_00.material = __this_01;
												if (*targetAddress != null) {
													pUVar2 = (*targetAddress).transform;
													pUVar2 = MapEditorRuler.CreateHandle(pUVar2, "Origin", 3);
													measurement.OriginHandle = pUVar2;
													pUVar1 = measurement.Root;
													if (pUVar1 != null) {
														pUVar2 = pUVar1.transform;
														pUVar2 = MapEditorRuler.CreateHandle(pUVar2, "End", 0);
														measurement.EndHandle = pUVar2;
														pUVar1 = new GameObject("LengthLabel");
														if (pUVar1 != null) {
															pUVar2 = pUVar1.transform;
															if (*targetAddress != null) {
																pUVar3 = (*targetAddress).transform ;
																if (pUVar2 != null) {
																	pUVar2.SetParent(pUVar3, false);
																	pUVar5 = pUVar1.AddComponent<TextMesh>();
																	targetAddress_01 = &measurement.Label;
																	measurement.Label = pUVar5;
																	pUVar5 = measurement.Label;
																	if (pUVar5 != null) {
																		pUVar5.anchor = 4;
																		if (*targetAddress_01 != null) {
																			(*targetAddress_01).alignment = 1 ;
																			if (*targetAddress_01 != null) {
																				(*targetAddress_01).fontSize = 0x30;
																				__this_02 = (MapEditorRuler)*targetAddress_01;
																				if (__this_02 != null) {
																					__this_02.characterSize = 0.1;
																					__this_02.RefreshVisual(measurement);
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
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x5CB9760", Offset = "0x5CB8760", VA = "0x5CB9760")]
	private static Transform CreateHandle(Transform parent, string name, PrimitiveType primitiveType)
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$CreateHandle): clean
		bool bVar1;
		MethodInfo __this;
		Transform pUVar2;
		Object x;
		Renderer __this_00;
		Shader shader;
		Material __this_01;

		__this = (MethodInfo)GameObject.CreatePrimitive(primitiveType);
		if (__this != null) {
			__this.name = name;
			pUVar2 = __this.transform;
			if (pUVar2 != null) {
				pUVar2.SetParent(parent, false);
				x = (Object)__this.GetComponent<Collider>();
				bVar1 = (x != null);
				if (bVar1) {
					Object.Destroy(x);
				}
				__this_00 = __this.GetComponent<Renderer>();
				shader = MapEditorRuler.GetVisualShader();
				__this_01 = new Material(shader);
				if (__this_00 != null) {
					__this_00.material = __this_01;
					pUVar2 = __this.transform;
					return pUVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x5CB9690", Offset = "0x5CB8690", VA = "0x5CB9690")]
	private static Shader GetVisualShader()
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$GetVisualShader): clean
		Object x;
		bool bVar1;
		Shader pUVar2;

		x = (Object)MapEditorRuler._visualShader;
		bVar1 = (x == null);
		if (bVar1) {
			pUVar2 = Resources.Load<Shader>("Shaders/GizmoShader");
			MapEditorRuler._visualShader = pUVar2;
		}
		return MapEditorRuler._visualShader;
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x5CB76A0", Offset = "0x5CB66A0", VA = "0x5CB76A0")]
	private void RefreshVisual(RulerMeasurement measurement)
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$RefreshVisual): 10 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar6;
		ulong uVar5;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		Object x;
		Color255 __this_00;
		LineRenderer pUVar10;
		TextMesh pUVar11;
		Component __this_01;
		bool bVar12;
		Material pUVar13;
		Renderer pUVar14;
		String pSVar15;
		Transform pUVar16;
		float fVar17;
		float fVar18;
		float fVar19;
		uint uVar20;
		uint uVar21;
		Color value;
		Vector3 value_00;
		float local_2c;
		ulong local_28;
		ulong uStack_20;

		if (measurement != null) {
			x = (Object)measurement.Root;
			bVar12 = (x == null);
			if (bVar12) {
				return;
			}
			__this_00 = measurement.Color;
			if (__this_00 != null) {
				value = __this_00.ToColor();
				pUVar10 = measurement.Line;
				if (pUVar10 != null) {
					pUVar10.startColor = value;
					pUVar10 = measurement.Line;
					if (pUVar10 != null) {
						pUVar10.endColor = value;
						pUVar14 = (Renderer)measurement.Line;
						if ((pUVar14 != null) &&(pUVar13 = pUVar14.material, pUVar13 != null)) {
							pUVar13.color = value;
							pUVar10 = measurement.Line;
							if (pUVar10 != null) {
								pUVar10.SetPosition(0, (Vector3)measurement.Origin);
								pUVar10 = measurement.Line;
								if (pUVar10 != null) {
									pUVar10.SetPosition(1, (Vector3)measurement.End);
									pUVar16 = measurement.OriginHandle;
									if (pUVar16 != null) {
										pUVar16.position = (Vector3)measurement.Origin;
										pUVar16 = measurement.EndHandle;
										if (pUVar16 != null) {
											pUVar16.position = (Vector3)measurement.End;
											pUVar16 = measurement.OriginHandle;
											if (((pUVar16 != null) &&(pUVar14 = pUVar16.GetComponent<Renderer>(), pUVar14 != null)) &&(pUVar13 = pUVar14.material, pUVar13 != null)) {
												pUVar13.color = value;
												pUVar16 = measurement.EndHandle;
												if (((pUVar16 != null) &&(pUVar14 = pUVar16.GetComponent<Renderer>(), pUVar14 != null)) &&(pUVar13 = pUVar14.material, pUVar13 != null)) {
													pUVar13.color = value;
													pUVar11 = measurement.Label;
													if (pUVar11 != null) {
														pUVar11.color = value;
														pUVar11 = measurement.Label;
														uVar2 = measurement.Origin.x;
														uVar6 = measurement.Origin.y;
														fVar17 = measurement.Origin.z;
														uVar5._0_4_ = measurement.End.x;
														uVar5._4_4_ = measurement.End.y;
														uVar20 = 0;
														uVar21 = 0;
														fVar1 = measurement.End.z;
														if (Il2CppMethodInitialized_0753e7b7 == false) {
															uStack_20 = 0;
															local_28 = uVar5;
															Il2CppMethodInitialized_0753e7b7 = true;
															uVar9 = (typeof(Math)._2).cctor_finished_or_no_cctor;
															fVar18 = (float)local_28;
															fVar19 = local_28._4_4_;
															uVar20 = (undefined4)uStack_20;
															uVar21 = uStack_20._4_4_;
														}
														else {
															uVar9 = (typeof(Math)._2).cctor_finished_or_no_cctor;
															fVar18 = (float)(undefined4)uVar5;
															fVar19 = (float)uVar5._4_4_;
														}
														if (uVar9 == 0) {
															local_28 = CONCAT44(fVar19, fVar18);
															uStack_20 = CONCAT44(uVar21, uVar20);
															fVar18 = (float)local_28;
															fVar19 = local_28._4_4_;
														}
														fVar17 = fVar17 - fVar1;
														local_2c = fVar17 * fVar17 +((float)uVar6 - fVar19) * ((float)uVar6 - fVar19) +((float)uVar2 - fVar18) * ((float)uVar2 - fVar18);
														if (local_2c < 0.0) {
															local_2c = sqrtf(local_2c);
														}
														else {
															local_2c = SQRT(local_2c);
														}
														pSVar15 = local_2c.ToString("0.###");
														pSVar15 = String.Concat(pSVar15, " u");
														if (pUVar11 != null) {
															pUVar11.text = pSVar15;
															__this_01 = (Component)measurement.Label;
															if ((__this_01 != null) &&(pUVar16 = __this_01.transform, pUVar16 != null)) {
																uVar3 = measurement.Origin.x;
																uVar7 = measurement.Origin.y;
																uVar4 = measurement.End.x;
																uVar8 = measurement.End.y;
																value_00.x = ((float)uVar4 - (float)uVar3) * 0.5 + (float)uVar3;
																value_00.y = ((float)uVar8 - (float)uVar7) * 0.5 + (float)uVar7;
																fVar17 = measurement.Origin.z;
																value_00.z = (measurement.End.z - fVar17) * 0.5 + fVar17 ;
																pUVar16.position = value_00;
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x5CB82A0", Offset = "0x5CB72A0", VA = "0x5CB82A0")]
	private void UpdateVisualScale()
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$UpdateVisualScale): 27 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		BaseCamera pCVar8;
		List<RulerMeasurement> __this_00;
		Camera __this_01;
		Il2CppClass __this_02;
		UnityEngine_Vector3_StaticFields pUVar9;
		object pIVar10;
		bool bVar11;
		int iVar12;
		Transform pUVar13;
		Transform __this_03;
		float fVar14;
		float fVar15;
		uint extraout_XMM0_Db;
		uint uVar16;
		uint extraout_XMM0_Dc;
		uint uVar17;
		uint extraout_XMM0_Dd;
		uint uVar18;
		Quaternion value;
		Vector3 UVar19;
		Vector3 UVar20;
		Vector3 value_00;
		System_Collections_Generic_List_Enumerator_object__o local_88;
		byte[] local_70 = new byte[16];
		object local_60;
		ulong local_58;
		ulong local_48;

		local_88._list = null;
		local_88._index = 0;
		local_88._version = 0;
		local_88._current = null;
		pCVar8 = SceneLoader.CurrentCamera;
		if ((pCVar8 == null) ||(__this_00 = this._measurements, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_01 = pCVar8.Camera;
		local_70.GetEnumerator((List<object>)__this_00);
		local_88._current = local_60;
		local_88._list = (List<T>)local_70._0_8_;
		local_88._index = local_70._8_4_;
		local_88._version = local_70._12_4_;
		local_70._0_8_ = null;
		local_70._8_8_ = &local_88;
		if (__this_01 == null) {
			bVar11 = local_88.MoveNext();
			if (bVar11) {
				throw new NullReferenceException();
			}
		}
		else {
			while (true) {
				bVar11 = local_88.MoveNext();
				pIVar10 = local_88._current;
				if (!(bVar11)) break;
				pUVar13 = __this_01.transform;
				if (pUVar13 == null) {
					throw new NullReferenceException();
				}
				UVar19 = pUVar13.position;
				local_48 = UVar19._0_8_;
				if (pIVar10 == null) {
					throw new NullReferenceException();
				}
				if (pIVar10[5].klass == null) {
					throw new NullReferenceException();
				}
				pUVar13 = pIVar10[5].klass.transform;
				if (pUVar13 == null) {
					throw new NullReferenceException();
				}
				UVar20 = pUVar13.position;
				local_58 = UVar20._0_8_;
				if (Il2CppMethodInitialized_0753e7b7 == false) {
					Il2CppMethodInitialized_0753e7b7 = true;
					uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar7 == 0) {
				}
				fVar14 = UVar19.z - UVar20.z;
				fVar14 = fVar14 * fVar14 +(local_48._4_4_ - local_58._4_4_) * (local_48._4_4_ - local_58._4_4_) +((float)local_48 - (float)local_58) * ((float)local_48 - (float)local_58);
				if (fVar14 < 0.0) {
					fVar14 = sqrtf(fVar14);
				}
				else {
					fVar14 = SQRT(fVar14);
				}
				bVar11 = __this_01.orthographic;
				if (bVar11) {
					fVar15 = __this_01.orthographicSize;
					iVar12 = Screen.height;
					fVar14 = 1.0;
					if (1.0 <= (float)iVar12) {
						fVar14 = (float)iVar12;
					}
					fVar15 = (fVar15 / fVar14) * 3.0;
					uVar16 = extraout_XMM0_Db;
					uVar17 = extraout_XMM0_Dc;
					uVar18 = extraout_XMM0_Dd;
				}
				else {
					uVar16 = 0;
					uVar17 = 0;
					uVar18 = 0;
					fVar15 = 0.05;
					if (0.05 <= fVar14 * 0.008) {
						uVar16 = 0;
						uVar17 = 0;
						uVar18 = 0;
						fVar15 = fVar14 * 0.008;
					}
				}
				local_58 = CONCAT44(uVar16, fVar15 * 2.5);
				_uStack_50 = CONCAT44(uVar18, uVar17);
				__this_02 = pIVar10[4].klass;
				if (__this_02 == null) {
					throw new NullReferenceException();
				}
				pUVar9 = typeof(Vector3).static_fields;
				UVar19.z = (pUVar9.oneVector).z * fVar15;
				uVar1 = (pUVar9.oneVector).x;
				uVar4 = (pUVar9.oneVector).y;
				local_48 = CONCAT44(fVar15, fVar15);
				_fStack_40 = CONCAT44(fVar15, fVar15);
				UVar19.x = (float)uVar1 * fVar15;
				UVar19.y = (float)uVar4 * fVar15;
				__this_02.localScale = UVar19;
				pUVar13 = pIVar10[4].monitor;
				if (pUVar13 == null) {
					throw new NullReferenceException();
				}
				pUVar9 = typeof(Vector3).static_fields;
				UVar20.z = (pUVar9.oneVector).z * fVar15;
				uVar2 = (pUVar9.oneVector).x;
				uVar5 = (pUVar9.oneVector).y;
				UVar20.x = (float)local_48 * (float)uVar2;
				UVar20.y = local_48._4_4_ * (float)uVar5;
				pUVar13.localScale = UVar20;
				if (pIVar10[3].monitor == null) {
					throw new NullReferenceException();
				}
				pIVar10[3].monitor.widthMultiplier = fVar15 * 0.22;
				if (pIVar10[5].klass == null) {
					throw new NullReferenceException();
				}
				pUVar13 = pIVar10[5].klass.transform;
				if (pUVar13 == null) {
					throw new NullReferenceException();
				}
				fVar14 = 25.0;
				if ((float)local_58 <= 25.0) {
					fVar14 = (float)local_58;
				}
				fVar14 = (float)(~-(uint)(0.15 <= (float)local_58) & 0x3e19999a |(uint)fVar14 & -(uint)(0.15 <= (float)local_58));
				pUVar9 = typeof(Vector3).static_fields;
				value_00.z = (pUVar9.oneVector).z * fVar14;
				uVar3 = (pUVar9.oneVector).x;
				uVar6 = (pUVar9.oneVector).y;
				value_00.x = fVar14 * (float)uVar3;
				value_00.y = fVar14 * (float)uVar6;
				pUVar13.localScale = value_00;
				if (pIVar10[5].klass == null) {
					throw new NullReferenceException();
				}
				pUVar13 = pIVar10[5].klass.transform;
				__this_03 = __this_01.transform ;
				if (__this_03 == null) {
					throw new NullReferenceException();
				}
				value = __this_03.rotation;
				if (pUVar13 == null) {
					throw new NullReferenceException();
				}
				pUVar13.rotation = value;
			}
		}
		local_88.Dispose();
		return;
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x5CB8890", Offset = "0x5CB7890", VA = "0x5CB8890")]
	private static Vector3 ApplyPlacementConstraints(Vector3 origin, Vector3 point)
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$ApplyPlacementConstraints): 39 lines keep C-only constructs
		uint uVar1;
		InputSettings pSVar2;
		MapEditorInputSettings pSVar3;
		KeybindSetting pSVar4;
		MapEditorSettings pSVar5;
		FloatSetting pSVar6;
		double dVar7;
		bool bVar8;
		MethodInfo pMVar9;
		float fVar10;
		uint uVar11;
		uint extraout_XMM0_Db;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		byte[] auVar12 = new byte[16];
		float fVar13;
		uint in_XMM2_Dc;
		uint in_XMM2_Dd;
		Vector3 UVar14;
		double local_70;
		float local_68;
		byte[] local_58 = new byte[8];
		float fStack_50;
		float fStack_4c;
		byte[] local_48 = new byte[16];
		float local_2c;
		byte[] local_28 = new byte[8];
		float fStack_20;
		float fStack_1c;

		local_68 = point.z;
		local_2c = origin.z;
		fStack_50 = (float)in_XMM2_Dc;
		local_58 = (byte[])point._0_8_;
		fStack_4c = (float)in_XMM2_Dd;
		fStack_20 = (float)in_XMM0_Dc;
		local_28 = (byte[])origin._0_8_;
		fStack_1c = (float)in_XMM0_Dd;
		pSVar2 = SettingsManager.InputSettings;
		if (((pSVar2 == null) ||(pSVar3 = pSVar2.MapEditor, pSVar3 == null)) ||(pSVar4 = pSVar3.Fast, pSVar4 == null)) {
	label_05db8df5: ;
			throw new NullReferenceException();
		}
		local_58._4_4_ = (float)local_58._4_4_ - (float)local_28._4_4_;
		local_58._0_4_ = (float)local_58._0_4_ - (float)local_28._0_4_;
		fStack_50 = fStack_50 - fStack_20;
		fStack_4c = fStack_4c - fStack_1c;
		local_68 = local_68 - local_2c;
		pMVar9 = null;
		bVar8 = pSVar4.GetKey(false);
		if (bVar8) {
			if (Il2CppMethodInitialized_0753e7b5 == false) {
				Il2CppMethodInitialized_0753e7b5 = true;
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			fVar10 = local_68 * local_68 + (float)local_58._0_4_ * (float)local_58._0_4_;
			if (fVar10 < 0.0) {
				fVar10 = sqrtf(fVar10);
			}
			else {
				fVar10 = SQRT(fVar10);
			}
			local_48._0_4_ = fVar10;
			fVar10 = atan2f(local_68, (float)local_58._0_4_);
			local_68 = (fVar10 * 57.29578) / 45.0;
			dVar7 = modf((double)local_68, &local_70, pMVar9);
			if (0.0 <= local_68) {
				if ((dVar7 != 0.5) || (NAN(dVar7))) {
					fVar10 = floorf(local_68 + 0.5);
				}
				else {
					fVar10 = (float)local_70;
					if (((long)local_70 & 1U) != 0) {
						fVar10 = fVar10 + 1.0;
					}
				}
			}
			else if ((dVar7 != -0.5) || (NAN(dVar7))) {
				fVar10 = ceilf(local_68 + -0.5);
			}
			else {
				fVar10 = (float)local_70;
				if (((long)local_70 & 1U) != 0) {
					fVar10 = fVar10 + -1.0;
				}
			}
			fVar10 = fVar10 * 45.0 * 0.017453292;
			local_58._0_4_ = fVar10;
			local_68 = cosf(fVar10);
			fVar10 = sinf((float)local_58._0_4_);
			fVar13 = local_68 * (float)local_48._0_4_;
			local_68 = fVar10 * (float)local_48._0_4_;
			_local_58 = ZEXT416((uint)fVar13);
		}
		pSVar4 = pSVar3.Slow;
		if (pSVar4 == null) goto label_05db8df5;
		pMVar9 = null;
		bVar8 = pSVar4.GetKey(false);
		if (!bVar8) goto label_05db8dd7;
		pSVar5 = SettingsManager.MapEditorSettings;
		if ((pSVar5 == null) ||(pSVar6 = pSVar5.SnapMove, pSVar6 == null)) goto label_05db8df5;
		fVar10 = pSVar6._value;
		if (fVar10 <= 0.0001) goto label_05db8dd7;
		local_48 = ZEXT416((uint)fVar10);
		fVar10 = local_68 * local_68 +(float)local_58._4_4_ * (float)local_58._4_4_ + (float)local_58._0_4_ * (float)local_58._0_4_;
		if (fVar10 <= 0.0001) goto label_05db8dd7;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			if (Il2CppMethodInitialized_0753e729 != false) goto label_05db8b86;
	label_05db8c23: ;
			local_70 = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05db8b9d;
	label_05db8c53: ;
			if (0.0 <= fVar10) goto label_05db8ba9;
	label_05db8c6a: ;
			fVar13 = sqrtf(fVar10);
			uVar11 = extraout_XMM0_Db;
			if (fVar13 <= 1e-05) goto label_05db8bbd;
	label_05db8c85: ;
			local_68 = local_68 / fVar13;
			auVar12._4_4_ = fVar13;
			auVar12._0_4_ = fVar13;
			auVar12._8_4_ = uVar11;
			auVar12._12_4_ = uVar11;
			auVar12 = divps(_local_58, auVar12);
			local_70 = auVar12._0_8_;
			dVar7 = local_70;
		}
		else {
			if (Il2CppMethodInitialized_0753e729 == false) goto label_05db8c23;
	label_05db8b86: ;
			local_70 = 0.0;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05db8c53;
	label_05db8b9d: ;
			if (fVar10 < 0.0) goto label_05db8c6a;
	label_05db8ba9: ;
			uVar11 = 0;
			fVar13 = SQRT(fVar10);
			if (1e-05 < fVar13) goto label_05db8c85;
	label_05db8bbd: ;
			local_68 = (Vector3.zeroVector).z;
			dVar7 = *(double)&(Vector3.zeroVector);
		}
		local_58 = (byte[])dVar7;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			if (0.0 <= fVar10) goto label_05db8ce9;
	label_05db8d05: ;
			fVar10 = sqrtf(fVar10);
		}
		else {
			if (fVar10 < 0.0) goto label_05db8d05;
	label_05db8ce9: ;
			fVar10 = SQRT(fVar10);
		}
		fVar10 = fVar10 / (float)local_48._0_4_;
		dVar7 = modf((double)fVar10, &local_70, pMVar9);
		if (0.0 <= fVar10) {
			if ((dVar7 != 0.5) || (NAN(dVar7))) {
				fVar10 = floorf(fVar10 + 0.5);
			}
			else {
				fVar10 = (float)local_70;
				if (((long)local_70 & 1U) != 0) {
					fVar10 = fVar10 + 1.0;
				}
			}
		}
		else if ((dVar7 != -0.5) || (NAN(dVar7))) {
			fVar10 = ceilf(fVar10 + -0.5);
		}
		else {
			fVar10 = (float)local_70;
			if (((long)local_70 & 1U) != 0) {
				fVar10 = fVar10 + -1.0;
			}
		}
		fVar10 = (float)local_48._0_4_ * fVar10;
		local_68 = local_68 * fVar10;
		local_58._4_4_ = (float)local_58._4_4_ * fVar10;
		local_58._0_4_ = (float)local_58._0_4_ * fVar10;
	label_05db8dd7: ;
		UVar14.x = (float)local_58._0_4_ + (float)local_28._0_4_;
		UVar14.y = (float)local_58._4_4_ + (float)local_28._4_4_;
		UVar14.z = local_68 + local_2c;
		return (Vector3)UVar14;
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x5CB8F60", Offset = "0x5CB7F60", VA = "0x5CB8F60")]
	private void TryBeginHandleDrag(Camera camera)
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$TryBeginHandleDrag): 23 lines keep C-only constructs
		uint uVar1;
		List<RulerMeasurement> __this_00;
		object pIVar2;
		bool bVar3;
		bool bVar4;
		float fVar5;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		Vector3 UVar6;
		Vector3 UVar7;
		float fStack_b4;
		RulerMeasurement pMStack_b0;
		System_Collections_Generic_List_Enumerator_object__o SStack_98;
		byte[] auStack_80 = new byte[16];
		RulerMeasurement pMStack_70;
		byte[] auStack_68 = new byte[16];
		byte[] auStack_58 = new byte[16];
		byte[] auStack_48 = new byte[24];

		UVar6 = Input.mousePosition;
		auStack_68._8_4_ = extraout_XMM0_Dc;
		auStack_68._0_8_ = UVar6._0_8_;
		auStack_68._12_4_ = extraout_XMM0_Dd;
		__this_00 = this._measurements;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		auStack_80.GetEnumerator((List<object>)__this_00);
		SStack_98._current = (object)pMStack_70;
		SStack_98._list = (List<T>)auStack_80._0_8_;
		SStack_98._index = auStack_80._8_4_;
		SStack_98._version = auStack_80._12_4_;
		auStack_80._0_8_ = null;
		auStack_80._8_8_ = &SStack_98;
		if (camera == null) {
			bVar4 = SStack_98.MoveNext();
			if (bVar4) {
				if ((RulerMeasurement)SStack_98._current != null) {
					throw new NullReferenceException();
				}
	label_05db92a6: ;
				throw new NullReferenceException();
			}
			bVar4 = false;
			pMStack_b0 = null;
		}
		else {
			fStack_b4 = 18.0;
			bVar4 = false;
			pMStack_b0 = null;
			while(true) {
				bVar3 = SStack_98.MoveNext();
				pIVar2 = SStack_98._current;
				if (!bVar3) break;
				if ((RulerMeasurement)SStack_98._current == null) goto label_05db92a6;
				UVar6 = camera.WorldToScreenPoint((Vector3)(((RulerMeasurement)((long)SStack_98._current + 0x10)).Origin));
				auStack_48._8_4_ = extraout_XMM0_Dc_00;
				auStack_48._0_8_ = UVar6._0_8_;
				auStack_48._12_4_ = extraout_XMM0_Dd_00;
				UVar7 = camera.WorldToScreenPoint((Vector3)(((RulerMeasurement)((long)pIVar2 + 0x10)).End));
				auStack_58._8_4_ = extraout_XMM0_Dc_01;
				auStack_58._0_8_ = UVar7._0_8_;
				auStack_58._12_4_ = extraout_XMM0_Dd_01;
				if (0.0 < UVar6.z) {
					if (Il2CppMethodInitialized_0753e72f == false) {
						Il2CppMethodInitialized_0753e72f = true;
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					fVar5 = ((float)auStack_68._4_4_ - (float)auStack_48._4_4_) *((float)auStack_68._4_4_ - (float)auStack_48._4_4_) +((float)auStack_68._0_4_ - (float)auStack_48._0_4_) *((float)auStack_68._0_4_ - (float)auStack_48._0_4_);
					if (fVar5 < 0.0) {
						fVar5 = sqrtf(fVar5);
					}
					else {
						fVar5 = SQRT(fVar5);
					}
					if (fVar5 < fStack_b4) {
						bVar4 = true;
						pMStack_b0 = (RulerMeasurement)pIVar2;
						fStack_b4 = fVar5;
					}
				}
				if (0.0 < UVar7.z) {
					if (Il2CppMethodInitialized_0753e72f == false) {
						Il2CppMethodInitialized_0753e72f = true;
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					fVar5 = ((float)auStack_68._4_4_ - (float)auStack_58._4_4_) *((float)auStack_68._4_4_ - (float)auStack_58._4_4_) +((float)auStack_68._0_4_ - (float)auStack_58._0_4_) *((float)auStack_68._0_4_ - (float)auStack_58._0_4_);
					if (fVar5 < 0.0) {
						fVar5 = sqrtf(fVar5);
					}
					else {
						fVar5 = SQRT(fVar5);
					}
					if (fVar5 < fStack_b4) {
						bVar4 = false;
						pMStack_b0 = (RulerMeasurement)pIVar2;
						fStack_b4 = fVar5;
					}
				}
			}
		}
		SStack_98.Dispose();
		if (pMStack_b0 != null) {
			this._dragging = pMStack_b0;
			this._dragOrigin = bVar4;
		}
		return;
	}

	[Token(Token = "0x600070A")]
	[Address(RVA = "0x5CB8E00", Offset = "0x5CB7E00", VA = "0x5CB8E00")]
	private Vector3 SnapToChainRoot(Camera camera, Vector3 point)
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$SnapToChainRoot): 6 lines keep C-only constructs
		System_Nullable_Vector3__o __this_00;
		float fVar1;
		Vector3 UVar2;
		Vector3 UVar3;
		float local_4c;
		float local_38;
		float fStack_34;
		ulong local_28;

		local_4c = point.z;
		local_28 = point._0_8_;
		if (this._chainRoot.hasValue != false) {
			__this_00 = &this._chainRoot;
			UVar2 = __this_00.Value;
			if (camera == null) {
				throw new NullReferenceException();
			}
			UVar2 = camera.WorldToScreenPoint(UVar2);
			if (0.0 < UVar2.z) {
				UVar3 = Input.mousePosition;
				local_38 = UVar2.x;
				fStack_34 = UVar2.y;
				local_38 = UVar3.x - local_38;
				fStack_34 = UVar3.y - fStack_34;
				fVar1 = fStack_34 * fStack_34 + local_38 * local_38;
				if (fVar1 < 0.0) {
					fVar1 = sqrtf(fVar1);
				}
				else {
					fVar1 = SQRT(fVar1);
				}
				if (fVar1 <= 22.0) {
					UVar2 = __this_00.Value;
					local_4c = UVar2.z;
					local_28 = UVar2._0_8_;
				}
			}
		}
		UVar2.z = local_4c;
		UVar2.x = (float)(undefined4)local_28;
		UVar2.y = (float)local_28._4_4_;
		return (Vector3)UVar2;
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x5CB7020", Offset = "0x5CB6020", VA = "0x5CB7020")]
	private Vector3 FindChainRoot(RulerMeasurement source)
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$FindChainRoot): 13 lines keep C-only constructs
		ulong uVar1;
		object item;
		bool bVar2;
		HashSet<RulerMeasurement> __this_00;
		List<RulerMeasurement> __this_01;
		float fVar3;
		float fVar4;
		float fVar5;
		Vector3 UVar6;
		byte[] local_b8 = new byte[8];
		object local_a8;
		ulong local_98;
		byte[] local_80 = new byte[16];
		object local_70;
		byte[] local_68 = new byte[16];
		MapEditorRuler local_50;
		float local_48;
		float fStack_44;

		local_b8 = (byte[])0x0;
		local_a8 = null;
		if (source != null) {
			local_98 = *(Il2CppClass*)&source.Origin;
			local_68 = ZEXT416((uint)source.Origin.z);
			__this_00 = new HashSet<RulerMeasurement>();
			if (__this_00 != null) {
				__this_00.Add((object)source);
				__this_01 = this._measurements;
				local_50 = this;
				if (__this_01 != null) {
					do {
						local_80.GetEnumerator((List<object>)__this_01);
						local_a8 = local_70;
						local_b8 = (byte[])local_80._0_8_;
						local_80._0_8_ = null;
						local_48 = (float)local_68._0_4_;
						fStack_44 = (float)local_98;
						local_80._8_8_ = local_b8;
						do {
							do {
								bVar2 = local_b8.MoveNext();
								item = local_a8;
								if (!bVar2) {
									local_b8.Dispose();
									UVar6.z = (float)local_68._0_4_;
									UVar6._0_8_ = local_98;
									return (Vector3)UVar6;
								}
								bVar2 = __this_00.Contains(local_a8);
							} while (bVar2);
							if (item == null) {
								throw new NullReferenceException();
							}
							uVar1 = *(ulong)((long)&item[1].monitor + 4);
							fVar3 = (float)((ulong)uVar1 >> 0x20) - local_98._4_4_;
							fVar4 = *(float)((long)&item[2].klass + 4) - local_48;
							fVar5 = (float)uVar1 - fStack_44;
						} while (0.0001 <= fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
						local_98 = item[1].klass;
						local_68 = ZEXT416(*(uint)&item[1].monitor);
						__this_00.Add(item) ;
						local_b8.Dispose();
						__this_01 = local_50._measurements;
					} while (__this_01 != null);
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x5CB87F0", Offset = "0x5CB77F0", VA = "0x5CB87F0")]
	private static bool TryGetPlacementPoint(Camera camera, out Vector3 point)
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$TryGetPlacementPoint): clean
		InputSettings pSVar1;
		MapEditorInputSettings pSVar2;
		KeybindSetting __this;
		bool bVar3;

		pSVar1 = SettingsManager.InputSettings;
		if (((pSVar1 == null) ||(pSVar2 = pSVar1.MapEditor, pSVar2 == null)) ||(__this = pSVar2.VertexSnap, __this == null)) {
			throw new NullReferenceException();
		}
		bVar3 = __this.GetKey(false);
		if (bVar3) {
			bVar3 = MapEditorRuler.TryGetNearestVertex(camera, point);
			if (bVar3) {
				return true;
			}
		}
		bVar3 = MapEditorRuler.TryGetMapPoint(camera, point);
		return bVar3;
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x5CB98C0", Offset = "0x5CB88C0", VA = "0x5CB98C0")]
	private static bool TryGetNearestVertex(Camera camera, out Vector3 point)
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$TryGetNearestVertex): 28 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		int iVar4;
		Dictionary<int, object> __this;
		MeshFilter __this_00;
		bool bVar6;
		bool bVar7;
		Object[] pSVar8;
		Object pUVar9;
		Mesh __this_01;
		Vector3[] pUVar10;
		Transform pUVar11;
		il2cpp_array_size_t iVar12;
		uint uVar13;
		float pfVar14;
		ulong uVar15;
		float fVar16;
		float fVar17;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		float fVar18;
		uint uVar19;
		uint uVar20;
		uint uVar21;
		Vector3 UVar22;
		Vector3 UVar23;
		float local_ec;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_c8;
		Vector3 local_a0;
		Component local_98;
		byte[] local_90 = new byte[16];
		object local_80;
		object pIStack_78;
		int local_70;
		uint uStack_6c;
		ulong local_68;
		ulong uStack_60;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];

		local_c8._current.key = null;
		local_c8._current.value = null;
		local_c8._dictionary = null;
		local_c8._version = 0;
		local_c8._index = 0;
		local_c8._getEnumeratorRetType = 0;
		local_c8._36_4_ = 0;
		fVar16 = (Vector3.zeroVector).y;
		fVar18 = (Vector3.zeroVector).z;
		point.x = (Vector3.zeroVector).x;
		point.y = fVar16;
		point.z = fVar18;
		local_a0 = point;
		UVar22 = Input.mousePosition;
		local_58._8_4_ = extraout_XMM0_Dc;
		local_58._0_8_ = UVar22._0_8_;
		local_58._12_4_ = extraout_XMM0_Dd;
		__this = (Dictionary<int, object>)MapLoader.IdToMapObject;
		if (__this == null) {
			throw new NullReferenceException();
		}
		local_90.GetEnumerator(__this);
		local_c8._getEnumeratorRetType = local_70;
		local_c8._36_4_ = uStack_6c;
		local_c8._current.key = local_80;
		local_c8._current.value = pIStack_78;
		local_c8._dictionary = (Dictionary<TKey, TValue>)local_90._0_8_;
		local_c8._version = local_90._8_4_;
		local_c8._index = local_90._12_4_;
		local_90._0_8_ = null;
		local_ec = 900.0;
		local_68 = 0x7f7fffff;
		local_90._8_8_ = &local_c8;
		do {
			do {
				do {
					do {
						bVar6 = local_c8.MoveNext();
						if (!bVar6) {
							local_c8.Dispose();
							return bVar7;
						}
						if (local_c8._current.value == null) {
							throw new NullReferenceException();
						}
						pUVar9 = local_c8._current.value[1].monitor;
						bVar6 = (pUVar9 == null);
					} while (bVar6);
					if (pUVar9 == null) {
						throw new NullReferenceException();
					}
					bVar6 = pUVar9.activeInHierarchy;
				} while (!bVar6);
				pSVar8 = pUVar9.GetComponentsInChildren<MeshFilter>();
				if (pSVar8 == null) {
					throw new NullReferenceException();
				}
				iVar12 = pSVar8.Length;
			} while ((int)iVar12 < 1);
			uVar13 = 0;
			do {
				if ((uint)iVar12 <= uVar13) {
					throw new IndexOutOfRangeException();
				}
				__this_00 = (MeshFilter)pSVar8[(int)uVar13];
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				pUVar9 = (Object)__this_00.sharedMesh;
				bVar6 = (pUVar9 == null);
				if (!bVar6) {
					__this_01 = __this_00.sharedMesh;
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
					pUVar10 = __this_01.vertices;
					if (pUVar10 == null) {
						throw new NullReferenceException();
					}
					iVar4 = (int)pUVar10.Length;
					if (camera == null) {
						if (0 < iVar4) {
							pUVar11 = __this_00.transform;
							if ((int)pUVar10.Length != 0) {
								if (pUVar11 != null) {
									pUVar11.TransformPoint((Vector3)pUVar10[0]);
									throw new NullReferenceException();
								}
	label_05db9d3c: ;
								throw new NullReferenceException();
							}
	label_05db9d32: ;
							throw new IndexOutOfRangeException();
						}
					}
					else if (0 < iVar4) {
						pfVar14 = &pUVar10[0].z;
						uVar15 = 0;
						local_98 = (Component)__this_00;
						do {
							pUVar11 = local_98.transform;
							if ((uint)pUVar10.Length <= uVar15) goto label_05db9d32;
							if (pUVar11 == null) goto label_05db9d3c;
							uVar19 = 0;
							uVar20 = 0;
							uVar21 = 0;
							uVar1 = ((Vector3)(pfVar14 + -2)).x;
							uVar2 = ((Vector3)(pfVar14 + -2)).y;
							UVar22.y = (float)uVar2;
							UVar22.x = (float)uVar1;
							UVar22.z = *pfVar14;
							UVar22 = pUVar11.TransformPoint(UVar22);
							local_48._8_4_ = extraout_XMM0_Dc_00;
							local_48._0_8_ = UVar22._0_8_;
							local_48._12_4_ = extraout_XMM0_Dd_00;
							UVar23 = camera.WorldToScreenPoint(UVar22);
							fVar18 = UVar23.z;
							if (0.0 < fVar18) {
								fVar16 = UVar23.x - (float)local_58._0_4_;
								fVar17 = UVar23.y - (float)local_58._4_4_;
								fVar16 = fVar17 * fVar17 + fVar16 * fVar16;
								if ((fVar16 + 36.0 < local_ec) || (fVar18 < (float)local_68 && ABS(fVar16 - local_ec) <= 36.0)) {
									local_a0.x = (float)local_48._0_4_;
									local_a0.y = (float)local_48._4_4_;
									local_a0.z = UVar22.z;
									local_68 = CONCAT44(uVar19, fVar18);
									uStack_60 = CONCAT44(uVar21, uVar20);
									local_ec = fVar16;
								}
							}
							uVar15 = uVar15 + 1;
							pfVar14 = pfVar14 + 3;
						} while ((long)uVar15 < (long)(int)pUVar10.Length);
					}
				}
				uVar13 = uVar13 + 1;
				uVar3 = (uint)pSVar8.Length;
				iVar12 = (il2cpp_array_size_t)uVar3;
			} while ((int)uVar13 < (int)uVar3);
		} while(true);
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x5CB9DF0", Offset = "0x5CB8DF0", VA = "0x5CB9DF0")]
	private static bool TryGetMapPoint(Camera camera, out Vector3 point)
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$TryGetMapPoint): clean
		float fVar1;
		float fVar2;
		Ray ray;
		bool bVar4;
		LayerMask mask;
		int layerMask;
		Int32[] layers;
		float fVar5;
		Vector3 UVar6;
		Ray local_60;
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
		UVar6 = Input.mousePosition;
		if (camera != null) {
			local_60 = camera.ScreenPointToRay(UVar6);
			layers = (Int32[])new int[1];
			if (layers != null) {
				if ((int)layers.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				layers[0] = PhysicsLayer.MapEditorObject;
				mask = PhysicsLayer.GetMask(layers);
				layerMask = ((LayerMask)mask);
				ray.m_Origin.z = local_60.m_Origin.z;
				ray.m_Direction.x = local_60.m_Direction.x;
				ray.m_Origin.x = local_60.m_Origin.x;
				ray.m_Origin.y = local_60.m_Origin.y;
				ray.m_Direction.y = local_60.m_Direction.y;
				ray.m_Direction.z = local_60.m_Direction.z;
				bVar4 = Physics.Raycast(ray, ref local_48, 100000.0, layerMask);
				if (bVar4) {
					UVar6 = local_48.point;
					fVar5 = UVar6.z;
					fVar1 = UVar6.x;
					fVar2 = UVar6.y;
				}
				else {
					fVar1 = (Vector3.zeroVector).x;
					fVar2 = (Vector3.zeroVector).y;
					fVar5 = (Vector3.zeroVector).z;
				}
				point.x = fVar1;
				point.y = fVar2;
				point.z = fVar5;
				return bVar4;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x5CB6CC0", Offset = "0x5CB5CC0", VA = "0x5CB6CC0")]
	private void CancelInteraction()
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$CancelInteraction): 9 lines keep C-only constructs
		RulerMeasurement* targetAddress;
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		RulerMeasurement pMVar7;
		List<RulerMeasurement> __this_00;
		Object pUVar8;
		System_Nullable_Vector3__o pSVar9;
		bool bVar10;
		float fVar11;

		targetAddress = &this._pending;
		pMVar7 = this._pending;
		if (pMVar7 == null) goto label_05db6e1e;
		if (this._creatingMeasurement == false) {
			uVar2 = pMVar7.Origin.x;
			uVar4 = pMVar7.Origin.y;
			fVar11 = pMVar7.Origin.z;
			uVar3 = pMVar7.End.x;
			uVar5 = pMVar7.End.y;
			fVar1 = pMVar7.End.z;
			if (Il2CppMethodInitialized_0753e7b7 == false) {
				Il2CppMethodInitialized_0753e7b7 = true;
				uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar6 == 0) {
			}
			fVar11 = fVar11 - fVar1;
			fVar11 = ((float)uVar4 - (float)uVar5) * ((float)uVar4 - (float)uVar5) +((float)uVar2 - (float)uVar3) * ((float)uVar2 - (float)uVar3) + fVar11 * fVar11;
			if (fVar11 < 0.0) {
				fVar11 = sqrtf(fVar11);
			}
			else {
				fVar11 = SQRT(fVar11);
			}
			if (0.001 <= fVar11) goto label_05db6e1e;
		}
		__this_00 = this._measurements;
		if (__this_00 != null) {
			__this_00.Remove((object)*targetAddress);
			if (*targetAddress != null) {
				pUVar8 = (Object)((*targetAddress).fields).Root;
				bVar10 = (pUVar8 != null);
				if (bVar10) {
					if (*targetAddress == null) goto label_05db6edc;
					pUVar8 = (Object)((*targetAddress).fields).Root;
					Object.Destroy(pUVar8);
				}
	label_05db6e1e: ;
				this._pending = null;
				this._dragging = null;
				this._chainRoot.hasValue = false;
				*(undefined3)&this._chainRoot.field_0x1 = 0;
				this._chainRoot.value.x = 0.0;
				pSVar9 = &this._chainRoot;
				pSVar9.value.y = 0.0;
				pSVar9.value.z = 0.0;
				this._awaitingFirstPoint = false;
				this._creatingMeasurement = false;
				return;
			}
		}
	label_05db6edc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x5CB6C10", Offset = "0x5CB5C10", VA = "0x5CB6C10")]
	private void EnsureRoot()
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$EnsureRoot): 2 lines keep C-only constructs
		Object x;
		bool bVar1;
		GameObject __this_00;
		GameObject* targetAddress;

		x = (Object)this._root;
		bVar1 = (x == null);
		if (bVar1) {
			targetAddress = &this._root;
			__this_00 = new GameObject("MapEditorRulers");
			*targetAddress = __this_00;
			return;
		}
		return;
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x5CB9F80", Offset = "0x5CB8F80", VA = "0x5CB9F80")]
	public MapEditorRuler()
	{
		// Lifted from source/cpp/MapEditor/MapEditorRuler.c (MapEditor.MapEditorRuler$$.ctor): clean
		List<RulerMeasurement> __this_00;

		__this_00 = new List<RulerMeasurement>();
		this._measurements = __this_00;
		base();
		return;
	}
}
