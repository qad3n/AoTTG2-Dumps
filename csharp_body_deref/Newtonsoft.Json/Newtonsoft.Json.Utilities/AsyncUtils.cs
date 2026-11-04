// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.AsyncUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x2000093")]
internal static class AsyncUtils
{
	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Task<bool> False;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x8")]
	public static readonly Task<bool> True;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly Task CompletedTask;

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x1C171B0", Offset = "0x1C157B0", VA = "0x181C171B0")]
	internal static Task<bool> ToAsync(this bool value)
	{
		return null;
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x1C16EF0", Offset = "0x1C154F0", VA = "0x181C16EF0")]
	public static Task? CancelIfRequestedAsync(this CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60004DE")]
	public static Task<T?>? CancelIfRequestedAsync<T>(this CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x1C16F80", Offset = "0x1C15580", VA = "0x181C16F80")]
	public static Task FromCanceled(this CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60004E0")]
	public static Task<T> FromCanceled<T>(this CancellationToken cancellationToken) where T : notnull
	{
		return null;
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x1C173D0", Offset = "0x1C159D0", VA = "0x181C173D0")]
	public static Task WriteAsync(this TextWriter writer, char value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x1C17240", Offset = "0x1C15840", VA = "0x181C17240")]
	public static Task WriteAsync(this TextWriter writer, string? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x1C17300", Offset = "0x1C15900", VA = "0x181C17300")]
	public static Task WriteAsync(this TextWriter writer, char[] value, int start, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x1C170D0", Offset = "0x1C156D0", VA = "0x181C170D0")]
	public static Task<int> ReadAsync(this TextReader reader, char[] buffer, int index, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x1C170A0", Offset = "0x1C156A0", VA = "0x181C170A0")]
	public static bool IsCompletedSuccessfully(this Task task)
	{
		return default(bool);
	}
}
