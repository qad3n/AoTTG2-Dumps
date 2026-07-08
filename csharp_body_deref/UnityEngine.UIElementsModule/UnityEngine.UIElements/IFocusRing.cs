using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000204")]
public interface IFocusRing
{
	[Token(Token = "0x6000D1D")]
	FocusChangeDirection GetFocusChangeDirection(Focusable currentFocusable, EventBase e);

	[Token(Token = "0x6000D1E")]
	Focusable GetNextFocusable(Focusable currentFocusable, FocusChangeDirection direction);
}
