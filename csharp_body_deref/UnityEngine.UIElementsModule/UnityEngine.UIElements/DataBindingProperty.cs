using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000464")]
internal readonly struct DataBindingProperty
{
	[Token(Token = "0x4000D2A")]
	[FieldOffset(Offset = "0x0")]
	private readonly PropertyPath m_PropertyPath;

	[Token(Token = "0x4000D2B")]
	[FieldOffset(Offset = "0x98")]
	private readonly string m_Path;

	[Token(Token = "0x6001B85")]
	[Address(RVA = "0x4C4DD00", Offset = "0x4C4DD00", VA = "0x4C4DD00")]
	public DataBindingProperty(string path)
	{
	}

	[Token(Token = "0x6001B86")]
	[Address(RVA = "0x4C4DDA0", Offset = "0x4C4DDA0", VA = "0x4C4DDA0")]
	public static implicit operator DataBindingProperty(string name)
	{
		return default(DataBindingProperty);
	}

	[Token(Token = "0x6001B87")]
	[Address(RVA = "0x4C4DF20", Offset = "0x4C4DF20", VA = "0x4C4DF20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
