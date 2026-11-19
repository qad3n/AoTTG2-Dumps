// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ContactPair
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x69E02E0", Offset = "0x69DF2E0", VA = "0x69E02E0")]
		get
		{
			return default(EntityId);
		}
	}

	[Token(Token = "0x1700002A")]
	public EntityId otherColliderEntityId
	{
		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x69E02F0", Offset = "0x69DF2F0", VA = "0x69E02F0")]
		get
		{
			return default(EntityId);
		}
	}

	[Token(Token = "0x1700002B")]
	public Collider collider
	{
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x69D6870", Offset = "0x69D5870", VA = "0x69D6870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002C")]
	public Collider otherCollider
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x69D6750", Offset = "0x69D5750", VA = "0x69D6750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002D")]
	public Vector3 impulseSum
	{
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x69E0300", Offset = "0x69DF300", VA = "0x69E0300")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700002E")]
	public bool isCollisionEnter
	{
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x69DFB50", Offset = "0x69DEB50", VA = "0x69DFB50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002F")]
	public bool isCollisionExit
	{
		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x69DFD10", Offset = "0x69DED10", VA = "0x69DFD10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000030")]
	public bool isCollisionStay
	{
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x69DFD00", Offset = "0x69DED00", VA = "0x69DFD00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000031")]
	internal bool hasRemovedCollider
	{
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x69DFB40", Offset = "0x69DEB40", VA = "0x69DFB40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x69D6AA0", Offset = "0x69D5AA0", VA = "0x69D6AA0")]
	internal int ExtractContactsArray(ContactPoint[] managedContainer, bool flipped)
	{
		return default(int);
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x69E0310", Offset = "0x69DF310", VA = "0x69E0310")]
	public unsafe ref ContactPairPoint GetContactPoint(int index)
	{
		return ref *(ContactPairPoint*)null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x69D6FF0", Offset = "0x69D5FF0", VA = "0x69D6FF0")]
	internal unsafe ContactPairPoint* GetContactPoint_Internal(int index)
	{
		//IL_0002: Expected I, but got O
		return (ContactPairPoint*)unchecked((nint)null);
	}
}
