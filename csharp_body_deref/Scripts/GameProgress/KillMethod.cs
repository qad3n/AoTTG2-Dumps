using Il2CppDummyDll;

namespace GameProgress;

[Token(Token = "0x20001C6")]
public struct KillMethod
{
	[Token(Token = "0x40009CB")]
	public const string NullSpecialKey = "None";

	[Token(Token = "0x40009CC")]
	[FieldOffset(Offset = "0x0")]
	public KillWeapon Weapon;

	[Token(Token = "0x40009CD")]
	[FieldOffset(Offset = "0x8")]
	public string Special;

	[Token(Token = "0x17000124")]
	public readonly string WeaponKey
	{
		[Token(Token = "0x6000A46")]
		[Address(RVA = "0x4108AA0", Offset = "0x4108AA0", VA = "0x4108AA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000125")]
	public readonly string SpecialKey
	{
		[Token(Token = "0x6000A47")]
		[Address(RVA = "0x4108B00", Offset = "0x4108B00", VA = "0x4108B00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x410C8D0", Offset = "0x410C8D0", VA = "0x410C8D0")]
	public KillMethod(KillWeapon weapon, string special)
	{
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x410C8F0", Offset = "0x410C8F0", VA = "0x410C8F0")]
	public static implicit operator KillMethod(KillWeapon weapon)
	{
		return default(KillMethod);
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x410C950", Offset = "0x410C950", VA = "0x410C950", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}
}
