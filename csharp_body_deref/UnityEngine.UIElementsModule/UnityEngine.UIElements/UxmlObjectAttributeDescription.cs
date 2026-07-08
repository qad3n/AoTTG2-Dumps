using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000434")]
internal class UxmlObjectAttributeDescription<T> where T : new()
{
	[Token(Token = "0x17000719")]
	public T defaultValue
	{
		[Token(Token = "0x6001AD8")]
		[CompilerGenerated]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x6001AD9")]
	public virtual T GetValueFromBag(IUxmlAttributes bag, CreationContext cc)
	{
		return (T)null;
	}

	[Token(Token = "0x6001ADA")]
	public UxmlObjectAttributeDescription()
	{
	}
}
