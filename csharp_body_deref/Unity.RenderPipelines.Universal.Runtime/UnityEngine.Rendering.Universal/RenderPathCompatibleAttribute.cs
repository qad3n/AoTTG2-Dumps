// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RenderPathCompatibleAttribute
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001F3")]
[AttributeUsage(AttributeTargets.Field)]
internal sealed class RenderPathCompatibleAttribute : Attribute
{
	[Token(Token = "0x4000BC8")]
	[FieldOffset(Offset = "0x10")]
	public RenderPathCompatibility renderPath;

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public RenderPathCompatibleAttribute(RenderPathCompatibility renderPath)
	{
	}
}
