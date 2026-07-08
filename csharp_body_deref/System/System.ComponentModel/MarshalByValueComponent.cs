using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002BC")]
[TypeConverter(typeof(ComponentConverter))]
[DesignerCategory("Component")]
public class MarshalByValueComponent : IComponent, IDisposable, IServiceProvider
{
	[Token(Token = "0x4000DA2")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object s_eventDisposed;

	[Token(Token = "0x4000DA3")]
	[FieldOffset(Offset = "0x10")]
	private ISite _site;

	[Token(Token = "0x4000DA4")]
	[FieldOffset(Offset = "0x18")]
	private EventHandlerList _events;

	[Token(Token = "0x170003DC")]
	protected EventHandlerList Events
	{
		[Token(Token = "0x6001134")]
		[Address(RVA = "0x4573310", Offset = "0x4573310", VA = "0x4573310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DD")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	public virtual ISite Site
	{
		[Token(Token = "0x6001135")]
		[Address(RVA = "0x45734C0", Offset = "0x45734C0", VA = "0x45734C0", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001136")]
		[Address(RVA = "0x45734D0", Offset = "0x45734D0", VA = "0x45734D0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x170003DE")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public virtual IContainer Container
	{
		[Token(Token = "0x6001139")]
		[Address(RVA = "0x4573840", Offset = "0x4573840", VA = "0x4573840", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DF")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	public virtual bool DesignMode
	{
		[Token(Token = "0x600113B")]
		[Address(RVA = "0x4573990", Offset = "0x4573990", VA = "0x4573990", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000009")]
	public event EventHandler Disposed
	{
		[Token(Token = "0x6001132")]
		[Address(RVA = "0x4573210", Offset = "0x4573210", VA = "0x4573210", Slot = "6")]
		add
		{
		}
		[Token(Token = "0x6001133")]
		[Address(RVA = "0x4573380", Offset = "0x4573380", VA = "0x4573380", Slot = "7")]
		remove
		{
		}
	}

	[Token(Token = "0x6001130")]
	[Address(RVA = "0x4573170", Offset = "0x4573170", VA = "0x4573170")]
	public MarshalByValueComponent()
	{
	}

	[Token(Token = "0x6001131")]
	[Address(RVA = "0x4573180", Offset = "0x4573180", VA = "0x4573180", Slot = "1")]
	~MarshalByValueComponent()
	{
	}

	[Token(Token = "0x6001137")]
	[Address(RVA = "0x45734E0", Offset = "0x45734E0", VA = "0x45734E0", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001138")]
	[Address(RVA = "0x4573550", Offset = "0x4573550", VA = "0x4573550", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600113A")]
	[Address(RVA = "0x45738E0", Offset = "0x45738E0", VA = "0x45738E0", Slot = "14")]
	public virtual object GetService(Type service)
	{
		return null;
	}

	[Token(Token = "0x600113C")]
	[Address(RVA = "0x4573A30", Offset = "0x4573A30", VA = "0x4573A30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
