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
	[Address(RVA = "0x5854C0", Offset = "0x583AC0", VA = "0x1805854C0")]
	public static Vector3 Abs(this Vector3 v)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x585CC0", Offset = "0x5842C0", VA = "0x180585CC0")]
	public static float Max(this Vector3 v)
	{
		return default(float);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x585500", Offset = "0x583B00", VA = "0x180585500")]
	public static bool Contains(this LayerMask mask, int layer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x5859A0", Offset = "0x583FA0", VA = "0x1805859A0")]
	public static void GetCapsuleParams(CapsuleCollider collider, out Vector3 center0, out Vector3 center1, out float radius)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x585BE0", Offset = "0x5841E0", VA = "0x180585BE0")]
	public static void GetCylinderParams(Transform transform, out Vector3 center, out Vector3 direction, out float radius, out float height)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x587AA0", Offset = "0x5860A0", VA = "0x180587AA0")]
	public static void PointOutsideSphere(ref Vector3 position, SphereCollider collider, float spacing)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x587BF0", Offset = "0x5861F0", VA = "0x180587BF0")]
	private static void PointOutsideSphere(ref Vector3 position, Vector3 spherePosition, float radius)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x5869F0", Offset = "0x584FF0", VA = "0x1805869F0")]
	public static void PointInsideSphere(ref Vector3 position, SphereCollider collider, float spacing)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x5868D0", Offset = "0x584ED0", VA = "0x1805868D0")]
	private static void PointInsideSphere(ref Vector3 position, Vector3 spherePosition, float radius)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x587200", Offset = "0x585800", VA = "0x180587200")]
	public static void PointOutsideCapsule(ref Vector3 position, CapsuleCollider collider, float spacing)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x586F20", Offset = "0x585520", VA = "0x180586F20")]
	private static void PointOutsideCapsule(ref Vector3 position, Vector3 center0, Vector3 center1, float radius)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x586080", Offset = "0x584680", VA = "0x180586080")]
	public static void PointInsideCapsule(ref Vector3 position, CapsuleCollider collider, float spacing)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x586120", Offset = "0x584720", VA = "0x180586120")]
	private static void PointInsideCapsule(ref Vector3 position, Vector3 center0, Vector3 center1, float radius)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x587970", Offset = "0x585F70", VA = "0x180587970")]
	public static void PointOutsideCylinder(ref Vector3 position, Transform transform, float spacing)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x5875C0", Offset = "0x585BC0", VA = "0x1805875C0")]
	private static void PointOutsideCylinder(ref Vector3 position, Vector3 center, Vector3 direction, float radius, float height)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x5867A0", Offset = "0x584DA0", VA = "0x1805867A0")]
	public static void PointInsideCylinder(ref Vector3 position, Transform transform, float spacing)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x586400", Offset = "0x584A00", VA = "0x180586400")]
	private static void PointInsideCylinder(ref Vector3 position, Vector3 center, Vector3 direction, float radius, float height)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x586AB0", Offset = "0x5850B0", VA = "0x180586AB0")]
	public static void PointOutsideBox(ref Vector3 position, BoxCollider collider, float spacing)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x586E20", Offset = "0x585420", VA = "0x180586E20")]
	private static void PointOutsideBox(ref Vector3 position, Vector3 boxSize)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x585D70", Offset = "0x584370", VA = "0x180585D70")]
	public static void PointInsideBox(ref Vector3 position, BoxCollider collider, float spacing)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x585CE0", Offset = "0x5842E0", VA = "0x180585CE0")]
	private static void PointInsideBox(ref Vector3 position, Vector3 boxSize)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x5872A0", Offset = "0x5858A0", VA = "0x1805872A0")]
	public static void PointOutsideCollider(ref Vector3 position, Collider collider, float spacing)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x585540", Offset = "0x583B40", VA = "0x180585540")]
	public static void DrawGizmosArrow(Vector3 startPoint, Vector3 direction, float halfWidth, Vector3 normal)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x585900", Offset = "0x583F00", VA = "0x180585900")]
	public static void DrawGizmosPolyLine(params Vector3[] vertices)
	{
	}
}
