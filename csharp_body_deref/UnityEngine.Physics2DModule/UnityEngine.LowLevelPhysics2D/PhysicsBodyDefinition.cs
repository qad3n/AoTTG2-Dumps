// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsBodyDefinition
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.LowLevelPhysics2D;

[Serializable]
[Token(Token = "0x2000023")]
public struct PhysicsBodyDefinition
{
	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private PhysicsBody.BodyType m_BodyType;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private PhysicsBody.BodyConstraints m_BodyConstraints;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private PhysicsBody.TransformWriteMode m_TransformWriteMode;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0xC")]
	[SerializeField]
	private Vector2 m_Position;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	private PhysicsRotate m_Rotation;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	private Vector2 m_LinearVelocity;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private float m_AngularVelocity;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x28")]
	[Min(0f)]
	[SerializeField]
	private float m_LinearDamping;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	[Min(0f)]
	private float m_AngularDamping;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private float m_GravityScale;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x34")]
	[Min(0f)]
	[SerializeField]
	private float m_SleepThreshold;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x38")]
	[Range(0f, 1f)]
	[SerializeField]
	private float m_CollisionThreshold;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private bool m_FastCollisionsAllowed;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x3D")]
	[SerializeField]
	private bool m_FastRotationAllowed;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x3E")]
	[SerializeField]
	private bool m_SleepingAllowed;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x3F")]
	[SerializeField]
	private bool m_Awake;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private bool m_Enabled;

	[Token(Token = "0x17000036")]
	public static PhysicsBodyDefinition defaultDefinition
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x2FD0EB0", Offset = "0x2FCF4B0", VA = "0x182FD0EB0")]
		get
		{
			return default(PhysicsBodyDefinition);
		}
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x2FD0DA0", Offset = "0x2FCF3A0", VA = "0x182FD0DA0")]
	public PhysicsBodyDefinition()
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x2FD0E20", Offset = "0x2FCF420", VA = "0x182FD0E20")]
	public PhysicsBodyDefinition(bool useSettings)
	{
	}
}
