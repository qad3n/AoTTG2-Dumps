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
	[Address(RVA = "0x3AB4030", Offset = "0x3AB4030", VA = "0x3AB4030")]
	internal static Task<bool> ToAsync(this bool value)
	{
		return null;
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x3AB4090", Offset = "0x3AB4090", VA = "0x3AB4090")]
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
	[Address(RVA = "0x3AB4120", Offset = "0x3AB4120", VA = "0x3AB4120")]
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
	[Address(RVA = "0x3AB4260", Offset = "0x3AB4260", VA = "0x3AB4260")]
	public static Task WriteAsync(this TextWriter writer, char value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x3AB4310", Offset = "0x3AB4310", VA = "0x3AB4310")]
	public static Task WriteAsync(this TextWriter writer, string? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x3AB43C0", Offset = "0x3AB43C0", VA = "0x3AB43C0")]
	public static Task WriteAsync(this TextWriter writer, char[] value, int start, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x3AB4480", Offset = "0x3AB4480", VA = "0x3AB4480")]
	public static Task<int> ReadAsync(this TextReader reader, char[] buffer, int index, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x3AB4560", Offset = "0x3AB4560", VA = "0x3AB4560")]
	public static bool IsCompletedSuccessfully(this Task task)
	{
		return default(bool);
	}
}
