// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ICameraHistoryReadAccess
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000018")]
public interface ICameraHistoryReadAccess
{
	[Token(Token = "0x2000019")]
	public delegate void HistoryRequestDelegate(IPerFrameHistoryAccessTracker historyAccess);

	[Token(Token = "0x14000001")]
	event HistoryRequestDelegate OnGatherHistoryRequests;

	[Token(Token = "0x60000B9")]
	Type GetHistoryForRead<Type>() where Type : ContextItem;
}
