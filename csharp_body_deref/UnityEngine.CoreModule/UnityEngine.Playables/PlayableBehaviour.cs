using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Serializable]
[Token(Token = "0x200032A")]
[UnityEngine.Scripting.RequiredByNativeCode]
public abstract class PlayableBehaviour : IPlayableBehaviour, ICloneable
{
	[Token(Token = "0x600114C")]
	[Address(RVA = "0x4B104A0", Offset = "0x4B104A0", VA = "0x4B104A0")]
	public PlayableBehaviour()
	{
	}

	[Token(Token = "0x600114D")]
	[Address(RVA = "0x4B104B0", Offset = "0x4B104B0", VA = "0x4B104B0", Slot = "13")]
	public virtual void OnGraphStart(Playable playable)
	{
	}

	[Token(Token = "0x600114E")]
	[Address(RVA = "0x4B104C0", Offset = "0x4B104C0", VA = "0x4B104C0", Slot = "14")]
	public virtual void OnGraphStop(Playable playable)
	{
	}

	[Token(Token = "0x600114F")]
	[Address(RVA = "0x4B104D0", Offset = "0x4B104D0", VA = "0x4B104D0", Slot = "15")]
	public virtual void OnPlayableCreate(Playable playable)
	{
	}

	[Token(Token = "0x6001150")]
	[Address(RVA = "0x4B104E0", Offset = "0x4B104E0", VA = "0x4B104E0", Slot = "16")]
	public virtual void OnPlayableDestroy(Playable playable)
	{
	}

	[Token(Token = "0x6001151")]
	[Address(RVA = "0x4B104F0", Offset = "0x4B104F0", VA = "0x4B104F0", Slot = "17")]
	public virtual void OnBehaviourPlay(Playable playable, FrameData info)
	{
	}

	[Token(Token = "0x6001152")]
	[Address(RVA = "0x4B10500", Offset = "0x4B10500", VA = "0x4B10500", Slot = "18")]
	public virtual void OnBehaviourPause(Playable playable, FrameData info)
	{
	}

	[Token(Token = "0x6001153")]
	[Address(RVA = "0x4B10510", Offset = "0x4B10510", VA = "0x4B10510", Slot = "19")]
	public virtual void PrepareFrame(Playable playable, FrameData info)
	{
	}

	[Token(Token = "0x6001154")]
	[Address(RVA = "0x4B10520", Offset = "0x4B10520", VA = "0x4B10520", Slot = "20")]
	public virtual void ProcessFrame(Playable playable, FrameData info, object playerData)
	{
	}

	[Token(Token = "0x6001155")]
	[Address(RVA = "0x4B10530", Offset = "0x4B10530", VA = "0x4B10530", Slot = "21")]
	public virtual object Clone()
	{
		return null;
	}
}
