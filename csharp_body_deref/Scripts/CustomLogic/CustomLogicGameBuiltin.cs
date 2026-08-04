// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicGameBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicGameBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicGameBuiltin.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Characters;
using GameManagers;
using Il2CppDummyDll;
using Settings;

namespace CustomLogic;

[Token(Token = "0x20003FE")]
[CompilerGenerated]
internal class CustomLogicGameBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20003FF")]
	public static class Factory
	{
		[Token(Token = "0x6002892")]
		[Address(RVA = "0x40C10C0", Offset = "0x40C10C0", VA = "0x40C10C0")]
		public static CustomLogicGameBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000400")]
	public static class Bindings
	{
		[Token(Token = "0x40010E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002893")]
		[Address(RVA = "0x40C11B0", Offset = "0x40C11B0", VA = "0x40C11B0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002894")]
		[Address(RVA = "0x40C2770", Offset = "0x40C2770", VA = "0x40C2770")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__IsEnding()
		{
			return null;
		}

		[Token(Token = "0x6002895")]
		[Address(RVA = "0x40C2810", Offset = "0x40C2810", VA = "0x40C2810")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__EndTimeLeft()
		{
			return null;
		}

		[Token(Token = "0x6002896")]
		[Address(RVA = "0x40C28B0", Offset = "0x40C28B0", VA = "0x40C28B0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__Titans()
		{
			return null;
		}

		[Token(Token = "0x6002897")]
		[Address(RVA = "0x40C2950", Offset = "0x40C2950", VA = "0x40C2950")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__AITitans()
		{
			return null;
		}

		[Token(Token = "0x6002898")]
		[Address(RVA = "0x40C29F0", Offset = "0x40C29F0", VA = "0x40C29F0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__PlayerTitans()
		{
			return null;
		}

		[Token(Token = "0x6002899")]
		[Address(RVA = "0x40C2A90", Offset = "0x40C2A90", VA = "0x40C2A90")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__Shifters()
		{
			return null;
		}

		[Token(Token = "0x600289A")]
		[Address(RVA = "0x40C2B30", Offset = "0x40C2B30", VA = "0x40C2B30")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__AIShifters()
		{
			return null;
		}

		[Token(Token = "0x600289B")]
		[Address(RVA = "0x40C2BD0", Offset = "0x40C2BD0", VA = "0x40C2BD0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__PlayerShifters()
		{
			return null;
		}

		[Token(Token = "0x600289C")]
		[Address(RVA = "0x40C2C70", Offset = "0x40C2C70", VA = "0x40C2C70")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__Humans()
		{
			return null;
		}

		[Token(Token = "0x600289D")]
		[Address(RVA = "0x40C2D10", Offset = "0x40C2D10", VA = "0x40C2D10")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__AIHumans()
		{
			return null;
		}

		[Token(Token = "0x600289E")]
		[Address(RVA = "0x40C2DB0", Offset = "0x40C2DB0", VA = "0x40C2DB0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__PlayerHumans()
		{
			return null;
		}

		[Token(Token = "0x600289F")]
		[Address(RVA = "0x40C2E50", Offset = "0x40C2E50", VA = "0x40C2E50")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__Loadouts()
		{
			return null;
		}

		[Token(Token = "0x60028A0")]
		[Address(RVA = "0x40C2EF0", Offset = "0x40C2EF0", VA = "0x40C2EF0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__DefaultShowKillScore()
		{
			return null;
		}

		[Token(Token = "0x60028A1")]
		[Address(RVA = "0x40C2FD0", Offset = "0x40C2FD0", VA = "0x40C2FD0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__DefaultHideKillScore()
		{
			return null;
		}

		[Token(Token = "0x60028A2")]
		[Address(RVA = "0x40C30B0", Offset = "0x40C30B0", VA = "0x40C30B0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__DefaultAddKillScore()
		{
			return null;
		}

		[Token(Token = "0x60028A3")]
		[Address(RVA = "0x40C3190", Offset = "0x40C3190", VA = "0x40C3190")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__ShowScoreboardLoadout()
		{
			return null;
		}

		[Token(Token = "0x60028A4")]
		[Address(RVA = "0x40C3270", Offset = "0x40C3270", VA = "0x40C3270")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__ShowScoreboardStatus()
		{
			return null;
		}

		[Token(Token = "0x60028A5")]
		[Address(RVA = "0x40C3350", Offset = "0x40C3350", VA = "0x40C3350")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__ForcedCharacterType()
		{
			return null;
		}

		[Token(Token = "0x60028A6")]
		[Address(RVA = "0x40C3430", Offset = "0x40C3430", VA = "0x40C3430")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__ForcedLoadout()
		{
			return null;
		}

		[Token(Token = "0x60028A7")]
		[Address(RVA = "0x40C3510", Offset = "0x40C3510", VA = "0x40C3510")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__Debug()
		{
			return null;
		}

		[Token(Token = "0x60028A8")]
		[Address(RVA = "0x40C3660", Offset = "0x40C3660", VA = "0x40C3660")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__Print()
		{
			return null;
		}

		[Token(Token = "0x60028A9")]
		[Address(RVA = "0x40C37B0", Offset = "0x40C37B0", VA = "0x40C37B0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__PrintAll()
		{
			return null;
		}

		[Token(Token = "0x60028AA")]
		[Address(RVA = "0x40C3900", Offset = "0x40C3900", VA = "0x40C3900")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__GetGeneralSetting()
		{
			return null;
		}

		[Token(Token = "0x60028AB")]
		[Address(RVA = "0x40C3A50", Offset = "0x40C3A50", VA = "0x40C3A50")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__GetTitanSetting()
		{
			return null;
		}

		[Token(Token = "0x60028AC")]
		[Address(RVA = "0x40C3BA0", Offset = "0x40C3BA0", VA = "0x40C3BA0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__GetMiscSetting()
		{
			return null;
		}

		[Token(Token = "0x60028AD")]
		[Address(RVA = "0x40C3CF0", Offset = "0x40C3CF0", VA = "0x40C3CF0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadGeneralSetting()
		{
			return null;
		}

		[Token(Token = "0x60028AE")]
		[Address(RVA = "0x40C3E40", Offset = "0x40C3E40", VA = "0x40C3E40")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadTitanSetting()
		{
			return null;
		}

		[Token(Token = "0x60028AF")]
		[Address(RVA = "0x40C3F90", Offset = "0x40C3F90", VA = "0x40C3F90")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadMiscSetting()
		{
			return null;
		}

		[Token(Token = "0x60028B0")]
		[Address(RVA = "0x40C40E0", Offset = "0x40C40E0", VA = "0x40C40E0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadModeSetting()
		{
			return null;
		}

		[Token(Token = "0x60028B1")]
		[Address(RVA = "0x40C4230", Offset = "0x40C4230", VA = "0x40C4230")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadMap()
		{
			return null;
		}

		[Token(Token = "0x60028B2")]
		[Address(RVA = "0x40C4380", Offset = "0x40C4380", VA = "0x40C4380")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadGameMode()
		{
			return null;
		}

		[Token(Token = "0x60028B3")]
		[Address(RVA = "0x40C44D0", Offset = "0x40C44D0", VA = "0x40C44D0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__LoadPreloadPreset()
		{
			return null;
		}

		[Token(Token = "0x60028B4")]
		[Address(RVA = "0x40C4620", Offset = "0x40C4620", VA = "0x40C4620")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__RestartWithPreloadSettings()
		{
			return null;
		}

		[Token(Token = "0x60028B5")]
		[Address(RVA = "0x40C4770", Offset = "0x40C4770", VA = "0x40C4770")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__End()
		{
			return null;
		}

		[Token(Token = "0x60028B6")]
		[Address(RVA = "0x40C48C0", Offset = "0x40C48C0", VA = "0x40C48C0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__FindCharacterByViewID()
		{
			return null;
		}

		[Token(Token = "0x60028B7")]
		[Address(RVA = "0x40C4A10", Offset = "0x40C4A10", VA = "0x40C4A10")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitan()
		{
			return null;
		}

		[Token(Token = "0x60028B8")]
		[Address(RVA = "0x40C4B60", Offset = "0x40C4B60", VA = "0x40C4B60")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitanAt()
		{
			return null;
		}

		[Token(Token = "0x60028B9")]
		[Address(RVA = "0x40C4CB0", Offset = "0x40C4CB0", VA = "0x40C4CB0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitans()
		{
			return null;
		}

		[Token(Token = "0x60028BA")]
		[Address(RVA = "0x40C4E00", Offset = "0x40C4E00", VA = "0x40C4E00")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitansAsync()
		{
			return null;
		}

		[Token(Token = "0x60028BB")]
		[Address(RVA = "0x40C4F50", Offset = "0x40C4F50", VA = "0x40C4F50")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitansAt()
		{
			return null;
		}

		[Token(Token = "0x60028BC")]
		[Address(RVA = "0x40C50A0", Offset = "0x40C50A0", VA = "0x40C50A0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitansAtAsync()
		{
			return null;
		}

		[Token(Token = "0x60028BD")]
		[Address(RVA = "0x40C51F0", Offset = "0x40C51F0", VA = "0x40C51F0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnShifter()
		{
			return null;
		}

		[Token(Token = "0x60028BE")]
		[Address(RVA = "0x40C5340", Offset = "0x40C5340", VA = "0x40C5340")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnHuman()
		{
			return null;
		}

		[Token(Token = "0x60028BF")]
		[Address(RVA = "0x40C5490", Offset = "0x40C5490", VA = "0x40C5490")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnHumanAt()
		{
			return null;
		}

		[Token(Token = "0x60028C0")]
		[Address(RVA = "0x40C55E0", Offset = "0x40C55E0", VA = "0x40C55E0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnShifterAt()
		{
			return null;
		}

		[Token(Token = "0x60028C1")]
		[Address(RVA = "0x40C5730", Offset = "0x40C5730", VA = "0x40C5730")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnProjectile()
		{
			return null;
		}

		[Token(Token = "0x60028C2")]
		[Address(RVA = "0x40C5880", Offset = "0x40C5880", VA = "0x40C5880")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnProjectileWithOwner()
		{
			return null;
		}

		[Token(Token = "0x60028C3")]
		[Address(RVA = "0x40C59D0", Offset = "0x40C59D0", VA = "0x40C59D0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnEffect()
		{
			return null;
		}

		[Token(Token = "0x60028C4")]
		[Address(RVA = "0x40C5B20", Offset = "0x40C5B20", VA = "0x40C5B20")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnUnscaledEffect()
		{
			return null;
		}

		[Token(Token = "0x60028C5")]
		[Address(RVA = "0x40C5C70", Offset = "0x40C5C70", VA = "0x40C5C70")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnPlayer()
		{
			return null;
		}

		[Token(Token = "0x60028C6")]
		[Address(RVA = "0x40C5DC0", Offset = "0x40C5DC0", VA = "0x40C5DC0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnPlayerAll()
		{
			return null;
		}

		[Token(Token = "0x60028C7")]
		[Address(RVA = "0x40C5F10", Offset = "0x40C5F10", VA = "0x40C5F10")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnPlayerAt()
		{
			return null;
		}

		[Token(Token = "0x60028C8")]
		[Address(RVA = "0x40C6060", Offset = "0x40C6060", VA = "0x40C6060")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnPlayerAtAll()
		{
			return null;
		}

		[Token(Token = "0x60028C9")]
		[Address(RVA = "0x40C61B0", Offset = "0x40C61B0", VA = "0x40C61B0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPlaylist()
		{
			return null;
		}

		[Token(Token = "0x60028CA")]
		[Address(RVA = "0x40C6300", Offset = "0x40C6300", VA = "0x40C6300")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetSong()
		{
			return null;
		}

		[Token(Token = "0x60028CB")]
		[Address(RVA = "0x40C6450", Offset = "0x40C6450", VA = "0x40C6450")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__DrawRay()
		{
			return null;
		}

		[Token(Token = "0x60028CC")]
		[Address(RVA = "0x40C65A0", Offset = "0x40C65A0", VA = "0x40C65A0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__ShowKillScore()
		{
			return null;
		}

		[Token(Token = "0x60028CD")]
		[Address(RVA = "0x40C66F0", Offset = "0x40C66F0", VA = "0x40C66F0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__ShowKillFeed()
		{
			return null;
		}

		[Token(Token = "0x60028CE")]
		[Address(RVA = "0x40C6840", Offset = "0x40C6840", VA = "0x40C6840")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__ShowKillFeedAll()
		{
			return null;
		}
	}

	[Token(Token = "0x40010E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _lastSetTopLabel;

	[Token(Token = "0x40010E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Dictionary<string, CustomLogicListBuiltin> _cachedLists;

	[Token(Token = "0x17000855")]
	private InGameManager _inGameManager
	{
		[Token(Token = "0x6002845")]
		[Address(RVA = "0x40B8430", Offset = "0x40B8430", VA = "0x40B8430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000856")]
	public bool IsEnding
	{
		[Token(Token = "0x6002846")]
		[Address(RVA = "0x40B84B0", Offset = "0x40B84B0", VA = "0x40B84B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000857")]
	public float EndTimeLeft
	{
		[Token(Token = "0x6002847")]
		[Address(RVA = "0x40B8530", Offset = "0x40B8530", VA = "0x40B8530")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000858")]
	public CustomLogicListBuiltin Titans
	{
		[Token(Token = "0x6002848")]
		[Address(RVA = "0x40B85B0", Offset = "0x40B85B0", VA = "0x40B85B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000859")]
	public CustomLogicListBuiltin AITitans
	{
		[Token(Token = "0x6002849")]
		[Address(RVA = "0x40B8AB0", Offset = "0x40B8AB0", VA = "0x40B8AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700085A")]
	public CustomLogicListBuiltin PlayerTitans
	{
		[Token(Token = "0x600284A")]
		[Address(RVA = "0x40B8FC0", Offset = "0x40B8FC0", VA = "0x40B8FC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700085B")]
	public CustomLogicListBuiltin Shifters
	{
		[Token(Token = "0x600284B")]
		[Address(RVA = "0x40B94D0", Offset = "0x40B94D0", VA = "0x40B94D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700085C")]
	public CustomLogicListBuiltin AIShifters
	{
		[Token(Token = "0x600284C")]
		[Address(RVA = "0x40B9AB0", Offset = "0x40B9AB0", VA = "0x40B9AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700085D")]
	public CustomLogicListBuiltin PlayerShifters
	{
		[Token(Token = "0x600284D")]
		[Address(RVA = "0x40BA090", Offset = "0x40BA090", VA = "0x40BA090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700085E")]
	public CustomLogicListBuiltin Humans
	{
		[Token(Token = "0x600284E")]
		[Address(RVA = "0x40BA670", Offset = "0x40BA670", VA = "0x40BA670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700085F")]
	public CustomLogicListBuiltin AIHumans
	{
		[Token(Token = "0x600284F")]
		[Address(RVA = "0x40BAB70", Offset = "0x40BAB70", VA = "0x40BAB70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000860")]
	public CustomLogicListBuiltin PlayerHumans
	{
		[Token(Token = "0x6002850")]
		[Address(RVA = "0x40BB080", Offset = "0x40BB080", VA = "0x40BB080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000861")]
	public CustomLogicListBuiltin Loadouts
	{
		[Token(Token = "0x6002851")]
		[Address(RVA = "0x40BB590", Offset = "0x40BB590", VA = "0x40BB590")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000862")]
	public bool DefaultShowKillScore
	{
		[Token(Token = "0x6002852")]
		[Address(RVA = "0x40BBAD0", Offset = "0x40BBAD0", VA = "0x40BBAD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002853")]
		[Address(RVA = "0x40BBB50", Offset = "0x40BBB50", VA = "0x40BBB50")]
		set
		{
		}
	}

	[Token(Token = "0x17000863")]
	public bool DefaultHideKillScore
	{
		[Token(Token = "0x6002854")]
		[Address(RVA = "0x40BBBE0", Offset = "0x40BBBE0", VA = "0x40BBBE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002855")]
		[Address(RVA = "0x40BBC60", Offset = "0x40BBC60", VA = "0x40BBC60")]
		set
		{
		}
	}

	[Token(Token = "0x17000864")]
	public bool DefaultAddKillScore
	{
		[Token(Token = "0x6002856")]
		[Address(RVA = "0x40BBCF0", Offset = "0x40BBCF0", VA = "0x40BBCF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002857")]
		[Address(RVA = "0x40BBD70", Offset = "0x40BBD70", VA = "0x40BBD70")]
		set
		{
		}
	}

	[Token(Token = "0x17000865")]
	public bool ShowScoreboardLoadout
	{
		[Token(Token = "0x6002858")]
		[Address(RVA = "0x40BBE00", Offset = "0x40BBE00", VA = "0x40BBE00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002859")]
		[Address(RVA = "0x40BBE80", Offset = "0x40BBE80", VA = "0x40BBE80")]
		set
		{
		}
	}

	[Token(Token = "0x17000866")]
	public bool ShowScoreboardStatus
	{
		[Token(Token = "0x600285A")]
		[Address(RVA = "0x40BBF10", Offset = "0x40BBF10", VA = "0x40BBF10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600285B")]
		[Address(RVA = "0x40BBF90", Offset = "0x40BBF90", VA = "0x40BBF90")]
		set
		{
		}
	}

	[Token(Token = "0x17000867")]
	public string ForcedCharacterType
	{
		[Token(Token = "0x600285C")]
		[Address(RVA = "0x40BC020", Offset = "0x40BC020", VA = "0x40BC020")]
		get
		{
			return null;
		}
		[Token(Token = "0x600285D")]
		[Address(RVA = "0x40BC0A0", Offset = "0x40BC0A0", VA = "0x40BC0A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000868")]
	public string ForcedLoadout
	{
		[Token(Token = "0x600285E")]
		[Address(RVA = "0x40BC140", Offset = "0x40BC140", VA = "0x40BC140")]
		get
		{
			return null;
		}
		[Token(Token = "0x600285F")]
		[Address(RVA = "0x40BC1C0", Offset = "0x40BC1C0", VA = "0x40BC1C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000869")]
	public override string ClassName
	{
		[Token(Token = "0x600288E")]
		[Address(RVA = "0x40C1060", Offset = "0x40C1060", VA = "0x40C1060", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700086A")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600288F")]
		[Address(RVA = "0x40C1090", Offset = "0x40C1090", VA = "0x40C1090", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700086B")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002890")]
		[Address(RVA = "0x40C10A0", Offset = "0x40C10A0", VA = "0x40C10A0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700086C")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002891")]
		[Address(RVA = "0x40C10B0", Offset = "0x40C10B0", VA = "0x40C10B0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002844")]
	[Address(RVA = "0x40B8370", Offset = "0x40B8370", VA = "0x40B8370")]
	public CustomLogicGameBuiltin()
	{
	}

	[Token(Token = "0x6002860")]
	[Address(RVA = "0x40BC260", Offset = "0x40BC260", VA = "0x40BC260")]
	public void Debug(object message)
	{
	}

	[Token(Token = "0x6002861")]
	[Address(RVA = "0x40BC340", Offset = "0x40BC340", VA = "0x40BC340")]
	public void Print(object message)
	{
	}

	[Token(Token = "0x6002862")]
	[Address(RVA = "0x40BC410", Offset = "0x40BC410", VA = "0x40BC410")]
	public void PrintAll(object message)
	{
	}

	[Token(Token = "0x6002863")]
	[Address(RVA = "0x40BC4A0", Offset = "0x40BC4A0", VA = "0x40BC4A0")]
	public object GetGeneralSetting(string settingName)
	{
		return null;
	}

	[Token(Token = "0x6002864")]
	[Address(RVA = "0x40BC560", Offset = "0x40BC560", VA = "0x40BC560")]
	public object GetTitanSetting(string settingName)
	{
		return null;
	}

	[Token(Token = "0x6002865")]
	[Address(RVA = "0x40BC620", Offset = "0x40BC620", VA = "0x40BC620")]
	public object GetMiscSetting(string settingName)
	{
		return null;
	}

	[Token(Token = "0x6002866")]
	[Address(RVA = "0x40BC6E0", Offset = "0x40BC6E0", VA = "0x40BC6E0")]
	public bool SetPreloadGeneralSetting(string settingName, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002867")]
	[Address(RVA = "0x40BC860", Offset = "0x40BC860", VA = "0x40BC860")]
	public bool SetPreloadTitanSetting(string settingName, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002868")]
	[Address(RVA = "0x40BC960", Offset = "0x40BC960", VA = "0x40BC960")]
	public bool SetPreloadMiscSetting(string settingName, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002869")]
	[Address(RVA = "0x40BCA60", Offset = "0x40BCA60", VA = "0x40BCA60")]
	public bool SetPreloadModeSetting(string settingName, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600286A")]
	[Address(RVA = "0x40BD6D0", Offset = "0x40BD6D0", VA = "0x40BD6D0")]
	public bool SetPreloadMap(string mapCategory, string mapName)
	{
		return default(bool);
	}

	[Token(Token = "0x600286B")]
	[Address(RVA = "0x40BD7D0", Offset = "0x40BD7D0", VA = "0x40BD7D0")]
	public bool SetPreloadGameMode(string gameMode)
	{
		return default(bool);
	}

	[Token(Token = "0x600286C")]
	[Address(RVA = "0x40BD890", Offset = "0x40BD890", VA = "0x40BD890")]
	public bool LoadPreloadPreset(string presetName)
	{
		return default(bool);
	}

	[Token(Token = "0x600286D")]
	[Address(RVA = "0x40BDB90", Offset = "0x40BDB90", VA = "0x40BDB90")]
	public bool RestartWithPreloadSettings()
	{
		return default(bool);
	}

	[Token(Token = "0x600286E")]
	[Address(RVA = "0x40BDC10", Offset = "0x40BDC10", VA = "0x40BDC10")]
	public void End(float delay)
	{
	}

	[Token(Token = "0x600286F")]
	[Address(RVA = "0x40BDD80", Offset = "0x40BDD80", VA = "0x40BDD80")]
	public CustomLogicCharacterBuiltin FindCharacterByViewID(int viewID)
	{
		return null;
	}

	[Token(Token = "0x6002870")]
	[Address(RVA = "0x40BDE50", Offset = "0x40BDE50", VA = "0x40BDE50")]
	public CustomLogicTitanBuiltin SpawnTitan(string type)
	{
		return null;
	}

	[Token(Token = "0x6002871")]
	[Address(RVA = "0x40BDFA0", Offset = "0x40BDFA0", VA = "0x40BDFA0")]
	public CustomLogicTitanBuiltin SpawnTitanAt(string type, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		return null;
	}

	[Token(Token = "0x6002872")]
	[Address(RVA = "0x40BE110", Offset = "0x40BE110", VA = "0x40BE110")]
	public CustomLogicListBuiltin SpawnTitans(string type, int count)
	{
		return null;
	}

	[Token(Token = "0x6002873")]
	[Address(RVA = "0x40BE600", Offset = "0x40BE600", VA = "0x40BE600")]
	public void SpawnTitansAsync(string type, int count)
	{
	}

	[Token(Token = "0x6002874")]
	[Address(RVA = "0x40BE710", Offset = "0x40BE710", VA = "0x40BE710")]
	public CustomLogicListBuiltin SpawnTitansAt(string type, int count, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		return null;
	}

	[Token(Token = "0x6002875")]
	[Address(RVA = "0x40BE9A0", Offset = "0x40BE9A0", VA = "0x40BE9A0")]
	public void SpawnTitansAtAsync(string type, int count, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
	}

	[Token(Token = "0x6002876")]
	[Address(RVA = "0x40BEAE0", Offset = "0x40BEAE0", VA = "0x40BEAE0")]
	public CustomLogicShifterBuiltin SpawnShifter(string type)
	{
		return null;
	}

	[Token(Token = "0x6002877")]
	[Address(RVA = "0x40BEC80", Offset = "0x40BEC80", VA = "0x40BEC80")]
	public CustomLogicHumanBuiltin SpawnHuman(int costume, string costumeName, string loadout)
	{
		return null;
	}

	[Token(Token = "0x6002878")]
	[Address(RVA = "0x40BEDD0", Offset = "0x40BEDD0", VA = "0x40BEDD0")]
	public CustomLogicHumanBuiltin SpawnHumanAt(int costume, string costumeName, string loadout, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		return null;
	}

	[Token(Token = "0x6002879")]
	[Address(RVA = "0x40BEF50", Offset = "0x40BEF50", VA = "0x40BEF50")]
	public CustomLogicShifterBuiltin SpawnShifterAt(string type, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		return null;
	}

	[Token(Token = "0x600287A")]
	[Address(RVA = "0x40BF120", Offset = "0x40BF120", VA = "0x40BF120")]
	public void SpawnProjectile(string projectileName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, CustomLogicVector3Builtin velocity, CustomLogicVector3Builtin gravity, float liveTime, string team, [Optional] object extraParam, [Optional] object extraParam2)
	{
	}

	[Token(Token = "0x600287B")]
	[Address(RVA = "0x40BF680", Offset = "0x40BF680", VA = "0x40BF680")]
	public void SpawnProjectileWithOwner(string projectileName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, CustomLogicVector3Builtin velocity, CustomLogicVector3Builtin gravity, float liveTime, CustomLogicCharacterBuiltin owner, [Optional] object extraParam, [Optional] object extraParam2)
	{
	}

	[Token(Token = "0x600287C")]
	[Address(RVA = "0x40BFC80", Offset = "0x40BFC80", VA = "0x40BFC80")]
	public void SpawnEffect(string effectName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, float scale, [Optional] CustomLogicColorBuiltin tsExplodeColor, [Optional] string tsKillSound)
	{
	}

	[Token(Token = "0x600287D")]
	[Address(RVA = "0x40C0040", Offset = "0x40C0040", VA = "0x40C0040")]
	public void SpawnUnscaledEffect(string effectName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, [Optional] CustomLogicColorBuiltin tsExplodeColor, [Optional] string tsKillSound)
	{
	}

	[Token(Token = "0x600287E")]
	[Address(RVA = "0x40C0060", Offset = "0x40C0060", VA = "0x40C0060")]
	public void SpawnPlayer(CustomLogicPlayerBuiltin player, bool force)
	{
	}

	[Token(Token = "0x600287F")]
	[Address(RVA = "0x40C0290", Offset = "0x40C0290", VA = "0x40C0290")]
	public void SpawnPlayerAll(bool force)
	{
	}

	[Token(Token = "0x6002880")]
	[Address(RVA = "0x40C03F0", Offset = "0x40C03F0", VA = "0x40C03F0")]
	public void SpawnPlayerAt(CustomLogicPlayerBuiltin player, bool force, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
	}

	[Token(Token = "0x6002881")]
	[Address(RVA = "0x40C0720", Offset = "0x40C0720", VA = "0x40C0720")]
	public void SpawnPlayerAtAll(bool force, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
	}

	[Token(Token = "0x6002882")]
	[Address(RVA = "0x40C0960", Offset = "0x40C0960", VA = "0x40C0960")]
	public void SetPlaylist(string playlist)
	{
	}

	[Token(Token = "0x6002883")]
	[Address(RVA = "0x40C09C0", Offset = "0x40C09C0", VA = "0x40C09C0")]
	public void SetSong(string song)
	{
	}

	[Token(Token = "0x6002884")]
	[Address(RVA = "0x40C0A30", Offset = "0x40C0A30", VA = "0x40C0A30")]
	public void DrawRay(CustomLogicVector3Builtin start, CustomLogicVector3Builtin dir, CustomLogicColorBuiltin color, float duration)
	{
	}

	[Token(Token = "0x6002885")]
	[Address(RVA = "0x40C0B30", Offset = "0x40C0B30", VA = "0x40C0B30")]
	public void ShowKillScore(int damage)
	{
	}

	[Token(Token = "0x6002886")]
	[Address(RVA = "0x40C0C10", Offset = "0x40C0C10", VA = "0x40C0C10")]
	public void ShowKillFeed(string killer, string victim, int score, string weapon)
	{
	}

	[Token(Token = "0x6002887")]
	[Address(RVA = "0x40C0D00", Offset = "0x40C0D00", VA = "0x40C0D00")]
	public void ShowKillFeedAll(string killer, string victim, int score, string weapon)
	{
	}

	[Token(Token = "0x6002888")]
	[Address(RVA = "0x40BC7E0", Offset = "0x40BC7E0", VA = "0x40BC7E0")]
	private static bool TrySetTypedSetting(Dictionary<string, BaseSetting> typedSettings, string settingName, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002889")]
	[Address(RVA = "0x40BD430", Offset = "0x40BD430", VA = "0x40BD430")]
	private static bool TryAssignSettingValue(BaseSetting setting, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600288A")]
	[Address(RVA = "0x40BCB50", Offset = "0x40BCB50", VA = "0x40BCB50")]
	private static void EnsurePreloadSelectionsAndModeSettings()
	{
	}

	[Token(Token = "0x600288B")]
	[Address(RVA = "0x40C0EC0", Offset = "0x40C0EC0", VA = "0x40C0EC0")]
	private static bool ConvertToBool(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600288C")]
	private bool NeedRefreshList<T>(string cacheKey, HashSet<T> currentSet, bool includeAI, bool includeNonAI, bool isShifter) where T : BaseCharacter
	{
		return default(bool);
	}

	[Token(Token = "0x600288D")]
	[Address(RVA = "0x40BFCA0", Offset = "0x40BFCA0", VA = "0x40BFCA0")]
	private static void SpawnEffectInternal(string effectName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, float scale, bool scaled, CustomLogicColorBuiltin tsExplodeColor, string tsKillSound)
	{
	}
}
