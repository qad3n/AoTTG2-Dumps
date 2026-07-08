using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002A4")]
public interface ITypeDescriptorContext : IServiceProvider
{
	[Token(Token = "0x170003BB")]
	IContainer Container
	{
		[Token(Token = "0x60010AC")]
		get;
	}

	[Token(Token = "0x170003BC")]
	object Instance
	{
		[Token(Token = "0x60010AD")]
		get;
	}

	[Token(Token = "0x170003BD")]
	PropertyDescriptor PropertyDescriptor
	{
		[Token(Token = "0x60010AE")]
		get;
	}

	[Token(Token = "0x60010AF")]
	bool OnComponentChanging();

	[Token(Token = "0x60010B0")]
	void OnComponentChanged();
}
