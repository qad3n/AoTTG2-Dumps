using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000678")]
internal sealed class ShortEnumEqualityComparer<T> : System.Collections.Generic.EnumEqualityComparer<T>, ISerializable where T : struct
{
	[Token(Token = "0x6003333")]
	public ShortEnumEqualityComparer()
	{
	}

	[Token(Token = "0x6003334")]
	public ShortEnumEqualityComparer(SerializationInfo information, StreamingContext context)
	{
	}

	[Token(Token = "0x6003335")]
	public override int GetHashCode(T obj)
	{
		return default(int);
	}
}
