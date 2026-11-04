// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.AsyncReadOrWriteRequest
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Mono.Net.Security;

[Token(Token = "0x200004F")]
internal abstract class AsyncReadOrWriteRequest : AsyncProtocolRequest
{
	[Token(Token = "0x17000020")]
	protected BufferOffsetSize UserBuffer
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000021")]
	protected int CurrentSize
	{
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x58AA60", Offset = "0x589060", VA = "0x18058AA60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x248F680", Offset = "0x248DC80", VA = "0x18248F680")]
	public AsyncReadOrWriteRequest(MobileAuthenticatedStream parent, bool sync, byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x248F610", Offset = "0x248DC10", VA = "0x18248F610", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
