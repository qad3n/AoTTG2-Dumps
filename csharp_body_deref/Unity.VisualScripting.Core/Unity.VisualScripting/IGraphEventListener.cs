using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000092")]
public interface IGraphEventListener
{
	[Token(Token = "0x6000415")]
	void StartListening(GraphStack stack);

	[Token(Token = "0x6000416")]
	void StopListening(GraphStack stack);

	[Token(Token = "0x6000417")]
	bool IsListening(GraphPointer pointer);
}
