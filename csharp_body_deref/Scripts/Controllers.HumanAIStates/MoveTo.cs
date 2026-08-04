// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.HumanAIStates.MoveTo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/HumanAIStates/MoveTo.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Controllers.HumanAIStates;

[Token(Token = "0x20004D0")]
internal class MoveTo : HumanAIState
{
	[Token(Token = "0x400153F")]
	[FieldOffset(Offset = "0x20")]
	public float MoveToRange;

	[Token(Token = "0x170009AA")]
	public override string Name
	{
		[Token(Token = "0x60032CD")]
		[Address(RVA = "0x419D0A0", Offset = "0x419D0A0", VA = "0x419D0A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60032CE")]
	[Address(RVA = "0x419D0D0", Offset = "0x419D0D0", VA = "0x419D0D0", Slot = "7")]
	public override void Action()
	{
	}

	[Token(Token = "0x60032CF")]
	[Address(RVA = "0x419D250", Offset = "0x419D250", VA = "0x419D250", Slot = "8")]
	public override void OnStateExit()
	{
	}

	[Token(Token = "0x60032D0")]
	[Address(RVA = "0x419D280", Offset = "0x419D280", VA = "0x419D280")]
	public MoveTo()
	{
	}
}
