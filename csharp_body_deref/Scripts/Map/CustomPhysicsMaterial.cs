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

[Token(Token = "0x200025D")]
internal class CustomPhysicsMaterial : MonoBehaviour
{
	[Token(Token = "0x4000CCF")]
	[FieldOffset(Offset = "0x20")]
	private PhysicMaterial _material;

	[Token(Token = "0x170001C5")]
	public float Bounciness
	{
		[Token(Token = "0x6000E82")]
		[Address(RVA = "0x3F97330", Offset = "0x3F97330", VA = "0x3F97330")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E83")]
		[Address(RVA = "0x3F97350", Offset = "0x3F97350", VA = "0x3F97350")]
		set
		{
		}
	}

	[Token(Token = "0x170001C6")]
	public float StaticFriction
	{
		[Token(Token = "0x6000E84")]
		[Address(RVA = "0x3F97370", Offset = "0x3F97370", VA = "0x3F97370")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E85")]
		[Address(RVA = "0x3F97390", Offset = "0x3F97390", VA = "0x3F97390")]
		set
		{
		}
	}

	[Token(Token = "0x170001C7")]
	public float DynamicFriction
	{
		[Token(Token = "0x6000E86")]
		[Address(RVA = "0x3F973B0", Offset = "0x3F973B0", VA = "0x3F973B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E87")]
		[Address(RVA = "0x3F973D0", Offset = "0x3F973D0", VA = "0x3F973D0")]
		set
		{
		}
	}

	[Token(Token = "0x170001C8")]
	public PhysicMaterialCombine FrictionCombine
	{
		[Token(Token = "0x6000E88")]
		[Address(RVA = "0x3F973F0", Offset = "0x3F973F0", VA = "0x3F973F0")]
		get
		{
			return default(PhysicMaterialCombine);
		}
		[Token(Token = "0x6000E89")]
		[Address(RVA = "0x3F97410", Offset = "0x3F97410", VA = "0x3F97410")]
		set
		{
		}
	}

	[Token(Token = "0x170001C9")]
	public PhysicMaterialCombine BounceCombine
	{
		[Token(Token = "0x6000E8A")]
		[Address(RVA = "0x3F97430", Offset = "0x3F97430", VA = "0x3F97430")]
		get
		{
			return default(PhysicMaterialCombine);
		}
		[Token(Token = "0x6000E8B")]
		[Address(RVA = "0x3F97450", Offset = "0x3F97450", VA = "0x3F97450")]
		set
		{
		}
	}

	[Token(Token = "0x6000E8C")]
	[Address(RVA = "0x3F97470", Offset = "0x3F97470", VA = "0x3F97470")]
	public void Setup(bool allChildColliders)
	{
	}

	[Token(Token = "0x6000E8D")]
	[Address(RVA = "0x3F975D0", Offset = "0x3F975D0", VA = "0x3F975D0")]
	public CustomPhysicsMaterial()
	{
	}
}
