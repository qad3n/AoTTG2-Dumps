using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x2000607")]
internal sealed class CompatibleComparer : IEqualityComparer
{
	[Token(Token = "0x4001A61")]
	[FieldOffset(Offset = "0x10")]
	private readonly IHashCodeProvider _hcp;

	[Token(Token = "0x4001A62")]
	[FieldOffset(Offset = "0x18")]
	private readonly IComparer _comparer;

	[Token(Token = "0x1700073E")]
	internal IHashCodeProvider HashCodeProvider
	{
		[Token(Token = "0x6002EFD")]
		[Address(RVA = "0x4F99080", Offset = "0x4F99080", VA = "0x4F99080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700073F")]
	internal IComparer Comparer
	{
		[Token(Token = "0x6002EFE")]
		[Address(RVA = "0x4F99090", Offset = "0x4F99090", VA = "0x4F99090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002EFC")]
	[Address(RVA = "0x4F99040", Offset = "0x4F99040", VA = "0x4F99040")]
	internal CompatibleComparer(IHashCodeProvider hashCodeProvider, IComparer comparer)
	{
	}

	[Token(Token = "0x6002EFF")]
	[Address(RVA = "0x4F990A0", Offset = "0x4F990A0", VA = "0x4F990A0", Slot = "4")]
	public new bool Equals(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F00")]
	[Address(RVA = "0x4F990B0", Offset = "0x4F990B0", VA = "0x4F990B0")]
	public int Compare(object a, object b)
	{
		return default(int);
	}

	[Token(Token = "0x6002F01")]
	[Address(RVA = "0x4F99270", Offset = "0x4F99270", VA = "0x4F99270", Slot = "5")]
	public int GetHashCode(object obj)
	{
		return default(int);
	}
}
