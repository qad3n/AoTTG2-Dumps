using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Serializable]
[Token(Token = "0x200033D")]
internal class EnvoyInfo : IEnvoyInfo
{
	[Token(Token = "0x4000E70")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink envoySinks;

	[Token(Token = "0x1700032D")]
	public IMessageSink EnvoySinks
	{
		[Token(Token = "0x6001C19")]
		[Address(RVA = "0x4E79D30", Offset = "0x4E79D30", VA = "0x4E79D30", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C18")]
	[Address(RVA = "0x4E79D00", Offset = "0x4E79D00", VA = "0x4E79D00")]
	public EnvoyInfo(IMessageSink sinks)
	{
	}
}
