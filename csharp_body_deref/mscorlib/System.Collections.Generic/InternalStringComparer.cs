using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x200067A")]
internal sealed class InternalStringComparer : EqualityComparer<string>
{
	[Token(Token = "0x600333D")]
	[Address(RVA = "0x4FA9430", Offset = "0x4FA9430", VA = "0x4FA9430", Slot = "9")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x600333E")]
	[Address(RVA = "0x4FA9460", Offset = "0x4FA9460", VA = "0x4FA9460", Slot = "8")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x600333F")]
	[Address(RVA = "0x4FA9490", Offset = "0x4FA9490", VA = "0x4FA9490", Slot = "10")]
	internal override int IndexOf(string[] array, string value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003340")]
	[Address(RVA = "0x4FA9510", Offset = "0x4FA9510", VA = "0x4FA9510")]
	public InternalStringComparer()
	{
	}
}
