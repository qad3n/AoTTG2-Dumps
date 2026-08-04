// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.CompatibleComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3C7EBA0", Offset = "0x3C7EBA0", VA = "0x3C7EBA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700073F")]
	internal IComparer Comparer
	{
		[Token(Token = "0x6002EFE")]
		[Address(RVA = "0x3C7EBB0", Offset = "0x3C7EBB0", VA = "0x3C7EBB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002EFC")]
	[Address(RVA = "0x3C7EB60", Offset = "0x3C7EB60", VA = "0x3C7EB60")]
	internal CompatibleComparer(IHashCodeProvider hashCodeProvider, IComparer comparer)
	{
	}

	[Token(Token = "0x6002EFF")]
	[Address(RVA = "0x3C7EBC0", Offset = "0x3C7EBC0", VA = "0x3C7EBC0", Slot = "4")]
	public new bool Equals(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F00")]
	[Address(RVA = "0x3C7EBD0", Offset = "0x3C7EBD0", VA = "0x3C7EBD0")]
	public int Compare(object a, object b)
	{
		return default(int);
	}

	[Token(Token = "0x6002F01")]
	[Address(RVA = "0x3C7ED90", Offset = "0x3C7ED90", VA = "0x3C7ED90", Slot = "5")]
	public int GetHashCode(object obj)
	{
		return default(int);
	}
}
