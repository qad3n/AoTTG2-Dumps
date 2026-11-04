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

[Token(Token = "0x20001CE")]
public class NestedContainer : Container, INestedContainer, IContainer, IDisposable
{
	[Token(Token = "0x20001CF")]
	private class Site : INestedSite, ISite, IServiceProvider
	{
		[Token(Token = "0x4000718")]
		[FieldOffset(Offset = "0x10")]
		private string _name;

		[Token(Token = "0x17000268")]
		public IComponent Component
		{
			[Token(Token = "0x6000C05")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000269")]
		public IContainer Container
		{
			[Token(Token = "0x6000C06")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "6")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700026A")]
		public bool DesignMode
		{
			[Token(Token = "0x6000C08")]
			[Address(RVA = "0x28AD0E0", Offset = "0x28AB6E0", VA = "0x1828AD0E0", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700026B")]
		public string FullName
		{
			[Token(Token = "0x6000C09")]
			[Address(RVA = "0x28AD1C0", Offset = "0x28AB7C0", VA = "0x1828AD1C0", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700026C")]
		public string Name
		{
			[Token(Token = "0x6000C0A")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "8")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000C0B")]
			[Address(RVA = "0x28AD2D0", Offset = "0x28AB8D0", VA = "0x1828AD2D0", Slot = "9")]
			set
			{
			}
		}

		[Token(Token = "0x6000C04")]
		[Address(RVA = "0x28AD080", Offset = "0x28AB680", VA = "0x1828AD080")]
		internal Site(IComponent component, NestedContainer container, string name)
		{
		}

		[Token(Token = "0x6000C07")]
		[Address(RVA = "0x28ACF90", Offset = "0x28AB590", VA = "0x1828ACF90", Slot = "10")]
		public object GetService(Type service)
		{
			return null;
		}
	}

	[Token(Token = "0x17000266")]
	public IComponent Owner
	{
		[Token(Token = "0x6000BFE")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0", Slot = "17")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000267")]
	protected virtual string OwnerName
	{
		[Token(Token = "0x6000BFF")]
		[Address(RVA = "0x28A9C60", Offset = "0x28A8260", VA = "0x1828A9C60", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x28A9B50", Offset = "0x28A8150", VA = "0x1828A9B50")]
	public NestedContainer(IComponent owner)
	{
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x28A98F0", Offset = "0x28A7EF0", VA = "0x1828A98F0", Slot = "11")]
	protected override ISite CreateSite(IComponent component, string name)
	{
		return null;
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x28A99E0", Offset = "0x28A7FE0", VA = "0x1828A99E0", Slot = "12")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x28A9AA0", Offset = "0x28A80A0", VA = "0x1828A9AA0", Slot = "13")]
	protected override object GetService(Type service)
	{
		return null;
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x28A9B40", Offset = "0x28A8140", VA = "0x1828A9B40")]
	private void OnOwnerDisposed(object sender, EventArgs e)
	{
	}
}
