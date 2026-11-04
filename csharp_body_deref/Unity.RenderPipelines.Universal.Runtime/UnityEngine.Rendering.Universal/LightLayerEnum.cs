// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.LightLayerEnum
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001CD")]
[Flags]
[Obsolete("Use RenderingLayerMask instead. #from(6000.2)")]
public enum LightLayerEnum
{
	[Token(Token = "0x40009FD")]
	Nothing = 0,
	[Token(Token = "0x40009FE")]
	LightLayerDefault = 1,
	[Token(Token = "0x40009FF")]
	LightLayer1 = 2,
	[Token(Token = "0x4000A00")]
	LightLayer2 = 4,
	[Token(Token = "0x4000A01")]
	LightLayer3 = 8,
	[Token(Token = "0x4000A02")]
	LightLayer4 = 0x10,
	[Token(Token = "0x4000A03")]
	LightLayer5 = 0x20,
	[Token(Token = "0x4000A04")]
	LightLayer6 = 0x40,
	[Token(Token = "0x4000A05")]
	LightLayer7 = 0x80,
	[Token(Token = "0x4000A06")]
	Everything = LightLayerDefault | LightLayer1 | LightLayer2 | LightLayer3 | LightLayer4 | LightLayer5 | LightLayer6 | LightLayer7
}
