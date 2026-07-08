using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002A3")]
public interface ISupportInitializeNotification : ISupportInitialize
{
	[Token(Token = "0x170003BA")]
	bool IsInitialized
	{
		[Token(Token = "0x60010A9")]
		get;
	}

	[Token(Token = "0x14000008")]
	event EventHandler Initialized;
}
