using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200021E")]
internal interface ISerializableJsonDictionary
{
	[Token(Token = "0x6000DFD")]
	void Set<T>(string key, T value) where T : class;

	[Token(Token = "0x6000DFE")]
	T Get<T>(string key) where T : class;

	[Token(Token = "0x6000DFF")]
	void Overwrite(object obj, string key);

	[Token(Token = "0x6000E00")]
	bool ContainsKey(string key);
}
