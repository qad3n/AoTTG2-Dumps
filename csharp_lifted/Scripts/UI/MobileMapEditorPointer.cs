// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileMapEditorPointer
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileMapEditorPointer.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200077D")]
internal class MobileMapEditorPointer
{
	[Token(Token = "0x40025C4")]
	[FieldOffset(Offset = "0x10")]
	private int _selectPointerId;

	[Token(Token = "0x40025C5")]
	[FieldOffset(Offset = "0x14")]
	private Vector3 _lastPosition;

	[Token(Token = "0x40025C6")]
	[FieldOffset(Offset = "0x0")]
	private static int _gizmoPointerId;

	[Token(Token = "0x40025C7")]
	[FieldOffset(Offset = "0x4")]
	private static Vector3 _gizmoLastPosition;

	[Token(Token = "0x17000C42")]
	public static bool Enabled
	{
		[Token(Token = "0x6004846")]
		[Address(RVA = "0x5BB1780", Offset = "0x5BB0780", VA = "0x5BB1780")]
		get
		{
			// Lifted from source/cpp/UI/MobileMapEditorPointer.c (UI.MobileMapEditorPointer$$get_Enabled): clean
			uint uVar1;
			bool bVar2;

			if (Il2CppMethodInitialized_07547aa2 == false) {
				Il2CppMethodInitialized_07547aa2 = true;
				uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return bVar2;
			}
			return bVar2;
		}
	}

	[Token(Token = "0x6004847")]
	[Address(RVA = "0x5BB17E0", Offset = "0x5BB07E0", VA = "0x5BB17E0")]
	public bool TryGetSelectDown(out Vector3 position)
	{
		// Lifted from source/cpp/UI/MobileMapEditorPointer.c (UI.MobileMapEditorPointer$$TryGetSelectDown): 1 lines keep C-only constructs
		Vector2 UVar1;
		float fVar2;
		bool bVar3;
		int iVar4;
		int index;
		Vector3 UVar5;
		Touch local_c8;
		Touch local_78;

		local_c8.m_maximumPossiblePressure = 0.0;
		local_c8.m_Radius = 0.0;
		local_c8.m_RadiusVariance = 0.0;
		local_c8.m_AltitudeAngle = 0.0;
		local_c8.m_TapCount = 0;
		local_c8.m_Phase = 0;
		local_c8.m_Type = 0;
		local_c8.m_Pressure = 0.0;
		local_c8.m_RawPosition.y = 0.0;
		local_c8.m_PositionDelta.x = 0.0;
		local_c8.m_PositionDelta.y = 0.0;
		local_c8.m_TimeDelta = 0.0;
		local_c8.m_FingerId = 0;
		local_c8.m_Position.x = 0.0;
		local_c8.m_Position.y = 0.0;
		local_c8.m_RawPosition.x = 0.0;
		local_c8.m_AzimuthAngle = 0.0;
		UVar5 = Input.mousePosition;
		position.x = UVar5.x;
		position.y = UVar5.y;
		position.z = UVar5.z;
		index = 0;
		bVar3 = MobileInputBridge.Enabled;
		if (bVar3) {
			index = 0;
			iVar4 = Input.touchCount;
			if (0 < iVar4) {
				do {
					local_78 = Input.GetTouch(index);
					local_c8.m_AzimuthAngle = local_78.m_AzimuthAngle;
					local_c8.m_maximumPossiblePressure = local_78.m_maximumPossiblePressure;
					local_c8.m_Radius = local_78.m_Radius;
					local_c8.m_RadiusVariance = local_78.m_RadiusVariance;
					local_c8.m_AltitudeAngle = local_78.m_AltitudeAngle;
					local_c8.m_TapCount = local_78.m_TapCount;
					local_c8.m_Phase = local_78.m_Phase;
					local_c8.m_Type = local_78.m_Type;
					local_c8.m_Pressure = local_78.m_Pressure;
					local_c8.m_RawPosition.y = local_78.m_RawPosition.y;
					local_c8.m_PositionDelta.x = local_78.m_PositionDelta.x;
					local_c8.m_PositionDelta.y = local_78.m_PositionDelta.y;
					local_c8.m_TimeDelta = local_78.m_TimeDelta;
					local_c8.m_FingerId = local_78.m_FingerId;
					local_c8.m_Position.x = local_78.m_Position.x;
					local_c8.m_Position.y = local_78.m_Position.y;
					local_c8.m_RawPosition.x = local_78.m_RawPosition.x;
					iVar4 = local_c8.phase;
					if (iVar4 == 0) {
						iVar4 = local_c8.fingerId;
						bVar3 = MobileMapEditorPointer.IsTouchOverUI(iVar4);
						if (!bVar3) {
							iVar4 = local_c8.fingerId;
							this._selectPointerId = iVar4;
							UVar1 = local_c8.position;
							position.x = UVar1.x;
							position.y = UVar1.y;
							position.z = 0.0;
							fVar2 = position.y;
							this._lastPosition.x = position.x;
							this._lastPosition.y = fVar2;
							this._lastPosition.z = 0.0;
							index = 1;
							goto label_05cb1986;
						}
					}
					index = index + 1;
					iVar4 = Input.touchCount;
				} while (index < iVar4);
				index = 0;
			}
		}
	label_05cb1986: ;
		return SUB41(index, 0);
	}

	[Token(Token = "0x6004848")]
	[Address(RVA = "0x5BB1A40", Offset = "0x5BB0A40", VA = "0x5BB1A40")]
	public bool TryGetSelectUp(out Vector3 releasePosition)
	{
		// Lifted from source/cpp/UI/MobileMapEditorPointer.c (UI.MobileMapEditorPointer$$TryGetSelectUp): clean
		Vector2 UVar1;
		float fVar2;
		float fVar3;
		bool bVar4;
		int iVar5;
		bool bVar6;
		int index;
		Touch local_b8;
		Touch local_70;

		local_b8.m_maximumPossiblePressure = 0.0;
		local_b8.m_Radius = 0.0;
		local_b8.m_RadiusVariance = 0.0;
		local_b8.m_AltitudeAngle = 0.0;
		local_b8.m_TapCount = 0;
		local_b8.m_Phase = 0;
		local_b8.m_Type = 0;
		local_b8.m_Pressure = 0.0;
		local_b8.m_RawPosition.y = 0.0;
		local_b8.m_PositionDelta.x = 0.0;
		local_b8.m_PositionDelta.y = 0.0;
		local_b8.m_TimeDelta = 0.0;
		local_b8.m_FingerId = 0;
		local_b8.m_Position.x = 0.0;
		local_b8.m_Position.y = 0.0;
		local_b8.m_RawPosition.x = 0.0;
		local_b8.m_AzimuthAngle = 0.0;
		fVar2 = this._lastPosition.x;
		fVar3 = this._lastPosition.y;
		releasePosition.z = this._lastPosition.z;
		releasePosition.x = fVar2;
		releasePosition.y = fVar3;
		bVar4 = MobileInputBridge.Enabled;
		if (bVar4) {
			if (this._selectPointerId == -0x80000000) {
			}
			else {
				index = 0;
				iVar5 = Input.touchCount;
				if (0 < iVar5) {
					do {
						local_70 = Input.GetTouch(index);
						local_b8.m_AzimuthAngle = local_70.m_AzimuthAngle;
						local_b8.m_maximumPossiblePressure = local_70.m_maximumPossiblePressure;
						local_b8.m_Radius = local_70.m_Radius;
						local_b8.m_RadiusVariance = local_70.m_RadiusVariance;
						local_b8.m_AltitudeAngle = local_70.m_AltitudeAngle;
						local_b8.m_TapCount = local_70.m_TapCount;
						local_b8.m_Phase = local_70.m_Phase;
						local_b8.m_Type = local_70.m_Type;
						local_b8.m_Pressure = local_70.m_Pressure;
						local_b8.m_RawPosition.y = local_70.m_RawPosition.y;
						local_b8.m_PositionDelta.x = local_70.m_PositionDelta.x;
						local_b8.m_PositionDelta.y = local_70.m_PositionDelta.y;
						local_b8.m_TimeDelta = local_70.m_TimeDelta;
						local_b8.m_FingerId = local_70.m_FingerId;
						local_b8.m_Position.x = local_70.m_Position.x;
						local_b8.m_Position.y = local_70.m_Position.y;
						local_b8.m_RawPosition.x = local_70.m_RawPosition.x;
						iVar5 = local_b8.fingerId;
						if (iVar5 == this._selectPointerId) {
							UVar1 = local_b8.position;
							this._lastPosition.x = UVar1.x;
							this._lastPosition.y = UVar1.y;
							this._lastPosition.z = 0.0;
							iVar5 = local_b8.phase;
							if ((iVar5 != 3) &&(iVar5 = local_b8.phase, iVar5 != 4)) {
								return false;
							}
							UVar1 = local_b8.position;
							releasePosition.x = UVar1.x;
							releasePosition.y = UVar1.y;
							releasePosition.z = 0.0;
							this._selectPointerId = -0x80000000;
							goto label_05cb1bbf;
						}
						index = index + 1;
						iVar5 = Input.touchCount;
					} while (index < iVar5);
				}
				this._selectPointerId = -0x80000000;
				fVar2 = this._lastPosition.x;
				fVar3 = this._lastPosition.y;
				releasePosition.z = this._lastPosition.z;
				releasePosition.x = fVar2;
				releasePosition.y = fVar3;
	label_05cb1bbf: ;
			}
		}
		return bVar6;
	}

	[Token(Token = "0x6004849")]
	[Address(RVA = "0x5BB1BE0", Offset = "0x5BB0BE0", VA = "0x5BB1BE0")]
	public bool TryGetPointerPosition(out Vector3 position)
	{
		// Lifted from source/cpp/UI/MobileMapEditorPointer.c (UI.MobileMapEditorPointer$$TryGetPointerPosition): clean
		Vector2 UVar1;
		float fVar2;
		float fVar3;
		bool bVar4;
		int iVar5;
		int index;
		bool bVar6;
		Touch local_c8;
		Touch local_78;

		local_c8.m_maximumPossiblePressure = 0.0;
		local_c8.m_Radius = 0.0;
		local_c8.m_RadiusVariance = 0.0;
		local_c8.m_AltitudeAngle = 0.0;
		local_c8.m_TapCount = 0;
		local_c8.m_Phase = 0;
		local_c8.m_Type = 0;
		local_c8.m_Pressure = 0.0;
		local_c8.m_RawPosition.y = 0.0;
		local_c8.m_PositionDelta.x = 0.0;
		local_c8.m_PositionDelta.y = 0.0;
		local_c8.m_TimeDelta = 0.0;
		local_c8.m_FingerId = 0;
		local_c8.m_Position.x = 0.0;
		local_c8.m_Position.y = 0.0;
		local_c8.m_RawPosition.x = 0.0;
		local_c8.m_AzimuthAngle = 0.0;
		fVar2 = this._lastPosition.x;
		fVar3 = this._lastPosition.y;
		position.z = this._lastPosition.z;
		position.x = fVar2;
		position.y = fVar3;
		bVar4 = MobileInputBridge.Enabled;
		if (bVar4) {
			if (this._selectPointerId == -0x80000000) {
			}
			else {
				index = 0;
				iVar5 = Input.touchCount;
				if (0 < iVar5) {
					do {
						local_78 = Input.GetTouch(index);
						local_c8.m_AzimuthAngle = local_78.m_AzimuthAngle;
						local_c8.m_maximumPossiblePressure = local_78.m_maximumPossiblePressure;
						local_c8.m_Radius = local_78.m_Radius;
						local_c8.m_RadiusVariance = local_78.m_RadiusVariance;
						local_c8.m_AltitudeAngle = local_78.m_AltitudeAngle;
						local_c8.m_TapCount = local_78.m_TapCount;
						local_c8.m_Phase = local_78.m_Phase;
						local_c8.m_Type = local_78.m_Type;
						local_c8.m_Pressure = local_78.m_Pressure;
						local_c8.m_RawPosition.y = local_78.m_RawPosition.y;
						local_c8.m_PositionDelta.x = local_78.m_PositionDelta.x;
						local_c8.m_PositionDelta.y = local_78.m_PositionDelta.y;
						local_c8.m_TimeDelta = local_78.m_TimeDelta;
						local_c8.m_FingerId = local_78.m_FingerId;
						local_c8.m_Position.x = local_78.m_Position.x;
						local_c8.m_Position.y = local_78.m_Position.y;
						local_c8.m_RawPosition.x = local_78.m_RawPosition.x;
						iVar5 = local_c8.fingerId;
						if (iVar5 == this._selectPointerId) {
							UVar1 = local_c8.position;
							position.x = UVar1.x;
							position.y = UVar1.y;
							position.z = 0.0;
							fVar2 = position.y;
							this._lastPosition.x = position.x;
							this._lastPosition.y = fVar2;
							this._lastPosition.z = 0.0;
							return true;
						}
						index = index + 1;
						iVar5 = Input.touchCount;
					} while (index < iVar5);
				}
			}
		}
		return bVar6;
	}

	[Token(Token = "0x600484A")]
	[Address(RVA = "0x5BB1D60", Offset = "0x5BB0D60", VA = "0x5BB1D60")]
	public static bool TryGetGizmoPointerDown(out Vector3 position)
	{
		// Lifted from source/cpp/UI/MobileMapEditorPointer.c (UI.MobileMapEditorPointer$$TryGetGizmoPointerDown): 1 lines keep C-only constructs
		Vector2 UVar2;
		float fVar3;
		bool bVar4;
		int iVar5;
		int iVar6;
		Vector3 UVar7;
		Touch local_c8;
		Touch local_78;

		local_c8.m_maximumPossiblePressure = 0.0;
		local_c8.m_Radius = 0.0;
		local_c8.m_RadiusVariance = 0.0;
		local_c8.m_AltitudeAngle = 0.0;
		local_c8.m_TapCount = 0;
		local_c8.m_Phase = 0;
		local_c8.m_Type = 0;
		local_c8.m_Pressure = 0.0;
		local_c8.m_RawPosition.y = 0.0;
		local_c8.m_PositionDelta.x = 0.0;
		local_c8.m_PositionDelta.y = 0.0;
		local_c8.m_TimeDelta = 0.0;
		local_c8.m_FingerId = 0;
		local_c8.m_Position.x = 0.0;
		local_c8.m_Position.y = 0.0;
		local_c8.m_RawPosition.x = 0.0;
		local_c8.m_AzimuthAngle = 0.0;
		UVar7 = Input.mousePosition;
		position.x = UVar7.x;
		position.y = UVar7.y;
		position.z = UVar7.z;
		iVar6 = 0;
		bVar4 = MobileInputBridge.Enabled;
		if (bVar4) {
			if ((typeof(MobileMapEditorPointer)._2).cctor_finished_or_no_cctor == 0) {
				iVar6 = MobileMapEditorPointer._gizmoPointerId;
			}
			else {
				iVar6 = MobileMapEditorPointer._gizmoPointerId;
			}
			if (iVar6 == -0x80000000) {
				iVar6 = 0;
				iVar5 = Input.touchCount;
				if (iVar5 < 1) goto label_05cb1ef4;
				do {
					local_78 = Input.GetTouch(iVar6);
					local_c8.m_AzimuthAngle = local_78.m_AzimuthAngle;
					local_c8.m_maximumPossiblePressure = local_78.m_maximumPossiblePressure;
					local_c8.m_Radius = local_78.m_Radius;
					local_c8.m_RadiusVariance = local_78.m_RadiusVariance;
					local_c8.m_AltitudeAngle = local_78.m_AltitudeAngle;
					local_c8.m_TapCount = local_78.m_TapCount;
					local_c8.m_Phase = local_78.m_Phase;
					local_c8.m_Type = local_78.m_Type;
					local_c8.m_Pressure = local_78.m_Pressure;
					local_c8.m_RawPosition.y = local_78.m_RawPosition.y;
					local_c8.m_PositionDelta.x = local_78.m_PositionDelta.x;
					local_c8.m_PositionDelta.y = local_78.m_PositionDelta.y;
					local_c8.m_TimeDelta = local_78.m_TimeDelta;
					local_c8.m_FingerId = local_78.m_FingerId;
					local_c8.m_Position.x = local_78.m_Position.x;
					local_c8.m_Position.y = local_78.m_Position.y;
					local_c8.m_RawPosition.x = local_78.m_RawPosition.x;
					iVar5 = local_c8.phase;
					if (iVar5 == 0) {
						iVar5 = local_c8.fingerId;
						bVar4 = MobileMapEditorPointer.IsTouchOverUI(iVar5);
						if (!bVar4) {
							iVar5 = local_c8.fingerId;
							MobileMapEditorPointer._gizmoPointerId = iVar5;
							UVar2 = local_c8.position;
							position.x = UVar2.x;
							position.y = UVar2.y;
							position.z = 0.0;
							fVar3 = position.y;
							(MobileMapEditorPointer._gizmoLastPosition).x = position.x;
							(MobileMapEditorPointer._gizmoLastPosition).y = fVar3;
							(MobileMapEditorPointer._gizmoLastPosition).z = 0.0;
							iVar6 = 1;
							goto label_05cb1ef4;
						}
					}
					iVar6 = iVar6 + 1;
					iVar5 = Input.touchCount;
				} while (iVar6 < iVar5);
			}
			iVar6 = 0;
		}
	label_05cb1ef4: ;
		return SUB41(iVar6, 0);
	}

	[Token(Token = "0x600484B")]
	[Address(RVA = "0x5BB1F70", Offset = "0x5BB0F70", VA = "0x5BB1F70")]
	public static bool TryGetGizmoPointerPosition(out Vector3 position)
	{
		// Lifted from source/cpp/UI/MobileMapEditorPointer.c (UI.MobileMapEditorPointer$$TryGetGizmoPointerPosition): 8 lines keep C-only constructs
		UI_MobileMapEditorPointer_StaticFields pUVar1;
		Vector2 UVar2;
		bool bVar3;
		int iVar4;
		int iVar5;
		float fVar6;
		float fVar7;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Touch local_d8;
		byte[] local_88 = new byte[16];
		Touch local_78;

		local_d8.m_maximumPossiblePressure = 0.0;
		local_d8.m_Radius = 0.0;
		local_d8.m_RadiusVariance = 0.0;
		local_d8.m_AltitudeAngle = 0.0;
		local_d8.m_TapCount = 0;
		local_d8.m_Phase = 0;
		local_d8.m_Type = 0;
		local_d8.m_Pressure = 0.0;
		local_d8.m_RawPosition.y = 0.0;
		local_d8.m_PositionDelta.x = 0.0;
		local_d8.m_PositionDelta.y = 0.0;
		local_d8.m_TimeDelta = 0.0;
		local_d8.m_FingerId = 0;
		local_d8.m_Position.x = 0.0;
		local_d8.m_Position.y = 0.0;
		local_d8.m_RawPosition.x = 0.0;
		local_d8.m_AzimuthAngle = 0.0;
		pUVar1 = typeof(MobileMapEditorPointer).static_fields;
		fVar6 = (pUVar1._gizmoLastPosition).x;
		fVar7 = (pUVar1._gizmoLastPosition).y;
		position.z = (pUVar1._gizmoLastPosition).z;
		position.x = fVar6;
		position.y = fVar7;
		bVar3 = MobileInputBridge.Enabled;
		if (bVar3) {
			if ((typeof(MobileMapEditorPointer)._2).cctor_finished_or_no_cctor == 0) {
				iVar5 = MobileMapEditorPointer._gizmoPointerId;
			}
			else {
				iVar5 = MobileMapEditorPointer._gizmoPointerId;
			}
			if (iVar5 != -0x80000000) {
				iVar5 = 0;
				iVar4 = Input.touchCount;
				if (0 < iVar4) {
					do {
						local_78 = Input.GetTouch(iVar5);
						local_d8.m_AzimuthAngle = local_78.m_AzimuthAngle;
						local_d8.m_maximumPossiblePressure = local_78.m_maximumPossiblePressure;
						local_d8.m_Radius = local_78.m_Radius;
						local_d8.m_RadiusVariance = local_78.m_RadiusVariance;
						local_d8.m_AltitudeAngle = local_78.m_AltitudeAngle;
						local_d8.m_TapCount = local_78.m_TapCount;
						local_d8.m_Phase = local_78.m_Phase;
						local_d8.m_Type = local_78.m_Type;
						local_d8.m_Pressure = local_78.m_Pressure;
						local_d8.m_RawPosition.y = local_78.m_RawPosition.y;
						local_d8.m_PositionDelta.x = local_78.m_PositionDelta.x;
						local_d8.m_PositionDelta.y = local_78.m_PositionDelta.y;
						local_d8.m_TimeDelta = local_78.m_TimeDelta;
						local_d8.m_FingerId = local_78.m_FingerId;
						local_d8.m_Position.x = local_78.m_Position.x;
						local_d8.m_Position.y = local_78.m_Position.y;
						local_d8.m_RawPosition.x = local_78.m_RawPosition.x;
						iVar4 = local_d8.fingerId;
						if (iVar4 == MobileMapEditorPointer._gizmoPointerId) {
							UVar2 = local_d8.position;
							fVar6 = UVar2.x;
							fVar7 = UVar2.y;
							if ((typeof(MobileMapEditorPointer)._2).cctor_finished_or_no_cctor == 0) {
								local_88._8_4_ = extraout_XMM0_Dc;
								local_88._0_4_ = UVar2.x;
								local_88._4_4_ = UVar2.y;
								local_88._12_4_ = extraout_XMM0_Dd;
								fVar6 = (float)local_88._0_4_;
								fVar7 = (float)local_88._4_4_;
							}
							pUVar1 = typeof(MobileMapEditorPointer).static_fields;
							(pUVar1._gizmoLastPosition).x = fVar6;
							(pUVar1._gizmoLastPosition).y = fVar7;
							(pUVar1._gizmoLastPosition).z = 0.0;
							pUVar1 = typeof(MobileMapEditorPointer).static_fields;
							fVar6 = (pUVar1._gizmoLastPosition).x;
							fVar7 = (pUVar1._gizmoLastPosition).y;
							position.z = (pUVar1._gizmoLastPosition).z;
							position.x = fVar6;
							position.y = fVar7;
							iVar4 = local_d8.phase;
							if ((iVar4 != 3) &&(iVar4 = local_d8.phase, iVar4 != 4)) {
								return true;
							}
							break;
						}
						iVar5 = iVar5 + 1;
						iVar4 = Input.touchCount;
					} while (iVar5 < iVar4);
				}
				MobileMapEditorPointer._gizmoPointerId = -0x80000000;
			}
		}
		return false;
	}

	[Token(Token = "0x600484C")]
	[Address(RVA = "0x5BB21B0", Offset = "0x5BB11B0", VA = "0x5BB21B0")]
	public static void CancelGizmoPointer()
	{
		// Lifted from source/cpp/UI/MobileMapEditorPointer.c (UI.MobileMapEditorPointer$$CancelGizmoPointer): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07547aa8 == false) {
			Il2CppMethodInitialized_07547aa8 = true;
			uVar1 = (typeof(MobileMapEditorPointer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileMapEditorPointer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			MobileMapEditorPointer._gizmoPointerId = -0x80000000;
			return;
		}
		*(uint)(typeof(MobileMapEditorPointer)).static_fields = 0x80000000;
		return;
	}

	[Token(Token = "0x600484D")]
	[Address(RVA = "0x5BB19A0", Offset = "0x5BB09A0", VA = "0x5BB19A0")]
	private static bool IsTouchOverUI(int fingerId)
	{
		// Lifted from source/cpp/UI/MobileMapEditorPointer.c (UI.MobileMapEditorPointer$$IsTouchOverUI): clean
		bool bVar1;
		EventSystem __this;

		__this = EventSystem.current;
		bVar1 = ((Object)__this != null);
		if (bVar1) {
			if (__this == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this.IsPointerOverGameObject(fingerId);
			return bVar1;
		}
		return false;
	}

	[Token(Token = "0x600484E")]
	[Address(RVA = "0x5BB2220", Offset = "0x5BB1220", VA = "0x5BB2220")]
	public MobileMapEditorPointer()
	{
		// Lifted from source/cpp/UI/MobileMapEditorPointer.c (UI.MobileMapEditorPointer$$.ctor): clean
		this._selectPointerId = -0x80000000;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MobileMapEditorPointer.c.

	// UI.MobileMapEditorPointer$$.cctor: clean
	static MobileMapEditorPointer()
	{
		MobileMapEditorPointer._gizmoPointerId = -0x80000000;
		return;
	}
}
