// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemBase
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.SubsystemsImplementation;

namespace UnityEngine.AdaptivePerformance.Provider;

[Token(Token = "0x2000054")]
public abstract class AdaptivePerformanceSubsystemBase<TSubsystem, TSubsystemDescriptor, TProvider> : SubsystemWithProvider<TSubsystem, TSubsystemDescriptor, TProvider> where TSubsystem : SubsystemWithProvider, new() where TSubsystemDescriptor : SubsystemDescriptorWithProvider where TProvider : SubsystemProvider<TSubsystem>
{
	[Token(Token = "0x170000BE")]
	public abstract Feature Capabilities
	{
		[Token(Token = "0x6000270")]
		get;
	}

	[Token(Token = "0x170000BF")]
	public abstract IApplicationLifecycle ApplicationLifecycle
	{
		[Token(Token = "0x6000272")]
		get;
	}

	[Token(Token = "0x170000C0")]
	public abstract IDevicePerformanceLevelControl PerformanceLevelControl
	{
		[Token(Token = "0x6000273")]
		get;
	}

	[Token(Token = "0x170000C1")]
	public abstract Version Version
	{
		[Token(Token = "0x6000274")]
		get;
	}

	[Token(Token = "0x170000C2")]
	public abstract string Stats
	{
		[Token(Token = "0x6000275")]
		get;
	}

	[Token(Token = "0x170000C3")]
	public abstract bool Initialized
	{
		[Token(Token = "0x6000276")]
		get;
	}

	[Token(Token = "0x6000271")]
	public abstract PerformanceDataRecord Update();

	[Token(Token = "0x6000277")]
	protected AdaptivePerformanceSubsystemBase()
	{
	}
}
