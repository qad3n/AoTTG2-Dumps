// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.Vector2Parameter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000055")]
public sealed class Vector2Parameter : ParameterOverride<Vector2>
{
	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x4B4B4F0", Offset = "0x4B4B4F0", VA = "0x4B4B4F0", Slot = "9")]
	public override void Interp(Vector2 from, Vector2 to, float t)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x4B4B520", Offset = "0x4B4B520", VA = "0x4B4B520")]
	public static implicit operator Vector3(Vector2Parameter prop)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x4B4B540", Offset = "0x4B4B540", VA = "0x4B4B540")]
	public static implicit operator Vector4(Vector2Parameter prop)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x4B4B560", Offset = "0x4B4B560", VA = "0x4B4B560")]
	public Vector2Parameter()
	{
	}
}
