// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.HumanAIStates.Custom
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/HumanAIStates/Custom.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using CustomLogic;
using Il2CppDummyDll;

namespace Controllers.HumanAIStates;

[Token(Token = "0x20004D1")]
internal class Custom : HumanAIState
{
	[Token(Token = "0x4001540")]
	[FieldOffset(Offset = "0x20")]
	protected UserClassInstance _instance;

	[Token(Token = "0x4001541")]
	[FieldOffset(Offset = "0x28")]
	protected UserMethod _onStateEntry;

	[Token(Token = "0x4001542")]
	[FieldOffset(Offset = "0x30")]
	protected UserMethod _onStateExit;

	[Token(Token = "0x4001543")]
	[FieldOffset(Offset = "0x38")]
	protected UserMethod _action;

	[Token(Token = "0x4001544")]
	[FieldOffset(Offset = "0x40")]
	private string _name;

	[Token(Token = "0x170009AB")]
	public override string Name
	{
		[Token(Token = "0x60032D1")]
		[Address(RVA = "0x419D290", Offset = "0x419D290", VA = "0x419D290", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60032D2")]
	[Address(RVA = "0x419D2A0", Offset = "0x419D2A0", VA = "0x419D2A0")]
	public void Init(string name, UserClassInstance instance)
	{
	}

	[Token(Token = "0x60032D3")]
	[Address(RVA = "0x419D5C0", Offset = "0x419D5C0", VA = "0x419D5C0", Slot = "6")]
	public override void OnStateEntry()
	{
	}

	[Token(Token = "0x60032D4")]
	[Address(RVA = "0x419D660", Offset = "0x419D660", VA = "0x419D660", Slot = "7")]
	public override void Action()
	{
	}

	[Token(Token = "0x60032D5")]
	[Address(RVA = "0x419D700", Offset = "0x419D700", VA = "0x419D700", Slot = "8")]
	public override void OnStateExit()
	{
	}

	[Token(Token = "0x60032D6")]
	[Address(RVA = "0x419D7A0", Offset = "0x419D7A0", VA = "0x419D7A0")]
	public Custom()
	{
	}
}
