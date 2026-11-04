// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LensFlareDataSRP
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x200015C")]
public sealed class LensFlareDataSRP : ScriptableObject
{
	[Token(Token = "0x40006E4")]
	[FieldOffset(Offset = "0x18")]
	public LensFlareDataElementSRP[] elements;

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x2B2ABB0", Offset = "0x2B291B0", VA = "0x182B2ABB0")]
	public LensFlareDataSRP()
	{
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x2B2AB50", Offset = "0x2B29150", VA = "0x182B2AB50")]
	public bool HasAModulateByLightColorElement()
	{
		return default(bool);
	}
}
