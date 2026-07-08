using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004EA")]
internal class SwitchbackSpecial : ExtendedUseable
{
	[Token(Token = "0x400171F")]
	private const float GrabIFrameDuration = 0.5f;

	[Token(Token = "0x17000994")]
	protected override float ActiveTime
	{
		[Token(Token = "0x600340C")]
		[Address(RVA = "0x3EECB80", Offset = "0x3EECB80", VA = "0x3EECB80", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600340D")]
	[Address(RVA = "0x3EECB90", Offset = "0x3EECB90", VA = "0x3EECB90")]
	public SwitchbackSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x600340E")]
	[Address(RVA = "0x3EECBB0", Offset = "0x3EECBB0", VA = "0x3EECBB0")]
	public bool RegisterCollision(Human human, Collision collision, float speed)
	{
		return default(bool);
	}

	[Token(Token = "0x600340F")]
	[Address(RVA = "0x3EECE00", Offset = "0x3EECE00", VA = "0x3EECE00", Slot = "12")]
	public override void SetInput(bool key)
	{
	}

	[Token(Token = "0x6003410")]
	[Address(RVA = "0x3EECEF0", Offset = "0x3EECEF0", VA = "0x3EECEF0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6003411")]
	[Address(RVA = "0x3EECF70", Offset = "0x3EECF70", VA = "0x3EECF70", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
