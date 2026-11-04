// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.ISetPropertyBagVisitor
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000053")]
public interface ISetPropertyBagVisitor
{
	[Token(Token = "0x6000137")]
	void Visit<TSet, TValue>(ISetPropertyBag<TSet, TValue> properties, ref TSet container) where TSet : ISet<TValue>;
}
