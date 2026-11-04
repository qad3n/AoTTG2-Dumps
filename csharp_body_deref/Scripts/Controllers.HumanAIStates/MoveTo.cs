// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.HumanAIStates.MoveTo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/HumanAIStates/MoveTo.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Controllers.HumanAIStates;

[Token(Token = "0x2000627")]
internal class MoveTo : HumanAIState
{
	[Token(Token = "0x4001BA2")]
	[FieldOffset(Offset = "0x20")]
	public float MoveToRange;

	[Token(Token = "0x17000AAF")]
	public override string Name
	{
		[Token(Token = "0x6003C88")]
		[Address(RVA = "0x211CF40", Offset = "0x211B540", VA = "0x18211CF40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003C89")]
	[Address(RVA = "0x211CD80", Offset = "0x211B380", VA = "0x18211CD80", Slot = "7")]
	public override void Action()
	{
	}

	[Token(Token = "0x6003C8A")]
	[Address(RVA = "0x211CF00", Offset = "0x211B500", VA = "0x18211CF00", Slot = "8")]
	public override void OnStateExit()
	{
	}

	[Token(Token = "0x6003C8B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public MoveTo()
	{
	}
}
