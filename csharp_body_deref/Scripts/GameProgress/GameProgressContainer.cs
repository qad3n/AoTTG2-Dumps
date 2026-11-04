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

[Token(Token = "0x2000306")]
internal class GameProgressContainer : SaveableSettingsContainer
{
	[Token(Token = "0x4000F59")]
	[FieldOffset(Offset = "0x38")]
	public AchievementContainer Achievement;

	[Token(Token = "0x4000F5A")]
	[FieldOffset(Offset = "0x40")]
	public QuestContainer Quest;

	[Token(Token = "0x4000F5B")]
	[FieldOffset(Offset = "0x48")]
	public GameStatContainer GameStat;

	[Token(Token = "0x17000209")]
	protected override string FolderPath
	{
		[Token(Token = "0x60012B6")]
		[Address(RVA = "0x1E34890", Offset = "0x1E32E90", VA = "0x181E34890", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020A")]
	protected override string FileName
	{
		[Token(Token = "0x60012B7")]
		[Address(RVA = "0x1E34860", Offset = "0x1E32E60", VA = "0x181E34860", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020B")]
	protected override bool Encrypted
	{
		[Token(Token = "0x60012B8")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x1E34760", Offset = "0x1E32D60", VA = "0x181E34760", Slot = "18")]
	public override void Save()
	{
	}

	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x1E34790", Offset = "0x1E32D90", VA = "0x181E34790")]
	public GameProgressContainer()
	{
	}
}
