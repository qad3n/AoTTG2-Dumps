// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.ContentDecodeStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002D5")]
internal class ContentDecodeStream : WebReadStream
{
	[Token(Token = "0x20002D6")]
	internal enum Mode
	{
		[Token(Token = "0x4000AFE")]
		GZip,
		[Token(Token = "0x4000AFF")]
		Deflate
	}

	[Token(Token = "0x17000449")]
	private Stream OriginalInnerStream
	{
		[Token(Token = "0x6001389")]
		[Address(RVA = "0x61807B0", Offset = "0x617F7B0", VA = "0x61807B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001388")]
	[Address(RVA = "0x61806B0", Offset = "0x617F6B0", VA = "0x61806B0")]
	public static ContentDecodeStream Create(WebOperation operation, Stream innerStream, Mode mode)
	{
		return null;
	}

	[Token(Token = "0x600138A")]
	[Address(RVA = "0x6180780", Offset = "0x617F780", VA = "0x6180780")]
	private ContentDecodeStream(WebOperation operation, Stream decodeStream, Stream originalInnerStream)
	{
	}

	[Token(Token = "0x600138B")]
	[Address(RVA = "0x61807C0", Offset = "0x617F7C0", VA = "0x61807C0", Slot = "39")]
	protected override Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600138C")]
	[Address(RVA = "0x61807F0", Offset = "0x617F7F0", VA = "0x61807F0", Slot = "40")]
	internal override Task FinishReading(CancellationToken cancellationToken)
	{
		return null;
	}
}
