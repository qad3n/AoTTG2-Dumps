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

[Token(Token = "0x200037A")]
[System.MonoTODO("Handle domain unloading?")]
internal class CrossAppDomainSink : IMessageSink
{
	[Token(Token = "0x200037B")]
	private struct ProcessMessageRes
	{
		[Token(Token = "0x4000F12")]
		[FieldOffset(Offset = "0x0")]
		public byte[] arrResponse;

		[Token(Token = "0x4000F13")]
		[FieldOffset(Offset = "0x8")]
		public System.Runtime.Remoting.Messaging.CADMethodReturnMessage cadMrm;
	}

	[Token(Token = "0x4000F0F")]
	[FieldOffset(Offset = "0x0")]
	private static Hashtable s_sinks;

	[Token(Token = "0x4000F10")]
	[FieldOffset(Offset = "0x8")]
	private static MethodInfo processMessageMethod;

	[Token(Token = "0x4000F11")]
	[FieldOffset(Offset = "0x10")]
	private int _domainID;

	[Token(Token = "0x17000374")]
	internal int TargetDomainId
	{
		[Token(Token = "0x6001D96")]
		[Address(RVA = "0x3B81380", Offset = "0x3B81380", VA = "0x3B81380")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001D94")]
	[Address(RVA = "0x3B81360", Offset = "0x3B81360", VA = "0x3B81360")]
	internal CrossAppDomainSink(int domainID)
	{
	}

	[Token(Token = "0x6001D95")]
	[Address(RVA = "0x3B81010", Offset = "0x3B81010", VA = "0x3B81010")]
	internal static System.Runtime.Remoting.Channels.CrossAppDomainSink GetSink(int domainID)
	{
		return null;
	}

	[Token(Token = "0x6001D97")]
	[Address(RVA = "0x3B81390", Offset = "0x3B81390", VA = "0x3B81390")]
	private static ProcessMessageRes ProcessMessageInDomain(byte[] arrRequest, System.Runtime.Remoting.Messaging.CADMethodCallMessage cadMsg)
	{
		return default(ProcessMessageRes);
	}

	[Token(Token = "0x6001D98")]
	[Address(RVA = "0x3B81660", Offset = "0x3B81660", VA = "0x3B81660", Slot = "6")]
	public virtual IMessage SyncProcessMessage(IMessage msgRequest)
	{
		return null;
	}

	[Token(Token = "0x6001D99")]
	[Address(RVA = "0x3B81F80", Offset = "0x3B81F80", VA = "0x3B81F80", Slot = "7")]
	public virtual IMessageCtrl AsyncProcessMessage(IMessage reqMsg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001D9A")]
	[Address(RVA = "0x3B82090", Offset = "0x3B82090", VA = "0x3B82090")]
	public void SendAsyncMessage(object data)
	{
	}
}
