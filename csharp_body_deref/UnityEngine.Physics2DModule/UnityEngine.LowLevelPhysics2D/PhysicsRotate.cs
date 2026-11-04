// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsRotate
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
[Token(Token = "0x200001C")]
public struct PhysicsRotate : ISerializationCallbackReceiver
{
	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x0")]
	public Vector2 direction;

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly PhysicsRotate identityRotation;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x8")]
	private static readonly PhysicsRotate leftRotation;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x10")]
	private static readonly PhysicsRotate upRotation;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x18")]
	private static readonly PhysicsRotate downRotation;

	[Token(Token = "0x17000027")]
	public readonly float cos
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000028")]
	public readonly float sin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x562BB0", Offset = "0x5611B0", VA = "0x180562BB0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000029")]
	public readonly bool isValid
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x2FD64B0", Offset = "0x2FD4AB0", VA = "0x182FD64B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002A")]
	public readonly float angle
	{
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x2FD6420", Offset = "0x2FD4A20", VA = "0x182FD6420")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700002B")]
	public static PhysicsRotate identity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x2FD6460", Offset = "0x2FD4A60", VA = "0x182FD6460")]
		get
		{
			return default(PhysicsRotate);
		}
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x2FD6330", Offset = "0x2FD4930", VA = "0x182FD6330")]
	public PhysicsRotate()
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x2FD63E0", Offset = "0x2FD49E0", VA = "0x182FD63E0")]
	public PhysicsRotate(Vector2 direction)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x2FD6380", Offset = "0x2FD4980", VA = "0x182FD6380")]
	public PhysicsRotate(float angle)
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x2FD5F80", Offset = "0x2FD4580", VA = "0x182FD5F80", Slot = "4")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x2FD5EA0", Offset = "0x2FD44A0", VA = "0x182FD5EA0", Slot = "5")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x2FD6060", Offset = "0x2FD4660", VA = "0x182FD6060", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}
}
