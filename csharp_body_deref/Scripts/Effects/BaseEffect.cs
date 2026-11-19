// ==================== AoTTG2 cross-reference ====================
// Type: Effects.BaseEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Effects/BaseEffect.c
// Prior real C# source (older reference): Assets/Scripts/Effects/BaseEffect.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Effects;

[Token(Token = "0x20003AD")]
internal class BaseEffect : MonoBehaviour
{
	[Token(Token = "0x40012CE")]
	[FieldOffset(Offset = "0x20")]
	protected Player _owner;

	[Token(Token = "0x40012CF")]
	[FieldOffset(Offset = "0x28")]
	protected float _timeLeft;

	[Token(Token = "0x6001792")]
	[Address(RVA = "0x585AFD0", Offset = "0x5859FD0", VA = "0x585AFD0", Slot = "4")]
	public virtual void Setup(Player owner, float liveTime, object[] settings)
	{
	}

	[Token(Token = "0x6001793")]
	[Address(RVA = "0x585B000", Offset = "0x585A000", VA = "0x585B000", Slot = "5")]
	public virtual void PlayAudio()
	{
	}

	[Token(Token = "0x6001794")]
	[Address(RVA = "0x585B090", Offset = "0x585A090", VA = "0x585B090", Slot = "6")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6001795")]
	[Address(RVA = "0x585B120", Offset = "0x585A120", VA = "0x585B120")]
	public BaseEffect()
	{
	}
}
