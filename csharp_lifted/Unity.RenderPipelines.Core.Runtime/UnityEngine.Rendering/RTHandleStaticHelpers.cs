// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RTHandleStaticHelpers
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200019B")]
public struct RTHandleStaticHelpers
{
	[Token(Token = "0x40007E8")]
	[FieldOffset(Offset = "0x0")]
	public static RTHandle s_RTHandleWrapper;

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x652AF30", Offset = "0x6529F30", VA = "0x652AF30")]
	public static void SetRTHandleStaticWrapper(RenderTargetIdentifier rtId)
	{
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x652B180", Offset = "0x652A180", VA = "0x652B180")]
	public static void SetRTHandleUserManagedWrapper(ref RTHandle rtWrapper, RenderTargetIdentifier rtId)
	{
	}
}
