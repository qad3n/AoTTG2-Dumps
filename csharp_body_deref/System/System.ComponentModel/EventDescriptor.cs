// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.EventDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4892070", Offset = "0x4892070", VA = "0x4892070")]
	protected EventDescriptor(string name, Attribute[] attrs)
	{
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x4892080", Offset = "0x4892080", VA = "0x4892080")]
	protected EventDescriptor(MemberDescriptor descr)
	{
	}

	[Token(Token = "0x6001014")]
	[Address(RVA = "0x4892090", Offset = "0x4892090", VA = "0x4892090")]
	protected EventDescriptor(MemberDescriptor descr, Attribute[] attrs)
	{
	}

	[Token(Token = "0x6001018")]
	public abstract void AddEventHandler(object component, Delegate value);

	[Token(Token = "0x6001019")]
	public abstract void RemoveEventHandler(object component, Delegate value);
}
