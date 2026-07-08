using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200009F")]
public class DebugDisplaySettingsStats<TProfileId> : IDebugDisplaySettingsData, IDebugDisplaySettingsQuery where TProfileId : Enum
{
	[Token(Token = "0x20000A0")]
	[DisplayInfo(name = "Display Stats", order = int.MinValue)]
	private class StatsPanel : DebugDisplaySettingsPanel
	{
		[Token(Token = "0x400023E")]
		[FieldOffset(Offset = "0x0")]
		private readonly DebugDisplaySettingsStats<TProfileId> m_Data;

		[Token(Token = "0x1700007D")]
		public override DebugUI.Flags Flags
		{
			[Token(Token = "0x6000681")]
			get
			{
				return default(DebugUI.Flags);
			}
		}

		[Token(Token = "0x6000682")]
		public StatsPanel(DebugDisplaySettingsStats<TProfileId> displaySettingsStats)
		{
		}

		[Token(Token = "0x6000683")]
		public override void Dispose()
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public DebugDisplayStats<TProfileId> debugDisplayStats
	{
		[Token(Token = "0x600067D")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007C")]
	public bool AreAnySettingsActive
	{
		[Token(Token = "0x600067F")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600067E")]
	public DebugDisplaySettingsStats(DebugDisplayStats<TProfileId> debugDisplayStats)
	{
	}

	[Token(Token = "0x6000680")]
	public IDebugDisplaySettingsPanelDisposable CreatePanel()
	{
		return null;
	}
}
