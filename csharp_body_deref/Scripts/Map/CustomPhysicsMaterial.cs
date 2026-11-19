// ==================== AoTTG2 cross-reference ====================
// Type: Map.CustomPhysicsMaterial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/CustomPhysicsMaterial.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomPhysicsMaterial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x20003D8")]
internal class CustomPhysicsMaterial : MonoBehaviour
{
	[Token(Token = "0x40013A1")]
	[FieldOffset(Offset = "0x20")]
	private PhysicsMaterial _material;

	[Token(Token = "0x1700029E")]
	public float Bounciness
	{
		[Token(Token = "0x6001866")]
		[Address(RVA = "0x5869230", Offset = "0x5868230", VA = "0x5869230")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001867")]
		[Address(RVA = "0x5869250", Offset = "0x5868250", VA = "0x5869250")]
		set
		{
		}
	}

	[Token(Token = "0x1700029F")]
	public float StaticFriction
	{
		[Token(Token = "0x6001868")]
		[Address(RVA = "0x5869270", Offset = "0x5868270", VA = "0x5869270")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001869")]
		[Address(RVA = "0x5869290", Offset = "0x5868290", VA = "0x5869290")]
		set
		{
		}
	}

	[Token(Token = "0x170002A0")]
	public float DynamicFriction
	{
		[Token(Token = "0x600186A")]
		[Address(RVA = "0x58692B0", Offset = "0x58682B0", VA = "0x58692B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600186B")]
		[Address(RVA = "0x58692D0", Offset = "0x58682D0", VA = "0x58692D0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A1")]
	public PhysicsMaterialCombine FrictionCombine
	{
		[Token(Token = "0x600186C")]
		[Address(RVA = "0x58692F0", Offset = "0x58682F0", VA = "0x58692F0")]
		get
		{
			return default(PhysicsMaterialCombine);
		}
		[Token(Token = "0x600186D")]
		[Address(RVA = "0x5869310", Offset = "0x5868310", VA = "0x5869310")]
		set
		{
		}
	}

	[Token(Token = "0x170002A2")]
	public PhysicsMaterialCombine BounceCombine
	{
		[Token(Token = "0x600186E")]
		[Address(RVA = "0x5869330", Offset = "0x5868330", VA = "0x5869330")]
		get
		{
			return default(PhysicsMaterialCombine);
		}
		[Token(Token = "0x600186F")]
		[Address(RVA = "0x5869350", Offset = "0x5868350", VA = "0x5869350")]
		set
		{
		}
	}

	[Token(Token = "0x6001870")]
	[Address(RVA = "0x5869370", Offset = "0x5868370", VA = "0x5869370")]
	public void Setup(bool allChildColliders)
	{
	}

	[Token(Token = "0x6001871")]
	[Address(RVA = "0x58694D0", Offset = "0x58684D0", VA = "0x58694D0")]
	public CustomPhysicsMaterial()
	{
	}
}
