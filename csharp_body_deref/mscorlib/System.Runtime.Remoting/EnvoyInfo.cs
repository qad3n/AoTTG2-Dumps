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
		[Address(RVA = "0x3B5F850", Offset = "0x3B5F850", VA = "0x3B5F850", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C18")]
	[Address(RVA = "0x3B5F820", Offset = "0x3B5F820", VA = "0x3B5F820")]
	public EnvoyInfo(IMessageSink sinks)
	{
	}
}
