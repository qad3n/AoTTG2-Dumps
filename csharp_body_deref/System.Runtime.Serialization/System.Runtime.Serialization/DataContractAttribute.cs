using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x2000002")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum, Inherited = false, AllowMultiple = false)]
public sealed class DataContractAttribute : Attribute
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x10")]
	private bool isReference;

	[Token(Token = "0x17000001")]
	public bool IsReference
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x433ABA0", Offset = "0x433ABA0", VA = "0x433ABA0")]
		get
		{
			return default(bool);
		}
	}
}
