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

[Token(Token = "0x20003D5")]
public sealed class SerializationInfoEnumerator : IEnumerator
{
	[Token(Token = "0x4000F31")]
	[FieldOffset(Offset = "0x10")]
	private readonly string[] _members;

	[Token(Token = "0x4000F32")]
	[FieldOffset(Offset = "0x18")]
	private readonly object[] _data;

	[Token(Token = "0x4000F33")]
	[FieldOffset(Offset = "0x20")]
	private readonly Type[] _types;

	[Token(Token = "0x4000F34")]
	[FieldOffset(Offset = "0x28")]
	private readonly int _numItems;

	[Token(Token = "0x4000F35")]
	[FieldOffset(Offset = "0x2C")]
	private int _currItem;

	[Token(Token = "0x4000F36")]
	[FieldOffset(Offset = "0x30")]
	private bool _current;

	[Token(Token = "0x17000414")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x6001F76")]
		[Address(RVA = "0x539B620", Offset = "0x539A620", VA = "0x539B620", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000415")]
	public SerializationEntry Current
	{
		[Token(Token = "0x6001F77")]
		[Address(RVA = "0x5394E80", Offset = "0x5393E80", VA = "0x5394E80")]
		get
		{
			return default(SerializationEntry);
		}
	}

	[Token(Token = "0x17000416")]
	public string Name
	{
		[Token(Token = "0x6001F79")]
		[Address(RVA = "0x538D330", Offset = "0x538C330", VA = "0x538D330")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000417")]
	public object Value
	{
		[Token(Token = "0x6001F7A")]
		[Address(RVA = "0x538D3B0", Offset = "0x538C3B0", VA = "0x538D3B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000418")]
	public Type ObjectType
	{
		[Token(Token = "0x6001F7B")]
		[Address(RVA = "0x539B690", Offset = "0x539A690", VA = "0x539B690")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001F74")]
	[Address(RVA = "0x539B5B0", Offset = "0x539A5B0", VA = "0x539B5B0")]
	internal SerializationInfoEnumerator(string[] members, object[] info, Type[] types, int numItems)
	{
	}

	[Token(Token = "0x6001F75")]
	[Address(RVA = "0x538D4B0", Offset = "0x538C4B0", VA = "0x538D4B0", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001F78")]
	[Address(RVA = "0x539B680", Offset = "0x539A680", VA = "0x539B680", Slot = "6")]
	public void Reset()
	{
	}
}
