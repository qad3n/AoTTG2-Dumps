// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.SerializationEntry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003CC")]
public readonly struct SerializationEntry
{
	[Token(Token = "0x4000FC8")]
	[FieldOffset(Offset = "0x0")]
	private readonly string _name;

	[Token(Token = "0x4000FC9")]
	[FieldOffset(Offset = "0x8")]
	private readonly object _value;

	[Token(Token = "0x4000FCA")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _type;

	[Token(Token = "0x17000411")]
	public object Value
	{
		[Token(Token = "0x6001F2D")]
		[Address(RVA = "0x3B93BD0", Offset = "0x3B93BD0", VA = "0x3B93BD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000412")]
	public string Name
	{
		[Token(Token = "0x6001F2E")]
		[Address(RVA = "0x3B93BE0", Offset = "0x3B93BE0", VA = "0x3B93BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001F2C")]
	[Address(RVA = "0x3B93B90", Offset = "0x3B93B90", VA = "0x3B93B90")]
	internal SerializationEntry(string entryName, object entryValue, Type entryType)
	{
	}
}
