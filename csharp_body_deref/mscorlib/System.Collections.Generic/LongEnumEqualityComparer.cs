// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.LongEnumEqualityComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000628")]
internal sealed class LongEnumEqualityComparer<T> : EqualityComparer<T>, ISerializable where T : struct
{
	[Token(Token = "0x600302F")]
	public override bool Equals(T x, T y)
	{
		return default(bool);
	}

	[Token(Token = "0x6003030")]
	public override int GetHashCode(T obj)
	{
		return default(int);
	}

	[Token(Token = "0x6003031")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6003032")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6003033")]
	public LongEnumEqualityComparer()
	{
	}

	[Token(Token = "0x6003034")]
	public LongEnumEqualityComparer(SerializationInfo information, StreamingContext context)
	{
	}

	[Token(Token = "0x6003035")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
