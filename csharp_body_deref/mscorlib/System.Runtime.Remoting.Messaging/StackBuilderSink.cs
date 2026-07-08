using System.Runtime.Remoting.Proxies;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003C3")]
internal class StackBuilderSink : IMessageSink
{
	[Token(Token = "0x4000FC1")]
	[FieldOffset(Offset = "0x10")]
	private MarshalByRefObject _target;

	[Token(Token = "0x4000FC2")]
	[FieldOffset(Offset = "0x18")]
	private RealProxy _rp;

	[Token(Token = "0x6001F14")]
	[Address(RVA = "0x4E95580", Offset = "0x4E95580", VA = "0x4E95580")]
	public StackBuilderSink(MarshalByRefObject obj, bool forceInternalExecute)
	{
	}

	[Token(Token = "0x6001F15")]
	[Address(RVA = "0x4EAD5C0", Offset = "0x4EAD5C0", VA = "0x4EAD5C0", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001F16")]
	[Address(RVA = "0x4EADA90", Offset = "0x4EADA90", VA = "0x4EADA90", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001F17")]
	[Address(RVA = "0x4EADBC0", Offset = "0x4EADBC0", VA = "0x4EADBC0")]
	private void ExecuteAsyncMessage(object ob)
	{
	}

	[Token(Token = "0x6001F18")]
	[Address(RVA = "0x4EAD680", Offset = "0x4EAD680", VA = "0x4EAD680")]
	private void CheckParameters(IMessage msg)
	{
	}
}
