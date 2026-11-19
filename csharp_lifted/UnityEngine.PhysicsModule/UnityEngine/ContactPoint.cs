// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ContactPoint
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x69D6470", Offset = "0x69D5470", VA = "0x69D6470")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000002")]
	public Vector3 normal
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x69D6480", Offset = "0x69D5480", VA = "0x69D6480")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000003")]
	public Vector3 impulse
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x69D6490", Offset = "0x69D5490", VA = "0x69D6490")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000004")]
	public float separation
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x69D64A0", Offset = "0x69D54A0", VA = "0x69D64A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x69D64B0", Offset = "0x69D54B0", VA = "0x69D64B0")]
	internal ContactPoint(Vector3 point, Vector3 normal, Vector3 impulse, float separation, EntityId thisEntityId, EntityId otherEntityId)
	{
	}
}
