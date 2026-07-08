using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000550")]
public abstract class TextReader : MarshalByRefObject, IDisposable
{
	[Serializable]
	[Token(Token = "0x2000551")]
	private sealed class NullTextReader : TextReader
	{
		[Token(Token = "0x60028B4")]
		[Address(RVA = "0x4F13C10", Offset = "0x4F13C10", VA = "0x4F13C10")]
		public NullTextReader()
		{
		}

		[Token(Token = "0x60028B5")]
		[Address(RVA = "0x4F13C80", Offset = "0x4F13C80", VA = "0x4F13C80", Slot = "11")]
		public override int Read(char[] buffer, int index, int count)
		{
			return default(int);
		}

		[Token(Token = "0x60028B6")]
		[Address(RVA = "0x4F13C90", Offset = "0x4F13C90", VA = "0x4F13C90", Slot = "14")]
		public override string ReadLine()
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x2000552")]
	internal sealed class SyncTextReader : TextReader
	{
		[Token(Token = "0x4001648")]
		[FieldOffset(Offset = "0x18")]
		internal readonly TextReader _in;

		[Token(Token = "0x60028B7")]
		[Address(RVA = "0x4F13AF0", Offset = "0x4F13AF0", VA = "0x4F13AF0")]
		internal SyncTextReader(TextReader t)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028B8")]
		[Address(RVA = "0x4F13CA0", Offset = "0x4F13CA0", VA = "0x4F13CA0", Slot = "7")]
		public override void Close()
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028B9")]
		[Address(RVA = "0x4F13CD0", Offset = "0x4F13CD0", VA = "0x4F13CD0", Slot = "8")]
		protected override void Dispose(bool disposing)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028BA")]
		[Address(RVA = "0x4F13D80", Offset = "0x4F13D80", VA = "0x4F13D80", Slot = "9")]
		public override int Peek()
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028BB")]
		[Address(RVA = "0x4F13DB0", Offset = "0x4F13DB0", VA = "0x4F13DB0", Slot = "10")]
		public override int Read()
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028BC")]
		[Address(RVA = "0x4F13DE0", Offset = "0x4F13DE0", VA = "0x4F13DE0", Slot = "11")]
		public override int Read(char[] buffer, int index, int count)
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028BD")]
		[Address(RVA = "0x4F13E10", Offset = "0x4F13E10", VA = "0x4F13E10", Slot = "14")]
		public override string ReadLine()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028BE")]
		[Address(RVA = "0x4F13E40", Offset = "0x4F13E40", VA = "0x4F13E40", Slot = "13")]
		public override string ReadToEnd()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028BF")]
		[Address(RVA = "0x4F13E70", Offset = "0x4F13E70", VA = "0x4F13E70", Slot = "15")]
		public override Task<int> ReadAsync(char[] buffer, int index, int count)
		{
			return null;
		}
	}

	[Token(Token = "0x4001647")]
	[FieldOffset(Offset = "0x0")]
	public static readonly TextReader Null;

	[Token(Token = "0x60028A6")]
	[Address(RVA = "0x4F09510", Offset = "0x4F09510", VA = "0x4F09510")]
	protected TextReader()
	{
	}

	[Token(Token = "0x60028A7")]
	[Address(RVA = "0x4F13290", Offset = "0x4F13290", VA = "0x4F13290", Slot = "7")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x60028A8")]
	[Address(RVA = "0x4F13300", Offset = "0x4F13300", VA = "0x4F13300", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60028A9")]
	[Address(RVA = "0x4F13370", Offset = "0x4F13370", VA = "0x4F13370", Slot = "8")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60028AA")]
	[Address(RVA = "0x4F13380", Offset = "0x4F13380", VA = "0x4F13380", Slot = "9")]
	public virtual int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x60028AB")]
	[Address(RVA = "0x4F13390", Offset = "0x4F13390", VA = "0x4F13390", Slot = "10")]
	public virtual int Read()
	{
		return default(int);
	}

	[Token(Token = "0x60028AC")]
	[Address(RVA = "0x4F133A0", Offset = "0x4F133A0", VA = "0x4F133A0", Slot = "11")]
	public virtual int Read(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60028AD")]
	[Address(RVA = "0x4F0A480", Offset = "0x4F0A480", VA = "0x4F0A480", Slot = "12")]
	public virtual int Read(Span<char> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x60028AE")]
	[Address(RVA = "0x4F13550", Offset = "0x4F13550", VA = "0x4F13550", Slot = "13")]
	public virtual string ReadToEnd()
	{
		return null;
	}

	[Token(Token = "0x60028AF")]
	[Address(RVA = "0x4F13640", Offset = "0x4F13640", VA = "0x4F13640", Slot = "14")]
	public virtual string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x60028B0")]
	[Address(RVA = "0x4F0B800", Offset = "0x4F0B800", VA = "0x4F0B800", Slot = "15")]
	public virtual Task<int> ReadAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60028B1")]
	[Address(RVA = "0x4F13750", Offset = "0x4F13750", VA = "0x4F13750", Slot = "16")]
	internal virtual ValueTask<int> ReadAsyncInternal(Memory<char> buffer, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x60028B2")]
	[Address(RVA = "0x4F13A00", Offset = "0x4F13A00", VA = "0x4F13A00")]
	public static TextReader Synchronized(TextReader reader)
	{
		return null;
	}
}
