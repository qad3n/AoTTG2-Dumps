using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200045C")]
internal class UserClassInstance : CustomLogicClassInstance
{
	[Token(Token = "0x4001324")]
	[FieldOffset(Offset = "0x30")]
	private readonly string _className;

	[Token(Token = "0x170008E9")]
	public override string ClassName
	{
		[Token(Token = "0x6002EDB")]
		[Address(RVA = "0x3E6E730", Offset = "0x3E6E730", VA = "0x3E6E730", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002EDA")]
	[Address(RVA = "0x3E67020", Offset = "0x3E67020", VA = "0x3E67020")]
	public UserClassInstance(string className)
	{
	}
}
