// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsMath
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.LowLevelPhysics2D;

[Token(Token = "0x2000057")]
public readonly struct PhysicsMath
{
	[Token(Token = "0x600017F")]
	[Address(RVA = "0x69D14D0", Offset = "0x69D04D0", VA = "0x69D14D0")]
	public static float Atan2(float y, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000180")]
	[Address(RVA = "0x69D1510", Offset = "0x69D0510", VA = "0x69D1510")]
	public static Vector3 Swizzle(Vector3 position, PhysicsWorld.TransformPlane transformPlane = PhysicsWorld.TransformPlane.XY)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000181")]
	[Address(RVA = "0x69D1590", Offset = "0x69D0590", VA = "0x69D1590")]
	public static Vector3 ToPosition3D(Vector2 position, Vector3 reference, PhysicsWorld.TransformPlane transformPlane = PhysicsWorld.TransformPlane.XY)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000182")]
	[Address(RVA = "0x69D1610", Offset = "0x69D0610", VA = "0x69D1610")]
	public static float ToRotation2D(Quaternion quaternion, PhysicsWorld.TransformPlane transformPlane = PhysicsWorld.TransformPlane.XY)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000183")]
	[Address(RVA = "0x69D1720", Offset = "0x69D0720", VA = "0x69D1720")]
	public static Quaternion AngularVelocityToQuaternion(float angularVelocity, float deltaTime, PhysicsWorld.TransformPlane transformPlane)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000184")]
	[Address(RVA = "0x69D1980", Offset = "0x69D0980", VA = "0x69D1980")]
	public static Quaternion ToRotationFast3D(float angle, PhysicsWorld.TransformPlane transformPlane = PhysicsWorld.TransformPlane.XY)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000185")]
	[Address(RVA = "0x69D1BA0", Offset = "0x69D0BA0", VA = "0x69D1BA0")]
	public static Quaternion ToRotationSlow3D(float angle, Quaternion reference, PhysicsWorld.TransformPlane transformPlane = PhysicsWorld.TransformPlane.XY)
	{
		return default(Quaternion);
	}
}
