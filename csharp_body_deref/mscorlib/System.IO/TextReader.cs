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
[Token(Token = "0x2000550")]
public abstract class TextReader : MarshalByRefObject, IDisposable
{
	[Serializable]
	[Token(Token = "0x2000551")]
	private sealed class NullTextReader : TextReader
	{
		[Token(Token = "0x60028B4")]
		[Address(RVA = "0x3BF9730", Offset = "0x3BF9730", VA = "0x3BF9730")]
		public NullTextReader()
		{
		}

		[Token(Token = "0x60028B5")]
		[Address(RVA = "0x3BF97A0", Offset = "0x3BF97A0", VA = "0x3BF97A0", Slot = "11")]
		public override int Read(char[] buffer, int index, int count)
		{
			return default(int);
		}

		[Token(Token = "0x60028B6")]
		[Address(RVA = "0x3BF97B0", Offset = "0x3BF97B0", VA = "0x3BF97B0", Slot = "14")]
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
		[Address(RVA = "0x3BF9610", Offset = "0x3BF9610", VA = "0x3BF9610")]
		internal SyncTextReader(TextReader t)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028B8")]
		[Address(RVA = "0x3BF97C0", Offset = "0x3BF97C0", VA = "0x3BF97C0", Slot = "7")]
		public override void Close()
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028B9")]
		[Address(RVA = "0x3BF97F0", Offset = "0x3BF97F0", VA = "0x3BF97F0", Slot = "8")]
		protected override void Dispose(bool disposing)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028BA")]
		[Address(RVA = "0x3BF98A0", Offset = "0x3BF98A0", VA = "0x3BF98A0", Slot = "9")]
		public override int Peek()
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028BB")]
		[Address(RVA = "0x3BF98D0", Offset = "0x3BF98D0", VA = "0x3BF98D0", Slot = "10")]
		public override int Read()
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028BC")]
		[Address(RVA = "0x3BF9900", Offset = "0x3BF9900", VA = "0x3BF9900", Slot = "11")]
		public override int Read(char[] buffer, int index, int count)
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028BD")]
		[Address(RVA = "0x3BF9930", Offset = "0x3BF9930", VA = "0x3BF9930", Slot = "14")]
		public override string ReadLine()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028BE")]
		[Address(RVA = "0x3BF9960", Offset = "0x3BF9960", VA = "0x3BF9960", Slot = "13")]
		public override string ReadToEnd()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028BF")]
		[Address(RVA = "0x3BF9990", Offset = "0x3BF9990", VA = "0x3BF9990", Slot = "15")]
		public override Task<int> ReadAsync(char[] buffer, int index, int count)
		{
			return null;
		}
	}

	[Token(Token = "0x4001647")]
	[FieldOffset(Offset = "0x0")]
	public static readonly TextReader Null;

	[Token(Token = "0x60028A6")]
	[Address(RVA = "0x3BEF030", Offset = "0x3BEF030", VA = "0x3BEF030")]
	protected TextReader()
	{
	}

	[Token(Token = "0x60028A7")]
	[Address(RVA = "0x3BF8DB0", Offset = "0x3BF8DB0", VA = "0x3BF8DB0", Slot = "7")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x60028A8")]
	[Address(RVA = "0x3BF8E20", Offset = "0x3BF8E20", VA = "0x3BF8E20", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60028A9")]
	[Address(RVA = "0x3BF8E90", Offset = "0x3BF8E90", VA = "0x3BF8E90", Slot = "8")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60028AA")]
	[Address(RVA = "0x3BF8EA0", Offset = "0x3BF8EA0", VA = "0x3BF8EA0", Slot = "9")]
	public virtual int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x60028AB")]
	[Address(RVA = "0x3BF8EB0", Offset = "0x3BF8EB0", VA = "0x3BF8EB0", Slot = "10")]
	public virtual int Read()
	{
		return default(int);
	}

	[Token(Token = "0x60028AC")]
	[Address(RVA = "0x3BF8EC0", Offset = "0x3BF8EC0", VA = "0x3BF8EC0", Slot = "11")]
	public virtual int Read(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60028AD")]
	[Address(RVA = "0x3BEFFA0", Offset = "0x3BEFFA0", VA = "0x3BEFFA0", Slot = "12")]
	public virtual int Read(Span<char> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x60028AE")]
	[Address(RVA = "0x3BF9070", Offset = "0x3BF9070", VA = "0x3BF9070", Slot = "13")]
	public virtual string ReadToEnd()
	{
		return null;
	}

	[Token(Token = "0x60028AF")]
	[Address(RVA = "0x3BF9160", Offset = "0x3BF9160", VA = "0x3BF9160", Slot = "14")]
	public virtual string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x60028B0")]
	[Address(RVA = "0x3BF1320", Offset = "0x3BF1320", VA = "0x3BF1320", Slot = "15")]
	public virtual Task<int> ReadAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60028B1")]
	[Address(RVA = "0x3BF9270", Offset = "0x3BF9270", VA = "0x3BF9270", Slot = "16")]
	internal virtual ValueTask<int> ReadAsyncInternal(Memory<char> buffer, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x60028B2")]
	[Address(RVA = "0x3BF9520", Offset = "0x3BF9520", VA = "0x3BF9520")]
	public static TextReader Synchronized(TextReader reader)
	{
		return null;
	}
}
