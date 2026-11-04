// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ISerializableJsonDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000298")]
internal interface ISerializableJsonDictionary
{
	[Token(Token = "0x600119B")]
	void Set<T>(string key, T value) where T : class;

	[Token(Token = "0x600119C")]
	T Get<T>(string key) where T : class;

	[Token(Token = "0x600119D")]
	void Overwrite(object obj, string key);

	[Token(Token = "0x600119E")]
	bool ContainsKey(string key);
}
