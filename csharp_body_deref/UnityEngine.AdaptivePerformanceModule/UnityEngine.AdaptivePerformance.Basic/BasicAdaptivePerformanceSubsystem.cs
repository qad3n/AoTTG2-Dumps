// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.Basic.BasicAdaptivePerformanceSubsystem
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.AdaptivePerformance.Provider;

namespace UnityEngine.AdaptivePerformance.Basic;

[Token(Token = "0x200005B")]
internal class BasicAdaptivePerformanceSubsystem : AdaptivePerformanceSubsystem
{
	[Token(Token = "0x200005C")]
	internal class BasicProvider : APProvider, IApplicationLifecycle, IDevicePerformanceLevelControl
	{
		[Token(Token = "0x4000157")]
		[FieldOffset(Offset = "0x20")]
		private PerformanceDataRecord m_UpdatedPerfRecord;

		[Token(Token = "0x170000D3")]
		public override IApplicationLifecycle ApplicationLifecycle
		{
			[Token(Token = "0x6000297")]
			[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000D4")]
		public override IDevicePerformanceLevelControl PerformanceLevelControl
		{
			[Token(Token = "0x6000298")]
			[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "10")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000D5")]
		public override string Stats
		{
			[Token(Token = "0x6000299")]
			[Address(RVA = "0x2E962B0", Offset = "0x2E948B0", VA = "0x182E962B0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000D6")]
		public override bool Initialized
		{
			[Token(Token = "0x600029A")]
			[Address(RVA = "0x1B020E0", Offset = "0x1B006E0", VA = "0x181B020E0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x600029B")]
			[Address(RVA = "0x2B9B700", Offset = "0x2B99D00", VA = "0x182B9B700", Slot = "14")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000D7")]
		public override Feature Capabilities
		{
			[Token(Token = "0x600029C")]
			[Address(RVA = "0x1A2A530", Offset = "0x1A28B30", VA = "0x181A2A530", Slot = "6")]
			[CompilerGenerated]
			get
			{
				return default(Feature);
			}
			[Token(Token = "0x600029D")]
			[Address(RVA = "0x1B6A390", Offset = "0x1B68990", VA = "0x181B6A390", Slot = "7")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000D8")]
		public override Version Version
		{
			[Token(Token = "0x60002A6")]
			[Address(RVA = "0x2E962E0", Offset = "0x2E948E0", VA = "0x182E962E0", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000D9")]
		public int MaxCpuPerformanceLevel
		{
			[Token(Token = "0x60002A7")]
			[Address(RVA = "0x2E962A0", Offset = "0x2E948A0", VA = "0x182E962A0", Slot = "17")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000DA")]
		public int MaxGpuPerformanceLevel
		{
			[Token(Token = "0x60002A8")]
			[Address(RVA = "0x2E962A0", Offset = "0x2E948A0", VA = "0x182E962A0", Slot = "18")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000296")]
		[Address(RVA = "0x2E96230", Offset = "0x2E94830", VA = "0x182E96230")]
		public BasicProvider()
		{
		}

		[Token(Token = "0x600029E")]
		[Address(RVA = "0x2E96190", Offset = "0x2E94790", VA = "0x182E96190", Slot = "4")]
		public override void Stop()
		{
		}

		[Token(Token = "0x600029F")]
		[Address(RVA = "0x28DD470", Offset = "0x28DBA70", VA = "0x1828DD470", Slot = "5")]
		public override void Destroy()
		{
		}

		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x2E961A0", Offset = "0x2E947A0", VA = "0x182E961A0", Slot = "8")]
		public override PerformanceDataRecord Update()
		{
			return default(PerformanceDataRecord);
		}

		[Token(Token = "0x60002A1")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "15")]
		public void ApplicationPause()
		{
		}

		[Token(Token = "0x60002A2")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "16")]
		public void ApplicationResume()
		{
		}

		[Token(Token = "0x60002A3")]
		[Address(RVA = "0x2E96170", Offset = "0x2E94770", VA = "0x182E96170", Slot = "19")]
		public bool SetPerformanceLevel(ref int cpuLevel, ref int gpuLevel)
		{
			return default(bool);
		}

		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x795DE0", Offset = "0x7943E0", VA = "0x180795DE0", Slot = "20")]
		public bool EnableCpuBoost()
		{
			return default(bool);
		}

		[Token(Token = "0x60002A5")]
		[Address(RVA = "0x795DE0", Offset = "0x7943E0", VA = "0x180795DE0", Slot = "21")]
		public bool EnableGpuBoost()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x2E94550", Offset = "0x2E92B50", VA = "0x182E94550")]
	public BasicAdaptivePerformanceSubsystem()
	{
	}
}
