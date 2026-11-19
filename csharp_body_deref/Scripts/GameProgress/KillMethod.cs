// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.KillMethod
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/KillMethod.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameProgressManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace GameProgress;

[Token(Token = "0x200036B")]
public struct KillMethod
{
	[Token(Token = "0x400110B")]
	public const string NullSpecialKey = "None";

	[Token(Token = "0x400110C")]
	[FieldOffset(Offset = "0x0")]
	public KillWeapon Weapon;

	[Token(Token = "0x400110D")]
	[FieldOffset(Offset = "0x8")]
	public string Special;

	[Token(Token = "0x17000255")]
	public readonly string WeaponKey
	{
		[Token(Token = "0x6001545")]
		[Address(RVA = "0x581CE00", Offset = "0x581BE00", VA = "0x581CE00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000256")]
	public readonly string SpecialKey
	{
		[Token(Token = "0x6001546")]
		[Address(RVA = "0x581CE60", Offset = "0x581BE60", VA = "0x581CE60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001543")]
	[Address(RVA = "0x58218E0", Offset = "0x58208E0", VA = "0x58218E0")]
	public KillMethod(KillWeapon weapon, string special)
	{
	}

	[Token(Token = "0x6001544")]
	[Address(RVA = "0x5821900", Offset = "0x5820900", VA = "0x5821900")]
	public static implicit operator KillMethod(KillWeapon weapon)
	{
		return default(KillMethod);
	}

	[Token(Token = "0x6001547")]
	[Address(RVA = "0x5821960", Offset = "0x5820960", VA = "0x5821960", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}
}
