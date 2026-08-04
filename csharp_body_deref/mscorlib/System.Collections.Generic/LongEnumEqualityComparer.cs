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
[Token(Token = "0x2000679")]
internal sealed class LongEnumEqualityComparer<T> : EqualityComparer<T>, ISerializable where T : struct
{
	[Token(Token = "0x6003336")]
	public override bool Equals(T x, T y)
	{
		return default(bool);
	}

	[Token(Token = "0x6003337")]
	public override int GetHashCode(T obj)
	{
		return default(int);
	}

	[Token(Token = "0x6003338")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6003339")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600333A")]
	public LongEnumEqualityComparer()
	{
	}

	[Token(Token = "0x600333B")]
	public LongEnumEqualityComparer(SerializationInfo information, StreamingContext context)
	{
	}

	[Token(Token = "0x600333C")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
