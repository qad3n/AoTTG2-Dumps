// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.MarshalByValueComponent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001C7")]
[DesignerCategory("Component")]
[TypeConverter(typeof(ComponentConverter))]
public class MarshalByValueComponent : IComponent, IDisposable, IServiceProvider
{
	[Token(Token = "0x40006D9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object s_eventDisposed;

	[Token(Token = "0x40006DA")]
	[FieldOffset(Offset = "0x10")]
	private ISite _site;

	[Token(Token = "0x40006DB")]
	[FieldOffset(Offset = "0x18")]
	private EventHandlerList _events;

	[Token(Token = "0x1700024B")]
	protected EventHandlerList Events
	{
		[Token(Token = "0x6000B7C")]
		[Address(RVA = "0x28A27B0", Offset = "0x28A0DB0", VA = "0x1828A27B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024C")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public virtual ISite Site
	{
		[Token(Token = "0x6000B7D")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B7E")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x1700024D")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public virtual IContainer Container
	{
		[Token(Token = "0x6000B81")]
		[Address(RVA = "0x28A2710", Offset = "0x28A0D10", VA = "0x1828A2710", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024E")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	public virtual bool DesignMode
	{
		[Token(Token = "0x6000B83")]
		[Address(RVA = "0x28A2760", Offset = "0x28A0D60", VA = "0x1828A2760", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000009")]
	public event EventHandler Disposed
	{
		[Token(Token = "0x6000B7A")]
		[Address(RVA = "0x28A2640", Offset = "0x28A0C40", VA = "0x1828A2640", Slot = "6")]
		add
		{
		}
		[Token(Token = "0x6000B7B")]
		[Address(RVA = "0x28A2820", Offset = "0x28A0E20", VA = "0x1828A2820", Slot = "7")]
		remove
		{
		}
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public MarshalByValueComponent()
	{
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x19A7CB0", Offset = "0x19A62B0", VA = "0x1819A7CB0", Slot = "1")]
	~MarshalByValueComponent()
	{
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x28A21C0", Offset = "0x28A07C0", VA = "0x1828A21C0", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x28A2220", Offset = "0x28A0820", VA = "0x1828A2220", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x28A2470", Offset = "0x28A0A70", VA = "0x1828A2470", Slot = "14")]
	public virtual object GetService(Type service)
	{
		return null;
	}

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x28A24D0", Offset = "0x28A0AD0", VA = "0x1828A24D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
