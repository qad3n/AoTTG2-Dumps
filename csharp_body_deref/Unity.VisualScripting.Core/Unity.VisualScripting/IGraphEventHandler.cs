using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000063")]
public interface IGraphEventHandler<TArgs>
{
	[Token(Token = "0x60002B1")]
	EventHook GetHook(GraphReference reference);

	[Token(Token = "0x60002B2")]
	void Trigger(GraphReference reference, TArgs args);

	[Token(Token = "0x60002B3")]
	bool IsListening(GraphPointer pointer);
}
