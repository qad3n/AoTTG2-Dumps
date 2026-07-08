using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200013E")]
public interface IOptimizedInvoker
{
	[Token(Token = "0x6000D4B")]
	void Compile();

	[Token(Token = "0x6000D4C")]
	object Invoke(object target);

	[Token(Token = "0x6000D4D")]
	object Invoke(object target, object arg0);

	[Token(Token = "0x6000D4E")]
	object Invoke(object target, object arg0, object arg1);

	[Token(Token = "0x6000D4F")]
	object Invoke(object target, object arg0, object arg1, object arg2);

	[Token(Token = "0x6000D50")]
	object Invoke(object target, object arg0, object arg1, object arg2, object arg3);

	[Token(Token = "0x6000D51")]
	object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4);

	[Token(Token = "0x6000D52")]
	object Invoke(object target, params object[] args);
}
