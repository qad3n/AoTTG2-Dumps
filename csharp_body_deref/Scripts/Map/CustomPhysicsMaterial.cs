using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x2000227")]
internal class CustomPhysicsMaterial : MonoBehaviour
{
	[Token(Token = "0x4000BF6")]
	[FieldOffset(Offset = "0x20")]
	private PhysicMaterial _material;

	[Token(Token = "0x1700016E")]
	public float Bounciness
	{
		[Token(Token = "0x6000CE9")]
		[Address(RVA = "0x414A260", Offset = "0x414A260", VA = "0x414A260")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000CEA")]
		[Address(RVA = "0x414A280", Offset = "0x414A280", VA = "0x414A280")]
		set
		{
		}
	}

	[Token(Token = "0x1700016F")]
	public float StaticFriction
	{
		[Token(Token = "0x6000CEB")]
		[Address(RVA = "0x414A2A0", Offset = "0x414A2A0", VA = "0x414A2A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000CEC")]
		[Address(RVA = "0x414A2C0", Offset = "0x414A2C0", VA = "0x414A2C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000170")]
	public float DynamicFriction
	{
		[Token(Token = "0x6000CED")]
		[Address(RVA = "0x414A2E0", Offset = "0x414A2E0", VA = "0x414A2E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000CEE")]
		[Address(RVA = "0x414A300", Offset = "0x414A300", VA = "0x414A300")]
		set
		{
		}
	}

	[Token(Token = "0x17000171")]
	public PhysicMaterialCombine FrictionCombine
	{
		[Token(Token = "0x6000CEF")]
		[Address(RVA = "0x414A320", Offset = "0x414A320", VA = "0x414A320")]
		get
		{
			return default(PhysicMaterialCombine);
		}
		[Token(Token = "0x6000CF0")]
		[Address(RVA = "0x414A340", Offset = "0x414A340", VA = "0x414A340")]
		set
		{
		}
	}

	[Token(Token = "0x17000172")]
	public PhysicMaterialCombine BounceCombine
	{
		[Token(Token = "0x6000CF1")]
		[Address(RVA = "0x414A360", Offset = "0x414A360", VA = "0x414A360")]
		get
		{
			return default(PhysicMaterialCombine);
		}
		[Token(Token = "0x6000CF2")]
		[Address(RVA = "0x414A380", Offset = "0x414A380", VA = "0x414A380")]
		set
		{
		}
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x414A3A0", Offset = "0x414A3A0", VA = "0x414A3A0")]
	public void Setup(bool allChildColliders)
	{
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x414A500", Offset = "0x414A500", VA = "0x414A500")]
	public CustomPhysicsMaterial()
	{
	}
}
