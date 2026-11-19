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

[Token(Token = "0x200018F")]
public class NestedContainer : Container, INestedContainer, IContainer, IDisposable
{
	[Token(Token = "0x2000190")]
	private class Site : INestedSite, ISite, IServiceProvider
	{
		[Token(Token = "0x4000649")]
		[FieldOffset(Offset = "0x10")]
		private string _name;

		[Token(Token = "0x17000239")]
		public IComponent Component
		{
			[Token(Token = "0x6000A45")]
			[Address(RVA = "0x623FDE0", Offset = "0x623EDE0", VA = "0x623FDE0", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700023A")]
		public IContainer Container
		{
			[Token(Token = "0x6000A46")]
			[Address(RVA = "0x623FDF0", Offset = "0x623EDF0", VA = "0x623FDF0", Slot = "6")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700023B")]
		public bool DesignMode
		{
			[Token(Token = "0x6000A48")]
			[Address(RVA = "0x623FEE0", Offset = "0x623EEE0", VA = "0x623FEE0", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700023C")]
		public string FullName
		{
			[Token(Token = "0x6000A49")]
			[Address(RVA = "0x62400D0", Offset = "0x623F0D0", VA = "0x62400D0", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700023D")]
		public string Name
		{
			[Token(Token = "0x6000A4A")]
			[Address(RVA = "0x62401C0", Offset = "0x623F1C0", VA = "0x62401C0", Slot = "8")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000A4B")]
			[Address(RVA = "0x62401D0", Offset = "0x623F1D0", VA = "0x62401D0", Slot = "9")]
			set
			{
			}
		}

		[Token(Token = "0x6000A44")]
		[Address(RVA = "0x623F6C0", Offset = "0x623E6C0", VA = "0x623F6C0")]
		internal Site(IComponent component, NestedContainer container, string name)
		{
		}

		[Token(Token = "0x6000A47")]
		[Address(RVA = "0x623FE00", Offset = "0x623EE00", VA = "0x623FE00", Slot = "10")]
		public object GetService(Type service)
		{
			return null;
		}
	}

	[Token(Token = "0x17000237")]
	public IComponent Owner
	{
		[Token(Token = "0x6000A3E")]
		[Address(RVA = "0x623F330", Offset = "0x623E330", VA = "0x623F330", Slot = "17")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000238")]
	protected virtual string OwnerName
	{
		[Token(Token = "0x6000A3F")]
		[Address(RVA = "0x623F340", Offset = "0x623E340", VA = "0x623F340", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x623F120", Offset = "0x623E120", VA = "0x623F120")]
	public NestedContainer(IComponent owner)
	{
	}

	[Token(Token = "0x6000A40")]
	[Address(RVA = "0x623F5E0", Offset = "0x623E5E0", VA = "0x623F5E0", Slot = "11")]
	protected override ISite CreateSite(IComponent component, string name)
	{
		return null;
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x623F720", Offset = "0x623E720", VA = "0x623F720", Slot = "12")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x623FBA0", Offset = "0x623EBA0", VA = "0x623FBA0", Slot = "13")]
	protected override object GetService(Type service)
	{
		return null;
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x623FD00", Offset = "0x623ED00", VA = "0x623FD00")]
	private void OnOwnerDisposed(object sender, EventArgs e)
	{
	}
}
