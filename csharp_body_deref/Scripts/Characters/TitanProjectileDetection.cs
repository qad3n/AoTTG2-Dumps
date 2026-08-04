// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanProjectileDetection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/TitanProjectileDetection.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/TitanProjectileDetection.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200055D")]
internal class TitanProjectileDetection : MonoBehaviour
{
	[Token(Token = "0x4001A58")]
	[FieldOffset(Offset = "0x20")]
	public HashSet<GameObject> _entities;

	[Token(Token = "0x4001A59")]
	[FieldOffset(Offset = "0x28")]
	public HashSet<Hook> _hooks;

	[Token(Token = "0x4001A5A")]
	[FieldOffset(Offset = "0x30")]
	public BaseTitan Owner;

	[Token(Token = "0x4001A5B")]
	[FieldOffset(Offset = "0x38")]
	public bool Detect;

	[Token(Token = "0x60037E7")]
	[Address(RVA = "0x4220CA0", Offset = "0x4220CA0", VA = "0x4220CA0")]
	public static TitanProjectileDetection Create(BaseTitan owner)
	{
		return null;
	}

	[Token(Token = "0x60037E8")]
	[Address(RVA = "0x42212D0", Offset = "0x42212D0", VA = "0x42212D0")]
	public void RegisterHook(Hook hook)
	{
	}

	[Token(Token = "0x60037E9")]
	[Address(RVA = "0x4221330", Offset = "0x4221330", VA = "0x4221330")]
	protected void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x60037EA")]
	[Address(RVA = "0x4221430", Offset = "0x4221430", VA = "0x4221430")]
	protected void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x60037EB")]
	[Address(RVA = "0x4221530", Offset = "0x4221530", VA = "0x4221530")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x60037EC")]
	[Address(RVA = "0x4221700", Offset = "0x4221700", VA = "0x4221700")]
	public TitanProjectileDetection()
	{
	}
}
