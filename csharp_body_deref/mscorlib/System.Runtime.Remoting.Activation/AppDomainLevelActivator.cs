using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Token(Token = "0x2000387")]
internal class AppDomainLevelActivator : IActivator
{
	[Token(Token = "0x4000F1A")]
	[FieldOffset(Offset = "0x10")]
	private string _activationUrl;

	[Token(Token = "0x4000F1B")]
	[FieldOffset(Offset = "0x18")]
	private IActivator _next;

	[Token(Token = "0x1700037E")]
	public IActivator NextActivator
	{
		[Token(Token = "0x6001DB7")]
		[Address(RVA = "0x4E9D3A0", Offset = "0x4E9D3A0", VA = "0x4E9D3A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DB6")]
	[Address(RVA = "0x4E9CDA0", Offset = "0x4E9CDA0", VA = "0x4E9CDA0")]
	public AppDomainLevelActivator(string activationUrl, IActivator next)
	{
	}

	[Token(Token = "0x6001DB8")]
	[Address(RVA = "0x4E9D3B0", Offset = "0x4E9D3B0", VA = "0x4E9D3B0", Slot = "5")]
	public IConstructionReturnMessage Activate(IConstructionCallMessage ctorCall)
	{
		return null;
	}
}
