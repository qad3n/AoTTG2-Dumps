// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.ColorParameter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000054")]
public sealed class ColorParameter : ParameterOverride<Color>
{
	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x4B4B470", Offset = "0x4B4B470", VA = "0x4B4B470", Slot = "9")]
	public override void Interp(Color from, Color to, float t)
	{
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x4B4B490", Offset = "0x4B4B490", VA = "0x4B4B490")]
	public static implicit operator Vector4(ColorParameter prop)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x4B4B4B0", Offset = "0x4B4B4B0", VA = "0x4B4B4B0")]
	public ColorParameter()
	{
	}
}
