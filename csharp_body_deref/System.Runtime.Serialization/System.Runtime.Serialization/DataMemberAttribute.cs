using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x2000003")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, Inherited = false, AllowMultiple = false)]
public sealed class DataMemberAttribute : Attribute
{
	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x18")]
	private int order;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x1C")]
	private bool isRequired;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x1D")]
	private bool emitDefaultValue;

	[Token(Token = "0x17000002")]
	public string Name
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x433ABB0", Offset = "0x433ABB0", VA = "0x433ABB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public int Order
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x433ABC0", Offset = "0x433ABC0", VA = "0x433ABC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000004")]
	public bool IsRequired
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x433ABD0", Offset = "0x433ABD0", VA = "0x433ABD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000005")]
	public bool EmitDefaultValue
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x433ABE0", Offset = "0x433ABE0", VA = "0x433ABE0")]
		get
		{
			return default(bool);
		}
	}
}
