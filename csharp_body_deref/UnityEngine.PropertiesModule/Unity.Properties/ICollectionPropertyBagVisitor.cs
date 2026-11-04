// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.ICollectionPropertyBagVisitor
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000051")]
public interface ICollectionPropertyBagVisitor
{
	[Token(Token = "0x6000135")]
	void Visit<TCollection, TElement>(ICollectionPropertyBag<TCollection, TElement> properties, ref TCollection container) where TCollection : ICollection<TElement>;
}
