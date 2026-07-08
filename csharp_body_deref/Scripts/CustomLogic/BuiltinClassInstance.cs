using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000434")]
internal abstract class BuiltinClassInstance : CustomLogicClassInstance
{
	[Token(Token = "0x40011B1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly CLMethodBinding<BuiltinClassInstance> Init;

	[Token(Token = "0x170008B1")]
	public override bool LookupBaseClassForVariables
	{
		[Token(Token = "0x6002CF9")]
		[Address(RVA = "0x3E48F20", Offset = "0x3E48F20", VA = "0x3E48F20", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008B2")]
	public override string ClassName
	{
		[Token(Token = "0x6002CFA")]
		[Address(RVA = "0x3E48F40", Offset = "0x3E48F40", VA = "0x3E48F40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170008B3")]
	public virtual bool IsAbstract
	{
		[Token(Token = "0x6002CFB")]
		[Address(RVA = "0x3E48F80", Offset = "0x3E48F80", VA = "0x3E48F80", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008B4")]
	public virtual bool IsStatic
	{
		[Token(Token = "0x6002CFC")]
		[Address(RVA = "0x3E48FC0", Offset = "0x3E48FC0", VA = "0x3E48FC0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008B5")]
	public virtual bool InheritBaseMembers
	{
		[Token(Token = "0x6002CFD")]
		[Address(RVA = "0x3E49000", Offset = "0x3E49000", VA = "0x3E49000", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002CF8")]
	[Address(RVA = "0x3E36C90", Offset = "0x3E36C90", VA = "0x3E36C90")]
	protected BuiltinClassInstance()
	{
	}
}
