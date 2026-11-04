// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.UnifiedRayTracingException
// Update status: NEW in this game update
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
		[Address(RVA = "0xE925C0", Offset = "0xE90BC0", VA = "0x180E925C0")]
		[CompilerGenerated]
		get
		{
			return default(UnifiedRayTracingError);
		}
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0xE92690", Offset = "0xE90C90", VA = "0x180E92690")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x2D98730", Offset = "0x2D96D30", VA = "0x182D98730")]
	public UnifiedRayTracingException(string message, UnifiedRayTracingError errorCode)
	{
	}
}
