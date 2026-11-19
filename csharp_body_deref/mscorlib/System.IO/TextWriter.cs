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
[Token(Token = "0x2000657")]
public abstract class TextWriter : MarshalByRefObject, IDisposable
{
	[Serializable]
	[Token(Token = "0x2000658")]
	private sealed class NullTextWriter : TextWriter
	{
		[Token(Token = "0x170007F9")]
		public override Encoding Encoding
		{
			[Token(Token = "0x6003172")]
			[Address(RVA = "0x5473580", Offset = "0x5472580", VA = "0x5473580", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003171")]
		[Address(RVA = "0x5473500", Offset = "0x5472500", VA = "0x5473500")]
		internal NullTextWriter()
		{
		}

		[Token(Token = "0x6003173")]
		[Address(RVA = "0x5473590", Offset = "0x5472590", VA = "0x5473590", Slot = "15")]
		public override void Write(char[] buffer, int index, int count)
		{
		}

		[Token(Token = "0x6003174")]
		[Address(RVA = "0x54735A0", Offset = "0x54725A0", VA = "0x54735A0", Slot = "18")]
		public override void Write(string value)
		{
		}

		[Token(Token = "0x6003175")]
		[Address(RVA = "0x54735B0", Offset = "0x54725B0", VA = "0x54735B0", Slot = "19")]
		public override void WriteLine()
		{
		}

		[Token(Token = "0x6003176")]
		[Address(RVA = "0x54735C0", Offset = "0x54725C0", VA = "0x54735C0", Slot = "21")]
		public override void WriteLine(string value)
		{
		}

		[Token(Token = "0x6003177")]
		[Address(RVA = "0x54735D0", Offset = "0x54725D0", VA = "0x54735D0", Slot = "13")]
		public override void Write(char value)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000659")]
	internal sealed class SyncTextWriter : TextWriter, IDisposable
	{
		[Token(Token = "0x4001994")]
		[FieldOffset(Offset = "0x30")]
		private readonly TextWriter _out;

		[Token(Token = "0x170007FA")]
		public override Encoding Encoding
		{
			[Token(Token = "0x6003179")]
			[Address(RVA = "0x54735E0", Offset = "0x54725E0", VA = "0x54735E0", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007FB")]
		public override IFormatProvider FormatProvider
		{
			[Token(Token = "0x600317A")]
			[Address(RVA = "0x5473610", Offset = "0x5472610", VA = "0x5473610", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007FC")]
		public override string NewLine
		{
			[MethodImpl((MethodImplOptions)32)]
			[Token(Token = "0x600317B")]
			[Address(RVA = "0x5473640", Offset = "0x5472640", VA = "0x5473640", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003178")]
		[Address(RVA = "0x5473370", Offset = "0x5472370", VA = "0x5473370")]
		internal SyncTextWriter(TextWriter t)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x600317C")]
		[Address(RVA = "0x5473670", Offset = "0x5472670", VA = "0x5473670", Slot = "8")]
		public override void Close()
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x600317D")]
		[Address(RVA = "0x54736A0", Offset = "0x54726A0", VA = "0x54736A0", Slot = "9")]
		protected override void Dispose(bool disposing)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x600317E")]
		[Address(RVA = "0x5473750", Offset = "0x5472750", VA = "0x5473750", Slot = "10")]
		public override void Flush()
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x600317F")]
		[Address(RVA = "0x5473780", Offset = "0x5472780", VA = "0x5473780", Slot = "13")]
		public override void Write(char value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003180")]
		[Address(RVA = "0x54737B0", Offset = "0x54727B0", VA = "0x54737B0", Slot = "14")]
		public override void Write(char[] buffer)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003181")]
		[Address(RVA = "0x54737E0", Offset = "0x54727E0", VA = "0x54737E0", Slot = "15")]
		public override void Write(char[] buffer, int index, int count)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003182")]
		[Address(RVA = "0x5473810", Offset = "0x5472810", VA = "0x5473810", Slot = "16")]
		public override void Write(int value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003183")]
		[Address(RVA = "0x5473840", Offset = "0x5472840", VA = "0x5473840", Slot = "17")]
		public override void Write(long value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003184")]
		[Address(RVA = "0x5473870", Offset = "0x5472870", VA = "0x5473870", Slot = "18")]
		public override void Write(string value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003185")]
		[Address(RVA = "0x54738A0", Offset = "0x54728A0", VA = "0x54738A0", Slot = "19")]
		public override void WriteLine()
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003186")]
		[Address(RVA = "0x54738D0", Offset = "0x54728D0", VA = "0x54738D0", Slot = "20")]
		public override void WriteLine(int value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003187")]
		[Address(RVA = "0x5473900", Offset = "0x5472900", VA = "0x5473900", Slot = "21")]
		public override void WriteLine(string value)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003188")]
		[Address(RVA = "0x5473930", Offset = "0x5472930", VA = "0x5473930", Slot = "22")]
		public override void WriteLine(string format, object arg0)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003189")]
		[Address(RVA = "0x5473960", Offset = "0x5472960", VA = "0x5473960", Slot = "23")]
		public override void WriteLine(string format, object arg0, object arg1, object arg2)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x600318A")]
		[Address(RVA = "0x5473990", Offset = "0x5472990", VA = "0x5473990", Slot = "24")]
		public override Task WriteAsync(char value)
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x600318B")]
		[Address(RVA = "0x5473A40", Offset = "0x5472A40", VA = "0x5473A40", Slot = "25")]
		public override Task WriteAsync(string value)
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x600318C")]
		[Address(RVA = "0x5473AF0", Offset = "0x5472AF0", VA = "0x5473AF0", Slot = "26")]
		public override Task WriteAsync(char[] buffer, int index, int count)
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x600318D")]
		[Address(RVA = "0x5473BC0", Offset = "0x5472BC0", VA = "0x5473BC0", Slot = "27")]
		public override Task FlushAsync()
		{
			return null;
		}
	}

	[Token(Token = "0x400198F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly TextWriter Null;

	[Token(Token = "0x4001990")]
	[FieldOffset(Offset = "0x8")]
	private static readonly char[] s_coreNewLine;

	[Token(Token = "0x4001991")]
	[FieldOffset(Offset = "0x18")]
	protected char[] CoreNewLine;

	[Token(Token = "0x4001992")]
	[FieldOffset(Offset = "0x20")]
	private string CoreNewLineStr;

	[Token(Token = "0x4001993")]
	[FieldOffset(Offset = "0x28")]
	private IFormatProvider _internalFormatProvider;

	[Token(Token = "0x170007F6")]
	public virtual IFormatProvider FormatProvider
	{
		[Token(Token = "0x6003159")]
		[Address(RVA = "0x54721A0", Offset = "0x54711A0", VA = "0x54721A0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007F7")]
	public abstract Encoding Encoding
	{
		[Token(Token = "0x600315E")]
		get;
	}

	[Token(Token = "0x170007F8")]
	public virtual string NewLine
	{
		[Token(Token = "0x600315F")]
		[Address(RVA = "0x5472300", Offset = "0x5471300", VA = "0x5472300", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003157")]
	[Address(RVA = "0x5472060", Offset = "0x5471060", VA = "0x5472060")]
	protected TextWriter()
	{
	}

	[Token(Token = "0x6003158")]
	[Address(RVA = "0x5472100", Offset = "0x5471100", VA = "0x5472100")]
	protected TextWriter(IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x600315A")]
	[Address(RVA = "0x5472200", Offset = "0x5471200", VA = "0x5472200", Slot = "8")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x600315B")]
	[Address(RVA = "0x5472270", Offset = "0x5471270", VA = "0x5472270", Slot = "9")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600315C")]
	[Address(RVA = "0x5472280", Offset = "0x5471280", VA = "0x5472280", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600315D")]
	[Address(RVA = "0x54722F0", Offset = "0x54712F0", VA = "0x54722F0", Slot = "10")]
	public virtual void Flush()
	{
	}

	[Token(Token = "0x6003160")]
	[Address(RVA = "0x5472310", Offset = "0x5471310", VA = "0x5472310", Slot = "13")]
	public virtual void Write(char value)
	{
	}

	[Token(Token = "0x6003161")]
	[Address(RVA = "0x5472320", Offset = "0x5471320", VA = "0x5472320", Slot = "14")]
	public virtual void Write(char[] buffer)
	{
	}

	[Token(Token = "0x6003162")]
	[Address(RVA = "0x5472340", Offset = "0x5471340", VA = "0x5472340", Slot = "15")]
	public virtual void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6003163")]
	[Address(RVA = "0x54724E0", Offset = "0x54714E0", VA = "0x54724E0", Slot = "16")]
	public virtual void Write(int value)
	{
	}

	[Token(Token = "0x6003164")]
	[Address(RVA = "0x5472530", Offset = "0x5471530", VA = "0x5472530", Slot = "17")]
	public virtual void Write(long value)
	{
	}

	[Token(Token = "0x6003165")]
	[Address(RVA = "0x5472580", Offset = "0x5471580", VA = "0x5472580", Slot = "18")]
	public virtual void Write(string value)
	{
	}

	[Token(Token = "0x6003166")]
	[Address(RVA = "0x54725B0", Offset = "0x54715B0", VA = "0x54725B0", Slot = "19")]
	public virtual void WriteLine()
	{
	}

	[Token(Token = "0x6003167")]
	[Address(RVA = "0x54725D0", Offset = "0x54715D0", VA = "0x54725D0", Slot = "20")]
	public virtual void WriteLine(int value)
	{
	}

	[Token(Token = "0x6003168")]
	[Address(RVA = "0x5472600", Offset = "0x5471600", VA = "0x5472600", Slot = "21")]
	public virtual void WriteLine(string value)
	{
	}

	[Token(Token = "0x6003169")]
	[Address(RVA = "0x5472640", Offset = "0x5471640", VA = "0x5472640", Slot = "22")]
	public virtual void WriteLine(string format, object arg0)
	{
	}

	[Token(Token = "0x600316A")]
	[Address(RVA = "0x5472690", Offset = "0x5471690", VA = "0x5472690", Slot = "23")]
	public virtual void WriteLine(string format, object arg0, object arg1, object arg2)
	{
	}

	[Token(Token = "0x600316B")]
	[Address(RVA = "0x5472700", Offset = "0x5471700", VA = "0x5472700", Slot = "24")]
	public virtual Task WriteAsync(char value)
	{
		return null;
	}

	[Token(Token = "0x600316C")]
	[Address(RVA = "0x54729E0", Offset = "0x54719E0", VA = "0x54729E0", Slot = "25")]
	public virtual Task WriteAsync(string value)
	{
		return null;
	}

	[Token(Token = "0x600316D")]
	[Address(RVA = "0x5472CC0", Offset = "0x5471CC0", VA = "0x5472CC0", Slot = "26")]
	public virtual Task WriteAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x600316E")]
	[Address(RVA = "0x5472FB0", Offset = "0x5471FB0", VA = "0x5472FB0", Slot = "27")]
	public virtual Task FlushAsync()
	{
		return null;
	}

	[Token(Token = "0x600316F")]
	[Address(RVA = "0x5473270", Offset = "0x5472270", VA = "0x5473270")]
	public static TextWriter Synchronized(TextWriter writer)
	{
		return null;
	}
}
