// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Specialized.CompatibleComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Serializable]
[Token(Token = "0x2000252")]
internal class CompatibleComparer : IEqualityComparer
{
	[Token(Token = "0x400084C")]
	[FieldOffset(Offset = "0x10")]
	private IComparer _comparer;

	[Token(Token = "0x400084D")]
	[FieldOffset(Offset = "0x0")]
	private static IComparer defaultComparer;

	[Token(Token = "0x400084E")]
	[FieldOffset(Offset = "0x18")]
	private IHashCodeProvider _hcp;

	[Token(Token = "0x400084F")]
	[FieldOffset(Offset = "0x8")]
	private static IHashCodeProvider defaultHashProvider;

	[Token(Token = "0x17000338")]
	public IComparer Comparer
	{
		[Token(Token = "0x600102C")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000339")]
	public IHashCodeProvider HashCodeProvider
	{
		[Token(Token = "0x600102D")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700033A")]
	public static IComparer DefaultComparer
	{
		[Token(Token = "0x600102E")]
		[Address(RVA = "0x28CCA00", Offset = "0x28CB000", VA = "0x1828CCA00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700033B")]
	public static IHashCodeProvider DefaultHashCodeProvider
	{
		[Token(Token = "0x600102F")]
		[Address(RVA = "0x28CCAF0", Offset = "0x28CB0F0", VA = "0x1828CCAF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001029")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	internal CompatibleComparer(IComparer comparer, IHashCodeProvider hashCodeProvider)
	{
	}

	[Token(Token = "0x600102A")]
	[Address(RVA = "0x28CC7C0", Offset = "0x28CADC0", VA = "0x1828CC7C0", Slot = "4")]
	public new bool Equals(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x600102B")]
	[Address(RVA = "0x28CC930", Offset = "0x28CAF30", VA = "0x1828CC930", Slot = "5")]
	public int GetHashCode(object obj)
	{
		return default(int);
	}
}
