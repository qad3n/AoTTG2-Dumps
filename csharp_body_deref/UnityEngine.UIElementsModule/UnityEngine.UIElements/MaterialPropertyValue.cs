// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MaterialPropertyValue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000403")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal struct MaterialPropertyValue : IEquatable<MaterialPropertyValue>
{
	[Token(Token = "0x4000D9F")]
	[FieldOffset(Offset = "0x0")]
	public string name;

	[Token(Token = "0x4000DA0")]
	[FieldOffset(Offset = "0x8")]
	public MaterialPropertyValueType type;

	[Token(Token = "0x4000DA1")]
	[FieldOffset(Offset = "0xC")]
	public Vector4 packedValue;

	[Token(Token = "0x4000DA2")]
	[FieldOffset(Offset = "0x20")]
	public Texture textureValue;

	[Token(Token = "0x6001F50")]
	[Address(RVA = "0x6B0F690", Offset = "0x6B0E690", VA = "0x6B0F690")]
	public float GetFloat()
	{
		return default(float);
	}

	[Token(Token = "0x6001F51")]
	[Address(RVA = "0x6B0F6A0", Offset = "0x6B0E6A0", VA = "0x6B0F6A0")]
	public Vector4 GetVector()
	{
		return default(Vector4);
	}

	[Token(Token = "0x6001F52")]
	[Address(RVA = "0x6B0F6B0", Offset = "0x6B0E6B0", VA = "0x6B0F6B0")]
	public Color GetColor()
	{
		return default(Color);
	}

	[Token(Token = "0x6001F53")]
	[Address(RVA = "0x6B0FFB0", Offset = "0x6B0EFB0", VA = "0x6B0FFB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001F54")]
	[Address(RVA = "0x6B0F930", Offset = "0x6B0E930", VA = "0x6B0F930")]
	public static bool operator !=(MaterialPropertyValue lhs, MaterialPropertyValue rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F55")]
	[Address(RVA = "0x6B10370", Offset = "0x6B0F370", VA = "0x6B10370", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F56")]
	[Address(RVA = "0x6B10290", Offset = "0x6B0F290", VA = "0x6B10290", Slot = "4")]
	public bool Equals(MaterialPropertyValue other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F57")]
	[Address(RVA = "0x6B0FCD0", Offset = "0x6B0ECD0", VA = "0x6B0FCD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
