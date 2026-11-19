// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.MarshalByValueComponent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000188")]
[TypeConverter(typeof(ComponentConverter))]
[DesignerCategory("Component")]
public class MarshalByValueComponent : IComponent, IDisposable, IServiceProvider
{
	[Token(Token = "0x400060A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object s_eventDisposed;

	[Token(Token = "0x400060B")]
	[FieldOffset(Offset = "0x10")]
	private ISite _site;

	[Token(Token = "0x400060C")]
	[FieldOffset(Offset = "0x18")]
	private EventHandlerList _events;

	[Token(Token = "0x1700021C")]
	protected EventHandlerList Events
	{
		[Token(Token = "0x60009BC")]
		[Address(RVA = "0x6238310", Offset = "0x6237310", VA = "0x6238310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021D")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public virtual ISite Site
	{
		[Token(Token = "0x60009BD")]
		[Address(RVA = "0x62384C0", Offset = "0x62374C0", VA = "0x62384C0", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x62384D0", Offset = "0x62374D0", VA = "0x62384D0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x1700021E")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public virtual IContainer Container
	{
		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x6238810", Offset = "0x6237810", VA = "0x6238810", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021F")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	public virtual bool DesignMode
	{
		[Token(Token = "0x60009C3")]
		[Address(RVA = "0x6238960", Offset = "0x6237960", VA = "0x6238960", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000009")]
	public event EventHandler Disposed
	{
		[Token(Token = "0x60009BA")]
		[Address(RVA = "0x6238210", Offset = "0x6237210", VA = "0x6238210", Slot = "6")]
		add
		{
		}
		[Token(Token = "0x60009BB")]
		[Address(RVA = "0x6238380", Offset = "0x6237380", VA = "0x6238380", Slot = "7")]
		remove
		{
		}
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x6238160", Offset = "0x6237160", VA = "0x6238160")]
	public MarshalByValueComponent()
	{
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x6238170", Offset = "0x6237170", VA = "0x6238170", Slot = "1")]
	~MarshalByValueComponent()
	{
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x62384E0", Offset = "0x62374E0", VA = "0x62384E0", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x6238550", Offset = "0x6237550", VA = "0x6238550", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60009C2")]
	[Address(RVA = "0x62388B0", Offset = "0x62378B0", VA = "0x62388B0", Slot = "14")]
	public virtual object GetService(Type service)
	{
		return null;
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x6238A00", Offset = "0x6237A00", VA = "0x6238A00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
