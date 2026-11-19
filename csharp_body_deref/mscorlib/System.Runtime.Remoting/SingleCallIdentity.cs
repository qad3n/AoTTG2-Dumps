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

[Token(Token = "0x2000358")]
internal class SingleCallIdentity : System.Runtime.Remoting.ServerIdentity
{
	[Token(Token = "0x6001D03")]
	[Address(RVA = "0x5376E10", Offset = "0x5375E10", VA = "0x5376E10")]
	public SingleCallIdentity(string objectUri, Context context, Type objectType)
	{
	}

	[Token(Token = "0x6001D04")]
	[Address(RVA = "0x5378400", Offset = "0x5377400", VA = "0x5378400", Slot = "6")]
	public override IMessage SyncObjectProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D05")]
	[Address(RVA = "0x5378620", Offset = "0x5377620", VA = "0x5378620", Slot = "7")]
	public override IMessageCtrl AsyncObjectProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
