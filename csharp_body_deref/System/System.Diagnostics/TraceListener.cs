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

[Token(Token = "0x200010B")]
public abstract class TraceListener : MarshalByRefObject, IDisposable
{
	[Token(Token = "0x4000470")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int indentLevel;

	[Token(Token = "0x4000471")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int indentSize;

	[Token(Token = "0x4000472")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private TraceOptions traceOptions;

	[Token(Token = "0x4000473")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private bool needIndent;

	[Token(Token = "0x4000474")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string listenerName;

	[Token(Token = "0x4000475")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private TraceFilter filter;

	[Token(Token = "0x170000FE")]
	public virtual bool IsThreadSafe
	{
		[Token(Token = "0x6000663")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FF")]
	public int IndentLevel
	{
		[Token(Token = "0x6000667")]
		[Address(RVA = "0x2877230", Offset = "0x2875830", VA = "0x182877230")]
		set
		{
		}
	}

	[Token(Token = "0x17000100")]
	public int IndentSize
	{
		[Token(Token = "0x6000668")]
		[Address(RVA = "0x2877250", Offset = "0x2875850", VA = "0x182877250")]
		set
		{
		}
	}

	[Token(Token = "0x17000101")]
	[ComVisible(false)]
	public TraceFilter Filter
	{
		[Token(Token = "0x6000669")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000102")]
	protected bool NeedIndent
	{
		[Token(Token = "0x600066A")]
		[Address(RVA = "0x584270", Offset = "0x582870", VA = "0x180584270")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600066B")]
		[Address(RVA = "0x584290", Offset = "0x582890", VA = "0x180584290")]
		set
		{
		}
	}

	[Token(Token = "0x17000103")]
	[ComVisible(false)]
	public TraceOptions TraceOutputOptions
	{
		[Token(Token = "0x600066C")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(TraceOptions);
		}
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x28771F0", Offset = "0x28757F0", VA = "0x1828771F0")]
	protected TraceListener(string name)
	{
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x28766F0", Offset = "0x2874CF0", VA = "0x1828766F0", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	public virtual void Flush()
	{
	}

	[Token(Token = "0x600066D")]
	public abstract void Write(string message);

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x2877140", Offset = "0x2875740", VA = "0x182877140", Slot = "11")]
	protected virtual void WriteIndent()
	{
	}

	[Token(Token = "0x600066F")]
	public abstract void WriteLine(string message);

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x2876760", Offset = "0x2874D60", VA = "0x182876760", Slot = "13")]
	[ComVisible(false)]
	public virtual void TraceEvent(TraceEventCache eventCache, string source, TraceEventType eventType, int id, string message)
	{
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x2877050", Offset = "0x2875650", VA = "0x182877050")]
	private void WriteHeader(string source, TraceEventType eventType, int id)
	{
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x2876900", Offset = "0x2874F00", VA = "0x182876900")]
	private void WriteFooter(TraceEventCache eventCache)
	{
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x2876750", Offset = "0x2874D50", VA = "0x182876750")]
	internal bool IsEnabled(TraceOptions opts)
	{
		return default(bool);
	}
}
