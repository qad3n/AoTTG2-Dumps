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
		[Address(RVA = "0x4EAE0B0", Offset = "0x4EAE0B0", VA = "0x4EAE0B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000412")]
	public string Name
	{
		[Token(Token = "0x6001F2E")]
		[Address(RVA = "0x4EAE0C0", Offset = "0x4EAE0C0", VA = "0x4EAE0C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001F2C")]
	[Address(RVA = "0x4EAE070", Offset = "0x4EAE070", VA = "0x4EAE070")]
	internal SerializationEntry(string entryName, object entryValue, Type entryType)
	{
	}
}
