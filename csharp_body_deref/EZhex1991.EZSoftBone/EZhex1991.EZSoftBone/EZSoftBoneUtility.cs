// ==================== AoTTG2 cross-reference ====================
// Type: EZhex1991.EZSoftBone.EZSoftBoneUtility
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneUtility.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace EZhex1991.EZSoftBone;

[Token(Token = "0x2000010")]
public static class EZSoftBoneUtility
{
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x31A4950", Offset = "0x31A3950", VA = "0x31A4950")]
	public static Vector3 Abs(this Vector3 v)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x31A4960", Offset = "0x31A3960", VA = "0x31A4960")]
	public static float Max(this Vector3 v)
	{
		return default(float);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x31A5EE0", Offset = "0x31A4EE0", VA = "0x31A5EE0")]
	public static bool Contains(this LayerMask mask, int layer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x31A8990", Offset = "0x31A7990", VA = "0x31A8990")]
	public static void GetCapsuleParams(CapsuleCollider collider, out Vector3 center0, out Vector3 center1, out float radius)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x31A8BA0", Offset = "0x31A7BA0", VA = "0x31A8BA0")]
	public static void GetCylinderParams(Transform transform, out Vector3 center, out Vector3 direction, out float radius, out float height)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x31A7450", Offset = "0x31A6450", VA = "0x31A7450")]
	public static void PointOutsideSphere(ref Vector3 position, SphereCollider collider, float spacing)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x31A8C50", Offset = "0x31A7C50", VA = "0x31A8C50")]
	private static void PointOutsideSphere(ref Vector3 position, Vector3 spherePosition, float radius)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x31A71D0", Offset = "0x31A61D0", VA = "0x31A71D0")]
	public static void PointInsideSphere(ref Vector3 position, SphereCollider collider, float spacing)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x31A8E90", Offset = "0x31A7E90", VA = "0x31A8E90")]
	private static void PointInsideSphere(ref Vector3 position, Vector3 spherePosition, float radius)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x31A77C0", Offset = "0x31A67C0", VA = "0x31A77C0")]
	public static void PointOutsideCapsule(ref Vector3 position, CapsuleCollider collider, float spacing)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x31A90C0", Offset = "0x31A80C0", VA = "0x31A90C0")]
	private static void PointOutsideCapsule(ref Vector3 position, Vector3 center0, Vector3 center1, float radius)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x31A7730", Offset = "0x31A6730", VA = "0x31A7730")]
	public static void PointInsideCapsule(ref Vector3 position, CapsuleCollider collider, float spacing)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x31A98F0", Offset = "0x31A88F0", VA = "0x31A98F0")]
	private static void PointInsideCapsule(ref Vector3 position, Vector3 center0, Vector3 center1, float radius)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x31A82A0", Offset = "0x31A72A0", VA = "0x31A82A0")]
	public static void PointOutsideCylinder(ref Vector3 position, Transform transform, float spacing)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x31AA110", Offset = "0x31A9110", VA = "0x31AA110")]
	private static void PointOutsideCylinder(ref Vector3 position, Vector3 center, Vector3 direction, float radius, float height)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x31A81E0", Offset = "0x31A71E0", VA = "0x31A81E0")]
	public static void PointInsideCylinder(ref Vector3 position, Transform transform, float spacing)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x31AA630", Offset = "0x31A9630", VA = "0x31AA630")]
	private static void PointInsideCylinder(ref Vector3 position, Vector3 center, Vector3 direction, float radius, float height)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x31A7AB0", Offset = "0x31A6AB0", VA = "0x31A7AB0")]
	public static void PointOutsideBox(ref Vector3 position, BoxCollider collider, float spacing)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x31AAB70", Offset = "0x31A9B70", VA = "0x31AAB70")]
	private static void PointOutsideBox(ref Vector3 position, Vector3 boxSize)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x31A7850", Offset = "0x31A6850", VA = "0x31A7850")]
	public static void PointInsideBox(ref Vector3 position, BoxCollider collider, float spacing)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x31AAC20", Offset = "0x31A9C20", VA = "0x31AAC20")]
	private static void PointInsideBox(ref Vector3 position, Vector3 boxSize)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x31A5F10", Offset = "0x31A4F10", VA = "0x31A5F10")]
	public static void PointOutsideCollider(ref Vector3 position, Collider collider, float spacing)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x31AACD0", Offset = "0x31A9CD0", VA = "0x31AACD0")]
	public static void DrawGizmosArrow(Vector3 startPoint, Vector3 direction, float halfWidth, Vector3 normal)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x31AB100", Offset = "0x31AA100", VA = "0x31AB100")]
	public static void DrawGizmosPolyLine(params Vector3[] vertices)
	{
	}
}
