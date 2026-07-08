using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000517")]
internal class TitanColliderToggler : MonoBehaviour
{
	[Token(Token = "0x4001940")]
	[FieldOffset(Offset = "0x20")]
	public BaseTitan Owner;

	[Token(Token = "0x4001941")]
	[FieldOffset(Offset = "0x28")]
	public HashSet<BaseCharacter> NearbyCharacters;

	[Token(Token = "0x4001942")]
	[FieldOffset(Offset = "0x30")]
	public TitanProjectileDetection _projectile;

	[Token(Token = "0x4001943")]
	[FieldOffset(Offset = "0x38")]
	protected bool _look;

	[Token(Token = "0x4001944")]
	[FieldOffset(Offset = "0x39")]
	protected bool _enabled;

	[Token(Token = "0x60035D3")]
	[Address(RVA = "0x3F141C0", Offset = "0x3F141C0", VA = "0x3F141C0")]
	public static TitanColliderToggler Create(BaseTitan owner)
	{
		return null;
	}

	[Token(Token = "0x60035D4")]
	[Address(RVA = "0x3F146A0", Offset = "0x3F146A0", VA = "0x3F146A0")]
	public void RegisterLook()
	{
	}

	[Token(Token = "0x60035D5")]
	[Address(RVA = "0x3F146B0", Offset = "0x3F146B0", VA = "0x3F146B0")]
	public void SetNearby(BaseCharacter character, bool nearby)
	{
	}

	[Token(Token = "0x60035D6")]
	[Address(RVA = "0x3F14760", Offset = "0x3F14760", VA = "0x3F14760")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x60035D7")]
	[Address(RVA = "0x3F144B0", Offset = "0x3F144B0", VA = "0x3F144B0")]
	protected void SetColliders(bool enable)
	{
	}

	[Token(Token = "0x60035D8")]
	[Address(RVA = "0x3F14850", Offset = "0x3F14850", VA = "0x3F14850")]
	public TitanColliderToggler()
	{
	}
}
