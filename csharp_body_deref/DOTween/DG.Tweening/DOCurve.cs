// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.DOCurve
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening;

[Token(Token = "0x2000008")]
public static class DOCurve
{
	[Token(Token = "0x2000009")]
	public static class CubicBezier
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x547660", Offset = "0x545C60", VA = "0x180547660")]
		public static Vector3 GetPointOnSegment(Vector3 startPoint, Vector3 startControlPoint, Vector3 endPoint, Vector3 endControlPoint, float factor)
		{
			return default(Vector3);
		}

		[Token(Token = "0x6000012")]
		[Address(RVA = "0x547730", Offset = "0x545D30", VA = "0x180547730")]
		public static Vector3[] GetSegmentPointCloud(Vector3 startPoint, Vector3 startControlPoint, Vector3 endPoint, Vector3 endControlPoint, int resolution = 10)
		{
			return null;
		}

		[Token(Token = "0x6000013")]
		[Address(RVA = "0x5479C0", Offset = "0x545FC0", VA = "0x1805479C0")]
		public static void GetSegmentPointCloud(List<Vector3> addToList, Vector3 startPoint, Vector3 startControlPoint, Vector3 endPoint, Vector3 endControlPoint, int resolution = 10)
		{
		}
	}
}
