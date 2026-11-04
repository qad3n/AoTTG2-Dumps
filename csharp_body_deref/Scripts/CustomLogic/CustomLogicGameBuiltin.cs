// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicGameBuiltin
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicGameBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicGameBuiltin.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Characters;
using GameManagers;
using Il2CppDummyDll;
using Settings;

namespace CustomLogic;

[Token(Token = "0x2000554")]
[CompilerGenerated]
internal class CustomLogicGameBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000555")]
	public static class Factory
	{
		[Token(Token = "0x60031DD")]
		[Address(RVA = "0x203CC50", Offset = "0x203B250", VA = "0x18203CC50")]
		public static CustomLogicGameBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000556")]
	public static class Bindings
	{
		[Token(Token = "0x400171E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60031DE")]
		[Address(RVA = "0x201C050", Offset = "0x201A650", VA = "0x18201C050")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60031DF")]
		[Address(RVA = "0x202E790", Offset = "0x202CD90", VA = "0x18202E790")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__IsEnding()
		{
			return null;
		}

		[Token(Token = "0x60031E0")]
		[Address(RVA = "0x202E330", Offset = "0x202C930", VA = "0x18202E330")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__EndTimeLeft()
		{
			return null;
		}

		[Token(Token = "0x60031E1")]
		[Address(RVA = "0x202E830", Offset = "0x202CE30", VA = "0x18202E830")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__IsExperience()
		{
			return null;
		}

		[Token(Token = "0x60031E2")]
		[Address(RVA = "0x202E3D0", Offset = "0x202C9D0", VA = "0x18202E3D0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__ExperienceID()
		{
			return null;
		}

		[Token(Token = "0x60031E3")]
		[Address(RVA = "0x202DD40", Offset = "0x202C340", VA = "0x18202DD40")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__CanSaveExperienceScore()
		{
			return null;
		}

		[Token(Token = "0x60031E4")]
		[Address(RVA = "0x202EAB0", Offset = "0x202D0B0", VA = "0x18202EAB0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__MainCharacter()
		{
			return null;
		}

		[Token(Token = "0x60031E5")]
		[Address(RVA = "0x202F2D0", Offset = "0x202D8D0", VA = "0x18202F2D0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__Titans()
		{
			return null;
		}

		[Token(Token = "0x60031E6")]
		[Address(RVA = "0x202DCA0", Offset = "0x202C2A0", VA = "0x18202DCA0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__AITitans()
		{
			return null;
		}

		[Token(Token = "0x60031E7")]
		[Address(RVA = "0x202EF10", Offset = "0x202D510", VA = "0x18202EF10")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__PlayerTitans()
		{
			return null;
		}

		[Token(Token = "0x60031E8")]
		[Address(RVA = "0x202F050", Offset = "0x202D650", VA = "0x18202F050")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__Shifters()
		{
			return null;
		}

		[Token(Token = "0x60031E9")]
		[Address(RVA = "0x202DC00", Offset = "0x202C200", VA = "0x18202DC00")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__AIShifters()
		{
			return null;
		}

		[Token(Token = "0x60031EA")]
		[Address(RVA = "0x202EE70", Offset = "0x202D470", VA = "0x18202EE70")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__PlayerShifters()
		{
			return null;
		}

		[Token(Token = "0x60031EB")]
		[Address(RVA = "0x202E650", Offset = "0x202CC50", VA = "0x18202E650")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__Horses()
		{
			return null;
		}

		[Token(Token = "0x60031EC")]
		[Address(RVA = "0x202E6F0", Offset = "0x202CCF0", VA = "0x18202E6F0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__Humans()
		{
			return null;
		}

		[Token(Token = "0x60031ED")]
		[Address(RVA = "0x202DB60", Offset = "0x202C160", VA = "0x18202DB60")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__AIHumans()
		{
			return null;
		}

		[Token(Token = "0x60031EE")]
		[Address(RVA = "0x202EDD0", Offset = "0x202D3D0", VA = "0x18202EDD0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__PlayerHumans()
		{
			return null;
		}

		[Token(Token = "0x60031EF")]
		[Address(RVA = "0x202EA10", Offset = "0x202D010", VA = "0x18202EA10")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__Loadouts()
		{
			return null;
		}

		[Token(Token = "0x60031F0")]
		[Address(RVA = "0x202E240", Offset = "0x202C840", VA = "0x18202E240")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__DefaultShowKillScore()
		{
			return null;
		}

		[Token(Token = "0x60031F1")]
		[Address(RVA = "0x202E150", Offset = "0x202C750", VA = "0x18202E150")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__DefaultShowKillFeed()
		{
			return null;
		}

		[Token(Token = "0x60031F2")]
		[Address(RVA = "0x202DF70", Offset = "0x202C570", VA = "0x18202DF70")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__DefaultHideKillScore()
		{
			return null;
		}

		[Token(Token = "0x60031F3")]
		[Address(RVA = "0x202DE80", Offset = "0x202C480", VA = "0x18202DE80")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__DefaultAddKillScore()
		{
			return null;
		}

		[Token(Token = "0x60031F4")]
		[Address(RVA = "0x202F0F0", Offset = "0x202D6F0", VA = "0x18202F0F0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__ShowScoreboardLoadout()
		{
			return null;
		}

		[Token(Token = "0x60031F5")]
		[Address(RVA = "0x202F1E0", Offset = "0x202D7E0", VA = "0x18202F1E0")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__ShowScoreboardStatus()
		{
			return null;
		}

		[Token(Token = "0x60031F6")]
		[Address(RVA = "0x202E470", Offset = "0x202CA70", VA = "0x18202E470")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__ForcedCharacterType()
		{
			return null;
		}

		[Token(Token = "0x60031F7")]
		[Address(RVA = "0x202E560", Offset = "0x202CB60", VA = "0x18202E560")]
		public static CLPropertyBinding<CustomLogicGameBuiltin> __CreatePropertyBinding__ForcedLoadout()
		{
			return null;
		}

		[Token(Token = "0x60031F8")]
		[Address(RVA = "0x20277B0", Offset = "0x2025DB0", VA = "0x1820277B0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__GetExperienceScore()
		{
			return null;
		}

		[Token(Token = "0x60031F9")]
		[Address(RVA = "0x202A170", Offset = "0x2028770", VA = "0x18202A170")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SaveExperienceScore()
		{
			return null;
		}

		[Token(Token = "0x60031FA")]
		[Address(RVA = "0x202A050", Offset = "0x2028650", VA = "0x18202A050")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SaveExperienceCompletionTime()
		{
			return null;
		}

		[Token(Token = "0x60031FB")]
		[Address(RVA = "0x202C050", Offset = "0x202A650", VA = "0x18202C050")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnHorse()
		{
			return null;
		}

		[Token(Token = "0x60031FC")]
		[Address(RVA = "0x20260F0", Offset = "0x20246F0", VA = "0x1820260F0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__Debug()
		{
			return null;
		}

		[Token(Token = "0x60031FD")]
		[Address(RVA = "0x2029860", Offset = "0x2027E60", VA = "0x182029860")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__Print()
		{
			return null;
		}

		[Token(Token = "0x60031FE")]
		[Address(RVA = "0x2029740", Offset = "0x2027D40", VA = "0x182029740")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__PrintAll()
		{
			return null;
		}

		[Token(Token = "0x60031FF")]
		[Address(RVA = "0x20278D0", Offset = "0x2025ED0", VA = "0x1820278D0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__GetGeneralSetting()
		{
			return null;
		}

		[Token(Token = "0x6003200")]
		[Address(RVA = "0x20289B0", Offset = "0x2026FB0", VA = "0x1820289B0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__GetTitanSetting()
		{
			return null;
		}

		[Token(Token = "0x6003201")]
		[Address(RVA = "0x2027E70", Offset = "0x2026470", VA = "0x182027E70")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__GetMiscSetting()
		{
			return null;
		}

		[Token(Token = "0x6003202")]
		[Address(RVA = "0x202B040", Offset = "0x2029640", VA = "0x18202B040")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadGeneralSetting()
		{
			return null;
		}

		[Token(Token = "0x6003203")]
		[Address(RVA = "0x202B4C0", Offset = "0x2029AC0", VA = "0x18202B4C0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadTitanSetting()
		{
			return null;
		}

		[Token(Token = "0x6003204")]
		[Address(RVA = "0x202B280", Offset = "0x2029880", VA = "0x18202B280")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadMiscSetting()
		{
			return null;
		}

		[Token(Token = "0x6003205")]
		[Address(RVA = "0x202B3A0", Offset = "0x20299A0", VA = "0x18202B3A0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadModeSetting()
		{
			return null;
		}

		[Token(Token = "0x6003206")]
		[Address(RVA = "0x202B160", Offset = "0x2029760", VA = "0x18202B160")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadMap()
		{
			return null;
		}

		[Token(Token = "0x6003207")]
		[Address(RVA = "0x202AF10", Offset = "0x2029510", VA = "0x18202AF10")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPreloadGameMode()
		{
			return null;
		}

		[Token(Token = "0x6003208")]
		[Address(RVA = "0x20293D0", Offset = "0x20279D0", VA = "0x1820293D0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__LoadPreloadPreset()
		{
			return null;
		}

		[Token(Token = "0x6003209")]
		[Address(RVA = "0x2029F20", Offset = "0x2028520", VA = "0x182029F20")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__RestartWithPreloadSettings()
		{
			return null;
		}

		[Token(Token = "0x600320A")]
		[Address(RVA = "0x20266B0", Offset = "0x2024CB0", VA = "0x1820266B0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__End()
		{
			return null;
		}

		[Token(Token = "0x600320B")]
		[Address(RVA = "0x2026A20", Offset = "0x2025020", VA = "0x182026A20")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__FindCharacterByViewID()
		{
			return null;
		}

		[Token(Token = "0x600320C")]
		[Address(RVA = "0x202CE80", Offset = "0x202B480", VA = "0x18202CE80")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitan()
		{
			return null;
		}

		[Token(Token = "0x600320D")]
		[Address(RVA = "0x202CD50", Offset = "0x202B350", VA = "0x18202CD50")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitanAt()
		{
			return null;
		}

		[Token(Token = "0x600320E")]
		[Address(RVA = "0x202D340", Offset = "0x202B940", VA = "0x18202D340")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitans()
		{
			return null;
		}

		[Token(Token = "0x600320F")]
		[Address(RVA = "0x202CFB0", Offset = "0x202B5B0", VA = "0x18202CFB0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitansAsync()
		{
			return null;
		}

		[Token(Token = "0x6003210")]
		[Address(RVA = "0x202D210", Offset = "0x202B810", VA = "0x18202D210")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitansAt()
		{
			return null;
		}

		[Token(Token = "0x6003211")]
		[Address(RVA = "0x202D0E0", Offset = "0x202B6E0", VA = "0x18202D0E0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnTitansAtAsync()
		{
			return null;
		}

		[Token(Token = "0x6003212")]
		[Address(RVA = "0x202CC20", Offset = "0x202B220", VA = "0x18202CC20")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnShifter()
		{
			return null;
		}

		[Token(Token = "0x6003213")]
		[Address(RVA = "0x202C2A0", Offset = "0x202A8A0", VA = "0x18202C2A0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnHuman()
		{
			return null;
		}

		[Token(Token = "0x6003214")]
		[Address(RVA = "0x202C170", Offset = "0x202A770", VA = "0x18202C170")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnHumanAt()
		{
			return null;
		}

		[Token(Token = "0x6003215")]
		[Address(RVA = "0x202CAF0", Offset = "0x202B0F0", VA = "0x18202CAF0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnShifterAt()
		{
			return null;
		}

		[Token(Token = "0x6003216")]
		[Address(RVA = "0x202C9C0", Offset = "0x202AFC0", VA = "0x18202C9C0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnProjectile()
		{
			return null;
		}

		[Token(Token = "0x6003217")]
		[Address(RVA = "0x202C890", Offset = "0x202AE90", VA = "0x18202C890")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnProjectileWithOwner()
		{
			return null;
		}

		[Token(Token = "0x6003218")]
		[Address(RVA = "0x202BF20", Offset = "0x202A520", VA = "0x18202BF20")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnEffect()
		{
			return null;
		}

		[Token(Token = "0x6003219")]
		[Address(RVA = "0x202D470", Offset = "0x202BA70", VA = "0x18202D470")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnUnscaledEffect()
		{
			return null;
		}

		[Token(Token = "0x600321A")]
		[Address(RVA = "0x202C760", Offset = "0x202AD60", VA = "0x18202C760")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnPlayer()
		{
			return null;
		}

		[Token(Token = "0x600321B")]
		[Address(RVA = "0x202C3D0", Offset = "0x202A9D0", VA = "0x18202C3D0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnPlayerAll()
		{
			return null;
		}

		[Token(Token = "0x600321C")]
		[Address(RVA = "0x202C630", Offset = "0x202AC30", VA = "0x18202C630")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnPlayerAt()
		{
			return null;
		}

		[Token(Token = "0x600321D")]
		[Address(RVA = "0x202C500", Offset = "0x202AB00", VA = "0x18202C500")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SpawnPlayerAtAll()
		{
			return null;
		}

		[Token(Token = "0x600321E")]
		[Address(RVA = "0x202ADE0", Offset = "0x20293E0", VA = "0x18202ADE0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetPlaylist()
		{
			return null;
		}

		[Token(Token = "0x600321F")]
		[Address(RVA = "0x202B820", Offset = "0x2029E20", VA = "0x18202B820")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__SetSong()
		{
			return null;
		}

		[Token(Token = "0x6003220")]
		[Address(RVA = "0x2026580", Offset = "0x2024B80", VA = "0x182026580")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__DrawRay()
		{
			return null;
		}

		[Token(Token = "0x6003221")]
		[Address(RVA = "0x202BDF0", Offset = "0x202A3F0", VA = "0x18202BDF0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__ShowKillScore()
		{
			return null;
		}

		[Token(Token = "0x6003222")]
		[Address(RVA = "0x202BCC0", Offset = "0x202A2C0", VA = "0x18202BCC0")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__ShowKillFeed()
		{
			return null;
		}

		[Token(Token = "0x6003223")]
		[Address(RVA = "0x202BB90", Offset = "0x202A190", VA = "0x18202BB90")]
		public static CLMethodBinding<CustomLogicGameBuiltin> __CreateMethodBinding__ShowKillFeedAll()
		{
			return null;
		}
	}

	[Token(Token = "0x400171C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _lastSetTopLabel;

	[Token(Token = "0x400171D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Dictionary<string, CustomLogicListBuiltin> _cachedLists;

	[Token(Token = "0x17000941")]
	private InGameManager _inGameManager
	{
		[Token(Token = "0x6003184")]
		[Address(RVA = "0x2014600", Offset = "0x2012C00", VA = "0x182014600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000942")]
	public bool IsEnding
	{
		[Token(Token = "0x6003185")]
		[Address(RVA = "0x2013260", Offset = "0x2011860", VA = "0x182013260")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000943")]
	public float EndTimeLeft
	{
		[Token(Token = "0x6003186")]
		[Address(RVA = "0x2012B60", Offset = "0x2011160", VA = "0x182012B60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000944")]
	public bool IsExperience
	{
		[Token(Token = "0x6003187")]
		[Address(RVA = "0x2013280", Offset = "0x2011880", VA = "0x182013280")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000945")]
	public string ExperienceID
	{
		[Token(Token = "0x6003188")]
		[Address(RVA = "0x2012B80", Offset = "0x2011180", VA = "0x182012B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000946")]
	public bool CanSaveExperienceScore
	{
		[Token(Token = "0x6003189")]
		[Address(RVA = "0x2012930", Offset = "0x2010F30", VA = "0x182012930")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000947")]
	public CustomLogicCharacterBuiltin MainCharacter
	{
		[Token(Token = "0x600318E")]
		[Address(RVA = "0x2013450", Offset = "0x2011A50", VA = "0x182013450")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000948")]
	public CustomLogicListBuiltin Titans
	{
		[Token(Token = "0x600318F")]
		[Address(RVA = "0x2014320", Offset = "0x2012920", VA = "0x182014320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000949")]
	public CustomLogicListBuiltin AITitans
	{
		[Token(Token = "0x6003190")]
		[Address(RVA = "0x2012640", Offset = "0x2010C40", VA = "0x182012640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700094A")]
	public CustomLogicListBuiltin PlayerTitans
	{
		[Token(Token = "0x6003191")]
		[Address(RVA = "0x2013BA0", Offset = "0x20121A0", VA = "0x182013BA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700094B")]
	public CustomLogicListBuiltin Shifters
	{
		[Token(Token = "0x6003192")]
		[Address(RVA = "0x2013E90", Offset = "0x2012490", VA = "0x182013E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700094C")]
	public CustomLogicListBuiltin AIShifters
	{
		[Token(Token = "0x6003193")]
		[Address(RVA = "0x2012280", Offset = "0x2010880", VA = "0x182012280")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700094D")]
	public CustomLogicListBuiltin PlayerShifters
	{
		[Token(Token = "0x6003194")]
		[Address(RVA = "0x20137E0", Offset = "0x2011DE0", VA = "0x1820137E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700094E")]
	public CustomLogicListBuiltin Horses
	{
		[Token(Token = "0x6003195")]
		[Address(RVA = "0x2012CA0", Offset = "0x20112A0", VA = "0x182012CA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700094F")]
	public CustomLogicListBuiltin Humans
	{
		[Token(Token = "0x6003197")]
		[Address(RVA = "0x2012F80", Offset = "0x2011580", VA = "0x182012F80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000950")]
	public CustomLogicListBuiltin AIHumans
	{
		[Token(Token = "0x6003198")]
		[Address(RVA = "0x2011F90", Offset = "0x2010590", VA = "0x182011F90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000951")]
	public CustomLogicListBuiltin PlayerHumans
	{
		[Token(Token = "0x6003199")]
		[Address(RVA = "0x20134F0", Offset = "0x2011AF0", VA = "0x1820134F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000952")]
	public CustomLogicListBuiltin Loadouts
	{
		[Token(Token = "0x600319A")]
		[Address(RVA = "0x20132C0", Offset = "0x20118C0", VA = "0x1820132C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000953")]
	public bool DefaultShowKillScore
	{
		[Token(Token = "0x600319B")]
		[Address(RVA = "0x2012AF0", Offset = "0x20110F0", VA = "0x182012AF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600319C")]
		[Address(RVA = "0x2014760", Offset = "0x2012D60", VA = "0x182014760")]
		set
		{
		}
	}

	[Token(Token = "0x17000954")]
	public bool DefaultShowKillFeed
	{
		[Token(Token = "0x600319D")]
		[Address(RVA = "0x2012A80", Offset = "0x2011080", VA = "0x182012A80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600319E")]
		[Address(RVA = "0x20146F0", Offset = "0x2012CF0", VA = "0x1820146F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000955")]
	[Obsolete("Use DefaultShowKillFeed instead.")]
	public bool DefaultHideKillScore
	{
		[Token(Token = "0x600319F")]
		[Address(RVA = "0x2012A80", Offset = "0x2011080", VA = "0x182012A80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60031A0")]
		[Address(RVA = "0x20146F0", Offset = "0x2012CF0", VA = "0x1820146F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000956")]
	public bool DefaultAddKillScore
	{
		[Token(Token = "0x60031A1")]
		[Address(RVA = "0x2012A10", Offset = "0x2011010", VA = "0x182012A10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60031A2")]
		[Address(RVA = "0x2014680", Offset = "0x2012C80", VA = "0x182014680")]
		set
		{
		}
	}

	[Token(Token = "0x17000957")]
	public bool ShowScoreboardLoadout
	{
		[Token(Token = "0x60031A3")]
		[Address(RVA = "0x2014240", Offset = "0x2012840", VA = "0x182014240")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60031A4")]
		[Address(RVA = "0x20148D0", Offset = "0x2012ED0", VA = "0x1820148D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000958")]
	public bool ShowScoreboardStatus
	{
		[Token(Token = "0x60031A5")]
		[Address(RVA = "0x20142B0", Offset = "0x20128B0", VA = "0x1820142B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60031A6")]
		[Address(RVA = "0x2014940", Offset = "0x2012F40", VA = "0x182014940")]
		set
		{
		}
	}

	[Token(Token = "0x17000959")]
	public string ForcedCharacterType
	{
		[Token(Token = "0x60031A7")]
		[Address(RVA = "0x2012BC0", Offset = "0x20111C0", VA = "0x182012BC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60031A8")]
		[Address(RVA = "0x20147D0", Offset = "0x2012DD0", VA = "0x1820147D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700095A")]
	public string ForcedLoadout
	{
		[Token(Token = "0x60031A9")]
		[Address(RVA = "0x2012C30", Offset = "0x2011230", VA = "0x182012C30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60031AA")]
		[Address(RVA = "0x2014850", Offset = "0x2012E50", VA = "0x182014850")]
		set
		{
		}
	}

	[Token(Token = "0x1700095B")]
	public override string ClassName
	{
		[Token(Token = "0x60031D9")]
		[Address(RVA = "0x20129E0", Offset = "0x2010FE0", VA = "0x1820129E0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700095C")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60031DA")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700095D")]
	public override bool IsStatic
	{
		[Token(Token = "0x60031DB")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700095E")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60031DC")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003183")]
	[Address(RVA = "0x2011ED0", Offset = "0x20104D0", VA = "0x182011ED0")]
	public CustomLogicGameBuiltin()
	{
	}

	[Token(Token = "0x600318A")]
	[Address(RVA = "0x200DA10", Offset = "0x200C010", VA = "0x18200DA10")]
	public CustomLogicExperienceScoreBuiltin GetExperienceScore()
	{
		return null;
	}

	[Token(Token = "0x600318B")]
	[Address(RVA = "0x200E6B0", Offset = "0x200CCB0", VA = "0x18200E6B0")]
	public void SaveExperienceScore(float score, string unit, bool lowerIsBetter = false)
	{
	}

	[Token(Token = "0x600318C")]
	[Address(RVA = "0x200E2D0", Offset = "0x200C8D0", VA = "0x18200E2D0")]
	public void SaveExperienceCompletionTime(float elapsed)
	{
	}

	[Token(Token = "0x600318D")]
	[Address(RVA = "0x200E130", Offset = "0x200C730", VA = "0x18200E130")]
	private string RequireExperienceID()
	{
		return null;
	}

	[Token(Token = "0x6003196")]
	[Address(RVA = "0x200F7D0", Offset = "0x200DDD0", VA = "0x18200F7D0")]
	public CustomLogicHorseBuiltin SpawnHorse(CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		return null;
	}

	[Token(Token = "0x60031AB")]
	[Address(RVA = "0x200CF10", Offset = "0x200B510", VA = "0x18200CF10")]
	public void Debug(object message)
	{
	}

	[Token(Token = "0x60031AC")]
	[Address(RVA = "0x200E060", Offset = "0x200C660", VA = "0x18200E060")]
	public void Print(object message)
	{
	}

	[Token(Token = "0x60031AD")]
	[Address(RVA = "0x200DFD0", Offset = "0x200C5D0", VA = "0x18200DFD0")]
	public void PrintAll(object message)
	{
	}

	[Token(Token = "0x60031AE")]
	[Address(RVA = "0x200DB10", Offset = "0x200C110", VA = "0x18200DB10")]
	public object GetGeneralSetting(string settingName)
	{
		return null;
	}

	[Token(Token = "0x60031AF")]
	[Address(RVA = "0x200DC90", Offset = "0x200C290", VA = "0x18200DC90")]
	public object GetTitanSetting(string settingName)
	{
		return null;
	}

	[Token(Token = "0x60031B0")]
	[Address(RVA = "0x200DBD0", Offset = "0x200C1D0", VA = "0x18200DBD0")]
	public object GetMiscSetting(string settingName)
	{
		return null;
	}

	[Token(Token = "0x60031B1")]
	[Address(RVA = "0x200E940", Offset = "0x200CF40", VA = "0x18200E940")]
	public bool SetPreloadGeneralSetting(string settingName, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60031B2")]
	[Address(RVA = "0x200EE40", Offset = "0x200D440", VA = "0x18200EE40")]
	public bool SetPreloadTitanSetting(string settingName, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60031B3")]
	[Address(RVA = "0x200EC30", Offset = "0x200D230", VA = "0x18200EC30")]
	public bool SetPreloadMiscSetting(string settingName, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60031B4")]
	[Address(RVA = "0x200ED50", Offset = "0x200D350", VA = "0x18200ED50")]
	public bool SetPreloadModeSetting(string settingName, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60031B5")]
	[Address(RVA = "0x200EA60", Offset = "0x200D060", VA = "0x18200EA60")]
	public bool SetPreloadMap(string mapCategory, string mapName)
	{
		return default(bool);
	}

	[Token(Token = "0x60031B6")]
	[Address(RVA = "0x200E880", Offset = "0x200CE80", VA = "0x18200E880")]
	public bool SetPreloadGameMode(string gameMode)
	{
		return default(bool);
	}

	[Token(Token = "0x60031B7")]
	[Address(RVA = "0x200DD50", Offset = "0x200C350", VA = "0x18200DD50")]
	public bool LoadPreloadPreset(string presetName)
	{
		return default(bool);
	}

	[Token(Token = "0x60031B8")]
	[Address(RVA = "0x200E250", Offset = "0x200C850", VA = "0x18200E250")]
	public bool RestartWithPreloadSettings()
	{
		return default(bool);
	}

	[Token(Token = "0x60031B9")]
	[Address(RVA = "0x200D100", Offset = "0x200B700", VA = "0x18200D100")]
	public void End(float delay)
	{
	}

	[Token(Token = "0x60031BA")]
	[Address(RVA = "0x200D950", Offset = "0x200BF50", VA = "0x18200D950")]
	public CustomLogicCharacterBuiltin FindCharacterByViewID(int viewID)
	{
		return null;
	}

	[Token(Token = "0x60031BB")]
	[Address(RVA = "0x2011400", Offset = "0x200FA00", VA = "0x182011400")]
	public CustomLogicTitanBuiltin SpawnTitan(string type)
	{
		return null;
	}

	[Token(Token = "0x60031BC")]
	[Address(RVA = "0x2011310", Offset = "0x200F910", VA = "0x182011310")]
	public CustomLogicTitanBuiltin SpawnTitanAt(string type, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		return null;
	}

	[Token(Token = "0x60031BD")]
	[Address(RVA = "0x2011890", Offset = "0x200FE90", VA = "0x182011890")]
	public CustomLogicListBuiltin SpawnTitans(string type, int count)
	{
		return null;
	}

	[Token(Token = "0x60031BE")]
	[Address(RVA = "0x20114C0", Offset = "0x200FAC0", VA = "0x1820114C0")]
	public void SpawnTitansAsync(string type, int count)
	{
	}

	[Token(Token = "0x60031BF")]
	[Address(RVA = "0x2011610", Offset = "0x200FC10", VA = "0x182011610")]
	public CustomLogicListBuiltin SpawnTitansAt(string type, int count, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		return null;
	}

	[Token(Token = "0x60031C0")]
	[Address(RVA = "0x2011550", Offset = "0x200FB50", VA = "0x182011550")]
	public void SpawnTitansAtAsync(string type, int count, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
	}

	[Token(Token = "0x60031C1")]
	[Address(RVA = "0x2011190", Offset = "0x200F790", VA = "0x182011190")]
	public CustomLogicShifterBuiltin SpawnShifter(string type)
	{
		return null;
	}

	[Token(Token = "0x60031C2")]
	[Address(RVA = "0x200FB00", Offset = "0x200E100", VA = "0x18200FB00")]
	public CustomLogicHumanBuiltin SpawnHuman(int costume, string costumeName, string loadout)
	{
		return null;
	}

	[Token(Token = "0x60031C3")]
	[Address(RVA = "0x200FA00", Offset = "0x200E000", VA = "0x18200FA00")]
	public CustomLogicHumanBuiltin SpawnHumanAt(int costume, string costumeName, string loadout, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		return null;
	}

	[Token(Token = "0x60031C4")]
	[Address(RVA = "0x2011000", Offset = "0x200F600", VA = "0x182011000")]
	public CustomLogicShifterBuiltin SpawnShifterAt(string type, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
		return null;
	}

	[Token(Token = "0x60031C5")]
	[Address(RVA = "0x2010A40", Offset = "0x200F040", VA = "0x182010A40")]
	public void SpawnProjectile(string projectileName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, CustomLogicVector3Builtin velocity, CustomLogicVector3Builtin gravity, float liveTime, string team, [Optional] object extraParam, [Optional] object extraParam2)
	{
	}

	[Token(Token = "0x60031C6")]
	[Address(RVA = "0x2010400", Offset = "0x200EA00", VA = "0x182010400")]
	public void SpawnProjectileWithOwner(string projectileName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, CustomLogicVector3Builtin velocity, CustomLogicVector3Builtin gravity, float liveTime, CustomLogicCharacterBuiltin owner, [Optional] object extraParam, [Optional] object extraParam2)
	{
	}

	[Token(Token = "0x60031C7")]
	[Address(RVA = "0x200F7A0", Offset = "0x200DDA0", VA = "0x18200F7A0")]
	public void SpawnEffect(string effectName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, float scale, [Optional] CustomLogicColorBuiltin tsExplodeColor, [Optional] string tsKillSound)
	{
	}

	[Token(Token = "0x60031C8")]
	[Address(RVA = "0x2011C30", Offset = "0x2010230", VA = "0x182011C30")]
	public void SpawnUnscaledEffect(string effectName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, [Optional] CustomLogicColorBuiltin tsExplodeColor, [Optional] string tsKillSound)
	{
	}

	[Token(Token = "0x60031C9")]
	[Address(RVA = "0x2010240", Offset = "0x200E840", VA = "0x182010240")]
	public void SpawnPlayer(CustomLogicPlayerBuiltin player, bool force)
	{
	}

	[Token(Token = "0x60031CA")]
	[Address(RVA = "0x200FBD0", Offset = "0x200E1D0", VA = "0x18200FBD0")]
	public void SpawnPlayerAll(bool force)
	{
	}

	[Token(Token = "0x60031CB")]
	[Address(RVA = "0x200FF60", Offset = "0x200E560", VA = "0x18200FF60")]
	public void SpawnPlayerAt(CustomLogicPlayerBuiltin player, bool force, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
	}

	[Token(Token = "0x60031CC")]
	[Address(RVA = "0x200FD10", Offset = "0x200E310", VA = "0x18200FD10")]
	public void SpawnPlayerAtAll(bool force, CustomLogicVector3Builtin position, float rotationY = 0f)
	{
	}

	[Token(Token = "0x60031CD")]
	[Address(RVA = "0x200E810", Offset = "0x200CE10", VA = "0x18200E810")]
	public void SetPlaylist(string playlist)
	{
	}

	[Token(Token = "0x60031CE")]
	[Address(RVA = "0x200EF60", Offset = "0x200D560", VA = "0x18200EF60")]
	public void SetSong(string song)
	{
	}

	[Token(Token = "0x60031CF")]
	[Address(RVA = "0x200CFE0", Offset = "0x200B5E0", VA = "0x18200CFE0")]
	public void DrawRay(CustomLogicVector3Builtin start, CustomLogicVector3Builtin dir, CustomLogicColorBuiltin color, float duration)
	{
	}

	[Token(Token = "0x60031D0")]
	[Address(RVA = "0x200F2B0", Offset = "0x200D8B0", VA = "0x18200F2B0")]
	public void ShowKillScore(int damage)
	{
	}

	[Token(Token = "0x60031D1")]
	[Address(RVA = "0x200F1E0", Offset = "0x200D7E0", VA = "0x18200F1E0")]
	public void ShowKillFeed(string killer, string victim, int score, string weapon)
	{
	}

	[Token(Token = "0x60031D2")]
	[Address(RVA = "0x200EFE0", Offset = "0x200D5E0", VA = "0x18200EFE0")]
	public void ShowKillFeedAll(string killer, string victim, int score, string weapon)
	{
	}

	[Token(Token = "0x60031D3")]
	[Address(RVA = "0x2011E30", Offset = "0x2010430", VA = "0x182011E30")]
	private static bool TrySetTypedSetting(Dictionary<string, BaseSetting> typedSettings, string settingName, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60031D4")]
	[Address(RVA = "0x2011C80", Offset = "0x2010280", VA = "0x182011C80")]
	private static bool TryAssignSettingValue(BaseSetting setting, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60031D5")]
	[Address(RVA = "0x200D250", Offset = "0x200B850", VA = "0x18200D250")]
	private static void EnsurePreloadSelectionsAndModeSettings()
	{
	}

	[Token(Token = "0x60031D6")]
	[Address(RVA = "0x200CCA0", Offset = "0x200B2A0", VA = "0x18200CCA0")]
	private static bool ConvertToBool(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60031D7")]
	private bool NeedRefreshList<T>(string cacheKey, HashSet<T> currentSet, bool includeAI, bool includeNonAI, bool isShifter) where T : BaseCharacter
	{
		return default(bool);
	}

	[Token(Token = "0x60031D8")]
	[Address(RVA = "0x200F360", Offset = "0x200D960", VA = "0x18200F360")]
	private static void SpawnEffectInternal(string effectName, CustomLogicVector3Builtin position, CustomLogicVector3Builtin rotation, float scale, bool scaled, CustomLogicColorBuiltin tsExplodeColor, string tsKillSound)
	{
	}
}
