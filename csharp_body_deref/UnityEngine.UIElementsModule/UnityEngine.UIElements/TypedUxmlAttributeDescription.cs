using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200041E")]
public abstract class TypedUxmlAttributeDescription<T> : UxmlAttributeDescription
{
	[Token(Token = "0x17000718")]
	public T defaultValue
	{
		[Token(Token = "0x6001A8F")]
		[CompilerGenerated]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6001A90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001A8E")]
	public abstract T GetValueFromBag(IUxmlAttributes bag, CreationContext cc);

	[Token(Token = "0x6001A91")]
	protected TypedUxmlAttributeDescription()
	{
	}
}
