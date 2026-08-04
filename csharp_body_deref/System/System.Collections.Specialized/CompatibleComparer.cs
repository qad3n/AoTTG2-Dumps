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
		[Address(RVA = "0x48E9720", Offset = "0x48E9720", VA = "0x48E9720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CA")]
	public IHashCodeProvider HashCodeProvider
	{
		[Token(Token = "0x60015E6")]
		[Address(RVA = "0x48E9730", Offset = "0x48E9730", VA = "0x48E9730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CB")]
	public static IComparer DefaultComparer
	{
		[Token(Token = "0x60015E7")]
		[Address(RVA = "0x48E9740", Offset = "0x48E9740", VA = "0x48E9740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CC")]
	public static IHashCodeProvider DefaultHashCodeProvider
	{
		[Token(Token = "0x60015E8")]
		[Address(RVA = "0x48E9820", Offset = "0x48E9820", VA = "0x48E9820")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60015E2")]
	[Address(RVA = "0x48E93C0", Offset = "0x48E93C0", VA = "0x48E93C0")]
	internal CompatibleComparer(IComparer comparer, IHashCodeProvider hashCodeProvider)
	{
	}

	[Token(Token = "0x60015E3")]
	[Address(RVA = "0x48E9400", Offset = "0x48E9400", VA = "0x48E9400", Slot = "4")]
	public new bool Equals(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E4")]
	[Address(RVA = "0x48E9610", Offset = "0x48E9610", VA = "0x48E9610", Slot = "5")]
	public int GetHashCode(object obj)
	{
		return default(int);
	}
}
