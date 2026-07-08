using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000677")]
internal sealed class SByteEnumEqualityComparer<T> : System.Collections.Generic.EnumEqualityComparer<T>, ISerializable where T : struct
{
	[Token(Token = "0x6003330")]
	public SByteEnumEqualityComparer()
	{
	}

	[Token(Token = "0x6003331")]
	public SByteEnumEqualityComparer(SerializationInfo information, StreamingContext context)
	{
	}

	[Token(Token = "0x6003332")]
	public override int GetHashCode(T obj)
	{
		return default(int);
	}
}
