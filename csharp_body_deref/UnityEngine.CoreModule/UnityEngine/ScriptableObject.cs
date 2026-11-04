// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ScriptableObject
// Update status: CHANGED in this game update
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
[Token(Token = "0x20001AE")]
[UnityEngine.Scripting.RequiredByNativeCode]
[ExtensionOfNativeClass]
[UnityEngine.NativeClass(null)]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/MonoBehaviour.h")]
public class ScriptableObject : Object
{
	[Token(Token = "0x6000E21")]
	[Address(RVA = "0x2F26A80", Offset = "0x2F25080", VA = "0x182F26A80")]
	public ScriptableObject()
	{
	}

	[Token(Token = "0x6000E22")]
	[Address(RVA = "0x2F266F0", Offset = "0x2F24CF0", VA = "0x182F266F0")]
	public static ScriptableObject CreateInstance(string className)
	{
		return null;
	}

	[Token(Token = "0x6000E23")]
	[Address(RVA = "0x2F26700", Offset = "0x2F24D00", VA = "0x182F26700")]
	public static ScriptableObject CreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E24")]
	public static T CreateInstance<T>() where T : ScriptableObject
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E25")]
	[Address(RVA = "0x2F26A40", Offset = "0x2F25040", VA = "0x182F26A40")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	private static extern void CreateScriptableObject([UnityEngine.Writable] ScriptableObject self);

	[Token(Token = "0x6000E26")]
	[Address(RVA = "0x2F267A0", Offset = "0x2F24DA0", VA = "0x182F267A0")]
	[UnityEngine.Bindings.FreeFunction("Scripting::CreateScriptableObject")]
	private static ScriptableObject CreateScriptableObjectInstanceFromName(string className)
	{
		return null;
	}

	[Token(Token = "0x6000E27")]
	[Address(RVA = "0x2F269D0", Offset = "0x2F24FD0", VA = "0x182F269D0")]
	[UnityEngine.Bindings.NativeMethod(Name = "Scripting::CreateScriptableObjectWithType", IsFreeFunction = true, ThrowsException = true)]
	internal static ScriptableObject CreateScriptableObjectInstanceFromType(Type type, bool applyDefaultsAndReset)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E28")]
	[Address(RVA = "0x2F26760", Offset = "0x2F24D60", VA = "0x182F26760")]
	private static extern IntPtr CreateScriptableObjectInstanceFromName_Injected(ref ManagedSpanWrapper className);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E29")]
	[Address(RVA = "0x2F26980", Offset = "0x2F24F80", VA = "0x182F26980")]
	private static extern IntPtr CreateScriptableObjectInstanceFromType_Injected(Type type, bool applyDefaultsAndReset);
}
