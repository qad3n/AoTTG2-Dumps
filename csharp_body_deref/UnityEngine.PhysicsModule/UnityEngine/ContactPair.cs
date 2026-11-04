// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ContactPair
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000016")]
[UnityEngine.Scripting.UsedByNativeCode]
public readonly struct ContactPair
{
	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x0")]
	internal readonly EntityId m_ColliderID;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x4")]
	internal readonly EntityId m_OtherColliderID;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x8")]
	internal readonly IntPtr m_StartPtr;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x10")]
	internal readonly uint m_NbPoints;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x14")]
	internal readonly CollisionPairFlags m_Flags;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x16")]
	internal readonly CollisionPairEventFlags m_Events;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x18")]
	internal readonly Vector3 m_ImpulseSum;

	[Token(Token = "0x17000029")]
	public EntityId colliderEntityId
	{
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(EntityId);
		}
	}

	[Token(Token = "0x1700002A")]
	public EntityId otherColliderEntityId
	{
		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		get
		{
			return default(EntityId);
		}
	}

	[Token(Token = "0x1700002B")]
	public Collider collider
	{
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x2FDE9C0", Offset = "0x2FDCFC0", VA = "0x182FDE9C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002C")]
	public Collider otherCollider
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x2FDEA70", Offset = "0x2FDD070", VA = "0x182FDEA70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002D")]
	public Vector3 impulseSum
	{
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x111AD10", Offset = "0x1119310", VA = "0x18111AD10")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700002E")]
	public bool isCollisionEnter
	{
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x2FDEA40", Offset = "0x2FDD040", VA = "0x182FDEA40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002F")]
	public bool isCollisionExit
	{
		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x2FDEA50", Offset = "0x2FDD050", VA = "0x182FDEA50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000030")]
	public bool isCollisionStay
	{
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x2FDEA60", Offset = "0x2FDD060", VA = "0x182FDEA60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000031")]
	internal bool hasRemovedCollider
	{
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x2FDE6F0", Offset = "0x2FDCCF0", VA = "0x182FDE6F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x2FDE760", Offset = "0x2FDCD60", VA = "0x182FDE760")]
	internal int ExtractContactsArray(ContactPoint[] managedContainer, bool flipped)
	{
		return default(int);
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x2FDE9B0", Offset = "0x2FDCFB0", VA = "0x182FDE9B0")]
	public unsafe ref ContactPairPoint GetContactPoint(int index)
	{
		return ref *(ContactPairPoint*)null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x2FDE930", Offset = "0x2FDCF30", VA = "0x182FDE930")]
	internal unsafe ContactPairPoint* GetContactPoint_Internal(int index)
	{
		//IL_0002: Expected I, but got O
		return (ContactPairPoint*)unchecked((nint)null);
	}
}
