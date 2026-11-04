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

[Token(Token = "0x20003A9")]
[System.MonoTODO("Handle domain unloading?")]
internal class CrossAppDomainSink : IMessageSink
{
	[Token(Token = "0x20003AA")]
	private struct ProcessMessageRes
	{
		[Token(Token = "0x4000F1F")]
		[FieldOffset(Offset = "0x0")]
		public byte[] arrResponse;

		[Token(Token = "0x4000F20")]
		[FieldOffset(Offset = "0x8")]
		public System.Runtime.Remoting.Messaging.CADMethodReturnMessage cadMrm;
	}

	[Token(Token = "0x4000F1C")]
	[FieldOffset(Offset = "0x0")]
	private static Hashtable s_sinks;

	[Token(Token = "0x4000F1D")]
	[FieldOffset(Offset = "0x8")]
	private static MethodInfo processMessageMethod;

	[Token(Token = "0x4000F1E")]
	[FieldOffset(Offset = "0x10")]
	private int _domainID;

	[Token(Token = "0x17000376")]
	internal int TargetDomainId
	{
		[Token(Token = "0x6001E05")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001E03")]
	[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
	internal CrossAppDomainSink(int domainID)
	{
	}

	[Token(Token = "0x6001E04")]
	[Address(RVA = "0x19F8AE0", Offset = "0x19F70E0", VA = "0x1819F8AE0")]
	internal static System.Runtime.Remoting.Channels.CrossAppDomainSink GetSink(int domainID)
	{
		return null;
	}

	[Token(Token = "0x6001E06")]
	[Address(RVA = "0x19F8DA0", Offset = "0x19F73A0", VA = "0x1819F8DA0")]
	private static ProcessMessageRes ProcessMessageInDomain(byte[] arrRequest, System.Runtime.Remoting.Messaging.CADMethodCallMessage cadMsg)
	{
		return default(ProcessMessageRes);
	}

	[Token(Token = "0x6001E07")]
	[Address(RVA = "0x19F8F60", Offset = "0x19F7560", VA = "0x1819F8F60", Slot = "6")]
	public virtual IMessage SyncProcessMessage(IMessage msgRequest)
	{
		return null;
	}

	[Token(Token = "0x6001E08")]
	[Address(RVA = "0x19F8A20", Offset = "0x19F7020", VA = "0x1819F8A20", Slot = "7")]
	public virtual IMessageCtrl AsyncProcessMessage(IMessage reqMsg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001E09")]
	[Address(RVA = "0x19F8EA0", Offset = "0x19F74A0", VA = "0x1819F8EA0")]
	public void SendAsyncMessage(object data)
	{
	}
}
