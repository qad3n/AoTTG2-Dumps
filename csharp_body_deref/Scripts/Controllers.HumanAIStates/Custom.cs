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

[Token(Token = "0x2000628")]
internal class Custom : HumanAIState
{
	[Token(Token = "0x4001BA3")]
	[FieldOffset(Offset = "0x20")]
	protected UserClassInstance _instance;

	[Token(Token = "0x4001BA4")]
	[FieldOffset(Offset = "0x28")]
	protected UserMethod _onStateEntry;

	[Token(Token = "0x4001BA5")]
	[FieldOffset(Offset = "0x30")]
	protected UserMethod _onStateExit;

	[Token(Token = "0x4001BA6")]
	[FieldOffset(Offset = "0x38")]
	protected UserMethod _action;

	[Token(Token = "0x4001BA7")]
	[FieldOffset(Offset = "0x40")]
	private string _name;

	[Token(Token = "0x17000AB0")]
	public override string Name
	{
		[Token(Token = "0x6003C8C")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003C8D")]
	[Address(RVA = "0x21166B0", Offset = "0x2114CB0", VA = "0x1821166B0")]
	public void Init(string name, UserClassInstance instance)
	{
	}

	[Token(Token = "0x6003C8E")]
	[Address(RVA = "0x2116A30", Offset = "0x2115030", VA = "0x182116A30", Slot = "6")]
	public override void OnStateEntry()
	{
	}

	[Token(Token = "0x6003C8F")]
	[Address(RVA = "0x2116610", Offset = "0x2114C10", VA = "0x182116610", Slot = "7")]
	public override void Action()
	{
	}

	[Token(Token = "0x6003C90")]
	[Address(RVA = "0x2116AD0", Offset = "0x21150D0", VA = "0x182116AD0", Slot = "8")]
	public override void OnStateExit()
	{
	}

	[Token(Token = "0x6003C91")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public Custom()
	{
	}
}
