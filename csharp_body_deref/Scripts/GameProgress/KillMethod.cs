// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.KillMethod
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/KillMethod.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameProgressManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace GameProgress;

[Token(Token = "0x20001F9")]
public struct KillMethod
{
	[Token(Token = "0x4000A91")]
	public const string NullSpecialKey = "None";

	[Token(Token = "0x4000A92")]
	[FieldOffset(Offset = "0x0")]
	public KillWeapon Weapon;

	[Token(Token = "0x4000A93")]
	[FieldOffset(Offset = "0x8")]
	public string Special;

	[Token(Token = "0x1700017A")]
	public readonly string WeaponKey
	{
		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x443B070", Offset = "0x443B070", VA = "0x443B070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017B")]
	public readonly string SpecialKey
	{
		[Token(Token = "0x6000BC4")]
		[Address(RVA = "0x443B0D0", Offset = "0x443B0D0", VA = "0x443B0D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x443F000", Offset = "0x443F000", VA = "0x443F000")]
	public KillMethod(KillWeapon weapon, string special)
	{
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x443F020", Offset = "0x443F020", VA = "0x443F020")]
	public static implicit operator KillMethod(KillWeapon weapon)
	{
		return default(KillMethod);
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x443F080", Offset = "0x443F080", VA = "0x443F080", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}
}
