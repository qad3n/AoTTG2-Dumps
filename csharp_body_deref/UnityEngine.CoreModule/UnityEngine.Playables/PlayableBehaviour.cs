// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Playables.PlayableBehaviour
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Serializable]
[Token(Token = "0x2000304")]
[UnityEngine.Scripting.RequiredByNativeCode]
public abstract class PlayableBehaviour : IPlayableBehaviour, ICloneable
{
	[Token(Token = "0x600122D")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public PlayableBehaviour()
	{
	}

	[Token(Token = "0x600122E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "13")]
	public virtual void OnGraphStart(Playable playable)
	{
	}

	[Token(Token = "0x600122F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "14")]
	public virtual void OnGraphStop(Playable playable)
	{
	}

	[Token(Token = "0x6001230")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "15")]
	public virtual void OnPlayableCreate(Playable playable)
	{
	}

	[Token(Token = "0x6001231")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "16")]
	public virtual void OnPlayableDestroy(Playable playable)
	{
	}

	[Token(Token = "0x6001232")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "17")]
	public virtual void OnBehaviourPlay(Playable playable, FrameData info)
	{
	}

	[Token(Token = "0x6001233")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "18")]
	public virtual void OnBehaviourPause(Playable playable, FrameData info)
	{
	}

	[Token(Token = "0x6001234")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "19")]
	public virtual void PrepareFrame(Playable playable, FrameData info)
	{
	}

	[Token(Token = "0x6001235")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "20")]
	public virtual void ProcessFrame(Playable playable, FrameData info, object playerData)
	{
	}

	[Token(Token = "0x6001236")]
	[Address(RVA = "0x2F4D880", Offset = "0x2F4BE80", VA = "0x182F4D880", Slot = "21")]
	public virtual object Clone()
	{
		return null;
	}
}
