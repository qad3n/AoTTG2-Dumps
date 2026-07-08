using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace GameProgress;

[Token(Token = "0x20001BD")]
internal abstract class BaseGameProgressHandler
{
	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x4108330", Offset = "0x4108330", VA = "0x4108330", Slot = "4")]
	public virtual void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x4108340", Offset = "0x4108340", VA = "0x4108340", Slot = "5")]
	public virtual void RegisterHumanKill(Human victim, KillMethod method)
	{
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x4108350", Offset = "0x4108350", VA = "0x4108350", Slot = "6")]
	public virtual void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x4108360", Offset = "0x4108360", VA = "0x4108360", Slot = "7")]
	public virtual void RegisterSpeed(float speed)
	{
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x4108370", Offset = "0x4108370", VA = "0x4108370", Slot = "8")]
	public virtual void RegisterInteraction(GameObject interact, InteractionType interactionType)
	{
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x4108380", Offset = "0x4108380", VA = "0x4108380")]
	protected BaseGameProgressHandler()
	{
	}
}
