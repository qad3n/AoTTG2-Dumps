// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IPostProcessComponent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200015A")]
public interface IPostProcessComponent
{
	[Token(Token = "0x6000A77")]
	bool IsActive();

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x4BD4770", Offset = "0x4BD4770", VA = "0x4BD4770", Slot = "1")]
	[Obsolete("Unused #from(2023.1)", false)]
	bool IsTileCompatible()
	{
		return default(bool);
	}
}
