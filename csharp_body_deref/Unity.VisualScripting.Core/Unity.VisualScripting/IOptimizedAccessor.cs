// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IOptimizedAccessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200013D")]
public interface IOptimizedAccessor
{
	[Token(Token = "0x6000D52")]
	void Compile();

	[Token(Token = "0x6000D53")]
	object GetValue(object target);

	[Token(Token = "0x6000D54")]
	void SetValue(object target, object value);
}
