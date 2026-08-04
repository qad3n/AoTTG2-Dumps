// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.GameProgressContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/GameProgressContainer.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameProgressContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x20001F5")]
internal class GameProgressContainer : SaveableSettingsContainer
{
	[Token(Token = "0x4000A7E")]
	[FieldOffset(Offset = "0x20")]
	public AchievementContainer Achievement;

	[Token(Token = "0x4000A7F")]
	[FieldOffset(Offset = "0x28")]
	public QuestContainer Quest;

	[Token(Token = "0x4000A80")]
	[FieldOffset(Offset = "0x30")]
	public GameStatContainer GameStat;

	[Token(Token = "0x17000175")]
	protected override string FolderPath
	{
		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x443D0A0", Offset = "0x443D0A0", VA = "0x443D0A0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000176")]
	protected override string FileName
	{
		[Token(Token = "0x6000BA9")]
		[Address(RVA = "0x443D110", Offset = "0x443D110", VA = "0x443D110", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000177")]
	protected override bool Encrypted
	{
		[Token(Token = "0x6000BAA")]
		[Address(RVA = "0x443D140", Offset = "0x443D140", VA = "0x443D140", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x443D150", Offset = "0x443D150", VA = "0x443D150", Slot = "16")]
	public override void Save()
	{
	}

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x443D410", Offset = "0x443D410", VA = "0x443D410")]
	public GameProgressContainer()
	{
	}
}
