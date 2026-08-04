// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.SerializationInfoEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B93C60", Offset = "0x3B93C60", VA = "0x3B93C60", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000414")]
	public SerializationEntry Current
	{
		[Token(Token = "0x6001F32")]
		[Address(RVA = "0x3B8D1C0", Offset = "0x3B8D1C0", VA = "0x3B8D1C0")]
		get
		{
			return default(SerializationEntry);
		}
	}

	[Token(Token = "0x17000415")]
	public string Name
	{
		[Token(Token = "0x6001F34")]
		[Address(RVA = "0x3B854D0", Offset = "0x3B854D0", VA = "0x3B854D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000416")]
	public object Value
	{
		[Token(Token = "0x6001F35")]
		[Address(RVA = "0x3B85550", Offset = "0x3B85550", VA = "0x3B85550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000417")]
	public Type ObjectType
	{
		[Token(Token = "0x6001F36")]
		[Address(RVA = "0x3B93CE0", Offset = "0x3B93CE0", VA = "0x3B93CE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001F2F")]
	[Address(RVA = "0x3B93BF0", Offset = "0x3B93BF0", VA = "0x3B93BF0")]
	internal SerializationInfoEnumerator(string[] members, object[] info, Type[] types, int numItems)
	{
	}

	[Token(Token = "0x6001F30")]
	[Address(RVA = "0x3B85650", Offset = "0x3B85650", VA = "0x3B85650", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001F33")]
	[Address(RVA = "0x3B93CD0", Offset = "0x3B93CD0", VA = "0x3B93CD0", Slot = "6")]
	public void Reset()
	{
	}
}
