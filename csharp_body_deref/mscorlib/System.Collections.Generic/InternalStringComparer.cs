// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.InternalStringComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x200064E")]
internal sealed class InternalStringComparer : EqualityComparer<string>
{
	[Token(Token = "0x6003057")]
	[Address(RVA = "0xB2C1D0", Offset = "0xB2A7D0", VA = "0x180B2C1D0", Slot = "9")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x6003058")]
	[Address(RVA = "0x1AD55B0", Offset = "0x1AD3BB0", VA = "0x181AD55B0", Slot = "8")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x6003059")]
	[Address(RVA = "0x1AD55E0", Offset = "0x1AD3BE0", VA = "0x181AD55E0", Slot = "10")]
	internal override int IndexOf(string[] array, string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600305A")]
	[Address(RVA = "0x1AD5640", Offset = "0x1AD3C40", VA = "0x181AD5640")]
	public InternalStringComparer()
	{
	}
}
