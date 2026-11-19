// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IOptimizedInvoker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200013E")]
public interface IOptimizedInvoker
{
	[Token(Token = "0x6000D55")]
	void Compile();

	[Token(Token = "0x6000D56")]
	object Invoke(object target);

	[Token(Token = "0x6000D57")]
	object Invoke(object target, object arg0);

	[Token(Token = "0x6000D58")]
	object Invoke(object target, object arg0, object arg1);

	[Token(Token = "0x6000D59")]
	object Invoke(object target, object arg0, object arg1, object arg2);

	[Token(Token = "0x6000D5A")]
	object Invoke(object target, object arg0, object arg1, object arg2, object arg3);

	[Token(Token = "0x6000D5B")]
	object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4);

	[Token(Token = "0x6000D5C")]
	object Invoke(object target, params object[] args);
}
