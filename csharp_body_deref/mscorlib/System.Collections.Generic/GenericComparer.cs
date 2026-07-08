using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x200066E")]
internal class GenericComparer<T> : Comparer<T> where T : IComparable<T>
{
	[Token(Token = "0x60032F8")]
	public override int Compare(T x, T y)
	{
		return default(int);
	}

	[Token(Token = "0x60032F9")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60032FA")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60032FB")]
	public GenericComparer()
	{
	}
}
