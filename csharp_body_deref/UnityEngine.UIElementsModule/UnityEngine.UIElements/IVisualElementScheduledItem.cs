using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000474")]
public interface IVisualElementScheduledItem
{
	[Token(Token = "0x6001BAE")]
	void Resume();

	[Token(Token = "0x6001BAF")]
	void Pause();

	[Token(Token = "0x6001BB0")]
	void ExecuteLater(long delayMs);

	[Token(Token = "0x6001BB1")]
	IVisualElementScheduledItem StartingIn(long delayMs);

	[Token(Token = "0x6001BB2")]
	IVisualElementScheduledItem Every(long intervalMs);
}
