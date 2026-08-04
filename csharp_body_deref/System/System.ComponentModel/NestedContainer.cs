// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.NestedContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x48A0200", Offset = "0x48A0200", VA = "0x48A0200", Slot = "5")]
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
			[Address(RVA = "0x48A0210", Offset = "0x48A0210", VA = "0x48A0210", Slot = "6")]
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
			[Address(RVA = "0x48A0320", Offset = "0x48A0320", VA = "0x48A0320", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170003FC")]
		public string FullName
		{
			[Token(Token = "0x60011C1")]
			[Address(RVA = "0x48A0510", Offset = "0x48A0510", VA = "0x48A0510", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170003FD")]
		public string Name
		{
			[Token(Token = "0x60011C2")]
			[Address(RVA = "0x48A0630", Offset = "0x48A0630", VA = "0x48A0630", Slot = "8")]
			get
			{
				return null;
			}
			[Token(Token = "0x60011C3")]
			[Address(RVA = "0x48A0640", Offset = "0x48A0640", VA = "0x48A0640", Slot = "9")]
			set
			{
			}
		}

		[Token(Token = "0x60011BC")]
		[Address(RVA = "0x489FA90", Offset = "0x489FA90", VA = "0x489FA90")]
		internal Site(IComponent component, NestedContainer container, string name)
		{
		}

		[Token(Token = "0x60011BF")]
		[Address(RVA = "0x48A0220", Offset = "0x48A0220", VA = "0x48A0220", Slot = "10")]
		public object GetService(Type service)
		{
			return null;
		}
	}

	[Token(Token = "0x170003F7")]
	public IComponent Owner
	{
		[Token(Token = "0x60011B6")]
		[Address(RVA = "0x489F700", Offset = "0x489F700", VA = "0x489F700", Slot = "17")]
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
		[Address(RVA = "0x489F710", Offset = "0x489F710", VA = "0x489F710", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011B5")]
	[Address(RVA = "0x489F4F0", Offset = "0x489F4F0", VA = "0x489F4F0")]
	public NestedContainer(IComponent owner)
	{
	}

	[Token(Token = "0x60011B8")]
	[Address(RVA = "0x489F9B0", Offset = "0x489F9B0", VA = "0x489F9B0", Slot = "11")]
	protected override ISite CreateSite(IComponent component, string name)
	{
		return null;
	}

	[Token(Token = "0x60011B9")]
	[Address(RVA = "0x489FAF0", Offset = "0x489FAF0", VA = "0x489FAF0", Slot = "12")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60011BA")]
	[Address(RVA = "0x489FFC0", Offset = "0x489FFC0", VA = "0x489FFC0", Slot = "13")]
	protected override object GetService(Type service)
	{
		return null;
	}

	[Token(Token = "0x60011BB")]
	[Address(RVA = "0x48A0120", Offset = "0x48A0120", VA = "0x48A0120")]
	private void OnOwnerDisposed(object sender, EventArgs e)
	{
	}
}
