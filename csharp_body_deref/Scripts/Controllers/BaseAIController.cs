// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.BaseAIController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/BaseAIController.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/BaseAIController.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x20004C4")]
internal class BaseAIController : MonoBehaviour
{
	[Token(Token = "0x40014CE")]
	[FieldOffset(Offset = "0x20")]
	protected BaseCharacter _character;

	[Token(Token = "0x6003224")]
	[Address(RVA = "0x418A680", Offset = "0x418A680", VA = "0x418A680", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6003225")]
	[Address(RVA = "0x418A6D0", Offset = "0x418A6D0", VA = "0x418A6D0", Slot = "5")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x6003226")]
	[Address(RVA = "0x418A6E0", Offset = "0x418A6E0", VA = "0x418A6E0", Slot = "6")]
	protected virtual void FixedUpdate()
	{
	}

	[Token(Token = "0x6003227")]
	[Address(RVA = "0x418A6F0", Offset = "0x418A6F0", VA = "0x418A6F0")]
	protected float GetTargetAngle(Vector3 direction)
	{
		return default(float);
	}

	[Token(Token = "0x6003228")]
	[Address(RVA = "0x418A930", Offset = "0x418A930", VA = "0x418A930")]
	protected Quaternion GetTargetRotation(float angle)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6003229")]
	[Address(RVA = "0x418A950", Offset = "0x418A950", VA = "0x418A950")]
	protected Vector3 GetTargetDirection(float angle)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600322A")]
	[Address(RVA = "0x418AAA0", Offset = "0x418AAA0", VA = "0x418AAA0")]
	public BaseAIController()
	{
	}
}
