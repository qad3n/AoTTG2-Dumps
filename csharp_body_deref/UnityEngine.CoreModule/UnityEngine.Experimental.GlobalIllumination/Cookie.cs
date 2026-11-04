// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.GlobalIllumination.Cookie
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x20003E9")]
public struct Cookie
{
	[Token(Token = "0x4000D14")]
	[FieldOffset(Offset = "0x0")]
	public EntityId entityId;

	[Token(Token = "0x4000D15")]
	[FieldOffset(Offset = "0x4")]
	public float scale;

	[Token(Token = "0x4000D16")]
	[FieldOffset(Offset = "0x8")]
	public Vector2 sizes;

	[Token(Token = "0x60017B4")]
	[Address(RVA = "0x2F76C90", Offset = "0x2F75290", VA = "0x182F76C90")]
	public static Cookie Defaults()
	{
		return default(Cookie);
	}
}
