// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.TextReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000653")]
public abstract class TextReader : MarshalByRefObject, IDisposable
{
	[Serializable]
	[Token(Token = "0x2000654")]
	private sealed class NullTextReader : TextReader
	{
		[Token(Token = "0x6003148")]
		[Address(RVA = "0x5471B10", Offset = "0x5470B10", VA = "0x5471B10")]
		public NullTextReader()
		{
		}

		[Token(Token = "0x6003149")]
		[Address(RVA = "0x5471B80", Offset = "0x5470B80", VA = "0x5471B80", Slot = "11")]
		public override int Read(char[] buffer, int index, int count)
		{
			return default(int);
		}

		[Token(Token = "0x600314A")]
		[Address(RVA = "0x5471B90", Offset = "0x5470B90", VA = "0x5471B90", Slot = "14")]
		public override string ReadLine()
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x2000655")]
	internal sealed class SyncTextReader : TextReader
	{
		[Token(Token = "0x400198C")]
		[FieldOffset(Offset = "0x18")]
		internal readonly TextReader _in;

		[Token(Token = "0x600314B")]
		[Address(RVA = "0x54719F0", Offset = "0x54709F0", VA = "0x54719F0")]
		internal SyncTextReader(TextReader t)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x600314C")]
		[Address(RVA = "0x5471BA0", Offset = "0x5470BA0", VA = "0x5471BA0", Slot = "7")]
		public override void Close()
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x600314D")]
		[Address(RVA = "0x5471BD0", Offset = "0x5470BD0", VA = "0x5471BD0", Slot = "8")]
		protected override void Dispose(bool disposing)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x600314E")]
		[Address(RVA = "0x5471C80", Offset = "0x5470C80", VA = "0x5471C80", Slot = "9")]
		public override int Peek()
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x600314F")]
		[Address(RVA = "0x5471CB0", Offset = "0x5470CB0", VA = "0x5471CB0", Slot = "10")]
		public override int Read()
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003150")]
		[Address(RVA = "0x5471CE0", Offset = "0x5470CE0", VA = "0x5471CE0", Slot = "11")]
		public override int Read(char[] buffer, int index, int count)
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003151")]
		[Address(RVA = "0x5471D10", Offset = "0x5470D10", VA = "0x5471D10", Slot = "14")]
		public override string ReadLine()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003152")]
		[Address(RVA = "0x5471D40", Offset = "0x5470D40", VA = "0x5471D40", Slot = "13")]
		public override string ReadToEnd()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003153")]
		[Address(RVA = "0x5471D70", Offset = "0x5470D70", VA = "0x5471D70", Slot = "15")]
		public override Task<int> ReadAsync(char[] buffer, int index, int count)
		{
			return null;
		}
	}

	[Token(Token = "0x400198B")]
	[FieldOffset(Offset = "0x0")]
	public static readonly TextReader Null;

	[Token(Token = "0x600313A")]
	[Address(RVA = "0x5470CA0", Offset = "0x546FCA0", VA = "0x5470CA0")]
	protected TextReader()
	{
	}

	[Token(Token = "0x600313B")]
	[Address(RVA = "0x5470CB0", Offset = "0x546FCB0", VA = "0x5470CB0", Slot = "7")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x600313C")]
	[Address(RVA = "0x5470D20", Offset = "0x546FD20", VA = "0x5470D20", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600313D")]
	[Address(RVA = "0x5470D90", Offset = "0x546FD90", VA = "0x5470D90", Slot = "8")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600313E")]
	[Address(RVA = "0x5470DA0", Offset = "0x546FDA0", VA = "0x5470DA0", Slot = "9")]
	public virtual int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x600313F")]
	[Address(RVA = "0x5470DB0", Offset = "0x546FDB0", VA = "0x5470DB0", Slot = "10")]
	public virtual int Read()
	{
		return default(int);
	}

	[Token(Token = "0x6003140")]
	[Address(RVA = "0x5470DC0", Offset = "0x546FDC0", VA = "0x5470DC0", Slot = "11")]
	public virtual int Read(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003141")]
	[Address(RVA = "0x5470F70", Offset = "0x546FF70", VA = "0x5470F70", Slot = "12")]
	public virtual int Read(Span<char> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6003142")]
	[Address(RVA = "0x5471270", Offset = "0x5470270", VA = "0x5471270", Slot = "13")]
	public virtual string ReadToEnd()
	{
		return null;
	}

	[Token(Token = "0x6003143")]
	[Address(RVA = "0x5471370", Offset = "0x5470370", VA = "0x5471370", Slot = "14")]
	public virtual string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x6003144")]
	[Address(RVA = "0x5471480", Offset = "0x5470480", VA = "0x5471480", Slot = "15")]
	public virtual Task<int> ReadAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6003145")]
	[Address(RVA = "0x5471650", Offset = "0x5470650", VA = "0x5471650", Slot = "16")]
	internal virtual ValueTask<int> ReadAsyncInternal(Memory<char> buffer, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6003146")]
	[Address(RVA = "0x5471900", Offset = "0x5470900", VA = "0x5471900")]
	public static TextReader Synchronized(TextReader reader)
	{
		return null;
	}
}
