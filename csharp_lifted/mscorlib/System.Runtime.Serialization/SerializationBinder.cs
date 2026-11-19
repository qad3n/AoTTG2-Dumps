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
[Token(Token = "0x20003DC")]
public abstract class SerializationBinder
{
	[Token(Token = "0x6001F8E")]
	[Address(RVA = "0x539BDA0", Offset = "0x539ADA0", VA = "0x539BDA0", Slot = "4")]
	public virtual void BindToName(Type serializedType, out string assemblyName, out string typeName)
	{
	}

	[Token(Token = "0x6001F8F")]
	public abstract Type BindToType(string assemblyName, string typeName);

	[Token(Token = "0x6001F90")]
	[Address(RVA = "0x539BDD0", Offset = "0x539ADD0", VA = "0x539BDD0")]
	protected SerializationBinder()
	{
	}
}
