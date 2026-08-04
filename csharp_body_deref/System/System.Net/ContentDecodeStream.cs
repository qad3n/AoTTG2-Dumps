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
		[Address(RVA = "0x497DFA0", Offset = "0x497DFA0", VA = "0x497DFA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x497DEA0", Offset = "0x497DEA0", VA = "0x497DEA0")]
	public static ContentDecodeStream Create(WebOperation operation, Stream innerStream, Mode mode)
	{
		return null;
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x497DF70", Offset = "0x497DF70", VA = "0x497DF70")]
	private ContentDecodeStream(WebOperation operation, Stream decodeStream, Stream originalInnerStream)
	{
	}

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x497DFB0", Offset = "0x497DFB0", VA = "0x497DFB0", Slot = "38")]
	protected override Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600098A")]
	[Address(RVA = "0x497DFE0", Offset = "0x497DFE0", VA = "0x497DFE0", Slot = "39")]
	internal override Task FinishReading(CancellationToken cancellationToken)
	{
		return null;
	}
}
