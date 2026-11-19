// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Channels.CrossAppDomainSink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Reflection;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Channels;

[Token(Token = "0x2000382")]
[System.MonoTODO("Handle domain unloading?")]
internal class CrossAppDomainSink : IMessageSink
{
	[Token(Token = "0x2000383")]
	private struct ProcessMessageRes
	{
		[Token(Token = "0x4000E7F")]
		[FieldOffset(Offset = "0x0")]
		public byte[] arrResponse;

		[Token(Token = "0x4000E80")]
		[FieldOffset(Offset = "0x8")]
		public System.Runtime.Remoting.Messaging.CADMethodReturnMessage cadMrm;
	}

	[Token(Token = "0x4000E7C")]
	[FieldOffset(Offset = "0x0")]
	private static Hashtable s_sinks;

	[Token(Token = "0x4000E7D")]
	[FieldOffset(Offset = "0x8")]
	private static MethodInfo processMessageMethod;

	[Token(Token = "0x4000E7E")]
	[FieldOffset(Offset = "0x10")]
	private int _domainID;

	[Token(Token = "0x17000375")]
	internal int TargetDomainId
	{
		[Token(Token = "0x6001DDB")]
		[Address(RVA = "0x5389180", Offset = "0x5388180", VA = "0x5389180")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001DD9")]
	[Address(RVA = "0x5389160", Offset = "0x5388160", VA = "0x5389160")]
	internal CrossAppDomainSink(int domainID)
	{
	}

	[Token(Token = "0x6001DDA")]
	[Address(RVA = "0x5388E50", Offset = "0x5387E50", VA = "0x5388E50")]
	internal static System.Runtime.Remoting.Channels.CrossAppDomainSink GetSink(int domainID)
	{
		return null;
	}

	[Token(Token = "0x6001DDC")]
	[Address(RVA = "0x5389190", Offset = "0x5388190", VA = "0x5389190")]
	private static ProcessMessageRes ProcessMessageInDomain(byte[] arrRequest, System.Runtime.Remoting.Messaging.CADMethodCallMessage cadMsg)
	{
		return default(ProcessMessageRes);
	}

	[Token(Token = "0x6001DDD")]
	[Address(RVA = "0x5389420", Offset = "0x5388420", VA = "0x5389420", Slot = "6")]
	public virtual IMessage SyncProcessMessage(IMessage msgRequest)
	{
		return null;
	}

	[Token(Token = "0x6001DDE")]
	[Address(RVA = "0x5389D70", Offset = "0x5388D70", VA = "0x5389D70", Slot = "7")]
	public virtual IMessageCtrl AsyncProcessMessage(IMessage reqMsg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001DDF")]
	[Address(RVA = "0x5389E80", Offset = "0x5388E80", VA = "0x5389E80")]
	public void SendAsyncMessage(object data)
	{
	}
}
