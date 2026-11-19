// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.SubsystemsImplementation;

namespace UnityEngine.AdaptivePerformance.Provider;

[Token(Token = "0x2000058")]
public sealed class AdaptivePerformanceSubsystemDescriptor : SubsystemDescriptorWithProvider<AdaptivePerformanceSubsystem, AdaptivePerformanceSubsystem.APProvider>
{
	[Token(Token = "0x2000059")]
	public struct Cinfo
	{
		[Token(Token = "0x4000156")]
		[FieldOffset(Offset = "0x18")]
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private Type _003CsubsystemImplementationType_003Ek__BackingField;

		[Token(Token = "0x170000D0")]
		public string id
		{
			[Token(Token = "0x600028E")]
			[Address(RVA = "0x6893100", Offset = "0x6892100", VA = "0x6893100")]
			[CompilerGenerated]
			readonly get
			{
				return null;
			}
			[Token(Token = "0x600028F")]
			[Address(RVA = "0x6893110", Offset = "0x6892110", VA = "0x6893110")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000D1")]
		public Type providerType
		{
			[Token(Token = "0x6000290")]
			[Address(RVA = "0x6893120", Offset = "0x6892120", VA = "0x6893120")]
			[CompilerGenerated]
			readonly get
			{
				return null;
			}
			[Token(Token = "0x6000291")]
			[Address(RVA = "0x6893130", Offset = "0x6892130", VA = "0x6893130")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000D2")]
		public Type subsystemTypeOverride
		{
			[Token(Token = "0x6000292")]
			[Address(RVA = "0x6893140", Offset = "0x6892140", VA = "0x6893140")]
			[CompilerGenerated]
			readonly get
			{
				return null;
			}
			[Token(Token = "0x6000293")]
			[Address(RVA = "0x6893150", Offset = "0x6892150", VA = "0x6893150")]
			[CompilerGenerated]
			set
			{
			}
		}
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x6892E40", Offset = "0x6891E40", VA = "0x6892E40")]
	public AdaptivePerformanceSubsystemDescriptor(Cinfo cinfo)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x6892F60", Offset = "0x6891F60", VA = "0x6892F60")]
	public static AdaptivePerformanceSubsystemDescriptor RegisterDescriptor(Cinfo cinfo)
	{
		return null;
	}
}
