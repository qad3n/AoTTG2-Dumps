using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200045A")]
public sealed class VectorImage : ScriptableObject
{
	[Token(Token = "0x4000D01")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	internal int version;

	[Token(Token = "0x4000D02")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	internal Texture2D atlas;

	[Token(Token = "0x4000D03")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	internal VectorImageVertex[] vertices;

	[Token(Token = "0x4000D04")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	internal ushort[] indices;

	[Token(Token = "0x4000D05")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	internal GradientSettings[] settings;

	[Token(Token = "0x4000D06")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	internal Vector2 size;

	[Token(Token = "0x17000744")]
	public float width
	{
		[Token(Token = "0x6001B6E")]
		[Address(RVA = "0x4C4D100", Offset = "0x4C4D100", VA = "0x4C4D100")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000745")]
	public float height
	{
		[Token(Token = "0x6001B6F")]
		[Address(RVA = "0x4C4D110", Offset = "0x4C4D110", VA = "0x4C4D110")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6001B70")]
	[Address(RVA = "0x4C4D120", Offset = "0x4C4D120", VA = "0x4C4D120")]
	public VectorImage()
	{
	}
}
