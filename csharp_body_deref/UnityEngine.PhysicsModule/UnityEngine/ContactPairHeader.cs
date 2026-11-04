// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ContactPairHeader
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000015")]
[UnityEngine.Scripting.UsedByNativeCode]
public readonly struct ContactPairHeader
{
	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x0")]
	internal readonly EntityId m_BodyID;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x4")]
	internal readonly EntityId m_OtherBodyID;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x8")]
	internal readonly IntPtr m_StartPtr;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x10")]
	internal readonly uint m_NbPairs;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x14")]
	internal readonly CollisionPairHeaderFlags m_Flags;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x18")]
	internal readonly Vector3 m_ThisBodyLinearVelocity;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x24")]
	internal readonly Vector3 m_ThisBodyAngularVelocity;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x30")]
	internal readonly Vector3 m_OtherBodyLinearVelocity;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x3C")]
	internal readonly Vector3 m_OtherBodyAngularVelocity;

	[Token(Token = "0x17000024")]
	public Component body
	{
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x2FDE6A0", Offset = "0x2FDCCA0", VA = "0x182FDE6A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000025")]
	public Component otherBody
	{
		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x2FDE710", Offset = "0x2FDCD10", VA = "0x182FDE710")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000026")]
	public Vector3 bodyLinearVelocity
	{
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x111AD10", Offset = "0x1119310", VA = "0x18111AD10")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000027")]
	public Vector3 otherBodyLinearVelocity
	{
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x2AC3A10", Offset = "0x2AC2010", VA = "0x182AC3A10")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000028")]
	internal bool hasRemovedBody
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x2FDE6F0", Offset = "0x2FDCCF0", VA = "0x182FDE6F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x2FDE690", Offset = "0x2FDCC90", VA = "0x182FDE690")]
	public unsafe ref ContactPair GetContactPair(int index)
	{
		return ref *(ContactPair*)null;
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x2FDE610", Offset = "0x2FDCC10", VA = "0x182FDE610")]
	internal unsafe ContactPair* GetContactPair_Internal(int index)
	{
		//IL_0002: Expected I, but got O
		return (ContactPair*)unchecked((nint)null);
	}
}
