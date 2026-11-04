// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.IDictionaryPropertyBagVisitor
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000054")]
public interface IDictionaryPropertyBagVisitor
{
	[Token(Token = "0x6000138")]
	void Visit<TDictionary, TKey, TValue>(IDictionaryPropertyBag<TDictionary, TKey, TValue> properties, ref TDictionary container) where TDictionary : IDictionary<TKey, TValue>;
}
