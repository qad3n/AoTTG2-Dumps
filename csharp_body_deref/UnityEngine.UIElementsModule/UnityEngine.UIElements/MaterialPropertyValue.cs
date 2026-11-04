// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MaterialPropertyValue
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000400")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal struct MaterialPropertyValue : IEquatable<MaterialPropertyValue>
{
	[Token(Token = "0x4000D9B")]
	[FieldOffset(Offset = "0x0")]
	public string name;

	[Token(Token = "0x4000D9C")]
	[FieldOffset(Offset = "0x8")]
	public MaterialPropertyValueType type;

	[Token(Token = "0x4000D9D")]
	[FieldOffset(Offset = "0xC")]
	public Vector4 packedValue;

	[Token(Token = "0x4000D9E")]
	[FieldOffset(Offset = "0x20")]
	public Texture textureValue;

	[Token(Token = "0x6001F3D")]
	[Address(RVA = "0x2EAE460", Offset = "0x2EACA60", VA = "0x182EAE460")]
	public float GetFloat()
	{
		return default(float);
	}

	[Token(Token = "0x6001F3E")]
	[Address(RVA = "0x310F360", Offset = "0x310D960", VA = "0x18310F360")]
	public Vector4 GetVector()
	{
		return default(Vector4);
	}

	[Token(Token = "0x6001F3F")]
	[Address(RVA = "0x310F100", Offset = "0x310D700", VA = "0x18310F100")]
	public Color GetColor()
	{
		return default(Color);
	}

	[Token(Token = "0x6001F40")]
	[Address(RVA = "0x310F370", Offset = "0x310D970", VA = "0x18310F370", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001F41")]
	[Address(RVA = "0x310F4D0", Offset = "0x310DAD0", VA = "0x18310F4D0")]
	public static bool operator !=(MaterialPropertyValue lhs, MaterialPropertyValue rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F42")]
	[Address(RVA = "0x310EF50", Offset = "0x310D550", VA = "0x18310EF50", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F43")]
	[Address(RVA = "0x310F000", Offset = "0x310D600", VA = "0x18310F000", Slot = "4")]
	public bool Equals(MaterialPropertyValue other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F44")]
	[Address(RVA = "0x310F120", Offset = "0x310D720", VA = "0x18310F120", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
