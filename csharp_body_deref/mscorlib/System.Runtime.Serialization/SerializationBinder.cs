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
[Token(Token = "0x2000403")]
public abstract class SerializationBinder
{
	[Token(Token = "0x6001FB8")]
	[Address(RVA = "0x1A1E790", Offset = "0x1A1CD90", VA = "0x181A1E790", Slot = "4")]
	public virtual void BindToName(Type serializedType, out string assemblyName, out string typeName)
	{
	}

	[Token(Token = "0x6001FB9")]
	public abstract Type BindToType(string assemblyName, string typeName);

	[Token(Token = "0x6001FBA")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected SerializationBinder()
	{
	}
}
