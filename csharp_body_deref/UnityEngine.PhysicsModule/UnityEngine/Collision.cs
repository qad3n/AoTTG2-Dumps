// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Collision
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000003")]
public class Collision
{
	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x10")]
	private ContactPairHeader m_Header;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x58")]
	private ContactPair m_Pair;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x80")]
	private bool m_Flipped;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x88")]
	private ContactPoint[] m_LegacyContacts;

	[Token(Token = "0x17000005")]
	public Vector3 impulse
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x2FDE3F0", Offset = "0x2FDC9F0", VA = "0x182FDE3F0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000006")]
	public Vector3 relativeVelocity
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x2FDE410", Offset = "0x2FDCA10", VA = "0x182FDE410")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000007")]
	public Component body
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x2FDE2C0", Offset = "0x2FDC8C0", VA = "0x182FDE2C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000008")]
	public Collider collider
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x2FDE340", Offset = "0x2FDC940", VA = "0x182FDE340")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000009")]
	public Transform transform
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x2FDE470", Offset = "0x2FDCA70", VA = "0x182FDE470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000A")]
	internal bool Flipped
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x1721000", Offset = "0x171F600", VA = "0x181721000")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public int contactCount
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x2F6B500", Offset = "0x2F69B00", VA = "0x182F6B500")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000C")]
	public ContactPoint[] contacts
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x2FDE370", Offset = "0x2FDC970", VA = "0x182FDE370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x2FDE240", Offset = "0x2FDC840", VA = "0x182FDE240")]
	public Collision()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x2FDDFA0", Offset = "0x2FDC5A0", VA = "0x182FDDFA0")]
	internal Collision(in ContactPairHeader header, in ContactPair pair, bool flipped)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x2FDDF20", Offset = "0x2FDC520", VA = "0x182FDDF20")]
	internal void Reuse(in ContactPairHeader header, in ContactPair pair)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x2FDDCF0", Offset = "0x2FDC2F0", VA = "0x182FDDCF0")]
	public ContactPoint GetContact(int index)
	{
		return default(ContactPoint);
	}
}
