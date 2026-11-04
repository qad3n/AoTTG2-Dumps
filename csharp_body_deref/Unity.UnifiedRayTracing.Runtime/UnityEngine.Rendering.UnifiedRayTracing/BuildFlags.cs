// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.BuildFlags
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x2000054")]
[Flags]
public enum BuildFlags
{
	[Token(Token = "0x40001D9")]
	None = 0,
	[Token(Token = "0x40001DA")]
	PreferFastTrace = 1,
	[Token(Token = "0x40001DB")]
	PreferFastBuild = 2,
	[Token(Token = "0x40001DC")]
	MinimizeMemory = 4
}
