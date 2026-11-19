// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Playables.IPlayableBehaviour
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Token(Token = "0x2000301")]
public interface IPlayableBehaviour
{
	[Token(Token = "0x600122E")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnGraphStart(Playable playable);

	[Token(Token = "0x600122F")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnGraphStop(Playable playable);

	[Token(Token = "0x6001230")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnPlayableCreate(Playable playable);

	[Token(Token = "0x6001231")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnPlayableDestroy(Playable playable);

	[Token(Token = "0x6001232")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnBehaviourPlay(Playable playable, FrameData info);

	[Token(Token = "0x6001233")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnBehaviourPause(Playable playable, FrameData info);

	[Token(Token = "0x6001234")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void PrepareFrame(Playable playable, FrameData info);

	[Token(Token = "0x6001235")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void ProcessFrame(Playable playable, FrameData info, object playerData);
}
