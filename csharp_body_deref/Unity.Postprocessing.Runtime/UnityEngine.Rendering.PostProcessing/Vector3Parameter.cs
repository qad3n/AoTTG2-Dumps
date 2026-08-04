// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.Vector3Parameter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000056")]
public sealed class Vector3Parameter : ParameterOverride<Vector3>
{
	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x4B4B5A0", Offset = "0x4B4B5A0", VA = "0x4B4B5A0", Slot = "9")]
	public override void Interp(Vector3 from, Vector3 to, float t)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x4B4B5E0", Offset = "0x4B4B5E0", VA = "0x4B4B5E0")]
	public static implicit operator Vector2(Vector3Parameter prop)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x4B4B600", Offset = "0x4B4B600", VA = "0x4B4B600")]
	public static implicit operator Vector4(Vector3Parameter prop)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x4B4B620", Offset = "0x4B4B620", VA = "0x4B4B620")]
	public Vector3Parameter()
	{
	}
}
