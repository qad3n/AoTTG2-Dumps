// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.WallColossalAIController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/WallColossalAIController.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Controllers;

[Token(Token = "0x2000685")]
internal class WallColossalAIController : BaseTitanAIController
{
	[Token(Token = "0x4001D40")]
	[FieldOffset(Offset = "0x160")]
	protected List<string> WallAttacks;

	[Token(Token = "0x4001D41")]
	[FieldOffset(Offset = "0x168")]
	protected List<string> LeftHandedAttacks;

	[Token(Token = "0x4001D42")]
	[FieldOffset(Offset = "0x170")]
	protected List<string> RightHandedAttacks;

	[Token(Token = "0x4001D43")]
	[FieldOffset(Offset = "0x178")]
	public float WallAttackCooldownLeft;

	[Token(Token = "0x4001D44")]
	[FieldOffset(Offset = "0x17C")]
	public float WallAttackCooldown;

	[Token(Token = "0x17000AF5")]
	protected override bool _scriptedAI
	{
		[Token(Token = "0x6003F12")]
		[Address(RVA = "0x5AAF8D0", Offset = "0x5AAE8D0", VA = "0x5AAF8D0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AF6")]
	protected override bool _stationaryAI
	{
		[Token(Token = "0x6003F13")]
		[Address(RVA = "0x5AAF8E0", Offset = "0x5AAE8E0", VA = "0x5AAF8E0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003F14")]
	[Address(RVA = "0x5AAF8F0", Offset = "0x5AAE8F0", VA = "0x5AAF8F0", Slot = "12")]
	protected override void UpdateScriptedAI()
	{
	}

	[Token(Token = "0x6003F15")]
	[Address(RVA = "0x5AAFB00", Offset = "0x5AAEB00", VA = "0x5AAFB00", Slot = "11")]
	public override void Init(JSONNode data)
	{
	}

	[Token(Token = "0x6003F16")]
	[Address(RVA = "0x5AAF9B0", Offset = "0x5AAE9B0", VA = "0x5AAF9B0")]
	public void WallAttack()
	{
	}

	[Token(Token = "0x6003F17")]
	[Address(RVA = "0x5AAFB90", Offset = "0x5AAEB90", VA = "0x5AAFB90")]
	public WallColossalAIController()
	{
	}
}
