// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanColliderToggler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/TitanColliderToggler.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/TitanColliderToggler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200071E")]
internal class TitanColliderToggler : MonoBehaviour
{
	[Token(Token = "0x400234C")]
	[FieldOffset(Offset = "0x20")]
	public BaseTitan Owner;

	[Token(Token = "0x400234D")]
	[FieldOffset(Offset = "0x28")]
	public HashSet<BaseCharacter> NearbyCharacters;

	[Token(Token = "0x400234E")]
	[FieldOffset(Offset = "0x30")]
	public TitanProjectileDetection _projectile;

	[Token(Token = "0x400234F")]
	[FieldOffset(Offset = "0x38")]
	protected bool _look;

	[Token(Token = "0x4002350")]
	[FieldOffset(Offset = "0x39")]
	protected bool _enabled;

	[Token(Token = "0x17000C04")]
	public bool CollidersEnabled
	{
		[Token(Token = "0x600455E")]
		[Address(RVA = "0x5B47CE0", Offset = "0x5B46CE0", VA = "0x5B47CE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600455F")]
	[Address(RVA = "0x5B47CF0", Offset = "0x5B46CF0", VA = "0x5B47CF0")]
	public static TitanColliderToggler Create(BaseTitan owner)
	{
		return null;
	}

	[Token(Token = "0x6004560")]
	[Address(RVA = "0x5B48030", Offset = "0x5B47030", VA = "0x5B48030")]
	public void RegisterLook()
	{
	}

	[Token(Token = "0x6004561")]
	[Address(RVA = "0x5B48040", Offset = "0x5B47040", VA = "0x5B48040")]
	public void SetNearby(BaseCharacter character, bool nearby)
	{
	}

	[Token(Token = "0x6004562")]
	[Address(RVA = "0x5B480F0", Offset = "0x5B470F0", VA = "0x5B480F0")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x6004563")]
	[Address(RVA = "0x5B47DE0", Offset = "0x5B46DE0", VA = "0x5B47DE0")]
	protected void SetColliders(bool enable)
	{
	}

	[Token(Token = "0x6004564")]
	[Address(RVA = "0x5B481E0", Offset = "0x5B471E0", VA = "0x5B481E0")]
	public TitanColliderToggler()
	{
	}
}
