// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.SubsystemsImplementation;

namespace UnityEngine.AdaptivePerformance.Provider;

[Token(Token = "0x2000055")]
public class AdaptivePerformanceSubsystem : AdaptivePerformanceSubsystemBase<AdaptivePerformanceSubsystem, AdaptivePerformanceSubsystemDescriptor, AdaptivePerformanceSubsystem.APProvider>
{
	[Token(Token = "0x2000056")]
	public abstract class APProvider : SubsystemProvider<AdaptivePerformanceSubsystem>
	{
		[Token(Token = "0x4000152")]
		[FieldOffset(Offset = "0x18")]
		protected bool m_Running;

		[Token(Token = "0x170000CA")]
		public abstract Feature Capabilities
		{
			[Token(Token = "0x6000280")]
			get;
			[Token(Token = "0x6000281")]
			set;
		}

		[Token(Token = "0x170000CB")]
		public abstract IApplicationLifecycle ApplicationLifecycle
		{
			[Token(Token = "0x6000283")]
			get;
		}

		[Token(Token = "0x170000CC")]
		public abstract IDevicePerformanceLevelControl PerformanceLevelControl
		{
			[Token(Token = "0x6000284")]
			get;
		}

		[Token(Token = "0x170000CD")]
		public abstract Version Version
		{
			[Token(Token = "0x6000285")]
			get;
		}

		[Token(Token = "0x170000CE")]
		public virtual string Stats
		{
			[Token(Token = "0x6000286")]
			[Address(RVA = "0x2E93D40", Offset = "0x2E92340", VA = "0x182E93D40", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000CF")]
		public abstract bool Initialized
		{
			[Token(Token = "0x6000287")]
			get;
			[Token(Token = "0x6000288")]
			set;
		}

		[Token(Token = "0x6000282")]
		public abstract PerformanceDataRecord Update();

		[Token(Token = "0x6000289")]
		[Address(RVA = "0x2E93D00", Offset = "0x2E92300", VA = "0x182E93D00")]
		protected APProvider()
		{
		}
	}

	[Token(Token = "0x170000C4")]
	public override IApplicationLifecycle ApplicationLifecycle
	{
		[Token(Token = "0x6000279")]
		[Address(RVA = "0x2E94590", Offset = "0x2E92B90", VA = "0x182E94590", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C5")]
	public override IDevicePerformanceLevelControl PerformanceLevelControl
	{
		[Token(Token = "0x600027A")]
		[Address(RVA = "0x2E94680", Offset = "0x2E92C80", VA = "0x182E94680", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C6")]
	public override Version Version
	{
		[Token(Token = "0x600027B")]
		[Address(RVA = "0x2E94720", Offset = "0x2E92D20", VA = "0x182E94720", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C7")]
	public override Feature Capabilities
	{
		[Token(Token = "0x600027C")]
		[Address(RVA = "0x2E945E0", Offset = "0x2E92BE0", VA = "0x182E945E0", Slot = "9")]
		get
		{
			return default(Feature);
		}
	}

	[Token(Token = "0x170000C8")]
	public override string Stats
	{
		[Token(Token = "0x600027D")]
		[Address(RVA = "0x2E946D0", Offset = "0x2E92CD0", VA = "0x182E946D0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C9")]
	public override bool Initialized
	{
		[Token(Token = "0x600027E")]
		[Address(RVA = "0x2E94630", Offset = "0x2E92C30", VA = "0x182E94630", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x2E94550", Offset = "0x2E92B50", VA = "0x182E94550")]
	public AdaptivePerformanceSubsystem()
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x2E944C0", Offset = "0x2E92AC0", VA = "0x182E944C0", Slot = "10")]
	public override PerformanceDataRecord Update()
	{
		return default(PerformanceDataRecord);
	}
}
