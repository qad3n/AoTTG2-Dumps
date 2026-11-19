// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.TraceListener
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000CC")]
public abstract class TraceListener : MarshalByRefObject, IDisposable
{
	[Token(Token = "0x40003A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int indentLevel;

	[Token(Token = "0x40003A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int indentSize;

	[Token(Token = "0x40003A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private TraceOptions traceOptions;

	[Token(Token = "0x40003A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private bool needIndent;

	[Token(Token = "0x40003A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string listenerName;

	[Token(Token = "0x40003A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private TraceFilter filter;

	[Token(Token = "0x170000CF")]
	public virtual bool IsThreadSafe
	{
		[Token(Token = "0x60004AD")]
		[Address(RVA = "0x6201CE0", Offset = "0x6200CE0", VA = "0x6201CE0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D0")]
	public int IndentLevel
	{
		[Token(Token = "0x60004B1")]
		[Address(RVA = "0x62018F0", Offset = "0x62008F0", VA = "0x62018F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D1")]
	public int IndentSize
	{
		[Token(Token = "0x60004B2")]
		[Address(RVA = "0x6201910", Offset = "0x6200910", VA = "0x6201910")]
		set
		{
		}
	}

	[Token(Token = "0x170000D2")]
	[ComVisible(false)]
	public TraceFilter Filter
	{
		[Token(Token = "0x60004B3")]
		[Address(RVA = "0x6201D80", Offset = "0x6200D80", VA = "0x6201D80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D3")]
	protected bool NeedIndent
	{
		[Token(Token = "0x60004B4")]
		[Address(RVA = "0x6201D90", Offset = "0x6200D90", VA = "0x6201D90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004B5")]
		[Address(RVA = "0x6201DA0", Offset = "0x6200DA0", VA = "0x6201DA0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D4")]
	[ComVisible(false)]
	public TraceOptions TraceOutputOptions
	{
		[Token(Token = "0x60004B6")]
		[Address(RVA = "0x6201DB0", Offset = "0x6200DB0", VA = "0x6201DB0")]
		get
		{
			return default(TraceOptions);
		}
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x6201CA0", Offset = "0x6200CA0", VA = "0x6201CA0")]
	protected TraceListener(string name)
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x6201CF0", Offset = "0x6200CF0", VA = "0x6201CF0", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x6201D60", Offset = "0x6200D60", VA = "0x6201D60", Slot = "8")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x6201D70", Offset = "0x6200D70", VA = "0x6201D70", Slot = "9")]
	public virtual void Flush()
	{
	}

	[Token(Token = "0x60004B7")]
	public abstract void Write(string message);

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x6201DC0", Offset = "0x6200DC0", VA = "0x6201DC0", Slot = "11")]
	protected virtual void WriteIndent()
	{
	}

	[Token(Token = "0x60004B9")]
	public abstract void WriteLine(string message);

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x6201E70", Offset = "0x6200E70", VA = "0x6201E70", Slot = "13")]
	[ComVisible(false)]
	public virtual void TraceEvent(TraceEventCache eventCache, string source, TraceEventType eventType, int id, string message)
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x6201F20", Offset = "0x6200F20", VA = "0x6201F20")]
	private void WriteHeader(string source, TraceEventType eventType, int id)
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x6202020", Offset = "0x6201020", VA = "0x6202020")]
	private void WriteFooter(TraceEventCache eventCache)
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x6202720", Offset = "0x6201720", VA = "0x6202720")]
	internal bool IsEnabled(TraceOptions opts)
	{
		return default(bool);
	}
}
