using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000259")]
public interface ISynchronizeInvoke
{
	[Token(Token = "0x17000346")]
	bool InvokeRequired
	{
		[Token(Token = "0x6000EAB")]
		get;
	}

	[Token(Token = "0x6000EAC")]
	IAsyncResult BeginInvoke(Delegate method, object[] args);

	[Token(Token = "0x6000EAD")]
	object EndInvoke(IAsyncResult result);

	[Token(Token = "0x6000EAE")]
	object Invoke(Delegate method, object[] args);
}
