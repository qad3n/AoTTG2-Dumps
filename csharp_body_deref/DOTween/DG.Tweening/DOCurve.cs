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
		[Address(RVA = "0x22ED990", Offset = "0x22ED990", VA = "0x22ED990")]
		public static Vector3 GetPointOnSegment(Vector3 startPoint, Vector3 startControlPoint, Vector3 endPoint, Vector3 endControlPoint, float factor)
		{
			return default(Vector3);
		}

		[Token(Token = "0x6000012")]
		[Address(RVA = "0x22EDA70", Offset = "0x22EDA70", VA = "0x22EDA70")]
		public static Vector3[] GetSegmentPointCloud(Vector3 startPoint, Vector3 startControlPoint, Vector3 endPoint, Vector3 endControlPoint, int resolution = 10)
		{
			return null;
		}

		[Token(Token = "0x6000013")]
		[Address(RVA = "0x22EDC20", Offset = "0x22EDC20", VA = "0x22EDC20")]
		public static void GetSegmentPointCloud(List<Vector3> addToList, Vector3 startPoint, Vector3 startControlPoint, Vector3 endPoint, Vector3 endControlPoint, int resolution = 10)
		{
		}
	}
}
