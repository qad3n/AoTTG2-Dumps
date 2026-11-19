// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.GlobalIllumination.Cookie
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x20003E9")]
public struct Cookie
{
	[Token(Token = "0x4000D12")]
	[FieldOffset(Offset = "0x0")]
	public EntityId entityId;

	[Token(Token = "0x4000D13")]
	[FieldOffset(Offset = "0x4")]
	public float scale;

	[Token(Token = "0x4000D14")]
	[FieldOffset(Offset = "0x8")]
	public Vector2 sizes;

	[Token(Token = "0x60017C8")]
	[Address(RVA = "0x696B1D0", Offset = "0x696A1D0", VA = "0x696B1D0")]
	public static Cookie Defaults()
	{
		return default(Cookie);
	}
}
