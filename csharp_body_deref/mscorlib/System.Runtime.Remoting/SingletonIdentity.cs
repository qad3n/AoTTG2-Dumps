// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.SingletonIdentity
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Remoting.Contexts;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000357")]
internal class SingletonIdentity : System.Runtime.Remoting.ServerIdentity
{
	[Token(Token = "0x6001CFF")]
	[Address(RVA = "0x5376E70", Offset = "0x5375E70", VA = "0x5376E70")]
	public SingletonIdentity(string objectUri, Context context, Type objectType)
	{
	}

	[Token(Token = "0x6001D00")]
	[Address(RVA = "0x5378030", Offset = "0x5377030", VA = "0x5378030")]
	public MarshalByRefObject GetServerObject()
	{
		return null;
	}

	[Token(Token = "0x6001D01")]
	[Address(RVA = "0x5378210", Offset = "0x5377210", VA = "0x5378210", Slot = "6")]
	public override IMessage SyncObjectProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D02")]
	[Address(RVA = "0x5378300", Offset = "0x5377300", VA = "0x5378300", Slot = "7")]
	public override IMessageCtrl AsyncObjectProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
