// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RTHandleStaticHelpers
// Update status: NEW in this game update
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
	[Address(RVA = "0x2B43200", Offset = "0x2B41800", VA = "0x182B43200")]
	public static void SetRTHandleStaticWrapper(RenderTargetIdentifier rtId)
	{
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x2B43380", Offset = "0x2B41980", VA = "0x182B43380")]
	public static void SetRTHandleUserManagedWrapper(ref RTHandle rtWrapper, RenderTargetIdentifier rtId)
	{
	}
}
