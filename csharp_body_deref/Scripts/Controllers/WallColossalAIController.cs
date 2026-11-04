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

[Token(Token = "0x2000626")]
internal class WallColossalAIController : BaseTitanAIController
{
	[Token(Token = "0x4001B9D")]
	[FieldOffset(Offset = "0x150")]
	protected List<string> WallAttacks;

	[Token(Token = "0x4001B9E")]
	[FieldOffset(Offset = "0x158")]
	protected List<string> LeftHandedAttacks;

	[Token(Token = "0x4001B9F")]
	[FieldOffset(Offset = "0x160")]
	protected List<string> RightHandedAttacks;

	[Token(Token = "0x4001BA0")]
	[FieldOffset(Offset = "0x168")]
	public float WallAttackCooldownLeft;

	[Token(Token = "0x4001BA1")]
	[FieldOffset(Offset = "0x16C")]
	public float WallAttackCooldown;

	[Token(Token = "0x17000AAD")]
	protected override bool _scriptedAI
	{
		[Token(Token = "0x6003C82")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AAE")]
	protected override bool _stationaryAI
	{
		[Token(Token = "0x6003C83")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003C84")]
	[Address(RVA = "0x211F970", Offset = "0x211DF70", VA = "0x18211F970", Slot = "12")]
	protected override void UpdateScriptedAI()
	{
	}

	[Token(Token = "0x6003C85")]
	[Address(RVA = "0x211F8E0", Offset = "0x211DEE0", VA = "0x18211F8E0", Slot = "11")]
	public override void Init(JSONNode data)
	{
	}

	[Token(Token = "0x6003C86")]
	[Address(RVA = "0x211FB80", Offset = "0x211E180", VA = "0x18211FB80")]
	public void WallAttack()
	{
	}

	[Token(Token = "0x6003C87")]
	[Address(RVA = "0x211FCE0", Offset = "0x211E2E0", VA = "0x18211FCE0")]
	public WallColossalAIController()
	{
	}
}
