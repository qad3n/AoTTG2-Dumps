// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.Rock2Projectile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/Rock2Projectile.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Projectiles;

[Token(Token = "0x20000E6")]
internal class Rock2Projectile : Rock1Projectile
{
	[Token(Token = "0x170000AE")]
	protected override bool DestroyOnImpact
	{
		[Token(Token = "0x6000461")]
		[Address(RVA = "0x41093B0", Offset = "0x41093B0", VA = "0x41093B0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AF")]
	protected override float MinImpactVelocity
	{
		[Token(Token = "0x6000462")]
		[Address(RVA = "0x41093C0", Offset = "0x41093C0", VA = "0x41093C0", Slot = "21")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x41093D0", Offset = "0x41093D0", VA = "0x41093D0", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x41094A0", Offset = "0x41094A0", VA = "0x41094A0")]
	public Rock2Projectile()
	{
	}
}
