// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.Rock2Projectile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/Rock2Projectile.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Projectiles;

[Token(Token = "0x2000106")]
internal class Rock2Projectile : Rock1Projectile
{
	[Token(Token = "0x170000BD")]
	protected override bool DestroyOnImpact
	{
		[Token(Token = "0x60004FA")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000BE")]
	protected override float MinImpactVelocity
	{
		[Token(Token = "0x60004FB")]
		[Address(RVA = "0x20CF520", Offset = "0x20CDB20", VA = "0x1820CF520", Slot = "21")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x20CF440", Offset = "0x20CDA40", VA = "0x1820CF440", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x20B6310", Offset = "0x20B4910", VA = "0x1820B6310")]
	public Rock2Projectile()
	{
	}
}
