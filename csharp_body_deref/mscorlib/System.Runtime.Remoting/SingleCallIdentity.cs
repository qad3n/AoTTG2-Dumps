using System.Runtime.Remoting.Contexts;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000350")]
internal class SingleCallIdentity : System.Runtime.Remoting.ServerIdentity
{
	[Token(Token = "0x6001CBE")]
	[Address(RVA = "0x4E888A0", Offset = "0x4E888A0", VA = "0x4E888A0")]
	public SingleCallIdentity(string objectUri, Context context, Type objectType)
	{
	}

	[Token(Token = "0x6001CBF")]
	[Address(RVA = "0x4E89F50", Offset = "0x4E89F50", VA = "0x4E89F50", Slot = "6")]
	public override IMessage SyncObjectProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001CC0")]
	[Address(RVA = "0x4E8A170", Offset = "0x4E8A170", VA = "0x4E8A170", Slot = "7")]
	public override IMessageCtrl AsyncObjectProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
