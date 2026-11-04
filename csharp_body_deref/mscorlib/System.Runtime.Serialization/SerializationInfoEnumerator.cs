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

[Token(Token = "0x20003FC")]
public sealed class SerializationInfoEnumerator : IEnumerator
{
	[Token(Token = "0x4000FD1")]
	[FieldOffset(Offset = "0x10")]
	private readonly string[] _members;

	[Token(Token = "0x4000FD2")]
	[FieldOffset(Offset = "0x18")]
	private readonly object[] _data;

	[Token(Token = "0x4000FD3")]
	[FieldOffset(Offset = "0x20")]
	private readonly Type[] _types;

	[Token(Token = "0x4000FD4")]
	[FieldOffset(Offset = "0x28")]
	private readonly int _numItems;

	[Token(Token = "0x4000FD5")]
	[FieldOffset(Offset = "0x2C")]
	private int _currItem;

	[Token(Token = "0x4000FD6")]
	[FieldOffset(Offset = "0x30")]
	private bool _current;

	[Token(Token = "0x17000415")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x6001FA0")]
		[Address(RVA = "0x1A08130", Offset = "0x1A06730", VA = "0x181A08130", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000416")]
	public SerializationEntry Current
	{
		[Token(Token = "0x6001FA1")]
		[Address(RVA = "0x1A08200", Offset = "0x1A06800", VA = "0x181A08200")]
		get
		{
			return default(SerializationEntry);
		}
	}

	[Token(Token = "0x17000417")]
	public string Name
	{
		[Token(Token = "0x6001FA3")]
		[Address(RVA = "0x1A08320", Offset = "0x1A06920", VA = "0x181A08320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000418")]
	public object Value
	{
		[Token(Token = "0x6001FA4")]
		[Address(RVA = "0x1A08440", Offset = "0x1A06A40", VA = "0x181A08440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000419")]
	public Type ObjectType
	{
		[Token(Token = "0x6001FA5")]
		[Address(RVA = "0x1A083B0", Offset = "0x1A069B0", VA = "0x181A083B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001F9E")]
	[Address(RVA = "0x1A08190", Offset = "0x1A06790", VA = "0x181A08190")]
	internal SerializationInfoEnumerator(string[] members, object[] info, Type[] types, int numItems)
	{
	}

	[Token(Token = "0x6001F9F")]
	[Address(RVA = "0x1A08100", Offset = "0x1A06700", VA = "0x181A08100", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001FA2")]
	[Address(RVA = "0x1A08120", Offset = "0x1A06720", VA = "0x181A08120", Slot = "6")]
	public void Reset()
	{
	}
}
