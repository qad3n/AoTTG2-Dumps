// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.SingleCallIdentity
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Remoting.Contexts;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000350")]
internal class SingleCallIdentity : System.Runtime.Remoting.ServerIdentity
{
	[Token(Token = "0x6001CBE")]
	[Address(RVA = "0x3B6E3C0", Offset = "0x3B6E3C0", VA = "0x3B6E3C0")]
	public SingleCallIdentity(string objectUri, Context context, Type objectType)
	{
	}

	[Token(Token = "0x6001CBF")]
	[Address(RVA = "0x3B6FA70", Offset = "0x3B6FA70", VA = "0x3B6FA70", Slot = "6")]
	public override IMessage SyncObjectProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001CC0")]
	[Address(RVA = "0x3B6FC90", Offset = "0x3B6FC90", VA = "0x3B6FC90", Slot = "7")]
	public override IMessageCtrl AsyncObjectProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
