using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000056")]
public sealed class Vector3Parameter : ParameterOverride<Vector3>
{
	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x48264B0", Offset = "0x48264B0", VA = "0x48264B0", Slot = "9")]
	public override void Interp(Vector3 from, Vector3 to, float t)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x48264F0", Offset = "0x48264F0", VA = "0x48264F0")]
	public static implicit operator Vector2(Vector3Parameter prop)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x4826510", Offset = "0x4826510", VA = "0x4826510")]
	public static implicit operator Vector4(Vector3Parameter prop)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x4826530", Offset = "0x4826530", VA = "0x4826530")]
	public Vector3Parameter()
	{
	}
}
