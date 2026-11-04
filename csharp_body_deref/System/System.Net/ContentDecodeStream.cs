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

[Token(Token = "0x2000314")]
internal class ContentDecodeStream : WebReadStream
{
	[Token(Token = "0x2000315")]
	internal enum Mode
	{
		[Token(Token = "0x4000BCD")]
		GZip,
		[Token(Token = "0x4000BCE")]
		Deflate
	}

	[Token(Token = "0x17000478")]
	private Stream OriginalInnerStream
	{
		[Token(Token = "0x6001547")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001546")]
	[Address(RVA = "0x27DD850", Offset = "0x27DBE50", VA = "0x1827DD850")]
	public static ContentDecodeStream Create(WebOperation operation, Stream innerStream, Mode mode)
	{
		return null;
	}

	[Token(Token = "0x6001548")]
	[Address(RVA = "0x27DCE10", Offset = "0x27DB410", VA = "0x1827DCE10")]
	private ContentDecodeStream(WebOperation operation, Stream decodeStream, Stream originalInnerStream)
	{
	}

	[Token(Token = "0x6001549")]
	[Address(RVA = "0x27D0B20", Offset = "0x27CF120", VA = "0x1827D0B20", Slot = "38")]
	protected override Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600154A")]
	[Address(RVA = "0x27DD920", Offset = "0x27DBF20", VA = "0x1827DD920", Slot = "39")]
	internal override Task FinishReading(CancellationToken cancellationToken)
	{
		return null;
	}
}
