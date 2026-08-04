// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.ISimpleCollator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x20005CA")]
internal interface ISimpleCollator
{
	[Token(Token = "0x6002DA1")]
	SortKey GetSortKey(string source, CompareOptions options);

	[Token(Token = "0x6002DA2")]
	int Compare(string s1, int idx1, int len1, string s2, int idx2, int len2, CompareOptions options);

	[Token(Token = "0x6002DA3")]
	bool IsPrefix(string src, string target, CompareOptions opt);

	[Token(Token = "0x6002DA4")]
	bool IsSuffix(string src, string target, CompareOptions opt);

	[Token(Token = "0x6002DA5")]
	int IndexOf(string s, string target, int start, int length, CompareOptions opt);

	[Token(Token = "0x6002DA6")]
	int LastIndexOf(string s, string target, int start, int length, CompareOptions opt);
}
