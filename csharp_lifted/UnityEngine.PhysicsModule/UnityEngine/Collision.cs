// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Collision
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x69D64E0", Offset = "0x69D54E0", VA = "0x69D64E0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000006")]
	public Vector3 relativeVelocity
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x69D64F0", Offset = "0x69D54F0", VA = "0x69D64F0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000007")]
	public Component body
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x69D6530", Offset = "0x69D5530", VA = "0x69D6530")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000008")]
	public Collider collider
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x69D6730", Offset = "0x69D5730", VA = "0x69D6730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000009")]
	public Transform transform
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x69D6980", Offset = "0x69D5980", VA = "0x69D6980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000A")]
	internal bool Flipped
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x69D69E0", Offset = "0x69D59E0", VA = "0x69D69E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public int contactCount
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x69D69F0", Offset = "0x69D59F0", VA = "0x69D69F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000C")]
	public ContactPoint[] contacts
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x69D6A00", Offset = "0x69D5A00", VA = "0x69D6A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x69D6C50", Offset = "0x69D5C50", VA = "0x69D6C50")]
	public Collision()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x69D6CC0", Offset = "0x69D5CC0", VA = "0x69D6CC0")]
	internal Collision(in ContactPairHeader header, in ContactPair pair, bool flipped)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x69D6DB0", Offset = "0x69D5DB0", VA = "0x69D6DB0")]
	internal void Reuse(in ContactPairHeader header, in ContactPair pair)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x69D6E20", Offset = "0x69D5E20", VA = "0x69D6E20")]
	public ContactPoint GetContact(int index)
	{
		return default(ContactPoint);
	}
}
