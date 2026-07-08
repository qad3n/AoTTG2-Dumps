using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200029F")]
[MergableProperty(false)]
public interface IListSource
{
	[Token(Token = "0x170003B6")]
	bool ContainsListCollection
	{
		[Token(Token = "0x60010A4")]
		get;
	}

	[Token(Token = "0x60010A5")]
	IList GetList();
}
