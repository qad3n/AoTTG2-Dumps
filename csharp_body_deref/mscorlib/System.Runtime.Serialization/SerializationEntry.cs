// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.SerializationEntry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003FB")]
public readonly struct SerializationEntry
{
	[Token(Token = "0x4000FCE")]
	[FieldOffset(Offset = "0x0")]
	private readonly string _name;

	[Token(Token = "0x4000FCF")]
	[FieldOffset(Offset = "0x8")]
	private readonly object _value;

	[Token(Token = "0x4000FD0")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _type;

	[Token(Token = "0x17000413")]
	public object Value
	{
		[Token(Token = "0x6001F9C")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000414")]
	public string Name
	{
		[Token(Token = "0x6001F9D")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001F9B")]
	[Address(RVA = "0x1046250", Offset = "0x1044850", VA = "0x181046250")]
	internal SerializationEntry(string entryName, object entryValue, Type entryType)
	{
	}
}
