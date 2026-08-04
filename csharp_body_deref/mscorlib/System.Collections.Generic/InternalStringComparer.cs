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
[Token(Token = "0x200067A")]
internal sealed class InternalStringComparer : EqualityComparer<string>
{
	[Token(Token = "0x600333D")]
	[Address(RVA = "0x3C8EF50", Offset = "0x3C8EF50", VA = "0x3C8EF50", Slot = "9")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x600333E")]
	[Address(RVA = "0x3C8EF80", Offset = "0x3C8EF80", VA = "0x3C8EF80", Slot = "8")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x600333F")]
	[Address(RVA = "0x3C8EFB0", Offset = "0x3C8EFB0", VA = "0x3C8EFB0", Slot = "10")]
	internal override int IndexOf(string[] array, string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003340")]
	[Address(RVA = "0x3C8F030", Offset = "0x3C8F030", VA = "0x3C8F030")]
	public InternalStringComparer()
	{
	}
}
