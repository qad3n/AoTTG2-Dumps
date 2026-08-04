// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Collision
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4E75D30", Offset = "0x4E75D30", VA = "0x4E75D30")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000002")]
	public Vector3 relativeVelocity
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x4E75D40", Offset = "0x4E75D40", VA = "0x4E75D40")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000003")]
	public Rigidbody rigidbody
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x4E75D60", Offset = "0x4E75D60", VA = "0x4E75D60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public Component body
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4E75DD0", Offset = "0x4E75DD0", VA = "0x4E75DD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	public Collider collider
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4E75F60", Offset = "0x4E75F60", VA = "0x4E75F60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000006")]
	public Transform transform
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4E76110", Offset = "0x4E76110", VA = "0x4E76110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000007")]
	internal bool Flipped
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x4E76250", Offset = "0x4E76250", VA = "0x4E76250")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public int contactCount
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4E76260", Offset = "0x4E76260", VA = "0x4E76260")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000009")]
	public ContactPoint[] contacts
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x4E76270", Offset = "0x4E76270", VA = "0x4E76270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4E763C0", Offset = "0x4E763C0", VA = "0x4E763C0")]
	public Collision()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4E76420", Offset = "0x4E76420", VA = "0x4E76420")]
	internal Collision(in ContactPairHeader header, in ContactPair pair, bool flipped)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4E764E0", Offset = "0x4E764E0", VA = "0x4E764E0")]
	internal void Reuse(in ContactPairHeader header, in ContactPair pair)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4E76530", Offset = "0x4E76530", VA = "0x4E76530")]
	public ContactPoint GetContact(int index)
	{
		return default(ContactPoint);
	}
}
