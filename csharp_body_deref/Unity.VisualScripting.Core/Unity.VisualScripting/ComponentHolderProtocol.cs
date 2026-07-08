using System;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20001A1")]
public static class ComponentHolderProtocol
{
	[Token(Token = "0x6001002")]
	[Address(RVA = "0x4A3A600", Offset = "0x4A3A600", VA = "0x4A3A600")]
	public static bool IsComponentHolderType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001003")]
	[Address(RVA = "0x4A3A750", Offset = "0x4A3A750", VA = "0x4A3A750")]
	public static bool IsComponentHolder(this UnityEngine.Object uo)
	{
		return default(bool);
	}

	[Token(Token = "0x6001004")]
	[Address(RVA = "0x4A3A7D0", Offset = "0x4A3A7D0", VA = "0x4A3A7D0")]
	public static GameObject GameObject(this UnityEngine.Object uo)
	{
		return null;
	}

	[Token(Token = "0x6001005")]
	public static T AddComponent<T>(this UnityEngine.Object uo) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6001006")]
	public static T GetOrAddComponent<T>(this UnityEngine.Object uo) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6001007")]
	public static T GetComponent<T>(this UnityEngine.Object uo)
	{
		return (T)null;
	}

	[Token(Token = "0x6001008")]
	public static T GetComponentInChildren<T>(this UnityEngine.Object uo)
	{
		return (T)null;
	}

	[Token(Token = "0x6001009")]
	public static T GetComponentInParent<T>(this UnityEngine.Object uo)
	{
		return (T)null;
	}

	[Token(Token = "0x600100A")]
	public static T[] GetComponents<T>(this UnityEngine.Object uo)
	{
		return null;
	}

	[Token(Token = "0x600100B")]
	public static T[] GetComponentsInChildren<T>(this UnityEngine.Object uo)
	{
		return null;
	}

	[Token(Token = "0x600100C")]
	public static T[] GetComponentsInParent<T>(this UnityEngine.Object uo)
	{
		return null;
	}

	[Token(Token = "0x600100D")]
	[Address(RVA = "0x4A3A850", Offset = "0x4A3A850", VA = "0x4A3A850")]
	public static Component GetComponent(this UnityEngine.Object uo, Type type)
	{
		return null;
	}

	[Token(Token = "0x600100E")]
	[Address(RVA = "0x4A3A920", Offset = "0x4A3A920", VA = "0x4A3A920")]
	public static Component GetComponentInChildren(this UnityEngine.Object uo, Type type)
	{
		return null;
	}

	[Token(Token = "0x600100F")]
	[Address(RVA = "0x4A3A9F0", Offset = "0x4A3A9F0", VA = "0x4A3A9F0")]
	public static Component GetComponentInParent(this UnityEngine.Object uo, Type type)
	{
		return null;
	}

	[Token(Token = "0x6001010")]
	[Address(RVA = "0x4A3AAC0", Offset = "0x4A3AAC0", VA = "0x4A3AAC0")]
	public static Component[] GetComponents(this UnityEngine.Object uo, Type type)
	{
		return null;
	}

	[Token(Token = "0x6001011")]
	[Address(RVA = "0x4A3AB90", Offset = "0x4A3AB90", VA = "0x4A3AB90")]
	public static Component[] GetComponentsInChildren(this UnityEngine.Object uo, Type type)
	{
		return null;
	}

	[Token(Token = "0x6001012")]
	[Address(RVA = "0x4A3AC60", Offset = "0x4A3AC60", VA = "0x4A3AC60")]
	public static Component[] GetComponentsInParent(this UnityEngine.Object uo, Type type)
	{
		return null;
	}
}
