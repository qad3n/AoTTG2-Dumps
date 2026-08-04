// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ScriptableObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000179")]
[ExtensionOfNativeClass]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/MonoBehaviour.h")]
[UnityEngine.NativeClass(null)]
[UnityEngine.Scripting.RequiredByNativeCode]
public class ScriptableObject : Object
{
	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x4DFE690", Offset = "0x4DFE690", VA = "0x4DFE690")]
	public ScriptableObject()
	{
	}

	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x4DFE730", Offset = "0x4DFE730", VA = "0x4DFE730")]
	public static ScriptableObject CreateInstance(string className)
	{
		return null;
	}

	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x4DFE790", Offset = "0x4DFE790", VA = "0x4DFE790")]
	public static ScriptableObject CreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000ACD")]
	public static T CreateInstance<T>() where T : ScriptableObject
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ACE")]
	[Address(RVA = "0x4DFE700", Offset = "0x4DFE700", VA = "0x4DFE700")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern void CreateScriptableObject([UnityEngine.Writable] ScriptableObject self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x4DFE760", Offset = "0x4DFE760", VA = "0x4DFE760")]
	[UnityEngine.Bindings.FreeFunction("Scripting::CreateScriptableObject")]
	private static extern ScriptableObject CreateScriptableObjectInstanceFromName(string className);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AD0")]
	[Address(RVA = "0x4DFE7D0", Offset = "0x4DFE7D0", VA = "0x4DFE7D0")]
	[UnityEngine.Bindings.NativeMethod(Name = "Scripting::CreateScriptableObjectWithType", IsFreeFunction = true, ThrowsException = true)]
	internal static extern ScriptableObject CreateScriptableObjectInstanceFromType(Type type, bool applyDefaultsAndReset);
}
