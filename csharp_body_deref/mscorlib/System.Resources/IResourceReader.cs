using System.Collections;
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004AB")]
public interface IResourceReader : IEnumerable, IDisposable
{
	[Token(Token = "0x6002333")]
	void Close();

	[Token(Token = "0x6002334")]
	new IDictionaryEnumerator GetEnumerator();
}
