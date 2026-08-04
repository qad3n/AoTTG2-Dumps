// ==================== AoTTG2 cross-reference ====================
// Type: LookAtTarget
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/LookAtTarget.c
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Example/Scripts/LookAtTarget.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000013")]
public class LookAtTarget : MonoBehaviour
{
	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Transform _target;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private float _speed;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x2C")]
	private Vector3 _lookAtTarget;

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x3F5F510", Offset = "0x3F5F510", VA = "0x3F5F510")]
	private void Update()
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x3F5F5E0", Offset = "0x3F5F5E0", VA = "0x3F5F5E0")]
	public LookAtTarget()
	{
	}
}
