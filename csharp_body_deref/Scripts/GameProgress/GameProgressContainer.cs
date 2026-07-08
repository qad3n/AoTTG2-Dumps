using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x20001C2")]
internal class GameProgressContainer : SaveableSettingsContainer
{
	[Token(Token = "0x40009B8")]
	[FieldOffset(Offset = "0x20")]
	public AchievementContainer Achievement;

	[Token(Token = "0x40009B9")]
	[FieldOffset(Offset = "0x28")]
	public QuestContainer Quest;

	[Token(Token = "0x40009BA")]
	[FieldOffset(Offset = "0x30")]
	public GameStatContainer GameStat;

	[Token(Token = "0x1700011F")]
	protected override string FolderPath
	{
		[Token(Token = "0x6000A2B")]
		[Address(RVA = "0x410AA50", Offset = "0x410AA50", VA = "0x410AA50", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000120")]
	protected override string FileName
	{
		[Token(Token = "0x6000A2C")]
		[Address(RVA = "0x410AAC0", Offset = "0x410AAC0", VA = "0x410AAC0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000121")]
	protected override bool Encrypted
	{
		[Token(Token = "0x6000A2D")]
		[Address(RVA = "0x410AAF0", Offset = "0x410AAF0", VA = "0x410AAF0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x410AB00", Offset = "0x410AB00", VA = "0x410AB00", Slot = "16")]
	public override void Save()
	{
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x410ADC0", Offset = "0x410ADC0", VA = "0x410ADC0")]
	public GameProgressContainer()
	{
	}
}
