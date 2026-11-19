// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCollisionHandler
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCollisionHandler.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicCollisionHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000631")]
internal class CustomLogicCollisionHandler : MonoBehaviour
{
	[Token(Token = "0x4001A9E")]
	[FieldOffset(Offset = "0x20")]
	private List<CustomLogicComponentInstance> _classInstances;

	[Token(Token = "0x4001A9F")]
	[FieldOffset(Offset = "0x28")]
	private readonly HashSet<object> _enteredThisStep;

	[Token(Token = "0x4001AA0")]
	[FieldOffset(Offset = "0x30")]
	private float _enterStepTime;

	[Token(Token = "0x6003B0D")]
	[Address(RVA = "0x5A6A820", Offset = "0x5A69820", VA = "0x5A6A820")]
	public void RegisterInstance(CustomLogicComponentInstance classInstance)
	{
	}

	[Token(Token = "0x6003B0E")]
	[Address(RVA = "0x5A6A8C0", Offset = "0x5A698C0", VA = "0x5A6A8C0")]
	public void GetHit(BaseCharacter character, string name, int damage, string type, Vector3 position)
	{
	}

	[Token(Token = "0x6003B0F")]
	[Address(RVA = "0x5A6AFD0", Offset = "0x5A69FD0", VA = "0x5A6AFD0")]
	public void GetHooked(Human human, Vector3 position, bool left)
	{
	}

	[Token(Token = "0x6003B10")]
	[Address(RVA = "0x5A6B390", Offset = "0x5A6A390", VA = "0x5A6B390")]
	protected void OnCollisionEnter(Collision other)
	{
	}

	[Token(Token = "0x6003B11")]
	[Address(RVA = "0x5A6B6B0", Offset = "0x5A6A6B0", VA = "0x5A6B6B0")]
	protected void OnCollisionStay(Collision other)
	{
	}

	[Token(Token = "0x6003B12")]
	[Address(RVA = "0x5A6B9C0", Offset = "0x5A6A9C0", VA = "0x5A6B9C0")]
	protected void OnCollisionExit(Collision other)
	{
	}

	[Token(Token = "0x6003B13")]
	[Address(RVA = "0x5A6BCD0", Offset = "0x5A6ACD0", VA = "0x5A6BCD0")]
	public void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x6003B14")]
	[Address(RVA = "0x5A6C0C0", Offset = "0x5A6B0C0", VA = "0x5A6C0C0")]
	protected void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x6003B15")]
	[Address(RVA = "0x5A6C220", Offset = "0x5A6B220", VA = "0x5A6C220")]
	protected void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x6003B16")]
	[Address(RVA = "0x5A6B500", Offset = "0x5A6A500", VA = "0x5A6B500")]
	public static BuiltinClassInstance GetBuiltin(Collider other)
	{
		return null;
	}

	[Token(Token = "0x6003B17")]
	[Address(RVA = "0x5A6BEB0", Offset = "0x5A6AEB0", VA = "0x5A6BEB0")]
	private static object FindTarget(Collider other)
	{
		return null;
	}

	[Token(Token = "0x6003B18")]
	[Address(RVA = "0x5A6BFB0", Offset = "0x5A6AFB0", VA = "0x5A6BFB0")]
	private static BuiltinClassInstance BuiltinFromTarget(object target)
	{
		return null;
	}

	[Token(Token = "0x6003B19")]
	[Address(RVA = "0x5A6C490", Offset = "0x5A6B490", VA = "0x5A6C490")]
	public CustomLogicCollisionHandler()
	{
	}
}
