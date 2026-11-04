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

[Token(Token = "0x200037F")]
internal class SingleCallIdentity : System.Runtime.Remoting.ServerIdentity
{
	[Token(Token = "0x6001D2D")]
	[Address(RVA = "0x19E67A0", Offset = "0x19E4DA0", VA = "0x1819E67A0")]
	public SingleCallIdentity(string objectUri, Context context, Type objectType)
	{
	}

	[Token(Token = "0x6001D2E")]
	[Address(RVA = "0x19E69A0", Offset = "0x19E4FA0", VA = "0x1819E69A0", Slot = "6")]
	public override IMessage SyncObjectProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D2F")]
	[Address(RVA = "0x19E6800", Offset = "0x19E4E00", VA = "0x1819E6800", Slot = "7")]
	public override IMessageCtrl AsyncObjectProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
