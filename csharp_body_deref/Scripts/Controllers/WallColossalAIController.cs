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

[Token(Token = "0x20004CF")]
internal class WallColossalAIController : BaseTitanAIController
{
	[Token(Token = "0x400153A")]
	[FieldOffset(Offset = "0x100")]
	protected List<string> WallAttacks;

	[Token(Token = "0x400153B")]
	[FieldOffset(Offset = "0x108")]
	protected List<string> LeftHandedAttacks;

	[Token(Token = "0x400153C")]
	[FieldOffset(Offset = "0x110")]
	protected List<string> RightHandedAttacks;

	[Token(Token = "0x400153D")]
	[FieldOffset(Offset = "0x118")]
	public float WallAttackCooldownLeft;

	[Token(Token = "0x400153E")]
	[FieldOffset(Offset = "0x11C")]
	public float WallAttackCooldown;

	[Token(Token = "0x170009A8")]
	protected override bool _scriptedAI
	{
		[Token(Token = "0x60032C7")]
		[Address(RVA = "0x419C920", Offset = "0x419C920", VA = "0x419C920", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009A9")]
	protected override bool _stationaryAI
	{
		[Token(Token = "0x60032C8")]
		[Address(RVA = "0x419C930", Offset = "0x419C930", VA = "0x419C930", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60032C9")]
	[Address(RVA = "0x419C940", Offset = "0x419C940", VA = "0x419C940", Slot = "10")]
	protected override void UpdateScriptedAI()
	{
	}

	[Token(Token = "0x60032CA")]
	[Address(RVA = "0x419CB30", Offset = "0x419CB30", VA = "0x419CB30", Slot = "9")]
	public override void Init(JSONNode data)
	{
	}

	[Token(Token = "0x60032CB")]
	[Address(RVA = "0x419CA00", Offset = "0x419CA00", VA = "0x419CA00")]
	public void WallAttack()
	{
	}

	[Token(Token = "0x60032CC")]
	[Address(RVA = "0x419CBC0", Offset = "0x419CBC0", VA = "0x419CBC0")]
	public WallColossalAIController()
	{
	}
}
