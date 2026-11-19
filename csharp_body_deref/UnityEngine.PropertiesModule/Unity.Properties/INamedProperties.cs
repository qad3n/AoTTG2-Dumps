// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.INamedProperties
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200002A")]
public interface INamedProperties<TContainer>
{
	[Token(Token = "0x600009D")]
	bool TryGetProperty(ref TContainer container, string name, out IProperty<TContainer> property);
}
