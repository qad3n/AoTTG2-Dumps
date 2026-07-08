using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002E4")]
public interface IChangeTracking
{
	[Token(Token = "0x17000434")]
	bool IsChanged
	{
		[Token(Token = "0x60012C8")]
		get;
	}

	[Token(Token = "0x60012C9")]
	void AcceptChanges();
}
