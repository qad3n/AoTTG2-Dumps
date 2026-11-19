// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugDisplaySettingsStats
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000070")]
public class DebugDisplaySettingsStats<TProfileId> : IDebugDisplaySettingsData, IDebugDisplaySettingsQuery where TProfileId : Enum
{
	[Token(Token = "0x2000071")]
	[DisplayInfo(name = "Display Stats", order = -2147483648)]
	private class StatsPanel : DebugDisplaySettingsPanel
	{
		[Token(Token = "0x4000171")]
		[FieldOffset(Offset = "0x0")]
		private readonly DebugDisplaySettingsStats<TProfileId> m_Data;

		[Token(Token = "0x17000054")]
		public override DebugUI.Flags Flags
		{
			[Token(Token = "0x60005AA")]
			get
			{
				return default(DebugUI.Flags);
			}
		}

		[Token(Token = "0x60005AB")]
		public StatsPanel(DebugDisplaySettingsStats<TProfileId> displaySettingsStats)
		{
		}

		[Token(Token = "0x60005AC")]
		public override void Dispose()
		{
		}
	}

	[Token(Token = "0x17000052")]
	public DebugDisplayStats<TProfileId> debugDisplayStats
	{
		[Token(Token = "0x60005A6")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000053")]
	public bool AreAnySettingsActive
	{
		[Token(Token = "0x60005A8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60005A7")]
	public DebugDisplaySettingsStats(DebugDisplayStats<TProfileId> debugDisplayStats)
	{
	}

	[Token(Token = "0x60005A9")]
	public IDebugDisplaySettingsPanelDisposable CreatePanel()
	{
		return null;
	}
}
