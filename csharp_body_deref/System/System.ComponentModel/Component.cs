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

[Token(Token = "0x2000200")]
[DesignerCategory("Component")]
[ClassInterface(ClassInterfaceType.AutoDispatch)]
[ComVisible(true)]
public class Component : MarshalByRefObject, IComponent, IDisposable
{
	[Token(Token = "0x4000779")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly object EventDisposed;

	[Token(Token = "0x400077A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ISite site;

	[Token(Token = "0x400077B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private EventHandlerList events;

	[Token(Token = "0x170002BD")]
	protected virtual bool CanRaiseEvents
	{
		[Token(Token = "0x6000D56")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002BE")]
	internal bool CanRaiseEventsInternal
	{
		[Token(Token = "0x6000D57")]
		[Address(RVA = "0x1A4B640", Offset = "0x1A49C40", VA = "0x181A4B640")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002BF")]
	protected EventHandlerList Events
	{
		[Token(Token = "0x6000D5A")]
		[Address(RVA = "0x28AFB10", Offset = "0x28AE110", VA = "0x1828AFB10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C0")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public virtual ISite Site
	{
		[Token(Token = "0x6000D5B")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D5C")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170002C1")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	public IContainer Container
	{
		[Token(Token = "0x6000D5F")]
		[Address(RVA = "0x28AFA70", Offset = "0x28AE070", VA = "0x1828AFA70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C2")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	protected bool DesignMode
	{
		[Token(Token = "0x6000D61")]
		[Address(RVA = "0x28AFAC0", Offset = "0x28AE0C0", VA = "0x1828AFAC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1400000D")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	[Browsable(false)]
	public event EventHandler Disposed
	{
		[Token(Token = "0x6000D58")]
		[Address(RVA = "0x28AF990", Offset = "0x28ADF90", VA = "0x1828AF990", Slot = "8")]
		add
		{
		}
		[Token(Token = "0x6000D59")]
		[Address(RVA = "0x28AFB80", Offset = "0x28AE180", VA = "0x1828AFB80", Slot = "9")]
		remove
		{
		}
	}

	[Token(Token = "0x6000D55")]
	[Address(RVA = "0x28AF750", Offset = "0x28ADD50", VA = "0x1828AF750", Slot = "1")]
	~Component()
	{
	}

	[Token(Token = "0x6000D5D")]
	[Address(RVA = "0x28AF500", Offset = "0x28ADB00", VA = "0x1828AF500", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D5E")]
	[Address(RVA = "0x28AF560", Offset = "0x28ADB60", VA = "0x1828AF560", Slot = "14")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000D60")]
	[Address(RVA = "0x28AF7C0", Offset = "0x28ADDC0", VA = "0x1828AF7C0", Slot = "15")]
	protected virtual object GetService(Type service)
	{
		return null;
	}

	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x28AF820", Offset = "0x28ADE20", VA = "0x1828AF820", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000D63")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public Component()
	{
	}
}
