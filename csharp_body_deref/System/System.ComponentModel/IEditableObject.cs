// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.IEditableObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002E5")]
public interface IEditableObject
{
	[Token(Token = "0x60012CA")]
	void BeginEdit();

	[Token(Token = "0x60012CB")]
	void EndEdit();

	[Token(Token = "0x60012CC")]
	void CancelEdit();
}
