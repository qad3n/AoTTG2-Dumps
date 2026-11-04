// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Container
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000202")]
public class Container : IContainer, IDisposable
{
	[Token(Token = "0x2000203")]
	private class Site : ISite, IServiceProvider
	{
		[Token(Token = "0x4000782")]
		[FieldOffset(Offset = "0x10")]
		private IComponent component;

		[Token(Token = "0x4000783")]
		[FieldOffset(Offset = "0x18")]
		private Container container;

		[Token(Token = "0x4000784")]
		[FieldOffset(Offset = "0x20")]
		private string name;

		[Token(Token = "0x170002C4")]
		public IComponent Component
		{
			[Token(Token = "0x6000D76")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170002C5")]
		public IContainer Container
		{
			[Token(Token = "0x6000D77")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170002C6")]
		public bool DesignMode
		{
			[Token(Token = "0x6000D79")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "6")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170002C7")]
		public string Name
		{
			[Token(Token = "0x6000D7A")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "7")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000D7B")]
			[Address(RVA = "0x28C94D0", Offset = "0x28C7AD0", VA = "0x1828C94D0", Slot = "8")]
			set
			{
			}
		}

		[Token(Token = "0x6000D75")]
		[Address(RVA = "0xE56DE0", Offset = "0xE553E0", VA = "0x180E56DE0")]
		internal Site(IComponent component, Container container, string name)
		{
		}

		[Token(Token = "0x6000D78")]
		[Address(RVA = "0x28C9420", Offset = "0x28C7A20", VA = "0x1828C9420", Slot = "9")]
		public object GetService(Type service)
		{
			return null;
		}
	}

	[Token(Token = "0x400077C")]
	[FieldOffset(Offset = "0x10")]
	private ISite[] sites;

	[Token(Token = "0x400077D")]
	[FieldOffset(Offset = "0x18")]
	private int siteCount;

	[Token(Token = "0x400077E")]
	[FieldOffset(Offset = "0x20")]
	private ComponentCollection components;

	[Token(Token = "0x400077F")]
	[FieldOffset(Offset = "0x28")]
	private ContainerFilterService filter;

	[Token(Token = "0x4000780")]
	[FieldOffset(Offset = "0x30")]
	private bool checkedFilter;

	[Token(Token = "0x4000781")]
	[FieldOffset(Offset = "0x38")]
	private object syncObj;

	[Token(Token = "0x170002C3")]
	public virtual ComponentCollection Components
	{
		[Token(Token = "0x6000D6F")]
		[Address(RVA = "0x28B0A50", Offset = "0x28AF050", VA = "0x1828B0A50", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x19A7CB0", Offset = "0x19A62B0", VA = "0x1819A7CB0", Slot = "1")]
	~Container()
	{
	}

	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x28AFF60", Offset = "0x28AE560", VA = "0x1828AFF60", Slot = "9")]
	public virtual void Add(IComponent component)
	{
	}

	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x28AFC60", Offset = "0x28AE260", VA = "0x1828AFC60", Slot = "10")]
	public virtual void Add(IComponent component, string name)
	{
	}

	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x28AFF80", Offset = "0x28AE580", VA = "0x1828AFF80", Slot = "11")]
	protected virtual ISite CreateSite(IComponent component, string name)
	{
		return null;
	}

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x28B0010", Offset = "0x28AE610", VA = "0x1828B0010", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x28B0070", Offset = "0x28AE670", VA = "0x1828B0070", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x28B03C0", Offset = "0x28AE9C0", VA = "0x1828B03C0", Slot = "13")]
	protected virtual object GetService(Type service)
	{
		return null;
	}

	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x28B0450", Offset = "0x28AEA50", VA = "0x1828B0450", Slot = "15")]
	public virtual void Remove(IComponent component)
	{
	}

	[Token(Token = "0x6000D71")]
	[Address(RVA = "0x28B0460", Offset = "0x28AEA60", VA = "0x1828B0460")]
	private void Remove(IComponent component, bool preserveSite)
	{
	}

	[Token(Token = "0x6000D72")]
	[Address(RVA = "0x28B0440", Offset = "0x28AEA40", VA = "0x1828B0440")]
	protected void RemoveWithoutUnsiting(IComponent component)
	{
	}

	[Token(Token = "0x6000D73")]
	[Address(RVA = "0x28B06A0", Offset = "0x28AECA0", VA = "0x1828B06A0", Slot = "16")]
	protected virtual void ValidateName(IComponent component, string name)
	{
	}

	[Token(Token = "0x6000D74")]
	[Address(RVA = "0x28B09E0", Offset = "0x28AEFE0", VA = "0x1828B09E0")]
	public Container()
	{
	}
}
