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
[Token(Token = "0x20005DB")]
internal sealed class CompatibleComparer : IEqualityComparer
{
	[Token(Token = "0x400187C")]
	[FieldOffset(Offset = "0x10")]
	private readonly IHashCodeProvider _hcp;

	[Token(Token = "0x400187D")]
	[FieldOffset(Offset = "0x18")]
	private readonly IComparer _comparer;

	[Token(Token = "0x170006CB")]
	internal IHashCodeProvider HashCodeProvider
	{
		[Token(Token = "0x6002C0C")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006CC")]
	internal IComparer Comparer
	{
		[Token(Token = "0x6002C0D")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002C0B")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	internal CompatibleComparer(IHashCodeProvider hashCodeProvider, IComparer comparer)
	{
	}

	[Token(Token = "0x6002C0E")]
	[Address(RVA = "0x1AB9510", Offset = "0x1AB7B10", VA = "0x181AB9510", Slot = "4")]
	public new bool Equals(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C0F")]
	[Address(RVA = "0x1AB9350", Offset = "0x1AB7950", VA = "0x181AB9350")]
	public int Compare(object a, object b)
	{
		return default(int);
	}

	[Token(Token = "0x6002C10")]
	[Address(RVA = "0x1AB96A0", Offset = "0x1AB7CA0", VA = "0x181AB96A0", Slot = "5")]
	public int GetHashCode(object obj)
	{
		return default(int);
	}
}
