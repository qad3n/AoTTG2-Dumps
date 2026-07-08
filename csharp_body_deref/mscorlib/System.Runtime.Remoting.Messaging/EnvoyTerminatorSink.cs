using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x20003A8")]
internal class EnvoyTerminatorSink : IMessageSink
{
	[Token(Token = "0x4000F71")]
	[FieldOffset(Offset = "0x0")]
	public static System.Runtime.Remoting.Messaging.EnvoyTerminatorSink Instance;

	[Token(Token = "0x6001E59")]
	[Address(RVA = "0x4EA7280", Offset = "0x4EA7280", VA = "0x4EA7280", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001E5A")]
	[Address(RVA = "0x4EA7340", Offset = "0x4EA7340", VA = "0x4EA7340", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001E5B")]
	[Address(RVA = "0x4EA7410", Offset = "0x4EA7410", VA = "0x4EA7410")]
	public EnvoyTerminatorSink()
	{
	}
}
