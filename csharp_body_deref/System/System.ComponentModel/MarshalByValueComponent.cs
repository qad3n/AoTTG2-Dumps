// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.MarshalByValueComponent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4898410", Offset = "0x4898410", VA = "0x4898410")]
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
		[Address(RVA = "0x48985C0", Offset = "0x48985C0", VA = "0x48985C0", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001136")]
		[Address(RVA = "0x48985D0", Offset = "0x48985D0", VA = "0x48985D0", Slot = "11")]
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
		[Address(RVA = "0x4898940", Offset = "0x4898940", VA = "0x4898940", Slot = "13")]
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
		[Address(RVA = "0x4898A90", Offset = "0x4898A90", VA = "0x4898A90", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000009")]
	public event EventHandler Disposed
	{
		[Token(Token = "0x6001132")]
		[Address(RVA = "0x4898310", Offset = "0x4898310", VA = "0x4898310", Slot = "6")]
		add
		{
		}
		[Token(Token = "0x6001133")]
		[Address(RVA = "0x4898480", Offset = "0x4898480", VA = "0x4898480", Slot = "7")]
		remove
		{
		}
	}

	[Token(Token = "0x6001130")]
	[Address(RVA = "0x4898270", Offset = "0x4898270", VA = "0x4898270")]
	public MarshalByValueComponent()
	{
	}

	[Token(Token = "0x6001131")]
	[Address(RVA = "0x4898280", Offset = "0x4898280", VA = "0x4898280", Slot = "1")]
	~MarshalByValueComponent()
	{
	}

	[Token(Token = "0x6001137")]
	[Address(RVA = "0x48985E0", Offset = "0x48985E0", VA = "0x48985E0", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001138")]
	[Address(RVA = "0x4898650", Offset = "0x4898650", VA = "0x4898650", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600113A")]
	[Address(RVA = "0x48989E0", Offset = "0x48989E0", VA = "0x48989E0", Slot = "14")]
	public virtual object GetService(Type service)
	{
		return null;
	}

	[Token(Token = "0x600113C")]
	[Address(RVA = "0x4898B30", Offset = "0x4898B30", VA = "0x4898B30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
