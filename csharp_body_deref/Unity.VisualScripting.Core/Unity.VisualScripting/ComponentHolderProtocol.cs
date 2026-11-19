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

[Token(Token = "0x20001A1")]
public static class ComponentHolderProtocol
{
	[Token(Token = "0x600100F")]
	[Address(RVA = "0x6849980", Offset = "0x6848980", VA = "0x6849980")]
	public static bool IsComponentHolderType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001010")]
	[Address(RVA = "0x6849AD0", Offset = "0x6848AD0", VA = "0x6849AD0")]
	public static bool IsComponentHolder(this UnityEngine.Object uo)
	{
		return default(bool);
	}

	[Token(Token = "0x6001011")]
	[Address(RVA = "0x6849B50", Offset = "0x6848B50", VA = "0x6849B50")]
	public static GameObject GameObject(this UnityEngine.Object uo)
	{
		return null;
	}

	[Token(Token = "0x6001012")]
	public static T AddComponent<T>(this UnityEngine.Object uo) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6001013")]
	public static T GetOrAddComponent<T>(this UnityEngine.Object uo) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6001014")]
	public static T GetComponent<T>(this UnityEngine.Object uo)
	{
		return (T)null;
	}

	[Token(Token = "0x6001015")]
	public static T GetComponentInChildren<T>(this UnityEngine.Object uo)
	{
		return (T)null;
	}

	[Token(Token = "0x6001016")]
	public static T GetComponentInParent<T>(this UnityEngine.Object uo)
	{
		return (T)null;
	}

	[Token(Token = "0x6001017")]
	public static T[] GetComponents<T>(this UnityEngine.Object uo)
	{
		return null;
	}

	[Token(Token = "0x6001018")]
	public static T[] GetComponentsInChildren<T>(this UnityEngine.Object uo)
	{
		return null;
	}

	[Token(Token = "0x6001019")]
	public static T[] GetComponentsInParent<T>(this UnityEngine.Object uo)
	{
		return null;
	}

	[Token(Token = "0x600101A")]
	[Address(RVA = "0x6849BD0", Offset = "0x6848BD0", VA = "0x6849BD0")]
	public static Component GetComponent(this UnityEngine.Object uo, Type type)
	{
		return null;
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x6849CA0", Offset = "0x6848CA0", VA = "0x6849CA0")]
	public static Component GetComponentInChildren(this UnityEngine.Object uo, Type type)
	{
		return null;
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x6849D70", Offset = "0x6848D70", VA = "0x6849D70")]
	public static Component GetComponentInParent(this UnityEngine.Object uo, Type type)
	{
		return null;
	}

	[Token(Token = "0x600101D")]
	[Address(RVA = "0x6849E40", Offset = "0x6848E40", VA = "0x6849E40")]
	public static Component[] GetComponents(this UnityEngine.Object uo, Type type)
	{
		return null;
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x6849F10", Offset = "0x6848F10", VA = "0x6849F10")]
	public static Component[] GetComponentsInChildren(this UnityEngine.Object uo, Type type)
	{
		return null;
	}

	[Token(Token = "0x600101F")]
	[Address(RVA = "0x6849FE0", Offset = "0x6848FE0", VA = "0x6849FE0")]
	public static Component[] GetComponentsInParent(this UnityEngine.Object uo, Type type)
	{
		return null;
	}
}
