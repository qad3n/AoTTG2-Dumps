// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Container
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x48B0580", Offset = "0x48B0580", VA = "0x48B0580", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000456")]
		public IContainer Container
		{
			[Token(Token = "0x600132F")]
			[Address(RVA = "0x48B0590", Offset = "0x48B0590", VA = "0x48B0590", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000457")]
		public bool DesignMode
		{
			[Token(Token = "0x6001331")]
			[Address(RVA = "0x48B0640", Offset = "0x48B0640", VA = "0x48B0640", Slot = "6")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000458")]
		public string Name
		{
			[Token(Token = "0x6001332")]
			[Address(RVA = "0x48B0650", Offset = "0x48B0650", VA = "0x48B0650", Slot = "7")]
			get
			{
				return null;
			}
			[Token(Token = "0x6001333")]
			[Address(RVA = "0x48B0660", Offset = "0x48B0660", VA = "0x48B0660", Slot = "8")]
			set
			{
			}
		}

		[Token(Token = "0x600132D")]
		[Address(RVA = "0x48AF8A0", Offset = "0x48AF8A0", VA = "0x48AF8A0")]
		internal Site(IComponent component, Container container, string name)
		{
		}

		[Token(Token = "0x6001330")]
		[Address(RVA = "0x48B05A0", Offset = "0x48B05A0", VA = "0x48B05A0", Slot = "9")]
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
		[Address(RVA = "0x48AF900", Offset = "0x48AF900", VA = "0x48AF900", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001320")]
	[Address(RVA = "0x48AF200", Offset = "0x48AF200", VA = "0x48AF200", Slot = "1")]
	~Container()
	{
	}

	[Token(Token = "0x6001321")]
	[Address(RVA = "0x48AF290", Offset = "0x48AF290", VA = "0x48AF290", Slot = "9")]
	public virtual void Add(IComponent component)
	{
	}

	[Token(Token = "0x6001322")]
	[Address(RVA = "0x48AF2B0", Offset = "0x48AF2B0", VA = "0x48AF2B0", Slot = "10")]
	public virtual void Add(IComponent component, string name)
	{
	}

	[Token(Token = "0x6001323")]
	[Address(RVA = "0x48AF810", Offset = "0x48AF810", VA = "0x48AF810", Slot = "11")]
	protected virtual ISite CreateSite(IComponent component, string name)
	{
		return null;
	}

	[Token(Token = "0x6001324")]
	[Address(RVA = "0x48A0190", Offset = "0x48A0190", VA = "0x48A0190", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001325")]
	[Address(RVA = "0x489FC00", Offset = "0x489FC00", VA = "0x489FC00", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001326")]
	[Address(RVA = "0x48A00A0", Offset = "0x48A00A0", VA = "0x48A00A0", Slot = "13")]
	protected virtual object GetService(Type service)
	{
		return null;
	}

	[Token(Token = "0x6001328")]
	[Address(RVA = "0x48AFDB0", Offset = "0x48AFDB0", VA = "0x48AFDB0", Slot = "15")]
	public virtual void Remove(IComponent component)
	{
	}

	[Token(Token = "0x6001329")]
	[Address(RVA = "0x48AFDC0", Offset = "0x48AFDC0", VA = "0x48AFDC0")]
	private void Remove(IComponent component, bool preserveSite)
	{
	}

	[Token(Token = "0x600132A")]
	[Address(RVA = "0x48B0120", Offset = "0x48B0120", VA = "0x48B0120")]
	protected void RemoveWithoutUnsiting(IComponent component)
	{
	}

	[Token(Token = "0x600132B")]
	[Address(RVA = "0x48B0130", Offset = "0x48B0130", VA = "0x48B0130", Slot = "16")]
	protected virtual void ValidateName(IComponent component, string name)
	{
	}

	[Token(Token = "0x600132C")]
	[Address(RVA = "0x489F6A0", Offset = "0x489F6A0", VA = "0x489F6A0")]
	public Container()
	{
	}
}
