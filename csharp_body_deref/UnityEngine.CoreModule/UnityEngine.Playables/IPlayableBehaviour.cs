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

[Token(Token = "0x200032A")]
public interface IPlayableBehaviour
{
	[Token(Token = "0x600113B")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnGraphStart(Playable playable);

	[Token(Token = "0x600113C")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnGraphStop(Playable playable);

	[Token(Token = "0x600113D")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnPlayableCreate(Playable playable);

	[Token(Token = "0x600113E")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnPlayableDestroy(Playable playable);

	[Token(Token = "0x600113F")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnBehaviourPlay(Playable playable, FrameData info);

	[Token(Token = "0x6001140")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnBehaviourPause(Playable playable, FrameData info);

	[Token(Token = "0x6001141")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void PrepareFrame(Playable playable, FrameData info);

	[Token(Token = "0x6001142")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void ProcessFrame(Playable playable, FrameData info, object playerData);
}
