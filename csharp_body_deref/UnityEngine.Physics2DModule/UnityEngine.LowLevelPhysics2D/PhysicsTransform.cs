// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsTransform
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.LowLevelPhysics2D;

[Serializable]
[Token(Token = "0x200001D")]
public struct PhysicsTransform
{
	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x0")]
	public Vector2 position;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x8")]
	public PhysicsRotate rotation;

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x2FD7A50", Offset = "0x2FD6050", VA = "0x182FD7A50")]
	public PhysicsTransform()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x2FD7980", Offset = "0x2FD5F80", VA = "0x182FD7980")]
	public readonly void GetPositionAndRotation(out Vector2 position, out PhysicsRotate rotation)
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x2FD79B0", Offset = "0x2FD5FB0", VA = "0x182FD79B0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}
}
