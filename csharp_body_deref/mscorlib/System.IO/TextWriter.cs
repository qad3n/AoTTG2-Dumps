// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.TextWriter
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x200067D")]
public abstract class TextWriter : MarshalByRefObject, IDisposable
{
	[Serializable]
	[Token(Token = "0x200067E")]
	private sealed class NullTextWriter : TextWriter
	{
		[Token(Token = "0x170007FD")]
		public override Encoding Encoding
		{
			[Token(Token = "0x60031B3")]
			[Address(RVA = "0x1AD87C0", Offset = "0x1AD6DC0", VA = "0x181AD87C0", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60031B2")]
		[Address(RVA = "0x1AF1640", Offset = "0x1AEFC40", VA = "0x181AF1640")]
		internal NullTextWriter()
		{
		}

		[Token(Token = "0x60031B4")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "15")]
		public override void Write(char[] buffer, int index, int count)
		{
		}

		[Token(Token = "0x60031B5")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "18")]
		public override void Write(string value)
		{
		}

		[Token(Token = "0x60031B6")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "19")]
		public override void WriteLine()
		{
		}

		[Token(Token = "0x60031B7")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "21")]
		public override void WriteLine(string value)
		{
		}

		[Token(Token = "0x60031B8")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "13")]
		public override void Write(char value)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200067F")]
	internal sealed class SyncTextWriter : TextWriter, IDisposable
	{
		[Token(Token = "0x4001A31")]
		[FieldOffset(Offset = "0x30")]
		private readonly TextWriter _out;

		[Token(Token = "0x170007FE")]
		public override Encoding Encoding
		{
			[Token(Token = "0x60031BA")]
			[Address(RVA = "0x1AFB2E0", Offset = "0x1AF98E0", VA = "0x181AFB2E0", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007FF")]
		public override IFormatProvider FormatProvider
		{
			[Token(Token = "0x60031BB")]
			[Address(RVA = "0x1A24E70", Offset = "0x1A23470", VA = "0x181A24E70", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000800")]
		public override string NewLine
		{
			[MethodImpl((MethodImplOptions)32)]
			[Token(Token = "0x60031BC")]
			[Address(RVA = "0x1AFB310", Offset = "0x1AF9910", VA = "0x181AFB310", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60031B9")]
		[Address(RVA = "0x1AFB250", Offset = "0x1AF9850", VA = "0x181AFB250")]
		internal SyncTextWriter(TextWriter t)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60031BD")]
		[Address(RVA = "0x1AFADD0", Offset = "0x1AF93D0", VA = "0x181AFADD0", Slot = "8")]
		public override void Close()
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60031BE")]
		[Address(RVA = "0x1AFAE00", Offset = "0x1AF9400", VA = "0x181AFAE00", Slot = "9")]
		protected override void Dispose(bool disposing)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60031BF")]
		[Address(RVA = "0x1AFAF10", Offset = "0x1AF9510", VA = "0x181AFAF10", Slot = "10")]
		public override void Flush()
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60031C0")]
		[Address(RVA = "0x1A24CA0", Offset = "0x1A232A0", VA = "0x181A24CA0", Slot = "13")]
		public override void Write(char value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60031C1")]
		[Address(RVA = "0x1A24CD0", Offset = "0x1A232D0", VA = "0x181A24CD0", Slot = "14")]
		public override void Write(char[] buffer)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60031C2")]
		[Address(RVA = "0x1AFB220", Offset = "0x1AF9820", VA = "0x181AFB220", Slot = "15")]
		public override void Write(char[] buffer, int index, int count)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60031C3")]
		[Address(RVA = "0x1A24EA0", Offset = "0x1A234A0", VA = "0x181A24EA0", Slot = "16")]
		public override void Write(int value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60031C4")]
		[Address(RVA = "0x1A26CC0", Offset = "0x1A252C0", VA = "0x181A26CC0", Slot = "17")]
		public override void Write(long value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60031C5")]
		[Address(RVA = "0x1A24ED0", Offset = "0x1A234D0", VA = "0x181A24ED0", Slot = "18")]
		public override void Write(string value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60031C6")]
		[Address(RVA = "0x1AFB1F0", Offset = "0x1AF97F0", VA = "0x181AFB1F0", Slot = "19")]
		public override void WriteLine()
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60031C7")]
		[Address(RVA = "0x1A24F00", Offset = "0x1A23500", VA = "0x181A24F00", Slot = "20")]
		public override void WriteLine(int value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60031C8")]
		[Address(RVA = "0x1A26D20", Offset = "0x1A25320", VA = "0x181A26D20", Slot = "21")]
		public override void WriteLine(string value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60031C9")]
		[Address(RVA = "0x1AFB190", Offset = "0x1AF9790", VA = "0x181AFB190", Slot = "22")]
		public override void WriteLine(string format, object arg0)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60031CA")]
		[Address(RVA = "0x1AFB1C0", Offset = "0x1AF97C0", VA = "0x181AFB1C0", Slot = "23")]
		public override void WriteLine(string format, object arg0, object arg1, object arg2)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60031CB")]
		[Address(RVA = "0x1AFB0D0", Offset = "0x1AF96D0", VA = "0x181AFB0D0", Slot = "24")]
		public override Task WriteAsync(char value)
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60031CC")]
		[Address(RVA = "0x1AFB010", Offset = "0x1AF9610", VA = "0x181AFB010", Slot = "25")]
		public override Task WriteAsync(string value)
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60031CD")]
		[Address(RVA = "0x1AFAF40", Offset = "0x1AF9540", VA = "0x181AFAF40", Slot = "26")]
		public override Task WriteAsync(char[] buffer, int index, int count)
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60031CE")]
		[Address(RVA = "0x1AFAE60", Offset = "0x1AF9460", VA = "0x181AFAE60", Slot = "27")]
		public override Task FlushAsync()
		{
			return null;
		}
	}

	[Token(Token = "0x4001A2C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly TextWriter Null;

	[Token(Token = "0x4001A2D")]
	[FieldOffset(Offset = "0x8")]
	private static readonly char[] s_coreNewLine;

	[Token(Token = "0x4001A2E")]
	[FieldOffset(Offset = "0x18")]
	protected char[] CoreNewLine;

	[Token(Token = "0x4001A2F")]
	[FieldOffset(Offset = "0x20")]
	private string CoreNewLineStr;

	[Token(Token = "0x4001A30")]
	[FieldOffset(Offset = "0x28")]
	private IFormatProvider _internalFormatProvider;

	[Token(Token = "0x170007FA")]
	public virtual IFormatProvider FormatProvider
	{
		[Token(Token = "0x600319A")]
		[Address(RVA = "0x1AFD3F0", Offset = "0x1AFB9F0", VA = "0x181AFD3F0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007FB")]
	public abstract Encoding Encoding
	{
		[Token(Token = "0x600319F")]
		get;
	}

	[Token(Token = "0x170007FC")]
	public virtual string NewLine
	{
		[Token(Token = "0x60031A0")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003198")]
	[Address(RVA = "0x1AFD2B0", Offset = "0x1AFB8B0", VA = "0x181AFD2B0")]
	protected TextWriter()
	{
	}

	[Token(Token = "0x6003199")]
	[Address(RVA = "0x1AFD350", Offset = "0x1AFB950", VA = "0x181AFD350")]
	protected TextWriter(IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x600319B")]
	[Address(RVA = "0x1AFC230", Offset = "0x1AFA830", VA = "0x181AFC230", Slot = "8")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x600319C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600319D")]
	[Address(RVA = "0x1AFC290", Offset = "0x1AFA890", VA = "0x181AFC290", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600319E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	public virtual void Flush()
	{
	}

	[Token(Token = "0x60031A1")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "13")]
	public virtual void Write(char value)
	{
	}

	[Token(Token = "0x60031A2")]
	[Address(RVA = "0x1AFCEE0", Offset = "0x1AFB4E0", VA = "0x181AFCEE0", Slot = "14")]
	public virtual void Write(char[] buffer)
	{
	}

	[Token(Token = "0x60031A3")]
	[Address(RVA = "0x1AFCF10", Offset = "0x1AFB510", VA = "0x181AFCF10", Slot = "15")]
	public virtual void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60031A4")]
	[Address(RVA = "0x1AFD130", Offset = "0x1AFB730", VA = "0x181AFD130", Slot = "16")]
	public virtual void Write(int value)
	{
	}

	[Token(Token = "0x60031A5")]
	[Address(RVA = "0x1AFCE90", Offset = "0x1AFB490", VA = "0x181AFCE90", Slot = "17")]
	public virtual void Write(long value)
	{
	}

	[Token(Token = "0x60031A6")]
	[Address(RVA = "0x1AFD0F0", Offset = "0x1AFB6F0", VA = "0x181AFD0F0", Slot = "18")]
	public virtual void Write(string value)
	{
	}

	[Token(Token = "0x60031A7")]
	[Address(RVA = "0x1AFCE10", Offset = "0x1AFB410", VA = "0x181AFCE10", Slot = "19")]
	public virtual void WriteLine()
	{
	}

	[Token(Token = "0x60031A8")]
	[Address(RVA = "0x1AFCD20", Offset = "0x1AFB320", VA = "0x181AFCD20", Slot = "20")]
	public virtual void WriteLine(int value)
	{
	}

	[Token(Token = "0x60031A9")]
	[Address(RVA = "0x1AFCD60", Offset = "0x1AFB360", VA = "0x181AFCD60", Slot = "21")]
	public virtual void WriteLine(string value)
	{
	}

	[Token(Token = "0x60031AA")]
	[Address(RVA = "0x1AFCE30", Offset = "0x1AFB430", VA = "0x181AFCE30", Slot = "22")]
	public virtual void WriteLine(string format, object arg0)
	{
	}

	[Token(Token = "0x60031AB")]
	[Address(RVA = "0x1AFCDA0", Offset = "0x1AFB3A0", VA = "0x181AFCDA0", Slot = "23")]
	public virtual void WriteLine(string format, object arg0, object arg1, object arg2)
	{
	}

	[Token(Token = "0x60031AC")]
	[Address(RVA = "0x1AFC620", Offset = "0x1AFAC20", VA = "0x181AFC620", Slot = "24")]
	public virtual Task WriteAsync(char value)
	{
		return null;
	}

	[Token(Token = "0x60031AD")]
	[Address(RVA = "0x1AFCAD0", Offset = "0x1AFB0D0", VA = "0x181AFCAD0", Slot = "25")]
	public virtual Task WriteAsync(string value)
	{
		return null;
	}

	[Token(Token = "0x60031AE")]
	[Address(RVA = "0x1AFC870", Offset = "0x1AFAE70", VA = "0x181AFC870", Slot = "26")]
	public virtual Task WriteAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60031AF")]
	[Address(RVA = "0x1AFC2F0", Offset = "0x1AFA8F0", VA = "0x181AFC2F0", Slot = "27")]
	public virtual Task FlushAsync()
	{
		return null;
	}

	[Token(Token = "0x60031B0")]
	[Address(RVA = "0x1AFC500", Offset = "0x1AFAB00", VA = "0x181AFC500")]
	public static TextWriter Synchronized(TextWriter writer)
	{
		return null;
	}
}
