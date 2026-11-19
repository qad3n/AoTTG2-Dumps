// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.Basic.BasicAdaptivePerformanceSubsystem
// Update status: unchanged since the previous dump
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
		[FieldOffset(Offset = "0x14")]
		private PerformanceDataRecord m_UpdatedPerfRecord;

		[Token(Token = "0x170000D3")]
		public override IApplicationLifecycle ApplicationLifecycle
		{
			[Token(Token = "0x6000297")]
			[Address(RVA = "0x68932F0", Offset = "0x68922F0", VA = "0x68932F0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000D4")]
		public override IDevicePerformanceLevelControl PerformanceLevelControl
		{
			[Token(Token = "0x6000298")]
			[Address(RVA = "0x6893300", Offset = "0x6892300", VA = "0x6893300", Slot = "10")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000D5")]
		public override string Stats
		{
			[Token(Token = "0x6000299")]
			[Address(RVA = "0x6893310", Offset = "0x6892310", VA = "0x6893310", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000D6")]
		public override bool Initialized
		{
			[Token(Token = "0x600029A")]
			[Address(RVA = "0x6893340", Offset = "0x6892340", VA = "0x6893340", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x600029B")]
			[Address(RVA = "0x6893350", Offset = "0x6892350", VA = "0x6893350", Slot = "14")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000D7")]
		public override Feature Capabilities
		{
			[Token(Token = "0x600029C")]
			[Address(RVA = "0x6893360", Offset = "0x6892360", VA = "0x6893360", Slot = "6")]
			[CompilerGenerated]
			get
			{
				return default(Feature);
			}
			[Token(Token = "0x600029D")]
			[Address(RVA = "0x6893370", Offset = "0x6892370", VA = "0x6893370", Slot = "7")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000D8")]
		public override Version Version
		{
			[Token(Token = "0x60002A6")]
			[Address(RVA = "0x68934A0", Offset = "0x68924A0", VA = "0x68934A0", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000D9")]
		public int MaxCpuPerformanceLevel
		{
			[Token(Token = "0x60002A7")]
			[Address(RVA = "0x6893460", Offset = "0x6892460", VA = "0x6893460", Slot = "17")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000DA")]
		public int MaxGpuPerformanceLevel
		{
			[Token(Token = "0x60002A8")]
			[Address(RVA = "0x6893470", Offset = "0x6892470", VA = "0x6893470", Slot = "18")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000296")]
		[Address(RVA = "0x6893290", Offset = "0x6892290", VA = "0x6893290")]
		public BasicProvider()
		{
		}

		[Token(Token = "0x600029E")]
		[Address(RVA = "0x6893380", Offset = "0x6892380", VA = "0x6893380", Slot = "4")]
		public override void Stop()
		{
		}

		[Token(Token = "0x600029F")]
		[Address(RVA = "0x6893390", Offset = "0x6892390", VA = "0x6893390", Slot = "5")]
		public override void Destroy()
		{
		}

		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x68933B0", Offset = "0x68923B0", VA = "0x68933B0", Slot = "8")]
		public override PerformanceDataRecord Update()
		{
			return default(PerformanceDataRecord);
		}

		[Token(Token = "0x60002A1")]
		[Address(RVA = "0x6893420", Offset = "0x6892420", VA = "0x6893420", Slot = "15")]
		public void ApplicationPause()
		{
		}

		[Token(Token = "0x60002A2")]
		[Address(RVA = "0x6893430", Offset = "0x6892430", VA = "0x6893430", Slot = "16")]
		public void ApplicationResume()
		{
		}

		[Token(Token = "0x60002A3")]
		[Address(RVA = "0x6893440", Offset = "0x6892440", VA = "0x6893440", Slot = "19")]
		public bool SetPerformanceLevel(ref int cpuLevel, ref int gpuLevel)
		{
			return default(bool);
		}

		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x6893480", Offset = "0x6892480", VA = "0x6893480", Slot = "20")]
		public bool EnableCpuBoost()
		{
			return default(bool);
		}

		[Token(Token = "0x60002A5")]
		[Address(RVA = "0x6893490", Offset = "0x6892490", VA = "0x6893490", Slot = "21")]
		public bool EnableGpuBoost()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x6893250", Offset = "0x6892250", VA = "0x6893250")]
	public BasicAdaptivePerformanceSubsystem()
	{
	}
}
