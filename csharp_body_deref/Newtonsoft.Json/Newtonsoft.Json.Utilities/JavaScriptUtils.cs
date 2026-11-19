// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.JavaScriptUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000D0")]
internal static class JavaScriptUtils
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000D1")]
	[CompilerGenerated]
	private struct _003CWriteCharAsync_003Ed__14 : IAsyncStateMachine
	{
		[Token(Token = "0x4000485")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000486")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000487")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Task task;

		[Token(Token = "0x4000488")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public TextWriter writer;

		[Token(Token = "0x4000489")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public char c;

		[Token(Token = "0x400048A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400048B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000655")]
		[Address(RVA = "0x55B7A20", Offset = "0x55B6A20", VA = "0x55B7A20", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000656")]
		[Address(RVA = "0x55B7D00", Offset = "0x55B6D00", VA = "0x55B7D00", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000D2")]
	[CompilerGenerated]
	private struct _003CWriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_003Ed__16 : IAsyncStateMachine
	{
		[Token(Token = "0x400048C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400048D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400048E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public char[] writeBuffer;

		[Token(Token = "0x400048F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int lastWritePosition;

		[Token(Token = "0x4000490")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public JsonTextWriter client;

		[Token(Token = "0x4000491")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public string s;

		[Token(Token = "0x4000492")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public TextWriter writer;

		[Token(Token = "0x4000493")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000494")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public bool[] charEscapeFlags;

		[Token(Token = "0x4000495")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public StringEscapeHandling stringEscapeHandling;

		[Token(Token = "0x4000496")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
		private bool _003CisEscapedUnicodeText_003E5__2;

		[Token(Token = "0x4000497")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private string _003CescapedValue_003E5__3;

		[Token(Token = "0x4000498")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000499")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private int _003Ci_003E5__4;

		[Token(Token = "0x6000657")]
		[Address(RVA = "0x55B7D60", Offset = "0x55B6D60", VA = "0x55B7D60", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000658")]
		[Address(RVA = "0x55B87B0", Offset = "0x55B77B0", VA = "0x55B87B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000D3")]
	[CompilerGenerated]
	private struct _003CWriteEscapedJavaScriptStringWithDelimitersAsync_003Ed__13 : IAsyncStateMachine
	{
		[Token(Token = "0x400049A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400049B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400049C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Task task;

		[Token(Token = "0x400049D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string s;

		[Token(Token = "0x400049E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public TextWriter writer;

		[Token(Token = "0x400049F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool[] charEscapeFlags;

		[Token(Token = "0x40004A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public StringEscapeHandling stringEscapeHandling;

		[Token(Token = "0x40004A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public JsonTextWriter client;

		[Token(Token = "0x40004A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public char[] writeBuffer;

		[Token(Token = "0x40004A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40004A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public char delimiter;

		[Token(Token = "0x40004A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000659")]
		[Address(RVA = "0x55B8810", Offset = "0x55B7810", VA = "0x55B8810", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600065A")]
		[Address(RVA = "0x55B8C20", Offset = "0x55B7C20", VA = "0x55B8C20", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000480")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly bool[] SingleQuoteCharEscapeFlags;

	[Token(Token = "0x4000481")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static readonly bool[] DoubleQuoteCharEscapeFlags;

	[Token(Token = "0x4000482")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static readonly bool[] HtmlCharEscapeFlags;

	[Token(Token = "0x4000483")]
	private const int UnicodeTextLength = 6;

	[Token(Token = "0x4000484")]
	private const string EscapedUnicodeText = "!";

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x55B5160", Offset = "0x55B4160", VA = "0x55B5160")]
	static JavaScriptUtils()
	{
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x55B5DF0", Offset = "0x55B4DF0", VA = "0x55B5DF0")]
	public static bool[] GetCharEscapeFlags(StringEscapeHandling stringEscapeHandling, char quoteChar)
	{
		return null;
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x55B5E90", Offset = "0x55B4E90", VA = "0x55B5E90")]
	public static bool ShouldEscapeJavaScriptString(string? s, bool[] charEscapeFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x55B5F00", Offset = "0x55B4F00", VA = "0x55B5F00")]
	public static void WriteEscapedJavaScriptString(TextWriter writer, string? s, char delimiter, bool appendDelimiters, bool[] charEscapeFlags, StringEscapeHandling stringEscapeHandling, IArrayPool<char>? bufferPool, ref char[]? writeBuffer)
	{
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x55B6730", Offset = "0x55B5730", VA = "0x55B6730")]
	public static string ToEscapedJavaScriptString(string? value, char delimiter, bool appendDelimiters, StringEscapeHandling stringEscapeHandling)
	{
		return null;
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x55B6630", Offset = "0x55B5630", VA = "0x55B6630")]
	private static int FirstCharToEscape(string s, bool[] charEscapeFlags, StringEscapeHandling stringEscapeHandling)
	{
		return default(int);
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x55B69D0", Offset = "0x55B59D0", VA = "0x55B69D0")]
	public static Task WriteEscapedJavaScriptStringAsync(TextWriter writer, string s, char delimiter, bool appendDelimiters, bool[] charEscapeFlags, StringEscapeHandling stringEscapeHandling, JsonTextWriter client, char[] writeBuffer, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x55B6B90", Offset = "0x55B5B90", VA = "0x55B6B90")]
	private static Task WriteEscapedJavaScriptStringWithDelimitersAsync(TextWriter writer, string s, char delimiter, bool[] charEscapeFlags, StringEscapeHandling stringEscapeHandling, JsonTextWriter client, char[] writeBuffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x55B6E80", Offset = "0x55B5E80", VA = "0x55B6E80")]
	[AsyncStateMachine(typeof(_003CWriteEscapedJavaScriptStringWithDelimitersAsync_003Ed__13))]
	private static Task WriteEscapedJavaScriptStringWithDelimitersAsync(Task task, TextWriter writer, string s, char delimiter, bool[] charEscapeFlags, StringEscapeHandling stringEscapeHandling, JsonTextWriter client, char[] writeBuffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x55B7030", Offset = "0x55B6030", VA = "0x55B7030")]
	[AsyncStateMachine(typeof(_003CWriteCharAsync_003Ed__14))]
	public static Task WriteCharAsync(Task task, TextWriter writer, char c, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x55B6D80", Offset = "0x55B5D80", VA = "0x55B6D80")]
	private static Task WriteEscapedJavaScriptStringWithoutDelimitersAsync(TextWriter writer, string s, bool[] charEscapeFlags, StringEscapeHandling stringEscapeHandling, JsonTextWriter client, char[] writeBuffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x55B7140", Offset = "0x55B6140", VA = "0x55B7140")]
	[AsyncStateMachine(typeof(_003CWriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_003Ed__16))]
	private static Task WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync(TextWriter writer, string s, int lastWritePosition, bool[] charEscapeFlags, StringEscapeHandling stringEscapeHandling, JsonTextWriter client, char[] writeBuffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x55B72D0", Offset = "0x55B62D0", VA = "0x55B72D0")]
	public static bool TryGetDateFromConstructorJson(JsonReader reader, out DateTime dateTime, [NotNullWhen(false)] out string? errorMessage)
	{
		return default(bool);
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x55B7850", Offset = "0x55B6850", VA = "0x55B7850")]
	private static bool TryGetDateConstructorValue(JsonReader reader, out long? integer, [NotNullWhen(false)] out string? errorMessage)
	{
		return default(bool);
	}
}
