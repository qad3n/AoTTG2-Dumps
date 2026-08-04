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
[Token(Token = "0x200032D")]
[UnityEngine.Scripting.RequiredByNativeCode]
public abstract class PlayableBehaviour : IPlayableBehaviour, ICloneable
{
	[Token(Token = "0x600114E")]
	[Address(RVA = "0x4E37DD0", Offset = "0x4E37DD0", VA = "0x4E37DD0")]
	public PlayableBehaviour()
	{
	}

	[Token(Token = "0x600114F")]
	[Address(RVA = "0x4E37DE0", Offset = "0x4E37DE0", VA = "0x4E37DE0", Slot = "13")]
	public virtual void OnGraphStart(Playable playable)
	{
	}

	[Token(Token = "0x6001150")]
	[Address(RVA = "0x4E37DF0", Offset = "0x4E37DF0", VA = "0x4E37DF0", Slot = "14")]
	public virtual void OnGraphStop(Playable playable)
	{
	}

	[Token(Token = "0x6001151")]
	[Address(RVA = "0x4E37E00", Offset = "0x4E37E00", VA = "0x4E37E00", Slot = "15")]
	public virtual void OnPlayableCreate(Playable playable)
	{
	}

	[Token(Token = "0x6001152")]
	[Address(RVA = "0x4E37E10", Offset = "0x4E37E10", VA = "0x4E37E10", Slot = "16")]
	public virtual void OnPlayableDestroy(Playable playable)
	{
	}

	[Token(Token = "0x6001153")]
	[Address(RVA = "0x4E37E20", Offset = "0x4E37E20", VA = "0x4E37E20", Slot = "17")]
	public virtual void OnBehaviourPlay(Playable playable, FrameData info)
	{
	}

	[Token(Token = "0x6001154")]
	[Address(RVA = "0x4E37E30", Offset = "0x4E37E30", VA = "0x4E37E30", Slot = "18")]
	public virtual void OnBehaviourPause(Playable playable, FrameData info)
	{
	}

	[Token(Token = "0x6001155")]
	[Address(RVA = "0x4E37E40", Offset = "0x4E37E40", VA = "0x4E37E40", Slot = "19")]
	public virtual void PrepareFrame(Playable playable, FrameData info)
	{
	}

	[Token(Token = "0x6001156")]
	[Address(RVA = "0x4E37E50", Offset = "0x4E37E50", VA = "0x4E37E50", Slot = "20")]
	public virtual void ProcessFrame(Playable playable, FrameData info, object playerData)
	{
	}

	[Token(Token = "0x6001157")]
	[Address(RVA = "0x4E37E60", Offset = "0x4E37E60", VA = "0x4E37E60", Slot = "21")]
	public virtual object Clone()
	{
		return null;
	}
}
