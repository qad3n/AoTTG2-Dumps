// ==================== AoTTG2 cross-reference ====================
// Type: Utility.MobilePlatformUtility
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Utility/MobilePlatformUtility.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x200090D")]
internal static class MobilePlatformUtility
{
	[Token(Token = "0x60055F0")]
	[Address(RVA = "0x5CE0C00", Offset = "0x5CDFC00", VA = "0x5CE0C00")]
	public static bool IsMobileRuntime()
	{
		// Lifted from source/cpp/Utility/MobilePlatformUtility.c (Utility.MobilePlatformUtility$$IsMobileRuntime): clean
		int iVar1;
		bool bVar2;

		iVar1 = Application.platform;
		if (iVar1 != 0xb) {
			iVar1 = Application.platform;
			bVar2 = iVar1 == 8;
		}
		return bVar2;
	}

	[Token(Token = "0x60055F1")]
	[Address(RVA = "0x5CE0C70", Offset = "0x5CDFC70", VA = "0x5CE0C70")]
	public static bool TryGetHeldPointerPosition(int pointerId, out Vector2 position)
	{
		// Lifted from source/cpp/Utility/MobilePlatformUtility.c (Utility.MobilePlatformUtility$$TryGetHeldPointerPosition): 1 lines keep C-only constructs
		Vector2 UVar1;
		bool bVar2;
		int iVar3;
		int index;
		Vector3 UVar4;
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
		if (pointerId < 0) {
			UVar4 = Input.mousePosition;
			position.fields = UVar4._0_8_;
			return bVar2;
		}
		index = 0;
		iVar3 = Input.touchCount;
		if (0 < iVar3) {
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
				iVar3 = local_b8.fingerId;
				if (iVar3 == pointerId) {
					UVar1 = (Vector2)local_b8.position;
					position.fields = UVar1;
					iVar3 = local_b8.phase;
					if (iVar3 == 3) {
						return false;
					}
					iVar3 = local_b8.phase;
					return iVar3 != 4;
				}
				index = index + 1;
				iVar3 = Input.touchCount;
			} while (index < iVar3);
		}
		position.fields = (Vector2.zeroVector);
		return false;
	}
}
