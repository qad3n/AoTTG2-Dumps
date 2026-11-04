// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsJoint
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.LowLevelPhysics2D;

[Token(Token = "0x2000012")]
public readonly struct PhysicsJoint : IEquatable<PhysicsJoint>
{
	[Token(Token = "0x2000013")]
	public enum JointType
	{
		[Token(Token = "0x400007E")]
		DistanceJoint,
		[Token(Token = "0x400007F")]
		IgnoreJoint,
		[Token(Token = "0x4000080")]
		RelativeJoint,
		[Token(Token = "0x4000081")]
		SliderJoint,
		[Token(Token = "0x4000082")]
		HingeJoint,
		[Token(Token = "0x4000083")]
		FixedJoint,
		[Token(Token = "0x4000084")]
		WheelJoint
	}

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x0")]
	private readonly int index1;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x4")]
	private readonly ushort world0;

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x6")]
	private readonly ushort generation;

	[Token(Token = "0x17000019")]
	public bool isValid
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x2FD23B0", Offset = "0x2FD09B0", VA = "0x182FD23B0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001A")]
	public JointType jointType
	{
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x2FD23F0", Offset = "0x2FD09F0", VA = "0x182FD23F0", Slot = "6")]
		get
		{
			return default(JointType);
		}
	}

	[Token(Token = "0x1700001B")]
	public object callbackTarget
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x2FD2370", Offset = "0x2FD0970", VA = "0x182FD2370", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x2FD20C0", Offset = "0x2FD06C0", VA = "0x182FD20C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x2FD1FE0", Offset = "0x2FD05E0", VA = "0x182FD1FE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x2FD0FA0", Offset = "0x2FCF5A0", VA = "0x182FD0FA0", Slot = "4")]
	public bool Equals(PhysicsJoint other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x2FD2040", Offset = "0x2FD0640", VA = "0x182FD2040", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
