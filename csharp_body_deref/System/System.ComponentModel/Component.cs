using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002F5")]
[DesignerCategory("Component")]
[ComVisible(true)]
[ClassInterface(ClassInterfaceType.AutoDispatch)]
public class Component : MarshalByRefObject, IComponent, IDisposable
{
	[Token(Token = "0x4000E42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly object EventDisposed;

	[Token(Token = "0x4000E43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ISite site;

	[Token(Token = "0x4000E44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private EventHandlerList events;

	[Token(Token = "0x1700044E")]
	protected virtual bool CanRaiseEvents
	{
		[Token(Token = "0x600130E")]
		[Address(RVA = "0x45895B0", Offset = "0x45895B0", VA = "0x45895B0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700044F")]
	internal bool CanRaiseEventsInternal
	{
		[Token(Token = "0x600130F")]
		[Address(RVA = "0x45895C0", Offset = "0x45895C0", VA = "0x45895C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000450")]
	protected EventHandlerList Events
	{
		[Token(Token = "0x6001312")]
		[Address(RVA = "0x45896F0", Offset = "0x45896F0", VA = "0x45896F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000451")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	public virtual ISite Site
	{
		[Token(Token = "0x6001313")]
		[Address(RVA = "0x4589880", Offset = "0x4589880", VA = "0x4589880", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001314")]
		[Address(RVA = "0x4589890", Offset = "0x4589890", VA = "0x4589890", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000452")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	public IContainer Container
	{
		[Token(Token = "0x6001317")]
		[Address(RVA = "0x4589C70", Offset = "0x4589C70", VA = "0x4589C70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000453")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	protected bool DesignMode
	{
		[Token(Token = "0x6001319")]
		[Address(RVA = "0x4589DC0", Offset = "0x4589DC0", VA = "0x4589DC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1400000D")]
	[Browsable(false)]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public event EventHandler Disposed
	{
		[Token(Token = "0x6001310")]
		[Address(RVA = "0x45895E0", Offset = "0x45895E0", VA = "0x45895E0", Slot = "8")]
		add
		{
		}
		[Token(Token = "0x6001311")]
		[Address(RVA = "0x4589770", Offset = "0x4589770", VA = "0x4589770", Slot = "9")]
		remove
		{
		}
	}

	[Token(Token = "0x600130D")]
	[Address(RVA = "0x4589520", Offset = "0x4589520", VA = "0x4589520", Slot = "1")]
	~Component()
	{
	}

	[Token(Token = "0x6001315")]
	[Address(RVA = "0x45898A0", Offset = "0x45898A0", VA = "0x45898A0", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001316")]
	[Address(RVA = "0x4589910", Offset = "0x4589910", VA = "0x4589910", Slot = "14")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001318")]
	[Address(RVA = "0x4589D10", Offset = "0x4589D10", VA = "0x4589D10", Slot = "15")]
	protected virtual object GetService(Type service)
	{
		return null;
	}

	[Token(Token = "0x600131A")]
	[Address(RVA = "0x4589E60", Offset = "0x4589E60", VA = "0x4589E60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600131B")]
	[Address(RVA = "0x4589FA0", Offset = "0x4589FA0", VA = "0x4589FA0")]
	public Component()
	{
	}
}
