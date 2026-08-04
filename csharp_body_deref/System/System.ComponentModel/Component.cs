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
		[Address(RVA = "0x48AE6B0", Offset = "0x48AE6B0", VA = "0x48AE6B0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700044F")]
	internal bool CanRaiseEventsInternal
	{
		[Token(Token = "0x600130F")]
		[Address(RVA = "0x48AE6C0", Offset = "0x48AE6C0", VA = "0x48AE6C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000450")]
	protected EventHandlerList Events
	{
		[Token(Token = "0x6001312")]
		[Address(RVA = "0x48AE7F0", Offset = "0x48AE7F0", VA = "0x48AE7F0")]
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
		[Address(RVA = "0x48AE980", Offset = "0x48AE980", VA = "0x48AE980", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001314")]
		[Address(RVA = "0x48AE990", Offset = "0x48AE990", VA = "0x48AE990", Slot = "13")]
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
		[Address(RVA = "0x48AED70", Offset = "0x48AED70", VA = "0x48AED70")]
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
		[Address(RVA = "0x48AEEC0", Offset = "0x48AEEC0", VA = "0x48AEEC0")]
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
		[Address(RVA = "0x48AE6E0", Offset = "0x48AE6E0", VA = "0x48AE6E0", Slot = "8")]
		add
		{
		}
		[Token(Token = "0x6001311")]
		[Address(RVA = "0x48AE870", Offset = "0x48AE870", VA = "0x48AE870", Slot = "9")]
		remove
		{
		}
	}

	[Token(Token = "0x600130D")]
	[Address(RVA = "0x48AE620", Offset = "0x48AE620", VA = "0x48AE620", Slot = "1")]
	~Component()
	{
	}

	[Token(Token = "0x6001315")]
	[Address(RVA = "0x48AE9A0", Offset = "0x48AE9A0", VA = "0x48AE9A0", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001316")]
	[Address(RVA = "0x48AEA10", Offset = "0x48AEA10", VA = "0x48AEA10", Slot = "14")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001318")]
	[Address(RVA = "0x48AEE10", Offset = "0x48AEE10", VA = "0x48AEE10", Slot = "15")]
	protected virtual object GetService(Type service)
	{
		return null;
	}

	[Token(Token = "0x600131A")]
	[Address(RVA = "0x48AEF60", Offset = "0x48AEF60", VA = "0x48AEF60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600131B")]
	[Address(RVA = "0x48AF0A0", Offset = "0x48AF0A0", VA = "0x48AF0A0")]
	public Component()
	{
	}
}
