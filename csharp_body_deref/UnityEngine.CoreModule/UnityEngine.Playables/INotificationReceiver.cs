using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Token(Token = "0x2000326")]
[UnityEngine.Scripting.RequiredByNativeCode]
public interface INotificationReceiver
{
	[Token(Token = "0x6001138")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnNotify(Playable origin, INotification notification, object context);
}
