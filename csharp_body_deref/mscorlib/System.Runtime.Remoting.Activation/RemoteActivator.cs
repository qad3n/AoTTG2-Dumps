using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Token(Token = "0x200038E")]
internal class RemoteActivator : MarshalByRefObject, IActivator
{
	[Token(Token = "0x17000387")]
	public IActivator NextActivator
	{
		[Token(Token = "0x6001DCB")]
		[Address(RVA = "0x4E9E6F0", Offset = "0x4E9E6F0", VA = "0x4E9E6F0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DCA")]
	[Address(RVA = "0x4E9E240", Offset = "0x4E9E240", VA = "0x4E9E240", Slot = "7")]
	public IConstructionReturnMessage Activate(IConstructionCallMessage msg)
	{
		return null;
	}
}
