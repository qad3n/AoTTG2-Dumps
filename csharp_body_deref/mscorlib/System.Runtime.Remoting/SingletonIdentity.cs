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

[Token(Token = "0x200034F")]
internal class SingletonIdentity : System.Runtime.Remoting.ServerIdentity
{
	[Token(Token = "0x6001CBA")]
	[Address(RVA = "0x3B6E420", Offset = "0x3B6E420", VA = "0x3B6E420")]
	public SingletonIdentity(string objectUri, Context context, Type objectType)
	{
	}

	[Token(Token = "0x6001CBB")]
	[Address(RVA = "0x3B6F690", Offset = "0x3B6F690", VA = "0x3B6F690")]
	public MarshalByRefObject GetServerObject()
	{
		return null;
	}

	[Token(Token = "0x6001CBC")]
	[Address(RVA = "0x3B6F880", Offset = "0x3B6F880", VA = "0x3B6F880", Slot = "6")]
	public override IMessage SyncObjectProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001CBD")]
	[Address(RVA = "0x3B6F970", Offset = "0x3B6F970", VA = "0x3B6F970", Slot = "7")]
	public override IMessageCtrl AsyncObjectProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
