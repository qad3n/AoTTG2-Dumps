// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DataBindingProperty
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4F75630", Offset = "0x4F75630", VA = "0x4F75630")]
	public DataBindingProperty(string path)
	{
	}

	[Token(Token = "0x6001B86")]
	[Address(RVA = "0x4F756D0", Offset = "0x4F756D0", VA = "0x4F756D0")]
	public static implicit operator DataBindingProperty(string name)
	{
		return default(DataBindingProperty);
	}

	[Token(Token = "0x6001B87")]
	[Address(RVA = "0x4F75850", Offset = "0x4F75850", VA = "0x4F75850", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
