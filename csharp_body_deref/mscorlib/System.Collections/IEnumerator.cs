using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x20005FD")]
public interface IEnumerator
{
	[Token(Token = "0x1700072A")]
	object Current
	{
		[Token(Token = "0x6002EC7")]
		get;
	}

	[Token(Token = "0x6002EC6")]
	bool MoveNext();

	[Token(Token = "0x6002EC8")]
	void Reset();
}
