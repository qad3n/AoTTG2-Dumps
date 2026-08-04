// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.TextWriter
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x3BFA440", Offset = "0x3BFA440", VA = "0x3BFA440", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60028DB")]
		[Address(RVA = "0x3BFA3C0", Offset = "0x3BFA3C0", VA = "0x3BFA3C0")]
		internal NullTextWriter()
		{
		}

		[Token(Token = "0x60028DD")]
		[Address(RVA = "0x3BFA450", Offset = "0x3BFA450", VA = "0x3BFA450", Slot = "15")]
		public override void Write(char[] buffer, int index, int count)
		{
		}

		[Token(Token = "0x60028DE")]
		[Address(RVA = "0x3BFA460", Offset = "0x3BFA460", VA = "0x3BFA460", Slot = "18")]
		public override void Write(string value)
		{
		}

		[Token(Token = "0x60028DF")]
		[Address(RVA = "0x3BFA470", Offset = "0x3BFA470", VA = "0x3BFA470", Slot = "19")]
		public override void WriteLine()
		{
		}

		[Token(Token = "0x60028E0")]
		[Address(RVA = "0x3BFA480", Offset = "0x3BFA480", VA = "0x3BFA480", Slot = "21")]
		public override void WriteLine(string value)
		{
		}

		[Token(Token = "0x60028E1")]
		[Address(RVA = "0x3BFA490", Offset = "0x3BFA490", VA = "0x3BFA490", Slot = "13")]
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
			[Address(RVA = "0x3BFA4A0", Offset = "0x3BFA4A0", VA = "0x3BFA4A0", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005E8")]
		public override IFormatProvider FormatProvider
		{
			[Token(Token = "0x60028E4")]
			[Address(RVA = "0x3BFA4D0", Offset = "0x3BFA4D0", VA = "0x3BFA4D0", Slot = "7")]
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
			[Address(RVA = "0x3BFA500", Offset = "0x3BFA500", VA = "0x3BFA500", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60028E2")]
		[Address(RVA = "0x3BFA230", Offset = "0x3BFA230", VA = "0x3BFA230")]
		internal SyncTextWriter(TextWriter t)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028E6")]
		[Address(RVA = "0x3BFA530", Offset = "0x3BFA530", VA = "0x3BFA530", Slot = "8")]
		public override void Close()
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028E7")]
		[Address(RVA = "0x3BFA560", Offset = "0x3BFA560", VA = "0x3BFA560", Slot = "9")]
		protected override void Dispose(bool disposing)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028E8")]
		[Address(RVA = "0x3BFA610", Offset = "0x3BFA610", VA = "0x3BFA610", Slot = "10")]
		public override void Flush()
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028E9")]
		[Address(RVA = "0x3BFA640", Offset = "0x3BFA640", VA = "0x3BFA640", Slot = "13")]
		public override void Write(char value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028EA")]
		[Address(RVA = "0x3BFA670", Offset = "0x3BFA670", VA = "0x3BFA670", Slot = "14")]
		public override void Write(char[] buffer)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028EB")]
		[Address(RVA = "0x3BFA6A0", Offset = "0x3BFA6A0", VA = "0x3BFA6A0", Slot = "15")]
		public override void Write(char[] buffer, int index, int count)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028EC")]
		[Address(RVA = "0x3BFA6D0", Offset = "0x3BFA6D0", VA = "0x3BFA6D0", Slot = "16")]
		public override void Write(int value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028ED")]
		[Address(RVA = "0x3BFA700", Offset = "0x3BFA700", VA = "0x3BFA700", Slot = "17")]
		public override void Write(long value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028EE")]
		[Address(RVA = "0x3BFA730", Offset = "0x3BFA730", VA = "0x3BFA730", Slot = "18")]
		public override void Write(string value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028EF")]
		[Address(RVA = "0x3BFA760", Offset = "0x3BFA760", VA = "0x3BFA760", Slot = "19")]
		public override void WriteLine()
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028F0")]
		[Address(RVA = "0x3BFA790", Offset = "0x3BFA790", VA = "0x3BFA790", Slot = "20")]
		public override void WriteLine(int value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028F1")]
		[Address(RVA = "0x3BFA7C0", Offset = "0x3BFA7C0", VA = "0x3BFA7C0", Slot = "21")]
		public override void WriteLine(string value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028F2")]
		[Address(RVA = "0x3BFA7F0", Offset = "0x3BFA7F0", VA = "0x3BFA7F0", Slot = "22")]
		public override Task WriteAsync(char value)
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028F3")]
		[Address(RVA = "0x3BFA8A0", Offset = "0x3BFA8A0", VA = "0x3BFA8A0", Slot = "23")]
		public override Task WriteAsync(string value)
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028F4")]
		[Address(RVA = "0x3BFA950", Offset = "0x3BFA950", VA = "0x3BFA950", Slot = "24")]
		public override Task WriteAsync(char[] buffer, int index, int count)
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x60028F5")]
		[Address(RVA = "0x3BFAA20", Offset = "0x3BFAA20", VA = "0x3BFAA20", Slot = "25")]
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
		[Address(RVA = "0x3BF9C90", Offset = "0x3BF9C90", VA = "0x3BF9C90", Slot = "7")]
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
		[Address(RVA = "0x3BF9DF0", Offset = "0x3BF9DF0", VA = "0x3BF9DF0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60028C3")]
	[Address(RVA = "0x3BF40B0", Offset = "0x3BF40B0", VA = "0x3BF40B0")]
	protected TextWriter()
	{
	}

	[Token(Token = "0x60028C4")]
	[Address(RVA = "0x3BF3730", Offset = "0x3BF3730", VA = "0x3BF3730")]
	protected TextWriter(IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x60028C6")]
	[Address(RVA = "0x3BF9CF0", Offset = "0x3BF9CF0", VA = "0x3BF9CF0", Slot = "8")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x60028C7")]
	[Address(RVA = "0x3BF9D60", Offset = "0x3BF9D60", VA = "0x3BF9D60", Slot = "9")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60028C8")]
	[Address(RVA = "0x3BF9D70", Offset = "0x3BF9D70", VA = "0x3BF9D70", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60028C9")]
	[Address(RVA = "0x3BF9DE0", Offset = "0x3BF9DE0", VA = "0x3BF9DE0", Slot = "10")]
	public virtual void Flush()
	{
	}

	[Token(Token = "0x60028CC")]
	[Address(RVA = "0x3BF9E00", Offset = "0x3BF9E00", VA = "0x3BF9E00", Slot = "13")]
	public virtual void Write(char value)
	{
	}

	[Token(Token = "0x60028CD")]
	[Address(RVA = "0x3BF9E10", Offset = "0x3BF9E10", VA = "0x3BF9E10", Slot = "14")]
	public virtual void Write(char[] buffer)
	{
	}

	[Token(Token = "0x60028CE")]
	[Address(RVA = "0x3BF9E30", Offset = "0x3BF9E30", VA = "0x3BF9E30", Slot = "15")]
	public virtual void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60028CF")]
	[Address(RVA = "0x3BF9FD0", Offset = "0x3BF9FD0", VA = "0x3BF9FD0", Slot = "16")]
	public virtual void Write(int value)
	{
	}

	[Token(Token = "0x60028D0")]
	[Address(RVA = "0x3BFA020", Offset = "0x3BFA020", VA = "0x3BFA020", Slot = "17")]
	public virtual void Write(long value)
	{
	}

	[Token(Token = "0x60028D1")]
	[Address(RVA = "0x3BFA070", Offset = "0x3BFA070", VA = "0x3BFA070", Slot = "18")]
	public virtual void Write(string value)
	{
	}

	[Token(Token = "0x60028D2")]
	[Address(RVA = "0x3BFA0A0", Offset = "0x3BFA0A0", VA = "0x3BFA0A0", Slot = "19")]
	public virtual void WriteLine()
	{
	}

	[Token(Token = "0x60028D3")]
	[Address(RVA = "0x3BFA0C0", Offset = "0x3BFA0C0", VA = "0x3BFA0C0", Slot = "20")]
	public virtual void WriteLine(int value)
	{
	}

	[Token(Token = "0x60028D4")]
	[Address(RVA = "0x3BFA0F0", Offset = "0x3BFA0F0", VA = "0x3BFA0F0", Slot = "21")]
	public virtual void WriteLine(string value)
	{
	}

	[Token(Token = "0x60028D5")]
	[Address(RVA = "0x3BF4E20", Offset = "0x3BF4E20", VA = "0x3BF4E20", Slot = "22")]
	public virtual Task WriteAsync(char value)
	{
		return null;
	}

	[Token(Token = "0x60028D6")]
	[Address(RVA = "0x3BF54D0", Offset = "0x3BF54D0", VA = "0x3BF54D0", Slot = "23")]
	public virtual Task WriteAsync(string value)
	{
		return null;
	}

	[Token(Token = "0x60028D7")]
	[Address(RVA = "0x3BF5C70", Offset = "0x3BF5C70", VA = "0x3BF5C70", Slot = "24")]
	public virtual Task WriteAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60028D8")]
	[Address(RVA = "0x3BF6280", Offset = "0x3BF6280", VA = "0x3BF6280", Slot = "25")]
	public virtual Task FlushAsync()
	{
		return null;
	}

	[Token(Token = "0x60028D9")]
	[Address(RVA = "0x3BFA130", Offset = "0x3BFA130", VA = "0x3BFA130")]
	public static TextWriter Synchronized(TextWriter writer)
	{
		return null;
	}
}
