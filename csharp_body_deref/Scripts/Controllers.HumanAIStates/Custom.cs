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

[Token(Token = "0x2000687")]
internal class Custom : HumanAIState
{
	[Token(Token = "0x4001D46")]
	[FieldOffset(Offset = "0x20")]
	protected UserClassInstance _instance;

	[Token(Token = "0x4001D47")]
	[FieldOffset(Offset = "0x28")]
	protected UserMethod _onStateEntry;

	[Token(Token = "0x4001D48")]
	[FieldOffset(Offset = "0x30")]
	protected UserMethod _onStateExit;

	[Token(Token = "0x4001D49")]
	[FieldOffset(Offset = "0x38")]
	protected UserMethod _action;

	[Token(Token = "0x4001D4A")]
	[FieldOffset(Offset = "0x40")]
	private string _name;

	[Token(Token = "0x17000AF8")]
	public override string Name
	{
		[Token(Token = "0x6003F1C")]
		[Address(RVA = "0x5AB0290", Offset = "0x5AAF290", VA = "0x5AB0290", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003F1D")]
	[Address(RVA = "0x5AB02A0", Offset = "0x5AAF2A0", VA = "0x5AB02A0")]
	public void Init(string name, UserClassInstance instance)
	{
	}

	[Token(Token = "0x6003F1E")]
	[Address(RVA = "0x5AB05C0", Offset = "0x5AAF5C0", VA = "0x5AB05C0", Slot = "6")]
	public override void OnStateEntry()
	{
	}

	[Token(Token = "0x6003F1F")]
	[Address(RVA = "0x5AB0640", Offset = "0x5AAF640", VA = "0x5AB0640", Slot = "7")]
	public override void Action()
	{
	}

	[Token(Token = "0x6003F20")]
	[Address(RVA = "0x5AB06C0", Offset = "0x5AAF6C0", VA = "0x5AB06C0", Slot = "8")]
	public override void OnStateExit()
	{
	}

	[Token(Token = "0x6003F21")]
	[Address(RVA = "0x5AB0740", Offset = "0x5AAF740", VA = "0x5AB0740")]
	public Custom()
	{
	}
}
