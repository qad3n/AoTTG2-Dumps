using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000057")]
public sealed class Vector4Parameter : ParameterOverride<Vector4>
{
	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x4826570", Offset = "0x4826570", VA = "0x4826570", Slot = "9")]
	public override void Interp(Vector4 from, Vector4 to, float t)
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x4826590", Offset = "0x4826590", VA = "0x4826590")]
	public static implicit operator Vector2(Vector4Parameter prop)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x48265B0", Offset = "0x48265B0", VA = "0x48265B0")]
	public static implicit operator Vector3(Vector4Parameter prop)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x48265D0", Offset = "0x48265D0", VA = "0x48265D0")]
	public Vector4Parameter()
	{
	}
}
