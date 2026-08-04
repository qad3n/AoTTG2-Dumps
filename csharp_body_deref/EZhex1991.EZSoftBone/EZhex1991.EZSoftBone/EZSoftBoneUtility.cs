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

[Token(Token = "0x2000012")]
public static class EZSoftBoneUtility
{
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x2394410", Offset = "0x2394410", VA = "0x2394410")]
	public static Vector3 Abs(this Vector3 v)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x2394420", Offset = "0x2394420", VA = "0x2394420")]
	public static float Max(this Vector3 v)
	{
		return default(float);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x2395A00", Offset = "0x2395A00", VA = "0x2395A00")]
	public static bool Contains(this LayerMask mask, int layer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x23985E0", Offset = "0x23985E0", VA = "0x23985E0")]
	public static void GetCapsuleParams(CapsuleCollider collider, out Vector3 center0, out Vector3 center1, out float radius)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x23987F0", Offset = "0x23987F0", VA = "0x23987F0")]
	public static void GetCylinderParams(Transform transform, out Vector3 center, out Vector3 direction, out float radius, out float height)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x2396FA0", Offset = "0x2396FA0", VA = "0x2396FA0")]
	public static void PointOutsideSphere(ref Vector3 position, SphereCollider collider, float spacing)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x23988A0", Offset = "0x23988A0", VA = "0x23988A0")]
	private static void PointOutsideSphere(ref Vector3 position, Vector3 spherePosition, float radius)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x2396D30", Offset = "0x2396D30", VA = "0x2396D30")]
	public static void PointInsideSphere(ref Vector3 position, SphereCollider collider, float spacing)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x2398A90", Offset = "0x2398A90", VA = "0x2398A90")]
	private static void PointInsideSphere(ref Vector3 position, Vector3 spherePosition, float radius)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x2397330", Offset = "0x2397330", VA = "0x2397330")]
	public static void PointOutsideCapsule(ref Vector3 position, CapsuleCollider collider, float spacing)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x2398C80", Offset = "0x2398C80", VA = "0x2398C80")]
	private static void PointOutsideCapsule(ref Vector3 position, Vector3 center0, Vector3 center1, float radius)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x23972A0", Offset = "0x23972A0", VA = "0x23972A0")]
	public static void PointInsideCapsule(ref Vector3 position, CapsuleCollider collider, float spacing)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x2399400", Offset = "0x2399400", VA = "0x2399400")]
	private static void PointInsideCapsule(ref Vector3 position, Vector3 center0, Vector3 center1, float radius)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x2397ED0", Offset = "0x2397ED0", VA = "0x2397ED0")]
	public static void PointOutsideCylinder(ref Vector3 position, Transform transform, float spacing)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x2399B70", Offset = "0x2399B70", VA = "0x2399B70")]
	private static void PointOutsideCylinder(ref Vector3 position, Vector3 center, Vector3 direction, float radius, float height)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x2397E10", Offset = "0x2397E10", VA = "0x2397E10")]
	public static void PointInsideCylinder(ref Vector3 position, Transform transform, float spacing)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x239A060", Offset = "0x239A060", VA = "0x239A060")]
	private static void PointInsideCylinder(ref Vector3 position, Vector3 center, Vector3 direction, float radius, float height)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x2397660", Offset = "0x2397660", VA = "0x2397660")]
	public static void PointOutsideBox(ref Vector3 position, BoxCollider collider, float spacing)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x239A5B0", Offset = "0x239A5B0", VA = "0x239A5B0")]
	private static void PointOutsideBox(ref Vector3 position, Vector3 boxSize)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x23973C0", Offset = "0x23973C0", VA = "0x23973C0")]
	public static void PointInsideBox(ref Vector3 position, BoxCollider collider, float spacing)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x239A690", Offset = "0x239A690", VA = "0x239A690")]
	private static void PointInsideBox(ref Vector3 position, Vector3 boxSize)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x2395A30", Offset = "0x2395A30", VA = "0x2395A30")]
	public static void PointOutsideCollider(ref Vector3 position, Collider collider, float spacing)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x239A740", Offset = "0x239A740", VA = "0x239A740")]
	public static void DrawGizmosArrow(Vector3 startPoint, Vector3 direction, float halfWidth, Vector3 normal)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x239AB10", Offset = "0x239AB10", VA = "0x239AB10")]
	public static void DrawGizmosPolyLine(params Vector3[] vertices)
	{
	}
}
