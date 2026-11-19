// ==================== AoTTG2 cross-reference ====================
// Type: LookAtTarget
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/LookAtTarget.c
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Example/Scripts/LookAtTarget.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000015")]
public class LookAtTarget : MonoBehaviour
{
	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Transform _target;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private float _speed;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x2C")]
	private Vector3 _lookAtTarget;

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x5749120", Offset = "0x5748120", VA = "0x5749120")]
	private void Update()
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x57491F0", Offset = "0x57481F0", VA = "0x57491F0")]
	public LookAtTarget()
	{
	}
}
