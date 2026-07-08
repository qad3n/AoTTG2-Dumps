using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Token(Token = "0x2000327")]
public interface IPlayableBehaviour
{
	[Token(Token = "0x6001139")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnGraphStart(Playable playable);

	[Token(Token = "0x600113A")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnGraphStop(Playable playable);

	[Token(Token = "0x600113B")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnPlayableCreate(Playable playable);

	[Token(Token = "0x600113C")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnPlayableDestroy(Playable playable);

	[Token(Token = "0x600113D")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnBehaviourPlay(Playable playable, FrameData info);

	[Token(Token = "0x600113E")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void OnBehaviourPause(Playable playable, FrameData info);

	[Token(Token = "0x600113F")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void PrepareFrame(Playable playable, FrameData info);

	[Token(Token = "0x6001140")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	void ProcessFrame(Playable playable, FrameData info, object playerData);
}
