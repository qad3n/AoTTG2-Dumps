// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsJoint
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x69CBBB0", Offset = "0x69CABB0", VA = "0x69CBBB0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001A")]
	public JointType jointType
	{
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x69CBBF0", Offset = "0x69CABF0", VA = "0x69CBBF0", Slot = "6")]
		get
		{
			return default(JointType);
		}
	}

	[Token(Token = "0x1700001B")]
	public object callbackTarget
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x69CBD30", Offset = "0x69CAD30", VA = "0x69CBD30", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x69CB920", Offset = "0x69CA920", VA = "0x69CB920", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x69CBC30", Offset = "0x69CAC30", VA = "0x69CBC30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x69CBC90", Offset = "0x69CAC90", VA = "0x69CBC90", Slot = "4")]
	public bool Equals(PhysicsJoint other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x69CBCC0", Offset = "0x69CACC0", VA = "0x69CBCC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
