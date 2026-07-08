using Il2CppDummyDll;

namespace System.ComponentModel.Design;

[Token(Token = "0x2000329")]
public interface IDesignerHost : IServiceProvider
{
	[Token(Token = "0x17000492")]
	IComponent RootComponent
	{
		[Token(Token = "0x6001514")]
		get;
	}

	[Token(Token = "0x6001515")]
	IDesigner GetDesigner(IComponent component);
}
