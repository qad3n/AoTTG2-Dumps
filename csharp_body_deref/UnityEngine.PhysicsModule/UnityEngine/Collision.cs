using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000007")]
public class Collision
{
	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x10")]
	private ContactPairHeader m_Header;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x38")]
	private ContactPair m_Pair;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x60")]
	private bool m_Flipped;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x68")]
	private ContactPoint[] m_LegacyContacts;

	[Token(Token = "0x17000001")]
	public Vector3 impulse
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x4B4E400", Offset = "0x4B4E400", VA = "0x4B4E400")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000002")]
	public Vector3 relativeVelocity
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x4B4E410", Offset = "0x4B4E410", VA = "0x4B4E410")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000003")]
	public Rigidbody rigidbody
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x4B4E430", Offset = "0x4B4E430", VA = "0x4B4E430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public Component body
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4B4E4A0", Offset = "0x4B4E4A0", VA = "0x4B4E4A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	public Collider collider
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4B4E630", Offset = "0x4B4E630", VA = "0x4B4E630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000006")]
	public Transform transform
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4B4E7E0", Offset = "0x4B4E7E0", VA = "0x4B4E7E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000007")]
	internal bool Flipped
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x4B4E920", Offset = "0x4B4E920", VA = "0x4B4E920")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public int contactCount
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4B4E930", Offset = "0x4B4E930", VA = "0x4B4E930")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000009")]
	public ContactPoint[] contacts
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x4B4E940", Offset = "0x4B4E940", VA = "0x4B4E940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4B4EA90", Offset = "0x4B4EA90", VA = "0x4B4EA90")]
	public Collision()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4B4EAF0", Offset = "0x4B4EAF0", VA = "0x4B4EAF0")]
	internal Collision(in ContactPairHeader header, in ContactPair pair, bool flipped)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4B4EBB0", Offset = "0x4B4EBB0", VA = "0x4B4EBB0")]
	internal void Reuse(in ContactPairHeader header, in ContactPair pair)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4B4EC00", Offset = "0x4B4EC00", VA = "0x4B4EC00")]
	public ContactPoint GetContact(int index)
	{
		return default(ContactPoint);
	}
}
