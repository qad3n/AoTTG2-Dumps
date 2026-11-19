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
[Token(Token = "0x2000345")]
internal class EnvoyInfo : IEnvoyInfo
{
	[Token(Token = "0x4000DDD")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink envoySinks;

	[Token(Token = "0x1700032E")]
	public IMessageSink EnvoySinks
	{
		[Token(Token = "0x6001C5E")]
		[Address(RVA = "0x5369040", Offset = "0x5368040", VA = "0x5369040", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C5D")]
	[Address(RVA = "0x5369010", Offset = "0x5368010", VA = "0x5369010")]
	public EnvoyInfo(IMessageSink sinks)
	{
	}
}
