// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.BloomFilterMode
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000F5")]
public enum BloomFilterMode
{
	[Token(Token = "0x4000594")]
	[Tooltip("Best quality.")]
	Gaussian,
	[Token(Token = "0x4000595")]
	[Tooltip("Balanced quality and speed.")]
	Dual,
	[Token(Token = "0x4000596")]
	[Tooltip("Lowest quality. Fastest at low resolutions. Saves memory.")]
	Kawase
}
