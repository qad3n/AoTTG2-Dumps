using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Serializable]
[Token(Token = "0x2000388")]
internal class ConstructionLevelActivator : IActivator
{
	[Token(Token = "0x1700037F")]
	public IActivator NextActivator
	{
		[Token(Token = "0x6001DB9")]
		[Address(RVA = "0x4E9D8D0", Offset = "0x4E9D8D0", VA = "0x4E9D8D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DBA")]
	[Address(RVA = "0x4E9D8E0", Offset = "0x4E9D8E0", VA = "0x4E9D8E0", Slot = "5")]
	public IConstructionReturnMessage Activate(IConstructionCallMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001DBB")]
	[Address(RVA = "0x4E9CB90", Offset = "0x4E9CB90", VA = "0x4E9CB90")]
	public ConstructionLevelActivator()
	{
	}
}
