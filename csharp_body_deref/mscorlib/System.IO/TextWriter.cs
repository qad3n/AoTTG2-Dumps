using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000554")]
public abstract class TextWriter : MarshalByRefObject, IDisposable
{
	[Serializable]
	[Token(Token = "0x2000555")]
	private sealed class NullTextWriter : TextWriter
	{
		[Token(Token = "0x170005E6")]
		public override Encoding Encoding
		{
			[Token(Token = "0x60028DC")]
			[Address(RVA = "0x4F14920", Offset = "0x4F14920", VA = "0x4F14920", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60028DB")]
		[Address(RVA = "0x4F148A0", Offset = "0x4F148A0", VA = "0x4F148A0")]
		internal NullTextWriter()
		{
		}

		[Token(Token = "0x60028DD")]
		[Address(RVA = "0x4F14930", Offset = "0x4F14930", VA = "0x4F14930", Slot = "15")]
		public override void Write(char[] buffer, int index, int count)
		{
		}

		[Token(Token = "0x60028DE")]
		[Address(RVA = "0x4F14940", Offset = "0x4F14940", VA = "0x4F14940", Slot = "18")]
		public override void Write(string value)
		{
		}

		[Token(Token = "0x60028DF")]
		[Address(RVA = "0x4F14950", Offset = "0x4F14950", VA = "0x4F14950", Slot = "19")]
		public override void WriteLine()
		{
		}

		[Token(Token = "0x60028E0")]
		[Address(RVA = "0x4F14960", Offset = "0x4F14960", VA = "0x4F14960", Slot = "21")]
		public override void WriteLine(string value)
		{
		}

		[Token(Token = "0x60028E1")]
		[Address(RVA = "0x4F14970", Offset = "0x4F14970", VA = "0x4F14970", Slot = "13")]
		public override void Write(char value)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000556")]
	internal sealed class SyncTextWriter : TextWriter, IDisposable
	{
		[Token(Token = "0x4001650")]
		[FieldOffset(Offset = "0x30")]
		private readonly TextWriter _out;

		[Token(Token = "0x170005E7")]
		public override Encoding Encoding
		{
			[Token(Token = "0x60028E3")]
			[Address(RVA = "0x4F14980", Offset = "0x4F14980", VA = "0x4F14980", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005E8")]
		public override IFormatProvider FormatProvider
		{
			[Token(Token = "0x60028E4")]
			[Address(RVA = "0x4F149B0", Offset = "0x4F149B0", VA = "0x4F149B0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005E9")]
		public override string NewLine
		{
			[MethodImpl((MethodImplOptions)32)]
			[Token(Token = "0x60028E5")]
			[Address(RVA = "0x4F149E0", Offset = "0x4F149E0", VA = "0x4F149E0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60028E2")]
		[Address(RVA = "0x4F14710", Offset = "0x4F14710", VA = "0x4F14710")]
		internal SyncTextWriter(TextWriter t)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028E6")]
		[Address(RVA = "0x4F14A10", Offset = "0x4F14A10", VA = "0x4F14A10", Slot = "8")]
		public override void Close()
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028E7")]
		[Address(RVA = "0x4F14A40", Offset = "0x4F14A40", VA = "0x4F14A40", Slot = "9")]
		protected override void Dispose(bool disposing)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028E8")]
		[Address(RVA = "0x4F14AF0", Offset = "0x4F14AF0", VA = "0x4F14AF0", Slot = "10")]
		public override void Flush()
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028E9")]
		[Address(RVA = "0x4F14B20", Offset = "0x4F14B20", VA = "0x4F14B20", Slot = "13")]
		public override void Write(char value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028EA")]
		[Address(RVA = "0x4F14B50", Offset = "0x4F14B50", VA = "0x4F14B50", Slot = "14")]
		public override void Write(char[] buffer)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028EB")]
		[Address(RVA = "0x4F14B80", Offset = "0x4F14B80", VA = "0x4F14B80", Slot = "15")]
		public override void Write(char[] buffer, int index, int count)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028EC")]
		[Address(RVA = "0x4F14BB0", Offset = "0x4F14BB0", VA = "0x4F14BB0", Slot = "16")]
		public override void Write(int value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028ED")]
		[Address(RVA = "0x4F14BE0", Offset = "0x4F14BE0", VA = "0x4F14BE0", Slot = "17")]
		public override void Write(long value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028EE")]
		[Address(RVA = "0x4F14C10", Offset = "0x4F14C10", VA = "0x4F14C10", Slot = "18")]
		public override void Write(string value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028EF")]
		[Address(RVA = "0x4F14C40", Offset = "0x4F14C40", VA = "0x4F14C40", Slot = "19")]
		public override void WriteLine()
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028F0")]
		[Address(RVA = "0x4F14C70", Offset = "0x4F14C70", VA = "0x4F14C70", Slot = "20")]
		public override void WriteLine(int value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028F1")]
		[Address(RVA = "0x4F14CA0", Offset = "0x4F14CA0", VA = "0x4F14CA0", Slot = "21")]
		public override void WriteLine(string value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028F2")]
		[Address(RVA = "0x4F14CD0", Offset = "0x4F14CD0", VA = "0x4F14CD0", Slot = "22")]
		public override Task WriteAsync(char value)
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028F3")]
		[Address(RVA = "0x4F14D80", Offset = "0x4F14D80", VA = "0x4F14D80", Slot = "23")]
		public override Task WriteAsync(string value)
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028F4")]
		[Address(RVA = "0x4F14E30", Offset = "0x4F14E30", VA = "0x4F14E30", Slot = "24")]
		public override Task WriteAsync(char[] buffer, int index, int count)
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028F5")]
		[Address(RVA = "0x4F14F00", Offset = "0x4F14F00", VA = "0x4F14F00", Slot = "25")]
		public override Task FlushAsync()
		{
			return null;
		}
	}

	[Token(Token = "0x400164B")]
	[FieldOffset(Offset = "0x0")]
	public static readonly TextWriter Null;

	[Token(Token = "0x400164C")]
	[FieldOffset(Offset = "0x8")]
	private static readonly char[] s_coreNewLine;

	[Token(Token = "0x400164D")]
	[FieldOffset(Offset = "0x18")]
	protected char[] CoreNewLine;

	[Token(Token = "0x400164E")]
	[FieldOffset(Offset = "0x20")]
	private string CoreNewLineStr;

	[Token(Token = "0x400164F")]
	[FieldOffset(Offset = "0x28")]
	private IFormatProvider _internalFormatProvider;

	[Token(Token = "0x170005E3")]
	public virtual IFormatProvider FormatProvider
	{
		[Token(Token = "0x60028C5")]
		[Address(RVA = "0x4F14170", Offset = "0x4F14170", VA = "0x4F14170", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E4")]
	public abstract Encoding Encoding
	{
		[Token(Token = "0x60028CA")]
		get;
	}

	[Token(Token = "0x170005E5")]
	public virtual string NewLine
	{
		[Token(Token = "0x60028CB")]
		[Address(RVA = "0x4F142D0", Offset = "0x4F142D0", VA = "0x4F142D0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60028C3")]
	[Address(RVA = "0x4F0E590", Offset = "0x4F0E590", VA = "0x4F0E590")]
	protected TextWriter()
	{
	}

	[Token(Token = "0x60028C4")]
	[Address(RVA = "0x4F0DC10", Offset = "0x4F0DC10", VA = "0x4F0DC10")]
	protected TextWriter(IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x60028C6")]
	[Address(RVA = "0x4F141D0", Offset = "0x4F141D0", VA = "0x4F141D0", Slot = "8")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x60028C7")]
	[Address(RVA = "0x4F14240", Offset = "0x4F14240", VA = "0x4F14240", Slot = "9")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60028C8")]
	[Address(RVA = "0x4F14250", Offset = "0x4F14250", VA = "0x4F14250", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60028C9")]
	[Address(RVA = "0x4F142C0", Offset = "0x4F142C0", VA = "0x4F142C0", Slot = "10")]
	public virtual void Flush()
	{
	}

	[Token(Token = "0x60028CC")]
	[Address(RVA = "0x4F142E0", Offset = "0x4F142E0", VA = "0x4F142E0", Slot = "13")]
	public virtual void Write(char value)
	{
	}

	[Token(Token = "0x60028CD")]
	[Address(RVA = "0x4F142F0", Offset = "0x4F142F0", VA = "0x4F142F0", Slot = "14")]
	public virtual void Write(char[] buffer)
	{
	}

	[Token(Token = "0x60028CE")]
	[Address(RVA = "0x4F14310", Offset = "0x4F14310", VA = "0x4F14310", Slot = "15")]
	public virtual void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60028CF")]
	[Address(RVA = "0x4F144B0", Offset = "0x4F144B0", VA = "0x4F144B0", Slot = "16")]
	public virtual void Write(int value)
	{
	}

	[Token(Token = "0x60028D0")]
	[Address(RVA = "0x4F14500", Offset = "0x4F14500", VA = "0x4F14500", Slot = "17")]
	public virtual void Write(long value)
	{
	}

	[Token(Token = "0x60028D1")]
	[Address(RVA = "0x4F14550", Offset = "0x4F14550", VA = "0x4F14550", Slot = "18")]
	public virtual void Write(string value)
	{
	}

	[Token(Token = "0x60028D2")]
	[Address(RVA = "0x4F14580", Offset = "0x4F14580", VA = "0x4F14580", Slot = "19")]
	public virtual void WriteLine()
	{
	}

	[Token(Token = "0x60028D3")]
	[Address(RVA = "0x4F145A0", Offset = "0x4F145A0", VA = "0x4F145A0", Slot = "20")]
	public virtual void WriteLine(int value)
	{
	}

	[Token(Token = "0x60028D4")]
	[Address(RVA = "0x4F145D0", Offset = "0x4F145D0", VA = "0x4F145D0", Slot = "21")]
	public virtual void WriteLine(string value)
	{
	}

	[Token(Token = "0x60028D5")]
	[Address(RVA = "0x4F0F300", Offset = "0x4F0F300", VA = "0x4F0F300", Slot = "22")]
	public virtual Task WriteAsync(char value)
	{
		return null;
	}

	[Token(Token = "0x60028D6")]
	[Address(RVA = "0x4F0F9B0", Offset = "0x4F0F9B0", VA = "0x4F0F9B0", Slot = "23")]
	public virtual Task WriteAsync(string value)
	{
		return null;
	}

	[Token(Token = "0x60028D7")]
	[Address(RVA = "0x4F10150", Offset = "0x4F10150", VA = "0x4F10150", Slot = "24")]
	public virtual Task WriteAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60028D8")]
	[Address(RVA = "0x4F10760", Offset = "0x4F10760", VA = "0x4F10760", Slot = "25")]
	public virtual Task FlushAsync()
	{
		return null;
	}

	[Token(Token = "0x60028D9")]
	[Address(RVA = "0x4F14610", Offset = "0x4F14610", VA = "0x4F14610")]
	public static TextWriter Synchronized(TextWriter writer)
	{
		return null;
	}
}
