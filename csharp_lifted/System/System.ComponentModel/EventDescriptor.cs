// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.EventDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200015A")]
public abstract class EventDescriptor : MemberDescriptor
{
	[Token(Token = "0x170001D1")]
	public abstract Type ComponentType
	{
		[Token(Token = "0x600089D")]
		get;
	}

	[Token(Token = "0x170001D2")]
	public abstract Type EventType
	{
		[Token(Token = "0x600089E")]
		get;
	}

	[Token(Token = "0x170001D3")]
	public abstract bool IsMulticast
	{
		[Token(Token = "0x600089F")]
		get;
	}

	[Token(Token = "0x600089A")]
	[Address(RVA = "0x6232170", Offset = "0x6231170", VA = "0x6232170")]
	protected EventDescriptor(string name, Attribute[] attrs)
	{
	}

	[Token(Token = "0x600089B")]
	[Address(RVA = "0x6232180", Offset = "0x6231180", VA = "0x6232180")]
	protected EventDescriptor(MemberDescriptor descr)
	{
	}

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x6232190", Offset = "0x6231190", VA = "0x6232190")]
	protected EventDescriptor(MemberDescriptor descr, Attribute[] attrs)
	{
	}

	[Token(Token = "0x60008A0")]
	public abstract void AddEventHandler(object component, Delegate value);

	[Token(Token = "0x60008A1")]
	public abstract void RemoveEventHandler(object component, Delegate value);
}
