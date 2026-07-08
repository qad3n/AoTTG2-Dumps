using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002F7")]
public class Container : IContainer, IDisposable
{
	[Token(Token = "0x20002F8")]
	private class Site : ISite, IServiceProvider
	{
		[Token(Token = "0x4000E4B")]
		[FieldOffset(Offset = "0x10")]
		private IComponent component;

		[Token(Token = "0x4000E4C")]
		[FieldOffset(Offset = "0x18")]
		private Container container;

		[Token(Token = "0x4000E4D")]
		[FieldOffset(Offset = "0x20")]
		private string name;

		[Token(Token = "0x17000455")]
		public IComponent Component
		{
			[Token(Token = "0x600132E")]
			[Address(RVA = "0x458B480", Offset = "0x458B480", VA = "0x458B480", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000456")]
		public IContainer Container
		{
			[Token(Token = "0x600132F")]
			[Address(RVA = "0x458B490", Offset = "0x458B490", VA = "0x458B490", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000457")]
		public bool DesignMode
		{
			[Token(Token = "0x6001331")]
			[Address(RVA = "0x458B540", Offset = "0x458B540", VA = "0x458B540", Slot = "6")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000458")]
		public string Name
		{
			[Token(Token = "0x6001332")]
			[Address(RVA = "0x458B550", Offset = "0x458B550", VA = "0x458B550", Slot = "7")]
			get
			{
				return null;
			}
			[Token(Token = "0x6001333")]
			[Address(RVA = "0x458B560", Offset = "0x458B560", VA = "0x458B560", Slot = "8")]
			set
			{
			}
		}

		[Token(Token = "0x600132D")]
		[Address(RVA = "0x458A7A0", Offset = "0x458A7A0", VA = "0x458A7A0")]
		internal Site(IComponent component, Container container, string name)
		{
		}

		[Token(Token = "0x6001330")]
		[Address(RVA = "0x458B4A0", Offset = "0x458B4A0", VA = "0x458B4A0", Slot = "9")]
		public object GetService(Type service)
		{
			return null;
		}
	}

	[Token(Token = "0x4000E45")]
	[FieldOffset(Offset = "0x10")]
	private ISite[] sites;

	[Token(Token = "0x4000E46")]
	[FieldOffset(Offset = "0x18")]
	private int siteCount;

	[Token(Token = "0x4000E47")]
	[FieldOffset(Offset = "0x20")]
	private ComponentCollection components;

	[Token(Token = "0x4000E48")]
	[FieldOffset(Offset = "0x28")]
	private ContainerFilterService filter;

	[Token(Token = "0x4000E49")]
	[FieldOffset(Offset = "0x30")]
	private bool checkedFilter;

	[Token(Token = "0x4000E4A")]
	[FieldOffset(Offset = "0x38")]
	private object syncObj;

	[Token(Token = "0x17000454")]
	public virtual ComponentCollection Components
	{
		[Token(Token = "0x6001327")]
		[Address(RVA = "0x458A800", Offset = "0x458A800", VA = "0x458A800", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001320")]
	[Address(RVA = "0x458A100", Offset = "0x458A100", VA = "0x458A100", Slot = "1")]
	~Container()
	{
	}

	[Token(Token = "0x6001321")]
	[Address(RVA = "0x458A190", Offset = "0x458A190", VA = "0x458A190", Slot = "9")]
	public virtual void Add(IComponent component)
	{
	}

	[Token(Token = "0x6001322")]
	[Address(RVA = "0x458A1B0", Offset = "0x458A1B0", VA = "0x458A1B0", Slot = "10")]
	public virtual void Add(IComponent component, string name)
	{
	}

	[Token(Token = "0x6001323")]
	[Address(RVA = "0x458A710", Offset = "0x458A710", VA = "0x458A710", Slot = "11")]
	protected virtual ISite CreateSite(IComponent component, string name)
	{
		return null;
	}

	[Token(Token = "0x6001324")]
	[Address(RVA = "0x457B090", Offset = "0x457B090", VA = "0x457B090", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001325")]
	[Address(RVA = "0x457AB00", Offset = "0x457AB00", VA = "0x457AB00", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001326")]
	[Address(RVA = "0x457AFA0", Offset = "0x457AFA0", VA = "0x457AFA0", Slot = "13")]
	protected virtual object GetService(Type service)
	{
		return null;
	}

	[Token(Token = "0x6001328")]
	[Address(RVA = "0x458ACB0", Offset = "0x458ACB0", VA = "0x458ACB0", Slot = "15")]
	public virtual void Remove(IComponent component)
	{
	}

	[Token(Token = "0x6001329")]
	[Address(RVA = "0x458ACC0", Offset = "0x458ACC0", VA = "0x458ACC0")]
	private void Remove(IComponent component, bool preserveSite)
	{
	}

	[Token(Token = "0x600132A")]
	[Address(RVA = "0x458B020", Offset = "0x458B020", VA = "0x458B020")]
	protected void RemoveWithoutUnsiting(IComponent component)
	{
	}

	[Token(Token = "0x600132B")]
	[Address(RVA = "0x458B030", Offset = "0x458B030", VA = "0x458B030", Slot = "16")]
	protected virtual void ValidateName(IComponent component, string name)
	{
	}

	[Token(Token = "0x600132C")]
	[Address(RVA = "0x457A5A0", Offset = "0x457A5A0", VA = "0x457A5A0")]
	public Container()
	{
	}
}
