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
		[Address(RVA = "0x453DE60", Offset = "0x453DE60", VA = "0x453DE60")]
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
		[Address(RVA = "0x453DE70", Offset = "0x453DE70", VA = "0x453DE70")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x453DE80", Offset = "0x453DE80", VA = "0x453DE80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x453DE90", Offset = "0x453DE90", VA = "0x453DE90")]
	public AsyncReadOrWriteRequest(MobileAuthenticatedStream parent, bool sync, byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x453DF80", Offset = "0x453DF80", VA = "0x453DF80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
