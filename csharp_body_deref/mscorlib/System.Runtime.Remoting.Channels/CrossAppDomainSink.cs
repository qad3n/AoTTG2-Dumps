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
		[Address(RVA = "0x4E9B860", Offset = "0x4E9B860", VA = "0x4E9B860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001D94")]
	[Address(RVA = "0x4E9B840", Offset = "0x4E9B840", VA = "0x4E9B840")]
	internal CrossAppDomainSink(int domainID)
	{
	}

	[Token(Token = "0x6001D95")]
	[Address(RVA = "0x4E9B4F0", Offset = "0x4E9B4F0", VA = "0x4E9B4F0")]
	internal static System.Runtime.Remoting.Channels.CrossAppDomainSink GetSink(int domainID)
	{
		return null;
	}

	[Token(Token = "0x6001D97")]
	[Address(RVA = "0x4E9B870", Offset = "0x4E9B870", VA = "0x4E9B870")]
	private static ProcessMessageRes ProcessMessageInDomain(byte[] arrRequest, System.Runtime.Remoting.Messaging.CADMethodCallMessage cadMsg)
	{
		return default(ProcessMessageRes);
	}

	[Token(Token = "0x6001D98")]
	[Address(RVA = "0x4E9BB40", Offset = "0x4E9BB40", VA = "0x4E9BB40", Slot = "6")]
	public virtual IMessage SyncProcessMessage(IMessage msgRequest)
	{
		return null;
	}

	[Token(Token = "0x6001D99")]
	[Address(RVA = "0x4E9C460", Offset = "0x4E9C460", VA = "0x4E9C460", Slot = "7")]
	public virtual IMessageCtrl AsyncProcessMessage(IMessage reqMsg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001D9A")]
	[Address(RVA = "0x4E9C570", Offset = "0x4E9C570", VA = "0x4E9C570")]
	public void SendAsyncMessage(object data)
	{
	}
}
