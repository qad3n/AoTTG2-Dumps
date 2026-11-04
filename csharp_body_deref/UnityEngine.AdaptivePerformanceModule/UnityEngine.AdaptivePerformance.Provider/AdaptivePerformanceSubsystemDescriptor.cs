// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor
// Update status: NEW in this game update
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
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		[CompilerGenerated]
		private Type _003CsubsystemImplementationType_003Ek__BackingField;

		[Token(Token = "0x170000D0")]
		public string id
		{
			[Token(Token = "0x600028E")]
			[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
			[CompilerGenerated]
			readonly get
			{
				return null;
			}
			[Token(Token = "0x600028F")]
			[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000D1")]
		public Type providerType
		{
			[Token(Token = "0x6000290")]
			[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
			[CompilerGenerated]
			readonly get
			{
				return null;
			}
			[Token(Token = "0x6000291")]
			[Address(RVA = "0x1D69900", Offset = "0x1D67F00", VA = "0x181D69900")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000D2")]
		public Type subsystemTypeOverride
		{
			[Token(Token = "0x6000292")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			[CompilerGenerated]
			readonly get
			{
				return null;
			}
			[Token(Token = "0x6000293")]
			[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
			[CompilerGenerated]
			set
			{
			}
		}
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x2E942C0", Offset = "0x2E928C0", VA = "0x182E942C0")]
	public AdaptivePerformanceSubsystemDescriptor(Cinfo cinfo)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x2E94010", Offset = "0x2E92610", VA = "0x182E94010")]
	public static AdaptivePerformanceSubsystemDescriptor RegisterDescriptor(Cinfo cinfo)
	{
		return null;
	}
}
