using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Serializable]
[Token(Token = "0x20003D4")]
public abstract class SerializationBinder
{
	[Token(Token = "0x6001F49")]
	[Address(RVA = "0x4EAE8F0", Offset = "0x4EAE8F0", VA = "0x4EAE8F0", Slot = "4")]
	public virtual void BindToName(Type serializedType, out string assemblyName, out string typeName)
	{
	}

	[Token(Token = "0x6001F4A")]
	public abstract Type BindToType(string assemblyName, string typeName);

	[Token(Token = "0x6001F4B")]
	[Address(RVA = "0x4EAE920", Offset = "0x4EAE920", VA = "0x4EAE920")]
	protected SerializationBinder()
	{
	}
}
