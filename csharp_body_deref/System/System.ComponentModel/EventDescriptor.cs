using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200028E")]
public abstract class EventDescriptor : MemberDescriptor
{
	[Token(Token = "0x17000391")]
	public abstract Type ComponentType
	{
		[Token(Token = "0x6001015")]
		get;
	}

	[Token(Token = "0x17000392")]
	public abstract Type EventType
	{
		[Token(Token = "0x6001016")]
		get;
	}

	[Token(Token = "0x17000393")]
	public abstract bool IsMulticast
	{
		[Token(Token = "0x6001017")]
		get;
	}

	[Token(Token = "0x6001012")]
	[Address(RVA = "0x456CF70", Offset = "0x456CF70", VA = "0x456CF70")]
	protected EventDescriptor(string name, Attribute[] attrs)
	{
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x456CF80", Offset = "0x456CF80", VA = "0x456CF80")]
	protected EventDescriptor(MemberDescriptor descr)
	{
	}

	[Token(Token = "0x6001014")]
	[Address(RVA = "0x456CF90", Offset = "0x456CF90", VA = "0x456CF90")]
	protected EventDescriptor(MemberDescriptor descr, Attribute[] attrs)
	{
	}

	[Token(Token = "0x6001018")]
	public abstract void AddEventHandler(object component, Delegate value);

	[Token(Token = "0x6001019")]
	public abstract void RemoveEventHandler(object component, Delegate value);
}
