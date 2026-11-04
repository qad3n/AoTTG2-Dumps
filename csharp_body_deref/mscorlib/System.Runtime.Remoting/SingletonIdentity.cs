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

[Token(Token = "0x200037E")]
internal class SingletonIdentity : System.Runtime.Remoting.ServerIdentity
{
	[Token(Token = "0x6001D29")]
	[Address(RVA = "0x19E67A0", Offset = "0x19E4DA0", VA = "0x1819E67A0")]
	public SingletonIdentity(string objectUri, Context context, Type objectType)
	{
	}

	[Token(Token = "0x6001D2A")]
	[Address(RVA = "0x19E6BD0", Offset = "0x19E51D0", VA = "0x1819E6BD0")]
	public MarshalByRefObject GetServerObject()
	{
		return null;
	}

	[Token(Token = "0x6001D2B")]
	[Address(RVA = "0x19E6CF0", Offset = "0x19E52F0", VA = "0x1819E6CF0", Slot = "6")]
	public override IMessage SyncObjectProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D2C")]
	[Address(RVA = "0x19E6B20", Offset = "0x19E5120", VA = "0x1819E6B20", Slot = "7")]
	public override IMessageCtrl AsyncObjectProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
