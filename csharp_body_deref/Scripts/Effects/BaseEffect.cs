// ==================== AoTTG2 cross-reference ====================
// Type: Effects.BaseEffect
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Effects/BaseEffect.c
// Prior real C# source (older reference): Assets/Scripts/Effects/BaseEffect.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Effects;

[Token(Token = "0x200034B")]
internal class BaseEffect : MonoBehaviour
{
	[Token(Token = "0x400111E")]
	[FieldOffset(Offset = "0x20")]
	protected Player _owner;

	[Token(Token = "0x400111F")]
	[FieldOffset(Offset = "0x28")]
	protected float _timeLeft;

	[Token(Token = "0x6001512")]
	[Address(RVA = "0x1E62DE0", Offset = "0x1E613E0", VA = "0x181E62DE0", Slot = "4")]
	public virtual void Setup(Player owner, float liveTime, object[] settings)
	{
	}

	[Token(Token = "0x6001513")]
	[Address(RVA = "0x1E62D50", Offset = "0x1E61350", VA = "0x181E62D50", Slot = "5")]
	public virtual void PlayAudio()
	{
	}

	[Token(Token = "0x6001514")]
	[Address(RVA = "0x1E62E10", Offset = "0x1E61410", VA = "0x181E62E10", Slot = "6")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6001515")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public BaseEffect()
	{
	}
}
