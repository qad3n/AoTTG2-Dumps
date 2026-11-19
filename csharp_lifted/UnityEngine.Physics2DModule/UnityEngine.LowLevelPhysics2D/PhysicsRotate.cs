// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsRotate
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x69CC9F0", Offset = "0x69CB9F0", VA = "0x69CC9F0")]
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
		[Address(RVA = "0x69CCA00", Offset = "0x69CBA00", VA = "0x69CCA00")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000029")]
	public readonly bool isValid
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x69CCAE0", Offset = "0x69CBAE0", VA = "0x69CCAE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002A")]
	public readonly float angle
	{
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x69CCB20", Offset = "0x69CBB20", VA = "0x69CCB20")]
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
		[Address(RVA = "0x69CCB60", Offset = "0x69CBB60", VA = "0x69CCB60")]
		get
		{
			return default(PhysicsRotate);
		}
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x69CCA10", Offset = "0x69CBA10", VA = "0x69CCA10")]
	public PhysicsRotate()
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x69CCA50", Offset = "0x69CBA50", VA = "0x69CCA50")]
	public PhysicsRotate(Vector2 direction)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x69CCA80", Offset = "0x69CBA80", VA = "0x69CCA80")]
	public PhysicsRotate(float angle)
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x69CCBD0", Offset = "0x69CBBD0", VA = "0x69CCBD0", Slot = "4")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x69CCCC0", Offset = "0x69CBCC0", VA = "0x69CCCC0", Slot = "5")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x69CCDB0", Offset = "0x69CBDB0", VA = "0x69CCDB0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}
}
