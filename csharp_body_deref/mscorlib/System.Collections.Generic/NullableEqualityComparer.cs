using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000673")]
internal class NullableEqualityComparer<T> : EqualityComparer<T?> where T : struct, IEquatable<T>
{
	[Token(Token = "0x6003314")]
	public override bool Equals(T? x, T? y)
	{
		return default(bool);
	}

	[Token(Token = "0x6003315")]
	public override int GetHashCode(T? obj)
	{
		return default(int);
	}

	[Token(Token = "0x6003316")]
	internal override int IndexOf(T?[] array, T? value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003317")]
	internal override int LastIndexOf(T?[] array, T? value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003318")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6003319")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600331A")]
	public NullableEqualityComparer()
	{
	}
}
