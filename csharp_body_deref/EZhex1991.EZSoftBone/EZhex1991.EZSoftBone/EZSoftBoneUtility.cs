using Il2CppDummyDll;
using UnityEngine;

namespace EZhex1991.EZSoftBone;

[Token(Token = "0x2000012")]
public static class EZSoftBoneUtility
{
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x2356300", Offset = "0x2356300", VA = "0x2356300")]
	public static Vector3 Abs(this Vector3 v)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x2356310", Offset = "0x2356310", VA = "0x2356310")]
	public static float Max(this Vector3 v)
	{
		return default(float);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x23578F0", Offset = "0x23578F0", VA = "0x23578F0")]
	public static bool Contains(this LayerMask mask, int layer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x235A4D0", Offset = "0x235A4D0", VA = "0x235A4D0")]
	public static void GetCapsuleParams(CapsuleCollider collider, out Vector3 center0, out Vector3 center1, out float radius)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x235A6E0", Offset = "0x235A6E0", VA = "0x235A6E0")]
	public static void GetCylinderParams(Transform transform, out Vector3 center, out Vector3 direction, out float radius, out float height)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x2358E90", Offset = "0x2358E90", VA = "0x2358E90")]
	public static void PointOutsideSphere(ref Vector3 position, SphereCollider collider, float spacing)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x235A790", Offset = "0x235A790", VA = "0x235A790")]
	private static void PointOutsideSphere(ref Vector3 position, Vector3 spherePosition, float radius)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x2358C20", Offset = "0x2358C20", VA = "0x2358C20")]
	public static void PointInsideSphere(ref Vector3 position, SphereCollider collider, float spacing)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x235A980", Offset = "0x235A980", VA = "0x235A980")]
	private static void PointInsideSphere(ref Vector3 position, Vector3 spherePosition, float radius)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x2359220", Offset = "0x2359220", VA = "0x2359220")]
	public static void PointOutsideCapsule(ref Vector3 position, CapsuleCollider collider, float spacing)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x235AB70", Offset = "0x235AB70", VA = "0x235AB70")]
	private static void PointOutsideCapsule(ref Vector3 position, Vector3 center0, Vector3 center1, float radius)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x2359190", Offset = "0x2359190", VA = "0x2359190")]
	public static void PointInsideCapsule(ref Vector3 position, CapsuleCollider collider, float spacing)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x235B2F0", Offset = "0x235B2F0", VA = "0x235B2F0")]
	private static void PointInsideCapsule(ref Vector3 position, Vector3 center0, Vector3 center1, float radius)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x2359DC0", Offset = "0x2359DC0", VA = "0x2359DC0")]
	public static void PointOutsideCylinder(ref Vector3 position, Transform transform, float spacing)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x235BA60", Offset = "0x235BA60", VA = "0x235BA60")]
	private static void PointOutsideCylinder(ref Vector3 position, Vector3 center, Vector3 direction, float radius, float height)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x2359D00", Offset = "0x2359D00", VA = "0x2359D00")]
	public static void PointInsideCylinder(ref Vector3 position, Transform transform, float spacing)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x235BF50", Offset = "0x235BF50", VA = "0x235BF50")]
	private static void PointInsideCylinder(ref Vector3 position, Vector3 center, Vector3 direction, float radius, float height)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x2359550", Offset = "0x2359550", VA = "0x2359550")]
	public static void PointOutsideBox(ref Vector3 position, BoxCollider collider, float spacing)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x235C4A0", Offset = "0x235C4A0", VA = "0x235C4A0")]
	private static void PointOutsideBox(ref Vector3 position, Vector3 boxSize)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x23592B0", Offset = "0x23592B0", VA = "0x23592B0")]
	public static void PointInsideBox(ref Vector3 position, BoxCollider collider, float spacing)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x235C580", Offset = "0x235C580", VA = "0x235C580")]
	private static void PointInsideBox(ref Vector3 position, Vector3 boxSize)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x2357920", Offset = "0x2357920", VA = "0x2357920")]
	public static void PointOutsideCollider(ref Vector3 position, Collider collider, float spacing)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x235C630", Offset = "0x235C630", VA = "0x235C630")]
	public static void DrawGizmosArrow(Vector3 startPoint, Vector3 direction, float halfWidth, Vector3 normal)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x235CA00", Offset = "0x235CA00", VA = "0x235CA00")]
	public static void DrawGizmosPolyLine(params Vector3[] vertices)
	{
	}
}
