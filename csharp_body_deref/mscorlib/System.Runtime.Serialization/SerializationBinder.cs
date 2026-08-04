// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.SerializationBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Serializable]
[Token(Token = "0x20003D4")]
public abstract class SerializationBinder
{
	[Token(Token = "0x6001F49")]
	[Address(RVA = "0x3B94410", Offset = "0x3B94410", VA = "0x3B94410", Slot = "4")]
	public virtual void BindToName(Type serializedType, out string assemblyName, out string typeName)
	{
	}

	[Token(Token = "0x6001F4A")]
	public abstract Type BindToType(string assemblyName, string typeName);

	[Token(Token = "0x6001F4B")]
	[Address(RVA = "0x3B94440", Offset = "0x3B94440", VA = "0x3B94440")]
	protected SerializationBinder()
	{
	}
}
