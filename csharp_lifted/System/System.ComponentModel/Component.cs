// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Component
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001C1")]
[ComVisible(true)]
[DesignerCategory("Component")]
[ClassInterface(ClassInterfaceType.AutoDispatch)]
public class Component : MarshalByRefObject, IComponent, IDisposable
{
	[Token(Token = "0x40006AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly object EventDisposed;

	[Token(Token = "0x40006AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ISite site;

	[Token(Token = "0x40006AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private EventHandlerList events;

	[Token(Token = "0x1700028E")]
	protected virtual bool CanRaiseEvents
	{
		[Token(Token = "0x6000B96")]
		[Address(RVA = "0x624DAD0", Offset = "0x624CAD0", VA = "0x624DAD0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700028F")]
	internal bool CanRaiseEventsInternal
	{
		[Token(Token = "0x6000B97")]
		[Address(RVA = "0x624DAE0", Offset = "0x624CAE0", VA = "0x624DAE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000290")]
	protected EventHandlerList Events
	{
		[Token(Token = "0x6000B9A")]
		[Address(RVA = "0x624DC10", Offset = "0x624CC10", VA = "0x624DC10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000291")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public virtual ISite Site
	{
		[Token(Token = "0x6000B9B")]
		[Address(RVA = "0x624DDA0", Offset = "0x624CDA0", VA = "0x624DDA0", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B9C")]
		[Address(RVA = "0x624DDB0", Offset = "0x624CDB0", VA = "0x624DDB0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000292")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	public IContainer Container
	{
		[Token(Token = "0x6000B9F")]
		[Address(RVA = "0x624E150", Offset = "0x624D150", VA = "0x624E150")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000293")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	protected bool DesignMode
	{
		[Token(Token = "0x6000BA1")]
		[Address(RVA = "0x624E2A0", Offset = "0x624D2A0", VA = "0x624E2A0")]
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
		[Token(Token = "0x6000B98")]
		[Address(RVA = "0x624DB00", Offset = "0x624CB00", VA = "0x624DB00", Slot = "8")]
		add
		{
		}
		[Token(Token = "0x6000B99")]
		[Address(RVA = "0x624DC90", Offset = "0x624CC90", VA = "0x624DC90", Slot = "9")]
		remove
		{
		}
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x624DA30", Offset = "0x624CA30", VA = "0x624DA30", Slot = "1")]
	~Component()
	{
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x624DDC0", Offset = "0x624CDC0", VA = "0x624DDC0", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x624DE30", Offset = "0x624CE30", VA = "0x624DE30", Slot = "14")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x624E1F0", Offset = "0x624D1F0", VA = "0x624E1F0", Slot = "15")]
	protected virtual object GetService(Type service)
	{
		return null;
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x624E340", Offset = "0x624D340", VA = "0x624E340", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x624E480", Offset = "0x624D480", VA = "0x624E480")]
	public Component()
	{
	}
}
