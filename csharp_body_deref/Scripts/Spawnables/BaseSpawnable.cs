using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Spawnables;

[Token(Token = "0x200005F")]
internal class BaseSpawnable : MonoBehaviour
{
	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0x20")]
	protected Player _owner;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x28")]
	protected float _timeLeft;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0x2C")]
	protected bool _expires;

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x3C8E950", Offset = "0x3C8E950", VA = "0x3C8E950", Slot = "4")]
	public virtual void Setup(Player owner, float liveTime, object[] settings)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x3C8E9B0", Offset = "0x3C8E9B0", VA = "0x3C8E9B0", Slot = "5")]
	protected virtual void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x3C8E9C0", Offset = "0x3C8E9C0", VA = "0x3C8E9C0", Slot = "6")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x3C8EA50", Offset = "0x3C8EA50", VA = "0x3C8EA50")]
	public BaseSpawnable()
	{
	}
}
