// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Container
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001C3")]
public class Container : IContainer, IDisposable
{
	[Token(Token = "0x20001C4")]
	private class Site : ISite, IServiceProvider
	{
		[Token(Token = "0x40006B3")]
		[FieldOffset(Offset = "0x10")]
		private IComponent component;

		[Token(Token = "0x40006B4")]
		[FieldOffset(Offset = "0x18")]
		private Container container;

		[Token(Token = "0x40006B5")]
		[FieldOffset(Offset = "0x20")]
		private string name;

		[Token(Token = "0x17000295")]
		public IComponent Component
		{
			[Token(Token = "0x6000BB6")]
			[Address(RVA = "0x624F810", Offset = "0x624E810", VA = "0x624F810", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000296")]
		public IContainer Container
		{
			[Token(Token = "0x6000BB7")]
			[Address(RVA = "0x624F820", Offset = "0x624E820", VA = "0x624F820", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000297")]
		public bool DesignMode
		{
			[Token(Token = "0x6000BB9")]
			[Address(RVA = "0x624F8D0", Offset = "0x624E8D0", VA = "0x624F8D0", Slot = "6")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000298")]
		public string Name
		{
			[Token(Token = "0x6000BBA")]
			[Address(RVA = "0x624F8E0", Offset = "0x624E8E0", VA = "0x624F8E0", Slot = "7")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000BBB")]
			[Address(RVA = "0x624F8F0", Offset = "0x624E8F0", VA = "0x624F8F0", Slot = "8")]
			set
			{
			}
		}

		[Token(Token = "0x6000BB5")]
		[Address(RVA = "0x624EBF0", Offset = "0x624DBF0", VA = "0x624EBF0")]
		internal Site(IComponent component, Container container, string name)
		{
		}

		[Token(Token = "0x6000BB8")]
		[Address(RVA = "0x624F830", Offset = "0x624E830", VA = "0x624F830", Slot = "9")]
		public object GetService(Type service)
		{
			return null;
		}
	}

	[Token(Token = "0x40006AD")]
	[FieldOffset(Offset = "0x10")]
	private ISite[] sites;

	[Token(Token = "0x40006AE")]
	[FieldOffset(Offset = "0x18")]
	private int siteCount;

	[Token(Token = "0x40006AF")]
	[FieldOffset(Offset = "0x20")]
	private ComponentCollection components;

	[Token(Token = "0x40006B0")]
	[FieldOffset(Offset = "0x28")]
	private ContainerFilterService filter;

	[Token(Token = "0x40006B1")]
	[FieldOffset(Offset = "0x30")]
	private bool checkedFilter;

	[Token(Token = "0x40006B2")]
	[FieldOffset(Offset = "0x38")]
	private object syncObj;

	[Token(Token = "0x17000294")]
	public virtual ComponentCollection Components
	{
		[Token(Token = "0x6000BAF")]
		[Address(RVA = "0x624EC50", Offset = "0x624DC50", VA = "0x624EC50", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x624E5E0", Offset = "0x624D5E0", VA = "0x624E5E0", Slot = "1")]
	~Container()
	{
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x624E680", Offset = "0x624D680", VA = "0x624E680", Slot = "9")]
	public virtual void Add(IComponent component)
	{
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x624E6A0", Offset = "0x624D6A0", VA = "0x624E6A0", Slot = "10")]
	public virtual void Add(IComponent component, string name)
	{
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x624EB60", Offset = "0x624DB60", VA = "0x624EB60", Slot = "11")]
	protected virtual ISite CreateSite(IComponent component, string name)
	{
		return null;
	}

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x623FD70", Offset = "0x623ED70", VA = "0x623FD70", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x623F830", Offset = "0x623E830", VA = "0x623F830", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x623FC80", Offset = "0x623EC80", VA = "0x623FC80", Slot = "13")]
	protected virtual object GetService(Type service)
	{
		return null;
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x624F0A0", Offset = "0x624E0A0", VA = "0x624F0A0", Slot = "15")]
	public virtual void Remove(IComponent component)
	{
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x624F0B0", Offset = "0x624E0B0", VA = "0x624F0B0")]
	private void Remove(IComponent component, bool preserveSite)
	{
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x624F3B0", Offset = "0x624E3B0", VA = "0x624F3B0")]
	protected void RemoveWithoutUnsiting(IComponent component)
	{
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x624F3C0", Offset = "0x624E3C0", VA = "0x624F3C0", Slot = "16")]
	protected virtual void ValidateName(IComponent component, string name)
	{
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x623F2D0", Offset = "0x623E2D0", VA = "0x623F2D0")]
	public Container()
	{
	}
}
