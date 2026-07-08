using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200024D")]
public class ComponentCollection : ReadOnlyCollectionBase
{
	[Token(Token = "0x17000336")]
	public virtual IComponent this[string name]
	{
		[Token(Token = "0x6000E6D")]
		[Address(RVA = "0x455BEE0", Offset = "0x455BEE0", VA = "0x455BEE0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000337")]
	public virtual IComponent this[int index]
	{
		[Token(Token = "0x6000E6E")]
		[Address(RVA = "0x455C590", Offset = "0x455C590", VA = "0x455C590", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E6C")]
	[Address(RVA = "0x455BE90", Offset = "0x455BE90", VA = "0x455BE90")]
	public ComponentCollection(IComponent[] components)
	{
	}

	[Token(Token = "0x6000E6F")]
	[Address(RVA = "0x455C620", Offset = "0x455C620", VA = "0x455C620")]
	public void CopyTo(IComponent[] array, int index)
	{
	}
}
