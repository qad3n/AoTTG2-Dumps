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
	[Token(Token = "0x6001241")]
	[Address(RVA = "0x693AEA0", Offset = "0x6939EA0", VA = "0x693AEA0")]
	public PlayableBehaviour()
	{
	}

	[Token(Token = "0x6001242")]
	[Address(RVA = "0x693AEB0", Offset = "0x6939EB0", VA = "0x693AEB0", Slot = "13")]
	public virtual void OnGraphStart(Playable playable)
	{
	}

	[Token(Token = "0x6001243")]
	[Address(RVA = "0x693AEC0", Offset = "0x6939EC0", VA = "0x693AEC0", Slot = "14")]
	public virtual void OnGraphStop(Playable playable)
	{
	}

	[Token(Token = "0x6001244")]
	[Address(RVA = "0x693AED0", Offset = "0x6939ED0", VA = "0x693AED0", Slot = "15")]
	public virtual void OnPlayableCreate(Playable playable)
	{
	}

	[Token(Token = "0x6001245")]
	[Address(RVA = "0x693AEE0", Offset = "0x6939EE0", VA = "0x693AEE0", Slot = "16")]
	public virtual void OnPlayableDestroy(Playable playable)
	{
	}

	[Token(Token = "0x6001246")]
	[Address(RVA = "0x693AEF0", Offset = "0x6939EF0", VA = "0x693AEF0", Slot = "17")]
	public virtual void OnBehaviourPlay(Playable playable, FrameData info)
	{
	}

	[Token(Token = "0x6001247")]
	[Address(RVA = "0x693AF00", Offset = "0x6939F00", VA = "0x693AF00", Slot = "18")]
	public virtual void OnBehaviourPause(Playable playable, FrameData info)
	{
	}

	[Token(Token = "0x6001248")]
	[Address(RVA = "0x693AF10", Offset = "0x6939F10", VA = "0x693AF10", Slot = "19")]
	public virtual void PrepareFrame(Playable playable, FrameData info)
	{
	}

	[Token(Token = "0x6001249")]
	[Address(RVA = "0x693AF20", Offset = "0x6939F20", VA = "0x693AF20", Slot = "20")]
	public virtual void ProcessFrame(Playable playable, FrameData info, object playerData)
	{
	}

	[Token(Token = "0x600124A")]
	[Address(RVA = "0x693AF30", Offset = "0x6939F30", VA = "0x693AF30", Slot = "21")]
	public virtual object Clone()
	{
		return null;
	}
}
