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
[Token(Token = "0x20001AF")]
[UnityEngine.NativeClass(null)]
[UnityEngine.Scripting.RequiredByNativeCode]
[ExtensionOfNativeClass]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/MonoBehaviour.h")]
public class ScriptableObject : Object
{
	[Token(Token = "0x6000E33")]
	[Address(RVA = "0x691D3F0", Offset = "0x691C3F0", VA = "0x691D3F0")]
	public ScriptableObject()
	{
	}

	[Token(Token = "0x6000E34")]
	[Address(RVA = "0x691D490", Offset = "0x691C490", VA = "0x691D490")]
	public static ScriptableObject CreateInstance(string className)
	{
		return null;
	}

	[Token(Token = "0x6000E35")]
	[Address(RVA = "0x691D6A0", Offset = "0x691C6A0", VA = "0x691D6A0")]
	public static ScriptableObject CreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E36")]
	public static T CreateInstance<T>() where T : ScriptableObject
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E37")]
	[Address(RVA = "0x691D460", Offset = "0x691C460", VA = "0x691D460")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true, ThrowsException = true)]
	private static extern void CreateScriptableObject([UnityEngine.Writable] ScriptableObject self);

	[Token(Token = "0x6000E38")]
	[Address(RVA = "0x691D4A0", Offset = "0x691C4A0", VA = "0x691D4A0")]
	[UnityEngine.Bindings.FreeFunction("Scripting::CreateScriptableObject")]
	private static ScriptableObject CreateScriptableObjectInstanceFromName(string className)
	{
		return null;
	}

	[Token(Token = "0x6000E39")]
	[Address(RVA = "0x691D700", Offset = "0x691C700", VA = "0x691D700")]
	[UnityEngine.Bindings.NativeMethod(Name = "Scripting::CreateScriptableObjectWithType", IsFreeFunction = true, ThrowsException = true)]
	internal static ScriptableObject CreateScriptableObjectInstanceFromType(Type type, bool applyDefaultsAndReset)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E3A")]
	[Address(RVA = "0x691D770", Offset = "0x691C770", VA = "0x691D770")]
	private static extern IntPtr CreateScriptableObjectInstanceFromName_Injected(ref ManagedSpanWrapper className);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E3B")]
	[Address(RVA = "0x691D7A0", Offset = "0x691C7A0", VA = "0x691D7A0")]
	private static extern IntPtr CreateScriptableObjectInstanceFromType_Injected(Type type, bool applyDefaultsAndReset);
}
