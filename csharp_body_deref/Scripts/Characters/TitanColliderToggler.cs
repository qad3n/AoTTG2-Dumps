// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanColliderToggler
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/TitanColliderToggler.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/TitanColliderToggler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006BF")]
internal class TitanColliderToggler : MonoBehaviour
{
	[Token(Token = "0x400217F")]
	[FieldOffset(Offset = "0x20")]
	public BaseTitan Owner;

	[Token(Token = "0x4002180")]
	[FieldOffset(Offset = "0x28")]
	public HashSet<BaseCharacter> NearbyCharacters;

	[Token(Token = "0x4002181")]
	[FieldOffset(Offset = "0x30")]
	public TitanProjectileDetection _projectile;

	[Token(Token = "0x4002182")]
	[FieldOffset(Offset = "0x38")]
	protected bool _look;

	[Token(Token = "0x4002183")]
	[FieldOffset(Offset = "0x39")]
	protected bool _enabled;

	[Token(Token = "0x17000BBB")]
	public bool CollidersEnabled
	{
		[Token(Token = "0x60042AD")]
		[Address(RVA = "0xF1D4C0", Offset = "0xF1BAC0", VA = "0x180F1D4C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60042AE")]
	[Address(RVA = "0x21AC640", Offset = "0x21AAC40", VA = "0x1821AC640")]
	public static TitanColliderToggler Create(BaseTitan owner)
	{
		return null;
	}

	[Token(Token = "0x60042AF")]
	[Address(RVA = "0xCD9BE0", Offset = "0xCD81E0", VA = "0x180CD9BE0")]
	public void RegisterLook()
	{
	}

	[Token(Token = "0x60042B0")]
	[Address(RVA = "0x21ACA00", Offset = "0x21AB000", VA = "0x1821ACA00")]
	public void SetNearby(BaseCharacter character, bool nearby)
	{
	}

	[Token(Token = "0x60042B1")]
	[Address(RVA = "0x21AC740", Offset = "0x21AAD40", VA = "0x1821AC740")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x60042B2")]
	[Address(RVA = "0x21AC830", Offset = "0x21AAE30", VA = "0x1821AC830")]
	protected void SetColliders(bool enable)
	{
	}

	[Token(Token = "0x60042B3")]
	[Address(RVA = "0x21ACAC0", Offset = "0x21AB0C0", VA = "0x1821ACAC0")]
	public TitanColliderToggler()
	{
	}
}
