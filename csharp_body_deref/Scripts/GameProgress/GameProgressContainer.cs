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

[Token(Token = "0x2000367")]
internal class GameProgressContainer : SaveableSettingsContainer
{
	[Token(Token = "0x40010F8")]
	[FieldOffset(Offset = "0x38")]
	public AchievementContainer Achievement;

	[Token(Token = "0x40010F9")]
	[FieldOffset(Offset = "0x40")]
	public QuestContainer Quest;

	[Token(Token = "0x40010FA")]
	[FieldOffset(Offset = "0x48")]
	public GameStatContainer GameStat;

	[Token(Token = "0x17000250")]
	protected override string FolderPath
	{
		[Token(Token = "0x6001528")]
		[Address(RVA = "0x581F1D0", Offset = "0x581E1D0", VA = "0x581F1D0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000251")]
	protected override string FileName
	{
		[Token(Token = "0x6001529")]
		[Address(RVA = "0x581F240", Offset = "0x581E240", VA = "0x581F240", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000252")]
	protected override bool Encrypted
	{
		[Token(Token = "0x600152A")]
		[Address(RVA = "0x581F270", Offset = "0x581E270", VA = "0x581F270", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600152B")]
	[Address(RVA = "0x581F280", Offset = "0x581E280", VA = "0x581F280", Slot = "18")]
	public override void Save()
	{
	}

	[Token(Token = "0x600152C")]
	[Address(RVA = "0x581F520", Offset = "0x581E520", VA = "0x581F520")]
	public GameProgressContainer()
	{
	}
}
