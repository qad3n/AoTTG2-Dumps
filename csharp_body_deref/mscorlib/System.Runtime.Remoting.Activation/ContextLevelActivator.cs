using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Serializable]
[Token(Token = "0x2000389")]
internal class ContextLevelActivator : IActivator
{
	[Token(Token = "0x4000F1C")]
	[FieldOffset(Offset = "0x10")]
	private IActivator m_NextActivator;

	[Token(Token = "0x17000380")]
	public IActivator NextActivator
	{
		[Token(Token = "0x6001DBD")]
		[Address(RVA = "0x4E9D9F0", Offset = "0x4E9D9F0", VA = "0x4E9D9F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DBC")]
	[Address(RVA = "0x4E9CDE0", Offset = "0x4E9CDE0", VA = "0x4E9CDE0")]
	public ContextLevelActivator(IActivator next)
	{
	}

	[Token(Token = "0x6001DBE")]
	[Address(RVA = "0x4E9DA00", Offset = "0x4E9DA00", VA = "0x4E9DA00", Slot = "5")]
	public IConstructionReturnMessage Activate(IConstructionCallMessage ctorCall)
	{
		return null;
	}
}
