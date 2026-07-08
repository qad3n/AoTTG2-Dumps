using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200001C")]
public readonly struct ContactPairHeader
{
	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x0")]
	internal readonly int m_BodyID;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x4")]
	internal readonly int m_OtherBodyID;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x8")]
	internal readonly IntPtr m_StartPtr;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x10")]
	internal readonly uint m_NbPairs;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x14")]
	internal readonly CollisionPairHeaderFlags m_Flags;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x18")]
	internal readonly Vector3 m_RelativeVelocity;

	[Token(Token = "0x1700003D")]
	public Component Body
	{
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x4B4E5C0", Offset = "0x4B4E5C0", VA = "0x4B4E5C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003E")]
	public Component OtherBody
	{
		[Token(Token = "0x600013F")]
		[Address(RVA = "0x4B4E550", Offset = "0x4B4E550", VA = "0x4B4E550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003F")]
	internal bool HasRemovedBody
	{
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x4B554C0", Offset = "0x4B554C0", VA = "0x4B554C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x4B554D0", Offset = "0x4B554D0", VA = "0x4B554D0")]
	public unsafe ref ContactPair GetContactPair(int index)
	{
		return ref *(ContactPair*)null;
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x4B5BDE0", Offset = "0x4B5BDE0", VA = "0x4B5BDE0")]
	internal unsafe ContactPair* GetContactPair_Internal(int index)
	{
		//IL_0002: Expected I, but got O
		return (ContactPair*)unchecked((nint)null);
	}
}
