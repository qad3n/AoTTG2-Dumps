// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.EventDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000199")]
public abstract class EventDescriptor : MemberDescriptor
{
	[Token(Token = "0x17000200")]
	public abstract Type ComponentType
	{
		[Token(Token = "0x6000A5D")]
		get;
	}

	[Token(Token = "0x17000201")]
	public abstract Type EventType
	{
		[Token(Token = "0x6000A5E")]
		get;
	}

	[Token(Token = "0x17000202")]
	public abstract bool IsMulticast
	{
		[Token(Token = "0x6000A5F")]
		get;
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x289DB30", Offset = "0x289C130", VA = "0x18289DB30")]
	protected EventDescriptor(string name, Attribute[] attrs)
	{
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x289DB50", Offset = "0x289C150", VA = "0x18289DB50")]
	protected EventDescriptor(MemberDescriptor descr)
	{
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x289DB40", Offset = "0x289C140", VA = "0x18289DB40")]
	protected EventDescriptor(MemberDescriptor descr, Attribute[] attrs)
	{
	}

	[Token(Token = "0x6000A60")]
	public abstract void AddEventHandler(object component, Delegate value);

	[Token(Token = "0x6000A61")]
	public abstract void RemoveEventHandler(object component, Delegate value);
}
