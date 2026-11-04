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
[Token(Token = "0x200064A")]
internal class EnumEqualityComparer<T> : EqualityComparer<T>, ISerializable where T : struct
{
	[Token(Token = "0x6003043")]
	public override bool Equals(T x, T y)
	{
		return default(bool);
	}

	[Token(Token = "0x6003044")]
	public override int GetHashCode(T obj)
	{
		return default(int);
	}

	[Token(Token = "0x6003045")]
	public EnumEqualityComparer()
	{
	}

	[Token(Token = "0x6003046")]
	protected EnumEqualityComparer(SerializationInfo information, StreamingContext context)
	{
	}

	[Token(Token = "0x6003047")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6003048")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6003049")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
