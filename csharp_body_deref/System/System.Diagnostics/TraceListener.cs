using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000CB")]
public abstract class TraceListener : MarshalByRefObject, IDisposable
{
	[Token(Token = "0x400039E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int indentLevel;

	[Token(Token = "0x400039F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int indentSize;

	[Token(Token = "0x40003A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private TraceOptions traceOptions;

	[Token(Token = "0x40003A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private bool needIndent;

	[Token(Token = "0x40003A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string listenerName;

	[Token(Token = "0x40003A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private TraceFilter filter;

	[Token(Token = "0x170000C5")]
	public virtual bool IsThreadSafe
	{
		[Token(Token = "0x6000483")]
		[Address(RVA = "0x46008B0", Offset = "0x46008B0", VA = "0x46008B0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C6")]
	public int IndentLevel
	{
		[Token(Token = "0x6000487")]
		[Address(RVA = "0x46004A0", Offset = "0x46004A0", VA = "0x46004A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C7")]
	public int IndentSize
	{
		[Token(Token = "0x6000488")]
		[Address(RVA = "0x46004C0", Offset = "0x46004C0", VA = "0x46004C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C8")]
	[ComVisible(false)]
	public TraceFilter Filter
	{
		[Token(Token = "0x6000489")]
		[Address(RVA = "0x4600950", Offset = "0x4600950", VA = "0x4600950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C9")]
	protected bool NeedIndent
	{
		[Token(Token = "0x600048A")]
		[Address(RVA = "0x4600960", Offset = "0x4600960", VA = "0x4600960")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600048B")]
		[Address(RVA = "0x4600970", Offset = "0x4600970", VA = "0x4600970")]
		set
		{
		}
	}

	[Token(Token = "0x170000CA")]
	[ComVisible(false)]
	public TraceOptions TraceOutputOptions
	{
		[Token(Token = "0x600048C")]
		[Address(RVA = "0x4600980", Offset = "0x4600980", VA = "0x4600980")]
		get
		{
			return default(TraceOptions);
		}
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x4600870", Offset = "0x4600870", VA = "0x4600870")]
	protected TraceListener(string name)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x46008C0", Offset = "0x46008C0", VA = "0x46008C0", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x4600930", Offset = "0x4600930", VA = "0x4600930", Slot = "8")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x4600940", Offset = "0x4600940", VA = "0x4600940", Slot = "9")]
	public virtual void Flush()
	{
	}

	[Token(Token = "0x600048D")]
	public abstract void Write(string message);

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x4600990", Offset = "0x4600990", VA = "0x4600990", Slot = "11")]
	protected virtual void WriteIndent()
	{
	}

	[Token(Token = "0x600048F")]
	public abstract void WriteLine(string message);

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x4600A50", Offset = "0x4600A50", VA = "0x4600A50", Slot = "13")]
	[ComVisible(false)]
	public virtual void TraceEvent(TraceEventCache eventCache, string source, TraceEventType eventType, int id, string message)
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x4600B00", Offset = "0x4600B00", VA = "0x4600B00")]
	private void WriteHeader(string source, TraceEventType eventType, int id)
	{
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x4600C00", Offset = "0x4600C00", VA = "0x4600C00")]
	private void WriteFooter(TraceEventCache eventCache)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x4601390", Offset = "0x4601390", VA = "0x4601390")]
	internal bool IsEnabled(TraceOptions opts)
	{
		return default(bool);
	}
}
