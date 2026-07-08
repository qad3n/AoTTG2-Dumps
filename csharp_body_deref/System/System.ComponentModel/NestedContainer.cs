using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002C3")]
public class NestedContainer : Container, INestedContainer, IContainer, IDisposable
{
	[Token(Token = "0x20002C4")]
	private class Site : INestedSite, ISite, IServiceProvider
	{
		[Token(Token = "0x4000DE1")]
		[FieldOffset(Offset = "0x10")]
		private string _name;

		[Token(Token = "0x170003F9")]
		public IComponent Component
		{
			[Token(Token = "0x60011BD")]
			[Address(RVA = "0x457B100", Offset = "0x457B100", VA = "0x457B100", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170003FA")]
		public IContainer Container
		{
			[Token(Token = "0x60011BE")]
			[Address(RVA = "0x457B110", Offset = "0x457B110", VA = "0x457B110", Slot = "6")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170003FB")]
		public bool DesignMode
		{
			[Token(Token = "0x60011C0")]
			[Address(RVA = "0x457B220", Offset = "0x457B220", VA = "0x457B220", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170003FC")]
		public string FullName
		{
			[Token(Token = "0x60011C1")]
			[Address(RVA = "0x457B410", Offset = "0x457B410", VA = "0x457B410", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170003FD")]
		public string Name
		{
			[Token(Token = "0x60011C2")]
			[Address(RVA = "0x457B530", Offset = "0x457B530", VA = "0x457B530", Slot = "8")]
			get
			{
				return null;
			}
			[Token(Token = "0x60011C3")]
			[Address(RVA = "0x457B540", Offset = "0x457B540", VA = "0x457B540", Slot = "9")]
			set
			{
			}
		}

		[Token(Token = "0x60011BC")]
		[Address(RVA = "0x457A990", Offset = "0x457A990", VA = "0x457A990")]
		internal Site(IComponent component, NestedContainer container, string name)
		{
		}

		[Token(Token = "0x60011BF")]
		[Address(RVA = "0x457B120", Offset = "0x457B120", VA = "0x457B120", Slot = "10")]
		public object GetService(Type service)
		{
			return null;
		}
	}

	[Token(Token = "0x170003F7")]
	public IComponent Owner
	{
		[Token(Token = "0x60011B6")]
		[Address(RVA = "0x457A600", Offset = "0x457A600", VA = "0x457A600", Slot = "17")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F8")]
	protected virtual string OwnerName
	{
		[Token(Token = "0x60011B7")]
		[Address(RVA = "0x457A610", Offset = "0x457A610", VA = "0x457A610", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011B5")]
	[Address(RVA = "0x457A3F0", Offset = "0x457A3F0", VA = "0x457A3F0")]
	public NestedContainer(IComponent owner)
	{
	}

	[Token(Token = "0x60011B8")]
	[Address(RVA = "0x457A8B0", Offset = "0x457A8B0", VA = "0x457A8B0", Slot = "11")]
	protected override ISite CreateSite(IComponent component, string name)
	{
		return null;
	}

	[Token(Token = "0x60011B9")]
	[Address(RVA = "0x457A9F0", Offset = "0x457A9F0", VA = "0x457A9F0", Slot = "12")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60011BA")]
	[Address(RVA = "0x457AEC0", Offset = "0x457AEC0", VA = "0x457AEC0", Slot = "13")]
	protected override object GetService(Type service)
	{
		return null;
	}

	[Token(Token = "0x60011BB")]
	[Address(RVA = "0x457B020", Offset = "0x457B020", VA = "0x457B020")]
	private void OnOwnerDisposed(object sender, EventArgs e)
	{
	}
}
