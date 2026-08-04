// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCollisionHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCollisionHandler.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicCollisionHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x200047C")]
internal class CustomLogicCollisionHandler : MonoBehaviour
{
	[Token(Token = "0x40012BE")]
	[FieldOffset(Offset = "0x20")]
	private List<CustomLogicComponentInstance> _classInstances;

	[Token(Token = "0x40012BF")]
	[FieldOffset(Offset = "0x28")]
	private float _lastEnterTime;

	[Token(Token = "0x6002F0F")]
	[Address(RVA = "0x41548D0", Offset = "0x41548D0", VA = "0x41548D0")]
	public void RegisterInstance(CustomLogicComponentInstance classInstance)
	{
	}

	[Token(Token = "0x6002F10")]
	[Address(RVA = "0x4154970", Offset = "0x4154970", VA = "0x4154970")]
	public void GetHit(BaseCharacter character, string name, int damage, string type, Vector3 position)
	{
	}

	[Token(Token = "0x6002F11")]
	[Address(RVA = "0x4155020", Offset = "0x4155020", VA = "0x4155020")]
	public void GetHooked(Human human, Vector3 position, bool left)
	{
	}

	[Token(Token = "0x6002F12")]
	[Address(RVA = "0x41553E0", Offset = "0x41553E0", VA = "0x41553E0")]
	protected void OnCollisionEnter(Collision other)
	{
	}

	[Token(Token = "0x6002F13")]
	[Address(RVA = "0x4155B10", Offset = "0x4155B10", VA = "0x4155B10")]
	protected void OnCollisionStay(Collision other)
	{
	}

	[Token(Token = "0x6002F14")]
	[Address(RVA = "0x4155E30", Offset = "0x4155E30", VA = "0x4155E30")]
	protected void OnCollisionExit(Collision other)
	{
	}

	[Token(Token = "0x6002F15")]
	[Address(RVA = "0x4156150", Offset = "0x4156150", VA = "0x4156150")]
	public void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x6002F16")]
	[Address(RVA = "0x41562E0", Offset = "0x41562E0", VA = "0x41562E0")]
	protected void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x6002F17")]
	[Address(RVA = "0x4156450", Offset = "0x4156450", VA = "0x4156450")]
	protected void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x6002F18")]
	[Address(RVA = "0x4155560", Offset = "0x4155560", VA = "0x4155560")]
	public static BuiltinClassInstance GetBuiltin(Collider other)
	{
		return null;
	}

	[Token(Token = "0x6002F19")]
	[Address(RVA = "0x41565C0", Offset = "0x41565C0", VA = "0x41565C0")]
	public CustomLogicCollisionHandler()
	{
	}
}
