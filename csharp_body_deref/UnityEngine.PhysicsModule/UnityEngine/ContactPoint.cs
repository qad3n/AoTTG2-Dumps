// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ContactPoint
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000002")]
public struct ContactPoint
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	internal Vector3 m_Point;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0xC")]
	internal Vector3 m_Normal;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x18")]
	internal Vector3 m_Impulse;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x24")]
	internal EntityId m_ThisColliderEntityId;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x28")]
	internal EntityId m_OtherColliderEntityId;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x2C")]
	internal float m_Separation;

	[Token(Token = "0x17000001")]
	public Vector3 point
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x2FDEB80", Offset = "0x2FDD180", VA = "0x182FDEB80")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000002")]
	public Vector3 normal
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x2FDEB60", Offset = "0x2FDD160", VA = "0x182FDEB60")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000003")]
	public Vector3 impulse
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x2FDEB40", Offset = "0x2FDD140", VA = "0x182FDEB40")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000004")]
	public float separation
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0xD0EAF0", Offset = "0xD0D0F0", VA = "0x180D0EAF0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x2FDEAF0", Offset = "0x2FDD0F0", VA = "0x182FDEAF0")]
	internal ContactPoint(Vector3 point, Vector3 normal, Vector3 impulse, float separation, EntityId thisEntityId, EntityId otherEntityId)
	{
	}
}
