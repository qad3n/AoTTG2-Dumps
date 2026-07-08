using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Characters;
using GameManagers;
using Il2CppDummyDll;
using Settings;

namespace CustomLogic;

[Token(Token = "0x20003C1")]
[CompilerGenerated]
internal class CustomLogicGameBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20003C2")]
	public static class Factory
	{
		[Token(Token = "0x60026CC")]
		[Address(RVA = "0x3DBA210", Offset = "0x3DBA210", VA = "0x3DBA210")]
		public static CustomLogicGameBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20003C3")]
	public static class Bindings
	{
		[Token(Token = "0x4000FFB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60026CD")]
		[Address(RVA = "0x3DBA300", Offset = "0x3DBA300", VA = "0x3DBA300")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60026CE")]
		[Address(RVA = "0x3DBB8C0", Offset = "0x3DBB8C0", VA = "0x3DBB8C0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__IsEnding()
		{
			return null;
		}

		[Token(Token = "0x60026CF")]
		[Address(RVA = "0x3DBB960", Offset = "0x3DBB960", VA = "0x3DBB960")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__EndTimeLeft()
		{
			return null;
		}

		[Token(Token = "0x60026D0")]
		[Address(RVA = "0x3DBBA00", Offset = "0x3DBBA00", VA = "0x3DBBA00")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__Titans()
		{
			return null;
		}

		[Token(Token = "0x60026D1")]
		[Address(RVA = "0x3DBBAA0", Offset = "0x3DBBAA0", VA = "0x3DBBAA0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__AITitans()
		{
			return null;
		}

		[Token(Token = "0x60026D2")]
		[Address(RVA = "0x3DBBB40", Offset = "0x3DBBB40", VA = "0x3DBBB40")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__PlayerTitans()
		{
			return null;
		}

		[Token(Token = "0x60026D3")]
		[Address(RVA = "0x3DBBBE0", Offset = "0x3DBBBE0", VA = "0x3DBBBE0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__Shifters()
		{
			return null;
		}

		[Token(Token = "0x60026D4")]
		[Address(RVA = "0x3DBBC80", Offset = "0x3DBBC80", VA = "0x3DBBC80")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__AIShifters()
		{
			return null;
		}

		[Token(Token = "0x60026D5")]
		[Address(RVA = "0x3DBBD20", Offset = "0x3DBBD20", VA = "0x3DBBD20")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__PlayerShifters()
		{
			return null;
		}

		[Token(Token = "0x60026D6")]
		[Address(RVA = "0x3DBBDC0", Offset = "0x3DBBDC0", VA = "0x3DBBDC0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__Humans()
		{
			return null;
		}

		[Token(Token = "0x60026D7")]
		[Address(RVA = "0x3DBBE60", Offset = "0x3DBBE60", VA = "0x3DBBE60")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__AIHumans()
		{
			return null;
		}

		[Token(Token = "0x60026D8")]
		[Address(RVA = "0x3DBBF00", Offset = "0x3DBBF00", VA = "0x3DBBF00")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__PlayerHumans()
		{
			return null;
		}

		[Token(Token = "0x60026D9")]
		[Address(RVA = "0x3DBBFA0", Offset = "0x3DBBFA0", VA = "0x3DBBFA0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__Loadouts()
		{
			return null;
		}

		[Token(Token = "0x60026DA")]
		[Address(RVA = "0x3DBC040", Offset = "0x3DBC040", VA = "0x3DBC040")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__DefaultShowKillScore()
		{
			return null;
		}

		[Token(Token = "0x60026DB")]
		[Address(RVA = "0x3DBC120", Offset = "0x3DBC120", VA = "0x3DBC120")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__DefaultHideKillScore()
		{
			return null;
		}

		[Token(Token = "0x60026DC")]
		[Address(RVA = "0x3DBC200", Offset = "0x3DBC200", VA = "0x3DBC200")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__DefaultAddKillScore()
		{
			return null;
		}

		[Token(Token = "0x60026DD")]
		[Address(RVA = "0x3DBC2E0", Offset = "0x3DBC2E0", VA = "0x3DBC2E0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__ShowScoreboardLoadout()
		{
			return null;
		}

		[Token(Token = "0x60026DE")]
		[Address(RVA = "0x3DBC3C0", Offset = "0x3DBC3C0", VA = "0x3DBC3C0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__ShowScoreboardStatus()
		{
			return null;
		}

		[Token(Token = "0x60026DF")]
		[Address(RVA = "0x3DBC4A0", Offset = "0x3DBC4A0", VA = "0x3DBC4A0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__ForcedCharacterType()
		{
			return null;
		}

		[Token(Token = "0x60026E0")]
		[Address(RVA = "0x3DBC580", Offset = "0x3DBC580", VA = "0x3DBC580")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__ForcedLoadout()
		{
			return null;
		}

		[Token(Token = "0x60026E1")]
		[Address(RVA = "0x3DBC660", Offset = "0x3DBC660", VA = "0x3DBC660")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__Debug()
		{
			return null;
		}

		[Token(Token = "0x60026E2")]
		[Address(RVA = "0x3DBC7B0", Offset = "0x3DBC7B0", VA = "0x3DBC7B0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__Print()
		{
			return null;
		}

		[Token(Token = "0x60026E3")]
		[Address(RVA = "0x3DBC900", Offset = "0x3DBC900", VA = "0x3DBC900")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__PrintAll()
		{
			return null;
		}

		[Token(Token = "0x60026E4")]
		[Address(RVA = "0x3DBCA50", Offset = "0x3DBCA50", VA = "0x3DBCA50")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__GetGeneralSetting()
		{
			return null;
		}

		[Token(Token = "0x60026E5")]
		[Address(RVA = "0x3DBCBA0", Offset = "0x3DBCBA0", VA = "0x3DBCBA0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__GetTitanSetting()
		{
			return null;
		}

		[Token(Token = "0x60026E6")]
		[Address(RVA = "0x3DBCCF0", Offset = "0x3DBCCF0", VA = "0x3DBCCF0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__GetMiscSetting()
		{
			return null;
		}

		[Token(Token = "0x60026E7")]
		[Address(RVA = "0x3DBCE40", Offset = "0x3DBCE40", VA = "0x3DBCE40")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadGeneralSetting()
		{
			return null;
		}

		[Token(Token = "0x60026E8")]
		[Address(RVA = "0x3DBCF90", Offset = "0x3DBCF90", VA = "0x3DBCF90")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadTitanSetting()
		{
			return null;
		}

		[Token(Token = "0x60026E9")]
		[Address(RVA = "0x3DBD0E0", Offset = "0x3DBD0E0", VA = "0x3DBD0E0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadMiscSetting()
		{
			return null;
		}

		[Token(Token = "0x60026EA")]
		[Address(RVA = "0x3DBD230", Offset = "0x3DBD230", VA = "0x3DBD230")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadModeSetting()
		{
			return null;
		}

		[Token(Token = "0x60026EB")]
		[Address(RVA = "0x3DBD380", Offset = "0x3DBD380", VA = "0x3DBD380")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadMap()
		{
			return null;
		}

		[Token(Token = "0x60026EC")]
		[Address(RVA = "0x3DBD4D0", Offset = "0x3DBD4D0", VA = "0x3DBD4D0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadGameMode()
		{
			return null;
		}

		[Token(Token = "0x60026ED")]
		[Address(RVA = "0x3DBD620", Offset = "0x3DBD620", VA = "0x3DBD620")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__LoadPreloadPreset()
		{
			return null;
		}

		[Token(Token = "0x60026EE")]
		[Address(RVA = "0x3DBD770", Offset = "0x3DBD770", VA = "0x3DBD770")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__RestartWithPreloadSettings()
		{
			return null;
		}

		[Token(Token = "0x60026EF")]
		[Address(RVA = "0x3DBD8C0", Offset = "0x3DBD8C0", VA = "0x3DBD8C0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__End()
		{
			return null;
		}

		[Token(Token = "0x60026F0")]
		[Address(RVA = "0x3DBDA10", Offset = "0x3DBDA10", VA = "0x3DBDA10")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__FindCharacterByViewID()
		{
			return null;
		}

		[Token(Token = "0x60026F1")]
		[Address(RVA = "0x3DBDB60", Offset = "0x3DBDB60", VA = "0x3DBDB60")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitan()
		{
			return null;
		}

		[Token(Token = "0x60026F2")]
		[Address(RVA = "0x3DBDCB0", Offset = "0x3DBDCB0", VA = "0x3DBDCB0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitanAt()
		{
			return null;
		}

		[Token(Token = "0x60026F3")]
		[Address(RVA = "0x3DBDE00", Offset = "0x3DBDE00", VA = "0x3DBDE00")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitans()
		{
			return null;
		}

		[Token(Token = "0x60026F4")]
		[Address(RVA = "0x3DBDF50", Offset = "0x3DBDF50", VA = "0x3DBDF50")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitansAsync()
		{
			return null;
		}

		[Token(Token = "0x60026F5")]
		[Address(RVA = "0x3DBE0A0", Offset = "0x3DBE0A0", VA = "0x3DBE0A0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitansAt()
		{
			return null;
		}

		[Token(Token = "0x60026F6")]
		[Address(RVA = "0x3DBE1F0", Offset = "0x3DBE1F0", VA = "0x3DBE1F0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitansAtAsync()
		{
			return null;
		}

		[Token(Token = "0x60026F7")]
		[Address(RVA = "0x3DBE340", Offset = "0x3DBE340", VA = "0x3DBE340")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnShifter()
		{
			return null;
		}

		[Token(Token = "0x60026F8")]
		[Address(RVA = "0x3DBE490", Offset = "0x3DBE490", VA = "0x3DBE490")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnHuman()
		{
			return null;
		}

		[Token(Token = "0x60026F9")]
		[Address(RVA = "0x3DBE5E0", Offset = "0x3DBE5E0", VA = "0x3DBE5E0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnHumanAt()
		{
			return null;
		}

		[Token(Token = "0x60026FA")]
		[Address(RVA = "0x3DBE730", Offset = "0x3DBE730", VA = "0x3DBE730")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnShifterAt()
		{
			return null;
		}

		[Token(Token = "0x60026FB")]
		[Address(RVA = "0x3DBE880", Offset = "0x3DBE880", VA = "0x3DBE880")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnProjectile()
		{
			return null;
		}

		[Token(Token = "0x60026FC")]
		[Address(RVA = "0x3DBE9D0", Offset = "0x3DBE9D0", VA = "0x3DBE9D0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnProjectileWithOwner()
		{
			return null;
		}

		[Token(Token = "0x60026FD")]
		[Address(RVA = "0x3DBEB20", Offset = "0x3DBEB20", VA = "0x3DBEB20")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnEffect()
		{
			return null;
		}

		[Token(Token = "0x60026FE")]
		[Address(RVA = "0x3DBEC70", Offset = "0x3DBEC70", VA = "0x3DBEC70")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnUnscaledEffect()
		{
			return null;
		}

		[Token(Token = "0x60026FF")]
		[Address(RVA = "0x3DBEDC0", Offset = "0x3DBEDC0", VA = "0x3DBEDC0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnPlayer()
		{
			return null;
		}

		[Token(Token = "0x6002700")]
		[Address(RVA = "0x3DBEF10", Offset = "0x3DBEF10", VA = "0x3DBEF10")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnPlayerAll()
		{
			return null;
		}

		[Token(Token = "0x6002701")]
		[Address(RVA = "0x3DBF060", Offset = "0x3DBF060", VA = "0x3DBF060")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnPlayerAt()
		{
			return null;
		}

		[Token(Token = "0x6002702")]
		[Address(RVA = "0x3DBF1B0", Offset = "0x3DBF1B0", VA = "0x3DBF1B0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnPlayerAtAll()
		{
			return null;
		}

		[Token(Token = "0x6002703")]
		[Address(RVA = "0x3DBF300", Offset = "0x3DBF300", VA = "0x3DBF300")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPlaylist()
		{
			return null;
		}

		[Token(Token = "0x6002704")]
		[Address(RVA = "0x3DBF450", Offset = "0x3DBF450", VA = "0x3DBF450")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetSong()
		{
			return null;
		}

		[Token(Token = "0x6002705")]
		[Address(RVA = "0x3DBF5A0", Offset = "0x3DBF5A0", VA = "0x3DBF5A0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__DrawRay()
		{
			return null;
		}

		[Token(Token = "0x6002706")]
		[Address(RVA = "0x3DBF6F0", Offset = "0x3DBF6F0", VA = "0x3DBF6F0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__ShowKillScore()
		{
			return null;
		}

		[Token(Token = "0x6002707")]
		[Address(RVA = "0x3DBF840", Offset = "0x3DBF840", VA = "0x3DBF840")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__ShowKillFeed()
		{
			return null;
		}

		[Token(Token = "0x6002708")]
		[Address(RVA = "0x3DBF990", Offset = "0x3DBF990", VA = "0x3DBF990")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__ShowKillFeedAll()
		{
			return null;
		}
	}

	[Token(Token = "0x4000FF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _lastSetTopLabel;

	[Token(Token = "0x4000FFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Dictionary<string, CustomLogicListBuiltin> _cachedLists;

	[Token(Token = "0x170007F7")]
	private InGameManager _inGameManager
	{
		[Token(Token = "0x600267F")]
		[Address(RVA = "0x3DB15A0", Offset = "0x3DB15A0", VA = "0x3DB15A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007F8")]
	public bool IsEnding
	{
		[Token(Token = "0x6002680")]
		[Address(RVA = "0x3DB1620", Offset = "0x3DB1620", VA = "0x3DB1620")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007F9")]
	public float EndTimeLeft
	{
		[Token(Token = "0x6002681")]
		[Address(RVA = "0x3DB16A0", Offset = "0x3DB16A0", VA = "0x3DB16A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007FA")]
	public CustomLogicListBuiltin Titans
	{
		[Token(Token = "0x6002682")]
		[Address(RVA = "0x3DB1720", Offset = "0x3DB1720", VA = "0x3DB1720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007FB")]
	public CustomLogicListBuiltin AITitans
	{
		[Token(Token = "0x6002683")]
		[Address(RVA = "0x3DB1C20", Offset = "0x3DB1C20", VA = "0x3DB1C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007FC")]
	public CustomLogicListBuiltin PlayerTitans
	{
		[Token(Token = "0x6002684")]
		[Address(RVA = "0x3DB2130", Offset = "0x3DB2130", VA = "0x3DB2130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007FD")]
	public CustomLogicListBuiltin Shifters
	{
		[Token(Token = "0x6002685")]
		[Address(RVA = "0x3DB2640", Offset = "0x3DB2640", VA = "0x3DB2640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007FE")]
	public CustomLogicListBuiltin AIShifters
	{
		[Token(Token = "0x6002686")]
		[Address(RVA = "0x3DB2C20", Offset = "0x3DB2C20", VA = "0x3DB2C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007FF")]
	public CustomLogicListBuiltin PlayerShifters
	{
		[Token(Token = "0x6002687")]
		[Address(RVA = "0x3DB3200", Offset = "0x3DB3200", VA = "0x3DB3200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000800")]
	public CustomLogicListBuiltin Humans
	{
		[Token(Token = "0x6002688")]
		[Address(RVA = "0x3DB37E0", Offset = "0x3DB37E0", VA = "0x3DB37E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000801")]
	public CustomLogicListBuiltin AIHumans
	{
		[Token(Token = "0x6002689")]
		[Address(RVA = "0x3DB3CE0", Offset = "0x3DB3CE0", VA = "0x3DB3CE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000802")]
	public CustomLogicListBuiltin PlayerHumans
	{
		[Token(Token = "0x600268A")]
		[Address(RVA = "0x3DB41F0", Offset = "0x3DB41F0", VA = "0x3DB41F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000803")]
	public CustomLogicListBuiltin Loadouts
	{
		[Token(Token = "0x600268B")]
		[Address(RVA = "0x3DB4700", Offset = "0x3DB4700", VA = "0x3DB4700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000804")]
	public bool DefaultShowKillScore
	{
		[Token(Token = "0x600268C")]
		[Address(RVA = "0x3DB4C40", Offset = "0x3DB4C40", VA = "0x3DB4C40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600268D")]
		[Address(RVA = "0x3DB4CC0", Offset = "0x3DB4CC0", VA = "0x3DB4CC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000805")]
	public bool DefaultHideKillScore
	{
		[Token(Token = "0x600268E")]
		[Address(RVA = "0x3DB4D50", Offset = "0x3DB4D50", VA = "0x3DB4D50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600268F")]
		[Address(RVA = "0x3DB4DD0", Offset = "0x3DB4DD0", VA = "0x3DB4DD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000806")]
	public bool DefaultAddKillScore
	{
		[Token(Token = "0x6002690")]
		[Address(RVA = "0x3DB4E60", Offset = "0x3DB4E60", VA = "0x3DB4E60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002691")]
		[Address(RVA = "0x3DB4EE0", Offset = "0x3DB4EE0", VA = "0x3DB4EE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000807")]
	public bool ShowScoreboardLoadout
	{
		[Token(Token = "0x6002692")]
		[Address(RVA = "0x3DB4F70", Offset = "0x3DB4F70", VA = "0x3DB4F70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002693")]
		[Address(RVA = "0x3DB4FF0", Offset = "0x3DB4FF0", VA = "0x3DB4FF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000808")]
	public bool ShowScoreboardStatus
	{
		[Token(Token = "0x6002694")]
		[Address(RVA = "0x3DB5080", Offset = "0x3DB5080", VA = "0x3DB5080")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002695")]
		[Address(RVA = "0x3DB5100", Offset = "0x3DB5100", VA = "0x3DB5100")]
		set
		{
		}
	}

	[Token(Token = "0x17000809")]
	public string ForcedCharacterType
	{
		[Token(Token = "0x6002696")]
		[Address(RVA = "0x3DB5190", Offset = "0x3DB5190", VA = "0x3DB5190")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002697")]
		[Address(RVA = "0x3DB5210", Offset = "0x3DB5210", VA = "0x3DB5210")]
		set
		{
		}
	}

	[Token(Token = "0x1700080A")]
	public string ForcedLoadout
	{
		[Token(Token = "0x6002698")]
		[Address(RVA = "0x3DB52B0", Offset = "0x3DB52B0", VA = "0x3DB52B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002699")]
		[Address(RVA = "0x3DB5330", Offset = "0x3DB5330", VA = "0x3DB5330")]
		set
		{
		}
	}

	[Token(Token = "0x1700080B")]
	public override string ClassName
	{
		[Token(Token = "0x60026C8")]
		[Address(RVA = "0x3DBA1B0", Offset = "0x3DBA1B0", VA = "0x3DBA1B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700080C")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60026C9")]
		[Address(RVA = "0x3DBA1E0", Offset = "0x3DBA1E0", VA = "0x3DBA1E0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700080D")]
	public override bool IsStatic
	{
		[Token(Token = "0x60026CA")]
		[Address(RVA = "0x3DBA1F0", Offset = "0x3DBA1F0", VA = "0x3DBA1F0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700080E")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60026CB")]
		[Address(RVA = "0x3DBA200", Offset = "0x3DBA200", VA = "0x3DBA200", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600267E")]
	[Address(RVA = "0x3DB14E0", Offset = "0x3DB14E0", VA = "0x3DB14E0")]
	public CustomLogicGameBuiltin()
	{
	}

	[Token(Token = "0x600269A")]
	[Address(RVA = "0x3DB53D0", Offset = "0x3DB53D0", VA = "0x3DB53D0")]
	public void Debug(object message)
	{
	}

	[Token(Token = "0x600269B")]
	[Address(RVA = "0x3DB54B0", Offset = "0x3DB54B0", VA = "0x3DB54B0")]
	public void Print(object message)
	{
	}

	[Token(Token = "0x600269C")]
	[Address(RVA = "0x3DB5580", Offset = "0x3DB5580", VA = "0x3DB5580")]
	public void PrintAll(object message)
	{
	}

	[Token(Token = "0x600269D")]
	[Address(RVA = "0x3DB55F0", Offset = "0x3DB55F0", VA = "0x3DB55F0")]
	public object GetGeneralSetting(string settingName)
	{
		return null;
	}

	[Token(Token = "0x600269E")]
	[Address(RVA = "0x3DB56B0", Offset = "0x3DB56B0", VA = "0x3DB56B0")]
	public object GetTitanSetting(string settingName)
	{
		return null;
	}

	[Token(Token = "0x600269F")]
	[Address(RVA = "0x3DB5770", Offset = "0x3DB5770", VA = "0x3DB5770")]
	public object GetMiscSetting(string settingName)
	{
		return null;
	}

	[Token(Token = "0x60026A0")]
	[Address(RVA = "0x3DB5830", Offset = "0x3DB5830", VA = "0x3DB5830")]
	public bool SetPreloadGeneralSetting(string settingName, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60026A1")]
	[Address(RVA = "0x3DB59B0", Offset = "0x3DB59B0", VA = "0x3DB59B0")]
	public bool SetPreloadTitanSetting(string settingName, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60026A2")]
	[Address(RVA = "0x3DB5AB0", Offset = "0x3DB5AB0", VA = "0x3DB5AB0")]
	public bool SetPreloadMiscSetting(string settingName, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60026A3")]
	[Address(RVA = "0x3DB5BB0", Offset = "0x3DB5BB0", VA = "0x3DB5BB0")]
	public bool SetPreloadModeSetting(string settingName, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60026A4")]
	[Address(RVA = "0x3DB6820", Offset = "0x3DB6820", VA = "0x3DB6820")]
	public bool SetPreloadMap(string mapCategory, string mapName)
	{
		return default(bool);
	}

	[Token(Token = "0x60026A5")]
	[Address(RVA = "0x3DB6920", Offset = "0x3DB6920", VA = "0x3DB6920")]
	public bool SetPreloadGameMode(string gameMode)
	{
		return default(bool);
	}

	[Token(Token = "0x60026A6")]
	[Address(RVA = "0x3DB69E0", Offset = "0x3DB69E0", VA = "0x3DB69E0")]
	public bool LoadPreloadPreset(string presetName)
	{
		return default(bool);
	}

	[Token(Token = "0x60026A7")]
	[Address(RVA = "0x3DB6CE0", Offset = "0x3DB6CE0", VA = "0x3DB6CE0")]
	public bool RestartWithPreloadSettings()
	{
		return default(bool);
	}

	[Token(Token = "0x60026A8")]
	[Address(RVA = "0x3DB6D60", Offset = "0x3DB6D60", VA = "0x3DB6D60")]
	public void End(float delay)
	{
	}

	[Token(Token = "0x60026A9")]
	[Address(RVA = "0x3DB6ED0", Offset = "0x3DB6ED0", VA = "0x3DB6ED0")]
	public CustomLogicCharacterBuiltin FindCharacterByViewID(int viewID)
	{
		return null;
	}

	[Token(Token = "0x60026AA")]
	[Address(RVA = "0x3DB6FA0", Offset = "0x3DB6FA0", VA = "0x3DB6FA0")]
	public CustomLogicTitanBuiltin SpawnTitan(string type)
	{
		return null;
	}

	[Token(Token = "0x60026AB")]
	[Address(RVA = "0x3DB70F0", Offset = "0x3DB70F0", VA = "0x3DB70F0")]
	public CustomLogicTitanBuiltin SpawnTitanAt(string type, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		return null;
	}

	[Token(Token = "0x60026AC")]
	[Address(RVA = "0x3DB7260", Offset = "0x3DB7260", VA = "0x3DB7260")]
	public CustomLogicListBuiltin SpawnTitans(string type, int count)
	{
		return null;
	}

	[Token(Token = "0x60026AD")]
	[Address(RVA = "0x3DB7750", Offset = "0x3DB7750", VA = "0x3DB7750")]
	public void SpawnTitansAsync(string type, int count)
	{
	}

	[Token(Token = "0x60026AE")]
	[Address(RVA = "0x3DB7860", Offset = "0x3DB7860", VA = "0x3DB7860")]
	public CustomLogicListBuiltin SpawnTitansAt(string type, int count, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		return null;
	}

	[Token(Token = "0x60026AF")]
	[Address(RVA = "0x3DB7AF0", Offset = "0x3DB7AF0", VA = "0x3DB7AF0")]
	public void SpawnTitansAtAsync(string type, int count, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
	}

	[Token(Token = "0x60026B0")]
	[Address(RVA = "0x3DB7C30", Offset = "0x3DB7C30", VA = "0x3DB7C30")]
	public CustomLogicShifterBuiltin SpawnShifter(string type)
	{
		return null;
	}

	[Token(Token = "0x60026B1")]
	[Address(RVA = "0x3DB7DD0", Offset = "0x3DB7DD0", VA = "0x3DB7DD0")]
	public CustomLogicHumanBuiltin SpawnHuman(int costume, string costumeName, string loadout)
	{
		return null;
	}

	[Token(Token = "0x60026B2")]
	[Address(RVA = "0x3DB7F20", Offset = "0x3DB7F20", VA = "0x3DB7F20")]
	public CustomLogicHumanBuiltin SpawnHumanAt(int costume, string costumeName, string loadout, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		return null;
	}

	[Token(Token = "0x60026B3")]
	[Address(RVA = "0x3DB80A0", Offset = "0x3DB80A0", VA = "0x3DB80A0")]
	public CustomLogicShifterBuiltin SpawnShifterAt(string type, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		return null;
	}

	[Token(Token = "0x60026B4")]
	[Address(RVA = "0x3DB8270", Offset = "0x3DB8270", VA = "0x3DB8270")]
	public void SpawnProjectile(string projectileName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, CustomLogicVector3Builtin velocity, CustomLogicVector3Builtin gravity, float liveTime, string team, [Optional] object extraParam, [Optional] object extraParam2)
	{
	}

	[Token(Token = "0x60026B5")]
	[Address(RVA = "0x3DB87D0", Offset = "0x3DB87D0", VA = "0x3DB87D0")]
	public void SpawnProjectileWithOwner(string projectileName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, CustomLogicVector3Builtin velocity, CustomLogicVector3Builtin gravity, float liveTime, CustomLogicCharacterBuiltin owner, [Optional] object extraParam, [Optional] object extraParam2)
	{
	}

	[Token(Token = "0x60026B6")]
	[Address(RVA = "0x3DB8DD0", Offset = "0x3DB8DD0", VA = "0x3DB8DD0")]
	public void SpawnEffect(string effectName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, float scale, [Optional] CustomLogicColorBuiltin tsExplodeColor, [Optional] string tsKillSound)
	{
	}

	[Token(Token = "0x60026B7")]
	[Address(RVA = "0x3DB9190", Offset = "0x3DB9190", VA = "0x3DB9190")]
	public void SpawnUnscaledEffect(string effectName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, [Optional] CustomLogicColorBuiltin tsExplodeColor, [Optional] string tsKillSound)
	{
	}

	[Token(Token = "0x60026B8")]
	[Address(RVA = "0x3DB91B0", Offset = "0x3DB91B0", VA = "0x3DB91B0")]
	public void SpawnPlayer(CustomLogicPlayerBuiltin player, bool force)
	{
	}

	[Token(Token = "0x60026B9")]
	[Address(RVA = "0x3DB93E0", Offset = "0x3DB93E0", VA = "0x3DB93E0")]
	public void SpawnPlayerAll(bool force)
	{
	}

	[Token(Token = "0x60026BA")]
	[Address(RVA = "0x3DB9540", Offset = "0x3DB9540", VA = "0x3DB9540")]
	public void SpawnPlayerAt(CustomLogicPlayerBuiltin player, bool force, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
	}

	[Token(Token = "0x60026BB")]
	[Address(RVA = "0x3DB9870", Offset = "0x3DB9870", VA = "0x3DB9870")]
	public void SpawnPlayerAtAll(bool force, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
	}

	[Token(Token = "0x60026BC")]
	[Address(RVA = "0x3DB9AB0", Offset = "0x3DB9AB0", VA = "0x3DB9AB0")]
	public void SetPlaylist(string playlist)
	{
	}

	[Token(Token = "0x60026BD")]
	[Address(RVA = "0x3DB9B10", Offset = "0x3DB9B10", VA = "0x3DB9B10")]
	public void SetSong(string song)
	{
	}

	[Token(Token = "0x60026BE")]
	[Address(RVA = "0x3DB9B80", Offset = "0x3DB9B80", VA = "0x3DB9B80")]
	public void DrawRay(CustomLogicVector3Builtin start, CustomLogicVector3Builtin dir, CustomLogicColorBuiltin color, float duration)
	{
	}

	[Token(Token = "0x60026BF")]
	[Address(RVA = "0x3DB9C80", Offset = "0x3DB9C80", VA = "0x3DB9C80")]
	public void ShowKillScore(int damage)
	{
	}

	[Token(Token = "0x60026C0")]
	[Address(RVA = "0x3DB9D60", Offset = "0x3DB9D60", VA = "0x3DB9D60")]
	public void ShowKillFeed(string killer, string victim, int score, string weapon)
	{
	}

	[Token(Token = "0x60026C1")]
	[Address(RVA = "0x3DB9E50", Offset = "0x3DB9E50", VA = "0x3DB9E50")]
	public void ShowKillFeedAll(string killer, string victim, int score, string weapon)
	{
	}

	[Token(Token = "0x60026C2")]
	[Address(RVA = "0x3DB5930", Offset = "0x3DB5930", VA = "0x3DB5930")]
	private static bool TrySetTypedSetting(Dictionary<string, BaseSetting> typedSettings, string settingName, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60026C3")]
	[Address(RVA = "0x3DB6580", Offset = "0x3DB6580", VA = "0x3DB6580")]
	private static bool TryAssignSettingValue(BaseSetting setting, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60026C4")]
	[Address(RVA = "0x3DB5CA0", Offset = "0x3DB5CA0", VA = "0x3DB5CA0")]
	private static void EnsurePreloadSelectionsAndModeSettings()
	{
	}

	[Token(Token = "0x60026C5")]
	[Address(RVA = "0x3DBA010", Offset = "0x3DBA010", VA = "0x3DBA010")]
	private static bool ConvertToBool(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60026C6")]
	private bool NeedRefreshList<T>(string cacheKey, HashSet<T> currentSet, bool includeAI, bool includeNonAI, bool isShifter) where T : BaseCharacter
	{
		return default(bool);
	}

	[Token(Token = "0x60026C7")]
	[Address(RVA = "0x3DB8DF0", Offset = "0x3DB8DF0", VA = "0x3DB8DF0")]
	private static void SpawnEffectInternal(string effectName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, float scale, bool scaled, CustomLogicColorBuiltin tsExplodeColor, string tsKillSound)
	{
	}
}
