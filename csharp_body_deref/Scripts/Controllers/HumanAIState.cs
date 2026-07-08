using Characters;
using Il2CppDummyDll;

namespace Controllers;

[Token(Token = "0x2000486")]
internal class HumanAIState
{
	[Token(Token = "0x400141A")]
	[FieldOffset(Offset = "0x10")]
	protected Human Human;

	[Token(Token = "0x400141B")]
	[FieldOffset(Offset = "0x18")]
	protected HumanAIController Controller;

	[Token(Token = "0x1700093D")]
	public virtual string Name
	{
		[Token(Token = "0x6003096")]
		[Address(RVA = "0x3E8AEA0", Offset = "0x3E8AEA0", VA = "0x3E8AEA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003097")]
	[Address(RVA = "0x3E8AED0", Offset = "0x3E8AED0", VA = "0x3E8AED0", Slot = "5")]
	public virtual HumanAIState Init(Human human)
	{
		return null;
	}

	[Token(Token = "0x6003098")]
	[Address(RVA = "0x3E8AFA0", Offset = "0x3E8AFA0", VA = "0x3E8AFA0", Slot = "6")]
	public virtual void OnStateEntry()
	{
	}

	[Token(Token = "0x6003099")]
	[Address(RVA = "0x3E8AFB0", Offset = "0x3E8AFB0", VA = "0x3E8AFB0", Slot = "7")]
	public virtual void Action()
	{
	}

	[Token(Token = "0x600309A")]
	[Address(RVA = "0x3E8AFC0", Offset = "0x3E8AFC0", VA = "0x3E8AFC0", Slot = "8")]
	public virtual void OnStateExit()
	{
	}

	[Token(Token = "0x600309B")]
	[Address(RVA = "0x3E8AFD0", Offset = "0x3E8AFD0", VA = "0x3E8AFD0")]
	public HumanAIState()
	{
	}
}
