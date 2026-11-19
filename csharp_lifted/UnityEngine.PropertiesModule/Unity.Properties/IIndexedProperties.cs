// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.IIndexedProperties
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000029")]
public interface IIndexedProperties<TContainer>
{
	[Token(Token = "0x600009C")]
	bool TryGetProperty(ref TContainer container, int index, out IProperty<TContainer> property);
}
