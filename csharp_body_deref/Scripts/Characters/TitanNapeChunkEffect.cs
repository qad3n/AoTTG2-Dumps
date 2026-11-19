// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanNapeChunkEffect
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Characters/TitanNapeChunkEffect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200072D")]
internal sealed class TitanNapeChunkEffect : MonoBehaviour
{
	[Token(Token = "0x40023E1")]
	public const float SwingSpeed = 15f;

	[Token(Token = "0x40023E2")]
	public const float BackwardSpeed = 10f;

	[Token(Token = "0x40023E3")]
	private const int MaxChunks = 8;

	[Token(Token = "0x40023E4")]
	private const float MaxSpinSpeed = 400f;

	[Token(Token = "0x40023E5")]
	private const float Lifetime = 5f;

	[Token(Token = "0x40023E6")]
	private const float DissolveDuration = 1.5f;

	[Token(Token = "0x40023E7")]
	private const float RestHeight = 0.15f;

	[Token(Token = "0x40023E8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector3 NeckOffset;

	[Token(Token = "0x40023E9")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int Dissolve;

	[Token(Token = "0x40023EA")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int DissolveSeed;

	[Token(Token = "0x40023EB")]
	[FieldOffset(Offset = "0x18")]
	private static readonly List<TitanNapeChunkEffect> Pool;

	[Token(Token = "0x40023EC")]
	[FieldOffset(Offset = "0x20")]
	private static Material _material;

	[Token(Token = "0x40023ED")]
	[FieldOffset(Offset = "0x20")]
	private ParticleSystem _trail;

	[Token(Token = "0x40023EE")]
	[FieldOffset(Offset = "0x28")]
	private Renderer _renderer;

	[Token(Token = "0x40023EF")]
	[FieldOffset(Offset = "0x30")]
	private MaterialPropertyBlock _properties;

	[Token(Token = "0x40023F0")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 _velocity;

	[Token(Token = "0x40023F1")]
	[FieldOffset(Offset = "0x44")]
	private Vector3 _angularVelocity;

	[Token(Token = "0x40023F2")]
	[FieldOffset(Offset = "0x50")]
	private float _scale;

	[Token(Token = "0x40023F3")]
	[FieldOffset(Offset = "0x54")]
	private float _age;

	[Token(Token = "0x40023F4")]
	[FieldOffset(Offset = "0x58")]
	private bool _landed;

	[Token(Token = "0x60045B9")]
	[Address(RVA = "0x5B5E1A0", Offset = "0x5B5D1A0", VA = "0x5B5E1A0")]
	public static void Play(Transform neck, float scale, Vector3 velocity)
	{
	}

	[Token(Token = "0x60045BA")]
	[Address(RVA = "0x5B5E5F0", Offset = "0x5B5D5F0", VA = "0x5B5E5F0")]
	private static Material GetMaterial(GameObject prefab)
	{
		return null;
	}

	[Token(Token = "0x60045BB")]
	[Address(RVA = "0x5B5EA50", Offset = "0x5B5DA50", VA = "0x5B5EA50")]
	private void Initialize(Transform neck, float scale, Vector3 velocity)
	{
	}

	[Token(Token = "0x60045BC")]
	[Address(RVA = "0x5B5ED00", Offset = "0x5B5DD00", VA = "0x5B5ED00")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60045BD")]
	[Address(RVA = "0x5B5EC60", Offset = "0x5B5DC60", VA = "0x5B5EC60")]
	private void SetDissolve(float progress)
	{
	}

	[Token(Token = "0x60045BE")]
	[Address(RVA = "0x5B5EDA0", Offset = "0x5B5DDA0", VA = "0x5B5EDA0")]
	private void UpdateFlight(float deltaTime)
	{
	}

	[Token(Token = "0x60045BF")]
	[Address(RVA = "0x5B5F120", Offset = "0x5B5E120", VA = "0x5B5F120")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60045C0")]
	[Address(RVA = "0x5B5F1C0", Offset = "0x5B5E1C0", VA = "0x5B5F1C0")]
	public TitanNapeChunkEffect()
	{
	}
}
