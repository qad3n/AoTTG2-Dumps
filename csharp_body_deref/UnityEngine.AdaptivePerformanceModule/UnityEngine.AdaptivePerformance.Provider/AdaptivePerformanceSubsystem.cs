// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem
// Update status: unchanged since the previous dump
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
		[FieldOffset(Offset = "0x11")]
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
			[Address(RVA = "0x6892CE0", Offset = "0x6891CE0", VA = "0x6892CE0", Slot = "12")]
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
		[Address(RVA = "0x6892D10", Offset = "0x6891D10", VA = "0x6892D10")]
		protected APProvider()
		{
		}
	}

	[Token(Token = "0x170000C4")]
	public override IApplicationLifecycle ApplicationLifecycle
	{
		[Token(Token = "0x6000279")]
		[Address(RVA = "0x6892A70", Offset = "0x6891A70", VA = "0x6892A70", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C5")]
	public override IDevicePerformanceLevelControl PerformanceLevelControl
	{
		[Token(Token = "0x600027A")]
		[Address(RVA = "0x6892AC0", Offset = "0x6891AC0", VA = "0x6892AC0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C6")]
	public override Version Version
	{
		[Token(Token = "0x600027B")]
		[Address(RVA = "0x6892B10", Offset = "0x6891B10", VA = "0x6892B10", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C7")]
	public override Feature Capabilities
	{
		[Token(Token = "0x600027C")]
		[Address(RVA = "0x6892B60", Offset = "0x6891B60", VA = "0x6892B60", Slot = "9")]
		get
		{
			return default(Feature);
		}
	}

	[Token(Token = "0x170000C8")]
	public override string Stats
	{
		[Token(Token = "0x600027D")]
		[Address(RVA = "0x6892BB0", Offset = "0x6891BB0", VA = "0x6892BB0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C9")]
	public override bool Initialized
	{
		[Token(Token = "0x600027E")]
		[Address(RVA = "0x6892C00", Offset = "0x6891C00", VA = "0x6892C00", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x6892A30", Offset = "0x6891A30", VA = "0x6892A30")]
	public AdaptivePerformanceSubsystem()
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x6892C50", Offset = "0x6891C50", VA = "0x6892C50", Slot = "10")]
	public override PerformanceDataRecord Update()
	{
		return default(PerformanceDataRecord);
	}
}
