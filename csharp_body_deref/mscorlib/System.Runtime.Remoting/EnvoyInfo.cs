// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.EnvoyInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Serializable]
[Token(Token = "0x200036C")]
internal class EnvoyInfo : IEnvoyInfo
{
	[Token(Token = "0x4000E7D")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink envoySinks;

	[Token(Token = "0x1700032F")]
	public IMessageSink EnvoySinks
	{
		[Token(Token = "0x6001C88")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C87")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public EnvoyInfo(IMessageSink sinks)
	{
	}
}
