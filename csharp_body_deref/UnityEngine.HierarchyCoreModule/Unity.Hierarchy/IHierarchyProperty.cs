// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.IHierarchyProperty
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Hierarchy;

[Token(Token = "0x2000014")]
public interface IHierarchyProperty<T>
{
	[Token(Token = "0x600004D")]
	T GetValue(in HierarchyNode node);

	[Token(Token = "0x600004E")]
	void SetValue(in HierarchyNode node, T value);
}
