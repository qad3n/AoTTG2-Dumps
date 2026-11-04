// ==================== AoTTG2 cross-reference ====================
// Type: Map.CustomPhysicsMaterial
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Map/CustomPhysicsMaterial.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomPhysicsMaterial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x200037D")]
internal class CustomPhysicsMaterial : MonoBehaviour
{
	[Token(Token = "0x4001210")]
	[FieldOffset(Offset = "0x20")]
	private PhysicsMaterial _material;

	[Token(Token = "0x1700025D")]
	public float Bounciness
	{
		[Token(Token = "0x6001603")]
		[Address(RVA = "0x1E88BE0", Offset = "0x1E871E0", VA = "0x181E88BE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001604")]
		[Address(RVA = "0x1E88C80", Offset = "0x1E87280", VA = "0x181E88C80")]
		set
		{
		}
	}

	[Token(Token = "0x1700025E")]
	public float StaticFriction
	{
		[Token(Token = "0x6001605")]
		[Address(RVA = "0x1E88C40", Offset = "0x1E87240", VA = "0x181E88C40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001606")]
		[Address(RVA = "0x1E88CE0", Offset = "0x1E872E0", VA = "0x181E88CE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700025F")]
	public float DynamicFriction
	{
		[Token(Token = "0x6001607")]
		[Address(RVA = "0x1E88C00", Offset = "0x1E87200", VA = "0x181E88C00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001608")]
		[Address(RVA = "0x1E88CA0", Offset = "0x1E872A0", VA = "0x181E88CA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000260")]
	public PhysicsMaterialCombine FrictionCombine
	{
		[Token(Token = "0x6001609")]
		[Address(RVA = "0x1E88C20", Offset = "0x1E87220", VA = "0x181E88C20")]
		get
		{
			return default(PhysicsMaterialCombine);
		}
		[Token(Token = "0x600160A")]
		[Address(RVA = "0x1E88CC0", Offset = "0x1E872C0", VA = "0x181E88CC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000261")]
	public PhysicsMaterialCombine BounceCombine
	{
		[Token(Token = "0x600160B")]
		[Address(RVA = "0x1E88BC0", Offset = "0x1E871C0", VA = "0x181E88BC0")]
		get
		{
			return default(PhysicsMaterialCombine);
		}
		[Token(Token = "0x600160C")]
		[Address(RVA = "0x1E88C60", Offset = "0x1E87260", VA = "0x181E88C60")]
		set
		{
		}
	}

	[Token(Token = "0x600160D")]
	[Address(RVA = "0x1E88A70", Offset = "0x1E87070", VA = "0x181E88A70")]
	public void Setup(bool allChildColliders)
	{
	}

	[Token(Token = "0x600160E")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public CustomPhysicsMaterial()
	{
	}
}
