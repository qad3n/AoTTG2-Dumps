using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200001D")]
[UnityEngine.Scripting.UsedByNativeCode]
public readonly struct ContactPair
{
	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x0")]
	internal readonly int m_ColliderID;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x4")]
	internal readonly int m_OtherColliderID;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x8")]
	internal readonly IntPtr m_StartPtr;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x10")]
	internal readonly uint m_NbPoints;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x14")]
	internal readonly CollisionPairFlags m_Flags;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x16")]
	internal readonly CollisionPairEventFlags m_Events;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x18")]
	internal readonly Vector3 m_ImpulseSum;

	[Token(Token = "0x17000040")]
	public int ColliderInstanceID
	{
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x4B5BE50", Offset = "0x4B5BE50", VA = "0x4B5BE50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000041")]
	public int OtherColliderInstanceID
	{
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x4B5BE60", Offset = "0x4B5BE60", VA = "0x4B5BE60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000042")]
	public Collider Collider
	{
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x4B4E760", Offset = "0x4B4E760", VA = "0x4B4E760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000043")]
	public Collider OtherCollider
	{
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x4B4E6E0", Offset = "0x4B4E6E0", VA = "0x4B4E6E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000044")]
	public Vector3 ImpulseSum
	{
		[Token(Token = "0x6000147")]
		[Address(RVA = "0x4B5BE70", Offset = "0x4B5BE70", VA = "0x4B5BE70")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000045")]
	public bool IsCollisionEnter
	{
		[Token(Token = "0x6000148")]
		[Address(RVA = "0x4B554F0", Offset = "0x4B554F0", VA = "0x4B554F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000046")]
	public bool IsCollisionExit
	{
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x4B556A0", Offset = "0x4B556A0", VA = "0x4B556A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000047")]
	public bool IsCollisionStay
	{
		[Token(Token = "0x600014A")]
		[Address(RVA = "0x4B55690", Offset = "0x4B55690", VA = "0x4B55690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000048")]
	internal bool HasRemovedCollider
	{
		[Token(Token = "0x600014B")]
		[Address(RVA = "0x4B554E0", Offset = "0x4B554E0", VA = "0x4B554E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x4B4E9C0", Offset = "0x4B4E9C0", VA = "0x4B4E9C0")]
	internal int ExtractContactsArray(ContactPoint[] managedContainer, bool flipped)
	{
		return default(int);
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x4B4EDD0", Offset = "0x4B4EDD0", VA = "0x4B4EDD0")]
	internal unsafe ContactPairPoint* GetContactPoint_Internal(int index)
	{
		//IL_0002: Expected I, but got O
		return (ContactPairPoint*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014E")]
	[Address(RVA = "0x4B5BE80", Offset = "0x4B5BE80", VA = "0x4B5BE80")]
	private static extern int ExtractContactsArray_Injected(ref ContactPair _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper managedContainer, bool flipped);
}
