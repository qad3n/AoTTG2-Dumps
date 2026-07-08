using System.IO;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200018C")]
internal class ContentDecodeStream : WebReadStream
{
	[Token(Token = "0x200018D")]
	internal enum Mode
	{
		[Token(Token = "0x40007B7")]
		GZip,
		[Token(Token = "0x40007B8")]
		Deflate
	}

	[Token(Token = "0x17000223")]
	private Stream OriginalInnerStream
	{
		[Token(Token = "0x6000987")]
		[Address(RVA = "0x4658EA0", Offset = "0x4658EA0", VA = "0x4658EA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x4658DA0", Offset = "0x4658DA0", VA = "0x4658DA0")]
	public static ContentDecodeStream Create(WebOperation operation, Stream innerStream, Mode mode)
	{
		return null;
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x4658E70", Offset = "0x4658E70", VA = "0x4658E70")]
	private ContentDecodeStream(WebOperation operation, Stream decodeStream, Stream originalInnerStream)
	{
	}

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x4658EB0", Offset = "0x4658EB0", VA = "0x4658EB0", Slot = "38")]
	protected override Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600098A")]
	[Address(RVA = "0x4658EE0", Offset = "0x4658EE0", VA = "0x4658EE0", Slot = "39")]
	internal override Task FinishReading(CancellationToken cancellationToken)
	{
		return null;
	}
}
