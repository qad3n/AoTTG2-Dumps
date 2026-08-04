// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.EnumEqualityComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000676")]
internal class EnumEqualityComparer<T> : EqualityComparer<T>, ISerializable where T : struct
{
	[Token(Token = "0x6003329")]
	public override bool Equals(T x, T y)
	{
		return default(bool);
	}

	[Token(Token = "0x600332A")]
	public override int GetHashCode(T obj)
	{
		return default(int);
	}

	[Token(Token = "0x600332B")]
	public EnumEqualityComparer()
	{
	}

	[Token(Token = "0x600332C")]
	protected EnumEqualityComparer(SerializationInfo information, StreamingContext context)
	{
	}

	[Token(Token = "0x600332D")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600332E")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600332F")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
