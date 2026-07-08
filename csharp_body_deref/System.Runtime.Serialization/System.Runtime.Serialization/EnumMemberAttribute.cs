using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x2000004")]
[AttributeUsage(AttributeTargets.Field, Inherited = false, AllowMultiple = false)]
public sealed class EnumMemberAttribute : Attribute
{
	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x10")]
	private string value;

	[Token(Token = "0x17000006")]
	public string Value
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x433ABF0", Offset = "0x433ABF0", VA = "0x433ABF0")]
		get
		{
			return null;
		}
	}
}
