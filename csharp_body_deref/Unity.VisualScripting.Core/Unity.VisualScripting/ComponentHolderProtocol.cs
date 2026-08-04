// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ComponentHolderProtocol
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x200019F")]
public static class ComponentHolderProtocol
{
	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x4D5D910", Offset = "0x4D5D910", VA = "0x4D5D910")]
	public static bool IsComponentHolderType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x4D5DA60", Offset = "0x4D5DA60", VA = "0x4D5DA60")]
	public static bool IsComponentHolder(this UnityEngine.Object uo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FFB")]
	[Address(RVA = "0x4D5DAE0", Offset = "0x4D5DAE0", VA = "0x4D5DAE0")]
	public static GameObject GameObject(this UnityEngine.Object uo)
	{
		return null;
	}

	[Token(Token = "0x6000FFC")]
	public static T AddComponent<T>(this UnityEngine.Object uo) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000FFD")]
	public static T GetOrAddComponent<T>(this UnityEngine.Object uo) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000FFE")]
	public static T GetComponent<T>(this UnityEngine.Object uo)
	{
		return (T)null;
	}

	[Token(Token = "0x6000FFF")]
	public static T GetComponentInChildren<T>(this UnityEngine.Object uo)
	{
		return (T)null;
	}

	[Token(Token = "0x6001000")]
	public static T GetComponentInParent<T>(this UnityEngine.Object uo)
	{
		return (T)null;
	}

	[Token(Token = "0x6001001")]
	public static T[] GetComponents<T>(this UnityEngine.Object uo)
	{
		return null;
	}

	[Token(Token = "0x6001002")]
	public static T[] GetComponentsInChildren<T>(this UnityEngine.Object uo)
	{
		return null;
	}

	[Token(Token = "0x6001003")]
	public static T[] GetComponentsInParent<T>(this UnityEngine.Object uo)
	{
		return null;
	}

	[Token(Token = "0x6001004")]
	[Address(RVA = "0x4D5DB60", Offset = "0x4D5DB60", VA = "0x4D5DB60")]
	public static Component GetComponent(this UnityEngine.Object uo, Type type)
	{
		return null;
	}

	[Token(Token = "0x6001005")]
	[Address(RVA = "0x4D5DC30", Offset = "0x4D5DC30", VA = "0x4D5DC30")]
	public static Component GetComponentInChildren(this UnityEngine.Object uo, Type type)
	{
		return null;
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x4D5DD00", Offset = "0x4D5DD00", VA = "0x4D5DD00")]
	public static Component GetComponentInParent(this UnityEngine.Object uo, Type type)
	{
		return null;
	}

	[Token(Token = "0x6001007")]
	[Address(RVA = "0x4D5DDD0", Offset = "0x4D5DDD0", VA = "0x4D5DDD0")]
	public static Component[] GetComponents(this UnityEngine.Object uo, Type type)
	{
		return null;
	}

	[Token(Token = "0x6001008")]
	[Address(RVA = "0x4D5DEA0", Offset = "0x4D5DEA0", VA = "0x4D5DEA0")]
	public static Component[] GetComponentsInChildren(this UnityEngine.Object uo, Type type)
	{
		return null;
	}

	[Token(Token = "0x6001009")]
	[Address(RVA = "0x4D5DF70", Offset = "0x4D5DF70", VA = "0x4D5DF70")]
	public static Component[] GetComponentsInParent(this UnityEngine.Object uo, Type type)
	{
		return null;
	}
}
