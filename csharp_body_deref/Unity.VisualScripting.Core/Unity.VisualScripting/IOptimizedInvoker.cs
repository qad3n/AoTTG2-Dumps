// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IOptimizedInvoker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000150")]
public interface IOptimizedInvoker
{
	[Token(Token = "0x6000DC2")]
	void Compile();

	[Token(Token = "0x6000DC3")]
	object Invoke(object target);

	[Token(Token = "0x6000DC4")]
	object Invoke(object target, object arg0);

	[Token(Token = "0x6000DC5")]
	object Invoke(object target, object arg0, object arg1);

	[Token(Token = "0x6000DC6")]
	object Invoke(object target, object arg0, object arg1, object arg2);

	[Token(Token = "0x6000DC7")]
	object Invoke(object target, object arg0, object arg1, object arg2, object arg3);

	[Token(Token = "0x6000DC8")]
	object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4);

	[Token(Token = "0x6000DC9")]
	object Invoke(object target, params object[] args);
}
