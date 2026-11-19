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
[Token(Token = "0x20005B6")]
internal sealed class CompatibleComparer : IEqualityComparer
{
	[Token(Token = "0x40017E3")]
	[FieldOffset(Offset = "0x10")]
	private readonly IHashCodeProvider _hcp;

	[Token(Token = "0x40017E4")]
	[FieldOffset(Offset = "0x18")]
	private readonly IComparer _comparer;

	[Token(Token = "0x170006CC")]
	internal IHashCodeProvider HashCodeProvider
	{
		[Token(Token = "0x6002BEB")]
		[Address(RVA = "0x5451D60", Offset = "0x5450D60", VA = "0x5451D60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006CD")]
	internal IComparer Comparer
	{
		[Token(Token = "0x6002BEC")]
		[Address(RVA = "0x5451D70", Offset = "0x5450D70", VA = "0x5451D70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002BEA")]
	[Address(RVA = "0x5451D20", Offset = "0x5450D20", VA = "0x5451D20")]
	internal CompatibleComparer(IHashCodeProvider hashCodeProvider, IComparer comparer)
	{
	}

	[Token(Token = "0x6002BED")]
	[Address(RVA = "0x5451D80", Offset = "0x5450D80", VA = "0x5451D80", Slot = "4")]
	public new bool Equals(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6002BEE")]
	[Address(RVA = "0x5451D90", Offset = "0x5450D90", VA = "0x5451D90")]
	public int Compare(object a, object b)
	{
		return default(int);
	}

	[Token(Token = "0x6002BEF")]
	[Address(RVA = "0x5451F50", Offset = "0x5450F50", VA = "0x5451F50", Slot = "5")]
	public int GetHashCode(object obj)
	{
		return default(int);
	}
}
