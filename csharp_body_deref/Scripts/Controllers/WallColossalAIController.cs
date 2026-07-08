using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Controllers;

[Token(Token = "0x200048A")]
internal class WallColossalAIController : BaseTitanAIController
{
	[Token(Token = "0x4001429")]
	[FieldOffset(Offset = "0xF8")]
	protected List<string> WallAttacks;

	[Token(Token = "0x400142A")]
	[FieldOffset(Offset = "0x100")]
	protected List<string> LeftHandedAttacks;

	[Token(Token = "0x400142B")]
	[FieldOffset(Offset = "0x108")]
	protected List<string> RightHandedAttacks;

	[Token(Token = "0x400142C")]
	[FieldOffset(Offset = "0x110")]
	public float WallAttackCooldownLeft;

	[Token(Token = "0x400142D")]
	[FieldOffset(Offset = "0x114")]
	public float WallAttackCooldown;

	[Token(Token = "0x1700093E")]
	protected override bool _scriptedAI
	{
		[Token(Token = "0x60030BA")]
		[Address(RVA = "0x3E90380", Offset = "0x3E90380", VA = "0x3E90380", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700093F")]
	protected override bool _stationaryAI
	{
		[Token(Token = "0x60030BB")]
		[Address(RVA = "0x3E90390", Offset = "0x3E90390", VA = "0x3E90390", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60030BC")]
	[Address(RVA = "0x3E903A0", Offset = "0x3E903A0", VA = "0x3E903A0", Slot = "10")]
	protected override void UpdateScriptedAI()
	{
	}

	[Token(Token = "0x60030BD")]
	[Address(RVA = "0x3E90590", Offset = "0x3E90590", VA = "0x3E90590", Slot = "9")]
	public override void Init(JSONNode data)
	{
	}

	[Token(Token = "0x60030BE")]
	[Address(RVA = "0x3E90460", Offset = "0x3E90460", VA = "0x3E90460")]
	public void WallAttack()
	{
	}

	[Token(Token = "0x60030BF")]
	[Address(RVA = "0x3E90620", Offset = "0x3E90620", VA = "0x3E90620")]
	public WallColossalAIController()
	{
	}
}
