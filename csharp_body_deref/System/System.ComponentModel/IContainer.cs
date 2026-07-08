using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000256")]
public interface IContainer : IDisposable
{
	[Token(Token = "0x17000341")]
	ComponentCollection Components
	{
		[Token(Token = "0x6000EA2")]
		get;
	}

	[Token(Token = "0x6000EA0")]
	void Add(IComponent component);

	[Token(Token = "0x6000EA1")]
	void Add(IComponent component, string name);

	[Token(Token = "0x6000EA3")]
	void Remove(IComponent component);
}
