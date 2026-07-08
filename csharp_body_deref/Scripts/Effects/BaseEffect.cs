using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Effects;

[Token(Token = "0x20001FD")]
internal class BaseEffect : MonoBehaviour
{
	[Token(Token = "0x4000B3C")]
	[FieldOffset(Offset = "0x20")]
	protected Player _owner;

	[Token(Token = "0x4000B3D")]
	[FieldOffset(Offset = "0x28")]
	protected float _timeLeft;

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x413D6C0", Offset = "0x413D6C0", VA = "0x413D6C0", Slot = "4")]
	public virtual void Setup(Player owner, float liveTime, object[] settings)
	{
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x413D6F0", Offset = "0x413D6F0", VA = "0x413D6F0", Slot = "5")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x413D780", Offset = "0x413D780", VA = "0x413D780")]
	public BaseEffect()
	{
	}
}
