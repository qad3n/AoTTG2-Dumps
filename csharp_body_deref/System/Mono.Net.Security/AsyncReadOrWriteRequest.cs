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
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x4524050", Offset = "0x4524050", VA = "0x4524050")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000021")]
	protected int CurrentSize
	{
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x4524060", Offset = "0x4524060", VA = "0x4524060")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x4524070", Offset = "0x4524070", VA = "0x4524070")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x4524080", Offset = "0x4524080", VA = "0x4524080")]
	public AsyncReadOrWriteRequest(MobileAuthenticatedStream parent, bool sync, byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x4524170", Offset = "0x4524170", VA = "0x4524170", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
