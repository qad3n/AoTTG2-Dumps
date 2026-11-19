// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.SerializationEntry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003D4")]
public readonly struct SerializationEntry
{
	[Token(Token = "0x4000F2E")]
	[FieldOffset(Offset = "0x0")]
	private readonly string _name;

	[Token(Token = "0x4000F2F")]
	[FieldOffset(Offset = "0x8")]
	private readonly object _value;

	[Token(Token = "0x4000F30")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _type;

	[Token(Token = "0x17000412")]
	public object Value
	{
		[Token(Token = "0x6001F72")]
		[Address(RVA = "0x539B590", Offset = "0x539A590", VA = "0x539B590")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000413")]
	public string Name
	{
		[Token(Token = "0x6001F73")]
		[Address(RVA = "0x539B5A0", Offset = "0x539A5A0", VA = "0x539B5A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001F71")]
	[Address(RVA = "0x539B550", Offset = "0x539A550", VA = "0x539B550")]
	internal SerializationEntry(string entryName, object entryValue, Type entryType)
	{
	}
}
