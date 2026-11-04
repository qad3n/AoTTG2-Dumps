// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ICameraHistoryWriteAccess
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000017")]
public interface ICameraHistoryWriteAccess
{
	[Token(Token = "0x60000B6")]
	bool IsAccessRequested<Type>() where Type : ContextItem;

	[Token(Token = "0x60000B7")]
	Type GetHistoryForWrite<Type>() where Type : ContextItem, new();

	[Token(Token = "0x60000B8")]
	bool IsWritten<Type>() where Type : ContextItem;
}
