// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.UnifiedRayTracingException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x200005C")]
public class UnifiedRayTracingException : Exception
{
	[Token(Token = "0x17000038")]
	public UnifiedRayTracingError errorCode
	{
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x678D720", Offset = "0x678C720", VA = "0x678D720")]
		[CompilerGenerated]
		get
		{
			return default(UnifiedRayTracingError);
		}
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x678D730", Offset = "0x678C730", VA = "0x678D730")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x678D6C0", Offset = "0x678C6C0", VA = "0x678D6C0")]
	public UnifiedRayTracingException(string message, UnifiedRayTracingError errorCode)
	{
	}
}
