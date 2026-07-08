using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000176")]
[ExtensionOfNativeClass]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/MonoBehaviour.h")]
[UnityEngine.NativeClass(null)]
[UnityEngine.Scripting.RequiredByNativeCode]
public class ScriptableObject : Object
{
	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x4AD6D60", Offset = "0x4AD6D60", VA = "0x4AD6D60")]
	public ScriptableObject()
	{
	}

	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x4AD6E00", Offset = "0x4AD6E00", VA = "0x4AD6E00")]
	public static ScriptableObject CreateInstance(string className)
	{
		return null;
	}

	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x4AD6E60", Offset = "0x4AD6E60", VA = "0x4AD6E60")]
	public static ScriptableObject CreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000ACB")]
	public static T CreateInstance<T>() where T : ScriptableObject
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x4AD6DD0", Offset = "0x4AD6DD0", VA = "0x4AD6DD0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern void CreateScriptableObject([UnityEngine.Writable] ScriptableObject self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x4AD6E30", Offset = "0x4AD6E30", VA = "0x4AD6E30")]
	[UnityEngine.Bindings.FreeFunction("Scripting::CreateScriptableObject")]
	private static extern ScriptableObject CreateScriptableObjectInstanceFromName(string className);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ACE")]
	[Address(RVA = "0x4AD6EA0", Offset = "0x4AD6EA0", VA = "0x4AD6EA0")]
	[UnityEngine.Bindings.NativeMethod(Name = "Scripting::CreateScriptableObjectWithType", IsFreeFunction = true, ThrowsException = true)]
	internal static extern ScriptableObject CreateScriptableObjectInstanceFromType(Type type, bool applyDefaultsAndReset);
}
