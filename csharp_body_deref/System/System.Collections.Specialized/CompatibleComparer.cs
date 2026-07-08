using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Serializable]
[Token(Token = "0x2000347")]
internal class CompatibleComparer : IEqualityComparer
{
	[Token(Token = "0x4000F15")]
	[FieldOffset(Offset = "0x10")]
	private IComparer _comparer;

	[Token(Token = "0x4000F16")]
	[FieldOffset(Offset = "0x0")]
	private static IComparer defaultComparer;

	[Token(Token = "0x4000F17")]
	[FieldOffset(Offset = "0x18")]
	private IHashCodeProvider _hcp;

	[Token(Token = "0x4000F18")]
	[FieldOffset(Offset = "0x8")]
	private static IHashCodeProvider defaultHashProvider;

	[Token(Token = "0x170004C9")]
	public IComparer Comparer
	{
		[Token(Token = "0x60015E5")]
		[Address(RVA = "0x45C4620", Offset = "0x45C4620", VA = "0x45C4620")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CA")]
	public IHashCodeProvider HashCodeProvider
	{
		[Token(Token = "0x60015E6")]
		[Address(RVA = "0x45C4630", Offset = "0x45C4630", VA = "0x45C4630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CB")]
	public static IComparer DefaultComparer
	{
		[Token(Token = "0x60015E7")]
		[Address(RVA = "0x45C4640", Offset = "0x45C4640", VA = "0x45C4640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CC")]
	public static IHashCodeProvider DefaultHashCodeProvider
	{
		[Token(Token = "0x60015E8")]
		[Address(RVA = "0x45C4720", Offset = "0x45C4720", VA = "0x45C4720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60015E2")]
	[Address(RVA = "0x45C42C0", Offset = "0x45C42C0", VA = "0x45C42C0")]
	internal CompatibleComparer(IComparer comparer, IHashCodeProvider hashCodeProvider)
	{
	}

	[Token(Token = "0x60015E3")]
	[Address(RVA = "0x45C4300", Offset = "0x45C4300", VA = "0x45C4300", Slot = "4")]
	public new bool Equals(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E4")]
	[Address(RVA = "0x45C4510", Offset = "0x45C4510", VA = "0x45C4510", Slot = "5")]
	public int GetHashCode(object obj)
	{
		return default(int);
	}
}
