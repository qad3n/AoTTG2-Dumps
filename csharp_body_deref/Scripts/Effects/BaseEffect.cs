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

[Token(Token = "0x2000233")]
internal class BaseEffect : MonoBehaviour
{
	[Token(Token = "0x4000C15")]
	[FieldOffset(Offset = "0x20")]
	protected Player _owner;

	[Token(Token = "0x4000C16")]
	[FieldOffset(Offset = "0x28")]
	protected float _timeLeft;

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x4472050", Offset = "0x4472050", VA = "0x4472050", Slot = "4")]
	public virtual void Setup(Player owner, float liveTime, object[] settings)
	{
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x4472080", Offset = "0x4472080", VA = "0x4472080", Slot = "5")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x4472110", Offset = "0x4472110", VA = "0x4472110")]
	public BaseEffect()
	{
	}
}
