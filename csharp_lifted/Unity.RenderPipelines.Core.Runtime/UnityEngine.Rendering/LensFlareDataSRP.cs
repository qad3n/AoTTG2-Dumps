// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LensFlareDataSRP
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x651D0F0", Offset = "0x651C0F0", VA = "0x651D0F0")]
	public LensFlareDataSRP()
	{
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x651D120", Offset = "0x651C120", VA = "0x651D120")]
	public bool HasAModulateByLightColorElement()
	{
		return default(bool);
	}
}
