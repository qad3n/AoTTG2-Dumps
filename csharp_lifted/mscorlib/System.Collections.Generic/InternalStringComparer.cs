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
[Token(Token = "0x2000629")]
internal sealed class InternalStringComparer : EqualityComparer<string>
{
	[Token(Token = "0x6003036")]
	[Address(RVA = "0x5461D70", Offset = "0x5460D70", VA = "0x5461D70", Slot = "9")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x6003037")]
	[Address(RVA = "0x5461DA0", Offset = "0x5460DA0", VA = "0x5461DA0", Slot = "8")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x6003038")]
	[Address(RVA = "0x5461DD0", Offset = "0x5460DD0", VA = "0x5461DD0", Slot = "10")]
	internal override int IndexOf(string[] array, string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003039")]
	[Address(RVA = "0x5461E40", Offset = "0x5460E40", VA = "0x5461E40")]
	public InternalStringComparer()
	{
	}
}
