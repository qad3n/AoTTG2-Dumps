using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000055")]
public sealed class Vector2Parameter : ParameterOverride<Vector2>
{
	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x4826400", Offset = "0x4826400", VA = "0x4826400", Slot = "9")]
	public override void Interp(Vector2 from, Vector2 to, float t)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x4826430", Offset = "0x4826430", VA = "0x4826430")]
	public static implicit operator Vector3(Vector2Parameter prop)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x4826450", Offset = "0x4826450", VA = "0x4826450")]
	public static implicit operator Vector4(Vector2Parameter prop)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x4826470", Offset = "0x4826470", VA = "0x4826470")]
	public Vector2Parameter()
	{
	}
}
