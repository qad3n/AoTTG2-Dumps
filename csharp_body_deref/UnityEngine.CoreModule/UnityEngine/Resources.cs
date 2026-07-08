using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngineInternal;

namespace UnityEngine;

[Token(Token = "0x200013A")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/ResourceManagerUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Resources/Resources.bindings.h")]
public sealed class Resources
{
	[Token(Token = "0x600095C")]
	internal static T[] ConvertObjects<T>(Object[] rawObjects) where T : Object
	{
		return null;
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x4ACB230", Offset = "0x4ACB230", VA = "0x4ACB230")]
	public static Object[] FindObjectsOfTypeAll(Type type)
	{
		return null;
	}

	[Token(Token = "0x600095E")]
	public static T[] FindObjectsOfTypeAll<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x4ACB2B0", Offset = "0x4ACB2B0", VA = "0x4ACB2B0")]
	public static Object Load(string path)
	{
		return null;
	}

	[Token(Token = "0x6000960")]
	public static T Load<T>(string path) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x4ACAD20", Offset = "0x4ACAD20", VA = "0x4ACAD20")]
	public static Object Load(string path, Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000962")]
	public static ResourceRequest LoadAsync<T>(string path) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x4ACB390", Offset = "0x4ACB390", VA = "0x4ACB390")]
	public static ResourceRequest LoadAsync(string path, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x4ACB420", Offset = "0x4ACB420", VA = "0x4ACB420")]
	public static Object[] LoadAll(string path, Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000965")]
	public static T[] LoadAll<T>(string path) where T : Object
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000966")]
	[Address(RVA = "0x4ACB4B0", Offset = "0x4ACB4B0", VA = "0x4ACB4B0")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	[UnityEngine.Bindings.FreeFunction("GetScriptingBuiltinResource", ThrowsException = true)]
	public static extern Object GetBuiltinResource([UnityEngine.Bindings.NotNull("ArgumentNullException")] Type type, string path);

	[Token(Token = "0x6000967")]
	public static T GetBuiltinResource<T>(string path) where T : Object
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000968")]
	[Address(RVA = "0x4ACB4F0", Offset = "0x4ACB4F0", VA = "0x4ACB4F0")]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::UnloadUnusedAssets")]
	public static extern AsyncOperation UnloadUnusedAssets();
}
