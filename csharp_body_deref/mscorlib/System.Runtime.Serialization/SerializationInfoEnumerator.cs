using System.Collections;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003CD")]
public sealed class SerializationInfoEnumerator : IEnumerator
{
	[Token(Token = "0x4000FCB")]
	[FieldOffset(Offset = "0x10")]
	private readonly string[] _members;

	[Token(Token = "0x4000FCC")]
	[FieldOffset(Offset = "0x18")]
	private readonly object[] _data;

	[Token(Token = "0x4000FCD")]
	[FieldOffset(Offset = "0x20")]
	private readonly Type[] _types;

	[Token(Token = "0x4000FCE")]
	[FieldOffset(Offset = "0x28")]
	private readonly int _numItems;

	[Token(Token = "0x4000FCF")]
	[FieldOffset(Offset = "0x2C")]
	private int _currItem;

	[Token(Token = "0x4000FD0")]
	[FieldOffset(Offset = "0x30")]
	private bool _current;

	[Token(Token = "0x17000413")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x6001F31")]
		[Address(RVA = "0x4EAE140", Offset = "0x4EAE140", VA = "0x4EAE140", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000414")]
	public SerializationEntry Current
	{
		[Token(Token = "0x6001F32")]
		[Address(RVA = "0x4EA76A0", Offset = "0x4EA76A0", VA = "0x4EA76A0")]
		get
		{
			return default(SerializationEntry);
		}
	}

	[Token(Token = "0x17000415")]
	public string Name
	{
		[Token(Token = "0x6001F34")]
		[Address(RVA = "0x4E9F9B0", Offset = "0x4E9F9B0", VA = "0x4E9F9B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000416")]
	public object Value
	{
		[Token(Token = "0x6001F35")]
		[Address(RVA = "0x4E9FA30", Offset = "0x4E9FA30", VA = "0x4E9FA30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000417")]
	public Type ObjectType
	{
		[Token(Token = "0x6001F36")]
		[Address(RVA = "0x4EAE1C0", Offset = "0x4EAE1C0", VA = "0x4EAE1C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001F2F")]
	[Address(RVA = "0x4EAE0D0", Offset = "0x4EAE0D0", VA = "0x4EAE0D0")]
	internal SerializationInfoEnumerator(string[] members, object[] info, Type[] types, int numItems)
	{
	}

	[Token(Token = "0x6001F30")]
	[Address(RVA = "0x4E9FB30", Offset = "0x4E9FB30", VA = "0x4E9FB30", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001F33")]
	[Address(RVA = "0x4EAE1B0", Offset = "0x4EAE1B0", VA = "0x4EAE1B0", Slot = "6")]
	public void Reset()
	{
	}
}
