// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsMath
// Update status: NEW in this game update
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
	[Address(RVA = "0x2FD2D40", Offset = "0x2FD1340", VA = "0x182FD2D40")]
	public static float Atan2(float y, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000180")]
	[Address(RVA = "0x2FD4F70", Offset = "0x2FD3570", VA = "0x182FD4F70")]
	public static Vector3 Swizzle(Vector3 position, PhysicsWorld.TransformPlane transformPlane = PhysicsWorld.TransformPlane.XY)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000181")]
	[Address(RVA = "0x2FD5030", Offset = "0x2FD3630", VA = "0x182FD5030")]
	public static Vector3 ToPosition3D(Vector2 position, Vector3 reference, PhysicsWorld.TransformPlane transformPlane = PhysicsWorld.TransformPlane.XY)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000182")]
	[Address(RVA = "0x2FCBF10", Offset = "0x2FCA510", VA = "0x182FCBF10")]
	public static float ToRotation2D(Quaternion quaternion, PhysicsWorld.TransformPlane transformPlane = PhysicsWorld.TransformPlane.XY)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000183")]
	[Address(RVA = "0x2FD4D80", Offset = "0x2FD3380", VA = "0x182FD4D80")]
	public static Quaternion AngularVelocityToQuaternion(float angularVelocity, float deltaTime, PhysicsWorld.TransformPlane transformPlane)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000184")]
	[Address(RVA = "0x2FD50F0", Offset = "0x2FD36F0", VA = "0x182FD50F0")]
	public static Quaternion ToRotationFast3D(float angle, PhysicsWorld.TransformPlane transformPlane = PhysicsWorld.TransformPlane.XY)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000185")]
	[Address(RVA = "0x2FCC210", Offset = "0x2FCA810", VA = "0x182FCC210")]
	public static Quaternion ToRotationSlow3D(float angle, Quaternion reference, PhysicsWorld.TransformPlane transformPlane = PhysicsWorld.TransformPlane.XY)
	{
		return default(Quaternion);
	}
}
