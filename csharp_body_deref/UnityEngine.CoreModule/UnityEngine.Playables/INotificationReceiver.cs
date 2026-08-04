// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Playables.INotificationReceiver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Token(Token = "0x2000329")]
[UnityEngine.Scripting.RequiredByNativeCode]
public interface INotificationReceiver
{
	[Token(Token = "0x600113A")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnNotify(Playable origin, INotification notification, object context);
}
