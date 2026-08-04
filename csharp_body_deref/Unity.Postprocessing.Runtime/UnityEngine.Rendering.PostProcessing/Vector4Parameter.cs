// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.Vector4Parameter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000057")]
public sealed class Vector4Parameter : ParameterOverride<Vector4>
{
	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x4B4B660", Offset = "0x4B4B660", VA = "0x4B4B660", Slot = "9")]
	public override void Interp(Vector4 from, Vector4 to, float t)
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x4B4B680", Offset = "0x4B4B680", VA = "0x4B4B680")]
	public static implicit operator Vector2(Vector4Parameter prop)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x4B4B6A0", Offset = "0x4B4B6A0", VA = "0x4B4B6A0")]
	public static implicit operator Vector3(Vector4Parameter prop)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x4B4B6C0", Offset = "0x4B4B6C0", VA = "0x4B4B6C0")]
	public Vector4Parameter()
	{
	}
}
