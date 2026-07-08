using CustomLogic;
using Il2CppDummyDll;

namespace Controllers.HumanAIStates;

[Token(Token = "0x200048C")]
internal class Custom : HumanAIState
{
	[Token(Token = "0x400142F")]
	[FieldOffset(Offset = "0x20")]
	protected UserClassInstance _instance;

	[Token(Token = "0x4001430")]
	[FieldOffset(Offset = "0x28")]
	protected UserMethod _onStateEntry;

	[Token(Token = "0x4001431")]
	[FieldOffset(Offset = "0x30")]
	protected UserMethod _onStateExit;

	[Token(Token = "0x4001432")]
	[FieldOffset(Offset = "0x38")]
	protected UserMethod _action;

	[Token(Token = "0x4001433")]
	[FieldOffset(Offset = "0x40")]
	private string _name;

	[Token(Token = "0x17000941")]
	public override string Name
	{
		[Token(Token = "0x60030C4")]
		[Address(RVA = "0x3E90CF0", Offset = "0x3E90CF0", VA = "0x3E90CF0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60030C5")]
	[Address(RVA = "0x3E90D00", Offset = "0x3E90D00", VA = "0x3E90D00")]
	public void Init(string name, UserClassInstance instance)
	{
	}

	[Token(Token = "0x60030C6")]
	[Address(RVA = "0x3E91020", Offset = "0x3E91020", VA = "0x3E91020", Slot = "6")]
	public override void OnStateEntry()
	{
	}

	[Token(Token = "0x60030C7")]
	[Address(RVA = "0x3E910C0", Offset = "0x3E910C0", VA = "0x3E910C0", Slot = "7")]
	public override void Action()
	{
	}

	[Token(Token = "0x60030C8")]
	[Address(RVA = "0x3E91160", Offset = "0x3E91160", VA = "0x3E91160", Slot = "8")]
	public override void OnStateExit()
	{
	}

	[Token(Token = "0x60030C9")]
	[Address(RVA = "0x3E91200", Offset = "0x3E91200", VA = "0x3E91200")]
	public Custom()
	{
	}
}
