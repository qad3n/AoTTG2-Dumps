// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.KillMethod
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/KillMethod.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameProgressManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace GameProgress;

[Token(Token = "0x200030A")]
public struct KillMethod
{
	[Token(Token = "0x4000F6C")]
	public const string NullSpecialKey = "None";

	[Token(Token = "0x4000F6D")]
	[FieldOffset(Offset = "0x0")]
	public KillWeapon Weapon;

	[Token(Token = "0x4000F6E")]
	[FieldOffset(Offset = "0x8")]
	public string Special;

	[Token(Token = "0x1700020E")]
	public readonly string WeaponKey
	{
		[Token(Token = "0x60012D3")]
		[Address(RVA = "0x1E36E10", Offset = "0x1E35410", VA = "0x181E36E10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020F")]
	public readonly string SpecialKey
	{
		[Token(Token = "0x60012D4")]
		[Address(RVA = "0x1E36DC0", Offset = "0x1E353C0", VA = "0x181E36DC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x1028B90", Offset = "0x1027190", VA = "0x181028B90")]
	public KillMethod(KillWeapon weapon, string special)
	{
	}

	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x1E36E70", Offset = "0x1E35470", VA = "0x181E36E70")]
	public static implicit operator KillMethod(KillWeapon weapon)
	{
		return default(KillMethod);
	}

	[Token(Token = "0x60012D5")]
	[Address(RVA = "0x1E36C30", Offset = "0x1E35230", VA = "0x181E36C30", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}
}
