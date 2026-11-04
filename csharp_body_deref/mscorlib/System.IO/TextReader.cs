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
[Token(Token = "0x2000679")]
public abstract class TextReader : MarshalByRefObject, IDisposable
{
	[Serializable]
	[Token(Token = "0x200067A")]
	private sealed class NullTextReader : TextReader
	{
		[Token(Token = "0x6003189")]
		[Address(RVA = "0x1AF15F0", Offset = "0x1AEFBF0", VA = "0x181AF15F0")]
		public NullTextReader()
		{
		}

		[Token(Token = "0x600318A")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "11")]
		public override int Read(char[] buffer, int index, int count)
		{
			return default(int);
		}

		[Token(Token = "0x600318B")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "14")]
		public override string ReadLine()
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x200067B")]
	internal sealed class SyncTextReader : TextReader
	{
		[Token(Token = "0x4001A29")]
		[FieldOffset(Offset = "0x18")]
		internal readonly TextReader _in;

		[Token(Token = "0x600318C")]
		[Address(RVA = "0x1AFAD60", Offset = "0x1AF9360", VA = "0x181AFAD60")]
		internal SyncTextReader(TextReader t)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x600318D")]
		[Address(RVA = "0x1AFAA60", Offset = "0x1AF9060", VA = "0x181AFAA60", Slot = "7")]
		public override void Close()
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x600318E")]
		[Address(RVA = "0x1AFAA90", Offset = "0x1AF9090", VA = "0x181AFAA90", Slot = "8")]
		protected override void Dispose(bool disposing)
		{
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x600318F")]
		[Address(RVA = "0x1953CF0", Offset = "0x19522F0", VA = "0x181953CF0", Slot = "9")]
		public override int Peek()
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003190")]
		[Address(RVA = "0x1AFAD30", Offset = "0x1AF9330", VA = "0x181AFAD30", Slot = "10")]
		public override int Read()
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003191")]
		[Address(RVA = "0x1AFAD00", Offset = "0x1AF9300", VA = "0x181AFAD00", Slot = "11")]
		public override int Read(char[] buffer, int index, int count)
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003192")]
		[Address(RVA = "0x1AFACA0", Offset = "0x1AF92A0", VA = "0x181AFACA0", Slot = "14")]
		public override string ReadLine()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003193")]
		[Address(RVA = "0x1AFACD0", Offset = "0x1AF92D0", VA = "0x181AFACD0", Slot = "13")]
		public override string ReadToEnd()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)32)]
		[Token(Token = "0x6003194")]
		[Address(RVA = "0x1AFAAF0", Offset = "0x1AF90F0", VA = "0x181AFAAF0", Slot = "15")]
		public override Task<int> ReadAsync(char[] buffer, int index, int count)
		{
			return null;
		}
	}

	[Token(Token = "0x4001A28")]
	[FieldOffset(Offset = "0x0")]
	public static readonly TextReader Null;

	[Token(Token = "0x600317B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected TextReader()
	{
	}

	[Token(Token = "0x600317C")]
	[Address(RVA = "0x1AFB520", Offset = "0x1AF9B20", VA = "0x181AFB520", Slot = "7")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x600317D")]
	[Address(RVA = "0x1AFB580", Offset = "0x1AF9B80", VA = "0x181AFB580", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600317E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600317F")]
	[Address(RVA = "0x1A5F1E0", Offset = "0x1A5D7E0", VA = "0x181A5F1E0", Slot = "9")]
	public virtual int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x6003180")]
	[Address(RVA = "0x1A5F1E0", Offset = "0x1A5D7E0", VA = "0x181A5F1E0", Slot = "10")]
	public virtual int Read()
	{
		return default(int);
	}

	[Token(Token = "0x6003181")]
	[Address(RVA = "0x1AFBE90", Offset = "0x1AFA490", VA = "0x181AFBE90", Slot = "11")]
	public virtual int Read(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003182")]
	[Address(RVA = "0x1AFBC40", Offset = "0x1AFA240", VA = "0x181AFBC40", Slot = "12")]
	public virtual int Read(Span<char> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6003183")]
	[Address(RVA = "0x1AFBB40", Offset = "0x1AFA140", VA = "0x181AFBB40", Slot = "13")]
	public virtual string ReadToEnd()
	{
		return null;
	}

	[Token(Token = "0x6003184")]
	[Address(RVA = "0x1AFBA30", Offset = "0x1AFA030", VA = "0x181AFBA30", Slot = "14")]
	public virtual string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x6003185")]
	[Address(RVA = "0x1AFB830", Offset = "0x1AF9E30", VA = "0x181AFB830", Slot = "15")]
	public virtual Task<int> ReadAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6003186")]
	[Address(RVA = "0x1AFB5E0", Offset = "0x1AF9BE0", VA = "0x181AFB5E0", Slot = "16")]
	internal virtual ValueTask<int> ReadAsyncInternal(Memory<char> buffer, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6003187")]
	[Address(RVA = "0x1AFC080", Offset = "0x1AFA680", VA = "0x181AFC080")]
	public static TextReader Synchronized(TextReader reader)
	{
		return null;
	}
}
